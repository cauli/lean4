<!-- Copyright (c) 2026 cauli. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE. -->

# Compact releases of 62b6a22: compact2

This recipe relinks the **validated old kit**, not a new Lean build. The full
variant retains all canonical exports, including boxed wrappers, and selects
compact JS export declarations and the exact validated indexed-dlsym adapter.
The slim variant links the kit's slim list the way CI's slim step does.
It does not upload assets, change application mounts, or deploy a site.

compact2 is compact1 plus one export in both lists,
`_emscripten_runtime_keepalive_push`. The build links with `EXIT_RUNTIME=1`, so a
host that calls `lean_wasm_compile` without running `main()` must hold a
keepalive reference. Otherwise the first event-loop callback after a Lean thread
proxies work to the main thread exits the runtime and closes stdin, stdout and
stderr. The function lives in the JS glue, so both `lean.wasm` files are
byte-identical to compact1's and only the two `lean.js` files change.

compact1 is reproducible from its own recipe commit, `fb896a60f96`, with the
manifest `desktop-release-62b6a22.json` it pinned. That manifest is not on this
branch because its export-list input no longer matches.

## Two commit identities

- **Artifact/runtime SHA:** `62b6a2291302d4bbeace37642a066b7510d0145c`.
  This is the runtime in the kit and the identity required by its library bundle.
- **Recipe-code SHA:** the clean checkout's `git rev-parse HEAD`, recorded by
  `relink-desktop-release.py`. This is a later commit that versions the recipe,
  adapter, and checks. It does not become the runtime SHA by relinking archives.

Do not rebuild Lean at the recipe commit and call it the same release.
`CHECK_OLEAN_VERSION` enables commit checks in both the runtime and library
format. A fresh build can reject the validated `.olean` files even when no Lean
source was intentionally changed. Keep the matching old `.olean` parts, `.ir`
files, sources, and package bundles. Do not relabel a new kit's `githash.txt`.

## Pinned inputs and outputs

[`desktop-release-62b6a22-compact2.json`](desktop-release-62b6a22-compact2.json)
(full) and [`slim-release-62b6a22-compact2.json`](slim-release-62b6a22-compact2.json)
(slim) record byte sizes and SHA256 for every file in the old kit, each
variant's versioned source inputs, and the expected outputs. The adapter was
copied byte-for-byte; its source comments were not rewritten.

| Input | Entries | SHA256 |
| --- | ---: | --- |
| `src/wasm-dlsym.js` (full) | | `264f000882cad81e4ed3484a0e3c545d7b533ae9ca06e34041b730afeb699da7` |
| `src/emscripten-exports.txt` (full) | 104,678 | `3db8e1448c87a7ef397b36cc48c4e990dc6c3300c0b76b61e7d95247e4bc3c9c` |
| `src/emscripten-exports-slim.txt` (slim) | 16,928 | `f0fe95b7cd389167a106b6d9439a5635ff12aa009b908cf8c64ea475845938a2` |

The full list is the kit's canonical 104,677-entry
`emscripten-exports-canonical.txt` plus the keepalive export. The slim list is
the kit's smaller default `emscripten-exports.txt` plus the same export. Each
recipe overrides the kit default with its versioned list and accepts no extra
linker arguments.

Pinned settings:

- Emscripten SDK **4.0.22**, `-O3`, JS exception handling
  (`DISABLE_EXCEPTION_CATCHING=0`), pthreads, and `MAIN_MODULE=2`.
- Full only: `DECLARE_ASM_MODULE_EXPORTS=0` and the versioned adapter.
- Four eager workers, a 16 MiB stack, **link-time** initial memory of 64 MiB,
  maximum memory of 4 GiB, and memory growth enabled.
- The same incoming Module APIs and exported runtime methods as
  `relink-local.sh`. No profiling flag or allocator change is added.

Application-supplied initial memory is separate: the recorded desktop browser
comparison used 2 GiB. Changing application capacity is not part of this recipe.

| Output | Bytes | SHA256 |
| --- | ---: | --- |
| full `lean.js` | 148,585 | `075218cc9663757f8ca22ba5bdcac9423ebcc21feb102c274c5fe29150ee077a` |
| full `lean.wasm` | 100,838,905 | `08d3ae8ee5dec8bae165ad5102e604eca016d74d2303e0b5748690df679a764e` |
| slim `lean.js` | 3,430,296 | `1bb3b3e4367bb633fb48a0b4aaf0f236c819b8938841335683b38c3b2f62457e` |
| slim `lean.wasm` | 70,444,966 | `e3499ffc9414d178b1735fe82254284163d8f57046c977d74f04c0c8fc23a8f4` |

Before pinning these, the same SDK and kit reproduced compact1's full outputs
(`lean.js` `63aa7b00…`, `lean.wasm` `08d3ae8e…`) and the earlier slim pair
(`cfb1e66d…`, `e3499ffc…`) byte for byte. See
[the experiment record](COMPACT_EXPORTS_EXPERIMENT.md) for compact1's Node and
desktop Chromium results and their limits.

## Guarded local relink

Use a clean Git checkout of the published recipe-code commit. Python 3 and Bash
are required. First inspect the inputs without starting any SDK process or link:

```bash
python3 docker-wasm/relink-desktop-release.py \
  ../lean4-wasm-artifacts/linkkit-62b6a22/linkkit --check-inputs
```

