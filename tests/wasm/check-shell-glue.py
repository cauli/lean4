"""Compile and run the shell's actual EM_ASM block before building Lean."""
import argparse
import os
import subprocess
import tempfile
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("--source", type=Path, default=Path(__file__).resolve().parents[2] / "src/util/shell.cpp")
args = parser.parse_args()
source = args.source.read_text()
start = source.index("    EM_ASM({")
end = source.index("\n    });", start) + len("\n    });")
body = source[start:end]

with tempfile.TemporaryDirectory(prefix="lean-shell-glue-", dir="/tmp") as temporary:
    root = Path(temporary)
    cpp = root / "probe.cpp"
    js = root / "probe.js"
    cpp.write_text('#include <emscripten.h>\nint main() {\n' + body + '''
    EM_ASM({
        console.log("cwd: " + FS.cwd());
        console.log("lean-path: " + ENV["LEAN_PATH"]);
    });
    return 0;
}
''')
    subprocess.run([
        "em++", str(cpp), "-o", str(js), "-O3", "-lnodefs.js", "-sASSERTIONS=1",
        "-sALLOW_MEMORY_GROWTH=1", "-sMAXIMUM_MEMORY=4294967296",
        "-sEXPORTED_RUNTIME_METHODS=FS,ENV", "-sFORCE_FILESYSTEM=1",
    ], check=True, timeout=120)
    result = subprocess.run(
        ["node", str(js)], cwd=root, env={**os.environ, "LEAN_PATH": "/tmp/shell-glue-library"},
        text=True, capture_output=True, timeout=30)
    if result.returncode:
        raise SystemExit(f"shell probe exited {result.returncode}: {result.stderr[-4000:]}")
    expected = f"cwd: {temporary}\nlean-path: /tmp/shell-glue-library\n"
    if result.stdout != expected:
        raise SystemExit(f"unexpected shell setup: {result.stdout!r}, stderr: {result.stderr!r}")
print("Emscripten shell filesystem checks passed")
