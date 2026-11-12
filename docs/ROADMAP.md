# Roadmap

Ordered by dependency. Each step needs the one above it. Items are checked only when
the behavior is confirmed by a live run with the real client or by a test against
captured bytes.

## Done

- [x] **Client analysis: startup chain and ports** (`CLIENT.md` 1–2)
- [x] **TPack: AuthSession, LoginTPack** (`tet4server/tpack.py`, `tests/test_tpack.py`)
- [x] **CDS: select reply** with tid echo, error 0, host/port in columns 3/4
      (`tet4server/cds.py`, `tests/test_cds.py`)
- [x] **Secure handshake** (48-byte shares, master derivation, `tet4server/crypto.py`)
- [x] **Stream cipher, both directions.** Client-to-server decrypts the first frame;
      server-to-client frames are decrypted and dispatched by the client.
- [x] **Channel auth reply:** `Cmd_AuthToC` (our reply, result 0) accepted by the client.
- [x] **Channel user-id reply:** `Cmd_Channel_GetUserIdToC` accepted; the client moves on.
- [x] **Live check tool** (`tools/live_check.py`) runs the real client against the repo servers.

## In progress

- [ ] **Client crash after the channel exchange**: `ISSUE-002` in `docs/ISSUES.md`.
- [ ] **Reply to `Cmd_Channel_EnterChannelByUserIdToS`**: `ISSUE-003` in `docs/ISSUES.md`.
- [ ] **Channel row missing in the lobby**: `ISSUE-001` in `docs/ISSUES.md`.

## To do

- [ ] **Decode `Cmd_AuthToS` fields** (`test`, `TET4`, 32×`A`, `TicketAuthByMemberId`).
      The server does not need them yet; this is for a later check of the account.
- [ ] **Channel state after entering:** room list (`Cmd_Channel_GetRoomListToC`
      `0x0226968A`) and member list, with their request and reply layouts.
- [ ] **Single Mode entry.** `Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS`
      (`0x031AC76A`) and its reply `...ToC` (`0x0DF37B3A`), room info
      `Cmd_ChannelOrderTypeSingleModeRoomInfoTetrisToC` (`0x04B61A2A`),
      `_SingleModeInfo` (`0x0071FA1A`).
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
- Full implementation of [Hangame Tetris](https://harddrop.com/wiki/Tetris_Hangame) online multiplayer server that functions just like the original one, which shut down in 2013
