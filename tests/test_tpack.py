import unittest

from tet4server import tpack
from tet4server.xdr import pack_u32, pack_string

# Response bodies captured from the real client (run6, tpack.log), frame header included.
AUTH_RESPONSE_HEX = (
    "000000460a36b7ba0000002e545041434b3a3a436f6e6e6563746f723a3a496d706c3a3a436f6e6e6563746f723a3a4175746853657373696f6e00000001000000000000000000000000"
)
LOGIN_RESPONSE_HEX = (
    "0000005505e78e3a0000002d545041434b3a3a436f6e6e6563746f723a3a496d706c3a3a436f6e6e6563746f723a3a4c6f67696e545061636b0000000200000000000000000000000000000000000000000000000000000000"
)


def auth_request(ctx=1):
    method = b"TPACK::Connector::Impl::Connector::AuthSession"
    return (pack_u32(tpack.AUTH_REQUEST) + pack_string(method)
            + pack_u32(ctx))


class TPackTest(unittest.TestCase):
    def test_auth_response_matches_capture(self):
        reply = tpack.answer(auth_request(ctx=1))
        self.assertEqual(reply.hex(), AUTH_RESPONSE_HEX)

    def test_login_response_matches_capture(self):
        method = b"TPACK::Connector::Impl::Connector::LoginTPack"
        body = (pack_u32(tpack.LOGIN_REQUEST) + pack_string(method)
                + pack_u32(2))
        self.assertEqual(tpack.answer(body).hex(), LOGIN_RESPONSE_HEX)

    def test_unknown_request_gets_no_reply(self):
        body = pack_u32(0x03D6F36A) + pack_string(b"x") + pack_u32(3)
        self.assertIsNone(tpack.answer(body))


if __name__ == "__main__":
    unittest.main()
