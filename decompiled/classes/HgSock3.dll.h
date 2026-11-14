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
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
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

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct _s_ESTypeList ESTypeList;

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

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

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef long LONG_PTR;

typedef LONG_PTR LRESULT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

struct HWND__ {
    int unused;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef char CHAR;

typedef CHAR *LPCSTR;

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HINSTANCE__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct HBRUSH__ {
    int unused;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef ulong DWORD;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef void *HANDLE;

typedef ulong ULONG_PTR;

typedef ushort WORD;

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

typedef uchar BYTE;

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

typedef CHAR *LPSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

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

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef ULONG_PTR DWORD_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[35];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef DWORD *LPDWORD;

typedef WORD ATOM;

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ {
    int unused;
};

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef HINSTANCE HMODULE;

typedef struct HMENU__ *HMENU;

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

typedef void (*PMFN)(void *);

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;


// WARNING! conflicting data type names: /ehdata.h/TypeDescriptor - /TypeDescriptor

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s_CatchableType {
    uint properties;
    struct TypeDescriptor *pType;
    struct PMD thisDisplacement;
    int sizeOrOffset;
    PMFN copyFunction;
};

typedef struct _s_CatchableType CatchableType;

typedef struct _s_CatchableTypeArray _s_CatchableTypeArray, *P_s_CatchableTypeArray;

typedef struct _s_CatchableTypeArray CatchableTypeArray;

struct _s_CatchableTypeArray {
    int nCatchableTypes;
    CatchableType *arrayOfCatchableTypes[0];
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int (*pForwardCompat)(void);
    CatchableTypeArray *pCatchableTypeArray;
};

typedef char *va_list;

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CHgSecureSocket CHgSecureSocket, *PCHgSecureSocket;

struct CHgSecureSocket { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct CPacketData CPacketData, *PCPacketData;

struct CPacketData { // PlaceHolder Structure
};

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr { // PlaceHolder Structure
};

typedef struct CHgtpSocket CHgtpSocket, *PCHgtpSocket;

struct CHgtpSocket { // PlaceHolder Structure
};

typedef struct ISocket ISocket, *PISocket;

struct ISocket { // PlaceHolder Structure
};

typedef struct CHgAsyncSocket CHgAsyncSocket, *PCHgAsyncSocket;

struct CHgAsyncSocket { // PlaceHolder Structure
};

typedef enum SocketState {
} SocketState;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Structure
};

typedef struct list<CPacketData*,std::allocator<CPacketData*>_> list<CPacketData*,std::allocator<CPacketData*>_>, *Plist<CPacketData*,std::allocator<CPacketData*>_>;

struct list<CPacketData*,std::allocator<CPacketData*>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef longlong __time64_t;

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;




void FUN_60601000(void);
void __thiscall CHgAsyncSocket::CHgAsyncSocket(CHgAsyncSocket *this,CHgAsyncSocket *param_1);
CHgAsyncSocket * FUN_60601040(byte param_1);
undefined4 * FUN_606010a0(void);
void __thiscall CHgAsyncSocket::CHgAsyncSocket(CHgAsyncSocket *this);
void __thiscall CHgAsyncSocket::~CHgAsyncSocket(CHgAsyncSocket *this);
uint __thiscall CHgAsyncSocket::operator_unsigned_int(CHgAsyncSocket *this);
int __thiscall CHgAsyncSocket::GetPeerName(CHgAsyncSocket *this,char **param_1,uint *param_2);
int __thiscall CHgAsyncSocket::GetPeerName(CHgAsyncSocket *this,sockaddr *param_1,int *param_2);
int __thiscall CHgAsyncSocket::GetSockName(CHgAsyncSocket *this,char **param_1,uint *param_2);
int __thiscall CHgAsyncSocket::GetSockName(CHgAsyncSocket *this,sockaddr *param_1,int *param_2);
int __thiscall CHgAsyncSocket::GetLocalIPAddrAndPort(CHgAsyncSocket *this,char *param_1,uint *param_2);
int __thiscall CHgAsyncSocket::SetSockOpt(CHgAsyncSocket *this,int param_1,void *param_2,int param_3,int param_4);
int __thiscall CHgAsyncSocket::GetSockOpt(CHgAsyncSocket *this,int param_1,void *param_2,int *param_3,int param_4);
int __thiscall CHgAsyncSocket::Create(CHgAsyncSocket *this,uint param_1,int param_2,long param_3,char *param_4);
int __thiscall CHgAsyncSocket::AddSocketMap(CHgAsyncSocket *this);
int __thiscall CHgAsyncSocket::RemoveSocketMap(CHgAsyncSocket *this);
void __thiscall CHgAsyncSocket::SetInterface(CHgAsyncSocket *this,ISocket *param_1);
void * __thiscall CHgAsyncSocket::GetPostData(CHgAsyncSocket *this);
int __thiscall CHgAsyncSocket::Socket(CHgAsyncSocket *this,int param_1,long param_2,int param_3,int param_4);
int __thiscall CHgAsyncSocket::AsyncSelect(CHgAsyncSocket *this,long param_1);
int __thiscall CHgAsyncSocket::Bind(CHgAsyncSocket *this,uint param_1,char *param_2);
int __thiscall CHgAsyncSocket::Bind(CHgAsyncSocket *this,sockaddr *param_1,int param_2);
bool __thiscall CHgAsyncSocket::Connect(CHgAsyncSocket *this,char *param_1,uint param_2);
bool __thiscall CHgAsyncSocket::Connect(CHgAsyncSocket *this,sockaddr *param_1,int param_2);
int __thiscall CHgAsyncSocket::Listen(CHgAsyncSocket *this,int param_1);
int __thiscall CHgAsyncSocket::ReceiveFrom(CHgAsyncSocket *this,void *param_1,int param_2,char **param_3,uint *param_4,int param_5);
int __thiscall CHgAsyncSocket::ReceiveFrom(CHgAsyncSocket *this,void *param_1,int param_2,sockaddr *param_3,int *param_4,int param_5);
int __thiscall CHgAsyncSocket::SendTo(CHgAsyncSocket *this,void *param_1,int param_2,uint param_3,char *param_4,int param_5);
int __thiscall CHgAsyncSocket::SendTo(CHgAsyncSocket *this,void *param_1,int param_2,sockaddr *param_3,int param_4,int param_5);
int __thiscall CHgAsyncSocket::ShutDown(CHgAsyncSocket *this,int param_1);
int __thiscall CHgAsyncSocket::IOCtl(CHgAsyncSocket *this,long param_1,ulong *param_2);
bool __thiscall CHgAsyncSocket::Accept(CHgAsyncSocket *this,CHgAsyncSocket *param_1,sockaddr *param_2,int *param_3);
int __thiscall CHgAsyncSocket::Receive(CHgAsyncSocket *this,void *param_1,int param_2,int param_3);
int __thiscall CHgAsyncSocket::Send(CHgAsyncSocket *this,void *param_1,int param_2,int param_3);
void __thiscall CHgAsyncSocket::Close(CHgAsyncSocket *this);
void __thiscall CHgAsyncSocket::OnAccept(CHgAsyncSocket *this,int param_1);
void __cdecl HgSocketInit(char *param_1);
void HgSocketTerm(void);
int __cdecl HgGetWSAErrorString(UINT param_1,char *param_2);
void __cdecl HgSocketLog(char *param_1,char param_2);
LRESULT FUN_606020d0(HWND param_1,UINT param_2,WPARAM param_3,uint param_4);
void FUN_60602240(uint *param_1);
undefined4 * FUN_60602330(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void FUN_60602610(void);
int * FUN_60602660(int *param_1,uint *param_2);
void FUN_606026f0(void);
undefined4 * FUN_60602700(void);
void FUN_60602790(int *param_1);
undefined4 * __thiscall FUN_606027d0(void *this,undefined4 *param_1,undefined4 *param_2,char param_3);
void __thiscall FUN_60602a60(void *this,int param_1);
void FUN_60602ab0(void);
void __thiscall FUN_60602ad0(void *this,int param_1);
void FUN_60602b20(void);
int * FUN_60602b90(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_60602cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_60602d10(void);
void FUN_60602d80(void);
void FUN_60602dc0(void);
void __fastcall FUN_60602e50(exception *param_1);
exception * __thiscall FUN_60602e70(void *this,byte param_1);
exception * __thiscall FUN_60602ea0(void *this,exception *param_1);
void __fastcall FUN_60602f20(undefined4 *param_1);
void __thiscall CPacketData::CPacketData(CPacketData *this,CPacketData *param_1);
CHgAsyncSocket * __thiscall CHgAsyncSocket::operator=(CHgAsyncSocket *this,CHgAsyncSocket *param_1);
undefined4 * FUN_60602f90(byte param_1);
void __thiscall CHgtpSocket::Lock(CHgtpSocket *this);
void __thiscall CHgtpSocket::Unlock(CHgtpSocket *this);
CHgtpSocket * __thiscall CHgtpSocket::CHgtpSocket(CHgtpSocket *this,CHgtpSocket *param_1);
CHgtpSocket * __thiscall CHgtpSocket::operator=(CHgtpSocket *this,CHgtpSocket *param_1);
CHgSecureSocket * __thiscall CHgSecureSocket::CHgSecureSocket(CHgSecureSocket *this,CHgSecureSocket *param_1);
CHgSecureSocket * __thiscall CHgSecureSocket::operator=(CHgSecureSocket *this,CHgSecureSocket *param_1);
CHgtpSocket * FUN_606034a0(byte param_1);
void __fastcall FUN_60603540(undefined4 *param_1);
void FUN_606035b0(int param_1);
undefined4 * __thiscall FUN_606038d0(void *this,byte param_1);
undefined4 * __cdecl HgCreateSocket(int param_1);
undefined4 * __thiscall FUN_60603930(void *this,undefined4 *param_1);
void Catch_All@606039bb(void);
void FUN_606039d0(void);
void FUN_606039f0(void);
void FUN_60603a00(void);
void FUN_60603a20(void);
void FUN_60603a70(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5,int *param_6,undefined4 *param_7);
void FUN_60603ab0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,undefined4 *param_6,int *param_7,undefined4 *param_8);
void Catch_All@60603b83(void);
undefined4 * FUN_60603c00(undefined4 *param_1,int *param_2,int *param_3);
void FUN_60603c80(void);
undefined4 FUN_60603cc0(void);
void FUN_60603ce0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __fastcall FUN_60603d20(int param_1);
void FUN_60603dc0(void);
CHgSecureSocket * __thiscall CHgSecureSocket::CHgSecureSocket(CHgSecureSocket *this);
void __thiscall CHgSecureSocket::~CHgSecureSocket(CHgSecureSocket *this);
void __thiscall CHgSecureSocket::OnConnect(CHgSecureSocket *this,int param_1);
void __thiscall CHgSecureSocket::OnReceive(CHgSecureSocket *this,int param_1);
void __thiscall CHgSecureSocket::GenerateKey(CHgSecureSocket *this);
void __thiscall CHgSecureSocket::OnSend(CHgSecureSocket *this,int param_1);
void __thiscall CHgSecureSocket::MakeKey(CHgSecureSocket *this);
void __thiscall CHgSecureSocket::SendFilter(CHgSecureSocket *this,void *param_1,int param_2);
void __thiscall CHgSecureSocket::RecvFilter(CHgSecureSocket *this,void *param_1,int param_2);
void __thiscall CHgSecureSocket::OnAccept(CHgSecureSocket *this,int param_1);
SocketState __thiscall CHgSecureSocket::GetSocketState(CHgSecureSocket *this);
void __thiscall CHgSecureSocket::SetSocketState(CHgSecureSocket *this,SocketState param_1);
void __thiscall CHgSecureSocket::Close(CHgSecureSocket *this);
undefined4 FUN_60604540(undefined4 param_1,int param_2);
CHgtpSocket * __thiscall CHgtpSocket::CHgtpSocket(CHgtpSocket *this);
void __thiscall CHgtpSocket::~CHgtpSocket(CHgtpSocket *this);
int __thiscall CHgtpSocket::Receive(CHgtpSocket *this,void *param_1,int param_2,int param_3);
int __thiscall CHgtpSocket::Send(CHgtpSocket *this,void *param_1,int param_2,int param_3);
void FUN_606048a2(void);
int __thiscall CHgtpSocket::ReadSocketErrorCode(CHgtpSocket *this);
void __thiscall CHgtpSocket::OnClose(CHgtpSocket *this,int param_1);
void __thiscall CHgtpSocket::OnConnect(CHgtpSocket *this,int param_1);
void __thiscall CHgtpSocket::OnOutOfBandData(CHgtpSocket *this,int param_1);
void __thiscall CHgtpSocket::OnReceive(CHgtpSocket *this,int param_1);
void __thiscall CHgtpSocket::OnReceivePure(CHgtpSocket *this,int param_1);
void __thiscall CHgtpSocket::OnSend(CHgtpSocket *this,int param_1);
void FUN_60604bb9(void);
bool __thiscall CHgtpSocket::SetNotifyHandle(CHgtpSocket *this,HWND__ *param_1,uint param_2);
bool __thiscall CHgtpSocket::Connect(CHgtpSocket *this,char *param_1,uint param_2);
int __thiscall CHgtpSocket::ReadData(CHgtpSocket *this,char **param_1,int *param_2);
void __thiscall CHgtpSocket::DeleteData(CHgtpSocket *this,char **param_1);
uint __thiscall CHgtpSocket::GetPacketCount(CHgtpSocket *this);
int __thiscall CHgtpSocket::SendPacket(CHgtpSocket *this,char *param_1,int param_2,int param_3);
void __thiscall CHgtpSocket::SetMemberId(CHgtpSocket *this,char *param_1);
char * __thiscall CHgtpSocket::GetMemberId(CHgtpSocket *this);
bool __thiscall CHgtpSocket::IsMemberSocket(CHgtpSocket *this,char *param_1);
int __thiscall CHgtpSocket::GetErrorCode(CHgtpSocket *this);
int __thiscall CHgtpSocket::SendPacket(CHgtpSocket *this);
int __thiscall CHgtpSocket::sendPacketNoSEH(CHgtpSocket *this,int *param_1);
int __thiscall CHgtpSocket::removePacket(CHgtpSocket *this,int param_1);
void __thiscall CHgtpSocket::PostMessageA(CHgtpSocket *this,uint param_1);
int __thiscall CHgtpSocket::ReadPacket(CHgtpSocket *this);
int __thiscall CHgtpSocket::ReadPacketPure(CHgtpSocket *this);
void __thiscall CHgtpSocket::RemoveAllPacket(CHgtpSocket *this,list<CPacketData*,std::allocator<CPacketData*>_> *param_1);
void __thiscall CHgtpSocket::AddPacketSize(CHgtpSocket *this,char *param_1,char *param_2,int param_3);
void __thiscall CHgtpSocket::RecvFilter(CHgtpSocket *this,void *param_1,int param_2);
undefined4 * FUN_60605460(undefined4 *param_1);
void FUN_606054d0(void);
void FUN_60605500(void);
void __thiscall CPacketData::CPacketData(CPacketData *this,char *param_1,int param_2);
void __thiscall CPacketData::CPacketData(CPacketData *this);
void __thiscall CPacketData::~CPacketData(CPacketData *this);
void __thiscall FUN_60605580(void *this,uint *param_1);
void __thiscall FUN_60605610(void *this,uint *param_1);
void __fastcall FUN_606056a0(uint *param_1);
uint * __thiscall FUN_606057a0(void *this,uint *param_1);
byte * FUN_60605900(byte *param_1);
void __fastcall FUN_60605a30(undefined4 param_1);
void __fastcall FUN_60605a70(int param_1);
uint FUN_60605b20(void);
void __fastcall FUN_60605c30(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5);
void __cdecl FUN_60605c4a(uint param_1);
void __fastcall __security_check_cookie(int param_1);
void __cdecl operator_delete(void *param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_60605d13(void);
void __cdecl operator_delete[](void *param_1);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_60605dce(void);
int __cdecl _atexit(_func_4879 *param_1);
void * __cdecl operator_new(uint param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,int *param_3);
void FUN_606061cc(void);
void entry(int *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl terminate(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_60606361(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __cdecl initterm(void);
void __cdecl initterm_e(void);
void __cdecl _amsg_exit(int param_1);
int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
void __cdecl ___security_init_cookie(void);
void __cdecl _crt_debugger_hook(int param_1);
void __cdecl except_handler4_common(void);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void Unwind@60606620(void);
void Unwind@60606650(void);
void Unwind@60606659(void);
void Unwind@60606680(void);
void Unwind@606066b0(void);
void Unwind@606066b9(void);
void Unwind@606066e0(void);
void Unwind@60606700(void);
void Unwind@60606750(void);
void Unwind@60606780(void);
void Unwind@606067b0(void);
void Unwind@606067b8(void);
void Unwind@606067c3(void);
void Unwind@606067f0(void);
void Unwind@606067f8(void);
void Unwind@60606803(void);
void Unwind@60606830(void);
void Unwind@60606860(void);
void Unwind@6060686b(void);
void Unwind@60606876(void);
void Unwind@606068a0(void);
void Unwind@606068a8(void);
void FUN_606068d0(void);

