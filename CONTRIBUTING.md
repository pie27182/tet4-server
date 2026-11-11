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

## Problems versus planned work

**GitHub Issues are for problems**, not for the feature checklist. Open one issue for a
reproducible defect, protocol uncertainty that blocks progress, or a concrete regression.
Include:

- expected and actual behavior;
- reproduction steps or the exact live-run sequence;
- evidence (frame IDs, byte samples with secrets removed, decompiler function addresses);
- hypotheses clearly marked as unverified;
- a testable resolution criterion.

Do not create an Issue for every planned feature or implementation step.

**`docs/ROADMAP.md` is the implementation plan.** Put milestones, feature work,
dependencies and progress there. Keep the sequence ordered so the next actionable step
towards a playable Single Mode is obvious. Update it in the same change that completes
or materially advances a milestone.

Write reproducible environment setup and live-run instructions in
`docs/REPRODUCE.md`. The GitHub Issues list is the only defect tracker; there is no
parallel `docs/ISSUES.md` file.

## Making a change

1. Work on a branch: `fix/ISSUE-001-short-name`, `feat/cds-columns`, `docs/...`.
2. Write the test first when the change is in `tet4server/`. Tests use byte vectors and
   do not need the client:
   `python3 -m unittest discover -s tests -t .` must pass.
3. Make a live run when the change affects the client's behaviour, and describe what it
   showed (not the recording itself).
4. Update the docs in the same commit as the change: `docs/CLIENT.md` for verified
   protocol facts and `docs/ROADMAP.md` for implementation progress. Link the PR or
   commit from the relevant GitHub Issue when it fixes or advances a blocker.

## Commit messages

- Short imperative subject (under 72 characters): `Channel: reply to GetUserIdToS`.
- A body that says what changed and why, with the evidence (a test name, a function
  address, a file in `docs/`).
- Name the issue when it applies: `Refs ISSUE-002`, or `Fixes ISSUE-002` for a fix.
- One logical change per commit. Keep docs and code changes that belong together in
  one commit; keep unrelated ones apart.

## Closing an issue

Close a GitHub Issue only after its problem is actually fixed and the stated resolution
criterion has been verified. Prefer linking the fixing PR or commit and include the
relevant test or live-run evidence in the issue. A serializer unit test alone does not
close an issue whose acceptance criterion requires the real client to reach a UI state.

The roadmap is not closed by closing an Issue: update the corresponding roadmap
milestone separately when its completion criteria are met.

## Before you push or share

- `python3 -m unittest discover -s tests -t .` passes.
- `git status` shows no client, log or capture file.
- The bundle or archive is made from `git bundle create ... --all`, which contains only
  tracked files.
