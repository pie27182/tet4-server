import unittest

from tet4server import channel, single_mode
from tet4server.xdr import Reader, ProtocolError, pack_u32, pack_string


class AddMemberToCCandidateTest(unittest.TestCase):
    def test_nested_member_and_single_mode_record_layout(self):
        member_id = b"local-test-member"
        body = single_mode.add_member_to_c_candidate(member_id)
        r = Reader(body)

        self.assertEqual(r.u32(), single_mode.ADD_MEMBER_TO_C)
        self.assertEqual(r.u32(), single_mode.ADD_MEMBER_COMMAND_TAG)

        self.assertEqual(r.u32(), single_mode.TETRIS_MEMBER_INFO_ID)
        self.assertEqual(r.string(), member_id)

        # Experimental default _TetrisSchoolInfo / nested _UseAbleItem.
        self.assertEqual(r.u32(), single_mode.TETRIS_SCHOOL_INFO_ID)
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.string(), b"")
        self.assertEqual(r.string(), b"")
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.u32(), single_mode.USE_ABLE_ITEM_ID)
        self.assertEqual(r.string(), b"")
        self.assertEqual(r.take(3), bytes(3))
        self.assertEqual(r.u32(), 0)

        # Remaining _TetrisMemberInfo fields.
        self.assertEqual(r.u32(), 0)       # +0x5c
        self.assertEqual(r.u32(), 0)       # +0x60
        self.assertEqual(r.string(), b"") # +0x64
        self.assertEqual(r.u32(), 0)       # +0x80
        self.assertEqual(r.u32(), 0)       # +0x84
        self.assertEqual(r.u32(), 0)       # +0x88
        self.assertEqual(r.string(), b"") # +0x8c
        self.assertEqual(r.string(), b"") # +0xa8
        self.assertEqual(r.u64(), 0)       # +0xc8
        self.assertEqual(r.u32(), 1)       # +0xd0 vector count

        # _SingleModeInfo uses +0x0c as the game-model map key.
        self.assertEqual(r.u32(), single_mode.SINGLE_MODE_INFO_ID)
        self.assertEqual(r.u32(), 0)
        self.assertEqual(tuple(r.u32() for _ in range(3)), (0, 0, 0))
        self.assertEqual(r.u32(), 0)       # empty uint32 vector
        self.assertEqual(r.u32(), 0)       # empty string vector
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.remaining(), 0)

    def test_layer_three_alignment_prefix(self):
        body = single_mode.add_member_to_c_candidate(b"member")
        wire_body = single_mode.layered_add_member_to_c_candidate(b"member")
        self.assertEqual(
            wire_body[:12],
            pack_u32(channel.LAYER_ALIGNMENT) * 3,
        )
        self.assertEqual(wire_body[12:], body)
        msg_id, payload = channel.unwrap_layer_alignment(wire_body)
        self.assertEqual(msg_id, single_mode.ADD_MEMBER_TO_C)
        self.assertEqual(payload, body)

    def test_custom_school_info_replaces_the_default_candidate(self):
        custom = pack_u32(0x12345678) + b"opaque-school-xdr"
        body = single_mode.add_member_to_c_candidate(
            b"member",
            single_mode_index=9,
            school_info=custom,
        )
        r = Reader(body)
        r.u32()
        r.u32()
        self.assertEqual(r.u32(), single_mode.TETRIS_MEMBER_INFO_ID)
        self.assertEqual(r.string(), b"member")
        self.assertEqual(r.take(len(custom)), custom)
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.u32(), 0)
        r.string()
        r.u32(); r.u32(); r.u32()
        r.string(); r.string()
        r.u64()
        self.assertEqual(r.u32(), 1)
        self.assertEqual(r.u32(), single_mode.SINGLE_MODE_INFO_ID)
        self.assertEqual(r.u32(), 9)

    def test_rejects_invalid_identity_and_index(self):
        for member_id in (b"", "member"):
            with self.subTest(member_id=member_id):
                with self.assertRaises(ValueError):
                    single_mode.add_member_to_c_candidate(member_id)
        with self.assertRaises(ValueError):
            single_mode.add_member_to_c_candidate(b"member", single_mode_index=-1)
        with self.assertRaises(ValueError):
            single_mode.tetris_member_info(b"member", school_info=b"")


if __name__ == "__main__":
    unittest.main()
