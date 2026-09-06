// Lean compiler output
// Module: Lean.Shell
// Imports: import Lean.Elab.Frontend import Lean.Elab.ParseImportsFast import Lean.Server.Watchdog import Lean.Server.FileWorker import Lean.Compiler.LCNF.EmitC import Init.System.Platform import Lean.Compiler.Options import Lean.Compiler.InitAttr
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_parseHeader(lean_object*);
lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_enable_initializer_execution();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Frontend_processCommand(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Frontend_getCommandState___redArg(lean_object*);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toList(lean_object*);
lean_object* l_Lean_Widget_msgToInteractiveDiagnostic(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Widget_InteractiveDiagnostic_toDiagnostic(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_MessageData_kind(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Json_compress(lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_IO_eprint___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint32_t lean_internal_get_hardware_concurrency(lean_object*);
lean_object* lean_get_stderr();
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern lean_object* l_Lean_version_specialDesc;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_versionStringCore;
extern uint8_t l_Lean_version_isRelease;
lean_object* l_Lean_runInitAttrsForModules(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
extern lean_object* l_Lean_githash;
extern lean_object* l_System_Platform_target;
lean_object* l_String_toName(lean_object*);
lean_object* lean_load_dynlib(lean_object*);
lean_object* lean_load_plugin(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_internal_has_llvm_backend(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Elab_loadHeaderSnapshotCmdState(lean_object*);
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
lean_object* l_Lean_withImporting___redArg(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_io_exit(uint8_t);
lean_object* l_Lean_printImportsJson(lean_object*);
lean_object* lean_display_cumulative_profiling_times();
lean_object* l_Lean_Options_mergeBy(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runFrontend(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_moduleNameOfFileName(lean_object*, lean_object*);
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
uint8_t l_String_Slice_beq(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_Lean_Elab_printImportSrcs(lean_object*, lean_object*);
lean_object* l_Lean_Elab_printImports(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lean_get_stdin();
lean_object* l_IO_FS_Stream_readBinToEnd(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_IO_FS_Stream_lines(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Server_Watchdog_watchdogMain(lean_object*);
lean_object* l_Lean_Server_FileWorker_workerMain(lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_getBuildDir();
lean_object* l_Lean_getLibDir(lean_object*);
lean_object* lean_decode_lossy_utf8(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_decodeLossyUTF8___boxed(lean_object*);
uint32_t lean_eval_main(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_init_llvm();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object*);
lean_object* lean_emit_llvm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmEnvCache;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_unsafe__3();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_unsafe__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fileName"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "line"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "column"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__3_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caption"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isSilent"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__6_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "keepFullRange"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__7_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__8_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "endPos"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__9_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "severity"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__10 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__10_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "information"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__11 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__11_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__11_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__12 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__12_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__13_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__13_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__14_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__15 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__15_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__15_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__16 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__16_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__3___boxed(lean_object*);
static const lean_array_object l___private_Lean_Shell_0__Lean_wasmCompile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_wasmCompile___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_wasmCompile___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
LEAN_EXPORT lean_object* lean_wasm_compile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmCompile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_wasmReset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "[WASM] Environment cache cleared"};
static const lean_object* l___private_Lean_Shell_0__Lean_wasmReset___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_wasmReset___closed__0_value;
LEAN_EXPORT lean_object* lean_wasm_reset();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmReset___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__4();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__10();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__10___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "WASM snapshot load failed: "};
static const lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___closed__0_value;
LEAN_EXPORT lean_object* lean_wasm_load_snapshot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___boxed(lean_object*, lean_object*);
uint8_t lean_internal_has_address_sanitizer(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object*);
uint8_t lean_internal_is_multi_thread(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object*);
uint8_t lean_internal_is_debug(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object*);
lean_object* lean_internal_get_build_type(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object*);
lean_object* lean_internal_get_default_max_memory(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object*);
lean_object* lean_internal_set_max_memory(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object*, lean_object*);
lean_object* lean_internal_get_default_max_heartbeat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object*);
lean_object* lean_internal_set_max_heartbeat(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object*, lean_object*);
uint8_t lean_internal_get_default_verbose(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object*);
lean_object* lean_internal_set_exit_on_panic(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object*, lean_object*);
lean_object* lean_internal_set_thread_stack_size(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object*, lean_object*);
lean_object* lean_internal_enable_debug(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__2_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__3;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__4;
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-pre"};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shortVersionString;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean (version "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__1_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__3_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__4;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__6;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__7;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_versionHeader;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_featuresString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_featuresString___closed__0;
static const lean_string_object l___private_Lean_Shell_0__Lean_featuresString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l___private_Lean_Shell_0__Lean_featuresString___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_featuresString___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_featuresString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[LLVM]"};
static const lean_object* l___private_Lean_Shell_0__Lean_featuresString___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_featuresString___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_featuresString;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "      -D name=value      set a configuration option (see set_option command)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "      --plugin=file[=fn] load and initialize Lean shared library for registering linters etc."};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "      --load-dynlib=file load shared library to make its symbols available to the interpreter"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "      --setup=file       JSON file with module setup data (supersedes the file's header)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "      --json             report Lean output (e.g., messages) as JSON (one per line)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "  -E, --error=kind       report Lean messages of kind as errors"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "      --deps             just print dependencies of a Lean input"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "      --src-deps         just print dependency sources of a Lean input"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "      --print-prefix     print the installation prefix for Lean and exit"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "      --print-libdir     print the installation directory for Lean's built-in libraries and exit"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "      --profile          display elaboration/type checking time for each definition/theorem"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__10_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "      --stats            display environment statistics"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = "      --incr-save=file   EXPERIMENTAL: save a full incremental snapshot of post-elaboration state at end of run"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "      --incr-load=file   EXPERIMENTAL: reuse a snapshot saved by `--incr-(header-)save` at start of run"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "      --incr-header-save=file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__14_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "                         EXPERIMENTAL: like `--incr-save`, but save only the header (state after importing)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__15 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__15_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__16;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "      --debug=tag        enable assertions with the given tag"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Miscellaneous"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "  -h, --help             display this message"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "      --features         display features compiler provides (eg. LLVM support)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__20_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "  -v, --version          display version information"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "  -V, --short-version    display short version number"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__22_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "  -g, --githash          display the git commit hash number used to build this binary"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__23 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__23_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "      --run <file>       call the 'main' definition in the given file with the remaining arguments"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__24 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__24_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "  -o, --o=oname          create olean file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "  -i, --i=iname          create ilean file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "  -c, --c=fname          name of the C output file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__27_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -b, --bc=fname         name of the LLVM bitcode file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__28 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__28_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "      --stdin            take input from stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__29 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__29_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "  -R, --root=dir         set package root directory from which the module name\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "                         of the input file is calculated\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "                         (default: current working directory)\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "  -t, --trust=num        trust level (default: max) 0 means do not trust any macro,\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "                         and type check all imported modules\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -q, --quiet            do not print verbose messages"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "  -M, --memory=num       maximum amount of memory that should be used by Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "                         (in megabytes)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "  -T, --timeout=num      maximum number of memory allocations per task"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__38 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "                         this is a deterministic way of interrupting long running tasks"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__39 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__40;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "  -j, --threads=num      number of threads used to process lean files"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__41 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__41_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "  -s, --tstack=num       thread stack size in Kb"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__42 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "      --server           start lean in server mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__43 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "      --worker           start lean in server-worker mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__44 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "max_memory"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 81, 94, 214, 186, 212, 139, 105)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Shell"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(32, 69, 169, 154, 100, 37, 235, 16)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(89, 66, 50, 199, 34, 209, 110, 139)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 66, 221, 81, 125, 65, 65, 89)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxMemory"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(28, 55, 113, 152, 101, 101, 83, 88)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_maxMemory;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(108, 201, 121, 146, 245, 42, 97, 81)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 41, 251, 70, 36, 12, 36, 182)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_timeout;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verbose"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 17, 151, 162, 143, 207, 214, 14)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 79, 210, 200, 161, 113, 65, 201)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_verbose;
lean_object* lean_internal_get_option_overrides(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getOptionOverrides___boxed(lean_object*);
uint32_t lean_internal_get_believer_trust_level(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1;
LEAN_EXPORT uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0;
LEAN_EXPORT uint32_t l___private_Lean_Shell_0__Lean_defaultNumThreads;
static const lean_array_object l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1;
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object*);
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_checkOptArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "argument missing for option '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_checkOptArg___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_checkOptArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_checkOptArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid -D parameter, argument must contain '='"};
static const lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_setConfigOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value)}};
static const lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "error: expected numeric argument for option '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "error: argument value for '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Unknown command line option\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "H"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Z"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Y"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "E"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-l"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-p"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "D"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-t' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-t"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-t'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "T"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-T"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-T'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "M"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-M"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-M'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "R"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-R"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-s' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-s'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "j"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-j' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-j"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-j'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37_value;
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "#lang"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Shell_0__Lean_shellMain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_shellMain___closed__1;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LLVM code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__4_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__5;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__6;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__7_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__7_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__8_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__9_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__10_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__11;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__12;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__13;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__14;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__15;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__16;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__17;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__18;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "failed to create '"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__20_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__20_value),LEAN_SCALAR_PTR_LITERAL(37, 142, 62, 167, 41, 238, 22, 79)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lean4"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__22_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__23;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__24;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown language '"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Expected exactly one file name"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<stdin>"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__27_value;
LEAN_EXPORT lean_object* lean_shell_main(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_decodeLossyUTF8___boxed(lean_object* v_a_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_decode_lossy_utf8(v_a_2_);
lean_dec_ref(v_a_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object* v_env_8_, lean_object* v_opts_9_, lean_object* v_args_10_, lean_object* v_a_00___x40___internal___hyg_11_){
_start:
{
uint32_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = lean_eval_main(v_env_8_, v_opts_9_, v_args_10_);
lean_dec(v_args_10_);
lean_dec_ref(v_opts_9_);
lean_dec_ref(v_env_8_);
v_r_13_ = lean_box_uint32(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object* v_a_00___x40___internal___hyg_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lean_init_llvm();
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object* v_env_21_, lean_object* v_modName_22_, lean_object* v_filepath_23_, lean_object* v_a_00___x40___internal___hyg_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lean_emit_llvm(v_env_21_, v_modName_22_, v_filepath_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2_));
v___x_30_ = lean_st_mk_ref(v___x_29_);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2____boxed(lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2_();
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_unsafe__3(){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_enable_initializer_execution();
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_unsafe__3___boxed(lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_unsafe__3();
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__0(size_t v_sz_38_, size_t v_i_39_, lean_object* v_bs_40_){
_start:
{
uint8_t v___x_41_; 
v___x_41_ = lean_usize_dec_lt(v_i_39_, v_sz_38_);
if (v___x_41_ == 0)
{
return v_bs_40_;
}
else
{
lean_object* v_v_42_; lean_object* v_module_43_; lean_object* v___x_44_; lean_object* v_bs_x27_45_; size_t v___x_46_; size_t v___x_47_; lean_object* v___x_48_; 
v_v_42_ = lean_array_uget_borrowed(v_bs_40_, v_i_39_);
v_module_43_ = lean_ctor_get(v_v_42_, 0);
lean_inc(v_module_43_);
v___x_44_ = lean_unsigned_to_nat(0u);
v_bs_x27_45_ = lean_array_uset(v_bs_40_, v_i_39_, v___x_44_);
v___x_46_ = ((size_t)1ULL);
v___x_47_ = lean_usize_add(v_i_39_, v___x_46_);
v___x_48_ = lean_array_uset(v_bs_x27_45_, v_i_39_, v_module_43_);
v_i_39_ = v___x_47_;
v_bs_40_ = v___x_48_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__0___boxed(lean_object* v_sz_50_, lean_object* v_i_51_, lean_object* v_bs_52_){
_start:
{
size_t v_sz_boxed_53_; size_t v_i_boxed_54_; lean_object* v_res_55_; 
v_sz_boxed_53_ = lean_unbox_usize(v_sz_50_);
lean_dec(v_sz_50_);
v_i_boxed_54_ = lean_unbox_usize(v_i_51_);
lean_dec(v_i_51_);
v_res_55_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__0(v_sz_boxed_53_, v_i_boxed_54_, v_bs_52_);
return v_res_55_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___redArg(lean_object* v_xs_56_, lean_object* v_ys_57_, lean_object* v_x_58_){
_start:
{
lean_object* v_zero_59_; uint8_t v_isZero_60_; 
v_zero_59_ = lean_unsigned_to_nat(0u);
v_isZero_60_ = lean_nat_dec_eq(v_x_58_, v_zero_59_);
if (v_isZero_60_ == 1)
{
lean_dec(v_x_58_);
return v_isZero_60_;
}
else
{
lean_object* v_one_61_; lean_object* v_n_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v_one_61_ = lean_unsigned_to_nat(1u);
v_n_62_ = lean_nat_sub(v_x_58_, v_one_61_);
lean_dec(v_x_58_);
v___x_63_ = lean_array_fget_borrowed(v_xs_56_, v_n_62_);
v___x_64_ = lean_array_fget_borrowed(v_ys_57_, v_n_62_);
v___x_65_ = lean_name_eq(v___x_63_, v___x_64_);
if (v___x_65_ == 0)
{
lean_dec(v_n_62_);
return v___x_65_;
}
else
{
v_x_58_ = v_n_62_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___redArg___boxed(lean_object* v_xs_67_, lean_object* v_ys_68_, lean_object* v_x_69_){
_start:
{
uint8_t v_res_70_; lean_object* v_r_71_; 
v_res_70_ = l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___redArg(v_xs_67_, v_ys_68_, v_x_69_);
lean_dec_ref(v_ys_68_);
lean_dec_ref(v_xs_67_);
v_r_71_ = lean_box(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2(lean_object* v_key_75_, lean_object* v_as_76_, size_t v_sz_77_, size_t v_i_78_, lean_object* v_b_79_){
_start:
{
lean_object* v_a_82_; uint8_t v___x_86_; 
v___x_86_ = lean_usize_dec_lt(v_i_78_, v_sz_77_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v_b_79_);
return v___x_87_;
}
else
{
lean_object* v_a_88_; lean_object* v_fst_89_; lean_object* v_snd_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_105_; 
lean_dec_ref(v_b_79_);
v_a_88_ = lean_array_uget(v_as_76_, v_i_78_);
v_fst_89_ = lean_ctor_get(v_a_88_, 0);
v_snd_90_ = lean_ctor_get(v_a_88_, 1);
v_isSharedCheck_105_ = !lean_is_exclusive(v_a_88_);
if (v_isSharedCheck_105_ == 0)
{
v___x_92_ = v_a_88_;
v_isShared_93_ = v_isSharedCheck_105_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_snd_90_);
lean_inc(v_fst_89_);
lean_dec(v_a_88_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_105_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_94_ = lean_box(0);
v___x_95_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2___closed__0));
v___x_96_ = lean_array_get_size(v_fst_89_);
v___x_97_ = lean_array_get_size(v_key_75_);
v___x_98_ = lean_nat_dec_eq(v___x_96_, v___x_97_);
if (v___x_98_ == 0)
{
lean_del_object(v___x_92_);
lean_dec(v_snd_90_);
lean_dec(v_fst_89_);
v_a_82_ = v___x_95_;
goto v___jp_81_;
}
else
{
uint8_t v___x_99_; 
v___x_99_ = l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___redArg(v_fst_89_, v_key_75_, v___x_96_);
lean_dec(v_fst_89_);
if (v___x_99_ == 0)
{
lean_del_object(v___x_92_);
lean_dec(v_snd_90_);
v_a_82_ = v___x_95_;
goto v___jp_81_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_100_, 0, v_snd_90_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 1, v___x_94_);
lean_ctor_set(v___x_92_, 0, v___x_100_);
v___x_102_ = v___x_92_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v___x_94_);
v___x_102_ = v_reuseFailAlloc_104_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_103_; 
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
return v___x_103_;
}
}
}
}
}
v___jp_81_:
{
size_t v___x_83_; size_t v___x_84_; 
v___x_83_ = ((size_t)1ULL);
v___x_84_ = lean_usize_add(v_i_78_, v___x_83_);
lean_inc_ref(v_a_82_);
v_i_78_ = v___x_84_;
v_b_79_ = v_a_82_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2___boxed(lean_object* v_key_106_, lean_object* v_as_107_, lean_object* v_sz_108_, lean_object* v_i_109_, lean_object* v_b_110_, lean_object* v___y_111_){
_start:
{
size_t v_sz_boxed_112_; size_t v_i_boxed_113_; lean_object* v_res_114_; 
v_sz_boxed_112_ = lean_unbox_usize(v_sz_108_);
lean_dec(v_sz_108_);
v_i_boxed_113_ = lean_unbox_usize(v_i_109_);
lean_dec(v_i_109_);
v_res_114_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2(v_key_106_, v_as_107_, v_sz_boxed_112_, v_i_boxed_113_, v_b_110_);
lean_dec_ref(v_as_107_);
lean_dec_ref(v_key_106_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor(lean_object* v_imports_117_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; size_t v_sz_121_; size_t v___x_122_; lean_object* v_key_123_; lean_object* v___x_124_; size_t v_sz_125_; lean_object* v___x_126_; 
v___x_119_ = l___private_Lean_Shell_0__Lean_wasmEnvCache;
v___x_120_ = lean_st_ref_get(v___x_119_);
v_sz_121_ = lean_array_size(v_imports_117_);
v___x_122_ = ((size_t)0ULL);
lean_inc_ref(v_imports_117_);
v_key_123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__0(v_sz_121_, v___x_122_, v_imports_117_);
v___x_124_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2___closed__0));
v_sz_125_ = lean_array_size(v___x_120_);
v___x_126_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__2(v_key_123_, v___x_120_, v_sz_125_, v___x_122_, v___x_124_);
lean_dec(v___x_120_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_163_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_163_ == 0)
{
v___x_129_ = v___x_126_;
v_isShared_130_ = v_isSharedCheck_163_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_163_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v_fst_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_161_; 
v_fst_131_ = lean_ctor_get(v_a_127_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v_a_127_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v_a_127_, 1);
lean_dec(v_unused_162_);
v___x_133_ = v_a_127_;
v_isShared_134_ = v_isSharedCheck_161_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_fst_131_);
lean_dec(v_a_127_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_161_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
if (lean_obj_tag(v_fst_131_) == 0)
{
lean_object* v___x_135_; lean_object* v___x_136_; uint32_t v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
lean_del_object(v___x_129_);
v___x_135_ = lean_enable_initializer_execution();
v___x_136_ = l_Lean_Options_empty;
v___x_137_ = 0;
v___x_138_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor___closed__0));
v___x_139_ = 1;
v___x_140_ = 0;
v___x_141_ = lean_box(1);
v___x_142_ = l_Lean_importModules(v_imports_117_, v___x_136_, v___x_137_, v___x_138_, v___x_139_, v___x_139_, v___x_140_, v___x_141_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_156_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_156_ == 0)
{
v___x_145_ = v___x_142_;
v_isShared_146_ = v_isSharedCheck_156_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_156_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_147_ = lean_st_ref_take(v___x_119_);
lean_inc(v_a_143_);
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 1, v_a_143_);
lean_ctor_set(v___x_133_, 0, v_key_123_);
v___x_149_ = v___x_133_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_key_123_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v_a_143_);
v___x_149_ = v_reuseFailAlloc_155_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_150_ = lean_array_push(v___x_147_, v___x_149_);
v___x_151_ = lean_st_ref_set(v___x_119_, v___x_150_);
if (v_isShared_146_ == 0)
{
v___x_153_ = v___x_145_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_143_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
else
{
lean_del_object(v___x_133_);
lean_dec_ref(v_key_123_);
return v___x_142_;
}
}
else
{
lean_object* v_val_157_; lean_object* v___x_159_; 
lean_del_object(v___x_133_);
lean_dec_ref(v_key_123_);
lean_dec_ref(v_imports_117_);
v_val_157_ = lean_ctor_get(v_fst_131_, 0);
lean_inc(v_val_157_);
lean_dec_ref_known(v_fst_131_, 1);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 0, v_val_157_);
v___x_159_ = v___x_129_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_val_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v_key_123_);
lean_dec_ref(v_imports_117_);
v_a_164_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_126_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_126_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor___boxed(lean_object* v_imports_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor(v_imports_172_);
return v_res_174_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1(lean_object* v_xs_175_, lean_object* v_ys_176_, lean_object* v_hsz_177_, lean_object* v_x_178_, lean_object* v_x_179_){
_start:
{
uint8_t v___x_180_; 
v___x_180_ = l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___redArg(v_xs_175_, v_ys_176_, v_x_178_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1___boxed(lean_object* v_xs_181_, lean_object* v_ys_182_, lean_object* v_hsz_183_, lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
uint8_t v_res_186_; lean_object* v_r_187_; 
v_res_186_ = l_Array_isEqvAux___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__1(v_xs_181_, v_ys_182_, v_hsz_183_, v_x_184_, v_x_185_);
lean_dec_ref(v_ys_182_);
lean_dec_ref(v_xs_181_);
v_r_187_ = lean_box(v_res_186_);
return v_r_187_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1_spec__1(lean_object* v_s_188_){
_start:
{
lean_object* v___x_190_; lean_object* v_putStr_191_; lean_object* v___x_192_; 
v___x_190_ = lean_get_stdout();
v_putStr_191_ = lean_ctor_get(v___x_190_, 4);
lean_inc_ref(v_putStr_191_);
lean_dec_ref(v___x_190_);
v___x_192_ = lean_apply_2(v_putStr_191_, v_s_188_, lean_box(0));
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1_spec__1___boxed(lean_object* v_s_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1_spec__1(v_s_193_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(lean_object* v_s_196_){
_start:
{
uint32_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = 10;
v___x_199_ = lean_string_push(v_s_196_, v___x_198_);
v___x_200_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1_spec__1(v___x_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1___boxed(lean_object* v_s_201_, lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(v_s_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg(lean_object* v_inputCtx_224_, lean_object* v_as_x27_225_, lean_object* v_b_226_){
_start:
{
if (lean_obj_tag(v_as_x27_225_) == 0)
{
lean_object* v___x_228_; 
lean_dec_ref(v_inputCtx_224_);
v___x_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_228_, 0, v_b_226_);
return v___x_228_;
}
else
{
lean_object* v_head_229_; lean_object* v_tail_230_; lean_object* v_fileMap_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v_pos_234_; lean_object* v_fileName_235_; lean_object* v_endPos_236_; uint8_t v_keepFullRange_237_; uint8_t v_severity_238_; uint8_t v_isSilent_239_; lean_object* v_caption_240_; lean_object* v_data_241_; lean_object* v_line_242_; lean_object* v_column_243_; uint8_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___x_300_; lean_object* v___y_302_; 
v_head_229_ = lean_ctor_get(v_as_x27_225_, 0);
v_tail_230_ = lean_ctor_get(v_as_x27_225_, 1);
v_fileMap_231_ = lean_ctor_get(v_inputCtx_224_, 2);
v___x_232_ = 0;
lean_inc(v_head_229_);
lean_inc_ref(v_fileMap_231_);
v___x_233_ = l_Lean_Widget_msgToInteractiveDiagnostic(v_fileMap_231_, v_head_229_, v___x_232_);
v_pos_234_ = lean_ctor_get(v_head_229_, 1);
v_fileName_235_ = lean_ctor_get(v_head_229_, 0);
v_endPos_236_ = lean_ctor_get(v_head_229_, 2);
v_keepFullRange_237_ = lean_ctor_get_uint8(v_head_229_, sizeof(void*)*5);
v_severity_238_ = lean_ctor_get_uint8(v_head_229_, sizeof(void*)*5 + 1);
v_isSilent_239_ = lean_ctor_get_uint8(v_head_229_, sizeof(void*)*5 + 2);
v_caption_240_ = lean_ctor_get(v_head_229_, 3);
v_data_241_ = lean_ctor_get(v_head_229_, 4);
v_line_242_ = lean_ctor_get(v_pos_234_, 0);
v_column_243_ = lean_ctor_get(v_pos_234_, 1);
v___x_244_ = 1;
v___x_245_ = lean_box(0);
v___x_246_ = l_Lean_Widget_InteractiveDiagnostic_toDiagnostic(v___x_233_);
v___x_247_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__0));
lean_inc_ref(v_fileName_235_);
v___x_248_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_248_, 0, v_fileName_235_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_247_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__1));
v___x_251_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__2));
lean_inc(v_line_242_);
v___x_252_ = l_Lean_JsonNumber_fromNat(v_line_242_);
v___x_253_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_251_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__3));
lean_inc(v_column_243_);
v___x_256_ = l_Lean_JsonNumber_fromNat(v_column_243_);
v___x_257_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_255_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_box(0);
v___x_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_258_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_254_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = l_Lean_Json_mkObj(v___x_261_);
lean_dec_ref_known(v___x_261_, 2);
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_250_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___x_300_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__9));
if (lean_obj_tag(v_endPos_236_) == 0)
{
lean_object* v___x_308_; 
v___x_308_ = lean_box(0);
v___y_302_ = v___x_308_;
goto v___jp_301_;
}
else
{
lean_object* v_val_309_; lean_object* v_line_310_; lean_object* v_column_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v_val_309_ = lean_ctor_get(v_endPos_236_, 0);
v_line_310_ = lean_ctor_get(v_val_309_, 0);
v_column_311_ = lean_ctor_get(v_val_309_, 1);
lean_inc(v_line_310_);
v___x_312_ = l_Lean_JsonNumber_fromNat(v_line_310_);
v___x_313_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
v___x_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_251_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
lean_inc(v_column_311_);
v___x_315_ = l_Lean_JsonNumber_fromNat(v_column_311_);
v___x_316_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_255_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v___x_259_);
v___x_319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_314_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = l_Lean_Json_mkObj(v___x_319_);
lean_dec_ref_known(v___x_319_, 2);
v___y_302_ = v___x_320_;
goto v___jp_301_;
}
v___jp_264_:
{
lean_object* v_message_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_message_268_ = lean_ctor_get(v___x_246_, 6);
lean_inc(v_message_268_);
lean_dec_ref(v___x_246_);
lean_inc(v___y_267_);
lean_inc_ref(v___y_265_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___y_265_);
lean_ctor_set(v___x_269_, 1, v___y_267_);
v___x_270_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__4));
lean_inc_ref(v_caption_240_);
v___x_271_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_271_, 0, v_caption_240_);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__5));
v___x_274_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_274_, 0, v_message_268_);
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__6));
v___x_277_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_277_, 0, v_isSilent_239_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__7));
v___x_280_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_280_, 0, v_keepFullRange_237_);
v___x_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_279_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__8));
v___x_283_ = l_Lean_MessageData_kind(v_data_241_);
v___x_284_ = l_Lean_Name_toString(v___x_283_, v___x_244_);
v___x_285_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_282_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___x_259_);
v___x_288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_281_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_278_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_275_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_272_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_269_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_293_, 0, v___y_266_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_263_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_249_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = l_Lean_Json_mkObj(v___x_295_);
lean_dec_ref_known(v___x_295_, 2);
v___x_297_ = l_Lean_Json_compress(v___x_296_);
v___x_298_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(v___x_297_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_dec_ref_known(v___x_298_, 1);
v_as_x27_225_ = v_tail_230_;
v_b_226_ = v___x_245_;
goto _start;
}
else
{
lean_dec_ref(v_inputCtx_224_);
return v___x_298_;
}
}
v___jp_301_:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v___x_300_);
lean_ctor_set(v___x_303_, 1, v___y_302_);
v___x_304_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__10));
switch(v_severity_238_)
{
case 0:
{
lean_object* v___x_305_; 
v___x_305_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__12));
v___y_265_ = v___x_304_;
v___y_266_ = v___x_303_;
v___y_267_ = v___x_305_;
goto v___jp_264_;
}
case 1:
{
lean_object* v___x_306_; 
v___x_306_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__14));
v___y_265_ = v___x_304_;
v___y_266_ = v___x_303_;
v___y_267_ = v___x_306_;
goto v___jp_264_;
}
default: 
{
lean_object* v___x_307_; 
v___x_307_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___closed__16));
v___y_265_ = v___x_304_;
v___y_266_ = v___x_303_;
v___y_267_ = v___x_307_;
goto v___jp_264_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg___boxed(lean_object* v_inputCtx_321_, lean_object* v_as_x27_322_, lean_object* v_b_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg(v_inputCtx_321_, v_as_x27_322_, v_b_323_);
lean_dec(v_as_x27_322_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___redArg(lean_object* v_a_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_snd_330_; uint8_t v___x_331_; 
v_snd_330_ = lean_ctor_get(v_a_326_, 1);
v___x_331_ = lean_unbox(v_snd_330_);
if (v___x_331_ == 0)
{
lean_object* v_fst_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_362_; 
v_fst_332_ = lean_ctor_get(v_a_326_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v_a_326_);
if (v_isSharedCheck_362_ == 0)
{
lean_object* v_unused_363_; 
v_unused_363_ = lean_ctor_get(v_a_326_, 1);
lean_dec(v_unused_363_);
v___x_334_ = v_a_326_;
v_isShared_335_ = v_isSharedCheck_362_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_fst_332_);
lean_dec(v_a_326_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_362_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; 
v___x_336_ = l_Lean_Elab_Frontend_processCommand(v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_338_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v___x_336_, 1);
v___x_338_ = l_Lean_Elab_Frontend_getCommandState___redArg(v___y_328_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v_messages_340_; lean_object* v___x_341_; lean_object* v___x_343_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v___x_338_, 1);
v_messages_340_ = lean_ctor_get(v_a_339_, 1);
lean_inc_ref(v_messages_340_);
lean_dec(v_a_339_);
v___x_341_ = l_Lean_MessageLog_append(v_fst_332_, v_messages_340_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 1, v_a_337_);
lean_ctor_set(v___x_334_, 0, v___x_341_);
v___x_343_ = v___x_334_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_a_337_);
v___x_343_ = v_reuseFailAlloc_345_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
v_a_326_ = v___x_343_;
goto _start;
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec(v_a_337_);
lean_del_object(v___x_334_);
lean_dec(v_fst_332_);
v_a_346_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_338_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_338_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_del_object(v___x_334_);
lean_dec(v_fst_332_);
v_a_354_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_336_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_336_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
else
{
lean_object* v_fst_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_372_; 
lean_inc(v_snd_330_);
v_fst_364_ = lean_ctor_get(v_a_326_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v_a_326_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; 
v_unused_373_ = lean_ctor_get(v_a_326_, 1);
lean_dec(v_unused_373_);
v___x_366_ = v_a_326_;
v_isShared_367_ = v_isSharedCheck_372_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_fst_364_);
lean_dec(v_a_326_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_372_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_fst_364_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_snd_330_);
v___x_369_ = v_reuseFailAlloc_371_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
lean_object* v___x_370_; 
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
return v___x_370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___redArg___boxed(lean_object* v_a_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___redArg(v_a_374_, v___y_375_, v___y_376_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
return v_res_378_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__3(lean_object* v_x_379_){
_start:
{
if (lean_obj_tag(v_x_379_) == 0)
{
uint8_t v___x_380_; 
v___x_380_ = 0;
return v___x_380_;
}
else
{
lean_object* v_head_381_; lean_object* v_tail_382_; uint8_t v_severity_383_; uint8_t v___x_384_; uint8_t v___x_385_; 
v_head_381_ = lean_ctor_get(v_x_379_, 0);
v_tail_382_ = lean_ctor_get(v_x_379_, 1);
v_severity_383_ = lean_ctor_get_uint8(v_head_381_, sizeof(void*)*5 + 1);
v___x_384_ = 2;
v___x_385_ = l_Lean_instBEqMessageSeverity_beq(v_severity_383_, v___x_384_);
if (v___x_385_ == 0)
{
v_x_379_ = v_tail_382_;
goto _start;
}
else
{
return v___x_385_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__3___boxed(lean_object* v_x_387_){
_start:
{
uint8_t v_res_388_; lean_object* v_r_389_; 
v_res_388_ = l_List_any___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__3(v_x_387_);
lean_dec(v_x_387_);
v_r_389_ = lean_box(v_res_388_);
return v_r_389_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1(void){
_start:
{
uint32_t v___x_392_; lean_object* v___x_393_; 
v___x_392_ = 0;
v___x_393_ = lean_box_uint32(v___x_392_);
return v___x_393_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2(void){
_start:
{
uint32_t v___x_394_; lean_object* v___x_395_; 
v___x_394_ = 1;
v___x_395_ = lean_box_uint32(v___x_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* lean_wasm_compile(lean_object* v_code_396_, lean_object* v_fileName_397_){
_start:
{
uint8_t v___x_399_; lean_object* v___x_400_; lean_object* v_inputCtx_401_; lean_object* v___x_402_; 
v___x_399_ = 1;
v___x_400_ = lean_string_utf8_byte_size(v_code_396_);
v_inputCtx_401_ = l_Lean_Parser_mkInputContext___redArg(v_code_396_, v_fileName_397_, v___x_399_, v___x_400_);
lean_inc_ref(v_inputCtx_401_);
v___x_402_ = l_Lean_Parser_parseHeader(v_inputCtx_401_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v_snd_404_; lean_object* v_fst_405_; lean_object* v_fst_406_; lean_object* v_snd_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_470_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v___x_402_, 1);
v_snd_404_ = lean_ctor_get(v_a_403_, 1);
lean_inc(v_snd_404_);
v_fst_405_ = lean_ctor_get(v_a_403_, 0);
lean_inc(v_fst_405_);
lean_dec(v_a_403_);
v_fst_406_ = lean_ctor_get(v_snd_404_, 0);
v_snd_407_ = lean_ctor_get(v_snd_404_, 1);
v_isSharedCheck_470_ = !lean_is_exclusive(v_snd_404_);
if (v_isSharedCheck_470_ == 0)
{
v___x_409_ = v_snd_404_;
v_isShared_410_ = v_isSharedCheck_470_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_snd_407_);
lean_inc(v_fst_406_);
lean_dec(v_snd_404_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_470_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = l_Lean_Elab_HeaderSyntax_imports(v_fst_405_, v___x_399_);
v___x_412_ = l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor(v___x_411_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v_pos_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_412_, 1);
v_pos_414_ = lean_ctor_get(v_fst_406_, 0);
lean_inc(v_pos_414_);
v___x_415_ = l_Lean_Options_empty;
lean_inc(v_snd_407_);
v___x_416_ = l_Lean_Elab_Command_mkState(v_a_413_, v_snd_407_, v___x_415_);
v___x_417_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_wasmCompile___closed__0));
v___x_418_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v_fst_406_);
lean_ctor_set(v___x_418_, 2, v_pos_414_);
lean_ctor_set(v___x_418_, 3, v___x_417_);
v___x_419_ = lean_st_mk_ref(v___x_418_);
v___x_420_ = 0;
v___x_421_ = lean_box(v___x_420_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v___x_421_);
lean_ctor_set(v___x_409_, 0, v_snd_407_);
v___x_423_ = v___x_409_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_snd_407_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v___x_421_);
v___x_423_ = v_reuseFailAlloc_461_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_424_; 
v___x_424_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___redArg(v___x_423_, v_inputCtx_401_, v___x_419_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_426_; lean_object* v_fst_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_424_, 1);
v___x_426_ = lean_st_ref_get(v___x_419_);
lean_dec(v___x_419_);
lean_dec(v___x_426_);
v_fst_427_ = lean_ctor_get(v_a_425_, 0);
lean_inc(v_fst_427_);
lean_dec(v_a_425_);
v___x_428_ = l_Lean_MessageLog_toList(v_fst_427_);
lean_dec(v_fst_427_);
v___x_429_ = lean_box(0);
v___x_430_ = l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg(v_inputCtx_401_, v___x_428_, v___x_429_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_443_; 
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_443_ == 0)
{
lean_object* v_unused_444_; 
v_unused_444_ = lean_ctor_get(v___x_430_, 0);
lean_dec(v_unused_444_);
v___x_432_ = v___x_430_;
v_isShared_433_ = v_isSharedCheck_443_;
goto v_resetjp_431_;
}
else
{
lean_dec(v___x_430_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_443_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
uint8_t v___x_434_; 
v___x_434_ = l_List_any___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__3(v___x_428_);
lean_dec(v___x_428_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; lean_object* v___x_437_; 
v___x_435_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_435_);
v___x_437_ = v___x_432_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_435_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
else
{
lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_439_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_439_);
v___x_441_ = v___x_432_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_439_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_dec(v___x_428_);
v_a_445_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_430_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_430_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
else
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
lean_dec(v___x_419_);
lean_dec_ref(v_inputCtx_401_);
v_a_453_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_424_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_424_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
}
else
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
lean_del_object(v___x_409_);
lean_dec(v_snd_407_);
lean_dec(v_fst_406_);
lean_dec_ref(v_inputCtx_401_);
v_a_462_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_412_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_412_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_462_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
lean_dec_ref(v_inputCtx_401_);
v_a_471_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_402_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_402_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmCompile___boxed(lean_object* v_code_479_, lean_object* v_fileName_480_, lean_object* v_a_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = lean_wasm_compile(v_code_479_, v_fileName_480_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0(lean_object* v_inst_483_, lean_object* v_a_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___redArg(v_a_484_, v___y_485_, v___y_486_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0___boxed(lean_object* v_inst_489_, lean_object* v_a_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__0(v_inst_489_, v_a_490_, v___y_491_, v___y_492_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2(lean_object* v_inputCtx_495_, lean_object* v_as_496_, lean_object* v_as_x27_497_, lean_object* v_b_498_, lean_object* v_a_499_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___redArg(v_inputCtx_495_, v_as_x27_497_, v_b_498_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2___boxed(lean_object* v_inputCtx_502_, lean_object* v_as_503_, lean_object* v_as_x27_504_, lean_object* v_b_505_, lean_object* v_a_506_, lean_object* v___y_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_List_forIn_x27_loop___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__2(v_inputCtx_502_, v_as_503_, v_as_x27_504_, v_b_505_, v_a_506_);
lean_dec(v_as_x27_504_);
lean_dec(v_as_503_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* lean_wasm_reset(){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_511_ = l___private_Lean_Shell_0__Lean_wasmEnvCache;
v___x_512_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2_));
v___x_513_ = lean_st_ref_set(v___x_511_, v___x_512_);
v___x_514_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_wasmReset___closed__0));
v___x_515_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(v___x_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmReset___boxed(lean_object* v_a_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = lean_wasm_reset();
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__1(lean_object* v_path_518_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l_Lean_Elab_loadHeaderSnapshotCmdState(v_path_518_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__1___boxed(lean_object* v_path_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__1(v_path_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__4(){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lean_enable_initializer_execution();
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__4___boxed(lean_object* v_a_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__4();
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__7(lean_object* v_initModIdxs_528_, lean_object* v_env_529_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = l_Lean_Options_empty;
v___x_532_ = l_Lean_runInitAttrsForModules(v_env_529_, v_initModIdxs_528_, v___x_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__7___boxed(lean_object* v_initModIdxs_533_, lean_object* v_env_534_, lean_object* v_a_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__7(v_initModIdxs_533_, v_env_534_);
lean_dec_ref(v_initModIdxs_533_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__10(){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = lean_enable_initializer_execution();
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__10___boxed(lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Shell_0__Lean_wasmLoadSnapshot_unsafe__10();
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___lam__0(lean_object* v___x_541_, lean_object* v_snd_542_){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = l_Lean_Options_empty;
v___x_545_ = l_Lean_runInitAttrsForModules(v___x_541_, v_snd_542_, v___x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___lam__0___boxed(lean_object* v___x_546_, lean_object* v_snd_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___lam__0(v___x_546_, v_snd_547_);
lean_dec_ref(v_snd_547_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(lean_object* v_s_550_){
_start:
{
lean_object* v___x_552_; lean_object* v_putStr_553_; lean_object* v___x_554_; 
v___x_552_ = lean_get_stderr();
v_putStr_553_ = lean_ctor_get(v___x_552_, 4);
lean_inc_ref(v_putStr_553_);
lean_dec_ref(v___x_552_);
v___x_554_ = lean_apply_2(v_putStr_553_, v_s_550_, lean_box(0));
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0___boxed(lean_object* v_s_555_, lean_object* v_a_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v_s_555_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0(lean_object* v_s_558_){
_start:
{
uint32_t v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_560_ = 10;
v___x_561_ = lean_string_push(v_s_558_, v___x_560_);
v___x_562_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0___boxed(lean_object* v_s_563_, lean_object* v_a_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0(v_s_563_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* lean_wasm_load_snapshot(lean_object* v_path_567_){
_start:
{
lean_object* v_a_570_; lean_object* v___x_592_; 
v___x_592_ = l_Lean_Elab_loadHeaderSnapshotCmdState(v_path_567_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v_fst_594_; lean_object* v_snd_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_628_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_593_);
lean_dec_ref_known(v___x_592_, 1);
v_fst_594_ = lean_ctor_get(v_a_593_, 0);
v_snd_595_ = lean_ctor_get(v_a_593_, 1);
v_isSharedCheck_628_ = !lean_is_exclusive(v_a_593_);
if (v_isSharedCheck_628_ == 0)
{
v___x_597_ = v_a_593_;
v_isShared_598_ = v_isSharedCheck_628_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_snd_595_);
lean_inc(v_fst_594_);
lean_dec(v_a_593_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_628_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_599_; lean_object* v_env_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___f_603_; lean_object* v___x_604_; 
v___x_599_ = lean_enable_initializer_execution();
v_env_600_ = lean_ctor_get(v_fst_594_, 0);
lean_inc_ref(v_env_600_);
lean_dec(v_fst_594_);
v___x_601_ = lean_box(0);
v___x_602_ = l_Lean_Environment_setMainModule(v_env_600_, v___x_601_);
lean_inc_ref(v___x_602_);
v___f_603_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___lam__0___boxed), 3, 2);
lean_closure_set(v___f_603_, 0, v___x_602_);
lean_closure_set(v___f_603_, 1, v_snd_595_);
v___x_604_ = l_Lean_withImporting___redArg(v___f_603_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_625_; 
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_625_ == 0)
{
lean_object* v_unused_626_; 
v_unused_626_ = lean_ctor_get(v___x_604_, 0);
lean_dec(v_unused_626_);
v___x_606_ = v___x_604_;
v_isShared_607_ = v_isSharedCheck_625_;
goto v_resetjp_605_;
}
else
{
lean_dec(v___x_604_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_625_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v_imports_610_; lean_object* v___x_611_; lean_object* v___x_612_; size_t v_sz_613_; size_t v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
v___x_608_ = lean_enable_initializer_execution();
v___x_609_ = l_Lean_Environment_header(v___x_602_);
v_imports_610_ = lean_ctor_get(v___x_609_, 1);
lean_inc_ref(v_imports_610_);
lean_dec_ref(v___x_609_);
v___x_611_ = l___private_Lean_Shell_0__Lean_wasmEnvCache;
v___x_612_ = lean_st_ref_take(v___x_611_);
v_sz_613_ = lean_array_size(v_imports_610_);
v___x_614_ = ((size_t)0ULL);
v___x_615_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor_spec__0(v_sz_613_, v___x_614_, v_imports_610_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 1, v___x_602_);
lean_ctor_set(v___x_597_, 0, v___x_615_);
v___x_617_ = v___x_597_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_615_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v___x_602_);
v___x_617_ = v_reuseFailAlloc_624_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_618_ = lean_array_push(v___x_612_, v___x_617_);
v___x_619_ = lean_st_ref_set(v___x_611_, v___x_618_);
v___x_620_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_620_);
v___x_622_ = v___x_606_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
else
{
lean_object* v_a_627_; 
lean_dec_ref(v___x_602_);
lean_del_object(v___x_597_);
v_a_627_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_627_);
lean_dec_ref_known(v___x_604_, 1);
v_a_570_ = v_a_627_;
goto v___jp_569_;
}
}
}
else
{
lean_object* v_a_629_; 
v_a_629_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_592_, 1);
v_a_570_ = v_a_629_;
goto v___jp_569_;
}
v___jp_569_:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_571_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___closed__0));
v___x_572_ = lean_io_error_to_string(v_a_570_);
v___x_573_ = lean_string_append(v___x_571_, v___x_572_);
lean_dec_ref(v___x_572_);
v___x_574_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0(v___x_573_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_582_; 
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; 
v_unused_583_ = lean_ctor_get(v___x_574_, 0);
lean_dec(v_unused_583_);
v___x_576_ = v___x_574_;
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
else
{
lean_dec(v___x_574_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_578_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 0, v___x_578_);
v___x_580_ = v___x_576_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
v_a_584_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_574_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_574_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_wasmLoadSnapshot___boxed(lean_object* v_path_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = lean_wasm_load_snapshot(v_path_630_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object* v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_634_){
_start:
{
uint8_t v_res_635_; lean_object* v_r_636_; 
v_res_635_ = lean_internal_has_address_sanitizer(v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_634_);
v_r_636_ = lean_box(v_res_635_);
return v_r_636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object* v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_638_){
_start:
{
uint8_t v_res_639_; lean_object* v_r_640_; 
v_res_639_ = lean_internal_is_multi_thread(v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_638_);
v_r_640_ = lean_box(v_res_639_);
return v_r_640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object* v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_642_){
_start:
{
uint8_t v_res_643_; lean_object* v_r_644_; 
v_res_643_ = lean_internal_is_debug(v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_642_);
v_r_644_ = lean_box(v_res_643_);
return v_r_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object* v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = lean_internal_get_build_type(v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_646_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object* v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = lean_internal_get_default_max_memory(v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_649_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object* v_max_653_, lean_object* v_a_00___x40___internal___hyg_654_){
_start:
{
size_t v_max_boxed_655_; lean_object* v_res_656_; 
v_max_boxed_655_ = lean_unbox_usize(v_max_653_);
lean_dec(v_max_653_);
v_res_656_ = lean_internal_set_max_memory(v_max_boxed_655_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object* v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = lean_internal_get_default_max_heartbeat(v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_658_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object* v_max_662_, lean_object* v_a_00___x40___internal___hyg_663_){
_start:
{
size_t v_max_boxed_664_; lean_object* v_res_665_; 
v_max_boxed_664_ = lean_unbox_usize(v_max_662_);
lean_dec(v_max_662_);
v_res_665_ = lean_internal_set_max_heartbeat(v_max_boxed_664_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object* v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_667_){
_start:
{
uint8_t v_res_668_; lean_object* v_r_669_; 
v_res_668_ = lean_internal_get_default_verbose(v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_667_);
v_r_669_ = lean_box(v_res_668_);
return v_r_669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object* v_exit_672_, lean_object* v_a_00___x40___internal___hyg_673_){
_start:
{
uint8_t v_exit_boxed_674_; lean_object* v_res_675_; 
v_exit_boxed_674_ = lean_unbox(v_exit_672_);
v_res_675_ = lean_internal_set_exit_on_panic(v_exit_boxed_674_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object* v_sz_678_, lean_object* v_a_00___x40___internal___hyg_679_){
_start:
{
size_t v_sz_boxed_680_; lean_object* v_res_681_; 
v_sz_boxed_680_ = lean_unbox_usize(v_sz_678_);
lean_dec(v_sz_678_);
v_res_681_ = lean_internal_set_thread_stack_size(v_sz_boxed_680_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object* v_tag_684_, lean_object* v_a_00___x40___internal___hyg_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = lean_internal_enable_debug(v_tag_684_);
lean_dec_ref(v_tag_684_);
return v_res_686_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_688_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_689_ = l_Lean_version_specialDesc;
v___x_690_ = lean_string_dec_eq(v___x_689_, v___x_688_);
return v___x_690_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__2));
v___x_693_ = l_Lean_versionStringCore;
v___x_694_ = lean_string_append(v___x_693_, v___x_692_);
return v___x_694_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_695_ = l_Lean_version_specialDesc;
v___x_696_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__3, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3);
v___x_697_ = lean_string_append(v___x_696_, v___x_695_);
return v___x_697_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_699_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__5));
v___x_700_ = l_Lean_versionStringCore;
v___x_701_ = lean_string_append(v___x_700_, v___x_699_);
return v___x_701_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString(void){
_start:
{
uint8_t v___x_702_; 
v___x_702_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__1, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; 
v___x_703_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__4, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4);
return v___x_703_;
}
else
{
uint8_t v___x_704_; 
v___x_704_ = l_Lean_version_isRelease;
if (v___x_704_ == 0)
{
lean_object* v___x_705_; 
v___x_705_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__6, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6);
return v___x_705_;
}
else
{
lean_object* v___x_706_; 
v___x_706_ = l_Lean_versionStringCore;
return v___x_706_;
}
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2(void){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = lean_box(0);
v___x_710_ = lean_internal_get_build_type(v___x_709_);
return v___x_710_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4(void){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_712_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_713_ = l_Lean_githash;
v___x_714_ = lean_string_dec_eq(v___x_713_, v___x_712_);
return v___x_714_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_716_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_717_ = l_System_Platform_target;
v___x_718_ = lean_string_dec_eq(v___x_717_, v___x_716_);
return v___x_718_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7(void){
_start:
{
lean_object* v___x_719_; lean_object* v_ver_720_; lean_object* v___x_721_; 
v___x_719_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v_ver_720_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_721_ = lean_string_append(v_ver_720_, v___x_719_);
return v___x_721_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v_ver_724_; 
v___x_722_ = l_System_Platform_target;
v___x_723_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__7, &l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7);
v_ver_724_ = lean_string_append(v___x_723_, v___x_722_);
return v_ver_724_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader(void){
_start:
{
lean_object* v_ver_726_; lean_object* v_ver_736_; lean_object* v_ver_742_; uint8_t v___x_743_; 
v_ver_742_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_743_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__6, &l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6);
if (v___x_743_ == 0)
{
lean_object* v_ver_744_; 
v_ver_744_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__8, &l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8);
v_ver_736_ = v_ver_744_;
goto v___jp_735_;
}
else
{
v_ver_736_ = v_ver_742_;
goto v___jp_735_;
}
v___jp_725_:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_727_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__0));
v___x_728_ = lean_string_append(v___x_727_, v_ver_726_);
lean_dec_ref(v_ver_726_);
v___x_729_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v___x_730_ = lean_string_append(v___x_728_, v___x_729_);
v___x_731_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__2, &l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2);
v___x_732_ = lean_string_append(v___x_730_, v___x_731_);
v___x_733_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__3));
v___x_734_ = lean_string_append(v___x_732_, v___x_733_);
return v___x_734_;
}
v___jp_735_:
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = l_Lean_githash;
v___x_738_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__4, &l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v_ver_741_; 
v___x_739_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__5));
lean_inc_ref(v_ver_736_);
v___x_740_ = lean_string_append(v_ver_736_, v___x_739_);
v_ver_741_ = lean_string_append(v___x_740_, v___x_737_);
v_ver_726_ = v_ver_741_;
goto v___jp_725_;
}
else
{
lean_inc_ref(v_ver_736_);
v_ver_726_ = v_ver_736_;
goto v___jp_725_;
}
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0(void){
_start:
{
lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_745_ = lean_box(0);
v___x_746_ = lean_internal_has_llvm_backend(v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_featuresString(void){
_start:
{
uint8_t v___x_749_; 
v___x_749_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_featuresString___closed__0, &l___private_Lean_Shell_0__Lean_featuresString___closed__0_once, _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; 
v___x_750_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__1));
return v___x_750_;
}
else
{
lean_object* v___x_751_; 
v___x_751_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__2));
return v___x_751_;
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16(void){
_start:
{
lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_768_ = lean_box(0);
v___x_769_ = lean_internal_is_debug(v___x_768_);
return v___x_769_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40(void){
_start:
{
lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_793_ = lean_box(0);
v___x_794_ = lean_internal_is_multi_thread(v___x_793_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t v_useStderr_799_){
_start:
{
lean_object* v___y_802_; lean_object* v___y_806_; lean_object* v_out_841_; 
if (v_useStderr_799_ == 0)
{
lean_object* v___x_897_; 
v___x_897_ = lean_get_stdout();
v_out_841_ = v___x_897_;
goto v___jp_840_;
}
else
{
lean_object* v___x_898_; 
v___x_898_ = lean_get_stderr();
v_out_841_ = v___x_898_;
goto v___jp_840_;
}
v___jp_801_:
{
lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_803_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__0));
v___x_804_ = l_IO_FS_Stream_putStrLn(v___y_802_, v___x_803_);
return v___x_804_;
}
v___jp_805_:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__1));
lean_inc_ref(v___y_806_);
v___x_808_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_807_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v___x_809_; lean_object* v___x_810_; 
lean_dec_ref_known(v___x_808_, 1);
v___x_809_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__2));
lean_inc_ref(v___y_806_);
v___x_810_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_809_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v___x_811_; lean_object* v___x_812_; 
lean_dec_ref_known(v___x_810_, 1);
v___x_811_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__3));
lean_inc_ref(v___y_806_);
v___x_812_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_811_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v___x_813_; lean_object* v___x_814_; 
lean_dec_ref_known(v___x_812_, 1);
v___x_813_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__4));
lean_inc_ref(v___y_806_);
v___x_814_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_813_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v___x_815_; lean_object* v___x_816_; 
lean_dec_ref_known(v___x_814_, 1);
v___x_815_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__5));
lean_inc_ref(v___y_806_);
v___x_816_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_815_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v___x_817_; lean_object* v___x_818_; 
lean_dec_ref_known(v___x_816_, 1);
v___x_817_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__6));
lean_inc_ref(v___y_806_);
v___x_818_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_817_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec_ref_known(v___x_818_, 1);
v___x_819_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__7));
lean_inc_ref(v___y_806_);
v___x_820_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_819_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v___x_821_; lean_object* v___x_822_; 
lean_dec_ref_known(v___x_820_, 1);
v___x_821_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__8));
lean_inc_ref(v___y_806_);
v___x_822_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_821_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec_ref_known(v___x_822_, 1);
v___x_823_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__9));
lean_inc_ref(v___y_806_);
v___x_824_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_823_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v___x_825_; lean_object* v___x_826_; 
lean_dec_ref_known(v___x_824_, 1);
v___x_825_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__10));
lean_inc_ref(v___y_806_);
v___x_826_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_825_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v___x_827_; lean_object* v___x_828_; 
lean_dec_ref_known(v___x_826_, 1);
v___x_827_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__11));
lean_inc_ref(v___y_806_);
v___x_828_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_827_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; 
lean_dec_ref_known(v___x_828_, 1);
v___x_829_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__12));
lean_inc_ref(v___y_806_);
v___x_830_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_829_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v___x_831_; lean_object* v___x_832_; 
lean_dec_ref_known(v___x_830_, 1);
v___x_831_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__13));
lean_inc_ref(v___y_806_);
v___x_832_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_831_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v___x_833_; lean_object* v___x_834_; 
lean_dec_ref_known(v___x_832_, 1);
v___x_833_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__14));
lean_inc_ref(v___y_806_);
v___x_834_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v___x_835_; lean_object* v___x_836_; 
lean_dec_ref_known(v___x_834_, 1);
v___x_835_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__15));
lean_inc_ref(v___y_806_);
v___x_836_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
uint8_t v___x_837_; 
lean_dec_ref_known(v___x_836_, 1);
v___x_837_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_837_ == 0)
{
v___y_802_ = v___y_806_;
goto v___jp_801_;
}
else
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__17));
lean_inc_ref(v___y_806_);
v___x_839_ = l_IO_FS_Stream_putStrLn(v___y_806_, v___x_838_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_dec_ref_known(v___x_839_, 1);
v___y_802_ = v___y_806_;
goto v___jp_801_;
}
else
{
lean_dec_ref(v___y_806_);
return v___x_839_;
}
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_836_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_834_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_832_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_830_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_828_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_826_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_824_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_822_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_820_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_818_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_816_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_814_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_812_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_810_;
}
}
else
{
lean_dec_ref(v___y_806_);
return v___x_808_;
}
}
v___jp_840_:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = l___private_Lean_Shell_0__Lean_versionHeader;
lean_inc_ref(v_out_841_);
v___x_843_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_842_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_object* v___x_844_; lean_object* v___x_845_; 
lean_dec_ref_known(v___x_843_, 1);
v___x_844_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__18));
lean_inc_ref(v_out_841_);
v___x_845_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v___x_846_; lean_object* v___x_847_; 
lean_dec_ref_known(v___x_845_, 1);
v___x_846_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__19));
lean_inc_ref(v_out_841_);
v___x_847_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_846_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v___x_848_; lean_object* v___x_849_; 
lean_dec_ref_known(v___x_847_, 1);
v___x_848_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__20));
lean_inc_ref(v_out_841_);
v___x_849_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_848_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v___x_850_; lean_object* v___x_851_; 
lean_dec_ref_known(v___x_849_, 1);
v___x_850_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__21));
lean_inc_ref(v_out_841_);
v___x_851_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_850_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v___x_852_; lean_object* v___x_853_; 
lean_dec_ref_known(v___x_851_, 1);
v___x_852_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__22));
lean_inc_ref(v_out_841_);
v___x_853_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_852_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v___x_854_; lean_object* v___x_855_; 
lean_dec_ref_known(v___x_853_, 1);
v___x_854_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__23));
lean_inc_ref(v_out_841_);
v___x_855_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_854_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v___x_856_; lean_object* v___x_857_; 
lean_dec_ref_known(v___x_855_, 1);
v___x_856_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__24));
lean_inc_ref(v_out_841_);
v___x_857_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_856_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v___x_858_; lean_object* v___x_859_; 
lean_dec_ref_known(v___x_857_, 1);
v___x_858_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__25));
lean_inc_ref(v_out_841_);
v___x_859_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_858_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; 
lean_dec_ref_known(v___x_859_, 1);
v___x_860_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__26));
lean_inc_ref(v_out_841_);
v___x_861_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_860_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v___x_862_; lean_object* v___x_863_; 
lean_dec_ref_known(v___x_861_, 1);
v___x_862_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__27));
lean_inc_ref(v_out_841_);
v___x_863_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_862_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v___x_864_; lean_object* v___x_865_; 
lean_dec_ref_known(v___x_863_, 1);
v___x_864_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__28));
lean_inc_ref(v_out_841_);
v___x_865_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v___x_866_; lean_object* v___x_867_; 
lean_dec_ref_known(v___x_865_, 1);
v___x_866_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__29));
lean_inc_ref(v_out_841_);
v___x_867_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec_ref_known(v___x_867_, 1);
v___x_868_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__30));
lean_inc_ref(v_out_841_);
v___x_869_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_868_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec_ref_known(v___x_869_, 1);
v___x_870_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__31));
lean_inc_ref(v_out_841_);
v___x_871_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_870_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v___x_872_; lean_object* v___x_873_; 
lean_dec_ref_known(v___x_871_, 1);
v___x_872_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__32));
lean_inc_ref(v_out_841_);
v___x_873_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_872_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v___x_874_; lean_object* v___x_875_; 
lean_dec_ref_known(v___x_873_, 1);
v___x_874_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__33));
lean_inc_ref(v_out_841_);
v___x_875_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_874_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v___x_876_; lean_object* v___x_877_; 
lean_dec_ref_known(v___x_875_, 1);
v___x_876_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__34));
lean_inc_ref(v_out_841_);
v___x_877_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v___x_878_; lean_object* v___x_879_; 
lean_dec_ref_known(v___x_877_, 1);
v___x_878_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__35));
lean_inc_ref(v_out_841_);
v___x_879_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_878_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; 
lean_dec_ref_known(v___x_879_, 1);
v___x_880_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__36));
lean_inc_ref(v_out_841_);
v___x_881_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; 
lean_dec_ref_known(v___x_881_, 1);
v___x_882_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__37));
lean_inc_ref(v_out_841_);
v___x_883_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_882_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v___x_884_; lean_object* v___x_885_; 
lean_dec_ref_known(v___x_883_, 1);
v___x_884_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__38));
lean_inc_ref(v_out_841_);
v___x_885_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v___x_886_; lean_object* v___x_887_; 
lean_dec_ref_known(v___x_885_, 1);
v___x_886_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__39));
lean_inc_ref(v_out_841_);
v___x_887_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_886_);
if (lean_obj_tag(v___x_887_) == 0)
{
uint8_t v___x_888_; 
lean_dec_ref_known(v___x_887_, 1);
v___x_888_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__40, &l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
if (v___x_888_ == 0)
{
v___y_806_ = v_out_841_;
goto v___jp_805_;
}
else
{
lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_889_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__41));
lean_inc_ref(v_out_841_);
v___x_890_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v___x_891_; lean_object* v___x_892_; 
lean_dec_ref_known(v___x_890_, 1);
v___x_891_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__42));
lean_inc_ref(v_out_841_);
v___x_892_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_891_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec_ref_known(v___x_892_, 1);
v___x_893_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__43));
lean_inc_ref(v_out_841_);
v___x_894_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_893_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec_ref_known(v___x_894_, 1);
v___x_895_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__44));
lean_inc_ref(v_out_841_);
v___x_896_ = l_IO_FS_Stream_putStrLn(v_out_841_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_dec_ref_known(v___x_896_, 1);
v___y_806_ = v_out_841_;
goto v___jp_805_;
}
else
{
lean_dec_ref(v_out_841_);
return v___x_896_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_894_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_892_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_890_;
}
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_887_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_885_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_883_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_881_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_879_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_877_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_875_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_873_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_871_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_869_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_867_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_865_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_863_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_861_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_859_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_857_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_855_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_853_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_851_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_849_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_847_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_845_;
}
}
else
{
lean_dec_ref(v_out_841_);
return v___x_843_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object* v_useStderr_899_, lean_object* v_a_900_){
_start:
{
uint8_t v_useStderr_boxed_901_; lean_object* v_res_902_; 
v_useStderr_boxed_901_ = lean_unbox(v_useStderr_899_);
v_res_902_ = l___private_Lean_Shell_0__Lean_displayHelp(v_useStderr_boxed_901_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t v_x_903_){
_start:
{
switch(v_x_903_)
{
case 0:
{
lean_object* v___x_904_; 
v___x_904_ = lean_unsigned_to_nat(0u);
return v___x_904_;
}
case 1:
{
lean_object* v___x_905_; 
v___x_905_ = lean_unsigned_to_nat(1u);
return v___x_905_;
}
default: 
{
lean_object* v___x_906_; 
v___x_906_ = lean_unsigned_to_nat(2u);
return v___x_906_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object* v_x_907_){
_start:
{
uint8_t v_x_boxed_908_; lean_object* v_res_909_; 
v_x_boxed_908_ = lean_unbox(v_x_907_);
v_res_909_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_boxed_908_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(uint8_t v_x_910_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx___boxed(lean_object* v_x_912_){
_start:
{
uint8_t v_x_4__boxed_913_; lean_object* v_res_914_; 
v_x_4__boxed_913_ = lean_unbox(v_x_912_);
v_res_914_ = l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(v_x_4__boxed_913_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object* v_k_915_){
_start:
{
lean_inc(v_k_915_);
return v_k_915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object* v_k_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(v_k_916_);
lean_dec(v_k_916_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object* v_motive_918_, lean_object* v_ctorIdx_919_, uint8_t v_t_920_, lean_object* v_h_921_, lean_object* v_k_922_){
_start:
{
lean_inc(v_k_922_);
return v_k_922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object* v_motive_923_, lean_object* v_ctorIdx_924_, lean_object* v_t_925_, lean_object* v_h_926_, lean_object* v_k_927_){
_start:
{
uint8_t v_t_boxed_928_; lean_object* v_res_929_; 
v_t_boxed_928_ = lean_unbox(v_t_925_);
v_res_929_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(v_motive_923_, v_ctorIdx_924_, v_t_boxed_928_, v_h_926_, v_k_927_);
lean_dec(v_k_927_);
lean_dec(v_ctorIdx_924_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object* v_frontend_930_){
_start:
{
lean_inc(v_frontend_930_);
return v_frontend_930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object* v_frontend_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(v_frontend_931_);
lean_dec(v_frontend_931_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object* v_motive_933_, uint8_t v_t_934_, lean_object* v_h_935_, lean_object* v_frontend_936_){
_start:
{
lean_inc(v_frontend_936_);
return v_frontend_936_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object* v_motive_937_, lean_object* v_t_938_, lean_object* v_h_939_, lean_object* v_frontend_940_){
_start:
{
uint8_t v_t_boxed_941_; lean_object* v_res_942_; 
v_t_boxed_941_ = lean_unbox(v_t_938_);
v_res_942_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(v_motive_937_, v_t_boxed_941_, v_h_939_, v_frontend_940_);
lean_dec(v_frontend_940_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object* v_watchdog_943_){
_start:
{
lean_inc(v_watchdog_943_);
return v_watchdog_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object* v_watchdog_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(v_watchdog_944_);
lean_dec(v_watchdog_944_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object* v_motive_946_, uint8_t v_t_947_, lean_object* v_h_948_, lean_object* v_watchdog_949_){
_start:
{
lean_inc(v_watchdog_949_);
return v_watchdog_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object* v_motive_950_, lean_object* v_t_951_, lean_object* v_h_952_, lean_object* v_watchdog_953_){
_start:
{
uint8_t v_t_boxed_954_; lean_object* v_res_955_; 
v_t_boxed_954_ = lean_unbox(v_t_951_);
v_res_955_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(v_motive_950_, v_t_boxed_954_, v_h_952_, v_watchdog_953_);
lean_dec(v_watchdog_953_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object* v_worker_956_){
_start:
{
lean_inc(v_worker_956_);
return v_worker_956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object* v_worker_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(v_worker_957_);
lean_dec(v_worker_957_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object* v_motive_959_, uint8_t v_t_960_, lean_object* v_h_961_, lean_object* v_worker_962_){
_start:
{
lean_inc(v_worker_962_);
return v_worker_962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object* v_motive_963_, lean_object* v_t_964_, lean_object* v_h_965_, lean_object* v_worker_966_){
_start:
{
uint8_t v_t_boxed_967_; lean_object* v_res_968_; 
v_t_boxed_967_ = lean_unbox(v_t_964_);
v_res_968_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(v_motive_963_, v_t_boxed_967_, v_h_965_, v_worker_966_);
lean_dec(v_worker_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object* v_name_969_, lean_object* v_decl_970_, lean_object* v_ref_971_){
_start:
{
lean_object* v_defValue_973_; lean_object* v_descr_974_; lean_object* v_deprecation_x3f_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v_defValue_973_ = lean_ctor_get(v_decl_970_, 0);
v_descr_974_ = lean_ctor_get(v_decl_970_, 1);
v_deprecation_x3f_975_ = lean_ctor_get(v_decl_970_, 2);
lean_inc(v_defValue_973_);
v___x_976_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_976_, 0, v_defValue_973_);
lean_inc(v_deprecation_x3f_975_);
lean_inc_ref(v_descr_974_);
lean_inc_n(v_name_969_, 2);
v___x_977_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_977_, 0, v_name_969_);
lean_ctor_set(v___x_977_, 1, v_ref_971_);
lean_ctor_set(v___x_977_, 2, v___x_976_);
lean_ctor_set(v___x_977_, 3, v_descr_974_);
lean_ctor_set(v___x_977_, 4, v_deprecation_x3f_975_);
v___x_978_ = lean_register_option(v_name_969_, v___x_977_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_986_; 
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_986_ == 0)
{
lean_object* v_unused_987_; 
v_unused_987_ = lean_ctor_get(v___x_978_, 0);
lean_dec(v_unused_987_);
v___x_980_ = v___x_978_;
v_isShared_981_ = v_isSharedCheck_986_;
goto v_resetjp_979_;
}
else
{
lean_dec(v___x_978_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_986_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_982_; lean_object* v___x_984_; 
lean_inc(v_defValue_973_);
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v_name_969_);
lean_ctor_set(v___x_982_, 1, v_defValue_973_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 0, v___x_982_);
v___x_984_ = v___x_980_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_name_969_);
v_a_988_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_978_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_978_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_996_, lean_object* v_decl_997_, lean_object* v_ref_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v_name_996_, v_decl_997_, v_ref_998_);
lean_dec_ref(v_decl_997_);
return v_res_1000_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_box(0);
v___x_1005_ = lean_internal_get_default_max_memory(v___x_1004_);
return v___x_1005_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1006_ = lean_box(0);
v___x_1007_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_1008_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_1009_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
lean_ctor_set(v___x_1009_, 1, v___x_1007_);
lean_ctor_set(v___x_1009_, 2, v___x_1006_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1033_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_1034_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_1035_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_1036_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_1033_, v___x_1034_, v___x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object* v_a_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
return v_res_1038_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = lean_box(0);
v___x_1043_ = lean_internal_get_default_max_heartbeat(v___x_1042_);
return v___x_1043_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1044_ = lean_box(0);
v___x_1045_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_1046_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_1047_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set(v___x_1047_, 1, v___x_1045_);
lean_ctor_set(v___x_1047_, 2, v___x_1044_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1052_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_1053_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_1054_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_1055_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_1052_, v___x_1053_, v___x_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object* v_a_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(lean_object* v_name_1058_, lean_object* v_decl_1059_, lean_object* v_ref_1060_){
_start:
{
lean_object* v_defValue_1062_; lean_object* v_descr_1063_; lean_object* v_deprecation_x3f_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v_defValue_1062_ = lean_ctor_get(v_decl_1059_, 0);
v_descr_1063_ = lean_ctor_get(v_decl_1059_, 1);
v_deprecation_x3f_1064_ = lean_ctor_get(v_decl_1059_, 2);
v___x_1065_ = lean_alloc_ctor(1, 0, 1);
v___x_1066_ = lean_unbox(v_defValue_1062_);
lean_ctor_set_uint8(v___x_1065_, 0, v___x_1066_);
lean_inc(v_deprecation_x3f_1064_);
lean_inc_ref(v_descr_1063_);
lean_inc_n(v_name_1058_, 2);
v___x_1067_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1067_, 0, v_name_1058_);
lean_ctor_set(v___x_1067_, 1, v_ref_1060_);
lean_ctor_set(v___x_1067_, 2, v___x_1065_);
lean_ctor_set(v___x_1067_, 3, v_descr_1063_);
lean_ctor_set(v___x_1067_, 4, v_deprecation_x3f_1064_);
v___x_1068_ = lean_register_option(v_name_1058_, v___x_1067_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1076_; 
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1076_ == 0)
{
lean_object* v_unused_1077_; 
v_unused_1077_ = lean_ctor_get(v___x_1068_, 0);
lean_dec(v_unused_1077_);
v___x_1070_ = v___x_1068_;
v_isShared_1071_ = v_isSharedCheck_1076_;
goto v_resetjp_1069_;
}
else
{
lean_dec(v___x_1068_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1076_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1072_; lean_object* v___x_1074_; 
lean_inc(v_defValue_1062_);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v_name_1058_);
lean_ctor_set(v___x_1072_, 1, v_defValue_1062_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 0, v___x_1072_);
v___x_1074_ = v___x_1070_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1072_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec(v_name_1058_);
v_a_1078_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1068_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1068_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_1086_, lean_object* v_decl_1087_, lean_object* v_ref_1088_, lean_object* v_a_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v_name_1086_, v_decl_1087_, v_ref_1088_);
lean_dec_ref(v_decl_1087_);
return v_res_1090_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1094_; uint8_t v___x_1095_; 
v___x_1094_ = lean_box(0);
v___x_1095_ = lean_internal_get_default_verbose(v___x_1094_);
return v___x_1095_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1096_ = lean_box(0);
v___x_1097_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_1098_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_1099_ = lean_box(v___x_1098_);
v___x_1100_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
lean_ctor_set(v___x_1100_, 1, v___x_1097_);
lean_ctor_set(v___x_1100_, 2, v___x_1096_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1105_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_1106_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_1107_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_1108_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v___x_1105_, v___x_1106_, v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2____boxed(lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getOptionOverrides___boxed(lean_object* v_x_00___x40_Lean_Shell_1930944040____hygCtx___hyg_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = lean_internal_get_option_overrides(v_x_00___x40_Lean_Shell_1930944040____hygCtx___hyg_1112_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object* v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_1115_){
_start:
{
uint32_t v_res_1116_; lean_object* v_r_1117_; 
v_res_1116_ = lean_internal_get_believer_trust_level(v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_1115_);
v_r_1117_ = lean_box_uint32(v_res_1116_);
return v_r_1117_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0(void){
_start:
{
lean_object* v___x_1118_; uint32_t v___x_1119_; 
v___x_1118_ = lean_box(0);
v___x_1119_ = lean_internal_get_believer_trust_level(v___x_1118_);
return v___x_1119_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1(void){
_start:
{
uint32_t v___x_1120_; uint32_t v___x_1121_; uint32_t v___x_1122_; 
v___x_1120_ = 1;
v___x_1121_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0);
v___x_1122_ = lean_uint32_add(v___x_1121_, v___x_1120_);
return v___x_1122_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel(void){
_start:
{
uint32_t v___x_1123_; 
v___x_1123_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1);
return v___x_1123_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0(void){
_start:
{
lean_object* v___x_1124_; uint32_t v___x_1125_; 
v___x_1124_ = lean_box(0);
v___x_1125_ = lean_internal_get_hardware_concurrency(v___x_1124_);
return v___x_1125_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads(void){
_start:
{
uint8_t v___x_1126_; 
v___x_1126_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__40, &l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
if (v___x_1126_ == 0)
{
uint32_t v___x_1127_; 
v___x_1127_ = 0;
return v___x_1127_;
}
else
{
uint32_t v___x_1128_; 
v___x_1128_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0, &l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0);
return v___x_1128_;
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1(void){
_start:
{
lean_object* v___x_1131_; uint32_t v___x_1132_; uint32_t v___x_1133_; uint8_t v___x_1134_; uint8_t v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1131_ = lean_box(0);
v___x_1132_ = l___private_Lean_Shell_0__Lean_defaultNumThreads;
v___x_1133_ = l___private_Lean_Shell_0__Lean_defaultTrustLevel;
v___x_1134_ = 0;
v___x_1135_ = 0;
v___x_1136_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0));
v___x_1137_ = l_Lean_Options_empty;
v___x_1138_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v___x_1136_);
lean_ctor_set(v___x_1138_, 2, v___x_1137_);
lean_ctor_set(v___x_1138_, 3, v___x_1131_);
lean_ctor_set(v___x_1138_, 4, v___x_1131_);
lean_ctor_set(v___x_1138_, 5, v___x_1131_);
lean_ctor_set(v___x_1138_, 6, v___x_1131_);
lean_ctor_set(v___x_1138_, 7, v___x_1131_);
lean_ctor_set(v___x_1138_, 8, v___x_1131_);
lean_ctor_set(v___x_1138_, 9, v___x_1136_);
lean_ctor_set(v___x_1138_, 10, v___x_1131_);
lean_ctor_set(v___x_1138_, 11, v___x_1131_);
lean_ctor_set(v___x_1138_, 12, v___x_1131_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 8, v___x_1135_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 9, v___x_1134_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 10, v___x_1134_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 11, v___x_1134_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 12, v___x_1134_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 13, v___x_1134_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 14, v___x_1134_);
lean_ctor_set_uint32(v___x_1138_, sizeof(void*)*13, v___x_1133_);
lean_ctor_set_uint32(v___x_1138_, sizeof(void*)*13 + 4, v___x_1132_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 15, v___x_1134_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 16, v___x_1134_);
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*13 + 17, v___x_1134_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object* v_x_1139_){
_start:
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1);
return v___x_1140_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object* v_opts_1141_){
_start:
{
uint8_t v_run_1142_; 
v_run_1142_ = lean_ctor_get_uint8(v_opts_1141_, sizeof(void*)*13 + 17);
lean_dec_ref(v_opts_1141_);
return v_run_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object* v_opts_1143_){
_start:
{
uint8_t v_res_1144_; lean_object* v_r_1145_; 
v_res_1144_ = lean_shell_options_get_run(v_opts_1143_);
v_r_1145_ = lean_box(v_res_1144_);
return v_r_1145_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(lean_object* v_opts_1146_, lean_object* v_opt_1147_){
_start:
{
lean_object* v_name_1148_; lean_object* v_defValue_1149_; lean_object* v_map_1150_; lean_object* v___x_1151_; 
v_name_1148_ = lean_ctor_get(v_opt_1147_, 0);
v_defValue_1149_ = lean_ctor_get(v_opt_1147_, 1);
v_map_1150_ = lean_ctor_get(v_opts_1146_, 0);
v___x_1151_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1150_, v_name_1148_);
if (lean_obj_tag(v___x_1151_) == 0)
{
uint8_t v___x_1152_; 
v___x_1152_ = lean_unbox(v_defValue_1149_);
return v___x_1152_;
}
else
{
lean_object* v_val_1153_; 
v_val_1153_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_val_1153_);
lean_dec_ref_known(v___x_1151_, 1);
if (lean_obj_tag(v_val_1153_) == 1)
{
uint8_t v_v_1154_; 
v_v_1154_ = lean_ctor_get_uint8(v_val_1153_, 0);
lean_dec_ref_known(v_val_1153_, 0);
return v_v_1154_;
}
else
{
uint8_t v___x_1155_; 
lean_dec(v_val_1153_);
v___x_1155_ = lean_unbox(v_defValue_1149_);
return v___x_1155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0___boxed(lean_object* v_opts_1156_, lean_object* v_opt_1157_){
_start:
{
uint8_t v_res_1158_; lean_object* v_r_1159_; 
v_res_1158_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(v_opts_1156_, v_opt_1157_);
lean_dec_ref(v_opt_1157_);
lean_dec_ref(v_opts_1156_);
v_r_1159_ = lean_box(v_res_1158_);
return v_r_1159_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object* v_opts_1160_){
_start:
{
lean_object* v_leanOpts_1161_; lean_object* v___x_1162_; uint8_t v___x_1163_; 
v_leanOpts_1161_ = lean_ctor_get(v_opts_1160_, 0);
lean_inc_ref(v_leanOpts_1161_);
lean_dec_ref(v_opts_1160_);
v___x_1162_ = l_Lean_profiler;
v___x_1163_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(v_leanOpts_1161_, v___x_1162_);
lean_dec_ref(v_leanOpts_1161_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object* v_opts_1164_){
_start:
{
uint8_t v_res_1165_; lean_object* v_r_1166_; 
v_res_1165_ = lean_shell_options_get_profiler(v_opts_1164_);
v_r_1166_ = lean_box(v_res_1165_);
return v_r_1166_;
}
}
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object* v_opts_1167_){
_start:
{
uint32_t v_numThreads_1168_; 
v_numThreads_1168_ = lean_ctor_get_uint32(v_opts_1167_, sizeof(void*)*13 + 4);
lean_dec_ref(v_opts_1167_);
return v_numThreads_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object* v_opts_1169_){
_start:
{
uint32_t v_res_1170_; lean_object* v_r_1171_; 
v_res_1170_ = lean_shell_options_get_num_threads(v_opts_1169_);
v_r_1171_ = lean_box_uint32(v_res_1170_);
return v_r_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object* v_optName_1174_, lean_object* v_optArg_x3f_1175_){
_start:
{
if (lean_obj_tag(v_optArg_x3f_1175_) == 1)
{
lean_object* v_val_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
v_val_1177_ = lean_ctor_get(v_optArg_x3f_1175_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_optArg_x3f_1175_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v_optArg_x3f_1175_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_val_1177_);
lean_dec(v_optArg_x3f_1175_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
lean_ctor_set_tag(v___x_1179_, 0);
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_val_1177_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
else
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
lean_dec(v_optArg_x3f_1175_);
v___x_1185_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__0));
v___x_1186_ = lean_string_append(v___x_1185_, v_optName_1174_);
v___x_1187_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_1188_ = lean_string_append(v___x_1186_, v___x_1187_);
v___x_1189_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
v___x_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object* v_optName_1191_, lean_object* v_optArg_x3f_1192_, lean_object* v_a_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l___private_Lean_Shell_0__Lean_checkOptArg(v_optName_1191_, v_optArg_x3f_1192_);
lean_dec_ref(v_optName_1191_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object* v_o_1198_, lean_object* v_k_1199_, lean_object* v_v_1200_){
_start:
{
lean_object* v_map_1201_; uint8_t v_hasTrace_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1216_; 
v_map_1201_ = lean_ctor_get(v_o_1198_, 0);
v_hasTrace_1202_ = lean_ctor_get_uint8(v_o_1198_, sizeof(void*)*1);
v_isSharedCheck_1216_ = !lean_is_exclusive(v_o_1198_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1204_ = v_o_1198_;
v_isShared_1205_ = v_isSharedCheck_1216_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_map_1201_);
lean_dec(v_o_1198_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1216_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1206_, 0, v_v_1200_);
lean_inc(v_k_1199_);
v___x_1207_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1199_, v___x_1206_, v_map_1201_);
if (v_hasTrace_1202_ == 0)
{
lean_object* v___x_1208_; uint8_t v___x_1209_; lean_object* v___x_1211_; 
v___x_1208_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1209_ = l_Lean_Name_isPrefixOf(v___x_1208_, v_k_1199_);
lean_dec(v_k_1199_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1207_);
v___x_1211_ = v___x_1204_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1207_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_ctor_set_uint8(v___x_1211_, sizeof(void*)*1, v___x_1209_);
return v___x_1211_;
}
}
else
{
lean_object* v___x_1214_; 
lean_dec(v_k_1199_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1207_);
v___x_1214_ = v___x_1204_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1207_);
lean_ctor_set_uint8(v_reuseFailAlloc_1215_, sizeof(void*)*1, v_hasTrace_1202_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object* v___x_1217_, lean_object* v_arg_1218_, lean_object* v_a_1219_, lean_object* v_b_1220_){
_start:
{
lean_object* v_startInclusive_1221_; lean_object* v_endExclusive_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
v_startInclusive_1221_ = lean_ctor_get(v___x_1217_, 1);
v_endExclusive_1222_ = lean_ctor_get(v___x_1217_, 2);
v___x_1223_ = lean_nat_sub(v_endExclusive_1222_, v_startInclusive_1221_);
v___x_1224_ = lean_nat_dec_eq(v_a_1219_, v___x_1223_);
lean_dec(v___x_1223_);
if (v___x_1224_ == 0)
{
uint32_t v___x_1225_; uint32_t v___x_1226_; uint8_t v___x_1227_; 
v___x_1225_ = lean_string_utf8_get_fast(v_arg_1218_, v_a_1219_);
v___x_1226_ = 61;
v___x_1227_ = lean_uint32_dec_eq(v___x_1225_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = lean_box(0);
v___x_1229_ = lean_string_utf8_next_fast(v_arg_1218_, v_a_1219_);
lean_dec(v_a_1219_);
v_a_1219_ = v___x_1229_;
v_b_1220_ = v___x_1228_;
goto _start;
}
else
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1231_, 0, v_a_1219_);
return v___x_1231_;
}
}
else
{
lean_dec(v_a_1219_);
lean_inc(v_b_1220_);
return v_b_1220_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object* v___x_1232_, lean_object* v_arg_1233_, lean_object* v_a_1234_, lean_object* v_b_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_1232_, v_arg_1233_, v_a_1234_, v_b_1235_);
lean_dec(v_b_1235_);
lean_dec_ref(v_arg_1233_);
lean_dec_ref(v___x_1232_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object* v_opts_1240_, lean_object* v_arg_1241_){
_start:
{
lean_object* v___y_1244_; lean_object* v_searcher_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v_searcher_1275_ = lean_unsigned_to_nat(0u);
v___x_1276_ = lean_string_utf8_byte_size(v_arg_1241_);
lean_inc_ref(v_arg_1241_);
v___x_1277_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1277_, 0, v_arg_1241_);
lean_ctor_set(v___x_1277_, 1, v_searcher_1275_);
lean_ctor_set(v___x_1277_, 2, v___x_1276_);
v___x_1278_ = lean_box(0);
v___x_1279_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_1277_, v_arg_1241_, v_searcher_1275_, v___x_1278_);
lean_dec_ref_known(v___x_1277_, 3);
if (lean_obj_tag(v___x_1279_) == 0)
{
v___y_1244_ = v___x_1276_;
goto v___jp_1243_;
}
else
{
lean_object* v_val_1280_; 
v_val_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_val_1280_);
lean_dec_ref_known(v___x_1279_, 1);
v___y_1244_ = v_val_1280_;
goto v___jp_1243_;
}
v___jp_1243_:
{
lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1245_ = lean_string_utf8_byte_size(v_arg_1241_);
v___x_1246_ = lean_nat_dec_eq(v___y_1244_, v___x_1245_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1264_; 
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1250_ = v___x_1247_;
v_isShared_1251_ = v_isSharedCheck_1264_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1247_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1264_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v_name_1255_; lean_object* v_val_1256_; lean_object* v___x_1257_; 
v___x_1252_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_1244_);
lean_inc_ref(v_arg_1241_);
v___x_1253_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1253_, 0, v_arg_1241_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
lean_ctor_set(v___x_1253_, 2, v___y_1244_);
v___x_1254_ = lean_string_utf8_next_fast(v_arg_1241_, v___y_1244_);
lean_dec(v___y_1244_);
v_name_1255_ = l_String_Slice_toName(v___x_1253_);
lean_dec_ref_known(v___x_1253_, 3);
v_val_1256_ = lean_string_utf8_extract(v_arg_1241_, v___x_1254_, v___x_1245_);
lean_dec_ref(v_arg_1241_);
v___x_1257_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_1248_, v_name_1255_);
lean_dec(v_a_1248_);
if (lean_obj_tag(v___x_1257_) == 1)
{
lean_object* v_val_1258_; lean_object* v___x_1259_; 
lean_del_object(v___x_1250_);
v_val_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_val_1258_);
lean_dec_ref_known(v___x_1257_, 1);
v___x_1259_ = l_Lean_Language_Lean_setOption(v_opts_1240_, v_val_1258_, v_name_1255_, v_val_1256_);
return v___x_1259_;
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1262_; 
lean_dec(v___x_1257_);
v___x_1260_ = l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(v_opts_1240_, v_name_1255_, v_val_1256_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 0, v___x_1260_);
v___x_1262_ = v___x_1250_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v___x_1260_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_dec(v___y_1244_);
lean_dec_ref(v_arg_1241_);
lean_dec_ref(v_opts_1240_);
v_a_1265_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1247_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1247_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
else
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_dec(v___y_1244_);
lean_dec_ref(v_arg_1241_);
lean_dec_ref(v_opts_1240_);
v___x_1273_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_setConfigOption___closed__1));
v___x_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
return v___x_1274_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object* v_opts_1281_, lean_object* v_arg_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_opts_1281_, v_arg_1282_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object* v___x_1285_, lean_object* v_arg_1286_, lean_object* v_inst_1287_, lean_object* v_R_1288_, lean_object* v_a_1289_, lean_object* v_b_1290_, lean_object* v_c_1291_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_1285_, v_arg_1286_, v_a_1289_, v_b_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object* v___x_1293_, lean_object* v_arg_1294_, lean_object* v_inst_1295_, lean_object* v_R_1296_, lean_object* v_a_1297_, lean_object* v_b_1298_, lean_object* v_c_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(v___x_1293_, v_arg_1294_, v_inst_1295_, v_R_1296_, v_a_1297_, v_b_1298_, v_c_1299_);
lean_dec(v_b_1298_);
lean_dec_ref(v_arg_1294_);
lean_dec_ref(v___x_1293_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object* v_msg_1302_){
_start:
{
lean_object* v___f_1304_; lean_object* v___x_1305_; 
v___f_1304_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1305_ = l_IO_eprint___redArg(v___f_1304_, v_msg_1302_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
else
{
lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1321_; 
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1321_ == 0)
{
lean_object* v_unused_1322_; 
v_unused_1322_ = lean_ctor_get(v___x_1305_, 0);
lean_dec(v_unused_1322_);
v___x_1315_ = v___x_1305_;
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
else
{
lean_dec(v___x_1305_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1317_ = lean_box(0);
if (v_isShared_1316_ == 0)
{
lean_ctor_set_tag(v___x_1315_, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1317_);
v___x_1319_ = v___x_1315_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object* v_msg_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(v_msg_1323_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object* v_x_1328_){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_apply_1(v_x_1328_, lean_box(0));
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1345_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1340_ = v___x_1337_;
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1351_; lean_object* v___f_1352_; lean_object* v___x_1353_; 
v_a_1346_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1337_, 1);
v___x_1351_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_1352_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1353_ = l_IO_eprint___redArg(v___f_1352_, v___x_1351_);
lean_dec_ref(v___x_1353_);
goto v___jp_1347_;
v___jp_1347_:
{
lean_object* v___x_1348_; lean_object* v___f_1349_; lean_object* v___x_1350_; 
v___x_1348_ = lean_io_error_to_string(v_a_1346_);
v___f_1349_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1350_ = l_IO_eprint___redArg(v___f_1349_, v___x_1348_);
lean_dec_ref(v___x_1350_);
goto v___jp_1333_;
}
}
v___jp_1330_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
return v___x_1332_;
}
v___jp_1333_:
{
lean_object* v___x_1334_; lean_object* v___f_1335_; lean_object* v___x_1336_; 
v___x_1334_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_1335_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1336_ = l_IO_eprint___redArg(v___f_1335_, v___x_1334_);
lean_dec_ref(v___x_1336_);
goto v___jp_1330_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object* v_x_1354_, lean_object* v_a_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(v_x_1354_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object* v_00_u03b1_1357_, lean_object* v_x_1358_){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_apply_1(v_x_1358_, lean_box(0));
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1375_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1370_ = v___x_1367_;
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1367_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1381_; lean_object* v___f_1382_; lean_object* v___x_1383_; 
v_a_1376_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1376_);
lean_dec_ref_known(v___x_1367_, 1);
v___x_1381_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_1382_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1383_ = l_IO_eprint___redArg(v___f_1382_, v___x_1381_);
lean_dec_ref(v___x_1383_);
goto v___jp_1377_;
v___jp_1377_:
{
lean_object* v___x_1378_; lean_object* v___f_1379_; lean_object* v___x_1380_; 
v___x_1378_ = lean_io_error_to_string(v_a_1376_);
v___f_1379_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1380_ = l_IO_eprint___redArg(v___f_1379_, v___x_1378_);
lean_dec_ref(v___x_1380_);
goto v___jp_1363_;
}
}
v___jp_1360_:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
v___jp_1363_:
{
lean_object* v___x_1364_; lean_object* v___f_1365_; lean_object* v___x_1366_; 
v___x_1364_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_1365_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1366_ = l_IO_eprint___redArg(v___f_1365_, v___x_1364_);
lean_dec_ref(v___x_1366_);
goto v___jp_1360_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object* v_00_u03b1_1384_, lean_object* v_x_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(v_00_u03b1_1384_, v_x_1385_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object* v_opt_1390_){
_start:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___f_1399_; lean_object* v___x_1400_; 
v___x_1395_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0));
v___x_1396_ = lean_string_append(v___x_1395_, v_opt_1390_);
v___x_1397_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_1398_ = lean_string_append(v___x_1396_, v___x_1397_);
v___f_1399_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1400_ = l_IO_eprint___redArg(v___f_1399_, v___x_1398_);
lean_dec_ref(v___x_1400_);
goto v___jp_1392_;
v___jp_1392_:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
return v___x_1394_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object* v_opt_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(v_opt_1401_);
lean_dec_ref(v_opt_1401_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object* v_opt_1406_){
_start:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___f_1415_; lean_object* v___x_1416_; 
v___x_1411_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0));
v___x_1412_ = lean_string_append(v___x_1411_, v_opt_1406_);
v___x_1413_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1));
v___x_1414_ = lean_string_append(v___x_1412_, v___x_1413_);
v___f_1415_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_1416_ = l_IO_eprint___redArg(v___f_1415_, v___x_1414_);
lean_dec_ref(v___x_1416_);
goto v___jp_1408_;
v___jp_1408_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
return v___x_1410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object* v_opt_1417_, lean_object* v_a_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(v_opt_1417_);
lean_dec_ref(v_opt_1417_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0_spec__0(lean_object* v_o_1420_, lean_object* v_k_1421_, uint8_t v_v_1422_){
_start:
{
lean_object* v_map_1423_; uint8_t v_hasTrace_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1438_; 
v_map_1423_ = lean_ctor_get(v_o_1420_, 0);
v_hasTrace_1424_ = lean_ctor_get_uint8(v_o_1420_, sizeof(void*)*1);
v_isSharedCheck_1438_ = !lean_is_exclusive(v_o_1420_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1426_ = v_o_1420_;
v_isShared_1427_ = v_isSharedCheck_1438_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_map_1423_);
lean_dec(v_o_1420_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1438_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1428_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1428_, 0, v_v_1422_);
lean_inc(v_k_1421_);
v___x_1429_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1421_, v___x_1428_, v_map_1423_);
if (v_hasTrace_1424_ == 0)
{
lean_object* v___x_1430_; uint8_t v___x_1431_; lean_object* v___x_1433_; 
v___x_1430_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1431_ = l_Lean_Name_isPrefixOf(v___x_1430_, v_k_1421_);
lean_dec(v_k_1421_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1429_);
v___x_1433_ = v___x_1426_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1429_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
lean_ctor_set_uint8(v___x_1433_, sizeof(void*)*1, v___x_1431_);
return v___x_1433_;
}
}
else
{
lean_object* v___x_1436_; 
lean_dec(v_k_1421_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1429_);
v___x_1436_ = v___x_1426_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1429_);
lean_ctor_set_uint8(v_reuseFailAlloc_1437_, sizeof(void*)*1, v_hasTrace_1424_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0_spec__0___boxed(lean_object* v_o_1439_, lean_object* v_k_1440_, lean_object* v_v_1441_){
_start:
{
uint8_t v_v_boxed_1442_; lean_object* v_res_1443_; 
v_v_boxed_1442_ = lean_unbox(v_v_1441_);
v_res_1443_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0_spec__0(v_o_1439_, v_k_1440_, v_v_boxed_1442_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object* v_opts_1444_, lean_object* v_opt_1445_, uint8_t v_val_1446_){
_start:
{
lean_object* v_name_1447_; lean_object* v___x_1448_; 
v_name_1447_ = lean_ctor_get(v_opt_1445_, 0);
lean_inc(v_name_1447_);
lean_dec_ref(v_opt_1445_);
v___x_1448_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0_spec__0(v_opts_1444_, v_name_1447_, v_val_1446_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object* v_opts_1449_, lean_object* v_opt_1450_, lean_object* v_val_1451_){
_start:
{
uint8_t v_val_boxed_1452_; lean_object* v_res_1453_; 
v_val_boxed_1452_ = lean_unbox(v_val_1451_);
v_res_1453_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_opts_1449_, v_opt_1450_, v_val_boxed_1452_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__2(lean_object* v_o_1454_, lean_object* v_k_1455_, lean_object* v_v_1456_){
_start:
{
lean_object* v_map_1457_; uint8_t v_hasTrace_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1472_; 
v_map_1457_ = lean_ctor_get(v_o_1454_, 0);
v_hasTrace_1458_ = lean_ctor_get_uint8(v_o_1454_, sizeof(void*)*1);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_o_1454_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1460_ = v_o_1454_;
v_isShared_1461_ = v_isSharedCheck_1472_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_map_1457_);
lean_dec(v_o_1454_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1472_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1462_, 0, v_v_1456_);
lean_inc(v_k_1455_);
v___x_1463_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1455_, v___x_1462_, v_map_1457_);
if (v_hasTrace_1458_ == 0)
{
lean_object* v___x_1464_; uint8_t v___x_1465_; lean_object* v___x_1467_; 
v___x_1464_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1465_ = l_Lean_Name_isPrefixOf(v___x_1464_, v_k_1455_);
lean_dec(v_k_1455_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v___x_1463_);
v___x_1467_ = v___x_1460_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1463_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
lean_ctor_set_uint8(v___x_1467_, sizeof(void*)*1, v___x_1465_);
return v___x_1467_;
}
}
else
{
lean_object* v___x_1470_; 
lean_dec(v_k_1455_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v___x_1463_);
v___x_1470_ = v___x_1460_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1463_);
lean_ctor_set_uint8(v_reuseFailAlloc_1471_, sizeof(void*)*1, v_hasTrace_1458_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object* v_opts_1473_, lean_object* v_opt_1474_, lean_object* v_val_1475_){
_start:
{
lean_object* v_name_1476_; lean_object* v___x_1477_; 
v_name_1476_ = lean_ctor_get(v_opt_1474_, 0);
lean_inc(v_name_1476_);
lean_dec_ref(v_opt_1474_);
v___x_1477_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__2(v_opts_1473_, v_name_1476_, v_val_1475_);
return v___x_1477_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28(void){
_start:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1506_ = l_System_Platform_numBits;
v___x_1507_ = lean_unsigned_to_nat(2u);
v___x_1508_ = lean_nat_pow(v___x_1507_, v___x_1506_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object* v_opts_1518_, uint32_t v_opt_1519_, lean_object* v_optArg_x3f_1520_){
_start:
{
lean_object* v___y_1634_; lean_object* v___y_1680_; uint32_t v___x_1740_; uint8_t v___x_1741_; 
v___x_1740_ = 101;
v___x_1741_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1740_);
if (v___x_1741_ == 0)
{
uint32_t v___x_1742_; uint8_t v___x_1743_; 
v___x_1742_ = 106;
v___x_1743_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1742_);
if (v___x_1743_ == 0)
{
uint32_t v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = 118;
v___x_1745_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1744_);
if (v___x_1745_ == 0)
{
uint32_t v___x_1746_; uint8_t v___x_1747_; 
v___x_1746_ = 86;
v___x_1747_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1746_);
if (v___x_1747_ == 0)
{
uint32_t v___x_1748_; uint8_t v___x_1749_; 
v___x_1748_ = 103;
v___x_1749_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1748_);
if (v___x_1749_ == 0)
{
uint32_t v___x_1750_; uint8_t v___x_1751_; 
v___x_1750_ = 104;
v___x_1751_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1750_);
if (v___x_1751_ == 0)
{
uint32_t v___x_1752_; uint8_t v___x_1753_; 
v___x_1752_ = 102;
v___x_1753_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1752_);
if (v___x_1753_ == 0)
{
uint32_t v___x_1754_; uint8_t v___x_1755_; 
v___x_1754_ = 99;
v___x_1755_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1754_);
if (v___x_1755_ == 0)
{
uint32_t v___x_1756_; uint8_t v___x_1757_; 
v___x_1756_ = 98;
v___x_1757_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1756_);
if (v___x_1757_ == 0)
{
uint32_t v___x_1758_; uint8_t v___x_1759_; 
v___x_1758_ = 115;
v___x_1759_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1758_);
if (v___x_1759_ == 0)
{
uint32_t v___x_1760_; uint8_t v___x_1761_; 
v___x_1760_ = 73;
v___x_1761_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1760_);
if (v___x_1761_ == 0)
{
uint32_t v___x_1762_; uint8_t v___x_1763_; 
v___x_1762_ = 114;
v___x_1763_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1762_);
if (v___x_1763_ == 0)
{
uint32_t v___x_1764_; uint8_t v___x_1765_; 
v___x_1764_ = 111;
v___x_1765_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1764_);
if (v___x_1765_ == 0)
{
uint32_t v___x_1766_; uint8_t v___x_1767_; 
v___x_1766_ = 105;
v___x_1767_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1766_);
if (v___x_1767_ == 0)
{
uint32_t v___x_1768_; uint8_t v___x_1769_; 
v___x_1768_ = 82;
v___x_1769_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1768_);
if (v___x_1769_ == 0)
{
uint32_t v___x_1770_; uint8_t v___x_1771_; 
v___x_1770_ = 77;
v___x_1771_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1770_);
if (v___x_1771_ == 0)
{
uint32_t v___x_1772_; uint8_t v___x_1773_; 
v___x_1772_ = 84;
v___x_1773_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1772_);
if (v___x_1773_ == 0)
{
uint32_t v___x_1774_; uint8_t v___x_1775_; 
v___x_1774_ = 116;
v___x_1775_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1774_);
if (v___x_1775_ == 0)
{
uint32_t v___x_1776_; uint8_t v___x_1777_; 
v___x_1776_ = 113;
v___x_1777_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1776_);
if (v___x_1777_ == 0)
{
uint32_t v___x_1778_; uint8_t v___x_1779_; 
v___x_1778_ = 100;
v___x_1779_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1778_);
if (v___x_1779_ == 0)
{
uint32_t v___x_1780_; uint8_t v___x_1781_; 
v___x_1780_ = 79;
v___x_1781_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1780_);
if (v___x_1781_ == 0)
{
uint32_t v___x_1782_; uint8_t v___x_1783_; 
v___x_1782_ = 78;
v___x_1783_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1782_);
if (v___x_1783_ == 0)
{
uint32_t v___x_1784_; uint8_t v___x_1785_; 
v___x_1784_ = 74;
v___x_1785_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1784_);
if (v___x_1785_ == 0)
{
uint32_t v___x_1786_; uint8_t v___x_1787_; 
v___x_1786_ = 97;
v___x_1787_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1786_);
if (v___x_1787_ == 0)
{
uint32_t v___x_1788_; uint8_t v___x_1789_; 
v___x_1788_ = 120;
v___x_1789_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1788_);
if (v___x_1789_ == 0)
{
uint32_t v___x_1790_; uint8_t v___x_1791_; 
v___x_1790_ = 76;
v___x_1791_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1790_);
if (v___x_1791_ == 0)
{
uint32_t v___x_1792_; uint8_t v___x_1793_; 
v___x_1792_ = 68;
v___x_1793_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1792_);
if (v___x_1793_ == 0)
{
uint32_t v___x_1794_; uint8_t v___x_1795_; 
v___x_1794_ = 83;
v___x_1795_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1794_);
if (v___x_1795_ == 0)
{
uint32_t v___x_1796_; uint8_t v___x_1797_; 
v___x_1796_ = 87;
v___x_1797_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1796_);
if (v___x_1797_ == 0)
{
uint32_t v___x_1798_; uint8_t v___x_1799_; 
v___x_1798_ = 80;
v___x_1799_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1798_);
if (v___x_1799_ == 0)
{
uint32_t v___x_1800_; uint8_t v___x_1801_; 
v___x_1800_ = 66;
v___x_1801_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1800_);
if (v___x_1801_ == 0)
{
uint32_t v___x_1802_; uint8_t v___x_1803_; 
v___x_1802_ = 112;
v___x_1803_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1802_);
if (v___x_1803_ == 0)
{
uint32_t v___x_1804_; uint8_t v___x_1805_; 
v___x_1804_ = 108;
v___x_1805_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1804_);
if (v___x_1805_ == 0)
{
uint32_t v___x_1806_; uint8_t v___x_1807_; 
v___x_1806_ = 117;
v___x_1807_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1806_);
if (v___x_1807_ == 0)
{
uint32_t v___x_1808_; uint8_t v___x_1809_; 
v___x_1808_ = 69;
v___x_1809_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1808_);
if (v___x_1809_ == 0)
{
uint32_t v___x_1810_; uint8_t v___x_1811_; 
v___x_1810_ = 89;
v___x_1811_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1810_);
if (v___x_1811_ == 0)
{
uint32_t v___x_1812_; uint8_t v___x_1813_; 
v___x_1812_ = 90;
v___x_1813_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1812_);
if (v___x_1813_ == 0)
{
uint32_t v___x_1814_; uint8_t v___x_1815_; 
v___x_1814_ = 72;
v___x_1815_ = lean_uint32_dec_eq(v_opt_1519_, v___x_1814_);
if (v___x_1815_ == 0)
{
lean_dec(v_optArg_x3f_1520_);
lean_dec_ref(v_opts_1518_);
goto v___jp_1652_;
}
else
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1));
v___x_1817_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1816_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1858_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1820_ = v___x_1817_;
v_isShared_1821_ = v_isSharedCheck_1858_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1817_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1858_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v_leanOpts_1822_; lean_object* v_forwardedArgs_1823_; uint8_t v_component_1824_; uint8_t v_printPrefix_1825_; uint8_t v_printLibDir_1826_; uint8_t v_useStdin_1827_; uint8_t v_onlyDeps_1828_; uint8_t v_onlySrcDeps_1829_; uint8_t v_depsJson_1830_; lean_object* v_opts_1831_; uint32_t v_trustLevel_1832_; uint32_t v_numThreads_1833_; lean_object* v_rootDir_x3f_1834_; lean_object* v_setupFileName_x3f_1835_; lean_object* v_oleanFileName_x3f_1836_; lean_object* v_ileanFileName_x3f_1837_; lean_object* v_cFileName_x3f_1838_; lean_object* v_bcFileName_x3f_1839_; uint8_t v_jsonOutput_1840_; lean_object* v_errorOnKinds_1841_; uint8_t v_printStats_1842_; uint8_t v_run_1843_; lean_object* v_incrSaveFileName_x3f_1844_; lean_object* v_incrLoadFileName_x3f_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1856_; 
v_leanOpts_1822_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_1823_ = lean_ctor_get(v_opts_1518_, 1);
v_component_1824_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_1825_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_1826_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_1827_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_1828_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1829_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_1830_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_1831_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_1832_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_1833_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1834_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_1835_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_1836_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_1837_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_1838_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_1839_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_1840_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_1841_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_1842_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_1843_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1844_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_1845_ = lean_ctor_get(v_opts_1518_, 11);
v_isSharedCheck_1856_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_1856_ == 0)
{
lean_object* v_unused_1857_; 
v_unused_1857_ = lean_ctor_get(v_opts_1518_, 12);
lean_dec(v_unused_1857_);
v___x_1847_ = v_opts_1518_;
v_isShared_1848_ = v_isSharedCheck_1856_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_incrLoadFileName_x3f_1845_);
lean_inc(v_incrSaveFileName_x3f_1844_);
lean_inc(v_errorOnKinds_1841_);
lean_inc(v_bcFileName_x3f_1839_);
lean_inc(v_cFileName_x3f_1838_);
lean_inc(v_ileanFileName_x3f_1837_);
lean_inc(v_oleanFileName_x3f_1836_);
lean_inc(v_setupFileName_x3f_1835_);
lean_inc(v_rootDir_x3f_1834_);
lean_inc(v_opts_1831_);
lean_inc(v_forwardedArgs_1823_);
lean_inc(v_leanOpts_1822_);
lean_dec(v_opts_1518_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1856_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1849_; lean_object* v___x_1851_; 
v___x_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1849_, 0, v_a_1818_);
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 12, v___x_1849_);
v___x_1851_ = v___x_1847_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_leanOpts_1822_);
lean_ctor_set(v_reuseFailAlloc_1855_, 1, v_forwardedArgs_1823_);
lean_ctor_set(v_reuseFailAlloc_1855_, 2, v_opts_1831_);
lean_ctor_set(v_reuseFailAlloc_1855_, 3, v_rootDir_x3f_1834_);
lean_ctor_set(v_reuseFailAlloc_1855_, 4, v_setupFileName_x3f_1835_);
lean_ctor_set(v_reuseFailAlloc_1855_, 5, v_oleanFileName_x3f_1836_);
lean_ctor_set(v_reuseFailAlloc_1855_, 6, v_ileanFileName_x3f_1837_);
lean_ctor_set(v_reuseFailAlloc_1855_, 7, v_cFileName_x3f_1838_);
lean_ctor_set(v_reuseFailAlloc_1855_, 8, v_bcFileName_x3f_1839_);
lean_ctor_set(v_reuseFailAlloc_1855_, 9, v_errorOnKinds_1841_);
lean_ctor_set(v_reuseFailAlloc_1855_, 10, v_incrSaveFileName_x3f_1844_);
lean_ctor_set(v_reuseFailAlloc_1855_, 11, v_incrLoadFileName_x3f_1845_);
lean_ctor_set(v_reuseFailAlloc_1855_, 12, v___x_1849_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 8, v_component_1824_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 9, v_printPrefix_1825_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 10, v_printLibDir_1826_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 11, v_useStdin_1827_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 12, v_onlyDeps_1828_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 13, v_onlySrcDeps_1829_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 14, v_depsJson_1830_);
lean_ctor_set_uint32(v_reuseFailAlloc_1855_, sizeof(void*)*13, v_trustLevel_1832_);
lean_ctor_set_uint32(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 4, v_numThreads_1833_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 15, v_jsonOutput_1840_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 16, v_printStats_1842_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*13 + 17, v_run_1843_);
v___x_1851_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_object* v___x_1853_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 0, v___x_1851_);
v___x_1853_ = v___x_1820_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
lean_dec_ref(v_opts_1518_);
v_a_1859_ = lean_ctor_get(v___x_1817_, 0);
lean_inc(v_a_1859_);
lean_dec_ref_known(v___x_1817_, 1);
v___x_1863_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1864_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1863_);
lean_dec_ref(v___x_1864_);
goto v___jp_1860_;
v___jp_1860_:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1861_ = lean_io_error_to_string(v_a_1859_);
v___x_1862_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1861_);
lean_dec_ref(v___x_1862_);
goto v___jp_1624_;
}
}
}
}
else
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2));
v___x_1866_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1865_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1907_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1869_ = v___x_1866_;
v_isShared_1870_ = v_isSharedCheck_1907_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1866_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1907_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v_leanOpts_1871_; lean_object* v_forwardedArgs_1872_; uint8_t v_component_1873_; uint8_t v_printPrefix_1874_; uint8_t v_printLibDir_1875_; uint8_t v_useStdin_1876_; uint8_t v_onlyDeps_1877_; uint8_t v_onlySrcDeps_1878_; uint8_t v_depsJson_1879_; lean_object* v_opts_1880_; uint32_t v_trustLevel_1881_; uint32_t v_numThreads_1882_; lean_object* v_rootDir_x3f_1883_; lean_object* v_setupFileName_x3f_1884_; lean_object* v_oleanFileName_x3f_1885_; lean_object* v_ileanFileName_x3f_1886_; lean_object* v_cFileName_x3f_1887_; lean_object* v_bcFileName_x3f_1888_; uint8_t v_jsonOutput_1889_; lean_object* v_errorOnKinds_1890_; uint8_t v_printStats_1891_; uint8_t v_run_1892_; lean_object* v_incrSaveFileName_x3f_1893_; lean_object* v_incrHeaderSaveFileName_x3f_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1905_; 
v_leanOpts_1871_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_1872_ = lean_ctor_get(v_opts_1518_, 1);
v_component_1873_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_1874_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_1875_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_1876_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_1877_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1878_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_1879_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_1880_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_1881_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_1882_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1883_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_1884_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_1885_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_1886_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_1887_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_1888_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_1889_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_1890_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_1891_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_1892_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1893_ = lean_ctor_get(v_opts_1518_, 10);
v_incrHeaderSaveFileName_x3f_1894_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_1905_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_1905_ == 0)
{
lean_object* v_unused_1906_; 
v_unused_1906_ = lean_ctor_get(v_opts_1518_, 11);
lean_dec(v_unused_1906_);
v___x_1896_ = v_opts_1518_;
v_isShared_1897_ = v_isSharedCheck_1905_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1894_);
lean_inc(v_incrSaveFileName_x3f_1893_);
lean_inc(v_errorOnKinds_1890_);
lean_inc(v_bcFileName_x3f_1888_);
lean_inc(v_cFileName_x3f_1887_);
lean_inc(v_ileanFileName_x3f_1886_);
lean_inc(v_oleanFileName_x3f_1885_);
lean_inc(v_setupFileName_x3f_1884_);
lean_inc(v_rootDir_x3f_1883_);
lean_inc(v_opts_1880_);
lean_inc(v_forwardedArgs_1872_);
lean_inc(v_leanOpts_1871_);
lean_dec(v_opts_1518_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1905_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; lean_object* v___x_1900_; 
v___x_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1898_, 0, v_a_1867_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 11, v___x_1898_);
v___x_1900_ = v___x_1896_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_leanOpts_1871_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v_forwardedArgs_1872_);
lean_ctor_set(v_reuseFailAlloc_1904_, 2, v_opts_1880_);
lean_ctor_set(v_reuseFailAlloc_1904_, 3, v_rootDir_x3f_1883_);
lean_ctor_set(v_reuseFailAlloc_1904_, 4, v_setupFileName_x3f_1884_);
lean_ctor_set(v_reuseFailAlloc_1904_, 5, v_oleanFileName_x3f_1885_);
lean_ctor_set(v_reuseFailAlloc_1904_, 6, v_ileanFileName_x3f_1886_);
lean_ctor_set(v_reuseFailAlloc_1904_, 7, v_cFileName_x3f_1887_);
lean_ctor_set(v_reuseFailAlloc_1904_, 8, v_bcFileName_x3f_1888_);
lean_ctor_set(v_reuseFailAlloc_1904_, 9, v_errorOnKinds_1890_);
lean_ctor_set(v_reuseFailAlloc_1904_, 10, v_incrSaveFileName_x3f_1893_);
lean_ctor_set(v_reuseFailAlloc_1904_, 11, v___x_1898_);
lean_ctor_set(v_reuseFailAlloc_1904_, 12, v_incrHeaderSaveFileName_x3f_1894_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 8, v_component_1873_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 9, v_printPrefix_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 10, v_printLibDir_1875_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 11, v_useStdin_1876_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 12, v_onlyDeps_1877_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 13, v_onlySrcDeps_1878_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 14, v_depsJson_1879_);
lean_ctor_set_uint32(v_reuseFailAlloc_1904_, sizeof(void*)*13, v_trustLevel_1881_);
lean_ctor_set_uint32(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 4, v_numThreads_1882_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 15, v_jsonOutput_1889_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 16, v_printStats_1891_);
lean_ctor_set_uint8(v_reuseFailAlloc_1904_, sizeof(void*)*13 + 17, v_run_1892_);
v___x_1900_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1902_; 
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 0, v___x_1900_);
v___x_1902_ = v___x_1869_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
lean_dec_ref(v_opts_1518_);
v_a_1908_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1866_, 1);
v___x_1912_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1913_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1912_);
lean_dec_ref(v___x_1913_);
goto v___jp_1909_;
v___jp_1909_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lean_io_error_to_string(v_a_1908_);
v___x_1911_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1910_);
lean_dec_ref(v___x_1911_);
goto v___jp_1658_;
}
}
}
}
else
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1914_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3));
v___x_1915_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1914_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1956_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1918_ = v___x_1915_;
v_isShared_1919_ = v_isSharedCheck_1956_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1915_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1956_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v_leanOpts_1920_; lean_object* v_forwardedArgs_1921_; uint8_t v_component_1922_; uint8_t v_printPrefix_1923_; uint8_t v_printLibDir_1924_; uint8_t v_useStdin_1925_; uint8_t v_onlyDeps_1926_; uint8_t v_onlySrcDeps_1927_; uint8_t v_depsJson_1928_; lean_object* v_opts_1929_; uint32_t v_trustLevel_1930_; uint32_t v_numThreads_1931_; lean_object* v_rootDir_x3f_1932_; lean_object* v_setupFileName_x3f_1933_; lean_object* v_oleanFileName_x3f_1934_; lean_object* v_ileanFileName_x3f_1935_; lean_object* v_cFileName_x3f_1936_; lean_object* v_bcFileName_x3f_1937_; uint8_t v_jsonOutput_1938_; lean_object* v_errorOnKinds_1939_; uint8_t v_printStats_1940_; uint8_t v_run_1941_; lean_object* v_incrLoadFileName_x3f_1942_; lean_object* v_incrHeaderSaveFileName_x3f_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1954_; 
v_leanOpts_1920_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_1921_ = lean_ctor_get(v_opts_1518_, 1);
v_component_1922_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_1923_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_1924_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_1925_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_1926_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1927_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_1928_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_1929_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_1930_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_1931_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1932_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_1933_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_1934_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_1935_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_1936_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_1937_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_1938_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_1939_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_1940_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_1941_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrLoadFileName_x3f_1942_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_1943_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_1954_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_1954_ == 0)
{
lean_object* v_unused_1955_; 
v_unused_1955_ = lean_ctor_get(v_opts_1518_, 10);
lean_dec(v_unused_1955_);
v___x_1945_ = v_opts_1518_;
v_isShared_1946_ = v_isSharedCheck_1954_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1943_);
lean_inc(v_incrLoadFileName_x3f_1942_);
lean_inc(v_errorOnKinds_1939_);
lean_inc(v_bcFileName_x3f_1937_);
lean_inc(v_cFileName_x3f_1936_);
lean_inc(v_ileanFileName_x3f_1935_);
lean_inc(v_oleanFileName_x3f_1934_);
lean_inc(v_setupFileName_x3f_1933_);
lean_inc(v_rootDir_x3f_1932_);
lean_inc(v_opts_1929_);
lean_inc(v_forwardedArgs_1921_);
lean_inc(v_leanOpts_1920_);
lean_dec(v_opts_1518_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1954_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1947_, 0, v_a_1916_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 10, v___x_1947_);
v___x_1949_ = v___x_1945_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_leanOpts_1920_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v_forwardedArgs_1921_);
lean_ctor_set(v_reuseFailAlloc_1953_, 2, v_opts_1929_);
lean_ctor_set(v_reuseFailAlloc_1953_, 3, v_rootDir_x3f_1932_);
lean_ctor_set(v_reuseFailAlloc_1953_, 4, v_setupFileName_x3f_1933_);
lean_ctor_set(v_reuseFailAlloc_1953_, 5, v_oleanFileName_x3f_1934_);
lean_ctor_set(v_reuseFailAlloc_1953_, 6, v_ileanFileName_x3f_1935_);
lean_ctor_set(v_reuseFailAlloc_1953_, 7, v_cFileName_x3f_1936_);
lean_ctor_set(v_reuseFailAlloc_1953_, 8, v_bcFileName_x3f_1937_);
lean_ctor_set(v_reuseFailAlloc_1953_, 9, v_errorOnKinds_1939_);
lean_ctor_set(v_reuseFailAlloc_1953_, 10, v___x_1947_);
lean_ctor_set(v_reuseFailAlloc_1953_, 11, v_incrLoadFileName_x3f_1942_);
lean_ctor_set(v_reuseFailAlloc_1953_, 12, v_incrHeaderSaveFileName_x3f_1943_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 8, v_component_1922_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 9, v_printPrefix_1923_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 10, v_printLibDir_1924_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 11, v_useStdin_1925_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 12, v_onlyDeps_1926_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 13, v_onlySrcDeps_1927_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 14, v_depsJson_1928_);
lean_ctor_set_uint32(v_reuseFailAlloc_1953_, sizeof(void*)*13, v_trustLevel_1930_);
lean_ctor_set_uint32(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 4, v_numThreads_1931_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 15, v_jsonOutput_1938_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 16, v_printStats_1940_);
lean_ctor_set_uint8(v_reuseFailAlloc_1953_, sizeof(void*)*13 + 17, v_run_1941_);
v___x_1949_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
lean_object* v___x_1951_; 
if (v_isShared_1919_ == 0)
{
lean_ctor_set(v___x_1918_, 0, v___x_1949_);
v___x_1951_ = v___x_1918_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
lean_dec_ref(v_opts_1518_);
v_a_1957_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1957_);
lean_dec_ref_known(v___x_1915_, 1);
v___x_1961_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1962_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1961_);
lean_dec_ref(v___x_1962_);
goto v___jp_1958_;
v___jp_1958_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = lean_io_error_to_string(v_a_1957_);
v___x_1960_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1959_);
lean_dec_ref(v___x_1960_);
goto v___jp_1618_;
}
}
}
}
else
{
lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1963_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4));
v___x_1964_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1963_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_2006_; 
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_1967_ = v___x_1964_;
v_isShared_1968_ = v_isSharedCheck_2006_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v___x_1964_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_2006_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v_leanOpts_1969_; lean_object* v_forwardedArgs_1970_; uint8_t v_component_1971_; uint8_t v_printPrefix_1972_; uint8_t v_printLibDir_1973_; uint8_t v_useStdin_1974_; uint8_t v_onlyDeps_1975_; uint8_t v_onlySrcDeps_1976_; uint8_t v_depsJson_1977_; lean_object* v_opts_1978_; uint32_t v_trustLevel_1979_; uint32_t v_numThreads_1980_; lean_object* v_rootDir_x3f_1981_; lean_object* v_setupFileName_x3f_1982_; lean_object* v_oleanFileName_x3f_1983_; lean_object* v_ileanFileName_x3f_1984_; lean_object* v_cFileName_x3f_1985_; lean_object* v_bcFileName_x3f_1986_; uint8_t v_jsonOutput_1987_; lean_object* v_errorOnKinds_1988_; uint8_t v_printStats_1989_; uint8_t v_run_1990_; lean_object* v_incrSaveFileName_x3f_1991_; lean_object* v_incrLoadFileName_x3f_1992_; lean_object* v_incrHeaderSaveFileName_x3f_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2005_; 
v_leanOpts_1969_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_1970_ = lean_ctor_get(v_opts_1518_, 1);
v_component_1971_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_1972_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_1973_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_1974_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_1975_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_1976_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_1977_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_1978_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_1979_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_1980_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_1981_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_1982_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_1983_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_1984_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_1985_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_1986_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_1987_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_1988_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_1989_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_1990_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_1991_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_1992_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_1993_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2005_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_1995_ = v_opts_1518_;
v_isShared_1996_ = v_isSharedCheck_2005_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1993_);
lean_inc(v_incrLoadFileName_x3f_1992_);
lean_inc(v_incrSaveFileName_x3f_1991_);
lean_inc(v_errorOnKinds_1988_);
lean_inc(v_bcFileName_x3f_1986_);
lean_inc(v_cFileName_x3f_1985_);
lean_inc(v_ileanFileName_x3f_1984_);
lean_inc(v_oleanFileName_x3f_1983_);
lean_inc(v_setupFileName_x3f_1982_);
lean_inc(v_rootDir_x3f_1981_);
lean_inc(v_opts_1978_);
lean_inc(v_forwardedArgs_1970_);
lean_inc(v_leanOpts_1969_);
lean_dec(v_opts_1518_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2005_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_2000_; 
v___x_1997_ = l_String_toName(v_a_1965_);
v___x_1998_ = lean_array_push(v_errorOnKinds_1988_, v___x_1997_);
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 9, v___x_1998_);
v___x_2000_ = v___x_1995_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_leanOpts_1969_);
lean_ctor_set(v_reuseFailAlloc_2004_, 1, v_forwardedArgs_1970_);
lean_ctor_set(v_reuseFailAlloc_2004_, 2, v_opts_1978_);
lean_ctor_set(v_reuseFailAlloc_2004_, 3, v_rootDir_x3f_1981_);
lean_ctor_set(v_reuseFailAlloc_2004_, 4, v_setupFileName_x3f_1982_);
lean_ctor_set(v_reuseFailAlloc_2004_, 5, v_oleanFileName_x3f_1983_);
lean_ctor_set(v_reuseFailAlloc_2004_, 6, v_ileanFileName_x3f_1984_);
lean_ctor_set(v_reuseFailAlloc_2004_, 7, v_cFileName_x3f_1985_);
lean_ctor_set(v_reuseFailAlloc_2004_, 8, v_bcFileName_x3f_1986_);
lean_ctor_set(v_reuseFailAlloc_2004_, 9, v___x_1998_);
lean_ctor_set(v_reuseFailAlloc_2004_, 10, v_incrSaveFileName_x3f_1991_);
lean_ctor_set(v_reuseFailAlloc_2004_, 11, v_incrLoadFileName_x3f_1992_);
lean_ctor_set(v_reuseFailAlloc_2004_, 12, v_incrHeaderSaveFileName_x3f_1993_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 8, v_component_1971_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 9, v_printPrefix_1972_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 10, v_printLibDir_1973_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 11, v_useStdin_1974_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 12, v_onlyDeps_1975_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 13, v_onlySrcDeps_1976_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 14, v_depsJson_1977_);
lean_ctor_set_uint32(v_reuseFailAlloc_2004_, sizeof(void*)*13, v_trustLevel_1979_);
lean_ctor_set_uint32(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 4, v_numThreads_1980_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 15, v_jsonOutput_1987_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 16, v_printStats_1989_);
lean_ctor_set_uint8(v_reuseFailAlloc_2004_, sizeof(void*)*13 + 17, v_run_1990_);
v___x_2000_ = v_reuseFailAlloc_2004_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
lean_object* v___x_2002_; 
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 0, v___x_2000_);
v___x_2002_ = v___x_1967_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v___x_2000_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
}
}
else
{
lean_object* v_a_2007_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
lean_dec_ref(v_opts_1518_);
v_a_2007_ = lean_ctor_get(v___x_1964_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_1964_, 1);
v___x_2011_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2012_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2011_);
lean_dec_ref(v___x_2012_);
goto v___jp_2008_;
v___jp_2008_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = lean_io_error_to_string(v_a_2007_);
v___x_2010_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2009_);
lean_dec_ref(v___x_2010_);
goto v___jp_1664_;
}
}
}
}
else
{
lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2013_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5));
v___x_2014_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2013_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2055_; 
v_a_2015_ = lean_ctor_get(v___x_2014_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2017_ = v___x_2014_;
v_isShared_2018_ = v_isSharedCheck_2055_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_2014_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2055_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v_leanOpts_2019_; lean_object* v_forwardedArgs_2020_; uint8_t v_component_2021_; uint8_t v_printPrefix_2022_; uint8_t v_printLibDir_2023_; uint8_t v_useStdin_2024_; uint8_t v_onlyDeps_2025_; uint8_t v_onlySrcDeps_2026_; uint8_t v_depsJson_2027_; lean_object* v_opts_2028_; uint32_t v_trustLevel_2029_; uint32_t v_numThreads_2030_; lean_object* v_rootDir_x3f_2031_; lean_object* v_oleanFileName_x3f_2032_; lean_object* v_ileanFileName_x3f_2033_; lean_object* v_cFileName_x3f_2034_; lean_object* v_bcFileName_x3f_2035_; uint8_t v_jsonOutput_2036_; lean_object* v_errorOnKinds_2037_; uint8_t v_printStats_2038_; uint8_t v_run_2039_; lean_object* v_incrSaveFileName_x3f_2040_; lean_object* v_incrLoadFileName_x3f_2041_; lean_object* v_incrHeaderSaveFileName_x3f_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2053_; 
v_leanOpts_2019_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2020_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2021_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2022_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2023_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2024_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2025_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2026_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2027_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2028_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2029_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2030_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2031_ = lean_ctor_get(v_opts_1518_, 3);
v_oleanFileName_x3f_2032_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2033_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2034_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2035_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2036_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2037_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2038_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2039_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2040_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2041_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2042_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2053_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2053_ == 0)
{
lean_object* v_unused_2054_; 
v_unused_2054_ = lean_ctor_get(v_opts_1518_, 4);
lean_dec(v_unused_2054_);
v___x_2044_ = v_opts_1518_;
v_isShared_2045_ = v_isSharedCheck_2053_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2042_);
lean_inc(v_incrLoadFileName_x3f_2041_);
lean_inc(v_incrSaveFileName_x3f_2040_);
lean_inc(v_errorOnKinds_2037_);
lean_inc(v_bcFileName_x3f_2035_);
lean_inc(v_cFileName_x3f_2034_);
lean_inc(v_ileanFileName_x3f_2033_);
lean_inc(v_oleanFileName_x3f_2032_);
lean_inc(v_rootDir_x3f_2031_);
lean_inc(v_opts_2028_);
lean_inc(v_forwardedArgs_2020_);
lean_inc(v_leanOpts_2019_);
lean_dec(v_opts_1518_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2053_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2046_; lean_object* v___x_2048_; 
v___x_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2046_, 0, v_a_2015_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 4, v___x_2046_);
v___x_2048_ = v___x_2044_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_leanOpts_2019_);
lean_ctor_set(v_reuseFailAlloc_2052_, 1, v_forwardedArgs_2020_);
lean_ctor_set(v_reuseFailAlloc_2052_, 2, v_opts_2028_);
lean_ctor_set(v_reuseFailAlloc_2052_, 3, v_rootDir_x3f_2031_);
lean_ctor_set(v_reuseFailAlloc_2052_, 4, v___x_2046_);
lean_ctor_set(v_reuseFailAlloc_2052_, 5, v_oleanFileName_x3f_2032_);
lean_ctor_set(v_reuseFailAlloc_2052_, 6, v_ileanFileName_x3f_2033_);
lean_ctor_set(v_reuseFailAlloc_2052_, 7, v_cFileName_x3f_2034_);
lean_ctor_set(v_reuseFailAlloc_2052_, 8, v_bcFileName_x3f_2035_);
lean_ctor_set(v_reuseFailAlloc_2052_, 9, v_errorOnKinds_2037_);
lean_ctor_set(v_reuseFailAlloc_2052_, 10, v_incrSaveFileName_x3f_2040_);
lean_ctor_set(v_reuseFailAlloc_2052_, 11, v_incrLoadFileName_x3f_2041_);
lean_ctor_set(v_reuseFailAlloc_2052_, 12, v_incrHeaderSaveFileName_x3f_2042_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 8, v_component_2021_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 9, v_printPrefix_2022_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 10, v_printLibDir_2023_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 11, v_useStdin_2024_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 12, v_onlyDeps_2025_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 13, v_onlySrcDeps_2026_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 14, v_depsJson_2027_);
lean_ctor_set_uint32(v_reuseFailAlloc_2052_, sizeof(void*)*13, v_trustLevel_2029_);
lean_ctor_set_uint32(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 4, v_numThreads_2030_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 15, v_jsonOutput_2036_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 16, v_printStats_2038_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*13 + 17, v_run_2039_);
v___x_2048_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
lean_object* v___x_2050_; 
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 0, v___x_2048_);
v___x_2050_ = v___x_2017_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2048_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
lean_dec_ref(v_opts_1518_);
v_a_2056_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2056_);
lean_dec_ref_known(v___x_2014_, 1);
v___x_2060_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2061_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2060_);
lean_dec_ref(v___x_2061_);
goto v___jp_2057_;
v___jp_2057_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = lean_io_error_to_string(v_a_2056_);
v___x_2059_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2058_);
lean_dec_ref(v___x_2059_);
goto v___jp_1612_;
}
}
}
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2062_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6));
v___x_2063_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2062_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2063_) == 0)
{
lean_object* v_a_2064_; lean_object* v___x_2065_; 
v_a_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc_n(v_a_2064_, 2);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2065_ = lean_load_dynlib(v_a_2064_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2107_; 
v_isSharedCheck_2107_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2107_ == 0)
{
lean_object* v_unused_2108_; 
v_unused_2108_ = lean_ctor_get(v___x_2065_, 0);
lean_dec(v_unused_2108_);
v___x_2067_ = v___x_2065_;
v_isShared_2068_ = v_isSharedCheck_2107_;
goto v_resetjp_2066_;
}
else
{
lean_dec(v___x_2065_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2107_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v_leanOpts_2069_; lean_object* v_forwardedArgs_2070_; uint8_t v_component_2071_; uint8_t v_printPrefix_2072_; uint8_t v_printLibDir_2073_; uint8_t v_useStdin_2074_; uint8_t v_onlyDeps_2075_; uint8_t v_onlySrcDeps_2076_; uint8_t v_depsJson_2077_; lean_object* v_opts_2078_; uint32_t v_trustLevel_2079_; uint32_t v_numThreads_2080_; lean_object* v_rootDir_x3f_2081_; lean_object* v_setupFileName_x3f_2082_; lean_object* v_oleanFileName_x3f_2083_; lean_object* v_ileanFileName_x3f_2084_; lean_object* v_cFileName_x3f_2085_; lean_object* v_bcFileName_x3f_2086_; uint8_t v_jsonOutput_2087_; lean_object* v_errorOnKinds_2088_; uint8_t v_printStats_2089_; uint8_t v_run_2090_; lean_object* v_incrSaveFileName_x3f_2091_; lean_object* v_incrLoadFileName_x3f_2092_; lean_object* v_incrHeaderSaveFileName_x3f_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2106_; 
v_leanOpts_2069_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2070_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2071_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2072_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2073_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2074_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2075_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2076_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2077_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2078_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2079_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2080_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2081_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2082_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2083_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2084_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2085_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2086_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2087_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2088_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2089_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2090_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2091_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2092_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2093_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2106_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2095_ = v_opts_1518_;
v_isShared_2096_ = v_isSharedCheck_2106_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2093_);
lean_inc(v_incrLoadFileName_x3f_2092_);
lean_inc(v_incrSaveFileName_x3f_2091_);
lean_inc(v_errorOnKinds_2088_);
lean_inc(v_bcFileName_x3f_2086_);
lean_inc(v_cFileName_x3f_2085_);
lean_inc(v_ileanFileName_x3f_2084_);
lean_inc(v_oleanFileName_x3f_2083_);
lean_inc(v_setupFileName_x3f_2082_);
lean_inc(v_rootDir_x3f_2081_);
lean_inc(v_opts_2078_);
lean_inc(v_forwardedArgs_2070_);
lean_inc(v_leanOpts_2069_);
lean_dec(v_opts_1518_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2106_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2101_; 
v___x_2097_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7));
v___x_2098_ = lean_string_append(v___x_2097_, v_a_2064_);
lean_dec(v_a_2064_);
v___x_2099_ = lean_array_push(v_forwardedArgs_2070_, v___x_2098_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v___x_2099_);
v___x_2101_ = v___x_2095_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_leanOpts_2069_);
lean_ctor_set(v_reuseFailAlloc_2105_, 1, v___x_2099_);
lean_ctor_set(v_reuseFailAlloc_2105_, 2, v_opts_2078_);
lean_ctor_set(v_reuseFailAlloc_2105_, 3, v_rootDir_x3f_2081_);
lean_ctor_set(v_reuseFailAlloc_2105_, 4, v_setupFileName_x3f_2082_);
lean_ctor_set(v_reuseFailAlloc_2105_, 5, v_oleanFileName_x3f_2083_);
lean_ctor_set(v_reuseFailAlloc_2105_, 6, v_ileanFileName_x3f_2084_);
lean_ctor_set(v_reuseFailAlloc_2105_, 7, v_cFileName_x3f_2085_);
lean_ctor_set(v_reuseFailAlloc_2105_, 8, v_bcFileName_x3f_2086_);
lean_ctor_set(v_reuseFailAlloc_2105_, 9, v_errorOnKinds_2088_);
lean_ctor_set(v_reuseFailAlloc_2105_, 10, v_incrSaveFileName_x3f_2091_);
lean_ctor_set(v_reuseFailAlloc_2105_, 11, v_incrLoadFileName_x3f_2092_);
lean_ctor_set(v_reuseFailAlloc_2105_, 12, v_incrHeaderSaveFileName_x3f_2093_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 8, v_component_2071_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 9, v_printPrefix_2072_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 10, v_printLibDir_2073_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 11, v_useStdin_2074_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 12, v_onlyDeps_2075_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 13, v_onlySrcDeps_2076_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 14, v_depsJson_2077_);
lean_ctor_set_uint32(v_reuseFailAlloc_2105_, sizeof(void*)*13, v_trustLevel_2079_);
lean_ctor_set_uint32(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 4, v_numThreads_2080_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 15, v_jsonOutput_2087_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 16, v_printStats_2089_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*13 + 17, v_run_2090_);
v___x_2101_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
lean_object* v___x_2103_; 
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 0, v___x_2101_);
v___x_2103_ = v___x_2067_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_2101_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
lean_dec(v_a_2064_);
lean_dec_ref(v_opts_1518_);
v_a_2109_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2065_, 1);
v___x_2113_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2114_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2113_);
lean_dec_ref(v___x_2114_);
goto v___jp_2110_;
v___jp_2110_:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2111_ = lean_io_error_to_string(v_a_2109_);
v___x_2112_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2111_);
lean_dec_ref(v___x_2112_);
goto v___jp_1670_;
}
}
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
lean_dec_ref(v_opts_1518_);
v_a_2115_ = lean_ctor_get(v___x_2063_, 0);
lean_inc(v_a_2115_);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2119_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2120_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2119_);
lean_dec_ref(v___x_2120_);
goto v___jp_2116_;
v___jp_2116_:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = lean_io_error_to_string(v_a_2115_);
v___x_2118_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2117_);
lean_dec_ref(v___x_2118_);
goto v___jp_1606_;
}
}
}
}
else
{
lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2121_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8));
v___x_2122_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2121_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2195_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2125_ = v___x_2122_;
v_isShared_2126_ = v_isSharedCheck_2195_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2122_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2195_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_fst_2128_; lean_object* v_snd_2129_; lean_object* v___y_2178_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2189_ = lean_unsigned_to_nat(0u);
v___x_2190_ = lean_string_utf8_byte_size(v_a_2123_);
lean_inc(v_a_2123_);
v___x_2191_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2191_, 0, v_a_2123_);
lean_ctor_set(v___x_2191_, 1, v___x_2189_);
lean_ctor_set(v___x_2191_, 2, v___x_2190_);
v___x_2192_ = lean_box(0);
v___x_2193_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_2191_, v_a_2123_, v___x_2189_, v___x_2192_);
lean_dec_ref_known(v___x_2191_, 3);
if (lean_obj_tag(v___x_2193_) == 0)
{
v___y_2178_ = v___x_2190_;
goto v___jp_2177_;
}
else
{
lean_object* v_val_2194_; 
v_val_2194_ = lean_ctor_get(v___x_2193_, 0);
lean_inc(v_val_2194_);
lean_dec_ref_known(v___x_2193_, 1);
v___y_2178_ = v_val_2194_;
goto v___jp_2177_;
}
v___jp_2127_:
{
lean_object* v___x_2130_; 
v___x_2130_ = lean_load_plugin(v_fst_2128_, v_snd_2129_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2172_; 
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2172_ == 0)
{
lean_object* v_unused_2173_; 
v_unused_2173_ = lean_ctor_get(v___x_2130_, 0);
lean_dec(v_unused_2173_);
v___x_2132_ = v___x_2130_;
v_isShared_2133_ = v_isSharedCheck_2172_;
goto v_resetjp_2131_;
}
else
{
lean_dec(v___x_2130_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2172_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v_leanOpts_2134_; lean_object* v_forwardedArgs_2135_; uint8_t v_component_2136_; uint8_t v_printPrefix_2137_; uint8_t v_printLibDir_2138_; uint8_t v_useStdin_2139_; uint8_t v_onlyDeps_2140_; uint8_t v_onlySrcDeps_2141_; uint8_t v_depsJson_2142_; lean_object* v_opts_2143_; uint32_t v_trustLevel_2144_; uint32_t v_numThreads_2145_; lean_object* v_rootDir_x3f_2146_; lean_object* v_setupFileName_x3f_2147_; lean_object* v_oleanFileName_x3f_2148_; lean_object* v_ileanFileName_x3f_2149_; lean_object* v_cFileName_x3f_2150_; lean_object* v_bcFileName_x3f_2151_; uint8_t v_jsonOutput_2152_; lean_object* v_errorOnKinds_2153_; uint8_t v_printStats_2154_; uint8_t v_run_2155_; lean_object* v_incrSaveFileName_x3f_2156_; lean_object* v_incrLoadFileName_x3f_2157_; lean_object* v_incrHeaderSaveFileName_x3f_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2171_; 
v_leanOpts_2134_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2135_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2136_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2137_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2138_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2139_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2140_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2141_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2142_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2143_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2144_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2145_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2146_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2147_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2148_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2149_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2150_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2151_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2152_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2153_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2154_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2155_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2156_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2157_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2158_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2171_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2160_ = v_opts_1518_;
v_isShared_2161_ = v_isSharedCheck_2171_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2158_);
lean_inc(v_incrLoadFileName_x3f_2157_);
lean_inc(v_incrSaveFileName_x3f_2156_);
lean_inc(v_errorOnKinds_2153_);
lean_inc(v_bcFileName_x3f_2151_);
lean_inc(v_cFileName_x3f_2150_);
lean_inc(v_ileanFileName_x3f_2149_);
lean_inc(v_oleanFileName_x3f_2148_);
lean_inc(v_setupFileName_x3f_2147_);
lean_inc(v_rootDir_x3f_2146_);
lean_inc(v_opts_2143_);
lean_inc(v_forwardedArgs_2135_);
lean_inc(v_leanOpts_2134_);
lean_dec(v_opts_1518_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2171_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2162_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9));
v___x_2163_ = lean_string_append(v___x_2162_, v_a_2123_);
lean_dec(v_a_2123_);
v___x_2164_ = lean_array_push(v_forwardedArgs_2135_, v___x_2163_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 1, v___x_2164_);
v___x_2166_ = v___x_2160_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_leanOpts_2134_);
lean_ctor_set(v_reuseFailAlloc_2170_, 1, v___x_2164_);
lean_ctor_set(v_reuseFailAlloc_2170_, 2, v_opts_2143_);
lean_ctor_set(v_reuseFailAlloc_2170_, 3, v_rootDir_x3f_2146_);
lean_ctor_set(v_reuseFailAlloc_2170_, 4, v_setupFileName_x3f_2147_);
lean_ctor_set(v_reuseFailAlloc_2170_, 5, v_oleanFileName_x3f_2148_);
lean_ctor_set(v_reuseFailAlloc_2170_, 6, v_ileanFileName_x3f_2149_);
lean_ctor_set(v_reuseFailAlloc_2170_, 7, v_cFileName_x3f_2150_);
lean_ctor_set(v_reuseFailAlloc_2170_, 8, v_bcFileName_x3f_2151_);
lean_ctor_set(v_reuseFailAlloc_2170_, 9, v_errorOnKinds_2153_);
lean_ctor_set(v_reuseFailAlloc_2170_, 10, v_incrSaveFileName_x3f_2156_);
lean_ctor_set(v_reuseFailAlloc_2170_, 11, v_incrLoadFileName_x3f_2157_);
lean_ctor_set(v_reuseFailAlloc_2170_, 12, v_incrHeaderSaveFileName_x3f_2158_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 8, v_component_2136_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 9, v_printPrefix_2137_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 10, v_printLibDir_2138_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 11, v_useStdin_2139_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 12, v_onlyDeps_2140_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 13, v_onlySrcDeps_2141_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 14, v_depsJson_2142_);
lean_ctor_set_uint32(v_reuseFailAlloc_2170_, sizeof(void*)*13, v_trustLevel_2144_);
lean_ctor_set_uint32(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 4, v_numThreads_2145_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 15, v_jsonOutput_2152_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 16, v_printStats_2154_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*13 + 17, v_run_2155_);
v___x_2166_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
lean_object* v___x_2168_; 
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 0, v___x_2166_);
v___x_2168_ = v___x_2132_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2166_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
}
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
lean_dec(v_a_2123_);
lean_dec_ref(v_opts_1518_);
v_a_2174_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2175_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2176_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2175_);
lean_dec_ref(v___x_2176_);
v___y_1680_ = v_a_2174_;
goto v___jp_1679_;
}
}
v___jp_2177_:
{
lean_object* v___x_2179_; uint8_t v___x_2180_; 
v___x_2179_ = lean_string_utf8_byte_size(v_a_2123_);
v___x_2180_ = lean_nat_dec_eq(v___y_2178_, v___x_2179_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2186_; 
v___x_2181_ = lean_unsigned_to_nat(0u);
v___x_2182_ = lean_string_utf8_next_fast(v_a_2123_, v___y_2178_);
v___x_2183_ = lean_string_utf8_extract(v_a_2123_, v___x_2181_, v___y_2178_);
lean_dec(v___y_2178_);
v___x_2184_ = lean_string_utf8_extract(v_a_2123_, v___x_2182_, v___x_2179_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set_tag(v___x_2125_, 1);
lean_ctor_set(v___x_2125_, 0, v___x_2184_);
v___x_2186_ = v___x_2125_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v___x_2184_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
v_fst_2128_ = v___x_2183_;
v_snd_2129_ = v___x_2186_;
goto v___jp_2127_;
}
}
else
{
lean_object* v___x_2188_; 
lean_dec(v___y_2178_);
lean_del_object(v___x_2125_);
v___x_2188_ = lean_box(0);
lean_inc(v_a_2123_);
v_fst_2128_ = v_a_2123_;
v_snd_2129_ = v___x_2188_;
goto v___jp_2127_;
}
}
}
}
else
{
lean_object* v_a_2196_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_dec_ref(v_opts_1518_);
v_a_2196_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2122_, 1);
v___x_2200_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2201_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2200_);
lean_dec_ref(v___x_2201_);
goto v___jp_2197_;
v___jp_2197_:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2198_ = lean_io_error_to_string(v_a_2196_);
v___x_2199_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2198_);
lean_dec_ref(v___x_2199_);
goto v___jp_1600_;
}
}
}
}
else
{
uint8_t v___x_2202_; 
v___x_2202_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_2202_ == 0)
{
lean_dec(v_optArg_x3f_1520_);
lean_dec_ref(v_opts_1518_);
goto v___jp_1652_;
}
else
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10));
v___x_2204_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2203_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2213_; 
v_a_2205_ = lean_ctor_get(v___x_2204_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2207_ = v___x_2204_;
v_isShared_2208_ = v_isSharedCheck_2213_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2204_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2213_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2211_; 
v___x_2209_ = lean_internal_enable_debug(v_a_2205_);
lean_dec(v_a_2205_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 0, v_opts_1518_);
v___x_2211_ = v___x_2207_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_opts_1518_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
lean_dec_ref(v_opts_1518_);
v_a_2214_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_a_2214_);
lean_dec_ref_known(v___x_2204_, 1);
v___x_2218_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2219_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2218_);
lean_dec_ref(v___x_2219_);
goto v___jp_2215_;
v___jp_2215_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2216_ = lean_io_error_to_string(v_a_2214_);
v___x_2217_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2216_);
lean_dec_ref(v___x_2217_);
goto v___jp_1686_;
}
}
}
}
}
else
{
lean_object* v_leanOpts_2220_; lean_object* v_forwardedArgs_2221_; uint8_t v_component_2222_; uint8_t v_printPrefix_2223_; uint8_t v_printLibDir_2224_; uint8_t v_useStdin_2225_; uint8_t v_onlyDeps_2226_; uint8_t v_onlySrcDeps_2227_; uint8_t v_depsJson_2228_; lean_object* v_opts_2229_; uint32_t v_trustLevel_2230_; uint32_t v_numThreads_2231_; lean_object* v_rootDir_x3f_2232_; lean_object* v_setupFileName_x3f_2233_; lean_object* v_oleanFileName_x3f_2234_; lean_object* v_ileanFileName_x3f_2235_; lean_object* v_cFileName_x3f_2236_; lean_object* v_bcFileName_x3f_2237_; uint8_t v_jsonOutput_2238_; lean_object* v_errorOnKinds_2239_; uint8_t v_printStats_2240_; uint8_t v_run_2241_; lean_object* v_incrSaveFileName_x3f_2242_; lean_object* v_incrLoadFileName_x3f_2243_; lean_object* v_incrHeaderSaveFileName_x3f_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2254_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2220_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2221_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2222_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2223_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2224_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2225_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2226_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2227_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2228_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2229_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2230_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2231_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2232_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2233_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2234_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2235_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2236_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2237_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2238_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2239_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2240_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2241_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2242_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2243_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2244_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2254_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2246_ = v_opts_1518_;
v_isShared_2247_ = v_isSharedCheck_2254_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2244_);
lean_inc(v_incrLoadFileName_x3f_2243_);
lean_inc(v_incrSaveFileName_x3f_2242_);
lean_inc(v_errorOnKinds_2239_);
lean_inc(v_bcFileName_x3f_2237_);
lean_inc(v_cFileName_x3f_2236_);
lean_inc(v_ileanFileName_x3f_2235_);
lean_inc(v_oleanFileName_x3f_2234_);
lean_inc(v_setupFileName_x3f_2233_);
lean_inc(v_rootDir_x3f_2232_);
lean_inc(v_opts_2229_);
lean_inc(v_forwardedArgs_2221_);
lean_inc(v_leanOpts_2220_);
lean_dec(v_opts_1518_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2254_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2251_; 
v___x_2248_ = l_Lean_profiler;
v___x_2249_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_leanOpts_2220_, v___x_2248_, v___x_1799_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 0, v___x_2249_);
v___x_2251_ = v___x_2246_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v___x_2249_);
lean_ctor_set(v_reuseFailAlloc_2253_, 1, v_forwardedArgs_2221_);
lean_ctor_set(v_reuseFailAlloc_2253_, 2, v_opts_2229_);
lean_ctor_set(v_reuseFailAlloc_2253_, 3, v_rootDir_x3f_2232_);
lean_ctor_set(v_reuseFailAlloc_2253_, 4, v_setupFileName_x3f_2233_);
lean_ctor_set(v_reuseFailAlloc_2253_, 5, v_oleanFileName_x3f_2234_);
lean_ctor_set(v_reuseFailAlloc_2253_, 6, v_ileanFileName_x3f_2235_);
lean_ctor_set(v_reuseFailAlloc_2253_, 7, v_cFileName_x3f_2236_);
lean_ctor_set(v_reuseFailAlloc_2253_, 8, v_bcFileName_x3f_2237_);
lean_ctor_set(v_reuseFailAlloc_2253_, 9, v_errorOnKinds_2239_);
lean_ctor_set(v_reuseFailAlloc_2253_, 10, v_incrSaveFileName_x3f_2242_);
lean_ctor_set(v_reuseFailAlloc_2253_, 11, v_incrLoadFileName_x3f_2243_);
lean_ctor_set(v_reuseFailAlloc_2253_, 12, v_incrHeaderSaveFileName_x3f_2244_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 8, v_component_2222_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 9, v_printPrefix_2223_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 10, v_printLibDir_2224_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 11, v_useStdin_2225_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 12, v_onlyDeps_2226_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 13, v_onlySrcDeps_2227_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 14, v_depsJson_2228_);
lean_ctor_set_uint32(v_reuseFailAlloc_2253_, sizeof(void*)*13, v_trustLevel_2230_);
lean_ctor_set_uint32(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 4, v_numThreads_2231_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 15, v_jsonOutput_2238_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 16, v_printStats_2240_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13 + 17, v_run_2241_);
v___x_2251_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
return v___x_2252_;
}
}
}
}
else
{
lean_object* v_leanOpts_2255_; lean_object* v_forwardedArgs_2256_; uint8_t v_printPrefix_2257_; uint8_t v_printLibDir_2258_; uint8_t v_useStdin_2259_; uint8_t v_onlyDeps_2260_; uint8_t v_onlySrcDeps_2261_; uint8_t v_depsJson_2262_; lean_object* v_opts_2263_; uint32_t v_trustLevel_2264_; uint32_t v_numThreads_2265_; lean_object* v_rootDir_x3f_2266_; lean_object* v_setupFileName_x3f_2267_; lean_object* v_oleanFileName_x3f_2268_; lean_object* v_ileanFileName_x3f_2269_; lean_object* v_cFileName_x3f_2270_; lean_object* v_bcFileName_x3f_2271_; uint8_t v_jsonOutput_2272_; lean_object* v_errorOnKinds_2273_; uint8_t v_printStats_2274_; uint8_t v_run_2275_; lean_object* v_incrSaveFileName_x3f_2276_; lean_object* v_incrLoadFileName_x3f_2277_; lean_object* v_incrHeaderSaveFileName_x3f_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2287_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2255_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2256_ = lean_ctor_get(v_opts_1518_, 1);
v_printPrefix_2257_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2258_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2259_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2260_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2261_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2262_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2263_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2264_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2265_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2266_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2267_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2268_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2269_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2270_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2271_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2272_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2273_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2274_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2275_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2276_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2277_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2278_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2287_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2280_ = v_opts_1518_;
v_isShared_2281_ = v_isSharedCheck_2287_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2278_);
lean_inc(v_incrLoadFileName_x3f_2277_);
lean_inc(v_incrSaveFileName_x3f_2276_);
lean_inc(v_errorOnKinds_2273_);
lean_inc(v_bcFileName_x3f_2271_);
lean_inc(v_cFileName_x3f_2270_);
lean_inc(v_ileanFileName_x3f_2269_);
lean_inc(v_oleanFileName_x3f_2268_);
lean_inc(v_setupFileName_x3f_2267_);
lean_inc(v_rootDir_x3f_2266_);
lean_inc(v_opts_2263_);
lean_inc(v_forwardedArgs_2256_);
lean_inc(v_leanOpts_2255_);
lean_dec(v_opts_1518_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2287_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
uint8_t v___x_2282_; lean_object* v___x_2284_; 
v___x_2282_ = 2;
if (v_isShared_2281_ == 0)
{
v___x_2284_ = v___x_2280_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_leanOpts_2255_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v_forwardedArgs_2256_);
lean_ctor_set(v_reuseFailAlloc_2286_, 2, v_opts_2263_);
lean_ctor_set(v_reuseFailAlloc_2286_, 3, v_rootDir_x3f_2266_);
lean_ctor_set(v_reuseFailAlloc_2286_, 4, v_setupFileName_x3f_2267_);
lean_ctor_set(v_reuseFailAlloc_2286_, 5, v_oleanFileName_x3f_2268_);
lean_ctor_set(v_reuseFailAlloc_2286_, 6, v_ileanFileName_x3f_2269_);
lean_ctor_set(v_reuseFailAlloc_2286_, 7, v_cFileName_x3f_2270_);
lean_ctor_set(v_reuseFailAlloc_2286_, 8, v_bcFileName_x3f_2271_);
lean_ctor_set(v_reuseFailAlloc_2286_, 9, v_errorOnKinds_2273_);
lean_ctor_set(v_reuseFailAlloc_2286_, 10, v_incrSaveFileName_x3f_2276_);
lean_ctor_set(v_reuseFailAlloc_2286_, 11, v_incrLoadFileName_x3f_2277_);
lean_ctor_set(v_reuseFailAlloc_2286_, 12, v_incrHeaderSaveFileName_x3f_2278_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 9, v_printPrefix_2257_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 10, v_printLibDir_2258_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 11, v_useStdin_2259_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 12, v_onlyDeps_2260_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 13, v_onlySrcDeps_2261_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 14, v_depsJson_2262_);
lean_ctor_set_uint32(v_reuseFailAlloc_2286_, sizeof(void*)*13, v_trustLevel_2264_);
lean_ctor_set_uint32(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 4, v_numThreads_2265_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 15, v_jsonOutput_2272_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 16, v_printStats_2274_);
lean_ctor_set_uint8(v_reuseFailAlloc_2286_, sizeof(void*)*13 + 17, v_run_2275_);
v___x_2284_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2285_; 
lean_ctor_set_uint8(v___x_2284_, sizeof(void*)*13 + 8, v___x_2282_);
v___x_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
return v___x_2285_;
}
}
}
}
else
{
lean_object* v_leanOpts_2288_; lean_object* v_forwardedArgs_2289_; uint8_t v_printPrefix_2290_; uint8_t v_printLibDir_2291_; uint8_t v_useStdin_2292_; uint8_t v_onlyDeps_2293_; uint8_t v_onlySrcDeps_2294_; uint8_t v_depsJson_2295_; lean_object* v_opts_2296_; uint32_t v_trustLevel_2297_; uint32_t v_numThreads_2298_; lean_object* v_rootDir_x3f_2299_; lean_object* v_setupFileName_x3f_2300_; lean_object* v_oleanFileName_x3f_2301_; lean_object* v_ileanFileName_x3f_2302_; lean_object* v_cFileName_x3f_2303_; lean_object* v_bcFileName_x3f_2304_; uint8_t v_jsonOutput_2305_; lean_object* v_errorOnKinds_2306_; uint8_t v_printStats_2307_; uint8_t v_run_2308_; lean_object* v_incrSaveFileName_x3f_2309_; lean_object* v_incrLoadFileName_x3f_2310_; lean_object* v_incrHeaderSaveFileName_x3f_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2320_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2288_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2289_ = lean_ctor_get(v_opts_1518_, 1);
v_printPrefix_2290_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2291_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2292_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2293_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2294_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2295_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2296_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2297_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2298_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2299_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2300_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2301_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2302_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2303_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2304_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2305_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2306_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2307_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2308_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2309_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2310_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2311_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2320_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2313_ = v_opts_1518_;
v_isShared_2314_ = v_isSharedCheck_2320_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2311_);
lean_inc(v_incrLoadFileName_x3f_2310_);
lean_inc(v_incrSaveFileName_x3f_2309_);
lean_inc(v_errorOnKinds_2306_);
lean_inc(v_bcFileName_x3f_2304_);
lean_inc(v_cFileName_x3f_2303_);
lean_inc(v_ileanFileName_x3f_2302_);
lean_inc(v_oleanFileName_x3f_2301_);
lean_inc(v_setupFileName_x3f_2300_);
lean_inc(v_rootDir_x3f_2299_);
lean_inc(v_opts_2296_);
lean_inc(v_forwardedArgs_2289_);
lean_inc(v_leanOpts_2288_);
lean_dec(v_opts_1518_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2320_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
uint8_t v___x_2315_; lean_object* v___x_2317_; 
v___x_2315_ = 1;
if (v_isShared_2314_ == 0)
{
v___x_2317_ = v___x_2313_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_leanOpts_2288_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v_forwardedArgs_2289_);
lean_ctor_set(v_reuseFailAlloc_2319_, 2, v_opts_2296_);
lean_ctor_set(v_reuseFailAlloc_2319_, 3, v_rootDir_x3f_2299_);
lean_ctor_set(v_reuseFailAlloc_2319_, 4, v_setupFileName_x3f_2300_);
lean_ctor_set(v_reuseFailAlloc_2319_, 5, v_oleanFileName_x3f_2301_);
lean_ctor_set(v_reuseFailAlloc_2319_, 6, v_ileanFileName_x3f_2302_);
lean_ctor_set(v_reuseFailAlloc_2319_, 7, v_cFileName_x3f_2303_);
lean_ctor_set(v_reuseFailAlloc_2319_, 8, v_bcFileName_x3f_2304_);
lean_ctor_set(v_reuseFailAlloc_2319_, 9, v_errorOnKinds_2306_);
lean_ctor_set(v_reuseFailAlloc_2319_, 10, v_incrSaveFileName_x3f_2309_);
lean_ctor_set(v_reuseFailAlloc_2319_, 11, v_incrLoadFileName_x3f_2310_);
lean_ctor_set(v_reuseFailAlloc_2319_, 12, v_incrHeaderSaveFileName_x3f_2311_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 9, v_printPrefix_2290_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 10, v_printLibDir_2291_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 11, v_useStdin_2292_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 12, v_onlyDeps_2293_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 13, v_onlySrcDeps_2294_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 14, v_depsJson_2295_);
lean_ctor_set_uint32(v_reuseFailAlloc_2319_, sizeof(void*)*13, v_trustLevel_2297_);
lean_ctor_set_uint32(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 4, v_numThreads_2298_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 15, v_jsonOutput_2305_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 16, v_printStats_2307_);
lean_ctor_set_uint8(v_reuseFailAlloc_2319_, sizeof(void*)*13 + 17, v_run_2308_);
v___x_2317_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
lean_object* v___x_2318_; 
lean_ctor_set_uint8(v___x_2317_, sizeof(void*)*13 + 8, v___x_2315_);
v___x_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
return v___x_2318_;
}
}
}
}
else
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11));
v___x_2322_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2321_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v_leanOpts_2324_; lean_object* v_forwardedArgs_2325_; uint8_t v_component_2326_; uint8_t v_printPrefix_2327_; uint8_t v_printLibDir_2328_; uint8_t v_useStdin_2329_; uint8_t v_onlyDeps_2330_; uint8_t v_onlySrcDeps_2331_; uint8_t v_depsJson_2332_; lean_object* v_opts_2333_; uint32_t v_trustLevel_2334_; uint32_t v_numThreads_2335_; lean_object* v_rootDir_x3f_2336_; lean_object* v_setupFileName_x3f_2337_; lean_object* v_oleanFileName_x3f_2338_; lean_object* v_ileanFileName_x3f_2339_; lean_object* v_cFileName_x3f_2340_; lean_object* v_bcFileName_x3f_2341_; uint8_t v_jsonOutput_2342_; lean_object* v_errorOnKinds_2343_; uint8_t v_printStats_2344_; uint8_t v_run_2345_; lean_object* v_incrSaveFileName_x3f_2346_; lean_object* v_incrLoadFileName_x3f_2347_; lean_object* v_incrHeaderSaveFileName_x3f_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2373_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2323_);
lean_dec_ref_known(v___x_2322_, 1);
v_leanOpts_2324_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2325_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2326_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2327_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2328_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2329_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2330_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2331_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2332_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2333_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2334_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2335_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2336_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2337_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2338_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2339_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2340_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2341_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2342_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2343_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2344_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2345_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2346_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2347_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2348_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2373_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2350_ = v_opts_1518_;
v_isShared_2351_ = v_isSharedCheck_2373_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2348_);
lean_inc(v_incrLoadFileName_x3f_2347_);
lean_inc(v_incrSaveFileName_x3f_2346_);
lean_inc(v_errorOnKinds_2343_);
lean_inc(v_bcFileName_x3f_2341_);
lean_inc(v_cFileName_x3f_2340_);
lean_inc(v_ileanFileName_x3f_2339_);
lean_inc(v_oleanFileName_x3f_2338_);
lean_inc(v_setupFileName_x3f_2337_);
lean_inc(v_rootDir_x3f_2336_);
lean_inc(v_opts_2333_);
lean_inc(v_forwardedArgs_2325_);
lean_inc(v_leanOpts_2324_);
lean_dec(v_opts_1518_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2373_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2352_; 
lean_inc(v_a_2323_);
v___x_2352_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_leanOpts_2324_, v_a_2323_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2366_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2355_ = v___x_2352_;
v_isShared_2356_ = v_isSharedCheck_2366_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2352_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2366_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; 
v___x_2357_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12));
v___x_2358_ = lean_string_append(v___x_2357_, v_a_2323_);
lean_dec(v_a_2323_);
v___x_2359_ = lean_array_push(v_forwardedArgs_2325_, v___x_2358_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 1, v___x_2359_);
lean_ctor_set(v___x_2350_, 0, v_a_2353_);
v___x_2361_ = v___x_2350_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_a_2353_);
lean_ctor_set(v_reuseFailAlloc_2365_, 1, v___x_2359_);
lean_ctor_set(v_reuseFailAlloc_2365_, 2, v_opts_2333_);
lean_ctor_set(v_reuseFailAlloc_2365_, 3, v_rootDir_x3f_2336_);
lean_ctor_set(v_reuseFailAlloc_2365_, 4, v_setupFileName_x3f_2337_);
lean_ctor_set(v_reuseFailAlloc_2365_, 5, v_oleanFileName_x3f_2338_);
lean_ctor_set(v_reuseFailAlloc_2365_, 6, v_ileanFileName_x3f_2339_);
lean_ctor_set(v_reuseFailAlloc_2365_, 7, v_cFileName_x3f_2340_);
lean_ctor_set(v_reuseFailAlloc_2365_, 8, v_bcFileName_x3f_2341_);
lean_ctor_set(v_reuseFailAlloc_2365_, 9, v_errorOnKinds_2343_);
lean_ctor_set(v_reuseFailAlloc_2365_, 10, v_incrSaveFileName_x3f_2346_);
lean_ctor_set(v_reuseFailAlloc_2365_, 11, v_incrLoadFileName_x3f_2347_);
lean_ctor_set(v_reuseFailAlloc_2365_, 12, v_incrHeaderSaveFileName_x3f_2348_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 8, v_component_2326_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 9, v_printPrefix_2327_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 10, v_printLibDir_2328_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 11, v_useStdin_2329_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 12, v_onlyDeps_2330_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 13, v_onlySrcDeps_2331_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 14, v_depsJson_2332_);
lean_ctor_set_uint32(v_reuseFailAlloc_2365_, sizeof(void*)*13, v_trustLevel_2334_);
lean_ctor_set_uint32(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 4, v_numThreads_2335_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 15, v_jsonOutput_2342_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 16, v_printStats_2344_);
lean_ctor_set_uint8(v_reuseFailAlloc_2365_, sizeof(void*)*13 + 17, v_run_2345_);
v___x_2361_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2363_; 
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2361_);
v___x_2363_ = v___x_2355_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2361_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
else
{
lean_object* v_a_2367_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
lean_del_object(v___x_2350_);
lean_dec(v_incrHeaderSaveFileName_x3f_2348_);
lean_dec(v_incrLoadFileName_x3f_2347_);
lean_dec(v_incrSaveFileName_x3f_2346_);
lean_dec_ref(v_errorOnKinds_2343_);
lean_dec(v_bcFileName_x3f_2341_);
lean_dec(v_cFileName_x3f_2340_);
lean_dec(v_ileanFileName_x3f_2339_);
lean_dec(v_oleanFileName_x3f_2338_);
lean_dec(v_setupFileName_x3f_2337_);
lean_dec(v_rootDir_x3f_2336_);
lean_dec_ref(v_opts_2333_);
lean_dec_ref(v_forwardedArgs_2325_);
lean_dec(v_a_2323_);
v_a_2367_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2367_);
lean_dec_ref_known(v___x_2352_, 1);
v___x_2371_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2372_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2371_);
lean_dec_ref(v___x_2372_);
goto v___jp_2368_;
v___jp_2368_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = lean_io_error_to_string(v_a_2367_);
v___x_2370_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2369_);
lean_dec_ref(v___x_2370_);
goto v___jp_1594_;
}
}
}
}
else
{
lean_object* v_a_2374_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
lean_dec_ref(v_opts_1518_);
v_a_2374_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2374_);
lean_dec_ref_known(v___x_2322_, 1);
v___x_2378_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2379_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2378_);
lean_dec_ref(v___x_2379_);
goto v___jp_2375_;
v___jp_2375_:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2376_ = lean_io_error_to_string(v_a_2374_);
v___x_2377_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2376_);
lean_dec_ref(v___x_2377_);
goto v___jp_1692_;
}
}
}
}
else
{
lean_object* v_leanOpts_2380_; lean_object* v_forwardedArgs_2381_; uint8_t v_component_2382_; uint8_t v_printPrefix_2383_; uint8_t v_useStdin_2384_; uint8_t v_onlyDeps_2385_; uint8_t v_onlySrcDeps_2386_; uint8_t v_depsJson_2387_; lean_object* v_opts_2388_; uint32_t v_trustLevel_2389_; uint32_t v_numThreads_2390_; lean_object* v_rootDir_x3f_2391_; lean_object* v_setupFileName_x3f_2392_; lean_object* v_oleanFileName_x3f_2393_; lean_object* v_ileanFileName_x3f_2394_; lean_object* v_cFileName_x3f_2395_; lean_object* v_bcFileName_x3f_2396_; uint8_t v_jsonOutput_2397_; lean_object* v_errorOnKinds_2398_; uint8_t v_printStats_2399_; uint8_t v_run_2400_; lean_object* v_incrSaveFileName_x3f_2401_; lean_object* v_incrLoadFileName_x3f_2402_; lean_object* v_incrHeaderSaveFileName_x3f_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2411_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2380_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2381_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2382_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2383_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_useStdin_2384_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2385_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2386_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2387_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2388_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2389_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2390_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2391_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2392_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2393_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2394_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2395_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2396_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2397_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2398_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2399_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2400_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2401_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2402_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2403_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2405_ = v_opts_1518_;
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2403_);
lean_inc(v_incrLoadFileName_x3f_2402_);
lean_inc(v_incrSaveFileName_x3f_2401_);
lean_inc(v_errorOnKinds_2398_);
lean_inc(v_bcFileName_x3f_2396_);
lean_inc(v_cFileName_x3f_2395_);
lean_inc(v_ileanFileName_x3f_2394_);
lean_inc(v_oleanFileName_x3f_2393_);
lean_inc(v_setupFileName_x3f_2392_);
lean_inc(v_rootDir_x3f_2391_);
lean_inc(v_opts_2388_);
lean_inc(v_forwardedArgs_2381_);
lean_inc(v_leanOpts_2380_);
lean_dec(v_opts_1518_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_leanOpts_2380_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_forwardedArgs_2381_);
lean_ctor_set(v_reuseFailAlloc_2410_, 2, v_opts_2388_);
lean_ctor_set(v_reuseFailAlloc_2410_, 3, v_rootDir_x3f_2391_);
lean_ctor_set(v_reuseFailAlloc_2410_, 4, v_setupFileName_x3f_2392_);
lean_ctor_set(v_reuseFailAlloc_2410_, 5, v_oleanFileName_x3f_2393_);
lean_ctor_set(v_reuseFailAlloc_2410_, 6, v_ileanFileName_x3f_2394_);
lean_ctor_set(v_reuseFailAlloc_2410_, 7, v_cFileName_x3f_2395_);
lean_ctor_set(v_reuseFailAlloc_2410_, 8, v_bcFileName_x3f_2396_);
lean_ctor_set(v_reuseFailAlloc_2410_, 9, v_errorOnKinds_2398_);
lean_ctor_set(v_reuseFailAlloc_2410_, 10, v_incrSaveFileName_x3f_2401_);
lean_ctor_set(v_reuseFailAlloc_2410_, 11, v_incrLoadFileName_x3f_2402_);
lean_ctor_set(v_reuseFailAlloc_2410_, 12, v_incrHeaderSaveFileName_x3f_2403_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 8, v_component_2382_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 9, v_printPrefix_2383_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 11, v_useStdin_2384_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 12, v_onlyDeps_2385_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 13, v_onlySrcDeps_2386_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 14, v_depsJson_2387_);
lean_ctor_set_uint32(v_reuseFailAlloc_2410_, sizeof(void*)*13, v_trustLevel_2389_);
lean_ctor_set_uint32(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 4, v_numThreads_2390_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 15, v_jsonOutput_2397_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 16, v_printStats_2399_);
lean_ctor_set_uint8(v_reuseFailAlloc_2410_, sizeof(void*)*13 + 17, v_run_2400_);
v___x_2408_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
lean_object* v___x_2409_; 
lean_ctor_set_uint8(v___x_2408_, sizeof(void*)*13 + 10, v___x_1791_);
v___x_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
return v___x_2409_;
}
}
}
}
else
{
lean_object* v_leanOpts_2412_; lean_object* v_forwardedArgs_2413_; uint8_t v_component_2414_; uint8_t v_printLibDir_2415_; uint8_t v_useStdin_2416_; uint8_t v_onlyDeps_2417_; uint8_t v_onlySrcDeps_2418_; uint8_t v_depsJson_2419_; lean_object* v_opts_2420_; uint32_t v_trustLevel_2421_; uint32_t v_numThreads_2422_; lean_object* v_rootDir_x3f_2423_; lean_object* v_setupFileName_x3f_2424_; lean_object* v_oleanFileName_x3f_2425_; lean_object* v_ileanFileName_x3f_2426_; lean_object* v_cFileName_x3f_2427_; lean_object* v_bcFileName_x3f_2428_; uint8_t v_jsonOutput_2429_; lean_object* v_errorOnKinds_2430_; uint8_t v_printStats_2431_; uint8_t v_run_2432_; lean_object* v_incrSaveFileName_x3f_2433_; lean_object* v_incrLoadFileName_x3f_2434_; lean_object* v_incrHeaderSaveFileName_x3f_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2443_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2412_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2413_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2414_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printLibDir_2415_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2416_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2417_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2418_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2419_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2420_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2421_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2422_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2423_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2424_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2425_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2426_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2427_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2428_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2429_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2430_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2431_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2432_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2433_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2434_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2435_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2443_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2437_ = v_opts_1518_;
v_isShared_2438_ = v_isSharedCheck_2443_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2435_);
lean_inc(v_incrLoadFileName_x3f_2434_);
lean_inc(v_incrSaveFileName_x3f_2433_);
lean_inc(v_errorOnKinds_2430_);
lean_inc(v_bcFileName_x3f_2428_);
lean_inc(v_cFileName_x3f_2427_);
lean_inc(v_ileanFileName_x3f_2426_);
lean_inc(v_oleanFileName_x3f_2425_);
lean_inc(v_setupFileName_x3f_2424_);
lean_inc(v_rootDir_x3f_2423_);
lean_inc(v_opts_2420_);
lean_inc(v_forwardedArgs_2413_);
lean_inc(v_leanOpts_2412_);
lean_dec(v_opts_1518_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2443_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_leanOpts_2412_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_forwardedArgs_2413_);
lean_ctor_set(v_reuseFailAlloc_2442_, 2, v_opts_2420_);
lean_ctor_set(v_reuseFailAlloc_2442_, 3, v_rootDir_x3f_2423_);
lean_ctor_set(v_reuseFailAlloc_2442_, 4, v_setupFileName_x3f_2424_);
lean_ctor_set(v_reuseFailAlloc_2442_, 5, v_oleanFileName_x3f_2425_);
lean_ctor_set(v_reuseFailAlloc_2442_, 6, v_ileanFileName_x3f_2426_);
lean_ctor_set(v_reuseFailAlloc_2442_, 7, v_cFileName_x3f_2427_);
lean_ctor_set(v_reuseFailAlloc_2442_, 8, v_bcFileName_x3f_2428_);
lean_ctor_set(v_reuseFailAlloc_2442_, 9, v_errorOnKinds_2430_);
lean_ctor_set(v_reuseFailAlloc_2442_, 10, v_incrSaveFileName_x3f_2433_);
lean_ctor_set(v_reuseFailAlloc_2442_, 11, v_incrLoadFileName_x3f_2434_);
lean_ctor_set(v_reuseFailAlloc_2442_, 12, v_incrHeaderSaveFileName_x3f_2435_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 8, v_component_2414_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 10, v_printLibDir_2415_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 11, v_useStdin_2416_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 12, v_onlyDeps_2417_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 13, v_onlySrcDeps_2418_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 14, v_depsJson_2419_);
lean_ctor_set_uint32(v_reuseFailAlloc_2442_, sizeof(void*)*13, v_trustLevel_2421_);
lean_ctor_set_uint32(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 4, v_numThreads_2422_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 15, v_jsonOutput_2429_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 16, v_printStats_2431_);
lean_ctor_set_uint8(v_reuseFailAlloc_2442_, sizeof(void*)*13 + 17, v_run_2432_);
v___x_2440_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
lean_object* v___x_2441_; 
lean_ctor_set_uint8(v___x_2440_, sizeof(void*)*13 + 9, v___x_1789_);
v___x_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2440_);
return v___x_2441_;
}
}
}
}
else
{
lean_object* v_leanOpts_2444_; lean_object* v_forwardedArgs_2445_; uint8_t v_component_2446_; uint8_t v_printPrefix_2447_; uint8_t v_printLibDir_2448_; uint8_t v_useStdin_2449_; uint8_t v_onlyDeps_2450_; uint8_t v_onlySrcDeps_2451_; uint8_t v_depsJson_2452_; lean_object* v_opts_2453_; uint32_t v_trustLevel_2454_; uint32_t v_numThreads_2455_; lean_object* v_rootDir_x3f_2456_; lean_object* v_setupFileName_x3f_2457_; lean_object* v_oleanFileName_x3f_2458_; lean_object* v_ileanFileName_x3f_2459_; lean_object* v_cFileName_x3f_2460_; lean_object* v_bcFileName_x3f_2461_; uint8_t v_jsonOutput_2462_; lean_object* v_errorOnKinds_2463_; uint8_t v_run_2464_; lean_object* v_incrSaveFileName_x3f_2465_; lean_object* v_incrLoadFileName_x3f_2466_; lean_object* v_incrHeaderSaveFileName_x3f_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2475_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2444_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2445_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2446_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2447_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2448_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2449_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2450_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2451_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2452_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2453_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2454_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2455_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2456_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2457_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2458_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2459_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2460_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2461_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2462_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2463_ = lean_ctor_get(v_opts_1518_, 9);
v_run_2464_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2465_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2466_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2467_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2475_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2469_ = v_opts_1518_;
v_isShared_2470_ = v_isSharedCheck_2475_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2467_);
lean_inc(v_incrLoadFileName_x3f_2466_);
lean_inc(v_incrSaveFileName_x3f_2465_);
lean_inc(v_errorOnKinds_2463_);
lean_inc(v_bcFileName_x3f_2461_);
lean_inc(v_cFileName_x3f_2460_);
lean_inc(v_ileanFileName_x3f_2459_);
lean_inc(v_oleanFileName_x3f_2458_);
lean_inc(v_setupFileName_x3f_2457_);
lean_inc(v_rootDir_x3f_2456_);
lean_inc(v_opts_2453_);
lean_inc(v_forwardedArgs_2445_);
lean_inc(v_leanOpts_2444_);
lean_dec(v_opts_1518_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2475_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_leanOpts_2444_);
lean_ctor_set(v_reuseFailAlloc_2474_, 1, v_forwardedArgs_2445_);
lean_ctor_set(v_reuseFailAlloc_2474_, 2, v_opts_2453_);
lean_ctor_set(v_reuseFailAlloc_2474_, 3, v_rootDir_x3f_2456_);
lean_ctor_set(v_reuseFailAlloc_2474_, 4, v_setupFileName_x3f_2457_);
lean_ctor_set(v_reuseFailAlloc_2474_, 5, v_oleanFileName_x3f_2458_);
lean_ctor_set(v_reuseFailAlloc_2474_, 6, v_ileanFileName_x3f_2459_);
lean_ctor_set(v_reuseFailAlloc_2474_, 7, v_cFileName_x3f_2460_);
lean_ctor_set(v_reuseFailAlloc_2474_, 8, v_bcFileName_x3f_2461_);
lean_ctor_set(v_reuseFailAlloc_2474_, 9, v_errorOnKinds_2463_);
lean_ctor_set(v_reuseFailAlloc_2474_, 10, v_incrSaveFileName_x3f_2465_);
lean_ctor_set(v_reuseFailAlloc_2474_, 11, v_incrLoadFileName_x3f_2466_);
lean_ctor_set(v_reuseFailAlloc_2474_, 12, v_incrHeaderSaveFileName_x3f_2467_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 8, v_component_2446_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 9, v_printPrefix_2447_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 10, v_printLibDir_2448_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 11, v_useStdin_2449_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 12, v_onlyDeps_2450_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 13, v_onlySrcDeps_2451_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 14, v_depsJson_2452_);
lean_ctor_set_uint32(v_reuseFailAlloc_2474_, sizeof(void*)*13, v_trustLevel_2454_);
lean_ctor_set_uint32(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 4, v_numThreads_2455_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 15, v_jsonOutput_2462_);
lean_ctor_set_uint8(v_reuseFailAlloc_2474_, sizeof(void*)*13 + 17, v_run_2464_);
v___x_2472_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
lean_object* v___x_2473_; 
lean_ctor_set_uint8(v___x_2472_, sizeof(void*)*13 + 16, v___x_1787_);
v___x_2473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
return v___x_2473_;
}
}
}
}
else
{
lean_object* v_leanOpts_2476_; lean_object* v_forwardedArgs_2477_; uint8_t v_component_2478_; uint8_t v_printPrefix_2479_; uint8_t v_printLibDir_2480_; uint8_t v_useStdin_2481_; uint8_t v_onlyDeps_2482_; uint8_t v_onlySrcDeps_2483_; uint8_t v_depsJson_2484_; lean_object* v_opts_2485_; uint32_t v_trustLevel_2486_; uint32_t v_numThreads_2487_; lean_object* v_rootDir_x3f_2488_; lean_object* v_setupFileName_x3f_2489_; lean_object* v_oleanFileName_x3f_2490_; lean_object* v_ileanFileName_x3f_2491_; lean_object* v_cFileName_x3f_2492_; lean_object* v_bcFileName_x3f_2493_; lean_object* v_errorOnKinds_2494_; uint8_t v_printStats_2495_; uint8_t v_run_2496_; lean_object* v_incrSaveFileName_x3f_2497_; lean_object* v_incrLoadFileName_x3f_2498_; lean_object* v_incrHeaderSaveFileName_x3f_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2507_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2476_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2477_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2478_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2479_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2480_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2481_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2482_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2483_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2484_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2485_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2486_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2487_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2488_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2489_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2490_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2491_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2492_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2493_ = lean_ctor_get(v_opts_1518_, 8);
v_errorOnKinds_2494_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2495_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2496_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2497_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2498_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2499_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2507_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2501_ = v_opts_1518_;
v_isShared_2502_ = v_isSharedCheck_2507_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2499_);
lean_inc(v_incrLoadFileName_x3f_2498_);
lean_inc(v_incrSaveFileName_x3f_2497_);
lean_inc(v_errorOnKinds_2494_);
lean_inc(v_bcFileName_x3f_2493_);
lean_inc(v_cFileName_x3f_2492_);
lean_inc(v_ileanFileName_x3f_2491_);
lean_inc(v_oleanFileName_x3f_2490_);
lean_inc(v_setupFileName_x3f_2489_);
lean_inc(v_rootDir_x3f_2488_);
lean_inc(v_opts_2485_);
lean_inc(v_forwardedArgs_2477_);
lean_inc(v_leanOpts_2476_);
lean_dec(v_opts_1518_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2507_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2504_; 
if (v_isShared_2502_ == 0)
{
v___x_2504_ = v___x_2501_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_leanOpts_2476_);
lean_ctor_set(v_reuseFailAlloc_2506_, 1, v_forwardedArgs_2477_);
lean_ctor_set(v_reuseFailAlloc_2506_, 2, v_opts_2485_);
lean_ctor_set(v_reuseFailAlloc_2506_, 3, v_rootDir_x3f_2488_);
lean_ctor_set(v_reuseFailAlloc_2506_, 4, v_setupFileName_x3f_2489_);
lean_ctor_set(v_reuseFailAlloc_2506_, 5, v_oleanFileName_x3f_2490_);
lean_ctor_set(v_reuseFailAlloc_2506_, 6, v_ileanFileName_x3f_2491_);
lean_ctor_set(v_reuseFailAlloc_2506_, 7, v_cFileName_x3f_2492_);
lean_ctor_set(v_reuseFailAlloc_2506_, 8, v_bcFileName_x3f_2493_);
lean_ctor_set(v_reuseFailAlloc_2506_, 9, v_errorOnKinds_2494_);
lean_ctor_set(v_reuseFailAlloc_2506_, 10, v_incrSaveFileName_x3f_2497_);
lean_ctor_set(v_reuseFailAlloc_2506_, 11, v_incrLoadFileName_x3f_2498_);
lean_ctor_set(v_reuseFailAlloc_2506_, 12, v_incrHeaderSaveFileName_x3f_2499_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 8, v_component_2478_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 9, v_printPrefix_2479_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 10, v_printLibDir_2480_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 11, v_useStdin_2481_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 12, v_onlyDeps_2482_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 13, v_onlySrcDeps_2483_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 14, v_depsJson_2484_);
lean_ctor_set_uint32(v_reuseFailAlloc_2506_, sizeof(void*)*13, v_trustLevel_2486_);
lean_ctor_set_uint32(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 4, v_numThreads_2487_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 16, v_printStats_2495_);
lean_ctor_set_uint8(v_reuseFailAlloc_2506_, sizeof(void*)*13 + 17, v_run_2496_);
v___x_2504_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
lean_object* v___x_2505_; 
lean_ctor_set_uint8(v___x_2504_, sizeof(void*)*13 + 15, v___x_1785_);
v___x_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
return v___x_2505_;
}
}
}
}
else
{
lean_object* v_leanOpts_2508_; lean_object* v_forwardedArgs_2509_; uint8_t v_component_2510_; uint8_t v_printPrefix_2511_; uint8_t v_printLibDir_2512_; uint8_t v_useStdin_2513_; uint8_t v_onlySrcDeps_2514_; lean_object* v_opts_2515_; uint32_t v_trustLevel_2516_; uint32_t v_numThreads_2517_; lean_object* v_rootDir_x3f_2518_; lean_object* v_setupFileName_x3f_2519_; lean_object* v_oleanFileName_x3f_2520_; lean_object* v_ileanFileName_x3f_2521_; lean_object* v_cFileName_x3f_2522_; lean_object* v_bcFileName_x3f_2523_; uint8_t v_jsonOutput_2524_; lean_object* v_errorOnKinds_2525_; uint8_t v_printStats_2526_; uint8_t v_run_2527_; lean_object* v_incrSaveFileName_x3f_2528_; lean_object* v_incrLoadFileName_x3f_2529_; lean_object* v_incrHeaderSaveFileName_x3f_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2538_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2508_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2509_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2510_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2511_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2512_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2513_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlySrcDeps_2514_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_opts_2515_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2516_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2517_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2518_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2519_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2520_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2521_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2522_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2523_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2524_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2525_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2526_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2527_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2528_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2529_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2530_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2538_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2532_ = v_opts_1518_;
v_isShared_2533_ = v_isSharedCheck_2538_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2530_);
lean_inc(v_incrLoadFileName_x3f_2529_);
lean_inc(v_incrSaveFileName_x3f_2528_);
lean_inc(v_errorOnKinds_2525_);
lean_inc(v_bcFileName_x3f_2523_);
lean_inc(v_cFileName_x3f_2522_);
lean_inc(v_ileanFileName_x3f_2521_);
lean_inc(v_oleanFileName_x3f_2520_);
lean_inc(v_setupFileName_x3f_2519_);
lean_inc(v_rootDir_x3f_2518_);
lean_inc(v_opts_2515_);
lean_inc(v_forwardedArgs_2509_);
lean_inc(v_leanOpts_2508_);
lean_dec(v_opts_1518_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2538_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_leanOpts_2508_);
lean_ctor_set(v_reuseFailAlloc_2537_, 1, v_forwardedArgs_2509_);
lean_ctor_set(v_reuseFailAlloc_2537_, 2, v_opts_2515_);
lean_ctor_set(v_reuseFailAlloc_2537_, 3, v_rootDir_x3f_2518_);
lean_ctor_set(v_reuseFailAlloc_2537_, 4, v_setupFileName_x3f_2519_);
lean_ctor_set(v_reuseFailAlloc_2537_, 5, v_oleanFileName_x3f_2520_);
lean_ctor_set(v_reuseFailAlloc_2537_, 6, v_ileanFileName_x3f_2521_);
lean_ctor_set(v_reuseFailAlloc_2537_, 7, v_cFileName_x3f_2522_);
lean_ctor_set(v_reuseFailAlloc_2537_, 8, v_bcFileName_x3f_2523_);
lean_ctor_set(v_reuseFailAlloc_2537_, 9, v_errorOnKinds_2525_);
lean_ctor_set(v_reuseFailAlloc_2537_, 10, v_incrSaveFileName_x3f_2528_);
lean_ctor_set(v_reuseFailAlloc_2537_, 11, v_incrLoadFileName_x3f_2529_);
lean_ctor_set(v_reuseFailAlloc_2537_, 12, v_incrHeaderSaveFileName_x3f_2530_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 8, v_component_2510_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 9, v_printPrefix_2511_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 10, v_printLibDir_2512_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 11, v_useStdin_2513_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 13, v_onlySrcDeps_2514_);
lean_ctor_set_uint32(v_reuseFailAlloc_2537_, sizeof(void*)*13, v_trustLevel_2516_);
lean_ctor_set_uint32(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 4, v_numThreads_2517_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 15, v_jsonOutput_2524_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 16, v_printStats_2526_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*13 + 17, v_run_2527_);
v___x_2535_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
lean_object* v___x_2536_; 
lean_ctor_set_uint8(v___x_2535_, sizeof(void*)*13 + 12, v___x_1783_);
lean_ctor_set_uint8(v___x_2535_, sizeof(void*)*13 + 14, v___x_1783_);
v___x_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
return v___x_2536_;
}
}
}
}
else
{
lean_object* v_leanOpts_2539_; lean_object* v_forwardedArgs_2540_; uint8_t v_component_2541_; uint8_t v_printPrefix_2542_; uint8_t v_printLibDir_2543_; uint8_t v_useStdin_2544_; uint8_t v_onlyDeps_2545_; uint8_t v_depsJson_2546_; lean_object* v_opts_2547_; uint32_t v_trustLevel_2548_; uint32_t v_numThreads_2549_; lean_object* v_rootDir_x3f_2550_; lean_object* v_setupFileName_x3f_2551_; lean_object* v_oleanFileName_x3f_2552_; lean_object* v_ileanFileName_x3f_2553_; lean_object* v_cFileName_x3f_2554_; lean_object* v_bcFileName_x3f_2555_; uint8_t v_jsonOutput_2556_; lean_object* v_errorOnKinds_2557_; uint8_t v_printStats_2558_; uint8_t v_run_2559_; lean_object* v_incrSaveFileName_x3f_2560_; lean_object* v_incrLoadFileName_x3f_2561_; lean_object* v_incrHeaderSaveFileName_x3f_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2570_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2539_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2540_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2541_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2542_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2543_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2544_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2545_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_depsJson_2546_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2547_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2548_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2549_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2550_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2551_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2552_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2553_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2554_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2555_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2556_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2557_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2558_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2559_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2560_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2561_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2562_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2570_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2564_ = v_opts_1518_;
v_isShared_2565_ = v_isSharedCheck_2570_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2562_);
lean_inc(v_incrLoadFileName_x3f_2561_);
lean_inc(v_incrSaveFileName_x3f_2560_);
lean_inc(v_errorOnKinds_2557_);
lean_inc(v_bcFileName_x3f_2555_);
lean_inc(v_cFileName_x3f_2554_);
lean_inc(v_ileanFileName_x3f_2553_);
lean_inc(v_oleanFileName_x3f_2552_);
lean_inc(v_setupFileName_x3f_2551_);
lean_inc(v_rootDir_x3f_2550_);
lean_inc(v_opts_2547_);
lean_inc(v_forwardedArgs_2540_);
lean_inc(v_leanOpts_2539_);
lean_dec(v_opts_1518_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2570_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_leanOpts_2539_);
lean_ctor_set(v_reuseFailAlloc_2569_, 1, v_forwardedArgs_2540_);
lean_ctor_set(v_reuseFailAlloc_2569_, 2, v_opts_2547_);
lean_ctor_set(v_reuseFailAlloc_2569_, 3, v_rootDir_x3f_2550_);
lean_ctor_set(v_reuseFailAlloc_2569_, 4, v_setupFileName_x3f_2551_);
lean_ctor_set(v_reuseFailAlloc_2569_, 5, v_oleanFileName_x3f_2552_);
lean_ctor_set(v_reuseFailAlloc_2569_, 6, v_ileanFileName_x3f_2553_);
lean_ctor_set(v_reuseFailAlloc_2569_, 7, v_cFileName_x3f_2554_);
lean_ctor_set(v_reuseFailAlloc_2569_, 8, v_bcFileName_x3f_2555_);
lean_ctor_set(v_reuseFailAlloc_2569_, 9, v_errorOnKinds_2557_);
lean_ctor_set(v_reuseFailAlloc_2569_, 10, v_incrSaveFileName_x3f_2560_);
lean_ctor_set(v_reuseFailAlloc_2569_, 11, v_incrLoadFileName_x3f_2561_);
lean_ctor_set(v_reuseFailAlloc_2569_, 12, v_incrHeaderSaveFileName_x3f_2562_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 8, v_component_2541_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 9, v_printPrefix_2542_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 10, v_printLibDir_2543_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 11, v_useStdin_2544_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 12, v_onlyDeps_2545_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 14, v_depsJson_2546_);
lean_ctor_set_uint32(v_reuseFailAlloc_2569_, sizeof(void*)*13, v_trustLevel_2548_);
lean_ctor_set_uint32(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 4, v_numThreads_2549_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 15, v_jsonOutput_2556_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 16, v_printStats_2558_);
lean_ctor_set_uint8(v_reuseFailAlloc_2569_, sizeof(void*)*13 + 17, v_run_2559_);
v___x_2567_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2568_; 
lean_ctor_set_uint8(v___x_2567_, sizeof(void*)*13 + 13, v___x_1781_);
v___x_2568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
return v___x_2568_;
}
}
}
}
else
{
lean_object* v_leanOpts_2571_; lean_object* v_forwardedArgs_2572_; uint8_t v_component_2573_; uint8_t v_printPrefix_2574_; uint8_t v_printLibDir_2575_; uint8_t v_useStdin_2576_; uint8_t v_onlySrcDeps_2577_; uint8_t v_depsJson_2578_; lean_object* v_opts_2579_; uint32_t v_trustLevel_2580_; uint32_t v_numThreads_2581_; lean_object* v_rootDir_x3f_2582_; lean_object* v_setupFileName_x3f_2583_; lean_object* v_oleanFileName_x3f_2584_; lean_object* v_ileanFileName_x3f_2585_; lean_object* v_cFileName_x3f_2586_; lean_object* v_bcFileName_x3f_2587_; uint8_t v_jsonOutput_2588_; lean_object* v_errorOnKinds_2589_; uint8_t v_printStats_2590_; uint8_t v_run_2591_; lean_object* v_incrSaveFileName_x3f_2592_; lean_object* v_incrLoadFileName_x3f_2593_; lean_object* v_incrHeaderSaveFileName_x3f_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2602_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2571_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2572_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2573_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2574_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2575_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2576_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlySrcDeps_2577_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2578_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2579_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2580_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2581_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2582_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2583_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2584_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2585_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2586_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2587_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2588_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2589_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2590_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2591_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2592_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2593_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2594_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2602_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2596_ = v_opts_1518_;
v_isShared_2597_ = v_isSharedCheck_2602_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2594_);
lean_inc(v_incrLoadFileName_x3f_2593_);
lean_inc(v_incrSaveFileName_x3f_2592_);
lean_inc(v_errorOnKinds_2589_);
lean_inc(v_bcFileName_x3f_2587_);
lean_inc(v_cFileName_x3f_2586_);
lean_inc(v_ileanFileName_x3f_2585_);
lean_inc(v_oleanFileName_x3f_2584_);
lean_inc(v_setupFileName_x3f_2583_);
lean_inc(v_rootDir_x3f_2582_);
lean_inc(v_opts_2579_);
lean_inc(v_forwardedArgs_2572_);
lean_inc(v_leanOpts_2571_);
lean_dec(v_opts_1518_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2602_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2599_; 
if (v_isShared_2597_ == 0)
{
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_leanOpts_2571_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v_forwardedArgs_2572_);
lean_ctor_set(v_reuseFailAlloc_2601_, 2, v_opts_2579_);
lean_ctor_set(v_reuseFailAlloc_2601_, 3, v_rootDir_x3f_2582_);
lean_ctor_set(v_reuseFailAlloc_2601_, 4, v_setupFileName_x3f_2583_);
lean_ctor_set(v_reuseFailAlloc_2601_, 5, v_oleanFileName_x3f_2584_);
lean_ctor_set(v_reuseFailAlloc_2601_, 6, v_ileanFileName_x3f_2585_);
lean_ctor_set(v_reuseFailAlloc_2601_, 7, v_cFileName_x3f_2586_);
lean_ctor_set(v_reuseFailAlloc_2601_, 8, v_bcFileName_x3f_2587_);
lean_ctor_set(v_reuseFailAlloc_2601_, 9, v_errorOnKinds_2589_);
lean_ctor_set(v_reuseFailAlloc_2601_, 10, v_incrSaveFileName_x3f_2592_);
lean_ctor_set(v_reuseFailAlloc_2601_, 11, v_incrLoadFileName_x3f_2593_);
lean_ctor_set(v_reuseFailAlloc_2601_, 12, v_incrHeaderSaveFileName_x3f_2594_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 8, v_component_2573_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 9, v_printPrefix_2574_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 10, v_printLibDir_2575_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 11, v_useStdin_2576_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 13, v_onlySrcDeps_2577_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 14, v_depsJson_2578_);
lean_ctor_set_uint32(v_reuseFailAlloc_2601_, sizeof(void*)*13, v_trustLevel_2580_);
lean_ctor_set_uint32(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 4, v_numThreads_2581_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 15, v_jsonOutput_2588_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 16, v_printStats_2590_);
lean_ctor_set_uint8(v_reuseFailAlloc_2601_, sizeof(void*)*13 + 17, v_run_2591_);
v___x_2599_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
lean_object* v___x_2600_; 
lean_ctor_set_uint8(v___x_2599_, sizeof(void*)*13 + 12, v___x_1779_);
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
return v___x_2600_;
}
}
}
}
else
{
lean_object* v_leanOpts_2603_; lean_object* v_forwardedArgs_2604_; uint8_t v_component_2605_; uint8_t v_printPrefix_2606_; uint8_t v_printLibDir_2607_; uint8_t v_useStdin_2608_; uint8_t v_onlyDeps_2609_; uint8_t v_onlySrcDeps_2610_; uint8_t v_depsJson_2611_; lean_object* v_opts_2612_; uint32_t v_trustLevel_2613_; uint32_t v_numThreads_2614_; lean_object* v_rootDir_x3f_2615_; lean_object* v_setupFileName_x3f_2616_; lean_object* v_oleanFileName_x3f_2617_; lean_object* v_ileanFileName_x3f_2618_; lean_object* v_cFileName_x3f_2619_; lean_object* v_bcFileName_x3f_2620_; uint8_t v_jsonOutput_2621_; lean_object* v_errorOnKinds_2622_; uint8_t v_printStats_2623_; uint8_t v_run_2624_; lean_object* v_incrSaveFileName_x3f_2625_; lean_object* v_incrLoadFileName_x3f_2626_; lean_object* v_incrHeaderSaveFileName_x3f_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2637_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2603_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2604_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2605_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2606_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2607_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2608_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2609_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2610_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2611_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2612_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2613_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2614_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2615_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2616_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2617_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2618_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2619_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2620_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2621_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2622_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2623_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2624_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2625_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2626_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2627_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2629_ = v_opts_1518_;
v_isShared_2630_ = v_isSharedCheck_2637_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2627_);
lean_inc(v_incrLoadFileName_x3f_2626_);
lean_inc(v_incrSaveFileName_x3f_2625_);
lean_inc(v_errorOnKinds_2622_);
lean_inc(v_bcFileName_x3f_2620_);
lean_inc(v_cFileName_x3f_2619_);
lean_inc(v_ileanFileName_x3f_2618_);
lean_inc(v_oleanFileName_x3f_2617_);
lean_inc(v_setupFileName_x3f_2616_);
lean_inc(v_rootDir_x3f_2615_);
lean_inc(v_opts_2612_);
lean_inc(v_forwardedArgs_2604_);
lean_inc(v_leanOpts_2603_);
lean_dec(v_opts_1518_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2637_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2634_; 
v___x_2631_ = l___private_Lean_Shell_0__Lean_verbose;
v___x_2632_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_leanOpts_2603_, v___x_2631_, v___x_1775_);
if (v_isShared_2630_ == 0)
{
lean_ctor_set(v___x_2629_, 0, v___x_2632_);
v___x_2634_ = v___x_2629_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2632_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v_forwardedArgs_2604_);
lean_ctor_set(v_reuseFailAlloc_2636_, 2, v_opts_2612_);
lean_ctor_set(v_reuseFailAlloc_2636_, 3, v_rootDir_x3f_2615_);
lean_ctor_set(v_reuseFailAlloc_2636_, 4, v_setupFileName_x3f_2616_);
lean_ctor_set(v_reuseFailAlloc_2636_, 5, v_oleanFileName_x3f_2617_);
lean_ctor_set(v_reuseFailAlloc_2636_, 6, v_ileanFileName_x3f_2618_);
lean_ctor_set(v_reuseFailAlloc_2636_, 7, v_cFileName_x3f_2619_);
lean_ctor_set(v_reuseFailAlloc_2636_, 8, v_bcFileName_x3f_2620_);
lean_ctor_set(v_reuseFailAlloc_2636_, 9, v_errorOnKinds_2622_);
lean_ctor_set(v_reuseFailAlloc_2636_, 10, v_incrSaveFileName_x3f_2625_);
lean_ctor_set(v_reuseFailAlloc_2636_, 11, v_incrLoadFileName_x3f_2626_);
lean_ctor_set(v_reuseFailAlloc_2636_, 12, v_incrHeaderSaveFileName_x3f_2627_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 8, v_component_2605_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 9, v_printPrefix_2606_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 10, v_printLibDir_2607_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 11, v_useStdin_2608_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 12, v_onlyDeps_2609_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 13, v_onlySrcDeps_2610_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 14, v_depsJson_2611_);
lean_ctor_set_uint32(v_reuseFailAlloc_2636_, sizeof(void*)*13, v_trustLevel_2613_);
lean_ctor_set_uint32(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 4, v_numThreads_2614_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 15, v_jsonOutput_2621_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 16, v_printStats_2623_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*13 + 17, v_run_2624_);
v___x_2634_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2634_);
return v___x_2635_;
}
}
}
}
else
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2638_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13));
v___x_2639_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2638_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2693_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2642_ = v___x_2639_;
v_isShared_2643_ = v_isSharedCheck_2693_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2639_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2693_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2644_ = lean_unsigned_to_nat(0u);
v___x_2645_ = lean_string_utf8_byte_size(v_a_2640_);
lean_inc(v_a_2640_);
v___x_2646_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2646_, 0, v_a_2640_);
lean_ctor_set(v___x_2646_, 1, v___x_2644_);
lean_ctor_set(v___x_2646_, 2, v___x_2645_);
v___x_2647_ = l_String_Slice_toNat_x3f(v___x_2646_);
lean_dec_ref_known(v___x_2646_, 3);
if (lean_obj_tag(v___x_2647_) == 1)
{
lean_object* v_val_2648_; lean_object* v___x_2649_; uint8_t v___x_2650_; 
v_val_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_val_2648_);
lean_dec_ref_known(v___x_2647_, 1);
v___x_2649_ = lean_cstr_to_nat("4294967296");
v___x_2650_ = lean_nat_dec_lt(v_val_2648_, v___x_2649_);
if (v___x_2650_ == 0)
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
lean_dec(v_val_2648_);
lean_del_object(v___x_2642_);
lean_dec(v_a_2640_);
lean_dec_ref(v_opts_1518_);
v___x_2651_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14));
v___x_2652_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2651_);
lean_dec_ref(v___x_2652_);
goto v___jp_1588_;
}
else
{
lean_object* v_leanOpts_2653_; lean_object* v_forwardedArgs_2654_; uint8_t v_component_2655_; uint8_t v_printPrefix_2656_; uint8_t v_printLibDir_2657_; uint8_t v_useStdin_2658_; uint8_t v_onlyDeps_2659_; uint8_t v_onlySrcDeps_2660_; uint8_t v_depsJson_2661_; lean_object* v_opts_2662_; uint32_t v_numThreads_2663_; lean_object* v_rootDir_x3f_2664_; lean_object* v_setupFileName_x3f_2665_; lean_object* v_oleanFileName_x3f_2666_; lean_object* v_ileanFileName_x3f_2667_; lean_object* v_cFileName_x3f_2668_; lean_object* v_bcFileName_x3f_2669_; uint8_t v_jsonOutput_2670_; lean_object* v_errorOnKinds_2671_; uint8_t v_printStats_2672_; uint8_t v_run_2673_; lean_object* v_incrSaveFileName_x3f_2674_; lean_object* v_incrLoadFileName_x3f_2675_; lean_object* v_incrHeaderSaveFileName_x3f_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2690_; 
v_leanOpts_2653_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2654_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2655_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2656_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2657_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2658_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2659_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2660_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2661_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2662_ = lean_ctor_get(v_opts_1518_, 2);
v_numThreads_2663_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2664_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2665_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2666_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2667_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2668_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2669_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2670_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2671_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2672_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2673_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2674_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2675_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2676_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2690_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2678_ = v_opts_1518_;
v_isShared_2679_ = v_isSharedCheck_2690_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2676_);
lean_inc(v_incrLoadFileName_x3f_2675_);
lean_inc(v_incrSaveFileName_x3f_2674_);
lean_inc(v_errorOnKinds_2671_);
lean_inc(v_bcFileName_x3f_2669_);
lean_inc(v_cFileName_x3f_2668_);
lean_inc(v_ileanFileName_x3f_2667_);
lean_inc(v_oleanFileName_x3f_2666_);
lean_inc(v_setupFileName_x3f_2665_);
lean_inc(v_rootDir_x3f_2664_);
lean_inc(v_opts_2662_);
lean_inc(v_forwardedArgs_2654_);
lean_inc(v_leanOpts_2653_);
lean_dec(v_opts_1518_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2690_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
uint32_t v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
v___x_2680_ = lean_uint32_of_nat(v_val_2648_);
lean_dec(v_val_2648_);
v___x_2681_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15));
v___x_2682_ = lean_string_append(v___x_2681_, v_a_2640_);
lean_dec(v_a_2640_);
v___x_2683_ = lean_array_push(v_forwardedArgs_2654_, v___x_2682_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 1, v___x_2683_);
v___x_2685_ = v___x_2678_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_leanOpts_2653_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2689_, 2, v_opts_2662_);
lean_ctor_set(v_reuseFailAlloc_2689_, 3, v_rootDir_x3f_2664_);
lean_ctor_set(v_reuseFailAlloc_2689_, 4, v_setupFileName_x3f_2665_);
lean_ctor_set(v_reuseFailAlloc_2689_, 5, v_oleanFileName_x3f_2666_);
lean_ctor_set(v_reuseFailAlloc_2689_, 6, v_ileanFileName_x3f_2667_);
lean_ctor_set(v_reuseFailAlloc_2689_, 7, v_cFileName_x3f_2668_);
lean_ctor_set(v_reuseFailAlloc_2689_, 8, v_bcFileName_x3f_2669_);
lean_ctor_set(v_reuseFailAlloc_2689_, 9, v_errorOnKinds_2671_);
lean_ctor_set(v_reuseFailAlloc_2689_, 10, v_incrSaveFileName_x3f_2674_);
lean_ctor_set(v_reuseFailAlloc_2689_, 11, v_incrLoadFileName_x3f_2675_);
lean_ctor_set(v_reuseFailAlloc_2689_, 12, v_incrHeaderSaveFileName_x3f_2676_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 8, v_component_2655_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 9, v_printPrefix_2656_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 10, v_printLibDir_2657_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 11, v_useStdin_2658_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 12, v_onlyDeps_2659_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 13, v_onlySrcDeps_2660_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 14, v_depsJson_2661_);
lean_ctor_set_uint32(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 4, v_numThreads_2663_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 15, v_jsonOutput_2670_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 16, v_printStats_2672_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*13 + 17, v_run_2673_);
v___x_2685_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2687_; 
lean_ctor_set_uint32(v___x_2685_, sizeof(void*)*13, v___x_2680_);
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 0, v___x_2685_);
v___x_2687_ = v___x_2642_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
}
else
{
lean_object* v___x_2691_; lean_object* v___x_2692_; 
lean_dec(v___x_2647_);
lean_del_object(v___x_2642_);
lean_dec(v_a_2640_);
lean_dec_ref(v_opts_1518_);
v___x_2691_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16));
v___x_2692_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2691_);
lean_dec_ref(v___x_2692_);
goto v___jp_1585_;
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_dec_ref(v_opts_1518_);
v_a_2694_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2694_);
lean_dec_ref_known(v___x_2639_, 1);
v___x_2698_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2699_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2698_);
lean_dec_ref(v___x_2699_);
goto v___jp_2695_;
v___jp_2695_:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2696_ = lean_io_error_to_string(v_a_2694_);
v___x_2697_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2696_);
lean_dec_ref(v___x_2697_);
goto v___jp_1582_;
}
}
}
}
else
{
lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2700_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17));
v___x_2701_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2700_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2753_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2704_ = v___x_2701_;
v_isShared_2705_ = v_isSharedCheck_2753_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2701_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2753_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2706_ = lean_unsigned_to_nat(0u);
v___x_2707_ = lean_string_utf8_byte_size(v_a_2702_);
lean_inc(v_a_2702_);
v___x_2708_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2708_, 0, v_a_2702_);
lean_ctor_set(v___x_2708_, 1, v___x_2706_);
lean_ctor_set(v___x_2708_, 2, v___x_2707_);
v___x_2709_ = l_String_Slice_toNat_x3f(v___x_2708_);
lean_dec_ref_known(v___x_2708_, 3);
if (lean_obj_tag(v___x_2709_) == 1)
{
lean_object* v_val_2710_; lean_object* v_leanOpts_2711_; lean_object* v_forwardedArgs_2712_; uint8_t v_component_2713_; uint8_t v_printPrefix_2714_; uint8_t v_printLibDir_2715_; uint8_t v_useStdin_2716_; uint8_t v_onlyDeps_2717_; uint8_t v_onlySrcDeps_2718_; uint8_t v_depsJson_2719_; lean_object* v_opts_2720_; uint32_t v_trustLevel_2721_; uint32_t v_numThreads_2722_; lean_object* v_rootDir_x3f_2723_; lean_object* v_setupFileName_x3f_2724_; lean_object* v_oleanFileName_x3f_2725_; lean_object* v_ileanFileName_x3f_2726_; lean_object* v_cFileName_x3f_2727_; lean_object* v_bcFileName_x3f_2728_; uint8_t v_jsonOutput_2729_; lean_object* v_errorOnKinds_2730_; uint8_t v_printStats_2731_; uint8_t v_run_2732_; lean_object* v_incrSaveFileName_x3f_2733_; lean_object* v_incrLoadFileName_x3f_2734_; lean_object* v_incrHeaderSaveFileName_x3f_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2750_; 
v_val_2710_ = lean_ctor_get(v___x_2709_, 0);
lean_inc(v_val_2710_);
lean_dec_ref_known(v___x_2709_, 1);
v_leanOpts_2711_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2712_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2713_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2714_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2715_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2716_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2717_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2718_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2719_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2720_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2721_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2722_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2723_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2724_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2725_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2726_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2727_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2728_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2729_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2730_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2731_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2732_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2733_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2734_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2735_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2750_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2737_ = v_opts_1518_;
v_isShared_2738_ = v_isSharedCheck_2750_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2735_);
lean_inc(v_incrLoadFileName_x3f_2734_);
lean_inc(v_incrSaveFileName_x3f_2733_);
lean_inc(v_errorOnKinds_2730_);
lean_inc(v_bcFileName_x3f_2728_);
lean_inc(v_cFileName_x3f_2727_);
lean_inc(v_ileanFileName_x3f_2726_);
lean_inc(v_oleanFileName_x3f_2725_);
lean_inc(v_setupFileName_x3f_2724_);
lean_inc(v_rootDir_x3f_2723_);
lean_inc(v_opts_2720_);
lean_inc(v_forwardedArgs_2712_);
lean_inc(v_leanOpts_2711_);
lean_dec(v_opts_1518_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2750_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2745_; 
v___x_2739_ = l___private_Lean_Shell_0__Lean_timeout;
v___x_2740_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2711_, v___x_2739_, v_val_2710_);
v___x_2741_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18));
v___x_2742_ = lean_string_append(v___x_2741_, v_a_2702_);
lean_dec(v_a_2702_);
v___x_2743_ = lean_array_push(v_forwardedArgs_2712_, v___x_2742_);
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 1, v___x_2743_);
lean_ctor_set(v___x_2737_, 0, v___x_2740_);
v___x_2745_ = v___x_2737_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v___x_2740_);
lean_ctor_set(v_reuseFailAlloc_2749_, 1, v___x_2743_);
lean_ctor_set(v_reuseFailAlloc_2749_, 2, v_opts_2720_);
lean_ctor_set(v_reuseFailAlloc_2749_, 3, v_rootDir_x3f_2723_);
lean_ctor_set(v_reuseFailAlloc_2749_, 4, v_setupFileName_x3f_2724_);
lean_ctor_set(v_reuseFailAlloc_2749_, 5, v_oleanFileName_x3f_2725_);
lean_ctor_set(v_reuseFailAlloc_2749_, 6, v_ileanFileName_x3f_2726_);
lean_ctor_set(v_reuseFailAlloc_2749_, 7, v_cFileName_x3f_2727_);
lean_ctor_set(v_reuseFailAlloc_2749_, 8, v_bcFileName_x3f_2728_);
lean_ctor_set(v_reuseFailAlloc_2749_, 9, v_errorOnKinds_2730_);
lean_ctor_set(v_reuseFailAlloc_2749_, 10, v_incrSaveFileName_x3f_2733_);
lean_ctor_set(v_reuseFailAlloc_2749_, 11, v_incrLoadFileName_x3f_2734_);
lean_ctor_set(v_reuseFailAlloc_2749_, 12, v_incrHeaderSaveFileName_x3f_2735_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 8, v_component_2713_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 9, v_printPrefix_2714_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 10, v_printLibDir_2715_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 11, v_useStdin_2716_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 12, v_onlyDeps_2717_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 13, v_onlySrcDeps_2718_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 14, v_depsJson_2719_);
lean_ctor_set_uint32(v_reuseFailAlloc_2749_, sizeof(void*)*13, v_trustLevel_2721_);
lean_ctor_set_uint32(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 4, v_numThreads_2722_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 15, v_jsonOutput_2729_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 16, v_printStats_2731_);
lean_ctor_set_uint8(v_reuseFailAlloc_2749_, sizeof(void*)*13 + 17, v_run_2732_);
v___x_2745_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
lean_object* v___x_2747_; 
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 0, v___x_2745_);
v___x_2747_ = v___x_2704_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v___x_2745_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
else
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
lean_dec(v___x_2709_);
lean_del_object(v___x_2704_);
lean_dec(v_a_2702_);
lean_dec_ref(v_opts_1518_);
v___x_2751_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19));
v___x_2752_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2751_);
lean_dec_ref(v___x_2752_);
goto v___jp_1695_;
}
}
}
else
{
lean_object* v_a_2754_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
lean_dec_ref(v_opts_1518_);
v_a_2754_ = lean_ctor_get(v___x_2701_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2701_, 1);
v___x_2758_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2759_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2758_);
lean_dec_ref(v___x_2759_);
goto v___jp_2755_;
v___jp_2755_:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2756_ = lean_io_error_to_string(v_a_2754_);
v___x_2757_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2756_);
lean_dec_ref(v___x_2757_);
goto v___jp_1701_;
}
}
}
}
else
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20));
v___x_2761_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2760_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2813_; 
v_a_2762_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2764_ = v___x_2761_;
v_isShared_2765_ = v_isSharedCheck_2813_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2761_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2813_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2766_ = lean_unsigned_to_nat(0u);
v___x_2767_ = lean_string_utf8_byte_size(v_a_2762_);
lean_inc(v_a_2762_);
v___x_2768_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2768_, 0, v_a_2762_);
lean_ctor_set(v___x_2768_, 1, v___x_2766_);
lean_ctor_set(v___x_2768_, 2, v___x_2767_);
v___x_2769_ = l_String_Slice_toNat_x3f(v___x_2768_);
lean_dec_ref_known(v___x_2768_, 3);
if (lean_obj_tag(v___x_2769_) == 1)
{
lean_object* v_val_2770_; lean_object* v_leanOpts_2771_; lean_object* v_forwardedArgs_2772_; uint8_t v_component_2773_; uint8_t v_printPrefix_2774_; uint8_t v_printLibDir_2775_; uint8_t v_useStdin_2776_; uint8_t v_onlyDeps_2777_; uint8_t v_onlySrcDeps_2778_; uint8_t v_depsJson_2779_; lean_object* v_opts_2780_; uint32_t v_trustLevel_2781_; uint32_t v_numThreads_2782_; lean_object* v_rootDir_x3f_2783_; lean_object* v_setupFileName_x3f_2784_; lean_object* v_oleanFileName_x3f_2785_; lean_object* v_ileanFileName_x3f_2786_; lean_object* v_cFileName_x3f_2787_; lean_object* v_bcFileName_x3f_2788_; uint8_t v_jsonOutput_2789_; lean_object* v_errorOnKinds_2790_; uint8_t v_printStats_2791_; uint8_t v_run_2792_; lean_object* v_incrSaveFileName_x3f_2793_; lean_object* v_incrLoadFileName_x3f_2794_; lean_object* v_incrHeaderSaveFileName_x3f_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2810_; 
v_val_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_val_2770_);
lean_dec_ref_known(v___x_2769_, 1);
v_leanOpts_2771_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2772_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2773_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2774_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2775_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2776_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2777_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2778_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2779_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2780_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2781_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2782_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2783_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2784_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2785_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2786_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2787_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2788_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2789_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2790_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2791_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2792_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2793_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2794_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2795_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2810_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2797_ = v_opts_1518_;
v_isShared_2798_ = v_isSharedCheck_2810_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2795_);
lean_inc(v_incrLoadFileName_x3f_2794_);
lean_inc(v_incrSaveFileName_x3f_2793_);
lean_inc(v_errorOnKinds_2790_);
lean_inc(v_bcFileName_x3f_2788_);
lean_inc(v_cFileName_x3f_2787_);
lean_inc(v_ileanFileName_x3f_2786_);
lean_inc(v_oleanFileName_x3f_2785_);
lean_inc(v_setupFileName_x3f_2784_);
lean_inc(v_rootDir_x3f_2783_);
lean_inc(v_opts_2780_);
lean_inc(v_forwardedArgs_2772_);
lean_inc(v_leanOpts_2771_);
lean_dec(v_opts_1518_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2810_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2805_; 
v___x_2799_ = l___private_Lean_Shell_0__Lean_maxMemory;
v___x_2800_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2771_, v___x_2799_, v_val_2770_);
v___x_2801_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21));
v___x_2802_ = lean_string_append(v___x_2801_, v_a_2762_);
lean_dec(v_a_2762_);
v___x_2803_ = lean_array_push(v_forwardedArgs_2772_, v___x_2802_);
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 1, v___x_2803_);
lean_ctor_set(v___x_2797_, 0, v___x_2800_);
v___x_2805_ = v___x_2797_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2800_);
lean_ctor_set(v_reuseFailAlloc_2809_, 1, v___x_2803_);
lean_ctor_set(v_reuseFailAlloc_2809_, 2, v_opts_2780_);
lean_ctor_set(v_reuseFailAlloc_2809_, 3, v_rootDir_x3f_2783_);
lean_ctor_set(v_reuseFailAlloc_2809_, 4, v_setupFileName_x3f_2784_);
lean_ctor_set(v_reuseFailAlloc_2809_, 5, v_oleanFileName_x3f_2785_);
lean_ctor_set(v_reuseFailAlloc_2809_, 6, v_ileanFileName_x3f_2786_);
lean_ctor_set(v_reuseFailAlloc_2809_, 7, v_cFileName_x3f_2787_);
lean_ctor_set(v_reuseFailAlloc_2809_, 8, v_bcFileName_x3f_2788_);
lean_ctor_set(v_reuseFailAlloc_2809_, 9, v_errorOnKinds_2790_);
lean_ctor_set(v_reuseFailAlloc_2809_, 10, v_incrSaveFileName_x3f_2793_);
lean_ctor_set(v_reuseFailAlloc_2809_, 11, v_incrLoadFileName_x3f_2794_);
lean_ctor_set(v_reuseFailAlloc_2809_, 12, v_incrHeaderSaveFileName_x3f_2795_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 8, v_component_2773_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 9, v_printPrefix_2774_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 10, v_printLibDir_2775_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 11, v_useStdin_2776_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 12, v_onlyDeps_2777_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 13, v_onlySrcDeps_2778_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 14, v_depsJson_2779_);
lean_ctor_set_uint32(v_reuseFailAlloc_2809_, sizeof(void*)*13, v_trustLevel_2781_);
lean_ctor_set_uint32(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 4, v_numThreads_2782_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 15, v_jsonOutput_2789_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 16, v_printStats_2791_);
lean_ctor_set_uint8(v_reuseFailAlloc_2809_, sizeof(void*)*13 + 17, v_run_2792_);
v___x_2805_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
lean_object* v___x_2807_; 
if (v_isShared_2765_ == 0)
{
lean_ctor_set(v___x_2764_, 0, v___x_2805_);
v___x_2807_ = v___x_2764_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v___x_2805_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
else
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
lean_dec(v___x_2769_);
lean_del_object(v___x_2764_);
lean_dec(v_a_2762_);
lean_dec_ref(v_opts_1518_);
v___x_2811_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22));
v___x_2812_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2811_);
lean_dec_ref(v___x_2812_);
goto v___jp_1576_;
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
lean_dec_ref(v_opts_1518_);
v_a_2814_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2761_, 1);
v___x_2818_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2819_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2818_);
lean_dec_ref(v___x_2819_);
goto v___jp_2815_;
v___jp_2815_:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2816_ = lean_io_error_to_string(v_a_2814_);
v___x_2817_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2816_);
lean_dec_ref(v___x_2817_);
goto v___jp_1573_;
}
}
}
}
else
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2820_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23));
v___x_2821_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2820_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2865_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2824_ = v___x_2821_;
v_isShared_2825_ = v_isSharedCheck_2865_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2821_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2865_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v_leanOpts_2826_; lean_object* v_forwardedArgs_2827_; uint8_t v_component_2828_; uint8_t v_printPrefix_2829_; uint8_t v_printLibDir_2830_; uint8_t v_useStdin_2831_; uint8_t v_onlyDeps_2832_; uint8_t v_onlySrcDeps_2833_; uint8_t v_depsJson_2834_; lean_object* v_opts_2835_; uint32_t v_trustLevel_2836_; uint32_t v_numThreads_2837_; lean_object* v_setupFileName_x3f_2838_; lean_object* v_oleanFileName_x3f_2839_; lean_object* v_ileanFileName_x3f_2840_; lean_object* v_cFileName_x3f_2841_; lean_object* v_bcFileName_x3f_2842_; uint8_t v_jsonOutput_2843_; lean_object* v_errorOnKinds_2844_; uint8_t v_printStats_2845_; uint8_t v_run_2846_; lean_object* v_incrSaveFileName_x3f_2847_; lean_object* v_incrLoadFileName_x3f_2848_; lean_object* v_incrHeaderSaveFileName_x3f_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2863_; 
v_leanOpts_2826_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2827_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2828_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2829_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2830_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2831_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2832_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2833_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2834_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2835_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2836_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2837_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_setupFileName_x3f_2838_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2839_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2840_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2841_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2842_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2843_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2844_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2845_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2846_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2847_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2848_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2849_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2863_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2863_ == 0)
{
lean_object* v_unused_2864_; 
v_unused_2864_ = lean_ctor_get(v_opts_1518_, 3);
lean_dec(v_unused_2864_);
v___x_2851_ = v_opts_1518_;
v_isShared_2852_ = v_isSharedCheck_2863_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2849_);
lean_inc(v_incrLoadFileName_x3f_2848_);
lean_inc(v_incrSaveFileName_x3f_2847_);
lean_inc(v_errorOnKinds_2844_);
lean_inc(v_bcFileName_x3f_2842_);
lean_inc(v_cFileName_x3f_2841_);
lean_inc(v_ileanFileName_x3f_2840_);
lean_inc(v_oleanFileName_x3f_2839_);
lean_inc(v_setupFileName_x3f_2838_);
lean_inc(v_opts_2835_);
lean_inc(v_forwardedArgs_2827_);
lean_inc(v_leanOpts_2826_);
lean_dec(v_opts_1518_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2863_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2858_; 
v___x_2853_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24));
v___x_2854_ = lean_string_append(v___x_2853_, v_a_2822_);
v___x_2855_ = lean_array_push(v_forwardedArgs_2827_, v___x_2854_);
v___x_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2856_, 0, v_a_2822_);
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 3, v___x_2856_);
lean_ctor_set(v___x_2851_, 1, v___x_2855_);
v___x_2858_ = v___x_2851_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_leanOpts_2826_);
lean_ctor_set(v_reuseFailAlloc_2862_, 1, v___x_2855_);
lean_ctor_set(v_reuseFailAlloc_2862_, 2, v_opts_2835_);
lean_ctor_set(v_reuseFailAlloc_2862_, 3, v___x_2856_);
lean_ctor_set(v_reuseFailAlloc_2862_, 4, v_setupFileName_x3f_2838_);
lean_ctor_set(v_reuseFailAlloc_2862_, 5, v_oleanFileName_x3f_2839_);
lean_ctor_set(v_reuseFailAlloc_2862_, 6, v_ileanFileName_x3f_2840_);
lean_ctor_set(v_reuseFailAlloc_2862_, 7, v_cFileName_x3f_2841_);
lean_ctor_set(v_reuseFailAlloc_2862_, 8, v_bcFileName_x3f_2842_);
lean_ctor_set(v_reuseFailAlloc_2862_, 9, v_errorOnKinds_2844_);
lean_ctor_set(v_reuseFailAlloc_2862_, 10, v_incrSaveFileName_x3f_2847_);
lean_ctor_set(v_reuseFailAlloc_2862_, 11, v_incrLoadFileName_x3f_2848_);
lean_ctor_set(v_reuseFailAlloc_2862_, 12, v_incrHeaderSaveFileName_x3f_2849_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 8, v_component_2828_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 9, v_printPrefix_2829_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 10, v_printLibDir_2830_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 11, v_useStdin_2831_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 12, v_onlyDeps_2832_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 13, v_onlySrcDeps_2833_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 14, v_depsJson_2834_);
lean_ctor_set_uint32(v_reuseFailAlloc_2862_, sizeof(void*)*13, v_trustLevel_2836_);
lean_ctor_set_uint32(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 4, v_numThreads_2837_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 15, v_jsonOutput_2843_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 16, v_printStats_2845_);
lean_ctor_set_uint8(v_reuseFailAlloc_2862_, sizeof(void*)*13 + 17, v_run_2846_);
v___x_2858_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
lean_object* v___x_2860_; 
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_2858_);
v___x_2860_ = v___x_2824_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v___x_2858_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
lean_dec_ref(v_opts_1518_);
v_a_2866_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2866_);
lean_dec_ref_known(v___x_2821_, 1);
v___x_2870_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2871_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2870_);
lean_dec_ref(v___x_2871_);
goto v___jp_2867_;
v___jp_2867_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2868_ = lean_io_error_to_string(v_a_2866_);
v___x_2869_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2868_);
lean_dec_ref(v___x_2869_);
goto v___jp_1707_;
}
}
}
}
else
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2872_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25));
v___x_2873_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2872_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2914_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2876_ = v___x_2873_;
v_isShared_2877_ = v_isSharedCheck_2914_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2873_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2914_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v_leanOpts_2878_; lean_object* v_forwardedArgs_2879_; uint8_t v_component_2880_; uint8_t v_printPrefix_2881_; uint8_t v_printLibDir_2882_; uint8_t v_useStdin_2883_; uint8_t v_onlyDeps_2884_; uint8_t v_onlySrcDeps_2885_; uint8_t v_depsJson_2886_; lean_object* v_opts_2887_; uint32_t v_trustLevel_2888_; uint32_t v_numThreads_2889_; lean_object* v_rootDir_x3f_2890_; lean_object* v_setupFileName_x3f_2891_; lean_object* v_oleanFileName_x3f_2892_; lean_object* v_cFileName_x3f_2893_; lean_object* v_bcFileName_x3f_2894_; uint8_t v_jsonOutput_2895_; lean_object* v_errorOnKinds_2896_; uint8_t v_printStats_2897_; uint8_t v_run_2898_; lean_object* v_incrSaveFileName_x3f_2899_; lean_object* v_incrLoadFileName_x3f_2900_; lean_object* v_incrHeaderSaveFileName_x3f_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2912_; 
v_leanOpts_2878_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2879_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2880_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2881_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2882_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2883_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2884_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2885_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2886_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2887_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2888_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2889_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2890_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2891_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2892_ = lean_ctor_get(v_opts_1518_, 5);
v_cFileName_x3f_2893_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2894_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2895_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2896_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2897_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2898_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2899_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2900_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2901_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2912_ == 0)
{
lean_object* v_unused_2913_; 
v_unused_2913_ = lean_ctor_get(v_opts_1518_, 6);
lean_dec(v_unused_2913_);
v___x_2903_ = v_opts_1518_;
v_isShared_2904_ = v_isSharedCheck_2912_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2901_);
lean_inc(v_incrLoadFileName_x3f_2900_);
lean_inc(v_incrSaveFileName_x3f_2899_);
lean_inc(v_errorOnKinds_2896_);
lean_inc(v_bcFileName_x3f_2894_);
lean_inc(v_cFileName_x3f_2893_);
lean_inc(v_oleanFileName_x3f_2892_);
lean_inc(v_setupFileName_x3f_2891_);
lean_inc(v_rootDir_x3f_2890_);
lean_inc(v_opts_2887_);
lean_inc(v_forwardedArgs_2879_);
lean_inc(v_leanOpts_2878_);
lean_dec(v_opts_1518_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2912_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2905_; lean_object* v___x_2907_; 
v___x_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2905_, 0, v_a_2874_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 6, v___x_2905_);
v___x_2907_ = v___x_2903_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_leanOpts_2878_);
lean_ctor_set(v_reuseFailAlloc_2911_, 1, v_forwardedArgs_2879_);
lean_ctor_set(v_reuseFailAlloc_2911_, 2, v_opts_2887_);
lean_ctor_set(v_reuseFailAlloc_2911_, 3, v_rootDir_x3f_2890_);
lean_ctor_set(v_reuseFailAlloc_2911_, 4, v_setupFileName_x3f_2891_);
lean_ctor_set(v_reuseFailAlloc_2911_, 5, v_oleanFileName_x3f_2892_);
lean_ctor_set(v_reuseFailAlloc_2911_, 6, v___x_2905_);
lean_ctor_set(v_reuseFailAlloc_2911_, 7, v_cFileName_x3f_2893_);
lean_ctor_set(v_reuseFailAlloc_2911_, 8, v_bcFileName_x3f_2894_);
lean_ctor_set(v_reuseFailAlloc_2911_, 9, v_errorOnKinds_2896_);
lean_ctor_set(v_reuseFailAlloc_2911_, 10, v_incrSaveFileName_x3f_2899_);
lean_ctor_set(v_reuseFailAlloc_2911_, 11, v_incrLoadFileName_x3f_2900_);
lean_ctor_set(v_reuseFailAlloc_2911_, 12, v_incrHeaderSaveFileName_x3f_2901_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 8, v_component_2880_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 9, v_printPrefix_2881_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 10, v_printLibDir_2882_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 11, v_useStdin_2883_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 12, v_onlyDeps_2884_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 13, v_onlySrcDeps_2885_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 14, v_depsJson_2886_);
lean_ctor_set_uint32(v_reuseFailAlloc_2911_, sizeof(void*)*13, v_trustLevel_2888_);
lean_ctor_set_uint32(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 4, v_numThreads_2889_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 15, v_jsonOutput_2895_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 16, v_printStats_2897_);
lean_ctor_set_uint8(v_reuseFailAlloc_2911_, sizeof(void*)*13 + 17, v_run_2898_);
v___x_2907_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
lean_object* v___x_2909_; 
if (v_isShared_2877_ == 0)
{
lean_ctor_set(v___x_2876_, 0, v___x_2907_);
v___x_2909_ = v___x_2876_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v___x_2907_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
}
else
{
lean_object* v_a_2915_; lean_object* v___x_2919_; lean_object* v___x_2920_; 
lean_dec_ref(v_opts_1518_);
v_a_2915_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2915_);
lean_dec_ref_known(v___x_2873_, 1);
v___x_2919_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2920_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2919_);
lean_dec_ref(v___x_2920_);
goto v___jp_2916_;
v___jp_2916_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = lean_io_error_to_string(v_a_2915_);
v___x_2918_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2917_);
lean_dec_ref(v___x_2918_);
goto v___jp_1567_;
}
}
}
}
else
{
lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2921_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26));
v___x_2922_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2921_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2963_; 
v_a_2923_ = lean_ctor_get(v___x_2922_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2922_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2925_ = v___x_2922_;
v_isShared_2926_ = v_isSharedCheck_2963_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_dec(v___x_2922_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2963_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v_leanOpts_2927_; lean_object* v_forwardedArgs_2928_; uint8_t v_component_2929_; uint8_t v_printPrefix_2930_; uint8_t v_printLibDir_2931_; uint8_t v_useStdin_2932_; uint8_t v_onlyDeps_2933_; uint8_t v_onlySrcDeps_2934_; uint8_t v_depsJson_2935_; lean_object* v_opts_2936_; uint32_t v_trustLevel_2937_; uint32_t v_numThreads_2938_; lean_object* v_rootDir_x3f_2939_; lean_object* v_setupFileName_x3f_2940_; lean_object* v_ileanFileName_x3f_2941_; lean_object* v_cFileName_x3f_2942_; lean_object* v_bcFileName_x3f_2943_; uint8_t v_jsonOutput_2944_; lean_object* v_errorOnKinds_2945_; uint8_t v_printStats_2946_; uint8_t v_run_2947_; lean_object* v_incrSaveFileName_x3f_2948_; lean_object* v_incrLoadFileName_x3f_2949_; lean_object* v_incrHeaderSaveFileName_x3f_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2961_; 
v_leanOpts_2927_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2928_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2929_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2930_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2931_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2932_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2933_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2934_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2935_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2936_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2937_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2938_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2939_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2940_ = lean_ctor_get(v_opts_1518_, 4);
v_ileanFileName_x3f_2941_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2942_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2943_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2944_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2945_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2946_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_2947_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_2948_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2949_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2950_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_2961_ == 0)
{
lean_object* v_unused_2962_; 
v_unused_2962_ = lean_ctor_get(v_opts_1518_, 5);
lean_dec(v_unused_2962_);
v___x_2952_ = v_opts_1518_;
v_isShared_2953_ = v_isSharedCheck_2961_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2950_);
lean_inc(v_incrLoadFileName_x3f_2949_);
lean_inc(v_incrSaveFileName_x3f_2948_);
lean_inc(v_errorOnKinds_2945_);
lean_inc(v_bcFileName_x3f_2943_);
lean_inc(v_cFileName_x3f_2942_);
lean_inc(v_ileanFileName_x3f_2941_);
lean_inc(v_setupFileName_x3f_2940_);
lean_inc(v_rootDir_x3f_2939_);
lean_inc(v_opts_2936_);
lean_inc(v_forwardedArgs_2928_);
lean_inc(v_leanOpts_2927_);
lean_dec(v_opts_1518_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2961_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2954_; lean_object* v___x_2956_; 
v___x_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2954_, 0, v_a_2923_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 5, v___x_2954_);
v___x_2956_ = v___x_2952_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_leanOpts_2927_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v_forwardedArgs_2928_);
lean_ctor_set(v_reuseFailAlloc_2960_, 2, v_opts_2936_);
lean_ctor_set(v_reuseFailAlloc_2960_, 3, v_rootDir_x3f_2939_);
lean_ctor_set(v_reuseFailAlloc_2960_, 4, v_setupFileName_x3f_2940_);
lean_ctor_set(v_reuseFailAlloc_2960_, 5, v___x_2954_);
lean_ctor_set(v_reuseFailAlloc_2960_, 6, v_ileanFileName_x3f_2941_);
lean_ctor_set(v_reuseFailAlloc_2960_, 7, v_cFileName_x3f_2942_);
lean_ctor_set(v_reuseFailAlloc_2960_, 8, v_bcFileName_x3f_2943_);
lean_ctor_set(v_reuseFailAlloc_2960_, 9, v_errorOnKinds_2945_);
lean_ctor_set(v_reuseFailAlloc_2960_, 10, v_incrSaveFileName_x3f_2948_);
lean_ctor_set(v_reuseFailAlloc_2960_, 11, v_incrLoadFileName_x3f_2949_);
lean_ctor_set(v_reuseFailAlloc_2960_, 12, v_incrHeaderSaveFileName_x3f_2950_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 8, v_component_2929_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 9, v_printPrefix_2930_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 10, v_printLibDir_2931_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 11, v_useStdin_2932_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 12, v_onlyDeps_2933_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 13, v_onlySrcDeps_2934_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 14, v_depsJson_2935_);
lean_ctor_set_uint32(v_reuseFailAlloc_2960_, sizeof(void*)*13, v_trustLevel_2937_);
lean_ctor_set_uint32(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 4, v_numThreads_2938_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 15, v_jsonOutput_2944_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 16, v_printStats_2946_);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, sizeof(void*)*13 + 17, v_run_2947_);
v___x_2956_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
lean_object* v___x_2958_; 
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 0, v___x_2956_);
v___x_2958_ = v___x_2925_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2956_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
lean_dec_ref(v_opts_1518_);
v_a_2964_ = lean_ctor_get(v___x_2922_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2922_, 1);
v___x_2968_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2969_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2968_);
lean_dec_ref(v___x_2969_);
goto v___jp_2965_;
v___jp_2965_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = lean_io_error_to_string(v_a_2964_);
v___x_2967_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_2966_);
lean_dec_ref(v___x_2967_);
goto v___jp_1713_;
}
}
}
}
else
{
lean_object* v_leanOpts_2970_; lean_object* v_forwardedArgs_2971_; uint8_t v_component_2972_; uint8_t v_printPrefix_2973_; uint8_t v_printLibDir_2974_; uint8_t v_useStdin_2975_; uint8_t v_onlyDeps_2976_; uint8_t v_onlySrcDeps_2977_; uint8_t v_depsJson_2978_; lean_object* v_opts_2979_; uint32_t v_trustLevel_2980_; uint32_t v_numThreads_2981_; lean_object* v_rootDir_x3f_2982_; lean_object* v_setupFileName_x3f_2983_; lean_object* v_oleanFileName_x3f_2984_; lean_object* v_ileanFileName_x3f_2985_; lean_object* v_cFileName_x3f_2986_; lean_object* v_bcFileName_x3f_2987_; uint8_t v_jsonOutput_2988_; lean_object* v_errorOnKinds_2989_; uint8_t v_printStats_2990_; lean_object* v_incrSaveFileName_x3f_2991_; lean_object* v_incrLoadFileName_x3f_2992_; lean_object* v_incrHeaderSaveFileName_x3f_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3003_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_2970_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_2971_ = lean_ctor_get(v_opts_1518_, 1);
v_component_2972_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_2973_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_2974_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_2975_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_2976_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_2977_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_2978_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_2979_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_2980_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_2981_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_2982_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_2983_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_2984_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_2985_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_2986_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_2987_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_2988_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_2989_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_2990_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_incrSaveFileName_x3f_2991_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_2992_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_2993_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_3003_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2995_ = v_opts_1518_;
v_isShared_2996_ = v_isSharedCheck_3003_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2993_);
lean_inc(v_incrLoadFileName_x3f_2992_);
lean_inc(v_incrSaveFileName_x3f_2991_);
lean_inc(v_errorOnKinds_2989_);
lean_inc(v_bcFileName_x3f_2987_);
lean_inc(v_cFileName_x3f_2986_);
lean_inc(v_ileanFileName_x3f_2985_);
lean_inc(v_oleanFileName_x3f_2984_);
lean_inc(v_setupFileName_x3f_2983_);
lean_inc(v_rootDir_x3f_2982_);
lean_inc(v_opts_2979_);
lean_inc(v_forwardedArgs_2971_);
lean_inc(v_leanOpts_2970_);
lean_dec(v_opts_1518_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3003_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_3000_; 
v___x_2997_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_2998_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_leanOpts_2970_, v___x_2997_, v___x_1761_);
if (v_isShared_2996_ == 0)
{
lean_ctor_set(v___x_2995_, 0, v___x_2998_);
v___x_3000_ = v___x_2995_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v___x_2998_);
lean_ctor_set(v_reuseFailAlloc_3002_, 1, v_forwardedArgs_2971_);
lean_ctor_set(v_reuseFailAlloc_3002_, 2, v_opts_2979_);
lean_ctor_set(v_reuseFailAlloc_3002_, 3, v_rootDir_x3f_2982_);
lean_ctor_set(v_reuseFailAlloc_3002_, 4, v_setupFileName_x3f_2983_);
lean_ctor_set(v_reuseFailAlloc_3002_, 5, v_oleanFileName_x3f_2984_);
lean_ctor_set(v_reuseFailAlloc_3002_, 6, v_ileanFileName_x3f_2985_);
lean_ctor_set(v_reuseFailAlloc_3002_, 7, v_cFileName_x3f_2986_);
lean_ctor_set(v_reuseFailAlloc_3002_, 8, v_bcFileName_x3f_2987_);
lean_ctor_set(v_reuseFailAlloc_3002_, 9, v_errorOnKinds_2989_);
lean_ctor_set(v_reuseFailAlloc_3002_, 10, v_incrSaveFileName_x3f_2991_);
lean_ctor_set(v_reuseFailAlloc_3002_, 11, v_incrLoadFileName_x3f_2992_);
lean_ctor_set(v_reuseFailAlloc_3002_, 12, v_incrHeaderSaveFileName_x3f_2993_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 8, v_component_2972_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 9, v_printPrefix_2973_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 10, v_printLibDir_2974_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 11, v_useStdin_2975_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 12, v_onlyDeps_2976_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 13, v_onlySrcDeps_2977_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 14, v_depsJson_2978_);
lean_ctor_set_uint32(v_reuseFailAlloc_3002_, sizeof(void*)*13, v_trustLevel_2980_);
lean_ctor_set_uint32(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 4, v_numThreads_2981_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 15, v_jsonOutput_2988_);
lean_ctor_set_uint8(v_reuseFailAlloc_3002_, sizeof(void*)*13 + 16, v_printStats_2990_);
v___x_3000_ = v_reuseFailAlloc_3002_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
lean_object* v___x_3001_; 
lean_ctor_set_uint8(v___x_3000_, sizeof(void*)*13 + 17, v___x_1763_);
v___x_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3000_);
return v___x_3001_;
}
}
}
}
else
{
lean_object* v_leanOpts_3004_; lean_object* v_forwardedArgs_3005_; uint8_t v_component_3006_; uint8_t v_printPrefix_3007_; uint8_t v_printLibDir_3008_; uint8_t v_onlyDeps_3009_; uint8_t v_onlySrcDeps_3010_; uint8_t v_depsJson_3011_; lean_object* v_opts_3012_; uint32_t v_trustLevel_3013_; uint32_t v_numThreads_3014_; lean_object* v_rootDir_x3f_3015_; lean_object* v_setupFileName_x3f_3016_; lean_object* v_oleanFileName_x3f_3017_; lean_object* v_ileanFileName_x3f_3018_; lean_object* v_cFileName_x3f_3019_; lean_object* v_bcFileName_x3f_3020_; uint8_t v_jsonOutput_3021_; lean_object* v_errorOnKinds_3022_; uint8_t v_printStats_3023_; uint8_t v_run_3024_; lean_object* v_incrSaveFileName_x3f_3025_; lean_object* v_incrLoadFileName_x3f_3026_; lean_object* v_incrHeaderSaveFileName_x3f_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3035_; 
lean_dec(v_optArg_x3f_1520_);
v_leanOpts_3004_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_3005_ = lean_ctor_get(v_opts_1518_, 1);
v_component_3006_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_3007_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_3008_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_onlyDeps_3009_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_3010_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_3011_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_3012_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_3013_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_3014_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_3015_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_3016_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_3017_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_3018_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_3019_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_3020_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_3021_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_3022_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_3023_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_3024_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_3025_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_3026_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_3027_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_3035_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3029_ = v_opts_1518_;
v_isShared_3030_ = v_isSharedCheck_3035_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_3027_);
lean_inc(v_incrLoadFileName_x3f_3026_);
lean_inc(v_incrSaveFileName_x3f_3025_);
lean_inc(v_errorOnKinds_3022_);
lean_inc(v_bcFileName_x3f_3020_);
lean_inc(v_cFileName_x3f_3019_);
lean_inc(v_ileanFileName_x3f_3018_);
lean_inc(v_oleanFileName_x3f_3017_);
lean_inc(v_setupFileName_x3f_3016_);
lean_inc(v_rootDir_x3f_3015_);
lean_inc(v_opts_3012_);
lean_inc(v_forwardedArgs_3005_);
lean_inc(v_leanOpts_3004_);
lean_dec(v_opts_1518_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3035_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3032_; 
if (v_isShared_3030_ == 0)
{
v___x_3032_ = v___x_3029_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_leanOpts_3004_);
lean_ctor_set(v_reuseFailAlloc_3034_, 1, v_forwardedArgs_3005_);
lean_ctor_set(v_reuseFailAlloc_3034_, 2, v_opts_3012_);
lean_ctor_set(v_reuseFailAlloc_3034_, 3, v_rootDir_x3f_3015_);
lean_ctor_set(v_reuseFailAlloc_3034_, 4, v_setupFileName_x3f_3016_);
lean_ctor_set(v_reuseFailAlloc_3034_, 5, v_oleanFileName_x3f_3017_);
lean_ctor_set(v_reuseFailAlloc_3034_, 6, v_ileanFileName_x3f_3018_);
lean_ctor_set(v_reuseFailAlloc_3034_, 7, v_cFileName_x3f_3019_);
lean_ctor_set(v_reuseFailAlloc_3034_, 8, v_bcFileName_x3f_3020_);
lean_ctor_set(v_reuseFailAlloc_3034_, 9, v_errorOnKinds_3022_);
lean_ctor_set(v_reuseFailAlloc_3034_, 10, v_incrSaveFileName_x3f_3025_);
lean_ctor_set(v_reuseFailAlloc_3034_, 11, v_incrLoadFileName_x3f_3026_);
lean_ctor_set(v_reuseFailAlloc_3034_, 12, v_incrHeaderSaveFileName_x3f_3027_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 8, v_component_3006_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 9, v_printPrefix_3007_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 10, v_printLibDir_3008_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 12, v_onlyDeps_3009_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 13, v_onlySrcDeps_3010_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 14, v_depsJson_3011_);
lean_ctor_set_uint32(v_reuseFailAlloc_3034_, sizeof(void*)*13, v_trustLevel_3013_);
lean_ctor_set_uint32(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 4, v_numThreads_3014_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 15, v_jsonOutput_3021_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 16, v_printStats_3023_);
lean_ctor_set_uint8(v_reuseFailAlloc_3034_, sizeof(void*)*13 + 17, v_run_3024_);
v___x_3032_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
lean_object* v___x_3033_; 
lean_ctor_set_uint8(v___x_3032_, sizeof(void*)*13 + 11, v___x_1761_);
v___x_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
return v___x_3033_;
}
}
}
}
else
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3036_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27));
v___x_3037_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_3036_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3099_; 
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3040_ = v___x_3037_;
v_isShared_3041_ = v_isSharedCheck_3099_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3037_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3099_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v___x_3042_ = lean_unsigned_to_nat(0u);
v___x_3043_ = lean_string_utf8_byte_size(v_a_3038_);
lean_inc(v_a_3038_);
v___x_3044_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3044_, 0, v_a_3038_);
lean_ctor_set(v___x_3044_, 1, v___x_3042_);
lean_ctor_set(v___x_3044_, 2, v___x_3043_);
v___x_3045_ = l_String_Slice_toNat_x3f(v___x_3044_);
lean_dec_ref_known(v___x_3044_, 3);
if (lean_obj_tag(v___x_3045_) == 1)
{
lean_object* v_val_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; uint8_t v___x_3054_; 
v_val_3046_ = lean_ctor_get(v___x_3045_, 0);
lean_inc(v_val_3046_);
lean_dec_ref_known(v___x_3045_, 1);
v___x_3047_ = lean_unsigned_to_nat(4u);
v___x_3048_ = lean_unsigned_to_nat(2u);
v___x_3049_ = lean_nat_shiftr(v_val_3046_, v___x_3048_);
lean_dec(v_val_3046_);
v___x_3050_ = lean_nat_mul(v___x_3049_, v___x_3047_);
lean_dec(v___x_3049_);
v___x_3051_ = lean_unsigned_to_nat(1024u);
v___x_3052_ = lean_nat_mul(v___x_3050_, v___x_3051_);
lean_dec(v___x_3050_);
v___x_3053_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28, &l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_once, _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28);
v___x_3054_ = lean_nat_dec_lt(v___x_3052_, v___x_3053_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
lean_dec(v___x_3052_);
lean_del_object(v___x_3040_);
lean_dec(v_a_3038_);
lean_dec_ref(v_opts_1518_);
v___x_3055_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29));
v___x_3056_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3055_);
lean_dec_ref(v___x_3056_);
goto v___jp_1561_;
}
else
{
size_t v___x_3057_; lean_object* v___x_3058_; lean_object* v_leanOpts_3059_; lean_object* v_forwardedArgs_3060_; uint8_t v_component_3061_; uint8_t v_printPrefix_3062_; uint8_t v_printLibDir_3063_; uint8_t v_useStdin_3064_; uint8_t v_onlyDeps_3065_; uint8_t v_onlySrcDeps_3066_; uint8_t v_depsJson_3067_; lean_object* v_opts_3068_; uint32_t v_trustLevel_3069_; uint32_t v_numThreads_3070_; lean_object* v_rootDir_x3f_3071_; lean_object* v_setupFileName_x3f_3072_; lean_object* v_oleanFileName_x3f_3073_; lean_object* v_ileanFileName_x3f_3074_; lean_object* v_cFileName_x3f_3075_; lean_object* v_bcFileName_x3f_3076_; uint8_t v_jsonOutput_3077_; lean_object* v_errorOnKinds_3078_; uint8_t v_printStats_3079_; uint8_t v_run_3080_; lean_object* v_incrSaveFileName_x3f_3081_; lean_object* v_incrLoadFileName_x3f_3082_; lean_object* v_incrHeaderSaveFileName_x3f_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3096_; 
v___x_3057_ = lean_usize_of_nat(v___x_3052_);
lean_dec(v___x_3052_);
v___x_3058_ = lean_internal_set_thread_stack_size(v___x_3057_);
v_leanOpts_3059_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_3060_ = lean_ctor_get(v_opts_1518_, 1);
v_component_3061_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_3062_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_3063_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_3064_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_3065_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_3066_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_3067_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_3068_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_3069_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_3070_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_3071_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_3072_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_3073_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_3074_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_3075_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_3076_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_3077_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_3078_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_3079_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_3080_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_3081_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_3082_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_3083_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_3096_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3085_ = v_opts_1518_;
v_isShared_3086_ = v_isSharedCheck_3096_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_3083_);
lean_inc(v_incrLoadFileName_x3f_3082_);
lean_inc(v_incrSaveFileName_x3f_3081_);
lean_inc(v_errorOnKinds_3078_);
lean_inc(v_bcFileName_x3f_3076_);
lean_inc(v_cFileName_x3f_3075_);
lean_inc(v_ileanFileName_x3f_3074_);
lean_inc(v_oleanFileName_x3f_3073_);
lean_inc(v_setupFileName_x3f_3072_);
lean_inc(v_rootDir_x3f_3071_);
lean_inc(v_opts_3068_);
lean_inc(v_forwardedArgs_3060_);
lean_inc(v_leanOpts_3059_);
lean_dec(v_opts_1518_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3096_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3091_; 
v___x_3087_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30));
v___x_3088_ = lean_string_append(v___x_3087_, v_a_3038_);
lean_dec(v_a_3038_);
v___x_3089_ = lean_array_push(v_forwardedArgs_3060_, v___x_3088_);
if (v_isShared_3086_ == 0)
{
lean_ctor_set(v___x_3085_, 1, v___x_3089_);
v___x_3091_ = v___x_3085_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_leanOpts_3059_);
lean_ctor_set(v_reuseFailAlloc_3095_, 1, v___x_3089_);
lean_ctor_set(v_reuseFailAlloc_3095_, 2, v_opts_3068_);
lean_ctor_set(v_reuseFailAlloc_3095_, 3, v_rootDir_x3f_3071_);
lean_ctor_set(v_reuseFailAlloc_3095_, 4, v_setupFileName_x3f_3072_);
lean_ctor_set(v_reuseFailAlloc_3095_, 5, v_oleanFileName_x3f_3073_);
lean_ctor_set(v_reuseFailAlloc_3095_, 6, v_ileanFileName_x3f_3074_);
lean_ctor_set(v_reuseFailAlloc_3095_, 7, v_cFileName_x3f_3075_);
lean_ctor_set(v_reuseFailAlloc_3095_, 8, v_bcFileName_x3f_3076_);
lean_ctor_set(v_reuseFailAlloc_3095_, 9, v_errorOnKinds_3078_);
lean_ctor_set(v_reuseFailAlloc_3095_, 10, v_incrSaveFileName_x3f_3081_);
lean_ctor_set(v_reuseFailAlloc_3095_, 11, v_incrLoadFileName_x3f_3082_);
lean_ctor_set(v_reuseFailAlloc_3095_, 12, v_incrHeaderSaveFileName_x3f_3083_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 8, v_component_3061_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 9, v_printPrefix_3062_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 10, v_printLibDir_3063_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 11, v_useStdin_3064_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 12, v_onlyDeps_3065_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 13, v_onlySrcDeps_3066_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 14, v_depsJson_3067_);
lean_ctor_set_uint32(v_reuseFailAlloc_3095_, sizeof(void*)*13, v_trustLevel_3069_);
lean_ctor_set_uint32(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 4, v_numThreads_3070_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 15, v_jsonOutput_3077_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 16, v_printStats_3079_);
lean_ctor_set_uint8(v_reuseFailAlloc_3095_, sizeof(void*)*13 + 17, v_run_3080_);
v___x_3091_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
lean_object* v___x_3093_; 
if (v_isShared_3041_ == 0)
{
lean_ctor_set(v___x_3040_, 0, v___x_3091_);
v___x_3093_ = v___x_3040_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3091_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
}
}
else
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
lean_dec(v___x_3045_);
lean_del_object(v___x_3040_);
lean_dec(v_a_3038_);
lean_dec_ref(v_opts_1518_);
v___x_3097_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31));
v___x_3098_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3097_);
lean_dec_ref(v___x_3098_);
goto v___jp_1558_;
}
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
lean_dec_ref(v_opts_1518_);
v_a_3100_ = lean_ctor_get(v___x_3037_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3037_, 1);
v___x_3104_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3105_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3104_);
lean_dec_ref(v___x_3105_);
goto v___jp_3101_;
v___jp_3101_:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3102_ = lean_io_error_to_string(v_a_3100_);
v___x_3103_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3102_);
lean_dec_ref(v___x_3103_);
goto v___jp_1555_;
}
}
}
}
else
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3106_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32));
v___x_3107_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_3106_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_3107_) == 0)
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3148_; 
v_a_3108_ = lean_ctor_get(v___x_3107_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3110_ = v___x_3107_;
v_isShared_3111_ = v_isSharedCheck_3148_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3107_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3148_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v_leanOpts_3112_; lean_object* v_forwardedArgs_3113_; uint8_t v_component_3114_; uint8_t v_printPrefix_3115_; uint8_t v_printLibDir_3116_; uint8_t v_useStdin_3117_; uint8_t v_onlyDeps_3118_; uint8_t v_onlySrcDeps_3119_; uint8_t v_depsJson_3120_; lean_object* v_opts_3121_; uint32_t v_trustLevel_3122_; uint32_t v_numThreads_3123_; lean_object* v_rootDir_x3f_3124_; lean_object* v_setupFileName_x3f_3125_; lean_object* v_oleanFileName_x3f_3126_; lean_object* v_ileanFileName_x3f_3127_; lean_object* v_cFileName_x3f_3128_; uint8_t v_jsonOutput_3129_; lean_object* v_errorOnKinds_3130_; uint8_t v_printStats_3131_; uint8_t v_run_3132_; lean_object* v_incrSaveFileName_x3f_3133_; lean_object* v_incrLoadFileName_x3f_3134_; lean_object* v_incrHeaderSaveFileName_x3f_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3146_; 
v_leanOpts_3112_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_3113_ = lean_ctor_get(v_opts_1518_, 1);
v_component_3114_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_3115_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_3116_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_3117_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_3118_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_3119_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_3120_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_3121_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_3122_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_3123_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_3124_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_3125_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_3126_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_3127_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_3128_ = lean_ctor_get(v_opts_1518_, 7);
v_jsonOutput_3129_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_3130_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_3131_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_3132_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_3133_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_3134_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_3135_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_3146_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_3146_ == 0)
{
lean_object* v_unused_3147_; 
v_unused_3147_ = lean_ctor_get(v_opts_1518_, 8);
lean_dec(v_unused_3147_);
v___x_3137_ = v_opts_1518_;
v_isShared_3138_ = v_isSharedCheck_3146_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_3135_);
lean_inc(v_incrLoadFileName_x3f_3134_);
lean_inc(v_incrSaveFileName_x3f_3133_);
lean_inc(v_errorOnKinds_3130_);
lean_inc(v_cFileName_x3f_3128_);
lean_inc(v_ileanFileName_x3f_3127_);
lean_inc(v_oleanFileName_x3f_3126_);
lean_inc(v_setupFileName_x3f_3125_);
lean_inc(v_rootDir_x3f_3124_);
lean_inc(v_opts_3121_);
lean_inc(v_forwardedArgs_3113_);
lean_inc(v_leanOpts_3112_);
lean_dec(v_opts_1518_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3146_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3139_; lean_object* v___x_3141_; 
v___x_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3139_, 0, v_a_3108_);
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 8, v___x_3139_);
v___x_3141_ = v___x_3137_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_leanOpts_3112_);
lean_ctor_set(v_reuseFailAlloc_3145_, 1, v_forwardedArgs_3113_);
lean_ctor_set(v_reuseFailAlloc_3145_, 2, v_opts_3121_);
lean_ctor_set(v_reuseFailAlloc_3145_, 3, v_rootDir_x3f_3124_);
lean_ctor_set(v_reuseFailAlloc_3145_, 4, v_setupFileName_x3f_3125_);
lean_ctor_set(v_reuseFailAlloc_3145_, 5, v_oleanFileName_x3f_3126_);
lean_ctor_set(v_reuseFailAlloc_3145_, 6, v_ileanFileName_x3f_3127_);
lean_ctor_set(v_reuseFailAlloc_3145_, 7, v_cFileName_x3f_3128_);
lean_ctor_set(v_reuseFailAlloc_3145_, 8, v___x_3139_);
lean_ctor_set(v_reuseFailAlloc_3145_, 9, v_errorOnKinds_3130_);
lean_ctor_set(v_reuseFailAlloc_3145_, 10, v_incrSaveFileName_x3f_3133_);
lean_ctor_set(v_reuseFailAlloc_3145_, 11, v_incrLoadFileName_x3f_3134_);
lean_ctor_set(v_reuseFailAlloc_3145_, 12, v_incrHeaderSaveFileName_x3f_3135_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 8, v_component_3114_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 9, v_printPrefix_3115_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 10, v_printLibDir_3116_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 11, v_useStdin_3117_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 12, v_onlyDeps_3118_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 13, v_onlySrcDeps_3119_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 14, v_depsJson_3120_);
lean_ctor_set_uint32(v_reuseFailAlloc_3145_, sizeof(void*)*13, v_trustLevel_3122_);
lean_ctor_set_uint32(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 4, v_numThreads_3123_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 15, v_jsonOutput_3129_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 16, v_printStats_3131_);
lean_ctor_set_uint8(v_reuseFailAlloc_3145_, sizeof(void*)*13 + 17, v_run_3132_);
v___x_3141_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
lean_object* v___x_3143_; 
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 0, v___x_3141_);
v___x_3143_ = v___x_3110_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3141_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
lean_dec_ref(v_opts_1518_);
v_a_3149_ = lean_ctor_get(v___x_3107_, 0);
lean_inc(v_a_3149_);
lean_dec_ref_known(v___x_3107_, 1);
v___x_3153_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3154_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3153_);
lean_dec_ref(v___x_3154_);
goto v___jp_3150_;
v___jp_3150_:
{
lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3151_ = lean_io_error_to_string(v_a_3149_);
v___x_3152_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3151_);
lean_dec_ref(v___x_3152_);
goto v___jp_1719_;
}
}
}
}
else
{
lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3155_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33));
v___x_3156_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_3155_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_3156_) == 0)
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3197_; 
v_a_3157_ = lean_ctor_get(v___x_3156_, 0);
v_isSharedCheck_3197_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3197_ == 0)
{
v___x_3159_ = v___x_3156_;
v_isShared_3160_ = v_isSharedCheck_3197_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3156_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3197_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v_leanOpts_3161_; lean_object* v_forwardedArgs_3162_; uint8_t v_component_3163_; uint8_t v_printPrefix_3164_; uint8_t v_printLibDir_3165_; uint8_t v_useStdin_3166_; uint8_t v_onlyDeps_3167_; uint8_t v_onlySrcDeps_3168_; uint8_t v_depsJson_3169_; lean_object* v_opts_3170_; uint32_t v_trustLevel_3171_; uint32_t v_numThreads_3172_; lean_object* v_rootDir_x3f_3173_; lean_object* v_setupFileName_x3f_3174_; lean_object* v_oleanFileName_x3f_3175_; lean_object* v_ileanFileName_x3f_3176_; lean_object* v_bcFileName_x3f_3177_; uint8_t v_jsonOutput_3178_; lean_object* v_errorOnKinds_3179_; uint8_t v_printStats_3180_; uint8_t v_run_3181_; lean_object* v_incrSaveFileName_x3f_3182_; lean_object* v_incrLoadFileName_x3f_3183_; lean_object* v_incrHeaderSaveFileName_x3f_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3195_; 
v_leanOpts_3161_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_3162_ = lean_ctor_get(v_opts_1518_, 1);
v_component_3163_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_3164_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_3165_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_3166_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_3167_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_3168_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_3169_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_3170_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_3171_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_numThreads_3172_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13 + 4);
v_rootDir_x3f_3173_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_3174_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_3175_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_3176_ = lean_ctor_get(v_opts_1518_, 6);
v_bcFileName_x3f_3177_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_3178_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_3179_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_3180_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_3181_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_3182_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_3183_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_3184_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_3195_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_3195_ == 0)
{
lean_object* v_unused_3196_; 
v_unused_3196_ = lean_ctor_get(v_opts_1518_, 7);
lean_dec(v_unused_3196_);
v___x_3186_ = v_opts_1518_;
v_isShared_3187_ = v_isSharedCheck_3195_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_3184_);
lean_inc(v_incrLoadFileName_x3f_3183_);
lean_inc(v_incrSaveFileName_x3f_3182_);
lean_inc(v_errorOnKinds_3179_);
lean_inc(v_bcFileName_x3f_3177_);
lean_inc(v_ileanFileName_x3f_3176_);
lean_inc(v_oleanFileName_x3f_3175_);
lean_inc(v_setupFileName_x3f_3174_);
lean_inc(v_rootDir_x3f_3173_);
lean_inc(v_opts_3170_);
lean_inc(v_forwardedArgs_3162_);
lean_inc(v_leanOpts_3161_);
lean_dec(v_opts_1518_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3195_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3188_; lean_object* v___x_3190_; 
v___x_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3188_, 0, v_a_3157_);
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 7, v___x_3188_);
v___x_3190_ = v___x_3186_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_leanOpts_3161_);
lean_ctor_set(v_reuseFailAlloc_3194_, 1, v_forwardedArgs_3162_);
lean_ctor_set(v_reuseFailAlloc_3194_, 2, v_opts_3170_);
lean_ctor_set(v_reuseFailAlloc_3194_, 3, v_rootDir_x3f_3173_);
lean_ctor_set(v_reuseFailAlloc_3194_, 4, v_setupFileName_x3f_3174_);
lean_ctor_set(v_reuseFailAlloc_3194_, 5, v_oleanFileName_x3f_3175_);
lean_ctor_set(v_reuseFailAlloc_3194_, 6, v_ileanFileName_x3f_3176_);
lean_ctor_set(v_reuseFailAlloc_3194_, 7, v___x_3188_);
lean_ctor_set(v_reuseFailAlloc_3194_, 8, v_bcFileName_x3f_3177_);
lean_ctor_set(v_reuseFailAlloc_3194_, 9, v_errorOnKinds_3179_);
lean_ctor_set(v_reuseFailAlloc_3194_, 10, v_incrSaveFileName_x3f_3182_);
lean_ctor_set(v_reuseFailAlloc_3194_, 11, v_incrLoadFileName_x3f_3183_);
lean_ctor_set(v_reuseFailAlloc_3194_, 12, v_incrHeaderSaveFileName_x3f_3184_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 8, v_component_3163_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 9, v_printPrefix_3164_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 10, v_printLibDir_3165_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 11, v_useStdin_3166_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 12, v_onlyDeps_3167_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 13, v_onlySrcDeps_3168_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 14, v_depsJson_3169_);
lean_ctor_set_uint32(v_reuseFailAlloc_3194_, sizeof(void*)*13, v_trustLevel_3171_);
lean_ctor_set_uint32(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 4, v_numThreads_3172_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 15, v_jsonOutput_3178_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 16, v_printStats_3180_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*13 + 17, v_run_3181_);
v___x_3190_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3192_; 
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 0, v___x_3190_);
v___x_3192_ = v___x_3159_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v___x_3190_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
}
}
else
{
lean_object* v_a_3198_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
lean_dec_ref(v_opts_1518_);
v_a_3198_ = lean_ctor_get(v___x_3156_, 0);
lean_inc(v_a_3198_);
lean_dec_ref_known(v___x_3156_, 1);
v___x_3202_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3203_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3202_);
lean_dec_ref(v___x_3203_);
goto v___jp_3199_;
v___jp_3199_:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3200_ = lean_io_error_to_string(v_a_3198_);
v___x_3201_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3200_);
lean_dec_ref(v___x_3201_);
goto v___jp_1549_;
}
}
}
}
else
{
lean_object* v___x_3204_; lean_object* v___x_3205_; 
lean_dec(v_optArg_x3f_1520_);
lean_dec_ref(v_opts_1518_);
v___x_3204_ = l___private_Lean_Shell_0__Lean_featuresString;
v___x_3205_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(v___x_3204_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3213_; 
v_isSharedCheck_3213_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3213_ == 0)
{
lean_object* v_unused_3214_; 
v_unused_3214_ = lean_ctor_get(v___x_3205_, 0);
lean_dec(v_unused_3214_);
v___x_3207_ = v___x_3205_;
v_isShared_3208_ = v_isSharedCheck_3213_;
goto v_resetjp_3206_;
}
else
{
lean_dec(v___x_3205_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3213_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3209_; lean_object* v___x_3211_; 
v___x_3209_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3208_ == 0)
{
lean_ctor_set_tag(v___x_3207_, 1);
lean_ctor_set(v___x_3207_, 0, v___x_3209_);
v___x_3211_ = v___x_3207_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v___x_3209_);
v___x_3211_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
return v___x_3211_;
}
}
}
else
{
lean_object* v_a_3215_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v_a_3215_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3215_);
lean_dec_ref_known(v___x_3205_, 1);
v___x_3219_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3220_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3219_);
lean_dec_ref(v___x_3220_);
goto v___jp_3216_;
v___jp_3216_:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; 
v___x_3217_ = lean_io_error_to_string(v_a_3215_);
v___x_3218_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3217_);
lean_dec_ref(v___x_3218_);
goto v___jp_1725_;
}
}
}
}
else
{
lean_object* v___x_3221_; 
lean_dec(v_optArg_x3f_1520_);
lean_dec_ref(v_opts_1518_);
v___x_3221_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1749_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3229_; 
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3229_ == 0)
{
lean_object* v_unused_3230_; 
v_unused_3230_ = lean_ctor_get(v___x_3221_, 0);
lean_dec(v_unused_3230_);
v___x_3223_ = v___x_3221_;
v_isShared_3224_ = v_isSharedCheck_3229_;
goto v_resetjp_3222_;
}
else
{
lean_dec(v___x_3221_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3229_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3225_; lean_object* v___x_3227_; 
v___x_3225_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3224_ == 0)
{
lean_ctor_set_tag(v___x_3223_, 1);
lean_ctor_set(v___x_3223_, 0, v___x_3225_);
v___x_3227_ = v___x_3223_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v___x_3225_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v_a_3231_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v___x_3221_, 1);
v___x_3235_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3236_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3235_);
lean_dec_ref(v___x_3236_);
goto v___jp_3232_;
v___jp_3232_:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; 
v___x_3233_ = lean_io_error_to_string(v_a_3231_);
v___x_3234_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3233_);
lean_dec_ref(v___x_3234_);
goto v___jp_1543_;
}
}
}
}
else
{
lean_object* v___x_3237_; lean_object* v___x_3238_; 
lean_dec(v_optArg_x3f_1520_);
lean_dec_ref(v_opts_1518_);
v___x_3237_ = l_Lean_githash;
v___x_3238_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(v___x_3237_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3246_; 
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3246_ == 0)
{
lean_object* v_unused_3247_; 
v_unused_3247_ = lean_ctor_get(v___x_3238_, 0);
lean_dec(v_unused_3247_);
v___x_3240_ = v___x_3238_;
v_isShared_3241_ = v_isSharedCheck_3246_;
goto v_resetjp_3239_;
}
else
{
lean_dec(v___x_3238_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3246_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3242_; lean_object* v___x_3244_; 
v___x_3242_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3241_ == 0)
{
lean_ctor_set_tag(v___x_3240_, 1);
lean_ctor_set(v___x_3240_, 0, v___x_3242_);
v___x_3244_ = v___x_3240_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
else
{
lean_object* v_a_3248_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v_a_3248_ = lean_ctor_get(v___x_3238_, 0);
lean_inc(v_a_3248_);
lean_dec_ref_known(v___x_3238_, 1);
v___x_3252_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3253_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3252_);
lean_dec_ref(v___x_3253_);
goto v___jp_3249_;
v___jp_3249_:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3250_ = lean_io_error_to_string(v_a_3248_);
v___x_3251_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3250_);
lean_dec_ref(v___x_3251_);
goto v___jp_1731_;
}
}
}
}
else
{
lean_object* v___x_3254_; lean_object* v___x_3255_; 
lean_dec(v_optArg_x3f_1520_);
lean_dec_ref(v_opts_1518_);
v___x_3254_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_3255_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(v___x_3254_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3263_; 
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3263_ == 0)
{
lean_object* v_unused_3264_; 
v_unused_3264_ = lean_ctor_get(v___x_3255_, 0);
lean_dec(v_unused_3264_);
v___x_3257_ = v___x_3255_;
v_isShared_3258_ = v_isSharedCheck_3263_;
goto v_resetjp_3256_;
}
else
{
lean_dec(v___x_3255_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3263_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3259_; lean_object* v___x_3261_; 
v___x_3259_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3258_ == 0)
{
lean_ctor_set_tag(v___x_3257_, 1);
lean_ctor_set(v___x_3257_, 0, v___x_3259_);
v___x_3261_ = v___x_3257_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v___x_3259_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v_a_3265_ = lean_ctor_get(v___x_3255_, 0);
lean_inc(v_a_3265_);
lean_dec_ref_known(v___x_3255_, 1);
v___x_3269_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3270_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3269_);
lean_dec_ref(v___x_3270_);
goto v___jp_3266_;
v___jp_3266_:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3267_ = lean_io_error_to_string(v_a_3265_);
v___x_3268_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3267_);
lean_dec_ref(v___x_3268_);
goto v___jp_1537_;
}
}
}
}
else
{
lean_object* v___x_3271_; lean_object* v___x_3272_; 
lean_dec(v_optArg_x3f_1520_);
lean_dec_ref(v_opts_1518_);
v___x_3271_ = l___private_Lean_Shell_0__Lean_versionHeader;
v___x_3272_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1(v___x_3271_);
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3280_; 
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3280_ == 0)
{
lean_object* v_unused_3281_; 
v_unused_3281_ = lean_ctor_get(v___x_3272_, 0);
lean_dec(v_unused_3281_);
v___x_3274_ = v___x_3272_;
v_isShared_3275_ = v_isSharedCheck_3280_;
goto v_resetjp_3273_;
}
else
{
lean_dec(v___x_3272_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3280_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3276_; lean_object* v___x_3278_; 
v___x_3276_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3275_ == 0)
{
lean_ctor_set_tag(v___x_3274_, 1);
lean_ctor_set(v___x_3274_, 0, v___x_3276_);
v___x_3278_ = v___x_3274_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3276_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v_a_3282_ = lean_ctor_get(v___x_3272_, 0);
lean_inc(v_a_3282_);
lean_dec_ref_known(v___x_3272_, 1);
v___x_3286_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3287_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3286_);
lean_dec_ref(v___x_3287_);
goto v___jp_3283_;
v___jp_3283_:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
v___x_3284_ = lean_io_error_to_string(v_a_3282_);
v___x_3285_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3284_);
lean_dec_ref(v___x_3285_);
goto v___jp_1737_;
}
}
}
}
else
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3288_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34));
v___x_3289_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_3288_, v_optArg_x3f_1520_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3343_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3292_ = v___x_3289_;
v_isShared_3293_ = v_isSharedCheck_3343_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v___x_3289_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3343_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3294_ = lean_unsigned_to_nat(0u);
v___x_3295_ = lean_string_utf8_byte_size(v_a_3290_);
lean_inc(v_a_3290_);
v___x_3296_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3296_, 0, v_a_3290_);
lean_ctor_set(v___x_3296_, 1, v___x_3294_);
lean_ctor_set(v___x_3296_, 2, v___x_3295_);
v___x_3297_ = l_String_Slice_toNat_x3f(v___x_3296_);
lean_dec_ref_known(v___x_3296_, 3);
if (lean_obj_tag(v___x_3297_) == 1)
{
lean_object* v_val_3298_; lean_object* v___x_3299_; uint8_t v___x_3300_; 
v_val_3298_ = lean_ctor_get(v___x_3297_, 0);
lean_inc(v_val_3298_);
lean_dec_ref_known(v___x_3297_, 1);
v___x_3299_ = lean_cstr_to_nat("4294967296");
v___x_3300_ = lean_nat_dec_lt(v_val_3298_, v___x_3299_);
if (v___x_3300_ == 0)
{
lean_object* v___x_3301_; lean_object* v___x_3302_; 
lean_dec(v_val_3298_);
lean_del_object(v___x_3292_);
lean_dec(v_a_3290_);
lean_dec_ref(v_opts_1518_);
v___x_3301_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35));
v___x_3302_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3301_);
lean_dec_ref(v___x_3302_);
goto v___jp_1531_;
}
else
{
lean_object* v_leanOpts_3303_; lean_object* v_forwardedArgs_3304_; uint8_t v_component_3305_; uint8_t v_printPrefix_3306_; uint8_t v_printLibDir_3307_; uint8_t v_useStdin_3308_; uint8_t v_onlyDeps_3309_; uint8_t v_onlySrcDeps_3310_; uint8_t v_depsJson_3311_; lean_object* v_opts_3312_; uint32_t v_trustLevel_3313_; lean_object* v_rootDir_x3f_3314_; lean_object* v_setupFileName_x3f_3315_; lean_object* v_oleanFileName_x3f_3316_; lean_object* v_ileanFileName_x3f_3317_; lean_object* v_cFileName_x3f_3318_; lean_object* v_bcFileName_x3f_3319_; uint8_t v_jsonOutput_3320_; lean_object* v_errorOnKinds_3321_; uint8_t v_printStats_3322_; uint8_t v_run_3323_; lean_object* v_incrSaveFileName_x3f_3324_; lean_object* v_incrLoadFileName_x3f_3325_; lean_object* v_incrHeaderSaveFileName_x3f_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3340_; 
v_leanOpts_3303_ = lean_ctor_get(v_opts_1518_, 0);
v_forwardedArgs_3304_ = lean_ctor_get(v_opts_1518_, 1);
v_component_3305_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 8);
v_printPrefix_3306_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 9);
v_printLibDir_3307_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 10);
v_useStdin_3308_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 11);
v_onlyDeps_3309_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 12);
v_onlySrcDeps_3310_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 13);
v_depsJson_3311_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 14);
v_opts_3312_ = lean_ctor_get(v_opts_1518_, 2);
v_trustLevel_3313_ = lean_ctor_get_uint32(v_opts_1518_, sizeof(void*)*13);
v_rootDir_x3f_3314_ = lean_ctor_get(v_opts_1518_, 3);
v_setupFileName_x3f_3315_ = lean_ctor_get(v_opts_1518_, 4);
v_oleanFileName_x3f_3316_ = lean_ctor_get(v_opts_1518_, 5);
v_ileanFileName_x3f_3317_ = lean_ctor_get(v_opts_1518_, 6);
v_cFileName_x3f_3318_ = lean_ctor_get(v_opts_1518_, 7);
v_bcFileName_x3f_3319_ = lean_ctor_get(v_opts_1518_, 8);
v_jsonOutput_3320_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 15);
v_errorOnKinds_3321_ = lean_ctor_get(v_opts_1518_, 9);
v_printStats_3322_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 16);
v_run_3323_ = lean_ctor_get_uint8(v_opts_1518_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_3324_ = lean_ctor_get(v_opts_1518_, 10);
v_incrLoadFileName_x3f_3325_ = lean_ctor_get(v_opts_1518_, 11);
v_incrHeaderSaveFileName_x3f_3326_ = lean_ctor_get(v_opts_1518_, 12);
v_isSharedCheck_3340_ = !lean_is_exclusive(v_opts_1518_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3328_ = v_opts_1518_;
v_isShared_3329_ = v_isSharedCheck_3340_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_3326_);
lean_inc(v_incrLoadFileName_x3f_3325_);
lean_inc(v_incrSaveFileName_x3f_3324_);
lean_inc(v_errorOnKinds_3321_);
lean_inc(v_bcFileName_x3f_3319_);
lean_inc(v_cFileName_x3f_3318_);
lean_inc(v_ileanFileName_x3f_3317_);
lean_inc(v_oleanFileName_x3f_3316_);
lean_inc(v_setupFileName_x3f_3315_);
lean_inc(v_rootDir_x3f_3314_);
lean_inc(v_opts_3312_);
lean_inc(v_forwardedArgs_3304_);
lean_inc(v_leanOpts_3303_);
lean_dec(v_opts_1518_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3340_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
uint32_t v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3335_; 
v___x_3330_ = lean_uint32_of_nat(v_val_3298_);
lean_dec(v_val_3298_);
v___x_3331_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36));
v___x_3332_ = lean_string_append(v___x_3331_, v_a_3290_);
lean_dec(v_a_3290_);
v___x_3333_ = lean_array_push(v_forwardedArgs_3304_, v___x_3332_);
if (v_isShared_3329_ == 0)
{
lean_ctor_set(v___x_3328_, 1, v___x_3333_);
v___x_3335_ = v___x_3328_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 13, 18);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_leanOpts_3303_);
lean_ctor_set(v_reuseFailAlloc_3339_, 1, v___x_3333_);
lean_ctor_set(v_reuseFailAlloc_3339_, 2, v_opts_3312_);
lean_ctor_set(v_reuseFailAlloc_3339_, 3, v_rootDir_x3f_3314_);
lean_ctor_set(v_reuseFailAlloc_3339_, 4, v_setupFileName_x3f_3315_);
lean_ctor_set(v_reuseFailAlloc_3339_, 5, v_oleanFileName_x3f_3316_);
lean_ctor_set(v_reuseFailAlloc_3339_, 6, v_ileanFileName_x3f_3317_);
lean_ctor_set(v_reuseFailAlloc_3339_, 7, v_cFileName_x3f_3318_);
lean_ctor_set(v_reuseFailAlloc_3339_, 8, v_bcFileName_x3f_3319_);
lean_ctor_set(v_reuseFailAlloc_3339_, 9, v_errorOnKinds_3321_);
lean_ctor_set(v_reuseFailAlloc_3339_, 10, v_incrSaveFileName_x3f_3324_);
lean_ctor_set(v_reuseFailAlloc_3339_, 11, v_incrLoadFileName_x3f_3325_);
lean_ctor_set(v_reuseFailAlloc_3339_, 12, v_incrHeaderSaveFileName_x3f_3326_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 8, v_component_3305_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 9, v_printPrefix_3306_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 10, v_printLibDir_3307_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 11, v_useStdin_3308_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 12, v_onlyDeps_3309_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 13, v_onlySrcDeps_3310_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 14, v_depsJson_3311_);
lean_ctor_set_uint32(v_reuseFailAlloc_3339_, sizeof(void*)*13, v_trustLevel_3313_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 15, v_jsonOutput_3320_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 16, v_printStats_3322_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*13 + 17, v_run_3323_);
v___x_3335_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3337_; 
lean_ctor_set_uint32(v___x_3335_, sizeof(void*)*13 + 4, v___x_3330_);
if (v_isShared_3293_ == 0)
{
lean_ctor_set(v___x_3292_, 0, v___x_3335_);
v___x_3337_ = v___x_3292_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v___x_3335_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
}
}
}
else
{
lean_object* v___x_3341_; lean_object* v___x_3342_; 
lean_dec(v___x_3297_);
lean_del_object(v___x_3292_);
lean_dec(v_a_3290_);
lean_dec_ref(v_opts_1518_);
v___x_3341_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37));
v___x_3342_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3341_);
lean_dec_ref(v___x_3342_);
goto v___jp_1528_;
}
}
}
else
{
lean_object* v_a_3344_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
lean_dec_ref(v_opts_1518_);
v_a_3344_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3344_);
lean_dec_ref_known(v___x_3289_, 1);
v___x_3348_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3349_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3348_);
lean_dec_ref(v___x_3349_);
goto v___jp_3345_;
v___jp_3345_:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3346_ = lean_io_error_to_string(v_a_3344_);
v___x_3347_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_3346_);
lean_dec_ref(v___x_3347_);
goto v___jp_1525_;
}
}
}
}
else
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
lean_dec(v_optArg_x3f_1520_);
v___x_3350_ = lean_internal_set_exit_on_panic(v___x_1741_);
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v_opts_1518_);
return v___x_3351_;
}
v___jp_1522_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
return v___x_1524_;
}
v___jp_1525_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1526_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1527_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1526_);
lean_dec_ref(v___x_1527_);
goto v___jp_1522_;
}
v___jp_1528_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
return v___x_1530_;
}
v___jp_1531_:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
return v___x_1533_;
}
v___jp_1534_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1535_);
return v___x_1536_;
}
v___jp_1537_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1539_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1538_);
lean_dec_ref(v___x_1539_);
goto v___jp_1534_;
}
v___jp_1540_:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1541_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
return v___x_1542_;
}
v___jp_1543_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1545_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1544_);
lean_dec_ref(v___x_1545_);
goto v___jp_1540_;
}
v___jp_1546_:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1547_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
return v___x_1548_;
}
v___jp_1549_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1551_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1550_);
lean_dec_ref(v___x_1551_);
goto v___jp_1546_;
}
v___jp_1552_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
return v___x_1554_;
}
v___jp_1555_:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1557_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1556_);
lean_dec_ref(v___x_1557_);
goto v___jp_1552_;
}
v___jp_1558_:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1559_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
return v___x_1560_;
}
v___jp_1561_:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1562_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1562_);
return v___x_1563_;
}
v___jp_1564_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
return v___x_1566_;
}
v___jp_1567_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1569_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1568_);
lean_dec_ref(v___x_1569_);
goto v___jp_1564_;
}
v___jp_1570_:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1571_);
return v___x_1572_;
}
v___jp_1573_:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1575_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1574_);
lean_dec_ref(v___x_1575_);
goto v___jp_1570_;
}
v___jp_1576_:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1577_);
return v___x_1578_;
}
v___jp_1579_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
return v___x_1581_;
}
v___jp_1582_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1584_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1583_);
lean_dec_ref(v___x_1584_);
goto v___jp_1579_;
}
v___jp_1585_:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1586_);
return v___x_1587_;
}
v___jp_1588_:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
return v___x_1590_;
}
v___jp_1591_:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1592_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1592_);
return v___x_1593_;
}
v___jp_1594_:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1596_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1595_);
lean_dec_ref(v___x_1596_);
goto v___jp_1591_;
}
v___jp_1597_:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
return v___x_1599_;
}
v___jp_1600_:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1601_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1602_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1601_);
lean_dec_ref(v___x_1602_);
goto v___jp_1597_;
}
v___jp_1603_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1604_);
return v___x_1605_;
}
v___jp_1606_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1608_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1607_);
lean_dec_ref(v___x_1608_);
goto v___jp_1603_;
}
v___jp_1609_:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
return v___x_1611_;
}
v___jp_1612_:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1613_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1614_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1613_);
lean_dec_ref(v___x_1614_);
goto v___jp_1609_;
}
v___jp_1615_:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
return v___x_1617_;
}
v___jp_1618_:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1619_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1620_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1619_);
lean_dec_ref(v___x_1620_);
goto v___jp_1615_;
}
v___jp_1621_:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
return v___x_1623_;
}
v___jp_1624_:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1626_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1625_);
lean_dec_ref(v___x_1626_);
goto v___jp_1621_;
}
v___jp_1627_:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1628_);
return v___x_1629_;
}
v___jp_1630_:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1632_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1631_);
lean_dec_ref(v___x_1632_);
goto v___jp_1627_;
}
v___jp_1633_:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = lean_io_error_to_string(v___y_1634_);
v___x_1636_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1635_);
lean_dec_ref(v___x_1636_);
goto v___jp_1630_;
}
v___jp_1637_:
{
uint8_t v___x_1638_; lean_object* v___x_1639_; 
v___x_1638_ = 1;
v___x_1639_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1638_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1647_; 
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; 
v_unused_1648_ = lean_ctor_get(v___x_1639_, 0);
lean_dec(v_unused_1648_);
v___x_1641_ = v___x_1639_;
v_isShared_1642_ = v_isSharedCheck_1647_;
goto v_resetjp_1640_;
}
else
{
lean_dec(v___x_1639_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1647_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; lean_object* v___x_1645_; 
v___x_1643_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
if (v_isShared_1642_ == 0)
{
lean_ctor_set_tag(v___x_1641_, 1);
lean_ctor_set(v___x_1641_, 0, v___x_1643_);
v___x_1645_ = v___x_1641_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v_a_1649_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1639_, 1);
v___x_1650_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1651_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1650_);
lean_dec_ref(v___x_1651_);
v___y_1634_ = v_a_1649_;
goto v___jp_1633_;
}
}
v___jp_1652_:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1653_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0));
v___x_1654_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1653_);
lean_dec_ref(v___x_1654_);
goto v___jp_1637_;
}
v___jp_1655_:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
v___jp_1658_:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1659_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1660_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1659_);
lean_dec_ref(v___x_1660_);
goto v___jp_1655_;
}
v___jp_1661_:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
return v___x_1663_;
}
v___jp_1664_:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1665_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1666_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1665_);
lean_dec_ref(v___x_1666_);
goto v___jp_1661_;
}
v___jp_1667_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1668_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1668_);
return v___x_1669_;
}
v___jp_1670_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1671_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1672_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1671_);
lean_dec_ref(v___x_1672_);
goto v___jp_1667_;
}
v___jp_1673_:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1674_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
return v___x_1675_;
}
v___jp_1676_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1677_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1678_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1677_);
lean_dec_ref(v___x_1678_);
goto v___jp_1673_;
}
v___jp_1679_:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = lean_io_error_to_string(v___y_1680_);
v___x_1682_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1681_);
lean_dec_ref(v___x_1682_);
goto v___jp_1676_;
}
v___jp_1683_:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1684_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
return v___x_1685_;
}
v___jp_1686_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1688_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1687_);
lean_dec_ref(v___x_1688_);
goto v___jp_1683_;
}
v___jp_1689_:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
return v___x_1691_;
}
v___jp_1692_:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1693_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1694_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1693_);
lean_dec_ref(v___x_1694_);
goto v___jp_1689_;
}
v___jp_1695_:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
return v___x_1697_;
}
v___jp_1698_:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1699_);
return v___x_1700_;
}
v___jp_1701_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1703_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1702_);
lean_dec_ref(v___x_1703_);
goto v___jp_1698_;
}
v___jp_1704_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1706_, 0, v___x_1705_);
return v___x_1706_;
}
v___jp_1707_:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1709_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1708_);
lean_dec_ref(v___x_1709_);
goto v___jp_1704_;
}
v___jp_1710_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1711_);
return v___x_1712_;
}
v___jp_1713_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1714_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1715_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1714_);
lean_dec_ref(v___x_1715_);
goto v___jp_1710_;
}
v___jp_1716_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1717_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
return v___x_1718_;
}
v___jp_1719_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1721_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1720_);
lean_dec_ref(v___x_1721_);
goto v___jp_1716_;
}
v___jp_1722_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1723_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1723_);
return v___x_1724_;
}
v___jp_1725_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1727_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1726_);
lean_dec_ref(v___x_1727_);
goto v___jp_1722_;
}
v___jp_1728_:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
return v___x_1730_;
}
v___jp_1731_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1733_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1732_);
lean_dec_ref(v___x_1733_);
goto v___jp_1728_;
}
v___jp_1734_:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
return v___x_1736_;
}
v___jp_1737_:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1738_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1739_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0_spec__0(v___x_1738_);
lean_dec_ref(v___x_1739_);
goto v___jp_1734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object* v_opts_3352_, lean_object* v_opt_3353_, lean_object* v_optArg_x3f_3354_, lean_object* v_a_3355_){
_start:
{
uint32_t v_opt_boxed_3356_; lean_object* v_res_3357_; 
v_opt_boxed_3356_ = lean_unbox_uint32(v_opt_3353_);
lean_dec(v_opt_3353_);
v_res_3357_ = lean_shell_options_process(v_opts_3352_, v_opt_boxed_3356_, v_optArg_x3f_3354_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object* v_opts_3358_, lean_object* v_opt_3359_){
_start:
{
lean_object* v_name_3360_; lean_object* v_defValue_3361_; lean_object* v_map_3362_; lean_object* v___x_3363_; 
v_name_3360_ = lean_ctor_get(v_opt_3359_, 0);
v_defValue_3361_ = lean_ctor_get(v_opt_3359_, 1);
v_map_3362_ = lean_ctor_get(v_opts_3358_, 0);
v___x_3363_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3362_, v_name_3360_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_inc(v_defValue_3361_);
return v_defValue_3361_;
}
else
{
lean_object* v_val_3364_; 
v_val_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_val_3364_);
lean_dec_ref_known(v___x_3363_, 1);
if (lean_obj_tag(v_val_3364_) == 3)
{
lean_object* v_v_3365_; 
v_v_3365_ = lean_ctor_get(v_val_3364_, 0);
lean_inc(v_v_3365_);
lean_dec_ref_known(v_val_3364_, 1);
return v_v_3365_;
}
else
{
lean_dec(v_val_3364_);
lean_inc(v_defValue_3361_);
return v_defValue_3361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object* v_opts_3366_, lean_object* v_opt_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v_opts_3366_, v_opt_3367_);
lean_dec_ref(v_opt_3367_);
lean_dec_ref(v_opts_3366_);
return v_res_3368_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0));
v___x_3371_ = lean_string_utf8_byte_size(v___x_3370_);
return v___x_3371_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(lean_object* v_s_3372_){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; uint8_t v___x_3376_; 
v___x_3373_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0));
v___x_3374_ = lean_string_utf8_byte_size(v_s_3372_);
v___x_3375_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1);
v___x_3376_ = lean_nat_dec_le(v___x_3375_, v___x_3374_);
if (v___x_3376_ == 0)
{
lean_object* v___x_3377_; 
lean_dec_ref(v_s_3372_);
v___x_3377_ = lean_box(0);
return v___x_3377_;
}
else
{
lean_object* v___x_3378_; uint8_t v___x_3379_; 
v___x_3378_ = lean_unsigned_to_nat(0u);
v___x_3379_ = lean_string_memcmp(v_s_3372_, v___x_3373_, v___x_3378_, v___x_3378_, v___x_3375_);
if (v___x_3379_ == 0)
{
lean_object* v___x_3380_; 
lean_dec_ref(v_s_3372_);
v___x_3380_ = lean_box(0);
return v___x_3380_;
}
else
{
lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
lean_inc_ref(v_s_3372_);
v___x_3381_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3381_, 0, v_s_3372_);
lean_ctor_set(v___x_3381_, 1, v___x_3378_);
lean_ctor_set(v___x_3381_, 2, v___x_3374_);
v___x_3382_ = l_String_Slice_pos_x21(v___x_3381_, v___x_3375_);
lean_dec_ref_known(v___x_3381_, 3);
v___x_3383_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3383_, 0, v_s_3372_);
lean_ctor_set(v___x_3383_, 1, v___x_3382_);
lean_ctor_set(v___x_3383_, 2, v___x_3374_);
v___x_3384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3383_);
return v___x_3384_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object* v_s_3385_, lean_object* v_pat_3386_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(v_s_3385_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object* v_s_3388_, lean_object* v_pat_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v_s_3388_, v_pat_3389_);
lean_dec_ref(v_pat_3389_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object* v_x_3391_, lean_object* v_x_3392_, lean_object* v_v_3393_){
_start:
{
lean_inc_ref(v_v_3393_);
return v_v_3393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object* v_x_3394_, lean_object* v_x_3395_, lean_object* v_v_3396_){
_start:
{
lean_object* v_res_3397_; 
v_res_3397_ = l___private_Lean_Shell_0__Lean_shellMain___lam__0(v_x_3394_, v_x_3395_, v_v_3396_);
lean_dec_ref(v_v_3396_);
lean_dec_ref(v_x_3395_);
lean_dec(v_x_3394_);
return v_res_3397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object* v___x_3401_, lean_object* v___x_3402_, lean_object* v_mainModuleName_3403_, lean_object* v_a_3404_, uint8_t v___x_3405_, lean_object* v___x_3406_, lean_object* v_fileName_3407_, lean_object* v___x_3408_, lean_object* v___x_3409_, lean_object* v___x_3410_, lean_object* v___x_3411_, lean_object* v___x_3412_, lean_object* v___x_3413_, lean_object* v___x_3414_, lean_object* v___x_3415_, uint8_t v_run_3416_){
_start:
{
lean_object* v_a_3419_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v_env_3427_; lean_object* v___x_3428_; uint8_t v___x_3429_; lean_object* v_fileName_3431_; lean_object* v_fileMap_3432_; lean_object* v_currRecDepth_3433_; lean_object* v_ref_3434_; lean_object* v_currNamespace_3435_; lean_object* v_openDecls_3436_; lean_object* v_initHeartbeats_3437_; lean_object* v_maxHeartbeats_3438_; lean_object* v_quotContext_3439_; lean_object* v_currMacroScope_3440_; lean_object* v_cancelTk_x3f_3441_; uint8_t v_suppressElabErrors_3442_; lean_object* v_inheritedTraceOptions_3443_; lean_object* v___y_3444_; uint8_t v___y_3476_; uint8_t v___x_3496_; 
v___x_3422_ = lean_io_get_num_heartbeats();
v___x_3423_ = lean_st_mk_ref(v___x_3401_);
v___x_3424_ = l_Lean_inheritedTraceOptions;
v___x_3425_ = lean_st_ref_get(v___x_3424_);
v___x_3426_ = lean_st_ref_get(v___x_3423_);
v_env_3427_ = lean_ctor_get(v___x_3426_, 0);
lean_inc_ref(v_env_3427_);
lean_dec(v___x_3426_);
v___x_3428_ = l_Lean_diagnostics;
v___x_3429_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(v___x_3402_, v___x_3428_);
v___x_3496_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3427_);
lean_dec_ref(v_env_3427_);
if (v___x_3496_ == 0)
{
if (v___x_3429_ == 0)
{
lean_dec_ref(v___x_3406_);
lean_inc(v___x_3423_);
lean_inc(v___x_3411_);
v_fileName_3431_ = v_fileName_3407_;
v_fileMap_3432_ = v___x_3408_;
v_currRecDepth_3433_ = v___x_3409_;
v_ref_3434_ = v___x_3410_;
v_currNamespace_3435_ = v___x_3411_;
v_openDecls_3436_ = v___x_3412_;
v_initHeartbeats_3437_ = v___x_3422_;
v_maxHeartbeats_3438_ = v___x_3413_;
v_quotContext_3439_ = v___x_3411_;
v_currMacroScope_3440_ = v___x_3414_;
v_cancelTk_x3f_3441_ = v___x_3415_;
v_suppressElabErrors_3442_ = v_run_3416_;
v_inheritedTraceOptions_3443_ = v___x_3425_;
v___y_3444_ = v___x_3423_;
goto v___jp_3430_;
}
else
{
v___y_3476_ = v___x_3496_;
goto v___jp_3475_;
}
}
else
{
v___y_3476_ = v___x_3429_;
goto v___jp_3475_;
}
v___jp_3418_:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = lean_mk_io_user_error(v_a_3419_);
v___x_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3420_);
return v___x_3421_;
}
v___jp_3430_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3445_ = l_Lean_maxRecDepth;
v___x_3446_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3402_, v___x_3445_);
v___x_3447_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3447_, 0, v_fileName_3431_);
lean_ctor_set(v___x_3447_, 1, v_fileMap_3432_);
lean_ctor_set(v___x_3447_, 2, v___x_3402_);
lean_ctor_set(v___x_3447_, 3, v_currRecDepth_3433_);
lean_ctor_set(v___x_3447_, 4, v___x_3446_);
lean_ctor_set(v___x_3447_, 5, v_ref_3434_);
lean_ctor_set(v___x_3447_, 6, v_currNamespace_3435_);
lean_ctor_set(v___x_3447_, 7, v_openDecls_3436_);
lean_ctor_set(v___x_3447_, 8, v_initHeartbeats_3437_);
lean_ctor_set(v___x_3447_, 9, v_maxHeartbeats_3438_);
lean_ctor_set(v___x_3447_, 10, v_quotContext_3439_);
lean_ctor_set(v___x_3447_, 11, v_currMacroScope_3440_);
lean_ctor_set(v___x_3447_, 12, v_cancelTk_x3f_3441_);
lean_ctor_set(v___x_3447_, 13, v_inheritedTraceOptions_3443_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*14, v___x_3429_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*14 + 1, v_suppressElabErrors_3442_);
v___x_3448_ = l_Lean_Compiler_LCNF_emitC(v_mainModuleName_3403_, v___x_3447_, v___y_3444_);
lean_dec(v___y_3444_);
lean_dec_ref_known(v___x_3447_, 14);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
lean_inc(v_a_3449_);
lean_dec_ref_known(v___x_3448_, 1);
v___x_3450_ = lean_st_ref_get(v___x_3423_);
lean_dec(v___x_3423_);
lean_dec(v___x_3450_);
v___x_3451_ = lean_string_to_utf8(v_a_3449_);
lean_dec(v_a_3449_);
v___x_3452_ = lean_io_prim_handle_write(v_a_3404_, v___x_3451_);
lean_dec_ref(v___x_3451_);
return v___x_3452_;
}
else
{
lean_object* v_a_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3474_; 
lean_dec(v___x_3423_);
v_a_3453_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3455_ = v___x_3448_;
v_isShared_3456_ = v_isSharedCheck_3474_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_a_3453_);
lean_dec(v___x_3448_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3474_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
if (lean_obj_tag(v_a_3453_) == 0)
{
lean_object* v_msg_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3461_; 
v_msg_3457_ = lean_ctor_get(v_a_3453_, 1);
lean_inc_ref(v_msg_3457_);
lean_dec_ref_known(v_a_3453_, 2);
v___x_3458_ = l_Lean_MessageData_toString(v_msg_3457_);
v___x_3459_ = lean_mk_io_user_error(v___x_3458_);
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 0, v___x_3459_);
v___x_3461_ = v___x_3455_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v___x_3459_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
else
{
lean_object* v_id_3463_; lean_object* v___x_3464_; 
lean_del_object(v___x_3455_);
v_id_3463_ = lean_ctor_get(v_a_3453_, 0);
lean_inc(v_id_3463_);
lean_dec_ref_known(v_a_3453_, 2);
v___x_3464_ = l_Lean_InternalExceptionId_getName(v_id_3463_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
lean_dec(v_id_3463_);
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v___x_3466_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0));
v___x_3467_ = l_Lean_Name_toString(v_a_3465_, v___x_3405_);
v___x_3468_ = lean_string_append(v___x_3466_, v___x_3467_);
lean_dec_ref(v___x_3467_);
v_a_3419_ = v___x_3468_;
goto v___jp_3418_;
}
else
{
lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; 
lean_dec_ref_known(v___x_3464_, 1);
v___x_3469_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1));
v___x_3470_ = l_Nat_reprFast(v_id_3463_);
v___x_3471_ = lean_string_append(v___x_3469_, v___x_3470_);
lean_dec_ref(v___x_3470_);
v___x_3472_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2));
v___x_3473_ = lean_string_append(v___x_3471_, v___x_3472_);
v_a_3419_ = v___x_3473_;
goto v___jp_3418_;
}
}
}
}
}
v___jp_3475_:
{
if (v___y_3476_ == 0)
{
lean_object* v___x_3477_; lean_object* v_env_3478_; lean_object* v_nextMacroScope_3479_; lean_object* v_ngen_3480_; lean_object* v_auxDeclNGen_3481_; lean_object* v_traceState_3482_; lean_object* v_messages_3483_; lean_object* v_infoState_3484_; lean_object* v_snapshotTasks_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3494_; 
v___x_3477_ = lean_st_ref_take(v___x_3423_);
v_env_3478_ = lean_ctor_get(v___x_3477_, 0);
v_nextMacroScope_3479_ = lean_ctor_get(v___x_3477_, 1);
v_ngen_3480_ = lean_ctor_get(v___x_3477_, 2);
v_auxDeclNGen_3481_ = lean_ctor_get(v___x_3477_, 3);
v_traceState_3482_ = lean_ctor_get(v___x_3477_, 4);
v_messages_3483_ = lean_ctor_get(v___x_3477_, 6);
v_infoState_3484_ = lean_ctor_get(v___x_3477_, 7);
v_snapshotTasks_3485_ = lean_ctor_get(v___x_3477_, 8);
v_isSharedCheck_3494_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3494_ == 0)
{
lean_object* v_unused_3495_; 
v_unused_3495_ = lean_ctor_get(v___x_3477_, 5);
lean_dec(v_unused_3495_);
v___x_3487_ = v___x_3477_;
v_isShared_3488_ = v_isSharedCheck_3494_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_snapshotTasks_3485_);
lean_inc(v_infoState_3484_);
lean_inc(v_messages_3483_);
lean_inc(v_traceState_3482_);
lean_inc(v_auxDeclNGen_3481_);
lean_inc(v_ngen_3480_);
lean_inc(v_nextMacroScope_3479_);
lean_inc(v_env_3478_);
lean_dec(v___x_3477_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3494_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; lean_object* v___x_3491_; 
v___x_3489_ = l_Lean_Kernel_enableDiag(v_env_3478_, v___x_3429_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 5, v___x_3406_);
lean_ctor_set(v___x_3487_, 0, v___x_3489_);
v___x_3491_ = v___x_3487_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v___x_3489_);
lean_ctor_set(v_reuseFailAlloc_3493_, 1, v_nextMacroScope_3479_);
lean_ctor_set(v_reuseFailAlloc_3493_, 2, v_ngen_3480_);
lean_ctor_set(v_reuseFailAlloc_3493_, 3, v_auxDeclNGen_3481_);
lean_ctor_set(v_reuseFailAlloc_3493_, 4, v_traceState_3482_);
lean_ctor_set(v_reuseFailAlloc_3493_, 5, v___x_3406_);
lean_ctor_set(v_reuseFailAlloc_3493_, 6, v_messages_3483_);
lean_ctor_set(v_reuseFailAlloc_3493_, 7, v_infoState_3484_);
lean_ctor_set(v_reuseFailAlloc_3493_, 8, v_snapshotTasks_3485_);
v___x_3491_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
lean_object* v___x_3492_; 
v___x_3492_ = lean_st_ref_set(v___x_3423_, v___x_3491_);
lean_inc(v___x_3423_);
lean_inc(v___x_3411_);
v_fileName_3431_ = v_fileName_3407_;
v_fileMap_3432_ = v___x_3408_;
v_currRecDepth_3433_ = v___x_3409_;
v_ref_3434_ = v___x_3410_;
v_currNamespace_3435_ = v___x_3411_;
v_openDecls_3436_ = v___x_3412_;
v_initHeartbeats_3437_ = v___x_3422_;
v_maxHeartbeats_3438_ = v___x_3413_;
v_quotContext_3439_ = v___x_3411_;
v_currMacroScope_3440_ = v___x_3414_;
v_cancelTk_x3f_3441_ = v___x_3415_;
v_suppressElabErrors_3442_ = v_run_3416_;
v_inheritedTraceOptions_3443_ = v___x_3425_;
v___y_3444_ = v___x_3423_;
goto v___jp_3430_;
}
}
}
else
{
lean_dec_ref(v___x_3406_);
lean_inc(v___x_3423_);
lean_inc(v___x_3411_);
v_fileName_3431_ = v_fileName_3407_;
v_fileMap_3432_ = v___x_3408_;
v_currRecDepth_3433_ = v___x_3409_;
v_ref_3434_ = v___x_3410_;
v_currNamespace_3435_ = v___x_3411_;
v_openDecls_3436_ = v___x_3412_;
v_initHeartbeats_3437_ = v___x_3422_;
v_maxHeartbeats_3438_ = v___x_3413_;
v_quotContext_3439_ = v___x_3411_;
v_currMacroScope_3440_ = v___x_3414_;
v_cancelTk_x3f_3441_ = v___x_3415_;
v_suppressElabErrors_3442_ = v_run_3416_;
v_inheritedTraceOptions_3443_ = v___x_3425_;
v___y_3444_ = v___x_3423_;
goto v___jp_3430_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object** _args){
lean_object* v___x_3497_ = _args[0];
lean_object* v___x_3498_ = _args[1];
lean_object* v_mainModuleName_3499_ = _args[2];
lean_object* v_a_3500_ = _args[3];
lean_object* v___x_3501_ = _args[4];
lean_object* v___x_3502_ = _args[5];
lean_object* v_fileName_3503_ = _args[6];
lean_object* v___x_3504_ = _args[7];
lean_object* v___x_3505_ = _args[8];
lean_object* v___x_3506_ = _args[9];
lean_object* v___x_3507_ = _args[10];
lean_object* v___x_3508_ = _args[11];
lean_object* v___x_3509_ = _args[12];
lean_object* v___x_3510_ = _args[13];
lean_object* v___x_3511_ = _args[14];
lean_object* v_run_3512_ = _args[15];
lean_object* v___y_3513_ = _args[16];
_start:
{
uint8_t v___x_22477__boxed_3514_; uint8_t v_run_boxed_3515_; lean_object* v_res_3516_; 
v___x_22477__boxed_3514_ = lean_unbox(v___x_3501_);
v_run_boxed_3515_ = lean_unbox(v_run_3512_);
v_res_3516_ = l___private_Lean_Shell_0__Lean_shellMain___lam__1(v___x_3497_, v___x_3498_, v_mainModuleName_3499_, v_a_3500_, v___x_22477__boxed_3514_, v___x_3502_, v_fileName_3503_, v___x_3504_, v___x_3505_, v___x_3506_, v___x_3507_, v___x_3508_, v___x_3509_, v___x_3510_, v___x_3511_, v_run_boxed_3515_);
lean_dec(v_a_3500_);
return v_res_3516_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object* v_val_3517_, lean_object* v_a_3518_, lean_object* v_b_3519_){
_start:
{
lean_object* v_str_3520_; lean_object* v_startInclusive_3521_; lean_object* v_endExclusive_3522_; lean_object* v___x_3523_; uint8_t v___x_3524_; 
v_str_3520_ = lean_ctor_get(v_val_3517_, 0);
v_startInclusive_3521_ = lean_ctor_get(v_val_3517_, 1);
v_endExclusive_3522_ = lean_ctor_get(v_val_3517_, 2);
v___x_3523_ = lean_nat_sub(v_endExclusive_3522_, v_startInclusive_3521_);
v___x_3524_ = lean_nat_dec_eq(v_a_3518_, v___x_3523_);
lean_dec(v___x_3523_);
if (v___x_3524_ == 0)
{
lean_object* v___x_3525_; uint32_t v___x_3526_; uint32_t v___x_3527_; uint8_t v___x_3528_; 
v___x_3525_ = lean_nat_add(v_startInclusive_3521_, v_a_3518_);
v___x_3526_ = lean_string_utf8_get_fast(v_str_3520_, v___x_3525_);
v___x_3527_ = 10;
v___x_3528_ = lean_uint32_dec_eq(v___x_3526_, v___x_3527_);
if (v___x_3528_ == 0)
{
lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
lean_dec(v_a_3518_);
v___x_3529_ = lean_box(0);
v___x_3530_ = lean_string_utf8_next_fast(v_str_3520_, v___x_3525_);
lean_dec(v___x_3525_);
v___x_3531_ = lean_nat_sub(v___x_3530_, v_startInclusive_3521_);
v_a_3518_ = v___x_3531_;
v_b_3519_ = v___x_3529_;
goto _start;
}
else
{
lean_object* v___x_3533_; 
lean_dec(v___x_3525_);
v___x_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3533_, 0, v_a_3518_);
return v___x_3533_;
}
}
else
{
lean_dec(v_a_3518_);
lean_inc(v_b_3519_);
return v_b_3519_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___boxed(lean_object* v_val_3534_, lean_object* v_a_3535_, lean_object* v_b_3536_){
_start:
{
lean_object* v_res_3537_; 
v_res_3537_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3534_, v_a_3535_, v_b_3536_);
lean_dec(v_b_3536_);
lean_dec_ref(v_val_3534_);
return v_res_3537_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object* v_s_3538_){
_start:
{
uint32_t v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3540_ = 10;
v___x_3541_ = lean_string_push(v_s_3538_, v___x_3540_);
v___x_3542_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_wasmCompile_spec__1_spec__1(v___x_3541_);
return v___x_3542_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object* v_s_3543_, lean_object* v_a_3544_){
_start:
{
lean_object* v_res_3545_; 
v_res_3545_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_s_3543_);
return v_res_3545_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shellMain___closed__1(void){
_start:
{
lean_object* v___x_3547_; uint8_t v___x_3548_; 
v___x_3547_ = lean_box(0);
v___x_3548_ = lean_internal_has_address_sanitizer(v___x_3547_);
return v___x_3548_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__2(void){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = lean_box(0);
v___x_3550_ = lean_internal_get_option_overrides(v___x_3549_);
return v___x_3550_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__5(void){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = l_Lean_Options_empty;
v___x_3554_ = l_Lean_Core_getMaxHeartbeats(v___x_3553_);
return v___x_3554_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__6(void){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3555_ = lean_unsigned_to_nat(1u);
v___x_3556_ = l_Lean_firstFrontendMacroScope;
v___x_3557_ = lean_nat_add(v___x_3556_, v___x_3555_);
return v___x_3557_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__11(void){
_start:
{
lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3568_ = lean_unsigned_to_nat(32u);
v___x_3569_ = lean_mk_empty_array_with_capacity(v___x_3568_);
v___x_3570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3569_);
return v___x_3570_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__12(void){
_start:
{
size_t v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3571_ = ((size_t)5ULL);
v___x_3572_ = lean_unsigned_to_nat(0u);
v___x_3573_ = lean_unsigned_to_nat(32u);
v___x_3574_ = lean_mk_empty_array_with_capacity(v___x_3573_);
v___x_3575_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__11, &l___private_Lean_Shell_0__Lean_shellMain___closed__11_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__11);
v___x_3576_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3576_, 0, v___x_3575_);
lean_ctor_set(v___x_3576_, 1, v___x_3574_);
lean_ctor_set(v___x_3576_, 2, v___x_3572_);
lean_ctor_set(v___x_3576_, 3, v___x_3572_);
lean_ctor_set_usize(v___x_3576_, 4, v___x_3571_);
return v___x_3576_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__13(void){
_start:
{
lean_object* v___x_3577_; uint64_t v___x_3578_; lean_object* v___x_3579_; 
v___x_3577_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__12, &l___private_Lean_Shell_0__Lean_shellMain___closed__12_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__12);
v___x_3578_ = 0ULL;
v___x_3579_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3579_, 0, v___x_3577_);
lean_ctor_set_uint64(v___x_3579_, sizeof(void*)*1, v___x_3578_);
return v___x_3579_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__14(void){
_start:
{
lean_object* v___x_3580_; 
v___x_3580_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_3580_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__15(void){
_start:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3581_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__14, &l___private_Lean_Shell_0__Lean_shellMain___closed__14_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__14);
v___x_3582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3582_, 0, v___x_3581_);
return v___x_3582_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__16(void){
_start:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3583_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__15, &l___private_Lean_Shell_0__Lean_shellMain___closed__15_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__15);
v___x_3584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3584_, 0, v___x_3583_);
lean_ctor_set(v___x_3584_, 1, v___x_3583_);
return v___x_3584_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__17(void){
_start:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3585_ = l_Lean_NameSet_empty;
v___x_3586_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__12, &l___private_Lean_Shell_0__Lean_shellMain___closed__12_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__12);
v___x_3587_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3586_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
lean_ctor_set(v___x_3587_, 2, v___x_3585_);
return v___x_3587_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__18(void){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; uint8_t v___x_3590_; lean_object* v___x_3591_; 
v___x_3588_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__12, &l___private_Lean_Shell_0__Lean_shellMain___closed__12_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__12);
v___x_3589_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__15, &l___private_Lean_Shell_0__Lean_shellMain___closed__15_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__15);
v___x_3590_ = 1;
v___x_3591_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3591_, 0, v___x_3589_);
lean_ctor_set(v___x_3591_, 1, v___x_3589_);
lean_ctor_set(v___x_3591_, 2, v___x_3588_);
lean_ctor_set_uint8(v___x_3591_, sizeof(void*)*3, v___x_3590_);
return v___x_3591_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__23(void){
_start:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3597_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__22));
v___x_3598_ = lean_string_utf8_byte_size(v___x_3597_);
return v___x_3598_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__24(void){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3599_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__23, &l___private_Lean_Shell_0__Lean_shellMain___closed__23_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__23);
v___x_3600_ = lean_unsigned_to_nat(0u);
v___x_3601_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__22));
v___x_3602_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3601_);
lean_ctor_set(v___x_3602_, 1, v___x_3600_);
lean_ctor_set(v___x_3602_, 2, v___x_3599_);
return v___x_3602_;
}
}
LEAN_EXPORT lean_object* lean_shell_main(lean_object* v_args_3606_, lean_object* v_opts_3607_){
_start:
{
lean_object* v_fns_3616_; uint8_t v_printPrefix_3635_; 
v_printPrefix_3635_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 9);
if (v_printPrefix_3635_ == 0)
{
uint8_t v_printLibDir_3636_; 
v_printLibDir_3636_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 10);
if (v_printLibDir_3636_ == 0)
{
lean_object* v_leanOpts_3637_; lean_object* v_forwardedArgs_3638_; uint8_t v_component_3639_; uint8_t v_useStdin_3640_; uint8_t v_onlyDeps_3641_; uint8_t v_onlySrcDeps_3642_; uint8_t v_depsJson_3643_; uint32_t v_trustLevel_3644_; lean_object* v_rootDir_x3f_3645_; lean_object* v_setupFileName_x3f_3646_; lean_object* v_oleanFileName_x3f_3647_; lean_object* v_ileanFileName_x3f_3648_; lean_object* v_cFileName_x3f_3649_; lean_object* v_bcFileName_x3f_3650_; uint8_t v_jsonOutput_3651_; lean_object* v_errorOnKinds_3652_; uint8_t v_printStats_3653_; uint8_t v_run_3654_; lean_object* v_incrSaveFileName_x3f_3655_; lean_object* v_incrLoadFileName_x3f_3656_; lean_object* v_incrHeaderSaveFileName_x3f_3657_; lean_object* v___f_3658_; lean_object* v___y_3660_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___y_3677_; lean_object* v___y_3678_; lean_object* v___y_3679_; uint8_t v___x_3702_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v___y_3708_; lean_object* v_mainModuleName_3709_; lean_object* v___y_3790_; lean_object* v___y_3791_; lean_object* v___y_3792_; lean_object* v___y_3793_; lean_object* v___y_3794_; lean_object* v___y_3795_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v_contents_3810_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v_str_3839_; lean_object* v_startInclusive_3840_; lean_object* v_endExclusive_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3940_; lean_object* v___y_3941_; lean_object* v_fileName_3942_; lean_object* v___y_3947_; lean_object* v___y_3948_; lean_object* v___y_3980_; lean_object* v___y_3981_; uint8_t v___y_4012_; lean_object* v_fst_4013_; lean_object* v_snd_4014_; uint8_t v___y_4016_; lean_object* v___x_4046_; lean_object* v_maxMemory_4047_; lean_object* v___x_4048_; uint8_t v___x_4049_; 
v_leanOpts_3637_ = lean_ctor_get(v_opts_3607_, 0);
lean_inc_ref(v_leanOpts_3637_);
v_forwardedArgs_3638_ = lean_ctor_get(v_opts_3607_, 1);
lean_inc_ref(v_forwardedArgs_3638_);
v_component_3639_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 8);
v_useStdin_3640_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 11);
v_onlyDeps_3641_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 12);
v_onlySrcDeps_3642_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 13);
v_depsJson_3643_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 14);
v_trustLevel_3644_ = lean_ctor_get_uint32(v_opts_3607_, sizeof(void*)*13);
v_rootDir_x3f_3645_ = lean_ctor_get(v_opts_3607_, 3);
lean_inc(v_rootDir_x3f_3645_);
v_setupFileName_x3f_3646_ = lean_ctor_get(v_opts_3607_, 4);
lean_inc(v_setupFileName_x3f_3646_);
v_oleanFileName_x3f_3647_ = lean_ctor_get(v_opts_3607_, 5);
lean_inc(v_oleanFileName_x3f_3647_);
v_ileanFileName_x3f_3648_ = lean_ctor_get(v_opts_3607_, 6);
lean_inc(v_ileanFileName_x3f_3648_);
v_cFileName_x3f_3649_ = lean_ctor_get(v_opts_3607_, 7);
lean_inc(v_cFileName_x3f_3649_);
v_bcFileName_x3f_3650_ = lean_ctor_get(v_opts_3607_, 8);
lean_inc(v_bcFileName_x3f_3650_);
v_jsonOutput_3651_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 15);
v_errorOnKinds_3652_ = lean_ctor_get(v_opts_3607_, 9);
lean_inc_ref(v_errorOnKinds_3652_);
v_printStats_3653_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 16);
v_run_3654_ = lean_ctor_get_uint8(v_opts_3607_, sizeof(void*)*13 + 17);
v_incrSaveFileName_x3f_3655_ = lean_ctor_get(v_opts_3607_, 10);
lean_inc(v_incrSaveFileName_x3f_3655_);
v_incrLoadFileName_x3f_3656_ = lean_ctor_get(v_opts_3607_, 11);
lean_inc(v_incrLoadFileName_x3f_3656_);
v_incrHeaderSaveFileName_x3f_3657_ = lean_ctor_get(v_opts_3607_, 12);
lean_inc(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec_ref(v_opts_3607_);
v___f_3658_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__0));
v___x_3674_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__2, &l___private_Lean_Shell_0__Lean_shellMain___closed__2_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__2);
v___x_3675_ = l_Lean_Options_mergeBy(v___f_3658_, v_leanOpts_3637_, v___x_3674_);
v___x_3702_ = 1;
v___x_4046_ = l___private_Lean_Shell_0__Lean_maxMemory;
v_maxMemory_4047_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3675_, v___x_4046_);
v___x_4048_ = lean_unsigned_to_nat(0u);
v___x_4049_ = lean_nat_dec_eq(v_maxMemory_4047_, v___x_4048_);
if (v___x_4049_ == 0)
{
size_t v___x_4050_; size_t v___x_4051_; size_t v___x_4052_; size_t v___x_4053_; lean_object* v___x_4054_; 
v___x_4050_ = lean_usize_of_nat(v_maxMemory_4047_);
lean_dec(v_maxMemory_4047_);
v___x_4051_ = ((size_t)10ULL);
v___x_4052_ = lean_usize_shift_left(v___x_4050_, v___x_4051_);
v___x_4053_ = lean_usize_shift_left(v___x_4052_, v___x_4051_);
v___x_4054_ = lean_internal_set_max_memory(v___x_4053_);
goto v___jp_4037_;
}
else
{
lean_dec(v_maxMemory_4047_);
goto v___jp_4037_;
}
v___jp_3659_:
{
lean_object* v___x_3661_; uint8_t v___x_3662_; 
v___x_3661_ = lean_display_cumulative_profiling_times();
v___x_3662_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__1, &l___private_Lean_Shell_0__Lean_shellMain___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__1);
if (v___x_3662_ == 0)
{
if (lean_obj_tag(v___y_3660_) == 0)
{
if (v___x_3662_ == 0)
{
uint8_t v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = 1;
v___x_3664_ = lean_io_exit(v___x_3663_);
return v___x_3664_;
}
else
{
goto v___jp_3612_;
}
}
else
{
lean_dec_ref_known(v___y_3660_, 1);
goto v___jp_3612_;
}
}
else
{
if (lean_obj_tag(v___y_3660_) == 0)
{
goto v___jp_3609_;
}
else
{
lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3672_; 
v_isSharedCheck_3672_ = !lean_is_exclusive(v___y_3660_);
if (v_isSharedCheck_3672_ == 0)
{
lean_object* v_unused_3673_; 
v_unused_3673_ = lean_ctor_get(v___y_3660_, 0);
lean_dec(v_unused_3673_);
v___x_3666_ = v___y_3660_;
v_isShared_3667_ = v_isSharedCheck_3672_;
goto v_resetjp_3665_;
}
else
{
lean_dec(v___y_3660_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3672_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
if (v___x_3662_ == 0)
{
lean_del_object(v___x_3666_);
goto v___jp_3609_;
}
else
{
lean_object* v___x_3668_; lean_object* v___x_3670_; 
v___x_3668_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3667_ == 0)
{
lean_ctor_set_tag(v___x_3666_, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3668_);
v___x_3670_ = v___x_3666_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v___x_3668_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
}
}
v___jp_3676_:
{
if (lean_obj_tag(v_bcFileName_x3f_3650_) == 1)
{
lean_object* v_val_3680_; lean_object* v___x_3681_; 
v_val_3680_ = lean_ctor_get(v_bcFileName_x3f_3650_, 0);
lean_inc(v_val_3680_);
lean_dec_ref_known(v_bcFileName_x3f_3650_, 1);
v___x_3681_ = lean_init_llvm();
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
lean_dec_ref_known(v___x_3681_, 1);
v___x_3682_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__3));
v___x_3683_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_emitLLVM___boxed), 4, 3);
lean_closure_set(v___x_3683_, 0, v___y_3679_);
lean_closure_set(v___x_3683_, 1, v___y_3677_);
lean_closure_set(v___x_3683_, 2, v_val_3680_);
v___x_3684_ = lean_box(0);
v___x_3685_ = l_Lean_profileitIOUnsafe___redArg(v___x_3682_, v___x_3675_, v___x_3683_, v___x_3684_);
lean_dec_ref(v___x_3675_);
if (lean_obj_tag(v___x_3685_) == 0)
{
lean_dec_ref_known(v___x_3685_, 1);
v___y_3660_ = v___y_3678_;
goto v___jp_3659_;
}
else
{
lean_object* v_a_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3693_; 
lean_dec(v___y_3678_);
v_a_3686_ = lean_ctor_get(v___x_3685_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3685_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3688_ = v___x_3685_;
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_a_3686_);
lean_dec(v___x_3685_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3691_; 
if (v_isShared_3689_ == 0)
{
v___x_3691_ = v___x_3688_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_a_3686_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
else
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3701_; 
lean_dec(v_val_3680_);
lean_dec_ref(v___y_3679_);
lean_dec(v___y_3678_);
lean_dec(v___y_3677_);
lean_dec_ref(v___x_3675_);
v_a_3694_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3696_ = v___x_3681_;
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3681_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3699_; 
if (v_isShared_3697_ == 0)
{
v___x_3699_ = v___x_3696_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3694_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
else
{
lean_dec_ref(v___y_3679_);
lean_dec(v___y_3677_);
lean_dec_ref(v___x_3675_);
lean_dec(v_bcFileName_x3f_3650_);
v___y_3660_ = v___y_3678_;
goto v___jp_3659_;
}
}
v___jp_3703_:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3710_ = lean_unsigned_to_nat(0u);
v___x_3711_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_getOrCreateWasmEnvFor___closed__0));
lean_inc(v_mainModuleName_3709_);
lean_inc_ref(v___x_3675_);
v___x_3712_ = l_Lean_Elab_runFrontend(v___y_3705_, v___x_3675_, v___y_3708_, v_mainModuleName_3709_, v_trustLevel_3644_, v_oleanFileName_x3f_3647_, v_ileanFileName_x3f_3648_, v_jsonOutput_3651_, v_errorOnKinds_3652_, v___x_3711_, v_printStats_3653_, v___y_3707_, v_incrSaveFileName_x3f_3655_, v_incrLoadFileName_x3f_3656_, v_incrHeaderSaveFileName_x3f_3657_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_ileanFileName_x3f_3648_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3780_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3780_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3780_ == 0)
{
v___x_3715_ = v___x_3712_;
v_isShared_3716_ = v_isSharedCheck_3780_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3712_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3780_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
if (lean_obj_tag(v_a_3713_) == 1)
{
if (v_run_3654_ == 0)
{
lean_del_object(v___x_3715_);
lean_dec(v___y_3706_);
if (lean_obj_tag(v_cFileName_x3f_3649_) == 1)
{
lean_object* v_val_3717_; lean_object* v_val_3718_; uint8_t v___x_3719_; lean_object* v___x_3720_; 
v_val_3717_ = lean_ctor_get(v_a_3713_, 0);
lean_inc(v_val_3717_);
v_val_3718_ = lean_ctor_get(v_cFileName_x3f_3649_, 0);
lean_inc(v_val_3718_);
lean_dec_ref_known(v_cFileName_x3f_3649_, 1);
v___x_3719_ = 1;
v___x_3720_ = lean_io_prim_handle_mk(v_val_3718_, v___x_3719_);
if (lean_obj_tag(v___x_3720_) == 0)
{
lean_object* v_a_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___f_3741_; lean_object* v___x_3742_; 
lean_dec(v_val_3718_);
v_a_3721_ = lean_ctor_get(v___x_3720_, 0);
lean_inc(v_a_3721_);
lean_dec_ref_known(v___x_3720_, 1);
v___x_3722_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__4));
v___x_3723_ = l_Lean_instInhabitedFileMap_default;
v___x_3724_ = l_Lean_Options_empty;
v___x_3725_ = lean_box(0);
v___x_3726_ = lean_box(0);
v___x_3727_ = lean_box(0);
v___x_3728_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__5, &l___private_Lean_Shell_0__Lean_shellMain___closed__5_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__5);
v___x_3729_ = l_Lean_firstFrontendMacroScope;
v___x_3730_ = lean_box(0);
v___x_3731_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__6, &l___private_Lean_Shell_0__Lean_shellMain___closed__6_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__6);
v___x_3732_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__9));
v___x_3733_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__10));
v___x_3734_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__13, &l___private_Lean_Shell_0__Lean_shellMain___closed__13_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__13);
v___x_3735_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__16, &l___private_Lean_Shell_0__Lean_shellMain___closed__16_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__16);
v___x_3736_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__17, &l___private_Lean_Shell_0__Lean_shellMain___closed__17_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__17);
v___x_3737_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__18, &l___private_Lean_Shell_0__Lean_shellMain___closed__18_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__18);
lean_inc(v_val_3717_);
v___x_3738_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3738_, 0, v_val_3717_);
lean_ctor_set(v___x_3738_, 1, v___x_3731_);
lean_ctor_set(v___x_3738_, 2, v___x_3732_);
lean_ctor_set(v___x_3738_, 3, v___x_3733_);
lean_ctor_set(v___x_3738_, 4, v___x_3734_);
lean_ctor_set(v___x_3738_, 5, v___x_3735_);
lean_ctor_set(v___x_3738_, 6, v___x_3736_);
lean_ctor_set(v___x_3738_, 7, v___x_3737_);
lean_ctor_set(v___x_3738_, 8, v___x_3711_);
v___x_3739_ = lean_box(v___x_3702_);
v___x_3740_ = lean_box(v_run_3654_);
lean_inc(v_mainModuleName_3709_);
v___f_3741_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed), 17, 16);
lean_closure_set(v___f_3741_, 0, v___x_3738_);
lean_closure_set(v___f_3741_, 1, v___x_3724_);
lean_closure_set(v___f_3741_, 2, v_mainModuleName_3709_);
lean_closure_set(v___f_3741_, 3, v_a_3721_);
lean_closure_set(v___f_3741_, 4, v___x_3739_);
lean_closure_set(v___f_3741_, 5, v___x_3735_);
lean_closure_set(v___f_3741_, 6, v___y_3704_);
lean_closure_set(v___f_3741_, 7, v___x_3723_);
lean_closure_set(v___f_3741_, 8, v___x_3710_);
lean_closure_set(v___f_3741_, 9, v___x_3725_);
lean_closure_set(v___f_3741_, 10, v___x_3726_);
lean_closure_set(v___f_3741_, 11, v___x_3727_);
lean_closure_set(v___f_3741_, 12, v___x_3728_);
lean_closure_set(v___f_3741_, 13, v___x_3729_);
lean_closure_set(v___f_3741_, 14, v___x_3730_);
lean_closure_set(v___f_3741_, 15, v___x_3740_);
v___x_3742_ = l_Lean_profileitIOUnsafe___redArg(v___x_3722_, v___x_3675_, v___f_3741_, v___x_3726_);
if (lean_obj_tag(v___x_3742_) == 0)
{
lean_dec_ref_known(v___x_3742_, 1);
v___y_3677_ = v_mainModuleName_3709_;
v___y_3678_ = v_a_3713_;
v___y_3679_ = v_val_3717_;
goto v___jp_3676_;
}
else
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
lean_dec(v_val_3717_);
lean_dec_ref_known(v_a_3713_, 1);
lean_dec(v_mainModuleName_3709_);
lean_dec_ref(v___x_3675_);
lean_dec(v_bcFileName_x3f_3650_);
v_a_3743_ = lean_ctor_get(v___x_3742_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3742_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3742_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3742_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
else
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; 
lean_dec_ref_known(v___x_3720_, 1);
lean_dec(v_val_3717_);
lean_dec_ref_known(v_a_3713_, 1);
lean_dec(v_mainModuleName_3709_);
lean_dec_ref(v___y_3704_);
lean_dec_ref(v___x_3675_);
lean_dec(v_bcFileName_x3f_3650_);
v___x_3751_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__19));
v___x_3752_ = lean_string_append(v___x_3751_, v_val_3718_);
lean_dec(v_val_3718_);
v___x_3753_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_3754_ = lean_string_append(v___x_3752_, v___x_3753_);
v___x_3755_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0(v___x_3754_);
if (lean_obj_tag(v___x_3755_) == 0)
{
lean_object* v___x_3757_; uint8_t v_isShared_3758_; uint8_t v_isSharedCheck_3763_; 
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3755_);
if (v_isSharedCheck_3763_ == 0)
{
lean_object* v_unused_3764_; 
v_unused_3764_ = lean_ctor_get(v___x_3755_, 0);
lean_dec(v_unused_3764_);
v___x_3757_ = v___x_3755_;
v_isShared_3758_ = v_isSharedCheck_3763_;
goto v_resetjp_3756_;
}
else
{
lean_dec(v___x_3755_);
v___x_3757_ = lean_box(0);
v_isShared_3758_ = v_isSharedCheck_3763_;
goto v_resetjp_3756_;
}
v_resetjp_3756_:
{
lean_object* v___x_3759_; lean_object* v___x_3761_; 
v___x_3759_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
if (v_isShared_3758_ == 0)
{
lean_ctor_set(v___x_3757_, 0, v___x_3759_);
v___x_3761_ = v___x_3757_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v___x_3759_);
v___x_3761_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
return v___x_3761_;
}
}
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
v_a_3765_ = lean_ctor_get(v___x_3755_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3755_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3755_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3755_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_a_3765_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
}
}
}
else
{
lean_object* v_val_3773_; 
lean_dec_ref(v___y_3704_);
lean_dec(v_cFileName_x3f_3649_);
v_val_3773_ = lean_ctor_get(v_a_3713_, 0);
lean_inc(v_val_3773_);
v___y_3677_ = v_mainModuleName_3709_;
v___y_3678_ = v_a_3713_;
v___y_3679_ = v_val_3773_;
goto v___jp_3676_;
}
}
else
{
lean_object* v_val_3774_; uint32_t v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3778_; 
lean_dec(v_mainModuleName_3709_);
lean_dec_ref(v___y_3704_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
v_val_3774_ = lean_ctor_get(v_a_3713_, 0);
lean_inc(v_val_3774_);
lean_dec_ref_known(v_a_3713_, 1);
v___x_3775_ = lean_eval_main(v_val_3774_, v___x_3675_, v___y_3706_);
lean_dec(v___y_3706_);
lean_dec_ref(v___x_3675_);
lean_dec(v_val_3774_);
v___x_3776_ = lean_box_uint32(v___x_3775_);
if (v_isShared_3716_ == 0)
{
lean_ctor_set(v___x_3715_, 0, v___x_3776_);
v___x_3778_ = v___x_3715_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v___x_3776_);
v___x_3778_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
return v___x_3778_;
}
}
}
else
{
lean_del_object(v___x_3715_);
lean_dec(v_mainModuleName_3709_);
lean_dec(v___y_3706_);
lean_dec_ref(v___y_3704_);
lean_dec_ref(v___x_3675_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
v___y_3660_ = v_a_3713_;
goto v___jp_3659_;
}
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
lean_dec(v_mainModuleName_3709_);
lean_dec(v___y_3706_);
lean_dec_ref(v___y_3704_);
lean_dec_ref(v___x_3675_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
v_a_3781_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___x_3712_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3712_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
}
v___jp_3789_:
{
if (lean_obj_tag(v___y_3795_) == 0)
{
lean_object* v_a_3796_; 
v_a_3796_ = lean_ctor_get(v___y_3795_, 0);
lean_inc(v_a_3796_);
lean_dec_ref_known(v___y_3795_, 1);
v___y_3704_ = v___y_3790_;
v___y_3705_ = v___y_3791_;
v___y_3706_ = v___y_3792_;
v___y_3707_ = v___y_3794_;
v___y_3708_ = v___y_3793_;
v_mainModuleName_3709_ = v_a_3796_;
goto v___jp_3703_;
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3804_; 
lean_dec(v___y_3794_);
lean_dec_ref(v___y_3793_);
lean_dec(v___y_3792_);
lean_dec_ref(v___y_3791_);
lean_dec_ref(v___y_3790_);
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
v_a_3797_ = lean_ctor_get(v___y_3795_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___y_3795_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3799_ = v___y_3795_;
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_a_3797_);
lean_dec(v___y_3795_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
lean_object* v___x_3802_; 
if (v_isShared_3800_ == 0)
{
v___x_3802_ = v___x_3799_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_a_3797_);
v___x_3802_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
return v___x_3802_;
}
}
}
}
v___jp_3805_:
{
if (lean_obj_tag(v_setupFileName_x3f_3646_) == 0)
{
lean_object* v___x_3811_; 
v___x_3811_ = lean_box(0);
if (lean_obj_tag(v___y_3809_) == 1)
{
lean_object* v_val_3812_; lean_object* v___x_3813_; 
v_val_3812_ = lean_ctor_get(v___y_3809_, 0);
lean_inc(v_val_3812_);
lean_dec_ref_known(v___y_3809_, 1);
v___x_3813_ = l_Lean_moduleNameOfFileName(v_val_3812_, v_rootDir_x3f_3645_);
if (lean_obj_tag(v___x_3813_) == 0)
{
v___y_3790_ = v___y_3806_;
v___y_3791_ = v_contents_3810_;
v___y_3792_ = v___y_3807_;
v___y_3793_ = v___y_3808_;
v___y_3794_ = v___x_3811_;
v___y_3795_ = v___x_3813_;
goto v___jp_3789_;
}
else
{
if (lean_obj_tag(v_oleanFileName_x3f_3647_) == 0)
{
if (lean_obj_tag(v_cFileName_x3f_3649_) == 0)
{
lean_object* v___x_3814_; 
lean_dec_ref_known(v___x_3813_, 1);
v___x_3814_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__21));
v___y_3704_ = v___y_3806_;
v___y_3705_ = v_contents_3810_;
v___y_3706_ = v___y_3807_;
v___y_3707_ = v___x_3811_;
v___y_3708_ = v___y_3808_;
v_mainModuleName_3709_ = v___x_3814_;
goto v___jp_3703_;
}
else
{
v___y_3790_ = v___y_3806_;
v___y_3791_ = v_contents_3810_;
v___y_3792_ = v___y_3807_;
v___y_3793_ = v___y_3808_;
v___y_3794_ = v___x_3811_;
v___y_3795_ = v___x_3813_;
goto v___jp_3789_;
}
}
else
{
v___y_3790_ = v___y_3806_;
v___y_3791_ = v_contents_3810_;
v___y_3792_ = v___y_3807_;
v___y_3793_ = v___y_3808_;
v___y_3794_ = v___x_3811_;
v___y_3795_ = v___x_3813_;
goto v___jp_3789_;
}
}
}
else
{
lean_object* v___x_3815_; 
lean_dec(v___y_3809_);
lean_dec(v_rootDir_x3f_3645_);
v___x_3815_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__21));
v___y_3704_ = v___y_3806_;
v___y_3705_ = v_contents_3810_;
v___y_3706_ = v___y_3807_;
v___y_3707_ = v___x_3811_;
v___y_3708_ = v___y_3808_;
v_mainModuleName_3709_ = v___x_3815_;
goto v___jp_3703_;
}
}
else
{
lean_object* v_val_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3834_; 
lean_dec(v___y_3809_);
lean_dec(v_rootDir_x3f_3645_);
v_val_3816_ = lean_ctor_get(v_setupFileName_x3f_3646_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v_setupFileName_x3f_3646_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3818_ = v_setupFileName_x3f_3646_;
v_isShared_3819_ = v_isSharedCheck_3834_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_val_3816_);
lean_dec(v_setupFileName_x3f_3646_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3834_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3820_; 
v___x_3820_ = l_Lean_ModuleSetup_load(v_val_3816_);
lean_dec(v_val_3816_);
if (lean_obj_tag(v___x_3820_) == 0)
{
lean_object* v_a_3821_; lean_object* v_name_3822_; lean_object* v___x_3824_; 
v_a_3821_ = lean_ctor_get(v___x_3820_, 0);
lean_inc(v_a_3821_);
lean_dec_ref_known(v___x_3820_, 1);
v_name_3822_ = lean_ctor_get(v_a_3821_, 0);
lean_inc(v_name_3822_);
if (v_isShared_3819_ == 0)
{
lean_ctor_set(v___x_3818_, 0, v_a_3821_);
v___x_3824_ = v___x_3818_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_a_3821_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
v___y_3704_ = v___y_3806_;
v___y_3705_ = v_contents_3810_;
v___y_3706_ = v___y_3807_;
v___y_3707_ = v___x_3824_;
v___y_3708_ = v___y_3808_;
v_mainModuleName_3709_ = v_name_3822_;
goto v___jp_3703_;
}
}
else
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3833_; 
lean_del_object(v___x_3818_);
lean_dec_ref(v_contents_3810_);
lean_dec_ref(v___y_3808_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
v_a_3826_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3828_ = v___x_3820_;
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v___x_3820_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_a_3826_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
}
}
}
v___jp_3835_:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; uint8_t v___x_3848_; 
v___x_3844_ = lean_nat_add(v_startInclusive_3840_, v___y_3843_);
lean_dec(v___y_3843_);
lean_inc(v___x_3844_);
lean_inc_ref(v_str_3839_);
v___x_3845_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3845_, 0, v_str_3839_);
lean_ctor_set(v___x_3845_, 1, v_startInclusive_3840_);
lean_ctor_set(v___x_3845_, 2, v___x_3844_);
v___x_3846_ = l_String_Slice_trimAscii(v___x_3845_);
v___x_3847_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__24, &l___private_Lean_Shell_0__Lean_shellMain___closed__24_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__24);
v___x_3848_ = l_String_Slice_beq(v___x_3846_, v___x_3847_);
if (v___x_3848_ == 0)
{
lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
lean_dec(v___x_3844_);
lean_dec(v___y_3842_);
lean_dec(v_endExclusive_3841_);
lean_dec_ref(v_str_3839_);
lean_dec_ref(v___y_3838_);
lean_dec(v___y_3837_);
lean_dec_ref(v___y_3836_);
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
v___x_3849_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__25));
v___x_3850_ = l_String_Slice_toString(v___x_3846_);
lean_dec_ref(v___x_3846_);
v___x_3851_ = lean_string_append(v___x_3849_, v___x_3850_);
lean_dec_ref(v___x_3850_);
v___x_3852_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_3853_ = lean_string_append(v___x_3851_, v___x_3852_);
v___x_3854_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0(v___x_3853_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3862_; 
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3862_ == 0)
{
lean_object* v_unused_3863_; 
v_unused_3863_ = lean_ctor_get(v___x_3854_, 0);
lean_dec(v_unused_3863_);
v___x_3856_ = v___x_3854_;
v_isShared_3857_ = v_isSharedCheck_3862_;
goto v_resetjp_3855_;
}
else
{
lean_dec(v___x_3854_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3862_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3858_; lean_object* v___x_3860_; 
v___x_3858_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
if (v_isShared_3857_ == 0)
{
lean_ctor_set(v___x_3856_, 0, v___x_3858_);
v___x_3860_ = v___x_3856_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v___x_3858_);
v___x_3860_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
return v___x_3860_;
}
}
}
else
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3871_; 
v_a_3864_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3866_ = v___x_3854_;
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v___x_3854_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3867_ == 0)
{
v___x_3869_ = v___x_3866_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_a_3864_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
}
else
{
lean_object* v___x_3872_; 
lean_dec_ref(v___x_3846_);
v___x_3872_ = lean_string_utf8_extract(v_str_3839_, v___x_3844_, v_endExclusive_3841_);
lean_dec(v_endExclusive_3841_);
lean_dec(v___x_3844_);
lean_dec_ref(v_str_3839_);
v___y_3806_ = v___y_3836_;
v___y_3807_ = v___y_3837_;
v___y_3808_ = v___y_3838_;
v___y_3809_ = v___y_3842_;
v_contents_3810_ = v___x_3872_;
goto v___jp_3805_;
}
}
v___jp_3873_:
{
if (lean_obj_tag(v___y_3877_) == 0)
{
lean_object* v_a_3878_; lean_object* v___x_3879_; 
v_a_3878_ = lean_ctor_get(v___y_3877_, 0);
lean_inc(v_a_3878_);
lean_dec_ref_known(v___y_3877_, 1);
v___x_3879_ = lean_decode_lossy_utf8(v_a_3878_);
lean_dec(v_a_3878_);
if (v_onlyDeps_3641_ == 0)
{
if (v_onlySrcDeps_3642_ == 0)
{
lean_object* v___x_3880_; 
lean_inc_ref(v___x_3879_);
v___x_3880_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(v___x_3879_);
if (lean_obj_tag(v___x_3880_) == 1)
{
lean_object* v_val_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; 
lean_dec_ref(v___x_3879_);
v_val_3881_ = lean_ctor_get(v___x_3880_, 0);
lean_inc(v_val_3881_);
lean_dec_ref_known(v___x_3880_, 1);
v___x_3882_ = lean_unsigned_to_nat(0u);
v___x_3883_ = lean_box(0);
v___x_3884_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3881_, v___x_3882_, v___x_3883_);
if (lean_obj_tag(v___x_3884_) == 0)
{
lean_object* v_str_3885_; lean_object* v_startInclusive_3886_; lean_object* v_endExclusive_3887_; lean_object* v___x_3888_; 
v_str_3885_ = lean_ctor_get(v_val_3881_, 0);
lean_inc_ref(v_str_3885_);
v_startInclusive_3886_ = lean_ctor_get(v_val_3881_, 1);
lean_inc(v_startInclusive_3886_);
v_endExclusive_3887_ = lean_ctor_get(v_val_3881_, 2);
lean_inc(v_endExclusive_3887_);
lean_dec(v_val_3881_);
v___x_3888_ = lean_nat_sub(v_endExclusive_3887_, v_startInclusive_3886_);
lean_inc_ref(v___y_3874_);
v___y_3836_ = v___y_3874_;
v___y_3837_ = v___y_3876_;
v___y_3838_ = v___y_3874_;
v_str_3839_ = v_str_3885_;
v_startInclusive_3840_ = v_startInclusive_3886_;
v_endExclusive_3841_ = v_endExclusive_3887_;
v___y_3842_ = v___y_3875_;
v___y_3843_ = v___x_3888_;
goto v___jp_3835_;
}
else
{
lean_object* v_val_3889_; lean_object* v_str_3890_; lean_object* v_startInclusive_3891_; lean_object* v_endExclusive_3892_; 
v_val_3889_ = lean_ctor_get(v___x_3884_, 0);
lean_inc(v_val_3889_);
lean_dec_ref_known(v___x_3884_, 1);
v_str_3890_ = lean_ctor_get(v_val_3881_, 0);
lean_inc_ref(v_str_3890_);
v_startInclusive_3891_ = lean_ctor_get(v_val_3881_, 1);
lean_inc(v_startInclusive_3891_);
v_endExclusive_3892_ = lean_ctor_get(v_val_3881_, 2);
lean_inc(v_endExclusive_3892_);
lean_dec(v_val_3881_);
lean_inc_ref(v___y_3874_);
v___y_3836_ = v___y_3874_;
v___y_3837_ = v___y_3876_;
v___y_3838_ = v___y_3874_;
v_str_3839_ = v_str_3890_;
v_startInclusive_3840_ = v_startInclusive_3891_;
v_endExclusive_3841_ = v_endExclusive_3892_;
v___y_3842_ = v___y_3875_;
v___y_3843_ = v_val_3889_;
goto v___jp_3835_;
}
}
else
{
lean_dec(v___x_3880_);
lean_inc_ref(v___y_3874_);
v___y_3806_ = v___y_3874_;
v___y_3807_ = v___y_3876_;
v___y_3808_ = v___y_3874_;
v___y_3809_ = v___y_3875_;
v_contents_3810_ = v___x_3879_;
goto v___jp_3805_;
}
}
else
{
lean_object* v___x_3893_; lean_object* v___x_3894_; 
lean_dec(v___y_3876_);
lean_dec(v___y_3875_);
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
v___x_3893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3893_, 0, v___y_3874_);
v___x_3894_ = l_Lean_Elab_printImportSrcs(v___x_3879_, v___x_3893_);
if (lean_obj_tag(v___x_3894_) == 0)
{
lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3902_; 
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3894_);
if (v_isSharedCheck_3902_ == 0)
{
lean_object* v_unused_3903_; 
v_unused_3903_ = lean_ctor_get(v___x_3894_, 0);
lean_dec(v_unused_3903_);
v___x_3896_ = v___x_3894_;
v_isShared_3897_ = v_isSharedCheck_3902_;
goto v_resetjp_3895_;
}
else
{
lean_dec(v___x_3894_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3902_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3898_; lean_object* v___x_3900_; 
v___x_3898_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3897_ == 0)
{
lean_ctor_set(v___x_3896_, 0, v___x_3898_);
v___x_3900_ = v___x_3896_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3911_; 
v_a_3904_ = lean_ctor_get(v___x_3894_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3894_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3906_ = v___x_3894_;
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3894_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3909_; 
if (v_isShared_3907_ == 0)
{
v___x_3909_ = v___x_3906_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3904_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
}
else
{
lean_object* v___x_3912_; lean_object* v___x_3913_; 
lean_dec(v___y_3876_);
lean_dec(v___y_3875_);
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
v___x_3912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3912_, 0, v___y_3874_);
v___x_3913_ = l_Lean_Elab_printImports(v___x_3879_, v___x_3912_);
if (lean_obj_tag(v___x_3913_) == 0)
{
lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3921_; 
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3921_ == 0)
{
lean_object* v_unused_3922_; 
v_unused_3922_ = lean_ctor_get(v___x_3913_, 0);
lean_dec(v_unused_3922_);
v___x_3915_ = v___x_3913_;
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
else
{
lean_dec(v___x_3913_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3917_; lean_object* v___x_3919_; 
v___x_3917_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 0, v___x_3917_);
v___x_3919_ = v___x_3915_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v___x_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
else
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3930_; 
v_a_3923_ = lean_ctor_get(v___x_3913_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3925_ = v___x_3913_;
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v___x_3913_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
if (v_isShared_3926_ == 0)
{
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v_a_3923_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
}
}
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3938_; 
lean_dec(v___y_3876_);
lean_dec(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
v_a_3931_ = lean_ctor_get(v___y_3877_, 0);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___y_3877_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3933_ = v___y_3877_;
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___y_3877_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
}
v___jp_3939_:
{
if (v_useStdin_3640_ == 0)
{
lean_object* v___x_3943_; 
v___x_3943_ = l_IO_FS_readBinFile(v_fileName_3942_);
v___y_3874_ = v_fileName_3942_;
v___y_3875_ = v___y_3941_;
v___y_3876_ = v___y_3940_;
v___y_3877_ = v___x_3943_;
goto v___jp_3873_;
}
else
{
lean_object* v___x_3944_; lean_object* v___x_3945_; 
v___x_3944_ = lean_get_stdin();
v___x_3945_ = l_IO_FS_Stream_readBinToEnd(v___x_3944_);
v___y_3874_ = v_fileName_3942_;
v___y_3875_ = v___y_3941_;
v___y_3876_ = v___y_3940_;
v___y_3877_ = v___x_3945_;
goto v___jp_3873_;
}
}
v___jp_3946_:
{
if (lean_obj_tag(v___y_3948_) == 1)
{
lean_object* v_val_3949_; 
v_val_3949_ = lean_ctor_get(v___y_3948_, 0);
lean_inc(v_val_3949_);
v___y_3940_ = v___y_3947_;
v___y_3941_ = v___y_3948_;
v_fileName_3942_ = v_val_3949_;
goto v___jp_3939_;
}
else
{
if (v_useStdin_3640_ == 0)
{
lean_object* v___x_3950_; lean_object* v___x_3951_; 
lean_dec(v___y_3948_);
lean_dec(v___y_3947_);
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
v___x_3950_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__26));
v___x_3951_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0(v___x_3950_);
if (lean_obj_tag(v___x_3951_) == 0)
{
lean_object* v___x_3952_; 
lean_dec_ref_known(v___x_3951_, 1);
v___x_3952_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3702_);
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3960_; 
v_isSharedCheck_3960_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3960_ == 0)
{
lean_object* v_unused_3961_; 
v_unused_3961_ = lean_ctor_get(v___x_3952_, 0);
lean_dec(v_unused_3961_);
v___x_3954_ = v___x_3952_;
v_isShared_3955_ = v_isSharedCheck_3960_;
goto v_resetjp_3953_;
}
else
{
lean_dec(v___x_3952_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3960_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3956_; lean_object* v___x_3958_; 
v___x_3956_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
if (v_isShared_3955_ == 0)
{
lean_ctor_set(v___x_3954_, 0, v___x_3956_);
v___x_3958_ = v___x_3954_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v___x_3956_);
v___x_3958_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
return v___x_3958_;
}
}
}
else
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3969_; 
v_a_3962_ = lean_ctor_get(v___x_3952_, 0);
v_isSharedCheck_3969_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3969_ == 0)
{
v___x_3964_ = v___x_3952_;
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v___x_3952_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3967_; 
if (v_isShared_3965_ == 0)
{
v___x_3967_ = v___x_3964_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v_a_3962_);
v___x_3967_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
return v___x_3967_;
}
}
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
v_a_3970_ = lean_ctor_get(v___x_3951_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3951_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3951_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3951_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
else
{
lean_object* v___x_3978_; 
v___x_3978_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__27));
v___y_3940_ = v___y_3947_;
v___y_3941_ = v___y_3948_;
v_fileName_3942_ = v___x_3978_;
goto v___jp_3939_;
}
}
}
v___jp_3979_:
{
uint8_t v___x_3982_; 
v___x_3982_ = l_List_isEmpty___redArg(v___y_3980_);
if (v___x_3982_ == 0)
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
lean_dec(v___y_3981_);
lean_dec(v___y_3980_);
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
v___x_3983_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__26));
v___x_3984_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_wasmLoadSnapshot_spec__0(v___x_3983_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v___x_3985_; 
lean_dec_ref_known(v___x_3984_, 1);
v___x_3985_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3702_);
if (lean_obj_tag(v___x_3985_) == 0)
{
lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3993_; 
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_3993_ == 0)
{
lean_object* v_unused_3994_; 
v_unused_3994_ = lean_ctor_get(v___x_3985_, 0);
lean_dec(v_unused_3994_);
v___x_3987_ = v___x_3985_;
v_isShared_3988_ = v_isSharedCheck_3993_;
goto v_resetjp_3986_;
}
else
{
lean_dec(v___x_3985_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3993_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3989_; lean_object* v___x_3991_; 
v___x_3989_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 0, v___x_3989_);
v___x_3991_ = v___x_3987_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v___x_3989_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
else
{
lean_object* v_a_3995_; lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4002_; 
v_a_3995_ = lean_ctor_get(v___x_3985_, 0);
v_isSharedCheck_4002_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_4002_ == 0)
{
v___x_3997_ = v___x_3985_;
v_isShared_3998_ = v_isSharedCheck_4002_;
goto v_resetjp_3996_;
}
else
{
lean_inc(v_a_3995_);
lean_dec(v___x_3985_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4002_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
lean_object* v___x_4000_; 
if (v_isShared_3998_ == 0)
{
v___x_4000_ = v___x_3997_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_a_3995_);
v___x_4000_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
return v___x_4000_;
}
}
}
}
else
{
lean_object* v_a_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4010_; 
v_a_4003_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_4010_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_4010_ == 0)
{
v___x_4005_ = v___x_3984_;
v_isShared_4006_ = v_isSharedCheck_4010_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_a_4003_);
lean_dec(v___x_3984_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4010_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
lean_object* v___x_4008_; 
if (v_isShared_4006_ == 0)
{
v___x_4008_ = v___x_4005_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v_a_4003_);
v___x_4008_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
return v___x_4008_;
}
}
}
}
else
{
v___y_3947_ = v___y_3980_;
v___y_3948_ = v___y_3981_;
goto v___jp_3946_;
}
}
v___jp_4011_:
{
if (v_run_3654_ == 0)
{
v___y_3980_ = v_snd_4014_;
v___y_3981_ = v_fst_4013_;
goto v___jp_3979_;
}
else
{
if (v___y_4012_ == 0)
{
v___y_3947_ = v_snd_4014_;
v___y_3948_ = v_fst_4013_;
goto v___jp_3946_;
}
else
{
v___y_3980_ = v_snd_4014_;
v___y_3981_ = v_fst_4013_;
goto v___jp_3979_;
}
}
}
v___jp_4015_:
{
if (lean_obj_tag(v_args_3606_) == 0)
{
lean_object* v___x_4017_; 
v___x_4017_ = lean_box(0);
v___y_4012_ = v___y_4016_;
v_fst_4013_ = v___x_4017_;
v_snd_4014_ = v_args_3606_;
goto v___jp_4011_;
}
else
{
lean_object* v_head_4018_; lean_object* v_tail_4019_; lean_object* v___x_4020_; 
v_head_4018_ = lean_ctor_get(v_args_3606_, 0);
lean_inc(v_head_4018_);
v_tail_4019_ = lean_ctor_get(v_args_3606_, 1);
lean_inc(v_tail_4019_);
lean_dec_ref_known(v_args_3606_, 2);
v___x_4020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4020_, 0, v_head_4018_);
v___y_4012_ = v___y_4016_;
v_fst_4013_ = v___x_4020_;
v_snd_4014_ = v_tail_4019_;
goto v___jp_4011_;
}
}
v___jp_4021_:
{
switch(v_component_3639_)
{
case 0:
{
lean_dec_ref(v_forwardedArgs_3638_);
if (v_onlyDeps_3641_ == 0)
{
v___y_4016_ = v_onlyDeps_3641_;
goto v___jp_4015_;
}
else
{
if (v_depsJson_3643_ == 0)
{
v___y_4016_ = v_depsJson_3643_;
goto v___jp_4015_;
}
else
{
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
if (v_useStdin_3640_ == 0)
{
lean_object* v___x_4022_; 
v___x_4022_ = lean_array_mk(v_args_3606_);
v_fns_3616_ = v___x_4022_;
goto v___jp_3615_;
}
else
{
lean_object* v___x_4023_; lean_object* v___x_4024_; 
lean_dec(v_args_3606_);
v___x_4023_ = lean_get_stdin();
v___x_4024_ = l_IO_FS_Stream_lines(v___x_4023_);
if (lean_obj_tag(v___x_4024_) == 0)
{
lean_object* v_a_4025_; 
v_a_4025_ = lean_ctor_get(v___x_4024_, 0);
lean_inc(v_a_4025_);
lean_dec_ref_known(v___x_4024_, 1);
v_fns_3616_ = v_a_4025_;
goto v___jp_3615_;
}
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4033_; 
v_a_4026_ = lean_ctor_get(v___x_4024_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_4024_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4028_ = v___x_4024_;
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v___x_4024_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4026_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; 
lean_dec_ref(v___x_3675_);
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
lean_dec(v_args_3606_);
v___x_4034_ = lean_array_to_list(v_forwardedArgs_3638_);
v___x_4035_ = l_Lean_Server_Watchdog_watchdogMain(v___x_4034_);
return v___x_4035_;
}
default: 
{
lean_object* v___x_4036_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3657_);
lean_dec(v_incrLoadFileName_x3f_3656_);
lean_dec(v_incrSaveFileName_x3f_3655_);
lean_dec_ref(v_errorOnKinds_3652_);
lean_dec(v_bcFileName_x3f_3650_);
lean_dec(v_cFileName_x3f_3649_);
lean_dec(v_ileanFileName_x3f_3648_);
lean_dec(v_oleanFileName_x3f_3647_);
lean_dec(v_setupFileName_x3f_3646_);
lean_dec(v_rootDir_x3f_3645_);
lean_dec_ref(v_forwardedArgs_3638_);
lean_dec(v_args_3606_);
v___x_4036_ = l_Lean_Server_FileWorker_workerMain(v___x_3675_);
return v___x_4036_;
}
}
}
v___jp_4037_:
{
lean_object* v___x_4038_; lean_object* v_timeout_4039_; lean_object* v___x_4040_; uint8_t v___x_4041_; 
v___x_4038_ = l___private_Lean_Shell_0__Lean_timeout;
v_timeout_4039_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3675_, v___x_4038_);
v___x_4040_ = lean_unsigned_to_nat(0u);
v___x_4041_ = lean_nat_dec_eq(v_timeout_4039_, v___x_4040_);
if (v___x_4041_ == 0)
{
size_t v___x_4042_; size_t v___x_4043_; size_t v___x_4044_; lean_object* v___x_4045_; 
v___x_4042_ = lean_usize_of_nat(v_timeout_4039_);
lean_dec(v_timeout_4039_);
v___x_4043_ = ((size_t)1000ULL);
v___x_4044_ = lean_usize_mul(v___x_4042_, v___x_4043_);
v___x_4045_ = lean_internal_set_max_heartbeat(v___x_4044_);
goto v___jp_4021_;
}
else
{
lean_dec(v_timeout_4039_);
goto v___jp_4021_;
}
}
}
else
{
lean_object* v___x_4055_; 
lean_dec_ref(v_opts_3607_);
lean_dec(v_args_3606_);
v___x_4055_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_4055_) == 0)
{
lean_object* v_a_4056_; lean_object* v___x_4057_; 
v_a_4056_ = lean_ctor_get(v___x_4055_, 0);
lean_inc(v_a_4056_);
lean_dec_ref_known(v___x_4055_, 1);
v___x_4057_ = l_Lean_getLibDir(v_a_4056_);
if (lean_obj_tag(v___x_4057_) == 0)
{
lean_object* v_a_4058_; lean_object* v___x_4059_; 
v_a_4058_ = lean_ctor_get(v___x_4057_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v___x_4057_, 1);
v___x_4059_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_a_4058_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4067_; 
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_4059_);
if (v_isSharedCheck_4067_ == 0)
{
lean_object* v_unused_4068_; 
v_unused_4068_ = lean_ctor_get(v___x_4059_, 0);
lean_dec(v_unused_4068_);
v___x_4061_ = v___x_4059_;
v_isShared_4062_ = v_isSharedCheck_4067_;
goto v_resetjp_4060_;
}
else
{
lean_dec(v___x_4059_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4067_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4063_; lean_object* v___x_4065_; 
v___x_4063_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_4062_ == 0)
{
lean_ctor_set(v___x_4061_, 0, v___x_4063_);
v___x_4065_ = v___x_4061_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v___x_4063_);
v___x_4065_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
return v___x_4065_;
}
}
}
else
{
lean_object* v_a_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4076_; 
v_a_4069_ = lean_ctor_get(v___x_4059_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___x_4059_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4071_ = v___x_4059_;
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_a_4069_);
lean_dec(v___x_4059_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4074_; 
if (v_isShared_4072_ == 0)
{
v___x_4074_ = v___x_4071_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4069_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
return v___x_4074_;
}
}
}
}
else
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4084_; 
v_a_4077_ = lean_ctor_get(v___x_4057_, 0);
v_isSharedCheck_4084_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4079_ = v___x_4057_;
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4057_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
if (v_isShared_4080_ == 0)
{
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_a_4077_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
}
}
else
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4092_; 
v_a_4085_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4087_ = v___x_4055_;
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v___x_4055_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_a_4085_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
}
}
else
{
lean_object* v___x_4093_; 
lean_dec_ref(v_opts_3607_);
lean_dec(v_args_3606_);
v___x_4093_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_4093_) == 0)
{
lean_object* v_a_4094_; lean_object* v___x_4095_; 
v_a_4094_ = lean_ctor_get(v___x_4093_, 0);
lean_inc(v_a_4094_);
lean_dec_ref_known(v___x_4093_, 1);
v___x_4095_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_a_4094_);
if (lean_obj_tag(v___x_4095_) == 0)
{
lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4103_; 
v_isSharedCheck_4103_ = !lean_is_exclusive(v___x_4095_);
if (v_isSharedCheck_4103_ == 0)
{
lean_object* v_unused_4104_; 
v_unused_4104_ = lean_ctor_get(v___x_4095_, 0);
lean_dec(v_unused_4104_);
v___x_4097_ = v___x_4095_;
v_isShared_4098_ = v_isSharedCheck_4103_;
goto v_resetjp_4096_;
}
else
{
lean_dec(v___x_4095_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4103_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4099_; lean_object* v___x_4101_; 
v___x_4099_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_4098_ == 0)
{
lean_ctor_set(v___x_4097_, 0, v___x_4099_);
v___x_4101_ = v___x_4097_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v___x_4099_);
v___x_4101_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
return v___x_4101_;
}
}
}
else
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4112_; 
v_a_4105_ = lean_ctor_get(v___x_4095_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v___x_4095_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4107_ = v___x_4095_;
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v___x_4095_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4110_; 
if (v_isShared_4108_ == 0)
{
v___x_4110_ = v___x_4107_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4111_; 
v_reuseFailAlloc_4111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4111_, 0, v_a_4105_);
v___x_4110_ = v_reuseFailAlloc_4111_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
return v___x_4110_;
}
}
}
}
else
{
lean_object* v_a_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4120_; 
v_a_4113_ = lean_ctor_get(v___x_4093_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v___x_4093_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4115_ = v___x_4093_;
v_isShared_4116_ = v_isSharedCheck_4120_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_a_4113_);
lean_dec(v___x_4093_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4120_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v___x_4118_; 
if (v_isShared_4116_ == 0)
{
v___x_4118_ = v___x_4115_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v_a_4113_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
return v___x_4118_;
}
}
}
}
v___jp_3609_:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3610_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2;
v___x_3611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
return v___x_3611_;
}
v___jp_3612_:
{
uint8_t v___x_3613_; lean_object* v___x_3614_; 
v___x_3613_ = 0;
v___x_3614_ = lean_io_exit(v___x_3613_);
return v___x_3614_;
}
v___jp_3615_:
{
lean_object* v___x_3617_; 
v___x_3617_ = l_Lean_printImportsJson(v_fns_3616_);
if (lean_obj_tag(v___x_3617_) == 0)
{
lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3625_; 
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3625_ == 0)
{
lean_object* v_unused_3626_; 
v_unused_3626_ = lean_ctor_get(v___x_3617_, 0);
lean_dec(v_unused_3626_);
v___x_3619_ = v___x_3617_;
v_isShared_3620_ = v_isSharedCheck_3625_;
goto v_resetjp_3618_;
}
else
{
lean_dec(v___x_3617_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3625_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3621_; lean_object* v___x_3623_; 
v___x_3621_ = l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1;
if (v_isShared_3620_ == 0)
{
lean_ctor_set(v___x_3619_, 0, v___x_3621_);
v___x_3623_ = v___x_3619_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v___x_3621_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
v_a_3627_ = lean_ctor_get(v___x_3617_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3617_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3617_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object* v_args_4121_, lean_object* v_opts_4122_, lean_object* v_a_4123_){
_start:
{
lean_object* v_res_4124_; 
v_res_4124_ = lean_shell_main(v_args_4121_, v_opts_4122_);
return v_res_4124_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object* v_val_4125_, lean_object* v_inst_4126_, lean_object* v_R_4127_, lean_object* v_a_4128_, lean_object* v_b_4129_, lean_object* v_c_4130_){
_start:
{
lean_object* v___x_4131_; 
v___x_4131_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_4125_, v_a_4128_, v_b_4129_);
return v___x_4131_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object* v_val_4132_, lean_object* v_inst_4133_, lean_object* v_R_4134_, lean_object* v_a_4135_, lean_object* v_b_4136_, lean_object* v_c_4137_){
_start:
{
lean_object* v_res_4138_; 
v_res_4138_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(v_val_4132_, v_inst_4133_, v_R_4134_, v_a_4135_, v_b_4136_, v_c_4137_);
lean_dec(v_b_4136_);
lean_dec_ref(v_val_4132_);
return v_res_4138_;
}
}
lean_object* runtime_initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_4105459712____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_wasmEnvCache = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_wasmEnvCache);
lean_dec_ref(res);
l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1 = _init_l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__1);
l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2 = _init_l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_wasmCompile___boxed__const__2);
l___private_Lean_Shell_0__Lean_shortVersionString = _init_l___private_Lean_Shell_0__Lean_shortVersionString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString);
l___private_Lean_Shell_0__Lean_versionHeader = _init_l___private_Lean_Shell_0__Lean_versionHeader();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader);
l___private_Lean_Shell_0__Lean_featuresString = _init_l___private_Lean_Shell_0__Lean_featuresString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_featuresString);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_maxMemory = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_maxMemory);
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_timeout = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_timeout);
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_verbose = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_verbose);
lean_dec_ref(res);
l___private_Lean_Shell_0__Lean_defaultTrustLevel = _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel();
l___private_Lean_Shell_0__Lean_defaultNumThreads = _init_l___private_Lean_Shell_0__Lean_defaultNumThreads();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Shell(builtin);
}
#ifdef __cplusplus
}
#endif
