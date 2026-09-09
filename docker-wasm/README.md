# Lean 4 WebAssembly Docker Build

For the validated full desktop compact release, use the guarded old-kit recipe in
[DESKTOP_RELEASE.md](DESKTOP_RELEASE.md). It does not rebuild Lean.

The Docker commands below make a **fresh development build** from the mounted
checkout. They now select compact exports, the versioned dlsym adapter,
`EMSCRIPTEN_DEBUG=OFF`, `USE_MIMALLOC=OFF`, and `CHECK_OLEAN_VERSION=ON`, like the
full desktop CI configuration. Rebuild the Docker image after updating `build.sh`.
A fresh build embeds its own commit and cannot replace the validated runtime or
its matching `.olean`/`.ir` bundle. Generic `relink-local.sh` keeps its old defaults
because slim builds also call it.

## Prerequisites

- Docker installed and running
- ~10GB of disk space for the build
- **Apple Silicon (M1/M2/M3)**: Docker will use x86_64 emulation via Rosetta 2
  - Enable Rosetta in Docker Desktop: Settings → General → "Use Rosetta for x86_64/amd64 emulation"

## Quick Start

```bash
# From the lean4 repository root:
cd docker-wasm

# Build the Docker image (one-time setup, ~5-10 min)
docker build -t lean4-wasm-builder .

# Run the build (mounts the source code, outputs to build/wasm)
cd ..
docker run --rm -v "$(pwd):/lean4" lean4-wasm-builder
```

## Incremental Builds

After the first build, you can run incremental builds:

```bash
# Just rebuild stage1 (faster for code changes)
docker run --rm -v "$(pwd):/lean4" lean4-wasm-builder bash -c "
  source /opt/emsdk/emsdk_env.sh
  cd /lean4/build/wasm
  make stage1 -j\$(nproc)
"
```

## Output

After a successful build, the WASM files will be in:
- `build/wasm/stage1/bin/lean.js` - JavaScript loader
- `build/wasm/stage1/bin/lean.wasm` - WebAssembly binary
- Worker bootstrap is in `lean.js`; there is no separate `lean.worker.js` in this SDK configuration.
- `build/wasm/stage1/lib/lean/` - Compiled .olean files

## Threading Support

The build uses `-pthread` with Web Workers:
- Workers load the same classic `lean.js` script.
- `PTHREAD_POOL_SIZE=4` creates a pool of 4 workers
- Requires proper CORS headers for SharedArrayBuffer:
  ```
  Cross-Origin-Opener-Policy: same-origin
  Cross-Origin-Embedder-Policy: require-corp
  ```

## Using the WASM Build

To use in a browser:

```javascript
// 1. Load the Lean WASM module
const Module = await import('./lean.js');

// 2. Wait for initialization
await Module.ready;

// 3. Load .olean files into the virtual filesystem
// Files should go in /lib/lean/library/
Module.FS.writeFile('/lib/lean/library/Init.olean', initOleanData);
Module.FS.writeFile('/lib/lean/library/Std.olean', stdOleanData);
// ... etc

// 4. Call lean main
const exitCode = Module.ccall("main", "number", ["number", "number"], [argc, argvPtr]);
```

## Troubleshooting

### Build fails with memory errors
Increase Docker memory limit in Docker Desktop settings (recommend 8GB+).

### Build is slow
- First build takes 30-60 minutes
- Incremental builds are much faster (~5-10 minutes)
- Use `make stage1 -j$(nproc)` for parallel builds

### Permission errors
The build outputs may be owned by root. Fix with:
```bash
sudo chown -R $(whoami) build/wasm
```

