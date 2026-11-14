#!/bin/bash
# Launch the patched client against the local server for one live run.
set -e
ROOT=/home/John/tet4-server
RUN="$ROOT/live-runs/k46e-fix"
BOOT="$(cat "$ROOT/tools/bootstrap-sample.txt")"
cd "$ROOT/client-patched"
exec env PATH="$PATH" HOME="$HOME" DISPLAY=:0 WAYLAND_DISPLAY=wayland-1 \
    XDG_RUNTIME_DIR=/run/user/1000 WINEDEBUG=-all \
    LANG=ko_KR.UTF-8 LC_ALL=ko_KR.UTF-8 \
    wine ./Tet4.exe "$BOOT" > "$RUN/client.log" 2>&1
