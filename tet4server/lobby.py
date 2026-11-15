"""Rooms, logged-in players and Single Mode records, shared by the channel and game
services."""
import asyncio
import itertools
import logging
import time
from dataclasses import dataclass, field

from .accounts import Database
from .messages import FORTY_LINES, TOP, GameReport, Room, RoomRequest, SingleMode

log = logging.getLogger("tet4.lobby")


@dataclass
class _Played:
    plays: int = 0
    top: list[tuple[int, bytes]] = field(default_factory=list)


class Lobby:
    def __init__(self, db: Database | None = None):
        """With `db`, records are loaded from and written to the database."""
        self._rooms: dict[int, Room] = {}
        self._played: dict[tuple[bytes, int], _Played] = {}
        self._online: dict[bytes, str] = {}   # logged-in member -> client address
        self._db = db
        for name, mode, plays, top in db.load_single_mode() if db else []:
            self._played[(name.encode("latin-1"), mode)] = _Played(
                plays, [(value, date.encode()) for value, date in top])

    @property
    def requires_login(self) -> bool:
        """With a database, players must log in with an account's ticket."""
        return self._db is not None

    def log_in(self, member_id: bytes, host: str) -> None:
        self._online[member_id] = host

    def log_out(self, member_id: bytes, host: str) -> None:
        if self._online.get(member_id) == host:
            del self._online[member_id]

    def online_from(self, member_id: bytes, host: str) -> bool:
        """Whether the member is logged in on a channel connection from `host`."""
        return self._online.get(member_id) == host

    def rooms(self) -> list[Room]:
        return sorted(self._rooms.values(), key=lambda room: room.number)

    def create_room(self, owner: bytes, fields: RoomRequest) -> Room:
        number = next(n for n in itertools.count(1) if n not in self._rooms)
        room = self._rooms[number] = Room(number, owner, fields)
        log.info("room %d created by %r with option %r", number, owner, fields.k46e)
        return room

    def close_rooms_of(self, owner: bytes) -> None:
        for room in [room for room in self._rooms.values() if room.owner == owner]:
            del self._rooms[room.number]
            log.info("room %d closed", room.number)

    def single_mode(self, member_id: bytes, mode: int) -> SingleMode:
        """A player's games and best results in a mode, ranked against everyone's best."""
        own = self._played.get((member_id, mode), _Played())
        bests = sorted((p.top[0][0] for (_, m), p in self._played.items() if m == mode and p.top),
                       reverse=mode != FORTY_LINES)
        rank = bests.index(own.top[0][0]) + 1 if own.top else 0
        return SingleMode(own.top, own.plays, rank, len(bests))

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
