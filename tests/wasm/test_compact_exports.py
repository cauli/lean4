"""Exercise compact flag consumption without configuring or building Lean."""
import importlib.util
import json
import os
from pathlib import Path
import re
import shlex
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[2]
SETTING = "-sDECLARE_ASM_MODULE_EXPORTS=0"


def cmake_block(source, marker):
    blocks = []
    depth = 0
    start = 0
    lines = source.splitlines(keepends=True)
    for index, line in enumerate(lines):
        command = re.match(r"\s*(if|endif)\s*\(", line)
        if command:
            if command[1] == "if":
                if depth == 0:
                    start = index
                depth += 1
            else:
                depth -= 1
                if depth == 0:
                    block = "".join(lines[start:index + 1])
                    if marker in block:
                        blocks.append(block)
    if depth or len(blocks) != 1:
        raise AssertionError(f"expected one balanced CMake block containing {marker!r}")
    return blocks[0]


class CompactOptionsTest(unittest.TestCase):
    def evaluate(self, option=None, system="Emscripten"):
        source = (ROOT / "src/CMakeLists.txt").read_text()
        settings = cmake_block(source, 'set(EMSCRIPTEN_SETTINGS ')
        executable = cmake_block(source, '-sEXPORTED_FUNCTIONS=@${CMAKE_BINARY_DIR}/emscripten-exports.txt')
        variables = ["EMSCRIPTEN_COMPACT_EXPORTS", "EMSCRIPTEN_SETTINGS", "EMSCRIPTEN_LINK_SETTINGS",
                     "LEAN_EXE_LINKER_FLAGS", "LEANC_EXTRA_CC_FLAGS", "LEAN_EXTRA_CXX_FLAGS"]
        with tempfile.TemporaryDirectory(prefix="lean compact cmake ") as temporary:
            root = Path(temporary)
            fixture = root / "options.cmake"
            fixture.write_text('cmake_minimum_required(VERSION 3.21)\n'
                               f'set(CMAKE_SYSTEM_NAME "{system}")\n'
                               'set(LEAN_SOURCE_DIR "/source with spaces/src")\n'
                               'set(CMAKE_BINARY_DIR "/build with spaces/stage1")\n'
                               'set(LIB "/build with spaces/stage1/lib")\n'
                               + settings + executable + "\n"
                               + "\n".join(f'message("RESULT:{name}=${{{name}}}")' for name in variables))
            command = ["cmake"]
            if option is not None:
                command.append(f"-DEMSCRIPTEN_COMPACT_EXPORTS={option}")
            result = subprocess.run(command + ["-P", str(fixture)], text=True,
                                    capture_output=True, check=True, timeout=10)
        return dict(line.removeprefix("RESULT:").split("=", 1)
                    for line in result.stderr.splitlines() if line.startswith("RESULT:"))

    def test_default_and_off_are_noncompact(self):
        for option in (None, "OFF"):
            with self.subTest(option=option):
                values = self.evaluate(option)
                self.assertEqual(values["EMSCRIPTEN_COMPACT_EXPORTS"], "OFF")
                self.assertNotIn(SETTING, values["LEAN_EXE_LINKER_FLAGS"])

    def test_on_changes_only_executable_link(self):
        off = self.evaluate("OFF")
        on = self.evaluate("ON")
        self.assertEqual(on["EMSCRIPTEN_COMPACT_EXPORTS"], "ON")
        self.assertEqual(on["LEAN_EXE_LINKER_FLAGS"].count(SETTING), 1)
        self.assertEqual(on["LEAN_EXE_LINKER_FLAGS"].replace(" " + SETTING, ""), off["LEAN_EXE_LINKER_FLAGS"])
        for name in ("EMSCRIPTEN_SETTINGS", "EMSCRIPTEN_LINK_SETTINGS", "LEANC_EXTRA_CC_FLAGS", "LEAN_EXTRA_CXX_FLAGS"):
            self.assertEqual(on[name], off[name])
            self.assertNotIn("DECLARE_ASM_MODULE_EXPORTS", on[name])
        link = on["LEAN_EXE_LINKER_FLAGS"]
        self.assertIn("-sEXPORTED_FUNCTIONS=@/build with spaces/stage1/emscripten-exports.txt", link)
        self.assertNotIn("emscripten-exports-slim", link)
        self.assertNotIn("@/source with spaces/src/emscripten-exports.txt", link)
        self.assertNotIn("--js-library", link)
        for flag in ("DISABLE_EXCEPTION_CATCHING=0", "-pthread", "MAIN_MODULE=2", "PTHREAD_POOL_SIZE=4",
                     "STACK_SIZE=16777216", "INITIAL_MEMORY=67108864", "MAXIMUM_MEMORY=4294967296"):
            self.assertIn(flag, link)
        self.assertNotIn("-fwasm-exceptions", link)

    def test_native_does_not_receive_wasm_flags(self):
        values = self.evaluate("ON", "Linux")
        self.assertEqual(values["LEAN_EXE_LINKER_FLAGS"], "")
        self.assertEqual(values["LEANC_EXTRA_CC_FLAGS"], "")
        self.assertEqual(values["LEAN_EXTRA_CXX_FLAGS"], "")

    def test_matrix_only_opts_in_wasm(self):
        matrix = json.loads((ROOT / ".github/browser-build-matrix.json").read_text())
        for row in matrix:
            options = shlex.split(row["CMAKE_OPTIONS"])
            with self.subTest(job=row["name"]):
                if row.get("wasm"):
                    self.assertIn("-DEMSCRIPTEN_COMPACT_EXPORTS=ON", options)
                    self.assertIn("-DEMSCRIPTEN_DEBUG=OFF", options)
                else:
                    self.assertFalse(any("EMSCRIPTEN_COMPACT_EXPORTS" in arg for arg in options))

    def test_docker_full_build_opts_in(self):
        source = (ROOT / "docker-wasm/build.sh").read_text()
        self.assertIn("-DEMSCRIPTEN_COMPACT_EXPORTS=ON", shlex.split(source))
        self.assertIn("-DEMSCRIPTEN_DEBUG=${EMSCRIPTEN_DEBUG:-OFF}", source)

    def test_top_level_forwards_untyped_option_to_stage1(self):
        source = (ROOT / "CMakeLists.txt").read_text()
        start = source.index("get_cmake_property(vars CACHE_VARIABLES)")
        end = source.index("\nendforeach()", start) + len("\nendforeach()")
        forwarding = source[start:end]
        with tempfile.TemporaryDirectory() as temporary:
            fixture = Path(temporary) / "forward.cmake"
            fixture.write_text('cmake_minimum_required(VERSION 3.21)\n' + forwarding
                               + '\nmessage("FORWARDED:${CL_ARGS}")\n')
            result = subprocess.run(["cmake", "-DEMSCRIPTEN_COMPACT_EXPORTS=ON", "-P", str(fixture)],
                                    text=True, capture_output=True, check=True, timeout=10)
        self.assertIn("FORWARDED:-DEMSCRIPTEN_COMPACT_EXPORTS=ON", result.stderr)
        stage1 = source[source.index("ExternalProject_Add(\n  stage1"):]
        self.assertIn("${CL_ARGS} ${STAGE1_ARGS}", stage1.split("ExternalProject_Add(", 2)[1])


