# Reproducing the experiments from this repository

This is a step-by-step guide to the state recorded in `docs/ROADMAP.md`: the local
servers answer TPack, CDS and the channel handshake, and the real client accepts the
replies up to the point where it waits for `EnterChannelByUserId`. Each step says what
you should see.

## 0. What you need

- Linux with a Wayland session (tested on niri), Wine, `wf-recorder`, `ffmpeg`.
- Python 3.10 or newer (tested with 3.14). No third-party Python packages.
- Ghidra 12.2 with `analyzeHeadless`, only if you want to decompile the client yourself
  (step 6).
- The official Tet4 client folder (version 1.3.4). **It is not in this repository and
  cannot be shipped here.** Use your own copy; `tools/check_client.py` tells you whether
  it is the original.
- A test account only. The startup string in `tools/bootstrap-sample.txt` is for the
  local servers and uses placeholder values.

## 1. Tests

```
python3 -m unittest discover -s tests -t .
```

Expected: `OK`, 17 tests. The tests use byte vectors from captured runs, so they do not
need the client.

## 2. Check your client folder

```
python3 tools/check_client.py ~/h-tetra-client
```

Expected: `manifest entries: 2068`, `missing: 0  changed: 0`, `OK`, exit status 0.
If a file is missing or changed, you do not have the original client; the experiments
will not match the recorded results.

## 3. Make the patched copy

```
python3 tools/patch_client.py ~/h-tetra-client ~/h-tetra-client-patched
python3 tools/check_client.py ~/h-tetra-client-patched
```

The first command writes a new folder and checks the result against the sha256 of the
patched `Tet4.exe` used in the experiments. The second command must report only
`changed: 1` (`Tet4.exe`).

Why this step exists: the unmodified client does not contact the TPack server at
`127.0.0.1:10454` at all in our runs (`docs/CLIENT.md`, section 4). The patch replaces
three TPack hostnames with `127.0.0.1`. It is three byte ranges in `Tet4.exe`
(see `tools/patch_client.py`).

The patched copy takes about 190 MB. Use a path on a disk with enough space; `/tmp` is
often a small tmpfs.

## 4. Startup string

Nothing to do. `tools/live_check.py` uses `tools/bootstrap-sample.txt` by default.
The file is the string that the launcher would otherwise read from `bootstrap.txt`
in the client folder. It must start with `metp://127.0.0.1:15000/` and contain the
TPack port `k602e:5=10454`. The client reads `k3e` as the account name (`test`).

## 5. Live run

```
python3 tools/live_check.py --client-dir ~/h-tetra-client-patched --out ~/live-runs/first
```

- The servers start, then `wf-recorder` starts, then the client starts.
- Wait until the lobby is on screen (about 30 s), then close the game window.
- The script stops the recording after Wine has exited and saves `session.mp4` and
  `frames/` (one PNG per visual change).

Expected in the console (in this order; timestamps will differ):

```
TPack 0x0cf7bd9a ... AuthSession ctx=1
TPack 0x0b60835a ... LoginTPack ctx=2
CDS select table=COMMON tid=1
channel frame id=0x0365c03a          -> sent Cmd_AuthToC
channel frame id=0x0fab330a          -> sent Cmd_Channel_GetUserIdToC for member b'test'
channel frame id=0x0696068a          (Cmd_Channel_EnterChannelByUserIdToS, no reply sent)
channel frame id=0x09d0057a          (Cmd_LayerAlignment)
channel frame id=0x0a75af8a          (Cmd_Channel_ExitChannelToS; sometimes appears on its own)
```

Expected on screen: the lobby (room list, buttons 내 아이템, 상점, 싱글모드). In some
runs a "connecting" dialog with a cancel button appears over it, and in others it
does not; it depends on timing. Look at `frames/` to see what happened. The client does
not get further than the lobby, because the reply to `EnterChannelByUserId` is not
implemented yet. The last frame is usually the desktop, because the game was closed.

If the client does not reach `CDS select`, check that the patched copy is the one you
passed (`--client-dir`) and that no other Wine or Tet4 process is running
(`wineserver -k`).

## 6. Decompiled code (optional)

Every claim in `docs/CLIENT.md` names an address. To look at the code yourself:

```
GHIDRA=~/ghidra_12.2_PUBLIC/support/analyzeHeadless \
  tools/export.sh ~/h-tetra-client/HgSock3.dll ~/tet4-export
```

Repeat for the modules you need: `HgSock3.dll`, `HgCom3.dll`, `HgModel3.dll`,
`HgCtr3.dll`, `CDSClientConnector.dll`, `TPackClientConnector.dll` and `Tet4.exe`.
Each module gives `<module>.c` (decompiled C) and `<module>.index.tsv`. Expect a few
minutes per module (`CDSClientConnector.dll`: 888 functions, all decompiled).

Then look up an address or a name:

```
python3 tools/find_function.py ~/tet4-export 0x606041d0 --show
python3 tools/find_function.py ~/tet4-export GenerateKey
```

Names we gave ourselves (for example `BuildChannelList`) are not in the export; the
export has `FUN_60903600`. `docs/ADDRESSES.md` lists the addresses used in the
documentation.

Ghidra's decompiler is not always right about constants: `0x60928388` is a `double`
(0.1) although Ghidra prints it as a float. Check the instructions when a constant
matters.

## 7. Recording a different session

Use the same command with another `--out`. Use a test account. Do not commit the
recordings, screenshots or logs with real data to this repository.

## Known limits

- The unmodified client does not contact TPack in our runs; the patched copy does.
- After `Cmd_AuthToC` and `Cmd_Channel_GetUserIdToC` the client waits for
  `EnterChannelByUserId`. Nothing answers it yet; Single Mode is not implemented.
- The client sometimes sends `ExitChannel` on its own, about 20–40 s after the
  handshake, then asks CDS again. This is observed, not explained.
- The server-to-client stream (`encrypt`) is verified only by the client continuing
  after our replies; the 108 bytes the client sends after the handshake are decrypted
  by `tet4server/crypto.py` and match the `Cmd_AuthToS` frame (`docs/CLIENT.md`).
