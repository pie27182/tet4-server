typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
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

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor **pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
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

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

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
    char pdbpath[78];
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

typedef struct Thread Thread, *PThread;

struct Thread { // class Thread
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct XInAsyncIOEngineWin98_vftable XInAsyncIOEngineWin98_vftable, *PXInAsyncIOEngineWin98_vftable;

struct XInAsyncIOEngineWin98_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XInAsyncIOEngineWin98 virtual function #1
    undefined1 (*vfunction2)(void *); // XInAsyncIOEngineWin98 virtual function #2
    undefined1 (*vfunction3)(void *); // XInAsyncIOEngineWin98 virtual function #3
};

typedef struct XInAsyncIOEngineWin98 XInAsyncIOEngineWin98, *PXInAsyncIOEngineWin98;

struct XInAsyncIOEngineWin98 { // class XInAsyncIOEngineWin98 : IXInAsyncIOEngine
    struct XInAsyncIOEngineWin98_vftable *vftablePtr;
};

typedef struct XObjectPool<XInAsyncResultUDP> XObjectPool<XInAsyncResultUDP>, *PXObjectPool<XInAsyncResultUDP>;

typedef struct XObjectPool<XInAsyncResultUDP>_vftable XObjectPool<XInAsyncResultUDP>_vftable, *PXObjectPool<XInAsyncResultUDP>_vftable;

typedef struct XObjectPool<XInAsyncResultUDP>_data XObjectPool<XInAsyncResultUDP>_data, *PXObjectPool<XInAsyncResultUDP>_data;

struct XObjectPool<XInAsyncResultUDP>_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void *offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

struct XObjectPool<XInAsyncResultUDP>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XObjectPool<XInAsyncResultUDP> virtual function #1
};

struct XObjectPool<XInAsyncResultUDP> { // class XObjectPool<XInAsyncResultUDP>
    struct XObjectPool<XInAsyncResultUDP>_vftable *vftablePtr;
    struct XObjectPool<XInAsyncResultUDP>_data XObjectPool<XInAsyncResultUDP>_data;
};

typedef struct XSyncObject XSyncObject, *PXSyncObject;

struct XSyncObject { // class XSyncObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct XWaitableObject XWaitableObject, *PXWaitableObject;

struct XWaitableObject { // class XWaitableObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct Connector Connector, *PConnector;

typedef struct Connector_vftable Connector_vftable, *PConnector_vftable;

typedef struct IConnector_data IConnector_data, *PIConnector_data;

typedef struct Connector_data Connector_data, *PConnector_data;

typedef struct AutoResetEvent AutoResetEvent, *PAutoResetEvent;


// WARNING! conflicting data type names: /Demangler/XSystem/Threading/Thread - /ClassDataTypes/XSystem/Threading/Thread/Thread

typedef struct ManualResetEvent ManualResetEvent, *PManualResetEvent;

struct IConnector_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    struct AutoResetEvent *offset_0x4;
    void *offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
};

struct Connector_data {
    undefined4 offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    undefined field7_0x10;
    undefined field8_0x11;
    undefined field9_0x12;
    undefined field10_0x13;
    struct Thread *offset_0x14;
    undefined4 offset_0x18;
    struct ManualResetEvent *offset_0x1c;
    undefined field14_0x20;
    undefined field15_0x21;
    undefined field16_0x22;
    undefined field17_0x23;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined4 offset_0x4c;
    undefined4 offset_0x50;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
    undefined4 offset_0x70;
    undefined4 offset_0x74;
    undefined4 offset_0x78;
    undefined4 offset_0x7c;
};

struct Connector_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // Connector virtual function #1
    void (*vfunction2)(void *, undefined4 *, undefined4, int, int *, int, undefined4, char); // Connector virtual function #2
    void (*vfunction3)(void *, int, undefined4, int, int *); // Connector virtual function #3
    void (*vfunction4)(void *, int, undefined4, void *); // Connector virtual function #4
    void (*vfunction5)(void *, int, undefined4, undefined4, int *, int, undefined4, char); // Connector virtual function #5
    void (*vfunction6)(void *, int, undefined4, undefined4, int *); // Connector virtual function #6
    void (*vfunction7)(void *, undefined4 *, undefined4, int, int *, int, undefined4, char, undefined4 *); // Connector virtual function #7
    void (*vfunction8)(void *, int, undefined4, int, int *, undefined4 *); // Connector virtual function #8
    void (*vfunction9)(void *, int, undefined4, void *, undefined4 *); // Connector virtual function #9
    void (*vfunction10)(void *, int, undefined4, undefined4, int *, int, undefined4, char, void *); // Connector virtual function #10
    void (*vfunction11)(void *, int, undefined4, undefined4, int *, undefined4 *); // Connector virtual function #11
    int (*vfunction12)(void *); // Connector virtual function #12
    void (*vfunction13)(void *); // Connector virtual function #13
    void (*vfunction14)(void *, undefined4 *, undefined4); // Connector virtual function #14
    void (*vfunction15)(void *, undefined4 *, undefined4); // Connector virtual function #15
    void (*vfunction16)(void *, undefined4 *, undefined4); // Connector virtual function #16
    void (*vfunction17)(void *, undefined4 *, undefined4); // Connector virtual function #17
    void (*vfunction18)(void *, undefined4 *, undefined4); // Connector virtual function #18
    void (*vfunction19)(void *, undefined4 *, undefined4); // Connector virtual function #19
    void (*vfunction20)(void *, undefined4 *, undefined4); // Connector virtual function #20
    void (*vfunction21)(void *, undefined4 *, undefined4); // Connector virtual function #21
    void (*vfunction22)(void *, undefined4 *, undefined4); // Connector virtual function #22
    void (*vfunction23)(void *, undefined4 *, undefined4); // Connector virtual function #23
    void (*vfunction24)(void *, undefined4 *, undefined4); // Connector virtual function #24
};

struct AutoResetEvent { // PlaceHolder Structure
};

struct ManualResetEvent { // PlaceHolder Structure
};

struct Connector { // class Connector : IConnector
    struct Connector_vftable *vftablePtr;
    struct IConnector_data IConnector_data;
    struct Connector_data Connector_data;
};

typedef struct PendingConnetEx PendingConnetEx, *PPendingConnetEx;

typedef struct PendingConnetEx_vftable PendingConnetEx_vftable, *PPendingConnetEx_vftable;

typedef struct IPendingConnet_data IPendingConnet_data, *PIPendingConnet_data;

typedef struct PendingConnetEx_data PendingConnetEx_data, *PPendingConnetEx_data;

struct IPendingConnet_data {
    int offset_0x0;
    void *offset_0x4;
    undefined4 offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
};

struct PendingConnetEx_data {
    undefined4 offset_0x0;
};

struct PendingConnetEx_vftable {
    undefined4 * (*vfunction1)(void *, byte); // IPendingConnet virtual function #1
    uint (*vfunction2)(void *); // PendingConnetEx virtual function #2
    uint (*vfunction3)(void *); // PendingConnetEx virtual function #3
    uint (*vfunction4)(void *); // PendingConnetEx virtual function #4
    uint (*vfunction5)(void *, void *); // PendingConnetEx virtual function #5
};

struct PendingConnetEx { // class PendingConnetEx : IPendingConnet
    struct PendingConnetEx_vftable *vftablePtr;
    struct IPendingConnet_data IPendingConnet_data;
    struct PendingConnetEx_data PendingConnetEx_data;
};

typedef struct PendingConnet_vftable PendingConnet_vftable, *PPendingConnet_vftable;

struct PendingConnet_vftable {
    undefined4 * (*vfunction1)(void *, byte); // IPendingConnet virtual function #1
    uint (*vfunction2)(void *); // PendingConnet virtual function #2
    uint (*vfunction3)(void *); // PendingConnet virtual function #3
    uint (*vfunction4)(void *); // PendingConnet virtual function #4
    uint (*vfunction5)(void *, void *); // PendingConnet virtual function #5
};

typedef struct PendingConnet PendingConnet, *PPendingConnet;

struct IPendingConnet_data {
    int offset_0x0;
    void *offset_0x4;
    undefined4 offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
};

struct PendingConnet { // class PendingConnet : IPendingConnet
    struct PendingConnet_vftable *vftablePtr;
    struct IPendingConnet_data IPendingConnet_data;
};

typedef struct IPendingConnet IPendingConnet, *PIPendingConnet;

typedef struct IPendingConnet_vftable IPendingConnet_vftable, *PIPendingConnet_vftable;

struct IPendingConnet_data {
    int offset_0x0;
    void *offset_0x4;
    undefined4 offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
};

struct IPendingConnet_vftable {
    undefined4 * (*vfunction1)(void *, byte); // IPendingConnet virtual function #1
    uint (*vfunction2)(void *); //  IPendingConnet pure virtual function #2
    uint (*vfunction3)(void *); //  IPendingConnet pure virtual function #3
    uint (*vfunction4)(void *); //  IPendingConnet pure virtual function #4
    uint (*vfunction5)(void *, void *); //  IPendingConnet pure virtual function #5
};

struct IPendingConnet { // class IPendingConnet
    struct IPendingConnet_vftable *vftablePtr;
    struct IPendingConnet_data IPendingConnet_data;
};

typedef struct Address_vftable Address_vftable, *PAddress_vftable;

struct Address_vftable {
    undefined4 * (*vfunction1)(void *, byte); // Address virtual function #1
    bool (*vfunction2)(void *, char *, rsize_t); // Address virtual function #2
    uint (*vfunction3)(void *, undefined2 *); // Address virtual function #3
    uint (*vfunction4)(void *, undefined4 *); // Address virtual function #4
    undefined4 (*vfunction5)(void *, undefined4 *); // Address virtual function #5
    int (*vfunction6)(void *); // Address virtual function #6
    int (*vfunction7)(void *); // Address virtual function #7
};

typedef struct Address_data Address_data, *PAddress_data;

struct Address_data {
    undefined2 offset_0x0;
    undefined2 offset_0x2;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
};

typedef struct Address Address, *PAddress;

struct Address_data {
    undefined2 offset_0x0;
    undefined2 offset_0x2;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
};

struct Address { // class Address : IAddress
    struct Address_vftable *vftablePtr;
    struct Address_data Address_data;
};

typedef struct AsyncResultSend AsyncResultSend, *PAsyncResultSend;

typedef struct AsyncResultSend_vftable AsyncResultSend_vftable, *PAsyncResultSend_vftable;


// WARNING! conflicting data type names: /ClassDataTypes/_OVERLAPPED/_OVERLAPPED - /winbase.h/_OVERLAPPED

typedef struct AsyncResult_data AsyncResult_data, *PAsyncResult_data;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultSend_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultSend virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultSend virtual function #2
};

struct AsyncResultSend { // class AsyncResultSend : AsyncResult
    struct AsyncResultSend_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct IUDPListenerEx IUDPListenerEx, *PIUDPListenerEx;

typedef struct IUDPListenerEx_vftable IUDPListenerEx_vftable, *PIUDPListenerEx_vftable;

struct IUDPListenerEx { // class IUDPListenerEx
    struct IUDPListenerEx_vftable *vftablePtr;
};

struct IUDPListenerEx_vftable {
    int * (*vfunction1)(void *, byte); //  IUDPListenerEx pure virtual function #1
    void (*vfunction2)(void *, byte); //  IUDPListenerEx pure virtual function #2
    void (*vfunction3)(void *); //  IUDPListenerEx pure virtual function #3
    uint (*vfunction4)(void *); //  IUDPListenerEx pure virtual function #4
    undefined4 (*vfunction5)(void *, undefined2); //  IUDPListenerEx pure virtual function #5
    undefined2 (*vfunction6)(void *); //  IUDPListenerEx pure virtual function #6
    uint (*vfunction7)(void *, byte); //  IUDPListenerEx pure virtual function #7
    uint (*vfunction8)(void *, byte); //  IUDPListenerEx pure virtual function #8
    void (*vfunction9)(void *, int, short); //  IUDPListenerEx pure virtual function #9
    int (*vfunction10)(void *, struct _XMemory *, void *); //  IUDPListenerEx pure virtual function #10
    void (*vfunction11)(void *, struct _XMemory *); //  IUDPListenerEx pure virtual function #11
    undefined4 (*vfunction12)(void *, void *, uint); //  IUDPListenerEx pure virtual function #12
    int (*vfunction13)(void *, undefined4 *); //  IUDPListenerEx pure virtual function #13
    undefined4 (*vfunction14)(void *, int *, void *, int); //  IUDPListenerEx pure virtual function #14
    void (*vfunction15)(void *, undefined4, struct _XMemory *); //  IUDPListenerEx pure virtual function #15
    undefined4 (*vfunction16)(void *, int, void *, uint); //  IUDPListenerEx pure virtual function #16
    undefined4 (*vfunction17)(void *, int *, undefined4 *); //  IUDPListenerEx pure virtual function #17
    int (*vfunction18)(void *); //  IUDPListenerEx pure virtual function #18
    void (*vfunction19)(void *); //  IUDPListenerEx pure virtual function #19
    uint (*vfunction20)(void *, undefined4); //  IUDPListenerEx pure virtual function #20
    undefined4 * (*vfunction21)(void *); //  IUDPListenerEx pure virtual function #21
    uint (*vfunction22)(void *, undefined4); //  IUDPListenerEx pure virtual function #22
    undefined4 * (*vfunction23)(void *); //  IUDPListenerEx pure virtual function #23
    void (*vfunction24)(void *, undefined4 *, undefined4); //  IUDPListenerEx pure virtual function #24
    void (*vfunction25)(void *, undefined4 *, undefined4); //  IUDPListenerEx pure virtual function #25
};

typedef struct AsyncResultInterrupt AsyncResultInterrupt, *PAsyncResultInterrupt;

typedef struct AsyncResultInterrupt_vftable AsyncResultInterrupt_vftable, *PAsyncResultInterrupt_vftable;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultInterrupt_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultInterrupt virtual function #2
};

struct AsyncResultInterrupt { // class AsyncResultInterrupt : AsyncResult
    struct AsyncResultInterrupt_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AsyncResultTimeout_vftable AsyncResultTimeout_vftable, *PAsyncResultTimeout_vftable;

struct AsyncResultTimeout_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultTimeout virtual function #2
};

typedef struct AsyncResultTimeout AsyncResultTimeout, *PAsyncResultTimeout;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultTimeout { // class AsyncResultTimeout : AsyncResult
    struct AsyncResultTimeout_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct ILink_vftable ILink_vftable, *PILink_vftable;

struct ILink_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  ILink pure virtual function #1
    void (*vfunction2)(void *); //  ILink pure virtual function #2
    int (*vfunction3)(void *); //  ILink pure virtual function #3
    void (*vfunction4)(void *); //  ILink pure virtual function #4
    int (*vfunction5)(void *); //  ILink pure virtual function #5
    int (*vfunction6)(void *); //  ILink pure virtual function #6
    int (*vfunction7)(void *, struct _XMemory *, int); //  ILink pure virtual function #7
    void (*vfunction8)(void *, struct _XMemory *); //  ILink pure virtual function #8
    undefined4 (*vfunction9)(void *, void *, uint); //  ILink pure virtual function #9
    undefined4 (*vfunction10)(void *, void *); //  ILink pure virtual function #10
    void (*vfunction11)(void *, undefined4, undefined4 *, undefined4); //  ILink pure virtual function #11
    void (*vfunction12)(void *, undefined4); //  ILink pure virtual function #12
    undefined4 (*vfunction13)(void *); //  ILink pure virtual function #13
    void (*vfunction14)(void *, undefined4 *, undefined4); //  ILink pure virtual function #14
    void (*vfunction15)(void *, undefined4 *, undefined4); //  ILink pure virtual function #15
    void (*vfunction16)(void *, undefined4 *, undefined4); //  ILink pure virtual function #16
    int (*vfunction17)(void *); //  ILink pure virtual function #17
    void (*vfunction18)(void *); //  ILink pure virtual function #18
    undefined4 (*vfunction19)(void *); //  ILink pure virtual function #19
    uint (*vfunction20)(void *, undefined4); //  ILink pure virtual function #20
    undefined4 (*vfunction21)(void *); //  ILink pure virtual function #21
    uint (*vfunction22)(void *, undefined4); //  ILink pure virtual function #22
    undefined4 (*vfunction23)(void *); //  ILink pure virtual function #23
    uint (*vfunction24)(void *, char); //  ILink pure virtual function #24
    undefined1 (*vfunction25)(void *); //  ILink pure virtual function #25
    int (*vfunction26)(void *); //  ILink pure virtual function #26
    void (*vfunction27)(void *); //  ILink pure virtual function #27
    int (*vfunction28)(void *); //  ILink pure virtual function #28
    void (*vfunction29)(void *); //  ILink pure virtual function #29
};

typedef struct ILink ILink, *PILink;

struct ILink { // class ILink
    struct ILink_vftable *vftablePtr;
};

typedef struct PreActiveList_data PreActiveList_data, *PPreActiveList_data;

struct PreActiveList_data {
    struct ManualResetEvent *offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined4 offset_0x8;
};

typedef struct PreActiveList PreActiveList, *PPreActiveList;

typedef struct PreActiveList_vftable PreActiveList_vftable, *PPreActiveList_vftable;

struct PreActiveList_data {
    struct ManualResetEvent *offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined4 offset_0x8;
};

struct PreActiveList_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // PreActiveList virtual function #1
};

struct PreActiveList { // class PreActiveList
    struct PreActiveList_vftable *vftablePtr;
    struct PreActiveList_data PreActiveList_data;
};

typedef struct AsyncIOThread_AsyncEvent_vftable AsyncIOThread_AsyncEvent_vftable, *PAsyncIOThread_AsyncEvent_vftable;

struct AsyncIOThread_AsyncEvent_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // AsyncIOThread_AsyncEvent virtual function #1
    undefined1 (*vfunction2)(void *); // AsyncIOThread_AsyncEvent virtual function #2
    undefined1 (*vfunction3)(void *); // AsyncIOThread_AsyncEvent virtual function #3
    void (*vfunction4)(void *, int); // AsyncIOThread_AsyncEvent virtual function #4
    void (*vfunction5)(void *, int, int); // AsyncIOThread_AsyncEvent virtual function #5
    void (*vfunction6)(void *, int); // AsyncIOThread_AsyncEvent virtual function #6
    void (*vfunction7)(void *, int, int); // AsyncIOThread_AsyncEvent virtual function #7
};

typedef struct AsyncIOThread_AsyncEvent AsyncIOThread_AsyncEvent, *PAsyncIOThread_AsyncEvent;

typedef struct AsyncIOThread_AsyncEvent_data AsyncIOThread_AsyncEvent_data, *PAsyncIOThread_AsyncEvent_data;

struct AsyncIOThread_AsyncEvent_data {
    struct Thread *offset_0x0;
};

struct AsyncIOThread_AsyncEvent { // class AsyncIOThread_AsyncEvent : IAsyncIOThread
    struct AsyncIOThread_AsyncEvent_vftable *vftablePtr;
    struct AsyncIOThread_AsyncEvent_data AsyncIOThread_AsyncEvent_data;
};

typedef struct Impl Impl, *PImpl;

typedef struct Impl_vftable Impl_vftable, *PImpl_vftable;

typedef struct Impl_data Impl_data, *PImpl_data;

struct Impl_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    int offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined field9_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    undefined field17_0x20;
    undefined field18_0x21;
    undefined field19_0x22;
    undefined field20_0x23;
    undefined field21_0x24;
    undefined field22_0x25;
    undefined field23_0x26;
    undefined field24_0x27;
    undefined field25_0x28;
    undefined field26_0x29;
    undefined field27_0x2a;
    undefined field28_0x2b;
    undefined field29_0x2c;
    undefined field30_0x2d;
    undefined field31_0x2e;
    undefined field32_0x2f;
    undefined field33_0x30;
    undefined field34_0x31;
    undefined field35_0x32;
    undefined field36_0x33;
    undefined field37_0x34;
    undefined field38_0x35;
    undefined field39_0x36;
    undefined field40_0x37;
    undefined field41_0x38;
    undefined field42_0x39;
    undefined field43_0x3a;
    undefined field44_0x3b;
    undefined field45_0x3c;
    undefined field46_0x3d;
    undefined field47_0x3e;
    undefined field48_0x3f;
    undefined field49_0x40;
    undefined field50_0x41;
    undefined field51_0x42;
    undefined field52_0x43;
    undefined field53_0x44;
    undefined field54_0x45;
    undefined field55_0x46;
    undefined field56_0x47;
    undefined field57_0x48;
    undefined field58_0x49;
    undefined field59_0x4a;
    undefined field60_0x4b;
    undefined field61_0x4c;
    undefined field62_0x4d;
    undefined field63_0x4e;
    undefined field64_0x4f;
    undefined field65_0x50;
    undefined field66_0x51;
    undefined field67_0x52;
    undefined field68_0x53;
    undefined field69_0x54;
    undefined field70_0x55;
    undefined field71_0x56;
    undefined field72_0x57;
    undefined field73_0x58;
    undefined field74_0x59;
    undefined field75_0x5a;
    undefined field76_0x5b;
    undefined field77_0x5c;
    undefined field78_0x5d;
    undefined field79_0x5e;
    undefined field80_0x5f;
    undefined field81_0x60;
    undefined field82_0x61;
    undefined field83_0x62;
    undefined field84_0x63;
    undefined field85_0x64;
    undefined field86_0x65;
    undefined field87_0x66;
    undefined field88_0x67;
    undefined field89_0x68;
    undefined field90_0x69;
    undefined field91_0x6a;
    undefined field92_0x6b;
    undefined field93_0x6c;
    undefined field94_0x6d;
    undefined field95_0x6e;
    undefined field96_0x6f;
    undefined field97_0x70;
    undefined field98_0x71;
    undefined field99_0x72;
    undefined field100_0x73;
    undefined field101_0x74;
    undefined field102_0x75;
    undefined field103_0x76;
    undefined field104_0x77;
    undefined field105_0x78;
    undefined field106_0x79;
    undefined field107_0x7a;
    undefined field108_0x7b;
    undefined field109_0x7c;
    undefined field110_0x7d;
    undefined field111_0x7e;
    undefined field112_0x7f;
    undefined field113_0x80;
    undefined field114_0x81;
    undefined field115_0x82;
    undefined field116_0x83;
    undefined field117_0x84;
    undefined field118_0x85;
    undefined field119_0x86;
    undefined field120_0x87;
    undefined field121_0x88;
    undefined field122_0x89;
    undefined field123_0x8a;
    undefined field124_0x8b;
    undefined field125_0x8c;
    undefined field126_0x8d;
    undefined field127_0x8e;
    undefined field128_0x8f;
    undefined field129_0x90;
    undefined field130_0x91;
    undefined field131_0x92;
    undefined field132_0x93;
    undefined field133_0x94;
    undefined field134_0x95;
    undefined field135_0x96;
    undefined field136_0x97;
    undefined field137_0x98;
    undefined field138_0x99;
    undefined field139_0x9a;
    undefined field140_0x9b;
    undefined field141_0x9c;
    undefined field142_0x9d;
    undefined field143_0x9e;
    undefined field144_0x9f;
    undefined field145_0xa0;
    undefined field146_0xa1;
    undefined field147_0xa2;
    undefined field148_0xa3;
    undefined field149_0xa4;
    undefined field150_0xa5;
    undefined field151_0xa6;
    undefined field152_0xa7;
    undefined field153_0xa8;
    undefined field154_0xa9;
    undefined field155_0xaa;
    undefined field156_0xab;
    undefined field157_0xac;
    undefined field158_0xad;
    undefined field159_0xae;
    undefined field160_0xaf;
    undefined field161_0xb0;
    undefined field162_0xb1;
    undefined field163_0xb2;
    undefined field164_0xb3;
    undefined field165_0xb4;
    undefined field166_0xb5;
    undefined field167_0xb6;
    undefined field168_0xb7;
    undefined field169_0xb8;
    undefined field170_0xb9;
    undefined field171_0xba;
    undefined field172_0xbb;
    undefined field173_0xbc;
    undefined field174_0xbd;
    undefined field175_0xbe;
    undefined field176_0xbf;
    undefined field177_0xc0;
    undefined field178_0xc1;
    undefined field179_0xc2;
    undefined field180_0xc3;
    undefined field181_0xc4;
    undefined field182_0xc5;
    undefined field183_0xc6;
    undefined field184_0xc7;
    undefined field185_0xc8;
    undefined field186_0xc9;
    undefined field187_0xca;
    undefined field188_0xcb;
    undefined field189_0xcc;
    undefined field190_0xcd;
    undefined field191_0xce;
    undefined field192_0xcf;
    undefined field193_0xd0;
    undefined field194_0xd1;
    undefined field195_0xd2;
    undefined field196_0xd3;
    undefined field197_0xd4;
    undefined field198_0xd5;
    undefined field199_0xd6;
    undefined field200_0xd7;
    undefined field201_0xd8;
    undefined field202_0xd9;
    undefined field203_0xda;
    undefined field204_0xdb;
    undefined field205_0xdc;
    undefined field206_0xdd;
    undefined field207_0xde;
    undefined field208_0xdf;
    undefined field209_0xe0;
    undefined field210_0xe1;
    undefined field211_0xe2;
    undefined field212_0xe3;
    undefined field213_0xe4;
    undefined field214_0xe5;
    undefined field215_0xe6;
    undefined field216_0xe7;
    undefined field217_0xe8;
    undefined field218_0xe9;
    undefined field219_0xea;
    undefined field220_0xeb;
    undefined field221_0xec;
    undefined field222_0xed;
    undefined field223_0xee;
    undefined field224_0xef;
    undefined field225_0xf0;
    undefined field226_0xf1;
    undefined field227_0xf2;
    undefined field228_0xf3;
    undefined field229_0xf4;
    undefined field230_0xf5;
    undefined field231_0xf6;
    undefined field232_0xf7;
    undefined field233_0xf8;
    undefined field234_0xf9;
    undefined field235_0xfa;
    undefined field236_0xfb;
    undefined field237_0xfc;
    undefined field238_0xfd;
    undefined field239_0xfe;
    undefined field240_0xff;
    undefined field241_0x100;
    undefined field242_0x101;
    undefined field243_0x102;
    undefined field244_0x103;
    undefined field245_0x104;
    undefined field246_0x105;
    undefined field247_0x106;
    undefined field248_0x107;
    undefined field249_0x108;
    undefined field250_0x109;
    undefined field251_0x10a;
    undefined field252_0x10b;
    undefined field253_0x10c;
    undefined field254_0x10d;
    undefined field255_0x10e;
    undefined field256_0x10f;
    undefined field257_0x110;
    undefined field258_0x111;
    undefined field259_0x112;
    undefined field260_0x113;
    undefined4 offset_0x114;
    undefined4 offset_0x118;
    undefined4 offset_0x11c;
    undefined field264_0x120;
    undefined field265_0x121;
    undefined field266_0x122;
    undefined field267_0x123;
};

