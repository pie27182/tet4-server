import struct
import unittest

from tet4server import crypto

# Captured from the real client, run16 (raw/*.bin): the 48-byte client share,
# then the 108 bytes the client sent after our 48-byte reply.
CLIENT_SHARE = bytes.fromhex(
    "d33bdf696bac88168ab62b1761a3cd381b62aabf1a11925193e07fbd57b8d564"
    "f6f24c23084ed3aa5ccdf2c3c964fc4a")
CLIENT_FIRST_FRAME = bytes.fromhex(
    "c1db05fd9c919d2755c90dfb61d6361f84a88fcb41745e2eb07cf0a828abba3"
    "ab8017a3409722ad676475f65e3dad9df2ef5b0c95e76dfeeace45a4f3b2030"
    "f320938a8dd1dc27eb9807fcef8e35a80c409124dd8805413ff096144ca5728f"
    "f5823341936d2dd78967cd29ba")
# Our reply in run16 was TEA(<24H range(24)).
SERVER_PLAIN = struct.pack("<24H", *range(24))


class MtTest(unittest.TestCase):
    def test_init_by_array_reference_vector(self):
        mt = crypto.MT19937.by_array([0x123, 0x234, 0x345, 0x456])
        self.assertEqual(mt.next32(), 1067595299)


class TeaTest(unittest.TestCase):
    def test_roundtrip_share(self):
        plain = bytes(range(48))
        self.assertEqual(crypto.decrypt_share(crypto.encrypt_share(plain)), plain)


class StreamTest(unittest.TestCase):
    def test_encrypt_then_decrypt_with_mirror_state(self):
        master = list(range(1, 13))
        msg = bytes(range(200))
        ct = crypto.Stream.from_master(master, "encrypt_to_client").encrypt(msg)
        self.assertNotEqual(ct, msg)
        self.assertEqual(crypto.Stream.from_master(master, "encrypt_to_client").decrypt(ct), msg)

    def test_run16_first_frame_decrypts_to_xlbp(self):
        server_wire = crypto.encrypt_share(SERVER_PLAIN)
        master = crypto.master_words(CLIENT_SHARE, server_wire)
        frame = crypto.Stream.from_master(master, "decrypt_client").decrypt(CLIENT_FIRST_FRAME)
        length = struct.unpack(">I", frame[:4])[0]
        self.assertEqual(length, 104)
        self.assertEqual(frame[4:8], b"XLBP")
        self.assertEqual(frame[8:12].hex(), "0365c03a", "Cmd_AuthToS")
        self.assertIn(b"TET4", frame)
        self.assertIn(b"TicketAuthByMemberId", frame)


if __name__ == "__main__":
    unittest.main()
