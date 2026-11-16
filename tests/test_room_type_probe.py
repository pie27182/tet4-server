"""Tests for the opt-in Single Mode room-info transition probe."""
import unittest
from unittest.mock import patch

from tet4server.domain.room import Room, Settings
from tet4server.services.views import room_info


class SingleModeRoomInfoProbeTest(unittest.TestCase):
    def test_default_keeps_the_client_requested_options(self):
        room = Room(1, b"tester", Settings(options=b"N000S", limit=1))
        with patch("tet4server.services.views.SINGLE_MODE_ROOM_INFO_OPTIONS", b""):
            info = room_info(room)
        self.assertEqual(info["options"], b"N000S")
        self.assertEqual(info["limit"], 1)

    def test_override_changes_only_single_mode_room_info(self):
        single = Room(1, b"tester", Settings(options=b"N000S", limit=1))
        multiplayer = Room(2, b"tester", Settings(options=b"Y000MNN", limit=2))
        with patch("tet4server.services.views.SINGLE_MODE_ROOM_INFO_OPTIONS", b"H000S"):
            single_info = room_info(single)
            multiplayer_info = room_info(multiplayer)

        self.assertEqual(single_info["options"], b"H000S")
        self.assertEqual(single_info["limit"], 1)
        self.assertEqual(single.settings.options, b"N000S")
        self.assertEqual(multiplayer_info["options"], b"Y000MNN")
