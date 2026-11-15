import unittest

from tet4server import tpack
from tet4server.xdr import frame, string, u32

# Replies of an earlier server that the real client accepted (run6), framed.
AUTH_SESSION_REPLY = bytes.fromhex(
    "000000460a36b7ba0000002e545041434b3a3a436f6e6e6563746f723a3a496d706c3a3a436f6e6e"
    "6563746f723a3a4175746853657373696f6e00000001000000000000000000000000")
LOGIN_REPLY = bytes.fromhex(
    "0000005505e78e3a0000002d545041434b3a3a436f6e6e6563746f723a3a496d706c3a3a436f6e6e"
    "6563746f723a3a4c6f67696e545061636b0000000200000000000000000000000000000000000000"
    "000000000000000000")


def request(msg_id: int, method: bytes, ctx: int) -> bytes:
    return u32(msg_id) + string(method) + u32(ctx)


class TPackTest(unittest.TestCase):
    def test_auth_session_reply_matches_capture(self):
        body = request(tpack.AUTH_SESSION, b"TPACK::Connector::Impl::Connector::AuthSession", 1)
        self.assertEqual(frame(tpack.answer(body)), AUTH_SESSION_REPLY)

    def test_login_reply_matches_capture(self):
        body = request(tpack.LOGIN, b"TPACK::Connector::Impl::Connector::LoginTPack", 2)
        self.assertEqual(frame(tpack.answer(body)), LOGIN_REPLY)

    def test_unknown_request_gets_no_reply(self):
        with self.assertLogs("tet4.tpack", "WARNING"):
            self.assertIsNone(tpack.answer(request(0x03D6F36A, b"x", 3)))


if __name__ == "__main__":
    unittest.main()
