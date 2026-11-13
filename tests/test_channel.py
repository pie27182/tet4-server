import socket
import struct
import threading
import unittest

from tet4server import channel, crypto
from tet4server.xdr import ProtocolError, Reader

CLIENT_SHARE = bytes.fromhex(
    "d33bdf696bac88168ab62b1761a3cd381b62aabf1a11925193e07fbd57b8d564"
    "f6f24c23084ed3aa5ccdf2c3c964fc4a")


def master_for_run16():
    server_wire = crypto.encrypt_share(channel.HANDSHAKE_PLAIN)
    return crypto.master_words(CLIENT_SHARE, server_wire)


class AuthToCLayoutTest(unittest.TestCase):
    def test_fields_follow_serialize_order(self):
        body = channel.auth_to_c(b"AB", b"CDE", code=7)
        r = Reader(body)
        self.assertEqual(r.u32(), channel.AUTH_TO_C)
        self.assertEqual(r.take(8), struct.pack(">q", 0))   # _KeyType int64 (+0x10)
        self.assertEqual(r.string(), b"")                    # _KeyType string (+0x18)
        self.assertEqual(r.take(8), struct.pack(">q", 0))   # _KeyType int64 (+0x38)
        self.assertEqual(r.string(), b"")                    # _KeyType string (+0x40)
        self.assertEqual(r.string(), b"")                    # _KeyType string (+0x5C)
        self.assertEqual(r.string(), b"AB")                  # Cmd string (+0x88)
        self.assertEqual(r.string(), b"CDE")                 # Cmd string (+0xA4)
        self.assertEqual(r.i32(), 7)                         # Cmd i32 (+0xC0)
        self.assertEqual(r.remaining(), 0)

    def test_length_matches_getsize_formula(self):
        # GetSize: 4 (id) + _KeyType body (28) + string lengths + 2 length prefixes + i32.
        a, b = b"x" * 5, b"y" * 9
        body = channel.auth_to_c(a, b)
        self.assertEqual(len(body), 4 + 28 + 4 + len(a) + 4 + len(b) + 4)

    def test_frame_length_covers_magic_and_body(self):
        body = channel.auth_to_c()
        framed = channel.frame(body)
        self.assertEqual(struct.unpack(">I", framed[:4])[0], 4 + len(body))
        self.assertEqual(framed[4:8], b"XLBP")


class GetUserIdToCLayoutTest(unittest.TestCase):
    def test_fields_follow_serialize_order(self):
        r = Reader(channel.get_user_id_to_c(b"test", b"", code=0))
        self.assertEqual(r.u32(), channel.GET_USER_ID_TOC)
        self.assertEqual(r.take(8), struct.pack(">q", 0))   # int64 (+0x10)
        self.assertEqual(r.string(), b"test")                # string (+0x18), key k3e
        self.assertEqual(r.string(), b"")                    # string (+0x34), key k2e
        self.assertEqual(r.i32(), 0)                         # i32 (+0x50), key k161e
        self.assertEqual(r.remaining(), 0)


class EnterChannelRequestTest(unittest.TestCase):
    def test_request_fields_follow_serialize_order(self):
        strings = tuple(f"s{i}".encode("ascii") for i in range(7))
        payload = (
            channel.pack_u32(channel.ENTER_CHANNEL_BY_USER_ID_TOS)
            + struct.pack(">Q", 0x0102030405060708)
            + b"".join(channel.pack_string(v) for v in strings[:5])
            + channel.pack_u32(0x10203040)
            + b"".join(channel.pack_string(v) for v in strings[5:])
            + struct.pack(">Q", 0x8877665544332211)
        )
        request = channel.parse_enter_channel_request(payload)
        self.assertEqual(request.user_id, 0x0102030405060708)
        self.assertEqual(request.strings, strings[:5])
        self.assertEqual(request.channel_metp_k23e, strings[2])
        self.assertEqual(request.channel_metp_k24e, strings[3])
        self.assertEqual(request.option, 0x10203040)
        self.assertEqual(request.trailing_strings, strings[5:])
        self.assertEqual(request.trailing_u64, 0x8877665544332211)

    def test_request_rejects_trailing_bytes(self):
        payload = (
            channel.pack_u32(channel.ENTER_CHANNEL_BY_USER_ID_TOS)
            + struct.pack(">Q", 1)
            + b"".join(channel.pack_string(b"") for _ in range(5))
            + channel.pack_u32(0)
            + channel.pack_string(b"")
            + channel.pack_string(b"")
            + struct.pack(">Q", 0)
            + b"\x00"
        )
        with self.assertRaises(ProtocolError):
            channel.parse_enter_channel_request(payload)


