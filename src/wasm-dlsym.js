// Copyright (c) 2026 cauli. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

// Build-time adapter for Emscripten 4.0.22. Keep its dlsym implementation,
// including signature adaptation and pthread table synchronization, but avoid
// enumerating the full export table for every symbol lookup.
const leanDlsym = LibraryManager.library._dlsym_js;
const leanMergeSymbols = LibraryManager.library.$mergeLibSymbols;
if (typeof leanDlsym !== 'function' || typeof leanMergeSymbols !== 'function') {
  throw new Error('wasm-dlsym.js requires the Emscripten dynamic linker library');
}
let leanDlsymReplacements = 0;
const leanDlsymSource = leanDlsym.toString().replace(
  /Object\.keys\(lib\.exports\)\.indexOf\((symbol|origSym)\)/g,
  (_, name) => {
    leanDlsymReplacements++;
    return `leanDlsymIndex(lib.exports, ${name})`;
  },
);
if (leanDlsymReplacements < 1 || leanDlsymReplacements > 2) {
  throw new Error('Emscripten dlsym changed; review the indexed lookup adapter');
}

addToLibrary({
  $leanDlsymIndexes: null,
  $leanDlsymIndex__deps: ['$leanDlsymIndexes'],
  $leanDlsymIndex: (exports, symbol) => {
    if (!Object.prototype.propertyIsEnumerable.call(exports, symbol)) return -1;
    leanDlsymIndexes ||= new WeakMap();
    let indices = leanDlsymIndexes.get(exports);
    if (!indices || !indices.has(symbol)) {
      indices = new Map(Object.keys(exports).map((name, index) => [name, index]));
      leanDlsymIndexes.set(exports, indices);
    }
    return indices.get(symbol);
  },
  // Emscripten serializes this function into the output; the Function
  // constructor executes only during linking, never in the browser.
  _dlsym_js: new Function(`return (${leanDlsymSource})`)(),
  _dlsym_js__deps: [...LibraryManager.library._dlsym_js__deps, '$leanDlsymIndex'],
  $leanOriginalMergeLibSymbols: leanMergeSymbols,
  $leanOriginalMergeLibSymbols__deps: [...LibraryManager.library.$mergeLibSymbols__deps],
  $mergeLibSymbols__deps: ['$leanDlsymIndexes', '$leanOriginalMergeLibSymbols'],
  $mergeLibSymbols: (exports, libName) => {
    // A dlopen(RTLD_GLOBAL) may add keys, including numeric names which change
    // enumeration order. Cached indices must match the pthread catch-up code.
    leanDlsymIndexes?.delete(wasmImports);
    leanOriginalMergeLibSymbols(exports, libName);
  },
});
