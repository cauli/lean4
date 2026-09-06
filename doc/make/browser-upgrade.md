# Browser fork upgrades

This branch merges Lean v4.33.1 and retains the wasm32 persistent compile and
snapshot APIs. The Mathlib lock targets Mathlib's matching v4.33.1 release.
Native compilation alone does not establish browser compatibility.

## Validation and artifact migration

The **Browser toolchain** workflow builds native i386 and WASM in parallel.
Its final check requires both jobs to succeed. The WASM job tests the full
binary in Node and Chromium and the slim binary with the Init-only cases.
The native job also tests the persistent API and selected elaborator cases.
The broader upstream CI configuration stays separate from this fork workflow.

Before changing a deployed browser application:

1. Obtain both successful toolchain artifacts from the same commit.
2. Build the pinned Mathlib closure using the native i386 artifact and the
   [Mathlib sidecar workflow](browser-mathlib-manifold-closure.md).
3. Rebuild any additional native-linked packages, including Batteries, with
   that toolchain. Generate exports from the final archives, including package
   initializers and native constant symbols.
4. Rebuild course packs and snapshots, pinning their manifests and hashes to
   the exact final runtime. Full and slim snapshots are separate artifacts.
5. Run the consumer's course matrix: cold import, warm start, accepted and
   rejected proofs, reset/reuse, and snapshot reload. Keep the previous complete
   artifact set available until this passes.

Do not mix existing course oleans or snapshots with an upgraded runtime.
Pointer width, Lean version, fork commit, and the final function table matter.
The core CI harness does not replace the consumer's Mathlib course tests.

## Import profiling

Emscripten builds print monotonic timestamps and durations without enabling a
separate debug build:

```text
[PROFILE:IMPORT] t=12345ms phase=constant-map elapsed=678ms
[PROFILE:IMPORT] t=23456ms phase=extension:Some.extension elapsed=1234ms
[PROFILE:IMPORT] t=34567ms phase=module-init:Some.Module elapsed=2345ms
```

`finalizeImport.begin` starts the measurement. `module-data`, `constant-map`,
and `setImportedEntries` cover environment assembly. Persistent marking is
reported separately before and after extension finalization. `extensions`
contains the named extension hooks and `runInitAttrs`; hooks and module
initializers print individually only when they take at least one second.
`runInitAttrs.begin` marks the start of initializer execution. The final
`finalizeImport` duration covers the whole operation. These are nested timings;
do not add parent and child durations together. Missing slow-hook lines mean
no individual hook crossed the threshold, not that their combined cost is zero.

Use a warm-cache run of the same course to distinguish filesystem work from
finalization. If initializers dominate, native-link the measured tactic modules
and compare their added binary/glue size against the startup reduction. If
extension hooks dominate, profile those named hooks before adding native code.

## Memory experiments

The fork links wasm32 with memory growth and a 4 GiB maximum. A consumer-supplied
`WebAssembly.Memory` can impose a lower maximum; check its actual configuration
before changing the toolchain. Raising a worker's 2 GiB cap is a separate
experiment from Memory64 and still needs browser and snapshot tests.

MEMFS keeps its own file buffers after Lean imports them. Unlinking those files
may save JavaScript memory, but later imports, reset, fallback execution, and
snapshot creation can read them again. Test those paths and provide restaging
before making eviction the default. Measure released memory as well as proof
results; buffers retained elsewhere can prevent the expected saving.

Memory64 requires a separate artifact family and an ABI audit. The current
32-bit object representation, JavaScript heap offsets, pointer arguments, and
serialized modules must agree. It is not a link-flag-only upgrade.

## Build-time changes

Export lists are generated from declaration metadata and the actual archives,
so they follow upstream symbol changes. The full variant retains boxed entry
points needed by the interpreter; the slim variant uses the narrower set.
Emscripten compilation uses ccache with a 1600 MB limit. Cache keys include the
host architecture, SDK version, and relevant build flags. Already compressed
artifacts are uploaded without a second compression pass. Link kits allow
export and linker experiments without recompiling Lean. Compare successful CI
job durations before claiming a speedup; the first run uses a cold cache.
