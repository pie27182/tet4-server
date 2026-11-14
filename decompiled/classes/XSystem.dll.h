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

typedef struct XMutexW XMutexW, *PXMutexW;

struct XMutexW { // PlaceHolder Class Structure
};

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

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct XSmallObject XSmallObject, *PXSmallObject;

struct XSmallObject { // PlaceHolder Class Structure
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

typedef struct XMutexA XMutexA, *PXMutexA;

struct XMutexA { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct XThread XThread, *PXThread;

struct XThread { // PlaceHolder Class Structure
};

typedef struct XSemaphoreA XSemaphoreA, *PXSemaphoreA;

struct XSemaphoreA { // PlaceHolder Class Structure
};

typedef struct XCriticalSection XCriticalSection, *PXCriticalSection;

struct XCriticalSection { // PlaceHolder Class Structure
};

typedef struct XWaitableCollection XWaitableCollection, *PXWaitableCollection;

struct XWaitableCollection { // PlaceHolder Class Structure
};

typedef struct XEventA XEventA, *PXEventA;

struct XEventA { // PlaceHolder Class Structure
};

typedef struct XLock XLock, *PXLock;

struct XLock { // PlaceHolder Class Structure
};

typedef struct XRWCriticalSection XRWCriticalSection, *PXRWCriticalSection;

struct XRWCriticalSection { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct XRWLock XRWLock, *PXRWLock;

struct XRWLock { // PlaceHolder Class Structure
};

typedef struct XSemaphoreW XSemaphoreW, *PXSemaphoreW;

struct XSemaphoreW { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct XSyncObject XSyncObject, *PXSyncObject;

struct XSyncObject { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct XWaitableObject XWaitableObject, *PXWaitableObject;

struct XWaitableObject { // PlaceHolder Class Structure
};

typedef struct XEventW XEventW, *PXEventW;

struct XEventW { // PlaceHolder Class Structure
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Class Structure
};

typedef struct Thread Thread, *PThread;

struct Thread { // PlaceHolder Class Structure
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

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef WCHAR *LPWCH;

typedef WCHAR *LPCWSTR;

typedef long HRESULT;

typedef CHAR *LPCSTR;

typedef CHAR *LPCH;

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
    char pdbpath[70];
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

typedef long *LPLONG;

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


// WARNING! conflicting data type names: /ClassDataTypes/XMutexW/XMutexW - /XMutexW

typedef struct XMutexW_vftable_for_XSyncObject XMutexW_vftable_for_XSyncObject, *PXMutexW_vftable_for_XSyncObject;

struct XMutexW_vftable_for_XSyncObject {
    int (*Lock)(void *, ulong); // XMutexW virtual function #1 for parent class XSyncObject
    int (*Unlock)(void *); // XMutexW virtual function #2 for parent class XSyncObject
};

typedef struct XMutexW_vftable_for_XWaitableObject XMutexW_vftable_for_XWaitableObject, *PXMutexW_vftable_for_XWaitableObject;

struct XMutexW_vftable_for_XWaitableObject {
    undefined4 * (*vfunction1_for_XWaitableObject)(void *, byte); // XMutexW virtual function #1 for parent class XWaitableObject
    void (*Close)(void *); // XWaitableObject virtual function #2 for parent class XWaitableObject
    void (*Attach)(void *, void *); // XWaitableObject virtual function #3 for parent class XWaitableObject
    void * (*Detach)(void *); // XWaitableObject virtual function #4 for parent class XWaitableObject
};

typedef struct XSmallObject_vftable XSmallObject_vftable, *PXSmallObject_vftable;

struct XSmallObject_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // XSmallObject virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/XSmallObject/XSmallObject - /XSmallObject

typedef struct IOCompletionPortNT_vftable IOCompletionPortNT_vftable, *PIOCompletionPortNT_vftable;

struct IOCompletionPortNT_vftable {
    undefined4 * (*vfunction1)(void *, byte); // IOCompletionPortNT virtual function #1
    undefined1 (*vfunction2)(void *); // IOCompletionPortNT virtual function #2
    undefined1 (*vfunction3)(void *); // IOCompletionPortNT virtual function #3
    undefined4 (*vfunction4)(void *, undefined4, undefined4, undefined4); // IOCompletionPortNT virtual function #4
    uint (*vfunction5)(void *, undefined4 *, undefined4 *, undefined4 *, DWORD); // IOCompletionPortNT virtual function #5
};

typedef struct IOCompletionPortNT IOCompletionPortNT, *PIOCompletionPortNT;

typedef struct IOCompletionPortNT_data IOCompletionPortNT_data, *PIOCompletionPortNT_data;

struct IOCompletionPortNT_data {
    undefined4 offset_0x0;
    FARPROC offset_0x4;
    FARPROC offset_0x8;
    FARPROC offset_0xc;
};

struct IOCompletionPortNT { // class IOCompletionPortNT : IIOCompletionPort
    struct IOCompletionPortNT_vftable *vftablePtr;
    struct IOCompletionPortNT_data IOCompletionPortNT_data;
};

typedef struct IOCompletionPortWin98 IOCompletionPortWin98, *PIOCompletionPortWin98;

typedef struct IOCompletionPortWin98_vftable IOCompletionPortWin98_vftable, *PIOCompletionPortWin98_vftable;

typedef struct IOCompletionPortWin98_data IOCompletionPortWin98_data, *PIOCompletionPortWin98_data;

struct IOCompletionPortWin98_data {
    HANDLE *offset_0x0;
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
    undefined4 offset_0x18;
};

struct IOCompletionPortWin98_vftable {
    undefined4 * (*vfunction1)(void *, byte); // IOCompletionPortWin98 virtual function #1
    undefined1 (*vfunction2)(void *); // IOCompletionPortWin98 virtual function #2
    undefined1 (*vfunction3)(void *); // IOCompletionPortWin98 virtual function #3
    undefined4 (*vfunction4)(void *, undefined4, undefined4, undefined4); // IOCompletionPortWin98 virtual function #4
    uint (*vfunction5)(void *, undefined4 *, undefined4 *, undefined4 *, DWORD); // IOCompletionPortWin98 virtual function #5
};

struct IOCompletionPortWin98 { // class IOCompletionPortWin98 : IIOCompletionPort
    struct IOCompletionPortWin98_vftable *vftablePtr;
    struct IOCompletionPortWin98_data IOCompletionPortWin98_data;
};

typedef struct IIOCompletionPort_vftable IIOCompletionPort_vftable, *PIIOCompletionPort_vftable;

struct IIOCompletionPort_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IIOCompletionPort pure virtual function #1
    undefined1 (*vfunction2)(void *); //  IIOCompletionPort pure virtual function #2
    undefined1 (*vfunction3)(void *); //  IIOCompletionPort pure virtual function #3
    undefined4 (*vfunction4)(void *, undefined4, undefined4, undefined4); //  IIOCompletionPort pure virtual function #4
    uint (*vfunction5)(void *, undefined4 *, undefined4 *, undefined4 *, DWORD); //  IIOCompletionPort pure virtual function #5
};

typedef struct IIOCompletionPort IIOCompletionPort, *PIIOCompletionPort;

struct IIOCompletionPort { // class IIOCompletionPort
    struct IIOCompletionPort_vftable *vftablePtr;
};

typedef struct Thread_data Thread_data, *PThread_data;

struct Thread_data {
    undefined4 *offset_0x0;
    undefined4 offset_0x4;
    undefined4 *offset_0x8;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
};


// WARNING! conflicting data type names: /ClassDataTypes/XSystem/Threading/Thread/Thread - /XSystem/Threading/Thread

typedef struct Thread_vftable Thread_vftable, *PThread_vftable;

struct Thread_vftable {
    Thread * (*vfunction1)(void *, byte); // Thread virtual function #1
    void (*vfunction2)(void *); //  Thread pure virtual function #2
};

typedef struct TimerQueue TimerQueue, *PTimerQueue;

typedef struct TimerQueue_vftable TimerQueue_vftable, *PTimerQueue_vftable;

struct Thread_data {
    undefined4 *offset_0x0;
    undefined4 offset_0x4;
    undefined4 *offset_0x8;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
};

struct TimerQueue_vftable {
    Thread * (*vfunction1)(void *, byte); // TimerQueue virtual function #1
    void (*vfunction2)(void *); // TimerQueue virtual function #2
};

struct TimerQueue { // class TimerQueue : Thread
    struct TimerQueue_vftable *vftablePtr;
    struct Thread_data Thread_data;
};

typedef struct Timer Timer, *PTimer;

typedef struct Timer_vftable Timer_vftable, *PTimer_vftable;

typedef struct Timer_data Timer_data, *PTimer_data;

struct Timer_data {
    undefined4 *offset_0x0;
    undefined4 offset_0x4;
    void *offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
};

struct Timer_vftable {
    undefined4 * (*vfunction1)(void *, byte); // Timer virtual function #1
    undefined4 * (*vfunction2)(void *); // Timer virtual function #2
};

struct Timer { // class Timer : ITimer
    struct Timer_vftable *vftablePtr;
    struct Timer_data Timer_data;
};

typedef struct ITimer_vftable ITimer_vftable, *PITimer_vftable;

struct ITimer_vftable {
    undefined4 * (*vfunction1)(void *, byte); // ITimer virtual function #1
    undefined4 * (*vfunction2)(void *); //  ITimer pure virtual function #2
};

typedef struct ITimer ITimer, *PITimer;

struct ITimer { // class ITimer
    struct ITimer_vftable *vftablePtr;
};

typedef struct XObjectHolder<XEventA>_vftable XObjectHolder<XEventA>_vftable, *PXObjectHolder<XEventA>_vftable;

struct XObjectHolder<XEventA>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XObjectHolder<...> virtual function #1
    bool (*vfunction2)(void *); // XObjectHolder<...> virtual function #2
    void (*vfunction3)(void *); // XObjectHolder<...> virtual function #3
    undefined4 (*vfunction4)(void *); // XObjectHolder<...> virtual function #4
    void (*vfunction5)(void *, undefined4); // XObjectHolder<...> virtual function #5
    undefined4 (*vfunction6)(void *, uint, int, uint); // XObjectHolder<...> virtual function #6
    void (*vfunction7)(void *, undefined4, undefined4); // XObjectHolder<...> virtual function #7
};

typedef struct XObjectHolder<XEventA> XObjectHolder<XEventA>, *PXObjectHolder<XEventA>;

typedef struct XObjectHolder<XEventA>_data XObjectHolder<XEventA>_data, *PXObjectHolder<XEventA>_data;

struct XObjectHolder<XEventA>_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
};

struct XObjectHolder<XEventA> { // class XObjectHolder<XEventA>
    struct XObjectHolder<XEventA>_vftable *vftablePtr;
    struct XObjectHolder<XEventA>_data XObjectHolder<XEventA>_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/XSyncObject/XSyncObject - /XSyncObject

typedef struct XSyncObject_vftable XSyncObject_vftable, *PXSyncObject_vftable;

struct XSyncObject_vftable {
    int (*Lock)(void *, ulong); //  XSyncObject pure virtual function #1
    int (*Unlock)(void *); //  XSyncObject pure virtual function #2
};


// WARNING! conflicting data type names: /ClassDataTypes/XWaitableObject/XWaitableObject - /XWaitableObject

typedef struct XWaitableObject_vftable XWaitableObject_vftable, *PXWaitableObject_vftable;

struct XWaitableObject_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XWaitableObject virtual function #1
    void (*Close)(void *); // XWaitableObject virtual function #2
    void (*Attach)(void *, void *); // XWaitableObject virtual function #3
    void * (*Detach)(void *); // XWaitableObject virtual function #4
};

typedef struct XWaitableObject_data XWaitableObject_data, *PXWaitableObject_data;

struct XWaitableObject_data {
    undefined4 *offset_0x0;
    undefined **offset_0x4;
    undefined **offset_0x8;
    undefined4 *offset_0xc;
    undefined **offset_0x10;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
};

typedef struct XMemoryPool_vftable XMemoryPool_vftable, *PXMemoryPool_vftable;

struct XMemoryPool_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XMemoryPool virtual function #1
};

typedef struct XMemoryPool XMemoryPool, *PXMemoryPool;

struct XMemoryPool { // class XMemoryPool
    struct XMemoryPool_vftable *vftablePtr;
};

typedef struct XSignals_vftable XSignals_vftable, *PXSignals_vftable;

struct XSignals_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XSignals virtual function #1
};

typedef struct XSignals XSignals, *PXSignals;

typedef struct XSignals_data XSignals_data, *PXSignals_data;

struct XSignals_data {
    undefined1 offset_0x0;
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
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
};

struct XSignals { // class XSignals
    struct XSignals_vftable *vftablePtr;
    struct XSignals_data XSignals_data;
};

typedef struct ReqItem ReqItem, *PReqItem;

typedef struct ReqItem_vftable ReqItem_vftable, *PReqItem_vftable;

typedef struct ReqItem_data ReqItem_data, *PReqItem_data;

struct ReqItem_data {
    undefined4 offset_0x0;
    void *offset_0x4;
    undefined4 offset_0x8;
};

struct ReqItem_vftable {
    undefined4 * (*vfunction1)(void *, byte); // ReqItem virtual function #1
};

struct ReqItem { // class ReqItem
    struct ReqItem_vftable *vftablePtr;
    struct ReqItem_data ReqItem_data;
};

typedef struct XEventObjHolder_vftable XEventObjHolder_vftable, *PXEventObjHolder_vftable;

struct XEventObjHolder_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XObjectHolder<...> virtual function #1
    bool (*vfunction2)(void *); // XEventObjHolder virtual function #2
    void (*vfunction3)(void *); // XEventObjHolder virtual function #3
    undefined4 (*vfunction4)(void *); // XEventObjHolder virtual function #4
    void (*vfunction5)(void *, undefined4); // XObjectHolder<...> virtual function #5
    undefined4 (*vfunction6)(void *, uint, int, uint); // XObjectHolder<...> virtual function #6
    void (*vfunction7)(void *, undefined4, undefined4); // XObjectHolder<...> virtual function #7
};

