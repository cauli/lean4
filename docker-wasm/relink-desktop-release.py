#!/usr/bin/env python3
# Copyright (c) 2026 cauli. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.

"""Relink only the validated full desktop kit; never rebuild Lean or publish assets."""

import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys

MANIFEST = "docker-wasm/desktop-release-62b6a22.json"
RECIPE_FILES = [MANIFEST, "docker-wasm/relink-desktop-release.py", "docker-wasm/relink-local.sh"]


class ReleaseError(RuntimeError):
    pass


def file_record(path):
    if path.is_symlink() or not path.is_file():
        raise ReleaseError(f"Expected a regular file: {path}")
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)
    return {"bytes": path.stat().st_size, "sha256": digest.hexdigest()}


def load_manifest(repo):
    manifest = json.loads((repo / MANIFEST).read_text())
    if manifest.get("schema_version") != 1:
        raise ReleaseError("Unsupported release manifest schema")
    return manifest


def verify_files(directory, entries):
    for name, expected in entries.items():
        if file_record(directory / name) != expected:
            raise ReleaseError(f"Pinned input/output mismatch: {directory / name}")


def verify_inputs(repo, kit, manifest):
    verify_files(repo, manifest["recipe_inputs"])
    verify_files(kit, manifest["kit_files"])
    if (kit / "githash.txt").read_text().strip() != manifest["runtime_git_sha"]:
        raise ReleaseError("Kit runtime commit does not match the validated release")
    exports = (repo / "src/emscripten-exports.txt").read_text().splitlines()
    if len(exports) != manifest["export_count"] or len(set(exports)) != len(exports):
        raise ReleaseError("Canonical export count mismatch or duplicate symbols")
    # 🤖 The generic linker searches this directory before the SDK libraries.
    for path in kit.iterdir():
        if path.name not in manifest["kit_files"] and path.suffix in {".a", ".so", ".js", ".bc", ".o"}:
            raise ReleaseError(f"Unpinned linker input in kit: {path}")


def verify_sdk_version(version):
    first_line = version.splitlines()[0] if version else ""
    if not re.match(r"^emcc .*\) 4\.0\.22(?: \(|$)", first_line):
        raise ReleaseError(f"Emscripten 4.0.22 required; found: {first_line!r}")


def git_output(repo, *args):
    return subprocess.check_output(["git", "-C", str(repo), *args], text=True).strip()


def recipe_revision(repo, require_clean=False):
    sha = git_output(repo, "rev-parse", "HEAD")
    dirty = bool(git_output(repo, "status", "--porcelain", "--untracked-files=normal"))
    if dirty and require_clean:
        raise ReleaseError("Release linking requires a clean, committed recipe worktree")
    return {"git_sha": sha, "dirty": dirty}


def require_new_output(output):
    if output.exists() or output.is_symlink():
        raise ReleaseError(f"Output must be a new directory: {output}")


def require_ignored_or_external_output(repo, output):
    try:
        relative = output.resolve().relative_to(repo.resolve())
    except ValueError:
        return
    result = subprocess.run(
        ["git", "-C", str(repo), "check-ignore", "--quiet", "--", str(relative)],
        check=False,
    )
    if result.returncode != 0:
        raise ReleaseError("Output inside the recipe worktree must be Git-ignored; use build/ or an external directory")


def link_command(repo, kit, output):
    return [
        "bash", str(repo / "docker-wasm/relink-local.sh"), str(kit), str(output),
        "-O3", f"-sEXPORTED_FUNCTIONS=@{repo / 'src/emscripten-exports.txt'}",
        "--js-library", str(repo / "src/wasm-dlsym.js"),
        "-sDECLARE_ASM_MODULE_EXPORTS=0",
    ]


def verify_outputs(output, manifest):
    verify_files(output, manifest["outputs"])


def write_json(path, value):
    path.write_text(json.dumps(value, indent=2, sort_keys=True) + "\n")


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("kit", type=Path, help="unpacked, unchanged linkkit-62b6a22/linkkit")
    parser.add_argument("output", type=Path, nargs="?", help="new directory for lean.js and lean.wasm")
    parser.add_argument("--check-inputs", action="store_true", help="verify pinned bytes only; no SDK or link")
    args = parser.parse_args(argv)
    if args.check_inputs and args.output is not None:
        parser.error("--check-inputs does not take an output directory")
    if not args.check_inputs and args.output is None:
        parser.error("output directory required unless --check-inputs is set")
    repo = Path(__file__).resolve().parents[1]
    kit = args.kit.resolve()
    manifest = load_manifest(repo)
    if args.output is not None:
        require_new_output(args.output)
        require_ignored_or_external_output(repo, args.output)
    verify_inputs(repo, kit, manifest)
    revision = recipe_revision(repo, require_clean=not args.check_inputs)
    if args.check_inputs:
        print(json.dumps({"inputs_verified": True, "runtime_git_sha": manifest["runtime_git_sha"],
                          "recipe": revision}, indent=2))
        return 0

    for name in ("EMCC_CFLAGS", "EMMAKEN_CFLAGS", "EMCC_FORCE_STDLIBS", "EMCC_ONLY_FORCED_STDLIBS"):
        if os.environ.get(name):
            raise ReleaseError(f"Unset link-affecting environment override {name}")
    emcc = shutil.which("emcc")
    if not emcc:
        raise ReleaseError("Activate Emscripten SDK 4.0.22 first (emcc is not on PATH)")
    version = subprocess.check_output([emcc, "--version"], text=True)
    verify_sdk_version(version)
    output = args.output.absolute()
    command = link_command(repo, kit, output)
    environment = os.environ.copy()
    environment["NODE_OPTIONS"] = "--max-old-space-size=8192"
    recipe_files = {name: file_record(repo / name) for name in RECIPE_FILES}
    provenance = {
        "schema_version": 1,
        "release": manifest["release"],
        "runtime_git_sha": manifest["runtime_git_sha"],
        "recipe": revision,
        "recipe_files": recipe_files,
        "inputs": manifest,
        "emcc": emcc,
        "emcc_version": version,
        "command": command,
        "NODE_OPTIONS": environment["NODE_OPTIONS"],
        "outputs_verified": False,
    }
    output.mkdir(parents=True, exist_ok=False)
    write_json(output / "link-provenance.json", provenance)
    subprocess.run(command, env=environment, check=True)
    verify_inputs(repo, kit, manifest)
    verify_files(repo, recipe_files)
    if recipe_revision(repo, require_clean=True) != revision:
        raise ReleaseError("Recipe checkout changed during linking")
    verify_outputs(output, manifest)
    provenance["outputs_verified"] = True
    write_json(output / "release-provenance.json", provenance)
    print(f"Verified exact compact release bytes in {output}")
    print("No assets published. Keep the matching 62b6a22 library bundle; do not substitute fresh oleans.")
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except (ReleaseError, OSError, ValueError, subprocess.CalledProcessError) as error:
        print(f"Release refused: {error}", file=sys.stderr)
        sys.exit(1)
