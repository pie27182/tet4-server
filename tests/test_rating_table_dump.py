"""Tests for the PE virtual-address dumper used to recover the Tet4 grade table."""
import struct
import unittest

from tools.dump_rating_table import PEError, hexdump, locate_va


def fake_pe32() -> bytes:
    data = bytearray(0x300)
    data[:2] = b"MZ"
    struct.pack_into("<I", data, 0x3C, 0x80)
    data[0x80:0x84] = b"PE\0\0"
    coff = 0x84
    struct.pack_into("<H", data, coff + 2, 1)       # one section
    struct.pack_into("<H", data, coff + 16, 0xE0)   # PE32 optional-header size
    optional = coff + 20
    struct.pack_into("<H", data, optional, 0x10B)   # PE32
    struct.pack_into("<I", data, optional + 28, 0x400000)
    section = optional + 0xE0
    data[section:section + 8] = b".rdata\0\0"
    struct.pack_into("<IIII", data, section + 8,
                     0x100, 0x1000, 0x100, 0x200)
    data[0x220:0x230] = bytes(range(16))
    return bytes(data)


class RatingTableDumpTest(unittest.TestCase):
    def test_maps_image_va_to_raw_section_offset(self):
        location = locate_va(fake_pe32(), 0x401020)
        self.assertEqual((location.image_base, location.rva, location.file_offset,
                          location.available, location.section),
                         (0x400000, 0x1020, 0x220, 0xE0, ".rdata"))

    def test_hexdump_includes_addresses_and_ascii(self):
        self.assertIn("005dc870", hexdump(b"AB\x00\xff", 0x5DC870))
        self.assertIn("|AB..|", hexdump(b"AB\x00\xff", 0x5DC870))

    def test_rejects_unmapped_or_unreadable_addresses(self):
        with self.assertRaises(PEError):
            locate_va(fake_pe32(), 0x500000)
        with self.assertRaises(PEError):
            locate_va(b"not a PE", 0x5DC870)

    def test_rejects_zero_filled_virtual_tail(self):
        data = bytearray(fake_pe32())
        section = 0x178
        struct.pack_into("<IIII", data, section + 8,
                         0x200, 0x1000, 0x100, 0x200)
        with self.assertRaises(PEError):
            locate_va(bytes(data), 0x401180)


if __name__ == "__main__":
    unittest.main()
