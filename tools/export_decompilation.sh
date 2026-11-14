#!/bin/bash
# Refresh the committed decompilation snapshot in decompiled/ from work/.
# The full REA dump is stored as one deterministic gzip archive; the
# consolidated outputs are copied as plain text for browsing.
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
WORK="$ROOT/work"
OUT="$ROOT/decompiled"

for src in "$WORK/reconstructed" "$WORK/decompiled-classes" "$WORK/rtti" \
           "$WORK/decompiled-rea"; do
    if [ ! -d "$src" ]; then
        echo "missing $src; run the decompilation pipeline first" >&2
        exit 1
    fi
done

rm -rf "$OUT/ghidra" "$OUT/ghidra-extra" "$OUT/classes" "$OUT/rtti" \
       "$OUT/rea-metadata" "$OUT/framework"
mkdir -p "$OUT/ghidra" "$OUT/ghidra-extra" "$OUT/classes" "$OUT/rtti" \
         "$OUT/rea-metadata" "$OUT/framework"

cp -a "$WORK/reconstructed/." "$OUT/ghidra/"
# The older consolidated dump covers the modules that the newer
# reconstructed/ export does not include; keep only those extras.
for f in "$WORK"/decompiled/*.c "$WORK"/decompiled/*.index.tsv; do
    [ -e "$f" ] || continue
    base="$(basename "$f")"
    if [ ! -e "$OUT/ghidra/$base" ]; then
        cp -a "$f" "$OUT/ghidra-extra/"
    fi
done
cp -a "$WORK/decompiled-classes/." "$OUT/classes/"
cp -a "$WORK/rtti/." "$OUT/rtti/"
cp -a "$WORK/decompiled-rea/SUMMARY.md" \
      "$WORK/decompiled-rea/all-functions.tsv" "$OUT/rea-metadata/"
cp -a "$WORK/export/." "$OUT/framework/"

# Reproducible archive: sorted names, fixed mtime/owner, no gzip timestamp.
tar --sort=name --mtime='UTC 2020-01-01' --owner=0 --group=0 \
    --numeric-owner -cf - -C "$WORK" decompiled-rea | gzip -n \
    > "$OUT/rea-full.tar.gz"

chmod -R u+rwX,go+rX "$OUT"
printf 'snapshot: %s\n' "$OUT"
du -sh "$OUT" "$OUT"/* 2>/dev/null || true
sha256sum "$OUT/rea-full.tar.gz"
