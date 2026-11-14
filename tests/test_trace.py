import json
import os
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from tet4server import channel, crypto, trace


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
            self.assertEqual(path.stat().st_mode & 0o777, 0o600)
        self.assertEqual(record["service"], "channel")
        self.assertEqual(record["direction"], "client_to_server")
        self.assertEqual(record["sequence"], 7)
        self.assertEqual(record["alignment_markers"], 3)
        self.assertEqual(record["message_id"], "0x031ac76a")
        self.assertEqual(record["message_name"], "Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS")
        self.assertEqual(record["payload_hex"], "0000000474657374")
        self.assertEqual(record["message_stream_hex"], message.hex())

    def test_trace_names_server_get_member_info_push(self):
        body = channel.get_member_info_to_c(b"k601e")
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "trace.jsonl"
            with patch.dict(os.environ, {"TET4_TRACE_JSONL": str(path)}):
                trace.record_message(
                    service="channel",
                    direction="server_to_client",
                    body=body,
                    peer="127.0.0.1:12345",
                    sequence=4,
                )
            record = json.loads(path.read_text(encoding="utf-8").strip())
        self.assertEqual(record["message_id"], "0x060bc39a")
        self.assertEqual(record["message_name"], "Cmd_Channel_GetMemberInfoToC")
        self.assertEqual(record["direction"], "server_to_client")
        self.assertEqual(record["payload_hex"], body[4:].hex())

    def test_session_read_frame_records_decrypted_batch(self):
        client_share = bytes.fromhex(
            "d33bdf696bac88168ab62b1761a3cd381b62aabf1a11925193e07fbd57b8d564"
            "f6f24c23084ed3aa5ccdf2c3c964fc4a"
        )
        server_share = crypto.encrypt_share(channel.HANDSHAKE_PLAIN)
        master = crypto.master_words(client_share, server_share)
        client_filter = crypto.Stream.from_master(master, "decrypt_client")
        batch = (
            channel.pack_u32(channel.LAYER_ALIGNMENT)
            + channel.pack_u32(channel.LAYER_ALIGNMENT)
            + channel.pack_u32(channel.LAYER_ALIGNMENT)
            + channel.pack_u32(channel.AUTO_ENTER_SINGLE_MODE_TOS)
            + channel.pack_string(b"test")
        )
        wire = client_filter.encrypt(channel.frame(batch))
        client_sock, server_sock = __import__("socket").socketpair()
        try:
            client_sock.sendall(wire)
            with tempfile.TemporaryDirectory() as tmp:
                path = Path(tmp) / "session.jsonl"
                with patch.dict(os.environ, {"TET4_TRACE_JSONL": str(path)}):
                    session = channel.Session(master, service="channel", peer="local")
                    msg_id, body = session.read_frame(server_sock)
                self.assertEqual(msg_id, channel.AUTO_ENTER_SINGLE_MODE_TOS)
                event = json.loads(path.read_text(encoding="utf-8").strip())
            self.assertEqual(event["message_id"], "0x031ac76a")
            self.assertEqual(event["alignment_markers"], 3)
            self.assertEqual(event["message_stream_hex"], batch.hex())
        finally:
            client_sock.close()
            server_sock.close()

    def test_session_send_records_plaintext_before_encryption(self):
        client_share = bytes.fromhex(
            "d33bdf696bac88168ab62b1761a3cd381b62aabf1a11925193e07fbd57b8d564"
            "f6f24c23084ed3aa5ccdf2c3c964fc4a"
        )
        server_share = crypto.encrypt_share(channel.HANDSHAKE_PLAIN)
        master = crypto.master_words(client_share, server_share)
        body = channel.pack_u32(channel.AUTO_ENTER_SINGLE_MODE_TOC) + channel.pack_string(b"127.0.0.1")
        client_sock, server_sock = __import__("socket").socketpair()
        try:
            with tempfile.TemporaryDirectory() as tmp:
                path = Path(tmp) / "session.jsonl"
                with patch.dict(os.environ, {"TET4_TRACE_JSONL": str(path)}):
                    session = channel.Session(master, service="channel", peer="local")
                    session.send(server_sock, body)
                event = json.loads(path.read_text(encoding="utf-8").strip())
            encrypted = client_sock.recv(4096)
            client_receive = crypto.Stream.from_master(master, "encrypt_to_client")
            self.assertEqual(client_receive.decrypt(encrypted), channel.frame(body))
            self.assertEqual(event["direction"], "server_to_client")
            self.assertEqual(event["message_id"], "0x0df37b3a")
            self.assertEqual(event["message_stream_hex"], body.hex())
        finally:
            client_sock.close()
            server_sock.close()

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
