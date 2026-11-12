"""Run the local Tet4 protocol services without the live-recording harness.

The listener implementations are intentionally kept in their protocol modules.
This module only wires them together with the same loopback endpoints used by
the checked-in bootstrap sample.
"""
from __future__ import annotations

import argparse
import logging
from pathlib import Path
import signal
import threading
from typing import Callable

from . import cds, channel, game, tpack

log = logging.getLogger("tet4.server")

BIND_HOST = "127.0.0.1"
TPACK_PORT = 10454
CDS_PORT = 15000
CHANNEL_PORT = 15001


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description="Run the local Hangame Tet4 protocol services."
    )
    parser.add_argument(
        "--channel-mode",
        choices=("full", "discovery-only"),
        default="full",
        help=(
            "full answers the currently implemented channel messages; "
            "discovery-only performs only the secure handshake"
        ),
    )
    parser.add_argument(
        "--capture-dir",
        type=Path,
        default=Path("live-runs/server/game-frames"),
        help="directory for decoded game-socket frame captures",
    )
    parser.add_argument(
        "--log-level",
        choices=("DEBUG", "INFO", "WARNING", "ERROR"),
        default="INFO",
        help="logging verbosity",
    )
    return parser


def service_specs(args: argparse.Namespace):
    """Return the concrete listeners, in startup-log order."""
    return (
        ("TPack", tpack.serve, (BIND_HOST, TPACK_PORT)),
        ("CDS", cds.serve, (BIND_HOST, CDS_PORT)),
        (
            "channel",
            channel.serve,
            (BIND_HOST, CHANNEL_PORT, args.channel_mode == "discovery-only"),
        ),
        (
            "game",
            game.serve,
            (BIND_HOST, channel.GAME_SERVER_PORT, args.capture_dir),
        ),
    )


def main(argv: list[str] | None = None) -> int:
    args = build_parser().parse_args(argv)
    logging.basicConfig(
        level=getattr(logging, args.log_level),
        format="%(asctime)s %(levelname)s %(name)s %(message)s",
    )

    stop = threading.Event()
    failures: list[str] = []

    def request_stop(signum, _frame) -> None:
        try:
            name = signal.Signals(signum).name
        except ValueError:
            name = str(signum)
        log.info("received %s; stopping local services", name)
        stop.set()

    signal.signal(signal.SIGINT, request_stop)
    if hasattr(signal, "SIGTERM"):
        signal.signal(signal.SIGTERM, request_stop)

    threads: list[threading.Thread] = []

    def run_service(
        name: str,
        target: Callable,
        target_args: tuple,
    ) -> None:
        try:
            target(*target_args)
        except Exception:
            failures.append(name)
            log.exception("%s listener failed", name)
            stop.set()
        else:
            if not stop.is_set():
                failures.append(name)
                log.error("%s listener stopped unexpectedly", name)
                stop.set()

    log.info("starting local Tet4 services on loopback")
    for name, target, target_args in service_specs(args):
        thread = threading.Thread(
            target=run_service,
            args=(name, target, target_args),
            name=f"tet4-{name}",
            daemon=True,
        )
        thread.start()
        threads.append(thread)

    log.info(
        "configured endpoints: TPack %s:%d, CDS %s:%d, channel %s:%d, game %s:%d",
        BIND_HOST,
        TPACK_PORT,
        BIND_HOST,
        CDS_PORT,
        BIND_HOST,
        CHANNEL_PORT,
        channel.GAME_SERVER_HOST.decode("ascii"),
        channel.GAME_SERVER_PORT,
    )
    log.info("channel mode=%s; game frame capture directory=%s",
             args.channel_mode, args.capture_dir)

    try:
        while not stop.wait(0.25):
            if any(not thread.is_alive() for thread in threads):
                stop.set()
    except KeyboardInterrupt:
        stop.set()
    finally:
        # Listener threads are daemons and their accept loops are blocking. Setting
        # stop ends this process after the main thread has reported shutdown.
        for thread in threads:
            thread.join(timeout=0.1)

    log.info("local Tet4 services stopped")
    return 1 if failures else 0
