import socket
import struct
import threading
import unittest

from tet4server import channel, crypto
from tet4server.xdr import Reader

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
