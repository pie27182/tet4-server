"""Persistent multiplayer ratings and lifetime records.

The original client's exact score-transfer routine and its 24 grade thresholds live in
Tet4.exe and have not yet been recovered. This is an explicitly provisional
reconstruction: a zero-sum, placement-based Elo calculation, initialized at the
~1600 points reported by a player at the 2008 launch. The public 2008 description
confirms that the original rating moved both up and down and depended on opponents'
strength; this implementation preserves those properties without pretending to know
the original constants.
"""
import asyncio
import logging
import math
from dataclasses import dataclass
from typing import NamedTuple

from ..storage import Database

log = logging.getLogger("tet4.ratings")

INITIAL_POINTS = 1600
K_FACTOR = 32
ELO_SCALE = 400


class Standing(NamedTuple):
    points: int = INITIAL_POINTS
    plays: int = 0
    wins: int = 0
    losses: int = 0
    streak: int = 0                 # positive: win streak; negative: loss streak
    best_streak: int = 0
    best_points: int = INITIAL_POINTS
    rank: int = 0                   # global multiplayer rank; 0 until first game
    ranked: int = 0                 # players with at least one multiplayer result

    @property
    def win_rate(self) -> float:
        return self.wins / self.plays if self.plays else 0.0


@dataclass
class _Stats:
    points: int = INITIAL_POINTS
    plays: int = 0
    wins: int = 0
    losses: int = 0
    streak: int = 0
    best_streak: int = 0
    best_points: int = INITIAL_POINTS


class Ratings:
    """A global multiplayer rating board shared through the server's SQLite database."""

    def __init__(self, db: Database | None = None):
        self._db = db
        self._players: dict[bytes, _Stats] = {}
        if db:
            self._keep(db.load_ratings())

    def _keep(self, rows) -> None:
        for name, points, plays, wins, losses, streak, best_streak, best_points in rows:
            self._players[name.encode("latin-1")] = _Stats(
                points, plays, wins, losses, streak, best_streak, best_points)

    async def load(self, member_id: bytes) -> None:
        """Refresh one player's score after entering a channel."""
        if self._db:
            rows = await asyncio.to_thread(
                self._db.load_ratings, member_id.decode("latin-1"))
            self._keep(rows)

    async def refresh(self) -> None:
        """Refresh the shared board; other channel processes may have played matches."""
        if self._db:
            rows = await asyncio.to_thread(self._db.load_ratings)
            self._players.clear()
            self._keep(rows)

    def standing(self, member_id: bytes) -> Standing:
        own = self._players.get(member_id, _Stats())
        rated = [(name, stats) for name, stats in self._players.items() if stats.plays]
        rank = 0
        if own.plays:
            rank = 1 + sum(stats.points > own.points for _, stats in rated)
        return Standing(own.points, own.plays, own.wins, own.losses, own.streak,
                        own.best_streak, own.best_points, rank, len(rated))

    def leaderboard(self, limit: int = 100) -> list[tuple[bytes, Standing]]:
        """The global board, highest rating first; ties share a rank."""
        names = sorted((name for name, stats in self._players.items() if stats.plays),
                       key=lambda name: (-self._players[name].points, name))
        return [(name, self.standing(name)) for name in names[:max(0, limit)]]

    @staticmethod
    def _deltas(ratings: list[int]) -> list[int]:
        """Multi-player Elo: compare every pair by their final placement.

        Rounding uses the largest-remainder method so rating transfers sum to zero.
        """
        count = len(ratings)
        if count < 2:
            return [0] * count
        raw = []
        for place, points in enumerate(ratings):
            expected = sum(
                1.0 / (1.0 + 10.0 ** ((other - points) / ELO_SCALE))
                for other_place, other in enumerate(ratings) if other_place != place
            ) / (count - 1)
            actual = (count - place - 1) / (count - 1)
            raw.append(K_FACTOR * (actual - expected))
        deltas = [math.floor(value) for value in raw]
        remainder = -sum(deltas)
        for index in sorted(range(count), key=lambda i: raw[i] - deltas[i], reverse=True)[:remainder]:
            deltas[index] += 1
        return deltas

    @staticmethod
    def _updated(members: list[bytes], current: dict[bytes, _Stats]) -> dict[bytes, _Stats]:
        deltas = Ratings._deltas([current[name].points for name in members])
        updated: dict[bytes, _Stats] = {}
        for place, (name, delta) in enumerate(zip(members, deltas), 1):
            old = current[name]
            streak = old.streak + 1 if place == 1 and old.streak > 0 else (
                1 if place == 1 else old.streak - 1 if old.streak < 0 else -1)
            wins = old.wins + int(place == 1)
            losses = old.losses + int(place != 1)
            points = max(0, old.points + delta)
            updated[name] = _Stats(
                points=points,
                plays=old.plays + 1,
                wins=wins,
                losses=losses,
                streak=streak,
                best_streak=max(old.best_streak, streak),
                best_points=max(old.best_points, points),
            )
        return updated

    async def add_game(self, ranking: list[bytes]) -> dict[bytes, tuple[int, int, int]]:
        """Persist one completed multiplayer ranking; return before/after/delta per player.

        Single Mode rooms have one participant and therefore do not enter this board.
        """
        members = list(dict.fromkeys(member for member in ranking if member))
        if len(members) < 2:
            return {}

        if self._db:
            names = [member.decode("latin-1") for member in members]

            def update_database():
                rows = self._db.load_ratings()
                stored = {
                    name.encode("latin-1"): _Stats(points, plays, wins, losses, streak,
                                                   best_streak, best_points)
                    for name, points, plays, wins, losses, streak, best_streak, best_points in rows
                }
                current = {member: stored.get(member, _Stats()) for member in members}
                updated = self._updated(members, current)
                for member, stats in updated.items():
                    self._db.save_rating(member.decode("latin-1"), stats.points, stats.plays,
                                         stats.wins, stats.losses, stats.streak,
                                         stats.best_streak, stats.best_points)
                return current, updated

            current, updated = await self._db.write(self._db.transaction, update_database)
        else:
            current = {member: self._players.get(member, _Stats()) for member in members}
            updated = self._updated(members, current)

        for member, stats in updated.items():
            self._players[member] = stats
        changes = {
            member: (current[member].points, stats.points,
                     stats.points - current[member].points)
            for member, stats in updated.items()
        }
        log.info("multiplayer rating: %s", ", ".join(
            f"{member!r} {before}->{after} ({delta:+d})"
            for member, (before, after, delta) in changes.items()))
        return changes
