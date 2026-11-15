import unittest

from tet4server import cds
from tet4server.messages import Endpoint
from tet4server.xdr import Reader

# Request captured in run15/run16: CDS_ReqSelect, tid 1, table "COMMON".
SELECT_COMMON = bytes.fromhex("05740f6a" "00000001" "00000006" "434f4d4d4f4e")
CHANNEL = Endpoint("127.0.0.1", 15001)


class CdsTest(unittest.TestCase):
    def test_reply_echoes_tid_and_puts_host_and_port_in_columns_3_and_4(self):
        r = Reader(cds.answer(SELECT_COMMON, CHANNEL))
        self.assertEqual((r.u32(), r.u32(), r.u32()), (cds.SELECT_REPLY, 1, 0))
        columns = [r.string() for _ in range(r.u32())]
        self.assertEqual(columns, [c.encode() for c in cds.COLUMNS])
        self.assertEqual(r.u32(), 1)
        row = [r.string() for _ in range(r.u32())]
        self.assertEqual(r.remaining(), 0)
        self.assertEqual(row[3:5], [b"127.0.0.1", b"15001"])
        self.assertEqual(columns[3:5], [b"ChannelIP", b"ChannelPort"])

    def test_other_requests_get_no_reply(self):
        with self.assertLogs("tet4.cds", "WARNING"):
            self.assertIsNone(cds.answer(bytes.fromhex("01020304"), CHANNEL))


if __name__ == "__main__":
    unittest.main()
