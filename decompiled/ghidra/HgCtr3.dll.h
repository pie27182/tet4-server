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

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct CNetworkController CNetworkController, *PCNetworkController;

struct CNetworkController { // PlaceHolder Class Structure
};

typedef struct CMainFrameController CMainFrameController, *PCMainFrameController;

struct CMainFrameController { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct _s_ESTypeList ESTypeList;

typedef struct CGameLobbyController CGameLobbyController, *PCGameLobbyController;

struct CGameLobbyController { // PlaceHolder Class Structure
};

typedef struct CSwitch2LobbyController CSwitch2LobbyController, *PCSwitch2LobbyController;

struct CSwitch2LobbyController { // PlaceHolder Class Structure
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

typedef struct CLobbyStateController CLobbyStateController, *PCLobbyStateController;

struct CLobbyStateController { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct CChannelListLobbyController CChannelListLobbyController, *PCChannelListLobbyController;

struct CChannelListLobbyController { // PlaceHolder Class Structure
};

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

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef ulong DWORD;

typedef void *PVOID;

typedef ulong ULONG_PTR;

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

typedef ushort WORD;

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

typedef void *HANDLE;

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

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[34];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int INT;

typedef WORD ATOM;

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ {
    int unused;
};

typedef BYTE *PBYTE;

typedef void *LPVOID;

typedef int BOOL;

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

typedef struct exception exception, *Pexception;

struct exception { // class exception
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
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

struct length_error { // class length_error : logic_error
    struct length_error_vftable *vftablePtr;
    struct logic_error_data logic_error_data;
};

typedef struct invalid_argument_vftable invalid_argument_vftable, *Pinvalid_argument_vftable;

struct invalid_argument_vftable {
    exception * (*deleting_destructor)(void *, byte); // invalid_argument virtual function #1
    int (*vfunction2)(void *); // logic_error virtual function #2
};

typedef struct invalid_argument invalid_argument, *Pinvalid_argument;

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

struct invalid_argument { // class invalid_argument : logic_error
    struct invalid_argument_vftable *vftablePtr;
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

typedef struct CMFunctor<CNetworkController>_vftable CMFunctor<CNetworkController>_vftable, *PCMFunctor<CNetworkController>_vftable;

struct CMFunctor<CNetworkController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CNetworkController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CMFunctor<CNetworkController> CMFunctor<CNetworkController>, *PCMFunctor<CNetworkController>;

struct CMFunctor<CNetworkController> { // class CMFunctor<CNetworkController> : IFunctor
    struct CMFunctor<CNetworkController>_vftable *vftablePtr;
};

typedef struct CSwitch2LobbyController_vftable CSwitch2LobbyController_vftable, *PCSwitch2LobbyController_vftable;

struct CSwitch2LobbyController_vftable {
    bool (*OnAttached)(void *); // CSwitch2LobbyController virtual function #1
    bool (*deleting_destructor)(void *); // CSwitch2LobbyController virtual function #2
};


// WARNING! conflicting data type names: /ClassDataTypes/CSwitch2LobbyController/CSwitch2LobbyController - /CSwitch2LobbyController

typedef struct CMFunctor<CGameLobbyController>_vftable CMFunctor<CGameLobbyController>_vftable, *PCMFunctor<CGameLobbyController>_vftable;

struct CMFunctor<CGameLobbyController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGameLobbyController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CMFunctor<CGameLobbyController> CMFunctor<CGameLobbyController>, *PCMFunctor<CGameLobbyController>;

struct CMFunctor<CGameLobbyController> { // class CMFunctor<CGameLobbyController> : IFunctor
    struct CMFunctor<CGameLobbyController>_vftable *vftablePtr;
};

typedef struct CReportClickToWebController_vftable CReportClickToWebController_vftable, *PCReportClickToWebController_vftable;

struct CReportClickToWebController_vftable {
    bool (*OnAttached)(void *); // CReportClickToWebController virtual function #1
    bool (*deleting_destructor)(void *); // CReportClickToWebController virtual function #2
};

typedef struct CReportClickToWebController CReportClickToWebController, *PCReportClickToWebController;

struct CReportClickToWebController { // class CReportClickToWebController : IComponent
    struct CReportClickToWebController_vftable *vftablePtr;
};

typedef struct CMFunctor<CSwitch2LobbyController>_vftable CMFunctor<CSwitch2LobbyController>_vftable, *PCMFunctor<CSwitch2LobbyController>_vftable;

struct CMFunctor<CSwitch2LobbyController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CSwitch2LobbyController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CMFunctor<CSwitch2LobbyController> CMFunctor<CSwitch2LobbyController>, *PCMFunctor<CSwitch2LobbyController>;

struct CMFunctor<CSwitch2LobbyController> { // class CMFunctor<CSwitch2LobbyController> : IFunctor
    struct CMFunctor<CSwitch2LobbyController>_vftable *vftablePtr;
};

typedef struct CMFunctor<CChannelListLobbyController>_vftable CMFunctor<CChannelListLobbyController>_vftable, *PCMFunctor<CChannelListLobbyController>_vftable;

struct CMFunctor<CChannelListLobbyController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CChannelListLobbyController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CMFunctor<CChannelListLobbyController> CMFunctor<CChannelListLobbyController>, *PCMFunctor<CChannelListLobbyController>;

struct CMFunctor<CChannelListLobbyController> { // class CMFunctor<CChannelListLobbyController> : IFunctor
    struct CMFunctor<CChannelListLobbyController>_vftable *vftablePtr;
};

typedef struct CMFunctor<CHanChatController>_vftable CMFunctor<CHanChatController>_vftable, *PCMFunctor<CHanChatController>_vftable;

struct CMFunctor<CHanChatController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CHanChatController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CMFunctor<CHanChatController> CMFunctor<CHanChatController>, *PCMFunctor<CHanChatController>;

struct CMFunctor<CHanChatController> { // class CMFunctor<CHanChatController> : IFunctor
    struct CMFunctor<CHanChatController>_vftable *vftablePtr;
};

typedef struct CLobbyStateController_vftable CLobbyStateController_vftable, *PCLobbyStateController_vftable;

struct CLobbyStateController_vftable {
    bool (*OnAttached)(void *); // CLobbyStateController virtual function #1
    bool (*deleting_destructor)(void *); // CLobbyStateController virtual function #2
};


// WARNING! conflicting data type names: /ClassDataTypes/CLobbyStateController/CLobbyStateController - /CLobbyStateController

typedef struct CHanChatController_vftable CHanChatController_vftable, *PCHanChatController_vftable;

struct CHanChatController_vftable {
    bool (*OnAttached)(void *); // CHanChatController virtual function #1
    bool (*deleting_destructor)(void *); // CHanChatController virtual function #2
};

typedef struct CHanChatController CHanChatController, *PCHanChatController;

typedef struct CHanChatController_data CHanChatController_data, *PCHanChatController_data;

struct CHanChatController_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CHanChatController { // class CHanChatController : IComponent
    struct CHanChatController_vftable *vftablePtr;
    struct CHanChatController_data CHanChatController_data;
};

typedef struct CMFunctor<CReportClickToWebController>_vftable CMFunctor<CReportClickToWebController>_vftable, *PCMFunctor<CReportClickToWebController>_vftable;

struct CMFunctor<CReportClickToWebController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CReportClickToWebController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CMFunctor<CReportClickToWebController> CMFunctor<CReportClickToWebController>, *PCMFunctor<CReportClickToWebController>;

struct CMFunctor<CReportClickToWebController> { // class CMFunctor<CReportClickToWebController> : IFunctor
    struct CMFunctor<CReportClickToWebController>_vftable *vftablePtr;
};


// WARNING! conflicting data type names: /ClassDataTypes/CChannelListLobbyController/CChannelListLobbyController - /CChannelListLobbyController

typedef struct CChannelListLobbyController_vftable CChannelListLobbyController_vftable, *PCChannelListLobbyController_vftable;

struct CChannelListLobbyController_vftable {
    bool (*OnAttached)(void *); // CChannelListLobbyController virtual function #1
    bool (*deleting_destructor)(void *); // CChannelListLobbyController virtual function #2
};

typedef struct CMFunctor<CMainFrameController> CMFunctor<CMainFrameController>, *PCMFunctor<CMainFrameController>;

typedef struct CMFunctor<CMainFrameController>_vftable CMFunctor<CMainFrameController>_vftable, *PCMFunctor<CMainFrameController>_vftable;

struct CMFunctor<CMainFrameController> { // class CMFunctor<CMainFrameController> : IFunctor
    struct CMFunctor<CMainFrameController>_vftable *vftablePtr;
};

struct CMFunctor<CMainFrameController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CMainFrameController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CMFunctor<CLobbyStateController> CMFunctor<CLobbyStateController>, *PCMFunctor<CLobbyStateController>;

typedef struct CMFunctor<CLobbyStateController>_vftable CMFunctor<CLobbyStateController>_vftable, *PCMFunctor<CLobbyStateController>_vftable;

struct CMFunctor<CLobbyStateController> { // class CMFunctor<CLobbyStateController> : IFunctor
    struct CMFunctor<CLobbyStateController>_vftable *vftablePtr;
};

struct CMFunctor<CLobbyStateController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CLobbyStateController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CNetworkController_vftable CNetworkController_vftable, *PCNetworkController_vftable;

struct CNetworkController_vftable {
    bool (*OnAttached)(void *); // CNetworkController virtual function #1
    bool (*deleting_destructor)(void *); // CNetworkController virtual function #2
    int (*OnSocketClose)(void *, struct ISocket *, int); // CNetworkController virtual function #3
    int (*OnSocketConnect)(void *, struct ISocket *, int); // CNetworkController virtual function #4
    int (*OnSocketReceive)(void *, struct ISocket *, int); // CNetworkController virtual function #5
    int (*OnSocketSend)(void *, struct ISocket *, int); // CNetworkController virtual function #6
};

typedef struct CNetworkController_data CNetworkController_data, *PCNetworkController_data;

struct CNetworkController_data {
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
    undefined1 offset_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined4 offset_0x20;
};


// WARNING! conflicting data type names: /ClassDataTypes/CNetworkController/CNetworkController - /CNetworkController

typedef struct CMFunctor<CChannelLobbyController>_vftable CMFunctor<CChannelLobbyController>_vftable, *PCMFunctor<CChannelLobbyController>_vftable;

struct CMFunctor<CChannelLobbyController>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListLobbyController> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CChannelLobbyController> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListLobbyController> virtual function #3
};

typedef struct CMFunctor<CChannelLobbyController> CMFunctor<CChannelLobbyController>, *PCMFunctor<CChannelLobbyController>;

struct CMFunctor<CChannelLobbyController> { // class CMFunctor<CChannelLobbyController> : IFunctor
    struct CMFunctor<CChannelLobbyController>_vftable *vftablePtr;
};

typedef struct CChannelLobbyController_vftable CChannelLobbyController_vftable, *PCChannelLobbyController_vftable;

struct CChannelLobbyController_vftable {
    bool (*OnAttached)(void *); // CChannelLobbyController virtual function #1
    bool (*deleting_destructor)(void *); // CChannelLobbyController virtual function #2
    int (*Net_GetMemberList)(void *, struct IParam *); // CChannelLobbyController virtual function #3
    int (*Net_GetRoomList)(void *, struct IParam *); // CChannelLobbyController virtual function #4
    int (*Net_GetItemState)(void *, struct IParam *); // CChannelLobbyController virtual function #5
    int (*Net_GetMembershipState)(void *, struct IParam *); // CChannelLobbyController virtual function #6
    int (*Net_RoomInfo)(void *, struct IParam *); // CChannelLobbyController virtual function #7
    int (*Net_GetMemberInfo)(void *, struct IParam *); // CChannelLobbyController virtual function #8
    int (*Net_AddMember)(void *, struct IParam *); // CChannelLobbyController virtual function #9
    int (*Net_DeleteMember)(void *, struct IParam *); // CChannelLobbyController virtual function #10
    int (*Net_DetectGhost)(void *, struct IParam *); // CChannelLobbyController virtual function #11
    int (*Net_NoticeMessage)(void *, struct IParam *); // CChannelLobbyController virtual function #12
    int (*Net_Banish)(void *, struct IParam *); // CChannelLobbyController virtual function #13
    int (*Net_ReserveBanish)(void *, struct IParam *); // CChannelLobbyController virtual function #14
    int (*Net_AvatarChange)(void *, struct IParam *); // CChannelLobbyController virtual function #15
    int (*Net_InviteGameToMember)(void *, struct IParam *); // CChannelLobbyController virtual function #16
    int (*Net_ResponseInviteGame)(void *, struct IParam *); // CChannelLobbyController virtual function #17
    int (*Net_GameReport)(void *, struct IParam *); // CChannelLobbyController virtual function #18
    int (*Net_SocketClose)(void *, struct IParam *); // CChannelLobbyController virtual function #19
    int (*Net_ComplaintAgree)(void *, struct IParam *); // CChannelLobbyController virtual function #20
    int (*Evt_Alarm_ExitAlarm)(void *, struct IParam *); // CGameLobbyController virtual function #21
    int (*Evt_Alarm_ExitAlarm)(void *, struct IParam *); // CGameLobbyController virtual function #22
    int (*Net_GetShutdownTime)(void *, struct IParam *); // CChannelLobbyController virtual function #23
    int (*Net_PlayTimeLimitInfo)(void *, struct IParam *); // CChannelLobbyController virtual function #24
};

typedef struct CChannelLobbyController CChannelLobbyController, *PCChannelLobbyController;

struct CChannelLobbyController { // class CChannelLobbyController : IComponent
    struct CChannelLobbyController_vftable *vftablePtr;
};

typedef struct CMainFrameController_vftable CMainFrameController_vftable, *PCMainFrameController_vftable;

struct CMainFrameController_vftable {
    bool (*OnAttached)(void *); // CMainFrameController virtual function #1
    bool (*deleting_destructor)(void *); // CMainFrameController virtual function #2
};


// WARNING! conflicting data type names: /ClassDataTypes/CMainFrameController/CMainFrameController - /CMainFrameController

typedef struct CGameLobbyController_vftable CGameLobbyController_vftable, *PCGameLobbyController_vftable;

struct CGameLobbyController_vftable {
    bool (*OnAttached)(void *); // CGameLobbyController virtual function #1
    bool (*deleting_destructor)(void *); // CGameLobbyController virtual function #2
};


// WARNING! conflicting data type names: /ClassDataTypes/CGameLobbyController/CGameLobbyController - /CGameLobbyController

typedef struct CCfgSetting CCfgSetting, *PCCfgSetting;

struct CCfgSetting { // PlaceHolder Structure
};

typedef struct CSTLogFile CSTLogFile, *PCSTLogFile;

struct CSTLogFile { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/IFunctor - /ClassDataTypes/IFunctor/IFunctor

typedef struct CItemManager CItemManager, *PCItemManager;

struct CItemManager { // PlaceHolder Structure
};

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};

typedef struct CWinThread CWinThread, *PCWinThread;

struct CWinThread { // PlaceHolder Structure
};

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHanChatController - /ClassDataTypes/CHanChatController/CHanChatController

typedef struct CMemberData CMemberData, *PCMemberData;

struct CMemberData { // PlaceHolder Structure
};

typedef struct ISocket ISocket, *PISocket;

struct ISocket { // PlaceHolder Structure
};

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};

typedef struct CGameFinder CGameFinder, *PCGameFinder;

struct CGameFinder { // PlaceHolder Structure
};

typedef struct IGod IGod, *PIGod;

struct IGod { // PlaceHolder Structure
};

typedef struct CRoomDataList CRoomDataList, *PCRoomDataList;

struct CRoomDataList { // PlaceHolder Structure
};

typedef struct CFunctor CFunctor, *PCFunctor;

struct CFunctor { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CChannelLobbyController - /ClassDataTypes/CChannelLobbyController/CChannelLobbyController

typedef struct IXStream IXStream, *PIXStream;

struct IXStream { // PlaceHolder Structure
};

typedef struct CGlobalGameEvent CGlobalGameEvent, *PCGlobalGameEvent;

struct CGlobalGameEvent { // PlaceHolder Structure
};

typedef enum NInfoTypes {
} NInfoTypes;

typedef struct SGlobalInfo SGlobalInfo, *PSGlobalInfo;

struct SGlobalInfo { // PlaceHolder Structure
};

typedef enum NEnterRoomType {
} NEnterRoomType;

typedef struct XMemoryStream XMemoryStream, *PXMemoryStream;

struct XMemoryStream { // PlaceHolder Structure
};

typedef struct CMetpParser CMetpParser, *PCMetpParser;

struct CMetpParser { // PlaceHolder Structure
};

typedef struct CWndProperty CWndProperty, *PCWndProperty;

struct CWndProperty { // PlaceHolder Structure
};

typedef struct CWnd CWnd, *PCWnd;

struct CWnd { // PlaceHolder Structure
};

typedef struct CExitReason CExitReason, *PCExitReason;

struct CExitReason { // PlaceHolder Structure
};

typedef struct CException CException, *PCException;

struct CException { // PlaceHolder Structure
};

typedef struct CMetpParserRet CMetpParserRet, *PCMetpParserRet;

struct CMetpParserRet { // PlaceHolder Structure
};

typedef struct CPNDcurve CPNDcurve, *PCPNDcurve;

struct CPNDcurve { // PlaceHolder Structure
};

typedef struct CReportClickToWeb CReportClickToWeb, *PCReportClickToWeb;

struct CReportClickToWeb { // PlaceHolder Structure
};

typedef struct CRoomData CRoomData, *PCRoomData;

struct CRoomData { // PlaceHolder Structure
};

typedef struct IParam IParam, *PIParam;

struct IParam { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct CParam CParam, *PCParam;

struct CParam { // PlaceHolder Structure
};

typedef struct CAppRunningState CAppRunningState, *PCAppRunningState;

struct CAppRunningState { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CReportClickToWebController - /ClassDataTypes/CReportClickToWebController/CReportClickToWebController

typedef struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct bitset<64> bitset<64>, *Pbitset<64>;

struct bitset<64> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;




void __thiscall CChannelListLobbyController::~CChannelListLobbyController(CChannelListLobbyController *this,CChannelListLobbyController *param_1);
CChannelListLobbyController * __thiscall CChannelListLobbyController::operator=(CChannelListLobbyController *this,CChannelListLobbyController *param_1);
bool __thiscall CChannelListLobbyController::OnAttached(CChannelListLobbyController *this);
bool __thiscall CChannelListLobbyController::scalar_deleting_destructor(CChannelListLobbyController *this);
void __thiscall CChannelListLobbyController::~CChannelListLobbyController(CChannelListLobbyController *this);
void __thiscall CChannelListLobbyController::~CChannelListLobbyController(CChannelListLobbyController *this);
int __thiscall CChannelListLobbyController::Evt_ChannelListLobby_OnAutoSelectedChannel(CChannelListLobbyController *this,IParam *param_1);
int __thiscall CChannelListLobbyController::Evt_ChannelListLobbyView_OnRefreshBtnClicked(CChannelListLobbyController *this,IParam *param_1);
int __thiscall CChannelListLobbyController::Evt_ChannelListLobbyView_OnGrpListBtnClicked(CChannelListLobbyController *this,IParam *param_1);
int __thiscall CChannelListLobbyController::Evt_ChannelListLobbyView_OnHistoryBtnClicked(CChannelListLobbyController *this,IParam *param_1);
int __thiscall CChannelListLobbyController::Evt_ChannelListLobbyView_OnChannelLstCllicked(CChannelListLobbyController *this,IParam *param_1);
int __thiscall CChannelListLobbyController::Evt_ChannelListLobbyView_OnChannelGrpLstClicked(CChannelListLobbyController *this,IParam *param_1);
int __thiscall CChannelListLobbyController::Net_SocketConnect(CChannelListLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Evt_Alarm_ExitAlarm(CGameLobbyController *this,IParam *param_1);
int __thiscall CChannelListLobbyController::Net_GetChannelList(CChannelListLobbyController *this,IParam *param_1);
int __thiscall CChannelListLobbyController::Evt_ChannelListLobby_OnShowWindow(CChannelListLobbyController *this,IParam *param_1);
void __thiscall CMFunctor<CChannelListLobbyController>::scalar_deleting_destructor(CMFunctor<CChannelListLobbyController> *this);
undefined4 FUN_60201fe0(void);
void __thiscall CChannelLobbyController::~CChannelLobbyController(CChannelLobbyController *this,CChannelLobbyController *param_1);
bool __thiscall CChannelLobbyController::OnAttached(CChannelLobbyController *this);
bool __thiscall CChannelLobbyController::scalar_deleting_destructor(CChannelLobbyController *this);
void __thiscall CChannelLobbyController::~CChannelLobbyController(CChannelLobbyController *this);
void __thiscall CChannelLobbyController::~CChannelLobbyController(CChannelLobbyController *this);
int __thiscall CChannelLobbyController::Evt_Channel_OnActivateOn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetMemberList(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::SendGetItemState(CChannelLobbyController *this,bool param_1);
int __thiscall CChannelLobbyController::Net_GetRoomList(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetItemState(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetMembershipState(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_RoomInfo(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetMemberInfo(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_AddMember(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_DeleteMember(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::EnterRoom(CChannelLobbyController *this,int param_1,NEnterRoomType param_2);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickChangeChannelBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnDblClickRoomList(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickAutoCreateRoomBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickCreateRoomBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickJoinRoomBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickViewRoomBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickMyInfoAvatar(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickShowItemWebBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickHappyBeanBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickSPCRoom(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickMyHomepageBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickGuildCtrl(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickAddFriendBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickBuyAvatarBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickAlbumBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickSendMemoBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickInviteChnlToWebBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickSettingApplyBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_DetectGhost(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_NoticeMessage(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickDirectStartBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnGetItemState(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickInviteBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickResponseYNBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickWaitCancelBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnChangedAvatarCombo(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_Banish(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_ReserveBanish(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_AvatarChange(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_InviteGameToMember(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_OnClickExitBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_MainFrameView_OnAltF4KeyDown(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_ResponseInviteGame(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickInviteGameToChnlBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickAccuseBtnInChnl(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_Dialog_OnClickComplaintAgreeBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GameReport(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_SocketClose(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_ComplaintAgree(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickRecommendedGameBtn(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ChannelView_OnClickEventBtn1(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::EnterChannelFailure(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_Channel_SocketConnect(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_Channel_EnterChannel(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetTicket(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_PlayTimeLimitInfo(CChannelLobbyController *this,IParam *param_1);
void FUN_602065a0(void);
int __thiscall CChannelLobbyController::Net_GetClientOptions(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Evt_ClientOptionChange(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetCouponCount(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_InviteFriendMission(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GaeaChannelPromotionData(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GaeaChannelPrizeData(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetAuth(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetUserId(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetMakeUserId(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetCheckUserId(CChannelLobbyController *this,IParam *param_1);
int __thiscall CChannelLobbyController::Net_GetShutdownTime(CChannelLobbyController *this,IParam *param_1);
undefined4 * __thiscall FUN_602068a0(void *this,undefined4 *param_1);
void FUN_60206980(void);
void FUN_60206990(void);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
undefined4 __thiscall FUN_60206a70(void *this,undefined4 param_1);
void Catch@60206b23(void);
undefined1 __fastcall FUN_60206b50(undefined4 param_1,CMetpParserRet *param_2,undefined4 param_3);
undefined1 * Catch@60206bf1(void);
undefined4 __fastcall FUN_60206c10(int *param_1);
undefined4 __fastcall FUN_60206c70(int *param_1);
void FUN_60206cc0(exception *param_1);
void __thiscall CMFunctor<CChannelLobbyController>::scalar_deleting_destructor(CMFunctor<CChannelLobbyController> *this);
exception * __thiscall std::invalid_argument::scalar_deleting_destructor(invalid_argument *this,byte param_1);
void FUN_60206e80(exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
int __thiscall std::logic_error::vfunction2(logic_error *this);
void FUN_60206f40(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
void FUN_60206f80(exception *param_1);
undefined4 FUN_60206fa0(undefined4 param_1,int param_2);
undefined4 FUN_60206fd0(HINSTANCE__ *param_1,int param_2);
void __thiscall CGameLobbyController::~CGameLobbyController(CGameLobbyController *this,CGameLobbyController *param_1);
bool __thiscall CGameLobbyController::OnAttached(CGameLobbyController *this);
bool __thiscall CGameLobbyController::scalar_deleting_destructor(CGameLobbyController *this);
void __thiscall CGameLobbyController::~CGameLobbyController(CGameLobbyController *this);
void __thiscall CGameLobbyController::~CGameLobbyController(CGameLobbyController *this);
int __thiscall CGameLobbyController::Evt_GameView_OnActivateOn(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Evt_GameView_OnClickExitGameBtn(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_StartNewGame(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_AddRoomMember(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_MemberList(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_DeleteRoomMember(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_ConnectTypeError(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_ItemReserveChance(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_DetectGhost(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_GameReport(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_RoomEvent(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_ChangeViewerToPlayer(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_AvatarChange(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Evt_MainFrameView_OnAltF4KeyDown(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Evt_Dialog_OnChangedAvatarCombo(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Evt_Dialog_OnClickAccuseBtnInGame(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_ChatString(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_ReqBanishMember(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_Provoke(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_GetShutdownTime(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Evt_ClientOptionChange(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_GaeaRoomPromotionData(CGameLobbyController *this,IParam *param_1);
int __thiscall CGameLobbyController::Net_GaeaRoomPrizeData(CGameLobbyController *this,IParam *param_1);
void __thiscall CMFunctor<CChannelListLobbyController>::vfunction1(CMFunctor<CChannelListLobbyController> *this);
void __thiscall CMFunctor<CGameLobbyController>::scalar_deleting_destructor(CMFunctor<CGameLobbyController> *this);
CHanChatController * __thiscall CHanChatController::CHanChatController(CHanChatController *this,CHanChatController *param_1);
CHanChatController * __thiscall CHanChatController::operator=(CHanChatController *this,CHanChatController *param_1);
bool __thiscall CHanChatController::OnAttached(CHanChatController *this);
bool __thiscall CHanChatController::scalar_deleting_destructor(CHanChatController *this);
CHanChatController * __thiscall CHanChatController::CHanChatController(CHanChatController *this,char *param_1);
void __thiscall CHanChatController::~CHanChatController(CHanChatController *this);
int __thiscall CHanChatController::Net_HanChatString(CHanChatController *this,IParam *param_1);
int __thiscall CHanChatController::Evt_HanChatView_OnSendHanChatString(CHanChatController *this,IParam *param_1);
int __thiscall CHanChatController::Evt_HanChatView_OnChatTextColorChange(CHanChatController *this,IParam *param_1);
int __thiscall CHanChatController::Evt_ChannelLobby_OnChannelJoinComplete(CHanChatController *this,IParam *param_1);
void __thiscall CMFunctor<CHanChatController>::scalar_deleting_destructor(CMFunctor<CHanChatController> *this);
void __thiscall CMFunctor<CChannelListLobbyController>::vfunction3(CMFunctor<CChannelListLobbyController> *this,undefined4 *param_1);
void __thiscall CLobbyStateController::~CLobbyStateController(CLobbyStateController *this,CLobbyStateController *param_1);
void __thiscall CLobbyStateController::~CLobbyStateController(CLobbyStateController *this);
void __thiscall CLobbyStateController::~CLobbyStateController(CLobbyStateController *this);
bool __thiscall CLobbyStateController::OnAttached(CLobbyStateController *this);
bool __thiscall CLobbyStateController::scalar_deleting_destructor(CLobbyStateController *this);
int __thiscall CLobbyStateController::Evt_LobbyState_OnStateChanged(CLobbyStateController *this,IParam *param_1);
int __thiscall CLobbyStateController::Evt_MainFrame_OnDestroy(CLobbyStateController *this,IParam *param_1);
void __thiscall CMFunctor<CLobbyStateController>::scalar_deleting_destructor(CMFunctor<CLobbyStateController> *this);
void __thiscall CMainFrameController::~CMainFrameController(CMainFrameController *this,CMainFrameController *param_1);
void __thiscall CMainFrameController::~CMainFrameController(CMainFrameController *this);
void __thiscall CMainFrameController::~CMainFrameController(CMainFrameController *this);
bool __thiscall CMainFrameController::OnAttached(CMainFrameController *this);
bool __thiscall CMainFrameController::scalar_deleting_destructor(CMainFrameController *this);
int __thiscall CMainFrameController::Evt_MainFrameView_OnClickExitBtn(CMainFrameController *this,IParam *param_1);
int __thiscall CMainFrameController::Evt_MainFrame_OnDestroy(CMainFrameController *this,IParam *param_1);
void __thiscall CMFunctor<CMainFrameController>::scalar_deleting_destructor(CMFunctor<CMainFrameController> *this);
CNetworkController * __thiscall CNetworkController::CNetworkController(CNetworkController *this,CNetworkController *param_1);
CNetworkController * __thiscall CNetworkController::operator=(CNetworkController *this,CNetworkController *param_1);
bool __thiscall CNetworkController::OnAttached(CNetworkController *this);
bool __thiscall CNetworkController::scalar_deleting_destructor(CNetworkController *this);
CNetworkController * __thiscall CNetworkController::CNetworkController(CNetworkController *this,char *param_1);
void __thiscall CNetworkController::~CNetworkController(CNetworkController *this);
int __thiscall CNetworkController::Evt_SetNetworkMessage(CNetworkController *this,IParam *param_1);
undefined4 Catch@60208c47(void);
bool __thiscall CNetworkController::CreateNotifyWnd(CNetworkController *this);
int __thiscall CNetworkController::OnSocketClose(CNetworkController *this,ISocket *param_1,int param_2);
undefined4 Catch@60208dcd(void);
int __thiscall CNetworkController::OnSocketConnect(CNetworkController *this,ISocket *param_1,int param_2);
undefined4 Catch@60208ead(void);
int __thiscall CNetworkController::OnSocketReceive(CNetworkController *this,ISocket *param_1,int param_2);
undefined * Catch@602091ef(void);
int __thiscall CNetworkController::OnSocketSend(CNetworkController *this,ISocket *param_1,int param_2);
undefined4 Catch@602092dd(void);
LRESULT FUN_60209300(HWND param_1,UINT param_2,uint param_3,int param_4);
void __thiscall CMFunctor<CNetworkController>::scalar_deleting_destructor(CMFunctor<CNetworkController> *this);
CReportClickToWeb * __thiscall CReportClickToWeb::CReportClickToWeb(CReportClickToWeb *this,CReportClickToWeb *param_1);
CReportClickToWeb * __thiscall CReportClickToWeb::operator=(CReportClickToWeb *this,CReportClickToWeb *param_1);
CReportClickToWeb * __cdecl ReportClickToWeb(void);
CReportClickToWeb * __thiscall CReportClickToWeb::CReportClickToWeb(CReportClickToWeb *this);
void __thiscall CReportClickToWeb::~CReportClickToWeb(CReportClickToWeb *this);
int __thiscall CReportClickToWeb::ReportToWeb(CReportClickToWeb *this,char *param_1);
void __thiscall CReportClickToWeb::SetURL(CReportClickToWeb *this,char *param_1);
void __thiscall CReportClickToWebController::~CReportClickToWebController(CReportClickToWebController *this,CReportClickToWebController *param_1);
bool __thiscall CReportClickToWebController::OnAttached(CReportClickToWebController *this);
bool __thiscall CReportClickToWebController::scalar_deleting_destructor(CReportClickToWebController *this);
CReportClickToWebController * __thiscall CReportClickToWebController::CReportClickToWebController(CReportClickToWebController *this);
void __thiscall CReportClickToWebController::~CReportClickToWebController(CReportClickToWebController *this);
int __thiscall CReportClickToWebController::Evt_ChannelView_OnClickRecommendedGameBtn(CReportClickToWebController *this,IParam *param_1);
int __thiscall CReportClickToWebController::Evt_MainFrameView_OnClickExitBtn(CReportClickToWebController *this,IParam *param_1);
void __thiscall CMFunctor<CReportClickToWebController>::scalar_deleting_destructor(CMFunctor<CReportClickToWebController> *this);
CPNDcurve * __thiscall CPNDcurve::operator=(CPNDcurve *this,CPNDcurve *param_1);
void __thiscall CSwitch2LobbyController::~CSwitch2LobbyController(CSwitch2LobbyController *this,CSwitch2LobbyController *param_1);
bool __thiscall CSwitch2LobbyController::OnAttached(CSwitch2LobbyController *this);
bool __thiscall CSwitch2LobbyController::scalar_deleting_destructor(CSwitch2LobbyController *this);
void __thiscall CSwitch2LobbyController::~CSwitch2LobbyController(CSwitch2LobbyController *this);
void __thiscall CSwitch2LobbyController::~CSwitch2LobbyController(CSwitch2LobbyController *this);
int __thiscall CSwitch2LobbyController::EVT_Switch2_OnActivateOn(CSwitch2LobbyController *this,IParam *param_1);
int __thiscall CSwitch2LobbyController::EVT_Switch2_OnActivateOff(CSwitch2LobbyController *this,IParam *param_1);
int __thiscall CSwitch2LobbyController::Net_Game_SocketConnect(CSwitch2LobbyController *this,IParam *param_1);
int __thiscall CSwitch2LobbyController::Net_Channel_CreateRoom(CSwitch2LobbyController *this,IParam *param_1);
int __thiscall CSwitch2LobbyController::Net_Channel_JoinRoom(CSwitch2LobbyController *this,IParam *param_1);
int __thiscall CSwitch2LobbyController::Net_Channel_AutoEnterRoom(CSwitch2LobbyController *this,IParam *param_1);
void __thiscall CMFunctor<CSwitch2LobbyController>::scalar_deleting_destructor(CMFunctor<CSwitch2LobbyController> *this);
void __fastcall FUN_6020a640(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5);
IGod * __cdecl God(void);
void __cdecl operator_delete(void *param_1);
int AfxMessageBox(char *param_1,uint param_2,uint param_3);
CWinThread * AfxGetThread(void);
void * __cdecl operator_new(uint param_1);
AFX_MODULE_STATE * AfxGetModuleState(void);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
void __thiscall CException::Delete(CException *this);
void __fastcall __security_check_cookie(int param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
char * __thiscall std::exception::what(exception *this);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_6020a79a(void);
int __cdecl _atexit(_func_4879 *param_1);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_6020ab3a(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_6020ac11(void);
void __cdecl ___report_gsfailure(void);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_6020ad9d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __cdecl initterm(void);
void __cdecl initterm_e(void);
void __cdecl _amsg_exit(int param_1);
int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
void __cdecl ___security_init_cookie(void);
void __cdecl terminate(void);
void __cdecl _crt_debugger_hook(int param_1);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl except_handler4_common(void);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void Unwind@6020b050(void);
void Unwind@6020b059(void);
void Unwind@6020b080(void);
void Unwind@6020b0b0(void);
void Unwind@6020b0e0(void);
void Unwind@6020b120(void);
void Unwind@6020b129(void);
void Unwind@6020b135(void);
void Unwind@6020b170(void);
void Unwind@6020b1b0(void);
void Unwind@6020b210(void);
void Unwind@6020b21c(void);
void Unwind@6020b260(void);
void Unwind@6020b2a0(void);
void Unwind@6020b2f0(void);
void Unwind@6020b2f9(void);
void Unwind@6020b320(void);
void Unwind@6020b32c(void);
void Unwind@6020b338(void);
void Unwind@6020b380(void);
void Unwind@6020b38c(void);
void Unwind@6020b398(void);
void Unwind@6020b3a4(void);
void Unwind@6020b3e0(void);
void Unwind@6020b420(void);
void Unwind@6020b42c(void);
void Unwind@6020b470(void);
void Unwind@6020b4b0(void);
void Unwind@6020b4bc(void);
void Unwind@6020b4c8(void);
void Unwind@6020b510(void);
void Unwind@6020b550(void);
void Unwind@6020b55c(void);
void Unwind@6020b568(void);
void Unwind@6020b574(void);
void Unwind@6020b5b0(void);
void Unwind@6020b5bc(void);
void Unwind@6020b5c8(void);
void Unwind@6020b610(void);
void Unwind@6020b61c(void);
void Unwind@6020b660(void);
void Unwind@6020b6a0(void);
void Unwind@6020b6d0(void);
void Unwind@6020b6dc(void);
void Unwind@6020b6e8(void);
void Unwind@6020b730(void);
void Unwind@6020b760(void);
void Unwind@6020b7a0(void);
void Unwind@6020b7ac(void);
void Unwind@6020b7b8(void);
void Unwind@6020b7c4(void);
void Unwind@6020b7d0(void);
void Unwind@6020b7dc(void);
void Unwind@6020b820(void);
void Unwind@6020b829(void);
void Unwind@6020b832(void);
void Unwind@6020b860(void);
void Unwind@6020b869(void);
void Unwind@6020b890(void);
void Unwind@6020b89c(void);
void Unwind@6020b8e0(void);
void Unwind@6020b8ec(void);
void Unwind@6020b930(void);
void Unwind@6020b960(void);
void Unwind@6020b96c(void);
void Unwind@6020b990(void);
void Unwind@6020b9d0(void);
void Unwind@6020b9d9(void);
void Unwind@6020ba00(void);
void Unwind@6020ba30(void);
void Unwind@6020ba3c(void);
void Unwind@6020ba48(void);
void Unwind@6020ba54(void);
void Unwind@6020ba60(void);
void Unwind@6020ba6c(void);
void Unwind@6020ba78(void);
void Unwind@6020bac0(void);
void Unwind@6020bacc(void);
void Unwind@6020bad8(void);
void Unwind@6020bb20(void);
void Unwind@6020bb29(void);
void Unwind@6020bb32(void);
void Unwind@6020bb60(void);
void Unwind@6020bb6c(void);
void Unwind@6020bb78(void);
void Unwind@6020bb84(void);
void Unwind@6020bb90(void);
void Unwind@6020bbd0(void);
void FUN_6020bc30(void);
void FUN_6020bd70(void);
void FUN_6020bda0(void);
void FUN_6020be10(void);

