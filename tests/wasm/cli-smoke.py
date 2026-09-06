"""Check CLI exit codes independently of printed output on native toolchains."""
import re
import subprocess
import sys
from pathlib import Path

lean = str(Path(sys.argv[1]).resolve())
source = str(Path(__file__).with_name("exit-code.lean").resolve())
for option in ("--version", "--githash", "--help"):
    result = subprocess.run([lean, option], capture_output=True, text=True, timeout=30)
    if result.returncode != 0 or not result.stdout.strip():
        raise SystemExit(f"{option}: exit {result.returncode}: {result.stderr}")
    if option == "--githash" and not re.fullmatch(r"[0-9a-f]{40}\n?", result.stdout):
        raise SystemExit(f"unexpected --githash output: {result.stdout!r}")
for code in (0, 7, 125):
    result = subprocess.run([lean, "--run", source, str(code)], capture_output=True, text=True, timeout=60)
    if result.returncode != code or result.stdout.strip() != f"exit {code}":
        raise SystemExit(f"--run {code}: exit {result.returncode}, stdout {result.stdout!r}, stderr {result.stderr!r}")
print("CLI exit-code checks passed")
