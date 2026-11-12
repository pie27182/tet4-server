// Rename structure fields and vtable slots from a map file.
// Usage: ApplyFieldNames.java <fields.tsv>
// Map format: <struct name> <TAB> <offset hex> <TAB> <field name>
// Works on structures created by RecoverClassesFromRTTIScript (name_data, name_vftable).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.Undefined1DataType;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class ApplyFieldNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: ApplyFieldNames.java <fields.tsv>");
            return;
        }
        // Ghidra keeps several structures with the same name: empty placeholders
        // from the Demangler and the real ones under /ClassDataTypes. Prefer the
        // /ClassDataTypes copy, otherwise the demo-placed first one is wrong.
        Map<String, Structure> structures = new HashMap<>();
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        java.util.Iterator<DataType> all = dtm.getAllDataTypes();
        while (all.hasNext()) {
            DataType type = all.next();
            if (!(type instanceof Structure)) {
                continue;
            }
            String name = type.getName();
            String path = type.getPathName();
            Structure current = structures.get(name);
            boolean better = path.contains("ClassDataTypes");
            if (current == null || (better && !current.getPathName().contains("ClassDataTypes"))) {
                structures.put(name, (Structure) type);
            }
        }
        List<String> lines = Files.readAllLines(Paths.get(args[0]));
        Map<String, java.util.List<String[]>> sized = new HashMap<>();
        for (String raw : lines) {
            String line = raw.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            String[] parts = line.split("\t");
            if (parts.length > 3) {
                sized.computeIfAbsent(parts[0].trim(), k -> new java.util.ArrayList<>()).add(parts);
            }
        }
        int renamed = 0;
        int missing = 0;
        int tx = currentProgram.startTransaction("apply field names");
        try {
            for (Map.Entry<String, java.util.List<String[]>> entry : sized.entrySet()) {
                Structure old = structures.get(entry.getKey());
                if (old == null) continue;
                int length = old.getLength();
                java.util.List<int[]> ranges = new java.util.ArrayList<>();
                java.util.List<String> names = new java.util.ArrayList<>();
                for (String[] parts : entry.getValue()) {
                    int off = Integer.parseInt(parts[1].trim().replace("0x", ""), 16);
                    int size = Integer.parseInt(parts[3].trim().replace("0x", ""), 16);
                    length = Math.max(length, off + size);
                    ranges.add(new int[]{off, size});
                    names.add(parts[2].trim());
                }
                StructureDataType rebuilt = new StructureDataType(old.getCategoryPath(),
                    old.getName() + "_typed", length, dtm);
                int position = 0;
                java.util.List<Integer> order = new java.util.ArrayList<>();
                for (int i = 0; i < ranges.size(); i++) order.add(i);
                order.sort((a, b) -> Integer.compare(ranges.get(a)[0], ranges.get(b)[0]));
                for (int i : order) {
                    int off = ranges.get(i)[0];
                    int size = ranges.get(i)[1];
                    if (off > position) {
                        rebuilt.add(new ArrayDataType(Undefined1DataType.dataType, off - position, 1),
                            off - position, "pad", null);
                    }
                    rebuilt.add(new ArrayDataType(Undefined1DataType.dataType, size, 1), size,
                        names.get(i), null);
                    position = off + size;
                }
                if (position < length) {
                    rebuilt.add(new ArrayDataType(Undefined1DataType.dataType, length - position, 1),
                        length - position, "pad", null);
                }
                DataType added = dtm.addDataType(rebuilt, ghidra.program.model.data.DataTypeConflictHandler.REPLACE_EMPTY_STRUCTS_OR_RENAME_AND_ADD_HANDLER);
                DataType swapped = dtm.replaceDataType(old, added, true);
                if (swapped != null) {
                    try { swapped.setName(old.getName()); } catch (Exception ignored) { }
                    renamed += ranges.size();
                }
            }
            for (String raw : lines) {
                String line = raw.trim();
                if (line.isEmpty() || line.startsWith("#")) {
                    continue;
                }
                String[] parts = line.split("\\t");
                if (parts.length < 3) {
                    continue;
                }
                Structure structure = structures.get(parts[0].trim());
                if (structure == null) {
                    println("no structure: " + parts[0]);
                    missing++;
                    continue;
                }
                String offsetText = parts[1].trim();
                if (offsetText.startsWith("0x") || offsetText.startsWith("0X")) {
                    offsetText = offsetText.substring(2);
                }
                int offset;
                try {
                    offset = Integer.parseInt(offsetText, 16);
                } catch (NumberFormatException e) {
                    continue;
                }
                int size = 0;
                if (parts.length > 3) {
                    String sizeText = parts[3].trim();
                    if (sizeText.startsWith("0x") || sizeText.startsWith("0X")) {
                        sizeText = sizeText.substring(2);
                    }
                    try {
                        size = Integer.parseInt(sizeText, 16);
                    } catch (NumberFormatException e) {
                        size = 0;
                    }
                }
                try {
                if (size > 0) {
                    continue;
                }
                if (false) {
                    if (structure.getLength() < offset + size) {
                        int oldLength = structure.getLength();
                        int need = offset + size - oldLength;
                        structure.growStructure(need);
                        structure.insertAtOffset(oldLength,
                            new ArrayDataType(Undefined1DataType.dataType, need, 1),
                            need, "pad", null);
                    }
                    DataType array = new ArrayDataType(Undefined1DataType.dataType, size, 1);
                    structure.replaceAtOffset(offset, array, size, parts[2].trim(), null);
                    renamed++;
                    continue;
                }
                DataTypeComponent component = structure.getComponentAt(offset);
                if (component == null) {
                    println("no component at " + structure.getName() + "+0x"
                        + Integer.toHexString(offset));
                    missing++;
                    continue;
                }
                structure.replaceAtOffset(offset, component.getDataType(),
                    component.getLength(), parts[2].trim(), component.getComment());
                renamed++;
                } catch (Exception e) {
                    println("skip " + structure.getName() + "+0x"
                        + Integer.toHexString(offset) + ": " + e.getMessage());
                    missing++;
                }
            }
        } finally {
            currentProgram.endTransaction(tx, true);
        }
        println("ApplyFieldNames: renamed=" + renamed + " missing=" + missing);
    }
}
