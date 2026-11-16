"""The shared state of one channel: logged-in players, rooms, records and the shop.

The channel and game services only touch it from the event loop, so it needs no
locks. Messages to other players go out with Session.post, which never waits.
"""
import itertools
import logging
from dataclasses import dataclass
from typing import TYPE_CHECKING

from .accounts import Database
from .messages import RoomRequest
from .records import Records
from .room import Room, empty_room_info_to_c, room_info_to_c
from .shop import Shop

if TYPE_CHECKING:
    from .channel import ChannelConnection

log = logging.getLogger("tet4.lobby")

MAX_ROOMS = 100           # numbered room slots in the channel's room list (CDS MaxRoom)


@dataclass(eq=False)
class Player:
    """A member in the channel, with its channel connection."""
    member_id: bytes
    host: str             # the client's address, to bind its game connection
    channel: "ChannelConnection"
    room: Room | None = None


class Lobby:
    def __init__(self, db: Database | None = None):
        self.records = Records(db)
        self.shop = Shop(db)
        self.db = db
        self.players: dict[bytes, Player] = {}
        self.rooms: dict[int, Room] = {}

    @property
    def requires_login(self) -> bool:
        """With a database, players must log in with an account's ticket."""
        return self.db is not None

    # --- players --------------------------------------------------------------

    def enter(self, player: Player) -> Player | None:
        """Add a player to the channel; returns the session it replaces, if any."""
        old = self.players.get(player.member_id)
        self.players[player.member_id] = player
        log.info("%r entered the channel (%d online)", player.member_id, len(self.players))
        return old

    def leave(self, player: Player) -> bool:
        """Remove a player unless a newer session of the same member replaced it."""
        if self.players.get(player.member_id) is not player:
            return False
        del self.players[player.member_id]
        log.info("%r left the channel (%d online)", player.member_id, len(self.players))
        return True

    def online_from(self, member_id: bytes, host: str) -> bool:
        """Whether the member is in the channel from `host` (for the game socket)."""
        player = self.players.get(member_id)
        return player is not None and player.host == host

    def post(self, body: bytes | dict[int, bytes], exclude: Player | None = None) -> None:
        """Send one message (or a {layer: body} batch) to everyone in the channel."""
        layers = body if isinstance(body, dict) else {0: body}
        for player in list(self.players.values()):
            if player is not exclude:
                player.channel.session.post_layers(layers)

    # --- rooms ----------------------------------------------------------------

    def listed_rooms(self) -> list[Room]:
        return sorted((r for r in self.rooms.values() if not r.single), key=lambda r: r.number)

    def room_slots(self) -> list[dict]:
        """Every numbered slot of the room list: the client only updates rooms it got here
        (SetRoomInfo looks the number up), so empty slots are listed too, in state 0."""
        return [self.rooms[n].info() if n in self.rooms and not self.rooms[n].single
                else dict(k42e=n) for n in range(1, MAX_ROOMS + 1)]

    def create_room(self, creator: bytes, fields: RoomRequest) -> Room | None:
        """A new room in the requested slot (k42e) if it is free, else the first free one."""
        single = fields.k46e[4:5] == b"S"
        wanted = fields.k42e
        if 0 < wanted <= MAX_ROOMS and wanted not in self.rooms:
            number = wanted
        else:
            number = next((n for n in range(1, MAX_ROOMS + 1) if n not in self.rooms), None)
            if number is None and single:   # Single Mode rooms are never listed
                number = next(n for n in itertools.count(MAX_ROOMS + 1) if n not in self.rooms)
        if number is None:
            return None
        room = self.rooms[number] = Room(number, creator, fields, single)
        log.info("room %d created by %r: %r %r", number, creator, fields.k45e, fields.k46e)
        self.room_changed(room)
        return room

    def room_changed(self, room: Room) -> None:
        """Tell the channel about a room's new state; close it once empty and started."""
        if room.single:
            return
        self.post(room_info_to_c(room))

    def close_room(self, room: Room) -> None:
        if self.rooms.get(room.number) is room:
            del self.rooms[room.number]
            log.info("room %d closed", room.number)
            if not room.single:
                self.post(empty_room_info_to_c(room.number))

    def close_rooms_of(self, owner: bytes) -> None:
        """Rooms a player created but never entered (its channel connection ended)."""
        for room in [r for r in self.rooms.values() if r.creator == owner and not r.members]:
            self.close_room(room)