typedef struct XEventObjHolder XEventObjHolder, *PXEventObjHolder;

struct XObjectHolder<XEventA>_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
};

struct XEventObjHolder { // class XEventObjHolder : XObjectHolder<XEventA>
    struct XEventObjHolder_vftable *vftablePtr;
    struct XObjectHolder<XEventA>_data XObjectHolder<XEventA>_data;
};

typedef struct XEventA_vftable_for_XWaitableObject XEventA_vftable_for_XWaitableObject, *PXEventA_vftable_for_XWaitableObject;

struct XEventA_vftable_for_XWaitableObject {
    undefined4 * (*vfunction1_for_XWaitableObject)(void *, byte); // XEventA virtual function #1 for parent class XWaitableObject
    void (*Close)(void *); // XWaitableObject virtual function #2 for parent class XWaitableObject
    void (*Attach)(void *, void *); // XWaitableObject virtual function #3 for parent class XWaitableObject
    void * (*Detach)(void *); // XWaitableObject virtual function #4 for parent class XWaitableObject
};

typedef struct XEventA_vftable_for_XSyncObject XEventA_vftable_for_XSyncObject, *PXEventA_vftable_for_XSyncObject;

struct XEventA_vftable_for_XSyncObject {
    int (*Lock)(void *, ulong); // XEventA virtual function #1 for parent class XSyncObject
    int (*Unlock)(void *); // XEventA virtual function #2 for parent class XSyncObject
};


// WARNING! conflicting data type names: /ClassDataTypes/XEventA/XEventA - /XEventA

typedef struct XCriticalSection_vftable XCriticalSection_vftable, *PXCriticalSection_vftable;

struct XCriticalSection_vftable {
    int (*Lock)(void *, ulong); // XCriticalSection virtual function #1
    int (*Unlock)(void *); // XCriticalSection virtual function #2
    undefined4 * (*vfunction3)(void *, byte); // XCriticalSection virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/XCriticalSection/XCriticalSection - /XCriticalSection

typedef struct XCriticalSection_data XCriticalSection_data, *PXCriticalSection_data;

typedef struct CriticalSection CriticalSection, *PCriticalSection;

struct XCriticalSection_data {
    struct CriticalSection *offset_0x0;
};

struct CriticalSection { // PlaceHolder Structure
};

typedef struct XRWLock_vftable XRWLock_vftable, *PXRWLock_vftable;

struct XRWLock_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XRWLock virtual function #1
};

typedef struct XRWLock_data XRWLock_data, *PXRWLock_data;

struct XRWLock_data {
    undefined4 *offset_0x0;
    int offset_0x4;
    int offset_0x8;
};


// WARNING! conflicting data type names: /ClassDataTypes/XRWLock/XRWLock - /XRWLock

typedef struct XSemaphoreW_vftable_for_XSyncObject XSemaphoreW_vftable_for_XSyncObject, *PXSemaphoreW_vftable_for_XSyncObject;

struct XSemaphoreW_vftable_for_XSyncObject {
    int (*Lock)(void *, ulong); // XSemaphoreW virtual function #1 for parent class XSyncObject
    int (*Unlock)(void *); // XSemaphoreW virtual function #2 for parent class XSyncObject
};

typedef struct XSemaphoreW_vftable_for_XWaitableObject XSemaphoreW_vftable_for_XWaitableObject, *PXSemaphoreW_vftable_for_XWaitableObject;

struct XSemaphoreW_vftable_for_XWaitableObject {
    undefined4 * (*vfunction1_for_XWaitableObject)(void *, byte); // XSemaphoreW virtual function #1 for parent class XWaitableObject
    void (*Close)(void *); // XWaitableObject virtual function #2 for parent class XWaitableObject
    void (*Attach)(void *, void *); // XWaitableObject virtual function #3 for parent class XWaitableObject
    void * (*Detach)(void *); // XWaitableObject virtual function #4 for parent class XWaitableObject
};


// WARNING! conflicting data type names: /ClassDataTypes/XSemaphoreW/XSemaphoreW - /XSemaphoreW


// WARNING! conflicting data type names: /ClassDataTypes/XLock/XLock - /XLock

typedef struct XLock_vftable XLock_vftable, *PXLock_vftable;

struct XLock_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XLock virtual function #1
};

typedef struct XLock_data XLock_data, *PXLock_data;

struct XLock_data {
    undefined4 *offset_0x0;
    uint offset_0x4;
    undefined4 offset_0x8;
};


// WARNING! conflicting data type names: /ClassDataTypes/XSemaphoreA/XSemaphoreA - /XSemaphoreA

typedef struct XSemaphoreA_vftable_for_XWaitableObject XSemaphoreA_vftable_for_XWaitableObject, *PXSemaphoreA_vftable_for_XWaitableObject;

struct XSemaphoreA_vftable_for_XWaitableObject {
    undefined4 * (*vfunction1_for_XWaitableObject)(void *, byte); // XSemaphoreA virtual function #1 for parent class XWaitableObject
    void (*Close)(void *); // XWaitableObject virtual function #2 for parent class XWaitableObject
    void (*Attach)(void *, void *); // XWaitableObject virtual function #3 for parent class XWaitableObject
    void * (*Detach)(void *); // XWaitableObject virtual function #4 for parent class XWaitableObject
};

typedef struct XSemaphoreA_vftable_for_XSyncObject XSemaphoreA_vftable_for_XSyncObject, *PXSemaphoreA_vftable_for_XSyncObject;

struct XSemaphoreA_vftable_for_XSyncObject {
    int (*Lock)(void *, ulong); // XSemaphoreA virtual function #1 for parent class XSyncObject
    int (*Unlock)(void *); // XSemaphoreA virtual function #2 for parent class XSyncObject
};

typedef struct exception_data exception_data, *Pexception_data;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};


// WARNING! conflicting data type names: /ClassDataTypes/std/exception/exception - /std/exception

typedef struct exception_vftable exception_vftable, *Pexception_vftable;

struct exception_vftable {
    exception * (*vfunction1)(void *, byte); // exception virtual function #1
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
    exception * (*vfunction1)(void *, byte); // out_of_range virtual function #1
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
    exception * (*vfunction1)(void *, byte); // bad_alloc virtual function #1
    char * (*vfunction2)(void *); // exception virtual function #2
};

typedef struct logic_error_vftable logic_error_vftable, *Plogic_error_vftable;

struct logic_error_vftable {
    exception * (*vfunction1)(void *, byte); // logic_error virtual function #1
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
    exception * (*vfunction1)(void *, byte); // logic_error virtual function #1
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
    exception * (*vfunction1)(void *, byte); // bad_exception virtual function #1
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

typedef struct XObjectPool<XThreadPool::XWorkItem> XObjectPool<XThreadPool::XWorkItem>, *PXObjectPool<XThreadPool::XWorkItem>;

typedef struct XObjectPool<XThreadPool::XWorkItem>_vftable XObjectPool<XThreadPool::XWorkItem>_vftable, *PXObjectPool<XThreadPool::XWorkItem>_vftable;

typedef struct XObjectPool<XThreadPool::XWorkItem>_data XObjectPool<XThreadPool::XWorkItem>_data, *PXObjectPool<XThreadPool::XWorkItem>_data;

struct XObjectPool<XThreadPool::XWorkItem>_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

struct XObjectPool<XThreadPool::XWorkItem>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XObjectPool<XThreadPool::XWorkItem> virtual function #1
};

struct XObjectPool<XThreadPool::XWorkItem> { // class XObjectPool<XThreadPool::XWorkItem>
    struct XObjectPool<XThreadPool::XWorkItem>_vftable *vftablePtr;
    struct XObjectPool<XThreadPool::XWorkItem>_data XObjectPool<XThreadPool::XWorkItem>_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/XEventW/XEventW - /XEventW

typedef struct XEventW_vftable_for_XWaitableObject XEventW_vftable_for_XWaitableObject, *PXEventW_vftable_for_XWaitableObject;

struct XEventW_vftable_for_XWaitableObject {
    undefined4 * (*vfunction1_for_XWaitableObject)(void *, byte); // XEventW virtual function #1 for parent class XWaitableObject
    void (*Close)(void *); // XWaitableObject virtual function #2 for parent class XWaitableObject
    void (*Attach)(void *, void *); // XWaitableObject virtual function #3 for parent class XWaitableObject
    void * (*Detach)(void *); // XWaitableObject virtual function #4 for parent class XWaitableObject
};

typedef struct XEventW_vftable_for_XSyncObject XEventW_vftable_for_XSyncObject, *PXEventW_vftable_for_XSyncObject;

struct XEventW_vftable_for_XSyncObject {
    int (*Lock)(void *, ulong); // XEventW virtual function #1 for parent class XSyncObject
    int (*Unlock)(void *); // XEventW virtual function #2 for parent class XSyncObject
};

typedef struct XThread_vftable XThread_vftable, *PXThread_vftable;

struct XThread_vftable {
    XThread * (*vfunction1)(void *, byte); // XThread virtual function #1
    void (*vfunction2)(void *); //  XThread pure virtual function #2
};


// WARNING! conflicting data type names: /ClassDataTypes/XThread/XThread - /XThread

typedef struct XThread_data XThread_data, *PXThread_data;

struct XThread_data {
    undefined4 *offset_0x0;
};

typedef struct XFixedSizeMemoryBlockPool_vftable XFixedSizeMemoryBlockPool_vftable, *PXFixedSizeMemoryBlockPool_vftable;

struct XFixedSizeMemoryBlockPool_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XFixedSizeMemoryBlockPool virtual function #1
};

