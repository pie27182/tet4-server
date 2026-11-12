// Export recovered classes and data types as a C++ header.
// Usage: ExportHeaders.java /path/out.h
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.exporter.CppExporter;
import java.io.File;

public class ExportHeaders extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: ExportHeaders.java <out.h>");
            return;
        }
        File out = new File(args[0]);
        DecompileOptions options = new DecompileOptions();
        // header only, C++ comments, emit type definitions, skip referenced globals
        CppExporter exporter = new CppExporter(options, true, false, true, true, false, "");
        boolean ok = exporter.export(out, currentProgram, null, monitor);
        println("ExportHeaders: " + (ok ? "wrote " : "failed ") + out);
    }
}
