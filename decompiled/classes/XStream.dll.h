typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef struct IXStream IXStream, *PIXStream;

struct IXStream { // PlaceHolder Class Structure
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef int __ehstate_t;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor **pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
    ESTypeList *pESTypeList;
    int EHFlags;
};

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct XDequeStream XDequeStream, *PXDequeStream;

struct XDequeStream { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct XMemoryStream XMemoryStream, *PXMemoryStream;

struct XMemoryStream { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Class Structure
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef ushort WORD;

typedef BYTE *LPBYTE;

typedef void *HANDLE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef ulong ULONG_PTR;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef wchar_t WCHAR;

typedef CHAR *LPCSTR;

typedef CHAR *LPCH;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef WCHAR *LPWSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef WCHAR *LPWCH;

typedef WCHAR *LPCWSTR;

typedef DWORD LCID;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef void (*_PHNDLR)(int);

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[67];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (*FARPROC)(void);

typedef WORD *LPWORD;

typedef DWORD *LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef int BOOL;

typedef BOOL *LPBOOL;

typedef BYTE *PBYTE;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

typedef void *LPVOID;

typedef HINSTANCE HMODULE;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef uint uintptr_t;

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct _tiddata *_ptiddata;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct setloc_struct _setloc_struct;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct lconv lconv, *Plconv;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char *_token;
    wchar_t *_wtoken;
    uchar *_mtoken;
    char *_errmsg;
    wchar_t *_werrmsg;
    char *_namebuf0;
    wchar_t *_wnamebuf0;
    char *_namebuf1;
    wchar_t *_wnamebuf1;
    char *_asctimebuf;
    wchar_t *_wasctimebuf;
    void *_gmtimebuf;
    char *_cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void *_initaddr;
    void *_initarg;
    void *_pxcptacttab;
    void *_tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void *_terminate;
    void *_unexpected;
    void *_translator;
    void *_purecall;
    void *_curexception;
    void *_curcontext;
    int _ProcessingThrow;
    void *_curexcspec;
    void *_pFrameInfoChain;
    _setloc_struct _setloc_data;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct setloc_struct {
    wchar_t *pchLanguage;
    wchar_t *pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};


// WARNING! conflicting data type names: /ClassDataTypes/XDequeStream/XDequeStream - /XDequeStream

typedef struct XDequeStream_vftable XDequeStream_vftable, *PXDequeStream_vftable;

struct XDequeStream_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XDequeStream virtual function #1
    int (*Read)(void *, void *, int); // XDequeStream virtual function #2
    int (*Write)(void *, void *, int); // XDequeStream virtual function #3
    int (*CopyTo)(void *, void *, int); // XDequeStream virtual function #4
    int (*RemoveLeft)(void *, int); // XDequeStream virtual function #5
    int (*RemoveRight)(void *, int); // XDequeStream virtual function #6
    void (*Clear)(void *); // XDequeStream virtual function #7
    int (*GetLength)(void *); // XDequeStream virtual function #8
    int (*SaveToStream)(void *, struct IXStream *, int); // XDequeStream virtual function #9
    int (*LoadFromStream)(void *, struct IXStream *, int); // XDequeStream virtual function #10
};

typedef struct XDequeStream_data XDequeStream_data, *PXDequeStream_data;

struct XDequeStream_data {
    int offset_0x0;
};

typedef struct exception_data exception_data, *Pexception_data;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};


// WARNING! conflicting data type names: /ClassDataTypes/std/exception/exception - /std/exception

typedef struct exception_vftable exception_vftable, *Pexception_vftable;

struct exception_vftable {
    exception * (*deleting_destructor)(void *, byte); // exception virtual function #1
    char * (*vfunction2)(void *); // exception virtual function #2
};

typedef struct out_of_range out_of_range, *Pout_of_range;

typedef struct out_of_range_vftable out_of_range_vftable, *Pout_of_range_vftable;

typedef struct logic_error_data logic_error_data, *Plogic_error_data;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct logic_error_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    void *offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined4 offset_0x14;
    uint offset_0x18;
};

struct out_of_range_vftable {
    exception * (*deleting_destructor)(void *, byte); // out_of_range virtual function #1
    char * (*vfunction2)(void *); // logic_error virtual function #2
};