typedef struct XFixedSizeMemoryBlockPool_data XFixedSizeMemoryBlockPool_data, *PXFixedSizeMemoryBlockPool_data;

struct XFixedSizeMemoryBlockPool_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void *offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
};

typedef struct XFixedSizeMemoryBlockPool XFixedSizeMemoryBlockPool, *PXFixedSizeMemoryBlockPool;

struct XFixedSizeMemoryBlockPool_data {
    undefined4 offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void *offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
};

struct XFixedSizeMemoryBlockPool { // class XFixedSizeMemoryBlockPool
    struct XFixedSizeMemoryBlockPool_vftable *vftablePtr;
    struct XFixedSizeMemoryBlockPool_data XFixedSizeMemoryBlockPool_data;
};

typedef struct XMutexA_vftable_for_XSyncObject XMutexA_vftable_for_XSyncObject, *PXMutexA_vftable_for_XSyncObject;

struct XMutexA_vftable_for_XSyncObject {
    int (*Lock)(void *, ulong); // XMutexA virtual function #1 for parent class XSyncObject
    int (*Unlock)(void *); // XMutexA virtual function #2 for parent class XSyncObject
};

typedef struct XMutexA_vftable_for_XWaitableObject XMutexA_vftable_for_XWaitableObject, *PXMutexA_vftable_for_XWaitableObject;

struct XMutexA_vftable_for_XWaitableObject {
    undefined4 * (*vfunction1_for_XWaitableObject)(void *, byte); // XMutexA virtual function #1 for parent class XWaitableObject
    void (*Close)(void *); // XWaitableObject virtual function #2 for parent class XWaitableObject
    void (*Attach)(void *, void *); // XWaitableObject virtual function #3 for parent class XWaitableObject
    void * (*Detach)(void *); // XWaitableObject virtual function #4 for parent class XWaitableObject
};


// WARNING! conflicting data type names: /ClassDataTypes/XMutexA/XMutexA - /XMutexA

typedef struct XWaitableCollection_data XWaitableCollection_data, *PXWaitableCollection_data;

struct XWaitableCollection_data {
    int offset_0x0;
};

typedef struct XWaitableCollection_vftable XWaitableCollection_vftable, *PXWaitableCollection_vftable;

struct XWaitableCollection_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XWaitableCollection virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/XWaitableCollection/XWaitableCollection - /XWaitableCollection

typedef struct XReusableObjectPool<XEventA,XEventObjHolder>_vftable XReusableObjectPool<XEventA,XEventObjHolder>_vftable, *PXReusableObjectPool<XEventA,XEventObjHolder>_vftable;

struct XReusableObjectPool<XEventA,XEventObjHolder>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XReusableObjectPool<...> virtual function #1
};

typedef struct XReusableObjectPool<XEventA,XEventObjHolder> XReusableObjectPool<XEventA,XEventObjHolder>, *PXReusableObjectPool<XEventA,XEventObjHolder>;

struct XReusableObjectPool<XEventA,XEventObjHolder> { // class XReusableObjectPool<XEventA,XEventObjHolder>
    struct XReusableObjectPool<XEventA,XEventObjHolder>_vftable *vftablePtr;
};

typedef struct XObjectPool<XSignals::ReqItem> XObjectPool<XSignals::ReqItem>, *PXObjectPool<XSignals::ReqItem>;

typedef struct XObjectPool<XSignals::ReqItem>_vftable XObjectPool<XSignals::ReqItem>_vftable, *PXObjectPool<XSignals::ReqItem>_vftable;

struct XObjectPool<XSignals::ReqItem> { // class XObjectPool<XSignals::ReqItem>
    struct XObjectPool<XSignals::ReqItem>_vftable *vftablePtr;
};

struct XObjectPool<XSignals::ReqItem>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XObjectPool<XSignals::ReqItem> virtual function #1
};

typedef struct XTimerQueueTimer_data XTimerQueueTimer_data, *PXTimerQueueTimer_data;

struct XTimerQueueTimer_data {
    int offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined **offset_0x10;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
};

typedef struct XTimerQueueTimer XTimerQueueTimer, *PXTimerQueueTimer;

typedef struct XTimerQueueTimer_vftable XTimerQueueTimer_vftable, *PXTimerQueueTimer_vftable;

struct XTimerQueueTimer_data {
    int offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined **offset_0x10;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
};

struct XTimerQueueTimer_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XTimerQueueTimer virtual function #1
    void (*vfunction2)(void *); // XTimerQueueTimer virtual function #2
};

struct XTimerQueueTimer { // class XTimerQueueTimer : IXTimer
    struct XTimerQueueTimer_vftable *vftablePtr;
    struct XTimerQueueTimer_data XTimerQueueTimer_data;
};

typedef struct XThreadPool XThreadPool, *PXThreadPool;

typedef struct XThreadPool_vftable XThreadPool_vftable, *PXThreadPool_vftable;

typedef struct XThreadPool_data XThreadPool_data, *PXThreadPool_data;

struct XThreadPool_data {
    int *offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    void *offset_0x8;
    int offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
};

struct XThreadPool_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XThreadPool virtual function #1
};

struct XThreadPool { // class XThreadPool
    struct XThreadPool_vftable *vftablePtr;
    struct XThreadPool_data XThreadPool_data;
};

typedef struct IXTimer_vftable IXTimer_vftable, *PIXTimer_vftable;

struct IXTimer_vftable {
    undefined4 * (*vfunction1)(void *, byte); //  IXTimer pure virtual function #1
    void (*vfunction2)(void *); //  IXTimer pure virtual function #2
    void (*vfunction3)(void *); //  IXTimer pure virtual function #3
    void (*vfunction4)(void *); //  IXTimer pure virtual function #4
    void (*vfunction5)(void *); //  IXTimer pure virtual function #5
    void (*vfunction6)(void *); //  IXTimer pure virtual function #6
    void (*vfunction7)(void *); //  IXTimer pure virtual function #7
    void (*vfunction8)(void *); //  IXTimer pure virtual function #8
};

typedef struct IXTimer IXTimer, *PIXTimer;

struct IXTimer { // class IXTimer
    struct IXTimer_vftable *vftablePtr;
};

typedef struct XTimerQueue XTimerQueue, *PXTimerQueue;

typedef struct XTimerQueue_vftable XTimerQueue_vftable, *PXTimerQueue_vftable;

typedef struct XTimerQueue_data XTimerQueue_data, *PXTimerQueue_data;

struct XTimerQueue_data {
    FARPROC offset_0x0;
    FARPROC offset_0x4;
    FARPROC offset_0x8;
    FARPROC offset_0xc;
    FARPROC offset_0x10;
    FARPROC offset_0x14;
    FARPROC offset_0x18;
    FARPROC offset_0x1c;
    undefined4 offset_0x20;
};

struct XTimerQueue_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XTimerQueue virtual function #1
};

struct XTimerQueue { // class XTimerQueue
    struct XTimerQueue_vftable *vftablePtr;
    struct XTimerQueue_data XTimerQueue_data;
};

typedef struct XRWCriticalSection_vftable XRWCriticalSection_vftable, *PXRWCriticalSection_vftable;

