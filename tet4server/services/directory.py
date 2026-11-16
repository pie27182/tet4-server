"""The CDS channel directory, on plain frames: the channels, their addresses and how
many players are in each.

The client matches the reply to its request by the transaction number and reads each
channel's host from column 3 and port from column 4, by position, not by name.
"""
import logging
from typing import Callable

from ..config import DIRECTORY_SUB_ID, GAME_ID, MAX_MEMBERS, ROOM_SLOTS
from ..protocol import codec
from ..protocol.wire import Endpoint

log = logging.getLogger("tet4.directory")

COLUMNS = ("GameID", "SubID", "ChannelID", "ChannelIP", "ChannelPort",
           "ChannelName", "MaxMember", "MaxRoom", "MemberCnt")
SELECT = codec.message_id("CDS_ReqSelect")


def channel_row(number: int, channel: Endpoint, members: int) -> list[bytes]:
    return [str(value).encode() for value in (
        GAME_ID.decode(), DIRECTORY_SUB_ID, number, channel.host, channel.port, number,
        MAX_MEMBERS, ROOM_SLOTS, members)]


def answer(body: bytes, channels: list[Endpoint], members: Callable[[], list[int]]
           ) -> bytes | None:
    """The reply to one request, or None for a request without a known reply: one row
    per channel, with the number of players in it now."""
    request_id = int.from_bytes(body[:4], "big")
    if request_id != SELECT:
        log.warning("CDS <- 0x%08X (no reply)", request_id)
        return None
    request = codec.unpack("CDS_ReqSelect", body)
    log.info("CDS <- select %s", request["table"].decode("ascii", "replace"))
    rows = [channel_row(n, channel, count)
            for n, (channel, count) in enumerate(zip(channels, members()), 1)]
    return codec.pack("CDS_AnsSelect", transaction=request["transaction"],
                      columns=[c.encode() for c in COLUMNS], rows=rows).body
