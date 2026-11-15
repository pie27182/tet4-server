import unittest

from tet4server import channel, single_mode
from tet4server.xdr import Reader, pack_u32


LIVE_ACCEPTED_TEST_MEMBER_BODY = bytes.fromhex(
    "0ab84d0a00000004746573740000000000000000000000000000000000000000"
    "0000000000000000000000000000000000000000000000000000000000000000"
    "0000010000000000000000000000000000000000000000000000000000000000"
    "000000"
)


class AddMemberToCProbeTest(unittest.TestCase):
    def test_matches_live_accepted_test_member_fixture(self):
        self.assertEqual(
            single_mode.add_member_to_c_candidate(b"test"),
            LIVE_ACCEPTED_TEST_MEMBER_BODY,
        )

    def test_member_id_is_the_first_field_after_message_id(self):
        body = single_mode.add_member_to_c_candidate(b"other-id")
        reader = Reader(body)
        self.assertEqual(reader.u32(), single_mode.ADD_MEMBER_TO_C)
        self.assertEqual(reader.string(), b"other-id")
        self.assertEqual(reader.remaining(), 87)
        self.assertEqual(
            reader.take(reader.remaining()),
            LIVE_ACCEPTED_TEST_MEMBER_BODY[-87:],
        )

    def test_layer_three_alignment_prefix(self):
        body = single_mode.add_member_to_c_candidate(b"test")
        wire_body = single_mode.layered_add_member_to_c_candidate(b"test")
        self.assertEqual(wire_body[:12], pack_u32(channel.LAYER_ALIGNMENT) * 3)
        self.assertEqual(wire_body[12:], body)
        message_id, unwrapped_body = channel.unwrap_layer_alignment(wire_body)
        self.assertEqual(message_id, single_mode.ADD_MEMBER_TO_C)
        self.assertEqual(unwrapped_body, body)

    def test_rejects_empty_or_non_byte_member_id(self):
        for member_id in (b"", "test", None):
            with self.subTest(member_id=member_id):
                with self.assertRaises(ValueError):
                    single_mode.add_member_to_c_candidate(member_id)


class AddMemberPairProbeTest(unittest.TestCase):
    def test_room_base_body_field_order_and_member_id(self):
        body = single_mode.room_base_add_member_to_c_candidate(b"test")
        reader = Reader(body)
        self.assertEqual(reader.u32(), single_mode.ROOM_ADD_MEMBER_TO_C)
        self.assertEqual((reader.string(), reader.string()), (b"test", b"test"))
        reader.u32()  # k58e
        self.assertEqual(
            [reader.string() for _ in range(4)],
            [b"test", b"", b"", b""],
        )
        reader.u32()  # k10e
        reader.string()  # k12e
        reader.take(16)  # two i64 fields
        for _ in range(6):
            reader.u32()
        reader.string()  # k34e
        reader.u32()  # k33e
        for _ in range(4):
            reader.string()
        reader.u32()  # k53e
        reader.u32()  # k35e
        self.assertEqual(reader.u32(), 0)  # k153e vector count
        self.assertEqual(reader.remaining(), 0)

    def test_pair_has_two_alignment_markers_between_layers(self):
        base = single_mode.room_base_add_member_to_c_candidate(b"test")
        extension = single_mode.add_member_to_c_candidate(b"test")
        pair = single_mode.layered_add_member_pair_candidate(b"test")
        self.assertTrue(pair.startswith(base))
        separator = pack_u32(channel.LAYER_ALIGNMENT) * 2
        self.assertEqual(pair[len(base):len(base) + 8], separator)
        self.assertEqual(pair[len(base) + 8:], extension)


if __name__ == "__main__":
    unittest.main()
