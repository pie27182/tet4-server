"""Live-probed layer-3 AddMemberToC wire candidate for the local Tet4 client.

The accepted probe has this exact structure:
    three XLBP alignment markers | message ID | XDR member-id string |
    87-byte opaque profile suffix

The suffix is retained byte-for-byte from the successful local-client probe.
Its fields are not yet decoded, so this is a one-player bootstrap candidate,
not a general member-profile serializer. It remains opt-in in game.py.
"""
from __future__ import annotations

import struct

from .channel import LAYER_ALIGNMENT, layer_message
from .xdr import pack_string, pack_u32

ADD_MEMBER_TO_C = 0x0AB84D0A
ROOM_ADD_MEMBER_TO_C = 0x0619233A
ADD_MEMBER_LAYER = 3

# Exact 87-byte suffix from the live-accepted "working-no-tag-no-type" fixture.
# Do not insert the previously guessed 0x005216CA command tag or the
# 0x0FFA613A _TetrisMemberInfo type ID before the member string: doing so made
# the client interpret those words as the string length.
_ADD_MEMBER_OPAQUE_SUFFIX = bytes(52) + bytes.fromhex("00000100") + bytes(31)


def add_member_to_c_candidate(member_id: bytes) -> bytes:
    """Build the live-probed AddMemberToC body.

    The first field after the command ID is the member-id string. The remaining
    profile bytes are an opaque captured default; only the member ID "test" has
    been verified in a live client run.
    """
    if not isinstance(member_id, bytes) or not member_id:
        raise ValueError("member_id must be a non-empty byte string")
    return pack_u32(ADD_MEMBER_TO_C) + pack_string(member_id) + _ADD_MEMBER_OPAQUE_SUFFIX


def layered_add_member_to_c_candidate(member_id: bytes) -> bytes:
    """Add the three XLBP alignment markers required for registration at layer 3."""
    return layer_message(add_member_to_c_candidate(member_id), ADD_MEMBER_LAYER)


def room_base_add_member_to_c_candidate(member_id: bytes) -> bytes:
    """Build a diagnostic layer-0 Cmd_Room_AddMemberToC base body.

    The layer-0 room converter (HgCom3.dll:0x6013A060) applies the "s4e"/"c5e"
    header and adds k50e, k57e, k58e, k3e and the remaining room-member keys.
    The layer-3 converter used by the accepted 87-byte extension does not set
    the header or expose those keys, so a layer-3-only batch reaches the
    registered dispatcher with a null service and faults at 0x004FBBB4.

    This body follows the recovered room field order (vfunction7 at
    0x6012FC50): two strings, one u32, four strings, one u32, one string,
    two i64s, six u32s, one string, one u32, four strings, two u32s and one
    u32 vector. Only the first two strings (k50e/k57e) and the fourth string
    (k3e) carry the member id. The remaining profile fields are empty or
    zero, so this is a diagnostic bootstrap, not a verified member profile.
    """
    if not isinstance(member_id, bytes) or not member_id:
        raise ValueError("member_id must be a non-empty byte string")
    return (
        pack_u32(ROOM_ADD_MEMBER_TO_C)
        + pack_string(member_id)    # k50e
        + pack_string(member_id)    # k57e
        + pack_u32(0)               # k58e
        + pack_string(member_id)    # k3e
        + pack_string(b"")          # k7e
        + pack_string(b"")          # k8e
        + pack_string(b"")          # k11e
        + pack_u32(0)               # k10e
        + pack_string(b"")          # k12e
        + struct.pack(">q", 0) * 2  # i64 fields
        + pack_u32(0) * 6           # k26e..k30e
        + pack_string(b"")          # k34e
        + pack_u32(0)               # k33e
        + pack_string(b"")          # k32e
        + pack_string(b"")          # k102e
        + pack_string(b"")          # k37e
        + pack_string(b"")          # k38e
        + pack_u32(0)               # k53e
        + pack_u32(0)               # k35e
        + pack_u32(0)               # k153e vector count
    )


def layered_add_member_pair_candidate(member_id: bytes) -> bytes:
    """Combine the layer-0 room base and layer-3 Tetris extension in one batch.

    Layer 0 supplies the s4e/c5e header and the k50e/k57e/k58e/k3e keys. Layers
    1 and 2 are empty, so exactly two alignment markers separate them from the
    layer-3 extension.
    """
    base = room_base_add_member_to_c_candidate(member_id)
    extension = add_member_to_c_candidate(member_id)
    return base + pack_u32(LAYER_ALIGNMENT) * 2 + extension
