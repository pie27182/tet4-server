"""A room: its settings, its members in their seats, its host and its games."""
import time
from dataclasses import dataclass, field

from ..config import ROOM_EMPTY, ROOM_PLAYING, ROOM_WAITING, SEATS, SINGLE_MODE


@dataclass
class Settings:
    """What the room's creator chose."""
    title: bytes = b""
    password: bytes = b""
    options: bytes = b""     # the mode letter, the map and flags (config.SINGLE_MODE)
    limit: int = 0           # players asked for
    # Fields the client sets and reads back that the server does not interpret.
    echo: dict = field(default_factory=dict)


@dataclass(eq=False)
class Member:
    """A player in a room: its seat and its game connection (anything with a session)."""
    member_id: bytes
    seat: int
    connection: object


class Room:
    def __init__(self, number: int, creator: bytes, settings: Settings):
        self.number = number
        self.creator = creator
        self.host = creator
        self.settings = settings
        self.single = settings.options[4:5] == SINGLE_MODE   # private to one player, unlisted
        self.members: list[Member] = []
        self.playing = False
        self.alive: list[bytes] = []      # players of the running game still in it
        self.out: list[bytes] = []        # players out of it, first out first
        self.started = 0.0                # when the last game started (monotonic)
        self.banished: set[bytes] = set()  # members the host sent away, kept out

    @property
    def limit(self) -> int:
        """Players allowed: the creator's choice, within the seats."""
        return 1 if self.single else min(max(self.settings.limit, 2), SEATS)

    @property
    def private(self) -> bool:
        return bool(self.settings.password)

    @property
    def state(self) -> int:
        if not self.members:
            return ROOM_EMPTY
        return ROOM_PLAYING if self.playing or len(self.members) >= self.limit else ROOM_WAITING

    @property
    def mode(self) -> bytes:
        """The mode letter of the options: Y item battle, N no items, R race, ..."""
        return self.settings.options[:1]

    def seat_free(self) -> int | None:
        taken = {m.seat for m in self.members}
        return next((s for s in range(self.limit) if s not in taken), None)

    def add(self, member_id: bytes, connection: object) -> Member | None:
        """Seat a player in the first free seat; None when the room is full."""
        seat = self.seat_free()
        if seat is None:
            return None
        member = Member(member_id, seat, connection)
        self.members.append(member)
        self.members.sort(key=lambda m: m.seat)
        return member

    def remove(self, connection: object) -> Member | None:
        """Take a player out; the next member in seat order hosts if the host left."""
        for member in self.members:
            if member.connection is connection:
                self.members.remove(member)
                if member.member_id == self.host and self.members:
                    self.host = self.members[0].member_id
                return member
        return None

    def member(self, member_id: bytes) -> Member | None:
        return next((m for m in self.members if m.member_id == member_id), None)

    def start_game(self, players: list[bytes] | None = None) -> None:
        """Start a game for `players` (members; all of them by default): a member in
        watch mode stays out of the host's list and of the game."""
        members = [m.member_id for m in self.members]
        self.playing = True
        self.alive = [p for p in players or members if p in members] or members
        self.out = []
        self.started = time.monotonic()

    def played_for(self) -> float:
        """Seconds since the last game started."""
        return time.monotonic() - self.started

    def player_out(self, member_id: bytes) -> bool:
        """Count a player out of the running game (topped out, or left). True when that
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

    def post(self, *messages, exclude: object = None) -> None:
        """Send one batch to every member but the connection `exclude`, without waiting."""
        for member in self.members:
            if member.connection is not exclude:
                member.connection.session.post(*messages)
