"""Optional JSONL tap for already-decrypted Tet4 XLBP messages.

Set TET4_TRACE_JSONL to a local file path before starting the server. The tap
runs at the protocol boundary, after stream decryption and before encryption,
so it does not change the bytes exchanged with the original client.

WARNING: traces contain credentials/tickets and other session material. Keep
them local and do not commit them.
"""
from __future__ import annotations

import json
import os
from pathlib import Path
import struct
import threading
import time
from typing import Any

_LOCK = threading.Lock()
_LAYER_ALIGNMENT = 0x09D0057A

_NAMES = {
    0x0365C03A: "Cmd_AuthToS",
    0x008500CA: "Cmd_AuthToC",
    0x0FAB330A: "Cmd_Channel_GetUserIdByMemberIdToS",
    0x0A80E29A: "Cmd_Channel_GetUserIdToC",
    0x0696068A: "Cmd_Channel_EnterChannelByUserIdToS",
    0x00C0FC8A: "Cmd_Channel_EnterChannelToC",
    0x0AE3BBDA: "Cmd_Channel_GetMemberListToS",
    0x06B816EA: "Cmd_Channel_GetMemberListToC",
    0x0DDA299A: "Cmd_Channel_GetRoomListToS",
    0x0226968A: "Cmd_Channel_GetRoomListToC",
    0x075BAC2A: "Cmd_Item_GetItemStateToS",
    0x0C446ADA: "Cmd_Item_GetItemStateToC",
    0x04762CEA: "Cmd_Shop_GetInventoryInfoToS",
    0x0E4772BA: "Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToS",
    0x0C3B49AA: "Cmd_Channel_OrderTypeGetDisplayMemberInfoTetrisToC",
    0x0A101CBA: "Cmd_Channel_TicketReissueToS",
    0x0C6600AA: "Cmd_Channel_TicketReissueToC",
    0x031AC76A: "Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS",
    0x0DF37B3A: "Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToC",
    0x04B61A2A: "Cmd_ChannelOrderTypeSingleModeRoomInfoTetrisToC",
    0x0CC4004A: "Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS",
    0x05BCDF3A: "Cmd_Room_OrderTypeSingleModeGameReportTetrisToS",
    0x0EE1D56A: "Cmd_Room_OrderTypeSingleModeGameReportTetrisToC",
    0x06FE5D0A: "Cmd_Room_OrderTypeStartNewGameTetrisToC",
}


def _identify(message_stream: bytes) -> dict[str, Any]:
    """Identify the first non-alignment message without guessing its length."""
    result: dict[str, Any] = {
        "alignment_markers": 0,
        "message_id": None,
        "message_name": "alignment_only",
        "payload_hex": "",
    }
    offset = 0
    while offset + 4 <= len(message_stream):
        msg_id = struct.unpack(">I", message_stream[offset:offset + 4])[0]
        offset += 4
        if msg_id == _LAYER_ALIGNMENT:
            result["alignment_markers"] += 1
            continue
        result.update({
            "message_id": f"0x{msg_id:08x}",
            "message_name": _NAMES.get(msg_id, "unknown"),
            "payload_hex": message_stream[offset:].hex(),
        })
        break
    return result


def record_message(
    *,
    service: str,
    direction: str,
    body: bytes,
    peer: str,
    sequence: int,
) -> None:
    """Append one plaintext message/batch to TET4_TRACE_JSONL when enabled.

    body is the decrypted XLBP message stream without the 4-byte XLBP magic.
    For outbound messages, body is the plaintext that will be encrypted next.
    """
    path_text = os.environ.get("TET4_TRACE_JSONL")
    if not path_text:
        return
    target = Path(path_text).expanduser()
    if len(body) >= 4:
        details = _identify(body)
    else:
        details = {"alignment_markers": 0, "message_id": None,
                   "message_name": "short_or_empty", "payload_hex": ""}
    event = {
        "unix_ns": time.time_ns(),
        "service": service,
        "direction": direction,
        "peer": peer,
        "sequence": sequence,
        **details,
        "message_stream_hex": body.hex(),
    }
    line = json.dumps(event, ensure_ascii=False, separators=(",", ":")) + "\n"
    try:
        target.parent.mkdir(parents=True, exist_ok=True, mode=0o700)
        with _LOCK:
            fd = os.open(
                target,
                os.O_WRONLY | os.O_CREAT | os.O_APPEND,
                0o600,
            )
            try:
                os.chmod(target, 0o600)
                with os.fdopen(fd, "a", encoding="utf-8") as handle:
                    fd = -1  # ownership transferred to the file object
                    handle.write(line)
            finally:
                if fd >= 0:
                    os.close(fd)
    except OSError:
        # Diagnostics must never break a game session just because the trace
        # path is unwritable or a disk is full.
        return