struct Impl_vftable {
    Thread * (*deleting_destructor)(void *, byte); // Impl virtual function #1
    void (*vfunction2)(void *); // Impl virtual function #2
};

struct Impl { // class Impl : Thread
    struct Impl_vftable *vftablePtr;
    struct Impl_data Impl_data;
};

typedef struct AsyncResultTimeoutEx_vftable AsyncResultTimeoutEx_vftable, *PAsyncResultTimeoutEx_vftable;

struct AsyncResultTimeoutEx_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultTimeoutEx virtual function #2
};

typedef struct AsyncResultTimeoutEx AsyncResultTimeoutEx, *PAsyncResultTimeoutEx;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultTimeoutEx { // class AsyncResultTimeoutEx : AsyncResult
    struct AsyncResultTimeoutEx_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AsyncResultUDPRecv_vftable AsyncResultUDPRecv_vftable, *PAsyncResultUDPRecv_vftable;

struct AsyncResultUDPRecv_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultUDPRecv virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultUDPRecv virtual function #2
};

typedef struct AsyncResultUDPRecv AsyncResultUDPRecv, *PAsyncResultUDPRecv;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultUDPRecv { // class AsyncResultUDPRecv : AsyncResultUDP
    struct AsyncResultUDPRecv_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AcceptorThread_vftable AcceptorThread_vftable, *PAcceptorThread_vftable;

struct AcceptorThread_vftable {
    Thread * (*deleting_destructor)(void *, byte); // AcceptorThread virtual function #1
    void (*vfunction2)(void *); // AcceptorThread virtual function #2
};

typedef struct AcceptorThread_data AcceptorThread_data, *PAcceptorThread_data;

struct Thread { // PlaceHolder Structure
};

struct AcceptorThread_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int offset_0x4;
    undefined4 *offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    struct Thread offset_0x10;
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
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined2 offset_0x28;
    struct Thread offset_0x2a;
    undefined field30_0x2b;
    undefined field31_0x2c;
    undefined field32_0x2d;
    undefined field33_0x2e;
    undefined field34_0x2f;
    int offset_0x30;
};

typedef struct AcceptorThread AcceptorThread, *PAcceptorThread;

struct AcceptorThread_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int offset_0x4;
    undefined4 *offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    struct Thread offset_0x10;
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
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined2 offset_0x28;
    struct Thread offset_0x2a;
    undefined field30_0x2b;
    undefined field31_0x2c;
    undefined field32_0x2d;
    undefined field33_0x2e;
    undefined field34_0x2f;
    int offset_0x30;
};

struct AcceptorThread { // class AcceptorThread : Thread
    struct AcceptorThread_vftable *vftablePtr;
    struct AcceptorThread_data AcceptorThread_data;
};

typedef struct AsyncResultUDPSendEx AsyncResultUDPSendEx, *PAsyncResultUDPSendEx;

typedef struct AsyncResultUDPSendEx_vftable AsyncResultUDPSendEx_vftable, *PAsyncResultUDPSendEx_vftable;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultUDPSendEx_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultUDPSendEx virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultUDPSendEx virtual function #2
};

struct AsyncResultUDPSendEx { // class AsyncResultUDPSendEx : AsyncResultUDP
    struct AsyncResultUDPSendEx_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct UDPListenerEx UDPListenerEx, *PUDPListenerEx;

typedef struct UDPListenerEx_vftable UDPListenerEx_vftable, *PUDPListenerEx_vftable;

typedef struct UDPListenerEx_data UDPListenerEx_data, *PUDPListenerEx_data;

struct UDPListenerEx_data {
    int offset_0x0;
    int *offset_0x4;
    int offset_0x8;
    undefined2 offset_0xc;
    undefined field4_0xe;
    undefined field5_0xf;
    undefined field6_0x10;
    undefined field7_0x11;
    undefined field8_0x12;
    undefined field9_0x13;
    struct AutoResetEvent *offset_0x14;
    undefined field11_0x18;
    undefined field12_0x19;
    undefined field13_0x1a;
    undefined field14_0x1b;
    undefined field15_0x1c;
    undefined field16_0x1d;
    undefined field17_0x1e;
    undefined field18_0x1f;
    undefined field19_0x20;
    undefined field20_0x21;
    undefined field21_0x22;
    undefined field22_0x23;
    undefined field23_0x24;
    undefined field24_0x25;
    undefined field25_0x26;
    undefined field26_0x27;
    undefined **offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined field33_0x40;
    undefined field34_0x41;
    undefined field35_0x42;
    undefined field36_0x43;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined4 offset_0x4c;
    undefined4 offset_0x50;
    undefined4 offset_0x54;
};

struct UDPListenerEx_vftable {
    int * (*deleting_destructor)(void *, byte); // UDPListenerEx virtual function #1
    void (*vfunction2)(void *, byte); // UDPListenerEx virtual function #2
    void (*vfunction3)(void *); // UDPListenerEx virtual function #3
    uint (*vfunction4)(void *); // UDPListenerEx virtual function #4
    undefined4 (*vfunction5)(void *, undefined2); // UDPListenerEx virtual function #5
    undefined2 (*vfunction6)(void *); // UDPListenerEx virtual function #6
    uint (*vfunction7)(void *, byte); // UDPListenerEx virtual function #7
    uint (*vfunction8)(void *, byte); // UDPListenerEx virtual function #8
    void (*vfunction9)(void *, int, short); // UDPListenerEx virtual function #9
    int (*vfunction10)(void *, struct _XMemory *, void *); // UDPListenerEx virtual function #10
    void (*vfunction11)(void *, struct _XMemory *); // UDPListenerEx virtual function #11
    undefined4 (*vfunction12)(void *, void *, uint); // UDPListenerEx virtual function #12
    int (*vfunction13)(void *, undefined4 *); // UDPListenerEx virtual function #13
    undefined4 (*vfunction14)(void *, int *, void *, int); // UDPListenerEx virtual function #14
    void (*vfunction15)(void *, undefined4, struct _XMemory *); // UDPListenerEx virtual function #15
    undefined4 (*vfunction16)(void *, int, void *, uint); // UDPListenerEx virtual function #16
    undefined4 (*vfunction17)(void *, int *, undefined4 *); // UDPListenerEx virtual function #17
    int (*vfunction18)(void *); // UDPListenerEx virtual function #18
    void (*vfunction19)(void *); // UDPListenerEx virtual function #19
    uint (*vfunction20)(void *, undefined4); // UDPListenerEx virtual function #20
    undefined4 * (*vfunction21)(void *); // UDPListenerEx virtual function #21
    uint (*vfunction22)(void *, undefined4); // UDPListenerEx virtual function #22
    undefined4 * (*vfunction23)(void *); // UDPListenerEx virtual function #23
    void (*vfunction24)(void *, undefined4 *, undefined4); // UDPListenerEx virtual function #24
    void (*vfunction25)(void *, undefined4 *, undefined4); // UDPListenerEx virtual function #25
    bool (*vfunction26)(void *); // UDPListenerEx virtual function #26
};

struct UDPListenerEx { // class UDPListenerEx : IUDPListenerEx
    struct UDPListenerEx_vftable *vftablePtr;
    struct UDPListenerEx_data UDPListenerEx_data;
};

typedef struct AsyncResultDisconnect AsyncResultDisconnect, *PAsyncResultDisconnect;

typedef struct AsyncResultDisconnect_vftable AsyncResultDisconnect_vftable, *PAsyncResultDisconnect_vftable;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultDisconnect_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultDisconnect virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultDisconnect virtual function #2
};

struct AsyncResultDisconnect { // class AsyncResultDisconnect : AsyncResult
    struct AsyncResultDisconnect_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AsyncResultConnect_vftable AsyncResultConnect_vftable, *PAsyncResultConnect_vftable;

struct AsyncResultConnect_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultConnect virtual function #2
};

typedef struct AsyncResultConnect AsyncResultConnect, *PAsyncResultConnect;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultConnect { // class AsyncResultConnect : AsyncResult
    struct AsyncResultConnect_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AsyncResultInterruptEx_vftable AsyncResultInterruptEx_vftable, *PAsyncResultInterruptEx_vftable;

struct AsyncResultInterruptEx_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultInterruptEx virtual function #2
};

typedef struct AsyncResultInterruptEx AsyncResultInterruptEx, *PAsyncResultInterruptEx;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultInterruptEx { // class AsyncResultInterruptEx : AsyncResult
    struct AsyncResultInterruptEx_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct IConnector_vftable IConnector_vftable, *PIConnector_vftable;

struct IConnector_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IConnector pure virtual function #1
    void (*vfunction2)(void *, undefined4 *, undefined4, int, int *, int, undefined4, char); //  IConnector pure virtual function #2
    void (*vfunction3)(void *, int, undefined4, int, int *); //  IConnector pure virtual function #3
    void (*vfunction4)(void *, int, undefined4, void *); //  IConnector pure virtual function #4
    void (*vfunction5)(void *, int, undefined4, undefined4, int *, int, undefined4, char); //  IConnector pure virtual function #5
    void (*vfunction6)(void *, int, undefined4, undefined4, int *); //  IConnector pure virtual function #6
    void (*vfunction7)(void *, undefined4 *, undefined4, int, int *, int, undefined4, char, undefined4 *); //  IConnector pure virtual function #7
    void (*vfunction8)(void *, int, undefined4, int, int *, undefined4 *); //  IConnector pure virtual function #8
    void (*vfunction9)(void *, int, undefined4, void *, undefined4 *); //  IConnector pure virtual function #9
    void (*vfunction10)(void *, int, undefined4, undefined4, int *, int, undefined4, char, void *); //  IConnector pure virtual function #10
    void (*vfunction11)(void *, int, undefined4, undefined4, int *, undefined4 *); //  IConnector pure virtual function #11
    int (*vfunction12)(void *); //  IConnector pure virtual function #12
    void (*vfunction13)(void *); //  IConnector pure virtual function #13
    void (*vfunction14)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #14
    void (*vfunction15)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #15
    void (*vfunction16)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #16
    void (*vfunction17)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #17
    void (*vfunction18)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #18
    void (*vfunction19)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #19
    void (*vfunction20)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #20
    void (*vfunction21)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #21
    void (*vfunction22)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #22
    void (*vfunction23)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #23
    void (*vfunction24)(void *, undefined4 *, undefined4); //  IConnector pure virtual function #24
};

typedef struct IConnector IConnector, *PIConnector;

struct IConnector_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    struct AutoResetEvent *offset_0x4;
    void *offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
};

struct IConnector { // class IConnector
    struct IConnector_vftable *vftablePtr;
    struct IConnector_data IConnector_data;
};

typedef struct AsyncResultRecv AsyncResultRecv, *PAsyncResultRecv;

typedef struct AsyncResultRecv_vftable AsyncResultRecv_vftable, *PAsyncResultRecv_vftable;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultRecv_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultRecv virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultRecv virtual function #2
};

struct AsyncResultRecv { // class AsyncResultRecv : AsyncResult
    struct AsyncResultRecv_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AsyncResultConnectEx_vftable AsyncResultConnectEx_vftable, *PAsyncResultConnectEx_vftable;

struct AsyncResultConnectEx_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultConnectEx virtual function #2
};

typedef struct AsyncResultConnectEx AsyncResultConnectEx, *PAsyncResultConnectEx;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultConnectEx { // class AsyncResultConnectEx : AsyncResult
    struct AsyncResultConnectEx_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct UDPListener_data UDPListener_data, *PUDPListener_data;

struct UDPListener_data {
    struct ManualResetEvent *offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};

typedef struct UDPListener_vftable UDPListener_vftable, *PUDPListener_vftable;

struct UDPListener_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // UDPListener virtual function #1
    void (*vfunction2)(void *, byte); // UDPListener virtual function #2
    void (*vfunction3)(void *); // UDPListener virtual function #3
    uint (*vfunction4)(void *); // UDPListener virtual function #4
    bool (*vfunction5)(void *); // UDPListener virtual function #5
    undefined4 (*vfunction6)(void *, undefined2); // UDPListener virtual function #6
    undefined2 (*vfunction7)(void *); // UDPListener virtual function #7
    uint (*vfunction8)(void *, byte); // UDPListener virtual function #8
    uint (*vfunction9)(void *, byte); // UDPListener virtual function #9
    undefined4 (*vfunction10)(void *, int *, void *, int); // UDPListener virtual function #10
    void (*vfunction11)(void *, undefined4, struct _XMemory *); // UDPListener virtual function #11
    undefined4 (*vfunction12)(void *, int, void *, uint); // UDPListener virtual function #12
    undefined4 (*vfunction13)(void *, uint); // UDPListener virtual function #13
    uint (*vfunction14)(void *, undefined4); // UDPListener virtual function #14
    undefined4 * (*vfunction15)(void *); // UDPListener virtual function #15
    uint (*vfunction16)(void *, undefined4); // UDPListener virtual function #16
    undefined4 * (*vfunction17)(void *); // UDPListener virtual function #17
    void (*vfunction18)(void *, undefined4 *, undefined4); // UDPListener virtual function #18
};

typedef struct UDPListener UDPListener, *PUDPListener;

typedef struct IUDPListener_data IUDPListener_data, *PIUDPListener_data;

struct IUDPListener_data {
    void *offset_0x0;
    void *offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    struct AutoResetEvent *offset_0x14;
    undefined4 offset_0x18;
};

struct UDPListener_data {
    struct ManualResetEvent *offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};

struct UDPListener { // class UDPListener : IUDPListener
    struct UDPListener_vftable *vftablePtr;
    struct IUDPListener_data IUDPListener_data;
    struct UDPListener_data UDPListener_data;
};

typedef struct IUDPListener_vftable IUDPListener_vftable, *PIUDPListener_vftable;

struct IUDPListener_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IUDPListener pure virtual function #1
    void (*vfunction2)(void *, byte); //  IUDPListener pure virtual function #2
    void (*vfunction3)(void *); //  IUDPListener pure virtual function #3
    uint (*vfunction4)(void *); //  IUDPListener pure virtual function #4
    bool (*vfunction5)(void *); //  IUDPListener pure virtual function #5
    undefined4 (*vfunction6)(void *, undefined2); //  IUDPListener pure virtual function #6
    undefined2 (*vfunction7)(void *); //  IUDPListener pure virtual function #7
    uint (*vfunction8)(void *, byte); //  IUDPListener pure virtual function #8
    uint (*vfunction9)(void *, byte); //  IUDPListener pure virtual function #9
    undefined4 (*vfunction10)(void *, int *, void *, int); //  IUDPListener pure virtual function #10
    void (*vfunction11)(void *, undefined4, struct _XMemory *); //  IUDPListener pure virtual function #11
    undefined4 (*vfunction12)(void *, int, void *, uint); //  IUDPListener pure virtual function #12
    undefined4 (*vfunction13)(void *, uint); //  IUDPListener pure virtual function #13
    uint (*vfunction14)(void *, undefined4); //  IUDPListener pure virtual function #14
    undefined4 * (*vfunction15)(void *); //  IUDPListener pure virtual function #15
    uint (*vfunction16)(void *, undefined4); //  IUDPListener pure virtual function #16
    undefined4 * (*vfunction17)(void *); //  IUDPListener pure virtual function #17
    void (*vfunction18)(void *, undefined4 *, undefined4); //  IUDPListener pure virtual function #18
};

typedef struct IUDPListener IUDPListener, *PIUDPListener;

struct IUDPListener_data {
    void *offset_0x0;
    void *offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    struct AutoResetEvent *offset_0x14;
    undefined4 offset_0x18;
};

struct IUDPListener { // class IUDPListener
    struct IUDPListener_vftable *vftablePtr;
    struct IUDPListener_data IUDPListener_data;
};

typedef struct Interrupter_vftable Interrupter_vftable, *PInterrupter_vftable;

struct Interrupter_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // Interrupter virtual function #1
    undefined4 (*vfunction2)(void *); // Interrupter virtual function #2
    void (*vfunction3)(void *); // Interrupter virtual function #3
    undefined4 (*vfunction4)(void *); // Interrupter virtual function #4
};

typedef struct Interrupter Interrupter, *PInterrupter;

typedef struct Interrupter_data Interrupter_data, *PInterrupter_data;

struct Interrupter_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
};

struct Interrupter { // class Interrupter : IInterrupter
    struct Interrupter_vftable *vftablePtr;
    struct Interrupter_data Interrupter_data;
};

typedef struct Acceptor Acceptor, *PAcceptor;

typedef struct Acceptor_vftable Acceptor_vftable, *PAcceptor_vftable;

typedef struct IAcceptor_data IAcceptor_data, *PIAcceptor_data;

typedef struct Acceptor_data Acceptor_data, *PAcceptor_data;

struct IAcceptor_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    struct AutoResetEvent *offset_0x4;
    void *offset_0x8;
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
    void *offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
};

struct Acceptor_data {
    undefined4 offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    undefined field7_0x10;
    undefined field8_0x11;
    undefined field9_0x12;
    undefined field10_0x13;
    undefined field11_0x14;
    undefined field12_0x15;
    undefined field13_0x16;
    undefined field14_0x17;
    struct ManualResetEvent *offset_0x18;
    undefined field16_0x1c;
    undefined field17_0x1d;
    undefined field18_0x1e;
    undefined field19_0x1f;
    undefined field20_0x20;
    undefined field21_0x21;
    undefined field22_0x22;
    undefined field23_0x23;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
};

struct Acceptor_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // Acceptor virtual function #1
    uint (*vfunction2)(void *); // Acceptor virtual function #2
    undefined4 (*vfunction3)(void *); // Acceptor virtual function #3
    uint (*vfunction4)(void *, undefined4, undefined4); // Acceptor virtual function #4
    undefined2 (*vfunction5)(void *); // Acceptor virtual function #5
    uint (*vfunction6)(void *, byte *, short, struct Thread); // Acceptor virtual function #6
    undefined1 (*vfunction7)(void *, byte *, short); // Acceptor virtual function #7
    void (*vfunction8)(void *); // Acceptor virtual function #8
    int (*vfunction9)(void *); // Acceptor virtual function #9
    void (*vfunction10)(void *); // Acceptor virtual function #10
    void (*vfunction11)(void *, undefined4 *, undefined4); // Acceptor virtual function #11
    void (*vfunction12)(void *, undefined4 *, undefined4); // Acceptor virtual function #12
    void (*vfunction13)(void *, undefined4 *, undefined4); // Acceptor virtual function #13
    void (*vfunction14)(void *, undefined4 *, undefined4); // Acceptor virtual function #14
};

struct Acceptor { // class Acceptor : IAcceptor
    struct Acceptor_vftable *vftablePtr;
    struct IAcceptor_data IAcceptor_data;
    struct Acceptor_data Acceptor_data;
};

typedef struct WSAInterrupter_vftable WSAInterrupter_vftable, *PWSAInterrupter_vftable;

struct WSAInterrupter_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // WSAInterrupter virtual function #1
    uint (*vfunction2)(void *); // WSAInterrupter virtual function #2
    bool (*vfunction3)(void *); // WSAInterrupter virtual function #3
    undefined4 (*vfunction4)(void *); // WSAInterrupter virtual function #4
    void (*vfunction5)(void *, int *); // WSAInterrupter virtual function #5
    undefined4 (*vfunction6)(void *); // WSAInterrupter virtual function #6
};

typedef struct WSAInterrupter WSAInterrupter, *PWSAInterrupter;

typedef struct WSAInterrupter_data WSAInterrupter_data, *PWSAInterrupter_data;

struct WSAInterrupter_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
};

struct WSAInterrupter { // class WSAInterrupter : IWSAInterrupter
    struct WSAInterrupter_vftable *vftablePtr;
    struct WSAInterrupter_data WSAInterrupter_data;
};

typedef struct AsyncResultUDP_vftable AsyncResultUDP_vftable, *PAsyncResultUDP_vftable;

struct AsyncResultUDP_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultUDP virtual function #1
    void (*vfunction2)(void *, int); //  AsyncResultUDP pure virtual function #2
};

typedef struct AsyncResultUDP AsyncResultUDP, *PAsyncResultUDP;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultUDP { // class AsyncResultUDP : AsyncResult
    struct AsyncResultUDP_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AsyncResultConnectError_vftable AsyncResultConnectError_vftable, *PAsyncResultConnectError_vftable;

struct AsyncResultConnectError_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultConnectError virtual function #2
};

typedef struct AsyncResultConnectError AsyncResultConnectError, *PAsyncResultConnectError;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultConnectError { // class AsyncResultConnectError : AsyncResult
    struct AsyncResultConnectError_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct IWSAInterrupter IWSAInterrupter, *PIWSAInterrupter;

typedef struct IWSAInterrupter_vftable IWSAInterrupter_vftable, *PIWSAInterrupter_vftable;

struct IWSAInterrupter { // class IWSAInterrupter
    struct IWSAInterrupter_vftable *vftablePtr;
};

struct IWSAInterrupter_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IWSAInterrupter pure virtual function #1
    uint (*vfunction2)(void *); //  IWSAInterrupter pure virtual function #2
    bool (*vfunction3)(void *); //  IWSAInterrupter pure virtual function #3
    undefined4 (*vfunction4)(void *); //  IWSAInterrupter pure virtual function #4
    void (*vfunction5)(void *, int *); //  IWSAInterrupter pure virtual function #5
    undefined4 (*vfunction6)(void *); //  IWSAInterrupter pure virtual function #6
};

typedef struct IAddress_vftable IAddress_vftable, *PIAddress_vftable;

struct IAddress_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IAddress pure virtual function #1
    bool (*vfunction2)(void *, char *, rsize_t); //  IAddress pure virtual function #2
    uint (*vfunction3)(void *, undefined2 *); //  IAddress pure virtual function #3
    uint (*vfunction4)(void *, undefined4 *); //  IAddress pure virtual function #4
    undefined4 (*vfunction5)(void *, undefined4 *); //  IAddress pure virtual function #5
    int (*vfunction6)(void *); //  IAddress pure virtual function #6
    int (*vfunction7)(void *); //  IAddress pure virtual function #7
};

