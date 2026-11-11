"""CDS (port 15000): channel directory.

Request  CDS_ReqSelect 0x05740F6A:  id | u32 tid | string table | ...
Response CDS_AnsSelect 0x08D1A6DA:  id | u32 tid | i32 error | columns | rows

  tid    must equal the tid the client sent. The client stores its pending
         request in a map keyed by tid; a reply with another key is dropped
         ("no tid in wait queue") and the client waits 20 s before giving up.
  error  0 on success. A nonzero value is treated as a failed request.
  columns vector<string>: column names, in order.
  rows    u32 count, then per row: u32 n, then n strings.

Channel host and port come from fixed COLUMN POSITIONS, not from names:
BuildChannelList skips column 0 (its switch counter starts at -1) and writes
column k into case k-1. Host (+0x71) is column 3 = "ChannelIP"; port (+0xA4) is
column 4 = "ChannelPort". Verified by a run where the host was moved to column 2
and the client connected to 0.0.58.153:15001 = inet_addr("15001").
"""
import logging
import socket
import threading

from .xdr import Reader, ProtocolError, frame, pack_string, pack_u32

REQUEST_ID = 0x05740F6A
RESPONSE_ID = 0x08D1A6DA

COLUMNS = ["GameID", "SubID", "ChannelID", "ChannelIP",
           "ChannelPort", "ChannelName", "MaxMember", "MaxRoom", "MemberCnt"]

DEFAULT_ROWS = [["TET4", "01D0A", "1", "127.0.0.1", "15001", "1", "100", "10", "0"]]

log = logging.getLogger("tet4.cds")


def parse_request(body: bytes):
    r = Reader(body)
    msg_id = r.u32()
    if msg_id != REQUEST_ID:
        raise ProtocolError(f"not a CDS select request: 0x{msg_id:08x}")
    tid = r.u32()
    table = r.string()
    return tid, table


def build_response(tid: int, columns=COLUMNS, rows=DEFAULT_ROWS, error: int = 0) -> bytes:
    body = pack_u32(RESPONSE_ID) + pack_u32(tid) + pack_u32(error)
    body += pack_u32(len(columns)) + b"".join(pack_string(c.encode()) for c in columns)
    body += pack_u32(len(rows))
    for row in rows:
        body += pack_u32(len(row)) + b"".join(pack_string(v.encode()) for v in row)
    return frame(body)


def _recv_exact(conn, n):
    buf = b""
    while len(buf) < n:
        chunk = conn.recv(n - len(buf))
        if not chunk:
            return None
        buf += chunk
    return buf


def _handle(conn, rows):
    try:
        while True:
            header = _recv_exact(conn, 4)
            if header is None:
                return
            body = _recv_exact(conn, int.from_bytes(header, "big"))
            if body is None:
                return
            try:
                tid, table = parse_request(body)
            except ProtocolError as exc:
                log.warning("CDS: %s", exc)
                return
            log.info("CDS select table=%s tid=%d", table.decode(errors="replace"), tid)
            conn.sendall(build_response(tid, rows=rows))
    finally:
        conn.close()


def serve(host: str, port: int, rows=DEFAULT_ROWS) -> None:
    srv = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    srv.bind((host, port))
    srv.listen(16)
    log.info("CDS listening on %s:%d", host, port)
    while True:
        conn, _ = srv.accept()
        threading.Thread(target=_handle, args=(conn, rows), daemon=True).start()
