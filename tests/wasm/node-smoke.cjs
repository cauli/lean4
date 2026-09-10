const fs = require('node:fs');
const path = require('node:path');
const vm = require('node:vm');
const { createRequire } = require('node:module');
const { createHash } = require('node:crypto');
const walk = require('./artifact-files.cjs');
require('./checks.cjs');

const args = process.argv.slice(2);
if (!args[0]) throw new Error('expected a toolchain directory');
const root = path.resolve(args.shift());
const bin = path.resolve(args[0] && !args[0].startsWith('--') ? args.shift() : path.join(root, 'bin'));
const initOnly = args.includes('--init-only');
const memoryProbe = args.includes('--memory-probe');
const snapshot = args.find(arg => arg.startsWith('--snapshot='))?.slice('--snapshot='.length);
const library = path.join(root, 'lib/lean');
let diagnostics = [];
const timeout = setTimeout(() => { console.error('WASM smoke test timed out'); process.exit(1); }, 240000);
const print = text => {
  if (text.startsWith('[PROFILE:IMPORT]')) console.log(text);
  if (!text.startsWith('{')) return;
  try { const d = JSON.parse(text); if (d.severity) diagnostics.push(d); } catch {}
};
const Module = {
  INITIAL_MEMORY: 2048 * 1024 * 1024,
  noInitialRun: true,
  locateFile: name => path.join(bin, name),
  print,
  printErr: text => { if (!text.startsWith('[WASM DEBUG]')) console.error(text); },
  preRun: [() => {
    Module.FS.mkdirTree(bin);
    for (const name of snapshot && initOnly ? [] : walk(library)) {
      const target = '/lib/lean/' + name;
      Module.FS.mkdirTree(path.dirname(target));
      Module.FS.writeFile(target, fs.readFileSync(path.join(library, name)), { canOwn: true });
    }
    if (snapshot) {
      Module.FS.mkdirTree('/snapshots');
      Module.FS.writeFile('/snapshots/init.snap', fs.readFileSync(snapshot), { canOwn: true });
      Module.FS.writeFile('/snapshots/init.snap.deps', '[]');
    }
    Module.ENV.LEAN_PATH = '/lib/lean';
    Module.FS.mkdirTree('/workspace');
    Module.FS.chdir('/workspace');
  }],
  onRuntimeInitialized: () => {
    setImmediate(() => {
      try {
        initializeLeanSmoke(Module);
        const snapshotMs = snapshot ? loadLeanSmokeSnapshot(Module) : undefined;
        const timings = runLeanSmoke(Module, () => { const d = diagnostics; diagnostics = []; return d; },
          { initOnly });
        if (memoryProbe) timings.push(checkLeanSmokeHighAddress(Module, () => { const d = diagnostics; diagnostics = []; return d; }));
        const hashes = Object.fromEntries(['lean.js', 'lean.wasm'].map(name =>
          [name, createHash('sha256').update(fs.readFileSync(path.join(bin, name))).digest('hex')]));
        console.log(JSON.stringify({ hashes, snapshotMs, timings }));
        clearTimeout(timeout);
        process.exit(0);
      } catch (error) { console.error(error); process.exit(1); }
    });
  },
  onAbort: why => { console.error(why); process.exit(1); },
};
const filename = path.join(bin, 'lean.js');
globalThis.__leanSmokeModule = Module;
vm.compileFunction('Module = globalThis.__leanSmokeModule;\n' + fs.readFileSync(filename, 'utf8'),
  ['exports', 'require', 'module', '__filename', '__dirname'], { filename })(
  {}, createRequire(filename), { exports: {} }, filename, bin);
