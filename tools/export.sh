#!/bin/bash
# Decompile one PE module with Ghidra headless: writes <module>.c and <module>.index.tsv.
#
#   GHIDRA=~/ghidra_12.2_PUBLIC/support/analyzeHeadless tools/export.sh client/HgSock3.dll
#   GHIDRA=... tools/export.sh client/HgSock3.dll /some/other/outdir
#
# Output defaults to work/decompiled. The Ghidra project is kept in work/ghidra (or
# GHIDRA_PROJECTS). Ghidra needs a path without dot-prefixed names and a filesystem with
# free quota; see docs/REPRODUCE.md, section 8.
set -e
: "${GHIDRA:?set GHIDRA to ghidra/support/analyzeHeadless}"
MODULE="$1"
[ -n "$MODULE" ] || { echo "usage: $0 <module.dll> [outdir]" >&2; exit 2; }
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="${2:-$ROOT/work/decompiled}"
PROJ_DIR="${GHIDRA_PROJECTS:-$ROOT/work/ghidra}"
NAME="$(basename "$MODULE")"
mkdir -p "$PROJ_DIR" "$OUT"
"$GHIDRA" "$PROJ_DIR" "$NAME" -import "$MODULE" -overwrite \
    -scriptPath "$ROOT/tools" -postScript ExportAllFunctions.java "$OUT"
test -s "$OUT/$NAME.c" || { echo "EXPORT_FAILED: no output in $OUT" >&2; exit 1; }
echo EXPORT_DONE