struct out_of_range { // class out_of_range : logic_error
    struct out_of_range_vftable *vftablePtr;
    struct exception_data exception_data;
    struct logic_error_data logic_error_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/std/bad_alloc/bad_alloc - /std/bad_alloc

typedef struct bad_alloc_vftable bad_alloc_vftable, *Pbad_alloc_vftable;

struct bad_alloc_vftable {
    exception * (*deleting_destructor)(void *, byte); // bad_alloc virtual function #1
    char * (*vfunction2)(void *); // exception virtual function #2
};

typedef struct logic_error_vftable logic_error_vftable, *Plogic_error_vftable;

struct logic_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // logic_error virtual function #1
    char * (*vfunction2)(void *); // logic_error virtual function #2
};

typedef struct logic_error logic_error, *Plogic_error;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct logic_error_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    void *offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined4 offset_0x14;
    uint offset_0x18;
};

struct logic_error { // class logic_error : exception
    struct logic_error_vftable *vftablePtr;
    struct exception_data exception_data;
    struct logic_error_data logic_error_data;
};

typedef struct length_error_vftable length_error_vftable, *Plength_error_vftable;

struct length_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // length_error virtual function #1
    char * (*vfunction2)(void *); // logic_error virtual function #2
};

typedef struct length_error length_error, *Plength_error;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct logic_error_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    void *offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined4 offset_0x14;
    uint offset_0x18;
};

struct length_error { // class length_error : logic_error
    struct length_error_vftable *vftablePtr;
    struct exception_data exception_data;
    struct logic_error_data logic_error_data;
};

typedef struct bad_exception_vftable bad_exception_vftable, *Pbad_exception_vftable;

