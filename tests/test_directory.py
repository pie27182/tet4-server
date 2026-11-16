import unittest

from tet4server.protocol import codec
from tet4server.protocol.wire import Endpoint
from tet4server.services import directory

# The request captured from the client: CDS_ReqSelect, transaction 1, table "COMMON".
SELECT_COMMON = bytes.fromhex("05740f6a" "00000001" "00000006" "434f4d4d4f4e")
CHANNELS = [Endpoint("127.0.0.1", 15001), Endpoint("127.0.0.1", 15003)]


class DirectoryTest(unittest.TestCase):
    def test_one_row_per_channel_with_host_and_port_in_columns_3_and_4(self):
        body = directory.answer(SELECT_COMMON, CHANNELS, lambda: [12, 0])
        self.assertEqual(body[:4], codec.pack("CDS_AnsSelect").body[:4])
        reply = codec.unpack("CDS_AnsSelect", body)
        self.assertEqual((reply["transaction"], reply["error"]), (1, 0))
        self.assertEqual(reply["columns"], [c.encode() for c in directory.COLUMNS])
        self.assertEqual(reply["columns"][3:5], [b"ChannelIP", b"ChannelPort"])
        self.assertEqual([row[2:5] for row in reply["rows"]],
                         [[b"1", b"127.0.0.1", b"15001"], [b"2", b"127.0.0.1", b"15003"]])
        self.assertEqual([row[8] for row in reply["rows"]], [b"12", b"0"])    # MemberCnt
        self.assertEqual(reply["rows"][0][:2], [b"TET4", b"01D0A"])

    def test_other_requests_get_no_reply(self):
        with self.assertLogs("tet4.directory", "WARNING"):
            self.assertIsNone(directory.answer(bytes.fromhex("01020304"), CHANNELS,
                                               lambda: [0, 0]))


if __name__ == "__main__":
    unittest.main()
