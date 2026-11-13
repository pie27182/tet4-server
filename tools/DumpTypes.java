// Diagnostic: list every data type with a given name and the component types of a structure.
// Usage: DumpTypes.java <typeName> [structureName]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Structure;

public class DumpTypes extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: DumpTypes.java <typeName> [structureName]");
            return;
        }
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        java.util.Iterator<DataType> all = dtm.getAllDataTypes();
        while (all.hasNext()) {
            DataType type = all.next();
            if (type.getName().equals(args[0])) {
                println("type " + type.getPathName() + "  class="
                    + type.getClass().getSimpleName() + "  len=" + type.getLength());
            }
        }
        if (args.length > 1) {
            all = dtm.getAllDataTypes();
            while (all.hasNext()) {
                DataType type = all.next();
                if (type.getName().equals(args[1]) && type instanceof Structure) {
                    Structure structure = (Structure) type;
                    println("struct " + structure.getPathName() + " len=" + structure.getLength());
                    for (DataTypeComponent c : structure.getDefinedComponents()) {
                        println("  +0x" + Integer.toHexString(c.getOffset()) + " "
                            + c.getDataType().getPathName() + " len=" + c.getDataType().getLength()
                            + " " + c.getFieldName());
                    }
                }
            }
        }
    }
}
