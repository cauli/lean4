#!/bin/bash
set -euxo pipefail

# Source Emscripten environment
source ${EMSDK}/emsdk_env.sh

# 32-bit stage0 links native libs through pkg-config; point it at the i386 dir.
export PKG_CONFIG_LIBDIR=/usr/lib/i386-linux-gnu/pkgconfig:/usr/share/pkgconfig
# Emscripten's acorn-optimizer needs a big Node heap for the ~100MB lean.js.
export NODE_OPTIONS="--max-old-space-size=8192"

# Build in-tree (mounted) so the build dir persists on the host for fast
# incremental rebuilds: after the first build, editing a .cpp and re-running
# `make stage1` only recompiles what changed and relinks lean.wasm.
mkdir -p /lean4/build/wasm
cd /lean4/build/wasm

# CMake flags mirror the working CI wasm job (.github/browser-build-matrix.json):
# - stage0 is a native 32-bit x86 lean used to compile the oleans + drive the
#   Emscripten cross-build; -m32 -msse2 -mfpmath=sse gives it FLT_EVAL_METHOD=0
#   (lean.h rejects x87's =2), and -DSTAGE0_LEAN_EXTRA_LINKER_FLAGS=-m32 forces
#   its executable link (via leanc.sh) to 32-bit.
# EMSCRIPTEN_DEBUG=ON retains function names for profiling.
cmake /lean4 \
    -DCMAKE_C_COMPILER_WORKS=1 \
    -DSTAGE0_USE_GMP=OFF \
    -DSTAGE0_LEAN_EXTRA_CXX_FLAGS='-m32 -msse2 -mfpmath=sse' \
    -DSTAGE0_LEANC_OPTS='-m32 -msse2 -mfpmath=sse' \
    -DSTAGE0_LEAN_EXTRA_LINKER_FLAGS='-m32' \
    -DSTAGE0_CMAKE_CXX_COMPILER=clang++ \
    -DSTAGE0_CMAKE_C_COMPILER=clang \
    -DSTAGE0_CMAKE_EXECUTABLE_SUFFIX="" \
    -DUSE_GMP=OFF \
    -DUSE_MIMALLOC=OFF \
    -DMMAP=OFF \
    -DSTAGE0_MMAP=OFF \
    -DEMSCRIPTEN_DEBUG=${EMSCRIPTEN_DEBUG:-OFF} \
    -DCMAKE_AR=${EMSDK}/upstream/emscripten/emar \
    -DCMAKE_TOOLCHAIN_FILE=${EMSDK}/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake \
    -DLEAN_INSTALL_SUFFIX=-linux_wasm32 \
    -DSTAGE0_CMAKE_LIBRARY_PATH=/usr/lib/i386-linux-gnu/

# Build the target requested (default: full stage1 incl. oleans). Pass
# MAKE_TARGET=lean to relink only the binary during fix iterations.
make ${MAKE_TARGET:-stage1} -j$(nproc)

echo ""
echo "========================================="
echo "Build complete. WASM output in: /lean4/build/wasm/stage1/bin/"
echo "  lean.js, lean.wasm   (pthreads; requires COOP/COEP)"
echo "========================================="
