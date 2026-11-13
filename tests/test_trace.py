import json
import os
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from tet4server import trace


class PlaintextTraceTest(unittest.TestCase):
    def test_trace_is_opt_in(self):
        message = bytes.fromhex("031ac76a0000000474657374")
        with patch.dict(os.environ, {}, clear=True):
            # Must be a no-op unless the caller explicitly opts in.
            trace.record_message(
                service="channel",
                direction="client_to_server",
                body=message,
                peer="127.0.0.1:12345",
                sequence=1,
            )

    def test_trace_identifies_alignment_prefixed_auto_enter(self):
        message = (
            bytes.fromhex("09d0057a") * 3
            + bytes.fromhex("031ac76a0000000474657374")
        )
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "trace" / "session.jsonl"
            with patch.dict(os.environ, {"TET4_TRACE_JSONL": str(path)}):
                trace.record_message(
                    service="channel",
                    direction="client_to_server",
                    body=message,
                    peer="127.0.0.1:12345",
                    sequence=7,
                )
            record = json.loads(path.read_text(encoding="utf-8").strip())
        self.assertEqual(record["service"], "channel")
        self.assertEqual(record["direction"], "client_to_server")
        self.assertEqual(record["sequence"], 7)
        self.assertEqual(record["alignment_markers"], 3)
        self.assertEqual(record["message_id"], "0x031ac76a")
        self.assertEqual(record["message_name"], "Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS")
        self.assertEqual(record["payload_hex"], "0000000474657374")
        self.assertEqual(record["message_stream_hex"], message.hex())

    def test_unwritable_trace_never_raises(self):
        with patch.dict(os.environ, {"TET4_TRACE_JSONL": "/dev/null/not-a-file"}):
            trace.record_message(
                service="game",
                direction="server_to_client",
                body=bytes.fromhex("0df37b3a"),
                peer="127.0.0.1:1",
                sequence=1,
            )


if __name__ == "__main__":
    unittest.main()
