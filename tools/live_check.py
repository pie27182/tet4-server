#!/usr/bin/env python3
"""Run the real Tet4.exe against the repository's servers and report what it sent.

Needs the original client files (not in this repository), Wine, and a Wayland
session for screenshots (grim). Example:

    python3 tools/live_check.py --client-dir ~/h-tetra-client \
        --bootstrap ~/tet4-bootstrap.txt --seconds 60 --shots /tmp/shots

The bootstrap file holds the command-line string that starts Tet4.exe (it must
contain the TPack port and metp://127.0.0.1:15000/). Use a test account only.
"""
import argparse
import logging
import os
import subprocess
import sys
import threading
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from tet4server import channel, cds, tpack  # noqa: E402

log = logging.getLogger("live")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--client-dir", type=Path, required=True)
    ap.add_argument("--bootstrap", type=Path, required=True)
    ap.add_argument("--seconds", type=int, default=60)
    ap.add_argument("--shots", type=Path, help="directory for screenshots at 30 s and the end")
    args = ap.parse_args()

    logging.basicConfig(level=logging.INFO, format="%(asctime)s %(name)s %(message)s")
    threading.Thread(target=tpack.serve, args=("127.0.0.1", 10454), daemon=True).start()
    threading.Thread(target=cds.serve, args=("127.0.0.1", 15000), daemon=True).start()
    threading.Thread(target=channel.serve, args=("127.0.0.1", 15001), daemon=True).start()
    time.sleep(0.5)

    boot = args.bootstrap.read_text().strip()
    env = {"PATH": os.environ["PATH"], "HOME": os.environ["HOME"], "DISPLAY": ":0",
           "WINEDEBUG": "-all", "LANG": "ko_KR.UTF-8", "LC_ALL": "ko_KR.UTF-8"}
    proc = subprocess.Popen(["wine", "Tet4.exe", boot], cwd=args.client_dir, env=env,
                            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    t0 = time.time()
    shots = []
    if args.shots:
        args.shots.mkdir(parents=True, exist_ok=True)
        shots = [30] if args.seconds > 30 else []
    for mark in shots:
        time.sleep(max(0, mark - (time.time() - t0)))
        _shot(args.shots / f"t{mark}.png")
    time.sleep(max(0, args.seconds - (time.time() - t0)))
    if args.shots:
        _shot(args.shots / f"t{args.seconds}.png")
    subprocess.run(["pkill", "-x", "Tet4.exe"])
    proc.wait(timeout=30)
    return 0


def _shot(path: Path) -> None:
    env = {**os.environ, "WAYLAND_DISPLAY": os.environ.get("WAYLAND_DISPLAY", "wayland-1")}
    subprocess.run(["grim", str(path)], env=env, check=False)
    log.info("screenshot %s", path)


if __name__ == "__main__":
    raise SystemExit(main())
