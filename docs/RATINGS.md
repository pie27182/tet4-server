# Multiplayer rating and rankings

This document separates what is known about the original Hangame system from what
this server currently implements. The old client has a grade table and a rank
presentation; the complete scoring rules have not yet been recovered from the
1.3.4 executable.

## What the original service exposed

- **내공 / Tetris grade.** NHN's launch announcement on 23 October 2008 says that
  the player's 내공 changed according to skill and that the game introduced a
  Tetris grade system. This is a separate competitive rating, not the TP currency.
- **Two global lists.** On 24 November 2008 NHN announced both Single Ranking and
  Multi Ranking pages. They were separate from the local room result board and
  the shop's TP balance.
- **School competition.** In March 2009 NHN described a separate event leaderboard:
  players' event points were accumulated by school, with school winners and
  individual MVP places. Top 내공 players could receive honorary trophies instead
  of grade medals. This was an event, not evidence of the normal rating formula.
- **Later redesign.** In March 2013 NHN said that Tetris Star was replacing the
  previous 내공 system with skill points based on opponent-relative evaluation and
  matching players with similar skill points. That describes the later redesign,
  not necessarily the 2012 Tet4 client.

Useful historical sources:

- https://www.navercorp.com/media/pressReleasesDetail?seq=26815
- https://www.navercorp.com/media/pressReleasesDetail?seq=26818
- https://www.navercorp.com/media/pressReleasesDetail?seq=26726
- https://www.inews24.com/view/733019

## What the NHN patent tells us — and what it does not

NHN's Korean patent KR20110129185A, filed 25 May 2010 and published 1 December
2011, is specifically about calculating scores differently for different grades.
It explicitly discusses competitive games such as Tetris and describes three
bands:

1. **Beginner:** points increase after every match, including a loss.
2. **Intermediate:** a win gains more points than a loss removes; points may be
   adjusted by a match-completion amount plus a result adjustment.
3. **Advanced:** wins add points and losses remove points, so the grade tracks
   ability more directly.

The patent gives examples, not a complete Tet4 1.3.4 specification: a six-player
beginner example gives first place +25 and last place +1; a two-player beginner
example gives first place +10 and last place +1. Its two-player intermediate
example uses +15 for a win and -3 for a loss. In a six-player intermediate
example, fifth place is not penalized and fourth place can still gain points.

It also describes grade-gated channels/arenas and a practice/free arena. These
are useful clues for future work, but the patent does **not** establish that its
exact examples, thresholds or grade taxonomy were shipped in Tet4 1.3.4. Do not
copy these examples into production as if they were verified client constants.

Patent: https://patents.google.com/patent/KR20110129185A/en

## Reverse-engineering status in Tet4 1.3.4

The repository's client analysis has established:

- The structure `_TetrisSchoolInfo` is `u8 · str · u32 · u16`.
- The client's 24-grade lookup is at `Tet4.exe` address `0x005DC870`.
- `_TetrisMemberInfo` carries `_TetrisSchoolInfo` plus other multiplayer fields.
- `_MemberInfo` carries `k31e`; the launcher bootstrap currently seeds that field
  with 1360. This makes it a candidate for the rating, but its UI semantics still
  need confirmation.
- The profile contains additional unnamed fields that may carry wins/losses,
  percentage, combo, streak and best-grade data. Their exact meaning and offsets
  have not been confirmed.
- NHN publicly documented Single Ranking and Multi Ranking, but the current
  Tet4 network catalog has no verified request/response for fetching those
  global lists into the original game UI.

Still unknown:

- The exact 24 grade names, their order and promotion/demotion thresholds.
- Whether the patent's three-band scoring system is the exact algorithm used by
  the 1.3.4 release, and the exact per-placement score tables.
- The precise profile fields for the rank label, win/loss record, win rate,
  best combo, streak and best grade.
- The client request/refresh sequence used to update a player's lobby row after
  a match.
- The original website's complete ranking query and display behaviour.

## What this server implements now

- A global SQLite-backed multiplayer record: points, games played, wins, losses,
  win rate, current streak, best streak and best points.
- A provisional pairwise Elo reconstruction (initial 1600, K=32), applied to
  ranked multiplayer room results. It is **not** claimed to reproduce Hangame's
  original formula. The initial value is provisional as well: the launcher's
  current bootstrap seeds `k31e` with 1360, so that value and the profile mapping
  need a client-side check before being called original.
- A public Multi Ranking table and three Single Ranking tables, matching the
  original service's separation of those leaderboards. They are served from the
  same database at `/rankings` on port 10456, plus read-only JSON endpoints.

The public tables are a server-side implementation of the documented feature,
not a recreation of the original Hangame website. The old client's in-game
profile field mapping and the 24-grade calculation remain provisional.

## Next reverse-engineering steps

1. Read the data and code around `0x005DC870` from the exact 1.3.4 executable;
   dump the full 24-entry grade table and all associated score boundaries.
2. Trace the reads of `_TetrisSchoolInfo` and `_TetrisMemberInfo` in the client,
   including the lobby row's `k31e`, and map every profile field before sending
   non-zero wins/losses/combo/streak values.
3. Capture the original score change for controlled 2-player and 6-player matches
   at known grades, then compare with the 2010 patent examples. This determines
   whether the patent model is applicable to this release.
4. Recover the exact member-row refresh message and verify that the new rating is
   visible immediately after a real-client match, without requiring a relogin.
5. Only then replace the provisional scoring policy and label/arena mappings.
