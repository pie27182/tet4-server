"""The global multiplayer rating: results, opponent strength and persistence."""
import tempfile
import unittest
from pathlib import Path

from tet4server.domain.rating import INITIAL_POINTS, Ratings
from tet4server.storage import Database


class RatingTest(unittest.IsolatedAsyncioTestCase):
    async def test_two_player_game_tracks_rating_and_record(self):
        board = Ratings()
        changes = await board.add_game([b"alice", b"bob"])

        self.assertEqual(changes, {
            b"alice": (INITIAL_POINTS, INITIAL_POINTS + 16, 16),
            b"bob": (INITIAL_POINTS, INITIAL_POINTS - 16, -16),
        })
        winner = board.standing(b"alice")
        loser = board.standing(b"bob")
        self.assertEqual((winner.plays, winner.wins, winner.losses, winner.win_rate),
                         (1, 1, 0, 1.0))
        self.assertEqual((loser.plays, loser.wins, loser.losses, loser.win_rate),
                         (1, 0, 1, 0.0))
        self.assertEqual((winner.streak, winner.best_streak), (1, 1))
        self.assertEqual((loser.streak, loser.best_streak), (-1, 0))
        self.assertEqual((winner.rank, winner.ranked), (1, 2))
        self.assertEqual([name for name, _ in board.leaderboard()], [b"alice", b"bob"])

    async def test_rating_transfer_depends_on_opponent_strength(self):
        upset = Ratings._deltas([1600, 2000])[0]
        expected_win = Ratings._deltas([1600, 1200])[0]
        self.assertGreater(upset, expected_win)

    async def test_multi_player_rating_transfers_sum_to_zero(self):
        deltas = Ratings._deltas([1600] * 6)
        self.assertEqual(sum(deltas), 0)
        self.assertGreater(deltas[0], deltas[1])
        self.assertGreater(deltas[-2], deltas[-1])

    async def test_rating_and_records_survive_database_reload(self):
        with tempfile.TemporaryDirectory() as tmp:
            db = Database(Path(tmp) / "tet4.db")
            try:
                board = Ratings(db)
                await board.add_game([b"alice", b"bob"])
                loaded = Ratings(db)
                alice = loaded.standing(b"alice")
                bob = loaded.standing(b"bob")
                self.assertEqual((alice.points, alice.plays, alice.wins, alice.losses),
                                 (1616, 1, 1, 0))
                self.assertEqual((bob.points, bob.plays, bob.wins, bob.losses),
                                 (1584, 1, 0, 1))
            finally:
                db.close()


if __name__ == "__main__":
    unittest.main()
