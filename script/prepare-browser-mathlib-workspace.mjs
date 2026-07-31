#!/usr/bin/env node

import fs from 'node:fs'
import path from 'node:path'
import { execFileSync } from 'node:child_process'

const workspace = path.resolve(process.argv[2] || '')
if (!workspace || !fs.existsSync(workspace)) {
  throw new Error(`Mathlib workspace not found: ${workspace}`)
}

const manifestPath = path.join(workspace, 'lake-manifest.json')
const manifest = JSON.parse(fs.readFileSync(manifestPath, 'utf8'))
const proofwidgets = manifest.packages?.find((entry) => entry.name === 'proofwidgets')
if (!proofwidgets?.rev) throw new Error('Pinned ProofWidgets revision is missing from lake-manifest.json')

const proofwidgetsRoot = path.join(workspace, '.lake/packages/proofwidgets')
const actualCommit = execFileSync('git', ['-C', proofwidgetsRoot, 'rev-parse', 'HEAD'], {
  encoding: 'utf8',
}).trim()
if (actualCommit !== proofwidgets.rev) {
  throw new Error(`ProofWidgets checkout is ${actualCommit}; expected ${proofwidgets.rev}`)
}

const mathlibCommit = execFileSync('git', ['-C', workspace, 'rev-parse', 'HEAD'], {
  encoding: 'utf8',
}).trim()
const lakefilePath = path.join(workspace, 'lakefile.lean')
const source = fs.readFileSync(lakefilePath, 'utf8')
const marker = `require "leanprover-community" / "proofwidgets" @ git "v0.0.83-pre2" -- ProofWidgets should always be pinned to a specific version
  with NameMap.empty.insert \`errorOnBuild
    "ProofWidgets not up-to-date. \\
    Please run \`lake exe cache get\` to fetch the latest ProofWidgets. \\
    If this does not work, report your issue on the Lean Zulip."
`
const replacement = `require "leanprover-community" / "proofwidgets" @ git "v0.0.83-pre2" -- ProofWidgets should always be pinned to a specific version
`
const markerIndex = source.indexOf(marker)
if (markerIndex === -1 || source.indexOf(marker, markerIndex + marker.length) !== -1) {
  throw new Error('Expected exactly one Mathlib ProofWidgets errorOnBuild guard')
}
fs.writeFileSync(lakefilePath, source.replace(marker, replacement))

const adjustments = {
  schemaVersion: 1,
  adjustments: [
    {
      package: 'mathlib',
      commit: mathlibCommit,
      dependency: {
        package: 'proofwidgets',
        commit: actualCommit,
      },
      change: 'allow-pinned-source-build',
      target: 'proofwidgets:widgetJsAll',
      reason: 'The sidecar needs the JavaScript embedded by ProofWidgets Lean modules, so build it from the pinned package-lock instead of requiring a cached release.',
    },
  ],
}
fs.writeFileSync(
  path.join(workspace, '.browser-library-adjustments.json'),
  `${JSON.stringify(adjustments, null, 2)}\n`,
)

console.log(`Enabled the pinned ProofWidgets source build at ${actualCommit}`)