class EnterChannelToCMetpInfoTest(unittest.TestCase):
    def test_request_and_reply_round_trip_required_metpinfo4_keys(self):
        class RecordingSession:
            def __init__(self):
                self.sent = []

            def send(self, conn, body):
                self.sent.append(body)

        # FUN_60138E50 maps the five ToS strings to:
        # k3e, k22e, k23e, k24e, k149e.
        request_strings = (b"test", b"TET4", b"", b"1", b"7.8")
        payload = (
            channel.pack_u32(channel.ENTER_CHANNEL_BY_USER_ID_TOS)
            + struct.pack(">Q", 0)  # k601e
            + b"".join(channel.pack_string(v) for v in request_strings)
            + channel.pack_u32(0)  # k167e
            + channel.pack_string(b"")  # k442e
            + channel.pack_string(b"")  # k441e
            + struct.pack(">Q", 0)  # reserved trailing qword
        )
        request = channel.parse_enter_channel_request(payload)
        self.assertEqual(request.channel_metp_k23e, b"")
        self.assertEqual(request.channel_metp_k24e, b"1")

        session = RecordingSession()
        channel._dispatch(
            session, object(), channel.ENTER_CHANNEL_BY_USER_ID_TOS, payload
        )
        self.assertEqual(len(session.sent), 1)

        # FUN_60139620 reads ToC string 3 into MetpInfo k23e and
        # ToC string 8 into MetpInfo k24e.
        r = Reader(session.sent[0])
        self.assertEqual(r.u32(), channel.ENTER_CHANNEL_TOC)
        response_strings = [r.string() for _ in range(5)]
        for _ in range(3):
            self.assertEqual(r.u32(), 0)
        self.assertEqual(r.take(1), b"\x00")
        response_strings.append(r.string())  # string 6
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.u32(), 0)
        response_strings.append(r.string())  # string 7
        response_strings.append(r.string())  # string 8 -> k24e
        for _ in range(3):
            self.assertEqual(r.u32(), 0)
        response_strings.append(r.string())  # string 9
        self.assertEqual(r.remaining(), 0)

        self.assertEqual(response_strings[2], request.channel_metp_k23e)
        self.assertEqual(response_strings[7], request.channel_metp_k24e)
        self.assertEqual(response_strings[2], b"")
        self.assertEqual(response_strings[7], b"1")


class EnterChannelToCLayoutTest(unittest.TestCase):
    def test_fields_follow_serialize_order(self):
        strings = tuple(f"str{i}".encode("ascii") for i in range(9))
        u32s = tuple(0x10203040 + i for i in range(8))
        r = Reader(channel.enter_channel_to_c(strings, u32s, flag=0x7F))
        self.assertEqual(r.u32(), channel.ENTER_CHANNEL_TOC)
        for value in strings[:5]:
            self.assertEqual(r.string(), value)
        for value in u32s[:3]:
            self.assertEqual(r.u32(), value)
        self.assertEqual(r.take(1), b"\x7f")
        self.assertEqual(r.string(), strings[5])
        for value in u32s[3:5]:
            self.assertEqual(r.u32(), value)
        self.assertEqual(r.string(), strings[6])
        self.assertEqual(r.string(), strings[7])
        for value in u32s[5:]:
            self.assertEqual(r.u32(), value)
        self.assertEqual(r.string(), strings[8])
        self.assertEqual(r.remaining(), 0)

    def test_default_reply_contains_empty_result_key_field(self):
        r = Reader(channel.enter_channel_to_c())
        self.assertEqual(r.u32(), channel.ENTER_CHANNEL_TOC)
        for _ in range(5):
            self.assertEqual(r.string(), b"")
        for _ in range(3):
            self.assertEqual(r.u32(), 0)
        self.assertEqual(r.take(1), b"\x00")
        self.assertEqual(r.string(), b"")
        for _ in range(2):
            self.assertEqual(r.u32(), 0)
        for _ in range(2):
            self.assertEqual(r.string(), b"")
        for _ in range(3):
            self.assertEqual(r.u32(), 0)
        self.assertEqual(r.string(), b"")  # k1e is present
        self.assertEqual(r.remaining(), 0)



