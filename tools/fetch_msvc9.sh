#!/bin/bash
# Fetch wibo 1.2.0 and the Visual C++ 2008 SP1 (15.00.30729.01) compiler pack.
#
# The toolchain is for function-level matching of Tet4.exe: GCC/MinGW is not a
# substitute because the code generator and ABI differ. The pack is proprietary
# and is downloaded from its community mirror; it is never stored in git.
#
#   https_proxy=http://127.0.0.1:10808 tools/fetch_msvc9.sh
#
# Output (gitignored):
#   work/toolchains/wibo-x86_64
#   work/toolchains/msvc900sp1/VC/bin/cl.exe
#   work/toolchains/msvc900sp1/VC/{include,lib}
#   work/toolchains/msvc900sp1/Microsoft SDKs/Windows/v6.0A/{Include,Lib}
#
# wibo 1.2.0 can run cl.exe and ml.exe; link.exe is not usable (missing
# kernel32!lstrcmpiW). /c is enough for comparing one function at a time.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
DEST="$ROOT/work/toolchains"
WIBO_URL="https://github.com/decompals/wibo/releases/download/1.2.0/wibo-x86_64"
WIBO_SHA="13f86a2d618f0dbe67179d349625345eabf9b46450295cb4c904e49f6aff85af"
PACK_URL="https://files.typeguru.nl/setup-msvc/packs/2544e8fb817421bd/a1465772ad6c5767f6d191ff0861282efc822f5c.tar.gz"
PACK_SHA="2544e8fb817421bd5a09fd4cc243ff0a0db6049cf1a15b92a7b4a3f1f6568e69"

fetch() {
    local url="$1" sha="$2" out="$3"
    if [ -f "$out" ] && echo "$sha  $out" | sha256sum -c - >/dev/null 2>&1; then
        echo "cached $out"
        return
    fi
    echo "fetching $out"
    curl -L --fail --retry 3 -o "$out.part" "$url"
    echo "$sha  $out.part" | sha256sum -c -
    mv "$out.part" "$out"
}

mkdir -p "$DEST"
fetch "$WIBO_URL" "$WIBO_SHA" "$DEST/wibo-x86_64"
chmod +x "$DEST/wibo-x86_64"
fetch "$PACK_URL" "$PACK_SHA" "$DEST/vc9sp1.tar.gz"

echo "extracting $DEST/msvc900sp1"
mkdir -p "$DEST/msvc900sp1"
tar -xzf "$DEST/vc9sp1.tar.gz" --strip-components=1 -C "$DEST/msvc900sp1"
test -f "$DEST/msvc900sp1/VC/bin/cl.exe"

cd "$DEST/msvc900sp1"
PATH=/usr/bin:/bin ../wibo-x86_64 VC/bin/cl.exe 2>&1 | head -2
