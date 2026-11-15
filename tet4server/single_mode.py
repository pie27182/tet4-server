"""Live-probed layer-3 AddMemberToC wire candidate for the local Tet4 client.

The accepted probe has this exact structure:
    three XLBP alignment markers | message ID | XDR member-id string |
    87-byte opaque profile suffix

The suffix is retained byte-for-byte from the successful local-client probe.
Its fields are not yet decoded, so this is a one-player bootstrap candidate,
not a general member-profile serializer. It remains opt-in in game.py.
"""
from __future__ import annotations

from .channel import layer_message
from .xdr import pack_string, pack_u32

ADD_MEMBER_TO_C = 0x0AB84D0A
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
