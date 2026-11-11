# Contributing

This project reverse engineers an existing client. Every protocol change must be
supported by captured traffic or decompiled code. Read `docs/METHOD.md` first.

## Project tracking

- **GitHub Issues are for problems**, not implementation tasks: defects, unexpected
  client behavior, protocol contradictions, or unresolved blockers. Include expected
  vs actual behavior, reproduction steps, evidence, hypotheses clearly marked as
  unverified, and what would prove the problem fixed.
- **`docs/ROADMAP.md` is the implementation plan.** Keep ordered milestones, tasks,
  dependencies, and completion criteria there. Do not create an Issue merely because
  a development task remains to be done.
- Do not maintain a second issue list in Markdown. The GitHub Issues tab is the only
  defect tracker.

## Ground rules

- **Never commit client files, binaries, captures, logs, screenshots or recordings.**
  The `.gitignore` covers `client/`, `client-patched/`, `work/`, `live-runs/`, `*.exe`,
  `*.dll`, `*.pcap`, `*.bin`, `*.log`. Check with `git status` before every commit.
- **Test accounts only.** No real passwords, cookies, tickets or session tokens, in
  code, docs, tests or commit messages.
- **No guessed protocol.** Send a reply only when a capture or decompiled code supports
  its wire layout. Unknown requests get no reply and are logged.
- **Mark facts.** In docs, distinguish wire observations, static findings, and hypotheses.

## Making a change

1. Work on a focused branch, e.g. `feat/channel-member-list` or `fix/issue-2-crash`.
2. Write byte-layout tests for protocol changes in `tests/`:
   `python3 -m unittest discover -s tests -t .` must pass.
3. Make a live run when a change affects client behavior. Record the exact next message
   and visible state; static serialization tests do not prove client acceptance.
4. Update `docs/CLIENT.md` for protocol facts and `docs/ROADMAP.md` for implementation
   progress. Add or update a GitHub Issue only when there is a problem to track.

## Commit messages

- Short imperative subject (under 72 characters): `Channel: reply to GetUserIdToS`.
- Explain what changed and why, with evidence (test name, function address, or doc).
- Reference the GitHub Issue when addressing a defect; use `Fixes #N` only when the
  commit actually fixes that issue. Use `Refs #N` for work that is related but incomplete.
- One logical change per commit. Keep related code and docs together.

## Closing a problem

Close a GitHub Issue only after the fix is implemented and verified against its stated
criteria. Link the fixing PR or commit in the Issue. A task merely being implemented,
a static layout test passing, or a client moving to the next request is not sufficient
to close an unrelated defect.

## Before you push or share

- `python3 -m unittest discover -s tests -t .` passes.
- `git status` shows no client, log or capture file.
- Bundles contain tracked files only.
