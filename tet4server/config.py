"""Every setting of the server and every fixed value of the client, in one place.

The first part holds this server's choices: addresses, capacity, timing, the TP
economy and the account rules. Change them freely.

The second part holds the client's own values: its identifiers, sizes and codes,
as the unmodified Tet4.exe 1.3.4 expects them. Changing one breaks the client.
docs/PROTOCOL.md gives the evidence for each.

The wire formats themselves (message IDs, field layouts and names) are in
protocol/catalog.py.
"""

import os

# ====================================================================================
# This server's settings
# ====================================================================================

# --- Network -------------------------------------------------------------------------

HOST = "127.0.0.1"          # the address to listen on, unless --host says otherwise
TPACK_PORT = 10454          # the bootstrap string names it (k602e)
CDS_PORT = 15000            # the bootstrap's metp:// address names it
CHANNEL_PORT = 15001        # channel 1's channel socket; channel n's is 15001 + 2(n - 1)
GAME_PORT = 15002           # channel 1's game socket; channel n's is 15002 + 2(n - 1)
ACCOUNTS_PORT = 10455       # registration and login, with a database

# --- Capacity ------------------------------------------------------------------------

MAX_MEMBERS = 300           # players in one channel. Every lobby event (a player arriving,
                            # a room changing, a chat line) goes to all of them, so more
                            # players means more channels, not bigger ones.
MAX_CHANNELS = 99           # --channels, each a process of its own
MAX_FRAME = 1 << 20         # bytes in a frame: far above any message; stops garbage lengths
MAX_BACKLOG = 1 << 20       # bytes unsent to a client before it counts as stuck: cut off
MAX_ACCOUNT_REQUEST = 4096  # bytes in one account service request
MAP_PLACES = 1000           # map places whose names the server learns (the client has ~60)

# --- Timing (seconds) ----------------------------------------------------------------

GAME_HANDSHAKE_DELAY = 0.2  # how late the game socket answers a key share (PROTOCOL.md 5.3)
PRESENCE_CHECK = 2.0        # how often a channel looks for its players logged in elsewhere
RECORDS_REFRESH = 60.0      # how often a channel rereads everyone's records, for the ranks
ACCOUNT_TIMEOUT = 30.0      # how long the account service waits for a request
CHANNEL_START_TIMEOUT = 30.0  # how long the front waits for a channel process to listen

# --- Rooms ---------------------------------------------------------------------------

DAILY_ROOMS = 99            # rooms a player may create a day without a room-host item

# Optional live-client probe: override only the options string in a Single Mode room's
# Channel_RoomInfoToC. The room's actual settings and create replies remain unchanged.
SINGLE_MODE_ROOM_INFO_OPTIONS = os.getenv("TET4_SINGLE_MODE_ROOM_INFO_OPTIONS", "").encode("ascii")
if SINGLE_MODE_ROOM_INFO_OPTIONS and len(SINGLE_MODE_ROOM_INFO_OPTIONS) != 5:
    raise ValueError("TET4_SINGLE_MODE_ROOM_INFO_OPTIONS must be exactly 5 ASCII bytes")

# --- TP, the points players earn and spend -------------------------------------------

START_POINTS = 10_000       # a new player's TP: enough to try the shop
GAME_POINTS = (30, 20, 10)  # TP for a multiplayer game by rank; later ranks get the last
MIN_GAME_SECONDS = 30       # shorter games earn nothing, so quick games are no TP farm
MAX_QUANTITY = 99           # products bought at once

# --- Reports (신고) -------------------------------------------------------------------

REPORT_INTERVAL = 10.0      # seconds between two reports kept from the same player
REPORT_CHAT_LINES = 50      # the last chat lines of a report that are kept
REPORT_TEXT = 200           # characters kept of a name, a reason or a chat line

# --- Accounts ------------------------------------------------------------------------

NAME_PATTERN = r"[a-z0-9_]{3,12}"   # account names; the client shows them as they are
PASSWORD_LENGTH = (8, 128)
TICKET_LIFETIME = 12 * 3600         # seconds a login ticket is valid
FAILED_LOGINS_PER_MINUTE = 10       # per client address; more are refused for a minute
SCRYPT = dict(n=2 ** 14, r=8, p=1, dklen=32)   # password hashing

# ====================================================================================
# The client's fixed values
# ====================================================================================

# --- Identifiers ---------------------------------------------------------------------

GAME_ID = b"TET4"           # the game, in the directory and in every channel request
SUB_ID = b""                # the channel group, empty in every request
CHANNEL_ID = b"1"           # the channel id the client sends, whichever channel it is in
DIRECTORY_SUB_ID = "01D0A"  # the directory's SubID column
TICKET_LENGTH = 32          # the width of the bootstrap's ticket fields (k8e, k300e)

# --- Sizes ---------------------------------------------------------------------------

ROOM_SLOTS = 100            # numbered rooms in a channel's room list
SEATS = 6                   # players in a room
RECORDS_SHOWN = 5           # Single Mode results the client shows and keeps per mode
SINGLE_MODES = 3            # Marathon, 40 lines and Ultra: modes 0, 1 and 2
FORTY_LINES = 1             # the mode whose result is a time, lower being better

# --- Codes ---------------------------------------------------------------------------

FAILED = b"v2e"             # a reply's result string (k1e) for failure; empty is success

# A room's state in the room list (k47e). The client lets players join rooms in
# WAITING and only watch rooms in PLAYING; quick join picks the fullest WAITING room.
ROOM_EMPTY, ROOM_WAITING, ROOM_PLAYING = 0, 4, 5

# A room's options (k46e): the mode letter first (Y item battle, N no items, R race,
# S survival, H painting, X a custom board), the map and flags after it, and
# SINGLE_MODE at index 4 for a Single Mode room.
SINGLE_MODE = b"S"

# Why a room was refused (the failcode of CreateRoomToC, GameJoinRoomToC and
# EnterRoomToC; 0 is success).
NO_FREE_SLOT = 1            # creating: every numbered slot is taken
NO_SUCH_ROOM, WRONG_PASSWORD, ROOM_FULL = 1, 2, 3   # joining; full also while playing

# Item codes, T and five digits: the server acts on these.
UNLIMITED_HOLD = "T10004"   # no limit on holding pieces
NEXT_PIECES = "T10005"      # shows more of the coming pieces
EMBLEM, TITLE = "2", "3"    # the digit after T: T2xxxx emblems, T3xxxx titles
EXTRA_SLOTS = {EMBLEM: "T90002", TITLE: "T90003"}   # each adds four slots
DECORATION_SLOTS = 4        # emblem and title slots without the items
NO_MISSION = 0xFFFFFFFF     # an emblem or title bought, not earned by a mission
