# Roadmap

Ordered by dependency. Each step needs the one above it. Items are checked only when
the behavior is confirmed by a captured run or a test against captured bytes.

## Done

- [x] **Client analysis: startup chain and ports** (`CLIENT.md` 1–2)
- [x] **TPack: AuthSession, LoginTPack** (`tet4server/tpack.py`, `tests/test_tpack.py`)
- [x] **CDS: select reply** with tid echo, error 0, host/port in columns 3/4
      (`tet4server/cds.py`, `tests/test_cds.py`)
- [x] **Secure handshake** (48-byte shares, master derivation, `tet4server/crypto.py`)
- [x] **Stream cipher, client-to-server direction** (decrypts run16's first frame,
      `tests/test_crypto.py`)
- [x] **Message ID of the first channel message** (`Cmd_AuthToS = 0x0365C03A`)

## In progress

- [ ] **Decode `Cmd_AuthToS` fields.** Known: `test`, `TET4`, 32×`A`,
      `TicketAuthByMemberId`. Unknown: the meaning of each field and the zero dwords
      between them. Source: serializer in `HgCom3.dll`.
- [ ] **Server-to-client stream** (`encrypt`). Mirror of the client receive filter, not
      yet accepted by the client.

## To do

- [ ] **Channel framing module** (`tet4server/channel.py`): read handshake, read frames
      through the decrypt stream, write frames through the encrypt stream. Test against
      the run16 vector.
- [ ] **`Cmd_AuthToC` reply and `Msg_GetAuth`.** Find the reply format in `HgCom3.dll` and
      the field `k161e` read in `HgModel3.dll`. Target: the "connecting" dialog closes
      and the client sends its next message.
- [ ] **Channel login state.** Identify the messages after authorization (room list or
      enter-channel request) and their replies.
- [ ] **Single Mode entry.** `AutoEnterSingleModeRoomTetrisToS` (`0x031AC76A`) and its
      reply `0x0DF37B3A`, RoomInfo `0x04B61A2A`, `_SingleModeInfo` `0x0071FA1A`.
- [ ] **Game board appears.** Initial state and piece sequence needed for the first
      playable screen.
- [ ] **Gameplay messages.** PolyMinoPut `0x0CC4004A`, GameReport `0x05BCDF3A` /
      `0x0EE1D56A`.
- [ ] **Game end.** ResultMember `0x0928E8BA` and return to the menu without errors.
- [ ] **Application runner** (`python -m tet4server`) starting TPack, CDS and channel
      together.

## Out of scope for now

- Multiplayer rooms, chat, friends, shop, and other channel features.
- Other game modes.
- Replacing the client with a browser or custom implementation.
