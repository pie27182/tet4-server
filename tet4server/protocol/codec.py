"""Messages to bytes and back, by the layouts in catalog.py.

    pack("Shop_GetPointInfoToC", kind=b"TP", amount=9250)  -> Message(layer=3, body=...)
    unpack("Chatting_ChatStringToS", message.body)        -> {"member": b"alice", ...}

Fields left out of `pack` are zero, empty or absent; a string field also takes str,
encoded as CP949, the client's code page. Each layout is compiled once into steps:
consecutive numbers pack and unpack with a single struct call.
"""
import struct
from typing import NamedTuple

from . import catalog
from .wire import ProtocolError

U32 = struct.Struct(">I")
NUMBERS = {"u8": "B", "u16": "H", "u32": "I", "u64": "Q", "i32": "i", "i64": "q", "f32": "f"}


class Message(NamedTuple):
    """One message in its batch slot: the layer and the body, message ID first."""
    layer: int | None
    body: bytes

    @property
    def id(self) -> int:
        return U32.unpack_from(self.body)[0]


class Field(NamedTuple):
    name: str           # the server's name; f0, f1, ... by position for unnamed fields
    type: str
    key: str | None     # the client's key, where known


# --- Field types -----------------------------------------------------------------------

class _Run:
    """Consecutive number fields, packed and unpacked together."""

    def __init__(self, fields: list[Field]):
        codes = [NUMBERS[f.type] for f in fields]
        self.format = struct.Struct(">" + "".join(codes))
        self.names = [f.name for f in fields]
        # Unsigned fields wrap (-1 is 0xFFFFFFFF), signed ones and floats go as given.
        self.masks = [(1 << 8 * struct.calcsize(c)) - 1 if c in "BHIQ" else None for c in codes]
        self.zeros = {f.name: 0.0 if f.type == "f32" else 0 for f in fields}

    def fill_defaults(self, values: dict) -> None:
        values.update(self.zeros)

    def pack(self, out: list, values: dict) -> None:
        get = values.get
        out.append(self.format.pack(*[
            (int(v) & mask if mask else v) if (v := get(name)) is not None else 0
            for name, mask in zip(self.names, self.masks)]))

    def unpack(self, data: bytes, pos: int, values: dict) -> int:
        try:
            values.update(zip(self.names, self.format.unpack_from(data, pos)))
        except struct.error:
            raise ProtocolError(f"message ends inside {', '.join(self.names)}") from None
        return pos + self.format.size


class _Value:
    """One field of another type: a string, a structure or a vector."""

    def __init__(self, field: Field, kind: "_Kind"):
        self.name, self.kind = field.name, kind

    def fill_defaults(self, values: dict) -> None:
        values[self.name] = self.kind.default()

    def pack(self, out: list, values: dict) -> None:
        self.kind.pack(out, values.get(self.name))

    def unpack(self, data: bytes, pos: int, values: dict) -> int:
        values[self.name], pos = self.kind.unpack(data, pos)
        return pos


class _Kind:
    """How one value of a type packs and unpacks."""

    def default(self):
        raise NotImplementedError

    def pack(self, out: list, value) -> None:
        raise NotImplementedError

    def unpack(self, data: bytes, pos: int) -> tuple[object, int]:
        raise NotImplementedError


class _String(_Kind):
    def default(self) -> bytes:
        return b""

    def pack(self, out: list, value) -> None:
        if value is None:
            value = b""
        elif isinstance(value, str):
            value = value.encode("cp949")
        out.append(U32.pack(len(value)))
        out.append(value)

    def unpack(self, data: bytes, pos: int) -> tuple[bytes, int]:
        start = pos + 4
        if start > len(data):
            raise ProtocolError(f"message ends inside a string length at {pos}")
        end = start + U32.unpack_from(data, pos)[0]
        if end > len(data):
            raise ProtocolError(f"string of {end - start} bytes at {pos}, "
                                f"{len(data) - start} left")
        return data[start:end], end


class _Number(_Kind):
    def __init__(self, type_: str):
        self.code = NUMBERS[type_]
        self.format = struct.Struct(">" + self.code)
        self.run = _Run([Field("value", type_, None)])

    def default(self):
        return 0.0 if self.code == "f" else 0

    def pack(self, out: list, value) -> None:
        self.run.pack(out, {"value": value})

    def unpack(self, data: bytes, pos: int) -> tuple[object, int]:
        values: dict = {}
        pos = self.run.unpack(data, pos, values)
        return values["value"], pos


class _Vector(_Kind):
    def __init__(self, element: _Kind):
        self.element = element

    def default(self) -> list:
        return []

    def pack(self, out: list, value) -> None:
        items = value or ()
        out.append(U32.pack(len(items)))
        element = self.element
        if isinstance(element, _Number) and element.code != "f":
            out.append(struct.pack(f">{len(items)}{element.code}", *items))
            return
        for item in items:
            element.pack(out, item)

    def unpack(self, data: bytes, pos: int) -> tuple[list, int]:
        if pos + 4 > len(data):
            raise ProtocolError(f"message ends inside a vector count at {pos}")
        count = U32.unpack_from(data, pos)[0]
        pos += 4
        if count > len(data) - pos:           # every element takes at least one byte
            raise ProtocolError(f"vector of {count} with {len(data) - pos} bytes left")
        element = self.element
        if isinstance(element, _Number):
            size = element.format.size * count
            if pos + size > len(data):
                raise ProtocolError(f"vector of {count} numbers with {len(data) - pos} bytes left")
            return list(struct.unpack_from(f">{count}{element.code}", data, pos)), pos + size
        items = []
        for _ in range(count):
            item, pos = element.unpack(data, pos)
            items.append(item)
        return items, pos