struct bad_exception_vftable {
    exception * (*deleting_destructor)(void *, byte); // bad_exception virtual function #1
    char * (*vfunction2)(void *); // exception virtual function #2
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct bad_exception { // class bad_exception : exception
    struct bad_exception_vftable *vftablePtr;
    struct exception_data exception_data;
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*`scalar_deleting_destructor')(void *, uint); // type_info virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/type_info/type_info - /type_info

typedef struct type_info_data type_info_data, *Ptype_info_data;

struct type_info_data {
    void *offset_0x0;
};

typedef struct IXStream_vftable IXStream_vftable, *PIXStream_vftable;

struct IXStream_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // IXStream virtual function #1
    int (*Read)(void *, void *, int); //  IXStream pure virtual function #2
    int (*Write)(void *, void *, int); //  IXStream pure virtual function #3
    int (*CopyTo)(void *, void *, int); //  IXStream pure virtual function #4
    int (*RemoveLeft)(void *, int); //  IXStream pure virtual function #5
    int (*RemoveRight)(void *, int); //  IXStream pure virtual function #6
    void (*Clear)(void *); //  IXStream pure virtual function #7
    int (*GetLength)(void *); //  IXStream pure virtual function #8
    int (*SaveToStream)(void *, struct IXStream *, int); //  IXStream pure virtual function #9
    int (*LoadFromStream)(void *, struct IXStream *, int); //  IXStream pure virtual function #10
};


// WARNING! conflicting data type names: /ClassDataTypes/IXStream/IXStream - /IXStream

typedef struct XMemoryStream_vftable XMemoryStream_vftable, *PXMemoryStream_vftable;

struct XMemoryStream_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XMemoryStream virtual function #1
    int (*Read)(void *, void *, int); // XMemoryStream virtual function #2
    int (*Write)(void *, void *, int); // XMemoryStream virtual function #3
    int (*CopyTo)(void *, void *, int); // XMemoryStream virtual function #4
    int (*RemoveLeft)(void *, int); // XMemoryStream virtual function #5
    int (*RemoveRight)(void *, int); // XMemoryStream virtual function #6
    void (*Clear)(void *); // XMemoryStream virtual function #7
    int (*GetLength)(void *); // XMemoryStream virtual function #8
    int (*SaveToStream)(void *, struct IXStream *, int); // XMemoryStream virtual function #9
    int (*LoadFromStream)(void *, struct IXStream *, int); // XMemoryStream virtual function #10
};

typedef struct XMemoryStream_data XMemoryStream_data, *PXMemoryStream_data;

struct XMemoryStream_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};


// WARNING! conflicting data type names: /ClassDataTypes/XMemoryStream/XMemoryStream - /XMemoryStream

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct XMemory XMemory, *PXMemory;

struct XMemory { // PlaceHolder Structure
};

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct _Init_locks _Init_locks, *P_Init_locks;

struct _Init_locks { // PlaceHolder Structure
};

typedef struct _THandle _THandle, *P_THandle;

struct _THandle { // PlaceHolder Structure
};

typedef struct _XMemory _XMemory, *P_XMemory;

struct _XMemory { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef size_t rsize_t;

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef struct localeinfo_struct *_locale_t;




bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void FUN_10001020(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
void FUN_10001060(exception *param_1);
void __thiscall IXStream::~IXStream(IXStream *this);
void __thiscall IXStream::~IXStream(IXStream *this);
void __thiscall IXStream::~IXStream(IXStream *this,IXStream *param_1);
IXStream * __thiscall IXStream::operator=(IXStream *this,IXStream *param_1);
undefined4 * __thiscall IXStream::scalar_deleting_destructor(IXStream *this,byte param_1);
void __thiscall XDequeStream::XDequeStream(XDequeStream *this,XDequeStream *param_1);
XDequeStream * __thiscall XDequeStream::operator=(XDequeStream *this,XDequeStream *param_1);
undefined4 * __thiscall XDequeStream::scalar_deleting_destructor(XDequeStream *this,byte param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,void *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
int __thiscall std::logic_error::vfunction2(logic_error *this);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,byte param_1);
void __fastcall FUN_100012e0(int param_1);
void FUN_10001310(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,int param_6,uint param_7);
void * __thiscall FUN_100014e0(void *this,void *param_1,uint param_2,uint param_3);
void FUN_100015c0(uint param_1);
void FUN_10001740(void);
int __thiscall FUN_100017c0(void *this,undefined4 *param_1,uint param_2);
void __thiscall std::length_error::length_error(length_error *this);
void FUN_100018d0(exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
void * __thiscall FUN_10001970(void *this,char *param_1);
void __thiscall FUN_100019b0(void *this,uint param_1);
undefined * Catch_All@10001a5f(void);
void FUN_10001a87(void);
void Catch_All@10001af0(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void * __thiscall FUN_10001b90(void *this,undefined4 *param_1,uint param_2);
void __cdecl FUN_10001c60(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,uint param_6,undefined4 param_7,int param_8,uint param_9);
void __cdecl FUN_10001cd0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,uint param_6,undefined4 param_7,int param_8,uint param_9);
void __cdecl FUN_10001d40(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,uint param_6,uint param_7,int param_8,uint param_9);
void __cdecl FUN_10001e00(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,uint param_6,undefined4 param_7,int param_8,uint param_9);
void __cdecl FUN_10001ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,int param_6,uint param_7,undefined4 param_8,int param_9,uint param_10);
void __cdecl FUN_10001f90(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,int param_9,uint param_10);
XMemoryStream * __thiscall XMemoryStream::XMemoryStream(XMemoryStream *this,XMemoryStream *param_1);
XMemoryStream * __thiscall XMemoryStream::operator=(XMemoryStream *this,XMemoryStream *param_1);
XMemoryStream * __thiscall XMemoryStream::scalar_deleting_destructor(XMemoryStream *this,byte param_1);
_func_void * __cdecl std::set_new_handler(_func_void *param_1);
void FUN_10002176(void);
exception * __thiscall std::out_of_range::scalar_deleting_destructor(out_of_range *this,byte param_1);
void __thiscall std::length_error::length_error(length_error *this);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
void FUN_10002221(exception *param_1);
void __cdecl thunk_FUN_100025f6(size_t param_1);
_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this);
_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1);
void __fastcall FUN_100022b7(int *param_1);
void __cdecl FUN_100022c9(LPCRITICAL_SECTION param_1);
void __cdecl FUN_100022d4(LPCRITICAL_SECTION param_1);
void __cdecl FUN_100022df(LPCRITICAL_SECTION param_1);
void __cdecl FUN_100022ea(LPCRITICAL_SECTION param_1);
void __thiscall std::exception::exception(exception *this);
exception * __thiscall std::exception::exception(exception *this,char **param_1);
void __thiscall std::exception::exception(exception *this,char **param_1,int param_2);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
void __thiscall std::exception::~exception(exception *this);
char * __thiscall std::exception::vfunction2(exception *this);
exception * __thiscall std::exception::scalar_deleting_destructor(exception *this,byte param_1);
void __cdecl _free(void *_Memory);
void __fastcall __security_check_cookie(int param_1);
void __thiscall type_info::~type_info(type_info *this);
void * __thiscall type_info::type_info::`scalar_deleting_destructor'(type_info *this,uint param_1);
bool __thiscall type_info::operator==(type_info *this,type_info *param_1);
void __cdecl FUN_1000245c(undefined4 param_1);
void __cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void __cdecl FUN_10002562(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_10002586(void);
errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
void __cdecl _free(void *_Memory);
void __cdecl FUN_100025f6(size_t param_1);
void __thiscall __purecall(void *this);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_10002733(void);
errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
undefined4 __CRT_INIT@12(undefined4 param_1,int param_2,int param_3);
int __fastcall ___DllMainCRTStartup(int param_1,int param_2,undefined4 param_3);
void entry(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_10002ab6(undefined4 param_1);
_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1);
int __cdecl __callnewh(size_t _Size);
size_t __cdecl _strlen(char *_Str);
void __CxxThrowException@8(undefined4 param_1,byte *param_2);
void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2);
void FID_conflict:_CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4);
void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2);
undefined4 __cdecl FID_conflict:___CxxFrameHandler3(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4);
int __cdecl _CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7);
_EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4);
_s_TryBlockMapEntry * __cdecl _GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5);
undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2);
undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1);
void __cdecl __FindAndUnlinkFrame(void *param_1);
void * __cdecl _CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,ulong param_5);
void __cdecl __EH_prolog3(int param_1);
void __cdecl __EH_prolog3_catch(int param_1);
int __cdecl FUN_10003025(int param_1);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_10003143(void);
int __cdecl _atexit(_func_4879 *param_1);
errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
int * __cdecl _V6_HeapAlloc(uint *param_1);
void FUN_10003206(void);
void * __cdecl _malloc(size_t _Size);
void __cdecl _free(void *_Memory);
void FUN_10003328(void);
void __cdecl ___report_gsfailure(void);
void __cdecl type_info::_Type_info_dtor(type_info *param_1);
void FUN_100034cb(void);
int __cdecl _strcmp(char *_Str1,char *_Str2);
void FUN_10003568(void);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
undefined4 FUN_100035ea(void);
int __cdecl FUN_10003656(int param_1);
void __encoded_null(void);
int __cdecl FUN_100036cd(int param_1);
LPVOID FUN_10003744(void);
void __cdecl __mtterm(void);
void __cdecl FUN_100037b3(int param_1,int param_2);
void FUN_10003869(void);
DWORD * FUN_10003872(void);
_ptiddata __cdecl __getptd(void);
void __freefls@4(void *param_1);
void FUN_10003a0d(void);
void FUN_10003a19(void);
void __cdecl __freeptd(_ptiddata _Ptd);
int __cdecl __mtinit(void);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
int __cdecl FUN_10003f75(int param_1);
DWORD * FUN_10003fb0(void);
void __cdecl _abort(void);
uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask);
void __cdecl FUN_100040d4(int param_1);
void __cdecl __FF_MSGBANNER(void);
void __cdecl FUN_100042ad(undefined4 param_1);
void __cdecl terminate(void);
void __cdecl unexpected(void);
void __cdecl _inconsistency(void);
void __initp_eh_hooks(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
void __cdecl __amsg_exit(int param_1);
void __cdecl FUN_100048d9(undefined4 param_1);
void __cdecl ___crtExitProcess(int param_1);
void FUN_10004914(void);
void FUN_1000491d(void);
void __cdecl FUN_10004926(undefined4 *param_1);
void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl __get_osplatform(int *param_1);
undefined4 __cdecl __get_winmajor(undefined4 *param_1);
int __cdecl __cinit(int param_1);
void __cdecl FUN_10004a63(int param_1,int param_2,int param_3);
void FUN_10004b30(void);
void __cdecl __exit(int _Code);
void __cdecl __cexit(void);
void __cdecl __init_pointers(void);
void * __cdecl __malloc_crt(size_t _Size);
void * __cdecl __calloc_crt(size_t _Count,size_t _Size);
void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize);
int __cdecl __ioinit(void);
void __cdecl __ioterm(void);
int __cdecl __setenvp(void);
void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3);
int __cdecl __setargv(void);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void __RTC_Initialize(void);
undefined4 ___heap_select(void);
int __cdecl __heap_init(void);
void __cdecl __heap_term(void);
void FUN_100054e2(void);
undefined4 __cdecl FUN_100054e3(int param_1,DWORD param_2);
undefined4 __cdecl FUN_10005641(int param_1,DWORD param_2);
undefined4 FUN_1000565c(void);
void __cdecl ___security_init_cookie(void);
int __cdecl __mtinitlocks(void);
void __cdecl __mtdeletelocks(void);
void __cdecl FUN_10005794(int param_1);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_10005863(void);
void __cdecl __lock(int _File);
void FUN_1000589d(void);
exception * __thiscall std::bad_exception::scalar_deleting_destructor(bad_exception *this,byte param_1);
undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3);
undefined4 __cdecl FUN_10005926(undefined4 *param_1);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_10005a30(void);
undefined4 FUN_10005a4b(void);
void __cdecl ___DestructExceptionObject(int *param_1);
int __cdecl ___AdjustPointer(int param_1,int *param_2);
uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2);
void __cdecl CallUnexpected(_s_ESTypeList *param_1);
void Catch_All@10005bb3(void);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_10005cf1(void);
char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FindHandlerForForeignException(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
void FUN_1000642b(exception *param_1);
undefined4 __cdecl ___InternalCxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
size_t __cdecl __msize(void *_Memory);
void FUN_10006616(void);
undefined4 __cdecl ___sbh_heap_init(undefined4 param_1);
void __thiscall thunk_FUN_1000668b(void *this,int param_1);
void __thiscall FUN_1000668b(void *this,int param_1);
void __cdecl ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int __cdecl ___sbh_alloc_new_group(int param_1);
undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * __cdecl ___sbh_alloc_block(uint *param_1);
void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2);
undefined1 (*) [16] __cdecl __VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3);
void __cdecl ___freetlocinfo(void *param_1);
void __cdecl ___addlocaleref(LONG *param_1);
LONG * __cdecl ___removelocaleref(LONG *param_1);
LONG * __updatetlocinfoEx_nolock(void);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_10007512(void);
undefined4 FUN_1000751e(void);
void __cdecl setSBCS(threadmbcinfostruct *param_1);
void __cdecl setSBUpLow(threadmbcinfostruct *param_1);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_100077c7(void);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1);
int __cdecl getSystemCP(int param_1);
void __cdecl FUN_100078cc(undefined4 param_1,int param_2);
int __cdecl __setmbcp(int _CodePage);
void FUN_10007c06(void);
undefined4 ___initmbctable(void);
void __cdecl FUN_10007c5d(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
void __cdecl __initp_misc_winsig(undefined4 param_1);
uint __cdecl siglookup(uint param_1);
_PHNDLR __cdecl ___get_sigabrt(void);
int __cdecl _raise(int _SigNum);
void FUN_10007f95(void);
undefined4 __cdecl FUN_10007fd1(undefined4 param_1,undefined4 param_2,uint param_3);
errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
int __cdecl __set_error_mode(int _Mode);
void __cdecl __freea(void *_Memory);
void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3);
void FUN_100083ea(int param_1);
void __fastcall _EH4_CallFilterFunc(undefined *param_1);
void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE);
void __fastcall _EH4_GlobalUnwind(PVOID param_1);
void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __initp_misc_cfltcvt_tab(void);
void __cdecl FUN_100085ca(undefined4 param_1);
void __cdecl FUN_100085d4(undefined4 param_1);
undefined4 ___crtInitCritSecNoSpinCount@8(LPCRITICAL_SECTION param_1);
int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2);
int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3);
void FUN_100087af(void);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void FUN_10008915(void);
int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4);
int __cdecl __ismbblead(uint _C);
int __cdecl _ValidateRead(void *param_1,uint param_2);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,uint param_2);
undefined4 __fastcall __NLG_Notify1(undefined4 param_1);
void __NLG_Notify(ulong param_1);
void FUN_10008b94(void);
long __cdecl _atol(char *_Str);
undefined4 FUN_10008c85(void);
undefined4 __get_sse2_info(void);
void __cdecl ___free_lc_time(undefined4 *param_1);
void __cdecl ___free_lconv_num(undefined4 *param_1);
void __cdecl ___free_lconv_mon(int param_1);
size_t __cdecl _strcspn(char *_Str,char *_Control);
int __cdecl __crtGetStringTypeA_stat(localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,int param_6,int param_7,int param_8);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
char * __cdecl _strpbrk(char *_Str,char *_Control);
int __cdecl __crtLCMapStringA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8,int param_9);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
ulong __cdecl strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
int __cdecl __isleadbyte_l(int _C,_locale_t _Locale);
void __cdecl ___ansicp(LCID param_1);
void __cdecl ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6);
void __alloca_probe(void);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
XMemory * __thiscall XMemoryStream::GetXMemory(XMemoryStream *this);
XMemory * __thiscall XMemoryStream::Detach(XMemoryStream *this);
void __thiscall XMemoryStream::Attach(XMemoryStream *this,XMemory *param_1);
int __thiscall XMemoryStream::XMemoryStream::LoadFromStream(XMemoryStream *this,IXStream *param_1,int param_2);
int __thiscall XMemoryStream::XMemoryStream::SaveToStream(XMemoryStream *this,IXStream *param_1,int param_2);
int __thiscall XMemoryStream::XMemoryStream::GetLength(XMemoryStream *this);
void __thiscall XMemoryStream::XMemoryStream::Clear(XMemoryStream *this);
int __thiscall XMemoryStream::XMemoryStream::RemoveRight(XMemoryStream *this,int param_1);
int __thiscall XMemoryStream::XMemoryStream::RemoveLeft(XMemoryStream *this,int param_1);
int __thiscall XMemoryStream::XMemoryStream::CopyTo(XMemoryStream *this,void *param_1,int param_2);
int __thiscall XMemoryStream::XMemoryStream::Write(XMemoryStream *this,void *param_1,int param_2);
int __thiscall XMemoryStream::XMemoryStream::Read(XMemoryStream *this,void *param_1,int param_2);
void __thiscall IXStream::IXStream(IXStream *this);
XMemoryStream * __thiscall XMemoryStream::XMemoryStream(XMemoryStream *this);
int __thiscall XDequeStream::XDequeStream::LoadFromStream(XDequeStream *this,IXStream *param_1,int param_2);
int __thiscall XDequeStream::XDequeStream::SaveToStream(XDequeStream *this,IXStream *param_1,int param_2);
int __thiscall XDequeStream::XDequeStream::GetLength(XDequeStream *this);
int __thiscall XDequeStream::XDequeStream::Read(XDequeStream *this,void *param_1,int param_2);
void __thiscall XDequeStream::XDequeStream::Clear(XDequeStream *this);
void __thiscall XDequeStream::~XDequeStream(XDequeStream *this);
XDequeStream * __thiscall XDequeStream::XDequeStream(XDequeStream *this);
int __thiscall XDequeStream::XDequeStream::CopyTo(XDequeStream *this,void *param_1,int param_2);
int __thiscall XDequeStream::XDequeStream::RemoveRight(XDequeStream *this,int param_1);
int __thiscall XDequeStream::XDequeStream::RemoveLeft(XDequeStream *this,int param_1);
int __thiscall XDequeStream::XDequeStream::Write(XDequeStream *this,void *param_1,int param_2);
_XMemory * XStream::GetXMemory(_THandle *param_1);
_XMemory * XStream::Detach(_THandle *param_1);
bool XStream::Attach(_THandle *param_1,_XMemory *param_2);
int XStream::GetLength(_THandle *param_1);
bool XStream::Clear(_THandle *param_1);
int XStream::RemoveRight(_THandle *param_1,int param_2);
int XStream::RemoveLeft(_THandle *param_1,int param_2);
int XStream::Peek(_THandle *param_1,void *param_2,int param_3);
int XStream::Write(_THandle *param_1,void *param_2,int param_3);
int XStream::Read(_THandle *param_1,void *param_2,int param_3);
void XStream::DestroyHandle(_THandle *param_1);
_THandle * XStream::CreateHandle(void);
_THandle * XStream::Clone(_THandle *param_1);
uint FUN_1000aa00(void);
size_t FUN_1000aae0(void *param_1);
void FUN_1000abd0(void);
void Unwind@1000ac40(void);
void Unwind@1000ac80(void);
void Unwind@1000acb5(void);
void Unwind@1000acd9(void);
void Unwind@1000acfd(void);
void Unwind@1000ad21(void);
void Unwind@1000ad29(void);
void Unwind@1000ad50(void);
void Unwind@1000ad73(void);
void Unwind@1000ada0(void);
void Unwind@1000adf0(void);
void Unwind@1000ae20(void);
void Unwind@1000ae50(void);
void FUN_1000ae73(void);
void __thiscall std::bad_alloc::~bad_alloc(void);

