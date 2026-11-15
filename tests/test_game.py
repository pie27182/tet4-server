import os
import tempfile
import unittest
from pathlib import Path
from unittest import mock

from tet4server import channel, game, single_mode
from tet4server.xdr import ProtocolError, Reader, pack_string, pack_u32


def enter_room_payload(member_id: bytes = b"test", room_option: bytes = b"N000S") -> bytes:
    """Build one minimal EnterRoomToS body with the local member in final_strings[0]."""
    return (
        pack_u32(game.GAME_ENTER_ROOM_TOS)
        + pack_u32(1)
        + pack_string(b"") + pack_string(b"")
        + pack_u32(0) + pack_u32(0)
        + pack_string(room_option)
        + pack_string(b"") + pack_string(b"") + pack_string(b"")
        + pack_u32(0)
        + pack_string(member_id) + pack_string(b"")
        + pack_u32(0) + pack_u32(0)
    )


class RecordingSession:
    """Deliver one queued game frame, then close; record every reply."""

    def __init__(self, frames):
        self.frames = list(frames)
        self.sent = []

    def read_frame(self, conn):
        if not self.frames:
            raise OSError("test connection closed")
        return self.frames.pop(0)

    def send(self, conn, body):
        self.sent.append(body)


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



class StartNewGameTest(unittest.TestCase):
    def test_alias_info_vector_layout(self):
        body = game.start_new_game_to_c(b"test", b"N000S", index=7)
        r = Reader(body)
        self.assertEqual(r.u32(), game.GAME_START_NEW_GAME_TOC)
        self.assertEqual(r.u32(), 1)          # one _AliasInfo entry
        self.assertEqual(r.string(), b"test")  # +0x0c member id
        self.assertEqual(r.string(), b"N000S") # +0x28 room option
        self.assertEqual(r.u32(), 7)           # +0x44
        self.assertEqual(r.remaining(), 0)

    def test_rejects_empty_identity(self):
        with self.assertRaises(ValueError):
            game.start_new_game_to_c(b"", b"N000S")
        with self.assertRaises(ValueError):
            game.start_new_game_to_c(b"test", b"")


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
            + b"\x00"
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
            + b"\x00"
        )
        with self.assertRaises(ProtocolError):
            game.parse_alter_room_request(payload)


class EnterRoomReplyTest(unittest.TestCase):
    def test_enter_room_reply_wire_layout(self):
        body = game.enter_room_to_c(b"ok", 0, b"room")
        r = Reader(body)
        self.assertEqual(r.u32(), game.GAME_ENTER_ROOM_TOC)
        self.assertEqual(r.string(), b"ok")
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.string(), b"room")
        self.assertEqual(r.remaining(), 0)

    def test_enter_room_reply_defaults_are_success_shaped(self):
        r = Reader(game.enter_room_to_c())
        self.assertEqual(r.u32(), game.GAME_ENTER_ROOM_TOC)
        self.assertEqual(r.string(), b"")
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.string(), b"")
        self.assertEqual(r.remaining(), 0)

    def test_enter_room_reply_rejects_bad_values(self):
        for k1e, code, k2e in (
            ("", 0, b""),
            (b"", -1, b""),
            (b"", 0x100000000, b""),
            (b"", 0, ""),
        ):
            with self.subTest(k1e=k1e, code=code, k2e=k2e):
                with self.assertRaises(ValueError):
                    game.enter_room_to_c(k1e, code, k2e)


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


class EarlyAddMemberOrderingTest(unittest.TestCase):
    def run_handle(self, env: dict[str, str], member_id: bytes = b"test"):
        session = RecordingSession(
            [(game.GAME_ENTER_ROOM_TOS, enter_room_payload(member_id))]
        )
        conn = mock.Mock()
        with (
            mock.patch.dict(os.environ, env, clear=True),
            mock.patch.object(game.channel, "handshake", return_value=session),
        ):
            game.handle(conn)
        return session.sent

    @staticmethod
    def message_ids(bodies):
        return [channel.unwrap_layer_alignment(body)[0] for body in bodies]

    def test_matching_early_member_precedes_enter_room(self):
        sent = self.run_handle(
            {
                "TET4_EARLY_ADD_MEMBER_ID": "test",
                "TET4_SKIP_SVCKOR": "1",
            }
        )
        self.assertEqual(
            self.message_ids(sent),
            [single_mode.ADD_MEMBER_TO_C, game.GAME_ENTER_ROOM_TOC],
        )
        self.assertEqual(
            sent[0][:12],
            pack_u32(channel.LAYER_ALIGNMENT) * single_mode.ADD_MEMBER_LAYER,
        )
        _, body = channel.unwrap_layer_alignment(sent[0])
        reader = Reader(body)
        self.assertEqual(reader.u32(), single_mode.ADD_MEMBER_TO_C)
        self.assertEqual(reader.string(), b"test")

    def test_mismatched_early_member_is_not_sent(self):
        sent = self.run_handle(
            {
                "TET4_EARLY_ADD_MEMBER_ID": "other",
                "TET4_SKIP_SVCKOR": "1",
            }
        )
        self.assertEqual(self.message_ids(sent), [game.GAME_ENTER_ROOM_TOC])

    def test_default_behavior_remains_enter_room_then_svckor(self):
        sent = self.run_handle({})
        self.assertEqual(
            self.message_ids(sent),
            [game.GAME_ENTER_ROOM_TOC, game.GAME_START_NEW_GAME_TOC],
        )

    def test_normal_opt_in_keeps_post_enter_room_order(self):
        sent = self.run_handle(
            {
                "TET4_EXPERIMENTAL_ADD_MEMBER_BOOTSTRAP": "1",
                "TET4_SKIP_SVCKOR": "1",
            }
        )
        self.assertEqual(
            self.message_ids(sent),
            [game.GAME_ENTER_ROOM_TOC, single_mode.ADD_MEMBER_TO_C],
        )

    def test_base_mode_sends_two_layer_pair_before_enter_room(self):
        sent = self.run_handle(
            {
                "TET4_EARLY_ADD_MEMBER_ID": "test",
                "TET4_EARLY_ADD_MEMBER_BASE": "1",
                "TET4_SKIP_SVCKOR": "1",
            }
        )
        self.assertEqual(
            self.message_ids(sent),
            [single_mode.ROOM_ADD_MEMBER_TO_C, game.GAME_ENTER_ROOM_TOC],
        )
        self.assertEqual(
            sent[0],
            single_mode.layered_add_member_pair_candidate(b"test"),
        )

    def test_early_mode_suppresses_duplicate_post_enter_room_add(self):
        sent = self.run_handle(
            {
                "TET4_EARLY_ADD_MEMBER_ID": "test",
                "TET4_EXPERIMENTAL_ADD_MEMBER_BOOTSTRAP": "1",
                "TET4_SKIP_SVCKOR": "1",
            }
        )
        self.assertEqual(
            self.message_ids(sent),
            [single_mode.ADD_MEMBER_TO_C, game.GAME_ENTER_ROOM_TOC],
        )


if __name__ == "__main__":
    unittest.main()
