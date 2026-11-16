"""A room: its members' game connections in seat order, its host and its state."""
import logging
import time
from dataclasses import dataclass
from typing import TYPE_CHECKING

from . import schema
from .messages import RoomRequest

if TYPE_CHECKING:
    from .game import GameConnection

log = logging.getLogger("tet4.room")

SEATS = 6                 # CTetMainBody keeps six gamer slots

# Room states as the lobby reads them: 0 an empty slot (double-click creates a room
# there), 1, 2 and 4 joinable, 5 watch only. Quick join (바로입장, HgModel3
# CChannelLobbyModel::Msg_AutoEnterRoom) picks the fullest room in state 4 that is
# neither private nor playing.
EMPTY, WAITING, PLAYING = 0, 4, 5


@dataclass(eq=False)
class Member:
    conn: "GameConnection"
    seat: int

    @property
    def member_id(self) -> bytes:
        return self.conn.member_id


class Room:
    def __init__(self, number: int, creator: bytes, fields: RoomRequest, single: bool):
        self.number = number
        self.creator = creator
        self.host = creator
        self.fields = fields
        self.single = single      # Single Mode: private to its player, not listed
        self.members: list[Member] = []
        self.playing = False
        self.alive: list[bytes] = []      # players of the running game still in it
        self.out: list[bytes] = []        # players out of it, first out first
        self.started = 0.0                # when the last game started (monotonic)
        self.banished: set[bytes] = set()  # members the host sent away, kept out

    @property
    def limit(self) -> int:
        """Players allowed: the creator's choice (k66e), within the six seats."""
        return 1 if self.single else min(max(self.fields.k66e, 2), SEATS)

    @property
    def private(self) -> bool:
        return bool(self.fields.k67e)

    @property
    def state(self) -> int:
        if not self.members:
            return EMPTY
        return PLAYING if self.playing or len(self.members) >= self.limit else WAITING

    def seat_free(self) -> int | None:
        taken = {m.seat for m in self.members}
        return next((s for s in range(self.limit) if s not in taken), None)

    def add(self, conn: "GameConnection") -> Member | None:
        seat = self.seat_free()
        if seat is None:
            return None
        member = Member(conn, seat)
        self.members.append(member)
        self.members.sort(key=lambda m: m.seat)
        return member

    def remove(self, conn: "GameConnection") -> Member | None:
        for member in self.members:
            if member.conn is conn:
                self.members.remove(member)
                if member.member_id == self.host and self.members:
                    self.host = self.members[0].member_id
                return member
        return None

    def start_game(self, players: list[bytes] | None = None) -> None:
        """Start a game for `players` (members; all of them by default): a member in
        watch mode (관전 모드) stays out of the host's list and of the game."""
        members = [m.member_id for m in self.members]
        self.playing = True
        self.alive = [p for p in players or members if p in members] or members
        self.out = []
        self.started = time.monotonic()

    def played_for(self) -> float:
        """Seconds since the last game started."""
        return time.monotonic() - self.started

    def player_out(self, member_id: bytes) -> bool:
        """Count a player out of the running game (IWillDie, or leaving). True when that
        ended the game: every player has reported, the survivor last."""
        if member_id in self.alive:
            self.alive.remove(member_id)
            self.out.append(member_id)
        if self.playing and not self.alive:
            self.playing = False
            return True
        return False

    def ranking(self) -> list[bytes]:
        """The finished game's players, winner first: the last one out."""
        return list(reversed(self.out))

    def member(self, member_id: bytes) -> Member | None:
        return next((m for m in self.members if m.member_id == member_id), None)

    def info(self) -> dict:
        """The room's _RoomInfo for the lobby's room list (SetRoomInfo, HgModel3
        0x6090A650): k42e the number, k66e the player limit, k47e the state."""
        f = self.fields
        return dict(
            k42e=self.number, k45e=f.k45e, k127e=f.k127e, k66e=self.limit,
            k68e=int(self.private), k46e=f.k46e, k200e=f.k200e, k47e=self.state,
            k116e=self.creator, k50e=self.host, k143e=int(self.playing),
            k48e=[dict(k3e=m.member_id, k58e=m.seat) for m in self.members],
        )

    def post(self, body: bytes, layer: int = 0, exclude: "GameConnection | None" = None) -> None:
        """Send one message to every member but `exclude`, without waiting."""
        for member in self.members:
            if member.conn is not exclude:
                member.conn.session.post(body, layer)

    def post_layers(self, layers: dict[int, bytes],
                    exclude: "GameConnection | None" = None) -> None:
        for member in self.members:
            if member.conn is not exclude:
                member.conn.session.post_layers(layers)


def room_info_to_c(room: Room) -> bytes:
    return schema.pack("Channel_RoomInfoToC", room=room.info())


def empty_room_info_to_c(number: int) -> bytes:
    """A closed room: its slot is empty again."""
    return schema.pack("Channel_RoomInfoToC", room=dict(k42e=number, k47e=EMPTY))
