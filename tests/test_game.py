import tempfile
import unittest
from pathlib import Path

from tet4server import game
from tet4server.xdr import ProtocolError, pack_string, pack_u32


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



class GameRoomRequestTest(unittest.TestCase):
    def test_enter_room_request_wire_layout(self):
        strings = (
            b"a", b"bb",
            b"c", b"dd", b"eee", b"f",
            b"gg", b"hhhh",
        )
        values = (0x01020304, 0x11121314, 0x21222324,
                  0x31323334, 0x41424344, 0x51525354)
        payload = (
            pack_u32(game.GAME_ENTER_ROOM_TOS)
            + pack_u32(values[0])
            + pack_string(strings[0]) + pack_string(strings[1])
            + pack_u32(values[1]) + pack_u32(values[2])
            + b"".join(pack_string(value) for value in strings[2:6])
            + pack_u32(values[3])
            + pack_string(strings[6]) + pack_string(strings[7])
            + pack_u32(values[4]) + pack_u32(values[5])
        )
        self.assertEqual(len(payload), 76)  # observed first game XLBP body
        request = game.parse_enter_room_request(payload)
        self.assertEqual(request.first_value, values[0])
        self.assertEqual(request.first_strings, strings[:2])
        self.assertEqual(request.middle_values, values[1:3])
        self.assertEqual(request.middle_strings, strings[2:6])
        self.assertEqual(request.next_value, values[3])
        self.assertEqual(request.final_strings, strings[6:])
        self.assertEqual(request.final_values, values[4:])

    def test_enter_room_rejects_trailing_bytes(self):
        payload = (
            pack_u32(game.GAME_ENTER_ROOM_TOS)
            + pack_u32(0)
            + pack_string(b"") + pack_string(b"")
            + pack_u32(0) + pack_u32(0)
            + b"".join(pack_string(b"") for _ in range(4))
            + pack_u32(0)
            + pack_string(b"") + pack_string(b"")
            + pack_u32(0) + pack_u32(0)
            + b"\\x00"
        )
        with self.assertRaises(ProtocolError):
            game.parse_enter_room_request(payload)

    def test_alter_room_request_wire_layout(self):
        strings = (b"a", b"bb", b"c", b"ddd")
        payload = (
            pack_u32(game.GAME_ALTER_ROOM_TOS)
            + pack_u32(0x12345678)
            + b"".join(pack_string(value) for value in strings)
        )
        self.assertEqual(len(payload), 31)  # observed second game XLBP body
        request = game.parse_alter_room_request(payload)
        self.assertEqual(request.value, 0x12345678)
        self.assertEqual(request.strings, strings)

    def test_alter_room_rejects_trailing_bytes(self):
        payload = (
            pack_u32(game.GAME_ALTER_ROOM_TOS)
            + pack_u32(0)
            + b"".join(pack_string(b"") for _ in range(4))
            + b"\\x00"
        )
        with self.assertRaises(ProtocolError):
            game.parse_alter_room_request(payload)


class SingleModeGameRequestTest(unittest.TestCase):
    def test_game_report_request_layout(self):
        strings = (b"game-id", b"sub-id", b"room-id", b"session")
        counters = (10, 20, 30, 40, 50)
        payload = (
            pack_u32(game.GAME_REPORT_TOS)
            + b"".join(pack_string(value) for value in strings)
            + pack_u32(counters[0])
            + pack_u32(counters[1])
            + b"\x01"
            + b"".join(pack_u32(value) for value in counters[2:])
        )
        request = game.parse_game_report_request(payload)
        self.assertEqual(request.strings, strings)
        self.assertEqual(request.counters, counters)
        self.assertEqual(request.flag, 1)

    def test_game_report_rejects_trailing_bytes(self):
        payload = (
            pack_u32(game.GAME_REPORT_TOS)
            + b"".join(pack_string(b"") for _ in range(4))
            + pack_u32(0) + pack_u32(0) + b"\x00"
            + pack_u32(0) + pack_u32(0) + pack_u32(0)
            + b"\x00"
        )
        with self.assertRaises(ProtocolError):
            game.parse_game_report_request(payload)

    def test_poly_mino_put_request_layout(self):
        values = (1, 2, 3, 4)
        payload = pack_u32(game.POLY_MINO_PUT_TOS) + b"".join(
            pack_u32(value) for value in values
        )
        self.assertEqual(game.parse_poly_mino_put_request(payload).values, values)

    def test_poly_mino_put_rejects_trailing_bytes(self):
        payload = pack_u32(game.POLY_MINO_PUT_TOS) + b"\x00" * 17
        with self.assertRaises(ProtocolError):
            game.parse_poly_mino_put_request(payload)


if __name__ == "__main__":
    unittest.main()
