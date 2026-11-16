"""TPack, the client's first login step, on plain frames: AuthSession and LoginTPack.

Each reply echoes the request's method name and context with result 0, the replies
the client accepted (docs/PROTOCOL.md section 3). Accounts are checked later, by the
channel's AuthToS.
"""
import logging

from ..protocol import codec

log = logging.getLogger("tet4.tpack")

REPLIES = {codec.message_id("TPack_AuthSessionToS"): "TPack_AuthSessionToC",
           codec.message_id("TPack_LoginTPackToS"): "TPack_LoginTPackToC"}


def answer(body: bytes) -> bytes | None:
    """The reply to one request, or None for a request without a known reply."""
    request_id = int.from_bytes(body[:4], "big")
    reply = REPLIES.get(request_id)
    if reply is None:
        log.warning("TPack <- 0x%08X (no reply)", request_id)
        return None
    request = codec.unpack("TPack_AuthSessionToS", body)    # both read method and context
    log.info("TPack <- %s", request["method"].decode("ascii", "replace"))
    return codec.pack(reply, method=request["method"], context=request["context"]).body