typedef struct IAddress IAddress, *PIAddress;

struct IAddress { // class IAddress
    struct IAddress_vftable *vftablePtr;
};

typedef struct TCPLink TCPLink, *PTCPLink;

typedef struct TCPLink_vftable TCPLink_vftable, *PTCPLink_vftable;

typedef struct TCPLink_data TCPLink_data, *PTCPLink_data;

struct TCPLink_data {
    int offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined1 offset_0xc;
    undefined1 offset_0xd;
    undefined1 offset_0xe;
    undefined field6_0xf;
    undefined field7_0x10;
    undefined field8_0x11;
    undefined field9_0x12;
    undefined field10_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined field15_0x24;
    undefined field16_0x25;
    undefined field17_0x26;
    undefined field18_0x27;
    int offset_0x28;
    undefined4 offset_0x2c;
    undefined field21_0x30;
    undefined field22_0x31;
    undefined field23_0x32;
    undefined field24_0x33;
    undefined field25_0x34;
    undefined field26_0x35;
    undefined field27_0x36;
    undefined field28_0x37;
    int offset_0x38;
    undefined **offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined4 offset_0x4c;
    undefined **offset_0x50;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined field41_0x68;
    undefined field42_0x69;
    undefined field43_0x6a;
    undefined field44_0x6b;
    undefined field45_0x6c;
    undefined field46_0x6d;
    undefined field47_0x6e;
    undefined field48_0x6f;
    undefined field49_0x70;
    undefined field50_0x71;
    undefined field51_0x72;
    undefined field52_0x73;
    undefined field53_0x74;
    undefined field54_0x75;
    undefined field55_0x76;
    undefined field56_0x77;
    undefined field57_0x78;
    undefined field58_0x79;
    undefined field59_0x7a;
    undefined field60_0x7b;
    undefined4 offset_0x7c;
    undefined field62_0x80;
    undefined field63_0x81;
    undefined field64_0x82;
    undefined field65_0x83;
    undefined4 offset_0x84;
    undefined field67_0x88;
    undefined field68_0x89;
    undefined field69_0x8a;
    undefined field70_0x8b;
    undefined field71_0x8c;
    undefined field72_0x8d;
    undefined field73_0x8e;
    undefined field74_0x8f;
    undefined field75_0x90;
    undefined field76_0x91;
    undefined field77_0x92;
    undefined field78_0x93;
    undefined field79_0x94;
    undefined field80_0x95;
    undefined field81_0x96;
    undefined field82_0x97;
    undefined field83_0x98;
    undefined field84_0x99;
    undefined field85_0x9a;
    undefined field86_0x9b;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
    undefined4 offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined field96_0xc0;
    undefined field97_0xc1;
    undefined field98_0xc2;
    undefined field99_0xc3;
    undefined field100_0xc4;
    undefined field101_0xc5;
    undefined field102_0xc6;
    undefined field103_0xc7;
    undefined field104_0xc8;
    undefined field105_0xc9;
    undefined field106_0xca;
    undefined field107_0xcb;
    undefined field108_0xcc;
    undefined field109_0xcd;
    undefined field110_0xce;
    undefined field111_0xcf;
    undefined4 offset_0xd0;
    undefined field113_0xd4;
    undefined field114_0xd5;
    undefined field115_0xd6;
    undefined field116_0xd7;
    undefined field117_0xd8;
    undefined field118_0xd9;
    undefined field119_0xda;
    undefined field120_0xdb;
    undefined field121_0xdc;
    undefined field122_0xdd;
    undefined field123_0xde;
    undefined field124_0xdf;
    undefined field125_0xe0;
    undefined field126_0xe1;
    undefined field127_0xe2;
    undefined field128_0xe3;
    undefined4 offset_0xe4;
};

struct TCPLink_vftable {
    undefined4 * (*vfunction1)(void *, byte); // TCPLink virtual function #1
    void (*vfunction2)(void *); // TCPLink virtual function #2
    int (*vfunction3)(void *); // TCPLink virtual function #3
    void (*vfunction4)(void *); // TCPLink virtual function #4
    int (*vfunction5)(void *); // TCPLink virtual function #5
    int (*vfunction6)(void *); // TCPLink virtual function #6
    int (*vfunction7)(void *, struct _XMemory *, int); // TCPLink virtual function #7
    void (*vfunction8)(void *, struct _XMemory *); // TCPLink virtual function #8
    undefined4 (*vfunction9)(void *, void *, uint); // TCPLink virtual function #9
    undefined4 (*vfunction10)(void *, void *); // TCPLink virtual function #10
    void (*vfunction11)(void *, undefined4, undefined4 *, undefined4); // TCPLink virtual function #11
    void (*vfunction12)(void *, undefined4); // TCPLink virtual function #12
    undefined4 (*vfunction13)(void *); // TCPLink virtual function #13
    void (*vfunction14)(void *, undefined4 *, undefined4); // TCPLink virtual function #14
    void (*vfunction15)(void *, undefined4 *, undefined4); // TCPLink virtual function #15
    void (*vfunction16)(void *, undefined4 *, undefined4); // TCPLink virtual function #16
    int (*vfunction17)(void *); // TCPLink virtual function #17
    void (*vfunction18)(void *); // TCPLink virtual function #18
    undefined4 (*vfunction19)(void *); // TCPLink virtual function #19
    uint (*vfunction20)(void *, undefined4); // TCPLink virtual function #20
    undefined4 (*vfunction21)(void *); // TCPLink virtual function #21
    uint (*vfunction22)(void *, undefined4); // TCPLink virtual function #22
    undefined4 (*vfunction23)(void *); // TCPLink virtual function #23
    uint (*vfunction24)(void *, char); // TCPLink virtual function #24
    undefined1 (*vfunction25)(void *); // TCPLink virtual function #25
    int (*vfunction26)(void *); // TCPLink virtual function #26
    void (*vfunction27)(void *); // TCPLink virtual function #27
    int (*vfunction28)(void *); // TCPLink virtual function #28
    void (*vfunction29)(void *); // TCPLink virtual function #29
};

struct TCPLink { // class TCPLink : ILink
    struct TCPLink_vftable *vftablePtr;
    struct TCPLink_data TCPLink_data;
};

typedef struct AsyncConnectThread AsyncConnectThread, *PAsyncConnectThread;

typedef struct AsyncConnectThread_vftable AsyncConnectThread_vftable, *PAsyncConnectThread_vftable;

typedef struct AsyncConnectThread_data AsyncConnectThread_data, *PAsyncConnectThread_data;

struct AsyncConnectThread_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined field11_0x14;
    undefined field12_0x15;
    undefined field13_0x16;
    undefined field14_0x17;
    undefined field15_0x18;
    undefined field16_0x19;
    undefined field17_0x1a;
    undefined field18_0x1b;
    undefined field19_0x1c;
    undefined field20_0x1d;
    undefined field21_0x1e;
    undefined field22_0x1f;
    int *offset_0x20;
    int offset_0x24;
    undefined field25_0x28;
    undefined field26_0x29;
    undefined field27_0x2a;
    undefined field28_0x2b;
    int *offset_0x2c;
    int offset_0x30;
};

struct AsyncConnectThread_vftable {
    Thread * (*vfunction1)(void *, byte); // AsyncConnectThread virtual function #1
    void (*vfunction2)(void *); // AsyncConnectThread virtual function #2
};

struct AsyncConnectThread { // class AsyncConnectThread : Thread
    struct AsyncConnectThread_vftable *vftablePtr;
    struct AsyncConnectThread_data AsyncConnectThread_data;
};

typedef struct AsyncIOThread_IOCP AsyncIOThread_IOCP, *PAsyncIOThread_IOCP;

typedef struct AsyncIOThread_IOCP_vftable AsyncIOThread_IOCP_vftable, *PAsyncIOThread_IOCP_vftable;

typedef struct AsyncIOThread_IOCP_data AsyncIOThread_IOCP_data, *PAsyncIOThread_IOCP_data;

struct AsyncIOThread_IOCP_data {
    int offset_0x0;
    void *offset_0x4;
};

struct AsyncIOThread_IOCP_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // AsyncIOThread_IOCP virtual function #1
    undefined1 (*vfunction2)(void *); // AsyncIOThread_IOCP virtual function #2
    undefined1 (*vfunction3)(void *); // AsyncIOThread_IOCP virtual function #3
    void (*vfunction4)(void *, int); // AsyncIOThread_IOCP virtual function #4
    void (*vfunction5)(void *, int, int); // AsyncIOThread_IOCP virtual function #5
    void (*vfunction6)(void *, int); // AsyncIOThread_IOCP virtual function #6
    void (*vfunction7)(void *, int, int); // AsyncIOThread_IOCP virtual function #7
};

struct AsyncIOThread_IOCP { // class AsyncIOThread_IOCP : IAsyncIOThread
    struct AsyncIOThread_IOCP_vftable *vftablePtr;
    struct AsyncIOThread_IOCP_data AsyncIOThread_IOCP_data;
};

typedef struct AsyncResultUDPSend AsyncResultUDPSend, *PAsyncResultUDPSend;

typedef struct AsyncResultUDPSend_vftable AsyncResultUDPSend_vftable, *PAsyncResultUDPSend_vftable;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultUDPSend_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultUDPSend virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultUDPSend virtual function #2
};

struct AsyncResultUDPSend { // class AsyncResultUDPSend : AsyncResultUDP
    struct AsyncResultUDPSend_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct IAsyncIOThread_vftable IAsyncIOThread_vftable, *PIAsyncIOThread_vftable;

struct IAsyncIOThread_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IAsyncIOThread pure virtual function #1
    undefined1 (*vfunction2)(void *); //  IAsyncIOThread pure virtual function #2
    undefined1 (*vfunction3)(void *); //  IAsyncIOThread pure virtual function #3
    void (*vfunction4)(void *, int); //  IAsyncIOThread pure virtual function #4
    void (*vfunction5)(void *, int, int); //  IAsyncIOThread pure virtual function #5
    void (*vfunction6)(void *, int); //  IAsyncIOThread pure virtual function #6
    void (*vfunction7)(void *, int, int); //  IAsyncIOThread pure virtual function #7
};

typedef struct IAsyncIOThread IAsyncIOThread, *PIAsyncIOThread;

struct IAsyncIOThread { // class IAsyncIOThread
    struct IAsyncIOThread_vftable *vftablePtr;
};

typedef struct IFilter_vftable IFilter_vftable, *PIFilter_vftable;

struct IFilter_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IFilter pure virtual function #1
    undefined4 (*vfunction2)(void *); //  IFilter pure virtual function #2
    void (*vfunction3)(void *); //  IFilter pure virtual function #3
    void (*vfunction4)(void *, char *); //  IFilter pure virtual function #4
    void (*vfunction5)(void *, char *, rsize_t); //  IFilter pure virtual function #5
    void (*vfunction6)(void *); //  IFilter pure virtual function #6
    int (*vfunction7)(void *); //  IFilter pure virtual function #7
};

typedef struct IFilter IFilter, *PIFilter;

struct IFilter { // class IFilter
    struct IFilter_vftable *vftablePtr;
};

typedef struct Filter_vftable Filter_vftable, *PFilter_vftable;

struct Filter_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // Filter virtual function #1
    undefined4 (*vfunction2)(void *); // Filter virtual function #2
    void (*vfunction3)(void *); // Filter virtual function #3
    void (*vfunction4)(void *, char *); // Filter virtual function #4
    void (*vfunction5)(void *, char *, rsize_t); // Filter virtual function #5
    void (*vfunction6)(void *); // Filter virtual function #6
    int (*vfunction7)(void *); // Filter virtual function #7
};

typedef struct Filter Filter, *PFilter;

typedef struct Filter_data Filter_data, *PFilter_data;

struct Filter_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined1 offset_0x10;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
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
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined1 offset_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    undefined field27_0x30;
    undefined field28_0x31;
    undefined field29_0x32;
    undefined field30_0x33;
    undefined field31_0x34;
    undefined field32_0x35;
    undefined field33_0x36;
    undefined field34_0x37;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
};

struct Filter { // class Filter : IFilter
    struct Filter_vftable *vftablePtr;
    struct Filter_data Filter_data;
};

typedef struct IAcceptor_vftable IAcceptor_vftable, *PIAcceptor_vftable;

struct IAcceptor_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IAcceptor pure virtual function #1
    uint (*vfunction2)(void *); //  IAcceptor pure virtual function #2
    undefined4 (*vfunction3)(void *); //  IAcceptor pure virtual function #3
    uint (*vfunction4)(void *, undefined4, undefined4); //  IAcceptor pure virtual function #4
    undefined2 (*vfunction5)(void *); //  IAcceptor pure virtual function #5
    uint (*vfunction6)(void *, byte *, short, struct Thread); //  IAcceptor pure virtual function #6
    undefined1 (*vfunction7)(void *, byte *, short); //  IAcceptor pure virtual function #7
    void (*vfunction8)(void *); //  IAcceptor pure virtual function #8
    int (*vfunction9)(void *); //  IAcceptor pure virtual function #9
    void (*vfunction10)(void *); //  IAcceptor pure virtual function #10
    void (*vfunction11)(void *, undefined4 *, undefined4); //  IAcceptor pure virtual function #11
    void (*vfunction12)(void *, undefined4 *, undefined4); //  IAcceptor pure virtual function #12
    void (*vfunction13)(void *, undefined4 *, undefined4); //  IAcceptor pure virtual function #13
    void (*vfunction14)(void *, undefined4 *, undefined4); //  IAcceptor pure virtual function #14
};

typedef struct IAcceptor IAcceptor, *PIAcceptor;

struct IAcceptor_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    struct AutoResetEvent *offset_0x4;
    void *offset_0x8;
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
    void *offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
};

struct IAcceptor { // class IAcceptor
    struct IAcceptor_vftable *vftablePtr;
    struct IAcceptor_data IAcceptor_data;
};

typedef struct AsyncResultUDPRecvEx AsyncResultUDPRecvEx, *PAsyncResultUDPRecvEx;

typedef struct AsyncResultUDPRecvEx_vftable AsyncResultUDPRecvEx_vftable, *PAsyncResultUDPRecvEx_vftable;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultUDPRecvEx_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultUDPRecvEx virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultUDPRecvEx virtual function #2
};

struct AsyncResultUDPRecvEx { // class AsyncResultUDPRecvEx : AsyncResultUDP
    struct AsyncResultUDPRecvEx_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AsyncResultUDPICMPPortUnreachable AsyncResultUDPICMPPortUnreachable, *PAsyncResultUDPICMPPortUnreachable;

typedef struct AsyncResultUDPICMPPortUnreachable_vftable AsyncResultUDPICMPPortUnreachable_vftable, *PAsyncResultUDPICMPPortUnreachable_vftable;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultUDPICMPPortUnreachable_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResultUDPICMPPortUnreachable virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultUDPICMPPortUnreachable virtual function #2
};

struct AsyncResultUDPICMPPortUnreachable { // class AsyncResultUDPICMPPortUnreachable : AsyncResult
    struct AsyncResultUDPICMPPortUnreachable_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct IInterrupter_vftable IInterrupter_vftable, *PIInterrupter_vftable;

struct IInterrupter_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IInterrupter pure virtual function #1
    undefined4 (*vfunction2)(void *); //  IInterrupter pure virtual function #2
    void (*vfunction3)(void *); //  IInterrupter pure virtual function #3
    undefined4 (*vfunction4)(void *); //  IInterrupter pure virtual function #4
};

typedef struct IInterrupter IInterrupter, *PIInterrupter;

struct IInterrupter { // class IInterrupter
    struct IInterrupter_vftable *vftablePtr;
};

typedef struct AsyncResult_vftable AsyncResult_vftable, *PAsyncResult_vftable;

struct AsyncResult_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*__purecall)(void *); //  AsyncResult pure virtual function #2
};

typedef struct AsyncResult AsyncResult, *PAsyncResult;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResult { // class AsyncResult : _OVERLAPPED
    struct AsyncResult_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct AsyncResultConnectErrorEx_vftable AsyncResultConnectErrorEx_vftable, *PAsyncResultConnectErrorEx_vftable;

struct AsyncResultConnectErrorEx_vftable {
    undefined4 * (*vfunction1)(void *, byte); // AsyncResult virtual function #1
    void (*vfunction2)(void *, int); // AsyncResultConnectErrorEx virtual function #2
};

typedef struct AsyncResultConnectErrorEx AsyncResultConnectErrorEx, *PAsyncResultConnectErrorEx;

struct _OVERLAPPED { // class _OVERLAPPED
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AsyncResult_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    void *offset_0x10;
    undefined **offset_0x14;
    undefined **offset_0x18;
    int offset_0x1c;
    int *offset_0x20;
    int offset_0x24;
    undefined4 offset_0x28;
    int offset_0x2c;
    undefined4 *offset_0x30;
    int offset_0x34;
    int offset_0x38;
    undefined4 offset_0x3c;
};

struct AsyncResultConnectErrorEx { // class AsyncResultConnectErrorEx : AsyncResult
    struct AsyncResultConnectErrorEx_vftable *vftablePtr;
    struct _OVERLAPPED _OVERLAPPED;
    struct AsyncResult_data AsyncResult_data;
};

typedef struct XEventA_vftable XEventA_vftable, *PXEventA_vftable;

struct XEventA_vftable {
    XEventA * (*deleting_destructor)(void *, byte); // XEventA virtual function #1
    void (*Close)(void *); // XWaitableObject virtual function #2
    void (*Attach)(void *, void *); // XWaitableObject virtual function #3
    void * (*Detach)(void *); // XWaitableObject virtual function #4
};

typedef struct XEventA XEventA, *PXEventA;

struct XSyncObject { // class XSyncObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct XEventA { // class XEventA : XWaitableObject : XSyncObject
    struct XEventA_vftable *vftablePtr;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct XSyncObject XSyncObject;
};

typedef struct IXInLink IXInLink, *PIXInLink;

typedef struct IXInLink_vftable IXInLink_vftable, *PIXInLink_vftable;

struct IXInLink { // class IXInLink
    struct IXInLink_vftable *vftablePtr;
};

struct IXInLink_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IXInLink pure virtual function #1
    void (*vfunction2)(void *); //  IXInLink pure virtual function #2
    LONG (*vfunction3)(void *); //  IXInLink pure virtual function #3
    void (*vfunction4)(void *); //  IXInLink pure virtual function #4
    void (*vfunction5)(void *); //  IXInLink pure virtual function #5
    void (*vfunction6)(void *); //  IXInLink pure virtual function #6
    void (*vfunction7)(void *); //  IXInLink pure virtual function #7
    void (*vfunction8)(void *); //  IXInLink pure virtual function #8
    void (*vfunction9)(void *); //  IXInLink pure virtual function #9
    void (*vfunction10)(void *); //  IXInLink pure virtual function #10
    void (*vfunction11)(void *); //  IXInLink pure virtual function #11
    void (*vfunction12)(void *); //  IXInLink pure virtual function #12
    void (*vfunction13)(void *); //  IXInLink pure virtual function #13
    void (*vfunction14)(void *); //  IXInLink pure virtual function #14
    void (*vfunction15)(void *); //  IXInLink pure virtual function #15
    void (*vfunction16)(void *); //  IXInLink pure virtual function #16
    void (*vfunction17)(void *); //  IXInLink pure virtual function #17
    void (*vfunction18)(void *); //  IXInLink pure virtual function #18
    void (*vfunction19)(void *); //  IXInLink pure virtual function #19
};

typedef struct IXInAsyncIOEngine IXInAsyncIOEngine, *PIXInAsyncIOEngine;

typedef struct IXInAsyncIOEngine_vftable IXInAsyncIOEngine_vftable, *PIXInAsyncIOEngine_vftable;

struct IXInAsyncIOEngine { // class IXInAsyncIOEngine
    struct IXInAsyncIOEngine_vftable *vftablePtr;
};

struct IXInAsyncIOEngine_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IXInAsyncIOEngine pure virtual function #1
    undefined1 (*vfunction2)(void *); //  IXInAsyncIOEngine pure virtual function #2
    undefined1 (*vfunction3)(void *); //  IXInAsyncIOEngine pure virtual function #3
};

typedef struct XInAcceptorThread XInAcceptorThread, *PXInAcceptorThread;

typedef struct XInAcceptorThread_vftable XInAcceptorThread_vftable, *PXInAcceptorThread_vftable;

typedef struct XInAcceptorThread_data XInAcceptorThread_data, *PXInAcceptorThread_data;

typedef struct XThread XThread, *PXThread;

struct XInAcceptorThread_vftable {
    XThread * (*deleting_destructor)(void *, byte); // XInAcceptorThread virtual function #1
    void (*vfunction2)(void *); // XInAcceptorThread virtual function #2
};

struct XThread { // PlaceHolder Structure
};

struct XInAcceptorThread_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    void *offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    struct XThread offset_0x10;
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
    undefined4 offset_0x20;
    uint offset_0x24;
    undefined2 offset_0x28;
    undefined field29_0x2a;
    undefined field30_0x2b;
};

struct XInAcceptorThread { // class XInAcceptorThread : XThread
    struct XInAcceptorThread_vftable *vftablePtr;
    struct XInAcceptorThread_data XInAcceptorThread_data;
};

typedef struct XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_> XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>, *PXThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>;

typedef struct XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_vftable XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_vftable, *PXThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_vftable;

typedef struct XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_data XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_data, *PXThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_data;

struct XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
};

struct XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XThreadSafeObject<std::list<IXInLink*...> virtual function #1
};

struct XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_> { // class XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>
    struct XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_vftable *vftablePtr;
    struct XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_data XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>_data;
};

typedef struct XInAsyncIOEngineNT_vftable XInAsyncIOEngineNT_vftable, *PXInAsyncIOEngineNT_vftable;

struct XInAsyncIOEngineNT_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XInAsyncIOEngineNT virtual function #1
    undefined1 (*vfunction2)(void *); // XInAsyncIOEngineNT virtual function #2
    undefined1 (*vfunction2)(void *); // XInAsyncIOEngineNT virtual function #3
};

typedef struct XInAsyncIOEngineNT XInAsyncIOEngineNT, *PXInAsyncIOEngineNT;

struct XInAsyncIOEngineNT { // class XInAsyncIOEngineNT : IXInAsyncIOEngine
    struct XInAsyncIOEngineNT_vftable *vftablePtr;
};

typedef struct XObjectPool<XInTCPLink>_data XObjectPool<XInTCPLink>_data, *PXObjectPool<XInTCPLink>_data;

struct XObjectPool<XInTCPLink>_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void *offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

typedef struct XObjectPool<XInTCPLink>_vftable XObjectPool<XInTCPLink>_vftable, *PXObjectPool<XInTCPLink>_vftable;

struct XObjectPool<XInTCPLink>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XObjectPool<XInTCPLink> virtual function #1
};

typedef struct XObjectPool<XInTCPLink> XObjectPool<XInTCPLink>, *PXObjectPool<XInTCPLink>;

struct XObjectPool<XInTCPLink>_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void *offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

struct XObjectPool<XInTCPLink> { // class XObjectPool<XInTCPLink>
    struct XObjectPool<XInTCPLink>_vftable *vftablePtr;
    struct XObjectPool<XInTCPLink>_data XObjectPool<XInTCPLink>_data;
};

typedef struct XThreadSafeObject<XMemoryStream>_vftable XThreadSafeObject<XMemoryStream>_vftable, *PXThreadSafeObject<XMemoryStream>_vftable;

struct XThreadSafeObject<XMemoryStream>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XThreadSafeObject<XMemoryStream> virtual function #1
};

typedef struct XThreadSafeObject<XMemoryStream>_data XThreadSafeObject<XMemoryStream>_data, *PXThreadSafeObject<XMemoryStream>_data;

struct XThreadSafeObject<XMemoryStream>_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct XThreadSafeObject<XMemoryStream> XThreadSafeObject<XMemoryStream>, *PXThreadSafeObject<XMemoryStream>;

struct XThreadSafeObject<XMemoryStream>_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

struct XThreadSafeObject<XMemoryStream> { // class XThreadSafeObject<XMemoryStream>
    struct XThreadSafeObject<XMemoryStream>_vftable *vftablePtr;
    struct XThreadSafeObject<XMemoryStream>_data XThreadSafeObject<XMemoryStream>_data;
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

typedef struct XInUDPListener XInUDPListener, *PXInUDPListener;

typedef struct XInUDPListener_vftable XInUDPListener_vftable, *PXInUDPListener_vftable;

typedef struct XInUDPListener_data XInUDPListener_data, *PXInUDPListener_data;

struct XInUDPListener_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined2 offset_0x8;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};

