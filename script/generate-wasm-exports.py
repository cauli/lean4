#!/usr/bin/env python3
# Copyright (c) 2026 cauli. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
"""Intersect Lean declaration metadata with the symbols in the actual WASM archives."""

import argparse
import json
import subprocess
from pathlib import Path


def parse_nm(output, kinds=frozenset({"T", "D", "B", "R", "W", "V"})):
    return {parts[0] for line in output.splitlines()
            if len(parts := line.split()) >= 2
            and parts[1] in kinds}


def select_exports(symbols, candidates):
    if not {"main", "__main_argc_argv"}.intersection(symbols):
        raise ValueError("missing browser entry point: main")
    for required in ("lean_wasm_compile", "lean_mk_string"):
        if required not in symbols:
            raise ValueError(f"missing browser entry point: {required}")
    common = {s for s in symbols if s.startswith(
        ("lean_", "initialize_", "runtime_initialize_", "meta_initialize_"))}
    common.update(symbols.intersection(candidates))
    common.update({"main", "malloc", "free"})
    boxed = {s for s in symbols if s.startswith(("l_", "lp_")) and s.endswith("___boxed")}
    return (sorted("_" + s for s in common),
            sorted("_" + s for s in common | boxed))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--nm", required=True)
    parser.add_argument("--candidates", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("archives", nargs="+", type=Path)
    args = parser.parse_args()
    output = subprocess.check_output(
        [args.nm, "--defined-only", "--extern-only", "--format=posix",
         *map(str, args.archives)], text=True)
    candidates = json.loads(args.candidates.read_text())
    if not isinstance(candidates, list) or not all(isinstance(s, str) for s in candidates):
        raise ValueError("expected a JSON array of candidate symbol names")
    # The interpreter loads native constants by address. Reinterpreting their
    # initializer can duplicate state or overflow the browser's call stack.
    candidates.extend(s for s in parse_nm(output, {"D", "B", "R", "V"})
                      if s.startswith(("l_", "lp_")))
    slim, full = select_exports(parse_nm(output), candidates)
    args.output.mkdir(parents=True, exist_ok=True)
    for name, names in (("emscripten-exports.txt", full), ("emscripten-exports-slim.txt", slim)):
        target = args.output / name
        content = "\n".join(names) + "\n"
        if not target.exists() or target.read_text() != content:
            target.write_text(content)
    print(f"WASM exports: {len(full)} full, {len(slim)} slim")


if __name__ == "__main__":
    main()
