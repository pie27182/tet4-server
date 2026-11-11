#!/bin/bash
# Decompile every function of a PE module with Ghidra headless and write one
# text file per function. Usage:
#   GHIDRA=/path/to/ghidra/support/analyzeHeadless tools/export.sh <module.dll> <outdir>
set -e
: "${GHIDRA:?set GHIDRA to ghidra/support/analyzeHeadless}"
MODULE="$1"; OUT="$2"
TOOLS="$(cd "$(dirname "$0")" && pwd)"
PROJ="$(mktemp -d)"
"$GHIDRA" "$PROJ" proj -import "$MODULE" -processor x86:LE:32:default \
    -postScript "$TOOLS/ExportAllFunctions.java" "$OUT"
echo EXPORT_DONE
