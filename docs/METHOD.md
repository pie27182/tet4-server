# Reverse engineering method

How the protocol facts were obtained and which wrong turns were corrected. The
procedure itself lives in `docs/REPRODUCE.md`; the code-reading side in
`docs/READING.md`.

## Rules

1. **No invented replies.** A reply is sent only when its bytes are backed by a capture
   or by decompiled code. Unknown requests are logged and get no reply.
2. **Capture before conclusion.** Each protocol fact is checked against a run of the
   real client (log plus pcap or strace), not only against code reading.
3. **Negative results are kept** in this file, so the same theory is not tried again.
4. **Test account only.** No real credentials in captures, tests or docs.

## Tools, and what each settled

| Tool | Used for |
|---|---|
| Ghidra headless (`tools/export.sh`) | decompile every module; function index for lookups |
| RTTI class recovery (`tools/recover_classes.sh`) | classes, vtables, typed `this` |
| `tools/tet4_rtti_extract.py` | message ids and class names from MSVC RTTI |
| `tools/disasm.py` (pefile + capstone) | instructions when the decompiler was ambiguous: MT state offset `+0x20`, TEA key source |
| `tools/find_function.py` | address or name to function body |
| `tools/live_check.py` | real client runs, logs, recording |
| `winedbg --file` (`tools/debug/winedbg_batch.sh`) | breakpoints on `Net_GetMemberList`, `SendGetItemState`, typed `this` in the stack |
| r2 + r2ghidra (`pdg`) | quick class-qualified decompilation without a full export |

## How the main facts were reached

- **Framing and cipher**: `HgSock3.dll` handshake and stream functions, checked against
  the 108-byte frame from run16. `CLIENT.md` sections 3 and 6.
- **Message ids**: RTTI class names and `GetID()` values; field order from each class's
  `Serialize`/`Deserialize`, not from the decompiler's structure guess.
- **Channel path**: each reply accepted by the client in a live run, which then sent the
  next request. Sequence and layouts in `CLIENT.md` section 7.
- **Single Mode**: messages exist in `Tet4.exe`; entry not yet reached. Section 8.

## Wrong turns (do not repeat)

- **Host in CDS column 2.** The client connected to `0.0.58.153` (`inet_addr("15...")`).
  Host is column 3, port is column 4.
- **Reply invented from message names.** Every accepted reply came from a serializer;
  guesses were rejected by the client.
- **The lobby row `1 (0/100)` is not a milestone.** It appears only when the client
  refreshes the CDS list after abandoning a channel connection. It is a UI fallback, not
  proof of channel entry; the `discovery-only` mode reproduces the old behavior but the
  row is not needed for the real path.
- **Environment, not code.** `Disk quota exceeded` and `Unable to lock project` were the
  user quota on `/tmp` (tmpfs) and `/home`, exhausted by our own run directories. Check
  `df` and remove your own intermediate folders before blaming a tool.
- **Ghidra duplicates.** Class data types exist in several copies (`Demangler`,
  `/ClassDataTypes`); field names do not reach the decompiled bodies because the class
  embeds another copy. See `docs/READING.md`.
