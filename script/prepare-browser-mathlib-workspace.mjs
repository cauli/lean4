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

const lakefilePath = path.join(proofwidgetsRoot, 'lakefile.lean')
const source = fs.readFileSync(lakefilePath, 'utf8')
const marker = `@[default_target]
lean_lib ProofWidgets where
  needs := #[widgetJsAll]
`
const replacement = `@[default_target]
lean_lib ProofWidgets
`
const markerIndex = source.indexOf(marker)
if (markerIndex === -1 || source.indexOf(marker, markerIndex + marker.length) !== -1) {
  throw new Error('Expected exactly one ProofWidgets widgetJsAll library dependency')
}
fs.writeFileSync(lakefilePath, source.replace(marker, replacement))

const adjustments = {
  schemaVersion: 1,
  adjustments: [
    {
      package: 'proofwidgets',
      commit: actualCommit,
      change: 'omit-target-dependency',
      target: 'widgetJsAll',
      reason: 'The browser library artifact ships Lean .olean/.ir files, not the ProofWidgets TypeScript bundle.',
    },
  ],
}
fs.writeFileSync(
  path.join(workspace, '.browser-library-adjustments.json'),
  `${JSON.stringify(adjustments, null, 2)}\n`,
)

console.log(`Prepared Lean-only ProofWidgets workspace at ${actualCommit}`)
