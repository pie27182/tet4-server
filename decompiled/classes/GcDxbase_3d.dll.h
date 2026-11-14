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

typedef struct CGcDxGameLobbyView CGcDxGameLobbyView, *PCGcDxGameLobbyView;

struct CGcDxGameLobbyView { // PlaceHolder Class Structure
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

typedef struct CGcDxMainFrameWnd CGcDxMainFrameWnd, *PCGcDxMainFrameWnd;

struct CGcDxMainFrameWnd { // PlaceHolder Class Structure
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

typedef struct CGcDxbaseApp CGcDxbaseApp, *PCGcDxbaseApp;

struct CGcDxbaseApp { // PlaceHolder Class Structure
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

typedef struct CGcDxMainFrameView CGcDxMainFrameView, *PCGcDxMainFrameView;

struct CGcDxMainFrameView { // PlaceHolder Class Structure
};

typedef struct CGcDxGameWnd CGcDxGameWnd, *PCGcDxGameWnd;

struct CGcDxGameWnd { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct CGcDxChannelLobbyView CGcDxChannelLobbyView, *PCGcDxChannelLobbyView;

struct CGcDxChannelLobbyView { // PlaceHolder Class Structure
};

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef int BOOL;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

typedef uchar BYTE;

typedef long LONG;

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

struct HDC__ {
    int unused;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef ulong DWORD;

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

struct HWND__ {
    int unused;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

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

typedef long HRESULT;

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

typedef ULONG_PTR DWORD_PTR;

typedef long LONG_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[39];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef UINT_PTR WPARAM;

typedef LONG_PTR LRESULT;

typedef struct tagRECT *LPRECT;

typedef LONG_PTR LPARAM;

typedef BYTE *PBYTE;

typedef void *LPVOID;

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

typedef UINT MMRESULT;

typedef struct CChannelMainWnd CChannelMainWnd, *PCChannelMainWnd;

typedef struct CChannelMainWnd_vftable0 CChannelMainWnd_vftable0, *PCChannelMainWnd_vftable0;

typedef struct CChannelMainWnd_vftable1 CChannelMainWnd_vftable1, *PCChannelMainWnd_vftable1;

struct CChannelMainWnd { // class CChannelMainWnd : CWnd : CControlBase
    struct CChannelMainWnd_vftable0 *vftablePtr;
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
    struct CChannelMainWnd_vftable1 *vftablePtr;
};

struct CChannelMainWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CChannelMainWnd virtual function #1
    CChannelMainWnd * (*deleting_destructor)(void *, byte); // CChannelMainWnd virtual function #2
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #3
    void (*vfunction4)(void *); // CChannelMainWnd virtual function #4
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CChannelMainWnd virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CWnd virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    void (*PreSubclassWindow)(void *); // CWnd virtual function #23
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CWnd virtual function #24
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #25
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #26
    int (*DestroyWindow)(void *); // CWnd virtual function #27
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CWnd virtual function #28
    void (*CalcWindowRect)(void *, struct tagRECT *, uint); // CWnd virtual function #29
    CMenu * (*GetMenu)(void *); // CWnd virtual function #30
    int (*SetMenu)(void *, struct CMenu *); // CWnd virtual function #31
    int (*OnToolHitTest)(void *, struct CPoint, struct tagTOOLINFOA *); // CWnd virtual function #32
    CScrollBar * (*GetScrollBarCtrl)(void *, int); // CWnd virtual function #33
    void (*WinHelpA)(void *, ulong, uint); // CWnd virtual function #34
    void (*HtmlHelpA)(void *, ulong, uint); // CWnd virtual function #35
    void (*WinHelpInternal)(void *, ulong, uint); // CWnd virtual function #36
    int (*ContinueModal)(void *); // CWnd virtual function #37
    void (*EndModalLoop)(void *, int); // CWnd virtual function #38
    long (*EnsureStdObj)(void *); // CWnd virtual function #39
    long (*get_accParent)(void *, struct IDispatch **); // CWnd virtual function #40
    long (*get_accChildCount)(void *, long *); // CWnd virtual function #41
    long (*get_accChild)(void *, struct tagVARIANT, struct IDispatch **); // CWnd virtual function #42
    long (*get_accName)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #43
    long (*get_accValue)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #44
    long (*get_accDescription)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #45
    long (*get_accRole)(void *, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #46
    long (*get_accState)(void *, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #47
    long (*get_accHelp)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #48
    long (*get_accHelpTopic)(void *, wchar_t **, struct tagVARIANT, long *); // CWnd virtual function #49
    long (*get_accKeyboardShortcut)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #50
    long (*get_accFocus)(void *, struct tagVARIANT *); // CWnd virtual function #51
    long (*get_accSelection)(void *, struct tagVARIANT *); // CWnd virtual function #52
    long (*get_accDefaultAction)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #53
    long (*accSelect)(void *, long, struct tagVARIANT); // CWnd virtual function #54
    long (*accLocation)(void *, long *, long *, long *, long *, struct tagVARIANT); // CWnd virtual function #55
    long (*accNavigate)(void *, long, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #56
    long (*accHitTest)(void *, long, long, struct tagVARIANT *); // CWnd virtual function #57
    long (*accDoDefaultAction)(void *, struct tagVARIANT); // CWnd virtual function #58
    long (*put_accName)(void *, struct tagVARIANT, wchar_t *); // CWnd virtual function #59
    long (*put_accValue)(void *, struct tagVARIANT, wchar_t *); // CWnd virtual function #60
    long (*SetProxy)(void *, struct IAccessibleProxy *); // CWnd virtual function #61
    long (*CreateAccessibleProxy)(void *, uint, long, long *); // CWnd virtual function #62
    int (*OnCommand)(void *, uint, long); // CWnd virtual function #63
    int (*OnNotify)(void *, uint, long, long *); // CWnd virtual function #64
    long (** (*GetSuperWndProcAddr)(void *))(struct HWND__ *, uint, uint, long); // CWnd virtual function #65
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #66
    void (*vfunction67)(void *); // CChannelMainWnd virtual function #67
    void (*vfunction68)(void *); // CChannelMainWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*InitiateChannelMainWnd)(void *, struct tagCREATESTRUCTA *); // CChannelMainWnd virtual function #82
    void (*CreateRoomListCtrl)(void *, struct IParam *); // CChannelMainWnd virtual function #83
    void (*CreateMyInfoCtrl)(void *, struct IParam *); // CChannelMainWnd virtual function #84
    void (*CreateTabCtrl)(void *, struct IParam *); // CChannelMainWnd virtual function #85
    void (*CreateNoticeWnd)(void *, struct IParam *); // CChannelMainWnd virtual function #86
    void (*CreateChannelButton)(void *, struct IParam *); // CChannelMainWnd virtual function #87
    void (*CrateTabMemberList)(void *, struct IParam *); // CChannelMainWnd virtual function #88
    void (*AddTab)(void *, struct IParam *); // CChannelMainWnd virtual function #89
    void (*AttachScrollCtrl)(void *, struct IParam *); // CChannelMainWnd virtual function #90
    void (*AttachListControl)(void *, struct IParam *); // CChannelMainWnd virtual function #91
    void (*AttachHtmlCtrl)(void *, struct IParam *); // CChannelMainWnd virtual function #92
    void (*AttachBtn)(void *, struct IParam *); // CChannelMainWnd virtual function #93
    void (*CreateMemberListCtrl)(void *, struct IParam *); // CChannelMainWnd virtual function #94
    void (*CreateGuildListCtrl)(void *, struct IParam *); // CChannelMainWnd virtual function #95
    void (*CreateFriendListCtrl)(void *, struct IParam *); // CChannelMainWnd virtual function #96
    void (*SortRoomList)(void *, int); // CChannelMainWnd virtual function #97
};

struct CChannelMainWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CChannelMainWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CChannelMainWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMFunctor<CGcDxGameLobbyView> CMFunctor<CGcDxGameLobbyView>, *PCMFunctor<CGcDxGameLobbyView>;

typedef struct CMFunctor<CGcDxGameLobbyView>_vftable CMFunctor<CGcDxGameLobbyView>_vftable, *PCMFunctor<CGcDxGameLobbyView>_vftable;

struct CMFunctor<CGcDxGameLobbyView> { // class CMFunctor<CGcDxGameLobbyView> : IFunctor
    struct CMFunctor<CGcDxGameLobbyView>_vftable *vftablePtr;
};

struct CMFunctor<CGcDxGameLobbyView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CGcDxChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGcDxGameLobbyView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CGcDxChannelLobbyView> virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/CGcDxGameLobbyView/CGcDxGameLobbyView - /CGcDxGameLobbyView

typedef struct CGcDxGameLobbyView_vftable CGcDxGameLobbyView_vftable, *PCGcDxGameLobbyView_vftable;

struct CGcDxGameLobbyView_vftable {
    bool (*OnAttached)(void *); // CGcDxGameLobbyView virtual function #1
    bool (*OnDetached)(void *); // CGameLobbyView virtual function #2
    CGcDxGameLobbyView * (*deleting_destructor)(void *, byte); // CGcDxGameLobbyView virtual function #3
    int (*Msg_GetWindow)(void *, struct IParam *); // CBaseLobbyView virtual function #4
    int (*Msg_UpdateUIFromXML)(void *, struct IParam *); // CGcDxGameLobbyView virtual function #5
    int (*OnClickExitGameBtn)(void *, struct IParam *); // CGameLobbyView virtual function #6
};

typedef struct CGcDxbaseApp_vftable CGcDxbaseApp_vftable, *PCGcDxbaseApp_vftable;

struct CGcDxbaseApp_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWinApp virtual function #1
    CBaseApp * (*deleting_destructor)(void *, byte); // CGcDxbaseApp virtual function #2
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #3
    void (*vfunction4)(void *); // CChannelMainWnd virtual function #4
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CCmdTarget virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CBaseApp virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CCmdTarget virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    int (*InitInstance)(void *); // CGcDxbaseApp virtual function #23
    int (*Run)(void *); // CWinApp virtual function #24
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CGcDxbaseApp virtual function #25
    int (*PumpMessage)(void *); // CWinThread virtual function #26
    int (*OnIdle)(void *, long); // CGcDxbaseApp virtual function #27
    int (*IsIdleMessage)(void *, struct tagMSG *); // CWinThread virtual function #28
    int (*ExitInstance)(void *); // CGcDxbaseApp virtual function #29
    long (*ProcessWndProcException)(void *, struct CException *, struct tagMSG *); // CWinApp virtual function #30
    int (*ProcessMessageFilter)(void *, int, struct tagMSG *); // CWinThread virtual function #31
    CWnd * (*GetMainWnd)(void *); // CWinThread virtual function #32
    void (*Delete)(void *); // CWinThread virtual function #33
    void (*InitLibId)(void *); // CWinApp virtual function #34
    int (*Register)(void *); // CWinApp virtual function #35
    int (*Unregister)(void *); // CWinApp virtual function #36
    CDocument * (*OpenDocumentFile)(void *, char *); // CWinApp virtual function #37
    void (*AddToRecentFileList)(void *, char *); // CWinApp virtual function #38
    int (*InitApplication)(void *); // CWinApp virtual function #39
    int (*SaveAllModified)(void *); // CWinApp virtual function #40
    int (*DoMessageBox)(void *, char *, uint, uint); // CWinApp virtual function #41
    void (*DoWaitCursor)(void *, int); // CWinApp virtual function #42
    int (*OnDDECommand)(void *, char *); // CWinApp virtual function #43
    void (*WinHelpA)(void *, ulong, uint); // CWinApp virtual function #44
    void (*HtmlHelpA)(void *, ulong, uint); // CWinApp virtual function #45
    void (*WinHelpInternal)(void *, ulong, uint); // CWinApp virtual function #46
    HINSTANCE__ * (*LoadAppLangResourceDLL)(void *); // CWinApp virtual function #47
    int (*LoadSysPolicies)(void *); // CWinApp virtual function #48
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #49
    bool (*LoadDefaultObjects)(void *); // CGcDxbaseApp virtual function #50
    bool (*LoadViewObjects)(void *); // CGcDxbaseApp virtual function #51
    void (*RegWork_LoadFullScreenSetting)(void *); // CBaseApp virtual function #52
    void (*RegWork_SaveFullScreenSetting)(void *); // CBaseApp virtual function #53
    void (*RegWork_RegisterNotifyWnd)(void *); // CBaseApp virtual function #54
    void (*RegWork_EraseNotifyWnd)(void *); // CBaseApp virtual function #55
    void (*CheckTestMode)(void *); // CBaseApp virtual function #56
    CFrameWnd * (*MakeFrameInstance)(void *); // CBaseApp virtual function #57
    void * (*MakeGameInstance)(void *); // CBaseApp virtual function #58
    int (*HookConfigLoader)(void *); // CBaseApp virtual function #59
    void (*CheckBipLog)(void *); // CBaseApp virtual function #60
    int (*_CheckCmdString)(void *); // CBaseApp virtual function #61
    int (*_CheckMutex)(void *); // CBaseApp virtual function #62
    void (*_CheckPlatformConverter)(void *); // CBaseApp virtual function #63
    int (*InitDX)(void *, int, int, bool, bool); // CGcDxbaseApp virtual function #64
};


// WARNING! conflicting data type names: /ClassDataTypes/CGcDxbaseApp/CGcDxbaseApp - /CGcDxbaseApp

typedef struct CObject CObject, *PCObject;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct IComponent IComponent, *PIComponent;

struct IComponent { // class IComponent
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct IFunctor IFunctor, *PIFunctor;

struct IFunctor { // class IFunctor
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CWinThread CWinThread, *PCWinThread;

typedef struct CCmdTarget CCmdTarget, *PCCmdTarget;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CCmdTarget { // class CCmdTarget : CObject
    struct CObject CObject;
};

struct CWinThread { // class CWinThread : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

typedef struct CMainFrameWnd CMainFrameWnd, *PCMainFrameWnd;

typedef struct CFrameWnd CFrameWnd, *PCFrameWnd;

typedef struct CControlBase CControlBase, *PCControlBase;

typedef struct CWnd CWnd, *PCWnd;

struct CControlBase { // class CControlBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CCmdTarget { // class CCmdTarget : CObject
    struct CObject CObject;
};

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CFrameWnd { // class CFrameWnd : CWnd
    struct CWnd CWnd;
};

struct CMainFrameWnd { // class CMainFrameWnd : CFrameWnd : CControlBase
    struct CFrameWnd CFrameWnd;
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
    struct CControlBase CControlBase;
};

typedef struct CCompositeHolder<neon::frw::CComponent> CCompositeHolder<neon::frw::CComponent>, *PCCompositeHolder<neon::frw::CComponent>;

typedef struct CComponent CComponent, *PCComponent;

struct CComponent { // class CComponent
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CCompositeHolder<neon::frw::CComponent> { // class CCompositeHolder<neon::frw::CComponent> : CComponent
    struct CComponent CComponent;
};

typedef struct CHanChatView_vftable CHanChatView_vftable, *PCHanChatView_vftable;

struct CHanChatView_vftable {
    bool (*OnAttached)(void *); // CHanChatView virtual function #1
    bool (*OnDetached)(void *); // CHanChatView virtual function #2
    CHanChatView * (*deleting_destructor)(void *, byte); // CHanChatView virtual function #3
};

typedef struct CHanChatView CHanChatView, *PCHanChatView;

struct CHanChatView { // class CHanChatView : IComponent
    struct CHanChatView_vftable *vftablePtr;
};

typedef struct CMiniChannelListView CMiniChannelListView, *PCMiniChannelListView;

typedef struct CMiniChannelListView_vftable CMiniChannelListView_vftable, *PCMiniChannelListView_vftable;

struct CMiniChannelListView { // class CMiniChannelListView : IComponent
    struct CMiniChannelListView_vftable *vftablePtr;
};

struct CMiniChannelListView_vftable {
    bool (*OnAttached)(void *); // CMiniChannelListView virtual function #1
    bool (*OnDetached)(void *); // CMiniChannelListView virtual function #2
    int (*OnClickRefreshBtn)(void *, struct IParam *); // CMiniChannelListView virtual function #3
    int (*OnClickJoinBtn)(void *, struct IParam *); // CMiniChannelListView virtual function #4
    int (*OnClickExitBtn)(void *, struct IParam *); // CMiniChannelListView virtual function #5
    int (*OnClickAutoJoinBtn)(void *, struct IParam *); // CMiniChannelListView virtual function #6
    int (*OnClickGrpListBtn)(void *, struct IParam *); // CMiniChannelListView virtual function #7
    int (*OnClickChannelGrpLst)(void *, struct IParam *); // CMiniChannelListView virtual function #8
    int (*OnClickChannelLst)(void *, struct IParam *); // CMiniChannelListView virtual function #9
    int (*OnCheckEnterableState)(void *, struct IParam *); // CMiniChannelListView virtual function #10
    CMiniChannelListView * (*deleting_destructor)(void *, byte); // CMiniChannelListView virtual function #11
    void (*SetMiniChannelListWnd)(void *, struct CMiniChannelListWnd *); // CMiniChannelListView virtual function #12
};

typedef struct CBaseApp CBaseApp, *PCBaseApp;

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinThread { // class CWinThread : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CWinApp { // class CWinApp : CWinThread
    struct CWinThread CWinThread;
};

struct CBaseApp { // class CBaseApp : CWinApp
    struct CWinApp CWinApp;
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CVisual CVisual, *PCVisual;

typedef struct CVisual_vftable CVisual_vftable, *PCVisual_vftable;

struct CVisual { // class CVisual : CObject
    struct CVisual_vftable *vftablePtr;
};

struct CVisual_vftable {
    CVisual * (*deleting_destructor)(void *, byte); // CVisual virtual function #1
    void (*Logic)(void *); // CObject virtual function #2
    void (*Output)(void *); // CVisual virtual function #3
    void (*BeforeRelease)(void *); // CComponent virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CVisual virtual function #11
    void (*Copy)(void *, struct CObject *); // CVisual virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CObject virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CVisual virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CVisual virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CVisual virtual function #27
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/frw/CObject/CObject - /ClassDataTypes/CObject/CObject

typedef struct CGameWnd CGameWnd, *PCGameWnd;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CControlBase { // class CControlBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CGameWnd { // class CGameWnd : CWnd : CControlBase
    struct CWnd CWnd;
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
    struct CControlBase CControlBase;
};

typedef struct CMFunctor<CGcDxMainFrameView>_vftable CMFunctor<CGcDxMainFrameView>_vftable, *PCMFunctor<CGcDxMainFrameView>_vftable;

struct CMFunctor<CGcDxMainFrameView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CGcDxChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGcDxMainFrameView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CGcDxChannelLobbyView> virtual function #3
};

typedef struct CMFunctor<CGcDxMainFrameView> CMFunctor<CGcDxMainFrameView>, *PCMFunctor<CGcDxMainFrameView>;

struct CMFunctor<CGcDxMainFrameView> { // class CMFunctor<CGcDxMainFrameView> : IFunctor
    struct CMFunctor<CGcDxMainFrameView>_vftable *vftablePtr;
};

typedef struct CMainFrameView CMainFrameView, *PCMainFrameView;

typedef struct CMainFrameView_vftable CMainFrameView_vftable, *PCMainFrameView_vftable;

struct CMainFrameView { // class CMainFrameView : IComponent
    struct CMainFrameView_vftable *vftablePtr;
};

struct CMainFrameView_vftable {
    bool (*OnAttached)(void *); // CMainFrameView virtual function #1
    bool (*OnDetached)(void *); // CMainFrameView virtual function #2
    int (*OnAltF4KeyDown)(void *, struct IParam *); // CMainFrameView virtual function #3
    int (*OnClickExitButton)(void *, struct IParam *); // CMainFrameView virtual function #4
    int (*OnToggleScreenButton)(void *, struct IParam *); // CMainFrameView virtual function #5
    int (*OnClickMinimizeButton)(void *, struct IParam *); // CMainFrameView virtual function #6
    int (*OnClickAccuseButton)(void *, struct IParam *); // CMainFrameView virtual function #7
    int (*OnClickInviteButton)(void *, struct IParam *); // CMainFrameView virtual function #8
    int (*OnClickOptionButton)(void *, struct IParam *); // CMainFrameView virtual function #9
    CMainFrameView * (*deleting_destructor)(void *, byte); // CMainFrameView virtual function #10
};

typedef struct CGameLobbyView CGameLobbyView, *PCGameLobbyView;

typedef struct CBaseLobbyView CBaseLobbyView, *PCBaseLobbyView;

struct IComponent { // class IComponent
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CBaseLobbyView { // class CBaseLobbyView : IComponent
    struct IComponent IComponent;
};

struct CGameLobbyView { // class CGameLobbyView : CBaseLobbyView
    struct CBaseLobbyView CBaseLobbyView;
};

typedef struct CGcDxChannelLobbyView_vftable CGcDxChannelLobbyView_vftable, *PCGcDxChannelLobbyView_vftable;

struct CGcDxChannelLobbyView_vftable {
    bool (*OnAttached)(void *); // CGcDxChannelLobbyView virtual function #1
    bool (*OnDetached)(void *); // CChannelLobbyView virtual function #2
    CGcDxChannelLobbyView * (*deleting_destructor)(void *, byte); // CGcDxChannelLobbyView virtual function #3
    int (*Msg_GetWindow)(void *, struct IParam *); // CBaseLobbyView virtual function #4
    int (*Msg_UpdateUIFromXML)(void *, struct IParam *); // CChannelLobbyView virtual function #5
    int (*OnDblClickRoomList)(void *, struct IParam *); // CChannelLobbyView virtual function #6
    int (*OnClickChangeChannelBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #7
    int (*OnClickCreateRoomBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #8
    int (*OnClickJoinRoomBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #9
    int (*OnClickViewRoomBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #10
    int (*OnClickRoomAvatar)(void *, struct IParam *); // CChannelLobbyView virtual function #11
    int (*OnDblClickMemberList)(void *, struct IParam *); // CChannelLobbyView virtual function #12
    int (*OnClickDirectStartBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #13
    int (*OnClickRecommendedGameBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #14
    int (*OnClickExitBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #15
    int (*OnClickAutoCreateRoomBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #16
    int (*OnGetItemState)(void *, struct IParam *); // CChannelLobbyView virtual function #17
    int (*OnCloseItemWebDlg)(void *, struct IParam *); // CChannelLobbyView virtual function #18
    int (*OnClickShowItemWebBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #19
    int (*OnClickHappyBeanBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #20
    int (*OnClickGuildCtrl)(void *, struct IParam *); // CChannelLobbyView virtual function #21
    int (*OnClickThermometer)(void *, struct IParam *); // CChannelLobbyView virtual function #22
    int (*OnClickSPCRoom)(void *, struct IParam *); // CChannelLobbyView virtual function #23
    int (*OnClickMemberListTabFilterBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #24
    int (*OnClickShowEmptyRoomBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #25
    int (*OnClickShowRoomNumOrderBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #26
    int (*OnClickSearchRoomBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #27
};


// WARNING! conflicting data type names: /ClassDataTypes/CGcDxChannelLobbyView/CGcDxChannelLobbyView - /CGcDxChannelLobbyView

typedef struct CMFunctor<CGcDxChannelLobbyView>_vftable CMFunctor<CGcDxChannelLobbyView>_vftable, *PCMFunctor<CGcDxChannelLobbyView>_vftable;

struct CMFunctor<CGcDxChannelLobbyView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CGcDxChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGcDxChannelLobbyView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CGcDxChannelLobbyView> virtual function #3
};

typedef struct CMFunctor<CGcDxChannelLobbyView> CMFunctor<CGcDxChannelLobbyView>, *PCMFunctor<CGcDxChannelLobbyView>;

struct CMFunctor<CGcDxChannelLobbyView> { // class CMFunctor<CGcDxChannelLobbyView> : IFunctor
    struct CMFunctor<CGcDxChannelLobbyView>_vftable *vftablePtr;
};

typedef struct CGcDxMainFrameWnd_data CGcDxMainFrameWnd_data, *PCGcDxMainFrameWnd_data;

struct CGcDxMainFrameWnd_data {
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
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
};

typedef struct CGcDxMainFrameWnd_vftable1 CGcDxMainFrameWnd_vftable1, *PCGcDxMainFrameWnd_vftable1;

struct CGcDxMainFrameWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CGcDxMainFrameWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CMainFrameWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CMainFrameWnd virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CGcDxMainFrameWnd_vftable0 CGcDxMainFrameWnd_vftable0, *PCGcDxMainFrameWnd_vftable0;

struct CGcDxMainFrameWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGcDxMainFrameWnd virtual function #1
    CMainFrameWnd * (*deleting_destructor)(void *, byte); // CGcDxMainFrameWnd virtual function #2
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #3
    void (*vfunction4)(void *); // CChannelMainWnd virtual function #4
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CMainFrameWnd virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CGcDxMainFrameWnd virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CWnd virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    void (*PreSubclassWindow)(void *); // CWnd virtual function #23
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CWnd virtual function #24
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #25
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #26
    int (*DestroyWindow)(void *); // CWnd virtual function #27
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CMainFrameWnd virtual function #28
    void (*CalcWindowRect)(void *, struct tagRECT *, uint); // CWnd virtual function #29
    CMenu * (*GetMenu)(void *); // CFrameWnd virtual function #30
    int (*SetMenu)(void *, struct CMenu *); // CFrameWnd virtual function #31
    int (*OnToolHitTest)(void *, struct CPoint, struct tagTOOLINFOA *); // CWnd virtual function #32
    CScrollBar * (*GetScrollBarCtrl)(void *, int); // CWnd virtual function #33
    void (*WinHelpA)(void *, ulong, uint); // CWnd virtual function #34
    void (*HtmlHelpA)(void *, ulong, uint); // CWnd virtual function #35
    void (*WinHelpInternal)(void *, ulong, uint); // CWnd virtual function #36
    int (*ContinueModal)(void *); // CWnd virtual function #37
    void (*EndModalLoop)(void *, int); // CWnd virtual function #38
    long (*EnsureStdObj)(void *); // CWnd virtual function #39
    long (*get_accParent)(void *, struct IDispatch **); // CWnd virtual function #40
    long (*get_accChildCount)(void *, long *); // CWnd virtual function #41
    long (*get_accChild)(void *, struct tagVARIANT, struct IDispatch **); // CWnd virtual function #42
    long (*get_accName)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #43
    long (*get_accValue)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #44
    long (*get_accDescription)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #45
    long (*get_accRole)(void *, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #46
    long (*get_accState)(void *, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #47
    long (*get_accHelp)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #48
    long (*get_accHelpTopic)(void *, wchar_t **, struct tagVARIANT, long *); // CWnd virtual function #49
    long (*get_accKeyboardShortcut)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #50
    long (*get_accFocus)(void *, struct tagVARIANT *); // CWnd virtual function #51
    long (*get_accSelection)(void *, struct tagVARIANT *); // CWnd virtual function #52
    long (*get_accDefaultAction)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #53
    long (*accSelect)(void *, long, struct tagVARIANT); // CWnd virtual function #54
    long (*accLocation)(void *, long *, long *, long *, long *, struct tagVARIANT); // CWnd virtual function #55
    long (*accNavigate)(void *, long, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #56
    long (*accHitTest)(void *, long, long, struct tagVARIANT *); // CWnd virtual function #57
    long (*accDoDefaultAction)(void *, struct tagVARIANT); // CWnd virtual function #58
    long (*put_accName)(void *, struct tagVARIANT, wchar_t *); // CWnd virtual function #59
    long (*put_accValue)(void *, struct tagVARIANT, wchar_t *); // CWnd virtual function #60
    long (*SetProxy)(void *, struct IAccessibleProxy *); // CWnd virtual function #61
    long (*CreateAccessibleProxy)(void *, uint, long, long *); // CWnd virtual function #62
    int (*OnCommand)(void *, uint, long); // CFrameWnd virtual function #63
    int (*OnNotify)(void *, uint, long, long *); // CWnd virtual function #64
    long (** (*GetSuperWndProcAddr)(void *))(struct HWND__ *, uint, uint, long); // CWnd virtual function #65
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #66
    void (*BeginModalState)(void *); // CFrameWnd virtual function #67
    void (*EndModalState)(void *); // CFrameWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CMainFrameWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CGcDxMainFrameWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CFrameWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CFrameWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CFrameWnd virtual function #82
    int (*LoadFrame)(void *, uint, ulong, struct CWnd *, struct CCreateContext *); // CFrameWnd virtual function #83
    CDocument * (*GetActiveDocument)(void *); // CFrameWnd virtual function #84
    CFrameWnd * (*GetActiveFrame)(void *); // CFrameWnd virtual function #85
    void (*GetMessageString)(void *, uint, struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *); // CFrameWnd virtual function #86
    void (*RecalcLayout)(void *, int); // CFrameWnd virtual function #87
    void (*ActivateFrame)(void *, int); // CFrameWnd virtual function #88
    void (*SetMenuBarVisibility)(void *, ulong); // CFrameWnd virtual function #89
    ulong (*GetMenuBarVisibility)(void *); // CFrameWnd virtual function #90
    int (*SetMenuBarState)(void *, ulong); // CFrameWnd virtual function #91
    ulong (*GetMenuBarState)(void *); // CFrameWnd virtual function #92
    void (*OnSetPreviewMode)(void *, int, struct CPrintPreviewState *); // CFrameWnd virtual function #93
    CWnd * (*GetMessageBar)(void *); // CFrameWnd virtual function #94
    int (*NegotiateBorderSpace)(void *, uint, struct tagRECT *); // CFrameWnd virtual function #95
    int (*OnCreateClient)(void *, struct tagCREATESTRUCTA *, struct CCreateContext *); // CFrameWnd virtual function #96
    void (*OnUpdateFrameTitle)(void *, int); // CFrameWnd virtual function #97
    void (*OnUpdateFrameMenu)(void *, struct HMENU__ *); // CFrameWnd virtual function #98
    HACCEL__ * (*GetDefaultAccelerator)(void *); // CFrameWnd virtual function #99
    void (*DelayUpdateFrameMenu)(void *, struct HMENU__ *); // CFrameWnd virtual function #100
    void (*ExitHelpMode)(void *); // CFrameWnd virtual function #101
    void (*OnShowMenuBar)(void *); // CFrameWnd virtual function #102
    void (*OnHideMenuBar)(void *); // CFrameWnd virtual function #103
    void (*RegisterHandler)(void *); // CMainFrameWnd virtual function #104
    void (*DisplayAdWnd)(void *); // CMainFrameWnd virtual function #105
    void (*ShowGameRate)(void *, int); // CMainFrameWnd virtual function #106
    void (*GetTicket)(void *, int); // CMainFrameWnd virtual function #107
    void (*RefreshCookie)(void *); // CMainFrameWnd virtual function #108
    void (*OnTimer)(void *, uint); // CGcDxMainFrameWnd virtual function #109
};


// WARNING! conflicting data type names: /ClassDataTypes/CGcDxMainFrameWnd/CGcDxMainFrameWnd - /CGcDxMainFrameWnd


// WARNING! conflicting data type names: /ClassDataTypes/CGcDxMainFrameView/CGcDxMainFrameView - /CGcDxMainFrameView

typedef struct CGcDxMainFrameView_vftable CGcDxMainFrameView_vftable, *PCGcDxMainFrameView_vftable;

struct CGcDxMainFrameView_vftable {
    bool (*OnAttached)(void *); // CGcDxMainFrameView virtual function #1
    bool (*OnDetached)(void *); // CMainFrameView virtual function #2
    int (*OnAltF4KeyDown)(void *, struct IParam *); // CMainFrameView virtual function #3
    int (*OnClickExitButton)(void *, struct IParam *); // CMainFrameView virtual function #4
    int (*OnToggleScreenButton)(void *, struct IParam *); // CMainFrameView virtual function #5
    int (*OnClickMinimizeButton)(void *, struct IParam *); // CMainFrameView virtual function #6
    int (*OnClickAccuseButton)(void *, struct IParam *); // CMainFrameView virtual function #7
    int (*OnClickInviteButton)(void *, struct IParam *); // CMainFrameView virtual function #8
    int (*OnClickOptionButton)(void *, struct IParam *); // CMainFrameView virtual function #9
    CMainFrameView * (*deleting_destructor)(void *, byte); // CGcDxMainFrameView virtual function #10
};

typedef struct CChannelLobbyView CChannelLobbyView, *PCChannelLobbyView;

struct CBaseLobbyView { // class CBaseLobbyView : IComponent
    struct IComponent IComponent;
};

struct CChannelLobbyView { // class CChannelLobbyView : CBaseLobbyView
    struct CBaseLobbyView CBaseLobbyView;
};

typedef struct CGcDxGameWnd_vftable0 CGcDxGameWnd_vftable0, *PCGcDxGameWnd_vftable0;

struct CGcDxGameWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGcDxGameWnd virtual function #1
    CGameWnd * (*deleting_destructor)(void *, byte); // CGcDxGameWnd virtual function #2
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #3
    void (*vfunction4)(void *); // CChannelMainWnd virtual function #4
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CGcDxGameWnd virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CWnd virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    void (*PreSubclassWindow)(void *); // CWnd virtual function #23
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CWnd virtual function #24
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #25
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #26
    int (*DestroyWindow)(void *); // CWnd virtual function #27
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CGameWnd virtual function #28
    void (*CalcWindowRect)(void *, struct tagRECT *, uint); // CWnd virtual function #29
    CMenu * (*GetMenu)(void *); // CWnd virtual function #30
    int (*SetMenu)(void *, struct CMenu *); // CWnd virtual function #31
    int (*OnToolHitTest)(void *, struct CPoint, struct tagTOOLINFOA *); // CWnd virtual function #32
    CScrollBar * (*GetScrollBarCtrl)(void *, int); // CWnd virtual function #33
    void (*WinHelpA)(void *, ulong, uint); // CWnd virtual function #34
    void (*HtmlHelpA)(void *, ulong, uint); // CWnd virtual function #35
    void (*WinHelpInternal)(void *, ulong, uint); // CWnd virtual function #36
    int (*ContinueModal)(void *); // CWnd virtual function #37
    void (*EndModalLoop)(void *, int); // CWnd virtual function #38
    long (*EnsureStdObj)(void *); // CWnd virtual function #39
    long (*get_accParent)(void *, struct IDispatch **); // CWnd virtual function #40
    long (*get_accChildCount)(void *, long *); // CWnd virtual function #41
    long (*get_accChild)(void *, struct tagVARIANT, struct IDispatch **); // CWnd virtual function #42
    long (*get_accName)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #43
    long (*get_accValue)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #44
    long (*get_accDescription)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #45
    long (*get_accRole)(void *, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #46
    long (*get_accState)(void *, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #47
    long (*get_accHelp)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #48
    long (*get_accHelpTopic)(void *, wchar_t **, struct tagVARIANT, long *); // CWnd virtual function #49
    long (*get_accKeyboardShortcut)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #50
    long (*get_accFocus)(void *, struct tagVARIANT *); // CWnd virtual function #51
    long (*get_accSelection)(void *, struct tagVARIANT *); // CWnd virtual function #52
    long (*get_accDefaultAction)(void *, struct tagVARIANT, wchar_t **); // CWnd virtual function #53
    long (*accSelect)(void *, long, struct tagVARIANT); // CWnd virtual function #54
    long (*accLocation)(void *, long *, long *, long *, long *, struct tagVARIANT); // CWnd virtual function #55
    long (*accNavigate)(void *, long, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #56
    long (*accHitTest)(void *, long, long, struct tagVARIANT *); // CWnd virtual function #57
    long (*accDoDefaultAction)(void *, struct tagVARIANT); // CWnd virtual function #58
    long (*put_accName)(void *, struct tagVARIANT, wchar_t *); // CWnd virtual function #59
    long (*put_accValue)(void *, struct tagVARIANT, wchar_t *); // CWnd virtual function #60
    long (*SetProxy)(void *, struct IAccessibleProxy *); // CWnd virtual function #61
    long (*CreateAccessibleProxy)(void *, uint, long, long *); // CWnd virtual function #62
    int (*OnCommand)(void *, uint, long); // CWnd virtual function #63
    int (*OnNotify)(void *, uint, long, long *); // CWnd virtual function #64
    long (** (*GetSuperWndProcAddr)(void *))(struct HWND__ *, uint, uint, long); // CWnd virtual function #65
    void (*vfunction3)(void *); // CChannelMainWnd virtual function #66
    void (*vfunction67)(void *); // CChannelMainWnd virtual function #67
    void (*vfunction68)(void *); // CChannelMainWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CGcDxGameWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    bool (*DisplayChatMessage)(void *, uint, char *, int, ulong, int, int, char *); // CGameWnd virtual function #82
    bool (*DisplayNoticeMessage)(void *, char *, int, int, char *, char *); // CGameWnd virtual function #83
    bool (*DisplayStatusMessage)(void *, char *, int, ulong, int, int, char *); // CGameWnd virtual function #84
    void (*CaptureGameScreen)(void *); // CGameWnd virtual function #85
    void (*DoExActive)(void *, int); // CGcDxGameWnd virtual function #86
    int (*FlipScreen)(void *); // CGameWnd virtual function #87
    void (*ExitGameRoom)(void *); // CGameWnd virtual function #88
    void (*AccuseUser)(void *); // CGameWnd virtual function #89
    undefined (*vfunction90)(void); // MSVCR90.DLL CGcDxGameWnd pure virtual function #90
    char * (*GetGameChatContent)(void *); // CGameWnd virtual function #91
    void (*UpdateChanceInfo)(void *, struct CMemberData *); // CGameWnd virtual function #92
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #93
    undefined (*vfunction94)(void); // MSVCR90.DLL CGcDxGameWnd pure virtual function #94
    undefined (*vfunction95)(void); // MSVCR90.DLL CGcDxGameWnd pure virtual function #95
    undefined (*vfunction96)(void); // MSVCR90.DLL CGcDxGameWnd pure virtual function #96
    undefined (*vfunction97)(void); // MSVCR90.DLL CGcDxGameWnd pure virtual function #97
    undefined (*vfunction98)(void); // MSVCR90.DLL CGcDxGameWnd pure virtual function #98
    int (*ShowInviteGameToChnlDlg)(void *, bool); // CGameWnd virtual function #99
    void (*StopHostBanishCheck)(void *); // CGameWnd virtual function #100
    void (*StartHostBanishCheck)(void *); // CGameWnd virtual function #101
    int (*GetGameOptionFromRegistry)(void *); // CGameWnd virtual function #102
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #103
    bool (*IsActivate)(void *); // CGameWnd virtual function #104
    void (*ProcessItemProvokeCommand)(void *, struct IParam *); // CGameWnd virtual function #105
    int (*HasRightOfBanish)(void *); // CGameWnd virtual function #106
    int (*Evt_OnAddRoomMember)(void *, struct IParam *); // CGameWnd virtual function #107
    int (*Evt_OnDeleteRoomMember)(void *, struct IParam *); // CGameWnd virtual function #108
    int (*Evt_OnRoomMemberList)(void *, struct IParam *); // CGameWnd virtual function #109
    int (*Evt_OnModifyRoomMemberInfo)(void *, struct IParam *); // CGameWnd virtual function #110
    int (*Evt_OnEnableHostBanish)(void *, struct IParam *); // CGameWnd virtual function #111
    int (*Evt_OnTimeHostBanish)(void *, struct IParam *); // CGameWnd virtual function #112
    int (*Evt_OnGameStatusMessage)(void *, struct IParam *); // CGameWnd virtual function #113
    int (*Evt_OnChatString)(void *, struct IParam *); // CGameWnd virtual function #114
    int (*Evt_OnReqBanishMember)(void *, struct IParam *); // CGameWnd virtual function #115
    int (*Evt_OnClickBanishMember)(void *, struct IParam *); // CGameWnd virtual function #116
    int (*Evt_OnHostBanishCheck)(void *, struct IParam *); // CGameWnd virtual function #117
    int (*Evt_OnConnectTypeError)(void *, struct IParam *); // CGameWnd virtual function #118
    int (*Evt_OnItemReserveChance)(void *, struct IParam *); // CGameWnd virtual function #119
    int (*Evt_OnStartNewGame)(void *, struct IParam *); // CGameWnd virtual function #120
    int (*Evt_OnRoomEvent)(void *, struct IParam *); // CGameWnd virtual function #121
    int (*Evt_OnAltF4KeyDown)(void *, struct IParam *); // CGameWnd virtual function #122
    int (*Evt_ChannelLobby_OnUpdateNotice)(void *, struct IParam *); // CGameWnd virtual function #123
    int (*Evt_OnReserveBanish)(void *, struct IParam *); // CGameWnd virtual function #124
    int (*Evt_OnExitGameDuetoShutdown)(void *, struct IParam *); // CGameWnd virtual function #125
    int (*Evt_OnGetShutdownTime)(void *, struct IParam *); // CGameWnd virtual function #126
    int (*Net_SocketClose)(void *, struct IParam *); // CGameWnd virtual function #127
    int (*Net_commandTimeBanish)(void *, struct IParam *); // CGameWnd virtual function #128
};

typedef struct CGcDxGameWnd_data CGcDxGameWnd_data, *PCGcDxGameWnd_data;

struct CGcDxGameWnd_data {
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
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    undefined field256_0x100;
    undefined field257_0x101;
    undefined field258_0x102;
    undefined field259_0x103;
    undefined field260_0x104;
    undefined field261_0x105;
    undefined field262_0x106;
    undefined field263_0x107;
    undefined field264_0x108;
    undefined field265_0x109;
    undefined field266_0x10a;
    undefined field267_0x10b;
    undefined field268_0x10c;
    undefined field269_0x10d;
    undefined field270_0x10e;
    undefined field271_0x10f;
    undefined field272_0x110;
    undefined field273_0x111;
    undefined field274_0x112;
    undefined field275_0x113;
    undefined field276_0x114;
    undefined field277_0x115;
    undefined field278_0x116;
    undefined field279_0x117;
    undefined field280_0x118;
    undefined field281_0x119;
    undefined field282_0x11a;
    undefined field283_0x11b;
    undefined field284_0x11c;
    undefined field285_0x11d;
    undefined field286_0x11e;
    undefined field287_0x11f;
    undefined field288_0x120;
    undefined field289_0x121;
    undefined field290_0x122;
    undefined field291_0x123;
    undefined field292_0x124;
    undefined field293_0x125;
    undefined field294_0x126;
    undefined field295_0x127;
    undefined field296_0x128;
    undefined field297_0x129;
    undefined field298_0x12a;
    undefined field299_0x12b;
    undefined field300_0x12c;
    undefined field301_0x12d;
    undefined field302_0x12e;
    undefined field303_0x12f;
    undefined field304_0x130;
    undefined field305_0x131;
    undefined field306_0x132;
    undefined field307_0x133;
    undefined field308_0x134;
    undefined field309_0x135;
    undefined field310_0x136;
    undefined field311_0x137;
    undefined field312_0x138;
    undefined field313_0x139;
    undefined field314_0x13a;
    undefined field315_0x13b;
    undefined field316_0x13c;
    undefined field317_0x13d;
    undefined field318_0x13e;
    undefined field319_0x13f;
    undefined field320_0x140;
    undefined field321_0x141;
    undefined field322_0x142;
    undefined field323_0x143;
    undefined field324_0x144;
    undefined field325_0x145;
    undefined field326_0x146;
    undefined field327_0x147;
    undefined field328_0x148;
    undefined field329_0x149;
    undefined field330_0x14a;
    undefined field331_0x14b;
    undefined field332_0x14c;
    undefined field333_0x14d;
    undefined field334_0x14e;
    undefined field335_0x14f;
    undefined field336_0x150;
    undefined field337_0x151;
    undefined field338_0x152;
    undefined field339_0x153;
    undefined field340_0x154;
    undefined field341_0x155;
    undefined field342_0x156;
    undefined field343_0x157;
    undefined field344_0x158;
    undefined field345_0x159;
    undefined field346_0x15a;
    undefined field347_0x15b;
    undefined field348_0x15c;
    undefined field349_0x15d;
    undefined field350_0x15e;
    undefined field351_0x15f;
    undefined field352_0x160;
    undefined field353_0x161;
    undefined field354_0x162;
    undefined field355_0x163;
    undefined field356_0x164;
    undefined field357_0x165;
    undefined field358_0x166;
    undefined field359_0x167;
    undefined field360_0x168;
    undefined field361_0x169;
    undefined field362_0x16a;
    undefined field363_0x16b;
    undefined field364_0x16c;
    undefined field365_0x16d;
    undefined field366_0x16e;
    undefined field367_0x16f;
    undefined field368_0x170;
    undefined field369_0x171;
    undefined field370_0x172;
    undefined field371_0x173;
    undefined field372_0x174;
    undefined field373_0x175;
    undefined field374_0x176;
    undefined field375_0x177;
    undefined field376_0x178;
    undefined field377_0x179;
    undefined field378_0x17a;
    undefined field379_0x17b;
    undefined field380_0x17c;
    undefined field381_0x17d;
    undefined field382_0x17e;
    undefined field383_0x17f;
    void *offset_0x180;
    undefined4 offset_0x184;
    undefined4 offset_0x188;
    undefined4 offset_0x18c;
};


// WARNING! conflicting data type names: /ClassDataTypes/CGcDxGameWnd/CGcDxGameWnd - /CGcDxGameWnd

typedef struct CGcDxGameWnd_vftable1 CGcDxGameWnd_vftable1, *PCGcDxGameWnd_vftable1;

struct CGcDxGameWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CGcDxGameWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CGameWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /Demangler/CChannelMainWnd - /ClassDataTypes/CChannelMainWnd/CChannelMainWnd

typedef struct CDC CDC, *PCDC;

struct CDC { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHanChatView - /ClassDataTypes/CHanChatView/CHanChatView

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWinThread - /ClassDataTypes/CWinThread/CWinThread

typedef struct CDisplayModeChanger CDisplayModeChanger, *PCDisplayModeChanger;

struct CDisplayModeChanger { // PlaceHolder Structure
};

typedef struct CMemberData CMemberData, *PCMemberData;

struct CMemberData { // PlaceHolder Structure
};

typedef struct CMiniChannelListWnd CMiniChannelListWnd, *PCMiniChannelListWnd;

struct CMiniChannelListWnd { // PlaceHolder Structure
};

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};

typedef struct CRect CRect, *PCRect;

struct CRect { // PlaceHolder Structure
};

typedef struct CDocument CDocument, *PCDocument;

struct CDocument { // PlaceHolder Structure
};

typedef struct IGod IGod, *PIGod;

struct IGod { // PlaceHolder Structure
};

typedef struct AFX_OLECMDMAP AFX_OLECMDMAP, *PAFX_OLECMDMAP;

struct AFX_OLECMDMAP { // PlaceHolder Structure
};

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMiniChannelListView - /ClassDataTypes/CMiniChannelListView/CMiniChannelListView

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ { // PlaceHolder Structure
};

typedef struct AFX_EVENTSINKMAP AFX_EVENTSINKMAP, *PAFX_EVENTSINKMAP;

struct AFX_EVENTSINKMAP { // PlaceHolder Structure
};

typedef struct tagTOOLINFOA tagTOOLINFOA, *PtagTOOLINFOA;

struct tagTOOLINFOA { // PlaceHolder Structure
};

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { // PlaceHolder Structure
};

typedef struct AFX_CONNECTIONMAP AFX_CONNECTIONMAP, *PAFX_CONNECTIONMAP;

struct AFX_CONNECTIONMAP { // PlaceHolder Structure
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown { // PlaceHolder Structure
};

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { // PlaceHolder Structure
};

typedef struct SGlobalInfo SGlobalInfo, *PSGlobalInfo;

struct SGlobalInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameWnd - /ClassDataTypes/CGameWnd/CGameWnd


// WARNING! conflicting data type names: /Demangler/CControlBase - /ClassDataTypes/CControlBase/CControlBase


// WARNING! conflicting data type names: /Demangler/CBaseApp - /ClassDataTypes/CBaseApp/CBaseApp

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { // PlaceHolder Structure
};

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { // PlaceHolder Structure
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

struct tagVARIANT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWnd - /ClassDataTypes/CWnd/CWnd

typedef struct CPrintPreviewState CPrintPreviewState, *PCPrintPreviewState;

struct CPrintPreviewState { // PlaceHolder Structure
};

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

struct HACCEL__ { // PlaceHolder Structure
};

typedef struct IInput IInput, *PIInput;

struct IInput { // PlaceHolder Structure
};

typedef struct IConnectionPoint IConnectionPoint, *PIConnectionPoint;

struct IConnectionPoint { // PlaceHolder Structure
};

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ { // PlaceHolder Structure
};

typedef struct _AFX_OCC_DIALOG_INFO _AFX_OCC_DIALOG_INFO, *P_AFX_OCC_DIALOG_INFO;

struct _AFX_OCC_DIALOG_INFO { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameLobbyView - /ClassDataTypes/CGameLobbyView/CGameLobbyView

typedef struct CDialogCmp CDialogCmp, *PCDialogCmp;

struct CDialogCmp { // PlaceHolder Structure
};

typedef struct AFX_INTERFACEMAP AFX_INTERFACEMAP, *PAFX_INTERFACEMAP;

struct AFX_INTERFACEMAP { // PlaceHolder Structure
};

typedef struct IDispatch IDispatch, *PIDispatch;

struct IDispatch { // PlaceHolder Structure
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ { // PlaceHolder Structure
};

typedef struct tagCREATESTRUCTA tagCREATESTRUCTA, *PtagCREATESTRUCTA;

struct tagCREATESTRUCTA { // PlaceHolder Structure
};

typedef struct AFX_MSGMAP AFX_MSGMAP, *PAFX_MSGMAP;

struct AFX_MSGMAP { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info


// WARNING! conflicting data type names: /Demangler/CMainFrameView - /ClassDataTypes/CMainFrameView/CMainFrameView

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFrameWnd - /ClassDataTypes/CFrameWnd/CFrameWnd


// WARNING! conflicting data type names: /Demangler/CChannelLobbyView - /ClassDataTypes/CChannelLobbyView/CChannelLobbyView

typedef struct IDxDevice IDxDevice, *PIDxDevice;

struct IDxDevice { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWinApp - /ClassDataTypes/CWinApp/CWinApp

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};

typedef struct CDialogList CDialogList, *PCDialogList;

struct CDialogList { // PlaceHolder Structure
};

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMainFrameWnd - /ClassDataTypes/CMainFrameWnd/CMainFrameWnd

typedef struct CException CException, *PCException;

struct CException { // PlaceHolder Structure
};

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};

typedef struct tagMSG tagMSG, *PtagMSG;

struct tagMSG { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CBaseLobbyView - /ClassDataTypes/CBaseLobbyView/CBaseLobbyView


// WARNING! conflicting data type names: /Demangler/CCmdTarget - /ClassDataTypes/CCmdTarget/CCmdTarget

typedef enum VRenderEffectType {
} VRenderEffectType;

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ { // PlaceHolder Structure
};

typedef struct IParam IParam, *PIParam;

struct IParam { // PlaceHolder Structure
};

typedef struct CParam CParam, *PCParam;

struct CParam { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};

typedef struct CBasicRect<float> CBasicRect<float>, *PCBasicRect<float>;

struct CBasicRect<float> { // PlaceHolder Structure
};

typedef struct CBasicPoint<long> CBasicPoint<long>, *PCBasicPoint<long>;

struct CBasicPoint<long> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct SmallObjAllocator SmallObjAllocator, *PSmallObjAllocator;

struct SmallObjAllocator { // PlaceHolder Structure
};

typedef struct AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>, *PAllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;

struct AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // PlaceHolder Structure
};

typedef struct SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst> SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>, *PSmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>;

struct SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/visual/CVisual - /ClassDataTypes/neon/visual/CVisual/CVisual

typedef struct CApp CApp, *PCApp;

struct CApp { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/frw/CComponent - /ClassDataTypes/neon/frw/CComponent/CComponent

typedef struct CFileManager CFileManager, *PCFileManager;

struct CFileManager { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/frw/CObject - /ClassDataTypes/CObject/CObject

typedef struct CResource CResource, *PCResource;

struct CResource { // PlaceHolder Structure
};

typedef struct CSound CSound, *PCSound;

struct CSound { // PlaceHolder Structure
};

typedef struct CControl CControl, *PCControl;

struct CControl { // PlaceHolder Structure
};

typedef struct CUIInputManager CUIInputManager, *PCUIInputManager;

struct CUIInputManager { // PlaceHolder Structure
};

typedef struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CSimpleStringT<char,1> CSimpleStringT<char,1>, *PCSimpleStringT<char,1>;

struct CSimpleStringT<char,1> { // PlaceHolder Structure
};

typedef enum ViewType {
} ViewType;

typedef enum WndType {
} WndType;

typedef int (*_onexit_t)(void);

typedef uint size_t;




void FUN_10001000(void *param_1);
undefined4 FUN_10001010(HINSTANCE__ *param_1,int param_2);
undefined4 FUN_10001070(undefined4 param_1,int param_2);
CGcDxGameLobbyView * __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView(CGcDxGameLobbyView *this,CGcDxGameLobbyView *param_1);
CGcDxGameLobbyView * __thiscall CGcDxGameLobbyView::operator=(CGcDxGameLobbyView *this,CGcDxGameLobbyView *param_1);
CGcDxGameLobbyView * __thiscall CGcDxGameLobbyView::scalar_deleting_destructor(CGcDxGameLobbyView *this,byte param_1);
CGcDxChannelLobbyView * __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(CGcDxChannelLobbyView *this,CGcDxChannelLobbyView *param_1);
CGcDxChannelLobbyView * __thiscall CGcDxChannelLobbyView::operator=(CGcDxChannelLobbyView *this,CGcDxChannelLobbyView *param_1);
CGcDxChannelLobbyView * __thiscall CGcDxChannelLobbyView::scalar_deleting_destructor(CGcDxChannelLobbyView *this,byte param_1);
void __thiscall CGcDxGameWnd::SetGameInFlag(CGcDxGameWnd *this,int param_1);
int __thiscall CGcDxGameWnd::IsMinimizeGameWnd(CGcDxGameWnd *this);
void __thiscall CGcDxGameWnd::SetMinimizeGameWnd(CGcDxGameWnd *this,int param_1);
CGcDxbaseApp * __thiscall CGcDxbaseApp::CGcDxbaseApp(CGcDxbaseApp *this);
void __thiscall CGcDxbaseApp::~CGcDxbaseApp(CGcDxbaseApp *this);
int __thiscall CGcDxbaseApp::CGcDxbaseApp::InitInstance(CGcDxbaseApp *this);
int __thiscall CGcDxbaseApp::CGcDxbaseApp::ExitInstance(CGcDxbaseApp *this);
int __thiscall CGcDxbaseApp::CGcDxbaseApp::OnIdle(CGcDxbaseApp *this,long param_1);
int __thiscall CGcDxbaseApp::CGcDxbaseApp::PreTranslateMessage(CGcDxbaseApp *this,tagMSG *param_1);
void FUN_10001320(void);
void __thiscall CChannelMainWnd::vfunction4(CChannelMainWnd *this);
CBaseApp * __thiscall CGcDxbaseApp::scalar_deleting_destructor(CGcDxbaseApp *this,byte param_1);
bool __thiscall CGcDxbaseApp::CGcDxbaseApp::LoadViewObjects(CGcDxbaseApp *this);
CHanChatView * __thiscall CHanChatView::scalar_deleting_destructor(CHanChatView *this,byte param_1);
CMiniChannelListView * __thiscall CMiniChannelListView::scalar_deleting_destructor(CMiniChannelListView *this,byte param_1);
CMainFrameView * __thiscall CMainFrameView::scalar_deleting_destructor(CMainFrameView *this,byte param_1);
void __thiscall CChannelMainWnd::vfunction1(CChannelMainWnd *this,byte param_1);
void __thiscall CChannelMainWnd::vfunction3(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::vfunction67(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::vfunction68(CChannelMainWnd *this);
CChannelMainWnd * __thiscall CChannelMainWnd::scalar_deleting_destructor(CChannelMainWnd *this,byte param_1);
bool __thiscall CGcDxbaseApp::CGcDxbaseApp::LoadDefaultObjects(CGcDxbaseApp *this);
void * __cdecl FUN_10001710(uint param_1);
void __fastcall FUN_10001780(int *param_1);
int __thiscall CGcDxbaseApp::CGcDxbaseApp::InitDX(CGcDxbaseApp *this,int param_1,int param_2,bool param_3,bool param_4);
CVisual * __thiscall neon::visual::CVisual::scalar_deleting_destructor(CVisual *this,byte param_1);
CGcDxChannelLobbyView * __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(CGcDxChannelLobbyView *this);
CGcDxChannelLobbyView * __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(CGcDxChannelLobbyView *this,char *param_1,CWnd *param_2,bool param_3);
void __thiscall CGcDxChannelLobbyView::~CGcDxChannelLobbyView(CGcDxChannelLobbyView *this);
int __thiscall CGcDxChannelLobbyView::Evt_GcDxChannelLobby_OnActivateOn(CGcDxChannelLobbyView *this,IParam *param_1);
void __thiscall CMFunctor<CGcDxChannelLobbyView>::vfunction1(CMFunctor<CGcDxChannelLobbyView> *this);
void __thiscall CMFunctor<CGcDxChannelLobbyView>::scalar_deleting_destructor(CMFunctor<CGcDxChannelLobbyView> *this);
bool __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView::OnAttached(CGcDxChannelLobbyView *this);
void __thiscall CGcDxMainFrameWnd::SetInGameFlag(CGcDxMainFrameWnd *this,int param_1);
CGcDxGameLobbyView * __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView(CGcDxGameLobbyView *this);
void __thiscall CGcDxGameLobbyView::~CGcDxGameLobbyView(CGcDxGameLobbyView *this);
int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOn(CGcDxGameLobbyView *this,IParam *param_1);
int __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView::Msg_UpdateUIFromXML(CGcDxGameLobbyView *this,IParam *param_1);
int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOnGameWnd(CGcDxGameLobbyView *this,IParam *param_1);
int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOffGameWnd(CGcDxGameLobbyView *this,IParam *param_1);
void __thiscall CMFunctor<CGcDxChannelLobbyView>::vfunction3(CMFunctor<CGcDxChannelLobbyView> *this,undefined4 *param_1);
void __thiscall CMFunctor<CGcDxGameLobbyView>::scalar_deleting_destructor(CMFunctor<CGcDxGameLobbyView> *this);
bool __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView::OnAttached(CGcDxGameLobbyView *this);
void __cdecl FUN_10001da0(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> param_1);
CRuntimeClass * CGcDxGameWnd::_GetBaseClass(void);
CRuntimeClass * __thiscall CGcDxGameWnd::CGcDxGameWnd::GetRuntimeClass(CGcDxGameWnd *this);
CGcDxGameWnd * __thiscall CGcDxGameWnd::CGcDxGameWnd(CGcDxGameWnd *this);
void __thiscall CGcDxGameWnd::~CGcDxGameWnd(CGcDxGameWnd *this);
int __thiscall CGcDxGameWnd::OnCreate(CGcDxGameWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CGcDxGameWnd::CGcDxGameWnd::DoExActive(CGcDxGameWnd *this,int param_1);
void __thiscall CGcDxGameWnd::OnDestroy(CGcDxGameWnd *this);
int __thiscall CGcDxGameWnd::IsFullMode(CGcDxGameWnd *this);
CGameWnd * __thiscall CGcDxGameWnd::scalar_deleting_destructor(CGcDxGameWnd *this,byte param_1);
void __thiscall CGcDxGameWnd::MinimizeGameWindow(CGcDxGameWnd *this);
void __thiscall CGcDxGameWnd::OnSize(CGcDxGameWnd *this,uint param_1,int param_2,int param_3);
void __thiscall CGcDxGameWnd::OnPaint(CGcDxGameWnd *this);
long __thiscall CGcDxGameWnd::CGcDxGameWnd::WindowProc(CGcDxGameWnd *this,uint param_1,uint param_2,long param_3);
long __thiscall CGcDxGameWnd::OnRepaint(CGcDxGameWnd *this,uint param_1,long param_2);
void __thiscall CGcDxGameWnd::GetGameResolution(CGcDxGameWnd *this);
long __thiscall CGcDxGameWnd::ChangeToFullMode(CGcDxGameWnd *this);
long __thiscall CGcDxGameWnd::RestoreDisplayMode(CGcDxGameWnd *this);
int __thiscall CGcDxGameWnd::ChangeDisplayMode(CGcDxGameWnd *this,int *param_1);
void __fastcall FUN_10002800(int *param_1);
void __thiscall CGcDxGameWnd::vfunction1(CGcDxGameWnd *this,byte param_1);
AFX_MSGMAP * __thiscall CGcDxGameWnd::CGcDxGameWnd::GetMessageMap(CGcDxGameWnd *this);
void __thiscall CGcDxGameWnd::ApplyXDeviceMode(CGcDxGameWnd *this);
void __thiscall CGcDxGameWnd::SetDlgClipRegion(CGcDxGameWnd *this);
void __thiscall CGcDxGameWnd::RemoveDlgClipRegion(CGcDxGameWnd *this);
CGcDxMainFrameView * __thiscall CGcDxMainFrameView::CGcDxMainFrameView(CGcDxMainFrameView *this,CGcDxMainFrameView *param_1);
CGcDxMainFrameView * __thiscall CGcDxMainFrameView::operator=(CGcDxMainFrameView *this,CGcDxMainFrameView *param_1);
CGcDxMainFrameView * __thiscall CGcDxMainFrameView::CGcDxMainFrameView(CGcDxMainFrameView *this);
void __thiscall CGcDxMainFrameView::~CGcDxMainFrameView(CGcDxMainFrameView *this);
CMainFrameView * __thiscall CGcDxMainFrameView::scalar_deleting_destructor(CGcDxMainFrameView *this,byte param_1);
int __thiscall CGcDxMainFrameView::Evt_LobbyState_OnStateChanged(CGcDxMainFrameView *this,IParam *param_1);
void __thiscall CMFunctor<CGcDxMainFrameView>::scalar_deleting_destructor(CMFunctor<CGcDxMainFrameView> *this);
bool __thiscall CGcDxMainFrameView::CGcDxMainFrameView::OnAttached(CGcDxMainFrameView *this);
CRuntimeClass * CGcDxMainFrameWnd::_GetBaseClass(void);
CRuntimeClass * __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd::GetRuntimeClass(CGcDxMainFrameWnd *this);
CGcDxMainFrameWnd * __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd(CGcDxMainFrameWnd *this);
void __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd(CGcDxMainFrameWnd *this);
long __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd::WindowProc(CGcDxMainFrameWnd *this,uint param_1,uint param_2,long param_3);
void __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd::OnTimer(CGcDxMainFrameWnd *this,uint param_1);
void __thiscall CGcDxMainFrameWnd::OnSize(CGcDxMainFrameWnd *this,uint param_1,int param_2,int param_3);
long __thiscall CGcDxMainFrameWnd::OnModalIdle(CGcDxMainFrameWnd *this,uint param_1,long param_2);
void __thiscall CGcDxMainFrameWnd::GetGameResolution(CGcDxMainFrameWnd *this,CRect *param_1);
void __thiscall CGcDxMainFrameWnd::GetFrameResolution(CGcDxMainFrameWnd *this,CRect *param_1);
CMainFrameWnd * __thiscall CGcDxMainFrameWnd::scalar_deleting_destructor(CGcDxMainFrameWnd *this,byte param_1);
void __thiscall CGcDxMainFrameWnd::OnKillFocus(CGcDxMainFrameWnd *this,CWnd *param_1);
long __thiscall CGcDxMainFrameWnd::OnContextMenu(CGcDxMainFrameWnd *this,uint param_1,long param_2);
long __thiscall CGcDxMainFrameWnd::OnExitSizeMove(CGcDxMainFrameWnd *this,uint param_1,long param_2);
void __thiscall CGcDxMainFrameWnd::OnActivate(CGcDxMainFrameWnd *this,uint param_1,CWnd *param_2,int param_3);
long __thiscall CGcDxMainFrameWnd::OnEnterDlgDrag(CGcDxMainFrameWnd *this,uint param_1,long param_2);
long __thiscall CGcDxMainFrameWnd::OnExitDlgDrag(CGcDxMainFrameWnd *this,uint param_1,long param_2);
void __thiscall CGcDxMainFrameWnd::vfunction1(CGcDxMainFrameWnd *this,byte param_1);
AFX_MSGMAP * __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd::GetMessageMap(CGcDxMainFrameWnd *this);
void __thiscall neon::frw::CObject::neon::frw::CObject::Logic(CObject *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::Output(CVisual *this);
void __thiscall neon::frw::CComponent::neon::frw::CComponent::BeforeRelease(CComponent *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::OnAttached(CVisual *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::OnDetached(CVisual *this);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnActivate(CObject *this,bool param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnSelect(CObject *this,bool param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnFocus(CObject *this,bool param_1,bool param_2);
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::IsIn(CObject *this,int param_1,int param_2);
CObject * __thiscall neon::visual::CVisual::neon::visual::CVisual::Clone(CVisual *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::Copy(CVisual *this,CObject *param_1);
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::IsMyIn(CObject *this,int param_1,int param_2);
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::IsChildIn(CObject *this,int param_1,int param_2);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetEffect(CVisual *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetEffectType(CVisual *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetClipRect(CVisual *this,CBasicRect<float> *param_1,bool param_2);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetLocalClipRect(CVisual *this,CBasicRect<float> *param_1,bool param_2);
float __thiscall neon::visual::CVisual::neon::visual::CVisual::GetPosX(CVisual *this);
float __thiscall neon::visual::CVisual::neon::visual::CVisual::GetPosY(CVisual *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetPosX(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetPosY(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetShowRef(CVisual *this,bool param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetInverse(CVisual *this,bool param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetPivot(CVisual *this,float param_1,float param_2);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetUseParentRotation(CVisual *this,bool param_1);
uchar __thiscall neon::visual::CVisual::neon::visual::CVisual::GetAlpha(CVisual *this);
AFX_MSGMAP * __thiscall CBaseApp::CBaseApp::GetMessageMap(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::RegisterHandlers(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::RegWork_LoadFullScreenSetting(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::RegWork_SaveFullScreenSetting(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::RegWork_RegisterNotifyWnd(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::RegWork_EraseNotifyWnd(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::CheckTestMode(CBaseApp *this);
CFrameWnd * __thiscall CBaseApp::CBaseApp::MakeFrameInstance(CBaseApp *this);
void * __thiscall CBaseApp::CBaseApp::MakeGameInstance(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::HookConfigLoader(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::CheckBipLog(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::_CheckCmdString(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::_CheckMutex(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::_CheckPlatformConverter(CBaseApp *this);
bool __thiscall CControlBase::CControlBase::CreateControl(CControlBase *this,IParam *param_1);
bool __thiscall CControlBase::CControlBase::DestroyControl(CControlBase *this);
bool __thiscall CControlBase::CControlBase::IsCreated(CControlBase *this);
void __thiscall CControlBase::CControlBase::ShowControl(CControlBase *this,bool param_1);
void __thiscall CControlBase::CControlBase::UpdateControlForGame(CControlBase *this,IParam *param_1);
CWnd * __thiscall CControlBase::CControlBase::GetCWndPtr(CControlBase *this);
IGod * __cdecl God(void);
bool __thiscall CGameLobbyView::CGameLobbyView::OnDetached(CGameLobbyView *this);
int __thiscall CBaseLobbyView::CBaseLobbyView::Msg_GetWindow(CBaseLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::CGameLobbyView::OnClickExitGameBtn(CGameLobbyView *this,IParam *param_1);
bool __thiscall CChannelLobbyView::CChannelLobbyView::OnDetached(CChannelLobbyView *this);
int __thiscall CChannelLobbyView::CChannelLobbyView::Msg_UpdateUIFromXML(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnDblClickRoomList(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickChangeChannelBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickCreateRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickJoinRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickViewRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickRoomAvatar(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnDblClickMemberList(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickDirectStartBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickRecommendedGameBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickExitBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickAutoCreateRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnGetItemState(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnCloseItemWebDlg(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickShowItemWebBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickHappyBeanBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickGuildCtrl(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickThermometer(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickSPCRoom(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickMemberListTabFilterBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickShowEmptyRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickShowRoomNumOrderBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickSearchRoomBtn(CChannelLobbyView *this,IParam *param_1);
bool __thiscall CHanChatView::CHanChatView::OnAttached(CHanChatView *this);
bool __thiscall CHanChatView::CHanChatView::OnDetached(CHanChatView *this);
CRuntimeClass * __thiscall CChannelMainWnd::CChannelMainWnd::GetRuntimeClass(CChannelMainWnd *this);
AFX_MSGMAP * __thiscall CChannelMainWnd::CChannelMainWnd::GetMessageMap(CChannelMainWnd *this);
int __thiscall CChannelMainWnd::CChannelMainWnd::InitiateChannelMainWnd(CChannelMainWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateRoomListCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateMyInfoCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateTabCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateNoticeWnd(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateChannelButton(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CrateTabMemberList(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AddTab(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AttachScrollCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AttachListControl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AttachHtmlCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AttachBtn(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateMemberListCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateGuildListCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateFriendListCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::SortRoomList(CChannelMainWnd *this,int param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::UpdateControl(CChannelMainWnd *this,IParam *param_1);
bool __thiscall CMiniChannelListView::CMiniChannelListView::OnAttached(CMiniChannelListView *this);
bool __thiscall CMiniChannelListView::CMiniChannelListView::OnDetached(CMiniChannelListView *this);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickRefreshBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickJoinBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickExitBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickAutoJoinBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickGrpListBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickChannelGrpLst(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickChannelLst(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnCheckEnterableState(CMiniChannelListView *this,IParam *param_1);
void __thiscall CMiniChannelListView::CMiniChannelListView::SetMiniChannelListWnd(CMiniChannelListView *this,CMiniChannelListWnd *param_1);
bool __thiscall CMainFrameView::CMainFrameView::OnAttached(CMainFrameView *this);
bool __thiscall CMainFrameView::CMainFrameView::OnDetached(CMainFrameView *this);
int __thiscall CMainFrameView::CMainFrameView::OnAltF4KeyDown(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickExitButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnToggleScreenButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickMinimizeButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickAccuseButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickInviteButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickOptionButton(CMainFrameView *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::PreCreateWindow(CGameWnd *this,tagCREATESTRUCTA *param_1);
bool __thiscall CGameWnd::CGameWnd::DisplayChatMessage(CGameWnd *this,uint param_1,char *param_2,int param_3,ulong param_4,int param_5,int param_6,char *param_7);
bool __thiscall CGameWnd::CGameWnd::DisplayNoticeMessage(CGameWnd *this,char *param_1,int param_2,int param_3,char *param_4,char *param_5);
bool __thiscall CGameWnd::CGameWnd::DisplayStatusMessage(CGameWnd *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5,char *param_6);
void __thiscall CGameWnd::CGameWnd::CaptureGameScreen(CGameWnd *this);
int __thiscall CGameWnd::CGameWnd::FlipScreen(CGameWnd *this);
void __thiscall CGameWnd::CGameWnd::ExitGameRoom(CGameWnd *this);
void __thiscall CGameWnd::CGameWnd::AccuseUser(CGameWnd *this);
char * __thiscall CGameWnd::CGameWnd::GetGameChatContent(CGameWnd *this);
void __thiscall CGameWnd::CGameWnd::UpdateChanceInfo(CGameWnd *this,CMemberData *param_1);
void __thiscall CGameWnd::CGameWnd::CreateCaptionButtons(CGameWnd *this);
int __thiscall CGameWnd::CGameWnd::ShowInviteGameToChnlDlg(CGameWnd *this,bool param_1);
void __thiscall CGameWnd::CGameWnd::StopHostBanishCheck(CGameWnd *this);
void __thiscall CGameWnd::CGameWnd::StartHostBanishCheck(CGameWnd *this);
int __thiscall CGameWnd::CGameWnd::GetGameOptionFromRegistry(CGameWnd *this);
void __thiscall CGameWnd::CGameWnd::PlayEventSound(CGameWnd *this,int param_1);
bool __thiscall CGameWnd::CGameWnd::IsActivate(CGameWnd *this);
void __thiscall CGameWnd::CGameWnd::ProcessItemProvokeCommand(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::HasRightOfBanish(CGameWnd *this);
int __thiscall CGameWnd::CGameWnd::Evt_OnAddRoomMember(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnDeleteRoomMember(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnRoomMemberList(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnModifyRoomMemberInfo(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnEnableHostBanish(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnTimeHostBanish(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnGameStatusMessage(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnChatString(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnReqBanishMember(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnClickBanishMember(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnHostBanishCheck(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnConnectTypeError(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnItemReserveChance(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnStartNewGame(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnRoomEvent(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnAltF4KeyDown(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_ChannelLobby_OnUpdateNotice(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnReserveBanish(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnExitGameDuetoShutdown(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnGetShutdownTime(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Net_SocketClose(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Net_commandTimeBanish(CGameWnd *this,IParam *param_1);
void __thiscall CGameWnd::CGameWnd::UpdateControl(CGameWnd *this,IParam *param_1);
int __thiscall CMainFrameWnd::CMainFrameWnd::OnCmdMsg(CMainFrameWnd *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
int __thiscall CMainFrameWnd::CMainFrameWnd::PreCreateWindow(CMainFrameWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CMainFrameWnd::CMainFrameWnd::PreTranslateMessage(CMainFrameWnd *this,tagMSG *param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::RegisterHandler(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::CMainFrameWnd::DisplayAdWnd(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::CMainFrameWnd::ShowGameRate(CMainFrameWnd *this,int param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::GetTicket(CMainFrameWnd *this,int param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::RefreshCookie(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::CMainFrameWnd::UpdateControl(CMainFrameWnd *this,IParam *param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::UpdateControlForGame(CMainFrameWnd *this,IParam *param_1);
void __cdecl operator_delete(void *param_1);
void * __cdecl operator_new(uint param_1);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
AFX_MODULE_STATE * AfxGetModuleState(void);
void __cdecl operator_delete[](void *param_1);
CRuntimeClass * __thiscall CWinApp::CWinApp::GetRuntimeClass(CWinApp *this);
int __thiscall CCmdTarget::CCmdTarget::OnCmdMsg(CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
void __thiscall CCmdTarget::CCmdTarget::OnFinalRelease(CCmdTarget *this);
int __thiscall CCmdTarget::CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1);
int __thiscall CCmdTarget::CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1);
uint __thiscall CCmdTarget::CCmdTarget::GetTypeInfoCount(CCmdTarget *this);
CTypeLibCache * __thiscall CCmdTarget::CCmdTarget::GetTypeLibCache(CCmdTarget *this);
long __thiscall CCmdTarget::CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2);
AFX_OLECMDMAP * __thiscall CCmdTarget::CCmdTarget::GetCommandMap(CCmdTarget *this);
AFX_DISPMAP * __thiscall CCmdTarget::CCmdTarget::GetDispatchMap(CCmdTarget *this);
AFX_CONNECTIONMAP * __thiscall CCmdTarget::CCmdTarget::GetConnectionMap(CCmdTarget *this);
AFX_INTERFACEMAP * __thiscall CCmdTarget::CCmdTarget::GetInterfaceMap(CCmdTarget *this);
AFX_EVENTSINKMAP * __thiscall CCmdTarget::CCmdTarget::GetEventSinkMap(CCmdTarget *this);
int __thiscall CCmdTarget::CCmdTarget::OnCreateAggregates(CCmdTarget *this);
IUnknown * __thiscall CCmdTarget::CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1);
int __thiscall CCmdTarget::CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1);
IConnectionPoint * __thiscall CCmdTarget::CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1);
int __thiscall CWinApp::CWinApp::Run(CWinApp *this);
int __thiscall CWinThread::CWinThread::PumpMessage(CWinThread *this);
int __thiscall CWinThread::CWinThread::IsIdleMessage(CWinThread *this,tagMSG *param_1);
long __thiscall CWinApp::CWinApp::ProcessWndProcException(CWinApp *this,CException *param_1,tagMSG *param_2);
int __thiscall CWinThread::CWinThread::ProcessMessageFilter(CWinThread *this,int param_1,tagMSG *param_2);
CWnd * __thiscall CWinThread::CWinThread::GetMainWnd(CWinThread *this);
void __thiscall CWinThread::CWinThread::Delete(CWinThread *this);
void __thiscall CWinApp::CWinApp::InitLibId(CWinApp *this);
int __thiscall CWinApp::CWinApp::Register(CWinApp *this);
int __thiscall CWinApp::CWinApp::Unregister(CWinApp *this);
CDocument * __thiscall CWinApp::CWinApp::OpenDocumentFile(CWinApp *this,char *param_1);
void __thiscall CWinApp::CWinApp::AddToRecentFileList(CWinApp *this,char *param_1);
int __thiscall CWinApp::CWinApp::InitApplication(CWinApp *this);
int __thiscall CWinApp::CWinApp::SaveAllModified(CWinApp *this);
int __thiscall CWinApp::CWinApp::DoMessageBox(CWinApp *this,char *param_1,uint param_2,uint param_3);
void __thiscall CWinApp::CWinApp::DoWaitCursor(CWinApp *this,int param_1);
int __thiscall CWinApp::CWinApp::OnDDECommand(CWinApp *this,char *param_1);
void __thiscall CWinApp::CWinApp::WinHelpA(CWinApp *this,ulong param_1,uint param_2);
void __thiscall CWinApp::CWinApp::HtmlHelpA(CWinApp *this,ulong param_1,uint param_2);
void __thiscall CWinApp::CWinApp::WinHelpInternal(CWinApp *this,ulong param_1,uint param_2);
HINSTANCE__ * __thiscall CWinApp::CWinApp::LoadAppLangResourceDLL(CWinApp *this);
int __thiscall CWinApp::CWinApp::LoadSysPolicies(CWinApp *this);
int __thiscall CWinThread::PreTranslateMessage(CWinThread *this,tagMSG *param_1);
void __thiscall CWnd::CWnd::OnFinalRelease(CWnd *this);
AFX_INTERFACEMAP * __thiscall CWnd::CWnd::GetInterfaceMap(CWnd *this);
void __thiscall CWnd::CWnd::PreSubclassWindow(CWnd *this);
int __thiscall CWnd::CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,uint param_6,CCreateContext *param_7);
int __thiscall CWnd::CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,CWnd *param_6,uint param_7,void *param_8);
int __thiscall CWnd::CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11);
int __thiscall CWnd::CWnd::DestroyWindow(CWnd *this);
int __thiscall CWnd::CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CWnd::CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2);
CMenu * __thiscall CWnd::CWnd::GetMenu(CWnd *this);
int __thiscall CWnd::CWnd::SetMenu(CWnd *this,CMenu *param_1);
int __thiscall CWnd::CWnd::OnToolHitTest(void);
CScrollBar * __thiscall CWnd::CWnd::GetScrollBarCtrl(CWnd *this,int param_1);
void __thiscall CWnd::CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2);
void __thiscall CWnd::CWnd::HtmlHelpA(CWnd *this,ulong param_1,uint param_2);
void __thiscall CWnd::CWnd::WinHelpInternal(CWnd *this,ulong param_1,uint param_2);
int __thiscall CWnd::CWnd::ContinueModal(CWnd *this);
void __thiscall CWnd::CWnd::EndModalLoop(CWnd *this,int param_1);
long __thiscall CWnd::CWnd::EnsureStdObj(CWnd *this);
long __thiscall CWnd::CWnd::get_accParent(CWnd *this,IDispatch **param_1);
long __thiscall CWnd::CWnd::get_accChildCount(CWnd *this,long *param_1);
long __thiscall CWnd::CWnd::get_accChild(void);
long __thiscall CWnd::CWnd::get_accName(void);
long __thiscall CWnd::CWnd::get_accValue(void);
long __thiscall CWnd::CWnd::get_accDescription(void);
long __thiscall CWnd::CWnd::get_accRole(void);
long __thiscall CWnd::CWnd::get_accState(void);
long __thiscall CWnd::CWnd::get_accHelp(void);
long __thiscall CWnd::CWnd::get_accHelpTopic(void);
long __thiscall CWnd::CWnd::get_accKeyboardShortcut(void);
long __thiscall CWnd::CWnd::get_accFocus(CWnd *this,tagVARIANT *param_1);
long __thiscall CWnd::CWnd::get_accSelection(CWnd *this,tagVARIANT *param_1);
long __thiscall CWnd::CWnd::get_accDefaultAction(void);
long __thiscall CWnd::CWnd::accSelect(void);
long __thiscall CWnd::CWnd::accLocation(void);
long __thiscall CWnd::CWnd::accNavigate(void);
long __thiscall CWnd::CWnd::accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3);
long __thiscall CWnd::CWnd::accDoDefaultAction(void);
long __thiscall CWnd::CWnd::put_accName(void);
long __thiscall CWnd::CWnd::put_accValue(void);
long __thiscall CWnd::CWnd::SetProxy(CWnd *this,IAccessibleProxy *param_1);
long __thiscall CWnd::CWnd::CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3);
int __thiscall CWnd::CWnd::OnCommand(CWnd *this,uint param_1,long param_2);
int __thiscall CWnd::CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3);
_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::CWnd::GetSuperWndProcAddr(CWnd *this);
int __thiscall CWnd::CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1);
int __thiscall CWnd::CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3);
long __thiscall CWnd::CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3);
int __thiscall CWnd::CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
long __thiscall CWnd::CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3);
void __thiscall CWnd::CWnd::PostNcDestroy(CWnd *this);
int __thiscall CWnd::CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CWnd::CWnd::CheckAutoCenter(CWnd *this);
int __thiscall CWnd::CWnd::IsFrameWnd(CWnd *this);
int __thiscall CWnd::CWnd::CreateControlContainer(CWnd *this,COleControlContainer **param_1);
int __thiscall CWnd::CWnd::CreateControlSite(CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,_GUID *param_4);
int __thiscall CWnd::CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1);
_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd::GetOccDialogInfo(CWnd *this);
CWinThread * AfxGetThread(void);
int __thiscall CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4);
void __thiscall CWnd::OnDestroy(CWnd *this);
CDC * CDC::FromHandle(HDC__ *param_1);
CWnd * CWnd::FromHandle(HWND__ *param_1);
long __thiscall CWnd::Default(CWnd *this);
int __thiscall CWnd::ShowWindow(CWnd *this,int param_1);
int __thiscall CWnd::ModifyStyle(CWnd *this,ulong param_1,ulong param_2,uint param_3);
void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1);
CMenu * __thiscall CFrameWnd::CFrameWnd::GetMenu(CFrameWnd *this);
int __thiscall CFrameWnd::CFrameWnd::SetMenu(CFrameWnd *this,CMenu *param_1);
int __thiscall CFrameWnd::CFrameWnd::OnCommand(CFrameWnd *this,uint param_1,long param_2);
void __thiscall CFrameWnd::CFrameWnd::BeginModalState(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd::EndModalState(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd::PostNcDestroy(CFrameWnd *this);
int __thiscall CFrameWnd::CFrameWnd::IsFrameWnd(CFrameWnd *this);
int __thiscall CFrameWnd::CFrameWnd::Create(CFrameWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,char *param_6,ulong param_7,CCreateContext *param_8);
int __thiscall CFrameWnd::CFrameWnd::LoadFrame(CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4);
CDocument * __thiscall CFrameWnd::CFrameWnd::GetActiveDocument(CFrameWnd *this);
CFrameWnd * __thiscall CFrameWnd::CFrameWnd::GetActiveFrame(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd::GetMessageString(CFrameWnd *this,uint param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2);
void __thiscall CFrameWnd::CFrameWnd::RecalcLayout(CFrameWnd *this,int param_1);
void __thiscall CFrameWnd::CFrameWnd::ActivateFrame(CFrameWnd *this,int param_1);
void __thiscall CFrameWnd::CFrameWnd::SetMenuBarVisibility(CFrameWnd *this,ulong param_1);
ulong __thiscall CFrameWnd::CFrameWnd::GetMenuBarVisibility(CFrameWnd *this);
int __thiscall CFrameWnd::CFrameWnd::SetMenuBarState(CFrameWnd *this,ulong param_1);
ulong __thiscall CFrameWnd::CFrameWnd::GetMenuBarState(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd::OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2);
CWnd * __thiscall CFrameWnd::CFrameWnd::GetMessageBar(CFrameWnd *this);
int __thiscall CFrameWnd::CFrameWnd::NegotiateBorderSpace(CFrameWnd *this,uint param_1,tagRECT *param_2);
int __thiscall CFrameWnd::CFrameWnd::OnCreateClient(CFrameWnd *this,tagCREATESTRUCTA *param_1,CCreateContext *param_2);
void __thiscall CFrameWnd::CFrameWnd::OnUpdateFrameTitle(CFrameWnd *this,int param_1);
void __thiscall CFrameWnd::CFrameWnd::OnUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1);
HACCEL__ * __thiscall CFrameWnd::CFrameWnd::GetDefaultAccelerator(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd::DelayUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1);
void __thiscall CFrameWnd::CFrameWnd::ExitHelpMode(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd::OnShowMenuBar(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd::OnHideMenuBar(CFrameWnd *this);
void __thiscall CFrameWnd::OnSize(CFrameWnd *this,uint param_1,int param_2,int param_3);
void __thiscall CFrameWnd::OnActivate(CFrameWnd *this,uint param_1,CWnd *param_2,int param_3);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_10003ce9(void);
void __fastcall __security_check_cookie(int param_1);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_10003dc1(void);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl purecall(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_10004168(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl terminate(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_100041f5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl ___report_gsfailure(void);
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
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl except_handler4_common(void);
void __cdecl _crt_debugger_hook(int param_1);
void Unwind@100045b0(void);
void Unwind@100045bb(void);
void Unwind@100045c6(void);
void Unwind@100045d1(void);
void Unwind@100045dc(void);
void Unwind@100045e6(void);
void Unwind@100045f1(void);
void Unwind@100045fc(void);
void Unwind@10004630(void);
void Unwind@10004660(void);
void Unwind@1000466b(void);
void Unwind@10004690(void);
void Unwind@100046c0(void);
void Unwind@100046f0(void);
void Unwind@10004720(void);
void Unwind@10004750(void);
void Unwind@10004780(void);
void Unwind@100047c0(void);
void Unwind@10004800(void);

