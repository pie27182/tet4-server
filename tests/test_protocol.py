"""The wire: batches and their layers, the codec, and the layouts the real client
accepted, checked against captured bytes and positions."""
import struct
import unittest

from tet4server.domain.lobby import Lobby
from tet4server.domain.room import Room, Settings
from tet4server.protocol import catalog, codec
from tet4server.protocol.codec import Message, pack
from tet4server.protocol.session import ALIGNMENT, decode_batch, encode_batch
from tet4server.protocol.wire import ProtocolError, string, u32
from tet4server.services import views

SINGLE_MODE = Room(7, b"test", Settings(options=b"N000S", echo=dict(k200e=b"")))
VERSUS = Room(8, b"x", Settings(title=b"title", options=b"N000MNN", limit=4,
                                echo=dict(k200e=b"G")))


def parse(body: bytes, layout: str) -> list:
    """Read `body` (after its ID) as a space-separated list of u8/u32/u64/s fields: an
    independent reading of the bytes, to check the catalog's against."""
    pos, values = 4, []
    for kind in layout.split():
        if kind == "s":
            n = struct.unpack_from(">I", body, pos)[0]
            values.append(body[pos + 4:pos + 4 + n])
            pos += 4 + n
        else:
            fmt = {"u8": ">B", "u32": ">I", "u64": ">Q"}[kind]
            values.append(struct.unpack_from(fmt, body, pos)[0])
            pos += struct.calcsize(fmt)
    if pos != len(body):
        raise AssertionError(f"{len(body) - pos} bytes left after {layout!r}")
    return values


ROOM_INFO = "u32 s u32 u32 u8 s s u32 s s u32 u32 u32 u32"


class BatchTest(unittest.TestCase):
    def test_empty_slots_before_a_message_are_alignment_markers(self):
        message = pack("Room_OrderTypeAutoEnterSingleModeRoomTetrisToS")
        batch = encode_batch((message,))
        self.assertEqual(batch, ALIGNMENT * 3 + message.body)
        self.assertEqual(decode_batch(batch), message)

    def test_an_extension_shares_the_batch_and_the_id_of_the_message_it_extends(self):
        generic = pack("Channel_GetMemberInfoToC", member=b"x")
        tetris = pack("Channel_OrderTypeGetMemberInfoTetrisToC")
        self.assertEqual((generic.layer, tetris.layer), (0, 3))
        self.assertEqual(tetris.id, generic.id)
        self.assertEqual(encode_batch((tetris, generic)), generic.body + ALIGNMENT * 2 + tetris.body)

    def test_a_batch_of_markers_only_has_no_message(self):
        self.assertIsNone(decode_batch(ALIGNMENT))
        self.assertIsNone(decode_batch(ALIGNMENT * 4))

    def test_malformed_batches_are_rejected(self):
        for batch in (b"\x00\x00", ALIGNMENT * 4 + pack("AuthToS").body):
            with self.subTest(batch=batch.hex()), self.assertRaises(ProtocolError):
                decode_batch(batch)
        with self.assertRaises(ValueError):
            encode_batch((pack("AuthToC"), pack("AuthToC")))       # one message per layer


class CodecTest(unittest.TestCase):
    def test_every_message_round_trips(self):
        for name, layout in codec.MESSAGES.items():
            with self.subTest(name=name):
                body = pack(name).body
                self.assertEqual(struct.unpack(">I", body[:4])[0], layout.id)
                self.assertEqual(pack(name, codec.unpack(name, body)).body, body)

    def test_every_layout_names_its_types(self):
        for name, layout in {**codec.STRUCTS, **codec.MESSAGES}.items():
            with self.subTest(name=name):
                self.assertEqual(len(layout.names), len(layout.fields))   # names are unique

    def test_a_message_may_end_before_its_last_fields(self):
        # GetRoomListToS as captured lacks the byte its Serialize writes last.
        captured = u32(codec.message_id("Channel_GetRoomListToS")) + string(b"TET4") + string(b"") * 2
        self.assertEqual(codec.unpack("Channel_GetRoomListToS", captured),
                         dict(game_id=b"TET4", sub_id=b"", channel_id=b"", f3=0))
        with self.assertRaises(ProtocolError):                   # but not inside a field
            codec.unpack("Channel_GetRoomListToS", captured[:-2])

    def test_values(self):
        body = pack("Channel_RoomInfoToC", info=dict(room=-1, title="방")).body
        self.assertEqual(parse(body, ROOM_INFO)[:2], [0xFFFFFFFF, "방".encode("cp949")])
        with self.assertRaises(KeyError):
            pack("Channel_RoomInfoToC", room=1)                    # no such field

    def test_keys_are_recorded_per_field(self):
        fields = {f.name: f.key for f in codec.STRUCTS["_RoomInfo"].fields}
        self.assertEqual((fields["room"], fields["limit"], fields["k127e"]),
                         ("k42e", "k66e", "k127e"))

    def test_the_catalog_lists_every_message_once(self):
        self.assertEqual(len(catalog.MESSAGES), 233)
        self.assertTrue(set(catalog.EXTENDS) <= set(catalog.MESSAGES))
        self.assertTrue(set(catalog.EXTENDS.values()) <= set(catalog.MESSAGES))


