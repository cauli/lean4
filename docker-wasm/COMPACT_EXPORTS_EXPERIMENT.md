# Compact WASM export declaration experiment

Branch base: `62b6a2291302d4bbeace37642a066b7510d0145c`.

This experiment retains all native and boxed Lean functions. It changes only
how Emscripten assigns WebAssembly exports to JavaScript variables.

## Build option

`-DEMSCRIPTEN_COMPACT_EXPORTS=ON` adds
`-sDECLARE_ASM_MODULE_EXPORTS=0` to Emscripten link settings. The default is OFF.
The option does not change the export list, task workers, stack size, allocator,
exception handling, or Lean code.

Emscripten 4.0.22 implements the switch with a loop that assigns exports to
`globalThis` and `Module`. This experiment targets classic scripts loaded by
`importScripts`. Do not combine it with `MODULARIZE`, or externally wrap or
minify the generated script without testing that integration.

## Reproduce from the deployed link kit

Activate Emscripten **4.0.22** first. Use the `linkkit-62b6a22/linkkit` directory
and `wasm-433-boxed-dlsym/wasm-dlsym.js` adapter from the matching local artifacts.

```bash
source /path/to/emsdk/emsdk_env.sh
KIT=/path/to/linkkit-62b6a22/linkkit
SHIM=/path/to/wasm-433-boxed-dlsym/wasm-dlsym.js
bash docker-wasm/relink-memory-exports.sh control "$KIT" "$SHIM" "$PWD/build/memory/control/bin"
bash docker-wasm/relink-memory-exports.sh compact "$KIT" "$SHIM" "$PWD/build/memory/compact/bin"
```

Each output directory must be new. The helper checks the kit commit and SDK
version. Both runs use:

- The canonical 104,677-entry export list, not the smaller kit default list.
- `-O3` and the same custom `wasm-dlsym.js` adapter.
- JS exception handling, pthreads, and `MAIN_MODULE=2`.
- Four preloaded workers, a 16 MiB stack, 64 MiB initial memory, and 4 GiB maximum.
- The same runtime-method and incoming-Module API lists.

The only variant flag is `DECLARE_ASM_MODULE_EXPORTS` (control 1, compact 0).

## Recorded local result

Both relinks succeeded on macOS arm64 with Emscripten 4.0.22. The control output
is byte-identical to the deployed boxed-dlsym artifact.

| File | Bytes | SHA256 |
| --- | ---: | --- |
| Control `lean.js` | 48,036,588 | `371a46c0537f56a85da1befa9eacd357ceb9a428cc4c05647984b95a13c936c9` |
| Compact `lean.js` | 148,402 | `63aa7b004435f3d90cf19d7c3b3e3284726701ea06da8bc70b015125e1a38b24` |
| Both `lean.wasm` | 100,838,905 | `08d3ae8ee5dec8bae165ad5102e604eca016d74d2303e0b5748690df679a764e` |

`cmp` confirmed identical WASM bytes between both outputs and the deployed
local artifact. `node --check` accepted the compact script. Helper syntax and
`git diff --check` passed. No application artifact symlink was changed.

This proves a reduction in generated JS bytes, not a measured memory saving.
The loop still materializes exports and does not remove Emscripten's GOT,
function-table registration, or copied export dictionaries.

## Runtime validation still required

Use the existing, working Node fixture layout and browser gates. A NODEFS
mount does not make external symlink targets visible automatically. Initial
local attempts with a symlinked library root failed equally for control and
compact because `Init` was not visible; those attempts are not runtime passes.

Validate cold and warm core commands, invalid proofs, boxed scalar calls,
partial applications, borrowed parameters, package initializers, task/promise
work across pthreads, and real Manifold levels. Compare exact output assets
with the same memory and worker settings. Keep browser profiling isolated
from relinks and other runtime tests.

No application default or published artifact is changed by this experiment.