struct XInUDPListener_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XInUDPListener virtual function #1
    void (*vfunction2)(void *); // XInUDPListener virtual function #2
};

struct XInUDPListener { // class XInUDPListener : IXInUDPListener
    struct XInUDPListener_vftable *vftablePtr;
    struct XInUDPListener_data XInUDPListener_data;
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

typedef struct XObjectPool<XInAsyncResultTCP>_vftable XObjectPool<XInAsyncResultTCP>_vftable, *PXObjectPool<XInAsyncResultTCP>_vftable;

struct XObjectPool<XInAsyncResultTCP>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XObjectPool<XInAsyncResultTCP> virtual function #1
};

typedef struct XObjectPool<XInAsyncResultTCP> XObjectPool<XInAsyncResultTCP>, *PXObjectPool<XInAsyncResultTCP>;

typedef struct XObjectPool<XInAsyncResultTCP>_data XObjectPool<XInAsyncResultTCP>_data, *PXObjectPool<XInAsyncResultTCP>_data;

struct XObjectPool<XInAsyncResultTCP>_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void *offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

struct XObjectPool<XInAsyncResultTCP> { // class XObjectPool<XInAsyncResultTCP>
    struct XObjectPool<XInAsyncResultTCP>_vftable *vftablePtr;
    struct XObjectPool<XInAsyncResultTCP>_data XObjectPool<XInAsyncResultTCP>_data;
};

typedef struct XObjectPool<XInPeer> XObjectPool<XInPeer>, *PXObjectPool<XInPeer>;

typedef struct XObjectPool<XInPeer>_vftable XObjectPool<XInPeer>_vftable, *PXObjectPool<XInPeer>_vftable;

typedef struct XObjectPool<XInPeer>_data XObjectPool<XInPeer>_data, *PXObjectPool<XInPeer>_data;

struct XObjectPool<XInPeer>_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void *offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

struct XObjectPool<XInPeer>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XObjectPool<XInPeer> virtual function #1
};

struct XObjectPool<XInPeer> { // class XObjectPool<XInPeer>
    struct XObjectPool<XInPeer>_vftable *vftablePtr;
    struct XObjectPool<XInPeer>_data XObjectPool<XInPeer>_data;
};

typedef struct IXInConnector_vftable IXInConnector_vftable, *PIXInConnector_vftable;

struct IXInConnector_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IXInConnector pure virtual function #1
    void (*vfunction2)(void *, undefined4); //  IXInConnector pure virtual function #2
    uint (*vfunction3)(void *, undefined4, undefined4); //  IXInConnector pure virtual function #3
    uint (*vfunction4)(void *); //  IXInConnector pure virtual function #4
    bool (*vfunction5)(void *); //  IXInConnector pure virtual function #5
    void (*vfunction6)(void *); //  IXInConnector pure virtual function #6
    void (*vfunction7)(void *); //  IXInConnector pure virtual function #7
    void (*vfunction8)(void *, undefined4); //  IXInConnector pure virtual function #8
    void (*vfunction9)(void *, undefined4, undefined4); //  IXInConnector pure virtual function #9
    void (*vfunction10)(void *, undefined4); //  IXInConnector pure virtual function #10
    void (*vfunction11)(void *); //  IXInConnector pure virtual function #11
    void (*vfunction12)(void *); //  IXInConnector pure virtual function #12
    void (*vfunction13)(void *, undefined4); //  IXInConnector pure virtual function #13
    undefined4 (*vfunction14)(void *); //  IXInConnector pure virtual function #14
    void (*vfunction15)(void *, undefined4 *, undefined4); //  IXInConnector pure virtual function #15
    void (*vfunction16)(void *, undefined4 *, undefined4); //  IXInConnector pure virtual function #16
    void (*vfunction17)(void *, undefined4 *, undefined4); //  IXInConnector pure virtual function #17
    void (*vfunction18)(void *, undefined4 *, undefined4); //  IXInConnector pure virtual function #18
    void (*vfunction19)(void *, undefined4); //  IXInConnector pure virtual function #19
    void (*vfunction20)(void *); //  IXInConnector pure virtual function #20
    void (*vfunction21)(void *, undefined4); //  IXInConnector pure virtual function #21
    void (*vfunction22)(void *); //  IXInConnector pure virtual function #22
    void (*vfunction23)(void *, undefined4); //  IXInConnector pure virtual function #23
    void (*vfunction24)(void *); //  IXInConnector pure virtual function #24
};

typedef struct IXInConnector IXInConnector, *PIXInConnector;

struct IXInConnector { // class IXInConnector
    struct IXInConnector_vftable *vftablePtr;
};


// WARNING! conflicting data type names: /ClassDataTypes/XThread/XThread - /Demangler/XThread

typedef struct IXInPeer IXInPeer, *PIXInPeer;

typedef struct IXInPeer_vftable IXInPeer_vftable, *PIXInPeer_vftable;

struct IXInPeer { // class IXInPeer
    struct IXInPeer_vftable *vftablePtr;
};

struct IXInPeer_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IXInPeer pure virtual function #1
    void (*vfunction2)(void *, undefined4, undefined2, undefined2); //  IXInPeer pure virtual function #2
    void (*vfunction3)(void *, undefined4); //  IXInPeer pure virtual function #3
    void (*vfunction4)(void *, undefined4 *); //  IXInPeer pure virtual function #4
    int (*vfunction5)(void *); //  IXInPeer pure virtual function #5
    int (*vfunction6)(void *); //  IXInPeer pure virtual function #6
};

typedef struct IXInUDPListener_vftable IXInUDPListener_vftable, *PIXInUDPListener_vftable;

struct IXInUDPListener_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IXInUDPListener pure virtual function #1
    void (*vfunction2)(void *); //  IXInUDPListener pure virtual function #2
    void (*vfunction3)(void *); //  IXInUDPListener pure virtual function #3
    void (*vfunction4)(void *); //  IXInUDPListener pure virtual function #4
    void (*vfunction5)(void *); //  IXInUDPListener pure virtual function #5
    void (*vfunction6)(void *); //  IXInUDPListener pure virtual function #6
    void (*vfunction7)(void *); //  IXInUDPListener pure virtual function #7
    void (*vfunction8)(void *); //  IXInUDPListener pure virtual function #8
    void (*vfunction9)(void *); //  IXInUDPListener pure virtual function #9
    void (*vfunction10)(void *); //  IXInUDPListener pure virtual function #10
    void (*vfunction11)(void *); //  IXInUDPListener pure virtual function #11
    void (*vfunction12)(void *); //  IXInUDPListener pure virtual function #12
    void (*vfunction13)(void *); //  IXInUDPListener pure virtual function #13
    void (*vfunction14)(void *); //  IXInUDPListener pure virtual function #14
    void (*vfunction15)(void *); //  IXInUDPListener pure virtual function #15
};

typedef struct IXInUDPListener IXInUDPListener, *PIXInUDPListener;

struct IXInUDPListener { // class IXInUDPListener
    struct IXInUDPListener_vftable *vftablePtr;
};

typedef struct XInTCPLink_vftable XInTCPLink_vftable, *PXInTCPLink_vftable;

struct XInTCPLink_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XInTCPLink virtual function #1
    void (*vfunction2)(void *); // XInTCPLink virtual function #2
    LONG (*vfunction3)(void *); // XInTCPLink virtual function #3
};

typedef struct XInTCPLink XInTCPLink, *PXInTCPLink;

struct XInTCPLink { // class XInTCPLink : IXInLink
    struct XInTCPLink_vftable *vftablePtr;
};

typedef struct XInConnector_data XInConnector_data, *PXInConnector_data;

struct XInConnector_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
};

typedef struct XInConnector XInConnector, *PXInConnector;

typedef struct XInConnector_vftable XInConnector_vftable, *PXInConnector_vftable;

struct XInConnector_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
};

struct XInConnector_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XInConnector virtual function #1
    void (*vfunction2)(void *, undefined4); // XInConnector virtual function #2
    uint (*vfunction3)(void *, undefined4, undefined4); // XInConnector virtual function #3
    uint (*vfunction4)(void *); // XInConnector virtual function #4
    bool (*vfunction5)(void *); // XInConnector virtual function #5
    void (*vfunction6)(void *); // XInConnector virtual function #6
    void (*vfunction7)(void *); // XInConnector virtual function #7
    void (*vfunction8)(void *, undefined4); // XInConnector virtual function #8
    void (*vfunction9)(void *, undefined4, undefined4); // XInConnector virtual function #9
    void (*vfunction10)(void *, undefined4); // XInConnector virtual function #10
    void (*vfunction11)(void *); // XInConnector virtual function #11
    void (*vfunction12)(void *); // XInConnector virtual function #12
    void (*vfunction13)(void *, undefined4); // XInConnector virtual function #13
    undefined4 (*vfunction14)(void *); // XInConnector virtual function #14
    void (*vfunction15)(void *, undefined4 *, undefined4); // XInConnector virtual function #15
    void (*vfunction16)(void *, undefined4 *, undefined4); // XInConnector virtual function #16
    void (*vfunction17)(void *, undefined4 *, undefined4); // XInConnector virtual function #17
    void (*vfunction18)(void *, undefined4 *, undefined4); // XInConnector virtual function #18
    void (*vfunction19)(void *, undefined4); // XInConnector virtual function #19
    void (*vfunction20)(void *); // XInConnector virtual function #20
    void (*vfunction21)(void *, undefined4); // XInConnector virtual function #21
    void (*vfunction22)(void *); // XInConnector virtual function #22
    void (*vfunction23)(void *, undefined4); // XInConnector virtual function #23
    void (*vfunction24)(void *); // XInConnector virtual function #24
};

struct XInConnector { // class XInConnector : IXInConnector
    struct XInConnector_vftable *vftablePtr;
    struct XInConnector_data XInConnector_data;
};

typedef struct XInPeer XInPeer, *PXInPeer;

typedef struct XInPeer_vftable XInPeer_vftable, *PXInPeer_vftable;

typedef struct XInPeer_data XInPeer_data, *PXInPeer_data;

struct XInPeer_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
};

struct XInPeer_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XInPeer virtual function #1
    void (*vfunction2)(void *, undefined4, undefined2, undefined2); // XInPeer virtual function #2
    void (*vfunction3)(void *, undefined4); // XInPeer virtual function #3
    void (*vfunction4)(void *, undefined4 *); // XInPeer virtual function #4
    int (*vfunction5)(void *); // XInPeer virtual function #5
    int (*vfunction6)(void *); // XInPeer virtual function #6
};

struct XInPeer { // class XInPeer : IXInPeer
    struct XInPeer_vftable *vftablePtr;
    struct XInPeer_data XInPeer_data;
};

typedef struct XInAcceptor XInAcceptor, *PXInAcceptor;

typedef struct XInAcceptor_vftable XInAcceptor_vftable, *PXInAcceptor_vftable;

typedef struct IXInAcceptor_data IXInAcceptor_data, *PIXInAcceptor_data;

typedef struct XInAcceptor_data XInAcceptor_data, *PXInAcceptor_data;

struct IXInAcceptor_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    void *offset_0x1c;
    void *offset_0x20;
    void *offset_0x24;
    undefined4 offset_0x28;
};

struct XInAcceptor_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int *offset_0x4;
    int offset_0x8;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
};

struct XInAcceptor_vftable {
    int * (*deleting_destructor)(void *, byte); // XInAcceptor virtual function #1
    uint (*vfunction2)(void *); // XInAcceptor virtual function #2
    undefined4 (*vfunction3)(void *); // XInAcceptor virtual function #3
    void (*vfunction4)(void *, undefined2); // XInAcceptor virtual function #4
    undefined2 (*vfunction5)(void *); // XInAcceptor virtual function #5
    uint (*vfunction6)(void *, byte *, short); // XInAcceptor virtual function #6
    undefined4 (*vfunction7)(void *, byte *, short); // XInAcceptor virtual function #7
    void (*vfunction8)(void *); // XInAcceptor virtual function #8
    int (*vfunction9)(void *); // XInAcceptor virtual function #9
    void (*vfunction10)(void *); // XInAcceptor virtual function #10
    void (*vfunction11)(void *, undefined4); // XInAcceptor virtual function #11
    undefined4 (*vfunction12)(void *); // XInAcceptor virtual function #12
    void (*vfunction13)(void *, undefined4 *, undefined4); // XInAcceptor virtual function #13
    void (*vfunction14)(void *, undefined4 *, undefined4); // XInAcceptor virtual function #14
    void (*vfunction15)(void *, undefined4 *, undefined4); // XInAcceptor virtual function #15
};

struct XInAcceptor { // class XInAcceptor : IXInAcceptor
    struct XInAcceptor_vftable *vftablePtr;
    struct IXInAcceptor_data IXInAcceptor_data;
    struct XInAcceptor_data XInAcceptor_data;
};

typedef struct IXInAcceptor_vftable IXInAcceptor_vftable, *PIXInAcceptor_vftable;

struct IXInAcceptor_vftable {
    int * (*vfunction1)(void *, byte); //  IXInAcceptor pure virtual function #1
    uint (*vfunction2)(void *); //  IXInAcceptor pure virtual function #2
    undefined4 (*vfunction3)(void *); //  IXInAcceptor pure virtual function #3
    void (*vfunction4)(void *, undefined2); //  IXInAcceptor pure virtual function #4
    undefined2 (*vfunction5)(void *); //  IXInAcceptor pure virtual function #5
    uint (*vfunction6)(void *, byte *, short); //  IXInAcceptor pure virtual function #6
    undefined4 (*vfunction7)(void *, byte *, short); //  IXInAcceptor pure virtual function #7
    void (*vfunction8)(void *); //  IXInAcceptor pure virtual function #8
    int (*vfunction9)(void *); //  IXInAcceptor pure virtual function #9
    void (*vfunction10)(void *); //  IXInAcceptor pure virtual function #10
    void (*vfunction11)(void *, undefined4); //  IXInAcceptor pure virtual function #11
    undefined4 (*vfunction12)(void *); //  IXInAcceptor pure virtual function #12
    void (*vfunction13)(void *, undefined4 *, undefined4); //  IXInAcceptor pure virtual function #13
    void (*vfunction14)(void *, undefined4 *, undefined4); //  IXInAcceptor pure virtual function #14
    void (*vfunction15)(void *, undefined4 *, undefined4); //  IXInAcceptor pure virtual function #15
};

typedef struct IXInAcceptor IXInAcceptor, *PIXInAcceptor;

struct IXInAcceptor_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    void *offset_0x1c;
    void *offset_0x20;
    void *offset_0x24;
    undefined4 offset_0x28;
};

struct IXInAcceptor { // class IXInAcceptor
    struct IXInAcceptor_vftable *vftablePtr;
    struct IXInAcceptor_data IXInAcceptor_data;
};

typedef struct XRWCriticalSection_vftable XRWCriticalSection_vftable, *PXRWCriticalSection_vftable;

struct XRWCriticalSection_vftable {
    XRWCriticalSection * (*deleting_destructor)(void *, byte); // XRWCriticalSection virtual function #1
};

typedef struct XRWCriticalSection XRWCriticalSection, *PXRWCriticalSection;

