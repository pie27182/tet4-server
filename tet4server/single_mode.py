"""Experimental Tet4.exe layer-3 AddMemberToC bootstrap.

The local client registers the Tetris-specific AddMemberToC handler at XLBP
layer 3. This is distinct from HgCom3's generic layer-0 message with the same
wire ID. The command's nested XDR layout is recovered from Tet4.exe; the
default school/useable-item values below are only a structurally plausible
candidate and have not been accepted by a live client yet.
"""
from __future__ import annotations

from .channel import layer_message
from .xdr import pack_string, pack_u32

ADD_MEMBER_TO_C = 0x0AB84D0A
ADD_MEMBER_LAYER = 3

# XDR IMessage type identifiers from Tet4.exe constructors.
TETRIS_MEMBER_INFO_ID = 0x0FFA613A
TETRIS_SCHOOL_INFO_ID = 0x03DB1FBA
USE_ABLE_ITEM_ID = 0x05D0FCFA
SINGLE_MODE_INFO_ID = 0x0071FA1A

# Cmd_Channel_OrderTypeAddMemberTetrisToC::vfunc_2 returns
# &LAB_005216ca; the command constructor stores that pointer at +0x08 and
# its serializer writes the field when the optional flag (+0x04) is false.
# Keep this explicit because it is a client-image-specific value.
ADD_MEMBER_COMMAND_TAG = 0x005216CA


def single_mode_info(
    index: int = 0,
    values: tuple[int, int, int] = (0, 0, 0),
    item_values: tuple[int, ...] = (),
    text_values: tuple[bytes, ...] = (),
    tail_values: tuple[int, int] = (0, 0),
) -> bytes:
    """Serialize one _SingleModeInfo entry for the Tetris player map.

    Confirmed field order from FUN_0044c950/FUN_004596d0:
      type-id | index | three u32 fields | u32-vector | string-vector |
      two trailing u32 fields.

    +0x0c is the map key consumed by FUN_004ebf70; index 0 is the candidate
    slot for the local Single Mode player. The other numeric field meanings
    are not yet established and default to zero.
    """
    if not 0 <= index <= 0xFFFFFFFF:
        raise ValueError("single-mode index must fit in uint32")
    if len(values) != 3 or any(not 0 <= v <= 0xFFFFFFFF for v in values):
        raise ValueError("values must contain three uint32 values")
    if any(not 0 <= v <= 0xFFFFFFFF for v in item_values):
        raise ValueError("item_values must contain uint32 values")
    if any(not isinstance(v, bytes) for v in text_values):
        raise ValueError("text_values must contain bytes")
    if len(tail_values) != 2 or any(not 0 <= v <= 0xFFFFFFFF for v in tail_values):
        raise ValueError("tail_values must contain two uint32 values")

    return (
        pack_u32(SINGLE_MODE_INFO_ID)
        + pack_u32(index)
        + b"".join(pack_u32(v) for v in values)
        + pack_u32(len(item_values))
        + b"".join(pack_u32(v) for v in item_values)
        + pack_u32(len(text_values))
        + b"".join(pack_string(v) for v in text_values)
        + b"".join(pack_u32(v) for v in tail_values)
    )


def default_school_info_candidate() -> bytes:
    """Return a zero/default _TetrisSchoolInfo candidate.

    The serializer confirms the outer field sequence and the nested IMessage
    slot at +0x4c. Its concrete default child type/value has not been verified
    against a live capture. _UseAbleItem is used because its constructor and
    type ID are present in the same Tet4 XDR family; treat this as experimental.
    """
    useable_item = (
        pack_u32(USE_ABLE_ITEM_ID)
        + pack_string(b"")
        + bytes((0, 0, 0))
    )
    return (
        pack_u32(TETRIS_SCHOOL_INFO_ID)
        + pack_u32(0)               # +0x0c
        + pack_string(b"")         # +0x10
        + pack_string(b"")         # +0x2c
        + pack_u32(0)               # +0x48
        + useable_item              # nested IMessage at +0x4c (unverified type)
        + pack_u32(0)               # +0xc8
    )


def tetris_member_info(
    member_id: bytes,
    *,
    single_mode_index: int = 0,
    school_info: bytes | None = None,
) -> bytes:
    """Serialize the recovered _TetrisMemberInfo structure.

    The member ID is the string at +0x0c. Its +0xd0 vector contains
    _SingleModeInfo records used by FUN_004ec400 to populate the map queried
    by CTetSingleMainBody::FUN_00461c50.

    school_info can replace the unverified default nested school candidate
    with bytes from a future real-client capture. It must include its own XDR
    type identifier.
    """
    if not isinstance(member_id, bytes) or not member_id:
        raise ValueError("member_id must be a non-empty byte string")
    if school_info is None:
        school_info = default_school_info_candidate()
    if not isinstance(school_info, bytes) or len(school_info) < 4:
        raise ValueError("school_info must be a complete nested XDR object")

    single = single_mode_info(index=single_mode_index)
    return (
        pack_u32(TETRIS_MEMBER_INFO_ID)
        + pack_string(member_id)    # +0x0c
        + school_info               # +0x28
        + pack_u32(0)               # +0x5c
        + pack_u32(0)               # +0x60
        + pack_string(b"")         # +0x64
        + pack_u32(0)               # +0x80
        + pack_u32(0)               # +0x84
        + pack_u32(0)               # +0x88
        + pack_string(b"")         # +0x8c
        + pack_string(b"")         # +0xa8
        + bytes(8)                  # +0xc8 qword
        + pack_u32(1)               # +0xd0 vector count
        + single
    )


def add_member_to_c_candidate(
    member_id: bytes,
    *,
    single_mode_index: int = 0,
    school_info: bytes | None = None,
) -> bytes:
    """Build the Tetris-specific AddMemberToC application message body."""
    if not 0 <= ADD_MEMBER_COMMAND_TAG <= 0xFFFFFFFF:
        raise ValueError("command tag must fit in uint32")
    return (
        pack_u32(ADD_MEMBER_TO_C)
        + pack_u32(ADD_MEMBER_COMMAND_TAG)
        + tetris_member_info(
            member_id,
            single_mode_index=single_mode_index,
            school_info=school_info,
        )
    )


def layered_add_member_to_c_candidate(
    member_id: bytes,
    *,
    single_mode_index: int = 0,
    school_info: bytes | None = None,
) -> bytes:
    """Add the three XLBP layer-alignment markers required by Tet4.exe."""
    return layer_message(
        add_member_to_c_candidate(
            member_id,
            single_mode_index=single_mode_index,
            school_info=school_info,
        ),
        ADD_MEMBER_LAYER,
    )
