# Debugging a live session

How to record one complete run of the real client against this server, and what
to send back for analysis. A run is useful when everything in it shares one
timeline: the server log, the decrypted trace, the packet capture, the Wine log,
the debugger log and the screenshots.

Use the test account in `tools/bootstrap-sample.txt` only. Traces and captures
contain the account's ticket; with the sample account that ticket is a dummy.

## 1. Setup, once

You need Wine, Python 3.10+, Wireshark's command-line tools (`dumpcap`, `tshark`)
and a screenshot tool. On Arch:

```bash
sudo pacman -S wine wireshark-cli
```

Let your user capture without root (log out and in afterwards):

```bash
sudo usermod -aG wireshark "$USER"
```

Prepare the client as in the README (`tools/client.py check`, then `patch`).

For each run, make a folder and note the start time:

```bash
RUN=runs/$(date +%Y%m%d-%H%M%S) && mkdir -p "$RUN" && echo "$RUN"
```

(`runs/` and `*.tar.gz` are ignored by git.)

## 2. One run, four terminals

Start them in this order and leave them running until the client exits.

**Terminal 1, packets** (all four services on loopback):

```bash
dumpcap -i lo -f 'tcp port 10454 or tcp port 15000 or tcp port 15001 or tcp port 15002' -w "$RUN/capture.pcapng"
```

**Terminal 2, server** (debug log and decrypted trace):

```bash
python3 -m tet4server --log-level DEBUG --trace "$RUN/trace.jsonl" 2>&1 | tee "$RUN/server.log"
```

**Terminal 3, client** — choose one of the variants in section 3. Wine's own log
goes to `wine.log`; the channels below show exceptions, DLL loads, socket calls and
thread ids with timestamps:

```bash
cd client-patched && LANG=ko_KR.UTF-8 LC_ALL=ko_KR.UTF-8 WINEDEBUG=+timestamp,+tid,+seh,+loaddll,+winsock wine Tet4.exe "$(cat ../tools/bootstrap-sample.txt)" 2> "../$RUN/wine.log"
```

**Terminal 4, notes.** Write down, with the clock time, every action you take:
"09:41:10 lobby visible", "09:41:25 clicked 싱글모드", "09:41:31 dialog …". Save it
as `$RUN/notes.txt`. Screenshots are taken from here too (section 4).

Stop in reverse order: close the client, then Ctrl+C the server, then Ctrl+C
`dumpcap`.

## 3. Which runs to make

Each run is a separate folder.

1. **baseline** — `client-patched`, no debugger. Log in, click 싱글모드, play a
   game to the end, press Enter (다시도전) and play again, press ESC (확인), pick
   another mode with the arrow keys and play it, click 나가기, then click 싱글모드
   once more. Note every step that does not happen as described.
2. **debugger** — the same under winedbg with the breakpoint file; replace the
   Terminal 3 command with:

   ```bash
   cd client-patched && LANG=ko_KR.UTF-8 LC_ALL=ko_KR.UTF-8 winedbg ./Tet4.exe "$(cat ../tools/bootstrap-sample.txt)" < ../tools/single-mode.wdbg 2>&1 | tee "../$RUN/winedbg.log"
   ```

   (The commands go on standard input: Wine 9's `winedbg --file` fails to open
   the file.) The file prints the loaded modules (`info share`; check that every
   DLL sits at its preferred base), then a backtrace at each stop on the Single
   Mode path; an unhandled exception stops it as well.

The client runs slower under the debugger, so timeouts may differ; that is
expected, say so in the notes.

## 4. Screenshots

One PNG each, named with the time (`0941-lobby.png`):

- the lobby;
- the Single Mode screen before the first game;
- every result screen (NEW RECORD or 기록갱신 실패, with the score, rank and %);
- every dialog the client shows, before closing it;
- the screen after 나가기;
- the Wine crash dialog, with its details expanded, or the debugger's last screen.

A screen recording is welcome instead of many screenshots, if it is short.

## 5. tshark summaries

The raw `capture.pcapng` is the important part: the cipher's key exchange is in
it, so every channel and game frame can be decrypted offline. Add these text
summaries for a quick look:

```bash
tshark -r "$RUN/capture.pcapng" -q -z conv,tcp > "$RUN/tshark-conversations.txt"
```

```bash
tshark -r "$RUN/capture.pcapng" -T fields -E header=y -E separator=$'\t' -e frame.number -e frame.time_epoch -e tcp.stream -e tcp.srcport -e tcp.dstport -e tcp.flags.str -e tcp.len -e tcp.payload > "$RUN/tshark-packets.tsv"
```

The first gives one line per connection (who opened and closed what, how long it
lived); the second every segment with its flags and payload in hex, which shows
who sent the FIN or RST on the game socket.

## 6. Versions

```bash
{ date -Is; git rev-parse HEAD; git status --short; python3 --version; wine --version; uname -r; tshark --version | head -1; python3 tools/client.py check client; } > "$RUN/versions.txt" 2>&1
```

## 7. The archive

```
<run>/
  notes.txt                 what you did, with clock times
  versions.txt
  server.log                server output (DEBUG)
  trace.jsonl               decrypted messages
  capture.pcapng            raw packets
  tshark-conversations.txt
  tshark-packets.tsv
  wine.log                  WINEDEBUG output
  winedbg.log               run 2 only
  *.png                     screenshots
```

Pack all runs:

```bash
tar -czf tet4-debug-$(date +%Y%m%d).tar.gz runs/
```

Never include the client folder, its executables or DLLs.

## 8. Sending it

Attach the `.tar.gz` to your message in the Claude chat. Tell me which runs it
contains and anything you saw that is not in the notes. If the archive is too
large to attach, leave out `wine.log` first (it is the biggest and least
important), then the recording.

From the archive I can decrypt the capture with the server's own cipher code,
line the trace up with the debugger stops, and read the functions at each stop
in the decompiled client (still in the history at commit `7776802`).