struct XRWCriticalSection { // class XRWCriticalSection
    struct XRWCriticalSection_vftable *vftablePtr;
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;


// WARNING! conflicting data type names: /Demangler/XSyncObject - /ClassDataTypes/XSyncObject/XSyncObject


// WARNING! conflicting data type names: /Demangler/XWaitableObject - /ClassDataTypes/XWaitableObject/XWaitableObject


// WARNING! conflicting data type names: /Demangler/XEventA - /ClassDataTypes/XEventA/XEventA

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { // PlaceHolder Structure
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct XCriticalSection XCriticalSection, *PXCriticalSection;

struct XCriticalSection { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef struct XRWLock XRWLock, *PXRWLock;

struct XRWLock { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct XLock XLock, *PXLock;

struct XLock { // PlaceHolder Structure
};

typedef struct XMemory XMemory, *PXMemory;

struct XMemory { // PlaceHolder Structure
};

typedef struct XMemoryStream XMemoryStream, *PXMemoryStream;

struct XMemoryStream { // PlaceHolder Structure
};

typedef struct sockaddr_in sockaddr_in, *Psockaddr_in;

struct sockaddr_in { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/XRWCriticalSection - /ClassDataTypes/XRWCriticalSection/XRWCriticalSection

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct _Init_locks _Init_locks, *P_Init_locks;

struct _Init_locks { // PlaceHolder Structure
};

typedef struct _THandle _THandle, *P_THandle;

struct _THandle { // PlaceHolder Structure
};

typedef struct RWCriticalSection RWCriticalSection, *PRWCriticalSection;

struct RWCriticalSection { // PlaceHolder Structure
};

typedef struct CriticalSection CriticalSection, *PCriticalSection;

struct CriticalSection { // PlaceHolder Structure
};

typedef struct _XMemory _XMemory, *P_XMemory;

struct _XMemory { // PlaceHolder Structure
};

typedef struct XMemoryPtr XMemoryPtr, *PXMemoryPtr;

struct XMemoryPtr { // PlaceHolder Structure
};

typedef enum Type {
} Type;

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
undefined4 * __thiscall XInNetwork::Impl::Interrupter::scalar_deleting_destructor(Interrupter *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::WSAInterrupter::scalar_deleting_destructor(WSAInterrupter *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::Address::vfunction1(Address *this,byte param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,void *param_1);
int __thiscall std::logic_error::vfunction2(logic_error *this);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,byte param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
Impl * __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::Impl::Impl(Impl *this,Thread *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::Impl::~Impl(Impl *this);
undefined * Catch_All@10001408(void);
void FUN_1000141a(void);
uint FUN_10001480(undefined4 param_1,int param_2);
undefined1 FUN_10001580(int param_1,int param_2,int param_3);
uint FUN_10001670(undefined4 param_1,int param_2);
undefined1 FUN_10001770(int param_1,int param_2,int param_3);
uint FUN_10001860(int param_1);
void FUN_100018f0(void);
void __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::Impl::vfunction2(Impl *this);
Thread * __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::Impl::scalar_deleting_destructor(Impl *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::scalar_deleting_destructor(AsyncIOThread_AsyncEvent *this,byte param_1);
int __thiscall FUN_10001c60(void *this,char *param_1);
void __fastcall FUN_10001ca0(int param_1);
void FUN_10001cd0(void);
int __fastcall FUN_10001ce0(int param_1);
void FUN_10001d00(undefined4 *param_1);
void FUN_10001da0(undefined4 param_1,undefined4 *param_2);
void FUN_10001df0(void);
void * __thiscall FUN_10001e10(void *this,void *param_1,uint param_2,uint param_3);
void FUN_10001ef0(undefined4 *param_1,undefined4 *param_2,void *param_3,undefined4 *param_4);
void * __thiscall FUN_10001fa0(void *this,undefined4 *param_1,uint param_2);
int __thiscall FUN_10002070(void *this,undefined4 *param_1,uint param_2);
void __thiscall FUN_10002100(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void Catch_All@100022c0(void);
void Catch_All@100022cc(void);
void __fastcall FUN_100023a0(uint param_1);
void FUN_10002400(exception *param_1);
void __thiscall FUN_10002420(void *this,uint param_1);
undefined * Catch_All@1000249a(void);
void FUN_100024c2(void);
void Catch_All@1000252b(void);
void FUN_10002560(char *param_1);
void __fastcall FUN_100025c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_100025f0(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_10002610(int param_1,undefined4 *param_2);
int __fastcall FUN_10002640(int param_1);
void __fastcall FUN_10002690(undefined4 *param_1,undefined4 *param_2);
undefined4 * __thiscall XInNetwork::Impl::AsyncIOThread_IOCP::scalar_deleting_destructor(AsyncIOThread_IOCP *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultUDP::vfunction1(AsyncResultUDP *this,byte param_1);
undefined4 __fastcall FUN_10002710(byte *param_1,byte *param_2);
void FUN_100027a0(void);
undefined4 * __thiscall XInNetwork::Impl::Acceptor::scalar_deleting_destructor(Acceptor *this,byte param_1);
void FUN_100027d0(void);
int FUN_100027f0(int param_1);
void FUN_10002850(int param_1);
void FUN_100028b0(void);
void FUN_10002930(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);
void FUN_100029a0(void);
undefined4 * __fastcall FUN_100029b0(undefined4 param_1,undefined4 *param_2);
void thunk_FUN_10002aa0(void);
void FUN_100029f0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_10002a80(void);
void FUN_10002aa0(void);
void FUN_10002af0(int param_1,int *param_2,undefined4 param_3,int *param_4);
void Catch_All@10002c89(void);
void Catch_All@10002d09(void);
void __thiscall std::length_error::length_error(length_error *this);
bool __fastcall FUN_10002e00(byte *param_1);
void __fastcall FUN_10002e60(undefined4 param_1,int *param_2,void *param_3,int *param_4);
int FUN_10002e90(void);
void __thiscall FUN_10002ed0(void *this,int *param_1,int *param_2);
void Catch_All@10002f3b(void);
void __cdecl FUN_10002f80(int *param_1);
void __thiscall FUN_10002fc0(void *this,int *param_1);
void __thiscall FUN_10003000(void *this,int param_1);
int * __thiscall FUN_10003040(void *this,int *param_1,int *param_2);
void Catch_All@100030aa(void);
Thread * __thiscall XInNetwork::Impl::AcceptorThread::scalar_deleting_destructor(AcceptorThread *this,byte param_1);
void FUN_10003110(void);
Thread * __thiscall XInNetwork::Impl::AsyncConnectThread::vfunction1(AsyncConnectThread *this,byte param_1);
void FUN_10003160(int *param_1,int param_2,int *param_3);
void FUN_100031c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
IPendingConnet * __thiscall XInNetwork::Impl::Connector::IPendingConnet::IPendingConnet(IPendingConnet *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
uint __thiscall XInNetwork::Impl::Connector::PendingConnet::vfunction2(PendingConnet *this);
uint __thiscall XInNetwork::Impl::Connector::PendingConnet::vfunction3(PendingConnet *this);
uint __thiscall XInNetwork::Impl::Connector::PendingConnet::vfunction4(PendingConnet *this);
uint __thiscall XInNetwork::Impl::Connector::PendingConnet::vfunction5(PendingConnet *this,void *param_1);
uint __thiscall XInNetwork::Impl::Connector::PendingConnetEx::vfunction2(PendingConnetEx *this);
uint __thiscall XInNetwork::Impl::Connector::PendingConnetEx::vfunction3(PendingConnetEx *this);
uint __thiscall XInNetwork::Impl::Connector::PendingConnetEx::vfunction4(PendingConnetEx *this);
uint __thiscall XInNetwork::Impl::Connector::PendingConnetEx::vfunction5(PendingConnetEx *this,void *param_1);
undefined4 * __thiscall XInNetwork::Impl::Connector::IPendingConnet::vfunction1(IPendingConnet *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::Connector::scalar_deleting_destructor(Connector *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::Filter::scalar_deleting_destructor(Filter *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::PreActiveList::scalar_deleting_destructor(PreActiveList *this,byte param_1);
void FUN_10003970(void);
void FUN_10003990(exception *param_1);
void __thiscall FUN_100039b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 *param_6);
void FUN_100039f0(undefined4 *param_1);
void FUN_10003a50(void);
undefined4 * __thiscall XInNetwork::Impl::TCPLink::vfunction1(TCPLink *this,byte param_1);
void FUN_10003a90(void);
int FUN_10003aa0(int param_1);
void FUN_10003b00(int param_1);
int FUN_10003b50(void);
void FUN_10003ba0(void);
void FUN_10003be0(undefined4 *param_1);
void __fastcall FUN_10003c60(int param_1);
undefined4 * FUN_10003c80(undefined4 *param_1);
void FUN_10003d10(undefined4 *param_1);
int FUN_10003d80(int param_1);
void FUN_10003de0(int param_1);
void FUN_10003e40(void);
undefined4 FUN_10003e60(void);
uint FUN_10003e90(void);
undefined4 FUN_10003eb0(void);
undefined4 FUN_10003ed0(void);
void FUN_10003ef0(void);
void FUN_10003f00(void);
void FUN_10003f30(int *param_1);
void FUN_10003f70(void);
void thunk_FUN_10004120(void);
void FUN_10003fc0(void);
void FUN_10004120(void);
void thunk_FUN_10004310(void);
int FUN_100041a0(void);
void FUN_100041c0(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall std::length_error::length_error(length_error *this);
void FUN_10004310(void);
void FUN_10004360(void);
void FUN_100043d0(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void FUN_10004690(void);
void FUN_100046b0(void);
undefined4 * __cdecl FUN_100046d0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5,undefined4 param_6);
undefined4 * __cdecl FUN_10004730(undefined4 *param_1,undefined4 param_2);
void FUN_10004770(void);
void FUN_100047a0(int *param_1);
void FUN_10004820(void);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultDisconnect::vfunction1(AsyncResultDisconnect *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultRecv::vfunction1(AsyncResultRecv *this,byte param_1);
void FUN_100048a0(int param_1,uint *param_2);
void FUN_100049a0(int param_1,int *param_2,char param_3);
void FUN_10004bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10004c40(void);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultSend::vfunction1(AsyncResultSend *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::AsyncResult::vfunction1(AsyncResult *this,byte param_1);
int * __thiscall XInNetwork::Impl::UDPListenerEx::scalar_deleting_destructor(UDPListenerEx *this,byte param_1);
void FUN_10004d30(void);
void FUN_10004d70(void);
undefined4 * __thiscall XInNetwork::Impl::UDPListener::scalar_deleting_destructor(UDPListener *this,byte param_1);
void FUN_10004dc0(void);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultUDPICMPPortUnreachable::vfunction1(AsyncResultUDPICMPPortUnreachable *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultUDPRecv::vfunction1(AsyncResultUDPRecv *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultUDPRecvEx::vfunction1(AsyncResultUDPRecvEx *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultUDPSend::vfunction1(AsyncResultUDPSend *this,byte param_1);
undefined4 * __thiscall XInNetwork::Impl::AsyncResultUDPSendEx::vfunction1(AsyncResultUDPSendEx *this,byte param_1);
uint FUN_10004ee0(void);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
undefined4 * FUN_10004fc0(undefined4 *param_1,undefined4 param_2);
void FUN_10005020(void);
void FUN_10005090(void);
int * FUN_100050f0(int *param_1);
int * FUN_10005160(int *param_1,int *param_2,int *param_3);
uint FUN_100051d0(void);
void FUN_10005230(void);
void FUN_100052b0(undefined4 *param_1,undefined4 param_2,int param_3);
void FUN_10005320(int *param_1,undefined4 param_2,int param_3,int *param_4);
void FUN_100053b0(int param_1,int *param_2,int param_3,void *param_4,int param_5,void *param_6);
void FUN_10005440(int param_1,undefined4 param_2,int *param_3);
void Catch_All@100055d3(void);
void Catch_All@1000564f(void);
void __fastcall FUN_100056c0(undefined4 param_1,int *param_2,void *param_3,int *param_4);
int FUN_100056f0(void);
void __thiscall FUN_10005730(void *this,int *param_1,int param_2);
void Catch_All@100057ae(void);
void __cdecl FUN_100057e0(int *param_1);
void __thiscall FUN_10005860(void *this,int *param_1);
void __thiscall FUN_100058e0(void *this,int param_1);
int * __thiscall FUN_10005960(void *this,int *param_1,int *param_2);
void Catch_All@100059dd(void);
XEventA * __thiscall XEventA::scalar_deleting_destructor(XEventA *this,byte param_1);
int * __thiscall XInAcceptor::scalar_deleting_destructor(XInAcceptor *this,byte param_1);
void FUN_10005a60(void);
void FUN_10005a90(void);
XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_> * __thiscall XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>::XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>(XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_> *this);
void __thiscall XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>::~XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>(XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_> *this);
undefined * Catch_All@10005b6d(void);
void FUN_10005b7d(void);
void FUN_10005bb0(void);
void FUN_10005be0(int param_1);
undefined4 * __thiscall XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_>::scalar_deleting_destructor(XThreadSafeObject<std::list<IXInLink*,std::allocator<IXInLink*>_>_> *this,byte param_1);
void FUN_10005cb0(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void thunk_FUN_10005fd0(void);
void __thiscall FUN_10005d50(void *this,undefined4 param_1,undefined4 *param_2);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void FUN_10005fb0(void);
void FUN_10005fd0(void);
void __fastcall FUN_10006020(int param_1);
XThread * __thiscall XInAcceptorThread::scalar_deleting_destructor(XInAcceptorThread *this,byte param_1);
int FUN_100060e0(void);
void FUN_10006100(void);
XObjectPool<XInAsyncResultTCP> * __thiscall XObjectPool<XInAsyncResultTCP>::XObjectPool<XInAsyncResultTCP>(XObjectPool<XInAsyncResultTCP> *this);
void __thiscall XObjectPool<XInAsyncResultTCP>::~XObjectPool<XInAsyncResultTCP>(XObjectPool<XInAsyncResultTCP> *this);
void __fastcall FUN_10006320(int param_1);
void __fastcall FUN_10006450(int param_1);
undefined4 * __thiscall XObjectPool<XInAsyncResultTCP>::scalar_deleting_destructor(XObjectPool<XInAsyncResultTCP> *this,byte param_1);
void FUN_10006540(void);
void FUN_100065a0(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void __thiscall FUN_10006630(void *this,undefined4 param_1,undefined4 *param_2);
void __thiscall std::length_error::length_error(length_error *this);
void * __fastcall FUN_100068b0(void *param_1,void *param_2);
void __thiscall XInAsyncIOEngineWin98::~XInAsyncIOEngineWin98(XInAsyncIOEngineWin98 *this);
undefined1 * Catch_All@10006956(void);
void __thiscall IXInAsyncIOEngine::~IXInAsyncIOEngine(void);
bool FUN_10006980(undefined4 param_1);
uint __thiscall XInAsyncIOEngineWin98::vfunction2(XInAsyncIOEngineWin98 *this,undefined4 param_1,void *param_2);
undefined1 __thiscall XInAsyncIOEngineWin98::vfunction3(XInAsyncIOEngineWin98 *this,int param_1,int param_2);
undefined4 * __thiscall XInAsyncIOEngineWin98::scalar_deleting_destructor(XInAsyncIOEngineWin98 *this,byte param_1);
void __thiscall XInAsyncIOEngineNT::~XInAsyncIOEngineNT(XInAsyncIOEngineNT *this);
undefined1 __thiscall XInAsyncIOEngineNT::vfunction2(XInAsyncIOEngineNT *this);
undefined4 * __thiscall XInAsyncIOEngineNT::scalar_deleting_destructor(XInAsyncIOEngineNT *this,byte param_1);
void FUN_10006ac0(void);
void FUN_10006b40(undefined4 *param_1,undefined4 *param_2,void *param_3,undefined4 *param_4);
int * FUN_10006bd0(int *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5);
void __thiscall FUN_10006c40(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void Catch_All@10006dba(void);
void Catch_All@10006dc6(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void __fastcall FUN_10006f10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
int __fastcall FUN_10006f40(int param_1,int param_2);
void __fastcall FUN_10006f80(int param_1,undefined4 *param_2);
void __fastcall FUN_10006fa0(undefined4 *param_1,undefined4 *param_2);
undefined4 * __thiscall XInConnector::scalar_deleting_destructor(XInConnector *this,byte param_1);
XRWCriticalSection * __thiscall XRWCriticalSection::scalar_deleting_destructor(XRWCriticalSection *this,byte param_1);
int FUN_10007000(void);
void FUN_10007020(void);
XObjectPool<XInTCPLink> * __thiscall XObjectPool<XInTCPLink>::XObjectPool<XInTCPLink>(XObjectPool<XInTCPLink> *this);
void __thiscall XObjectPool<XInTCPLink>::~XObjectPool<XInTCPLink>(XObjectPool<XInTCPLink> *this);
void __fastcall FUN_10007240(int param_1);
void __fastcall FUN_10007340(int param_1);
undefined4 * __thiscall XObjectPool<XInTCPLink>::scalar_deleting_destructor(XObjectPool<XInTCPLink> *this,byte param_1);
void FUN_10007430(void);
void FUN_10007560(void);
XObjectPool<XInPeer> * __thiscall XObjectPool<XInPeer>::XObjectPool<XInPeer>(XObjectPool<XInPeer> *this);
void __thiscall XObjectPool<XInPeer>::~XObjectPool<XInPeer>(XObjectPool<XInPeer> *this);
void __fastcall FUN_100076c0(int param_1);
undefined4 * __thiscall XObjectPool<XInPeer>::scalar_deleting_destructor(XObjectPool<XInPeer> *this,byte param_1);
undefined4 * __thiscall XInPeer::scalar_deleting_destructor(XInPeer *this,byte param_1);
void FUN_100077d0(void);
void __fastcall FUN_10007810(int param_1);
void FUN_10007820(int param_1,uint *param_2);
void FUN_10007930(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_10007a00(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void __thiscall FUN_10007d00(void *this,int *param_1,char param_2,void *param_3);
void FUN_10007f40(int *param_1);
void __thiscall FUN_10007f90(void *this,int param_1);
void __thiscall FUN_10007fe0(void *this,int param_1);
undefined4 * __thiscall FUN_10008030(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void Catch_All@100080be(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
undefined4 * __thiscall XInTCPLink::scalar_deleting_destructor(XInTCPLink *this,byte param_1);
void FUN_10008160(void);
XThreadSafeObject<XMemoryStream> * __thiscall XThreadSafeObject<XMemoryStream>::XThreadSafeObject<XMemoryStream>(XThreadSafeObject<XMemoryStream> *this);
void __thiscall XThreadSafeObject<XMemoryStream>::~XThreadSafeObject<XMemoryStream>(XThreadSafeObject<XMemoryStream> *this);
undefined * Catch_All@1000822d(void);
void FUN_1000823d(void);
undefined4 * __thiscall XThreadSafeObject<XMemoryStream>::scalar_deleting_destructor(XThreadSafeObject<XMemoryStream> *this,byte param_1);
void FUN_10008290(void);
void FUN_100082d0(void);
int FUN_10008310(void);
void FUN_10008330(void);
XObjectPool<XInAsyncResultUDP> * __thiscall XObjectPool<XInAsyncResultUDP>::XObjectPool<XInAsyncResultUDP>(XObjectPool<XInAsyncResultUDP> *this);
void __thiscall XObjectPool<XInAsyncResultUDP>::~XObjectPool<XInAsyncResultUDP>(XObjectPool<XInAsyncResultUDP> *this);
void __thiscall IXInPeer::~IXInPeer(IXInPeer *this);
undefined4 * __thiscall XObjectPool<XInAsyncResultUDP>::scalar_deleting_destructor(XObjectPool<XInAsyncResultUDP> *this,byte param_1);
void __fastcall FUN_10008630(int param_1);
undefined4 * __thiscall XInUDPListener::scalar_deleting_destructor(XInUDPListener *this,byte param_1);
void __fastcall FUN_10008710(int param_1);
void Ordinal_151(void);
void __thiscall XWaitableObject::Close(XWaitableObject *this);
void * __thiscall XWaitableObject::Detach(XWaitableObject *this);
void __thiscall XWaitableObject::Attach(XWaitableObject *this,void *param_1);
_func_void * __cdecl std::set_new_handler(_func_void *param_1);
void __thiscall std::length_error::length_error(length_error *this);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this);
_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1);
void __fastcall FUN_10008959(int *param_1);
void __cdecl FUN_1000896b(LPCRITICAL_SECTION param_1);
void __cdecl FUN_10008976(LPCRITICAL_SECTION param_1);
void __cdecl FUN_10008981(LPCRITICAL_SECTION param_1);
void __cdecl FUN_1000898c(LPCRITICAL_SECTION param_1);
void __cdecl _free(void *_Memory);
void __fastcall __security_check_cookie(int param_1);
void __thiscall type_info::~type_info(type_info *this);
void * __thiscall type_info::scalar_deleting_destructor(type_info *this,uint param_1);
bool __thiscall type_info::operator==(type_info *this,type_info *param_1);
void __thiscall std::exception::exception(exception *this);
exception * __thiscall std::exception::exception(exception *this,char **param_1);
void __thiscall std::exception::exception(exception *this,char **param_1,int param_2);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
void __thiscall std::exception::~exception(exception *this);
char * __thiscall std::exception::vfunction2(exception *this);
exception * __thiscall std::exception::scalar_deleting_destructor(exception *this,byte param_1);
void __thiscall __purecall(void *this);
errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
void __cdecl FUN_10008b8d(size_t param_1);
void __cdecl FUN_10008bf7(undefined4 param_1);
void __cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void __cdecl FUN_10008cfd(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_10008d21(void);
errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
void __cdecl _free(void *_Memory);
void FUN_10008e5d(void);
int __cdecl FUN_10008e95(int param_1);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_10008fb3(void);
int __cdecl _atexit(_func_4879 *param_1);
int * __cdecl _V6_HeapAlloc(uint *param_1);
void FUN_10009011(void);
void * __cdecl _malloc(size_t _Size);
void __cdecl __endthreadex(uint _Retval);
void __callthreadstartex(void);
uintptr_t __cdecl __beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,uint _InitFlag,uint *_ThrdAddr);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1);
int __cdecl __mbscmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale);
int __cdecl __mbscmp(uchar *_Str1,uchar *_Str2);
undefined4 __CRT_INIT@12(undefined4 param_1,int param_2,int param_3);
int __fastcall ___DllMainCRTStartup(int param_1,int param_2,HMODULE param_3);
void entry(HMODULE param_1,int param_2,int param_3);
void __cdecl FUN_10009726(undefined4 param_1);
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
void __cdecl ___report_gsfailure(void);
void __cdecl type_info::_Type_info_dtor(type_info *param_1);
void FUN_10009e00(void);
int __cdecl _strcmp(char *_Str1,char *_Str2);
void __cdecl _abort(void);
uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask);
void __cdecl FUN_10009fa9(int param_1);
void __cdecl __FF_MSGBANNER(void);
undefined4 FUN_1000a182(void);
int __cdecl FUN_1000a1ee(int param_1);
void __encoded_null(void);
int __cdecl FUN_1000a265(int param_1);
void FUN_1000a2dc(undefined4 param_1);
undefined4 FUN_1000a2f1(void);
LPVOID FUN_1000a2f7(void);
void FUN_1000a329(undefined4 param_1,undefined4 param_2);
void __cdecl __mtterm(void);
void __cdecl FUN_1000a37f(int param_1,int param_2);
void FUN_1000a435(void);
DWORD * FUN_1000a43e(void);
_ptiddata __cdecl __getptd(void);
void __freefls@4(void *param_1);
void FUN_1000a5d9(void);
void FUN_1000a5e5(void);
void __cdecl __freeptd(_ptiddata _Ptd);
int __cdecl __mtinit(void);
void __cdecl FUN_1000a7db(undefined4 param_1);
int __cdecl FUN_1000a7e5(int param_1);
DWORD * FUN_1000a820(void);
DWORD * FUN_1000a833(void);
void __cdecl FUN_1000a846(DWORD param_1);
void FUN_1000a864(void);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
undefined4 ___heap_select(void);
int __cdecl __heap_init(void);
void __cdecl __heap_term(void);
int __cdecl __mtinitlocks(void);
void __cdecl __mtdeletelocks(void);
void __cdecl FUN_1000b18c(int param_1);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_1000b25b(void);
void __cdecl __lock(int _File);
undefined4 __cdecl ___sbh_heap_init(undefined4 param_1);
void __thiscall thunk_FUN_1000b301(void *this,int param_1);
void __thiscall FUN_1000b301(void *this,int param_1);
void __cdecl ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int __cdecl ___sbh_alloc_new_group(int param_1);
undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * __cdecl ___sbh_alloc_block(uint *param_1);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3);
void * __cdecl __malloc_crt(size_t _Size);
void * __cdecl __calloc_crt(size_t _Count,size_t _Size);
void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize);
size_t __cdecl __msize(void *_Memory);
void FUN_1000c0f3(void);
void __cdecl __amsg_exit(int param_1);
void __cdecl FUN_1000c120(undefined4 param_1);
void __cdecl ___crtExitProcess(int param_1);
void FUN_1000c15b(void);
void FUN_1000c164(void);
void __cdecl FUN_1000c16d(undefined4 *param_1);
void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl __get_osplatform(int *param_1);
undefined4 __cdecl __get_winmajor(undefined4 *param_1);
int __cdecl __cinit(int param_1);
void __cdecl FUN_1000c2aa(int param_1,int param_2,int param_3);
void FUN_1000c377(void);
void __cdecl __exit(int _Code);
void __cdecl __cexit(void);
void __cdecl __init_pointers(void);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void FUN_1000c53b(void);
undefined4 __cdecl FUN_1000c53c(int param_1,DWORD param_2);
undefined4 FUN_1000c6b5(void);
void __cdecl setSBCS(threadmbcinfostruct *param_1);
void __cdecl setSBUpLow(threadmbcinfostruct *param_1);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_1000c95e(void);
int __cdecl getSystemCP(int param_1);
void __cdecl FUN_1000c9e1(undefined4 param_1,int param_2);
int __cdecl __setmbcp(int _CodePage);
void FUN_1000cd1b(void);
undefined4 ___initmbctable(void);
void __cdecl ___freetlocinfo(void *param_1);
void __cdecl ___addlocaleref(LONG *param_1);
LONG * __cdecl ___removelocaleref(LONG *param_1);
LONG * __updatetlocinfoEx_nolock(void);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_1000d06c(void);
int __cdecl __ioinit(void);
void __cdecl __ioterm(void);
int __cdecl __setenvp(void);
void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3);
int __cdecl __setargv(void);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void __RTC_Initialize(void);
void __cdecl ___security_init_cookie(void);
void FUN_1000d841(void);
exception * __thiscall std::bad_exception::scalar_deleting_destructor(bad_exception *this,byte param_1);
undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_1000d9d4(void);
void __cdecl ___DestructExceptionObject(int *param_1);
int __cdecl ___AdjustPointer(int param_1,int *param_2);
uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2);
void __cdecl CallUnexpected(_s_ESTypeList *param_1);
void Catch_All@1000db57(void);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_1000dc95(void);
char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FindHandlerForForeignException(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
void FUN_1000e3cf(exception *param_1);
undefined4 __cdecl ___InternalCxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8);
void __cdecl terminate(void);
void __cdecl unexpected(void);
void __cdecl _inconsistency(void);
void __initp_eh_hooks(void);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
void __cdecl __initp_misc_winsig(undefined4 param_1);
uint __cdecl siglookup(uint param_1);
_PHNDLR __cdecl ___get_sigabrt(void);
int __cdecl _raise(int _SigNum);
void FUN_1000e77a(void);
undefined4 __cdecl FUN_1000e7b6(undefined4 param_1,undefined4 param_2,uint param_3);
errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
int __cdecl __set_error_mode(int _Mode);
void __cdecl __freea(void *_Memory);
void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2);
undefined1 (*) [16] __cdecl __VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3);
void __cdecl FUN_1000ebf2(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
void __cdecl FUN_1000ed5c(undefined4 param_1);
undefined4 ___crtInitCritSecNoSpinCount@8(LPCRITICAL_SECTION param_1);
int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2);
void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3);
void FUN_1000ef12(int param_1);
void __fastcall _EH4_CallFilterFunc(undefined *param_1);
void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE);
void __fastcall _EH4_GlobalUnwind(PVOID param_1);
void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4);
int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3);
void FUN_1000f08b(void);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void FUN_1000f1f1(void);
void __initp_misc_cfltcvt_tab(void);
void __cdecl FUN_1000f2e7(undefined4 param_1);
int __cdecl __crtLCMapStringA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8,int param_9);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
int __cdecl __crtGetStringTypeA_stat(localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,int param_6,int param_7,int param_8);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
void __cdecl ___free_lc_time(undefined4 *param_1);
void __cdecl ___free_lconv_num(undefined4 *param_1);
void __cdecl ___free_lconv_mon(int param_1);
size_t __cdecl _strcspn(char *_Str,char *_Control);
char * __cdecl _strpbrk(char *_Str,char *_Control);
int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4);
int __cdecl __ismbblead(uint _C);
int __cdecl _ValidateRead(void *param_1,uint param_2);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,uint param_2);
undefined4 __fastcall __NLG_Notify1(undefined4 param_1);
void __NLG_Notify(ulong param_1);
void FUN_1000fd68(void);
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4);
long __cdecl _atol(char *_Str);
int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
undefined4 FUN_1000ff3c(void);
undefined4 __get_sse2_info(void);
void __cdecl ___ansicp(LCID param_1);
void __cdecl ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6);
int __cdecl __isleadbyte_l(int _C,_locale_t _Locale);
ulong __cdecl strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
void __alloca_probe(void);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
uint ATL::_AtlGetThreadACPFake(void);
uint ATL::_AtlGetThreadACPThunk(void);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
undefined4 __fastcall FUN_10010890(int param_1);
undefined4 __thiscall FUN_10010960(void *this,int param_1,void *param_2,size_t param_3);
void __fastcall FUN_10010a20(int param_1);
uint __fastcall FUN_10010ad0(int param_1);
void FUN_10010b20(void);
undefined4 FUN_10010b40(void);
void __thiscall XInUDPListener::~XInUDPListener(XInUDPListener *this);
undefined * Catch_All@10010c0b(void);
undefined4 __thiscall FUN_10010c30(void *this,XMemory *param_1);
undefined4 __thiscall FUN_10010de0(void *this,int *param_1,XMemory *param_2);
void __thiscall XInUDPListener::vfunction2(XInUDPListener *this);
uint FUN_10011100(ulong param_1);
void __thiscall IXInUDPListener::~IXInUDPListener(IXInUDPListener *this);
void __cdecl XInDestroyUDPListener(undefined4 *param_1);
undefined4 * __cdecl XInCreateUDPListener(ulong param_1);
uint __fastcall FUN_100113c0(int param_1,int param_2);
undefined4 FUN_10011400(void);
void __fastcall FUN_10011440(undefined4 *param_1);
undefined4 Catch_All@100114b5(void);
void FUN_100114c0(undefined4 param_1,int param_2,int param_3);
bool __fastcall FUN_100115e0(undefined4 *param_1);
uint FUN_10011610(ulong param_1);
bool FUN_10011700(void);
void __thiscall XInTCPLink::vfunction2(XInTCPLink *this);
void __fastcall FUN_10011760(int param_1);
void __thiscall FUN_100117c0(void *this,char param_1);
void __fastcall FUN_100118a0(int param_1);
void __thiscall FUN_10011980(void *this,uint param_1);
void __fastcall FUN_10011a60(int param_1);
void __thiscall FUN_10011b40(void *this,uint param_1);
undefined4 __thiscall FUN_10011cb0(void *this,void *param_1,size_t param_2);
undefined4 FUN_10011dc0(void);
undefined4 FUN_10011e10(undefined4 param_1);
undefined4 * FUN_10011e80(undefined4 *param_1);
LONG __thiscall XInTCPLink::vfunction3(XInTCPLink *this);
void __thiscall XInTCPLink::~XInTCPLink(XInTCPLink *this);
undefined * Catch_All@10012040(void);
void __thiscall IXInPeer::~IXInPeer(IXInPeer *this);
void __thiscall FUN_100120b0(void *this,XMemory *param_1);
int __thiscall FUN_10012300(void *this,XMemory *param_1);
void Catch_All@1001253c(void);
void __fastcall FUN_10012560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __fastcall FUN_10012580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __fastcall FUN_100125a0(int param_1);
uint __fastcall FUN_100126f0(int param_1,int param_2);
bool __fastcall FUN_10012730(undefined4 *param_1);
undefined4 FUN_10012760(void);
void __fastcall FUN_100127a0(undefined4 *param_1);
undefined4 Catch_All@10012815(void);
uint FUN_10012820(ULONG_PTR param_1);
void FUN_100128a0(undefined4 param_1,int param_2,int param_3);
void Catch_All@10012c21(void);
void Catch_All@10012e43(void);
bool __fastcall FUN_10012ea0(undefined4 *param_1);
uint FUN_10012ec0(ulong param_1);
undefined4 FUN_10013110(void);
bool __thiscall FUN_10013130(void *this,undefined4 param_1);
void FUN_10013180(void);
void FUN_100131d0(void);
int __thiscall XInPeer::vfunction5(XInPeer *this);
int __thiscall XInPeer::vfunction6(XInPeer *this);
void __thiscall XInPeer::vfunction2(XInPeer *this,undefined4 param_1,undefined2 param_2,undefined2 param_3);
void __thiscall XInPeer::vfunction4(XInPeer *this,undefined4 *param_1);
void __thiscall XInPeer::vfunction3(XInPeer *this,undefined4 param_1);
void __thiscall IXInPeer::~IXInPeer(IXInPeer *this);
void FUN_10013310(void);
void FUN_10013330(void);
void __cdecl XInDestroyPeer(int param_1);
int XInCreatePeer(void);
void __thiscall IXInLink::~IXInLink(IXInLink *this);
LPVOID XInGetLastError(void);
void __cdecl XInSetLastError(LPVOID param_1);
void __cdecl FUN_100134b0(undefined4 param_1,int *param_2);
void __cdecl FUN_10013530(undefined4 param_1);
void __thiscall XInConnector::vfunction18(XInConnector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInConnector::vfunction17(XInConnector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInConnector::vfunction16(XInConnector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInConnector::vfunction15(XInConnector *this,undefined4 *param_1,undefined4 param_2);
undefined4 __thiscall XInConnector::vfunction14(XInConnector *this);
void __thiscall XInConnector::vfunction13(XInConnector *this,undefined4 param_1);
void __thiscall XInConnector::vfunction24(XInConnector *this);
void __thiscall XInConnector::vfunction23(XInConnector *this,undefined4 param_1);
void __thiscall XInConnector::vfunction22(XInConnector *this);
void __thiscall XInConnector::vfunction21(XInConnector *this,undefined4 param_1);
void __thiscall XInConnector::vfunction20(XInConnector *this);
void __thiscall XInConnector::vfunction19(XInConnector *this,undefined4 param_1);
void __thiscall XInConnector::vfunction12(XInConnector *this);
void __thiscall XInConnector::vfunction11(XInConnector *this);
void __thiscall XInConnector::vfunction10(XInConnector *this,undefined4 param_1);
void __thiscall XInConnector::vfunction8(XInConnector *this,undefined4 param_1);
void __thiscall XInConnector::vfunction9(XInConnector *this,undefined4 param_1,undefined4 param_2);
void __thiscall XInConnector::vfunction7(XInConnector *this);
void __thiscall XInConnector::vfunction6(XInConnector *this);
bool __thiscall XInConnector::vfunction5(XInConnector *this);
uint __thiscall XInConnector::vfunction4(XInConnector *this);
void __cdecl FUN_10014130(undefined4 param_1,int param_2,int *param_3);
void __cdecl FUN_10014170(undefined4 param_1,int param_2);
void FUN_100141c0(void);
undefined4 FUN_10014200(void);
void __thiscall XInConnector::~XInConnector(XInConnector *this);
undefined * Catch_All@100142e8(void);
void __thiscall IXInConnector::~IXInConnector(IXInConnector *this);
void __thiscall XInConnector::vfunction2(XInConnector *this,undefined4 param_1);
uint __thiscall XInConnector::vfunction3(XInConnector *this,undefined4 param_1,undefined4 param_2);
uint FUN_10014600(ulong param_1);
void __cdecl XInDestroyConnector(undefined4 *param_1);
void __thiscall IXInConnector::~IXInConnector(IXInConnector *this);
undefined4 * __cdecl XInCreateConnector(ulong param_1);
undefined4 FUN_100148d0(void);
void FUN_100148e0(void);
undefined4 FUN_100148f0(void);
void FUN_10014900(void);
int FUN_10014910(void);
int FUN_10014920(void);
void FUN_10014930(void);
int FUN_10014950(void);
void FUN_10014960(void);
undefined4 FUN_10014970(void);
undefined4 FUN_10014980(void);
void FUN_10014990(void);
void FUN_100149a0(void);
void __thiscall XInPeer::~XInPeer(XInPeer *this);
void FUN_10014b40(void);
void FUN_10014bf0(void);
void __thiscall FUN_10014cc0(void *this,int param_1);
void __thiscall FUN_10014d70(void *this,int param_1,int param_2);
void FUN_10014e90(void);
undefined * Catch_All@10014ed3(void);
void FUN_10014ee5(void);
void __fastcall FUN_10014f30(undefined4 *param_1);
uint FUN_10015170(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_100151e0(void *this,undefined4 param_1);
undefined4 * FUN_100152d0(undefined4 *param_1);
void __thiscall IXInAsyncIOEngine::~IXInAsyncIOEngine(IXInAsyncIOEngine *this);
undefined4 * __cdecl FUN_100153b0(undefined4 param_1);
undefined4 FUN_100154a0(void);
void __fastcall FUN_100154e0(XThread *param_1);
void __thiscall XInAcceptorThread::~XInAcceptorThread(XInAcceptorThread *this);
undefined * Catch_All@100157ad(void);
XInAcceptorThread * __thiscall XInAcceptorThread::XInAcceptorThread(XInAcceptorThread *this);
undefined4 FUN_10015840(undefined2 param_1,XThread param_2);
void __thiscall XInAcceptorThread::vfunction2(XInAcceptorThread *this);
void __thiscall XInAcceptor::vfunction15(XInAcceptor *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInAcceptor::vfunction14(XInAcceptor *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInAcceptor::vfunction13(XInAcceptor *this,undefined4 *param_1,undefined4 param_2);
undefined4 __thiscall XInAcceptor::vfunction12(XInAcceptor *this);
void __thiscall XInAcceptor::vfunction11(XInAcceptor *this,undefined4 param_1);
void __thiscall XInAcceptor::vfunction10(XInAcceptor *this);
int __thiscall XInAcceptor::vfunction9(XInAcceptor *this);
undefined2 __thiscall XInAcceptor::vfunction5(XInAcceptor *this);
void __thiscall XInAcceptor::vfunction4(XInAcceptor *this,undefined2 param_1);
undefined4 __thiscall XInAcceptor::vfunction3(XInAcceptor *this);
undefined4 FUN_10015c30(int *param_1);
void Catch_All@10015d14(void);
void __thiscall XInAcceptor::~XInAcceptor(XInAcceptor *this);
undefined * Catch_All@10015dce(void);
void __thiscall IXInAcceptor::~IXInAcceptor(IXInAcceptor *this);
void __cdecl FUN_10015e20(undefined4 param_1,int param_2);
void __thiscall XInAcceptor::vfunction8(XInAcceptor *this);
undefined4 __thiscall XInAcceptor::vfunction7(XInAcceptor *this,byte *param_1,short param_2);
void __cdecl FUN_100160b0(undefined4 param_1,int param_2);
void Catch_All@10016132(void);
XInAcceptor * __thiscall XInAcceptor::XInAcceptor(XInAcceptor *this);
uint __thiscall XInAcceptor::vfunction6(XInAcceptor *this,byte *param_1,short param_2);
uint __thiscall XInAcceptor::vfunction2(XInAcceptor *this);
uint FUN_10016690(ulong param_1);
void __cdecl XInDestroyAcceptor(undefined4 *param_1);
void __thiscall IXInAcceptor::~IXInAcceptor(IXInAcceptor *this);
undefined4 * __cdecl XInCreateAcceptor(ulong param_1);
void __thiscall XInNetwork::Impl::IUDPListener::~IUDPListener(IUDPListener *this);
undefined4 * __cdecl FUN_100168d0(int param_1,UDPListener *param_2);
undefined1 * Catch@1001694e(void);
undefined1 * Catch_All@1001695f(void);
void __thiscall XInNetwork::Impl::IUDPListenerEx::~IUDPListenerEx(IUDPListenerEx *this);
undefined4 * __cdecl FUN_100169c0(int param_1,Address *param_2);
undefined1 * Catch@10016a3e(void);
undefined1 * Catch_All@10016a4f(void);
void __thiscall XInNetwork::Impl::ILink::~ILink(ILink *this);
void FUN_10016a90(void);
void FUN_10016ab0(void);
void __thiscall XInNetwork::Impl::IInterrupter::~IInterrupter(IInterrupter *this);
undefined4 * FUN_10016ad0(void);
undefined1 * Catch@10016b46(void);
undefined1 * Catch_All@10016b57(void);
void __thiscall XInNetwork::Impl::IFilter::~IFilter(IFilter *this);
int * FUN_10016cf0(void);
undefined4 Catch@10016da8(void);
undefined4 Catch_All@10016db9(void);
void __thiscall XInNetwork::Impl::IConnector::~IConnector(IConnector *this);
undefined4 * __cdecl FUN_10016e00(int param_1,int param_2);
undefined1 * Catch@10016e81(void);
undefined1 * Catch_All@10016e92(void);
void __thiscall XInNetwork::Impl::IAddress::~IAddress(IAddress *this);
undefined4 * __cdecl FUN_10016ef0(undefined4 param_1,undefined2 param_2,int param_3);
undefined1 * Catch@10016f75(void);
undefined1 * Catch_All@10016f86(void);
undefined4 __cdecl FUN_10016fb0(int param_1);
undefined1 * Catch@10017024(void);
undefined1 * Catch_All@10017035(void);
void __thiscall XInNetwork::Impl::IAcceptor::~IAcceptor(IAcceptor *this);
undefined4 * __cdecl FUN_10017090(int param_1,int param_2);
undefined1 * Catch@1001710e(void);
undefined1 * Catch_All@1001711f(void);
void __thiscall XInNetwork::Impl::AsyncResultUDPSendEx::vfunction2(AsyncResultUDPSendEx *this);
void __thiscall XInNetwork::Impl::AsyncResultUDPSend::vfunction2(AsyncResultUDPSend *this);
void __fastcall FUN_100171b0(undefined4 *param_1);
AsyncResultUDPSendEx * __thiscall XInNetwork::Impl::AsyncResultUDPSendEx::AsyncResultUDPSendEx(AsyncResultUDPSendEx *this,int param_1,undefined4 *param_2,int *param_3,int *param_4,undefined4 param_5);
void __fastcall FUN_10017320(undefined4 *param_1);
AsyncResultUDPSend * __thiscall XInNetwork::Impl::AsyncResultUDPSend::AsyncResultUDPSend(AsyncResultUDPSend *this,int param_1,undefined4 *param_2,int *param_3,int *param_4,undefined4 param_5);
void __thiscall XInNetwork::Impl::AsyncResultUDPRecvEx::vfunction2(AsyncResultUDPRecvEx *this,int param_1);
void __thiscall XInNetwork::Impl::AsyncResultUDPRecv::vfunction2(AsyncResultUDPRecv *this,int param_1);
void __fastcall FUN_10017610(undefined4 *param_1);
Address * __thiscall XInNetwork::Impl::Address::Address(Address *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5);
void __fastcall FUN_10017780(undefined4 *param_1);
Address * __thiscall XInNetwork::Impl::Address::Address(Address *this,undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4);
void __thiscall XInNetwork::Impl::UDPListener::vfunction11(UDPListener *this,int *param_1,_XMemory *param_2);
undefined4 __thiscall XInNetwork::Impl::UDPListener::vfunction12(UDPListener *this,int param_1,void *param_2,uint param_3);
uint __thiscall XInNetwork::Impl::UDPListener::vfunction9(UDPListener *this,byte param_1);
uint __thiscall XInNetwork::Impl::UDPListener::vfunction8(UDPListener *this,byte param_1);
bool __thiscall XInNetwork::Impl::UDPListener::vfunction5(UDPListener *this);
void __thiscall XInNetwork::Impl::UDPListener::vfunction18(UDPListener *this,undefined4 *param_1,undefined4 param_2);
undefined4 * __thiscall XInNetwork::Impl::UDPListener::vfunction17(UDPListener *this);
uint __thiscall XInNetwork::Impl::UDPListener::vfunction16(UDPListener *this,undefined4 param_1);
undefined4 * __thiscall XInNetwork::Impl::UDPListener::vfunction15(UDPListener *this);
uint __thiscall XInNetwork::Impl::UDPListener::vfunction14(UDPListener *this,undefined4 param_1);
void __fastcall FUN_10017ed0(int param_1);
undefined4 FUN_10018010(int param_1,int *param_2,int param_3);
undefined2 __thiscall XInNetwork::Impl::UDPListener::vfunction7(UDPListener *this);
undefined4 __thiscall XInNetwork::Impl::UDPListener::vfunction6(UDPListener *this,undefined2 param_1);
uint __thiscall XInNetwork::Impl::UDPListener::vfunction4(UDPListener *this);
void __thiscall XInNetwork::Impl::UDPListener::vfunction2(UDPListener *this,byte param_1);
void __thiscall XInNetwork::Impl::UDPListener::vfunction3(UDPListener *this);
undefined4 FUN_10018700(undefined4 *param_1,uint param_2);
undefined4 __thiscall FUN_10018970(void *this,int param_1,int *param_2,int param_3);
undefined4 __thiscall XInNetwork::Impl::UDPListener::vfunction13(UDPListener *this,uint param_1);
undefined4 __thiscall XInNetwork::Impl::UDPListener::vfunction10(UDPListener *this,int *param_1,void *param_2,int param_3);
void __thiscall XInNetwork::Impl::UDPListener::~UDPListener(UDPListener *this);
undefined * Catch_All@10018cc7(void);
void __thiscall XInNetwork::Impl::IUDPListener::~IUDPListener(IUDPListener *this);
UDPListener * __thiscall XInNetwork::Impl::UDPListener::UDPListener(UDPListener *this,int param_1,int param_2);
void __thiscall XInNetwork::Impl::UDPListenerEx::vfunction15(UDPListenerEx *this,int *param_1,_XMemory *param_2);
undefined4 __thiscall XInNetwork::Impl::UDPListenerEx::vfunction16(UDPListenerEx *this,int param_1,void *param_2,uint param_3);
void __thiscall XInNetwork::Impl::UDPListenerEx::vfunction11(UDPListenerEx *this,_XMemory *param_1);
undefined4 __thiscall XInNetwork::Impl::UDPListenerEx::vfunction12(UDPListenerEx *this,void *param_1,uint param_2);
void __thiscall XInNetwork::Impl::UDPListenerEx::vfunction19(UDPListenerEx *this);
int __thiscall XInNetwork::Impl::UDPListenerEx::vfunction18(UDPListenerEx *this);
bool __thiscall XInNetwork::Impl::UDPListenerEx::vfunction26(UDPListenerEx *this);
uint __thiscall XInNetwork::Impl::UDPListenerEx::vfunction8(UDPListenerEx *this,byte param_1);
uint __thiscall XInNetwork::Impl::UDPListenerEx::vfunction7(UDPListenerEx *this,byte param_1);
void __thiscall XInNetwork::Impl::UDPListenerEx::vfunction25(UDPListenerEx *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::UDPListenerEx::vfunction24(UDPListenerEx *this,undefined4 *param_1,undefined4 param_2);
undefined4 * __thiscall XInNetwork::Impl::UDPListenerEx::vfunction23(UDPListenerEx *this);
uint __thiscall XInNetwork::Impl::UDPListenerEx::vfunction22(UDPListenerEx *this,undefined4 param_1);
undefined4 * __thiscall XInNetwork::Impl::UDPListenerEx::vfunction21(UDPListenerEx *this);
uint __thiscall XInNetwork::Impl::UDPListenerEx::vfunction20(UDPListenerEx *this,undefined4 param_1);
void __thiscall FUN_100195e0(void *this,int *param_1,uint param_2);
undefined4 FUN_100197d0(int param_1,int *param_2,int param_3);
int __fastcall FUN_10019930(uint param_1,int *param_2);
int __thiscall FUN_10019aa0(void *this,int param_1,_XMemory *param_2);
void __thiscall XInNetwork::Impl::UDPListenerEx::vfunction9(UDPListenerEx *this,int param_1,short param_2);
undefined2 __thiscall XInNetwork::Impl::UDPListenerEx::vfunction6(UDPListenerEx *this);
undefined4 __thiscall XInNetwork::Impl::UDPListenerEx::vfunction5(UDPListenerEx *this,undefined2 param_1);
uint __thiscall XInNetwork::Impl::UDPListenerEx::vfunction4(UDPListenerEx *this);
void __thiscall XInNetwork::Impl::UDPListenerEx::vfunction2(UDPListenerEx *this,byte param_1);
void __thiscall XInNetwork::Impl::UDPListenerEx::vfunction3(UDPListenerEx *this);
undefined4 FUN_1001a2c0(undefined4 *param_1,int *param_2,undefined4 *param_3);
undefined4 __thiscall FUN_1001a5a0(void *this,int param_1,int *param_2,int param_3);
undefined4 FUN_1001a7b0(undefined4 *param_1,undefined4 *param_2);
int __thiscall XInNetwork::Impl::UDPListenerEx::vfunction13(UDPListenerEx *this,undefined4 *param_1);
undefined4 __thiscall FUN_1001aa90(void *this,int param_1,int param_2);
int __thiscall XInNetwork::Impl::UDPListenerEx::vfunction10(UDPListenerEx *this,_XMemory *param_1,void *param_2);
void __thiscall XInNetwork::Impl::UDPListenerEx::~UDPListenerEx(UDPListenerEx *this);
undefined * Catch_All@1001ad41(void);
void __thiscall XInNetwork::Impl::IUDPListenerEx::~IUDPListenerEx(IUDPListenerEx *this);
undefined4 __thiscall XInNetwork::Impl::UDPListenerEx::vfunction17(UDPListenerEx *this,int *param_1,undefined4 *param_2);
undefined4 __thiscall XInNetwork::Impl::UDPListenerEx::vfunction14(UDPListenerEx *this,int *param_1,void *param_2,int param_3);
Address * __thiscall XInNetwork::Impl::Address::Address(Address *this,int param_1,int param_2);
uint __fastcall FUN_1001b080(int param_1);
uint __fastcall FUN_1001b0b0(int param_1);
uint __fastcall FUN_1001b0f0(int param_1);
uint __fastcall FUN_1001b120(int param_1);
void FUN_1001b160(int param_1);
void FUN_1001b1e0(int param_1);
void FUN_1001b260(void);
void __thiscall XInNetwork::Impl::TCPLink::vfunction29(TCPLink *this);
int __thiscall XInNetwork::Impl::TCPLink::vfunction28(TCPLink *this);
void __thiscall XInNetwork::Impl::TCPLink::vfunction27(TCPLink *this);
int __thiscall XInNetwork::Impl::TCPLink::vfunction26(TCPLink *this);
int FUN_1001b320(void);
void __thiscall XInNetwork::Impl::TCPLink::vfunction18(TCPLink *this);
int __thiscall XInNetwork::Impl::TCPLink::vfunction17(TCPLink *this);
void __thiscall XInNetwork::Impl::TCPLink::vfunction16(TCPLink *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::TCPLink::vfunction15(TCPLink *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::TCPLink::vfunction14(TCPLink *this,undefined4 *param_1,undefined4 param_2);
undefined4 __thiscall XInNetwork::Impl::TCPLink::vfunction13(TCPLink *this);
void __thiscall XInNetwork::Impl::TCPLink::vfunction11(TCPLink *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3);
void __thiscall XInNetwork::Impl::TCPLink::vfunction12(TCPLink *this,undefined4 param_1);
void __thiscall XInNetwork::Impl::TCPLink::vfunction8(TCPLink *this,_XMemory *param_1);
undefined4 __thiscall XInNetwork::Impl::TCPLink::vfunction9(TCPLink *this,void *param_1,uint param_2);
int __thiscall XInNetwork::Impl::TCPLink::vfunction6(TCPLink *this);
int __thiscall XInNetwork::Impl::TCPLink::vfunction5(TCPLink *this);
int __thiscall XInNetwork::Impl::TCPLink::vfunction3(TCPLink *this);
void __thiscall XInNetwork::Impl::TCPLink::vfunction2(TCPLink *this);
void FUN_1001b5c0(void);
undefined4 FUN_1001b630(int *param_1,undefined4 *param_2);
undefined1 __thiscall XInNetwork::Impl::TCPLink::vfunction25(TCPLink *this);
uint __thiscall XInNetwork::Impl::TCPLink::vfunction24(TCPLink *this,char param_1);
undefined4 __thiscall XInNetwork::Impl::TCPLink::vfunction23(TCPLink *this);
uint __thiscall XInNetwork::Impl::TCPLink::vfunction22(TCPLink *this,undefined4 param_1);
undefined4 __thiscall XInNetwork::Impl::TCPLink::vfunction21(TCPLink *this);
uint __thiscall XInNetwork::Impl::TCPLink::vfunction20(TCPLink *this,undefined4 param_1);
undefined4 __thiscall XInNetwork::Impl::TCPLink::vfunction19(TCPLink *this);
undefined4 FUN_1001be40(int *param_1,uint param_2);
uint FUN_1001c070(void);
uint __cdecl FUN_1001c190(int param_1,void *param_2,XMemoryPtr *param_3,int param_4,int *param_5,int param_6,int *param_7);
void __thiscall XInNetwork::Impl::TCPLink::vfunction4(TCPLink *this);
bool FUN_1001c450(int *param_1,XMemoryPtr *param_2);
bool FUN_1001c600(int *param_1,XMemoryPtr *param_2);
undefined4 FUN_1001c780(int param_1,undefined4 *param_2,int param_3,int *param_4,int param_5,int param_6);
undefined4 __thiscall FUN_1001cd40(void *this,undefined4 *param_1,int param_2,int *param_3,int param_4,int *param_5);
undefined4 __fastcall FUN_1001d150(int param_1,int *param_2,_XMemory *param_3);
int FUN_1001d440(int *param_1,_XMemory *param_2,int param_3);
void Catch_All@1001d6f0(void);
int __thiscall XInNetwork::Impl::TCPLink::vfunction7(TCPLink *this,_XMemory *param_1,int param_2);
uint __cdecl FUN_1001d760(int param_1,int param_2,XMemoryPtr *param_3,int param_4,int *param_5,int param_6,int param_7);
Address * __thiscall XInNetwork::Impl::Address::Address(Address *this,ManualResetEvent *param_1,int param_2);
undefined4 __thiscall FUN_1001dc90(void *this,undefined *param_1);
void __fastcall FUN_1001e040(undefined4 *param_1);
void Catch_All@1001e12e(void);
void Catch_All@1001e31a(void);
void Catch_All@1001e4eb(void);
undefined4 Catch_All@1001e4fc(void);
undefined4 __thiscall XInNetwork::Impl::TCPLink::vfunction10(TCPLink *this,void *param_1);
uint __fastcall FUN_1001e780(int param_1);
uint __fastcall FUN_1001e7b0(int param_1);
uint __fastcall FUN_1001e7f0(int param_1);
uint __fastcall FUN_1001e820(int param_1);
void FUN_1001e860(int param_1,uint param_2);
uint FUN_1001e900(void *param_1,int *param_2);
void FUN_1001e9c0(int param_1);
void __thiscall XInNetwork::Impl::PreActiveList::~PreActiveList(PreActiveList *this);
PreActiveList * __thiscall XInNetwork::Impl::PreActiveList::PreActiveList(PreActiveList *this);
void FUN_1001eb90(void);
void FUN_1001ec10(void);
int __thiscall XInNetwork::Impl::Filter::vfunction7(Filter *this);
void __thiscall XInNetwork::Impl::Filter::vfunction6(Filter *this);
void __thiscall XInNetwork::Impl::Filter::vfunction3(Filter *this);
void __thiscall XInNetwork::Impl::Filter::vfunction5(Filter *this,char *param_1,rsize_t param_2);
undefined4 __thiscall XInNetwork::Impl::Filter::vfunction2(Filter *this);
void __thiscall XInNetwork::Impl::Filter::~Filter(Filter *this);
void __thiscall XInNetwork::Impl::Filter::vfunction4(Filter *this,char *param_1);
Filter * __thiscall XInNetwork::Impl::Filter::Filter(Filter *this);
void FUN_1001eed0(void);
void __thiscall XInNetwork::Impl::Connector::vfunction13(Connector *this);
int __thiscall XInNetwork::Impl::Connector::vfunction12(Connector *this);
void FUN_1001ef60(void);
void __cdecl FUN_1001efd0(int *param_1,int param_2);
void FUN_1001f048(void);
void Catch_All@1001f0b0(void);
void __cdecl FUN_1001f140(undefined4 param_1,int param_2,undefined4 param_3);
void __cdecl FUN_1001f180(undefined4 param_1,int param_2);
void __cdecl FUN_1001f1b0(int param_1,undefined4 param_2);
void __cdecl FUN_1001f1e0(int param_1);
void __cdecl FUN_1001f210(int param_1,undefined4 param_2);
void __cdecl FUN_1001f240(int param_1);
void __thiscall XInNetwork::Impl::Connector::vfunction22(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction24(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction23(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction21(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction20(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction19(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction18(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction17(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction16(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction15(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction14(Connector *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Connector::vfunction7(Connector *this,undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,int param_5,undefined4 param_6,char param_7,undefined4 *param_8);
void __thiscall XInNetwork::Impl::Connector::vfunction8(Connector *this,int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5);
void __thiscall XInNetwork::Impl::Connector::vfunction9(Connector *this,int param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void __thiscall XInNetwork::Impl::Connector::vfunction2(Connector *this,undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,int param_5,undefined4 param_6,char param_7);
void __thiscall XInNetwork::Impl::Connector::vfunction3(Connector *this,int param_1,undefined4 param_2,int param_3,int *param_4);
void __thiscall XInNetwork::Impl::Connector::vfunction4(Connector *this,int param_1,undefined4 param_2,void *param_3);
void __thiscall XInNetwork::Impl::Connector::~Connector(Connector *this);
void Catch_All@10020b5f(void);
undefined * Catch_All@10020b9e(void);
void __thiscall XInNetwork::Impl::IConnector::~IConnector(IConnector *this);
void __cdecl FUN_10020ca0(int *param_1,int param_2,undefined4 param_3);
void Catch_All@10020d6e(void);
void __cdecl FUN_10020d90(int *param_1,int param_2);
void Catch_All@10020e5a(void);
void __thiscall FUN_10020e70(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5);
void __thiscall FUN_10020f30(void *this,int param_1,undefined4 param_2,int *param_3,undefined4 param_4);
void __thiscall XInNetwork::Impl::Connector::vfunction10(Connector *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,undefined4 param_6,char param_7,void *param_8);
void __thiscall XInNetwork::Impl::Connector::vfunction11(Connector *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 *param_5);
void __thiscall XInNetwork::Impl::Connector::vfunction5(Connector *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,undefined4 param_6,char param_7);
void __thiscall XInNetwork::Impl::Connector::vfunction6(Connector *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
Connector * __thiscall XInNetwork::Impl::Connector::Connector(Connector *this,undefined4 *param_1,int param_2);
void FUN_10021de0(void);
void FUN_10021df0(void);
void FUN_10021e60(int param_1);
void __fastcall XInNetwork::Impl::AsyncConnectThread::AsyncConnectThread_Constructor_or_Destructor(Thread *param_1);
undefined * Catch_All@10022164(void);
void FUN_10022176(void);
AsyncConnectThread * __thiscall XInNetwork::Impl::AsyncConnectThread::AsyncConnectThread(AsyncConnectThread *this,Thread *param_1);
void FUN_10022320(int param_1);
undefined1 FUN_100226e0(int param_1);
undefined4 __thiscall FUN_10022a60(void *this,int param_1);
void __thiscall XInNetwork::Impl::AsyncConnectThread::vfunction2(AsyncConnectThread *this);
void __thiscall XInNetwork::Impl::AcceptorThread::vfunction2(AcceptorThread *this);
void FUN_10022db0(void);
void __thiscall XInNetwork::Impl::AcceptorThread::~AcceptorThread(AcceptorThread *this);
undefined * Catch_All@10022f57(void);
void FUN_10022f69(void);
AcceptorThread * __thiscall XInNetwork::Impl::AcceptorThread::AcceptorThread(undefined4 param_1_00,Thread *param_2,char *param_3,undefined2 param_4,undefined1 param_5,Thread param_6,Thread param_7);
void __thiscall XInNetwork::Impl::Acceptor::vfunction10(Acceptor *this);
int __thiscall XInNetwork::Impl::Acceptor::vfunction9(Acceptor *this);
void __cdecl FUN_10023170(int *param_1,int param_2);
void FUN_100231e8(void);
void Catch_All@10023250(void);
void __thiscall XInNetwork::Impl::Acceptor::vfunction14(Acceptor *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Acceptor::vfunction13(Acceptor *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Acceptor::vfunction12(Acceptor *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Acceptor::vfunction11(Acceptor *this,undefined4 *param_1,undefined4 param_2);
void __thiscall XInNetwork::Impl::Acceptor::vfunction8(Acceptor *this);
undefined2 __thiscall XInNetwork::Impl::Acceptor::vfunction5(Acceptor *this);
uint __thiscall XInNetwork::Impl::Acceptor::vfunction4(Acceptor *this,undefined4 param_1,undefined4 param_2);
undefined4 __thiscall XInNetwork::Impl::Acceptor::vfunction3(Acceptor *this);
uint __thiscall XInNetwork::Impl::Acceptor::vfunction2(Acceptor *this);
void __thiscall XInNetwork::Impl::Acceptor::~Acceptor(Acceptor *this);
void Catch_All@10023a9c(void);
undefined * Catch_All@10023adb(void);
void __thiscall XInNetwork::Impl::IAcceptor::~IAcceptor(IAcceptor *this);
void __cdecl FUN_10023be0(int *param_1,int param_2);
void Catch_All@10023caa(void);
undefined4 __thiscall FUN_10023cc0(void *this,int *param_1,short param_2);
undefined1 __thiscall XInNetwork::Impl::Acceptor::vfunction7(Acceptor *this,byte *param_1,short param_2);
uint __thiscall XInNetwork::Impl::Acceptor::vfunction6(int param_1,byte *param_2,short param_3,Thread param_4);
Acceptor * __thiscall XInNetwork::Impl::Acceptor::Acceptor(Acceptor *this,undefined4 *param_1,int param_2);
void FUN_10024300(void);
void __thiscall XInNetwork::Impl::AsyncResult::~AsyncResult(AsyncResult *this);
void FUN_10024330(void);
void FUN_10024370(void);
bool __thiscall XInNetwork::Impl::AsyncIOThread_IOCP::vfunction7(AsyncIOThread_IOCP *this,int param_1);
bool __thiscall XInNetwork::Impl::AsyncIOThread_IOCP::vfunction6(AsyncIOThread_IOCP *this,int param_1,int param_2);
bool __thiscall XInNetwork::Impl::AsyncIOThread_IOCP::vfunction5(AsyncIOThread_IOCP *this,int param_1);
bool __thiscall XInNetwork::Impl::AsyncIOThread_IOCP::vfunction4(AsyncIOThread_IOCP *this,int param_1,int param_2);
bool __thiscall XInNetwork::Impl::AsyncIOThread_IOCP::vfunction3(AsyncIOThread_IOCP *this);
bool __thiscall XInNetwork::Impl::AsyncIOThread_IOCP::vfunction2(AsyncIOThread_IOCP *this,void *param_1);
void FUN_10024490(void);
void FUN_100244a0(void);
void __thiscall XInNetwork::Impl::IAsyncIOThread::~IAsyncIOThread(IAsyncIOThread *this);
int * __thiscall FUN_100245d0(void *this,int *param_1,int param_2);
void __fastcall FUN_10024780(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5);
void __fastcall FUN_100247d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
void __fastcall FUN_10024810(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __fastcall FUN_10024850(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 FUN_10024910(void);
bool __thiscall FUN_10024a00(void *this,undefined4 param_1);
void FUN_10024a30(void);
int __thiscall FUN_10024a60(void *this,undefined4 param_1,uint *param_2);
int FUN_10024ca0(undefined4 *param_1,int param_2);
undefined4 FUN_10024eb0(void);
undefined4 FUN_10024ee0(void);
int __thiscall XInNetwork::Impl::Address::vfunction6(Address *this);
int __thiscall XInNetwork::Impl::Address::vfunction7(Address *this);
undefined4 __thiscall XInNetwork::Impl::Address::vfunction5(Address *this,undefined4 *param_1);
uint __thiscall XInNetwork::Impl::Address::vfunction4(Address *this,undefined4 *param_1);
uint __thiscall XInNetwork::Impl::Address::vfunction3(Address *this,undefined2 *param_1);
bool __thiscall XInNetwork::Impl::Address::vfunction2(Address *this,char *param_1,rsize_t param_2);
void __thiscall XInNetwork::Impl::IAddress::~IAddress(IAddress *this);
void FUN_10025080(void);
void FUN_100250a0(void);
void FUN_10025110(int param_1);
void __thiscall XInNetwork::Impl::Address::Address(Address *this);
void __thiscall XInNetwork::Impl::Address::Address(Address *this,undefined4 *param_1);
void FUN_10025280(HMODULE param_1,int param_2);
void FUN_10025340(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
undefined4 __thiscall XInNetwork::Impl::WSAInterrupter::vfunction6(WSAInterrupter *this);
void __thiscall XInNetwork::Impl::WSAInterrupter::vfunction5(WSAInterrupter *this,int *param_1);
undefined4 __thiscall XInNetwork::Impl::WSAInterrupter::vfunction4(WSAInterrupter *this);
bool __thiscall XInNetwork::Impl::WSAInterrupter::vfunction3(WSAInterrupter *this);
uint __thiscall XInNetwork::Impl::WSAInterrupter::vfunction2(WSAInterrupter *this);
void __fastcall FUN_10025430(undefined4 *param_1);
void FUN_10025450(void);
undefined4 __thiscall XInNetwork::Impl::Interrupter::vfunction4(Interrupter *this);
void __thiscall XInNetwork::Impl::Interrupter::vfunction3(Interrupter *this);
undefined4 __thiscall XInNetwork::Impl::Interrupter::vfunction2(Interrupter *this);
void __thiscall XInNetwork::Impl::IInterrupter::IInterrupter(IInterrupter *this);
void __thiscall XInNetwork::Impl::IAddress::IAddress(IAddress *this);
void FUN_10025830(void);
void __fastcall FUN_10025900(undefined4 *param_1);
undefined4 Catch_All@10025953(void);
void FUN_10025960(_XMemory *param_1);
void FUN_100259c0(void);
void FUN_10025a70(void);
bool XInNetwork::UDPListenerEx::SetOnICMPPortUnreachable(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_int_void_ptr **param_2,void *param_3);
bool XInNetwork::UDPListenerEx::SetOnReceivedFrom(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr **param_2,void *param_3);
int XInNetwork::UDPListenerEx::GetRecvBufferSize(_THandle *param_1);
bool XInNetwork::UDPListenerEx::SetRecvBufferSize(_THandle *param_1,int param_2);
int XInNetwork::UDPListenerEx::GetSendBufferSize(_THandle *param_1);
bool XInNetwork::UDPListenerEx::SetSendBufferSize(_THandle *param_1,int param_2);
bool XInNetwork::UDPListenerEx::UnlockReadStream(_THandle *param_1);
_THandle * XInNetwork::UDPListenerEx::LockReadStream(_THandle *param_1);
int XInNetwork::UDPListenerEx::RecvFrom(_THandle *param_1,_THandle *param_2,int param_3);
int XInNetwork::UDPListenerEx::SendTo(_THandle *param_1,_THandle *param_2,_XMemory *param_3,int param_4);
int XInNetwork::UDPListenerEx::SendTo(_THandle *param_1,_THandle *param_2,_XMemory *param_3);
int XInNetwork::UDPListenerEx::SendTo(_THandle *param_1,_THandle *param_2,void *param_3,int param_4);
int XInNetwork::UDPListenerEx::Recv(_THandle *param_1,int param_2);
int XInNetwork::UDPListenerEx::Send(_THandle *param_1,_XMemory *param_2,int param_3);
int XInNetwork::UDPListenerEx::Send(_THandle *param_1,_XMemory *param_2);
int XInNetwork::UDPListenerEx::Send(_THandle *param_1,void *param_2,int param_3);
bool XInNetwork::UDPListenerEx::Connect(_THandle *param_1,char *param_2,ushort param_3);
bool XInNetwork::UDPListenerEx::SetBroadCast(_THandle *param_1,bool param_2);
bool XInNetwork::UDPListenerEx::SetPortReuse(_THandle *param_1,bool param_2);
ushort XInNetwork::UDPListenerEx::GetDefaultPort(_THandle *param_1);
bool XInNetwork::UDPListenerEx::SetDefaultPort(_THandle *param_1,ushort param_2);
bool XInNetwork::UDPListenerEx::Stop(_THandle *param_1);
bool XInNetwork::UDPListenerEx::Start(_THandle *param_1,bool param_2);
bool XInNetwork::UDPListenerEx::Start(_THandle *param_1);
void XInNetwork::UDPListenerEx::DestroyHandle(_THandle *param_1);
_THandle * XInNetwork::UDPListenerEx::CreateHandle(_THandle *param_1,Type param_2);
_THandle * XInNetwork::UDPListenerEx::CreateHandle(_THandle *param_1);
bool XInNetwork::UDPListener::SetOnReceivedFrom(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr__XMemory_ptr_uint_void_ptr **param_2,void *param_3);
int XInNetwork::UDPListener::GetRecvBufferSize(_THandle *param_1);
bool XInNetwork::UDPListener::SetRecvBufferSize(_THandle *param_1,int param_2);
int XInNetwork::UDPListener::GetSendBufferSize(_THandle *param_1);
bool XInNetwork::UDPListener::SetSendBufferSize(_THandle *param_1,int param_2);
int XInNetwork::UDPListener::Recv(_THandle *param_1,int param_2);
int XInNetwork::UDPListener::Send(_THandle *param_1,_THandle *param_2,_XMemory *param_3,int param_4);
int XInNetwork::UDPListener::Send(_THandle *param_1,_THandle *param_2,_XMemory *param_3);
int XInNetwork::UDPListener::Send(_THandle *param_1,_THandle *param_2,void *param_3,int param_4);
bool XInNetwork::UDPListener::SetBroadCast(_THandle *param_1,bool param_2);
bool XInNetwork::UDPListener::SetPortReuse(_THandle *param_1,bool param_2);
ushort XInNetwork::UDPListener::GetDefaultPort(_THandle *param_1);
bool XInNetwork::UDPListener::SetDefaultPort(_THandle *param_1,ushort param_2);
bool XInNetwork::UDPListener::WaitForStopComplete(_THandle *param_1,uint param_2);
bool XInNetwork::UDPListener::Stop(_THandle *param_1);
bool XInNetwork::UDPListener::Start(_THandle *param_1,bool param_2);
bool XInNetwork::UDPListener::Start(_THandle *param_1);
void XInNetwork::UDPListener::DestroyHandle(_THandle *param_1);
_THandle * XInNetwork::UDPListener::CreateHandle(_THandle *param_1,Type param_2);
_THandle * XInNetwork::UDPListener::CreateHandle(_THandle *param_1);
bool XInNetwork::Link::UnlockRecvFilterChain(_THandle *param_1);
_THandle * XInNetwork::Link::LockRecvFilterChain(_THandle *param_1);
_XMemory * XInNetwork::Link::GetFilteredReadMemory(_THandle *param_1);
bool XInNetwork::Link::UnlockSendFilterChain(_THandle *param_1);
_THandle * XInNetwork::Link::LockSendFilterChain(_THandle *param_1);
bool XInNetwork::Link::SetOnRecvFilterError(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_uint_int_void_ptr **param_2,void *param_3);
bool XInNetwork::Link::SetOnSendFilterError(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_uint_int_void_ptr **param_2,void *param_3);
bool XInNetwork::Link::SetOnFilteredRecv(_THandle *param_1,_func_void__THandle_ptr_void_ptr **param_2,void *param_3);
bool XInNetwork::Link::GetNoDelay(_THandle *param_1);
bool XInNetwork::Link::SetNoDelay(_THandle *param_1,bool param_2);
int XInNetwork::Link::GetRecvBufferSize(_THandle *param_1);
bool XInNetwork::Link::SetRecvBufferSize(_THandle *param_1,int param_2);
int XInNetwork::Link::GetSendBufferSize(_THandle *param_1);
bool XInNetwork::Link::SetSendBufferSize(_THandle *param_1,int param_2);
bool XInNetwork::Link::UnlockReadStream(_THandle *param_1);
_THandle * XInNetwork::Link::LockReadStream(_THandle *param_1);
void * XInNetwork::Link::GetData(_THandle *param_1);
bool XInNetwork::Link::SetData(_THandle *param_1,void *param_2,_func_void__THandle_ptr_void_ptr **param_3,void *param_4);
bool XInNetwork::Link::SetData(_THandle *param_1,void *param_2);
int XInNetwork::Link::Recv(_THandle *param_1,int param_2);
int XInNetwork::Link::Send(_THandle *param_1,_XMemory *param_2,int param_3);
int XInNetwork::Link::Send(_THandle *param_1,_XMemory *param_2);
int XInNetwork::Link::Send(_THandle *param_1,void *param_2,int param_3);
_THandle * XInNetwork::Link::GetRemoteAddress(_THandle *param_1);
_THandle * XInNetwork::Link::GetLocalAddress(_THandle *param_1);
bool XInNetwork::Link::Close(_THandle *param_1);
int XInNetwork::Link::Release(_THandle *param_1);
int XInNetwork::Link::AddRef(_THandle *param_1);
bool XInNetwork::Interrupter::Reset(_THandle *param_1);
bool XInNetwork::Interrupter::Set(_THandle *param_1);
void XInNetwork::Interrupter::DestroyHandle(_THandle *param_1);
_THandle * XInNetwork::Interrupter::CreateHandle(void);
uint XInNetwork::FilterChain::GetSize(_THandle *param_1);
void XInNetwork::FilterChain::RemoveAllFilters(_THandle *param_1);
bool XInNetwork::FilterChain::RemoveFilter(_THandle *param_1,_THandle *param_2);
void Catch_All@10026baa(void);
_THandle * XInNetwork::FilterChain::GetFilter(_THandle *param_1,uint param_2);
undefined4 Catch_All@10026c6d(void);
uint XInNetwork::FilterChain::GetFilterKey(_THandle *param_1,_THandle *param_2);
void Catch_All@10026db4(void);
uint XInNetwork::FilterChain::GetIndex(_THandle *param_1,_THandle *param_2);
void Catch_All@10026eda(void);
bool XInNetwork::FilterChain::AddFilter(_THandle *param_1,_THandle *param_2,uint param_3);
void Catch_All@1002700a(void);
bool XInNetwork::Filter::GetFilterName(_THandle *param_1,char *param_2,uint param_3);
bool XInNetwork::Filter::SetFilterName(_THandle *param_1,char *param_2);
void XInNetwork::Filter::DestroyHandle(_THandle *param_1);
_THandle * XInNetwork::Filter::CreateHandle(char *param_1);
bool XInNetwork::Connector::SetOnConnectErrorEx(_THandle *param_1,_func_void__THandle_ptr_int_void_ptr_void_ptr **param_2,void *param_3);
bool XInNetwork::Connector::SetOnConnectError(_THandle *param_1,_func_void__THandle_ptr_int_void_ptr **param_2,void *param_3);
bool XInNetwork::Connector::SetOnDisconnected(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict **param_2,void *param_3);
bool XInNetwork::Connector::SetOnTimeoutEx(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr_void_ptr **param_2,void *param_3);
bool XInNetwork::Connector::SetOnTimeout(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict **param_2,void *param_3);
bool XInNetwork::Connector::SetOnInterruptedEx(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr_void_ptr **param_2,void *param_3);
bool XInNetwork::Connector::SetOnInterrupted(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict **param_2,void *param_3);
bool XInNetwork::Connector::SetOnSent(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict **param_2,void *param_3);
bool XInNetwork::Connector::SetOnReceived(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict **param_2,void *param_3);
bool XInNetwork::Connector::SetOnConnectedEx(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr_void_ptr **param_2,void *param_3);
bool XInNetwork::Connector::SetOnConnected(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict **param_2,void *param_3);
bool XInNetwork::Connector::UnlockActiveLinks(_THandle *param_1);
_THandle * XInNetwork::Connector::LockActiveLinks(_THandle *param_1);
bool XInNetwork::Connector::ConnectEx(_THandle *param_1,char *param_2,ushort param_3,int param_4,_THandle *param_5,char *param_6,ushort param_7,bool param_8,void *param_9,bool param_10);
bool XInNetwork::Connector::ConnectEx(_THandle *param_1,char *param_2,ushort param_3,int param_4,_THandle *param_5,void *param_6,bool param_7);
bool XInNetwork::Connector::ConnectEx(_THandle *param_1,char *param_2,ushort param_3,int param_4,void *param_5,bool param_6);
bool XInNetwork::Connector::ConnectEx(_THandle *param_1,char *param_2,ushort param_3,void *param_4,bool param_5);
bool XInNetwork::Connector::ConnectEx(_THandle *param_1,char *param_2,ushort param_3,int param_4,_THandle *param_5,char *param_6,ushort param_7,bool param_8,void *param_9);
bool XInNetwork::Connector::ConnectEx(_THandle *param_1,char *param_2,ushort param_3,int param_4,_THandle *param_5,void *param_6);
bool XInNetwork::Connector::ConnectEx(_THandle *param_1,char *param_2,ushort param_3,int param_4,void *param_5);
bool XInNetwork::Connector::ConnectEx(_THandle *param_1,char *param_2,ushort param_3,void *param_4);
bool XInNetwork::Connector::Connect(_THandle *param_1,char *param_2,ushort param_3,int param_4,_THandle *param_5,char *param_6,ushort param_7,bool param_8,bool param_9);
bool XInNetwork::Connector::Connect(_THandle *param_1,char *param_2,ushort param_3,int param_4,_THandle *param_5,bool param_6);
bool XInNetwork::Connector::Connect(_THandle *param_1,char *param_2,ushort param_3,int param_4,bool param_5);
bool XInNetwork::Connector::Connect(_THandle *param_1,char *param_2,ushort param_3,bool param_4);
bool XInNetwork::Connector::Connect(_THandle *param_1,char *param_2,ushort param_3,int param_4,_THandle *param_5,char *param_6,ushort param_7,bool param_8);
bool XInNetwork::Connector::Connect(_THandle *param_1,char *param_2,ushort param_3,int param_4,_THandle *param_5);
bool XInNetwork::Connector::Connect(_THandle *param_1,char *param_2,ushort param_3,int param_4);
bool XInNetwork::Connector::Connect(_THandle *param_1,char *param_2,ushort param_3);
void XInNetwork::Connector::DestroyHandle(_THandle *param_1);
_THandle * XInNetwork::Connector::CreateHandle(_THandle *param_1,Type param_2);
_THandle * XInNetwork::Connector::CreateHandle(_THandle *param_1);
sockaddr_in * XInNetwork::Address::GetAddress(_THandle *param_1);
bool XInNetwork::Address::GetFamily(_THandle *param_1,Type *param_2);
bool XInNetwork::Address::GetPort(_THandle *param_1,ushort *param_2);
bool XInNetwork::Address::GetIPAddress(_THandle *param_1,char *param_2,uint param_3);
void XInNetwork::Address::DestroyHandle(_THandle *param_1);
_THandle * XInNetwork::Address::CreateHandle(ulong param_1,ushort param_2,Type param_3);
_THandle * XInNetwork::Address::CreateHandle(char *param_1,ushort param_2,Type param_3);
uint XInNetwork::ActiveLinkList::GetSize(_THandle *param_1);
_THandle * XInNetwork::ActiveLinkList::GetLink(_THandle *param_1,uint param_2);
bool XInNetwork::Acceptor::SetOnClosed(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict1 **param_2,void *param_3);
bool XInNetwork::Acceptor::SetOnSent(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict1 **param_2,void *param_3);
bool XInNetwork::Acceptor::SetOnReceived(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict1 **param_2,void *param_3);
bool XInNetwork::Acceptor::SetOnAccepted(_THandle *param_1,_func_void__THandle_ptr__THandle_ptr_void_ptr.conflict1 **param_2,void *param_3);
bool XInNetwork::Acceptor::UnlockActiveLinks(_THandle *param_1);
_THandle * XInNetwork::Acceptor::LockActiveLinks(_THandle *param_1);
bool XInNetwork::Acceptor::ClearBindings(_THandle *param_1);
bool XInNetwork::Acceptor::RemoveBinding(_THandle *param_1,char *param_2,ushort param_3);
bool XInNetwork::Acceptor::AddBinding(_THandle *param_1,char *param_2,ushort param_3,bool param_4);
bool XInNetwork::Acceptor::AddBinding(_THandle *param_1,char *param_2,ushort param_3);
ushort XInNetwork::Acceptor::GetDefaultPort(_THandle *param_1);
bool XInNetwork::Acceptor::SetDefaultPort(_THandle *param_1,ushort param_2,bool param_3);
bool XInNetwork::Acceptor::SetDefaultPort(_THandle *param_1,ushort param_2);
bool XInNetwork::Acceptor::Stop(_THandle *param_1);
bool XInNetwork::Acceptor::Start(_THandle *param_1);
void XInNetwork::Acceptor::DestroyHandle(_THandle *param_1);
_THandle * XInNetwork::Acceptor::CreateHandle(_THandle *param_1,Type param_2);
_THandle * XInNetwork::Acceptor::CreateHandle(_THandle *param_1);
void __thiscall XInNetwork::Impl::AsyncResultUDPICMPPortUnreachable::vfunction2(AsyncResultUDPICMPPortUnreachable *this);
void __fastcall FUN_10027f20(undefined4 *param_1);
Address * __thiscall XInNetwork::Impl::Address::Address(Address *this,undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4);
void __thiscall XInNetwork::Impl::AsyncResultTimeoutEx::vfunction2(AsyncResultTimeoutEx *this);
void FUN_100280e0(void);
void __thiscall XInNetwork::Impl::AsyncResultTimeoutEx::AsyncResultTimeoutEx(AsyncResultTimeoutEx *this,int param_1,undefined4 *param_2,undefined4 param_3);
void __thiscall XInNetwork::Impl::AsyncResultTimeout::vfunction2(AsyncResultTimeout *this);
void FUN_100281c0(void);
void __thiscall XInNetwork::Impl::AsyncResultTimeout::AsyncResultTimeout(AsyncResultTimeout *this,int param_1,undefined4 *param_2);
void __fastcall FUN_10028270(undefined4 *param_1);
AsyncResultSend * __thiscall XInNetwork::Impl::AsyncResultSend::AsyncResultSend(AsyncResultSend *this,undefined4 *param_1,undefined4 param_2,int *param_3);
void __thiscall XInNetwork::Impl::AsyncResultSend::vfunction2(AsyncResultSend *this,uint param_1);
void Catch_All@1002855b(void);
void __fastcall FUN_10028580(undefined4 *param_1);
AsyncResultRecv * __thiscall XInNetwork::Impl::AsyncResultRecv::AsyncResultRecv(AsyncResultRecv *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5);
void __thiscall XInNetwork::Impl::AsyncResultRecv::vfunction2(AsyncResultRecv *this,uint param_1);
void Catch_All@10028cd0(void);
void __thiscall XInNetwork::Impl::AsyncResultInterruptEx::vfunction2(AsyncResultInterruptEx *this);
void FUN_10028d20(void);
void __thiscall XInNetwork::Impl::AsyncResultInterruptEx::AsyncResultInterruptEx(AsyncResultInterruptEx *this,int param_1,undefined4 *param_2,undefined4 param_3);
void __thiscall XInNetwork::Impl::AsyncResultInterrupt::vfunction2(AsyncResultInterrupt *this);
void FUN_10028e00(void);
void __thiscall XInNetwork::Impl::AsyncResultInterrupt::AsyncResultInterrupt(AsyncResultInterrupt *this,int param_1,undefined4 *param_2);
void __fastcall FUN_10028eb0(undefined4 *param_1);
AsyncResultDisconnect * __thiscall XInNetwork::Impl::AsyncResultDisconnect::AsyncResultDisconnect(AsyncResultDisconnect *this,undefined4 *param_1,int *param_2);
void __thiscall XInNetwork::Impl::AsyncResultDisconnect::vfunction2(AsyncResultDisconnect *this);
void __thiscall XInNetwork::Impl::AsyncResultConnectErrorEx::vfunction2(AsyncResultConnectErrorEx *this);
void FUN_100290b0(void);
void __thiscall XInNetwork::Impl::AsyncResultConnectErrorEx::AsyncResultConnectErrorEx(AsyncResultConnectErrorEx *this,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void __thiscall XInNetwork::Impl::AsyncResultConnectError::vfunction2(AsyncResultConnectError *this);
void FUN_100291a0(void);
void __thiscall XInNetwork::Impl::AsyncResultConnectError::AsyncResultConnectError(AsyncResultConnectError *this,int param_1,undefined4 *param_2,undefined4 param_3);
void FUN_10029250(void);
void __thiscall XInNetwork::Impl::AsyncResultConnectEx::AsyncResultConnectEx(AsyncResultConnectEx *this,int param_1,undefined4 *param_2,undefined4 param_3);
void FUN_10029300(void);
void __thiscall XInNetwork::Impl::AsyncResultConnect::AsyncResultConnect(AsyncResultConnect *this,int param_1,undefined4 *param_2);
void __thiscall XInNetwork::Impl::AsyncResultConnectEx::vfunction2(AsyncResultConnectEx *this);
void __thiscall XInNetwork::Impl::AsyncResultConnect::vfunction2(AsyncResultConnect *this);
void __fastcall FUN_10029590(undefined4 *param_1);
void FUN_100295f0(void);
undefined1 __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::vfunction3(AsyncIOThread_AsyncEvent *this);
undefined1 __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::vfunction2(AsyncIOThread_AsyncEvent *this);
void __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::~AsyncIOThread_AsyncEvent(AsyncIOThread_AsyncEvent *this);
void __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::vfunction7(AsyncIOThread_AsyncEvent *this,int param_1,int param_2);
void __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::vfunction5(AsyncIOThread_AsyncEvent *this,int param_1,int param_2);
void __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::vfunction6(AsyncIOThread_AsyncEvent *this,int param_1);
void __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::vfunction4(AsyncIOThread_AsyncEvent *this,int param_1);
AsyncIOThread_AsyncEvent * __thiscall XInNetwork::Impl::AsyncIOThread_AsyncEvent::AsyncIOThread_AsyncEvent(AsyncIOThread_AsyncEvent *this,undefined4 *param_1,undefined4 param_2);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
void Unwind@100298a0(void);
void Unwind@100298e0(void);
void Unwind@100298ec(void);
void Unwind@10029920(void);
void Unwind@10029950(void);
void Unwind@10029981(void);
void Unwind@100299b2(void);
void Unwind@100299e3(void);
void Unwind@10029a14(void);
void Unwind@10029a45(void);
void Unwind@10029a76(void);
void Unwind@10029aa7(void);
void Unwind@10029ad8(void);
void Unwind@10029b09(void);
void Unwind@10029b3a(void);
void Unwind@10029b6b(void);
void Unwind@10029b9c(void);
void Unwind@10029bcd(void);
void Unwind@10029bf3(void);
void Unwind@10029bfe(void);
void Unwind@10029c3f(void);
void Unwind@10029c7e(void);
void Unwind@10029caf(void);
void Unwind@10029ce0(void);
void Unwind@10029d11(void);
void Unwind@10029d42(void);
void Unwind@10029d73(void);
void Unwind@10029db2(void);
void Unwind@10029dc0(void);
void Unwind@10029dea(void);
void Unwind@10029df5(void);
void Unwind@10029e40(void);
void Unwind@10029e48(void);
void Unwind@10029e53(void);
void Unwind@10029e94(void);
void Unwind@10029eb7(void);
void Unwind@10029eda(void);
void Unwind@10029efd(void);
void Unwind@10029f05(void);
void Unwind@10029f2b(void);
void Unwind@10029f4e(void);
void Unwind@10029f56(void);
void Unwind@10029f7c(void);
void Unwind@10029f9f(void);
void Unwind@10029fc2(void);
void Unwind@10029fe5(void);
void Unwind@10029fed(void);
void Unwind@1002a013(void);
void Unwind@1002a036(void);
void Unwind@1002a059(void);
void Unwind@1002a07c(void);
void Unwind@1002a09f(void);
void Unwind@1002a0c2(void);
void Unwind@1002a0e5(void);
void Unwind@1002a108(void);
void Unwind@1002a12b(void);
void Unwind@1002a133(void);
void Unwind@1002a13e(void);
void Unwind@1002a149(void);
void Unwind@1002a151(void);
void Unwind@1002a181(void);
void Unwind@1002a1a4(void);
void Unwind@1002a1c7(void);
void Unwind@1002a1f8(void);
void Unwind@1002a201(void);
void Unwind@1002a25d(void);
void Unwind@1002a280(void);
void Unwind@1002a2a3(void);
void Unwind@1002a2c6(void);
void Unwind@1002a2e9(void);
void Unwind@1002a30c(void);
void Unwind@1002a314(void);
void Unwind@1002a344(void);
void Unwind@1002a367(void);
void Unwind@1002a38a(void);
void Unwind@1002a3ad(void);
void Unwind@1002a3b5(void);
void Unwind@1002a3e5(void);
void Unwind@1002a3ed(void);
void Unwind@1002a41d(void);
void Unwind@1002a440(void);
void Unwind@1002a463(void);
void Unwind@1002a486(void);
void Unwind@1002a4a9(void);
void Unwind@1002a4cc(void);
void Unwind@1002a4ef(void);
void Unwind@1002a4f7(void);
void Unwind@1002a527(void);
void Unwind@1002a54a(void);
void Unwind@1002a56d(void);
void Unwind@1002a590(void);
void Unwind@1002a598(void);
void Unwind@1002a5c8(void);
void Unwind@1002a5eb(void);
void Unwind@1002a60e(void);
void Unwind@1002a616(void);
void Unwind@1002a646(void);
void Unwind@1002a64e(void);
void Unwind@1002a67e(void);
void Unwind@1002a6a1(void);
void Unwind@1002a6a9(void);
void Unwind@1002a6b1(void);
void Unwind@1002a6e5(void);
void Unwind@1002a708(void);
void Unwind@1002a72b(void);
void Unwind@1002a74e(void);
void Unwind@1002a771(void);
void Unwind@1002a794(void);
void Unwind@1002a7b7(void);
void Unwind@1002a7bf(void);
void Unwind@1002a7c7(void);
void Unwind@1002a7f7(void);
void Unwind@1002a81a(void);
void Unwind@1002a83d(void);
void Unwind@1002a860(void);
void Unwind@1002a883(void);
void Unwind@1002a8a6(void);
void Unwind@1002a8c9(void);
void Unwind@1002a8ec(void);
void Unwind@1002a90f(void);
void Unwind@1002a932(void);
void Unwind@1002a955(void);
void Unwind@1002a978(void);
void Unwind@1002a99b(void);
void Unwind@1002a9be(void);
void Unwind@1002a9e1(void);
void Unwind@1002aa04(void);
void Unwind@1002aa0c(void);
void Unwind@1002aa14(void);
void Unwind@1002aa1c(void);
void Unwind@1002aa24(void);
void Unwind@1002aa2c(void);
void Unwind@1002aa34(void);
void Unwind@1002aa64(void);
void Unwind@1002aa6c(void);
void Unwind@1002aa74(void);
void Unwind@1002aa7c(void);
void Unwind@1002aa84(void);
void Unwind@1002aa8c(void);
void Unwind@1002aabc(void);
void Unwind@1002aac4(void);
void Unwind@1002aacc(void);
void Unwind@1002aad4(void);
void Unwind@1002aadc(void);
void Unwind@1002ab0c(void);
void Unwind@1002ab14(void);
void Unwind@1002ab1c(void);
void Unwind@1002ab24(void);
void Unwind@1002ab2c(void);
void Unwind@1002ab34(void);
void Unwind@1002ab3c(void);
void Unwind@1002ab6c(void);
void Unwind@1002ab74(void);
void Unwind@1002ab7c(void);
void Unwind@1002ab84(void);
void Unwind@1002ab8c(void);
void Unwind@1002ab94(void);
void Unwind@1002abc4(void);
void Unwind@1002abcc(void);
void Unwind@1002abd4(void);
void Unwind@1002abdc(void);
void Unwind@1002abe4(void);
void Unwind@1002ac14(void);
void Unwind@1002ac37(void);
void Unwind@1002ac40(void);
void Unwind@1002ac4c(void);
void Unwind@1002ac57(void);
void Unwind@1002ac62(void);
void Unwind@1002ac6d(void);
void Unwind@1002ac93(void);
void Unwind@1002ac9c(void);
void Unwind@1002aca8(void);
void Unwind@1002acb3(void);
void Unwind@1002acbe(void);
void Unwind@1002acc9(void);
void Unwind@1002acef(void);
void Unwind@1002ad1f(void);
void Unwind@1002ad4f(void);
void Unwind@1002ad58(void);
void Unwind@1002ad63(void);
void Unwind@1002ad6e(void);
void Unwind@1002ad95(void);
void Unwind@1002adb8(void);
void Unwind@1002addb(void);
void Unwind@1002adfe(void);
void Unwind@1002ae21(void);
void Unwind@1002ae44(void);
void Unwind@1002ae67(void);
void Unwind@1002ae8a(void);
void Unwind@1002aead(void);
void Unwind@1002aeb5(void);
void Unwind@1002aec0(void);
void Unwind@1002aecb(void);
void Unwind@1002aed7(void);
void Unwind@1002aee2(void);
void Unwind@1002aeef(void);
void Unwind@1002aefa(void);
void Unwind@1002af02(void);
void Unwind@1002af25(void);
void Unwind@1002af2d(void);
void Unwind@1002af38(void);
void Unwind@1002af5e(void);
void Unwind@1002af66(void);
void Unwind@1002af71(void);
void Unwind@1002af97(void);
void Unwind@1002af9f(void);
void Unwind@1002afaa(void);
void Unwind@1002afd0(void);
void Unwind@1002afd8(void);
void Unwind@1002afe3(void);
void Unwind@1002b009(void);
void Unwind@1002b011(void);
void Unwind@1002b01c(void);
void Unwind@1002b042(void);
void Unwind@1002b04a(void);
void Unwind@1002b055(void);
void Unwind@1002b07b(void);
void Unwind@1002b083(void);
void Unwind@1002b08e(void);
void Unwind@1002b0b4(void);
void Unwind@1002b0bc(void);
void Unwind@1002b0c7(void);
void Unwind@1002b0ed(void);
void Unwind@1002b0f5(void);
void Unwind@1002b100(void);
void Unwind@1002b126(void);
void Unwind@1002b12e(void);
void Unwind@1002b139(void);
void Unwind@1002b15f(void);
void Unwind@1002b167(void);
void Unwind@1002b16f(void);
void Unwind@1002b1a3(void);
void Unwind@1002b1ab(void);
void Unwind@1002b1b3(void);
void Unwind@1002b1e7(void);
void Unwind@1002b1ef(void);
void Unwind@1002b1f7(void);
void Unwind@1002b210(void);
void Unwind@1002b218(void);
void Unwind@1002b24c(void);
void Unwind@1002b254(void);
void Unwind@1002b25c(void);
void Unwind@1002b28c(void);
void Unwind@1002b294(void);
void Unwind@1002b29c(void);
void Unwind@1002b2b5(void);
void Unwind@1002b2bd(void);
void Unwind@1002b2f1(void);
void Unwind@1002b2f9(void);
void Unwind@1002b301(void);
void Unwind@1002b335(void);
void Unwind@1002b33d(void);
void Unwind@1002b348(void);
void Unwind@1002b353(void);
void Unwind@1002b35f(void);
void Unwind@1002b36a(void);
void Unwind@1002b375(void);
void Unwind@1002b380(void);
void Unwind@1002b3a8(void);
void Unwind@1002b3cb(void);
void Unwind@1002b3d3(void);
void Unwind@1002b3f6(void);
void Unwind@1002b3fe(void);
void Unwind@1002b421(void);
void Unwind@1002b429(void);
void Unwind@1002b44c(void);
void Unwind@1002b454(void);
void Unwind@1002b477(void);
void Unwind@1002b47f(void);
void Unwind@1002b48a(void);
void Unwind@1002b495(void);
void Unwind@1002b4a1(void);
void Unwind@1002b4ae(void);
void Unwind@1002b4b9(void);
void Unwind@1002b4c4(void);
void Unwind@1002b4cc(void);
void Unwind@1002b4ef(void);
void Unwind@1002b520(void);
void Unwind@1002b549(void);
void Unwind@1002b588(void);
void Unwind@1002b590(void);
void Unwind@1002b5b6(void);
void Unwind@1002b5be(void);
void Unwind@1002b5c9(void);
void Unwind@1002b5d4(void);
void Unwind@1002b5e0(void);
void Unwind@1002b5eb(void);
void Unwind@1002b611(void);
void Unwind@1002b619(void);
void Unwind@1002b622(void);
void Unwind@1002b62a(void);
void Unwind@1002b64d(void);
void Unwind@1002b655(void);
void Unwind@1002b65e(void);
void Unwind@1002b681(void);
void Unwind@1002b689(void);
void Unwind@1002b692(void);
void Unwind@1002b6b5(void);
void Unwind@1002b6be(void);
void Unwind@1002b6c6(void);
void Unwind@1002b6e9(void);
void Unwind@1002b6f1(void);
void Unwind@1002b714(void);
void Unwind@1002b71c(void);
void Unwind@1002b727(void);
void Unwind@1002b733(void);
void Unwind@1002b73f(void);
void Unwind@1002b74a(void);
void Unwind@1002b755(void);
void Unwind@1002b760(void);
void Unwind@1002b76d(void);
void Unwind@1002b77c(void);
void Unwind@1002b78b(void);
void Unwind@1002b79a(void);
void Unwind@1002b7a9(void);
void Unwind@1002b7b4(void);
void Unwind@1002b7dc(void);
void Unwind@1002b7e4(void);
void Unwind@1002b80a(void);
void Unwind@1002b82d(void);
void Unwind@1002b850(void);
void Unwind@1002b873(void);
void Unwind@1002b87c(void);
void Unwind@1002b887(void);
void Unwind@1002b892(void);
void Unwind@1002b8b9(void);
void Unwind@1002b8dc(void);
void Unwind@1002b8ff(void);
void Unwind@1002b922(void);
void Unwind@1002b92a(void);
void Unwind@1002b950(void);
void Unwind@1002b974(void);
void Unwind@1002b97c(void);
void Unwind@1002b987(void);
void Unwind@1002b993(void);
void Unwind@1002b99e(void);
void Unwind@1002b9a9(void);
void Unwind@1002b9b4(void);
void Unwind@1002b9da(void);
void Unwind@1002ba0a(void);
void Unwind@1002ba30(void);
void Unwind@1002ba56(void);
void Unwind@1002ba79(void);
void Unwind@1002ba9e(void);
void Unwind@1002baa8(void);
void Unwind@1002bacb(void);
void Unwind@1002bad5(void);
void Unwind@1002baf8(void);
void Unwind@1002bb1e(void);
void Unwind@1002bb26(void);
void Unwind@1002bb2f(void);
void Unwind@1002bb37(void);
void Unwind@1002bb40(void);
void Unwind@1002bb63(void);
void Unwind@1002bb6b(void);
void Unwind@1002bb73(void);
void Unwind@1002bb96(void);
void Unwind@1002bb9e(void);
void Unwind@1002bba6(void);
void Unwind@1002bbc9(void);
void Unwind@1002bbd4(void);
void Unwind@1002bbe0(void);
void Unwind@1002bbeb(void);
void Unwind@1002bc17(void);
void Unwind@1002bc1f(void);
void Unwind@1002bc2a(void);
void Unwind@1002bc36(void);
void Unwind@1002bc42(void);
void Unwind@1002bc4d(void);
void Unwind@1002bc58(void);
void Unwind@1002bc63(void);
void Unwind@1002bc70(void);
void Unwind@1002bc7f(void);
void Unwind@1002bc8e(void);
void Unwind@1002bc9d(void);
void Unwind@1002bcac(void);
void Unwind@1002bcb9(void);
void Unwind@1002bcc1(void);
void Unwind@1002bcc9(void);
void Unwind@1002bcd1(void);
void Unwind@1002bcd9(void);
void Unwind@1002bcfc(void);
void Unwind@1002bd1f(void);
void Unwind@1002bd42(void);
void Unwind@1002bd4a(void);
void Unwind@1002bd6d(void);
void Unwind@1002bd75(void);
void Unwind@1002bd98(void);
void Unwind@1002bda0(void);
void Unwind@1002bda8(void);
void Unwind@1002bdb0(void);
void Unwind@1002bdb8(void);
void Unwind@1002bde8(void);
void Unwind@1002bdf0(void);
void Unwind@1002bdf8(void);
void Unwind@1002be00(void);
void Unwind@1002be30(void);
void Unwind@1002be38(void);
void Unwind@1002be40(void);
void Unwind@1002be48(void);
void Unwind@1002be50(void);
void Unwind@1002be80(void);
void Unwind@1002be88(void);
void Unwind@1002be90(void);
void Unwind@1002be98(void);
void Unwind@1002bec8(void);
void Unwind@1002bed0(void);
void Unwind@1002bedb(void);
void Unwind@1002bf01(void);
void Unwind@1002bf0c(void);
void Unwind@1002bf32(void);
void Unwind@1002bf62(void);
void Unwind@1002bf6a(void);
void Unwind@1002bf75(void);
void Unwind@1002bf81(void);
void Unwind@1002bf8c(void);
void Unwind@1002bf97(void);
void Unwind@1002bfa2(void);
void Unwind@1002bfad(void);
void Unwind@1002bfd6(void);
void Unwind@1002bfdf(void);
void Unwind@1002bfe8(void);
void Unwind@1002bff1(void);
void Unwind@1002bffa(void);
void Unwind@1002c01d(void);
void Unwind@1002c028(void);
void Unwind@1002c033(void);
void Unwind@1002c059(void);
void Unwind@1002c07f(void);
void Unwind@1002c087(void);
void Unwind@1002c08f(void);
void Unwind@1002c097(void);
void Unwind@1002c0bc(void);
void Unwind@1002c0e2(void);
void Unwind@1002c108(void);
void Unwind@1002c110(void);
void Unwind@1002c11b(void);
void Unwind@1002c126(void);
void Unwind@1002c131(void);
void Unwind@1002c13c(void);
void Unwind@1002c148(void);
void Unwind@1002c155(void);
void Unwind@1002c15d(void);
void Unwind@1002c168(void);
void Unwind@1002c18e(void);
void Unwind@1002c196(void);
void Unwind@1002c1a1(void);
void Unwind@1002c1ac(void);
void Unwind@1002c1b7(void);
void Unwind@1002c1c2(void);
void Unwind@1002c1ce(void);
void Unwind@1002c1d9(void);
void Unwind@1002c201(void);
void Unwind@1002c227(void);
void Unwind@1002c273(void);
void Unwind@1002c299(void);
void Unwind@1002c2bf(void);
void Unwind@1002c2c7(void);
void Unwind@1002c2d2(void);
void Unwind@1002c2dd(void);
void Unwind@1002c2e8(void);
void Unwind@1002c2f4(void);
void Unwind@1002c2ff(void);
void Unwind@1002c325(void);
void Unwind@1002c32d(void);
void Unwind@1002c338(void);
void Unwind@1002c343(void);
void Unwind@1002c34e(void);
void Unwind@1002c35a(void);
void Unwind@1002c365(void);
void Unwind@1002c370(void);
void Unwind@1002c37b(void);
void Unwind@1002c3a1(void);
void Unwind@1002c3c7(void);
void Unwind@1002c3f0(void);
void Unwind@1002c410(void);
void Unwind@1002c440(void);
void Unwind@1002c44b(void);
void Unwind@1002c480(void);
void Unwind@1002c4b0(void);
void Unwind@1002c4e0(void);
void Unwind@1002c510(void);
void Unwind@1002c530(void);
void Unwind@1002c539(void);
void Unwind@1002c547(void);
void Unwind@1002c580(void);
void Unwind@1002c589(void);
void Unwind@1002c5c0(void);
void Unwind@1002c5f0(void);
void Unwind@1002c620(void);
void Unwind@1002c650(void);
void Unwind@1002c680(void);
void Unwind@1002c6a0(void);
void Unwind@1002c6f0(void);
void Unwind@1002c720(void);
void Unwind@1002c750(void);
void Unwind@1002c780(void);
void Unwind@1002c789(void);
void Unwind@1002c7c0(void);
void Unwind@1002c7cb(void);
void Unwind@1002c800(void);
void Unwind@1002c830(void);
void Unwind@1002c860(void);
void Unwind@1002c8b0(void);
void Unwind@1002c8e0(void);
void Unwind@1002c910(void);
void Unwind@1002c940(void);
void Unwind@1002c970(void);
void Unwind@1002c9a0(void);
void Unwind@1002c9d0(void);
void Unwind@1002ca00(void);
void Unwind@1002ca30(void);
void Unwind@1002ca80(void);
void Unwind@1002cab0(void);
void Unwind@1002cab9(void);
void Unwind@1002caf0(void);
void Unwind@1002cb30(void);
void Unwind@1002cb39(void);
void Unwind@1002cb70(void);
void Unwind@1002cbb0(void);
void Unwind@1002cbb9(void);
void Unwind@1002cbf0(void);
void Unwind@1002cbf9(void);
void Unwind@1002cc30(void);
void Unwind@1002cc35(void);
void Unwind@1002cc60(void);
void Unwind@1002cc65(void);
void Unwind@1002cc90(void);
void FUN_1002ccc0(void);
void FUN_1002cce0(void);
void FUN_1002cd00(void);
void FUN_1002cd20(void);
void FUN_1002cd5c(void);
void __thiscall std::bad_alloc::~bad_alloc(void);