class GetMemberListTest(unittest.TestCase):
    def test_request_has_three_strings(self):
        values = (b"TET4", b"01D0A", b"1")
        payload = channel.pack_u32(channel.GET_MEMBER_LIST_TOS) + b"".join(
            channel.pack_string(v) for v in values
        )
        self.assertEqual(channel.parse_get_member_list_request(payload).strings, values)

    def test_request_rejects_trailing_bytes(self):
        payload = channel.pack_u32(channel.GET_MEMBER_LIST_TOS) + b"".join(
            channel.pack_string(b"") for _ in range(3)
        ) + b"\x00"
        with self.assertRaises(ProtocolError):
            channel.parse_get_member_list_request(payload)

    def test_empty_response_layout(self):
        values = (b"a", b"b", b"c")
        r = Reader(channel.get_member_list_to_c(values, b"tail"))
        self.assertEqual(r.u32(), channel.GET_MEMBER_LIST_TOC)
        self.assertEqual(tuple(r.string() for _ in range(3)), values)
        self.assertEqual(r.u32(), 0)  # empty vector of member records
        self.assertEqual(r.string(), b"tail")
        self.assertEqual(r.remaining(), 0)


class GetRoomListTest(unittest.TestCase):
    def test_observed_request_has_three_strings_only(self):
        # Wire capture: 0dda299a | "TET4" | "" | ""
        payload = (
            channel.pack_u32(channel.GET_ROOM_LIST_TOS)
            + b"".join(channel.pack_string(v) for v in (b"TET4", b"", b""))
        )
        request = channel.parse_get_room_list_request(payload)
        self.assertEqual(request.strings, (b"TET4", b"", b""))
        self.assertEqual(request.option, 0)

    def test_single_trailing_byte_is_kept_as_option(self):
        payload = (
            channel.pack_u32(channel.GET_ROOM_LIST_TOS)
            + b"".join(channel.pack_string(v) for v in (b"TET4", b"", b""))
            + b"\x02"
        )
        self.assertEqual(channel.parse_get_room_list_request(payload).option, 2)

    def test_request_rejects_long_trailing_bytes(self):
        payload = (
            channel.pack_u32(channel.GET_ROOM_LIST_TOS)
            + b"".join(channel.pack_string(b"") for _ in range(3))
            + b"\x00\x00"
        )
        with self.assertRaises(ProtocolError):
            channel.parse_get_room_list_request(payload)

    def test_empty_response_layout(self):
        values = (b"a", b"b", b"c")
        r = Reader(channel.get_room_list_to_c(values, option=9, final=b"tail"))
        self.assertEqual(r.u32(), channel.GET_ROOM_LIST_TOC)
        self.assertEqual(tuple(r.string() for _ in range(3)), values)
        self.assertEqual(r.u32(), 9)
        self.assertEqual(r.string(), b"tail")
        self.assertEqual(r.u32(), 0)  # empty vector of room records
        self.assertEqual(r.remaining(), 0)



class AutoEnterSingleModeRequestTest(unittest.TestCase):
    def make_payload(self, strings, integers):
        return (
            channel.pack_u32(channel.AUTO_ENTER_SINGLE_MODE_TOS)
            + channel.pack_string(strings[0])
            + channel.pack_u32(integers[0])
            + channel.pack_string(strings[1])
            + channel.pack_string(strings[2])
            + channel.pack_string(strings[3])
            + channel.pack_u32(integers[1])
            + channel.pack_u32(integers[2])
            + channel.pack_string(strings[4])
            + channel.pack_u32(integers[3])
            + b"".join(channel.pack_string(v) for v in strings[5:])
        )

    def test_fields_follow_client_serialize_order(self):
        strings = (
            b"account-token", b"reserved-a", b"reserved-b", b"N000S",
            b"reserved-c", b"TET4", b"sub-id", b"channel-id",
        )
        integers = (1, 2, 3, 4)
        request = channel.parse_auto_enter_single_mode_request(
            self.make_payload(strings, integers)
        )
        self.assertEqual(request.strings, strings)
        self.assertEqual(request.integers, integers)

    def test_request_rejects_trailing_bytes(self):
        strings = (b"",) * 8
        integers = (0,) * 4
        with self.assertRaises(ProtocolError):
            channel.parse_auto_enter_single_mode_request(
                self.make_payload(strings, integers) + b"\x00"
            )



