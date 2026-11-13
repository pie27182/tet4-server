# Roadmap: playable Single Mode

This is the implementation plan and ordered task list. GitHub Issues track defects and
unexpected behavior only; they are not a backlog of every development task.

The target milestone is a complete local Single Mode loop:

1. log in and enter the channel;
2. choose Single Mode and create/enter its game session;
3. receive a valid initial board and next-piece state;
4. play by sending piece-placement/input messages and receiving authoritative updates;
5. finish a game, display its result, and return cleanly.

A task is checked only after its stated test or live-client criterion passes. A byte-level
serializer test proves layout, not that the client accepts the message.

## Milestone 1 — reach a stable channel lobby

- [x] TPack login path: AuthSession and LoginTPack.
- [x] CDS channel directory reply with the correct host/port columns and echoed request id.
- [x] Secure channel handshake and stream cipher in both directions.
- [x] Channel authorization reply: client accepts `Cmd_AuthToC`.
- [x] User-id lookup reply: client accepts `Cmd_Channel_GetUserIdToC`.
- [x] Channel-entry request decoder and `Cmd_Channel_EnterChannelToC` serializer.
- [x] Recover the EnterChannel request/response mapping for required lobby metadata:
      ToS strings 3/4 are `k23e`/`k24e`; ToC strings 3/8 populate
      `MetpInfo(4).k23e/k24e`. The server now echoes these values.
- [x] Recover the separate `Cmd_Channel_GetMemberInfoToC` push path:
      `Msg_GetUserId` sets `GData["k602e"]="k601e"`; `MyData()` looks up that
      member key; `Msg_GetMemberInfo -> Msg_AddMember` creates the local record.
      Static finding only; it does not prove the server push timing.
- [ ] Live-test the experimental `GetMemberInfoToC` push after `EnterChannelToC`
      and verify that `SGlobalInfo::MyData()` becomes non-null.
- [ ] Live-verify that `Msg_SendEnterRoom` passes its `MyData()+0x10` read,
      then confirm a TCP connection attempt to `127.0.0.1:15002`.
- [x] Live probe accepted: after the EnterChannel reply the client sends
      `Cmd_LayerAlignment` and then `Cmd_Channel_GetMemberListToS`.
- [x] Reply to `Cmd_Channel_GetMemberListToS` with an empty member vector.
      Live run: the client accepted it and requested the room list. Non-empty member
      record serialization is not implemented.
- [x] Reply to `Cmd_Channel_GetRoomListToS` with an empty room vector.
      Live run: the client accepted it and requested item state. Non-empty room
      record serialization is not implemented.
- [x] Reply to `Cmd_Item_GetItemStateToS` with an empty item vector.
      Live run: the client stays in the channel for more than two minutes with this
      reply; without it the observed client exits about three seconds after the request.
- [ ] Verify that the Single Mode action is available and can be invoked from this
      channel state; remaining channel messages, if any, should be added only from a
      fresh trace.
- [ ] Resolve the lobby row/state defect and the post-channel crash if either remains
      reproducible after the member/room responses. Track those defects in GitHub Issues.

## Milestone 2 — enter a Single Mode session

- [x] Trace the Single Mode button event: `Tet4.exe:0x0049D0A0` constructs
      `Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS` (`0x031AC76A`) and sends
      it on the channel connection. Its serializer at `0x004A18F0` is decoded;
      `tet4server.channel` now parses and logs the eight strings and four uint32 fields.
- [x] Capture the request in the 2026-11-13 PCAP after the empty member/room-list
      probes. It is inside an XLBP batch with three leading `Cmd_LayerAlignment`
      markers; decoded values are member `test`, room type `N000S`, GameID `TET4`,
      and zero/empty defaults for the remaining fields.
- [x] Recover the AutoEnter response's full top-level field order from
      `Tet4.exe:0x00442E90` / `0x00443080` and its success converter
      `0x00445F60`. The converter rejects status `v2e`; the game endpoint is
      `k52e` (host) + `k53e` (port).
- [x] Add a controlled local AutoEnter response pointing at
      `127.0.0.1:15002`, plus a game-socket listener using the recovered secure
      handshake. The listener currently captures frames and deliberately sends no
      game-level replies.
- [x] Implement the XLBP batch handling needed for the observed three leading
      `Cmd_LayerAlignment` markers. The old reader treated the first marker as the
      command ID and silently skipped the actual AutoEnter request.
- [x] Match the AutoEnter response's identity fields to the request: ToS strings
      5..7 (GameID, `k23e`, `k24e`) are copied into ToC offsets +0xa8/+0xc4/+0xe0.
      Ghidra shows these become `k22e`, `k23e`, `k24e`; +0xa8 is also passed
      to `fillEnterRoomParameter`. A regression test checks the response bytes.
