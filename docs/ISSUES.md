# Known issues

Open problems in the server or in our understanding of the client. Each entry has a
stable ID (`ISSUE-NNN`) that never changes, even after the issue is closed. Commits that
fix an issue name the ID; the `Fixed by` line is filled in by a follow-up commit.

Status values: `open`, `investigating`, `fixed`, `wontfix`.

Process: see `CONTRIBUTING.md`. Put the procedure to reproduce in `docs/REPRODUCE.md`,
not here, so this file stays short.

---

## ISSUE-001: channel row missing in the lobby in the current state

- **Status:** investigating
- **Area:** channel stage, client state
- **Expected:** after the CDS reply, the lobby shows the channel row `1 (0/100)` with the
  `입장` button under the group header `초보~고수 등급 입장 가능`.
- **Actual:** only the group header is shown. No row, no button.

**Evidence (checked):**
- The CDS reply is byte-identical in the two states compared: 207 bytes, same columns
  and row (`tests/test_cds.py` covers the reply format).
- The state with the row was reached by the early stub run `outer-run15.sh` with the
  `kit-run15` stub, which accepts the 48-byte handshake and sends nothing else. Its
  files are in `tet4-run13-15-channel.zip` (in `/home/John`), not in this repository.
- In that run the client closed the channel connection about 4 s after accepting it,
  then requested CDS again (`tid=2`), and the row appeared from the second reply.
- In the current server run (`live_check`) the client requests CDS once (`tid=1`) and
  goes on to the channel frames (`Cmd_AuthToC`, `GetUserIdToC`, `EnterChannelByUserId`,
  `LayerAlignment`). It does not request CDS again, and the row does not appear.

**Hypotheses (not verified):**
1. The row appears only after the client has finished a channel attempt that failed
   and rebuilt the list. The current server gets further into the channel stage, so the
   list is never rebuilt.
2. The row depends on a state set by the reply to `Cmd_AuthToC` or
   `Cmd_Channel_GetUserIdToC`, which the stub did not send.

**Correction:** earlier notes said the row comes straight from the CDS data. The data
is the same in both states, but the row showed only after the second CDS request.

**To decide:** which hypothesis is right. Test with the stub and the current server
side by side, changing one thing at a time (for example, send only `GetUserIdToC`).

**Fix criteria:** a live run with the current server shows the row, and the cause is
recorded in `docs/CLIENT.md`. If the stub is needed to reproduce, it must be reachable
from the repository (a test fixture or a tool), not only from an archive.

**Fixed by:** —

---

## ISSUE-002: client crash after the channel exchange

- **Status:** open
- **Area:** channel stage
- **Expected:** the client stays on the lobby after `Cmd_LayerAlignment` and
  `Cmd_Channel_ExitChannelToS`.
- **Actual:** `Tet4.exe` stops about 2–3 s later. Wine shows "Tet4.exe has stopped
  working", `Exception c0000005` (access violation). Seen with the unmodified and the
  patched copy.

**Evidence:** runs with the current server (`live_check`); the crash is in the
recording and the Wine log. Symbols are not loaded, so the faulting function is not
known.

**Hypothesis (not verified):** the client waits for the reply to
`Cmd_Channel_EnterChannelByUserIdToS` (`0x0696068A`), gives up, and crashes. The
candidate replies from RTTI are `Cmd_Channel_EnterChannelToC` (`0x00C0FC8A`),
`Cmd_Channel_EnterChannelErrorToC` (`0x08579CBA`) and
`Cmd_Channel_EnterChannelWithTicketToC` (`0x0DA8E7EA`).

**Fix criteria:** the request format is decoded from the decompiled code, a reply is
chosen from the code, and a live run goes past the channel stage without a crash.

**Fixed by:** —

---

## ISSUE-003: no server reply for entering a channel

- **Status:** open
- **Area:** channel protocol
- **Expected:** a reply to `Cmd_Channel_EnterChannelByUserIdToS` that the client accepts.
- **Actual:** no reply. The server only logs the request (by design: no reply without
  evidence).

**Note:** this is the cause of ISSUE-002 as far as we know. It stays separate because
the fix needs decoding, not only a crash investigation.

**Fix criteria:** the request is decoded (`Serialize` and the converter in
`HgCom3.dll`), the reply format is taken from the code, and a test checks the bytes.

**Fixed by:** —