class RequestTest(unittest.TestCase):
    """Requests as the client sends them."""

    def test_room_request_fields_follow_the_client_serializer(self):
        body = b"".join([
            u32(codec.message_id("Channel_CreateRoomToS")), string(b"test"), u32(1),
            string(b"a"), string(b"b"), string(b"N000S"), u32(2), u32(3), string(b"c"), u32(4),
            string(b"TET4"), string(b""), string(b"1")])
        self.assertEqual(codec.unpack("Channel_CreateRoomToS", body), dict(
            member=b"test", room=1, password=b"a", title=b"b", options=b"N000S", k127e=2,
            limit=3, k200e=b"c", k69e=4, game_id=b"TET4", sub_id=b"", channel_id=b"1"))

    def test_enter_room_member_position(self):
        body = b"".join([
            u32(codec.message_id("Room_EnterRoomToS")), u32(1), string(b""), string(b""),
            u32(0), u32(0), string(b"N000S"), string(b""), string(b""), string(b""), u32(0),
            string(b"test"), string(b""), u32(0), u32(0)])
        request = codec.unpack("Room_EnterRoomToS", body)
        self.assertEqual((request["room"], request["options"], request["member"]),
                         (1, b"N000S", b"test"))


class ReplyLayoutTest(unittest.TestCase):
    """Replies at the positions the real client reads them from."""

    def test_enter_channel_reply_has_sub_id_in_string_3_and_channel_id_in_string_8(self):
        fields = parse(pack("Channel_EnterChannelToC", sub_id=b"K23", channel_id=b"K24",
                            room_size=6).body,
                       "s s s s s u32 u32 u32 u8 s u32 u32 s s u32 u32 u32 s")
        strings = [v for v in fields if isinstance(v, bytes)]
        self.assertEqual((strings[2], strings[7], strings[8]), (b"K23", b"K24", b""))
        self.assertEqual(fields[6], 6)          # room_size, the second number

    def test_member_info_starts_with_the_member_id(self):
        generic, _ = views.own_record(Lobby(), b"test")
        fields = parse(generic.body, "s s s s u32 s u64 " + "u32 " * 7
                       + "s u32 u32 s u64 u32 u32 s s u32 s u32 s")
        self.assertEqual(fields[0], b"test")

    def test_room_info_follows_the_message_id_directly(self):
        fields = parse(views.room_news(VERSUS).body, ROOM_INFO)
        self.assertEqual(fields[0], 8)          # the room number
        self.assertEqual(fields[3], 4)          # the player limit
        self.assertEqual(fields[5], b"N000MNN")  # the options
        self.assertEqual(fields[6], b"G")       # k200e, as the creator sent it
        self.assertEqual(fields[7], 0)          # the state: nobody is inside

    def test_room_list_holds_nested_room_infos(self):
        body = pack("Channel_GetRoomListToC", rooms=[views.room_info(SINGLE_MODE),
                                                     views.room_info(VERSUS)]).body
        fields = parse(body, "s s s u32 s u32 " + ROOM_INFO + " " + ROOM_INFO)
        self.assertEqual(fields[5], 2)
        self.assertEqual((fields[6], fields[6 + 14]), (7, 8))

    def test_start_new_game_is_an_id_at_layer_0_and_the_items_at_layer_3(self):
        generic = pack("Room_StartNewGameToC")
        tetris = pack("Room_OrderTypeStartNewGameTetrisToC", items=[dict(member=b"test", hold=1)])
        self.assertEqual(generic, Message(0, u32(generic.id)))
        self.assertEqual(parse(tetris.body, "u32 s u8 u8 u8 u8"), [1, b"test", 1, 0, 0, 0])

    def test_auth_reply_opens_with_a_key_type(self):
        self.assertEqual(parse(pack("AuthToC", login_result=1).body, "u64 s u64 s s s s u32"),
                         [0, b"", 0, b"", b"", b"", b"", 1])


if __name__ == "__main__":
    unittest.main()
