"""Single Mode records: plays and the best results per player and mode."""
import logging
import time
from bisect import bisect_left, bisect_right, insort
from collections import defaultdict
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
        # Everyone's best per mode, sorted, so that a rank is a binary search: every
        # member list carries the ranks of everyone in it.
        self._bests: dict[int, list[int]] = defaultdict(list)
        self._db = db
        for name, mode, plays, top in db.load_single_mode() if db else []:
            played = self._played[(name.encode("latin-1"), mode)] = _Played(
                plays, [(value, date.encode()) for value, date in top])
            if played.top:
                self._bests[mode].append(played.top[0][0])
        for bests in self._bests.values():
            bests.sort()

    def single_mode(self, member_id: bytes, mode: int) -> SingleMode:
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
        return SingleMode(own.top, own.plays, rank, len(bests))

    async def add_game(self, report: GameReport) -> SingleMode:
        """Count a finished game and keep its result among the best TOP. Higher scores
        are better; in 40 lines the value is a time and only cleared runs count."""
        played = self._played.setdefault((report.member_id, report.mode), _Played())
        played.plays += 1
        kept = False
        if report.completed and report.value:
            before = played.top[0][0] if played.top else None
            entry = (report.value, time.strftime("%Y.%m.%d").encode())
            played.top = sorted(played.top + [entry], key=lambda r: r[0],
                                reverse=report.mode != FORTY_LINES)[:TOP]
            kept = entry in played.top
            if played.top[0][0] != before:
                bests = self._bests[report.mode]
                if before is not None:
                    del bests[bisect_left(bests, before)]
                insort(bests, played.top[0][0])
        log.info("%r mode %d: %d%s", report.member_id, report.mode, report.value,
                 ", kept among the best" if kept else "")
        if self._db:
            await self._db.write(
                self._db.save_single_mode, report.member_id.decode("latin-1"), report.mode,
                played.plays, [(value, date.decode()) for value, date in played.top])
        return self.single_mode(report.member_id, report.mode)
