#!/bin/bash
# Non-interactive winedbg: runs the client with a command file, prints the log.
#   tools/debug/winedbg_batch.sh tools/debug/break-get-member-list.wdbg
# winedbg needs a breakpoint as *ADDRESS (image address, see docs/ADDRESSES.md).
set -e
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
CMDS="${1:?usage: $0 <command-file> [client-dir]}"
CLIENT="${2:-$ROOT/client-patched}"
BOOT="$(cat "$ROOT/tools/bootstrap-sample.txt")"
cd "$CLIENT"
exec timeout "${TIMEOUT:-150}" env DISPLAY=:0 WAYLAND_DISPLAY=wayland-1 \
    LANG=ko_KR.UTF-8 LC_ALL=ko_KR.UTF-8 WINEDEBUG=-all \
    winedbg --file "$CMDS" ./Tet4.exe "$BOOT" | sed 's/\x1b\[[0-9;?]*[a-zA-Z]//g'