class RelinkSelectionTest(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix="lean compact relink ")
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        self.kit = self.root / "kit with spaces"
        self.kit.mkdir()
        self.version = "emcc (Emscripten) 4.0.22 (test)"
        (self.kit / "emscripten-version.txt").write_text(self.version + "\n")
        (self.kit / "emscripten-exports.txt").write_text("_full\n_boxed___boxed\n")
        (self.kit / "emscripten-exports-slim.txt").write_text("_full\n")
        (self.kit / "wasm-dlsym.js").write_text("must not be loaded automatically")
        self.capture = self.root / "argv.json"
        fake = self.root / "emcc"
        fake.write_text('#!/usr/bin/env python3\n'
                        'import json, os, pathlib, sys\n'
                        'if sys.argv[1:] == ["--version"]:\n'
                        '    print(os.environ["TEST_EMCC_VERSION"])\n'
                        'else:\n'
                        '    pathlib.Path(os.environ["TEST_CAPTURE"]).write_text(json.dumps(sys.argv[1:]))\n'
                        '    output = pathlib.Path(sys.argv[sys.argv.index("-o") + 1])\n'
                        '    output.write_text("test glue")\n'
                        '    output.with_suffix(".wasm").write_text("test wasm")\n')
        fake.chmod(0o755)
        self.env = {**os.environ, "PATH": str(self.root) + os.pathsep + os.environ["PATH"],
                    "TEST_CAPTURE": str(self.capture), "TEST_EMCC_VERSION": self.version}

    def relink(self, *extra, check=True):
        result = subprocess.run(["bash", str(ROOT / "docker-wasm/relink-local.sh"), str(self.kit),
                                 str(self.root / "output with spaces"), *extra], env=self.env,
                                text=True, capture_output=True, check=check, timeout=10)
        return result, json.loads(self.capture.read_text()) if self.capture.exists() else None

    def test_default_full_list_and_no_implicit_adapter_or_compact_flag(self):
        _, argv = self.relink("-O3")
        self.assertIn(f"-sEXPORTED_FUNCTIONS=@{self.kit / 'emscripten-exports.txt'}", argv)
        self.assertFalse(any("DECLARE_ASM_MODULE_EXPORTS" in arg for arg in argv))
        self.assertNotIn("--js-library", argv)

    def test_explicit_compact_full_and_separate_noncompact_slim(self):
        full = f"-sEXPORTED_FUNCTIONS=@{self.kit / 'emscripten-exports.txt'}"
        slim = f"-sEXPORTED_FUNCTIONS=@{self.kit / 'emscripten-exports-slim.txt'}"
        _, full_argv = self.relink("-O3", full, SETTING)
        self.assertEqual(full_argv[-3:], ["-O3", full, SETTING])
        _, slim_argv = self.relink("-O3", slim)
        self.assertEqual([arg for arg in slim_argv if arg.startswith("-sEXPORTED_FUNCTIONS=")][-1], slim)
        self.assertFalse(any("DECLARE_ASM_MODULE_EXPORTS" in arg for arg in slim_argv))
        self.assertNotIn("--js-library", slim_argv)
        self.assertEqual((self.kit / "emscripten-exports.txt").read_text(), "_full\n_boxed___boxed\n")

    def test_sdk_mismatch_fails_before_link(self):
        self.env["TEST_EMCC_VERSION"] = "emcc (Emscripten) 6.0.0 (test)"
        result, argv = self.relink(check=False)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn("Emscripten version differs", result.stderr)
        self.assertIsNone(argv)


