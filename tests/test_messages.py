import unittest

from tet4server import messages as m
from tet4server.messages import Endpoint, Msg, Room, RoomRequest
from tet4server.xdr import ProtocolError, Reader, string, u32
from tet4server.xlbp import decode_batch, encode_batch

SINGLE_MODE = RoomRequest(  # the captured Single Mode request
    member_id=b"test", k42e=0, k67e=b"", k45e=b"", k46e=b"N000S", k127e=0, k66e=0,
    k200e=b"", k69e=0, k22e=b"TET4", k23e=b"", k24e=b"1")
GAME = Endpoint("127.0.0.1", 15002)
ROOM = Room(7, b"test", SINGLE_MODE)


def parse(body: bytes, layout: str) -> list:
    """Read `body` (after its ID) as a space-separated list of u8/u32/u64/s fields."""
    r = Reader(body)
    r.u32()
    readers = {"u8": r.u8, "u32": r.u32, "u64": r.u64, "s": r.string}
    values = [readers[kind]() for kind in layout.split()]
    if r.remaining():
        raise AssertionError(f"{r.remaining()} bytes left after {layout!r}")
    return values


ROOM_INFO = "u32 s u32 u32 u8 s s u32 s s u32 u32 u32 u32"


class BatchTest(unittest.TestCase):
    def test_layer_slots_are_alignment_markers(self):
        body = u32(Msg.Room_OrderTypeAutoEnterSingleModeRoomTetrisToS) + b"fields"
        batch = encode_batch(body, layer=3)
        self.assertEqual(batch, u32(Msg.LayerAlignment) * 3 + body)
        message = decode_batch(batch)
        self.assertEqual(
            (message.layer, message.id, message.body),
            (3, Msg.Room_OrderTypeAutoEnterSingleModeRoomTetrisToS, body))

    def test_marker_only_batch_has_no_message(self):
        self.assertIsNone(decode_batch(u32(Msg.LayerAlignment)))
        self.assertIsNone(decode_batch(u32(Msg.LayerAlignment) * 4))

    def test_malformed_batches_are_rejected(self):
        for batch in (b"\x00\x00", u32(Msg.LayerAlignment) * 4 + u32(Msg.AuthToS)):
            with self.subTest(batch=batch.hex()), self.assertRaises(ProtocolError):
                decode_batch(batch)


class RequestTest(unittest.TestCase):
    def test_room_request_fields_follow_the_client_serializer(self):
        r = Reader(b"".join([
            string(b"test"), u32(1), string(b"a"), string(b"b"), string(b"N000S"), u32(2),
            u32(3), string(b"c"), u32(4), string(b"TET4"), string(b""), string(b"1")]))
        self.assertEqual(m.read_room_request(r), RoomRequest(
            b"test", 1, b"a", b"b", b"N000S", 2, 3, b"c", 4, b"TET4", b"", b"1"))

    def test_enter_room_member_id_position(self):
        r = Reader(b"".join([
            u32(1), string(b""), string(b""), u32(0), u32(0), string(b"N000S"), string(b""),
            string(b""), string(b""), u32(0), string(b"test"), string(b""), u32(0), u32(0)]))
        self.assertEqual(m.read_enter_room(r), b"test")


class ReplyLayoutTest(unittest.TestCase):
    def test_enter_channel_reply_carries_k23e_in_string_3_and_k24e_in_string_8(self):
        fields = parse(m.enter_channel_to_c(b"K23", b"K24"),
                       "s s s s s u32 u32 u32 u8 s u32 u32 s s u32 u32 u32 s")
        strings = [v for v in fields if isinstance(v, bytes)]
        self.assertEqual((strings[2], strings[7], strings[8]), (b"K23", b"K24", b""))

    def test_member_info_starts_with_the_member_id(self):
        fields = parse(m.get_member_info_to_c(b"test"),
                       "s s s s u32 s u64 " + "u32 " * 7 + "s u32 u32 s u64 u32 u32 s s u32 s u32 s")
        self.assertEqual(fields[0], b"test")

    def test_room_info_follows_the_message_id_directly(self):
        fields = parse(m.room_info_to_c(ROOM), ROOM_INFO)
        self.assertEqual(fields[3], 7)          # k66e: room number
        self.assertEqual(fields[4], 0)          # k68e
        self.assertEqual(fields[5], b"N000S")   # k46e: room option

    def test_room_list_holds_nested_room_infos(self):
        fields = parse(m.get_room_list_to_c([ROOM, Room(8, b"x", SINGLE_MODE)]),
                       "s s s u32 s u32 " + ROOM_INFO + " " + ROOM_INFO)
        self.assertEqual(fields[5], 2)
        self.assertEqual((fields[6 + 3], fields[6 + 14 + 3]), (7, 8))

    def test_auto_enter_reply_echoes_the_room_and_names_the_game_endpoint(self):
        fields = parse(m.auto_enter_single_mode_to_c(SINGLE_MODE, GAME),
                       "s u32 s s s u32 u32 s u32 s s s s u32 s s u32 s")
        self.assertEqual(fields[4], b"N000S")                     # k46e
        self.assertEqual(fields[6], 0)                            # k66e: no room yet
        self.assertEqual(fields[9:12], [b"TET4", b"", b"1"])      # k22e, k23e, k24e
        self.assertEqual(fields[12], b"")                         # status, not "v2e"
        self.assertEqual(fields[15:17], [b"127.0.0.1", 15002])    # k52e, k53e

    def test_create_room_reply_names_the_room_and_the_game_endpoint(self):
        fields = parse(m.create_room_to_c(ROOM, GAME),
                       "s u32 s s u32 s s s u32 u32 s u32 s s s s s u32 s")
        self.assertEqual(fields[1], 0)                            # failcode
        self.assertEqual((fields[7], fields[9]), (b"N000S", 7))   # k46e, k66e
        self.assertEqual(fields[12:15], [b"TET4", b"", b"1"])     # k22e, k23e, k24e
        self.assertEqual((fields[15], fields[16], fields[17]), (b"", b"127.0.0.1", 15002))

    def test_start_new_game_lists_the_members(self):
        fields = parse(m.start_new_game_to_c([b"test"]), "u32 s u8 u8 u8")
        self.assertEqual(fields, [1, b"test", 0, 0, 0])


if __name__ == "__main__":
    unittest.main()
