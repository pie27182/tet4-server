#!/bin/bash
# Reconstruct the modules that talk to the server, or every module.
#
#   tools/reconstruct_all.sh            # protocol path only (default)
#   tools/reconstruct_all.sh --all      # every module (graphics, audio, UI too)
#   tools/reconstruct_all.sh HgCtr3.dll # explicit list
#
# For each module: classes from RTTI, names/fields maps, decompiled C and a C++
# header, into work/reconstructed; logs in work/logs.
set -u
ROOT="$(cd "$(dirname "$0")/.." && pwd)"

ALL=0
if [ "${1:-}" = "--all" ]; then
    ALL=1
    shift
fi

# Modules on the path between the client and the server: socket, framing,
# messages, model/controller, directory and account services, and the game exe.
PROTOCOL=(HgSock3.dll HgCom3.dll HgModel3.dll HgCtr3.dll
          CDSClientConnector.dll TPackClientConnector.dll
          XInNetwork.dll XStream.dll
          Tet4.exe)  # last: the largest module

# Everything else: UI toolkit, graphics, animation, audio, string table, ads,
# messenger IPC, logging, third-party runtimes. Not needed to speak the protocol.
REST=(XSystem.dll XPlatform.dll CasualComm.dll GAS.dll HgAvtr3.dll HgBoard3.dll
      HgDlg3.dll HGF5V.dll HgFrm3.dll HgKor3.dll HgSoundOut.exe HgTool3.dll
      HgView3.dll ipcHani.dll IRIA.dll HgAniGm3.dll HgAniGm3_16Bit.dll
      GcDxbase.dll GcDxbase_3d.dll XDebug.dll)

if [ "$#" -gt 0 ]; then
    MODULES=("$@")
elif [ "$ALL" -eq 1 ]; then
    MODULES=("${PROTOCOL[@]}" "${REST[@]}")
else
    MODULES=("${PROTOCOL[@]}")
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
