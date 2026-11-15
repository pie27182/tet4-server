"""Rooms that exist on this server, shared by the channel and game services."""
import itertools
import logging

from .messages import Room, RoomRequest

log = logging.getLogger("tet4.lobby")


class Lobby:
    def __init__(self):
        self._rooms: dict[int, Room] = {}

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
