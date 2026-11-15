"""CDS channel directory (CDSClientConnector.dll): plain frames.

Request  CDS_ReqSelect: u32 id | u32 tid | str table | ...
Response CDS_AnsSelect: u32 id | u32 tid | i32 error | vector<str> columns |
                        vector<vector<str>> rows

The client matches the reply to its request by tid. It reads the channel host from
column 3 and the port from column 4 by position, not by column name.
"""
import logging

from .messages import Endpoint
from .xdr import Reader, i32, string, u32

SELECT = 0x05740F6A
SELECT_REPLY = 0x08D1A6DA
COLUMNS = ("GameID", "SubID", "ChannelID", "ChannelIP", "ChannelPort",
           "ChannelName", "MaxMember", "MaxRoom", "MemberCnt")

log = logging.getLogger("tet4.cds")


def channel_row(channel: Endpoint) -> tuple[str, ...]:
    return ("TET4", "01D0A", "1", channel.host, str(channel.port), "1", "100", "10", "0")


def answer(body: bytes, channel: Endpoint) -> bytes | None:
    """The reply body for one request, or None for requests without a known reply."""
    r = Reader(body)
    request_id = r.u32()
    if request_id != SELECT:
        log.warning("CDS <- 0x%08X (no reply)", request_id)
        return None
    tid, table = r.u32(), r.string()
    log.info("CDS <- select %s", table.decode("ascii", "replace"))
    row = channel_row(channel)
    return b"".join([
        u32(SELECT_REPLY), u32(tid), i32(0),
        u32(len(COLUMNS)), *(string(c.encode()) for c in COLUMNS),
        u32(1), u32(len(row)), *(string(v.encode()) for v in row),
    ])