class BuiltOutputTest(unittest.TestCase):
    def setUp(self):
        spec = importlib.util.spec_from_file_location("compact_check", ROOT / "tests/wasm/check-compact-exports.py")
        self.checker = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(self.checker)
        self.temporary = tempfile.TemporaryDirectory(prefix="lean built glue ")
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        self.full = self.root / "full.js"
        self.slim = self.root / "slim.js"
        self.compact = (b"var assignWasmExports=wasmExports=>{for(var[name,exportedSymbol]of Object.entries(wasmExports)){"
                        b"globalThis[name]=Module[name]=exportedSymbol}};")
        self.classic = (b'function assignWasmExports(wasmExports){'
                        b'_lean_wasm_compile=Module["_lean_wasm_compile"]=wasmExports["lean_wasm_compile"];}')
        self.write(self.full, self.compact, self.checker.FULL_SIZE_RANGE[0])
        self.write(self.slim, self.classic, self.checker.SLIM_SIZE_RANGE[0])

    def write(self, path, body, size):
        path.write_bytes(body + b" " * (size - len(body)))

    def test_expected_full_and_slim_assignment(self):
        result = self.checker.check_built_outputs(self.full, self.slim)
        self.assertEqual(result["full"]["assignment"], "compact")
        self.assertEqual(result["slim"]["assignment"], "classic")

    def test_noncompact_full_is_rejected_even_at_compact_size(self):
        self.write(self.full, self.classic, self.checker.FULL_SIZE_RANGE[0])
        with self.assertRaisesRegex(ValueError, "full JS must use compact"):
            self.checker.check_built_outputs(self.full, self.slim)

    def test_compact_slim_is_rejected_even_at_classic_size(self):
        self.write(self.slim, self.compact, self.checker.SLIM_SIZE_RANGE[0])
        with self.assertRaisesRegex(ValueError, "slim JS must use classic"):
            self.checker.check_built_outputs(self.full, self.slim)

    def test_missing_persistent_api_is_rejected(self):
        self.write(self.slim, b"function assignWasmExports(wasmExports){}", self.checker.SLIM_SIZE_RANGE[0])
        with self.assertRaisesRegex(ValueError, "persistent compile export"):
            self.checker.check_built_outputs(self.full, self.slim)

    def test_truncated_and_oversized_outputs_are_rejected(self):
        for path, bound in ((self.full, self.checker.FULL_SIZE_RANGE),
                            (self.slim, self.checker.SLIM_SIZE_RANGE)):
            original = path.read_bytes()
            for size in (bound[0] - 1, bound[1] + 1):
                with self.subTest(file=path.name, size=size):
                    with path.open("wb") as stream:
                        stream.truncate(size)
                    with self.assertRaisesRegex(ValueError, "outside pinned-SDK bounds"):
                        self.checker.check_built_outputs(self.full, self.slim)
            path.write_bytes(original)

    def test_built_cli_never_needs_sdk_or_node(self):
        result = subprocess.run([
            sys.executable, str(ROOT / "tests/wasm/check-compact-exports.py"),
            "--check-built", "--full-js", str(self.full), "--slim-js", str(self.slim),
        ], env={**os.environ, "PATH": str(self.root)}, text=True,
           capture_output=True, check=True, timeout=10)
        self.assertEqual(json.loads(result.stdout)["full"]["assignment"], "compact")

    def test_partial_cli_cannot_fall_through_to_sdk_probe(self):
        script = str(ROOT / "tests/wasm/check-compact-exports.py")
        for args in (("--check-built", "--full-js", str(self.full)), ("--full-js", str(self.full))):
            with self.subTest(args=args):
                result = subprocess.run([sys.executable, script, *args],
                                        env={**os.environ, "PATH": str(self.root)},
                                        text=True, capture_output=True, timeout=10)
                self.assertEqual(result.returncode, 2)
                self.assertIn("require", result.stderr)


if __name__ == "__main__":
    unittest.main()
