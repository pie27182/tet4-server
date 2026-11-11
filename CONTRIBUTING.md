# Contributing

This project reverse engineers an existing client. Every change must be backed by
evidence: a captured byte sequence or decompiled code. Read `docs/METHOD.md` first.

## Ground rules

- **Never commit client files, binaries, captures, logs, screenshots or recordings.**
  The `.gitignore` covers `client/`, `client-patched/`, `work/`, `live-runs/`, `*.exe`,
  `*.dll`, `*.pcap`, `*.bin`, `*.log`. Check with `git status` before every commit.
- **Test accounts only.** No real passwords, cookies, tickets or session tokens, in
  code, docs, tests or commit messages.
- **No guessed protocol.** Send a reply only when a capture or decompiled code supports
  it. Unknown requests get no reply and are logged.
- **Mark facts.** In docs, say whether something was seen on the wire, read from code,
  or is a hypothesis.

## Reporting a problem

Add an entry to `docs/ISSUES.md` with the next free number. Each entry has: status, area,
expected, actual, evidence, hypotheses (marked as not verified), fix criteria, and
`Fixed by`. Write how to reproduce in `docs/REPRODUCE.md`.

When a git hosting service is used, open one issue per entry with the same ID in the
title, and link it back to `docs/ISSUES.md`. The file in the repository stays the source
of truth.

## Making a change

1. Work on a branch: `fix/ISSUE-001-short-name`, `feat/cds-columns`, `docs/...`.
2. Write the test first when the change is in `tet4server/`. Tests use byte vectors and
   do not need the client:
   `python3 -m unittest discover -s tests -t .` must pass.
3. Make a live run when the change affects the client's behaviour, and describe what it
   showed (not the recording itself).
4. Update the docs in the same commit as the change: `docs/CLIENT.md` for verified
   facts, `docs/ROADMAP.md` for progress, `docs/ISSUES.md` for issues.

## Commit messages

- Short imperative subject (under 72 characters): `Channel: reply to GetUserIdToS`.
- A body that says what changed and why, with the evidence (a test name, a function
  address, a file in `docs/`).
- Name the issue when it applies: `Refs ISSUE-002`, or `Fixes ISSUE-002` for a fix.
- One logical change per commit. Keep docs and code changes that belong together in
  one commit; keep unrelated ones apart.

## Closing an issue

1. The fix commit says `Fixes ISSUE-NNN` in its message.
2. A follow-up commit in `docs/ISSUES.md` sets `Status: fixed` and fills `Fixed by:`
   with the commit hash. The hash cannot be in the same commit it names.
3. Close the matching hosting issue, if one exists, with a link to the commit.

Do not delete entries. A closed issue stays in the file with its ID, so old commit
messages still point to something.

## Before you push or share

- `python3 -m unittest discover -s tests -t .` passes.
- `git status` shows no client, log or capture file.
- The bundle or archive is made from `git bundle create ... --all`, which contains only
  tracked files.
