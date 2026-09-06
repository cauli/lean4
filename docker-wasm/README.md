# Lean 4 WebAssembly build

The browser toolchain uses Emscripten 4.0.22 and a native i386 bootstrap compiler.
The native compiler produces the 32-bit `.olean` files consumed by WASM.
Use the **Browser toolchain** workflow for both the WASM runtime and the matching
native compiler; see [the upgrade guide](../doc/make/browser-upgrade.md).

## Build locally

From the repository root, with Docker running:

```bash
docker build --platform=linux/amd64 -t lean4-wasm-builder docker-wasm
docker run --rm --platform=linux/amd64 -v "$PWD:/lean4" lean4-wasm-builder
```

On Apple Silicon, enable Docker's x86 emulation. This affects the native i386
bootstrap; Emscripten linking can run directly on the host. Allow at least 10 GB
of disk space and 8 GB of container memory. Repeating the build reuses
`build/wasm`. Set `EMSCRIPTEN_DEBUG=ON` in the container environment when function
names are needed for profiling.

The outputs are `build/wasm/stage1/bin/lean.{js,wasm}` and the matching library
under `build/wasm/stage1/lib/lean`. Browser packages need `.olean`, `.ir`, and
`.ir.sig` files. The generated loader also starts the pthread workers; there is
no separate `lean.worker.js` to deploy with this Emscripten version.

## Test a toolchain

The harness exercises the persistent compile API, valid and invalid proofs,
request isolation, library evaluation, and repeated Init, Std, and Lean imports:

```bash
node tests/wasm/node-smoke.cjs build/wasm/stage1
npm ci --prefix tests/wasm
tests/wasm/node_modules/.bin/playwright install chromium
node tests/wasm/browser-smoke.mjs build/wasm/stage1
```

The browser harness serves the artifacts with the headers required for shared
memory:

```text
Cross-Origin-Opener-Policy: same-origin
Cross-Origin-Embedder-Policy: require-corp
```

`tests/wasm/browser-worker.js` shows runtime initialization and filesystem
staging for the actual loader. It uses a classic worker with `Module` configured
before `importScripts`, then initializes Lean before calling its compile API.

## Relink without rebuilding Lean

CI uploads `linkkit-Web Assembly` containing archives, generated export lists,
the Emscripten version, link rules, and source commit. Activate the matching
Emscripten SDK, unpack that artifact, then run:

```bash
bash docker-wasm/relink-local.sh linkkit relinked -O3
node tests/wasm/browser-smoke.mjs build/wasm/stage1 relinked
```

The library tree must come from the same build as the link kit. CI also links
`bin-slim/lean.{js,wasm}` using the generated slim export list and runs its Init
checks with `--init-only`. External-package persistent imports require the full
variant. Rebuild snapshots against each exact binary: relinking can change the
function table even when the Lean source commit stays the same.
