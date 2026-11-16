"""CDS channel directory (CDSClientConnector.dll): plain frames.

Request  CDS_ReqSelect: u32 id | u32 tid | str table | ...
Response CDS_AnsSelect: u32 id | u32 tid | i32 error | vector<str> columns |
                        vector<vector<str>> rows

The client matches the reply to its request by tid. It reads the channel host from
column 3 and the port from column 4 by position, not by column name.
"""
import logging
from typing import Callable

from .lobby import MAX_MEMBERS, MAX_ROOMS
from .messages import Endpoint
from .xdr import Reader, i32, string, u32

SELECT = 0x05740F6A
SELECT_REPLY = 0x08D1A6DA
COLUMNS = ("GameID", "SubID", "ChannelID", "ChannelIP", "ChannelPort",
           "ChannelName", "MaxMember", "MaxRoom", "MemberCnt")

log = logging.getLogger("tet4.cds")


def channel_row(number: int, channel: Endpoint, members: int) -> tuple[str, ...]:
    return ("TET4", "01D0A", str(number), channel.host, str(channel.port), str(number),
            str(MAX_MEMBERS), str(MAX_ROOMS), str(members))


def answer(body: bytes, channels: list[Endpoint], members: Callable[[], list[int]]
           ) -> bytes | None:
    """The reply body for one request, or None for requests without a known reply: one
    row per channel, with the number of players in it now."""
    r = Reader(body)
    request_id = r.u32()
    if request_id != SELECT:
        log.warning("CDS <- 0x%08X (no reply)", request_id)
        return None
    tid, table = r.u32(), r.string()
    log.info("CDS <- select %s", table.decode("ascii", "replace"))
    rows = [channel_row(n, channel, count)
            for n, (channel, count) in enumerate(zip(channels, members()), 1)]
    return b"".join([
        u32(SELECT_REPLY), u32(tid), i32(0),
        u32(len(COLUMNS)), *(string(c.encode()) for c in COLUMNS),
        u32(len(rows)), *(u32(len(row)) + b"".join(string(v.encode()) for v in row)
                          for row in rows),
    ])
