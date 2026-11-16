# Contributing

This server answers an existing client, so a protocol change needs evidence.

- **No guessed replies.** Send a message only when its layout comes from the
  client's serializer or from a capture. Requests without a known reply stay
  unanswered.
- **Label the evidence.** `docs/PROTOCOL.md` marks every fact as wire, live or
  code. A layout test proves the bytes, not that the client accepts them: call a
  reply live only after a run with the real client.
- **Keep the client out of git:** its files, anything derived from them
  (decompiled code, screenshots, recordings), captures, traces and logs. Traces
  and captures contain session tickets.
- **Test accounts only.** No real credentials in code, docs, tests or commits.

`python3 -m unittest discover -s tests -t .` must pass. Protocol changes come with
tests, from captured bytes where they exist.

Where things go: a setting or a fixed value of the client in `tet4server/config.py`;
a message's layout and its field names in `tet4server/protocol/catalog.py`, after
which `python3 tools/messages.py` rewrites `docs/MESSAGES.md`; client addresses and
other evidence in `docs/PROTOCOL.md`, not in code comments.
[`docs/ARCHITECTURE.md`](docs/ARCHITECTURE.md) explains the rest.

GitHub Issues are for defects and unexplained client behavior: expected and
actual behavior, steps, evidence, and what would show it fixed. Open protocol
questions are the messages `docs/PROTOCOL.md` lists as received without a reply
and the fields it describes as sent empty or unknown.

Commits: a short imperative subject, then what changed and the evidence for it
(function address, capture, test).
