#!/bin/bash
# Re-decompile one module with MSVC RTTI class recovery, into work/decompiled-classes.
#
#   tools/recover_classes.sh client/HgCom3.dll
#
# Runs three Ghidra scripts headless (no GUI):
#   FixUpRttiAnalysisScript      - fills in missing MSVC RTTI structures
#   RecoverClassesFromRTTIScript - class names, vtables, this-types, member structs
#   ExportAllFunctions           - decompiled C + index, same format as tools/export.sh
#   ExportHeaders                - C++ header with the recovered classes
set -e
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
MODULE="${1:?usage: $0 <module.dll> [outdir]}"
OUT="${2:-$ROOT/work/decompiled-classes}"
PROJ="${GHIDRA_PROJECTS:-$ROOT/work/ghidra}"
for candidate in "$GHIDRA" /opt/ghidra/support/analyzeHeadless \
                 "$ROOT/work/ghidra_12.2_PUBLIC/support/analyzeHeadless"; do
    if [ -n "$candidate" ] && [ -x "$candidate" ]; then GHIDRA="$candidate"; break; fi
done
[ -n "${GHIDRA:-}" ] && [ -x "$GHIDRA" ] || {
    echo "Ghidra not found; install it or set GHIDRA (docs/REPRODUCE.md, section 6)" >&2
    exit 2
}
NAME="$(basename "$MODULE")"
GHIDRA_ROOT="$(cd "$(dirname "$GHIDRA")/.." && pwd)"
DECOMP_SCRIPTS="$GHIDRA_ROOT/Ghidra/Features/Decompiler/ghidra_scripts"
MS_SCRIPTS="$GHIDRA_ROOT/Ghidra/Features/MicrosoftCodeAnalyzer/ghidra_scripts"
[ -d "$DECOMP_SCRIPTS" ] || { echo "missing $DECOMP_SCRIPTS" >&2; exit 2; }
[ -d "$MS_SCRIPTS" ] || { echo "missing $MS_SCRIPTS" >&2; exit 2; }
# Optional reconstructed names: names/<module>.tsv (or $NAMEMAP).
if [ -z "${NAMEMAP:-}" ] && [ -f "$ROOT/names/$NAME.tsv" ]; then
    NAMEMAP="$ROOT/names/$NAME.tsv"
fi
# Optional reconstructed field names: fields/<module>.tsv.
FIELDS=""
if [ -f "$ROOT/fields/$NAME.tsv" ]; then
    FIELDS="$ROOT/fields/$NAME.tsv"
fi
mkdir -p "$PROJ" "$OUT"
export XDG_CONFIG_HOME="$ROOT/work/xdg/config" XDG_CACHE_HOME="$ROOT/work/xdg/cache"
"$GHIDRA" "$PROJ" "classes_${NAME}" -import "$MODULE" -overwrite \
    -scriptPath "$DECOMP_SCRIPTS" \
    -scriptPath "$MS_SCRIPTS" \
    -scriptPath "$ROOT/tools" \
    -postScript FixUpRttiAnalysisScript.java \
    -postScript RecoverClassesFromRTTIScript.java \
    ${NAMEMAP:+-postScript ApplyNameMap.java "$NAMEMAP"} \
    ${FIELDS:+-postScript ApplyFieldNames.java "$FIELDS"} \
    -postScript ExportAllFunctions.java "$OUT" \
    -postScript ExportHeaders.java "$OUT/$NAME.h"
test -s "$OUT/$NAME.c" || { echo "EXPORT_FAILED: no output in $OUT" >&2; exit 1; }
echo EXPORT_DONE
