import socket
import struct
import threading
import unittest

from tet4server import channel, crypto
from tet4server.xdr import ProtocolError, Reader

CLIENT_SHARE = bytes.fromhex(
    "d33bdf696bac88168ab62b1761a3cd381b62aabf1a11925193e07fbd57b8d564"
    "f6f24c23084ed3aa5ccdf2c3c964fc4a")


def master_for_run16():
    server_wire = crypto.encrypt_share(channel.HANDSHAKE_PLAIN)
    return crypto.master_words(CLIENT_SHARE, server_wire)


class AuthToCLayoutTest(unittest.TestCase):
    def test_fields_follow_serialize_order(self):
        body = channel.auth_to_c(b"AB", b"CDE", code=7)
        r = Reader(body)
        self.assertEqual(r.u32(), channel.AUTH_TO_C)
        self.assertEqual(r.take(8), struct.pack(">q", 0))   # _KeyType int64 (+0x10)
        self.assertEqual(r.string(), b"")                    # _KeyType string (+0x18)
        self.assertEqual(r.take(8), struct.pack(">q", 0))   # _KeyType int64 (+0x38)
        self.assertEqual(r.string(), b"")                    # _KeyType string (+0x40)
        self.assertEqual(r.string(), b"")                    # _KeyType string (+0x5C)
        self.assertEqual(r.string(), b"AB")                  # Cmd string (+0x88)
        self.assertEqual(r.string(), b"CDE")                 # Cmd string (+0xA4)
        self.assertEqual(r.i32(), 7)                         # Cmd i32 (+0xC0)
        self.assertEqual(r.remaining(), 0)

    def test_length_matches_getsize_formula(self):
        # GetSize: 4 (id) + _KeyType body (28) + string lengths + 2 length prefixes + i32.
        a, b = b"x" * 5, b"y" * 9
        body = channel.auth_to_c(a, b)
        self.assertEqual(len(body), 4 + 28 + 4 + len(a) + 4 + len(b) + 4)

    def test_frame_length_covers_magic_and_body(self):
        body = channel.auth_to_c()
        framed = channel.frame(body)
        self.assertEqual(struct.unpack(">I", framed[:4])[0], 4 + len(body))
        self.assertEqual(framed[4:8], b"XLBP")


class GetUserIdToCLayoutTest(unittest.TestCase):
    def test_fields_follow_serialize_order(self):
        r = Reader(channel.get_user_id_to_c(b"test", b"", code=0))
        self.assertEqual(r.u32(), channel.GET_USER_ID_TOC)
        self.assertEqual(r.take(8), struct.pack(">q", 0))   # int64 (+0x10)
        self.assertEqual(r.string(), b"test")                # string (+0x18), key k3e
        self.assertEqual(r.string(), b"")                    # string (+0x34), key k2e
        self.assertEqual(r.i32(), 0)                         # i32 (+0x50), key k161e
        self.assertEqual(r.remaining(), 0)


class EnterChannelRequestTest(unittest.TestCase):
    def test_request_fields_follow_serialize_order(self):
        strings = tuple(f"s{i}".encode("ascii") for i in range(7))
        payload = (
            channel.pack_u32(channel.ENTER_CHANNEL_BY_USER_ID_TOS)
            + struct.pack(">Q", 0x0102030405060708)
            + b"".join(channel.pack_string(v) for v in strings[:5])
            + channel.pack_u32(0x10203040)
            + b"".join(channel.pack_string(v) for v in strings[5:])
            + struct.pack(">Q", 0x8877665544332211)
        )
        request = channel.parse_enter_channel_request(payload)
        self.assertEqual(request.user_id, 0x0102030405060708)
        self.assertEqual(request.strings, strings[:5])
        self.assertEqual(request.option, 0x10203040)
        self.assertEqual(request.trailing_strings, strings[5:])
        self.assertEqual(request.trailing_u64, 0x8877665544332211)

    def test_request_rejects_trailing_bytes(self):
        payload = (
            channel.pack_u32(channel.ENTER_CHANNEL_BY_USER_ID_TOS)
            + struct.pack(">Q", 1)
            + b"".join(channel.pack_string(b"") for _ in range(5))
            + channel.pack_u32(0)
            + channel.pack_string(b"")
            + channel.pack_string(b"")
            + struct.pack(">Q", 0)
            + b"\x00"
        )
        with self.assertRaises(ProtocolError):
            channel.parse_enter_channel_request(payload)


class EnterChannelToCLayoutTest(unittest.TestCase):
    def test_fields_follow_serialize_order(self):
        strings = tuple(f"str{i}".encode("ascii") for i in range(9))
        u32s = tuple(0x10203040 + i for i in range(8))
        r = Reader(channel.enter_channel_to_c(strings, u32s, flag=0x7F))
        self.assertEqual(r.u32(), channel.ENTER_CHANNEL_TOC)
        for value in strings[:5]:
            self.assertEqual(r.string(), value)
        for value in u32s[:3]:
            self.assertEqual(r.u32(), value)
        self.assertEqual(r.take(1), b"\x7f")
        self.assertEqual(r.string(), strings[5])
        for value in u32s[3:5]:
            self.assertEqual(r.u32(), value)
        self.assertEqual(r.string(), strings[6])
        self.assertEqual(r.string(), strings[7])
        for value in u32s[5:]:
            self.assertEqual(r.u32(), value)
        self.assertEqual(r.string(), strings[8])
        self.assertEqual(r.remaining(), 0)

    def test_default_reply_contains_empty_result_key_field(self):
        r = Reader(channel.enter_channel_to_c())
        self.assertEqual(r.u32(), channel.ENTER_CHANNEL_TOC)
        for _ in range(5):
            self.assertEqual(r.string(), b"")
        for _ in range(3):
            self.assertEqual(r.u32(), 0)
        self.assertEqual(r.take(1), b"\x00")
        self.assertEqual(r.string(), b"")
        for _ in range(2):
            self.assertEqual(r.u32(), 0)
        for _ in range(2):
            self.assertEqual(r.string(), b"")
        for _ in range(3):
            self.assertEqual(r.u32(), 0)
        self.assertEqual(r.string(), b"")  # k1e is present
        self.assertEqual(r.remaining(), 0)


class SessionTest(unittest.TestCase):
    def test_client_frame_is_read_by_server_session(self):
        master = master_for_run16()
        client_send = crypto.Stream.from_master(master, "decrypt_client")
        wire = client_send.encrypt(channel.frame(channel.auth_to_c()[:4]))
        a, b = socket.socketpair()
        try:
            a.sendall(wire)
            session = channel.Session(master)
            msg_id, _ = session.read_frame(b)
            self.assertEqual(msg_id, channel.AUTH_TO_C)
        finally:
            a.close()
            b.close()

    def test_server_frame_decrypts_with_client_receive_mirror(self):
        master = master_for_run16()
        a, b = socket.socketpair()
        try:
            session = channel.Session(master)
            session.send(a, channel.auth_to_c(b"hi"))
            wire = b.recv(4096)
            plain = crypto.Stream.from_master(master, "encrypt_to_client").decrypt(wire)
            self.assertEqual(plain, channel.frame(channel.auth_to_c(b"hi")))
        finally:
            a.close()
            b.close()


if __name__ == "__main__":
    unittest.main()
