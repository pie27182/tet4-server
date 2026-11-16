"""The wire: everything between bytes on a socket and messages with named fields.

wire.py      integers, strings and frames
cipher.py    the secure socket's key exchange and stream cipher
catalog.py   every message's ID, layer and fields
codec.py     messages to bytes and back, by the catalog
session.py   one client's secure connection: encrypted frames and layered batches
dispatch.py  each message to the method that handles it
"""
