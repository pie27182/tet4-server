#!/bin/bash
# Compile the reconstruction pilot with the original VC9 SP1 compiler.
# The toolchain is fetched by tools/fetch_msvc9.sh and stays in work/.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
TC="$ROOT/work/toolchains"
CL="$TC/msvc900sp1/VC/bin/cl.exe"
OUT="$ROOT/work/reconstruction-pilot"

if [ ! -f "$CL" ]; then
    echo "VC9 toolchain missing: run tools/fetch_msvc9.sh first" >&2
    exit 1
fi

mkdir -p "$OUT"
cd "$OUT"
PATH=/usr/bin:/bin "$TC/wibo-x86_64" "$CL" \
    /c /O2 /MT /Z7 \
    /I../../reconstruction/include \
    /I../toolchains/msvc900sp1/VC/include \
    "/I../toolchains/msvc900sp1/Microsoft SDKs/Windows/v6.0A/Include" \
    /Foscene_manager.obj \
    ../../reconstruction/src/scene/scene_manager.cpp

file "$OUT/scene_manager.obj"
objdump -f "$OUT/scene_manager.obj" | head -3
