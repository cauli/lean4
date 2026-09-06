// Exercise the same persistent C API used by the browser worker.
globalThis.runLeanSmoke = function (Module, readDiagnostics, { initOnly = false } = {}) {
  function mkString(value) {
    const ptr = Module.stringToNewUTF8(value);
    const result = Module._lean_mk_string(ptr);
    Module._free(ptr);
    return result;
  }
  const cases = [
    ['arithmetic', '#eval 2 + 3', false, '5'],
    ['proof', 'example (n : Nat) : n + 0 = n := by simp', false],
    ['reject false theorem', 'example : False := by decide', true],
    ['retain early diagnostics', '#check missing_browser_name\n#check Nat', true],
    ['define in one request', 'def browserLocal := 7\n#check browserLocal', false],
    ['isolate requests', '#check browserLocal', true],
    ['library IR evaluation', '#eval (List.range 5).reverse', false, '[4, 3, 2, 1, 0]'],
    ['switch import set', 'import Std\n#check Std.HashMap', false],
    ['metaprogramming', 'import Lean\n#check Lean.Expr', false],
    ['reuse Init after other imports', '#eval 6 * 7', false, '42'],
    ['reuse Std', 'import Std\n#check Std.HashMap', false],
  ];
  const timings = [];
  for (const [name, code, shouldError, expected] of cases) {
    if (initOnly && code.startsWith('import ')) continue;
    console.log(`WASM smoke: ${name}`);
    readDiagnostics();
    const start = performance.now();
    const result = Module._lean_wasm_compile(mkString(code), mkString('browser-smoke.lean'));
    const diagnostics = readDiagnostics();
    if ((Module.getValue(result + 7, 'i8') & 255) !== 0) {
      Module._lean_io_result_show_error(result);
      throw new Error(`${name}: compiler IO failure`);
    }
    const box = Module.getValue(result + 8, 'i32');
    const exitCode = Module.getValue(box + 8, 'i32');
    if (exitCode !== (shouldError ? 1 : 0)) throw new Error(`${name}: compile returned ${exitCode}`);
    const errors = diagnostics.filter(d => d.severity === 'error');
    if ((errors.length > 0) !== shouldError ||
        (expected && !diagnostics.some(d => String(d.data).includes(expected)))) {
      throw new Error(`${name}: unexpected diagnostics: ${JSON.stringify(diagnostics)}`);
    }
    timings.push({ name, milliseconds: Math.round(performance.now() - start) });
  }
  return timings;
};

globalThis.initializeLeanSmoke = function (Module) {
  Module._lean_initialize_runtime_module();
  Module._lean_initialize();
  Module._lean_io_mark_end_initialization();
  Module._lean_init_task_manager();
  Module._lean_enable_initializer_execution();
  const result = Module._lean_init_search_path();
  if ((Module.getValue(result + 7, 'i8') & 255) !== 0) {
    Module._lean_io_result_show_error(result);
    throw new Error('Lean search path initialization failed');
  }
};

// Snapshots contain function-table references, so bake with the exact tested binary.
globalThis.loadLeanSmokeSnapshot = function (Module) {
  const p = Module.stringToNewUTF8('/snapshots/init.snap');
  const snapshotPath = Module._lean_mk_string(p);
  Module._free(p);
  const start = performance.now();
  const result = Module._lean_wasm_load_snapshot(snapshotPath);
  const tag = Module.getValue(result + 7, 'i8') & 255;
  if (tag) {
    Module._lean_io_result_show_error(result);
    throw new Error('snapshot loader IO failure');
  }
  const box = Module.getValue(result + 8, 'i32');
  const value = Module.getValue(box + 8, 'i32');
  if (value) throw new Error(`snapshot load returned ${value}`);
  const elapsed = Math.round(performance.now() - start);
  Module.FS.unlink('/snapshots/init.snap');
  Module.FS.unlink('/snapshots/init.snap.deps');
  return elapsed;
};

// Optional desktop probe: force growth and pass a pointer beyond the signed i32 range.
globalThis.checkLeanSmokeHighAddress = function (Module, readDiagnostics) {
  const reserved = Module._malloc(2147483648) >>> 0;
  if (!reserved) throw new Error('could not reserve 2 GiB for the high-address probe');
  try {
    const high = reserved + 2147483648 - 4096;
    if (high < 2147483648) throw new Error('probe did not cross the 2 GiB address boundary');
    const code = '#eval 100 + 23';
    for (let i = 0; i <= code.length; i++) Module.setValue(high + i, code.charCodeAt(i) || 0, 'i8');
    if (Module.UTF8ToString(high) !== code) throw new Error('high-address JavaScript read failed');
    const codeObj = Module._lean_mk_string(high);
    const filename = Module.stringToNewUTF8('high-address.lean');
    const fileObj = Module._lean_mk_string(filename);
    Module._free(filename);
    readDiagnostics();
    const result = Module._lean_wasm_compile(codeObj, fileObj);
    const diagnostics = readDiagnostics();
    const tag = Module.getValue(result + 7, 'i8') & 255;
    if (tag || diagnostics.some(d => d.severity === 'error') ||
        !diagnostics.some(d => String(d.data).includes('123'))) {
      throw new Error('Lean evaluation from a pointer above 2 GiB failed');
    }
    return { name: 'wasm32 high address', address: high, result: '123' };
  } finally {
    Module._free(reserved);
  }
};
