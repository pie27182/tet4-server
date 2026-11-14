# Batch format (from HgCom3.dll)

`PC_ConvertX2M` = FUN_601206e0, `PC_ConvertM2X` = FUN_601204a0.

Serialized batch = 16-byte header? No: magic + 4 slots.

X2M (parse):
1. if fewer than 12 bytes -> return.
2. read 4 bytes and compare with "XLBP" (DAT_60175884).
3. loop up to 4 times:
   - read 4 bytes = message id (big-endian via FUN_60122e60)
   - if id == 0x09D0057A (Cmd_LayerAlignment): construct it, call its vfunction7 (no payload), continue
   - else: look up the id in the registry at this+0x20; if absent, break
     (the rest of the batch stays undecoded)
   - call the registered converter, which reads its own fields from the stream
4. stop after 4 slots or at the first unknown id.

M2X (serialize):
- walks the 4-slot array; a null slot becomes one or more Cmd_LayerAlignment
  messages (id 0x09D0057A, no payload); a filled slot is serialized by its own
  serializer after the pending alignments.

Consequence for an offline decoder: message boundaries cannot be found by scanning
for ids. Each id maps to one deserializer that consumes exactly its payload, and the
batch has at most four application/alignment slots.
