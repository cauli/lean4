#!/usr/bin/env bash
# 🤖 Relink the deployed control or compact JS declarations without pruning WASM exports.
set -euo pipefail
MODE=${1:?usage: relink-memory-exports.sh control-or-compact kit-dir dlsym-js output-dir}
KIT=${2:?missing kit-dir}
SHIM=${3:?missing dlsym-js}
OUT=${4:?missing output-dir}
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
case "$MODE" in
  control) DECLARE_EXPORTS=1 ;;
  compact) DECLARE_EXPORTS=0 ;;
  *) echo "mode must be control or compact" >&2; exit 2 ;;
esac
[[ "$(cat "$KIT/githash.txt")" == "62b6a2291302d4bbeace37642a066b7510d0145c" ]]
[[ -f "$KIT/emscripten-exports-canonical.txt" && -f "$SHIM" ]]
VERSION=$(emcc --version)
[[ "$VERSION" == *" 4.0.22 "* ]]
if [[ -e "$OUT" ]]; then
  echo "output must be a new directory: $OUT" >&2
  exit 2
fi
export NODE_OPTIONS=--max-old-space-size=8192
printf '%s\n' "$VERSION"
bash "$SCRIPT_DIR/relink-local.sh" "$KIT" "$OUT" \
  -O3 \
  -sEXPORTED_FUNCTIONS=@"$KIT/emscripten-exports-canonical.txt" \
  --js-library "$SHIM" \
  -sDECLARE_ASM_MODULE_EXPORTS="$DECLARE_EXPORTS"
shasum -a 256 "$OUT/lean.js" "$OUT/lean.wasm"
