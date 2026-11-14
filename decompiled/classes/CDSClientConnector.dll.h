typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned int    uint3;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
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

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
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

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
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

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Class Structure
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

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

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

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

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

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef wchar_t WCHAR;

typedef CHAR *LPCSTR;

typedef LONG *PLONG;

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
    char pdbpath[43];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (*FARPROC)(void);

typedef DWORD *LPDWORD;

typedef WORD *LPWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef BOOL *LPBOOL;

typedef BYTE *PBYTE;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

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

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef char *va_list;

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
};

struct out_of_range_vftable {
    exception * (*deleting_destructor)(void *, byte); // out_of_range virtual function #1
    void (*what)(void *); //  virtual function #2
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

typedef struct logic_error logic_error, *Plogic_error;

typedef struct logic_error_vftable logic_error_vftable, *Plogic_error_vftable;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct logic_error_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct logic_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // logic_error virtual function #1
    void (*what)(void *); //  virtual function #2
};

struct logic_error { // class logic_error : exception
    struct logic_error_vftable *vftablePtr;
    struct exception_data exception_data;
    struct logic_error_data logic_error_data;
};

typedef struct length_error_vftable length_error_vftable, *Plength_error_vftable;

struct length_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // length_error virtual function #1
    void (*what)(void *); //  virtual function #2
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


