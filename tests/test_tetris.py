import unittest

from tet4server.tetris import Piece, TetrisEngine


class TetrisEngineTest(unittest.TestCase):
    def test_seeded_seven_bag_is_deterministic(self):
        a = TetrisEngine(seed=123)
        b = TetrisEngine(seed=123)
        sequence_a = [a.state.current.kind] + a.state.next_queue[:6]
        sequence_b = [b.state.current.kind] + b.state.next_queue[:6]
        self.assertEqual(sequence_a, sequence_b)
        self.assertEqual(set(sequence_a), set("IOTSZJL"))

    def test_cannot_move_outside_left_wall(self):
        game = TetrisEngine(seed=1)
        game.state.current = Piece("O", x=-1, y=0)
        self.assertTrue(game.collides(game.state.current))
        self.assertFalse(game.move(-1, 0))

    def test_rotation_changes_orientation_without_overlap(self):
        game = TetrisEngine(seed=2)
        game.state.current = Piece("T", x=3, y=5)
        self.assertTrue(game.rotate(1))
        self.assertEqual(game.state.current.rotation, 1)
        self.assertFalse(game.collides(game.state.current))

    def test_hard_drop_locks_four_cells_and_awards_distance_points(self):
        game = TetrisEngine(seed=3)
        original = game.state.current.kind
        distance = game.hard_drop()
        self.assertGreaterEqual(distance, 0)
        self.assertEqual(sum(cell is not None for row in game.state.board for cell in row), 4)
        self.assertGreaterEqual(game.state.score, 2 * distance)
        self.assertIsNotNone(game.state.current)
        self.assertIn(original, "IOTSZJL")

    def test_clears_full_line_and_updates_score(self):
        game = TetrisEngine(seed=4)
        game.state.board[-1] = ["X"] * game.width
        game.state.board[-1][3:7] = [None] * 4
        game.state.current = Piece("I", x=3, y=18)
        cleared = game.lock()
        self.assertEqual(cleared, 1)
        self.assertEqual(game.state.lines, 1)
        self.assertEqual(game.state.score, 100)
        self.assertTrue(all(cell is None for cell in game.state.board[-1]))

    def test_hold_can_be_used_once_until_piece_locks(self):
        game = TetrisEngine(seed=5)
        first = game.state.current.kind
        self.assertTrue(game.hold())
        self.assertEqual(game.state.held, first)
        self.assertFalse(game.state.hold_available)
        self.assertFalse(game.hold())
        game.hard_drop()
        self.assertTrue(game.state.hold_available)

    def test_lock_above_ceiling_ends_game(self):
        game = TetrisEngine(seed=6)
        game.state.current = Piece("I", x=3, y=-1, rotation=1)
        game.lock()
        self.assertTrue(game.state.game_over)
        self.assertIsNone(game.state.current)


if __name__ == "__main__":
    unittest.main()
