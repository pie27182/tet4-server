import struct
import unittest

from tet4server.protocol import cipher

# run16: the client's 48-byte share and the 108 bytes it sent after the server's
# share, which was the plaintext 0, 1, ..., 23 as little-endian u16.
CLIENT_SHARE = bytes.fromhex(
    "d33bdf696bac88168ab62b1761a3cd381b62aabf1a11925193e07fbd57b8d564"
    "f6f24c23084ed3aa5ccdf2c3c964fc4a")
CLIENT_FIRST_FRAME = bytes.fromhex(
    "c1db05fd9c919d2755c90dfb61d6361f84a88fcb41745e2eb07cf0a828abba3"
    "ab8017a3409722ad676475f65e3dad9df2ef5b0c95e76dfeeace45a4f3b2030"
    "f320938a8dd1dc27eb9807fcef8e35a80c409124dd8805413ff096144ca5728f"
    "f5823341936d2dd78967cd29ba")
RUN16_SERVER_PLAIN = struct.pack("<24H", *range(24))


class CaptureTest(unittest.TestCase):
    def test_run16_first_frame_decrypts_to_auth_request(self):
        master = cipher.master_key(CLIENT_SHARE, cipher.seal_share(RUN16_SERVER_PLAIN))
        plain = cipher.upstream_cipher(master).decrypt(CLIENT_FIRST_FRAME)
        self.assertEqual(struct.unpack(">I", plain[:4])[0], len(plain) - 4)
        self.assertEqual(plain[4:8], b"XLBP")
        self.assertEqual(plain[8:12].hex(), "0365c03a")  # Cmd_AuthToS
        self.assertIn(b"TicketAuthByMemberId", plain)


class PrimitiveTest(unittest.TestCase):
    def test_mt19937_init_by_array_reference_output(self):
        # First genrand_int32() of the reference mt19937ar.c after
        # init_by_array({0x123, 0x234, 0x345, 0x456}).
        self.assertEqual(cipher.mt19937([0x123, 0x234, 0x345, 0x456]).getrandbits(32), 1067595299)

    def test_stream_is_the_same_in_any_pieces(self):
        # Whole blocks take a faster path than single bytes; both must agree.
        master = tuple(range(7, 19))
        data = bytes(range(256)) * 3
        whole = cipher.downstream_cipher(master).encrypt(data)
        pieces, stream, i = [], cipher.downstream_cipher(master), 0
        for size in (1, 7, 8, 9, 3, 16, 5, 64, 2, 300):
            pieces.append(stream.encrypt(data[i:i + size]))
            i += size
        pieces.append(stream.encrypt(data[i:]))
        self.assertEqual(b"".join(pieces), whole)
        self.assertEqual(cipher.downstream_cipher(master).decrypt(whole), data)

    def test_share_round_trip(self):
        plain = cipher.new_share()
        self.assertEqual(len(plain), cipher.SHARE_SIZE)
        self.assertEqual(cipher.open_share(cipher.seal_share(plain)), plain)

    def test_both_sides_derive_the_same_master_key(self):
        client, server = cipher.seal_share(cipher.new_share()), cipher.seal_share(cipher.new_share())
        self.assertEqual(cipher.master_key(client, server), cipher.master_key(client, server))
        self.assertEqual(len(cipher.master_key(client, server)), 12)

    def test_each_direction_decrypts_what_its_peer_encrypts(self):
        master = tuple(range(1, 13))
        data = bytes(range(256)) * 3  # several blocks and a partial one
        for make in (cipher.upstream_cipher, cipher.downstream_cipher):
            sealed = make(master).encrypt(data)
            self.assertNotEqual(sealed, data)
            self.assertEqual(make(master).decrypt(sealed), data)

    def test_cipher_state_carries_across_calls(self):
        master = tuple(range(1, 13))
        data = bytes(range(100))
        whole = cipher.downstream_cipher(master).encrypt(data)
        pieces = cipher.downstream_cipher(master)
        self.assertEqual(pieces.encrypt(data[:13]) + pieces.encrypt(data[13:]), whole)


if __name__ == "__main__":
    unittest.main()
