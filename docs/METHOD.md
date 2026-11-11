# Reverse engineering method

How the protocol facts in `CLIENT.md` were obtained, which tools were used for what,
and which wrong turns were corrected. Keeping this list lets a later reader check
any claim and avoid repeating the same dead ends.

## Rules followed

1. **No invented replies.** The server sends a reply only when the bytes are backed by
   a capture or by decompiled code. Unknown requests are logged and get no reply.
2. **Capture before conclusion.** Each protocol fact is checked against a run of the
   real client (a log plus a pcap or strace), not only against code reading.
3. **Negative results are kept.** Runs that disproved a theory are recorded here, so the
   same theory is not tried again.
4. **Test account only.** Captures contain only a test account; no real credentials are
   stored in the repository.

## Tools

### Static analysis

- **Ghidra 12.2 headless** (`tools/export.sh`, `tools/ExportAllFunctions.java`).
  Imports each PE module with analysis and writes one file per function, with the
  decompiled C and the function address. 25 modules were exported (about 41,000 functions;
  2 failed to decompile).
- **pefile + capstone** (Python, `tools/disasm.py`). Disassembles a function range at a given address.
  Used whenever the decompiler output was ambiguous. This is how the MT state offset
  (`+0x20`) and the TEA key source (`EAX = object`) were settled.
- **`tools/tet4_rtti_extract.py`**. Reads MSVC RTTI in `HgCom3.dll` to get the class names
  and `GetID()` values of all `Cmd_*` and `Msg_*` classes (122 classes found).
- **binutils** (`objdump`, `strings`) for quick section and import checks.

Not used: radare2. Ghidra covered the same ground, and no analysis needed a second
disassembler. It can be added if a function resists both.

### Dynamic analysis

- **Wine** runs the client with the bootstrap string and `LANG=ko_KR.UTF-8 LC_ALL=ko_KR.UTF-8`.
- **strace `-ff -yy`** records every socket call per process, with the file descriptor
  names, to see which port the client connects to and when.
- **tcpdump / tshark** inside a network namespace (`unshare -Urn`) captures loopback
  traffic without touching the host network. Raw bytes are saved as `.bin` files and
  used as test vectors (`tests/test_crypto.py`).
- **`EB FE` marker** (`jmp $`, an infinite loop) placed at a chosen code address in a
  copy of the DLL. If the client hangs at that point, the code is reached. A positive
  control (a marker known to be reached) was run before each negative result was trusted.
- **XTEST clicks** (`xdotool`) and **niri screenshots** drive the GUI and record which
  dialog appears, for runs where the state had to be seen rather than logged.
- **wf-recorder (VAAPI)** records short videos of the dialog sequence.
- **gdb** was not usable: `ptrace_scope=1` blocks attaching to the Wine process.
  Breakpoints were replaced by the marker method above.

### Scripts

- `tools/export.sh`: headless decompile of one module.
- `tools/ExportAllFunctions.java`: Ghidra post-script used by `export.sh`.
- `tools/tet4_rtti_extract.py`: RTTI class and ID extractor.

## Key findings and how they were reached

| Finding | Method | Notes |
|---|---|---|
| TPack request and response layout | capture (run6) + field trace | byte-checked tests |
| CDS reply must echo `tid` | strace, log of "no tid in wait queue" | |
| Host in column 3, port in column 4 | marker runs (run13–15) and a run with host in column 2 | see CLIENT.md section 5 |
| Handshake and 48-byte shares | capture (run16) + TEA disassembly | |
| Stream filter contexts and MT seeding | disassembly of `MakeKey`, `FUN_606056A0`, `FUN_60605900`, `FUN_60605A70` | decryption verified on run16 |
| `Cmd_AuthToS = 0x0365C03A` | RTTI extraction + the decrypted frame | the two agree |

## Wrong turns (do not repeat)

- **Environment, not code.** Several runs and exports failed with `Disk quota exceeded`
  or `Unable to lock project`. The cause was the user quota on `/tmp` (tmpfs) and on
  `/home`, filled by our own experiment directories. Check `df` and remove your own
  intermediate run folders before blaming a tool (`docs/REPRODUCE.md`, section 8).

- **Host in column 2.** An early reading treated column 2 as the host. The client then
  connected to `0.0.58.153`, which is `inet_addr("15001")`, so the column was wrong.
- **Count in the error slot.** The CDS reply briefly put the row count in the error
  field. The client treated it as a failed request. Fixed: `error = 0`.
- **Ratio model for channel selection** (`+0xAC` / `+0xB0`). Fitted to run8 and run8b;
  both are void because the column layout they assumed was wrong.
- **`k24e`, `k202e`, `k140e` as channel parameters.** Read from the bootstrap string;
  they do not control channel selection. Only `k602e` (TPack port) is confirmed.
- **Marker placements in run9–run11.** Placed in the wrong functions, so "not reached"
  results from them are not evidence.
- **IP encoding experiments** (run2–3). The host was encoded in the wrong layout.
- **"Msg_ConnectChannelServer not reached"** came from runs before the column fix.
  Rerun after the fix showed the function is reached.
- **MT state at object offset 0.** The state lives at `+0x20`; the buffer and dynamic
  block occupy `+0..+0x1F`.
- **`init_genrand(5489)` seeding.** The seeding function is `init_by_array` with the
  four master words, not a fixed seed.
- **Ghidra float rendering.** Ghidra showed an `fcom qword` constant as a float. The
  bytes are an integer comparison; the machine code is authoritative.
- **Assuming the first channel message is a join request.** The first message is
  `Cmd_AuthToS`, an authorization request.
- **Trusting a summary of a file that did not exist.** Claims about a Python helper
  were checked against the disk first; the helper was then rewritten from the code and
  verified on the same bytes.

## Reproducing a check

```
python3 -m unittest discover -s tests -t .
```

The byte vectors come from `raw/*.bin` of run16 and are copied into the tests. Client
binaries are needed only to repeat the dynamic runs, not to run the tests.
