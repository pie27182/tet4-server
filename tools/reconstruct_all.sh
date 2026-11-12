#!/bin/bash
# Reconstruct every analysed module: classes from RTTI, names, fields, C++ header.
# Output: work/reconstructed/<module>.c, .index.tsv, .h; logs in work/logs.
#   tools/reconstruct_all.sh            # all modules
#   tools/reconstruct_all.sh HgKor3.dll # one or more modules
set -u
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
MODULES=("$@")
if [ ${#MODULES[@]} -eq 0 ]; then
    MODULES=(HgSock3.dll HgCom3.dll HgModel3.dll HgCtr3.dll
             CDSClientConnector.dll TPackClientConnector.dll XInNetwork.dll
             XStream.dll XSystem.dll XPlatform.dll CasualComm.dll GAS.dll
             HgAvtr3.dll HgBoard3.dll HgDlg3.dll HGF5V.dll HgFrm3.dll HgKor3.dll
             HgSoundOut.exe HgTool3.dll HgView3.dll ipcHani.dll IRIA.dll
             HgAniGm3.dll HgAniGm3_16Bit.dll GcDxbase.dll GcDxbase_3d.dll XDebug.dll
             Tet4.exe)  # last: the largest module
fi
mkdir -p "$ROOT/work/reconstructed" "$ROOT/work/logs"
failed=0
for m in "${MODULES[@]}"; do
    log="$ROOT/work/logs/reconstruct-$m.log"
    if "$ROOT/tools/recover_classes.sh" "$ROOT/client/$m" "$ROOT/work/reconstructed" > "$log" 2>&1; then
        c=$(($(wc -l < "$ROOT/work/reconstructed/${m}.index.tsv" 2>/dev/null || echo 1) - 1))
        h=$(test -s "$ROOT/work/reconstructed/${m}.h" && echo yes || echo no)
        printf "ok    %-28s functions=%-6s header=%s\n" "$m" "$c" "$h"
    else
        printf "FAIL  %-28s see work/logs/reconstruct-%s.log\n" "$m" "$m"
        failed=$((failed + 1))
    fi
done
echo "done, failed=$failed"
[ "$failed" -eq 0 ]