class AutoEnterSingleModeResponseTest(unittest.TestCase):
    def test_response_layout_routes_to_local_game_socket(self):
        strings = tuple(f"s{i}".encode("ascii") for i in range(12))
        integers = tuple(range(1, 7))
        r = Reader(channel.auto_enter_single_mode_to_c(
            game_host=b"127.0.0.1", game_port=15002,
            strings=strings, integers=integers,
        ))
        self.assertEqual(r.u32(), channel.AUTO_ENTER_SINGLE_MODE_TOC)
        self.assertEqual(r.string(), strings[0])
        self.assertEqual(r.u32(), integers[0])
        self.assertEqual(r.string(), strings[1])
        self.assertEqual(r.string(), strings[2])
        self.assertEqual(r.string(), strings[3])
        self.assertEqual(r.u32(), integers[1])
        self.assertEqual(r.u32(), integers[2])
        self.assertEqual(r.string(), strings[4])
        self.assertEqual(r.u32(), integers[3])
        self.assertEqual(r.string(), strings[5])
        self.assertEqual(r.string(), strings[6])
        self.assertEqual(r.string(), strings[7])
        self.assertEqual(r.string(), b"")  # status (+0xfc) is not v2e
        self.assertEqual(r.u32(), integers[4])
        self.assertEqual(r.string(), strings[9])
        self.assertEqual(r.string(), b"127.0.0.1")  # game host (+0x138)
        self.assertEqual(r.u32(), 15002)            # game port (+0x154)
        self.assertEqual(r.string(), strings[11])
        self.assertEqual(r.remaining(), 0)

    def test_response_requires_valid_local_endpoint(self):
        with self.assertRaises(ValueError):
            channel.auto_enter_single_mode_to_c(game_host=b"", game_port=15002)
        with self.assertRaises(ValueError):
            channel.auto_enter_single_mode_to_c(game_host=b"127.0.0.1", game_port=0)


class AutoEnterDispatchTest(unittest.TestCase):
    def test_request_routes_reply_to_the_local_game_socket(self):
        class RecordingSession:
            def __init__(self):
                self.sent = []

            def send(self, conn, body):
                self.sent.append(body)

        strings = (
            b"10454", b"", b"", b"N000S", b"", b"TET4", b"sub", b"channel"
        )
        integers = (0, 0, 0, 0)
        payload = (
            channel.pack_u32(channel.AUTO_ENTER_SINGLE_MODE_TOS)
            + channel.pack_string(strings[0])
            + channel.pack_u32(integers[0])
            + channel.pack_string(strings[1])
            + channel.pack_string(strings[2])
            + channel.pack_string(strings[3])
            + channel.pack_u32(integers[1])
            + channel.pack_u32(integers[2])
            + channel.pack_string(strings[4])
            + channel.pack_u32(integers[3])
            + b"".join(channel.pack_string(v) for v in strings[5:])
        )
        session = RecordingSession()
        channel._dispatch(
            session, object(), channel.AUTO_ENTER_SINGLE_MODE_TOS, payload
        )
        response_strings = [b""] * 12
        response_strings[5:8] = strings[5:8]
        self.assertEqual(
            session.sent,
            [channel.auto_enter_single_mode_to_c(
                game_host=b"127.0.0.1",
                game_port=15002,
                strings=tuple(response_strings),
            )],
        )

        # These three response fields feed k22e/k23e/k24e in the client
        # converter; k22e is then passed to fillEnterRoomParameter as k42e.
        r = Reader(session.sent[0])
        self.assertEqual(r.u32(), channel.AUTO_ENTER_SINGLE_MODE_TOC)
        r.string()  # +0x0c
        r.u32()     # +0x28
        r.string()  # +0x2c
        r.string()  # +0x48
        r.string()  # +0x64
        r.u32()     # +0x80
        r.u32()     # +0x84
        r.string()  # +0x88
        r.u32()     # +0xa4
        self.assertEqual(
            tuple(r.string() for _ in range(3)),
            strings[5:8],
        )
        self.assertEqual(r.string(), b"")  # success status at +0xfc
        r.u32()
        r.string()
        self.assertEqual(r.string(), b"127.0.0.1")
        self.assertEqual(r.u32(), 15002)
        self.assertEqual(r.string(), b"")
        self.assertEqual(r.remaining(), 0)