// WARNING! conflicting data type names: /ClassDataTypes/std/bad_exception/bad_exception - /std/bad_exception

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*`scalar_deleting_destructor')(void *, uint); // type_info virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/type_info/type_info - /type_info

typedef struct type_info_data type_info_data, *Ptype_info_data;

struct type_info_data {
    void *offset_0x0;
};

typedef struct Socket Socket, *PSocket;

typedef struct Socket_vftable Socket_vftable, *PSocket_vftable;

typedef struct Socket_data Socket_data, *PSocket_data;

typedef struct _THandle _THandle, *P_THandle;

struct Socket_data {
    struct _THandle *offset_0x0;
    struct _THandle *offset_0x4;
    undefined4 offset_0x8;
    struct _THandle *offset_0xc;
    undefined field4_0x10;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    undefined4 offset_0x14;
    undefined field9_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
};

struct Socket_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // Socket virtual function #1
};

struct _THandle { // PlaceHolder Structure
};

struct Socket { // class Socket
    struct Socket_vftable *vftablePtr;
    struct Socket_data Socket_data;
};

typedef struct CDS_ReqSelect_data CDS_ReqSelect_data, *PCDS_ReqSelect_data;

struct CDS_ReqSelect_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    undefined field26_0x20;
    undefined field27_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    undefined field30_0x24;
    undefined field31_0x25;
    undefined field32_0x26;
    undefined field33_0x27;
    undefined4 offset_0x28;
    undefined field35_0x2c;
    undefined field36_0x2d;
    undefined field37_0x2e;
    undefined field38_0x2f;
    undefined field39_0x30;
    undefined field40_0x31;
    undefined field41_0x32;
    undefined field42_0x33;
    undefined field43_0x34;
    undefined field44_0x35;
    undefined field45_0x36;
    undefined field46_0x37;
    undefined field47_0x38;
    undefined field48_0x39;
    undefined field49_0x3a;
    undefined field50_0x3b;
    undefined field51_0x3c;
    undefined field52_0x3d;
    undefined field53_0x3e;
    undefined field54_0x3f;
    undefined field55_0x40;
    undefined field56_0x41;
    undefined field57_0x42;
    undefined field58_0x43;
    undefined field59_0x44;
    undefined field60_0x45;
    undefined field61_0x46;
    undefined field62_0x47;
    undefined field63_0x48;
    undefined field64_0x49;
    undefined field65_0x4a;
    undefined field66_0x4b;
    undefined field67_0x4c;
    undefined field68_0x4d;
    undefined field69_0x4e;
    undefined field70_0x4f;
    undefined field71_0x50;
    undefined field72_0x51;
    undefined field73_0x52;
    undefined field74_0x53;
    undefined field75_0x54;
    undefined field76_0x55;
    undefined field77_0x56;
    undefined field78_0x57;
    undefined field79_0x58;
    undefined field80_0x59;
    undefined field81_0x5a;
    undefined field82_0x5b;
    undefined4 offset_0x5c;
    undefined field84_0x60;
    undefined field85_0x61;
    undefined field86_0x62;
    undefined field87_0x63;
    undefined field88_0x64;
    undefined field89_0x65;
    undefined field90_0x66;
    undefined field91_0x67;
    undefined field92_0x68;
    undefined field93_0x69;
    undefined field94_0x6a;
    undefined field95_0x6b;
    undefined field96_0x6c;
    undefined field97_0x6d;
    undefined field98_0x6e;
    undefined field99_0x6f;
    undefined field100_0x70;
    undefined field101_0x71;
    undefined field102_0x72;
    undefined field103_0x73;
    undefined field104_0x74;
    undefined field105_0x75;
    undefined field106_0x76;
    undefined field107_0x77;
};

typedef struct CDS_ReqSelect CDS_ReqSelect, *PCDS_ReqSelect;

typedef struct CDS_ReqSelect_vftable CDS_ReqSelect_vftable, *PCDS_ReqSelect_vftable;

struct CDS_ReqSelect_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    undefined field26_0x20;
    undefined field27_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    undefined field30_0x24;
    undefined field31_0x25;
    undefined field32_0x26;
    undefined field33_0x27;
    undefined4 offset_0x28;
    undefined field35_0x2c;
    undefined field36_0x2d;
    undefined field37_0x2e;
    undefined field38_0x2f;
    undefined field39_0x30;
    undefined field40_0x31;
    undefined field41_0x32;
    undefined field42_0x33;
    undefined field43_0x34;
    undefined field44_0x35;
    undefined field45_0x36;
    undefined field46_0x37;
    undefined field47_0x38;
    undefined field48_0x39;
    undefined field49_0x3a;
    undefined field50_0x3b;
    undefined field51_0x3c;
    undefined field52_0x3d;
    undefined field53_0x3e;
    undefined field54_0x3f;
    undefined field55_0x40;
    undefined field56_0x41;
    undefined field57_0x42;
    undefined field58_0x43;
    undefined field59_0x44;
    undefined field60_0x45;
    undefined field61_0x46;
    undefined field62_0x47;
    undefined field63_0x48;
    undefined field64_0x49;
    undefined field65_0x4a;
    undefined field66_0x4b;
    undefined field67_0x4c;
    undefined field68_0x4d;
    undefined field69_0x4e;
    undefined field70_0x4f;
    undefined field71_0x50;
    undefined field72_0x51;
    undefined field73_0x52;
    undefined field74_0x53;
    undefined field75_0x54;
    undefined field76_0x55;
    undefined field77_0x56;
    undefined field78_0x57;
    undefined field79_0x58;
    undefined field80_0x59;
    undefined field81_0x5a;
    undefined field82_0x5b;
    undefined4 offset_0x5c;
    undefined field84_0x60;
    undefined field85_0x61;
    undefined field86_0x62;
    undefined field87_0x63;
    undefined field88_0x64;
    undefined field89_0x65;
    undefined field90_0x66;
    undefined field91_0x67;
    undefined field92_0x68;
    undefined field93_0x69;
    undefined field94_0x6a;
    undefined field95_0x6b;
    undefined field96_0x6c;
    undefined field97_0x6d;
    undefined field98_0x6e;
    undefined field99_0x6f;
    undefined field100_0x70;
    undefined field101_0x71;
    undefined field102_0x72;
    undefined field103_0x73;
    undefined field104_0x74;
    undefined field105_0x75;
    undefined field106_0x76;
    undefined field107_0x77;
};

struct CDS_ReqSelect_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // CDS_ReqSelect virtual function #1
    void (*vfunction2)(void *); // CDS_ReqSelect virtual function #2
    undefined4 (*vfunction3)(void *); // CDS_ReqSelect virtual function #3
    char * (*vfunction4)(void *); // CDS_ReqSelect virtual function #4
    int (*vfunction5)(void *); // CDS_ReqSelect virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // CDS_ReqSelect virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // CDS_ReqSelect virtual function #7
    void (*vfunction8)(void *, undefined1); // CDS_ReqSelect virtual function #8
    undefined1 (*vfunction9)(void *); // CDS_ReqSelect virtual function #9
};

struct CDS_ReqSelect { // class CDS_ReqSelect : IMessage
    struct CDS_ReqSelect_vftable *vftablePtr;
    struct CDS_ReqSelect_data CDS_ReqSelect_data;
};

typedef struct CDS_AnsSelect_vftable CDS_AnsSelect_vftable, *PCDS_AnsSelect_vftable;

struct CDS_AnsSelect_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // CDS_AnsSelect virtual function #1
    void (*vfunction2)(void *); // CDS_AnsSelect virtual function #2
    undefined4 (*vfunction3)(void *); // CDS_AnsSelect virtual function #3
    char * (*vfunction4)(void *); // CDS_AnsSelect virtual function #4
    int (*vfunction5)(void *); // CDS_AnsSelect virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // CDS_AnsSelect virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // CDS_AnsSelect virtual function #7
    void (*vfunction8)(void *, undefined1); // CDS_ReqSelect virtual function #8
    undefined1 (*vfunction9)(void *); // CDS_ReqSelect virtual function #9
};

typedef struct CDS_AnsSelect CDS_AnsSelect, *PCDS_AnsSelect;

typedef struct CDS_AnsSelect_data CDS_AnsSelect_data, *PCDS_AnsSelect_data;

struct CDS_AnsSelect_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
    undefined field12_0x18;
    undefined field13_0x19;
    undefined field14_0x1a;
    undefined field15_0x1b;
    undefined field16_0x1c;
    undefined field17_0x1d;
    undefined field18_0x1e;
    undefined field19_0x1f;
    undefined field20_0x20;
    undefined field21_0x21;
    undefined field22_0x22;
    undefined field23_0x23;
    undefined field24_0x24;
    undefined field25_0x25;
    undefined field26_0x26;
    undefined field27_0x27;
    undefined4 offset_0x28;
};

struct CDS_AnsSelect { // class CDS_AnsSelect : IMessage
    struct CDS_AnsSelect_vftable *vftablePtr;
    struct CDS_AnsSelect_data CDS_AnsSelect_data;
};

typedef struct IMessage IMessage, *PIMessage;

typedef struct IMessage_vftable IMessage_vftable, *PIMessage_vftable;

struct IMessage { // class IMessage
    struct IMessage_vftable *vftablePtr;
};

struct IMessage_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // IMessage virtual function #1
    void (*vfunction2)(void *); //  IMessage pure virtual function #2
    undefined4 (*vfunction3)(void *); //  IMessage pure virtual function #3
    char * (*vfunction4)(void *); //  IMessage pure virtual function #4
    int (*vfunction5)(void *); //  IMessage pure virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); //  IMessage pure virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); //  IMessage pure virtual function #7
    void (*vfunction8)(void *, undefined1); //  IMessage pure virtual function #8
    undefined1 (*vfunction9)(void *); //  IMessage pure virtual function #9
};

typedef struct StrList_data StrList_data, *PStrList_data;

struct StrList_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

typedef struct StrList_vftable StrList_vftable, *PStrList_vftable;

struct StrList_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // StrList virtual function #1
    void (*vfunction2)(void *); // StrList virtual function #2
    undefined4 (*vfunction3)(void *); // StrList virtual function #3
    char * (*vfunction4)(void *); // StrList virtual function #4
    int (*vfunction5)(void *); // StrList virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // StrList virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // StrList virtual function #7
    void (*vfunction8)(void *, undefined1); // CDS_ReqSelect virtual function #8
    undefined1 (*vfunction9)(void *); // CDS_ReqSelect virtual function #9
};

typedef struct StrList StrList, *PStrList;

struct StrList_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

struct StrList { // class StrList : IMessage
    struct StrList_vftable *vftablePtr;
    struct StrList_data StrList_data;
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef struct CNoTrackObject CNoTrackObject, *PCNoTrackObject;

struct CNoTrackObject { // PlaceHolder Structure
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;

typedef struct CPaneContainerGC CPaneContainerGC, *PCPaneContainerGC;

struct CPaneContainerGC { // PlaceHolder Structure
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct CatchGuardRN CatchGuardRN, *PCatchGuardRN;

struct CatchGuardRN { // PlaceHolder Structure
};

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/out_of_range - /ClassDataTypes/std/out_of_range/out_of_range

typedef struct basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>, *Pbasic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>;

struct basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/logic_error - /ClassDataTypes/std/logic_error/logic_error

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct _Func_impl<std::_Callable_obj<<lambda_9ab38a79c03e1e04423ad6818173354b>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> _Func_impl<std::_Callable_obj<<lambda_9ab38a79c03e1e04423ad6818173354b>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>, *P_Func_impl<std::_Callable_obj<<lambda_9ab38a79c03e1e04423ad6818173354b>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>;

struct _Func_impl<std::_Callable_obj<<lambda_9ab38a79c03e1e04423ad6818173354b>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> { // PlaceHolder Structure
};

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

struct allocator<char> { // PlaceHolder Structure
};

typedef struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>, *Pbasic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>;

struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/length_error - /ClassDataTypes/std/length_error/length_error

typedef struct _Func_impl<std::_Callable_obj<<lambda_399686a4a5619bf4b18c998976ba8b81>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> _Func_impl<std::_Callable_obj<<lambda_399686a4a5619bf4b18c998976ba8b81>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>, *P_Func_impl<std::_Callable_obj<<lambda_399686a4a5619bf4b18c998976ba8b81>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>;

struct _Func_impl<std::_Callable_obj<<lambda_399686a4a5619bf4b18c998976ba8b81>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil> { // PlaceHolder Structure
};

typedef struct _Container_proxy _Container_proxy, *P_Container_proxy;

struct _Container_proxy { // PlaceHolder Structure
};

typedef struct allocator<std::_Container_proxy> allocator<std::_Container_proxy>, *Pallocator<std::_Container_proxy>;

struct allocator<std::_Container_proxy> { // PlaceHolder Structure
};

typedef struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> _String_iterator<std::_String_val<std::_Simple_types<char>_>_>, *P_String_iterator<std::_String_val<std::_Simple_types<char>_>_>;

struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> { // PlaceHolder Structure
};

typedef struct _Secure_char_traits_tag _Secure_char_traits_tag, *P_Secure_char_traits_tag;

struct _Secure_char_traits_tag { // PlaceHolder Structure
};

typedef struct _String_iterator<std::_String_val<std::_Simple_types<unsigned_short>_>_> _String_iterator<std::_String_val<std::_Simple_types<unsigned_short>_>_>, *P_String_iterator<std::_String_val<std::_Simple_types<unsigned_short>_>_>;

struct _String_iterator<std::_String_val<std::_Simple_types<unsigned_short>_>_> { // PlaceHolder Structure
};

typedef struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *Pvector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct failure failure, *Pfailure;

struct failure { // PlaceHolder Structure
};

typedef struct AutoResetEvent AutoResetEvent, *PAutoResetEvent;

struct AutoResetEvent { // PlaceHolder Structure
};

typedef struct CriticalSection CriticalSection, *PCriticalSection;

struct CriticalSection { // PlaceHolder Structure
};

typedef struct _XMemory _XMemory, *P_XMemory;

struct _XMemory { // PlaceHolder Structure
};

typedef struct _Handle _Handle, *P_Handle;

struct _Handle { // PlaceHolder Structure
};

typedef struct CAtlWinModule CAtlWinModule, *PCAtlWinModule;

struct CAtlWinModule { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef ushort wint_t;

typedef uint size_t;

typedef size_t rsize_t;

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef int intptr_t;

typedef struct localeinfo_struct *_locale_t;




void * __thiscall FUN_10001000(void *this,uint param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_10001030(void *this,uint param_1);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1);
void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,uint param_1);
undefined4 __cdecl FUN_100010e0(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_100010f0(undefined1 *param_1,undefined1 *param_2);
void __cdecl length(char *param_1);
ushort * __cdecl FID_conflict:_Move_s(ushort *param_1,uint param_2,ushort *param_3,uint param_4);
ushort * __cdecl FID_conflict:_Move_s(ushort *param_1,uint param_2,ushort *param_3,uint param_4);
char * __cdecl std::char_traits<char>::assign(char *param_1,uint param_2,char param_3);
undefined4 * __thiscall FUN_10001180(void *this,undefined4 param_1);
undefined4 __fastcall FUN_100011a0(undefined4 *param_1);
undefined4 * __fastcall FUN_100011b0(undefined4 *param_1);
void __thiscall FUN_100011d0(void *this,undefined4 *param_1);
undefined4 __fastcall FUN_100011f0(int *param_1);
bool __thiscall FUN_10001220(void *this,int *param_1);
void * __thiscall FID_conflict:runtime_error(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
void __thiscall what(void *this);
void * __thiscall std::logic_error::scalar_deleting_destructor(logic_error *this,uint param_1);
void * __thiscall FID_conflict:length_error(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall std::length_error::~length_error(length_error *this);
undefined4 * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,uint param_1);
void * __thiscall FID_conflict:length_error(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall std::out_of_range::~out_of_range(out_of_range *this);
undefined4 * __thiscall std::out_of_range::scalar_deleting_destructor(out_of_range *this,uint param_1);
out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,undefined4 *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,undefined4 *param_1);
uint * __thiscall FUN_100014d0(void *this,uint param_1);
uint * __thiscall FUN_10001580(void *this,uint param_1,uint param_2,uint param_3);
void __fastcall FUN_10001630(int param_1);
bool __thiscall FUN_10001650(void *this,uint param_1);
void __thiscall XDR::IMessage::~IMessage(IMessage *this);
undefined4 * __thiscall XDR::IMessage::scalar_deleting_destructor(IMessage *this,uint param_1);
allocator<char> * __cdecl FUN_100016d0(allocator<char> *param_1);
uint __cdecl FUN_100016e0(_THandle *param_1,void *param_2);
int __cdecl FUN_10001750(_THandle *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int __cdecl FUN_100017d0(int param_1);
IMessage * __thiscall XDR::IMessage::IMessage(IMessage *this);
CDS_ReqSelect * __thiscall CDS_ReqSelect::CDS_ReqSelect(CDS_ReqSelect *this);
void __thiscall CDS_ReqSelect::~CDS_ReqSelect(CDS_ReqSelect *this);
void __thiscall CDS_ReqSelect::vfunction2(CDS_ReqSelect *this);
undefined4 __thiscall CDS_ReqSelect::vfunction3(CDS_ReqSelect *this);
char * __thiscall CDS_ReqSelect::vfunction4(CDS_ReqSelect *this);
int __thiscall CDS_ReqSelect::vfunction5(CDS_ReqSelect *this);
uint __thiscall CDS_ReqSelect::vfunction6(CDS_ReqSelect *this,_THandle *param_1);
uint __thiscall CDS_ReqSelect::vfunction7(CDS_ReqSelect *this,_THandle *param_1);
undefined1 __thiscall CDS_ReqSelect::vfunction9(CDS_ReqSelect *this);
undefined4 * __thiscall CDS_ReqSelect::scalar_deleting_destructor(CDS_ReqSelect *this,uint param_1);
void __fastcall FUN_10001cd0(void *param_1);
undefined4 * __thiscall FUN_10001cf0(void *this,uint param_1);
void * __thiscall FUN_10001d20(void *this,uint param_1);
allocator<char> * __fastcall basic_string<>(allocator<char> *param_1);
allocator<char> * __thiscall basic_string<>(void *this,char *param_1);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> * __thiscall FUN_10001dc0(void *this,allocator<char> *param_1);
void __fastcall FUN_10001e00(void *param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1);
char * __thiscall FUN_10001e40(void *this,uint param_1);
void __fastcall FUN_10001e70(void *param_1);
undefined4 __fastcall FUN_10001e90(int param_1);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1);
undefined4 * __fastcall FUN_10001ed0(undefined4 *param_1);
void __fastcall ~function<>(undefined4 *param_1);
void * __thiscall FUN_10001f60(void *this,void *param_1);
void __fastcall FUN_100020f0(void *param_1);
void * __fastcall FUN_10002150(void *param_1);
int __thiscall FUN_10002180(void *this,int *param_1);
void __thiscall FID_conflict:~CAtlWinModule(void *this);
undefined4 * __thiscall FUN_100022a0(void *this,undefined4 *param_1,int param_2,undefined4 param_3);
undefined4 * __thiscall FUN_10002a80(void *this,undefined4 *param_1,int *param_2);
void __fastcall FUN_10002b20(undefined4 *param_1);
void __fastcall FUN_10002b40(undefined4 *param_1);
void __fastcall FUN_10002b60(undefined4 *param_1);
void __fastcall FUN_10002b80(undefined4 *param_1);
basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1,uint param_2,uint param_3);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,char param_2);
void __thiscall FUN_10002ce0(void *this,char param_1,uint param_2);
char * __thiscall FID_conflict:_Myptr(void *this);
allocator<char> * __thiscall _String_val<>(allocator<char> *param_1,allocator<char> param_2);
allocator<char> * __thiscall FUN_10002db0(void *this,allocator<char> *param_1);
int __fastcall FUN_10002dd0(int param_1);
int __fastcall FUN_10002e10(int param_1);
undefined4 * __thiscall FUN_10002e30(void *this,undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5);
uint __thiscall FUN_10002ed0(void *this,uint param_1);
void __thiscall FUN_10002f50(void *this,void *param_1,void *param_2);
void __fastcall FUN_10002f80(void *param_1);
void __fastcall FUN_10003000(undefined4 *param_1);
undefined4 __fastcall allocator<>(undefined4 param_1);
int __cdecl FUN_10003040(int param_1);
int __cdecl FUN_10003050(int param_1);
void __cdecl FUN_10003060(int param_1);
undefined4 __cdecl FUN_10003080(undefined4 param_1);
int __cdecl FUN_10003090(int param_1);
int __cdecl FUN_100030a0(int param_1);
undefined4 * __thiscall FUN_100030b0(void *this,byte *param_1,allocator<char> *param_2);
void * __thiscall FUN_10003120(void *this,void *param_1);
undefined4 * __thiscall FUN_10003150(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __thiscall FUN_10003180(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 *param_5);
void * __thiscall FUN_100037a0(void *this,void *param_1,int *param_2);
void __fastcall FUN_100037d0(int param_1);
void __thiscall FUN_100037f0(void *this,int param_1);
int __cdecl FUN_10003920(int param_1);
undefined4 __cdecl FUN_10003960(undefined4 param_1);
void __fastcall FUN_100039a0(int param_1);
void __fastcall FUN_100039c0(int param_1);
void __thiscall FUN_100039e0(void *this,int param_1);
void __fastcall FUN_10003b10(void *param_1);
bool FUN_10003be0(int *param_1,int *param_2);
void __fastcall FUN_10003c00(int *param_1);
int * __fastcall FUN_10003c20(int *param_1);
bool __thiscall FUN_10003c40(void *this,int *param_1);
undefined4 __fastcall FUN_10003c90(int param_1);
undefined4 * __thiscall FUN_10003cb0(void *this,undefined4 *param_1,undefined4 *param_2);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,char param_2);
basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,char *param_1,uint param_2);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,uint param_2);
void __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Eos(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,uint param_1);
bool __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Grow(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,uint param_1,bool param_2);
void FUN_10003f70(void);
void FUN_10003f90(uint param_1);
bool __thiscall FUN_10003fb0(void *this,int *param_1);
int __cdecl FUN_10003fe0(int param_1);
void * __thiscall FUN_10003ff0(void *this,void *param_1);
undefined4 __fastcall FUN_10004020(int param_1);
void * __thiscall FUN_10004040(undefined4 *param_1,void *param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_10004210(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __fastcall FUN_100042c0(int param_1);
void * __thiscall FUN_10004330(void *this,void *param_1,char param_2,int param_3,undefined4 *param_4);
int __thiscall FUN_100047b0(void *this,int *param_1);
undefined4 * __thiscall FUN_10004840(undefined4 *param_1,byte *param_2,allocator<char> param_3);
void __thiscall std::allocator<std::_Container_proxy>::destroy(allocator<std::_Container_proxy> *this,_Container_proxy *param_1);
void * __thiscall _Vector_iterator<>(void *this,undefined4 param_1,undefined4 *param_2);
undefined4 * __fastcall _String_const_iterator<>(undefined4 *param_1);
void __fastcall FUN_100048e0(int *param_1);
int * __fastcall FUN_10004930(int *param_1);
void __fastcall FUN_10004950(int *param_1);
length_error * __thiscall std::length_error::length_error(length_error *this,undefined4 *param_1);
uint __thiscall FID_conflict:max_size(void *this);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Chassign(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,uint param_2,char param_3);
void __thiscall FUN_10004af0(void *this,uint param_1);
void Catch_All@10004ba8(void);
void Catch_All@10004bcf(void);
undefined4 FUN_10004bf1(void);
void FUN_10004c05(void);
bool __thiscall FID_conflict:_Inside(void *this,char *param_1);
undefined4 max_size(void);
undefined4 __thiscall FUN_10004ce0(void *this,int *param_1);
void FUN_10004d30(void);
void __fastcall FUN_10004d50(void *param_1);
void FUN_10004db0(void);
void Catch_All@10004e7a(void);
undefined4 FUN_10004edd(void);
void FUN_10004f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void Catch_All@10004fae(void);
undefined4 FUN_10004fd5(void);
undefined4 * __thiscall FUN_10005000(undefined4 *param_1,byte *param_2,allocator<char> param_3);
int * __fastcall FUN_10005040(int *param_1);
undefined4 * __thiscall FUN_10005060(void *this,undefined4 param_1,undefined4 *param_2);
int * __thiscall FUN_100050a0(void *this,int *param_1);
bool __thiscall FUN_100050e0(void *this,int *param_1);
void __fastcall FUN_10005110(int *param_1);
undefined4 * __thiscall FUN_10005230(void *this,undefined4 *param_1,undefined1 *param_2);
char * __thiscall std::allocator<char>::allocate(allocator<char> *this,uint param_1);
uint __thiscall std::allocator<char>::max_size(allocator<char> *this);
void __thiscall FUN_100052b0(void *this,_Container_proxy *param_1);
undefined4 * __thiscall FUN_10005330(undefined4 *param_1,byte *param_2,allocator<char> param_3);
undefined4 max_size(void);
void FUN_100053a0(undefined4 param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_100053c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
undefined4 * __thiscall FUN_10005410(undefined4 *param_1,undefined4 param_2,allocator<char> param_3);
bool __cdecl FUN_10005440(_THandle *param_1,undefined4 *param_2);
bool __cdecl FUN_10005480(_THandle *param_1,undefined4 *param_2);
undefined4 FUN_100054c0(void);
void FUN_100054d0(void);
void __cdecl FUN_100054f0(void *param_1);
void __cdecl FUN_10005510(_THandle *param_1,undefined4 *param_2);
void __cdecl FUN_10005530(_THandle *param_1,void *param_2);
void __cdecl FUN_10005550(_THandle *param_1,undefined4 *param_2);
void __cdecl FUN_10005570(_THandle *param_1,void *param_2);
void __cdecl FUN_10005590(int param_1);
void __cdecl FUN_100055b0(_THandle *param_1,void *param_2);
void __cdecl FUN_100055d0(_THandle *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __cdecl FUN_100055f0(int param_1,char *param_2,int param_3);
undefined4 __cdecl FUN_10005610(undefined4 param_1);
char * __cdecl std::_Traits_helper::copy_s<std::char_traits<char>_>(char *param_1,uint param_2,char *param_3,uint param_4);
void __thiscall FUN_100056a0(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void __thiscall do_is(void *this,undefined4 param_1,undefined4 param_2,int param_3);
void __cdecl FUN_10005740(undefined1 *param_1,undefined1 *param_2);
void __cdecl FUN_10005770(void *param_1,void *param_2,undefined4 param_3);
char * __cdecl std::_Traits_helper::move_s<std::char_traits<char>_>(char *param_1,uint param_2,char *param_3,uint param_4);
allocator<char> * __thiscall std::allocator<char>::allocator<char>(allocator<char> *this,allocator<char> *param_1);
void __cdecl FUN_100057f0(uint param_1);
void FUN_10005840(void);
char * __cdecl std::_Allocate<char>(uint param_1,char *param_2);
void __cdecl FUN_100058a0(undefined4 param_1,undefined4 *param_2);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,exception *param_1);
void __cdecl FUN_10005910(undefined4 param_1);
int __cdecl FUN_10005930(void *param_1);
uint __cdecl FUN_100059a0(_THandle *param_1,void *param_2);
void __cdecl FUN_10005a40(_THandle *param_1,void *param_2);
char * __cdecl FID_conflict:copy_s<std::char_traits<wchar_t>_>(ushort *param_1,uint param_2,ushort *param_3,uint param_4);
int __cdecl FUN_10005b60(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_2,int param_3);
void __cdecl FUN_10005bc0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
void __cdecl _Destroy_range<>(void *param_1,void *param_2);
char * __cdecl FID_conflict:copy_s<std::char_traits<wchar_t>_>(ushort *param_1,uint param_2,ushort *param_3,uint param_4);
void __thiscall FUN_10005c70(void *this,uint param_1);
void Catch_All@10005d14(void);
void FUN_10005d3d(void);
void * __thiscall FUN_10005dd0(void *this,void *param_1);
void __thiscall FUN_10005e00(void *this,allocator<char> *param_1);
void FUN_10005e80(void *param_1);
int __fastcall FUN_10005ea0(int *param_1);
int * __fastcall FUN_10005ef0(int *param_1);
bool __cdecl FUN_10005f50(_THandle *param_1,void *param_2);
bool __cdecl FUN_10005f80(_THandle *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
undefined4 * __thiscall FUN_10005fb0(void *this,undefined4 *param_1,undefined4 param_2,int param_3,allocator<char> *param_4);
int __thiscall FUN_10006030(void *this,int param_1,int param_2,allocator<char> *param_3);
void __thiscall FUN_10006070(void *this,undefined4 param_1,int param_2,uint param_3,allocator<char> *param_4);
void Catch_All@100061d6(void);
void FUN_10006245(void);
void Catch_All@10006346(void);
void FUN_1000637b(void);
undefined4 * __thiscall FUN_10006470(void *this,undefined4 *param_1,int param_2);
int __thiscall FUN_100064b0(void *this,int *param_1);
void * __thiscall FUN_10006500(void *this,int param_1);
int * __thiscall FUN_10006520(void *this,int param_1);
void * __cdecl FUN_100065a0(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_2,void *param_3);
void __thiscall FUN_100065e0(void *this,undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,void *param_5);
void __cdecl FUN_10006610(void *param_1);
void __cdecl FUN_10006620(int param_1,int param_2,allocator<char> *param_3,undefined4 param_4);
void __thiscall do_is(void *this,undefined4 param_1,undefined4 param_2,void *param_3);
void __cdecl FUN_100066a0(undefined4 param_1,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_3);
void __thiscall FUN_100066d0(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void * __thiscall FUN_10006740(void *this,uint param_1);
void __thiscall FUN_10006770(void *this,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
void FUN_10006790(undefined4 param_1,allocator<char> *param_2);
void __thiscall FUN_100067b0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
void __cdecl FUN_100067d0(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,void *param_5,undefined4 param_6);
void FUN_10006820(int param_1,int param_2,allocator<char> *param_3);
void Catch_All@10006885(void);
void FUN_10006887(void);
void FUN_10006890(void);
void FUN_100068bc(void);
void __cdecl FUN_100068e0(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4);
void __cdecl _Destroy_range<>(void *param_1,void *param_2,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_3);
int __cdecl FUN_10006960(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_2,int param_3,undefined4 param_4,undefined1 param_5);
void __cdecl FUN_100069c0(undefined4 param_1,allocator<char> *param_2);
void __cdecl FUN_10006a40(int param_1);
void FUN_10006a60(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_2,void *param_3);
void Catch_All@10006ae8(void);
void FUN_10006aea(void);
void FUN_10006af3(void);
void FUN_10006b1f(void);
void * __cdecl FUN_10006b60(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_2,void *param_3);
void __cdecl iter_swap<>(void *param_1,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_2);
void __cdecl swap<>(void *param_1,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_2);
void __thiscall FUN_10006be0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
undefined4 * __thiscall CDS::ClientConnector::Impl::Socket::scalar_deleting_destructor(Socket *this,uint param_1);
void FUN_10006d60(void);
bool __thiscall FUN_10006d70(void *this,undefined4 param_1,int *param_2);
bool __thiscall FUN_10006de0(void *this,undefined4 param_1,int *param_2);
undefined4 __cdecl FUN_10006e50(int *param_1);
StrList * __thiscall StrList::StrList(StrList *this);
void __thiscall StrList::~StrList(StrList *this);
void __thiscall StrList::vfunction2(StrList *this);
undefined4 __thiscall StrList::vfunction3(StrList *this);
char * __thiscall StrList::vfunction4(StrList *this);
int __thiscall StrList::vfunction5(StrList *this);
bool __thiscall StrList::vfunction6(StrList *this,_THandle *param_1);
bool __thiscall StrList::vfunction7(StrList *this,_THandle *param_1);
void __thiscall CDS_ReqSelect::vfunction8(CDS_ReqSelect *this,undefined1 param_1);
void * __thiscall StrList::scalar_deleting_destructor(StrList *this,uint param_1);
CDS_AnsSelect * __thiscall CDS_AnsSelect::CDS_AnsSelect(CDS_AnsSelect *this);
void __thiscall CDS_AnsSelect::~CDS_AnsSelect(CDS_AnsSelect *this);
void __thiscall CDS_AnsSelect::vfunction2(CDS_AnsSelect *this);
undefined4 __thiscall CDS_AnsSelect::vfunction3(CDS_AnsSelect *this);
char * __thiscall CDS_AnsSelect::vfunction4(CDS_AnsSelect *this);
int __thiscall CDS_AnsSelect::vfunction5(CDS_AnsSelect *this);
uint __thiscall CDS_AnsSelect::vfunction6(CDS_AnsSelect *this,_THandle *param_1);
uint __thiscall CDS_AnsSelect::vfunction7(CDS_AnsSelect *this,_THandle *param_1);
undefined4 * __thiscall CDS_AnsSelect::scalar_deleting_destructor(CDS_AnsSelect *this,uint param_1);
void __fastcall FUN_10007530(int param_1);
undefined4 * __fastcall FUN_10007550(undefined4 *param_1);
void __fastcall FUN_100075c0(undefined4 *param_1);
void * __thiscall FUN_100075e0(void *this,void *param_1);
bool __fastcall FUN_10007610(int param_1);
wchar_t * __thiscall std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::back(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this);
void __fastcall FUN_10007660(void *param_1);
undefined4 * __thiscall FUN_100076b0(void *this,undefined4 param_1,char param_2);
void __fastcall FUN_10007720(undefined4 *param_1);
void __fastcall FUN_10007780(int *param_1);
undefined4 * __fastcall FUN_100077a0(undefined4 *param_1);
int * __thiscall FUN_100077c0(void *this,int *param_1);
int __fastcall FUN_10007800(int param_1);
uint __thiscall FUN_10007820(void *this,uint param_1);
void __thiscall FUN_100078a0(void *this,undefined4 param_1,undefined4 param_2);
void __fastcall FUN_100078d0(void *param_1);
undefined4 * __thiscall FUN_10007940(undefined4 *param_1,allocator<char> param_2);
void __fastcall FUN_10007980(undefined4 *param_1);
void __fastcall FUN_100079c0(undefined4 *param_1);
int * __fastcall FUN_10007a00(int *param_1);
undefined4 * __thiscall FUN_10007a20(void *this,undefined4 *param_1,int param_2);
undefined4 * __fastcall FUN_10007a60(undefined4 *param_1);
void FUN_10007a80(void);
undefined4 * __thiscall FUN_10007aa0(undefined4 *param_1,allocator<char> param_2);
void FUN_10007b50(void *param_1);
void FUN_10007b70(uint param_1);
void __thiscall FUN_10007b90(void *this,int param_1);
int * __fastcall FUN_10007bb0(int *param_1);
undefined4 max_size(void);
void * __thiscall FUN_10007c40(void *this,int param_1);
int * __thiscall FUN_10007c60(void *this,int param_1);
void __cdecl FUN_10007ce0(void *param_1);
void __cdecl FUN_10007d00(_THandle *param_1,void *param_2);
void __cdecl FUN_10007d20(_THandle *param_1,void *param_2);
void __cdecl FUN_10007d40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_10007d80(uint param_1);
int __cdecl FUN_10007dd0(void *param_1);
uint __cdecl FUN_10007e40(_THandle *param_1,void *param_2);
int __cdecl FUN_10007ee0(_THandle *param_1,void *param_2);
void __thiscall FUN_10007f80(void *this,uint param_1);
void Catch_All@10008024(void);
void FUN_1000804d(void);
void * __thiscall FUN_100080e0(void *this,void *param_1);
void __thiscall FUN_10008110(void *this,undefined4 *param_1);
CNoTrackObject * __cdecl CProcessLocal<CControlSiteFactoryMgr>::CreateObject(void);
bool __cdecl FUN_10008210(undefined4 param_1,undefined4 *param_2);
bool __cdecl FUN_10008240(undefined4 param_1,undefined4 *param_2);
void __cdecl FUN_10008270(undefined4 *param_1);
int __fastcall FUN_10008290(int param_1);
undefined4 * __thiscall FUN_100082d0(void *this,undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4);
int __thiscall FUN_10008350(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10008390(void *this,undefined4 param_1,int param_2,uint param_3,undefined4 *param_4);
void Catch_All@100084ec(void);
void FUN_10008559(void);
void Catch_All@10008643(void);
void FUN_10008678(void);
undefined4 * __thiscall FUN_10008740(void *this,undefined4 *param_1,int param_2);
int __thiscall FUN_10008780(void *this,int *param_1);
void __thiscall FUN_100087d0(void *this,undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,void *param_5);
void __cdecl FUN_10008800(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4);
void __thiscall do_is(void *this,undefined4 param_1,undefined4 param_2,void *param_3);
void __cdecl FUN_10008880(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __thiscall FUN_100088b0(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void __cdecl FUN_10008920(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,void *param_5,undefined4 param_6);
void __cdecl FUN_10008970(undefined4 param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_10008990(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4);
void __cdecl FUN_100089e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10008a10(void *param_1,int param_2,int param_3,undefined1 param_4);
void __cdecl FUN_10008a60(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4);
void __thiscall FUN_10008a80(uint3 param_1,undefined4 param_2,int param_3,undefined4 *param_4);
undefined4 __cdecl FUN_10008ac0(undefined4 *param_1);
void * __cdecl FUN_10008ad0(void *param_1,int param_2,int param_3);
void __cdecl FUN_10008b20(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4);
undefined4 __cdecl FUN_10008b80(undefined4 param_1);
void __cdecl FUN_10008b90(undefined4 param_1,int param_2,undefined4 *param_3);
void * __cdecl FUN_10008bd0(void *param_1,int param_2,void *param_3);
void __cdecl FUN_10008c20(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10008c50(void *this,undefined4 *param_1);
bool __fastcall FUN_10008c90(int *param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char param_1);
void __fastcall FUN_10008cd0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void * __thiscall FID_conflict:begin(void *this);
void * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
undefined4 * __fastcall FUN_10008d90(undefined4 *param_1);
void __fastcall FUN_10008e00(undefined4 *param_1);
void * __thiscall FUN_10008e20(void *this,void *param_1);
int __fastcall FUN_10008e50(int param_1);
int __thiscall FUN_10008e70(void *this,uint param_1);
void __thiscall FUN_10008ea0(void *this,void *param_1);
void __fastcall FUN_10008f20(void *param_1);
void __fastcall FUN_10008f80(int *param_1);
int * __thiscall FUN_10008fa0(void *this,int *param_1);
void __fastcall FUN_10008fe0(int *param_1);
int * __thiscall FUN_10009000(void *this,int *param_1);
bool __thiscall FUN_10009040(void *this,int *param_1);
void * __thiscall FUN_10009070(void *this,void *param_1,int param_2,int param_3,undefined1 param_4,int param_5);
int __fastcall FUN_10009100(int param_1);
undefined4 * __thiscall FUN_10009140(void *this,undefined4 *param_1,undefined4 param_2,int param_3,void *param_4);
undefined4 * __thiscall FUN_100091c0(void *this,undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5);
uint __thiscall FUN_10009260(void *this,uint param_1);
void __fastcall FUN_100092e0(void *param_1);
int __thiscall FUN_10009360(void *this,int param_1,int param_2,void *param_3);
void * __thiscall _Vector_iterator<>(void *this,uint param_1,undefined4 *param_2);
int * __fastcall FUN_100093c0(int *param_1);
void * __thiscall _String_iterator<>(void *this,char *param_1,void *param_2);
int * __fastcall FUN_10009400(int *param_1);
int __fastcall FUN_10009420(int *param_1);
bool __thiscall FUN_10009480(void *this,int *param_1);
int __cdecl FUN_100094e0(undefined1 param_1,int param_2,int param_3);
void * __thiscall FUN_10009510(void *this,void *param_1,undefined4 param_2,uint param_3);
void FUN_10009530(void);
void __thiscall FUN_10009550(void *this,void *param_1,void *param_2);
void __thiscall FUN_10009580(void *this,undefined4 param_1,int param_2,uint param_3,void *param_4);
void Catch_All@100096e3(void);
void FUN_10009752(void);
void Catch_All@10009853(void);
void FUN_10009888(void);
void FUN_10009970(void);
void FUN_100099f0(uint param_1);
undefined4 * __thiscall FUN_10009a10(void *this,undefined4 *param_1,int param_2);
undefined4 * __thiscall FUN_10009a50(void *this,uint param_1,undefined4 *param_2);
int * __fastcall FUN_10009ab0(int *param_1);
int __thiscall FUN_10009b10(void *this,int *param_1);
undefined4 * __thiscall FUN_10009b60(void *this,char *param_1,void *param_2);
int * __fastcall FUN_10009bc0(int *param_1);
undefined4 * __fastcall FUN_10009c20(undefined4 *param_1);
undefined4 * __thiscall FUN_10009c40(void *this,void *param_1);
void Catch_All@10009cef(void);
undefined4 FUN_10009d0d(void);
undefined4 max_size(void);
void * __thiscall FUN_10009d70(void *this,int param_1);
int __thiscall FUN_10009d90(void *this,int *param_1);
int * __thiscall FUN_10009de0(void *this,int param_1);
void __cdecl FUN_10009e60(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_10009e90(undefined4 *param_1,undefined4 *param_2);
void __thiscall FUN_10009ec0(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void __cdecl FUN_10009f30(int param_1,int param_2,void *param_3,undefined4 param_4);
void __cdecl FUN_10009f80(void *param_1,void *param_2,undefined4 param_3);
void __thiscall do_is(void *this,undefined4 param_1,undefined4 param_2,void *param_3);
void __cdecl FUN_10009ff0(undefined4 param_1,undefined4 param_2,void *param_3);
void __thiscall FUN_1000a020(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void __cdecl FUN_1000a090(uint param_1);
void __thiscall FUN_1000a0e0(void *this,undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_1000a110(undefined4 *param_1);
undefined1 __fastcall _Char_traits_cat<>(undefined4 param_1);
int __cdecl FUN_1000a140(void *param_1,void *param_2,int param_3);
void FUN_1000a1a0(int param_1,int param_2,void *param_3);
void Catch_All@1000a205(void);
void FUN_1000a207(void);
void FUN_1000a210(void);
void FUN_1000a23c(void);
void __cdecl _Destroy_range<>(void *param_1,void *param_2);
void __cdecl FUN_1000a290(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4);
void __cdecl _Destroy_range<>(void *param_1,void *param_2,void *param_3);
int __cdecl FUN_1000a310(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined1 param_5);
void __cdecl FUN_1000a370(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5,undefined4 param_6);
void FUN_1000a3d0(undefined4 param_1,void *param_2);
void FUN_1000a3f0(void *param_1);
void * __cdecl FUN_1000a410(void *param_1,void *param_2,void *param_3);
void FUN_1000a450(undefined4 *param_1,undefined4 *param_2,void *param_3);
void Catch_All@1000a4d5(void);
void FUN_1000a4d7(void);
void FUN_1000a4e0(void);
undefined4 FUN_1000a50c(void);
void * __cdecl FUN_1000a540(undefined4 *param_1,undefined4 *param_2,void *param_3);
void FUN_1000a580(allocator<char> *param_1,allocator<char> *param_2,int param_3);
void Catch_All@1000a5e7(void);
void FUN_1000a5e9(void);
void FUN_1000a5f2(void);
undefined4 FUN_1000a61e(void);
void __cdecl FUN_1000a640(undefined4 param_1,void *param_2);
void __cdecl FUN_1000a6c0(void *param_1);
undefined4 * __thiscall FUN_1000a6d0(void *this,uint param_1);
void __cdecl iter_swap<>(void *param_1,undefined4 *param_2);
void __cdecl FUN_1000a720(int param_1);
void __cdecl swap<>(void *param_1,undefined4 *param_2);
void __thiscall FUN_1000a750(void *this,undefined4 *param_1);
undefined1 FUN_1000a850(void);
void Ordinal_14(void);
void FUN_1000a85e(void);
void FUN_1000a896(void);
void __fastcall __security_check_cookie(int param_1);
void FUN_1000a8dd(void *param_1);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void __cdecl FUN_1000a903(size_t param_1);
errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
void __thiscall std::exception::exception(exception *this);
exception * __thiscall std::exception::exception(exception *this,char **param_1);
void __thiscall std::exception::exception(exception *this,char **param_1,int param_2);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
void __thiscall std::exception::~exception(exception *this);
char * __thiscall std::exception::vfunction2(exception *this);
exception * __thiscall std::exception::scalar_deleting_destructor(exception *this,byte param_1);
int xtoa_s(uint param_1,uint param_2,int param_3);
errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix);
size_t __cdecl _strlen(char *_Str);
void __cdecl FUN_1000ac7b(undefined4 param_1);
void __cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void __cdecl __invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_1000add8(void);
int __cdecl _printf(char *_Format,...);
void FUN_1000ae84(void);
int __cdecl __get_printf_count_output(void);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
void __thiscall __purecall(void *this);
errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
void __thiscall type_info::~type_info(type_info *this);
void * __thiscall type_info::type_info::`scalar_deleting_destructor'(type_info *this,uint param_1);
bool __thiscall type_info::operator==(type_info *this,type_info *param_1);
long __cdecl _atol(char *_Str);
void __cdecl FUN_1000b038(char *param_1);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1);
int __cdecl __toupper_l(int _C,_locale_t _Locale);
int __cdecl _toupper(int _C);
undefined4 __CRT_INIT@12(undefined4 param_1,int param_2,int param_3);
BOOL __fastcall ___DllMainCRTStartup(int param_1,int param_2,HMODULE param_3);
void entry(HMODULE param_1,int param_2,int param_3);
void __CxxThrowException@8(undefined4 param_1,byte *param_2);
void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2);
void FID_conflict:_CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4);
void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2);
undefined4 __cdecl FID_conflict:___CxxFrameHandler3(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4);
_EXCEPTION_DISPOSITION __cdecl CatchGuardHandler(EHExceptionRecord *param_1,CatchGuardRN *param_2,void *param_3,void *param_4);
int __cdecl _CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7);
_EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4);
_s_TryBlockMapEntry * __cdecl _GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5);
undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2);
undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1);
void __cdecl __FindAndUnlinkFrame(void *param_1);
void * __cdecl _CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,ulong param_5);
void __cdecl __EH_prolog3(int param_1);
void __cdecl __EH_prolog3_catch(int param_1);
void __cdecl ___report_gsfailure(void);
void __cdecl _free(void *_Memory);
void FUN_1000ba51(void);
int __cdecl __onexit_nolock(int param_1);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_1000bbaa(void);
int __cdecl _atexit(_func_4879 *param_1);
int * __cdecl _V6_HeapAlloc(uint *param_1);
void FUN_1000bc0d(void);
void * __cdecl _malloc(size_t _Size);
void __cdecl FUN_1000bce0(undefined4 param_1);
int __cdecl __callnewh(size_t _Size);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
int __cdecl __get_errno_from_oserr(ulong param_1);
int * __cdecl __errno(void);
ulong * __cdecl ___doserrno(void);
void __cdecl __dosmaperr(ulong param_1);
errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
void FUN_1000c215(void);
int __cdecl __encode_pointer(int param_1);
void __encoded_null(void);
int __cdecl __decode_pointer(int param_1);
LPVOID ___set_flsgetvalue(void);
void __cdecl __mtterm(void);
void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale);
void FUN_1000c459(void);
void FUN_1000c462(void);
_ptiddata __cdecl __getptd_noexit(void);
_ptiddata __cdecl __getptd(void);
void __freefls@4(void *param_1);
void FUN_1000c618(void);
void FUN_1000c624(void);
void __cdecl __freeptd(_ptiddata _Ptd);
int __cdecl __mtinit(void);
undefined ** FUN_1000c828(void);
void __cdecl __lock_file(FILE *_File);
void __cdecl __lock_file2(int _Index,void *_File);
void __cdecl __unlock_file(FILE *_File);
void __cdecl __unlock_file2(int _Index,void *_File);
int __cdecl __stbuf(FILE *_File);
void __cdecl __ftbuf(int _Flag,FILE *_File);
void __cdecl write_char(void);
void __cdecl write_multi_char(undefined4 param_1,int param_2);
void __cdecl write_string(int param_1);
int __cdecl __output_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3);
void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2);
undefined1 (*) [16] __cdecl __VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3);
undefined4 FUN_1000d9c2(void);
undefined4 __get_sse2_info(void);
void __cdecl _abort(void);
uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask);
void __cdecl __NMSG_WRITE(int param_1);
void __cdecl __FF_MSGBANNER(void);
void __cdecl FUN_1000dd9d(undefined4 param_1);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
void __cdecl type_info::_Type_info_dtor(type_info *param_1);
void FUN_1000e17c(void);
int __cdecl _strcmp(char *_Str1,char *_Str2);
ulong __cdecl strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
int __cdecl CPtoLCID(int param_1);
void __cdecl setSBCS(threadmbcinfostruct *param_1);
void __cdecl setSBUpLow(threadmbcinfostruct *param_1);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_1000e733(void);
int __cdecl getSystemCP(int param_1);
void __cdecl __setmbcp_nolock(undefined4 param_1,int param_2);
int __cdecl __setmbcp(int _CodePage);
void FUN_1000eafe(void);
undefined4 ___initmbctable(void);
void __cdecl ___freetlocinfo(void *param_1);
void __cdecl ___addlocaleref(LONG *param_1);
LONG * __cdecl ___removelocaleref(LONG *param_1);
LONG * __updatetlocinfoEx_nolock(void);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_1000ee6e(void);
void __cdecl __freea(void *_Memory);
int __cdecl __crtLCMapStringA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8,int param_9);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
int __cdecl __isleadbyte_l(int _C,_locale_t _Locale);
int __cdecl _isleadbyte(int _C);
int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale);
void * __cdecl __malloc_crt(size_t _Size);
void * __cdecl __calloc_crt(size_t _Count,size_t _Size);
void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize);
void __cdecl __crt_waiting_on_module_handle(LPCWSTR param_1);
void __cdecl __amsg_exit(int param_1);
void __cdecl ___crtCorExitProcess(int param_1);
void __cdecl ___crtExitProcess(int param_1);
void FUN_1000f573(void);
void FUN_1000f57c(void);
void __cdecl __initterm(undefined4 *param_1);
void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2);
int __cdecl __cinit(int param_1);
void __cdecl doexit(int param_1,int param_2,int param_3);
void FUN_1000f762(void);
void __cdecl __exit(int _Code);
void __cdecl __cexit(void);
void __cdecl __init_pointers(void);
int __cdecl __ioinit(void);
void __cdecl __ioterm(void);
int __cdecl __setenvp(void);
void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3);
int __cdecl __setargv(void);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void __RTC_Initialize(void);
int __cdecl __heap_init(void);
void __cdecl __heap_term(void);
void FUN_1000ffe6(void);
int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
int __cdecl ___CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
void __cdecl ___security_init_cookie(void);
bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this,char *param_1);
void FUN_1001021b(void);
exception * __thiscall std::bad_exception::scalar_deleting_destructor(bad_exception *this,byte param_1);
undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3);
undefined4 __cdecl ___FrameUnwindFilter(undefined4 *param_1);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_100103bb(void);
void __cdecl ___DestructExceptionObject(int *param_1);
int __cdecl ___AdjustPointer(int param_1,int *param_2);
uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2);
void FUN_10010514(void *param_1);
void Catch_All@10010545(void);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_10010683(void);
char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FindHandlerForForeignException(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this,exception *param_1);
undefined4 __cdecl ___InternalCxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8);
void __cdecl terminate(void);
void FUN_10010eef(void);
void __cdecl _inconsistency(void);
void __initp_eh_hooks(void);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
int __cdecl __mtinitlocks(void);
void __cdecl __mtdeletelocks(void);
void __cdecl FUN_1001103e(int param_1);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_1001110f(void);
void __cdecl __lock(int _File);
uint __cdecl ___sbh_find_block(int param_1);
void __cdecl ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int __cdecl ___sbh_alloc_new_group(int param_1);
undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * __cdecl ___sbh_alloc_block(uint *param_1);
size_t __cdecl __msize(void *_Memory);
void FUN_10011ca9(void);
void __cdecl FUN_10011cb2(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
int __cdecl __flush(FILE *_File);
int __cdecl __fflush_nolock(FILE *_File);
int __cdecl flsall(int param_1);
void FUN_1001200d(void);
void FUN_1001203c(void);
int __cdecl __isatty(int _FileHandle);
int __cdecl __fileno(FILE *_File);
int __cdecl __flsbuf(int _Ch,FILE *_File);
void __initp_misc_cfltcvt_tab(void);
errno_t __cdecl __wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh);
void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3);
void FUN_100124ca(int param_1);
void __fastcall _EH4_CallFilterFunc(undefined *param_1);
void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE);
void __fastcall _EH4_GlobalUnwind(PVOID param_1);
void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __cdecl __initp_misc_winsig(undefined4 param_1);
uint __cdecl siglookup(uint param_1);
_PHNDLR __cdecl ___get_sigabrt(void);
int __cdecl _raise(int _SigNum);
void FUN_10012873(void);
int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType);
errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
int __cdecl __set_error_mode(int _Mode);
int __cdecl __crtGetStringTypeA_stat(localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,int param_6,int param_7,int param_8);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
void __cdecl ___free_lc_time(undefined4 *param_1);
void __cdecl ___free_lconv_num(undefined4 *param_1);
void __cdecl ___free_lconv_mon(int param_1);
size_t __cdecl _strcspn(char *_Str,char *_Control);
char * __cdecl _strpbrk(char *_Str,char *_Control);
void __cdecl ___ansicp(LCID param_1);
void __cdecl ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3);
void FUN_100133e8(void);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void FUN_1001354e(void);
void __cdecl FUN_10013625(undefined4 param_1);
void __cdecl FUN_10013634(undefined4 param_1);
BOOL __cdecl ___crtInitCritSecAndSpinCount(LPCRITICAL_SECTION param_1,DWORD param_2);
int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4);
int __cdecl __ismbblead(uint _C);
int __cdecl _ValidateRead(void *param_1,uint param_2);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,uint param_2);
undefined4 __fastcall __NLG_Notify1(undefined4 param_1);
void __NLG_Notify(ulong param_1);
void FUN_10013854(void);
int __cdecl __fclose_nolock(FILE *_File);
int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount);
int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount);
void FUN_1001414f(void);
int __cdecl __commit(int _FileHandle);
void FUN_10014230(void);
longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin);
longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin);
void FUN_100143ce(void);
void __cdecl __getbuf(FILE *_File);
void __alloca_probe(void);
int __cdecl __close_nolock(int _FileHandle);
int __cdecl __close(int _FileHandle);
void FUN_100145ba(void);
void __cdecl __freebuf(FILE *_File);
wint_t __cdecl __putwch_nolock(wchar_t _WCh);
int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes);
int __cdecl __free_osfhnd(int param_1);
intptr_t __cdecl __get_osfhandle(int _FileHandle);
int __cdecl ___lock_fhandle(int _Filehandle);
void FUN_1001497f(void);
void __cdecl __unlock_fhandle(int _Filehandle);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
void __cdecl ___initconout(void);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
undefined4 __fastcall FUN_10014b40(int param_1);
int __fastcall FUN_10014b60(int param_1);
void __thiscall FUN_10014b80(void *this,undefined4 param_1);
undefined4 __fastcall FUN_10014ba0(int param_1);
void __thiscall FUN_10014bc0(void *this,undefined4 param_1);
void __fastcall FUN_10014be0(int param_1);
void __fastcall FUN_10014c00(int param_1);
void __fastcall FUN_10014c20(int param_1);
undefined4 __fastcall FUN_10014c40(int param_1);
undefined4 __fastcall FUN_10014ca0(int param_1);
undefined4 __fastcall FUN_10014d10(int param_1);
undefined4 __fastcall FUN_10014d70(int param_1);
void __cdecl FUN_10014de0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_10014e50(void *this,char *param_1);
void __thiscall FUN_10014e70(void *this,char *param_1);
void __thiscall FUN_10014e90(void *this,char *param_1);
void __thiscall FUN_10014f10(void *this,void *param_1);
void __fastcall FUN_10014f30(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
allocator<char> * __thiscall FUN_10015100(void *this,char *param_1);
void __thiscall FUN_10015210(void *this,void *param_1);
void __thiscall FUN_10015230(void *this,void *param_1);
void __cdecl FUN_10015260(void *param_1);
void __cdecl FUN_10015280(uint param_1);
void FUN_100152a0(void);
undefined4 __fastcall FUN_100152b0(undefined4 param_1);
uint __cdecl FUN_100152c0(_THandle *param_1);
void __fastcall FUN_10015360(undefined4 *param_1);
undefined4 * __thiscall FUN_10015380(void *this,undefined4 param_1);
void __thiscall FUN_100153a0(void *this,_THandle *param_1);
undefined4 __thiscall FUN_100155e0(void *this,_THandle *param_1);
void FUN_10015700(undefined4 param_1,int param_2,int param_3);
void FUN_10015750(undefined4 param_1,_THandle *param_2,int param_3);
void __fastcall FUN_100157b0(int param_1);
undefined4 __thiscall FUN_10015830(void *this,_THandle *param_1);
undefined4 __fastcall FUN_10015890(int param_1);
undefined4 __thiscall FUN_100158c0(void *this,char *param_1,char *param_2);
void __thiscall CDS::ClientConnector::Impl::Socket::~Socket(Socket *this);
Socket * __thiscall CDS::ClientConnector::Impl::Socket::Socket(Socket *this,undefined4 param_1);
void FUN_10015a80(undefined4 param_1,_THandle *param_2,int param_3);
uint __fastcall FUN_10015b10(void *param_1);
void __fastcall FUN_10015c10(int param_1);
void __thiscall FUN_10015c30(void *this,char *param_1,ushort param_2);
void __thiscall FUN_10015c90(void *this,int param_1);
undefined4 __thiscall FUN_10015ea0(void *this,uint param_1,uint param_2,uint param_3);
int __thiscall FUN_10015fb0(void *this,_Handle *param_1,uint param_2);
void __fastcall FUN_100161c0(void *param_1);
void * __fastcall FUN_100162a0(void *param_1);
BOOL FUN_100163d0(HMODULE param_1,int param_2);
int CDS::Data::GetError(_Handle *param_1);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* CDS::Data::GetColumn(_Handle *param_1);
char * CDS::Data::GetTable(_Handle *param_1);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* CDS::Data::GetValuesNext(_Handle *param_1);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* CDS::Data::GetValuesBegin(_Handle *param_1);
void CDS::Data::SetOrder(_Handle *param_1,char *param_2);
void CDS::Data::SetSelectType(_Handle *param_1,char *param_2);
void CDS::Data::SetColumn(_Handle *param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*param_2);
void CDS::Data::DestroyHandle(_Handle *param_1);
_Handle * CDS::Data::CreateHandle(char *param_1);
void CDS::Data::SetKeyValue(_Handle *param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*param_2);
void CDS::ClientConnector::Disconnect(_Handle *param_1);
int CDS::ClientConnector::Connect(_Handle *param_1,char *param_2,int param_3);
int CDS::ClientConnector::SelectChannel(_Handle *param_1,_Handle *param_2,_func_void__Handle_ptr__Handle_ptr_void_ptr *param_3,void *param_4,int param_5);
int CDS::ClientConnector::SelectChannel(_Handle *param_1,_Handle *param_2,int param_3);
void CDS::ClientConnector::DestroyHandle(_Handle *param_1);
_Handle * CDS::ClientConnector::CreateHandle(void);
undefined4 Catch_All@100167a3(void);
undefined4 FUN_100167b0(void);
void Unwind@100167f0(void);
void Unwind@10016830(void);
void Unwind@1001683c(void);
void Unwind@10016863(void);
void Unwind@1001688a(void);
void Unwind@100168b7(void);
void Unwind@100168bf(void);
void Unwind@100168c7(void);
void Unwind@100168d2(void);
void Unwind@100168dd(void);
void Unwind@100168e8(void);
void Unwind@100168f3(void);
void Unwind@10016901(void);
void Unwind@1001690f(void);
void Unwind@10016938(void);
void Unwind@10016940(void);
void Unwind@10016948(void);
void Unwind@10016953(void);
void Unwind@1001695e(void);
void Unwind@10016969(void);
void Unwind@10016974(void);
void Unwind@10016982(void);
void Unwind@10016990(void);
void Unwind@100169b9(void);
void Unwind@100169ec(void);
void Unwind@10016a12(void);
void Unwind@10016a38(void);
void Unwind@10016a5e(void);
void Unwind@10016a66(void);
void Unwind@10016a8d(void);
void Unwind@10016ab3(void);
void Unwind@10016ad6(void);
void Unwind@10016ade(void);
void Unwind@10016aea(void);
void Unwind@10016b10(void);
void Unwind@10016b40(void);
void Unwind@10016b70(void);
void Unwind@10016be0(void);
void Unwind@10016c30(void);
void Unwind@10016c60(void);
void Unwind@10016c90(void);
void Unwind@10016ce0(void);
void Unwind@10016d10(void);
void Unwind@10016d18(void);
void Unwind@10016d23(void);
void Unwind@10016d50(void);
void Unwind@10016d80(void);
void Unwind@10016dd0(void);
void Unwind@10016e00(void);
void Unwind@10016e30(void);
void Unwind@10016e60(void);
void Unwind@10016e68(void);
void Unwind@10016e73(void);
void Unwind@10016e7e(void);
void Unwind@10016eb0(void);
void Unwind@10016f20(void);
void Unwind@10016f28(void);
void Unwind@10016f50(void);
void Unwind@10016f80(void);
void Unwind@10016f88(void);
void Unwind@10016fe0(void);
void Unwind@10017010(void);
void Unwind@10017040(void);
void Unwind@10017070(void);
void Unwind@100170c0(void);
void Unwind@100170f0(void);
void Unwind@10017120(void);
void Unwind@10017128(void);
void __thiscall std::bad_alloc::~bad_alloc(void);

