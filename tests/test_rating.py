"""내공, grades and records: the client's grade table, 내공 by place with bonuses and the
lowest 내공, streaks, the reward for new grades, today's TP; and the record kept with
the wallet in the database, also in a database from before records."""
import asyncio
import sqlite3
import tempfile
import unittest
from pathlib import Path

from tet4server.config import GRADE_REWARD, LOSS_RATING, START_RATING, WIN_RATING
from tet4server.domain.rating import GRADES, NAMES, Record, finish, grade, placement
from tet4server.domain.room import Play
from tet4server.domain.shop import Shop
from tet4server.storage import Database


class GradeTest(unittest.TestCase):
    def test_the_clients_table(self):
        self.assertEqual(len(GRADES), 26)
        self.assertEqual([grade(r) for r in (0, 1000, 3499, 3500, 79999, 80000, 299999,
                                             300000, 10 ** 9)],
                         [0, 0, 0, 1, 23, 24, 24, 25, 25])
        self.assertEqual(NAMES[grade(14800)].decode("cp949"), "중수(중)")


class FinishTest(unittest.TestCase):
    def test_places_bonuses_and_the_lowest_rating(self):
        self.assertEqual([placement(6, rank) for rank in range(1, 7)],
                         [5 * WIN_RATING - LOSS_RATING * i - WIN_RATING * i for i in range(6)])
        won = finish(Record(), players=2, rank=1, bonus_percent=50, tp=30, grade_reward=0,
                     today="d", play=Play())
        self.assertEqual((won.after.rating, won.bonus), (START_RATING + 150, 50))
        lost = finish(Record(), players=2, rank=2, bonus_percent=50, tp=20, grade_reward=0,
                      today="d", play=Play())
        self.assertEqual((lost.after.rating, lost.bonus, lost.after.losses),
                         (START_RATING, 0, 1))

    def test_streaks_grades_and_today(self):
        record = Record(rating=3400, best_grade=0, streak=2, best_streak=2, day="d", today_tp=5)
        result = finish(record, players=3, rank=1, bonus_percent=0, tp=30,
                        grade_reward=GRADE_REWARD, today="d",
                        play=Play(pieces=60, attack=12, combo=3, seconds=40.0))
        after = result.after
        self.assertEqual((after.rating, after.grade, after.best_grade, result.reward),
                         (3600, 1, 1, GRADE_REWARD))
        self.assertEqual((after.wins, after.streak, after.best_streak), (1, 3, 3))
        self.assertEqual(after.today_tp, 5 + 30 + GRADE_REWARD)
        later = finish(after, players=2, rank=2, bonus_percent=0, tp=20,
                       grade_reward=GRADE_REWARD, today="e",
                       play=Play(pieces=20, attack=0, combo=1, seconds=20.0))
        self.assertEqual((later.after.streak, later.after.best_streak, later.reward,
                          later.after.today_tp, later.after.plays), (0, 3, 0, 20, 2))
        self.assertEqual((later.after.max_combo, later.after.speed, later.after.attack_speed),
                         (3, 80 / 60, 12 / 60))


class KeptTest(unittest.TestCase):
    def test_records_are_kept_with_the_wallet(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "tet4.db"
            old = sqlite3.connect(path)          # a database from before records
            old.execute("CREATE TABLE wallets (name TEXT PRIMARY KEY, points INTEGER NOT NULL,"
                        " items TEXT NOT NULL, title TEXT NOT NULL, emblem TEXT NOT NULL)")
            old.execute("INSERT INTO wallets VALUES ('alice', 77, '[]', '', '')")
            old.commit()
            old.close()

            async def play() -> tuple:
                db = Database(path)
                shop = Shop(db)
                await shop.load(b"alice")
                self.assertEqual(shop.wallet(b"alice").record, Record())
                finish_on = lambda record: finish(record, 2, 1, 0, 30, 0, "d", Play())  # noqa
                result, before, after = await shop.finish_game(b"alice", finish_on, 30)
                db.close()
                return result, before, after

            result, before, after = asyncio.run(play())
            self.assertEqual((before, after, result.after.wins), (77, 107, 1))
            db = Database(path)
            self.addCleanup(db.close)
            shop = Shop(db)
            asyncio.run(shop.load(b"alice"))
            self.assertEqual(shop.wallet(b"alice").record, result.after)


if __name__ == "__main__":
    unittest.main()