- [ ] Run the client again and verify that this corrected AutoEnter response is
      accepted, that the client connects to `127.0.0.1:15002`, and capture the
      first game request. The 2026-11-13 capture has no game packets and shows
      the previous response's identity fields empty. Other room metadata remains
      unverified.
- [x] Recover the top-level `Cmd_ChannelOrderTypeSingleModeRoomInfoTetrisToC`
      layout (`u32 | string | u32 | u8`) and add a serializer test. Its role and
      values remain unverified; do not send it until the live sequence confirms it.
- [ ] Recover the nested `_SingleModeInfo` (`0x0071FA1A`) fields.
- [ ] Verify the real client transitions from the lobby to the Single Mode room screen
      without a crash or indefinite wait.

The channel-side request was confirmed on wire, but the previous server version did
not dispatch it because it appeared after LayerAlignment markers. The parser fix is
implemented; a fresh live run is required to establish whether the current AutoEnter
response is accepted.

## Milestone 3 — initialize a playable Tetris game

- [ ] Confirm the dispatch from `Cmd_Room_OrderTypeStartNewGameTetrisToC`
      (`0x06FE5D0A`, `vector<XDR::IMessage> | string | u32`) to
      `CGameLobbyController::Net_StartNewGame` and identify every nested message type.
- [ ] Decode and implement the nested start-game message vector and the
      `Cmd_Room_OrderTypeSingleModeGameReportTetrisToC` (`0x0EE1D56A`) payload,
      including `_TetrisMemberInfo` and `_SingleModeInfo`.
- [ ] Decode the initial board/map, dimensions, score/level/speed state, hold state,
      and next-piece queue from the client handlers and serializers.
- [ ] Implement the minimum server-to-client initialization needed to render the
      board and first active piece.
- [ ] Confirm the board and first piece appear in a live run; capture the complete
      initial message sequence as regression fixtures.

## Milestone 4 — make gameplay work

- [x] Decode client-to-server piece placement request:
      `Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS` (`0x0CC4004A`) is
      `u32 id | u32 × 4`; the listener parses and captures it.
- [x] Decode the client game report/input request:
      `Cmd_Room_OrderTypeSingleModeGameReportTetrisToS` (`0x05BCDF3A`) is
      four strings, two uint32s, one byte bool, and three uint32s; the listener
      parses non-sensitive numeric fields and saves the original frame locally.
- [x] Add an independent deterministic engine prototype: seeded seven-bag queue,
      piece spawn/move/rotate/hold, gravity step, hard drop, collision, lock, line clear,
      score and level progression. Unit tests cover these state transitions.
- [ ] Confirm the original client's board dimensions, piece IDs, rotation/wall-kick
      rules, gravity timing, hold behavior and score mapping; adjust the prototype to
      match before connecting it to the wire protocol.
- [ ] Serialize the engine state into the actual `StartNewGameToC` /
      `GameReportToC` nested structures. The required `_SingleModeInfo` and
      `_TetrisMemberInfo` fields are not yet fully decoded.
- [ ] Connect `PolyMinoPutToS` actions to the engine, validate them against the
      authoritative board, and send the client's required update/report messages.
- [ ] Decode and implement server-to-client start/update messages, including
      `Cmd_Room_OrderTypeSingleModeGameReportTetrisToC` (`0x0EE1D56A`), and all
      required per-turn updates.
- [ ] Verify multiple pieces, movement/rotation/drop behavior, line clears and scoring
      against the live client.

## Milestone 5 — finish and return

- [ ] Decode and send `Cmd_Channel_OrderTypeSingleModeResultMemberTetrisToC`
      (`0x0928E8BA`) with the result data the client expects.
- [ ] Verify the result screen, completion state, and clean return to the lobby.
- [ ] Verify reconnect/restart after a completed or abandoned game.

## Engineering / regression tasks

- [x] Live-run harness starts TPack, CDS, channel and game-socket services, records
      the session, and saves decoded game frames as local ignored binary fixtures.
- [x] GitHub Actions passed all 56 tests on HEAD
      `bd51fd7a251782222a0942382c71ad2147397e43`
      ([run 43335816230](https://github.com/pie27182/tet4-server/actions/runs/43335816230)).
- [x] Add a top-level `python -m tet4server` runner to start TPack, CDS, channel and game listeners on loopback.
- [ ] Make the protocol sequence reproducible from a clean checkout using only
      documented local client files and a test account.
- [ ] Keep captured byte fixtures and regression tests for every implemented message.

## Out of scope until Single Mode works

- Multiplayer rooms, chat, friends, shop, rankings and other channel features.
- Other game modes.
- Full implementation of [Hangame Tetris](https://harddrop.com/wiki/Tetris_Hangame) online multiplayer server that functions just like the original one, which shut down in 2013.
