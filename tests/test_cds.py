import unittest

from tet4server import cds
from tet4server.xdr import Reader, pack_u32, pack_string

# Request header as captured in run15/run16: id, tid=1, table "COMMON".
REQUEST_HEAD = bytes.fromhex("05740f6a" "00000001" "00000006" "434f4d4d4f4e")


class CdsTest(unittest.TestCase):
    def test_parse_request_returns_tid_and_table(self):
        tid, table = cds.parse_request(REQUEST_HEAD)
        self.assertEqual((tid, table), (1, b"COMMON"))

    def test_response_echoes_tid_with_zero_error(self):
        reply = cds.build_response(tid=1)
        body = Reader(reply[4:])
        self.assertEqual(body.u32(), cds.RESPONSE_ID)
        self.assertEqual(body.u32(), 1, "key must be the request tid")
        self.assertEqual(body.u32(), 0, "error must be 0")
        self.assertEqual(body.u32(), len(cds.COLUMNS))
        for name in cds.COLUMNS:
            self.assertEqual(body.string(), name.encode())

    def test_host_and_port_sit_in_columns_3_and_4(self):
        row = cds.DEFAULT_ROWS[0]
        self.assertEqual(row[cds.COLUMNS.index("ChannelIP")], "127.0.0.1")
        self.assertEqual(row[cds.COLUMNS.index("ChannelPort")], "15001")

    def test_row_count_and_row_layout(self):
        reply = cds.build_response(tid=7)
        body = Reader(reply[4:])
        body.u32(); body.u32(); body.u32()          # id, tid, error
        self.assertEqual(body.u32(), len(cds.COLUMNS))
        for _ in cds.COLUMNS:
            body.string()
        self.assertEqual(body.u32(), len(cds.DEFAULT_ROWS))
        self.assertEqual(body.u32(), len(cds.DEFAULT_ROWS[0]))


if __name__ == "__main__":
    unittest.main()
