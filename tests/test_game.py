import tempfile
import unittest
from pathlib import Path

from tet4server import game


class SaveGameFrameTest(unittest.TestCase):
    def test_frame_is_saved_as_binary_body(self):
        with tempfile.TemporaryDirectory() as temp:
            payload = bytes.fromhex("1122334400000003616263")
            saved = game.save_frame(
                Path(temp), "connection1234", 1, 0x11223344, payload
            )
            self.assertIsNotNone(saved)
            self.assertEqual(saved.read_bytes(), payload)
            self.assertIn("0001-0x11223344.bin", saved.name)

    def test_no_capture_directory_means_no_file(self):
        self.assertIsNone(game.save_frame(None, "connection1234", 1, 1, b"x"))


if __name__ == "__main__":
    unittest.main()
