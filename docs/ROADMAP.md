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
- [x] Live probe accepted: after the EnterChannel reply the client sends
      `Cmd_LayerAlignment` and then `Cmd_Channel_GetMemberListToS`.
- [ ] Reply to `Cmd_Channel_GetMemberListToS` with a structurally valid member list.
      First probe uses an empty vector; next criterion is a live run where the client
      accepts it and requests the room list.
- [ ] Reply to `Cmd_Channel_GetRoomListToS` with a structurally valid room list.
      First probe uses an empty vector; verify the lobby remains usable and identify
      whether Single Mode entry is available without public rooms.
- [ ] Implement any follow-up channel messages that the real client requests before
      it can invoke Single Mode (for example item-state or refresh messages).
- [ ] Resolve the lobby row/state defect and the post-channel crash if either remains
      reproducible after the member/room responses. Track those defects in GitHub Issues.

## Milestone 2 — enter a Single Mode session

- [x] Trace the Single Mode button event: `Tet4.exe:0x0049D0A0` constructs
      `Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS` (`0x031AC76A`) and sends
      it on the channel connection. Its serializer at `0x004A18F0` is decoded;
      `tet4server.channel` now parses and logs the eight strings and four uint32 fields.
- [ ] Capture the request from a fresh live run after the empty member/room-list probes;
      confirm actual values (the builder sets `k602e`, `N000S`, GameID `TET4`,
      `k23e` and `k24e`, with remaining fields defaulted).
- [x] Recover the AutoEnter response's full top-level field order from
      `Tet4.exe:0x00442E90` / `0x00443080` and its success converter
      `0x00445F60`. The converter rejects status `v2e`; the game endpoint is
      `k52e` (host) + `k53e` (port).
- [x] Add a controlled local AutoEnter response pointing at
      `127.0.0.1:15002`, plus a game-socket listener using the recovered secure
      handshake. The listener currently captures frames and deliberately sends no
      game-level replies.
- [ ] Run the client, click Single Mode and verify AutoEnter success, connection to
      the local game socket, and capture the first game request. The room metadata
      fields other than host/port are still constructor defaults and may need values.
- [ ] Decode and implement `Cmd_ChannelOrderTypeSingleModeRoomInfoTetrisToC`
      (`0x04B61A2A`) and the nested `_SingleModeInfo` (`0x0071FA1A`).
- [ ] Verify the real client transitions from the lobby to the Single Mode room screen
      without a crash or indefinite wait.

## Milestone 3 — initialize a playable Tetris game

- [ ] Trace the room/game controller path from successful auto-enter to game start.
- [ ] Decode the initial board/map, dimensions, score/level/speed state, hold state,
      and next-piece queue from the client handlers and serializers.
- [ ] Implement the minimum server-to-client initialization needed to render the
      board and first active piece.
- [ ] Confirm the board and first piece appear in a live run; capture the complete
      initial message sequence as regression fixtures.

## Milestone 4 — make gameplay work

- [ ] Decode client-to-server piece placement:
      `Cmd_Room_OrderTypeSingleModePolyMinoPutTetrisToS` (`0x0CC4004A`).
- [ ] Decode the game report/input message:
      `Cmd_Room_OrderTypeSingleModeGameReportTetrisToS` (`0x05BCDF3A`).
- [ ] Implement authoritative piece placement, collision/line clearing, score and level
      progression, and broadcast/response messages. Prefer a deterministic engine with
      unit tests over trusting client-reported board state.
- [ ] Decode and implement the server-to-client game report
      (`0x0EE1D56A`) and all required per-turn updates.
- [ ] Verify multiple pieces, movement/rotation/drop behavior, line clears and scoring
      against the live client.

## Milestone 5 — finish and return

- [ ] Decode and send `Cmd_Channel_OrderTypeSingleModeResultMemberTetrisToC`
      (`0x0928E8BA`) with the result data the client expects.
- [ ] Verify the result screen, completion state, and clean return to the lobby.
- [ ] Verify reconnect/restart after a completed or abandoned game.

## Engineering / regression tasks

- [x] Live-run harness starts TPack, CDS and channel services and records the session.
- [ ] Add a top-level `python -m tet4server` runner with orderly startup/shutdown.
- [ ] Make the protocol sequence reproducible from a clean checkout using only
      documented local client files and a test account.
- [ ] Keep captured byte fixtures and regression tests for every implemented message.

## Out of scope until Single Mode works

- Multiplayer rooms, chat, friends, shop, rankings and other channel features.
- Other game modes.
- Replacing the original client with a browser or a custom client.
