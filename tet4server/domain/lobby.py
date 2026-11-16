"""One channel's shared state: its logged-in players, its rooms, records and shop.

The channel and game services touch it from the event loop only, so it needs no
locks. Messages to other players go out with Session.post, which never waits.
"""
import asyncio
import itertools
import json
import logging
import secrets
import time
from dataclasses import dataclass, field
from typing import Coroutine

from ..config import REPORT_CHAT_LINES, REPORT_INTERVAL, REPORT_TEXT, ROOM_SLOTS
from ..storage import Database
from .records import Records
from .rating import Ratings
from .room import Room, Settings
from .shop import Shop

log = logging.getLogger("tet4.lobby")


@dataclass(eq=False)
class Player:
    """A member in the channel, with its channel connection's session."""
    member_id: bytes
    host: str                 # the client's address: its game connection must come from it
    session: object           # the channel connection's Session
    room: Room | None = None
    # This login, as the database's presence table knows it: a newer login of the same
    # member in another channel ends this one.
    login_id: str = field(default_factory=lambda: secrets.token_hex(8))

    @property
    def name(self) -> str:
        return self.member_id.decode("latin-1")


class Lobby:
    def __init__(self, db: Database | None = None, number: int = 1):
        self.db = db
        self.number = number                  # the channel's
        self.records = Records(db)
        self.ratings = Ratings(db)
        self.shop = Shop(db)
        self.players: dict[bytes, Player] = {}
        self.rooms: dict[int, Room] = {}
        # Map names by mode letter and place in the client's map list, learnt from game
        # starts: the host's map choice carries only the place.
        self.map_names: dict[tuple[bytes, int], bytes] = {}
        self._reported: dict[bytes, float] = {}     # when each player last reported
        self._tasks: set[asyncio.Task] = set()

    @property
    def requires_login(self) -> bool:
        """With a database, players must log in with an account's ticket."""
        return self.db is not None

    # --- background work ---------------------------------------------------------------

    def spawn(self, work: Coroutine) -> None:
        """Run work in the background, logging its failure."""
        task = asyncio.get_running_loop().create_task(work)
        self._tasks.add(task)
        task.add_done_callback(self._done)

    def _done(self, task: asyncio.Task) -> None:
        self._tasks.discard(task)
        if not task.cancelled() and task.exception():
            log.error("background work failed", exc_info=task.exception())

    async def close(self) -> None:
        """Let the background work finish (the server is stopping)."""
        await asyncio.gather(*self._tasks, return_exceptions=True)

    # --- players -------------------------------------------------------------------------

    def enter(self, player: Player) -> Player | None:
        """Add a player to the channel; the earlier login of the same member it replaces."""
        old = self.players.get(player.member_id)
        self.players[player.member_id] = player
        log.info("%r entered the channel (%d online)", player.member_id, len(self.players))
        if self.db:
            self.db.submit(self.db.arrive, player.name, self.number, player.login_id)
        return old

    def leave(self, player: Player) -> bool:
        """Remove a player unless a newer login of the same member replaced it."""
        if self.players.get(player.member_id) is not player:
            return False
        del self.players[player.member_id]
        log.info("%r left the channel (%d online)", player.member_id, len(self.players))
        if self.db:
            self.db.submit(self.db.depart, player.name, player.login_id)
        return True

    async def end_replaced_logins(self) -> None:
        """Close the connections of players who have since logged in again in another
        channel (each channel runs this every config.PRESENCE_CHECK seconds)."""
        if not self.players:
            return
        current = await asyncio.to_thread(self.db.logins, [p.name for p in self.players.values()])
        for player in list(self.players.values()):
            if current.get(player.name, player.login_id) != player.login_id:
                log.info("%r logged in again elsewhere", player.member_id)
                player.session.close()

    def online_from(self, member_id: bytes, host: str) -> bool:
        """Whether the member is in the channel from `host` (for the game socket)."""
        player = self.players.get(member_id)
        return player is not None and player.host == host

    def post(self, *messages, exclude: Player | None = None) -> None:
        """Send one batch to everyone in the channel but `exclude`, without waiting."""
        for player in list(self.players.values()):
            if player is not exclude:
                player.session.post(*messages)

    def report(self, reporter: bytes, complaint: dict) -> None:
        """A player reports another (신고, from the lobby or a room) with the chat lines
        its client saw: logged, and kept in the database for the operators
        (tools/reports.py lists them). One report per player every REPORT_INTERVAL."""
        now = time.time()
        if now - self._reported.get(reporter, 0.0) < REPORT_INTERVAL:
            return
        self._reported[reporter] = now

        def text(value: bytes) -> str:
            return value.decode("cp949", "replace")[:REPORT_TEXT]

        chat = [[text(line["time"]), text(line["member"]), text(line["text"])]
                for line in complaint["chat"][-REPORT_CHAT_LINES:]]
        report = (now, self.number, text(reporter), text(complaint["reported"]),
                  text(complaint["reason"]), json.dumps(chat, ensure_ascii=False))
        log.info("%s reports %s: %s (%d chat lines)", *report[2:5], len(chat))
        if self.db:
            self.db.submit(self.db.add_report, report)

    # --- rooms ---------------------------------------------------------------------------

    def create_room(self, creator: bytes, settings: Settings, wanted: int = 0) -> Room | None:
        """A new room in slot `wanted` if it is free, else in the first free slot; None
        when every slot is taken. Single Mode rooms are never listed, so they always
        find a number, past the listed slots if need be."""
        room = Room(0, creator, settings)
        if 0 < wanted <= ROOM_SLOTS and wanted not in self.rooms:
            number = wanted
        else:
            number = next((n for n in range(1, ROOM_SLOTS + 1) if n not in self.rooms), None)
            if number is None and room.single:
                number = next(n for n in itertools.count(ROOM_SLOTS + 1) if n not in self.rooms)
        if number is None:
            return None
        room.number = number
        self.rooms[number] = room
        log.info("room %d created by %r: %r %r", number, creator, settings.title,
                 settings.options)
        return room

    def close_room(self, room: Room) -> bool:
        """Forget a room; False if it was already gone."""
        if self.rooms.get(room.number) is not room:
            return False
        del self.rooms[room.number]
        log.info("room %d closed", room.number)
        return True

    def close_rooms_of(self, creator: bytes) -> list[Room]:
        """Close the rooms a player created but never entered (its channel connection
        ended); the rooms closed."""
        rooms = [r for r in self.rooms.values() if r.creator == creator and not r.members]
        return [room for room in rooms if self.close_room(room)]
