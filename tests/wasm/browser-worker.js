let diagnostics = [];
var Module = {
  INITIAL_MEMORY: 2048 * 1024 * 1024,
  noInitialRun: true,
  mainScriptUrlOrBlob: '/bin/lean.js',
  locateFile: name => '/bin/' + name,
  print: text => {
    if (text.startsWith('[PROFILE:IMPORT]')) console.log(text);
    if (!text.startsWith('{')) return;
    try { const d = JSON.parse(text); if (d.severity) diagnostics.push(d); } catch {}
  },
  printErr: text => console.log(text),
  preRun: [() => {
    for (const dir of ['/bin', '/lib/lean', '/workspace']) Module.FS.mkdirTree(dir);
    Module.FS.chdir('/workspace');
  }],
  onAbort: why => postMessage({ error: String(why) }),
  onRuntimeInitialized: async () => {
    try {
      const { files, initOnly, memoryProbe, snapshot } = await (await fetch('/files.json')).json();
      if (snapshot) {
        const response = await fetch('/init.snap');
        if (!response.ok) throw new Error(`snapshot fetch: ${response.status}`);
        Module.FS.mkdirTree('/snapshots');
        Module.FS.writeFile('/snapshots/init.snap', new Uint8Array(await response.arrayBuffer()), { canOwn: true });
        Module.FS.writeFile('/snapshots/init.snap.deps', '[]');
      }
      let cursor = 0;
      await Promise.all(Array.from({ length: 6 }, async () => {
        while (cursor < files.length) {
          const name = files[cursor++];
          const response = await fetch('/lib/lean/' + name);
          if (!response.ok) throw new Error(`fetch ${name}: ${response.status}`);
          const target = '/lib/lean/' + name;
          Module.FS.mkdirTree(target.slice(0, target.lastIndexOf('/')));
          Module.FS.writeFile(target, new Uint8Array(await response.arrayBuffer()), { canOwn: true });
        }
      }));
      Module.ENV.LEAN_PATH = '/lib/lean';
      initializeLeanSmoke(Module);
      const snapshotMs = snapshot ? loadLeanSmokeSnapshot(Module) : undefined;
      const timings = runLeanSmoke(Module, () => { const d = diagnostics; diagnostics = []; return d; }, { initOnly });
      if (memoryProbe) timings.push(checkLeanSmokeHighAddress(Module, () => { const d = diagnostics; diagnostics = []; return d; }));
      postMessage({ snapshotMs, timings });
    } catch (error) { postMessage({ error: String(error.stack || error) }); }
  },
};
importScripts('/checks.cjs', '/bin/lean.js');