Only after enough disk and memory are available, activate the pinned SDK and
run the link. Keep it separate from browser measurements and other heavy work.
The output directory must not exist, including as a dangling symlink. Use an
external directory or a Git-ignored path such as `build/`; otherwise the script
refuses before linking, because its outputs would dirty the recipe checkout.

```bash
source /path/to/emsdk/emsdk_env.sh
python3 docker-wasm/relink-desktop-release.py \
  /path/to/linkkit-62b6a22/linkkit \
  "$PWD/build/desktop-compact2-62b6a22/bin"
python3 docker-wasm/relink-desktop-release.py \
  --manifest docker-wasm/slim-release-62b6a22-compact2.json \
  /path/to/linkkit-62b6a22/linkkit \
  "$PWD/build/slim-compact2-62b6a22/bin"
```

The script verifies inputs before and after linking, checks the SDK version,
rejects common flag-overriding environment variables, and sets
`NODE_OPTIONS=--max-old-space-size=8192`. It rejects unpinned libraries in the
kit search path. A changed input, dirty recipe checkout, or output hash mismatch
is an error. A mismatch must be investigated; do not simply update the manifest.

`link-provenance.json` records the attempted command, SDK version, input hashes,
and recipe/runtime identities. Only a link that passes the pinned output checks
gets `release-provenance.json` with `outputs_verified: true`. This does not claim
a new browser test. Failed output directories remain available for inspection;
the script never deletes them. Do not publish a failed or partial output.

The recipe pins SDK version and output bytes, not the entire host filesystem or
SDK installation. Keep the SDK version report and final output checksums with
the release evidence. The old control/compact experiment helper remains useful
for comparisons but is not the guarded production recipe.

## Durable kit archive

Publish the exact existing local `linkkit-62b6a22/linkkit` as an immutable archive
with a `linkkit/` top-level directory. Preserve all **21 files**, totaling
267,292,932 bytes before archive overhead/compression:

```text
linkkit/
  emscripten-exports-canonical.txt
  emscripten-exports.txt
  githash.txt
  leanc.sh.txt
  libInit.a
  libLake.a
  libLean.a
  libLeanChecker.a
  libLeanIR.a
  libLeanc.a
  libStd.a
  libleancpp.a
  libleancpp_1.a
  libleaninitialize.a
  libleanmain.a
  libleanmanifest.a
  libleanrt.a
  libleanrt_initial-exec.a
  libleanshell.a
  libuv.a
  stdlib.make.txt
```

The full recipe directly links eight archives: `libleanmain.a`, `libleanshell.a`,
`libleancpp.a`, `libInit.a`, `libStd.a`, `libLean.a`, `libleanrt.a`, and `libuv.a`.
Preserve the other eight too, so the historical kit stays intact and each file
continues to match the pinned manifest. Do not copy a native libuv over the WASM
archive. Do not replace the smaller historical default export list.

Keep these assets beside the kit archive in the durable release:

- This per-file JSON manifest and a checksum of the **archive itself**.
- The recipe-code Git commit/tag, plus a source snapshot if desired. Keep
  `LICENSE` and `LICENSES` with redistributed sources. Running the recipe needs
  a Git checkout so it can record and check the recipe-code SHA.
- The exact compact `lean.js`/`lean.wasm`, final relink provenance, and checksums.
- The unchanged matching runtime/library/package bundle and its own provenance
  and checksums. The link kit alone does not contain the browser library files.
- The desktop validation summary. A relink's hash check is not a browser pass.

The old CI packaging retained artifacts for only 30 days. It also copied
**stage0 native** `stdlib.make` and `leanc.sh`; the two `.txt` files in this kit
are historical evidence, not the WASM link rule. Do not repair or replace them
inside the old kit. The guarded recipe records the actual WASM relink command.
Future CI packaging now saves stage1 rules, CMake cache, SDK version, source
adapter/list, and file checksums. Those future kits have their own runtime SHA
and cannot pass this old-kit release manifest.

## Fresh builds and scope

The full Web Assembly CI job and `docker-wasm/build.sh` explicitly select
`EMSCRIPTEN_COMPACT_EXPORTS=ON`, `EMSCRIPTEN_DEBUG=OFF`, and `USE_MIMALLOC=OFF`.
Docker also enables the same olean version checks as release CI. Rebuild the
Docker image to pick up its copied `build.sh`; an old image keeps the old flags.
CMake's compact option remains OFF by default. When ON, the full executable
links the versioned adapter as well as selecting compact JS declarations.

`relink-local.sh` is unchanged because slim callers also use it. This release
does not prune the full export list. Its slim pair differs from the earlier slim
pair only by the keepalive export in the glue.
It targets classic scripts loaded with `importScripts`. It does not establish
support for iOS/WebKit, `MODULARIZE`, external wrapping/minification, or snapshot
restoration. Do not infer a snapshot pass from identical WASM bytes alone.

## Lightweight checks

```bash
python3 -m unittest discover -s tests/wasm -v
node --check src/wasm-dlsym.js
bash -n docker-wasm/build.sh
bash -n docker-wasm/relink-local.sh
bash -n docker-wasm/relink-memory-exports.sh
git diff --check
```

The unit tests exercise pinned inputs, SDK version rejection, full-list
selection, output guards, clean-checkout checks, provenance, and failure paths
with a mocked linker. They do not run Emscripten, rebuild Lean, or open a browser.
A fresh CMake/Docker build needs separate validation and is not this old release.