struct XRWCriticalSection_vftable {
    undefined4 * (*vfunction1)(void *, byte); // XRWCriticalSection virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/XRWCriticalSection/XRWCriticalSection - /XRWCriticalSection

typedef struct XRWCriticalSection_data XRWCriticalSection_data, *PXRWCriticalSection_data;

struct XRWCriticalSection_data {
    void *offset_0x0;
};

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


// WARNING! conflicting data type names: /Demangler/IXTimer - /ClassDataTypes/IXTimer/IXTimer

typedef struct MEMORY_BLOCK MEMORY_BLOCK, *PMEMORY_BLOCK;

struct MEMORY_BLOCK { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef struct _THandle _THandle, *P_THandle;

struct _THandle { // PlaceHolder Structure
};

typedef struct Mutex Mutex, *PMutex;

struct Mutex { // PlaceHolder Structure
};

typedef struct RWCriticalSection RWCriticalSection, *PRWCriticalSection;

struct RWCriticalSection { // PlaceHolder Structure
};

typedef struct ManualResetEvent ManualResetEvent, *PManualResetEvent;

struct ManualResetEvent { // PlaceHolder Structure
};

typedef struct AutoResetEvent AutoResetEvent, *PAutoResetEvent;

struct AutoResetEvent { // PlaceHolder Structure
};

typedef struct Barrier Barrier, *PBarrier;

struct Barrier { // PlaceHolder Structure
};

typedef struct Semaphore Semaphore, *PSemaphore;

struct Semaphore { // PlaceHolder Structure
};

typedef struct CondVar CondVar, *PCondVar;

struct CondVar { // PlaceHolder Structure
};

typedef struct _Handle _Handle, *P_Handle;

struct _Handle { // PlaceHolder Structure
};

typedef struct _XMemory _XMemory, *P_XMemory;

struct _XMemory { // PlaceHolder Structure
};

typedef struct XMemoryPtr XMemoryPtr, *PXMemoryPtr;

struct XMemoryPtr { // PlaceHolder Structure
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct _Init_locks _Init_locks, *P_Init_locks;

struct _Init_locks { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef longlong __time64_t;

typedef uint size_t;

typedef size_t rsize_t;

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef struct localeinfo_struct *_locale_t;




void __thiscall XSystem::Threading::CriticalSection::`default_constructor_closure'(CriticalSection *this);
void __thiscall XSystem::Threading::Mutex::`default_constructor_closure'(Mutex *this);
void __thiscall XSystem::Threading::AutoResetEvent::`default_constructor_closure'(AutoResetEvent *this);
void __thiscall XSystem::Threading::ManualResetEvent::`default_constructor_closure'(ManualResetEvent *this);
Barrier * __thiscall XSystem::Threading::Barrier::operator=(Barrier *this,Barrier *param_1);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void FUN_10001130(void);
exception * __thiscall std::bad_alloc::vfunction1(bad_alloc *this,byte param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,void *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
int __thiscall std::logic_error::vfunction2(logic_error *this);
exception * __thiscall std::logic_error::vfunction1(logic_error *this,byte param_1);
undefined4 * FUN_10001280(void);
void __fastcall FUN_100012c0(undefined4 param_1,int *param_2);
undefined4 * __thiscall FUN_10001320(void *this,void *param_1);
undefined4 * FUN_100013e0(int *param_1);
void __fastcall FUN_10001440(int param_1);
void * __thiscall FUN_10001470(void *this,void *param_1,uint param_2,uint param_3);
void FUN_10001550(void);
void FUN_10001640(exception *param_1);
int __thiscall FUN_10001660(void *this,undefined4 *param_1,uint param_2);
void FUN_10001740(void);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
int __thiscall FUN_100017e0(void *this,char *param_1);
void __thiscall FUN_10001820(void *this,uint param_1);
undefined * Catch_All@100018cf(void);
void FUN_100018f7(void);
void Catch_All@10001960(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void * __thiscall FUN_10001a00(void *this,undefined4 *param_1,uint param_2);
undefined4 * FUN_10001ad0(undefined4 *param_1);
void FUN_10001bb0(void);
undefined1 * FUN_10001c10(undefined1 *param_1);
undefined4 * FUN_10001cc0(undefined4 *param_1,undefined4 param_2);
void FUN_10001d60(undefined4 *param_1);
void __thiscall XSystem::Threading::Thread::Thread(Thread *this,Thread *param_1);
Thread * __thiscall XSystem::Threading::Thread::vfunction1(Thread *this,byte param_1);
void FUN_10001e50(void);
undefined4 * __thiscall FUN_10001ec0(void *this,undefined4 *param_1);
void FUN_10001f80(int *param_1);
undefined4 FUN_10002110(undefined *param_1);
void FUN_10002210(void);
void FUN_10002250(void);
void FUN_10002280(void);
void FUN_100022e0(void);
undefined4 * __fastcall FUN_10002340(undefined4 param_1,undefined4 *param_2);
void FUN_10002370(exception *param_1);
void * __fastcall FUN_10002390(void *param_1,void *param_2);
IOCompletionPortNT * __thiscall XSystem::ThreadPoolImpl::IOCompletionPortNT::IOCompletionPortNT(IOCompletionPortNT *this);
bool __thiscall XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction2(IOCompletionPortNT *this,undefined4 param_1,undefined4 param_2);
undefined1 __thiscall XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction3(IOCompletionPortNT *this);
bool __thiscall XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction4(IOCompletionPortNT *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
bool __thiscall XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction5(IOCompletionPortNT *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * __thiscall XSystem::ThreadPoolImpl::IOCompletionPortNT::vfunction1(IOCompletionPortNT *this,byte param_1);
void FUN_10002540(void);
void FUN_100025b0(void);
IOCompletionPortWin98 * __thiscall XSystem::ThreadPoolImpl::IOCompletionPortWin98::IOCompletionPortWin98(IOCompletionPortWin98 *this);
undefined1 __thiscall XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction2(IOCompletionPortWin98 *this);
undefined1 __thiscall XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction3(IOCompletionPortWin98 *this);
undefined4 __thiscall XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction4(IOCompletionPortWin98 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void Catch_All@10002742(void);
uint __thiscall XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction5(IOCompletionPortWin98 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,DWORD param_4);
undefined4 * __thiscall XSystem::ThreadPoolImpl::IOCompletionPortWin98::vfunction1(IOCompletionPortWin98 *this,byte param_1);
void FUN_10002970(undefined4 *param_1);
void FUN_100029f0(void);
void FUN_10002b50(void);
void __thiscall std::length_error::length_error(length_error *this);
undefined4 * FUN_10002c40(undefined4 param_1);
void __thiscall FUN_10002d10(void *this,undefined4 *param_1);
void FUN_10002da0(int param_1);
void FUN_10002e70(uint param_1);
void FUN_10002fe0(int param_1);
undefined4 * FUN_100030e0(void);
void FUN_10003160(void);
void FUN_100031c0(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void FUN_10003340(void);
void __thiscall XSystem::TimerImpl::ITimer::~ITimer(ITimer *this);
undefined4 * __thiscall XSystem::TimerImpl::ITimer::vfunction1(ITimer *this,byte param_1);
void FUN_100033e0(void);
TimerQueue * __thiscall XSystem::TimerImpl::TimerQueue::TimerQueue(TimerQueue *this,undefined4 *param_1);
void __thiscall XSystem::TimerImpl::TimerQueue::~TimerQueue(TimerQueue *this);
void __thiscall FUN_100035e0(void *this,undefined4 param_1);
void FUN_100036a0(int param_1);
void __thiscall XSystem::TimerImpl::TimerQueue::vfunction2(TimerQueue *this);
Thread * __thiscall XSystem::TimerImpl::TimerQueue::vfunction1(TimerQueue *this,byte param_1);
void FUN_100038e0(void);
Timer * __thiscall XSystem::TimerImpl::Timer::Timer(Timer *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __fastcall FUN_10003a80(undefined4 *param_1);
undefined4 * __thiscall XSystem::TimerImpl::Timer::vfunction2(Timer *this);
undefined4 FUN_10003b80(int param_1);
undefined4 * __thiscall XSystem::TimerImpl::Timer::vfunction1(Timer *this,byte param_1);
void __fastcall FUN_10003be0(undefined4 *param_1);
void FUN_10003c00(void);
void FUN_10003c30(void);
void FUN_10003d20(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void FUN_10003db0(void);
void __thiscall FUN_10003ef0(void *this,undefined4 param_1,undefined4 *param_2);
void __thiscall XSyncObject::~XSyncObject(XSyncObject *this);
void __thiscall XSyncObject::~XSyncObject(XSyncObject *this,XSyncObject *param_1);
void __thiscall XCriticalSection::XCriticalSection(XCriticalSection *this,XCriticalSection *param_1);
void __thiscall XCriticalSection::`default_constructor_closure'(XCriticalSection *this);
undefined4 * __thiscall XCriticalSection::vfunction3(XCriticalSection *this,byte param_1);
void __thiscall XWaitableObject::XWaitableObject(XWaitableObject *this,XWaitableObject *param_1);
undefined4 * __thiscall XWaitableObject::vfunction1(XWaitableObject *this,byte param_1);
XMutexA * __thiscall XMutexA::XMutexA(XMutexA *this);
void __thiscall XMutexA::~XMutexA(XMutexA *this);
void __thiscall XMutexA::XMutexA(XMutexA *this,XMutexA *param_1);
undefined4 * __thiscall XMutexA::vfunction1_for_XWaitableObject(XMutexA *this,byte param_1);
XMutexW * __thiscall XMutexW::XMutexW(XMutexW *this);
void __thiscall XMutexW::~XMutexW(XMutexW *this);
void __thiscall XMutexW::XMutexW(XMutexW *this,XMutexW *param_1);
undefined4 * __thiscall XMutexW::vfunction1_for_XWaitableObject(XMutexW *this,byte param_1);
XSemaphoreA * __thiscall XSemaphoreA::XSemaphoreA(XSemaphoreA *this);
void __thiscall XSemaphoreA::~XSemaphoreA(XSemaphoreA *this);
void __thiscall XSemaphoreA::XSemaphoreA(XSemaphoreA *this,XSemaphoreA *param_1);
undefined4 * __thiscall XSemaphoreA::vfunction1_for_XWaitableObject(XSemaphoreA *this,byte param_1);
XSemaphoreW * __thiscall XSemaphoreW::XSemaphoreW(XSemaphoreW *this);
void __thiscall XSemaphoreW::~XSemaphoreW(XSemaphoreW *this);
void __thiscall XSemaphoreW::XSemaphoreW(XSemaphoreW *this,XSemaphoreW *param_1);
Thread * __thiscall XSystem::Threading::Thread::operator=(Thread *this,Thread *param_1);
undefined4 * __thiscall XSemaphoreW::vfunction1_for_XWaitableObject(XSemaphoreW *this,byte param_1);
XEventA * __thiscall XEventA::XEventA(XEventA *this);
void __thiscall XEventA::~XEventA(XEventA *this);
void __thiscall XEventA::XEventA(XEventA *this,XEventA *param_1);
undefined4 * __thiscall XEventA::vfunction1_for_XWaitableObject(XEventA *this,byte param_1);
XEventW * __thiscall XEventW::XEventW(XEventW *this);
void __thiscall XEventW::~XEventW(XEventW *this);
void __thiscall XEventW::XEventW(XEventW *this,XEventW *param_1);
undefined4 * __thiscall XEventW::vfunction1_for_XWaitableObject(XEventW *this,byte param_1);
void __thiscall XRWCriticalSection::XRWCriticalSection(XRWCriticalSection *this,XRWCriticalSection *param_1);
undefined4 * __thiscall XRWCriticalSection::vfunction1(XRWCriticalSection *this,byte param_1);
void __thiscall XLock::XLock(XLock *this,XLock *param_1);
XLock * __thiscall XLock::operator=(XLock *this,XLock *param_1);
undefined4 * __thiscall XLock::vfunction1(XLock *this,byte param_1);
void __thiscall XRWLock::XRWLock(XRWLock *this,XRWLock *param_1);
undefined4 * __thiscall XRWLock::vfunction1(XRWLock *this,byte param_1);
void __thiscall XWaitableCollection::XWaitableCollection(XWaitableCollection *this,XWaitableCollection *param_1);
undefined4 * __thiscall XWaitableCollection::vfunction1(XWaitableCollection *this,byte param_1);
XMutexA * __thiscall XMutexA::XMutexA(XMutexA *this);
void FUN_10004dd0(void);
void __thiscall XThread::XThread(XThread *this,XThread *param_1);
XThread * __thiscall XThread::vfunction1(XThread *this,byte param_1);
undefined4 * __thiscall XThreadPool::vfunction1(XThreadPool *this,byte param_1);
XObjectPool<XThreadPool::XWorkItem> * __thiscall XObjectPool<XThreadPool::XWorkItem>::XObjectPool<XThreadPool::XWorkItem>(XObjectPool<XThreadPool::XWorkItem> *this);
void __fastcall FUN_10004f90(undefined4 *param_1);
void __fastcall FUN_10005030(int param_1);
void __fastcall XLock::XLock_Constructor_or_Destructor(int param_1,void *param_2);
undefined4 * __thiscall XObjectPool<XThreadPool::XWorkItem>::vfunction1(XObjectPool<XThreadPool::XWorkItem> *this,byte param_1);
void __fastcall FUN_10005240(int param_1);
MEMORY_BLOCK * __cdecl XMemory::InternalAlloc(ulong param_1);
undefined4 * __thiscall XFixedSizeMemoryBlockPool::vfunction1(XFixedSizeMemoryBlockPool *this,byte param_1);
undefined4 * __fastcall FUN_100053b0(int param_1);
void __fastcall FUN_10005450(undefined4 param_1,int param_2,undefined4 param_3);
undefined4 * __thiscall XMemoryPool::vfunction1(XMemoryPool *this,byte param_1);
undefined4 FUN_100054f0(void);
void FUN_10005560(void);
void FUN_10005570(void);
void FUN_10005600(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void __thiscall std::length_error::length_error(length_error *this);
void __thiscall FUN_10005710(void *this,undefined4 param_1,undefined4 *param_2);
void __thiscall XSmallObject::~XSmallObject(XSmallObject *this);
void __thiscall XSmallObject::~XSmallObject(XSmallObject *this,XSmallObject *param_1);
XSmallObject * __thiscall XSmallObject::operator=(XSmallObject *this,XSmallObject *param_1);
undefined4 * __thiscall XSmallObject::scalar_deleting_destructor(XSmallObject *this,byte param_1);
void FUN_100059a0(int param_1);
int FUN_10005a40(int param_1);
void FUN_10005ab0(void);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void FUN_10005c80(void);
void __thiscall XCriticalSection::~XCriticalSection(XCriticalSection *this);
void FUN_10005d60(void);
undefined4 __thiscall XEventObjHolder::vfunction2(XEventObjHolder *this);
void __thiscall XEventObjHolder::vfunction3(XEventObjHolder *this);
int __thiscall XEventObjHolder::vfunction4(XEventObjHolder *this);
undefined4 * __thiscall XSignals::ReqItem::vfunction1(ReqItem *this,byte param_1);
undefined4 * __thiscall XSignals::vfunction1(XSignals *this,byte param_1);
void FUN_10005e90(void);
void FUN_10005ed0(int param_1,int *param_2,uint *param_3);
undefined4 FUN_100063c0(void);
void FUN_10006430(void);
undefined1 * FUN_10006490(undefined1 *param_1,undefined1 *param_2);
void FUN_10006510(int param_1,int *param_2,int param_3,int *param_4,int param_5,int *param_6);
int * FUN_100065d0(int *param_1,uint *param_2);
void FUN_10006720(int *param_1,uint *param_2);
void thunk_FUN_10006a90(void);
void __thiscall FUN_100068a0(void *this,int param_1,uint param_2);
void FUN_10006950(int *param_1,int param_2,int *param_3);
void FUN_10006a90(void);
void __fastcall FUN_10006ae0(uint param_1,int param_2);
int * FUN_10006b80(int *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5);
void __fastcall FUN_10006bf0(void *param_1);
void __thiscall FUN_10006c60(void *this,uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
void Catch_All@10006df5(void);
void Catch_All@10006e01(void);
void FUN_10006f00(void);
void FUN_10006f20(undefined4 param_1,undefined4 param_2);
void FUN_10006f60(int param_1,undefined4 *param_2);
void Catch_All@10006fe7(void);
void __thiscall std::length_error::length_error(length_error *this);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
bool __thiscall XObjectHolder<XEventA>::vfunction2(XObjectHolder<XEventA> *this);
void __thiscall XObjectHolder<XEventA>::vfunction3(XObjectHolder<XEventA> *this);
undefined4 __thiscall XObjectHolder<XEventA>::vfunction4(XObjectHolder<XEventA> *this);
void __thiscall XObjectHolder<XEventA>::vfunction5(XObjectHolder<XEventA> *this,undefined4 param_1);
undefined4 __thiscall XObjectHolder<XEventA>::vfunction6(XObjectHolder<XEventA> *this,uint param_1,int param_2,uint param_3);
void __thiscall XObjectHolder<XEventA>::vfunction7(XObjectHolder<XEventA> *this,undefined4 param_1,undefined4 param_2);
XReusableObjectPool<XEventA,XEventObjHolder> * __thiscall XReusableObjectPool<XEventA,XEventObjHolder>::XReusableObjectPool<XEventA,XEventObjHolder>(XReusableObjectPool<XEventA,XEventObjHolder> *this);
void __fastcall FUN_100072a0(undefined4 *param_1);
void XLock::XLock_Constructor_or_Destructor(void);
void __thiscall XEventObjHolder::XEventObjHolder(XEventObjHolder *this);
XObjectPool<XSignals::ReqItem> * __thiscall XObjectPool<XSignals::ReqItem>::XObjectPool<XSignals::ReqItem>(XObjectPool<XSignals::ReqItem> *this);
void __fastcall FUN_100075e0(undefined4 *param_1);
void FUN_10007680(void);
void __fastcall XLock::XLock_Constructor_or_Destructor(undefined4 *param_1);
int __fastcall FUN_100078d0(int param_1,int param_2);
undefined4 * __thiscall XObjectHolder<XEventA>::vfunction1(XObjectHolder<XEventA> *this,byte param_1);
undefined4 * __thiscall XReusableObjectPool<XEventA,XEventObjHolder>::vfunction1(XReusableObjectPool<XEventA,XEventObjHolder> *this,byte param_1);
void XObjectHolder<XEventA>::XObjectHolder<XEventA>_Constructor_or_Destructor(void);
undefined4 * __thiscall XObjectPool<XSignals::ReqItem>::vfunction1(XObjectPool<XSignals::ReqItem> *this,byte param_1);
void FUN_100079b0(void);
void FUN_100079d0(void);
void __thiscall XObjectHolder<XEventA>::~XObjectHolder<XEventA>(XObjectHolder<XEventA> *this);
void FUN_10007a50(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_10007aa0(int param_1);
void XLock::XLock_Constructor_or_Destructor(void);
XEventObjHolder * __thiscall XEventObjHolder::XEventObjHolder(XEventObjHolder *this);
undefined4 FUN_10007cc0(void);
void __cdecl FUN_10007d40(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
void __fastcall FUN_10007d90(int param_1,undefined4 *param_2);
void __thiscall XObjectHolder<XEventA>::~XObjectHolder<XEventA>(XObjectHolder<XEventA> *this,int param_1,int *param_2);
void __fastcall FUN_10007e30(undefined4 *param_1,undefined4 *param_2);
void __thiscall XTimerQueue::XTimerQueue(XTimerQueue *this);
undefined4 * __thiscall XTimerQueue::vfunction1(XTimerQueue *this,byte param_1);
XTimerQueueTimer * __thiscall XTimerQueueTimer::XTimerQueueTimer(XTimerQueueTimer *this);
void __thiscall XTimerQueueTimer::~XTimerQueueTimer(XTimerQueueTimer *this);
undefined * Catch_All@10007ff9(void);
void __thiscall IXTimer::~IXTimer(IXTimer *this);
void __thiscall XTimerQueueTimer::vfunction2(XTimerQueueTimer *this);
void __thiscall XLock::XLock(XLock *this);
void __thiscall XLock::XLock(XLock *this,uint param_1);
void __fastcall FUN_10008350(int param_1);
void __thiscall FUN_100083b0(void *this,undefined4 param_1);
void __fastcall FUN_10008420(int param_1);
void __thiscall FUN_10008480(void *this,undefined4 *param_1,undefined4 param_2);
undefined4 * __thiscall XTimerQueueTimer::vfunction1(XTimerQueueTimer *this,byte param_1);
void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void __fastcall __security_check_cookie(int param_1);
void __cdecl _free(void *_Memory);
void __cdecl FUN_100086ab(size_t param_1);
errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
int __cdecl FUN_10008790(int param_1);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_100088ae(void);
int __cdecl _atexit(_func_4879 *param_1);
errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
void __thiscall std::exception::exception(exception *this);
exception * __thiscall std::exception::exception(exception *this,char **param_1);
void __thiscall std::exception::exception(exception *this,char **param_1,int param_2);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
void __thiscall std::exception::~exception(exception *this);
char * __thiscall std::exception::vfunction2(exception *this);
exception * __thiscall std::exception::vfunction1(exception *this,byte param_1);
void __thiscall type_info::~type_info(type_info *this);
void * __thiscall type_info::type_info::`scalar_deleting_destructor'(type_info *this,uint param_1);
bool __thiscall type_info::operator==(type_info *this,type_info *param_1);
void __thiscall __purecall(void *this);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_10008b47(void);
void __cdecl __endthreadex(uint _Retval);
void __callthreadstartex(void);
uintptr_t __cdecl __beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,uint _InitFlag,uint *_ThrdAddr);
void __cdecl FUN_10008d07(undefined4 param_1);
void __cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void __cdecl FUN_10008e0d(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_10008e31(void);
void __cdecl _free(void *_Memory);
void __cdecl thunk_FUN_100086ab(size_t param_1);
void __cdecl _free(void *_Memory);
void FUN_10008ea1(void);
int * __cdecl _V6_HeapAlloc(uint *param_1);
void FUN_10008f1f(void);
void * __cdecl _malloc(size_t _Size);
int __cdecl FUN_10008feb(int param_1,int param_2);
__time64_t __cdecl __time64(__time64_t *_Time);
undefined4 __CRT_INIT@12(undefined4 param_1,int param_2,int param_3);
int __fastcall ___DllMainCRTStartup(int param_1,int param_2,HMODULE param_3);
void entry(HMODULE param_1,int param_2,int param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl FUN_10009435(undefined4 param_1);
_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1);
int __cdecl __callnewh(size_t _Size);
void __CxxThrowException@8(undefined4 param_1,byte *param_2);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
int __cdecl FUN_100098c5(int param_1);
DWORD * FUN_10009900(void);
DWORD * FUN_10009913(void);
void __cdecl FUN_10009926(DWORD param_1);
undefined4 FUN_10009944(void);
int __cdecl FUN_100099b0(int param_1);
void __encoded_null(void);
int __cdecl FUN_10009a27(int param_1);
void FUN_10009a9e(undefined4 param_1);
undefined4 FUN_10009ab3(void);
LPVOID FUN_10009ab9(void);
void FUN_10009aeb(undefined4 param_1,undefined4 param_2);
void __cdecl __mtterm(void);
void __cdecl FUN_10009b41(int param_1,int param_2);
void FUN_10009bf7(void);
DWORD * FUN_10009c00(void);
_ptiddata __cdecl __getptd(void);
void __freefls@4(void *param_1);
void FUN_10009d9b(void);
void FUN_10009da7(void);
void __cdecl __freeptd(_ptiddata _Ptd);
int __cdecl __mtinit(void);
void * __cdecl __malloc_crt(size_t _Size);
void * __cdecl __calloc_crt(size_t _Count,size_t _Size);
void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize);
size_t __cdecl __msize(void *_Memory);
void FUN_1000a10a(void);
void __cdecl __amsg_exit(int param_1);
void __cdecl FUN_1000a137(undefined4 param_1);
void __cdecl ___crtExitProcess(int param_1);
void FUN_1000a172(void);
void FUN_1000a17b(void);
void __cdecl FUN_1000a184(undefined4 *param_1);
void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl __get_osplatform(int *param_1);
undefined4 __cdecl __get_winmajor(undefined4 *param_1);
int __cdecl __cinit(int param_1);
void __cdecl FUN_1000a2c1(int param_1,int param_2,int param_3);
void FUN_1000a38e(void);
void __cdecl __exit(int _Code);
void __cdecl __cexit(void);
void __cdecl __init_pointers(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
size_t __cdecl _strlen(char *_Str);
void __cdecl type_info::_Type_info_dtor(type_info *param_1);
void FUN_1000aad2(void);
int __cdecl _strcmp(char *_Str1,char *_Str2);
void __cdecl _abort(void);
uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask);
void __cdecl FUN_1000ac79(int param_1);
void __cdecl __FF_MSGBANNER(void);
void __cdecl FUN_1000ae52(undefined4 param_1);
void __cdecl terminate(void);
void __cdecl unexpected(void);
void __cdecl _inconsistency(void);
void __initp_eh_hooks(void);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void FUN_1000b02b(void);
undefined4 __cdecl FUN_1000b02c(int param_1,DWORD param_2);
void FUN_1000b1a5(void);
undefined4 ___heap_select(void);
int __cdecl __heap_init(void);
void __cdecl __heap_term(void);
int __cdecl __mtinitlocks(void);
void __cdecl __mtdeletelocks(void);
void __cdecl FUN_1000b374(int param_1);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_1000b443(void);
void __cdecl __lock(int _File);
undefined4 __cdecl ___sbh_heap_init(undefined4 param_1);
void __thiscall thunk_FUN_1000b4e9(void *this,int param_1);
void __thiscall FUN_1000b4e9(void *this,int param_1);
void __cdecl ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int __cdecl ___sbh_alloc_new_group(int param_1);
undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * __cdecl ___sbh_alloc_block(uint *param_1);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
int __cdecl __ioinit(void);
void __cdecl __ioterm(void);
int __cdecl __setenvp(void);
void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3);
int __cdecl __setargv(void);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void __RTC_Initialize(void);
void __cdecl ___security_init_cookie(void);
void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2);
undefined1 (*) [16] __cdecl __VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3);
void __cdecl FUN_1000c8ab(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
void __cdecl ___freetlocinfo(void *param_1);
void __cdecl ___addlocaleref(LONG *param_1);
LONG * __cdecl ___removelocaleref(LONG *param_1);
LONG * __updatetlocinfoEx_nolock(void);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_1000cd0f(void);
undefined4 FUN_1000cd1b(void);
void __cdecl setSBCS(threadmbcinfostruct *param_1);
void __cdecl setSBUpLow(threadmbcinfostruct *param_1);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_1000cfc4(void);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1);
int __cdecl getSystemCP(int param_1);
void __cdecl FUN_1000d0c9(undefined4 param_1,int param_2);
int __cdecl __setmbcp(int _CodePage);
void FUN_1000d403(void);
undefined4 ___initmbctable(void);
int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3);
void FUN_1000d556(void);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void FUN_1000d6bc(void);
void __initp_misc_cfltcvt_tab(void);
void __cdecl __initp_misc_winsig(undefined4 param_1);
uint __cdecl siglookup(uint param_1);
_PHNDLR __cdecl ___get_sigabrt(void);
int __cdecl _raise(int _SigNum);
void FUN_1000d980(void);
void __cdecl FUN_1000d9bc(undefined4 param_1);
void __cdecl FUN_1000d9c6(undefined4 param_1);
undefined4 ___crtInitCritSecNoSpinCount@8(LPCRITICAL_SECTION param_1);
int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2);
void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3);
void FUN_1000db7e(int param_1);
void __fastcall _EH4_CallFilterFunc(undefined *param_1);
void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE);
void __fastcall _EH4_GlobalUnwind(PVOID param_1);
void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4);
undefined4 __cdecl FUN_1000dbfb(undefined4 param_1,undefined4 param_2,uint param_3);
errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
int __cdecl __set_error_mode(int _Mode);
void __cdecl __freea(void *_Memory);
int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4);
int __cdecl __ismbblead(uint _C);
undefined4 FUN_1000dfa1(void);
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
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,uint param_2);
undefined4 __fastcall __NLG_Notify1(undefined4 param_1);
void __NLG_Notify(ulong param_1);
void FUN_1000ea64(void);
long __cdecl _atol(char *_Str);
int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
int __cdecl __isleadbyte_l(int _C,_locale_t _Locale);
void __cdecl ___ansicp(LCID param_1);
void __cdecl ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6);
ulong __cdecl strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
void __alloca_probe(void);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
int FUN_1000f160(void);
uint * FUN_1000f165(uint *param_1,char param_2);
void FUN_1000f22e(void);
exception * __thiscall std::out_of_range::vfunction1(out_of_range *this,byte param_1);
void __thiscall std::length_error::length_error(length_error *this);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
void FUN_1000f2d9(exception *param_1);
_func_void * __cdecl std::set_new_handler(_func_void *param_1);
_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this);
void FUN_1000f364(void);
_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1);
void __fastcall FUN_1000f3ae(int *param_1);
void __cdecl FUN_1000f3c0(LPCRITICAL_SECTION param_1);
void __cdecl FUN_1000f3cb(LPCRITICAL_SECTION param_1);
void __cdecl FUN_1000f3d6(LPCRITICAL_SECTION param_1);
void __cdecl FUN_1000f3e1(LPCRITICAL_SECTION param_1);
uint ATL::_AtlGetThreadACPFake(void);
uint ATL::_AtlGetThreadACPThunk(void);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
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
void FUN_1000f8f0(void);
exception * __thiscall std::bad_exception::vfunction1(bad_exception *this,byte param_1);
undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_1000fa83(void);
void __cdecl ___DestructExceptionObject(int *param_1);
int __cdecl ___AdjustPointer(int param_1,int *param_2);
uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2);
void __cdecl CallUnexpected(_s_ESTypeList *param_1);
void Catch_All@1000fc06(void);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_1000fd44(void);
char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FindHandlerForForeignException(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
void FUN_1001047e(exception *param_1);
undefined4 __cdecl ___InternalCxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
int __cdecl _ValidateRead(void *param_1,uint param_2);
void XDestroyTimer(IXTimer *param_1);
void __thiscall IXTimer::~IXTimer(IXTimer *this);
int XChangeTimerQueueTimer(void *param_1,ulong param_2,ulong param_3);
int XDestroyTimerQueueTimer(void *param_1,void *param_2);
void * XCreateTimerQueueTimer(_func_void_void_ptr_uchar *param_1,void *param_2,ulong param_3,int param_4,ulong param_5);
IXTimer * XCreateTimer(void);
void FUN_100107d0(void);
void __fastcall FUN_10010800(undefined4 *param_1);
void __thiscall FUN_10010860(void *this,uint param_1,undefined4 param_2);
void __thiscall FUN_100109a0(void *this,uint param_1,DWORD param_2,undefined4 *param_3);
void __thiscall XSignals::ReqItem::ReqItem(ReqItem *this);
ulong XWaitSignal(void *param_1,ulong param_2,void **param_3,ulong param_4);
int XSetSignal(void *param_1,ulong param_2,void *param_3);
void __fastcall FUN_10010b90(int param_1);
void __thiscall FUN_10010d90(void *this,uint param_1);
XSignals * __thiscall XSignals::XSignals(XSignals *this);
int XAddSignal(void *param_1,ulong param_2);
int XDestroySignals(void *param_1);
void * XCreateSignals(void);
void __thiscall XLock::XLock(XLock *this,uint param_1);
int XRemoveSignal(void *param_1,ulong param_2);
void __thiscall XSmallObject::~XSmallObject(XSmallObject *this);
void __thiscall XLock::XLock(XLock *this,uint param_1);
XLock * __thiscall XLock::XLock(XLock *this);
void FUN_100113b0(void);
void __fastcall XFixedSizeMemoryBlockPool::XFixedSizeMemoryBlockPool_Constructor_or_Destructor(undefined4 *param_1);
void __fastcall XLock::XLock_Constructor_or_Destructor(int param_1);
void __fastcall XLock::XLock_Constructor_or_Destructor(int param_1);
void __fastcall FUN_100116a0(undefined4 *param_1);
XFixedSizeMemoryBlockPool * __thiscall XFixedSizeMemoryBlockPool::XFixedSizeMemoryBlockPool(XFixedSizeMemoryBlockPool *this,undefined4 *param_1);
void XLock::XLock_Constructor_or_Destructor(void);
void FUN_100118c0(void);
XMemoryPool * __thiscall XMemoryPool::XMemoryPool(XMemoryPool *this);
void * __thiscall XMemory::operator_void*(XMemory *this);
void * __thiscall XMemory::operator_void_const*(XMemory *this);
int __thiscall XMemory::operator!=(XMemory *this,XMemory *param_1);
int __thiscall XMemory::operator==(XMemory *this,XMemory *param_1);
int __thiscall XMemory::IsEmpty(XMemory *this);
ulong __thiscall XMemory::GetSize(XMemory *this);
void * __thiscall XMemory::GetData(XMemory *this);
void * __thiscall XMemory::GetData(XMemory *this);
void __thiscall XMemory::XMemory(XMemory *this,MEMORY_BLOCK *param_1);
void __thiscall XMemory::XMemory(XMemory *this);
ulong XMemorySize(XMemory *param_1);
void __thiscall XMemory::Free(XMemory *this);
int __thiscall XMemory::Alloc(XMemory *this,ulong param_1);
void __thiscall XMemory::~XMemory(XMemory *this);
void XMemoryFree(XMemory *param_1);
ulong XMemoryAlloc(ulong param_1);
void __thiscall XMemory::Clone(XMemory *this);
XMemory * __thiscall XMemory::operator=(XMemory *this,XMemory *param_1);
int __thiscall XMemory::Realloc(XMemory *this,ulong param_1);
XMemory * __thiscall XMemory::XMemory(XMemory *this,XMemory *param_1);
XMemory * XMemoryRealloc(XMemory *param_1,ulong param_2);
XMemory * XMemoryClone(XMemory *param_1);
int XDestroyThreadPool(void *param_1);
int XBindCompletionCallback(void *param_1,void *param_2,_func_void_ulong_ulong__OVERLAPPED_ptr *param_3);
int XQueueWorkItem(void *param_1,_func_ulong_void_ptr *param_2,void *param_3);
int XGetThreadPoolSize(void *param_1);
undefined1 FUN_100120c0(int param_1,int param_2,int param_3);
void FUN_10012120(int param_1);
int XQueueWorkItem(void *param_1,_func_void_ulong_ulong__OVERLAPPED_ptr *param_2,ulong param_3,ulong param_4,_OVERLAPPED *param_5);
void __fastcall XThreadPool::XThreadPool_Constructor_or_Destructor(undefined4 *param_1);
undefined4 FUN_10012340(int param_1);
XThreadPool * __thiscall XThreadPool::XThreadPool(XThreadPool *this);
undefined4 FUN_100124d0(int param_1);
undefined4 FUN_10012510(uint param_1);
void * XCreateThreadPool(ulong param_1);
int XSetThreadNameA(ulong param_1,char *param_2);
int __thiscall XThread::GetReturnValue(XThread *this);
void __thiscall XThread::SetReturnValue(XThread *this,int param_1);
void __thiscall XThread::SetThreadName(XThread *this,char *param_1);
bool __thiscall XThread::Terminated(XThread *this);
void * __thiscall XThread::operator_void*(XThread *this);
void * __thiscall XThread::GetHandle(XThread *this);
bool __thiscall XThread::Join(XThread *this);
uint __thiscall XThread::GetThreadID(XThread *this);
bool __thiscall XThread::GetSuspended(XThread *this);
int __thiscall XThread::GetPriority(XThread *this);
bool __thiscall XThread::SetPriority(XThread *this,int param_1);
bool __thiscall XThread::GetFinished(XThread *this);
void __thiscall XThread::SetFinished(XThread *this,bool param_1);
bool __thiscall XThread::GetFreeOnTerminate(XThread *this);
void __thiscall XThread::SetFreeOnTerminate(XThread *this,bool param_1);
uint __thiscall XThread::WaitFor(XThread *this,ulong param_1,bool param_2);
void __thiscall XThread::Terminate(XThread *this);
bool __thiscall XThread::Resume(XThread *this);
bool __thiscall XThread::Suspend(XThread *this);
void __thiscall XThread::Destroy(XThread *this);
void __thiscall XThread::~XThread(XThread *this);
XThread * __thiscall XThread::XThread(XThread *this);
int XSetThreadNameW(ulong param_1,wchar_t *param_2);
void FUN_10012bd0(void);
uint XThread::InternalThreadProc(XThread *param_1);
void Catch_All@10012cc6(void);
void __thiscall XThread::SetSuspended(XThread *this,bool param_1);
void __thiscall XThread::Create(XThread *this,bool param_1);
XRWCriticalSection * __thiscall XRWLock::Detach(XRWLock *this);
void __thiscall XRWLock::Attach(XRWLock *this,XRWCriticalSection *param_1,int param_2);
int __thiscall XRWLock::IsLocked(XRWLock *this);
XSyncObject * __thiscall XLock::Detach(XLock *this);
void __thiscall XLock::Attach(XLock *this,XSyncObject *param_1);
int __thiscall XLock::IsLocked(XLock *this);
int __thiscall XLock::Unlock(XLock *this);
int __thiscall XLock::Lock(XLock *this,ulong param_1);
void __thiscall XLock::~XLock(XLock *this);
XLock * __thiscall XLock::XLock(XLock *this,XSyncObject *param_1,ulong param_2);
XLock * __thiscall XLock::XLock(XLock *this,XSyncObject *param_1,ulong param_2);
void __thiscall XRWCriticalSection::XRWCriticalSection(XRWCriticalSection *this);
int __thiscall XEventW::XEventW::Unlock(XEventW *this);
int __thiscall XEventW::Pulse(XEventW *this);
int __thiscall XEventW::Reset(XEventW *this);
int __thiscall XEventW::Set(XEventW *this);
int __thiscall XEventW::Open(XEventW *this,wchar_t *param_1,ulong param_2,int param_3);
int __thiscall XEventW::Create(XEventW *this,int param_1,int param_2,wchar_t *param_3,_SECURITY_ATTRIBUTES *param_4);
int __thiscall XEventA::XEventA::Unlock(XEventA *this);
int __thiscall XEventA::Pulse(XEventA *this);
int __thiscall XEventA::Reset(XEventA *this);
int __thiscall XEventA::Set(XEventA *this);
int __thiscall XEventA::Open(XEventA *this,char *param_1,ulong param_2,int param_3);
int __thiscall XEventA::Create(XEventA *this,int param_1,int param_2,char *param_3,_SECURITY_ATTRIBUTES *param_4);
int __thiscall XSemaphoreW::Release(XSemaphoreW *this,long param_1,long *param_2);
int __thiscall XSemaphoreW::Open(XSemaphoreW *this,wchar_t *param_1,ulong param_2,int param_3);
int __thiscall XSemaphoreW::Create(XSemaphoreW *this,int param_1,int param_2,wchar_t *param_3,_SECURITY_ATTRIBUTES *param_4);
int __thiscall XSemaphoreA::Release(XSemaphoreA *this,long param_1,long *param_2);
int __thiscall XSemaphoreA::Open(XSemaphoreA *this,char *param_1,ulong param_2,int param_3);
int __thiscall XSemaphoreA::Create(XSemaphoreA *this,int param_1,int param_2,char *param_3,_SECURITY_ATTRIBUTES *param_4);
int __thiscall XMutexW::Release(XMutexW *this);
int __thiscall XMutexW::Open(XMutexW *this,wchar_t *param_1,ulong param_2,int param_3);
int __thiscall XMutexW::Create(XMutexW *this,int param_1,wchar_t *param_2,_SECURITY_ATTRIBUTES *param_3);
int __thiscall XMutexA::Release(XMutexA *this);
int __thiscall XMutexA::Open(XMutexA *this,char *param_1,ulong param_2,int param_3);
int __thiscall XMutexA::Create(XMutexA *this,int param_1,char *param_2,_SECURITY_ATTRIBUTES *param_3);
void * __thiscall XWaitableObject::XWaitableObject::Detach(XWaitableObject *this);
void __thiscall XWaitableObject::XWaitableObject::Attach(XWaitableObject *this,void *param_1);
ulong __thiscall XWaitableObject::Wait(XWaitableObject *this,ulong param_1);
void * __thiscall XWaitableObject::GetHandle(XWaitableObject *this);
void __thiscall XWaitableObject::XWaitableObject::Close(XWaitableObject *this);
int __thiscall XWaitableObject::IsOpen(XWaitableObject *this);
void __thiscall XWaitableObject::~XWaitableObject(XWaitableObject *this);
XWaitableObject * __thiscall XWaitableObject::XWaitableObject(XWaitableObject *this);
_RTL_CRITICAL_SECTION * __thiscall XCriticalSection::Detach(XCriticalSection *this,_RTL_CRITICAL_SECTION *__return_storage_ptr__);
void __thiscall XCriticalSection::Attach(XCriticalSection *this,_RTL_CRITICAL_SECTION *param_1);
_RTL_CRITICAL_SECTION * __thiscall XCriticalSection::operator_struct__RTL_CRITICAL_SECTION*(XCriticalSection *this);
int __thiscall XWaitableCollection::GetCount(XWaitableCollection *this);
void __thiscall XWaitableCollection::~XWaitableCollection(XWaitableCollection *this);
int __thiscall XRWCriticalSection::UnlockWriter(XRWCriticalSection *this);
int __thiscall XRWCriticalSection::LockWriter(XRWCriticalSection *this,ulong param_1);
int __thiscall XRWCriticalSection::UnlockReader(XRWCriticalSection *this);
int __thiscall XRWCriticalSection::LockReader(XRWCriticalSection *this,ulong param_1);
int __thiscall XEventW::XEventW::Lock(XEventW *this,ulong param_1);
int __thiscall XEventA::XEventA::Lock(XEventA *this,ulong param_1);
int __thiscall XSemaphoreW::XSemaphoreW::Unlock(XSemaphoreW *this);
int __thiscall XSemaphoreW::XSemaphoreW::Lock(XSemaphoreW *this,ulong param_1);
int __thiscall XSemaphoreA::XSemaphoreA::Unlock(XSemaphoreA *this);
int __thiscall XSemaphoreA::XSemaphoreA::Lock(XSemaphoreA *this,ulong param_1);
int __thiscall XMutexW::XMutexW::Unlock(XMutexW *this);
int __thiscall XMutexW::XMutexW::Lock(XMutexW *this,ulong param_1);
int __thiscall XMutexA::XMutexA::Unlock(XMutexA *this);
int __thiscall XMutexA::XMutexA::Lock(XMutexA *this,ulong param_1);
void * __thiscall XWaitableObject::operator_void*(XWaitableObject *this);
void __thiscall XCriticalSection::Leave(XCriticalSection *this);
void __thiscall XCriticalSection::Enter(XCriticalSection *this);
void __thiscall XCriticalSection::~XCriticalSection(XCriticalSection *this);
ulong __thiscall XWaitableCollection::MsgWaitEx(XWaitableCollection *this,ulong param_1,ulong param_2,ulong param_3);
ulong __thiscall XWaitableCollection::MsgWait(XWaitableCollection *this,ulong param_1,int param_2,ulong param_3);
ulong __thiscall XWaitableCollection::WaitEx(XWaitableCollection *this,int param_1,int param_2,ulong param_3);
ulong __thiscall XWaitableCollection::Wait(XWaitableCollection *this,int param_1,ulong param_2);
void __thiscall XWaitableCollection::Remove(XWaitableCollection *this,void *param_1);
int __thiscall XRWLock::Unlock(XRWLock *this);
int __thiscall XRWLock::Lock(XRWLock *this,ulong param_1);
void __thiscall XRWLock::~XRWLock(XRWLock *this);
XRWLock * __thiscall XRWLock::XRWLock(XRWLock *this,XRWCriticalSection *param_1,int param_2,ulong param_3);
XRWLock * __thiscall XRWLock::XRWLock(XRWLock *this,XRWCriticalSection *param_1,int param_2,ulong param_3);
int __thiscall XRWCriticalSection::Destroy(XRWCriticalSection *this);
void __thiscall XRWCriticalSection::~XRWCriticalSection(XRWCriticalSection *this);
int __thiscall XCriticalSection::XCriticalSection::Unlock(XCriticalSection *this);
int __thiscall XCriticalSection::XCriticalSection::Lock(XCriticalSection *this,ulong param_1);
int __thiscall XCriticalSection::TryEnter(XCriticalSection *this);
XCriticalSection * __thiscall XCriticalSection::XCriticalSection(XCriticalSection *this,ulong param_1);
int __thiscall XRWCriticalSection::Create(XRWCriticalSection *this);
int __thiscall XWaitableCollection::Add(XWaitableCollection *this,void *param_1);
XWaitableCollection * __thiscall XWaitableCollection::XWaitableCollection(XWaitableCollection *this);
int XIsWindows2000(void);
void XSystem::Timers::Timer::DestroyHandle(_Handle *param_1);
void XSystem::Timers::TimerQueue::DestroyHandle(_THandle *param_1);
bool XSystem::Timers::Timer::StopTimer(_Handle *param_1);
bool XSystem::Timers::Timer::ResumeTimer(_Handle *param_1);
_THandle * XSystem::Timers::TimerQueue::CreateHandle(_THandle *param_1);
undefined1 * Catch_All@100142b8(void);
_Handle * XSystem::Timers::Timer::CreateHandle(_THandle *param_1,uint param_2,_func_void_void_ptr *param_3,void *param_4);
undefined1 * Catch_All@10014368(void);
uint XSystem::MPHeap::GetSize(_THandle *param_1,void *param_2);
void XSystem::MPHeap::DestroyHandle(_THandle *param_1);
void XSystem::MPHeap::Free(_THandle *param_1,void *param_2);
void * XSystem::MPHeap::Alloc(_THandle *param_1,uint param_2);
_THandle * XSystem::MPHeap::CreateHandle(uint param_1);
void * XSystem::MPHeap::Realloc(_THandle *param_1,void *param_2,uint param_3);
void __thiscall XSystem::ThreadPoolImpl::IIOCompletionPort::~IIOCompletionPort(IIOCompletionPort *this);
undefined4 * FUN_100145b0(void);
bool XSystem::Threading::SetThreadName(uint param_1,char *param_2);
int __thiscall XSystem::Threading::Thread::GetReturnValue(Thread *this);
void __thiscall XSystem::Threading::Thread::SetReturnValue(Thread *this,int param_1);
void __thiscall XSystem::Threading::Thread::SetThreadName(Thread *this,char *param_1);
bool __thiscall XSystem::Threading::Thread::Terminated(Thread *this);
uint __thiscall XSystem::Threading::Thread::GetThreadID(Thread *this);
void * __thiscall XSystem::Threading::Thread::GetHandle(Thread *this);
bool __thiscall XSystem::Threading::Thread::GetSuspended(Thread *this);
int __thiscall XSystem::Threading::Thread::GetPriority(Thread *this);
bool __thiscall XSystem::Threading::Thread::SetPriority(Thread *this,int param_1);
bool __thiscall XSystem::Threading::Thread::GetFinished(Thread *this);
void __thiscall XSystem::Threading::Thread::SetFinished(Thread *this,bool param_1);
bool __thiscall XSystem::Threading::Thread::GetFreeOnTerminate(Thread *this);
void __thiscall XSystem::Threading::Thread::SetFreeOnTerminate(Thread *this,bool param_1);
bool __thiscall XSystem::Threading::Thread::WaitFor(Thread *this,uint param_1);
void __thiscall XSystem::Threading::Thread::Terminate(Thread *this);
bool __thiscall XSystem::Threading::Thread::Resume(Thread *this);
bool __thiscall XSystem::Threading::Thread::Suspend(Thread *this);
void __thiscall XSystem::Threading::Thread::Stop(Thread *this);
void __thiscall XSystem::Threading::Thread::~Thread(Thread *this);
void FUN_100149b0(void);
uint XSystem::Threading::Thread::InternalThreadProc(Thread *param_1);
void Catch_All@10014a9e(void);
void __thiscall XSystem::Threading::Thread::SetSuspended(Thread *this,bool param_1);
bool __thiscall XSystem::Threading::Thread::Start(Thread *this);
Thread * __thiscall XSystem::Threading::Thread::Thread(Thread *this);
bool __thiscall XSystem::Threading::ManualResetEvent::WaitEx(ManualResetEvent *this,bool param_1,uint param_2);
bool __thiscall XSystem::Threading::ManualResetEvent::Wait(ManualResetEvent *this,uint param_1);
bool __thiscall XSystem::Threading::ManualResetEvent::Pulse(ManualResetEvent *this);
bool __thiscall XSystem::Threading::ManualResetEvent::Reset(ManualResetEvent *this);
bool __thiscall XSystem::Threading::ManualResetEvent::Set(ManualResetEvent *this);
void __thiscall XSystem::Threading::ManualResetEvent::~ManualResetEvent(ManualResetEvent *this);
bool __thiscall XSystem::Threading::AutoResetEvent::WaitEx(AutoResetEvent *this,bool param_1,uint param_2);
bool __thiscall XSystem::Threading::AutoResetEvent::Wait(AutoResetEvent *this,uint param_1);
bool __thiscall XSystem::Threading::AutoResetEvent::Pulse(AutoResetEvent *this);
bool __thiscall XSystem::Threading::AutoResetEvent::Reset(AutoResetEvent *this);
bool __thiscall XSystem::Threading::AutoResetEvent::Set(AutoResetEvent *this);
void __thiscall XSystem::Threading::AutoResetEvent::~AutoResetEvent(AutoResetEvent *this);
bool __thiscall XSystem::Threading::Semaphore::WaitEx(Semaphore *this,bool param_1,uint param_2);
bool __thiscall XSystem::Threading::Semaphore::Wait(Semaphore *this,uint param_1);
bool __thiscall XSystem::Threading::Semaphore::Release(Semaphore *this,int param_1,int *param_2);
void __thiscall XSystem::Threading::Semaphore::~Semaphore(Semaphore *this);
bool __thiscall XSystem::Threading::Mutex::WaitEx(Mutex *this,bool param_1,uint param_2);
bool __thiscall XSystem::Threading::Mutex::Wait(Mutex *this,uint param_1);
bool __thiscall XSystem::Threading::Mutex::Release(Mutex *this);
void __thiscall XSystem::Threading::Mutex::~Mutex(Mutex *this);
void __thiscall XSystem::Threading::CriticalSection::Leave(CriticalSection *this);
void __thiscall XSystem::Threading::CriticalSection::Enter(CriticalSection *this);
void __thiscall XSystem::Threading::CriticalSection::~CriticalSection(CriticalSection *this);
void XSystem::Threading::Sleep(ulong param_1);
ManualResetEvent * __thiscall XSystem::Threading::ManualResetEvent::ManualResetEvent(ManualResetEvent *this,bool param_1);
AutoResetEvent * __thiscall XSystem::Threading::AutoResetEvent::AutoResetEvent(AutoResetEvent *this,bool param_1);
bool __thiscall XSystem::Threading::Semaphore::Unlock(Semaphore *this);
bool __thiscall XSystem::Threading::Semaphore::Lock(Semaphore *this,uint param_1);
Semaphore * __thiscall XSystem::Threading::Semaphore::Semaphore(Semaphore *this,char *param_1,uint param_2,bool param_3);
Semaphore * __thiscall XSystem::Threading::Semaphore::Semaphore(Semaphore *this,int param_1,int param_2,char *param_3,_SECURITY_ATTRIBUTES *param_4);
bool __thiscall XSystem::Threading::Mutex::Unlock(Mutex *this);
bool __thiscall XSystem::Threading::Mutex::Lock(Mutex *this,uint param_1);
Mutex * __thiscall XSystem::Threading::Mutex::Mutex(Mutex *this,char *param_1,uint param_2,bool param_3);
Mutex * __thiscall XSystem::Threading::Mutex::Mutex(Mutex *this,bool param_1,char *param_2,_SECURITY_ATTRIBUTES *param_3);
void __thiscall XSystem::Threading::CriticalSection::Unlock(CriticalSection *this);
void __thiscall XSystem::Threading::CriticalSection::Lock(CriticalSection *this);
bool __thiscall XSystem::Threading::CriticalSection::TryEnter(CriticalSection *this);
CriticalSection * __thiscall XSystem::Threading::CriticalSection::CriticalSection(CriticalSection *this,uint param_1);
void __thiscall XSystem::Threading::CondVar::Broadcast(CondVar *this);
void __thiscall XSystem::Threading::CondVar::Signal(CondVar *this);
bool __thiscall XSystem::Threading::CondVar::Wait(CondVar *this,Mutex *param_1);
void __thiscall XSystem::Threading::CondVar::~CondVar(CondVar *this);
undefined * Catch_All@10015636(void);
void __thiscall XSystem::Threading::RWCriticalSection::InternalUnlock(RWCriticalSection *this);
void __thiscall XSystem::Threading::RWCriticalSection::WriteUnlock(RWCriticalSection *this);
void __thiscall XSystem::Threading::RWCriticalSection::WriteLock(RWCriticalSection *this);
void __thiscall XSystem::Threading::RWCriticalSection::ReadUnlock(RWCriticalSection *this);
void __thiscall XSystem::Threading::RWCriticalSection::ReadLock(RWCriticalSection *this);
void __thiscall XSystem::Threading::RWCriticalSection::~RWCriticalSection(RWCriticalSection *this);
bool __thiscall XSystem::Threading::Barrier::Wait(Barrier *this);
void __thiscall XSystem::Threading::Barrier::~Barrier(Barrier *this);
CondVar * __thiscall XSystem::Threading::CondVar::CondVar(CondVar *this);
RWCriticalSection * __thiscall XSystem::Threading::RWCriticalSection::RWCriticalSection(RWCriticalSection *this);
Barrier * __thiscall XSystem::Threading::Barrier::Barrier(Barrier *this,uint param_1);
uint XSystem::Threading::Interlocked::CompareExchange(uint *param_1,uint param_2,uint param_3);
int XSystem::Threading::Interlocked::CompareExchange(int *param_1,int param_2,int param_3);
uint XSystem::Threading::Interlocked::Exchange(uint *param_1,uint param_2);
int XSystem::Threading::Interlocked::Exchange(int *param_1,int param_2);
uint XSystem::Threading::Interlocked::Decrement(uint *param_1);
int XSystem::Threading::Interlocked::Decrement(int *param_1);
uint XSystem::Threading::Interlocked::Increment(uint *param_1);
int XSystem::Threading::Interlocked::Increment(int *param_1);
_XMemory * __thiscall XSystem::MemoryPool::XMemoryPtr::GetXMemory(XMemoryPtr *this);
void * __thiscall XSystem::MemoryPool::XMemoryPtr::GetRawPtr(XMemoryPtr *this);
_XMemory * __thiscall XSystem::MemoryPool::XMemoryPtr::Detach(XMemoryPtr *this);
void __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(XMemoryPtr *this,_XMemory *param_1);
void __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(XMemoryPtr *this);
_XMemory * XSystem::MemoryPool::Copy(_XMemory *param_1);
uint XSystem::MemoryPool::GetSize(_XMemory *param_1);
void XSystem::MemoryPool::Free(_XMemory *param_1);
_XMemory * XSystem::MemoryPool::Alloc(uint param_1);
XMemoryPtr * __thiscall XSystem::MemoryPool::XMemoryPtr::operator=(XMemoryPtr *this,XMemoryPtr *param_1);
uint __thiscall XSystem::MemoryPool::XMemoryPtr::GetSize(XMemoryPtr *this);
void __thiscall XSystem::MemoryPool::XMemoryPtr::Clear(XMemoryPtr *this);
bool __thiscall XSystem::MemoryPool::XMemoryPtr::Attach(XMemoryPtr *this,_XMemory *param_1);
void __thiscall XSystem::MemoryPool::XMemoryPtr::~XMemoryPtr(XMemoryPtr *this);
XMemoryPtr * __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(XMemoryPtr *this,XMemoryPtr *param_1);
XMemoryPtr * __thiscall XSystem::MemoryPool::XMemoryPtr::XMemoryPtr(XMemoryPtr *this,uint param_1);
_XMemory * XSystem::MemoryPool::Clone(_XMemory *param_1);
_XMemory * XSystem::MemoryPool::Realloc(_XMemory *param_1,uint param_2);
undefined4 * __thiscall XSystem::MemoryPool::XMemoryPtr::Clone(XMemoryPtr *this);
bool __thiscall XSystem::MemoryPool::XMemoryPtr::Realloc(XMemoryPtr *this,uint param_1);
undefined4 FUN_10015f10(HMODULE param_1,int param_2);
bool XSystem::ThreadPool::QueueWorkItem(_THandle *param_1,_func_uint_void_ptr *param_2,void *param_3);
bool XSystem::ThreadPool::BindCompletionCallback(_THandle *param_1,void *param_2,_func_void_uint_uint_void_ptr *param_3);
uint XSystem::ThreadPool::GetPoolSize(_THandle *param_1);
void XSystem::ThreadPool::DestroyHandle(_THandle *param_1);
bool XSystem::ThreadPool::QueueWorkItem(_THandle *param_1,_func_void_uint_uint_void_ptr *param_2,uint param_3,uint param_4,void *param_5);
_THandle * XSystem::ThreadPool::CreateHandle(uint param_1);
void Unwind@10016110(void);
void Unwind@10016150(void);
void Unwind@10016173(void);
void Unwind@100161a3(void);
void Unwind@100161d3(void);
void Unwind@100161f6(void);
void Unwind@10016226(void);
void Unwind@10016256(void);
void Unwind@10016261(void);
void Unwind@10016287(void);
void Unwind@1001628f(void);
void Unwind@100162b2(void);
void Unwind@100162ba(void);
void Unwind@100162dd(void);
void Unwind@100162e8(void);
void Unwind@1001630e(void);
void Unwind@10016334(void);
void Unwind@1001633f(void);
void Unwind@10016365(void);
void Unwind@1001638b(void);
void Unwind@100163b1(void);
void Unwind@100163e1(void);
void Unwind@10016407(void);
void Unwind@10016437(void);
void Unwind@10016467(void);
void Unwind@1001648d(void);
void Unwind@100164b3(void);
void Unwind@100164d9(void);
void Unwind@100164ff(void);
void Unwind@10016525(void);
void Unwind@1001654b(void);
void Unwind@10016571(void);
void Unwind@100165a1(void);
void Unwind@100165d1(void);
void Unwind@10016601(void);
void Unwind@10016631(void);
void Unwind@10016639(void);
void Unwind@10016644(void);
void Unwind@10016677(void);
void Unwind@10016682(void);
void Unwind@100166a8(void);
void Unwind@100166ce(void);
void Unwind@100166f4(void);
void Unwind@1001671a(void);
void Unwind@10016740(void);
void Unwind@10016770(void);
void Unwind@100167a0(void);
void Unwind@100167d0(void);
void Unwind@100167d8(void);
void Unwind@10016800(void);
void Unwind@10016808(void);
void Unwind@10016830(void);
void Unwind@10016860(void);
void Unwind@1001686b(void);
void Unwind@100168c0(void);
void Unwind@100168f0(void);
void Unwind@10016920(void);
void Unwind@10016950(void);
void Unwind@1001695b(void);
void Unwind@10016990(void);
void Unwind@100169c0(void);
void Unwind@100169cb(void);
void Unwind@10016a00(void);
void Unwind@10016a30(void);
void Unwind@10016a3b(void);
void Unwind@10016a70(void);
void Unwind@10016aa0(void);
void Unwind@10016ad0(void);
void Unwind@10016ad8(void);
void Unwind@10016b10(void);
void Unwind@10016b40(void);
void Unwind@10016b48(void);
void Unwind@10016b80(void);
void Unwind@10016bb0(void);
void Unwind@10016c00(void);
void Unwind@10016c30(void);
void Unwind@10016c38(void);
void Unwind@10016c60(void);
void Unwind@10016c68(void);
void Unwind@10016c90(void);
void Unwind@10016cc0(void);
void Unwind@10016cf0(void);
void Unwind@10016d20(void);
void Unwind@10016d50(void);
void Unwind@10016d80(void);
void Unwind@10016dd0(void);
void Unwind@10016e00(void);
void Unwind@10016e30(void);
void Unwind@10016e60(void);
void Unwind@10016e90(void);
void Unwind@10016e9b(void);
void Unwind@10016ed0(void);
void Unwind@10016ed8(void);
void Unwind@10016f10(void);
void Unwind@10016f18(void);
void Unwind@10016f60(void);
void Unwind@10016f90(void);
void Unwind@10016f98(void);
void Unwind@10016fa3(void);
void Unwind@10016fae(void);
void Unwind@10016fb9(void);
void Unwind@10016fe0(void);
void Unwind@10017010(void);
void Unwind@10017018(void);
void Unwind@10017023(void);
void FUN_10017050(void);
void FUN_10017070(void);
void FUN_10017090(void);
void FUN_100170b0(void);
void FUN_100170d0(void);
void FUN_100170f0(void);
void FUN_10017110(void);
void FUN_10017130(void);
void FUN_10017150(void);
void FUN_1001716b(void);
void XCriticalSection::~XCriticalSection(void);
void FUN_100172b0(void);
void FUN_100172c0(void);
void XCriticalSection::~XCriticalSection(void);
void __thiscall std::bad_alloc::~bad_alloc(void);

