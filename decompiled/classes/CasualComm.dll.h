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

typedef struct SockNet SockNet, *PSockNet;

struct SockNet { // PlaceHolder Class Structure
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

typedef struct CasualNetV2 CasualNetV2, *PCasualNetV2;

struct CasualNetV2 { // PlaceHolder Class Structure
};

typedef struct PMLNet PMLNet, *PPMLNet;

struct PMLNet { // PlaceHolder Class Structure
};

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

typedef struct CasualNet CasualNet, *PCasualNet;

struct CasualNet { // PlaceHolder Class Structure
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

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION TIME_ZONE_INFORMATION;

typedef long LONG;

typedef wchar_t WCHAR;

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef void *HANDLE;

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

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef void *PVOID;

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

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef char CHAR;

typedef CHAR *LPCSTR;

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

typedef ULONG_PTR SIZE_T;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[38];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (*FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void *LPCVOID;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef uint UINT;

typedef BYTE *PBYTE;

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

typedef struct CCriticalSection CCriticalSection, *PCCriticalSection;

typedef struct CCriticalSection_vftable CCriticalSection_vftable, *PCCriticalSection_vftable;

struct CCriticalSection { // class CCriticalSection : CSyncObject
    struct CCriticalSection_vftable *vftablePtr;
};

struct CCriticalSection_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCriticalSection virtual function #1
    CSyncObject * (*deleting_destructor)(void *, byte); // CCriticalSection virtual function #2
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #3
    void (*~ChatParser)(void *); // ChatParser virtual function #4
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #5
    void (*vfunction6)(void *); // CCriticalSection virtual function #6
    undefined4 (*vfunction7)(void *); // CCriticalSection virtual function #7
    undefined4 (*vfunction8)(void *); // CCriticalSection virtual function #8
};

typedef struct exception exception, *Pexception;

struct exception { // class exception
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct out_of_range out_of_range, *Pout_of_range;

typedef struct out_of_range_vftable out_of_range_vftable, *Pout_of_range_vftable;

typedef struct logic_error_data logic_error_data, *Plogic_error_data;

struct logic_error_data {
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

struct out_of_range_vftable {
    exception * (*deleting_destructor)(void *, byte); // out_of_range virtual function #1
    int (*vfunction2)(void *); // logic_error virtual function #2
};

struct out_of_range { // class out_of_range : logic_error
    struct out_of_range_vftable *vftablePtr;
    struct logic_error_data logic_error_data;
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

typedef struct bad_alloc_vftable bad_alloc_vftable, *Pbad_alloc_vftable;

struct bad_alloc { // class bad_alloc : exception
    struct bad_alloc_vftable *vftablePtr;
};

struct bad_alloc_vftable {
    exception * (*deleting_destructor)(void *, byte); // bad_alloc virtual function #1
    char * (*what)(void *); // exception virtual function #2
};

typedef struct length_error_vftable length_error_vftable, *Plength_error_vftable;

struct length_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // length_error virtual function #1
    int (*vfunction2)(void *); // logic_error virtual function #2
};

typedef struct length_error length_error, *Plength_error;

struct logic_error_data {
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

struct length_error { // class length_error : logic_error
    struct length_error_vftable *vftablePtr;
    struct logic_error_data logic_error_data;
};

typedef struct logic_error logic_error, *Plogic_error;

typedef struct logic_error_vftable logic_error_vftable, *Plogic_error_vftable;

struct logic_error_data {
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

struct logic_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // logic_error virtual function #1
    int (*vfunction2)(void *); // logic_error virtual function #2
};

struct logic_error { // class logic_error : exception
    struct logic_error_vftable *vftablePtr;
    struct logic_error_data logic_error_data;
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CObject CObject, *PCObject;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};


// WARNING! conflicting data type names: /ClassDataTypes/CasualNet/CasualNet - /CasualNet

typedef struct CasualNet_vftable CasualNet_vftable, *PCasualNet_vftable;

struct CasualNet_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CasualNet virtual function #1
    bool (*Create)(void *); // CasualNet virtual function #2
    void (*Destroy)(void *); // CasualNet virtual function #3
    void (*OnConnect)(void *); // CasualNet virtual function #4
    void (*OnConnectError)(void *); // CasualNet virtual function #5
    void (*OnDisconnect)(void *); // CasualNet virtual function #6
    void (*OnReceive)(void *); // PMLNet virtual function #7
    void (*~ChatParser)(void *); // ChatParser virtual function #8
    void (*OnPMLReceive)(void *, struct CPML *, struct PMLRELAY *); // CasualNet virtual function #9
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #10
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #11
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #12
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #13
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #14
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #15
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #16
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #17
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #18
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #19
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #20
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #21
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #22
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #23
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #24
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #25
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #26
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #27
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #28
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #29
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #30
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #31
};


// WARNING! conflicting data type names: /ClassDataTypes/CasualNetV2/CasualNetV2 - /CasualNetV2

typedef struct CasualNetV2_vftable CasualNetV2_vftable, *PCasualNetV2_vftable;

struct CasualNetV2_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CasualNetV2 virtual function #1
    bool (*Create)(void *); // CasualNet virtual function #2
    void (*Destroy)(void *); // CasualNetV2 virtual function #3
    void (*OnConnect)(void *); // CasualNet virtual function #4
    void (*OnConnectError)(void *); // CasualNet virtual function #5
    void (*OnDisconnect)(void *); // CasualNet virtual function #6
    void (*OnReceive)(void *); // PMLNet virtual function #7
    void (*~ChatParser)(void *); // ChatParser virtual function #8
    void (*OnPMLReceive)(void *, struct CPML *, struct PMLRELAY *); // CasualNet virtual function #9
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #10
    void (*OnDisconnect)(void *); // CasualNetV2 virtual function #11
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #12
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #13
    void (*OnWebLoginAck)(void *, char); // CasualNetV2 virtual function #14
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #15
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #16
    void (*OnAddBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNetV2 virtual function #17
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNetV2 virtual function #18
    void (*OnDeleteBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNetV2 virtual function #19
    void (*OnAddBuddyAccepted)(void *, struct CC_BUDDY *, char); // CasualNetV2 virtual function #20
    void (*OnAddBuddyAccepted)(void *, struct CC_BUDDY *, char); // CasualNetV2 virtual function #21
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #22
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #23
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #24
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #25
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #26
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #27
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #28
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #29
    void (*GLogDscUserDefineddata)(void *, uchar *); // CasualNet virtual function #30
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #31
};


// WARNING! conflicting data type names: /ClassDataTypes/PMLNet/PMLNet - /PMLNet

typedef struct PMLNet_vftable PMLNet_vftable, *PPMLNet_vftable;

struct PMLNet_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // PMLNet virtual function #1
    bool (*Create)(void *); // CasualNet virtual function #2
    void (*Destroy)(void *); // PMLNet virtual function #3
    void (*~ChatParser)(void *); // ChatParser virtual function #4
    void (*~ChatParser)(void *); // ChatParser virtual function #5
    void (*~ChatParser)(void *); // ChatParser virtual function #6
    void (*OnReceive)(void *); // PMLNet virtual function #7
    void (*~ChatParser)(void *); // ChatParser virtual function #8
    void (*OnAcceptBuddyAck)(void *, struct CC_BUDDY *, char); // CasualNet virtual function #9
};

typedef struct SockNet_data SockNet_data, *PSockNet_data;

struct SockNet_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
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
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    undefined field20_0x17;
    undefined field21_0x18;
    undefined field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    undefined field25_0x1c;
    undefined field26_0x1d;
    undefined field27_0x1e;
    undefined field28_0x1f;
    undefined field29_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    undefined field36_0x27;
    undefined field37_0x28;
    undefined field38_0x29;
    undefined field39_0x2a;
    undefined field40_0x2b;
    undefined field41_0x2c;
    undefined field42_0x2d;
    undefined field43_0x2e;
    undefined field44_0x2f;
    undefined field45_0x30;
    undefined field46_0x31;
    undefined field47_0x32;
    undefined field48_0x33;
    undefined field49_0x34;
    undefined field50_0x35;
    undefined field51_0x36;
    undefined field52_0x37;
    undefined field53_0x38;
    undefined field54_0x39;
    undefined field55_0x3a;
    undefined field56_0x3b;
    undefined field57_0x3c;
    undefined field58_0x3d;
    undefined field59_0x3e;
    undefined field60_0x3f;
    undefined field61_0x40;
    undefined field62_0x41;
    undefined field63_0x42;
    undefined field64_0x43;
    undefined field65_0x44;
    undefined field66_0x45;
    undefined field67_0x46;
    undefined field68_0x47;
    undefined field69_0x48;
    undefined field70_0x49;
    undefined field71_0x4a;
    undefined field72_0x4b;
    undefined field73_0x4c;
    undefined field74_0x4d;
    undefined field75_0x4e;
    undefined field76_0x4f;
    undefined field77_0x50;
    undefined field78_0x51;
    undefined field79_0x52;
    undefined field80_0x53;
    undefined field81_0x54;
    undefined field82_0x55;
    undefined field83_0x56;
    undefined field84_0x57;
    undefined field85_0x58;
    undefined field86_0x59;
    undefined field87_0x5a;
    undefined field88_0x5b;
    undefined field89_0x5c;
    undefined field90_0x5d;
    undefined field91_0x5e;
    undefined field92_0x5f;
    undefined field93_0x60;
    undefined field94_0x61;
    undefined field95_0x62;
    undefined field96_0x63;
    undefined field97_0x64;
    undefined field98_0x65;
    undefined field99_0x66;
    undefined field100_0x67;
    undefined field101_0x68;
    undefined field102_0x69;
    undefined field103_0x6a;
    undefined field104_0x6b;
    undefined field105_0x6c;
    undefined field106_0x6d;
    undefined field107_0x6e;
    undefined field108_0x6f;
    undefined field109_0x70;
    undefined field110_0x71;
    undefined field111_0x72;
    undefined field112_0x73;
    undefined field113_0x74;
    undefined field114_0x75;
    undefined field115_0x76;
    undefined field116_0x77;
    undefined field117_0x78;
    undefined field118_0x79;
    undefined field119_0x7a;
    undefined field120_0x7b;
    undefined field121_0x7c;
    undefined field122_0x7d;
    undefined field123_0x7e;
    undefined field124_0x7f;
    undefined field125_0x80;
    undefined field126_0x81;
    undefined field127_0x82;
    undefined field128_0x83;
    undefined field129_0x84;
    undefined field130_0x85;
    undefined field131_0x86;
    undefined field132_0x87;
    undefined field133_0x88;
    undefined field134_0x89;
    undefined field135_0x8a;
    undefined field136_0x8b;
    undefined field137_0x8c;
    undefined field138_0x8d;
    undefined field139_0x8e;
    undefined field140_0x8f;
    undefined field141_0x90;
    undefined field142_0x91;
    undefined field143_0x92;
    undefined field144_0x93;
    undefined field145_0x94;
    undefined field146_0x95;
    undefined field147_0x96;
    undefined field148_0x97;
    undefined field149_0x98;
    undefined field150_0x99;
    undefined field151_0x9a;
    undefined field152_0x9b;
    undefined field153_0x9c;
    undefined field154_0x9d;
    undefined field155_0x9e;
    undefined field156_0x9f;
    undefined field157_0xa0;
    undefined field158_0xa1;
    undefined field159_0xa2;
    undefined field160_0xa3;
    undefined field161_0xa4;
    undefined field162_0xa5;
    undefined field163_0xa6;
    undefined field164_0xa7;
    undefined field165_0xa8;
    undefined field166_0xa9;
    undefined field167_0xaa;
    undefined field168_0xab;
    undefined field169_0xac;
    undefined field170_0xad;
    undefined field171_0xae;
    undefined field172_0xaf;
    undefined field173_0xb0;
    undefined field174_0xb1;
    undefined field175_0xb2;
    undefined field176_0xb3;
    undefined field177_0xb4;
    undefined field178_0xb5;
    undefined field179_0xb6;
    undefined field180_0xb7;
    undefined field181_0xb8;
    undefined field182_0xb9;
    undefined field183_0xba;
    undefined field184_0xbb;
    undefined field185_0xbc;
    undefined field186_0xbd;
    undefined field187_0xbe;
    undefined field188_0xbf;
    undefined field189_0xc0;
    undefined field190_0xc1;
    undefined field191_0xc2;
    undefined field192_0xc3;
    undefined field193_0xc4;
    undefined field194_0xc5;
    undefined field195_0xc6;
    undefined field196_0xc7;
    undefined field197_0xc8;
    undefined field198_0xc9;
    undefined field199_0xca;
    undefined field200_0xcb;
    undefined field201_0xcc;
    undefined field202_0xcd;
    undefined field203_0xce;
    undefined field204_0xcf;
    undefined field205_0xd0;
    undefined field206_0xd1;
    undefined field207_0xd2;
    undefined field208_0xd3;
    undefined field209_0xd4;
    undefined field210_0xd5;
    undefined field211_0xd6;
    undefined field212_0xd7;
    undefined field213_0xd8;
    undefined field214_0xd9;
    undefined field215_0xda;
    undefined field216_0xdb;
    undefined field217_0xdc;
    undefined field218_0xdd;
    undefined field219_0xde;
    undefined field220_0xdf;
    undefined field221_0xe0;
    undefined field222_0xe1;
    undefined field223_0xe2;
    undefined field224_0xe3;
    undefined field225_0xe4;
    undefined field226_0xe5;
    undefined field227_0xe6;
    undefined field228_0xe7;
    undefined field229_0xe8;
    undefined field230_0xe9;
    undefined field231_0xea;
    undefined field232_0xeb;
    undefined field233_0xec;
    undefined field234_0xed;
    undefined field235_0xee;
    undefined field236_0xef;
    undefined field237_0xf0;
    undefined field238_0xf1;
    undefined field239_0xf2;
    undefined field240_0xf3;
    undefined field241_0xf4;
    undefined field242_0xf5;
    undefined field243_0xf6;
    undefined field244_0xf7;
    undefined field245_0xf8;
    undefined field246_0xf9;
    undefined field247_0xfa;
    undefined field248_0xfb;
    undefined field249_0xfc;
    undefined field250_0xfd;
    undefined field251_0xfe;
    undefined field252_0xff;
    undefined2 offset_0x100;
    undefined field254_0x102;
    undefined field255_0x103;
    undefined4 offset_0x104;
    undefined4 offset_0x108;
    undefined1 offset_0x10c;
    undefined field259_0x10d;
    undefined field260_0x10e;
    undefined field261_0x10f;
    undefined4 offset_0x110;
    undefined field263_0x114;
    undefined field264_0x115;
    undefined field265_0x116;
    undefined field266_0x117;
    undefined field267_0x118;
    undefined field268_0x119;
    undefined field269_0x11a;
    undefined field270_0x11b;
    undefined field271_0x11c;
    undefined field272_0x11d;
    undefined field273_0x11e;
    undefined field274_0x11f;
    undefined field275_0x120;
    undefined field276_0x121;
    undefined field277_0x122;
    undefined field278_0x123;
    undefined field279_0x124;
    undefined field280_0x125;
    undefined field281_0x126;
    undefined field282_0x127;
    undefined4 offset_0x128;
    undefined field284_0x12c;
    undefined field285_0x12d;
    undefined field286_0x12e;
    undefined field287_0x12f;
    undefined field288_0x130;
    undefined field289_0x131;
    undefined field290_0x132;
    undefined field291_0x133;
    undefined field292_0x134;
    undefined field293_0x135;
    undefined field294_0x136;
    undefined field295_0x137;
    undefined field296_0x138;
    undefined field297_0x139;
    undefined field298_0x13a;
    undefined field299_0x13b;
    undefined field300_0x13c;
    undefined field301_0x13d;
    undefined field302_0x13e;
    undefined field303_0x13f;
    undefined field304_0x140;
    undefined field305_0x141;
    undefined field306_0x142;
    undefined field307_0x143;
};

typedef struct SockNet_vftable SockNet_vftable, *PSockNet_vftable;

struct SockNet_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // SockNet virtual function #1
    bool (*Create)(void *); // SockNet virtual function #2
    void (*Destroy)(void *); // SockNet virtual function #3
    void (*~ChatParser)(void *); // ChatParser virtual function #4
    void (*~ChatParser)(void *); // ChatParser virtual function #5
    void (*~ChatParser)(void *); // ChatParser virtual function #6
    void (*~ChatParser)(void *); // ChatParser virtual function #7
    void (*~ChatParser)(void *); // ChatParser virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/SockNet/SockNet - /SockNet

typedef struct CSyncObject CSyncObject, *PCSyncObject;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CSyncObject { // class CSyncObject : CObject
    struct CObject CObject;
};

typedef struct PMLHEADER PMLHEADER, *PPMLHEADER;

struct PMLHEADER { // PlaceHolder Structure
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};

typedef struct _GLogIndent _GLogIndent, *P_GLogIndent;

struct _GLogIndent { // PlaceHolder Structure
};

typedef enum GLOG_PREFIX_TYPE {
} GLOG_PREFIX_TYPE;

typedef struct CC_ME CC_ME, *PCC_ME;

struct CC_ME { // PlaceHolder Structure
};

typedef struct CPMLNodeList CPMLNodeList, *PCPMLNodeList;

struct CPMLNodeList { // PlaceHolder Structure
};

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};

typedef struct ChatParser ChatParser, *PChatParser;

struct ChatParser { // PlaceHolder Structure
};

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};

typedef struct PMLRELAY PMLRELAY, *PPMLRELAY;

struct PMLRELAY { // PlaceHolder Structure
};

typedef struct CC_BUDDY CC_BUDDY, *PCC_BUDDY;

struct CC_BUDDY { // PlaceHolder Structure
};

typedef struct GMiniDump GMiniDump, *PGMiniDump;

struct GMiniDump { // PlaceHolder Structure
};

typedef struct CC_PARAM_LOGIN CC_PARAM_LOGIN, *PCC_PARAM_LOGIN;

struct CC_PARAM_LOGIN { // PlaceHolder Structure
};

typedef enum NET_RESULT {
} NET_RESULT;

typedef enum CHATPARSER_RESULT {
} CHATPARSER_RESULT;

typedef enum CC_EVENT_TYPE {
} CC_EVENT_TYPE;

typedef struct CC_PARAM_RECV_PREF CC_PARAM_RECV_PREF, *PCC_PARAM_RECV_PREF;

struct CC_PARAM_RECV_PREF { // PlaceHolder Structure
};

typedef struct CC_WATCHER CC_WATCHER, *PCC_WATCHER;

struct CC_WATCHER { // PlaceHolder Structure
};

typedef struct CC_PARAM_USER_INFO CC_PARAM_USER_INFO, *PCC_PARAM_USER_INFO;

struct CC_PARAM_USER_INFO { // PlaceHolder Structure
};

typedef struct CC_USER CC_USER, *PCC_USER;

struct CC_USER { // PlaceHolder Structure
};

typedef struct CPML CPML, *PCPML;

struct CPML { // PlaceHolder Structure
};

typedef struct GFtp GFtp, *PGFtp;

struct GFtp { // PlaceHolder Structure
};

typedef struct CC_BLACK CC_BLACK, *PCC_BLACK;

struct CC_BLACK { // PlaceHolder Structure
};

typedef enum FST_STATE {
} FST_STATE;

typedef struct CC_ONLINE_INFO CC_ONLINE_INFO, *PCC_ONLINE_INFO;

struct CC_ONLINE_INFO { // PlaceHolder Structure
};

typedef enum CC_INFO_TYPE {
} CC_INFO_TYPE;

typedef enum CC_STATE {
} CC_STATE;


// WARNING! conflicting data type names: /Demangler/CCriticalSection - /ClassDataTypes/CCriticalSection/CCriticalSection


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info


// WARNING! conflicting data type names: /Demangler/CSyncObject - /ClassDataTypes/CSyncObject/CSyncObject

typedef struct CPMLNode CPMLNode, *PCPMLNode;

struct CPMLNode { // PlaceHolder Structure
};

typedef enum CC_SEND_RESULT {
} CC_SEND_RESULT;

typedef struct IAtlMemMgr IAtlMemMgr, *PIAtlMemMgr;

struct IAtlMemMgr { // PlaceHolder Structure
};

typedef struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CSimpleStringT<char,1> CSimpleStringT<char,1>, *PCSimpleStringT<char,1>;

struct CSimpleStringT<char,1> { // PlaceHolder Structure
};

typedef struct CWin32Heap CWin32Heap, *PCWin32Heap;

struct CWin32Heap { // PlaceHolder Structure
};

typedef struct CStringData CStringData, *PCStringData;

struct CStringData { // PlaceHolder Structure
};

typedef struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CAtlStringMgr CAtlStringMgr, *PCAtlStringMgr;

struct CAtlStringMgr { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_> { // PlaceHolder Structure
};

typedef struct vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_>, *Pvector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_>;

struct vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef longlong __time64_t;

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;




void __thiscall GFtp::GFtp(GFtp *this);
void __thiscall GFtp::~GFtp(GFtp *this);
bool __thiscall GFtp::openFtp(GFtp *this,char *param_1,int param_2,char *param_3,char *param_4);
bool __thiscall GFtp::sendFile(GFtp *this,char *param_1,char *param_2,char *param_3);
undefined4 __thiscall CCriticalSection::vfunction7(CCriticalSection *this);
undefined4 FUN_10001110(int param_1);
CSyncObject * __thiscall CCriticalSection::scalar_deleting_destructor(CCriticalSection *this,byte param_1);
undefined4 FUN_100011e0(int param_1);
void __thiscall CCriticalSection::vfunction6(CCriticalSection *this);
undefined4 __thiscall CCriticalSection::vfunction8(CCriticalSection *this);
_GLogIndent * __thiscall _GLogIndent::_GLogIndent(_GLogIndent *this,_GLogIndent *param_1);
_GLogIndent * __thiscall _GLogIndent::operator=(_GLogIndent *this,_GLogIndent *param_1);
void __cdecl FUN_100012d0(undefined4 param_1,char *param_2);
void __cdecl GLog_Output(char *param_1,char *param_2);
void __cdecl GLog_Output(char *param_1,...);
void __cdecl GLog_Output(GLOG_PREFIX_TYPE param_1,bool param_2,char *param_3,char *param_4);
void __cdecl GLog_Output(GLOG_PREFIX_TYPE param_1,bool param_2,char *param_3,...);
void __cdecl GLog_Output_Prefix1(char *param_1,...);
void __cdecl GLog_Output_Prefix2(char *param_1,...);
void __cdecl GLog_Output_Prefix3(char *param_1,...);
void __cdecl GLog_Output_Prefix4(char *param_1,...);
void __cdecl GLog_Output_Prefix1_NoIndent(char *param_1,...);
void __cdecl GLog_Output_Prefix2_NoIndent(char *param_1,...);
void __cdecl GLog_Output_Prefix3_NoIndent(char *param_1,...);
void __cdecl GLog_Output_Prefix4_NoIndent(char *param_1,...);
void __cdecl GLog_SetFileName(char *param_1);
char * __cdecl GLog_GetFileName(void);
void __cdecl GLog_SetHeader(char *param_1);
void __cdecl GLog_SetCallback(_func_void_char_ptr_void_ptr *param_1,void *param_2);
void __cdecl GLog_EnableNewLine(bool param_1);
void __cdecl GLog_EnableTime(bool param_1);
void __cdecl GLog_EnableTick(bool param_1);
void __cdecl GLog_EnableLog(bool param_1);
void __cdecl GLog_EnableThreadID(bool param_1);
bool __cdecl GLog_SetPrefix(GLOG_PREFIX_TYPE param_1,char *param_2);
bool __cdecl GLog_SetCurrentPrefix(GLOG_PREFIX_TYPE param_1);
GLOG_PREFIX_TYPE __cdecl GLog_GetCurrentPrefix(void);
_GLogIndent * __thiscall _GLogIndent::_GLogIndent(_GLogIndent *this,char *param_1);
_GLogIndent * __thiscall _GLogIndent::_GLogIndent(_GLogIndent *this);
void __thiscall _GLogIndent::~_GLogIndent(_GLogIndent *this);
void __cdecl _GLogIndent::setLength(ulong param_1);
void FUN_10001d20(void);
void __thiscall GMiniDump::SetFTPEnable(GMiniDump *this,bool param_1);
void __thiscall GMiniDump::SetHeadless(GMiniDump *this,bool param_1);
void __thiscall GMiniDump::SetFlag(GMiniDump *this,ulong param_1);
GMiniDump * __thiscall GMiniDump::operator=(GMiniDump *this,GMiniDump *param_1);
GMiniDump * __thiscall GMiniDump::GMiniDump(GMiniDump *this);
void __thiscall GMiniDump::~GMiniDump(GMiniDump *this);
bool __thiscall GMiniDump::SetFTPEnv(GMiniDump *this,char *param_1,int param_2,char *param_3,char *param_4,char *param_5);
bool __thiscall GMiniDump::SetFTPLog(GMiniDump *this,char *param_1,char *param_2);
bool __thiscall GMiniDump::SetMessage(GMiniDump *this,char *param_1);
long GMiniDump::CustomHandler(_EXCEPTION_POINTERS *param_1);
bool __thiscall GMiniDump::GetPathNameExt(GMiniDump *this,char *param_1,char *param_2,char *param_3,ulong param_4);
bool __thiscall GMiniDump::GetNameExt(GMiniDump *this,char *param_1,char *param_2,char *param_3,ulong param_4);
long __thiscall GMiniDump::ExceptionHandler(GMiniDump *this,_EXCEPTION_POINTERS *param_1);
bool __thiscall GMiniDump::ShowQuestion(GMiniDump *this);
bool __thiscall GMiniDump::WriteMiniDump(GMiniDump *this,_EXCEPTION_POINTERS *param_1,char *param_2,char *param_3);
int __thiscall GMiniDump::GetFileSize(GMiniDump *this,char *param_1);
void FUN_10002790(void);
void __fastcall FUN_100027b0(int *param_1);
void __fastcall FUN_100027d0(int param_1);
void FUN_10002820(void);
void FUN_10002830(undefined4 *param_1,int param_2);
void __fastcall FUN_100028b0(undefined4 param_1,int param_2);
void __cdecl FUN_100028e0(undefined4 param_1,char param_2);
void FUN_10002900(va_list param_1);
void FUN_10002980(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
int __thiscall std::logic_error::vfunction2(logic_error *this);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,byte param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
bool __thiscall SockNet::IsCreated(SockNet *this);
void __thiscall ChatParser::ChatParser::~ChatParser(ChatParser *this);
void __thiscall SockNet::SockNet(SockNet *this,SockNet *param_1);
SockNet * __thiscall SockNet::operator=(SockNet *this,SockNet *param_1);
undefined4 * __thiscall SockNet::scalar_deleting_destructor(SockNet *this,byte param_1);
PMLNet * __thiscall PMLNet::PMLNet(PMLNet *this,PMLNet *param_1);
PMLNet * __thiscall PMLNet::operator=(PMLNet *this,PMLNet *param_1);
PMLNet * __thiscall PMLNet::scalar_deleting_destructor(PMLNet *this,byte param_1);
void FUN_10002d30(exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
void __thiscall CasualNet::SetPingInterval(CasualNet *this,ulong param_1);
void __thiscall CasualNet::SetReloginInterval(CasualNet *this,ulong param_1);
void __thiscall CasualNet::SetAutoLogin(CasualNet *this,bool param_1);
CC_STATE __thiscall CasualNet::GetState(CasualNet *this);
void __thiscall CasualNet::CasualNet::OnAcceptBuddyAck(CasualNet *this,CC_BUDDY *param_1,char param_2);
void __thiscall CasualNet::CasualNet::GLogDscUserDefineddata(CasualNet *this,uchar *param_1);
CasualNet * __thiscall CasualNet::CasualNet(CasualNet *this,CasualNet *param_1);
CasualNet * __thiscall CasualNet::operator=(CasualNet *this,CasualNet *param_1);
CasualNet * __thiscall CasualNet::scalar_deleting_destructor(CasualNet *this,byte param_1);
void FUN_100031a0(void);
CasualNet * __thiscall CasualNet::CasualNet(CasualNet *this);
void __thiscall CasualNet::~CasualNet(CasualNet *this);
void __thiscall CasualNet::ResetObject(CasualNet *this);
void __thiscall CasualNet::ResetData(CasualNet *this);
bool __thiscall CasualNet::CasualNet::Create(CasualNet *this);
void __thiscall CasualNet::CasualNet::Destroy(CasualNet *this);
bool __thiscall CasualNet::Login(CasualNet *this,bool param_1);
void __thiscall CasualNet::Logout(CasualNet *this,bool param_1);
void __thiscall CasualNet::SetEventCallback(CasualNet *this,_func_void_CC_EVENT_TYPE_void_ptr_ulong_void_ptr *param_1,void *param_2);
void __thiscall CasualNet::SetInfoCallback(CasualNet *this,_func_bool_CC_INFO_TYPE_void_ptr_void_ptr_void_ptr *param_1,void *param_2);
void __thiscall CasualNet::Loop(CasualNet *this);
void __thiscall CasualNet::ClearBlackList(CasualNet *this);
bool __thiscall CasualNet::AddBlack(CasualNet *this,CC_BLACK *param_1);
bool __thiscall CasualNet::RemoveBlack_Key(CasualNet *this,char *param_1);
CC_BLACK * __thiscall CasualNet::FindBlack_Key(CasualNet *this,char *param_1);
CC_BLACK * __thiscall CasualNet::FindBlack_Nick(CasualNet *this,char *param_1);
void __thiscall CasualNet::ClearWatcherList(CasualNet *this);
bool __thiscall CasualNet::AddWatcher(CasualNet *this,CC_WATCHER *param_1);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
bool __thiscall CasualNet::RemoveWatcher_Key(CasualNet *this,char *param_1);
CC_WATCHER * __thiscall CasualNet::FindWatcher_Key(CasualNet *this,char *param_1);
CC_WATCHER * __thiscall CasualNet::FindWatcher_Nick(CasualNet *this,char *param_1);
void __thiscall CasualNet::ClearBuddyList(CasualNet *this);
bool __thiscall CasualNet::AddBuddy(CasualNet *this,CC_BUDDY *param_1);
bool __thiscall CasualNet::RemoveBuddy_Key(CasualNet *this,char *param_1);
CC_BUDDY * __thiscall CasualNet::ReplaceBuddy(CasualNet *this,CC_BUDDY *param_1);
CC_BUDDY * __thiscall CasualNet::FindBuddy_Key(CasualNet *this,char *param_1);
CC_BUDDY * __thiscall CasualNet::FindBuddy_Nick(CasualNet *this,char *param_1);
CC_STATE __thiscall CasualNet::ChangeState(CasualNet *this,CC_STATE param_1);
void __thiscall CasualNet::OnCL2CMReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2GMReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCM2CLReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnRelayReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::CasualNet::OnPMLReceive(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::CasualNet::OnConnect(CasualNet *this);
void __thiscall CasualNet::CasualNet::OnDisconnect(CasualNet *this);
void __thiscall CasualNet::CasualNet::OnConnectError(CasualNet *this);
CC_SEND_RESULT __thiscall CasualNet::SendGetCMS(CasualNet *this);
void FUN_10004a70(void);
CC_SEND_RESULT __thiscall CasualNet::SendWebLogin(CasualNet *this,CC_PARAM_LOGIN *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendLogout(CasualNet *this);
CC_SEND_RESULT __thiscall CasualNet::SendAddBuddy_Nick(CasualNet *this,char *param_1,char *param_2);
CC_SEND_RESULT __thiscall CasualNet::SendDeleteBuddy_Nick(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendDeleteBuddy_Key(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendAcceptBuddy_Nick(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendAcceptBuddy_Key(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendGetNewWatcherList(CasualNet *this);
CC_SEND_RESULT __thiscall CasualNet::SendDeleteNewWatcher_Nick(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendDeleteNewWatcher_Key(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendAddBlack_Nick(CasualNet *this,char *param_1,char *param_2);
CC_SEND_RESULT __thiscall CasualNet::SendDeleteBlack_Nick(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendDeleteBlack_Key(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendPing(CasualNet *this);
CC_SEND_RESULT __thiscall CasualNet::SendSetUserInfo(CasualNet *this,CC_PARAM_USER_INFO *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendGetUserInfo_Nick(CasualNet *this,char *param_1,char *param_2);
CC_SEND_RESULT __thiscall CasualNet::SendSetRecvPref(CasualNet *this,CC_PARAM_RECV_PREF *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendChangeNickName(CasualNet *this,char *param_1);
CC_SEND_RESULT __thiscall CasualNet::SendChatMsg_Nick(CasualNet *this,char *param_1,char *param_2,char *param_3);
bool __thiscall CasualNet::InitMeByPML(CasualNet *this,CPML *param_1,CC_ME *param_2);
bool __thiscall CasualNet::InitBlackByNode(CasualNet *this,CPMLNode *param_1,CC_BLACK *param_2);
bool __thiscall CasualNet::InitBuddyByNode(CasualNet *this,CPMLNode *param_1,CC_BUDDY *param_2);
bool __thiscall CasualNet::InitBuddyOnlineInfoByNodeList(CasualNet *this,CPMLNodeList *param_1,CC_ONLINE_INFO *param_2);
bool __thiscall CasualNet::InitUserByNode(CasualNet *this,CPMLNode *param_1,CC_USER *param_2);
bool __thiscall CasualNet::IsBudddyOnline(CasualNet *this,CC_BUDDY *param_1);
char __thiscall CasualNet::PrintAckResult(CasualNet *this,CPML *param_1);
void __thiscall CasualNet::OnCL2GMGetCMSAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMWebLoginAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMAddBuddyAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMDeleteBuddyAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMAcceptBuddyAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCM2CLChangeBuddyStatus(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCM2CLAddBuddyAccepted(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMDeleteNewWatcherAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMGetNewWatcherListAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCM2CLNewWatcher(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMAddBlackAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMDeleteBlackAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CLChatMsg(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CLChatMsgAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMPingAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMGetUserInfoAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMSetRecvPrefAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCL2CMChangeNickNameAck(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall CasualNet::OnCM2CLKickOut(CasualNet *this,CPML *param_1,PMLRELAY *param_2);
undefined4 * __thiscall FUN_10007d90(void *this,undefined4 *param_1);
void FUN_10007e60(undefined4 *param_1);
void FUN_10007ed0(void);
void FUN_10007fd0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void FUN_100080e0(undefined4 *param_1);
undefined4 * FUN_10008140(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
int * FUN_10008450(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
undefined4 * FUN_100084d0(undefined4 *param_1);
void Catch_All@10008561(void);
int FUN_10008580(void);
void FUN_100085b0(void);
void FUN_100085c0(void);
void FUN_10008610(void);
undefined4 * __thiscall FUN_10008680(void *this,undefined4 *param_1,undefined4 *param_2,char param_3,void *param_4);
void __thiscall FUN_10008910(void *this,int param_1);
int * FUN_10008960(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_10008ab0(int *param_1);
void __thiscall FUN_10008af0(void *this,int param_1);
void FUN_10008b40(void);
undefined4 * FUN_10008b80(undefined4 *param_1);
void FUN_10008c00(void);
void FUN_10008c20(exception *param_1);
void FUN_10008c40(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4);
void FUN_10008cc0(void);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
undefined4 * __thiscall FUN_10008da0(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@10008e3a(void);
undefined4 * __thiscall FUN_10008e50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void Catch_All@10008eda(void);
undefined4 * FUN_10008ef0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void FUN_10008f40(void);
void FUN_10008f80(void);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void FUN_10009060(void);
void FUN_100090d0(void);
void __cdecl FUN_10009160(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
int __fastcall FUN_100091e0(void *param_1,void *param_2);
void FUN_10009200(exception *param_1);
CasualNetV2 * __thiscall CasualNetV2::CasualNetV2(CasualNetV2 *this,CasualNetV2 *param_1);
CasualNetV2 * __thiscall CasualNetV2::operator=(CasualNetV2 *this,CasualNetV2 *param_1);
CasualNetV2 * __thiscall CasualNetV2::scalar_deleting_destructor(CasualNetV2 *this,byte param_1);
CasualNetV2 * __thiscall CasualNetV2::CasualNetV2(CasualNetV2 *this);
void __thiscall CasualNetV2::~CasualNetV2(CasualNetV2 *this);
void __thiscall CasualNetV2::CasualNetV2::Destroy(CasualNetV2 *this);
CC_BUDDY * __thiscall CasualNetV2::FindBuddyOn_Nick(CasualNetV2 *this,char *param_1);
CC_BUDDY * __thiscall CasualNetV2::FindBuddyOff_Nick(CasualNetV2 *this,char *param_1);
CC_BUDDY * __thiscall CasualNetV2::FindBuddyOn_Key(CasualNetV2 *this,char *param_1);
CC_BUDDY * __thiscall CasualNetV2::FindBuddyOff_Key(CasualNetV2 *this,char *param_1);
void __thiscall CasualNetV2::ClearBuddyOnOffList(CasualNetV2 *this);
bool __thiscall CasualNetV2::AddBuddyToOnOffList(CasualNetV2 *this,CC_BUDDY *param_1);
bool __thiscall CasualNetV2::ReplaceBuddyInOnOffList(CasualNetV2 *this,CC_BUDDY *param_1);
bool __thiscall CasualNetV2::AddBuddyToAnyList(CasualNetV2 *this,CC_BUDDY *param_1,map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>*param_2);
bool __thiscall CasualNetV2::RemoveBuddyFromAnyList(CasualNetV2 *this,char *param_1,map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>*param_2);
CC_BUDDY * __thiscall CasualNetV2::FindBuddyInAnyList(CasualNetV2 *this,char *param_1,map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CC_BUDDY*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CC_BUDDY*>_>_>*param_2);
void __thiscall CasualNetV2::CasualNetV2::OnDisconnect(CasualNetV2 *this,CC_STATE param_1,char param_2);
void __thiscall CasualNetV2::CasualNetV2::OnWebLoginAck(CasualNetV2 *this,char param_1);
void __thiscall CasualNetV2::CasualNetV2::OnAddBuddyAck(CasualNetV2 *this,CC_BUDDY *param_1,char param_2);
void __thiscall CasualNetV2::CasualNetV2::OnDeleteBuddyAck(CasualNetV2 *this,CC_BUDDY *param_1,char param_2);
void __thiscall CasualNetV2::CasualNetV2::OnAcceptBuddyAck(CasualNetV2 *this,CC_BUDDY *param_1,char param_2);
void __thiscall CasualNetV2::CasualNetV2::OnAddBuddyAccepted(CasualNetV2 *this,CC_BUDDY *param_1,char param_2);
void FUN_10009f90(void);
void FUN_10009fd0(undefined1 param_1);
void FUN_1000a030(undefined4 param_1);
void FUN_1000a0e0(undefined4 param_1);
void FUN_1000a230(int param_1,int param_2);
void __thiscall FUN_1000a2a0(void *this,char *param_1);
int __fastcall FUN_1000a360(int param_1);
uint __fastcall FUN_1000a420(int param_1);
int __thiscall FUN_1000a490(void *this,byte *param_1,uint param_2);
uint FUN_1000a500(uint param_1,uint param_2);
void FUN_1000a570(void);
byte * FUN_1000a5d0(void);
void __fastcall FUN_1000a670(undefined4 param_1,uint param_2);
void __fastcall FUN_1000a6b0(int *param_1,undefined4 *param_2);
void FUN_1000a790(uint param_1);
byte * FUN_1000a830(uint param_1);
undefined4 * FUN_1000a920(undefined4 *param_1,uint param_2);
bool FUN_1000a9c0(void *param_1);
void FUN_1000aa10(void);
undefined4 * FUN_1000aa80(undefined4 *param_1);
void FUN_1000aae0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_1000aba0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4);
void FUN_1000ac30(uint param_1);
void FUN_1000ad00(int *param_1,undefined1 *param_2,int param_3,void *param_4);
undefined1 * FUN_1000adb0(undefined1 *param_1);
void __thiscall FUN_1000ade0(void *this,int *param_1,undefined4 param_2,int *param_3);
void Catch_All@1000af28(void);
void Catch_All@1000af34(void);
void FUN_1000b040(uint param_1,undefined1 *param_2,undefined4 param_3,void *param_4);
void FUN_1000b220(int param_1);
void FUN_1000b270(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,int param_5,void *param_6,int param_7,int param_8);
void __fastcall FUN_1000b420(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_1000b440(undefined4 *param_1,undefined4 *param_2);
PMLNet * __thiscall PMLNet::PMLNet(PMLNet *this);
void __thiscall SockNet::SockNet(SockNet *this);
void __thiscall PMLNet::PMLNet::Destroy(PMLNet *this);
NET_RESULT __thiscall PMLNet::SendPML(PMLNet *this,CPML *param_1,PMLRELAY *param_2);
void __thiscall PMLNet::PMLNet::OnReceive(PMLNet *this);
void __thiscall PMLNet::ClearObject(PMLNet *this);
bool __thiscall PMLNet::IsRelayPacket(PMLNet *this,PMLHEADER *param_1);
int __thiscall PMLNet::GetDataSizeFromHeader(PMLNet *this,PMLHEADER *param_1);
CPML * __thiscall PMLNet::CreatePMLHeader(PMLNet *this,CPML *param_1,PMLRELAY *param_2,int param_3);
bool __thiscall PMLNet::ParseReceived(PMLNet *this);
bool __thiscall PMLNet::ProcessPML(PMLNet *this,PMLHEADER *param_1,PMLRELAY *param_2,void *param_3,int param_4);
void FUN_1000bd50(int param_1,void *param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5);
void __thiscall SockNet::SockNet(SockNet *this);
void __thiscall SockNet::~SockNet(SockNet *this);
bool __thiscall SockNet::SockNet::Create(SockNet *this);
void __thiscall SockNet::SockNet::Destroy(SockNet *this);
bool __thiscall SockNet::Connect(SockNet *this,char *param_1,ushort param_2);
void __thiscall SockNet::Disconnect(SockNet *this);
void __thiscall SockNet::SocketRelease(SockNet *this);
NET_RESULT __thiscall SockNet::Send(SockNet *this,uchar *param_1,int param_2,int *param_3);
NET_RESULT __thiscall SockNet::Recv(SockNet *this,uchar *param_1,int param_2,int *param_3);
bool __thiscall SockNet::IsConnected(SockNet *this);
void __thiscall SockNet::Loop(SockNet *this);
ChatParser * __thiscall ChatParser::operator=(ChatParser *this,ChatParser *param_1);
void __thiscall ChatParser::ChatParser(ChatParser *this);
void __thiscall ChatParser::ChatParser(ChatParser *this,char *param_1);
bool __thiscall ChatParser::setBuffer(ChatParser *this,char *param_1);
int __thiscall ChatParser::getCharType(ChatParser *this,char param_1);
bool __thiscall ChatParser::isFinished(ChatParser *this,FST_STATE param_1);
CHATPARSER_RESULT __thiscall ChatParser::getNextParam(ChatParser *this,ulong *param_1,ulong *param_2);
CHATPARSER_RESULT __thiscall ChatParser::getNextParam(ChatParser *this,char *param_1,ulong param_2);
vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> * __thiscall ChatParser::createParamVector(ChatParser *this);
void __thiscall ChatParser::destroyParamVector(ChatParser *this,vector<CHAT_PARAM_INFO,std::allocator<CHAT_PARAM_INFO>_> *param_1);
void FUN_1000c740(void);
void FUN_1000c7e0(int *param_1,void *param_2,int param_3,void *param_4);
void __thiscall FUN_1000c8b0(void *this,void *param_1,undefined4 param_2,void *param_3);
void Catch_All@1000ca77(void);
void Catch_All@1000ca86(void);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void FUN_1000cc50(void);
void __fastcall FUN_1000cc80(void *param_1);
int __cdecl FUN_1000ccc0(int param_1);
void __fastcall FUN_1000cd20(void *param_1);
undefined4 FUN_1000cd60(undefined4 param_1,int param_2);
undefined4 FUN_1000cd90(HINSTANCE__ *param_1,int param_2);
void __fastcall __security_check_cookie(int param_1);
void __cdecl operator_delete(void *param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_1000cea9(void);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_1000cf5d(void);
int __cdecl _atexit(_func_4879 *param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
char * __thiscall std::exception::std::exception::what(exception *this);
void __cdecl operator_delete[](void *param_1);
void * __cdecl operator_new(uint param_1);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_1000d362(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl terminate(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_1000d4f5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
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
void AfxThrowMemoryException(void);
CRuntimeClass * __thiscall CCriticalSection::CCriticalSection::GetRuntimeClass(CCriticalSection *this);
void __thiscall CSyncObject::~CSyncObject(CSyncObject *this);
void __thiscall CSyncObject::CSyncObject(CSyncObject *this,char *param_1);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
AFX_MODULE_STATE * AfxGetModuleState(void);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
void __thiscall ATL::CWin32Heap::~CWin32Heap(CWin32Heap *this);
void __thiscall FUN_1000d7ef(void *this,SIZE_T param_1);
void __thiscall FUN_1000d806(void *this,LPVOID param_1);
void * __thiscall ATL::CWin32Heap::Reallocate(CWin32Heap *this,void *param_1,uint param_2);
void __thiscall FUN_1000d85d(void *this,LPCVOID param_1);
void * __thiscall ATL::CWin32Heap::`scalar_deleting_destructor'(CWin32Heap *this,uint param_1);
void __thiscall ATL::CAtlStringMgr::CAtlStringMgr(CAtlStringMgr *this,IAtlMemMgr *param_1);
long __cdecl ATL::AtlMultiply<unsigned_long>(ulong *param_1,ulong param_2,ulong param_3);
void __fastcall FUN_1000d8ea(int param_1);
undefined4 * __thiscall FUN_1000d909(void *this,byte param_1);
long __cdecl ATL::AtlAdd<unsigned_int>(uint *param_1,uint param_2,uint param_3);
CStringData * __thiscall ATL::CAtlStringMgr::Allocate(CAtlStringMgr *this,int param_1,int param_2);
CStringData * __thiscall ATL::CAtlStringMgr::Reallocate(CAtlStringMgr *this,CStringData *param_1,int param_2,int param_3);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __alloca_probe(void);
void Unwind@1000da60(void);
void Unwind@1000da90(void);
void Unwind@1000da99(void);
void Unwind@1000daa2(void);
void Unwind@1000dad0(void);
void Unwind@1000dad9(void);
void __thiscall ChatParser::Unwind@1000db10(ChatParser *this);
void Unwind@1000db30(void);
void Unwind@1000db60(void);
void Unwind@1000dbc0(void);
void Unwind@1000dc00(void);
void Unwind@1000dc09(void);
void Unwind@1000dc50(void);
void Unwind@1000dc59(void);
void Unwind@1000dc80(void);
void Unwind@1000dcb0(void);
void Unwind@1000dcb9(void);
void Unwind@1000dce0(void);
void Unwind@1000dd10(void);
void Unwind@1000dd18(void);
void Unwind@1000dd40(void);
void Unwind@1000dd70(void);
void Unwind@1000dd78(void);
void Unwind@1000ddd0(void);
void Unwind@1000ddd9(void);
void Unwind@1000dde2(void);
void Unwind@1000ddeb(void);
void Unwind@1000de10(void);
void Unwind@1000de40(void);
void Unwind@1000de49(void);
void Unwind@1000de70(void);
void Unwind@1000de78(void);
void Unwind@1000deb0(void);
void Unwind@1000dee0(void);
void Unwind@1000dee8(void);
void Unwind@1000def5(void);
void Unwind@1000df20(void);
void Unwind@1000df28(void);
void Unwind@1000df50(void);
void Unwind@1000df58(void);
void Unwind@1000df80(void);
void Unwind@1000dfb0(void);
void Unwind@1000dfe0(void);
void Unwind@1000dfe8(void);
void Unwind@1000dff0(void);
void Unwind@1000e020(void);
void Unwind@1000e050(void);
void Unwind@1000e080(void);
void Unwind@1000e088(void);
void Unwind@1000e095(void);
void Unwind@1000e0a2(void);
void Unwind@1000e0d0(void);
void Unwind@1000e0db(void);
void Unwind@1000e0e6(void);
void Unwind@1000e0f1(void);
void Unwind@1000e0fc(void);
void Unwind@1000e140(void);
void Unwind@1000e148(void);
void Unwind@1000e170(void);
void Unwind@1000e178(void);
void Unwind@1000e1a0(void);
void Unwind@1000e1a8(void);
void Unwind@1000e1b0(void);
void Unwind@1000e1e0(void);
void Unwind@1000e210(void);
void Unwind@1000e240(void);
void Unwind@1000e270(void);
void Unwind@1000e27b(void);
void Unwind@1000e286(void);
void Unwind@1000e291(void);
void __thiscall CCriticalSection::~CCriticalSection(CCriticalSection *this);
void __thiscall CCriticalSection::~CCriticalSection(CCriticalSection *this);
void __thiscall CCriticalSection::~CCriticalSection(CCriticalSection *this);
void FUN_1000e410(void);
void FUN_1000e430(void);
void FUN_1000e450(void);
void FUN_1000e4f4(void);
void FUN_1000e51c(void);
void CCriticalSection::~CCriticalSection(void);
void CCriticalSection::~CCriticalSection(void);
void CCriticalSection::~CCriticalSection(void);
void FUN_1000e5a0(void);
void FUN_1000e5b0(void);
void FUN_1000e5d5(void);
void FUN_1000e5df(void);