class DiscoveryOnlyChannelTest(unittest.TestCase):
    def test_handshake_only_sends_no_application_reply_and_waits_for_close(self):
        client, server = socket.socketpair()
        client.settimeout(0.15)
        worker = threading.Thread(
            target=channel.handle, args=(server, True), daemon=True
        )
        try:
            worker.start()
            client.sendall(CLIENT_SHARE)
            server_share = bytearray()
            while len(server_share) < 48:
                part = client.recv(48 - len(server_share))
                self.assertTrue(part)
                server_share.extend(part)
            self.assertEqual(len(server_share), 48)

            # After the handshake the legacy mode must stay silent, not send
            # AuthToC or any guessed application-level response.
            with self.assertRaises(socket.timeout):
                client.recv(1)

            # The client owns the close in the observed retry scenario.
            client.shutdown(socket.SHUT_WR)
            worker.join(timeout=1)
            self.assertFalse(worker.is_alive())
            self.assertEqual(client.recv(1), b"")
        finally:
            client.close()
            if worker.is_alive():
                server.close()
                worker.join(timeout=1)


class ItemStateTest(unittest.TestCase):
    def test_empty_response_layout(self):
        r = Reader(channel.item_state_to_c(flag=0, text=b"t"))
        self.assertEqual(r.u32(), channel.ITEM_STATE_TOC)
        self.assertEqual(r.take(1), b"\x00")
        self.assertEqual(r.string(), b"t")
        self.assertEqual(r.u32(), 0)
        self.assertEqual(r.remaining(), 0)

    def test_rejects_bad_flag(self):
        with self.assertRaises(ValueError):
            channel.item_state_to_c(flag=300)


class ItemStateRequestTest(unittest.TestCase):
    def test_observed_request_layout(self):
        payload = (
            channel.pack_u32(channel.ITEM_STATE_TOS)
            + channel.pack_string(b"test")
            + b"\x01"
        )
        request = channel.parse_item_state_request(payload)
        self.assertEqual(request.member_key, b"test")
        self.assertEqual(request.option, 1)

    def test_rejects_trailing_bytes(self):
        payload = (
            channel.pack_u32(channel.ITEM_STATE_TOS)
            + channel.pack_string(b"test")
            + b"\x01\x00"
        )
        with self.assertRaises(ProtocolError):
            channel.parse_item_state_request(payload)


    def test_dispatch_sends_the_live_accepted_empty_item_response(self):
        class RecordingSession:
            def __init__(self):
                self.sent = []

            def send(self, conn, body):
                self.sent.append(body)

        session = RecordingSession()
        payload = (
            channel.pack_u32(channel.ITEM_STATE_TOS)
            + channel.pack_string(b"test")
            + bytes([1])
        )
        channel._dispatch(session, object(), channel.ITEM_STATE_TOS, payload)
        self.assertEqual(session.sent, [channel.item_state_to_c()])


class SingleModeRoomInfoLayoutTest(unittest.TestCase):
    def test_statically_recovered_field_order(self):
        r = Reader(channel.single_mode_room_info_to_c(b"room", 0x10203040, 0x7f))
        self.assertEqual(r.u32(), channel.SINGLE_MODE_ROOM_INFO_TOC)
        self.assertEqual(r.string(), b"room")
        self.assertEqual(r.u32(), 0x10203040)
        self.assertEqual(r.take(1), b"\x7f")
        self.assertEqual(r.remaining(), 0)

    def test_rejects_out_of_range_values(self):
        with self.assertRaises(ValueError):
            channel.single_mode_room_info_to_c(value=0x100000000)
        with self.assertRaises(ValueError):
            channel.single_mode_room_info_to_c(flag=256)


