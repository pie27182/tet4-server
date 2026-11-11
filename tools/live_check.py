#!/usr/bin/env python3
"""Run the real Tet4.exe against the repository's servers and record the session.

The screen is recorded with wf-recorder from before the client starts until
Wine has fully exited (close the game yourself, or press Ctrl+C). Then every
frame where the picture changes is saved as a PNG.

Needs the original client files (not in this repository), Wine, wf-recorder and
ffmpeg, and a Wayland session. Example:

    python3 tools/live_check.py                # uses client-patched/ and live-runs/<time>/

Output in --out: session.mp4 (the recording) and frames/ (one PNG per visual change).
The startup string defaults to tools/bootstrap-sample.txt (test account, local
servers); pass --bootstrap to use another one. It must start with
metp://127.0.0.1:15000/ and include the TPack port (k602e=10454).
"""
import argparse
import logging
import os
import signal
import subprocess
import sys
import threading
import time
from datetime import datetime
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from tet4server import channel, cds, game, tpack  # noqa: E402

log = logging.getLogger("live")
HERE = Path(__file__).resolve().parent


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--client-dir", type=Path, default=HERE.parent / "client-patched")
    ap.add_argument("--bootstrap", type=Path, default=HERE / "bootstrap-sample.txt",
                    help="startup string (default: tools/bootstrap-sample.txt)")
    ap.add_argument("--out", type=Path,
                    default=HERE.parent / "live-runs" / f"{datetime.now():%Y%m%d-%H%M%S}",
                    help="output directory for session.mp4 and frames/")
    ap.add_argument("--geometry", default="0,0 1536x864",
                    help='wf-recorder -g region, e.g. "0,0 1536x864"')
    ap.add_argument("--fps", type=int, default=15, help="wf-recorder frame rate")
    ap.add_argument("--scene", type=float, default=0.02,
                    help="scene-change threshold for frame extraction (0..1, lower = more frames)")
    args = ap.parse_args()
    if not (args.client_dir / "Tet4.exe").is_file():
        ap.error(f"no Tet4.exe in {args.client_dir}; see docs/REPRODUCE.md")

    logging.basicConfig(level=logging.INFO, format="%(asctime)s %(name)s %(message)s")
    args.out.mkdir(parents=True, exist_ok=True)
    video = args.out / "session.mp4"
    frames = args.out / "frames"
    env = {**os.environ, "WAYLAND_DISPLAY": os.environ.get("WAYLAND_DISPLAY", "wayland-1"),
           "XDG_RUNTIME_DIR": os.environ.get("XDG_RUNTIME_DIR", f"/run/user/{os.getuid()}")}

    threading.Thread(target=tpack.serve, args=("127.0.0.1", 10454), daemon=True).start()
    threading.Thread(target=cds.serve, args=("127.0.0.1", 15000), daemon=True).start()
    threading.Thread(target=channel.serve, args=("127.0.0.1", 15001), daemon=True).start()
    threading.Thread(target=game.serve, args=("127.0.0.1", channel.GAME_SERVER_PORT), daemon=True).start()

    recorder = subprocess.Popen(
        ["wf-recorder", "-g", args.geometry, "-r", str(args.fps), "-c", "libx264",
         "-p", "crf=34", "-p", "preset=veryfast",
         "-F", "scale=1280:720,format=yuv420p", "-f", str(video)],
        env=env, stdin=subprocess.DEVNULL)
    log.info("recording to %s (pid %d)", video, recorder.pid)
    time.sleep(2)

    time.sleep(0.5)
    boot = args.bootstrap.read_text().strip()
    client_env = {"PATH": os.environ["PATH"], "HOME": os.environ["HOME"], "DISPLAY": ":0",
                  "WINEDEBUG": "-all", "LANG": "ko_KR.UTF-8", "LC_ALL": "ko_KR.UTF-8",
                  "WAYLAND_DISPLAY": env["WAYLAND_DISPLAY"], "XDG_RUNTIME_DIR": env["XDG_RUNTIME_DIR"]}
    try:
        wine = subprocess.Popen(["wine", "Tet4.exe", boot], cwd=args.client_dir, env=client_env,
                                stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        log.info("client started (pid %d); close the game to stop the recording", wine.pid)
        wine.wait()
    except KeyboardInterrupt:
        log.info("interrupted")
    finally:
        subprocess.run(["wineserver", "-w"], env=client_env, timeout=60, check=False)
        recorder.send_signal(signal.SIGINT)
        recorder.wait(timeout=60)
        log.info("recording stopped")

    if not video.exists() or video.stat().st_size == 0:
        log.error("no video produced: %s", video)
        return 1
    extract_frames(video, frames, args.scene)
    return 0


def extract_frames(video: Path, frames: Path, threshold: float) -> None:
    """Write one PNG per visual change (ffmpeg scene detection), plus the first frame."""
    frames.mkdir(parents=True, exist_ok=True)
    for old in frames.glob("*.png"):
        old.unlink()
    select = f"select='eq(n\\,0)+gt(scene\\,{threshold})'"
    subprocess.run(["ffmpeg", "-hide_banner", "-loglevel", "error", "-i", str(video),
                    "-vf", select, "-fps_mode", "vfr", str(frames / "%04d.png")], check=True)
    count = len(list(frames.glob("*.png")))
    log.info("saved %d frames to %s", count, frames)


if __name__ == "__main__":
    raise SystemExit(main())
