"""TPack account service (TPackClientConnector.dll): plain frames.

Request:  u32 id | str method | u32 ctx | ...
Response: u32 id | str method | u32 ctx | str | str | i32 result [| str | i32 | i64]

The method name and ctx are echoed. Any account is accepted.
"""
import logging

from .xdr import Reader, i32, i64, string, u32

AUTH_SESSION = 0x0CF7BD9A
AUTH_SESSION_REPLY = 0x0A36B7BA
LOGIN = 0x0B60835A
LOGIN_REPLY = 0x05E78E3A
REPLIES = {AUTH_SESSION: AUTH_SESSION_REPLY, LOGIN: LOGIN_REPLY}

log = logging.getLogger("tet4.tpack")


def answer(body: bytes) -> bytes | None:
    """The reply body for one request, or None for requests without a known reply."""
    r = Reader(body)
    request_id, method, ctx = r.u32(), r.string(), r.u32()
    name = method.decode("ascii", "replace")
    reply_id = REPLIES.get(request_id)
    if reply_id is None:
        log.warning("TPack <- 0x%08X %s (no reply)", request_id, name)
        return None
    log.info("TPack <- %s", name)
    reply = u32(reply_id) + string(method) + u32(ctx) + string(b"") + string(b"") + i32(0)
    if reply_id == LOGIN_REPLY:
        reply += string(b"") + i32(0) + i64(0)
    return reply

