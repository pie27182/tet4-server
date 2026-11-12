// Rename structure fields and vtable slots from a map file.
// Usage: ApplyFieldNames.java <fields.tsv>
// Map format: <struct name> <TAB> <offset hex> <TAB> <field name>
// Works on structures created by RecoverClassesFromRTTIScript (name_data, name_vftable).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Structure;
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
        Map<String, Structure> structures = new HashMap<>();
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        java.util.Iterator<DataType> all = dtm.getAllDataTypes();
        while (all.hasNext()) {
            DataType type = all.next();
            if (type instanceof Structure) {
                structures.putIfAbsent(type.getName(), (Structure) type);
            }
        }
        List<String> lines = Files.readAllLines(Paths.get(args[0]));
        int renamed = 0;
        int missing = 0;
        int tx = currentProgram.startTransaction("apply field names");
        try {
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
            }
        } finally {
            currentProgram.endTransaction(tx, true);
        }
        println("ApplyFieldNames: renamed=" + renamed + " missing=" + missing);
    }
}
