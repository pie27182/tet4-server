"""TPack (port 10454): account authentication for the Tet4 client.

Verified on the wire:
  AuthSession request 0x0CF7BD9A  -> response 0x0A36B7BA
  LoginTPack  request 0x0B60835A  -> response 0x05E78E3A (three extra trailing fields)

Request body: id | string method | u32 ctx | fields...
Response body: id | string method | u32 ctx | string a | string b | i32 result [| extra]

The method name and ctx are echoed from the request. Unknown requests are
logged and get NO reply, so the client cannot mistake them for success.
"""
import logging
import socket
import struct
import threading

from .xdr import Reader, frame, pack_string, pack_u32, ProtocolError

AUTH_REQUEST = 0x0CF7BD9A
AUTH_RESPONSE = 0x0A36B7BA
LOGIN_REQUEST = 0x0B60835A
LOGIN_RESPONSE = 0x05E78E3A

log = logging.getLogger("tet4.tpack")


def parse_request(body: bytes):
    r = Reader(body)
    msg_id = r.u32()
    method = r.string()
    ctx = r.u32()
    return msg_id, method, ctx


def build_response(resp_id: int, method: bytes, ctx: int) -> bytes:
    body = (pack_u32(resp_id) + pack_string(method) + pack_u32(ctx)
            + pack_string(b"") + pack_string(b"") + pack_u32(0))
    if resp_id == LOGIN_RESPONSE:
        body += pack_string(b"") + pack_u32(0) + struct.pack(">q", 0)
    return frame(body)


RESPONSES = {
    AUTH_REQUEST: AUTH_RESPONSE,
    LOGIN_REQUEST: LOGIN_RESPONSE,
}


def answer(body: bytes):
    """Return the framed response bytes, or None for requests we do not implement."""
    msg_id, method, ctx = parse_request(body)
    resp_id = RESPONSES.get(msg_id)
    if resp_id is None:
        log.warning("unhandled TPack id 0x%08x method=%r (no reply sent)", msg_id, method)
        return None
    log.info("TPack 0x%08x %s ctx=%d", msg_id, method.decode(errors="replace"), ctx)
    return build_response(resp_id, method, ctx)


def _recv_exact(conn, n):
    buf = b""
    while len(buf) < n:
        chunk = conn.recv(n - len(buf))
        if not chunk:
            return None
        buf += chunk
    return buf


def _handle(conn):
    try:
        while True:
            header = _recv_exact(conn, 4)
            if header is None:
                return
            body = _recv_exact(conn, struct.unpack(">I", header)[0])
            if body is None:
                return
            try:
                reply = answer(body)
            except ProtocolError as exc:
                log.warning("malformed TPack request: %s", exc)
                return
            if reply is not None:
                conn.sendall(reply)
    finally:
        conn.close()


def serve(host: str, port: int) -> None:
    srv = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    srv.bind((host, port))
    srv.listen(16)
    log.info("TPack listening on %s:%d", host, port)
    while True:
        conn, _ = srv.accept()
        threading.Thread(target=_handle, args=(conn,), daemon=True).start()
