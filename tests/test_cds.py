import unittest

from tet4server import cds
from tet4server.messages import Endpoint
from tet4server.xdr import Reader

# Request captured in run15/run16: CDS_ReqSelect, tid 1, table "COMMON".
SELECT_COMMON = bytes.fromhex("05740f6a" "00000001" "00000006" "434f4d4d4f4e")
CHANNELS = [Endpoint("127.0.0.1", 15001), Endpoint("127.0.0.1", 15003)]


class CdsTest(unittest.TestCase):
    def test_one_row_per_channel_with_host_and_port_in_columns_3_and_4(self):
        r = Reader(cds.answer(SELECT_COMMON, CHANNELS, lambda: [12, 0]))
        self.assertEqual((r.u32(), r.u32(), r.u32()), (cds.SELECT_REPLY, 1, 0))
        columns = [r.string() for _ in range(r.u32())]
        self.assertEqual(columns, [c.encode() for c in cds.COLUMNS])
        self.assertEqual(columns[3:5], [b"ChannelIP", b"ChannelPort"])
        rows = [[r.string() for _ in range(r.u32())] for _ in range(r.u32())]
        self.assertEqual(r.remaining(), 0)
        self.assertEqual([row[2:5] for row in rows],
                         [[b"1", b"127.0.0.1", b"15001"], [b"2", b"127.0.0.1", b"15003"]])
        self.assertEqual([row[8] for row in rows], [b"12", b"0"])    # MemberCnt

    def test_other_requests_get_no_reply(self):
        with self.assertLogs("tet4.cds", "WARNING"):
            self.assertIsNone(cds.answer(bytes.fromhex("01020304"), CHANNELS, lambda: [0, 0]))


if __name__ == "__main__":
    unittest.main()
