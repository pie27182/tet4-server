"""Messages described by schema strings instead of hand-written encoders.

A schema is a space-separated list of field types, in wire order:

    u8 u16 u32 u64 f32   integers (big-endian) and a float
    str                  u32 length, then the bytes
    blob                 the same, for opaque bytes
    {Name}               a nested structure, without the message ID nested ones skip
    [type]               a u32 count, then that many elements of `type`

`catalog.py` holds the types of every client message, generated from its
Serialize/Deserialize functions, and the names of the fields the server uses.
Fields without a name are called f0, f1, ... and default to zero or empty.

    pack("Chatting_ChatStringToC", k3e=b"alice", k38e=b"hi")  -> message bytes
    unpack("Chatting_ChatStringToS", reader)                  -> {"k3e": ..., ...}
"""
import struct

from . import catalog
from .xdr import ProtocolError, Reader

PRIMITIVES = {"u8": ">B", "u16": ">H", "u32": ">I", "u64": ">Q", "f32": ">f"}
DEFAULTS = {"str": b"", "blob": b"", "f32": 0.0}


class Schema:
    def __init__(self, name: str, types: str, names: str = "", msg_id: int | None = None):
        self.name = name
        self.id = msg_id
        types = types.split()
        given = names.split()
        if len(given) > len(types):
            raise ValueError(f"{name}: {len(given)} names for {len(types)} fields")
        self.fields = [(given[i] if i < len(given) and given[i] != "_" else f"f{i}", t)
                       for i, t in enumerate(types)]

    def pack(self, values: dict | None = None, /, **kw) -> bytes:
        """The message (with its ID) or nested structure (without) from field values."""
        values = {**(values or {}), **kw}
        unknown = set(values) - {n for n, _ in self.fields}
        if unknown:
            raise KeyError(f"{self.name} has no field {', '.join(sorted(unknown))}")
        out = [struct.pack(">I", self.id)] if self.id is not None else []
        for name, typ in self.fields:
            out.append(_pack(typ, values.get(name)))
        return b"".join(out)

    def unpack(self, r: Reader) -> dict:
        """Field values, the reader positioned after the message ID if any."""
        return {name: _unpack(typ, r) for name, typ in self.fields}


def _pack(typ: str, value) -> bytes:
    if typ in PRIMITIVES:
        if value is None:
            value = 0
        if typ != "f32":
            value = int(value) & ((1 << (8 * struct.calcsize(PRIMITIVES[typ]))) - 1)
        return struct.pack(PRIMITIVES[typ], value)
    if typ in ("str", "blob"):
        if value is None:
            value = b""
        if isinstance(value, str):
            value = value.encode("cp949")
        return struct.pack(">I", len(value)) + value
    if typ.startswith("["):
        items = list(value or [])
        return struct.pack(">I", len(items)) + b"".join(_pack(typ[1:-1], v) for v in items)
    if typ.startswith("{"):
        return STRUCTS[typ[1:-1]].pack(value or {})
    raise ValueError(f"unknown type {typ}")


def _unpack(typ: str, r: Reader):
    if typ in PRIMITIVES:
        fmt = PRIMITIVES[typ]
        return struct.unpack(fmt, r.take(struct.calcsize(fmt)))[0]
    if typ in ("str", "blob"):
        return r.string()
    if typ.startswith("["):
        count = r.u32()
        if count > r.remaining():
            raise ProtocolError(f"vector of {count} with {r.remaining()} bytes left")
        return [_unpack(typ[1:-1], r) for _ in range(count)]
    if typ.startswith("{"):
        return STRUCTS[typ[1:-1]].unpack(r)
    raise ValueError(f"unknown type {typ}")


STRUCTS = {name: Schema(name, types, catalog.NAMES.get(name, ""))
           for name, types in catalog.STRUCTS.items()}
MESSAGES = {name: Schema(name, types, catalog.NAMES.get(name, ""), msg_id)
            for msg_id, name, types in catalog.MESSAGES}
BY_ID = {s.id: s for s in MESSAGES.values()}


def pack(name: str, values: dict | None = None, /, **kw) -> bytes:
    return MESSAGES[name].pack(values, **kw)


def unpack(name: str, r: Reader) -> dict:
    return MESSAGES[name].unpack(r)


def pack_as(id_name: str, name: str, values: dict | None = None, /, **kw) -> bytes:
    """`name`'s fields under the ID of `id_name`: a Tet4.exe layer-3 extension rides in
    the same batch as the HgCom3 message it extends, under that message's ID."""
    schema = MESSAGES.get(name) or STRUCTS[name]
    values = {**(values or {}), **kw}
    return struct.pack(">I", MESSAGES[id_name].id) + b"".join(
        _pack(typ, values.get(field)) for field, typ in schema.fields)


def message_id(name: str) -> int:
    return MESSAGES[name].id
