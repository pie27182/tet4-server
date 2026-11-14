# Single Mode findings (2026-11-15)

This note records the current, evidence-backed state of the original client's
`싱글모드` (orange button) path. It supersedes the earlier direct-entry/room-list
investigation: `바로입장` is an online-room selector and is not the target.

## Click target

The client window is a 1024x768 X11 window at X-origin `(0,0)` even when the
compositor draws it elsewhere. XTEST clicks must use window coordinates, not
desktop screenshots. The orange `싱글모드` button is at approximately
`(459,195)` in that coordinate space. The previous "My Items" click was a
coordinate miss, not an experiment.

## Client path

`FUN_0049D0A0` is the orange-button handler. It:

1. checks the game/room state at `+0x108c`;
2. calls `FUN_004FE660(0,1)` -> `FUN_004FC280(2)`, which constructs
   `CTetSingleScene` (`FUN_00462CB0`) and its `CTetSingleMainBody`;
3. sends `Cmd_Room_OrderTypeAutoEnterSingleModeRoomTetrisToS`
   (`0x031AC76A`) on the channel.

The server replies with `AutoEnterSingleModeToC` (`0x0DF37B3A`), then the
client sends `Cmd_Channel_CreateRoomToS` (`0x0CA9895A`), connects to the game
socket, sends `Cmd_Room_EnterRoomToS` (`0x09A5347A`), and processes
`Cmd_Room_EnterRoomToC` (`0x0974DCEA`).

## Immediate blocker

`CTetSingleScene::Update` (`FUN_00462600`) runs before
`CTetSingleMainBody::Start` (`FUN_00460DD0`). The main-body vectors at `+0x268`
are zero-filled by the constructor, so the update faults at `0x461E9D`
(`mov edx,[ebp+0x2c]`, EBP=0) and, if the first call is skipped, inside
`FUN_00461FA0` at `0x462009`.

`Start` is only reached through the scene's start control:

- `0x463780` (Enter/start-control check) -> `0x45C1A0` -> `0x460DD0`
- `0x463880` (mouse/start button) -> `0x45C1A0` -> `0x460DD0`

Neither fires before the first update. Holding the start button and pressing
Enter before the click did not change this.

## Debug proof

A debug-only copy of `Tet4.exe` with both update calls NOPed
(`0x4627F0` and `0x4627F7`) no longer crashes. The real Single Mode UI renders:
Marathon/40-lines/Ultra mode selection, HOLD/NEXT panels, score and the
`게임시작` button with the text "엔터(Enter)를 누르면 게임이 시작됩니다"
("Press Enter to start the game").

This proves the protocol and encryption up to `EnterRoomToC` are sufficient to
create the scene. The remaining problem is the client's premature update, not
the room-list filter.

Clicking `게임시작` after the game socket has already closed terminates the
client. The game socket currently closes shortly after `EnterRoomToC`; the
client's timeout dialog `제한 시간에 걸렸습니다` follows. The server still needs
the correct game-socket lifecycle/start payload.

## Environment

- Native `msvcr90`/`mfc90` (app-local VC90 DLLs) is required. Forcing builtin
  `msvcr90`/`msvcp90`/`mfc90` with `WINEDLLOVERRIDES` prevents the client from
  starting at all.
- Native overrides do not remove the `0x461E9D` crash. This is not a DLL
  override issue.
- The Wine prefix has `vcrun2008`, `dotnet40/48`, `dxvk`, fonts and Korean
  locale; the client needs `LANG=ko_KR.UTF-8`.

## h-tetra / remote repository

The `h-tetra.exe` launcher is a .NET TCP tunnel and contains no game logic. The
fan server was a separate Python bundle (`server/tools/run_local_server.py`)
that was never shipped with the client and is not in the public archives.
There is no public copy in the local downloads or GitHub branches.

`origin/main` currently has only the docs commit
`a6f99a6 Docs: fix local Single Mode launch workflow`. PR #19 is a docs-only
draft and does not contain a Single Mode implementation.

## Next work

1. Find the event/data that lets `CTetSingleMainBody::Start` run before the
   scene update. Candidates: scene activation (`FUN_00462F80`), the start
   control's `buttsingle` visual state, or `_SingleModeInfo` room data.
2. Recover the game-socket lifecycle: why the client closes the socket after
   `EnterRoomToC`, and which message keeps it open until `StartNewGameToS`.
3. Once Start runs, implement the actual Single Mode payloads:
   `_SingleModeInfo`, `_TetrisMemberInfo`, initial board/next queue, and
   `GameReportToC`/`PolyMinoPutToS`.