class _Struct(_Kind):
    def __init__(self, layout: "Layout"):
        self.layout = layout

    def default(self) -> dict:
        return self.layout.defaults()

    def pack(self, out: list, value) -> None:
        self.layout.pack_fields(out, value or {})

    def unpack(self, data: bytes, pos: int) -> tuple[dict, int]:
        return self.layout.unpack_fields(data, pos)


# --- Layouts -------------------------------------------------------------------------

class Layout:
    """A message or structure: its fields in wire order, compiled into steps."""

    def __init__(self, name: str, spec: str, msg_id: int | None = None,
                 layer: int | None = None, class_id: int | None = None):
        self.name = name
        self.id = msg_id              # the ID on the wire; None for a structure
        self.layer = layer
        self.class_id = class_id      # the client class's own ID (an extension's differs)
        self.fields = [_field(i, token) for i, token in enumerate(spec.split())]
        self.names = frozenset(f.name for f in self.fields)
        self._steps: list = []

    def compile(self, kinds: dict[str, _Kind]) -> None:
        steps, run = [], []
        for field in self.fields:
            if field.type in NUMBERS:
                run.append(field)
                continue
            if run:
                steps.append(_Run(run))
                run = []
            steps.append(_Value(field, _kind(field.type, kinds)))
        if run:
            steps.append(_Run(run))
        self._steps = steps

    def defaults(self) -> dict:
        """Every field at zero or empty."""
        values: dict = {}
        for step in self._steps:
            step.fill_defaults(values)
        return values

    def pack_fields(self, out: list, values: dict) -> None:
        if not values.keys() <= self.names:
            unknown = ", ".join(sorted(values.keys() - self.names))
            raise KeyError(f"{self.name} has no field {unknown}")
        for step in self._steps:
            step.pack(out, values)

    def unpack_fields(self, data: bytes, pos: int, lenient: bool = False) -> tuple[dict, int]:
        """The fields from `pos`, and the position after them. Lenient, a message that
        ends early reads its missing last fields as zero or empty."""
        values: dict = {}
        steps = self._steps
        for i, step in enumerate(steps):
            if lenient and pos == len(data):
                for rest in steps[i:]:
                    rest.fill_defaults(values)
                break
            pos = step.unpack(data, pos, values)
        return values, pos


def _field(position: int, token: str) -> Field:
    """A field from its catalog notation: name:type=key, kNNNe:type or a bare type."""
    if ":" not in token:
        return Field(f"f{position}", token, None)
    name, rest = token.split(":", 1)
    type_, _, key = rest.partition("=")
    if not key and name[0] == "k" and name[1:-1].isdigit() and name[-1] == "e":
        key = name
    return Field(name, type_, key or None)


def _kind(type_: str, kinds: dict[str, _Kind]) -> _Kind:
    if type_ in kinds:
        return kinds[type_]
    if type_.startswith("["):
        kind = _Vector(_kind(type_[1:-1], kinds))
    elif type_.startswith("{"):
        kind = _Struct(STRUCTS[type_[1:-1]])
    elif type_ in NUMBERS:
        kind = _Number(type_)
    else:
        raise ValueError(f"unknown type {type_}")
    kinds[type_] = kind
    return kind


def _layouts():
    structs = {name: Layout(name, spec) for name, spec in catalog.STRUCTS.items()}
    messages = {name: Layout(name, spec, msg_id, layer, msg_id)
                for name, (msg_id, layer, spec) in catalog.MESSAGES.items()}
    for extension, base in catalog.EXTENDS.items():
        messages[extension].id = messages[base].id
    messages.update({name: Layout(name, spec, msg_id, None, msg_id)
                     for name, (msg_id, spec) in catalog.PLAIN.items()})
    return structs, messages


STRUCTS, MESSAGES = _layouts()
_KINDS: dict[str, _Kind] = {"str": _String(), "blob": _String()}
for _layout in (*STRUCTS.values(), *MESSAGES.values()):
    _layout.compile(_KINDS)

# The message each (layer, ID) slot of a batch carries, for naming what arrives.
BY_SLOT = {(m.layer, m.id): m for m in MESSAGES.values() if m.layer is not None}


def pack(name: str, values: dict | None = None, /, **fields) -> Message:
    """The message `name` with these field values, ready for its layer's slot."""
    layout = MESSAGES[name]
    if values:
        fields = {**values, **fields}
    out = [U32.pack(layout.id)]
    layout.pack_fields(out, fields)
    return Message(layout.layer, b"".join(out))


def unpack(name: str, body: bytes) -> dict:
    """The fields of a message body (which starts with the ID). A message may end
    before its last fields: they read as zero or empty, as the client fills them."""
    return MESSAGES[name].unpack_fields(body, 4, lenient=True)[0]


def name_of(layer: int | None, msg_id: int) -> str:
    """The name of the message in a batch slot, or its ID in hex."""
    layout = BY_SLOT.get((layer, msg_id))
    return layout.name if layout else f"0x{msg_id:08X}"


def message_id(name: str) -> int:
    return MESSAGES[name].id
