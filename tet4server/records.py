"""Single Mode records: plays and the best results per player and mode."""
import asyncio
import logging
import time
from dataclasses import dataclass, field

from .accounts import Database
from .messages import FORTY_LINES, TOP, GameReport, SingleMode

log = logging.getLogger("tet4.records")


@dataclass
class _Played:
    plays: int = 0
    top: list[tuple[int, bytes]] = field(default_factory=list)


class Records:
    def __init__(self, db: Database | None = None):
        """With `db`, records are loaded from and written to the database."""
        self._played: dict[tuple[bytes, int], _Played] = {}
        self._db = db
        for name, mode, plays, top in db.load_single_mode() if db else []:
            self._played[(name.encode("latin-1"), mode)] = _Played(
                plays, [(value, date.encode()) for value, date in top])

    def single_mode(self, member_id: bytes, mode: int) -> SingleMode:
        """A player's games and best results in a mode, ranked against everyone's best."""
        own = self._played.get((member_id, mode), _Played())
        bests = sorted((p.top[0][0] for (_, m), p in self._played.items() if m == mode and p.top),
                       reverse=mode != FORTY_LINES)
        rank = bests.index(own.top[0][0]) + 1 if own.top else 0
        return SingleMode(own.top, own.plays, rank, len(bests))

    def plays(self, member_id: bytes) -> int:
        return sum(p.plays for (m, _), p in self._played.items() if m == member_id)

    async def add_game(self, report: GameReport) -> SingleMode:
        """Count a finished game and keep its result among the best TOP. Higher scores
        are better; in 40 lines the value is a time and only cleared runs count."""
        played = self._played.setdefault((report.member_id, report.mode), _Played())
        played.plays += 1
        kept = False
        if report.completed and report.value:
            entry = (report.value, time.strftime("%Y.%m.%d").encode())
            played.top = sorted(played.top + [entry], key=lambda r: r[0],
                                reverse=report.mode != FORTY_LINES)[:TOP]
            kept = entry in played.top
        log.info("%r mode %d: %d%s", report.member_id, report.mode, report.value,
                 ", kept among the best" if kept else "")
        if self._db:
            await asyncio.to_thread(
                self._db.save_single_mode, report.member_id.decode("latin-1"), report.mode,
                played.plays, [(value, date.decode()) for value, date in played.top])
        return self.single_mode(report.member_id, report.mode)
