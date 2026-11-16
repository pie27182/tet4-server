import unittest

from tet4server.protocol import codec
from tet4server.protocol.wire import frame, string, u32
from tet4server.services import tpack

# Replies of an earlier server that the real client accepted, framed.
AUTH_SESSION_REPLY = bytes.fromhex(
    "000000460a36b7ba0000002e545041434b3a3a436f6e6e6563746f723a3a496d706c3a3a436f6e6e"
    "6563746f723a3a4175746853657373696f6e00000001000000000000000000000000")
LOGIN_REPLY = bytes.fromhex(
    "0000005505e78e3a0000002d545041434b3a3a436f6e6e6563746f723a3a496d706c3a3a436f6e6e"
    "6563746f723a3a4c6f67696e545061636b0000000200000000000000000000000000000000000000"
    "000000000000000000")


def request(name: str, method: bytes, context: int) -> bytes:
    return u32(codec.message_id(name)) + string(method) + u32(context)


class TPackTest(unittest.TestCase):
    def test_auth_session_reply_matches_capture(self):
        body = request("TPack_AuthSessionToS",
                       b"TPACK::Connector::Impl::Connector::AuthSession", 1)
        self.assertEqual(frame(tpack.answer(body)), AUTH_SESSION_REPLY)

    def test_login_reply_matches_capture(self):
        body = request("TPack_LoginTPackToS", b"TPACK::Connector::Impl::Connector::LoginTPack", 2)
        self.assertEqual(frame(tpack.answer(body)), LOGIN_REPLY)

    def test_unknown_request_gets_no_reply(self):
        with self.assertLogs("tet4.tpack", "WARNING"):
            self.assertIsNone(tpack.answer(u32(0x03D6F36A) + string(b"x") + u32(3)))


if __name__ == "__main__":
    unittest.main()
