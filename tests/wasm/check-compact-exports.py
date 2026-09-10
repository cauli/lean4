"""Check compact export assignment with the default Emscripten dynamic linker."""
import argparse
import json
import re
import subprocess
import tempfile
from pathlib import Path

FULL_SIZE_RANGE = (64 * 1024, 1024 * 1024)
SLIM_SIZE_RANGE = (1024 * 1024, 32 * 1024 * 1024)
COMPACT_ASSIGNMENT = re.compile(
    rb"var\s+assignWasmExports\s*=\s*wasmExports\s*=>\s*\{\s*for\s*\("
    rb"var\s*\[name,\s*exportedSymbol\]\s*of\s+Object\.entries\(wasmExports\)\)")
GLOBAL_ASSIGNMENT = re.compile(rb"globalThis\[name\]\s*=\s*Module\[name\]\s*=\s*exportedSymbol")
CLASSIC_ASSIGNMENT = re.compile(rb"function\s+assignWasmExports\(wasmExports\)\s*\{")


def check_built_outputs(full_js, slim_js):
    checked = {}
    for variant, path, bounds in (("full", full_js, FULL_SIZE_RANGE),
                                  ("slim", slim_js, SLIM_SIZE_RANGE)):
        size = path.stat().st_size
        if not bounds[0] <= size <= bounds[1]:
            raise ValueError(f"{variant} JS size {size} is outside pinned-SDK bounds {bounds}")
        source = path.read_bytes()
        compact = bool(COMPACT_ASSIGNMENT.search(source) and GLOBAL_ASSIGNMENT.search(source))
        classic = bool(CLASSIC_ASSIGNMENT.search(source))
        if variant == "full" and (not compact or classic):
            raise ValueError("full JS must use compact export assignment")
        if variant == "slim" and (not classic or compact):
            raise ValueError("slim JS must use classic export assignment")
        if variant == "slim" and b'Module["_lean_wasm_compile"]' not in source:
            raise ValueError("slim JS is missing the persistent compile export")
        checked[variant] = {"path": str(path), "bytes": size,
                            "assignment": "compact" if compact else "classic"}
    return checked

SOURCE = r"""
#include <assert.h>
#include <dlfcn.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <emscripten/emscripten.h>

EMSCRIPTEN_KEEPALIVE int value(void) { return 43; }
EMSCRIPTEN_KEEPALIVE uint64_t wide_value(void) { return UINT64_C(0x100000002); }
EMSCRIPTEN_KEEPALIVE int data = 11;
static int (*function)(void);
static double (*clock_function)(void);
static void *check_thread(void *unused) {
    (void)unused;
    assert(function() == 43);
    assert(clock_function() > 0);
    assert(((uint64_t (*)(void))dlsym(RTLD_DEFAULT, "wide_value"))() == UINT64_C(0x100000002));
    return NULL;
}
int main(void) {
    assert(emscripten_get_now() > 0);
    function = (int (*)(void))dlsym(RTLD_DEFAULT, "value");
    clock_function = (double (*)(void))dlsym(RTLD_DEFAULT, "emscripten_get_now");
    assert(function && function() == 43);
    assert(clock_function && clock_function() > 0);
    assert(*(int *)dlsym(RTLD_DEFAULT, "data") == 11);
    assert(dlsym(RTLD_DEFAULT, "missing_compact_symbol") == NULL);
    assert(dlerror() != NULL);
    assert(dlsym(RTLD_DEFAULT, "toString") == NULL);
    assert(dlerror() != NULL);
    pthread_t thread;
    assert(pthread_create(&thread, NULL, check_thread, NULL) == 0);
    assert(pthread_join(thread, NULL) == 0);
    puts("compact export dlsym probe passed");
    return 0;
}
"""


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check-built", action="store_true", help="inspect existing JS without running any compiler")
    parser.add_argument("--full-js", type=Path)
    parser.add_argument("--slim-js", type=Path)
    args = parser.parse_args()
    if args.check_built:
        if args.full_js is None or args.slim_js is None:
            parser.error("--check-built requires --full-js and --slim-js")
        print(json.dumps(check_built_outputs(args.full_js, args.slim_js)))
        return
    if args.full_js is not None or args.slim_js is not None:
        parser.error("--full-js and --slim-js require --check-built")
    version = subprocess.check_output(["emcc", "--version"], text=True, timeout=10)
    if not re.search(r"\b4\.0\.22(?:\s|$)", version.splitlines()[0]):
        raise SystemExit("This probe requires the CI SDK, Emscripten 4.0.22")
    print(version.splitlines()[0], flush=True)
    with tempfile.TemporaryDirectory(prefix="lean-compact-dlsym-") as temporary:
        work = Path(temporary)
        source = work / "probe.c"
        source.write_text(SOURCE)
        for declarations in ("1", "0"):
            for bigint in ("1", "0"):
                output = work / f"probe-{declarations}-{bigint}.js"
                subprocess.run([
                    "emcc", str(source), "-O2", "-pthread", "-sDISABLE_EXCEPTION_CATCHING=0",
                    "-sMAIN_MODULE=2", "-sPTHREAD_POOL_SIZE=4", "-sEXIT_RUNTIME=1",
                    "-sASSERTIONS=1", f"-sWASM_BIGINT={bigint}",
                    f"-sDECLARE_ASM_MODULE_EXPORTS={declarations}", "-o", str(output),
                ], check=True, timeout=120)
                result = subprocess.run(["node", str(output)], cwd=work,
                                        text=True, capture_output=True, timeout=30)
                if result.returncode or "compact export dlsym probe passed" not in result.stdout:
                    raise RuntimeError(f"declarations={declarations}, bigint={bigint}:\n"
                                       f"{result.stdout}\n{result.stderr}")
                print(f"default dlsym passed: declarations={declarations}, bigint={bigint}", flush=True)


if __name__ == "__main__":
    main()
