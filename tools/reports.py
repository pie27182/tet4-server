"""List the reports (신고) players made of each other, newest first: who reported whom,
why, and the chat lines the reporter's client sent with the report.

    python3 tools/reports.py --db /var/lib/tet4/tet4.db [--last 20]

The server keeps reports only with a database (--db).
"""
import argparse
import json
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))

from tet4server.storage import Database  # noqa: E402


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--db", type=Path, required=True, metavar="FILE",
                        help="the server's database")
    parser.add_argument("--last", type=int, default=20, metavar="N",
                        help="how many reports to show (default 20)")
    args = parser.parse_args(argv)
    if not args.db.exists():
        parser.error(f"no database at {args.db}")
    db = Database(args.db)
    try:
        reports = db.reports(args.last)
    finally:
        db.close()
    if not reports:
        print("No reports.")
    for when, channel, reporter, reported, reason, chat in reports:
        stamp = time.strftime("%Y-%m-%d %H:%M", time.localtime(when))
        print(f"{stamp}  channel {channel}: {reporter} reports {reported}: {reason}")
        for said_at, member, text in json.loads(chat):
            print(f"    {said_at}  {member}: {text}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
