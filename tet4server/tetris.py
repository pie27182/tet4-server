"""Deterministic Single Mode Tetris engine.

This module is deliberately independent of the reverse-engineered wire protocol.
It provides a testable server-authoritative game model; the client's exact rotation
rules, board dimensions, piece IDs and score mapping must be confirmed before this
engine is connected to GameReportToC/_SingleModeInfo serialization.
"""
from __future__ import annotations

from dataclasses import dataclass, field
import random

WIDTH = 10
HEIGHT = 20

# Coordinates are local to a 4x4 rotation box. Piece names are internal identifiers,
# not yet claimed to match the original client's enum values.
SHAPES: dict[str, tuple[tuple[int, int], ...]] = {
    "I": ((0, 1), (1, 1), (2, 1), (3, 1)),
    "O": ((1, 0), (2, 0), (1, 1), (2, 1)),
    "T": ((1, 0), (0, 1), (1, 1), (2, 1)),
    "S": ((1, 0), (2, 0), (0, 1), (1, 1)),
    "Z": ((0, 0), (1, 0), (1, 1), (2, 1)),
    "J": ((0, 0), (0, 1), (1, 1), (2, 1)),
    "L": ((2, 0), (0, 1), (1, 1), (2, 1)),
}
BAG_ORDER = tuple(SHAPES)
LINE_POINTS = (0, 100, 300, 500, 800)


def cells(piece_type: str, rotation: int = 0) -> tuple[tuple[int, int], ...]:
    """Return the occupied 4x4-local cells for a clockwise rotation state."""
    if piece_type not in SHAPES:
        raise ValueError(f"unknown tetromino: {piece_type!r}")
    result = SHAPES[piece_type]
    if piece_type == "O":
        return result
    for _ in range(rotation % 4):
        result = tuple((3 - y, x) for x, y in result)
    return result


@dataclass
class Piece:
    kind: str
    x: int = WIDTH // 2 - 2
    y: int = 0
    rotation: int = 0

    def occupied(self) -> tuple[tuple[int, int], ...]:
        return tuple((self.x + x, self.y + y) for x, y in cells(self.kind, self.rotation))


@dataclass
class GameState:
    board: list[list[str | None]] = field(
        default_factory=lambda: [[None for _ in range(WIDTH)] for _ in range(HEIGHT)]
    )
    current: Piece | None = None
    next_queue: list[str] = field(default_factory=list)
    held: str | None = None
    hold_available: bool = True
    score: int = 0
    lines: int = 0
    level: int = 0
    game_over: bool = False


class TetrisEngine:
    """Seeded seven-bag Tetris engine with deterministic, testable state transitions.

    The kick table is a conservative generic wall/floor kick, not official SRS.
    Replace it after the original client's rotation behavior has been recovered.
    """

    KICKS = ((0, 0), (-1, 0), (1, 0), (-2, 0), (2, 0), (0, -1))

    def __init__(self, seed: int = 0, width: int = WIDTH, height: int = HEIGHT):
        if width < 4 or height < 4:
            raise ValueError("board dimensions must be at least 4x4")
        self.width = width
        self.height = height
        self.rng = random.Random(seed)
        self.state = GameState(
            board=[[None for _ in range(width)] for _ in range(height)]
        )
        self._bag: list[str] = []
        self._fill_queue(7)
        self._spawn()

    def _draw(self) -> str:
        if not self._bag:
            self._bag = list(BAG_ORDER)
            self.rng.shuffle(self._bag)
        return self._bag.pop()

    def _fill_queue(self, minimum: int = 7) -> None:
        while len(self.state.next_queue) < minimum:
            self.state.next_queue.append(self._draw())

    def _spawn(self, kind: str | None = None) -> None:
        self._fill_queue(1)
        next_kind = kind if kind is not None else self.state.next_queue.pop(0)
        self.state.current = Piece(next_kind, self.width // 2 - 2, 0, 0)
        self._fill_queue(7)
        if self.collides(self.state.current):
            self.state.game_over = True

    def collides(self, piece: Piece) -> bool:
        for x, y in piece.occupied():
            if x < 0 or x >= self.width or y >= self.height:
                return True
            if y >= 0 and self.state.board[y][x] is not None:
                return True
        return False

    def move(self, dx: int, dy: int = 0) -> bool:
        if self.state.game_over or self.state.current is None:
            return False
        candidate = Piece(
            self.state.current.kind,
            self.state.current.x + dx,
            self.state.current.y + dy,
            self.state.current.rotation,
        )
        if self.collides(candidate):
            return False
        self.state.current = candidate
        return True

    def rotate(self, direction: int = 1) -> bool:
        if direction not in (-1, 1):
            raise ValueError("rotation direction must be -1 or 1")
        if self.state.game_over or self.state.current is None:
            return False
        current = self.state.current
        rotation = (current.rotation + direction) % 4
        for dx, dy in self.KICKS:
            candidate = Piece(current.kind, current.x + dx, current.y + dy, rotation)
            if not self.collides(candidate):
                self.state.current = candidate
                return True
        return False

    def soft_drop(self) -> bool:
        moved = self.move(0, 1)
        if moved:
            self.state.score += 1
        return moved

    def hard_drop(self) -> int:
        if self.state.game_over or self.state.current is None:
            return 0
        distance = 0
        while self.move(0, 1):
            distance += 1
        self.state.score += 2 * distance
        self.lock()
        return distance

    def hold(self) -> bool:
        if self.state.game_over or self.state.current is None or not self.state.hold_available:
            return False
        current_kind = self.state.current.kind
        previous = self.state.held
        self.state.held = current_kind
        self.state.hold_available = False
        if previous is None:
            self._spawn()
        else:
            self._spawn(previous)
        return not self.state.game_over

    def lock(self) -> int:
        """Lock the active piece, clear lines, update score/level, then spawn."""
        piece = self.state.current
        if piece is None or self.state.game_over:
            return 0
        occupied = piece.occupied()
        if any(y < 0 for _, y in occupied):
            self.state.game_over = True
            self.state.current = None
            return 0
        for x, y in occupied:
            self.state.board[y][x] = piece.kind

        full_rows = [i for i, row in enumerate(self.state.board) if all(v is not None for v in row)]
        cleared = len(full_rows)
        if cleared:
            self.state.board = [
                [None for _ in range(self.width)] for _ in range(cleared)
            ] + [row for row in self.state.board if any(v is None for v in row)]
            self.state.lines += cleared
            self.state.score += LINE_POINTS[min(cleared, 4)] * (self.state.level + 1)
            self.state.level = self.state.lines // 10

        self.state.hold_available = True
        self._spawn()
        return cleared

    def gravity_step(self) -> bool:
        """Advance one gravity row; lock when the active piece can no longer descend."""
        if self.move(0, 1):
            return True
        self.lock()
        return False
