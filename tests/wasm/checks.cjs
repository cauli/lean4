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
