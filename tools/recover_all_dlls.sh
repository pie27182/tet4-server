#!/bin/bash
# Recover classes for every Hangame DLL (Tet4.exe is intentionally last and
# separate). Two workers, each with an isolated Ghidra project and a 2 GiB heap.
#
#   JOBS=2 HEAP=2048M GHIDRA_MAX_CPU=2 tools/recover_all_dlls.sh
#
# Per-module RTTI/MFC name maps are taken from work/rtti/names/<module>.tsv.
# Logs and the job status go to work/logs/.
set -u

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
JOBS="${JOBS:-2}"
HEAP="${HEAP:-2048M}"
MAXCPU="${GHIDRA_MAX_CPU:-2}"
STATUS="$ROOT/work/logs/recover-dlls.status"

# Small/protocol first, large graphics/audio last.
MODULES=(
    HgSock3.dll HgCom3.dll HgModel3.dll HgCtr3.dll
    CDSClientConnector.dll TPackClientConnector.dll
    XInNetwork.dll XStream.dll XSystem.dll XPlatform.dll XDebug.dll
    HgDlg3.dll HGF5V.dll HgFrm3.dll HgView3.dll HgBoard3.dll
    HgAvtr3.dll HgKor3.dll GAS.dll CasualComm.dll ipcHani.dll
    HgAniGm3.dll HgAniGm3_16Bit.dll GcDxbase.dll GcDxbase_3d.dll
    IRIA.dll HgTool3.dll neon4.dll neon9.dll HanVM2d.dll HanVM3d.dll
    HgSoundOut.exe
)

mkdir -p "$ROOT/work/logs" "$ROOT/work/rtti/names"
: > "$STATUS"

run_one() {
    local mod="$1"
    local log="$ROOT/work/logs/recover-$mod.log"
    local namemap="$ROOT/work/rtti/names/$mod.tsv"
    [ -f "$namemap" ] || namemap=""
    echo "start $(date +%H:%M:%S) $mod" >> "$STATUS"
    env GHIDRA_HEADLESS_MAXMEM="$HEAP" GHIDRA_MAX_CPU="$MAXCPU" \
        NAMEMAP="$namemap" \
        "$ROOT/tools/recover_classes.sh" "client/$mod" > "$log" 2>&1
    local rc=$?
    echo "done  $(date +%H:%M:%S) $mod rc=$rc" >> "$STATUS"
}

running=0
for mod in "${MODULES[@]}"; do
    run_one "$mod" &
    running=$((running + 1))
    if [ "$running" -ge "$JOBS" ]; then
        wait -n
        running=$((running - 1))
    fi
done
wait
echo "all done $(date +%H:%M:%S)" >> "$STATUS"
