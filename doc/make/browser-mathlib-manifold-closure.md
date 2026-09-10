# Browser Mathlib manifold closure

The workflow
[`build-browser-mathlib-manifold-closure.yml`](../../.github/workflows/build-browser-mathlib-manifold-closure.yml)
builds the transitive Mathlib dependencies of the roots in the lock file:
manifolds, spheres, and circles. It does **not** contain all of Mathlib.

This is a sidecar build. The `Browser toolchain` workflow’s `Web Assembly` and `Linux 32bit` jobs do
not depend on it, and their artifacts are not modified. The sidecar downloads
both artifacts from the same completed CI run. It uses the native i386 compiler
to build Mathlib at native speed and checks every packaged `.olean` against the
`Init.olean` shipped by the WebAssembly build.

## Reproduce the artifact

1. Fork this repository and run the `Browser toolchain` workflow at the revision you
   want to package. Wait for both `Web Assembly` and `Linux 32bit` to finish.
2. Copy that workflow run's numeric id.
3. Open **Actions → Build browser Mathlib manifold closure → Run workflow** on
   a revision with the matching lock and reviewed sidecar tooling. Enter the run id.
4. Download the artifact named
   `browser-mathlib-manifold-closure-<lean>-<mathlib>`.

The exact Mathlib commit, root modules, compatible upstream Lean revision, and
toolchain label live in
[`browser-mathlib-manifold-closure.lock.json`](../../.github/browser-mathlib-manifold-closure.lock.json).
The uploaded `manifest.json` records those pins, all transitive Lake package
revisions, the two input artifact names, every packaged file, and the SHA-256
of each pack. It also records the ProofWidgets workspace adjustment: the pinned
TypeScript `widgetJsAll` target is built from its package lock because its output
is embedded in Lean modules, instead of requiring a prebuilt ProofWidgets release.
Lean `.olean`, `.ir`, and `.ir.sig` files are then packaged. `SHA256SUMS` covers the
manifest and packs. The upstream Lean pin is a compatibility base, not the
runtime identity: `lean.commit` is the input run's exact fork revision, while
`lean.workflowCommit` identifies the sidecar tooling and lock.

The workflow requires a `Browser toolchain` run from this repository with its
head source also in this repository. Same-repository PR, push, and manual runs
are supported; foreign-fork PR artifacts and other workflow paths are rejected.
It also rejects a run not based on the locked compatible upstream revision, or
a run whose `Web Assembly` or `Linux 32bit` job did not succeed. It checks out the
run's exact Lean source revision
even when the workflow itself lives on another fork branch or has since
received a packaging-only fix. Ordinary x86-64 Mathlib cache archives are
deliberately not used: this browser build needs pointer-width-compatible
`.olean` files from the exact Lean fork commit.

## Standalone Batteries artifacts

`build-batteries.yml` uses the same repository and workflow-origin checks for
its tested browser toolchain run id. With no
`batteries_rev` input, it reads the Batteries revision from the locked Mathlib
commit's `lake-manifest.json`. An explicit override must be a full commit hash;
the artifact manifest records both the override and the Mathlib dependency pin.
The package's own toolchain label can differ from the Mathlib label: the current
Batteries pin says v4.33.0, but this workflow builds it with the supplied fork
compiler and checks a native import. It does not install that upstream toolchain.

The `batteries-oleans-linux_32` artifact contains the import archive, a provenance
manifest, and checksums. A native import is not a browser compatibility test.
Use the matching runtime and test the consumer before serving these files.

The default sidecars require successful toolchain jobs and zero-exit CLI checks.
They no longer tolerate the historical i386 exit-232 bug. Use the archived
workflow revision for investigations that require an older, affected toolchain.
`debug-import-runaway.yml` uses the same repository and workflow-origin checks,
accepts only a public module name, and runs bounded native probes. It does not
upload the raw Massif data.

## Publication boundary

These workflows upload GitHub Actions artifacts only. They do not update a
release, website, browser pin, or snapshot. The fork's `master` branch builds
v4.33.1; the old browser runtime and frozen recipe remain separate. Do not reuse
old `.olean` files, course packs, or snapshots with a new runtime merely because
its source descends from the old commit.

To package another part of Mathlib, copy the lock and workflow under a name that
describes its root or purpose, then change `mathlib.roots`. Reserve names such
as `build-browser-mathlib.yml` for an artifact that actually contains full
Mathlib.
