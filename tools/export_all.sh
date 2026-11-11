#!/bin/bash
# Decompile every module that the analysis uses, into work/decompiled.
# Logs go to work/logs/export-<module>.log. Usage: tools/export_all.sh [outdir]
# Two functions in the list do not decompile (HgTool3.dll OnPaint, IRIA.dll ad code);
# their lines read DECOMPILE FAILED in the output. See docs/REPRODUCE.md, section 6.
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="${1:-$ROOT/work/decompiled}"
LOGS="$ROOT/work/logs"
mkdir -p "$LOGS"
MODULES="Tet4.exe HgSock3.dll HgCom3.dll HgModel3.dll HgCtr3.dll CDSClientConnector.dll
 TPackClientConnector.dll XInNetwork.dll XStream.dll XSystem.dll XPlatform.dll
 CasualComm.dll GAS.dll HgAvtr3.dll HgBoard3.dll HgDlg3.dll HGF5V.dll HgFrm3.dll
 HgKor3.dll HgSoundOut.exe HgTool3.dll HgView3.dll ipcHani.dll IRIA.dll
 HgAniGm3.dll HgAniGm3_16Bit.dll GcDxbase.dll GcDxbase_3d.dll XDebug.dll"
failed=0
for m in $MODULES; do
    if "$ROOT/tools/export.sh" "$ROOT/client/$m" "$OUT" > "$LOGS/export-$m.log" 2>&1; then
        echo "ok    $m"
    else
        echo "FAIL  $m (see work/logs/export-$m.log)"; failed=$((failed+1))
    fi
done
echo "done, failed=$failed"
[ "$failed" -eq 0 ]
