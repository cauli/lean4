const fs = require('node:fs');
const path = require('node:path');
const vm = require('node:vm');
const { createRequire } = require('node:module');
const walk = require('./artifact-files.cjs');
if (!process.argv[2] || !process.argv[3]) throw new Error('usage: bake-snapshot.cjs <toolchain> <output-dir>');
const root = path.resolve(process.argv[2]);
const work = path.resolve(process.argv[3]);
fs.mkdirSync(work, { recursive: true });
const bin = path.resolve(process.argv[4] || path.join(root, 'bin'));
const library = path.join(root, 'lib/lean');
const filename = path.join(bin, 'lean.js');
process.chdir('/');
const Module = {
  arguments: ['--incr-header-save=/work/init.snap', '/workspace/probe.lean'],
  INITIAL_MEMORY: 2048 * 1024 * 1024,
  locateFile: name => path.join(bin, name),
  mainScriptUrlOrBlob: filename,
  preRun: [() => {
    Module.FS.mkdirTree(bin);
    Module.FS.mkdirTree('/work');
    Module.FS.mount(Module.FS.filesystems.NODEFS, { root: work }, '/work');
    for (const name of walk(library)) {
      const target = '/lib/lean/' + name;
      Module.FS.mkdirTree(path.dirname(target));
      Module.FS.writeFile(target, fs.readFileSync(path.join(library, name)), { canOwn: true });
    }
    Module.ENV.LEAN_PATH = '/lib/lean';
    Module.FS.mkdirTree('/workspace');
    Module.FS.writeFile('/workspace/probe.lean', '#check 2 + 2\n');
  }],
  print: console.log,
  printErr: console.error,
  onExit: code => process.exit(code),
  onAbort: error => { console.error(error); process.exit(1); }
};
globalThis.__leanSnapshotModule = Module;
vm.compileFunction('Module = globalThis.__leanSnapshotModule;\n' + fs.readFileSync(filename, 'utf8'),
  ['exports', 'require', 'module', '__filename', '__dirname'], { filename })(
  {}, createRequire(filename), { exports: {} }, filename, bin);
