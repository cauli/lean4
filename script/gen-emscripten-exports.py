#!/usr/bin/env python3
# Copyright (c) 2026 cauli. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
"""Write the Emscripten export lists for the `lean` wasm binary.

The binary is linked with MAIN_MODULE=2 and an explicit export list instead of
EXPORT_ALL, so that wasm-ld can drop code nothing reaches.  The list names what
must stay reachable through `dlsym(RTLD_DEFAULT)`, which searches the wasm
export table:

* `main`, `malloc`, `free`, and every `lean_*` function: the C runtime API, the
  `@[export lean_*]` Lean functions, and the entry points the browser workers
  call (`lean_wasm_compile`, ...).
* `emscripten_runtime_keepalive_push`, which a host that never runs `main()`
  calls once after boot (see the EXIT_RUNTIME note in src/CMakeLists.txt).
* every module initializer, `initialize_<M>`, and its phase variants
  `runtime_initialize_<M>` and `meta_initialize_<M>`: `runModInitCore`
  resolves these by name, and falls back to replaying a module's `[init]`
  attributes interpreted when one is missing, which re-registers what the
  binary already registered at boot.
* every `l_*` data symbol: the cells holding the values of closed terms and of
  `initialize` declarations, which the interpreter reads instead of recomputing.
* `l_*___boxed` wrappers: the interpreter's native-dispatch contract (it looks
  up `l_<stem>___boxed` first for every call).  The full list exports all of
  them, which keeps interpreting external packages shallow enough for a
  browser's JS stack.  The slim list, for devices that cannot compile a binary
  with ~90k exports, keeps only the wrappers whose unboxed `l_<stem>` function
  does not exist: those of `@[extern]` and `@[export]` declarations, whose
  native code lives under another name and which have no IR to fall back on.

Everything is read from the static libraries the link uses, so the lists always
match the build they are linked into.

Usage:
  gen-emscripten-exports.py --nm <llvm-nm> --full <out> [--slim <out>] <lib.a>...
"""

import argparse
import os
import subprocess
import sys


def symbols(nm, archives):
    """{name: kind} for the external symbols the archives define, where kind is
    'func' or 'data'."""
    out = subprocess.run([nm, "--defined-only", "--extern-only", "--format=posix", *archives],
                         capture_output=True, text=True, check=True).stdout
    syms = {}
    for line in out.splitlines():
        parts = line.split()
        # "name type [value size]"; archive member headers end with ':'.
        if len(parts) < 2 or parts[0].endswith(":") or parts[0].endswith("]:"):
            continue
        name, kind = parts[0], parts[1]
        if kind in "TW":
            syms.setdefault(name, "func")
        elif kind in "DBRVSC":
            # Data, bss, read-only, weak object, other-section, common: object
            # formats label the same cells differently.
            syms.setdefault(name, "data")
    return syms


INIT_PREFIXES = ("initialize_", "runtime_initialize_", "meta_initialize_")


def export_lists(syms):
    # Emscripten's libc defines these, so they are not in Lean's archives.
    base = {"main", "malloc", "free", "emscripten_runtime_keepalive_push"}
    boxed, slim_boxed = set(), set()
    for name, kind in syms.items():
        if kind == "func" and name.startswith("lean_"):
            base.add(name)
        elif kind == "func" and name.startswith(INIT_PREFIXES):
            base.add(name)
        elif kind == "data" and name.startswith("l_"):
            base.add(name)
        elif kind == "func" and name.startswith("l_") and name.endswith("___boxed"):
            boxed.add(name)
            if syms.get(name[: -len("___boxed")]) != "func":
                slim_boxed.add(name)
    return base | boxed, base | slim_boxed


def write(path, names):
    with open(path, "w") as f:
        for name in sorted(names):
            f.write("_" + name + "\n")


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("--nm", required=True)
    ap.add_argument("--full", required=True)
    ap.add_argument("--slim")
    ap.add_argument("archives", nargs="+")
    args = ap.parse_args()
    missing = [a for a in args.archives if not os.path.isfile(a)]
    if missing:
        sys.exit(f"gen-emscripten-exports: no such archive: {', '.join(missing)}")
    full, slim = export_lists(symbols(args.nm, args.archives))
    write(args.full, full)
    if args.slim:
        write(args.slim, slim)
    print(f"{args.full}: {len(full)} exports" + (f"; {args.slim}: {len(slim)}" if args.slim else ""),
          file=sys.stderr)


if __name__ == "__main__":
    main()
