"""Lightweight guards for the pinned desktop relink; no compiler or browser required."""

import hashlib
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[2]
SPEC = importlib.util.spec_from_file_location(
    "desktop_release", ROOT / "docker-wasm/relink-desktop-release.py"
)
release = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(release)


class ReleaseGuards(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.base = Path(self.temp.name)
        self.kit = self.base / "kit with spaces"
        self.repo = self.base / "recipe with spaces"
        self.kit.mkdir()
        self.repo.mkdir()
        self.manifest = {
            "runtime_git_sha": "62b6a2291302d4bbeace37642a066b7510d0145c",
            "emscripten_version": "4.0.22",
            "export_count": 2,
            "kit_files": {},
            "recipe_inputs": {},
            "outputs": {},
        }
        self.add_file("githash.txt", self.manifest["runtime_git_sha"] + "\n")
        self.add_file("libleanmain.a", "test archive")
        self.add_file("emscripten-exports.txt", "_small\n")
        self.add_file("src/emscripten-exports.txt", "_one\n_two\n", recipe=True)
        self.add_file("src/wasm-dlsym.js", "adapter", recipe=True)

    def add_file(self, name, content, recipe=False):
        target = (self.repo if recipe else self.kit) / name
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(content)
        entry = {"sha256": hashlib.sha256(content.encode()).hexdigest(),
                 "bytes": len(content.encode())}
        self.manifest["recipe_inputs" if recipe else "kit_files"][name] = entry
        return target

    def verify(self):
        release.verify_inputs(self.repo, self.kit, self.manifest)

    def test_valid_inputs_with_spaces(self):
        self.verify()

    def test_changed_archive_is_rejected(self):
        (self.kit / "libleanmain.a").write_text("different")
        with self.assertRaisesRegex(release.ReleaseError, "libleanmain.a"):
            self.verify()

    def test_missing_archive_is_rejected(self):
        (self.kit / "libleanmain.a").unlink()
        with self.assertRaisesRegex(release.ReleaseError, "libleanmain.a"):
            self.verify()

    def test_changed_adapter_is_rejected(self):
        (self.repo / "src/wasm-dlsym.js").write_text("replacement")
        with self.assertRaisesRegex(release.ReleaseError, "wasm-dlsym.js"):
            self.verify()

    def test_subset_cannot_replace_canonical_exports(self):
        (self.repo / "src/emscripten-exports.txt").write_text("_small\n")
        with self.assertRaisesRegex(release.ReleaseError, "emscripten-exports.txt"):
            self.verify()

    def test_new_runtime_cannot_be_relabelled(self):
        self.add_file("githash.txt", "a" * 40 + "\n")
        with self.assertRaisesRegex(release.ReleaseError, "runtime"):
            self.verify()

    def test_export_count_is_checked(self):
        self.manifest["export_count"] = 3
        with self.assertRaisesRegex(release.ReleaseError, "export count"):
            self.verify()

    def test_unpinned_linker_input_is_rejected(self):
        (self.kit / "libstdc++.a").write_text("injected")
        with self.assertRaisesRegex(release.ReleaseError, "Unpinned"):
            self.verify()

    def test_symlink_input_is_rejected(self):
        archive = self.kit / "libleanmain.a"
        archive.rename(self.base / "archive")
        archive.symlink_to(self.base / "archive")
        with self.assertRaisesRegex(release.ReleaseError, "regular file"):
            self.verify()

    def test_exact_sdk_version(self):
        release.verify_sdk_version("emcc (Emscripten gcc/clang-like replacement) 4.0.22 (abc)\n")
        for version in ["4.0.220", "6.0.0", "4.0.21", "4.0.22-custom"]:
            with self.subTest(version=version), self.assertRaises(release.ReleaseError):
                release.verify_sdk_version(f"emcc (Emscripten gcc/clang-like replacement) {version} (abc)")

    def test_release_argv_uses_versioned_full_inputs(self):
        command = release.link_command(self.repo, self.kit, self.base / "out with spaces")
        self.assertEqual(command[:2], ["bash", str(self.repo / "docker-wasm/relink-local.sh")])
        self.assertIn("-O3", command)
        self.assertIn("-sDECLARE_ASM_MODULE_EXPORTS=0", command)
        self.assertIn(f"-sEXPORTED_FUNCTIONS=@{self.repo / 'src/emscripten-exports.txt'}", command)
        self.assertEqual(command[command.index("--js-library") + 1], str(self.repo / "src/wasm-dlsym.js"))

    def test_mismatched_output_is_rejected(self):
        output = self.base / "output"
        output.mkdir()
        (output / "lean.js").write_text("wrong")
        self.manifest["outputs"]["lean.js"] = {"sha256": "0" * 64, "bytes": 5}
        with self.assertRaisesRegex(release.ReleaseError, "lean.js"):
            release.verify_outputs(output, self.manifest)

    def test_existing_output_is_never_reused(self):
        output = self.base / "existing"
        output.mkdir()
        with self.assertRaisesRegex(release.ReleaseError, "new directory"):
            release.require_new_output(output)

    def test_dangling_output_symlink_is_rejected(self):
        output = self.base / "link"
        output.symlink_to(self.base / "missing")
        with self.assertRaisesRegex(release.ReleaseError, "new directory"):
            release.require_new_output(output)

    def test_unignored_output_is_rejected_before_linking(self):
        release.subprocess.run(["git", "-C", str(self.repo), "init", "--quiet"], check=True)
        (self.repo / ".gitignore").write_text("/build/\n")
        release.require_ignored_or_external_output(self.repo, self.repo / "build/bin")
        release.require_ignored_or_external_output(self.repo, self.base / "external/bin")
        with self.assertRaisesRegex(release.ReleaseError, "Git-ignored"):
            release.require_ignored_or_external_output(self.repo, self.repo / "release-output/bin")

    def test_release_rejects_dirty_recipe(self):
        with patch.object(release, "git_output", side_effect=["a" * 40, " M src/CMakeLists.txt"]):
            with self.assertRaisesRegex(release.ReleaseError, "clean"):
                release.recipe_revision(self.repo, require_clean=True)

    def prepare_mock_link(self):
        self.manifest.update(schema_version=1, release="test-release")
        for name in release.RECIPE_FILES:
            target = self.repo / name
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_text("test recipe")
        self.manifest["outputs"] = {
            "lean.js": {"bytes": 4, "sha256": hashlib.sha256(b"glue").hexdigest()},
            "lean.wasm": {"bytes": 4, "sha256": hashlib.sha256(b"wasm").hexdigest()},
        }
        self.revision = {"git_sha": "b" * 40, "dirty": False}
        patches = [
            patch.object(release, "__file__", str(self.repo / "docker-wasm/relink-desktop-release.py")),
            patch.object(release, "load_manifest", return_value=self.manifest),
            patch.object(release, "recipe_revision", return_value=self.revision),
            patch.object(release.shutil, "which", return_value="/sdk/emcc"),
            patch.object(release.subprocess, "check_output", return_value="emcc (Emscripten) 4.0.22 (hash)"),
            patch.dict(release.os.environ, {}, clear=True),
        ]
        for context in patches:
            context.start()
            self.addCleanup(context.stop)
        return self.base / "mock-output"

    def test_complete_recipe_records_distinct_runtime_and_recipe(self):
        output = self.prepare_mock_link()

        def fake_link(command, env, check):
            self.assertEqual(env["NODE_OPTIONS"], "--max-old-space-size=8192")
            self.assertTrue(check)
            (output / "lean.js").write_bytes(b"glue")
            (output / "lean.wasm").write_bytes(b"wasm")

        with patch.object(release.subprocess, "run", side_effect=fake_link):
            self.assertEqual(release.main([str(self.kit), str(output)]), 0)
        provenance = json.loads((output / "release-provenance.json").read_text())
        self.assertTrue(provenance["outputs_verified"])
        self.assertEqual(provenance["recipe"], self.revision)
        self.assertNotEqual(provenance["runtime_git_sha"], self.revision["git_sha"])

    def test_failed_link_never_writes_release_provenance(self):
        output = self.prepare_mock_link()
        with patch.object(release.subprocess, "run", side_effect=release.subprocess.CalledProcessError(1, "emcc")):
            with self.assertRaises(release.subprocess.CalledProcessError):
                release.main([str(self.kit), str(output)])
        self.assertTrue((output / "link-provenance.json").exists())
        self.assertFalse((output / "release-provenance.json").exists())

    def test_wrong_link_output_never_writes_release_provenance(self):
        output = self.prepare_mock_link()
        with patch.object(release.subprocess, "run"):
            with self.assertRaises(release.ReleaseError):
                release.main([str(self.kit), str(output)])
        self.assertFalse((output / "release-provenance.json").exists())

    def test_environment_cannot_override_release_flags(self):
        output = self.prepare_mock_link()
        with patch.dict(release.os.environ, {"EMCC_CFLAGS": "-O0"}):
            with self.assertRaisesRegex(release.ReleaseError, "EMCC_CFLAGS"):
                release.main([str(self.kit), str(output)])
        self.assertFalse(output.exists())

    def test_input_check_never_calls_sdk_or_linker(self):
        self.prepare_mock_link()
        with patch.object(release.subprocess, "check_output") as sdk, patch.object(release.subprocess, "run") as linker:
            self.assertEqual(release.main([str(self.kit), "--check-inputs"]), 0)
            sdk.assert_not_called()
            linker.assert_not_called()

    def test_real_versioned_inputs_match_recorded_release(self):
        manifest = release.load_manifest(ROOT)
        release.verify_files(ROOT, manifest["recipe_inputs"])
        self.assertEqual(manifest["export_count"], 104677)
        self.assertEqual(manifest["runtime_git_sha"], "62b6a2291302d4bbeace37642a066b7510d0145c")
        self.assertEqual(manifest["recipe_inputs"]["src/wasm-dlsym.js"]["sha256"],
                         "264f000882cad81e4ed3484a0e3c545d7b533ae9ca06e34041b730afeb699da7")

    def test_generic_relink_remains_noncompact_by_default(self):
        generic = (ROOT / "docker-wasm/relink-local.sh").read_text()
        self.assertNotIn("DECLARE_ASM_MODULE_EXPORTS", generic)
        for flag in ["DISABLE_EXCEPTION_CATCHING=0", "-pthread", "MAIN_MODULE=2",
                     "PTHREAD_POOL_SIZE=4", "STACK_SIZE=16777216", "INITIAL_MEMORY=67108864",
                     "MAXIMUM_MEMORY=4294967296"]:
            self.assertIn(flag, generic)

    def test_full_build_configs_opt_in(self):
        for file in [".github/workflows/ci.yml", "docker-wasm/build.sh"]:
            text = (ROOT / file).read_text()
            self.assertIn("-DEMSCRIPTEN_COMPACT_EXPORTS=ON", text)
            self.assertIn("-DEMSCRIPTEN_DEBUG=OFF", text)
            self.assertIn("-DUSE_MIMALLOC=OFF", text)
        self.assertIn("--js-library", (ROOT / "src/CMakeLists.txt").read_text())


if __name__ == "__main__":
    unittest.main()
