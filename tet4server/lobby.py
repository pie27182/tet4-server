"""Rooms and Single Mode records, shared by the channel and game services."""
import itertools
import json
import logging
import time
from dataclasses import dataclass, field
from pathlib import Path

from .messages import FORTY_LINES, TOP, GameReport, Room, RoomRequest, SingleMode

log = logging.getLogger("tet4.lobby")


@dataclass
class _Played:
    plays: int = 0
    top: list[tuple[int, bytes]] = field(default_factory=list)


class Lobby:
    def __init__(self, records: Path | None = None):
        """`records`: a JSON file that keeps Single Mode records across restarts."""
        self._rooms: dict[int, Room] = {}
        self._played: dict[tuple[bytes, int], _Played] = {}
        self._path = records
        if records and records.exists():
            for e in json.loads(records.read_text(encoding="utf-8")):
                self._played[(e["member"].encode("latin-1"), e["mode"])] = _Played(
                    e["plays"], [(value, date.encode()) for value, date in e["top"]])

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

    def add_game(self, report: GameReport) -> SingleMode:
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
        if self._path:
            self._save()
        return self.single_mode(report.member_id, report.mode)

    def _save(self) -> None:
        entries = [{"member": member.decode("latin-1"), "mode": mode, "plays": p.plays,
                    "top": [[value, date.decode()] for value, date in p.top]}
                   for (member, mode), p in self._played.items()]
        tmp = self._path.with_name(self._path.name + ".tmp")
        tmp.write_text(json.dumps(entries, indent=1), encoding="utf-8")
        tmp.replace(self._path)
