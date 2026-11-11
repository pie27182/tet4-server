#!/bin/bash
# Decompile every function of a PE module with Ghidra headless and write one
# text file per function. Usage:
#   GHIDRA=/path/to/ghidra/support/analyzeHeadless tools/export.sh <module.dll> <outdir>
set -e
: "${GHIDRA:?set GHIDRA to ghidra/support/analyzeHeadless}"
MODULE="$1"; OUT="$2"
TOOLS="$(cd "$(dirname "$0")" && pwd)"
PROJ="$(mktemp -d)"
"$GHIDRA" "$PROJ" proj -import "$MODULE" \
    -scriptPath "$TOOLS" -postScript ExportAllFunctions.java "$OUT"
test -s "$OUT/$(basename "$MODULE").c" || { echo "EXPORT_FAILED: no output in $OUT" >&2; exit 1; }
echo EXPORT_DONE
