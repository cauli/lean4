# Dockerfile for building Lean 4 WebAssembly
# Based on the GitHub Actions CI configuration
# 
# NOTE: On Apple Silicon, this runs via x86_64 emulation (Rosetta/QEMU)
# Build with: docker build --platform=linux/amd64 -t lean4-wasm-builder .

ARG TARGETPLATFORM=linux/amd64
FROM --platform=$TARGETPLATFORM ubuntu:22.04

# Avoid interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Install base dependencies
RUN apt-get update && apt-get install -y \
    git \
    curl \
    wget \
    cmake \
    ninja-build \
    ccache \
    python3 \
    xz-utils \
    # 32-bit support for stage0
    gcc-multilib \
    g++-multilib \
    clang \
    # Required libraries
    libuv1-dev \
    && rm -rf /var/lib/apt/lists/*

# Add 32-bit architecture and install 32-bit libraries
RUN dpkg --add-architecture i386 && \
    apt-get update && apt-get install -y \
    libuv1-dev:i386 \
    pkg-config:i386 \
    libc6-dev:i386 \
    libssl-dev:i386 \
    python3-pip \
    && rm -rf /var/lib/apt/lists/*

# Ubuntu 22.04 ships CMake 3.22; current Lean CMakeLists uses block() (>=3.25).
RUN pip3 install --no-cache-dir 'cmake>=3.28'

# Install Emscripten SDK
ENV EMSDK=/opt/emsdk
RUN git clone https://github.com/emscripten-core/emsdk.git ${EMSDK} && \
    cd ${EMSDK} && \
    ./emsdk install 4.0.22 && \
    ./emsdk activate 4.0.22

# Set up Emscripten environment
ENV PATH="${EMSDK}:${EMSDK}/upstream/emscripten:${PATH}"

# Create working directory
WORKDIR /lean4

# Copy the build script
COPY build.sh /build.sh
RUN chmod +x /build.sh

# Default command
CMD ["/build.sh"]
