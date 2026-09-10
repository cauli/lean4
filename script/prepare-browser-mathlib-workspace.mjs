#!/usr/bin/env node
// Copyright (c) 2026 cauli. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

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
const proofwidgetsRequires = [...source.matchAll(/^require .*\/ "proofwidgets" .*$/gm)]
if (proofwidgetsRequires.length !== 1) {
  throw new Error('Expected exactly one Mathlib ProofWidgets dependency')
}
const requireEnd = source.indexOf('\n', proofwidgetsRequires[0].index) + 1
const guardPrefix = '  with NameMap.empty.insert `errorOnBuild\n'
const nextRequire = source.indexOf('\nrequire ', requireEnd)
if (!source.startsWith(guardPrefix, requireEnd) || nextRequire === -1) {
  throw new Error('Expected exactly one Mathlib ProofWidgets errorOnBuild guard')
}
fs.writeFileSync(lakefilePath, source.slice(0, requireEnd) + source.slice(nextRequire + 1))

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
