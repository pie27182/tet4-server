"""내공, the multiplayer rating, its grades (등급) and a player's record (전적).

Players gain 내공 for every player they finish ahead of and lose some for every player
they finish behind; bonuses multiply what they gain. The grade is the band of the
client's own table (Tet4.exe 0x005DC870) that the 내공 falls in: the client draws its
medals, names and arena checks from the grade index.
"""
from bisect import bisect_right
from dataclasses import dataclass, replace

from ..config import LOSS_RATING, MIN_RATING, START_RATING, WIN_RATING

# (name, lowest 내공), by grade index; 절대신 is above everything else.
GRADES = (
    ("초보", 1000), ("평민(하)", 3500), ("평민(중)", 6000), ("평민(상)", 8700),
    ("중수(하)", 11600), ("중수(중)", 14800), ("중수(상)", 18300),
    ("고수(하)", 22000), ("고수(중)", 26000), ("고수(상)", 30000),
    ("영웅(하)", 32000), ("영웅(중)", 35400), ("영웅(상)", 39000),
    ("지존(하)", 42800), ("지존(중)", 47200), ("지존(상)", 52200),
    ("초인(하)", 57600), ("초인(중)", 63500), ("초인(상)", 70000),
    ("패왕", 71000), ("제왕", 72000), ("마왕", 73000),
    ("초급신", 74000), ("중급신", 76000), ("상급신", 80000), ("절대신", 300000),
)
_LOWEST = [low for _, low in GRADES]
NAMES = [name.encode("cp949") for name, _ in GRADES]


def grade(rating: int) -> int:
    """The grade index of a 내공."""
    return max(bisect_right(_LOWEST, rating) - 1, 0)


@dataclass(frozen=True)
class Record:
    """A player's multiplayer record."""
    rating: int = START_RATING
    wins: int = 0
    losses: int = 0
    streak: int = 0           # games won in a row now
    best_streak: int = 0
    best_grade: int = 0
    day: str = ""             # the day `today_tp` counts
    today_tp: int = 0
    max_combo: int = 0
    pieces: int = 0           # in all games: pieces placed, garbage lines sent, seconds
    attack: int = 0
    seconds: float = 0.0

    @property
    def plays(self) -> int:
        return self.wins + self.losses

    @property
    def grade(self) -> int:
        return grade(self.rating)

    @property
    def speed(self) -> float:
        """Pieces placed a second in all games (평속)."""
        return self.pieces / self.seconds if self.seconds else 0.0

    @property
    def attack_speed(self) -> float:
        """Garbage lines sent a second in all games (공속)."""
        return self.attack / self.seconds if self.seconds else 0.0


def placement(players: int, rank: int) -> int:
    """The 내공 a finishing place is worth, before bonuses."""
    return WIN_RATING * (players - rank) - LOSS_RATING * (rank - 1)


@dataclass(frozen=True)
class Result:
    """What one game did to a player's record."""
    before: Record
    after: Record
    bonus: int                # the part of the 내공 change that bonuses added
    reward: int               # TP for a grade reached for the first time


def finish(record: Record, players: int, rank: int, bonus_percent: int, tp: int,
           grade_reward: int, today: str, play) -> Result:
    """A finished game's effect on a record: the 내공 for the place (a gain raised by
    `bonus_percent`), the win or loss and streaks, the best grade with its reward, the
    TP earned today, and the game's statistics (`play`, a room.Play)."""
    change = placement(players, rank)
    bonus = change * bonus_percent // 100 if change > 0 else 0
    rating = max(record.rating + change + bonus, MIN_RATING)
    won = rank == 1
    streak = record.streak + 1 if won else 0
    best_grade = max(record.best_grade, grade(rating))
    reward = grade_reward * (best_grade - record.best_grade)
    today_tp = (record.today_tp if record.day == today else 0) + tp + reward
    after = replace(record, rating=rating, wins=record.wins + won,
                    losses=record.losses + (not won), streak=streak,
                    best_streak=max(record.best_streak, streak), best_grade=best_grade,
                    day=today, today_tp=today_tp, max_combo=max(record.max_combo, play.combo),
                    pieces=record.pieces + play.pieces, attack=record.attack + play.attack,
                    seconds=record.seconds + play.seconds)
    return Result(record, after, bonus, reward)
