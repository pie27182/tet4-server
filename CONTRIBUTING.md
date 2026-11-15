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

GitHub Issues are for defects and unexplained client behavior: expected and
actual behavior, steps, evidence, and what would show it fixed. The open protocol
work is listed in `docs/PROTOCOL.md`, section 8.

Commits: a short imperative subject, then what changed and the evidence for it
(function address, capture, test).