class LayerAlignmentBatchTest(unittest.TestCase):
    @staticmethod
    def auto_enter_payload():
        return (
            channel.pack_u32(channel.AUTO_ENTER_SINGLE_MODE_TOS)
            + channel.pack_string(b"test")
            + channel.pack_u32(0)
            + channel.pack_string(b"")
            + channel.pack_string(b"")
            + channel.pack_string(b"N000S")
            + channel.pack_u32(0)
            + channel.pack_u32(0)
            + channel.pack_string(b"")
            + channel.pack_u32(0)
            + channel.pack_string(b"TET4")
            + channel.pack_string(b"")
            + channel.pack_string(b"")
        )

    def test_three_alignment_markers_reveal_auto_enter_message(self):
        message = self.auto_enter_payload()
        batch = (
            channel.pack_u32(channel.LAYER_ALIGNMENT)
            + channel.pack_u32(channel.LAYER_ALIGNMENT)
            + channel.pack_u32(channel.LAYER_ALIGNMENT)
            + message
        )
        msg_id, payload = channel.unwrap_layer_alignment(batch)
        self.assertEqual(msg_id, channel.AUTO_ENTER_SINGLE_MODE_TOS)
        self.assertEqual(payload, message)
        request = channel.parse_auto_enter_single_mode_request(payload)
        self.assertEqual(request.strings, (
            b"test", b"", b"", b"N000S", b"", b"TET4", b"", b""
        ))
        self.assertEqual(request.integers, (0, 0, 0, 0))

    def test_alignment_only_batch_is_not_a_protocol_error(self):
        batch = channel.pack_u32(channel.LAYER_ALIGNMENT)
        msg_id, payload = channel.unwrap_layer_alignment(batch)
        self.assertEqual(msg_id, channel.LAYER_ALIGNMENT)
        self.assertEqual(payload, batch)

    def test_get_display_member_info_request_layout_from_capture(self):
        payload = (
            channel.pack_u32(channel.GET_DISPLAY_MEMBER_INFO_TOS)
            + channel.pack_string(b"test")
            + channel.pack_u32(4)
        )
        request = channel.parse_get_display_member_info_request(payload)
        self.assertEqual(request.member_id, b"test")
        self.assertEqual(request.option, 4)


class SessionTest(unittest.TestCase):
    def test_client_frame_is_read_by_server_session(self):
        master = master_for_run16()
        client_send = crypto.Stream.from_master(master, "decrypt_client")
        wire = client_send.encrypt(channel.frame(channel.auth_to_c()[:4]))
        a, b = socket.socketpair()
        try:
            a.sendall(wire)
            session = channel.Session(master)
            msg_id, _ = session.read_frame(b)
            self.assertEqual(msg_id, channel.AUTH_TO_C)
        finally:
            a.close()
            b.close()

    def test_server_frame_decrypts_with_client_receive_mirror(self):
        master = master_for_run16()
        a, b = socket.socketpair()
        try:
            session = channel.Session(master)
            session.send(a, channel.auth_to_c(b"hi"))
            wire = b.recv(4096)
            plain = crypto.Stream.from_master(master, "encrypt_to_client").decrypt(wire)
            self.assertEqual(plain, channel.frame(channel.auth_to_c(b"hi")))
        finally:
            a.close()
            b.close()

    def test_layer_alignment_prefix_is_unwrapped_before_dispatch(self):
        master = master_for_run16()
        client_send = crypto.Stream.from_master(master, "decrypt_client")
        message = LayerAlignmentBatchTest.auto_enter_payload()
        batch = (
            channel.pack_u32(channel.LAYER_ALIGNMENT)
            + channel.pack_u32(channel.LAYER_ALIGNMENT)
            + channel.pack_u32(channel.LAYER_ALIGNMENT)
            + message
        )
        a, b = socket.socketpair()
        try:
            a.sendall(client_send.encrypt(channel.frame(batch)))
            session = channel.Session(master)
            msg_id, payload = session.read_frame(b)
            self.assertEqual(msg_id, channel.AUTO_ENTER_SINGLE_MODE_TOS)
            self.assertEqual(payload, message)
        finally:
            a.close()
            b.close()


if __name__ == "__main__":
    unittest.main()
