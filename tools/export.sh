#!/bin/bash
# Decompile one PE module with Ghidra headless: writes <module>.c and <module>.index.tsv.
#
#   tools/export.sh client/HgSock3.dll                 # output: work/decompiled
#   tools/export.sh client/HgSock3.dll /some/outdir    # another output folder
#
# Ghidra is looked up in this order: $GHIDRA, then work/ghidra_12.2_PUBLIC (unzip the
# Ghidra 12.2 release into work/ and nothing is installed elsewhere). The Ghidra project
# is kept in work/ghidra (or $GHIDRA_PROJECTS). Ghidra rejects project paths with
# dot-prefixed names. Settings and cache go to work/xdg. See docs/REPRODUCE.md, section 6.
set -e
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
GHIDRA="${GHIDRA:-$ROOT/work/ghidra_12.2_PUBLIC/support/analyzeHeadless}"
[ -x "$GHIDRA" ] || { echo "Ghidra not found at $GHIDRA (see docs/REPRODUCE.md, section 0)" >&2; exit 2; }
MODULE="$1"
[ -n "$MODULE" ] || { echo "usage: $0 <module.dll> [outdir]" >&2; exit 2; }
OUT="${2:-$ROOT/work/decompiled}"
PROJ_DIR="${GHIDRA_PROJECTS:-$ROOT/work/ghidra}"
# Ghidra keeps settings and cache in XDG directories; keep them inside work/ too.
export XDG_CONFIG_HOME="$ROOT/work/xdg/config" XDG_CACHE_HOME="$ROOT/work/xdg/cache"
NAME="$(basename "$MODULE")"
mkdir -p "$PROJ_DIR" "$OUT"
"$GHIDRA" "$PROJ_DIR" "$NAME" -import "$MODULE" -overwrite \
    -scriptPath "$ROOT/tools" -postScript ExportAllFunctions.java "$OUT"
test -s "$OUT/$NAME.c" || { echo "EXPORT_FAILED: no output in $OUT" >&2; exit 1; }
echo EXPORT_DONE
