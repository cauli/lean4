"""Protect the interpreter's native dispatch contract across upstream updates."""

import importlib.util
import unittest
from pathlib import Path

spec = importlib.util.spec_from_file_location(
    "exports", Path(__file__).parents[2] / "script/generate-wasm-exports.py"
)
exports = importlib.util.module_from_spec(spec)
spec.loader.exec_module(exports)


class ExportsTest(unittest.TestCase):
    def test_dispatch_and_initialization(self):
        symbols = {
            "main", "lean_wasm_compile", "lean_mk_string", "initialize_Init",
            "runtime_initialize_Init", "meta_initialize_Init", "l_extern___boxed", "l_export___boxed",
            "custom_export", "l_initialized", "l_normal___boxed", "l_normal",
            "_ZN4lean8internalEv",
        }
        candidates = ["l_extern", "l_extern___boxed", "l_export___boxed",
                      "custom_export", "l_initialized", "removed_upstream"]
        slim, full = exports.select_exports(symbols, candidates)
        self.assertTrue({"_main", "_malloc", "_free", "_lean_wasm_compile",
                         "_initialize_Init", "_runtime_initialize_Init",
                         "_meta_initialize_Init",
                         "_l_extern___boxed", "_l_export___boxed",
                         "_custom_export", "_l_initialized"} <= set(slim))
        self.assertNotIn("_removed_upstream", full)
        self.assertNotIn("_l_normal", full)
        self.assertNotIn("__ZN4lean8internalEv", full)
        self.assertEqual(set(full) - set(slim), {"_l_normal___boxed"})
        self.assertEqual(full, sorted(set(full)))

    def test_required_browser_entry_points_cannot_disappear(self):
        with self.assertRaisesRegex(ValueError, "lean_wasm_compile"):
            exports.select_exports({"main", "lean_mk_string"}, [])

    def test_emscripten_main_alias(self):
        slim, _ = exports.select_exports(
            {"__main_argc_argv", "lean_wasm_compile", "lean_mk_string"}, [])
        self.assertIn("_main", slim)

    def test_nm_archive_headers_and_undefined_symbols(self):
        nm = "libLean.a[Shell.c.o]:\nlean_wasm_compile T 0 10\nmissing U 0 0\n\nl_cell D 0 4\n"
        self.assertEqual(exports.parse_nm(nm), {"lean_wasm_compile", "l_cell"})
        self.assertEqual(exports.parse_nm(nm, {"D", "B", "R", "V"}), {"l_cell"})


if __name__ == "__main__":
    unittest.main()
