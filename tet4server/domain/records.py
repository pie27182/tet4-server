"""Single Mode records: each player's games and best results per mode, and their ranks
among everyone's."""
import asyncio
import logging
import time
from bisect import bisect_left, bisect_right, insort
from collections import defaultdict
from dataclasses import dataclass, field
from typing import NamedTuple

from ..config import FORTY_LINES, RECORDS_SHOWN
from ..storage import Database

log = logging.getLogger("tet4.records")


class GameReport(NamedTuple):
    """A finished Single Mode game, as the client reports it."""
    member_id: bytes
    mode: int         # 0 Marathon, 1 40 lines, 2 Ultra
    value: int        # the score; in 40 lines the time in 1/100 s
    completed: bool   # 40 lines: all lines cleared; always set in the other modes


class Standing(NamedTuple):
    """A player's standing in one mode."""
    top: list[tuple[int, bytes]]  # the best results, best first: (score or time, date)
    plays: int = 0                # games played in the mode
    rank: int = 0                 # the place of the player's best among everyone's; 0: none
    ranked: int = 0               # players with a result in the mode


@dataclass
class _Played:
    plays: int = 0
    top: list[tuple[int, bytes]] = field(default_factory=list)


class Records:
    """Single Mode records. With a database, the database holds them: a game is added
    in one transaction, a player's records are read again on entering the channel, and
    everyone's (for the ranks) every config.RECORDS_REFRESH seconds, as channels in
    other processes add to them."""

    def __init__(self, db: Database | None = None):
        self._played: dict[tuple[bytes, int], _Played] = {}
        # Everyone's best per mode, sorted, so that a rank is a binary search: every
        # member list carries the ranks of everyone in it.
        self._bests: dict[int, list[int]] = defaultdict(list)
        self._db = db
        self._keep(db.load_single_mode() if db else [])

    def _keep(self, rows) -> None:
        for name, mode, plays, top in rows:
            self._set(name.encode("latin-1"), mode,
                      _Played(plays, [(value, date.encode()) for value, date in top]))

    def _set(self, member_id: bytes, mode: int, played: _Played) -> None:
        """Keep a player's record in a mode, and its best among everyone's."""
        bests = self._bests[mode]
        old = self._played.get((member_id, mode))
        if old and old.top:
            del bests[bisect_left(bests, old.top[0][0])]
        self._played[(member_id, mode)] = played
        if played.top:
            insort(bests, played.top[0][0])

    async def load(self, member_id: bytes) -> None:
        """Read a player's records again, on entering the channel."""
        if self._db:
            self._keep(await asyncio.to_thread(self._db.load_single_mode,
                                               member_id.decode("latin-1")))

    async def refresh(self) -> None:
        """Read everyone's records again."""
        rows = await asyncio.to_thread(self._db.load_single_mode)
        self._played.clear()
        self._bests.clear()
        self._keep(rows)

    def standing(self, member_id: bytes, mode: int) -> Standing:
        """A player's games and best results in a mode, ranked against everyone's best:
        the number of better bests, plus one."""
        own = self._played.get((member_id, mode), _Played())
        bests = self._bests[mode]
        rank = 0
        if own.top:
            best = own.top[0][0]
            better = (bisect_left(bests, best) if mode == FORTY_LINES
                      else len(bests) - bisect_right(bests, best))
            rank = better + 1
        return Standing(own.top, own.plays, rank, len(bests))

    async def add_game(self, report: GameReport) -> Standing:
        """Count a finished game and keep its result among the best RECORDS_SHOWN.
        Higher scores are better; in 40 lines the value is a time and only cleared runs
        count."""
        name = report.member_id.decode("latin-1")

        def count(played: _Played) -> tuple[_Played, bool]:
            played.plays += 1
            if not (report.completed and report.value):
                return played, False
            entry = (report.value, time.strftime("%Y.%m.%d").encode())
            played.top = sorted(played.top + [entry], key=lambda r: r[0],
                                reverse=report.mode != FORTY_LINES)[:RECORDS_SHOWN]
            return played, entry in played.top

        def read_count_write() -> tuple[_Played, bool]:
            rows = [r for r in self._db.load_single_mode(name) if r[1] == report.mode]
            played, kept = count(_Played(rows[0][2], [(v, d.encode()) for v, d in rows[0][3]])
                                 if rows else _Played())
            self._db.save_single_mode(name, report.mode, played.plays,
                                      [(value, date.decode()) for value, date in played.top])
            return played, kept

        if self._db:
            played, kept = await self._db.write(self._db.transaction, read_count_write)
        else:
            old = self._played.get((report.member_id, report.mode), _Played())
            played, kept = count(_Played(old.plays, list(old.top)))
        self._set(report.member_id, report.mode, played)
        log.info("%r mode %d: %d%s", report.member_id, report.mode, report.value,
                 ", kept among the best" if kept else "")
        return self.standing(report.member_id, report.mode)
