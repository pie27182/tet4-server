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

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

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

typedef struct CBaseApp CBaseApp, *PCBaseApp;

struct CBaseApp { // PlaceHolder Class Structure
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

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef ulong DWORD;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef char CHAR;

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

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

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef long HRESULT;

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

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef DWORD *LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef BYTE *PBYTE;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef uint UINT;

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

typedef char *va_list;

typedef struct CBaseLobbyModel CBaseLobbyModel, *PCBaseLobbyModel;

typedef struct CBaseLobbyModel_vftable CBaseLobbyModel_vftable, *PCBaseLobbyModel_vftable;

struct CBaseLobbyModel { // class CBaseLobbyModel : IComponent
    struct CBaseLobbyModel_vftable *vftablePtr;
};

struct CBaseLobbyModel_vftable {
    bool (*OnAttached)(void *); // CBaseLobbyModel virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyModel virtual function #2
    CBaseLobbyModel * (*deleting_destructor)(void *, byte); // CBaseLobbyModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CBaseLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CBaseLobbyModel virtual function #5
};

typedef struct CObject CObject, *PCObject;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CHanChatModel CHanChatModel, *PCHanChatModel;

typedef struct CHanChatModel_vftable CHanChatModel_vftable, *PCHanChatModel_vftable;

struct CHanChatModel { // class CHanChatModel : IComponent
    struct CHanChatModel_vftable *vftablePtr;
};

struct CHanChatModel_vftable {
    bool (*OnAttached)(void *); // CHanChatModel virtual function #1
    bool (*OnDetached)(void *); // CHanChatModel virtual function #2
    CHanChatModel * (*deleting_destructor)(void *, byte); // CHanChatModel virtual function #3
};

typedef struct IComponent IComponent, *PIComponent;

struct IComponent { // class IComponent
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CGameLobbyModel_vftable CGameLobbyModel_vftable, *PCGameLobbyModel_vftable;

struct CGameLobbyModel_vftable {
    bool (*OnAttached)(void *); // CGameLobbyModel virtual function #1
    bool (*OnDetached)(void *); // CGameLobbyModel virtual function #2
    CBaseLobbyModel * (*deleting_destructor)(void *, byte); // CGameLobbyModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CGameLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CGameLobbyModel virtual function #5
    int (*GameReport_RefreshPlayerInfoList)(void *, struct IParam *); // CGameLobbyModel virtual function #6
    int (*GameReport_RefreshPlayerInfo)(void *, int, struct IParam *, struct CMemberData *); // CGameLobbyModel virtual function #7
    int (*GameReport_RefreshMyInfo)(void *); // CGameLobbyModel virtual function #8
    bool (*CheckBanishInfo)(void *); // CGameLobbyModel virtual function #9
};

typedef struct CGameLobbyModel CGameLobbyModel, *PCGameLobbyModel;

struct CGameLobbyModel { // class CGameLobbyModel : CBaseLobbyModel
    struct CGameLobbyModel_vftable *vftablePtr;
};

typedef struct CItemWebDialog_vftable1 CItemWebDialog_vftable1, *PCItemWebDialog_vftable1;

struct CItemWebDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CItemWebDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CItemWebDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CItemWebDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CItemWebDialog_vftable0 CItemWebDialog_vftable0, *PCItemWebDialog_vftable0;

struct CItemWebDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CItemWebDialog virtual function #1
    CItemWebDialog * (*deleting_destructor)(void *, byte); // CItemWebDialog virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CItemWebDialog virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CWnd virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CItemWebDialog virtual function #18
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CItemWebDialog virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CDialogRoot virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CDialog virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CDialog virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CDialog virtual function #81
    void (*vfunction82)(void *, ushort, struct CWnd *); // CItemWebDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CDialogRoot virtual function #89
    void (*OnCancel)(void *); // CDialogRoot virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CItemWebDialog virtual function #92
    void (*GetDialogData)(void *, struct CParam *); // CDialogRoot virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CItemWebDialog virtual function #95
    void (*Draw)(void *, struct CDC *); // CDialogRoot virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CDialogRoot virtual function #97
    bool (*OnInitControl)(void *); // CItemWebDialog virtual function #98
};

typedef struct CItemWebDialog CItemWebDialog, *PCItemWebDialog;

struct CItemWebDialog { // class CItemWebDialog : CDialogRoot
    struct CItemWebDialog_vftable0 *vftablePtr;
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
    struct CItemWebDialog_vftable1 *vftablePtr;
};

typedef struct CAccuseUserDlg CAccuseUserDlg, *PCAccuseUserDlg;

typedef struct CAccuseUserDlg_vftable0 CAccuseUserDlg_vftable0, *PCAccuseUserDlg_vftable0;

typedef struct CAccuseUserDlg_vftable1 CAccuseUserDlg_vftable1, *PCAccuseUserDlg_vftable1;

struct CAccuseUserDlg { // class CAccuseUserDlg : CDialogRoot
    struct CAccuseUserDlg_vftable0 *vftablePtr;
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
    struct CAccuseUserDlg_vftable1 *vftablePtr;
};

struct CAccuseUserDlg_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CAccuseUserDlg * (*deleting_destructor)(void *, byte); // CAccuseUserDlg virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CAccuseUserDlg virtual function #13
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CAccuseUserDlg virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CDialogRoot virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CDialog virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CDialog virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CDialog virtual function #81
    void (*vfunction82)(void *, ushort, struct CWnd *); // CItemWebDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CDialogRoot virtual function #89
    void (*OnCancel)(void *); // CDialogRoot virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CAccuseUserDlg virtual function #92
    void (*GetDialogData)(void *, struct CParam *); // CDialogRoot virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseUserDlg virtual function #95
    void (*Draw)(void *, struct CDC *); // CAccuseUserDlg virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CDialogRoot virtual function #97
    bool (*OnInitControl)(void *); // CAccuseUserDlg virtual function #98
};

struct CAccuseUserDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CAccuseUserDlg virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CAccuseUserDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAccuseUserDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CAlarm2Dialog_vftable1 CAlarm2Dialog_vftable1, *PCAlarm2Dialog_vftable1;

struct CAlarm2Dialog_vftable1 {
    void (*vfunction1)(void *, byte); // CAlarm2Dialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CAlarm2Dialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAlarm2Dialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CAlarm2Dialog_vftable0 CAlarm2Dialog_vftable0, *PCAlarm2Dialog_vftable0;

struct CAlarm2Dialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CAlarm2Dialog * (*deleting_destructor)(void *, byte); // CAlarm2Dialog virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CAlarm2Dialog virtual function #13
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CAlarm2Dialog virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CDialogRoot virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CDialog virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CDialog virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CDialog virtual function #81
    void (*vfunction82)(void *, ushort, struct CWnd *); // CItemWebDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CAlarm2Dialog virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CDialogRoot virtual function #89
    void (*OnCancel)(void *); // CDialogRoot virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CAlarm2Dialog virtual function #92
    void (*GetDialogData)(void *, struct CParam *); // CDialogRoot virtual function #93
    int (*ShowModaless)(void *, bool); // CAlarm2Dialog virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAlarm2Dialog virtual function #95
    void (*Draw)(void *, struct CDC *); // CAlarm2Dialog virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CDialogRoot virtual function #97
    bool (*OnInitControl)(void *); // CAlarm2Dialog virtual function #98
    void (*SetNormalMode)(void *); // CAlarm2Dialog virtual function #99
    void (*SetUPPMode)(void *); // CAlarm2Dialog virtual function #100
};

typedef struct CAlarm2Dialog CAlarm2Dialog, *PCAlarm2Dialog;

struct CAlarm2Dialog { // class CAlarm2Dialog : CDialogRoot
    struct CAlarm2Dialog_vftable0 *vftablePtr;
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
    struct CAlarm2Dialog_vftable1 *vftablePtr;
};

typedef struct CItemManager CItemManager, *PCItemManager;

typedef struct CItemManager_vftable CItemManager_vftable, *PCItemManager_vftable;

struct CItemManager { // class CItemManager
    struct CItemManager_vftable *vftablePtr;
};

struct CItemManager_vftable {
    CItemManager * (*deleting_destructor)(void *, byte); // CItemManager virtual function #1
    bool (*SetAllElementsState)(void *); // CItemManager virtual function #2
    bool (*IsItemAvailable)(void *, int); // CItemManager virtual function #3
    void (*Clear)(void *); // CItemManager virtual function #4
    bool (*AddItem)(void *, char *, struct CItem *); // CItemManager virtual function #5
    void (*DelItem)(void *, char *, bool); // CItemManager virtual function #6
    CItem * (*GetItem)(void *, char *); // CItemManager virtual function #7
    void (*AddTryCount)(void *); // CItemManager virtual function #8
    int (*GetTryCount)(void *); // CItemManager virtual function #9
    void (*ResetTryCount)(void *); // CItemManager virtual function #10
    void (*DumpAllItems)(void *); // CItemManager virtual function #11
    void (*SetItemState)(void *, int, struct CItem *); // CItemManager virtual function #12
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

typedef struct CShutdownExitDialog_vftable1 CShutdownExitDialog_vftable1, *PCShutdownExitDialog_vftable1;

struct CShutdownExitDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CShutdownExitDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CShutdownExitDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CShutdownExitDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CShutdownExitDialog_vftable0 CShutdownExitDialog_vftable0, *PCShutdownExitDialog_vftable0;

struct CShutdownExitDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CShutdownExitDialog virtual function #1
    CShutdownExitDialog * (*deleting_destructor)(void *, byte); // CShutdownExitDialog virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CShutdownExitDialog virtual function #13
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CShutdownExitDialog virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CDialogRoot virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CDialog virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CDialog virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CDialog virtual function #81
    void (*vfunction82)(void *, ushort, struct CWnd *); // CItemWebDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CDialogRoot virtual function #89
    void (*OnCancel)(void *); // CDialogRoot virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CShutdownExitDialog virtual function #92
    void (*GetDialogData)(void *, struct CParam *); // CDialogRoot virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CDialogRoot virtual function #95
    void (*Draw)(void *, struct CDC *); // CShutdownExitDialog virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CDialogRoot virtual function #97
    bool (*OnInitControl)(void *); // CShutdownExitDialog virtual function #98
};

typedef struct CShutdownExitDialog CShutdownExitDialog, *PCShutdownExitDialog;

struct CShutdownExitDialog { // class CShutdownExitDialog : CDialogRoot
    struct CShutdownExitDialog_vftable0 *vftablePtr;
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
    struct CShutdownExitDialog_vftable1 *vftablePtr;
};

typedef struct CChannelListLobbyModel CChannelListLobbyModel, *PCChannelListLobbyModel;

typedef struct CChannelListLobbyModel_vftable CChannelListLobbyModel_vftable, *PCChannelListLobbyModel_vftable;

struct CChannelListLobbyModel { // class CChannelListLobbyModel : IComponent
    struct CChannelListLobbyModel_vftable *vftablePtr;
};

struct CChannelListLobbyModel_vftable {
    bool (*OnAttached)(void *); // CChannelListLobbyModel virtual function #1
    bool (*OnDetached)(void *); // CChannelListLobbyModel virtual function #2
    CChannelListLobbyModel * (*deleting_destructor)(void *, byte); // CChannelListLobbyModel virtual function #3
    void (*_SelectChannel_Tetris)(void *); // CChannelListLobbyModel virtual function #4
    int (*ConnectCdsServer)(void *); // CChannelListLobbyModel virtual function #5
};

typedef struct CGameWarpModel_vftable CGameWarpModel_vftable, *PCGameWarpModel_vftable;

struct CGameWarpModel_vftable {
    bool (*OnAttached)(void *); // CGameWarpModel virtual function #1
    bool (*OnDetached)(void *); // CGameWarpModel virtual function #2
    CBaseLobbyModel * (*deleting_destructor)(void *, byte); // CGameWarpModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CBaseLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CBaseLobbyModel virtual function #5
    void (*RunHanStart)(void *, char *); // CGameWarpModel virtual function #6
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> (*_GetRecommenedGameID)(void *, struct IParam *); // CGameWarpModel virtual function #7
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> (*_GetChannelID)(void *, struct IParam *, char *); // CGameWarpModel virtual function #8
    int (*_OpenGamePage)(void *, int, char *); // CGameWarpModel virtual function #9
};

typedef struct CGameWarpModel CGameWarpModel, *PCGameWarpModel;

struct CGameWarpModel { // class CGameWarpModel : CBaseLobbyModel
    struct CGameWarpModel_vftable *vftablePtr;
};

typedef struct CChannelListCtrl CChannelListCtrl, *PCChannelListCtrl;

typedef struct CChannelListCtrl_vftable0 CChannelListCtrl_vftable0, *PCChannelListCtrl_vftable0;

typedef struct CChannelListCtrl_vftable1 CChannelListCtrl_vftable1, *PCChannelListCtrl_vftable1;

struct CChannelListCtrl { // class CChannelListCtrl : CListCtrlEx
    struct CChannelListCtrl_vftable0 *vftablePtr;
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
    struct CChannelListCtrl_vftable1 *vftablePtr;
};

struct CChannelListCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CChannelListCtrl virtual function #1
    CChannelListCtrl * (*deleting_destructor)(void *, byte); // CChannelListCtrl virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CChannelListCtrl virtual function #13
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
    void (*vfunction3)(void *); // CListCtrlEx virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CListCtrl virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CChannelListCtrl virtual function #82
    int (*OnSortItem)(void *, ulong, ulong, int, int); // CListCtrlEx virtual function #83
    bool (*DoListCtrlSetting)(void *); // CChannelListCtrl virtual function #84
    void (*GetColumnFormatString)(void *, int, char *, char *, int); // CListCtrlEx virtual function #85
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CListCtrlEx virtual function #86
};

struct CChannelListCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CChannelListCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CListCtrlEx virtual function #2
    bool (*DestroyControl)(void *); // CChannelListCtrl virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CChannelListCtrl virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
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


// WARNING! conflicting data type names: /ClassDataTypes/CBaseApp/CBaseApp - /CBaseApp

typedef struct CBaseApp_vftable CBaseApp_vftable, *PCBaseApp_vftable;

struct CBaseApp_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWinApp virtual function #1
    CWinApp * (*deleting_destructor)(void *, byte); // CBaseApp virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
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
    int (*InitInstance)(void *); // CBaseApp virtual function #23
    int (*Run)(void *); // CWinApp virtual function #24
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWinThread virtual function #25
    int (*PumpMessage)(void *); // CWinThread virtual function #26
    int (*OnIdle)(void *, long); // CBaseApp virtual function #27
    int (*IsIdleMessage)(void *, struct tagMSG *); // CWinThread virtual function #28
    int (*ExitInstance)(void *); // CBaseApp virtual function #29
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
    bool (*LoadDefaultObjects)(void *); // CBaseApp virtual function #50
    bool (*LoadViewObjects)(void *); // CBaseApp virtual function #51
    void (*RegWork_LoadFullScreenSetting)(void *); // CBaseApp virtual function #52
    void (*RegWork_SaveFullScreenSetting)(void *); // CBaseApp virtual function #53
    void (*RegWork_RegisterNotifyWnd)(void *); // CBaseApp virtual function #54
    void (*RegWork_EraseNotifyWnd)(void *); // CBaseApp virtual function #55
    void (*CheckTestMode)(void *); // CBaseApp virtual function #56
    int (*HookConfigLoader)(void *); // CBaseApp virtual function #57
    int (*HookConfigLoader)(void *); // CBaseApp virtual function #58
    int (*HookConfigLoader)(void *); // CBaseApp virtual function #59
    void (*CheckBipLog)(void *); // CBaseApp virtual function #60
    int (*_CheckCmdString)(void *); // CBaseApp virtual function #61
    int (*_CheckMutex)(void *); // CBaseApp virtual function #62
    void (*_CheckPlatformConverter)(void *); // CBaseApp virtual function #63
};

typedef struct CBaseApp_data CBaseApp_data, *PCBaseApp_data;

struct CBaseApp_data {
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
};

typedef struct CMessengerModel_vftable CMessengerModel_vftable, *PCMessengerModel_vftable;

struct CMessengerModel_vftable {
    bool (*OnAttached)(void *); // CMessengerModel virtual function #1
    bool (*OnDetached)(void *); // CMessengerModel virtual function #2
    CBaseLobbyModel * (*deleting_destructor)(void *, byte); // CMessengerModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CBaseLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CBaseLobbyModel virtual function #5
};

typedef struct CMessengerModel CMessengerModel, *PCMessengerModel;

struct CMessengerModel { // class CMessengerModel : CBaseLobbyModel
    struct CMessengerModel_vftable *vftablePtr;
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CCfgSetting_vftable CCfgSetting_vftable, *PCCfgSetting_vftable;

struct CCfgSetting_vftable {
    CCfgSetting * (*deleting_destructor)(void *, byte); // CCfgSetting virtual function #1
    int (*CheckFCName)(void *, char *, int); // CCfgSetting virtual function #2
    int (*SetAdvertiseCfg)(void *, char *, char *); // CCfgSetting virtual function #3
};

typedef struct CCfgSetting CCfgSetting, *PCCfgSetting;

struct CCfgSetting { // class CCfgSetting
    struct CCfgSetting_vftable *vftablePtr;
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

typedef struct CGameLobbyView_vftable CGameLobbyView_vftable, *PCGameLobbyView_vftable;

struct CGameLobbyView { // class CGameLobbyView : CBaseLobbyView
    struct CGameLobbyView_vftable *vftablePtr;
};

struct CGameLobbyView_vftable {
    bool (*OnAttached)(void *); // CGameLobbyView virtual function #1
    bool (*OnDetached)(void *); // CGameLobbyView virtual function #2
    CGameLobbyView * (*deleting_destructor)(void *, byte); // CGameLobbyView virtual function #3
    int (*Msg_GetWindow)(void *, struct IParam *); // CBaseLobbyView virtual function #4
    int (*Msg_UpdateUIFromXML)(void *, struct IParam *); // CGameLobbyView virtual function #5
    int (*OnClickExitGameBtn)(void *, struct IParam *); // CGameLobbyView virtual function #6
};

typedef struct CControlBase CControlBase, *PCControlBase;

struct CControlBase { // class CControlBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CDialog CDialog, *PCDialog;

typedef struct CWnd CWnd, *PCWnd;

struct CCmdTarget { // class CCmdTarget : CObject
    struct CObject CObject;
};

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CDialog { // class CDialog : CWnd
    struct CWnd CWnd;
};

typedef struct CDialogRoot CDialogRoot, *PCDialogRoot;

struct CDialog { // class CDialog : CWnd
    struct CWnd CWnd;
};

struct CControlBase { // class CControlBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CDialogRoot { // class CDialogRoot : CDialog : CControlBase
    struct CDialog CDialog;
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
    struct CControlBase CControlBase;
};

typedef struct CChannelRoomCreateDialog_vftable1 CChannelRoomCreateDialog_vftable1, *PCChannelRoomCreateDialog_vftable1;

struct CChannelRoomCreateDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CChannelRoomCreateDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CChannelRoomCreateDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CChannelRoomCreateDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CChannelRoomCreateDialog_vftable0 CChannelRoomCreateDialog_vftable0, *PCChannelRoomCreateDialog_vftable0;

struct CChannelRoomCreateDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CChannelRoomCreateDialog virtual function #1
    CChannelRoomCreateDialog * (*deleting_destructor)(void *, byte); // CChannelRoomCreateDialog virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CChannelRoomCreateDialog virtual function #13
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CChannelRoomCreateDialog virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CDialogRoot virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CDialog virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CDialog virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CDialog virtual function #81
    void (*vfunction82)(void *, ushort, struct CWnd *); // CItemWebDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CChannelRoomCreateDialog virtual function #89
    void (*OnCancel)(void *); // CChannelRoomCreateDialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CChannelRoomCreateDialog virtual function #92
    void (*GetDialogData)(void *, struct CParam *); // CDialogRoot virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CChannelRoomCreateDialog virtual function #95
    void (*Draw)(void *, struct CDC *); // CChannelRoomCreateDialog virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CDialogRoot virtual function #97
    bool (*OnInitControl)(void *); // CChannelRoomCreateDialog virtual function #98
};

typedef struct CChannelRoomCreateDialog CChannelRoomCreateDialog, *PCChannelRoomCreateDialog;

struct CChannelRoomCreateDialog { // class CChannelRoomCreateDialog : CDialogRoot
    struct CChannelRoomCreateDialog_vftable0 *vftablePtr;
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
    struct CChannelRoomCreateDialog_vftable1 *vftablePtr;
};

typedef struct CChannelLobbyView_vftable CChannelLobbyView_vftable, *PCChannelLobbyView_vftable;

struct CChannelLobbyView_vftable {
    bool (*OnAttached)(void *); // CChannelLobbyView virtual function #1
    bool (*OnDetached)(void *); // CChannelLobbyView virtual function #2
    CChannelLobbyView * (*deleting_destructor)(void *, byte); // CChannelLobbyView virtual function #3
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

typedef struct CChannelLobbyView CChannelLobbyView, *PCChannelLobbyView;

struct CChannelLobbyView { // class CChannelLobbyView : CBaseLobbyView
    struct CChannelLobbyView_vftable *vftablePtr;
};

typedef struct CShutdownNoticeDialog_vftable0 CShutdownNoticeDialog_vftable0, *PCShutdownNoticeDialog_vftable0;

struct CShutdownNoticeDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CShutdownNoticeDialog virtual function #1
    CShutdownNoticeDialog * (*deleting_destructor)(void *, byte); // CShutdownNoticeDialog virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CShutdownNoticeDialog virtual function #13
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CShutdownNoticeDialog virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CDialogRoot virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CDialog virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CDialog virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CDialog virtual function #81
    void (*vfunction82)(void *, ushort, struct CWnd *); // CItemWebDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CDialogRoot virtual function #89
    void (*OnCancel)(void *); // CDialogRoot virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CShutdownNoticeDialog virtual function #92
    void (*GetDialogData)(void *, struct CParam *); // CDialogRoot virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CDialogRoot virtual function #95
    void (*Draw)(void *, struct CDC *); // CShutdownNoticeDialog virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CDialogRoot virtual function #97
    bool (*OnInitControl)(void *); // CShutdownNoticeDialog virtual function #98
};

typedef struct CShutdownNoticeDialog_vftable1 CShutdownNoticeDialog_vftable1, *PCShutdownNoticeDialog_vftable1;

struct CShutdownNoticeDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CShutdownNoticeDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CShutdownNoticeDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CShutdownNoticeDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CShutdownNoticeDialog CShutdownNoticeDialog, *PCShutdownNoticeDialog;

struct CShutdownNoticeDialog { // class CShutdownNoticeDialog : CDialogRoot
    struct CShutdownNoticeDialog_vftable0 *vftablePtr;
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
    struct CShutdownNoticeDialog_vftable1 *vftablePtr;
};

typedef struct CMemberData CMemberData, *PCMemberData;

typedef struct CMemberData_vftable CMemberData_vftable, *PCMemberData_vftable;

struct CMemberData { // class CMemberData
    struct CMemberData_vftable *vftablePtr;
};

struct CMemberData_vftable {
    CMemberData * (*deleting_destructor)(void *, byte); // CMemberData virtual function #1
    void (*DrawAvata)(void *, struct HDC__ *, int, int, int); // CMemberData virtual function #2
};

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinThread { // class CWinThread : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CWinApp { // class CWinApp : CWinThread
    struct CWinThread CWinThread;
};

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

typedef struct CListCtrl CListCtrl, *PCListCtrl;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CListCtrl { // class CListCtrl : CWnd
    struct CWnd CWnd;
};

typedef struct CChannelLobbyModel_vftable CChannelLobbyModel_vftable, *PCChannelLobbyModel_vftable;

struct CChannelLobbyModel_vftable {
    bool (*OnAttached)(void *); // CChannelLobbyModel virtual function #1
    bool (*OnDetached)(void *); // CChannelLobbyModel virtual function #2
    CBaseLobbyModel * (*deleting_destructor)(void *, byte); // CChannelLobbyModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CChannelLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CChannelLobbyModel virtual function #5
    int (*Msg_HannotiCommonCode)(void *, struct IParam *); // CChannelLobbyModel virtual function #6
    int (*Msg_StartNickNameProcess)(void *, struct IParam *); // CChannelLobbyModel virtual function #7
    int (*Msg_EndNickNameProcess)(void *, struct IParam *); // CChannelLobbyModel virtual function #8
    int (*Msg_GetMakeUserId)(void *, struct IParam *); // CChannelLobbyModel virtual function #9
    int (*Msg_GetCheckUserId)(void *, struct IParam *); // CChannelLobbyModel virtual function #10
    int (*SetRoomInfo)(void *, struct IParam *, bool, int); // CChannelLobbyModel virtual function #11
    int (*Msg_SetCreateRoomOption)(void *, struct IParam *); // CChannelLobbyModel virtual function #12
    int (*Msg_SetCreateRoomReturn)(void *, struct IParam *); // CChannelLobbyModel virtual function #13
    int (*Msg_SetRoomPassWordReturn)(void *, struct IParam *); // CChannelLobbyModel virtual function #14
};

typedef struct CChannelLobbyModel CChannelLobbyModel, *PCChannelLobbyModel;

struct CChannelLobbyModel { // class CChannelLobbyModel : CBaseLobbyModel
    struct CChannelLobbyModel_vftable *vftablePtr;
};

typedef struct CListCtrlEx_vftable0 CListCtrlEx_vftable0, *PCListCtrlEx_vftable0;

struct CListCtrlEx_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CListCtrlEx virtual function #1
    CListCtrlEx * (*deleting_destructor)(void *, byte); // CListCtrlEx virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CListCtrlEx virtual function #13
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
    void (*vfunction3)(void *); // CListCtrlEx virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CListCtrl virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CListCtrlEx virtual function #82
    int (*OnSortItem)(void *, ulong, ulong, int, int); // CListCtrlEx virtual function #83
    bool (*DoListCtrlSetting)(void *); // CListCtrlEx virtual function #84
    void (*GetColumnFormatString)(void *, int, char *, char *, int); // CListCtrlEx virtual function #85
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CListCtrlEx virtual function #86
};

typedef struct CListCtrlEx_vftable1 CListCtrlEx_vftable1, *PCListCtrlEx_vftable1;

struct CListCtrlEx_vftable1 {
    void (*vfunction1)(void *, byte); // CListCtrlEx virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CListCtrlEx virtual function #2
    bool (*DestroyControl)(void *); // CListCtrlEx virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CListCtrlEx virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CListCtrlEx CListCtrlEx, *PCListCtrlEx;

struct CListCtrlEx { // class CListCtrlEx : CListCtrl : CControlBase
    struct CListCtrlEx_vftable0 *vftablePtr;
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
    struct CListCtrlEx_vftable1 *vftablePtr;
};

typedef struct CInviteResponseDialog_vftable0 CInviteResponseDialog_vftable0, *PCInviteResponseDialog_vftable0;

struct CInviteResponseDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CInviteResponseDialog virtual function #1
    CInviteResponseDialog * (*deleting_destructor)(void *, byte); // CInviteResponseDialog virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CInviteResponseDialog virtual function #13
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CInviteResponseDialog virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CDialogRoot virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CDialog virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CDialog virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CDialog virtual function #81
    void (*vfunction82)(void *, ushort, struct CWnd *); // CItemWebDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CInviteResponseDialog virtual function #89
    void (*OnCancel)(void *); // CInviteResponseDialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CInviteResponseDialog virtual function #92
    void (*GetDialogData)(void *, struct CParam *); // CDialogRoot virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CInviteResponseDialog virtual function #95
    void (*Draw)(void *, struct CDC *); // CInviteResponseDialog virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CDialogRoot virtual function #97
    bool (*OnInitControl)(void *); // CDialogRoot virtual function #98
    void (*StopReceiveResponse)(void *, struct IParam *); // CInviteResponseDialog virtual function #99
};

typedef struct CInviteResponseDialog_vftable1 CInviteResponseDialog_vftable1, *PCInviteResponseDialog_vftable1;

struct CInviteResponseDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CInviteResponseDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CInviteResponseDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CInviteResponseDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CInviteResponseDialog CInviteResponseDialog, *PCInviteResponseDialog;

struct CInviteResponseDialog { // class CInviteResponseDialog : CDialogRoot
    struct CInviteResponseDialog_vftable0 *vftablePtr;
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
    struct CInviteResponseDialog_vftable1 *vftablePtr;
};

typedef struct CEndingPopupDlg2_vftable0 CEndingPopupDlg2_vftable0, *PCEndingPopupDlg2_vftable0;

struct CEndingPopupDlg2_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CEndingPopupDlg2 virtual function #1
    CEndingPopupDlg2 * (*deleting_destructor)(void *, byte); // CEndingPopupDlg2 virtual function #2
    void (*vfunction3)(void *); // CListCtrlEx virtual function #3
    void (*RegisterHandlers)(void *); // CBaseApp virtual function #4
    void (*vfunction3)(void *); // CListCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CEndingPopupDlg2 virtual function #13
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CEndingPopupDlg2 virtual function #66
    void (*vfunction67)(void *); // CListCtrlEx virtual function #67
    void (*vfunction68)(void *); // CListCtrlEx virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CDialogRoot virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CDialog virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CDialog virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CDialog virtual function #81
    void (*vfunction82)(void *, ushort, struct CWnd *); // CItemWebDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CDialogRoot virtual function #89
    void (*OnCancel)(void *); // CDialogRoot virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CEndingPopupDlg2 virtual function #92
    void (*GetDialogData)(void *, struct CParam *); // CDialogRoot virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CDialogRoot virtual function #95
    void (*Draw)(void *, struct CDC *); // CDialogRoot virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CDialogRoot virtual function #97
    bool (*OnInitControl)(void *); // CEndingPopupDlg2 virtual function #98
    void (*DestroyHtmlControl)(void *); // CEndingPopupDlg2 virtual function #99
    bool (*CreateHtmlControl)(void *); // CEndingPopupDlg2 virtual function #100
};

typedef struct CEndingPopupDlg2_vftable1 CEndingPopupDlg2_vftable1, *PCEndingPopupDlg2_vftable1;

struct CEndingPopupDlg2_vftable1 {
    void (*vfunction1)(void *, byte); // CEndingPopupDlg2 virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CEndingPopupDlg2 virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CEndingPopupDlg2 virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CEndingPopupDlg2 CEndingPopupDlg2, *PCEndingPopupDlg2;

struct CEndingPopupDlg2 { // class CEndingPopupDlg2 : CDialogRoot
    struct CEndingPopupDlg2_vftable0 *vftablePtr;
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
    struct CEndingPopupDlg2_vftable1 *vftablePtr;
};

typedef struct CGameReg CGameReg, *PCGameReg;

struct CGameReg { // PlaceHolder Structure
};

typedef struct CDC CDC, *PCDC;

struct CDC { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHanChatModel - /ClassDataTypes/CHanChatModel/CHanChatModel


// WARNING! conflicting data type names: /Demangler/CItemManager - /ClassDataTypes/CItemManager/CItemManager


// WARNING! conflicting data type names: /Demangler/CWinThread - /ClassDataTypes/CWinThread/CWinThread


// WARNING! conflicting data type names: /Demangler/CMemberData - /ClassDataTypes/CMemberData/CMemberData

typedef struct CDisplayModeChanger CDisplayModeChanger, *PCDisplayModeChanger;

struct CDisplayModeChanger { // PlaceHolder Structure
};

typedef struct CGameFinder CGameFinder, *PCGameFinder;

struct CGameFinder { // PlaceHolder Structure
};

typedef struct IGod IGod, *PIGod;

struct IGod { // PlaceHolder Structure
};

typedef struct CSplashWnd CSplashWnd, *PCSplashWnd;

struct CSplashWnd { // PlaceHolder Structure
};

typedef struct CFunctor CFunctor, *PCFunctor;

struct CFunctor { // PlaceHolder Structure
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID { // PlaceHolder Structure
};

typedef struct CDataExchange CDataExchange, *PCDataExchange;

struct CDataExchange { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CListCtrlEx - /ClassDataTypes/CListCtrlEx/CListCtrlEx


// WARNING! conflicting data type names: /Demangler/CMiniChannelListView - /ClassDataTypes/CMiniChannelListView/CMiniChannelListView

typedef struct CGlobalGameEvent CGlobalGameEvent, *PCGlobalGameEvent;

struct CGlobalGameEvent { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CInviteResponseDialog - /ClassDataTypes/CInviteResponseDialog/CInviteResponseDialog

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ { // PlaceHolder Structure
};

typedef struct AFX_EVENTSINKMAP AFX_EVENTSINKMAP, *PAFX_EVENTSINKMAP;

struct AFX_EVENTSINKMAP { // PlaceHolder Structure
};

typedef struct COccManager COccManager, *PCOccManager;

struct COccManager { // PlaceHolder Structure
};

typedef struct AFX_CONNECTIONMAP AFX_CONNECTIONMAP, *PAFX_CONNECTIONMAP;

struct AFX_CONNECTIONMAP { // PlaceHolder Structure
};

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { // PlaceHolder Structure
};

typedef struct CItem CItem, *PCItem;

struct CItem { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMessengerModel - /ClassDataTypes/CMessengerModel/CMessengerModel

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CAlarm2Dialog - /ClassDataTypes/CAlarm2Dialog/CAlarm2Dialog

typedef struct tagMEASUREITEMSTRUCT tagMEASUREITEMSTRUCT, *PtagMEASUREITEMSTRUCT;

struct tagMEASUREITEMSTRUCT { // PlaceHolder Structure
};

typedef struct CMetpParser CMetpParser, *PCMetpParser;

struct CMetpParser { // PlaceHolder Structure
};

typedef struct CNetworkController CNetworkController, *PCNetworkController;

struct CNetworkController { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CShutdownNoticeDialog - /ClassDataTypes/CShutdownNoticeDialog/CShutdownNoticeDialog

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

struct tagVARIANT { // PlaceHolder Structure
};

typedef struct IConnectionPoint IConnectionPoint, *PIConnectionPoint;

struct IConnectionPoint { // PlaceHolder Structure
};

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CAccuseUserDlg - /ClassDataTypes/CAccuseUserDlg/CAccuseUserDlg

typedef struct CMemberInfoDialog CMemberInfoDialog, *PCMemberInfoDialog;

struct CMemberInfoDialog { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameLobbyView - /ClassDataTypes/CGameLobbyView/CGameLobbyView


// WARNING! conflicting data type names: /Demangler/CChannelListLobbyModel - /ClassDataTypes/CChannelListLobbyModel/CChannelListLobbyModel

typedef struct CParam CParam, *PCParam;

struct CParam { // PlaceHolder Structure
};

typedef struct CPNDcurve CPNDcurve, *PCPNDcurve;

struct CPNDcurve { // PlaceHolder Structure
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CChannelListCtrl - /ClassDataTypes/CChannelListCtrl/CChannelListCtrl


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct CConfigLoader CConfigLoader, *PCConfigLoader;

struct CConfigLoader { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMainFrameView - /ClassDataTypes/CMainFrameView/CMainFrameView

typedef struct SGlobalInfo SGlobalInfo, *PSGlobalInfo;

struct SGlobalInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCfgSetting - /ClassDataTypes/CCfgSetting/CCfgSetting

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Structure
};

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWinApp - /ClassDataTypes/CWinApp/CWinApp


// WARNING! conflicting data type names: /Demangler/CListCtrl - /ClassDataTypes/CListCtrl/CListCtrl

typedef struct CSTLogFile CSTLogFile, *PCSTLogFile;

struct CSTLogFile { // PlaceHolder Structure
};

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};

typedef struct CHanChatController CHanChatController, *PCHanChatController;

struct CHanChatController { // PlaceHolder Structure
};

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CItemWebDialog - /ClassDataTypes/CItemWebDialog/CItemWebDialog


// WARNING! conflicting data type names: /Demangler/CBaseLobbyModel - /ClassDataTypes/CBaseLobbyModel/CBaseLobbyModel

typedef struct CHgObjectFactory CHgObjectFactory, *PCHgObjectFactory;

struct CHgObjectFactory { // PlaceHolder Structure
};

typedef struct CThreadLoadingWnd CThreadLoadingWnd, *PCThreadLoadingWnd;

struct CThreadLoadingWnd { // PlaceHolder Structure
};

typedef struct tagDRAWITEMSTRUCT tagDRAWITEMSTRUCT, *PtagDRAWITEMSTRUCT;

struct tagDRAWITEMSTRUCT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameLobbyModel - /ClassDataTypes/CGameLobbyModel/CGameLobbyModel

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};

typedef struct CLobbyStateController CLobbyStateController, *PCLobbyStateController;

struct CLobbyStateController { // PlaceHolder Structure
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown { // PlaceHolder Structure
};

typedef struct CFont CFont, *PCFont;

struct CFont { // PlaceHolder Structure
};

typedef struct tagMSG tagMSG, *PtagMSG;

struct tagMSG { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCmdTarget - /ClassDataTypes/CCmdTarget/CCmdTarget

typedef struct tagRECT tagRECT, *PtagRECT;

struct tagRECT { // PlaceHolder Structure
};

typedef struct CMainFrameWnd CMainFrameWnd, *PCMainFrameWnd;

struct CMainFrameWnd { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWnd - /ClassDataTypes/CWnd/CWnd

typedef struct CException CException, *PCException;

struct CException { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CChannelLobbyModel - /ClassDataTypes/CChannelLobbyModel/CChannelLobbyModel

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};

typedef struct IParam IParam, *PIParam;

struct IParam { // PlaceHolder Structure
};

typedef struct CMainFrameModel CMainFrameModel, *PCMainFrameModel;

struct CMainFrameModel { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameWarpModel - /ClassDataTypes/CGameWarpModel/CGameWarpModel

typedef struct _AFX_OCC_DIALOG_INFO _AFX_OCC_DIALOG_INFO, *P_AFX_OCC_DIALOG_INFO;

struct _AFX_OCC_DIALOG_INFO { // PlaceHolder Structure
};

typedef struct tagTOOLINFOA tagTOOLINFOA, *PtagTOOLINFOA;

struct tagTOOLINFOA { // PlaceHolder Structure
};

typedef struct IDispatch IDispatch, *PIDispatch;

struct IDispatch { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CDialogRoot - /ClassDataTypes/CDialogRoot/CDialogRoot

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CChannelLobbyView - /ClassDataTypes/CChannelLobbyView/CChannelLobbyView

typedef struct CChannelLobbyController CChannelLobbyController, *PCChannelLobbyController;

struct CChannelLobbyController { // PlaceHolder Structure
};

typedef struct CMiniChannelListWnd CMiniChannelListWnd, *PCMiniChannelListWnd;

struct CMiniChannelListWnd { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHanChatView - /ClassDataTypes/CHanChatView/CHanChatView

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};

typedef struct IFunctor IFunctor, *PIFunctor;

struct IFunctor { // PlaceHolder Structure
};

typedef struct CDocument CDocument, *PCDocument;

struct CDocument { // PlaceHolder Structure
};

typedef struct AFX_OLECMDMAP AFX_OLECMDMAP, *PAFX_OLECMDMAP;

struct AFX_OLECMDMAP { // PlaceHolder Structure
};

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};

typedef enum NInfoTypes {
} NInfoTypes;


// WARNING! conflicting data type names: /Demangler/CControlBase - /ClassDataTypes/CControlBase/CControlBase


// WARNING! conflicting data type names: /Demangler/CDialog - /ClassDataTypes/CDialog/CDialog

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { // PlaceHolder Structure
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};

typedef struct CLobbyStateModel CLobbyStateModel, *PCLobbyStateModel;

struct CLobbyStateModel { // PlaceHolder Structure
};

typedef struct CWndProperty CWndProperty, *PCWndProperty;

struct CWndProperty { // PlaceHolder Structure
};

typedef struct CMetpParserRet CMetpParserRet, *PCMetpParserRet;

struct CMetpParserRet { // PlaceHolder Structure
};

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CShutdownExitDialog - /ClassDataTypes/CShutdownExitDialog/CShutdownExitDialog

typedef struct CDialogCmp CDialogCmp, *PCDialogCmp;

struct CDialogCmp { // PlaceHolder Structure
};

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

struct DLGTEMPLATE { // PlaceHolder Structure
};

typedef struct AFX_INTERFACEMAP AFX_INTERFACEMAP, *PAFX_INTERFACEMAP;

struct AFX_INTERFACEMAP { // PlaceHolder Structure
};

typedef struct tagCREATESTRUCTA tagCREATESTRUCTA, *PtagCREATESTRUCTA;

struct tagCREATESTRUCTA { // PlaceHolder Structure
};

typedef struct AFX_MSGMAP AFX_MSGMAP, *PAFX_MSGMAP;

struct AFX_MSGMAP { // PlaceHolder Structure
};

typedef struct CGameLobbyController CGameLobbyController, *PCGameLobbyController;

struct CGameLobbyController { // PlaceHolder Structure
};

typedef struct CSwitch2LobbyController CSwitch2LobbyController, *PCSwitch2LobbyController;

struct CSwitch2LobbyController { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CChannelRoomCreateDialog - /ClassDataTypes/CChannelRoomCreateDialog/CChannelRoomCreateDialog


// WARNING! conflicting data type names: /Demangler/CEndingPopupDlg2 - /ClassDataTypes/CEndingPopupDlg2/CEndingPopupDlg2


// WARNING! conflicting data type names: /Demangler/CBaseLobbyView - /ClassDataTypes/CBaseLobbyView/CBaseLobbyView

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ { // PlaceHolder Structure
};

typedef struct CChannelListLobbyController CChannelListLobbyController, *PCChannelListLobbyController;

struct CChannelListLobbyController { // PlaceHolder Structure
};

typedef struct CMainFrameController CMainFrameController, *PCMainFrameController;

struct CMainFrameController { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
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

typedef int errno_t;

typedef size_t rsize_t;




errno_t __cdecl strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
int __cdecl _stricmp(char *_Str1,char *_Str2);
errno_t __cdecl _splitpath_s(char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize);
void FUN_60301040(void *param_1);
undefined4 FUN_60301050(void);
undefined4 FUN_603010d0(void);
void __cdecl FUN_60301170(HMODULE param_1);
undefined4 FUN_60301580(void);
CItemManager * FUN_60301850(void);
CItemManager * __thiscall CItemManager::scalar_deleting_destructor(CItemManager *this,byte param_1);
CMemberData * FUN_603018d0(void);
CMemberData * __thiscall CMemberData::scalar_deleting_destructor(CMemberData *this,byte param_1);
CChannelRoomCreateDialog * FUN_60301950(void);
void __thiscall CBaseApp::CBaseApp::RegisterHandlers(CBaseApp *this);
void __thiscall CListCtrlEx::vfunction67(CListCtrlEx *this);
void __thiscall CListCtrlEx::vfunction68(CListCtrlEx *this);
void __thiscall CItemWebDialog::vfunction82(CItemWebDialog *this,ushort param_1,CWnd *param_2);
CChannelRoomCreateDialog * __thiscall CChannelRoomCreateDialog::scalar_deleting_destructor(CChannelRoomCreateDialog *this,byte param_1);
CItemWebDialog * FUN_60301a20(void);
CItemWebDialog * __thiscall CItemWebDialog::scalar_deleting_destructor(CItemWebDialog *this,byte param_1);
CInviteResponseDialog * FUN_60301ab0(void);
CInviteResponseDialog * __thiscall CInviteResponseDialog::scalar_deleting_destructor(CInviteResponseDialog *this,byte param_1);
CCfgSetting * FUN_60301b40(void);
CCfgSetting * __thiscall CCfgSetting::scalar_deleting_destructor(CCfgSetting *this,byte param_1);
CChannelListCtrl * FUN_60301bc0(void);
void __thiscall CListCtrlEx::vfunction3(CListCtrlEx *this);
CChannelListCtrl * __thiscall CChannelListCtrl::scalar_deleting_destructor(CChannelListCtrl *this,byte param_1);
CAccuseUserDlg * FUN_60301c60(void);
CAccuseUserDlg * __thiscall CAccuseUserDlg::scalar_deleting_destructor(CAccuseUserDlg *this,byte param_1);
CAlarm2Dialog * FUN_60301cf0(void);
CAlarm2Dialog * __thiscall CAlarm2Dialog::scalar_deleting_destructor(CAlarm2Dialog *this,byte param_1);
CEndingPopupDlg2 * FUN_60301d80(void);
CEndingPopupDlg2 * __thiscall CEndingPopupDlg2::scalar_deleting_destructor(CEndingPopupDlg2 *this,byte param_1);
CListCtrlEx * FUN_60301e30(void);
CListCtrlEx * __thiscall CListCtrlEx::scalar_deleting_destructor(CListCtrlEx *this,byte param_1);
CShutdownNoticeDialog * FUN_60301ef0(void);
CShutdownNoticeDialog * __thiscall CShutdownNoticeDialog::scalar_deleting_destructor(CShutdownNoticeDialog *this,byte param_1);
CShutdownExitDialog * FUN_60301f80(void);
CShutdownExitDialog * __thiscall CShutdownExitDialog::scalar_deleting_destructor(CShutdownExitDialog *this,byte param_1);
AFX_MSGMAP * __thiscall CBaseApp::CBaseApp::GetMessageMap(CBaseApp *this);
CBaseApp * __thiscall CBaseApp::CBaseApp(CBaseApp *this);
void __thiscall CBaseApp::~CBaseApp(CBaseApp *this);
void __thiscall CBaseApp::RegisterDefaultHandlers(CBaseApp *this);
bool __thiscall CBaseApp::CBaseApp::LoadDefaultObjects(CBaseApp *this);
undefined * Catch@6030265f(void);
void FUN_6030267e(void);
CChannelListLobbyModel * __thiscall CChannelListLobbyModel::scalar_deleting_destructor(CChannelListLobbyModel *this,byte param_1);
CChannelLobbyModel * __thiscall CChannelLobbyModel::scalar_deleting_destructor(CChannelLobbyModel *this,byte param_1);
CGameLobbyModel * __thiscall CGameLobbyModel::scalar_deleting_destructor(CGameLobbyModel *this,byte param_1);
CBaseLobbyModel * __thiscall CBaseLobbyModel::scalar_deleting_destructor(CBaseLobbyModel *this,byte param_1);
CHanChatModel * __thiscall CHanChatModel::scalar_deleting_destructor(CHanChatModel *this,byte param_1);
CGameWarpModel * __thiscall CGameWarpModel::scalar_deleting_destructor(CGameWarpModel *this,byte param_1);
CMessengerModel * __thiscall CMessengerModel::scalar_deleting_destructor(CMessengerModel *this,byte param_1);
bool __thiscall CBaseApp::CBaseApp::LoadViewObjects(CBaseApp *this);
CHanChatView * __thiscall CHanChatView::scalar_deleting_destructor(CHanChatView *this,byte param_1);
CGameLobbyView * __thiscall CGameLobbyView::scalar_deleting_destructor(CGameLobbyView *this,byte param_1);
CChannelLobbyView * __thiscall CChannelLobbyView::scalar_deleting_destructor(CChannelLobbyView *this,byte param_1);
CMiniChannelListView * __thiscall CMiniChannelListView::scalar_deleting_destructor(CMiniChannelListView *this,byte param_1);
CMainFrameView * __thiscall CMainFrameView::scalar_deleting_destructor(CMainFrameView *this,byte param_1);
void __thiscall CBaseApp::CBaseApp::RegWork_LoadFullScreenSetting(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::RegWork_RegisterNotifyWnd(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::RegWork_EraseNotifyWnd(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::RegWork_SaveFullScreenSetting(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::CheckTestMode(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::InitInstance(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::ExitInstance(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::OnIdle(CBaseApp *this,long param_1);
void __thiscall CBaseApp::RegisterPlatformConverters(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::HookConfigLoader(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::CheckBipLog(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::_CheckCmdString(CBaseApp *this);
void __thiscall CBaseApp::CBaseApp::_CheckPlatformConverter(CBaseApp *this);
int __thiscall CBaseApp::CBaseApp::_CheckMutex(CBaseApp *this);
void __thiscall CItemWebDialog::vfunction1(CItemWebDialog *this,byte param_1);
void __thiscall CChannelRoomCreateDialog::vfunction1(CChannelRoomCreateDialog *this,byte param_1);
void __thiscall CShutdownExitDialog::vfunction1(CShutdownExitDialog *this,byte param_1);
void __thiscall CChannelListCtrl::vfunction1(CChannelListCtrl *this,byte param_1);
void __thiscall CAlarm2Dialog::vfunction1(CAlarm2Dialog *this,byte param_1);
void __thiscall CAccuseUserDlg::vfunction1(CAccuseUserDlg *this,byte param_1);
void __thiscall CShutdownNoticeDialog::vfunction1(CShutdownNoticeDialog *this,byte param_1);
void __thiscall CEndingPopupDlg2::vfunction1(CEndingPopupDlg2 *this,byte param_1);
void __thiscall CListCtrlEx::vfunction1(CListCtrlEx *this,byte param_1);
void __thiscall CInviteResponseDialog::vfunction1(CInviteResponseDialog *this,byte param_1);
CWinApp * __thiscall CBaseApp::scalar_deleting_destructor(CBaseApp *this,byte param_1);
void FUN_60303a10(void);
void FUN_60303aa0(void);
undefined4 FUN_60303ac0(HINSTANCE__ *param_1,int param_2);
undefined4 FUN_60303b20(undefined4 param_1,int param_2);
CPNDcurve * __thiscall CPNDcurve::operator=(CPNDcurve *this,CPNDcurve *param_1);
void __thiscall FUN_60303b70(void *this,uint param_1);
bool __thiscall CChannelListLobbyModel::CChannelListLobbyModel::OnAttached(CChannelListLobbyModel *this);
bool __thiscall CChannelListLobbyModel::CChannelListLobbyModel::OnDetached(CChannelListLobbyModel *this);
void __thiscall CChannelListLobbyModel::CChannelListLobbyModel::_SelectChannel_Tetris(CChannelListLobbyModel *this);
int __thiscall CChannelListLobbyModel::CChannelListLobbyModel::ConnectCdsServer(CChannelListLobbyModel *this);
bool __thiscall CChannelLobbyModel::CChannelLobbyModel::OnAttached(CChannelLobbyModel *this);
bool __thiscall CChannelLobbyModel::CChannelLobbyModel::OnDetached(CChannelLobbyModel *this);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_ActivateOn(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_ActivateOff(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_HannotiCommonCode(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_StartNickNameProcess(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_EndNickNameProcess(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_GetMakeUserId(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_GetCheckUserId(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::SetRoomInfo(CChannelLobbyModel *this,IParam *param_1,bool param_2,int param_3);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_SetCreateRoomOption(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_SetCreateRoomReturn(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_SetRoomPassWordReturn(CChannelLobbyModel *this,IParam *param_1);
bool __thiscall CGameLobbyModel::CGameLobbyModel::OnAttached(CGameLobbyModel *this);
bool __thiscall CGameLobbyModel::CGameLobbyModel::OnDetached(CGameLobbyModel *this);
int __thiscall CGameLobbyModel::CGameLobbyModel::Msg_ActivateOn(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::CGameLobbyModel::Msg_ActivateOff(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::CGameLobbyModel::GameReport_RefreshPlayerInfoList(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::CGameLobbyModel::GameReport_RefreshPlayerInfo(CGameLobbyModel *this,int param_1,IParam *param_2,CMemberData *param_3);
int __thiscall CGameLobbyModel::CGameLobbyModel::GameReport_RefreshMyInfo(CGameLobbyModel *this);
bool __thiscall CGameLobbyModel::CGameLobbyModel::CheckBanishInfo(CGameLobbyModel *this);
bool __thiscall CBaseLobbyModel::CBaseLobbyModel::OnAttached(CBaseLobbyModel *this);
bool __thiscall CBaseLobbyModel::CBaseLobbyModel::OnDetached(CBaseLobbyModel *this);
int __thiscall CBaseLobbyModel::CBaseLobbyModel::Msg_ActivateOn(CBaseLobbyModel *this,IParam *param_1);
int __thiscall CBaseLobbyModel::CBaseLobbyModel::Msg_ActivateOff(CBaseLobbyModel *this,IParam *param_1);
bool __thiscall CHanChatModel::CHanChatModel::OnAttached(CHanChatModel *this);
bool __thiscall CHanChatModel::CHanChatModel::OnDetached(CHanChatModel *this);
bool __thiscall CGameWarpModel::CGameWarpModel::OnAttached(CGameWarpModel *this);
bool __thiscall CGameWarpModel::CGameWarpModel::OnDetached(CGameWarpModel *this);
void __thiscall CGameWarpModel::CGameWarpModel::RunHanStart(CGameWarpModel *this,char *param_1);
void __thiscall CGameWarpModel::CGameWarpModel::_GetRecommenedGameID(CGameWarpModel *this,IParam *param_1);
void __thiscall CGameWarpModel::CGameWarpModel::_GetChannelID(CGameWarpModel *this,IParam *param_1,char *param_2);
int __thiscall CGameWarpModel::CGameWarpModel::_OpenGamePage(CGameWarpModel *this,int param_1,char *param_2);
bool __thiscall CMessengerModel::CMessengerModel::OnAttached(CMessengerModel *this);
bool __thiscall CMessengerModel::CMessengerModel::OnDetached(CMessengerModel *this);
bool __thiscall CHanChatView::CHanChatView::OnAttached(CHanChatView *this);
bool __thiscall CHanChatView::CHanChatView::OnDetached(CHanChatView *this);
bool __thiscall CGameLobbyView::CGameLobbyView::OnAttached(CGameLobbyView *this);
bool __thiscall CGameLobbyView::CGameLobbyView::OnDetached(CGameLobbyView *this);
int __thiscall CBaseLobbyView::CBaseLobbyView::Msg_GetWindow(CBaseLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::CGameLobbyView::Msg_UpdateUIFromXML(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::CGameLobbyView::OnClickExitGameBtn(CGameLobbyView *this,IParam *param_1);
bool __thiscall CChannelLobbyView::CChannelLobbyView::OnAttached(CChannelLobbyView *this);
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
bool __thiscall CItemManager::CItemManager::SetAllElementsState(CItemManager *this);
bool __thiscall CItemManager::CItemManager::IsItemAvailable(CItemManager *this,int param_1);
void __thiscall CItemManager::CItemManager::Clear(CItemManager *this);
bool __thiscall CItemManager::CItemManager::AddItem(CItemManager *this,char *param_1,CItem *param_2);
void __thiscall CItemManager::CItemManager::DelItem(CItemManager *this,char *param_1,bool param_2);
CItem * __thiscall CItemManager::CItemManager::GetItem(CItemManager *this,char *param_1);
void __thiscall CItemManager::CItemManager::AddTryCount(CItemManager *this);
int __thiscall CItemManager::CItemManager::GetTryCount(CItemManager *this);
void __thiscall CItemManager::CItemManager::ResetTryCount(CItemManager *this);
void __thiscall CItemManager::CItemManager::DumpAllItems(CItemManager *this);
void __thiscall CItemManager::CItemManager::SetItemState(CItemManager *this,int param_1,CItem *param_2);
void __thiscall CMemberData::CMemberData::DrawAvata(CMemberData *this,HDC__ *param_1,int param_2,int param_3,int param_4);
int __thiscall CCfgSetting::CCfgSetting::CheckFCName(CCfgSetting *this,char *param_1,int param_2);
int __thiscall CCfgSetting::CCfgSetting::SetAdvertiseCfg(CCfgSetting *this,char *param_1,char *param_2);
IGod * __cdecl God(void);
void GdiplusStartup(void);
void GdiplusShutdown(void);
void __cdecl operator_delete(void *param_1);
void * __cdecl operator_new(uint param_1);
AFX_MODULE_STATE * AfxGetModuleState(void);
CWinThread * AfxGetThread(void);
CWnd * CWnd::FromHandle(HWND__ *param_1);
int __thiscall CWnd::ShowWindow(CWnd *this,int param_1);
int __thiscall CDialog::CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
void __thiscall CWnd::CWnd::OnFinalRelease(CWnd *this);
int __thiscall CCmdTarget::CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1);
int __thiscall CCmdTarget::CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1);
uint __thiscall CCmdTarget::CCmdTarget::GetTypeInfoCount(CCmdTarget *this);
CTypeLibCache * __thiscall CCmdTarget::CCmdTarget::GetTypeLibCache(CCmdTarget *this);
long __thiscall CCmdTarget::CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2);
AFX_OLECMDMAP * __thiscall CCmdTarget::CCmdTarget::GetCommandMap(CCmdTarget *this);
AFX_DISPMAP * __thiscall CCmdTarget::CCmdTarget::GetDispatchMap(CCmdTarget *this);
AFX_CONNECTIONMAP * __thiscall CCmdTarget::CCmdTarget::GetConnectionMap(CCmdTarget *this);
AFX_INTERFACEMAP * __thiscall CWnd::CWnd::GetInterfaceMap(CWnd *this);
AFX_EVENTSINKMAP * __thiscall CCmdTarget::CCmdTarget::GetEventSinkMap(CCmdTarget *this);
int __thiscall CCmdTarget::CCmdTarget::OnCreateAggregates(CCmdTarget *this);
IUnknown * __thiscall CCmdTarget::CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1);
int __thiscall CCmdTarget::CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1);
IConnectionPoint * __thiscall CCmdTarget::CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1);
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
int __thiscall CDialog::CDialog::PreTranslateMessage(CDialog *this,tagMSG *param_1);
int __thiscall CWnd::CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3);
int __thiscall CWnd::CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
long __thiscall CWnd::CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3);
void __thiscall CWnd::CWnd::PostNcDestroy(CWnd *this);
int __thiscall CWnd::CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CDialog::CDialog::CheckAutoCenter(CDialog *this);
int __thiscall CWnd::CWnd::IsFrameWnd(CWnd *this);
int __thiscall CWnd::CWnd::CreateControlContainer(CWnd *this,COleControlContainer **param_1);
int __thiscall CWnd::CWnd::CreateControlSite(CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,_GUID *param_4);
int __thiscall CDialog::CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1);
_AFX_OCC_DIALOG_INFO * __thiscall CDialog::CDialog::GetOccDialogInfo(CDialog *this);
int __thiscall CDialog::CDialog::Create(CDialog *this,char *param_1,CWnd *param_2);
int __thiscall CDialog::CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2);
int __thiscall CDialog::CDialog::CreateIndirect(CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3);
void __thiscall CDialog::CDialog::OnSetFont(CDialog *this,CFont *param_1);
void __thiscall CDialog::CDialog::PreInitDialog(CDialog *this);
int __thiscall CCmdTarget::CCmdTarget::OnCmdMsg(CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
int __thiscall CWnd::CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1);
long __thiscall CWnd::CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3);
int __thiscall CListCtrl::CListCtrl::OnChildNotify(CListCtrl *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CWnd::CWnd::CheckAutoCenter(CWnd *this);
int __thiscall CWnd::CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1);
_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd::GetOccDialogInfo(CWnd *this);
void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1);
CRuntimeClass * __thiscall CWinApp::CWinApp::GetRuntimeClass(CWinApp *this);
void __thiscall CCmdTarget::CCmdTarget::OnFinalRelease(CCmdTarget *this);
AFX_INTERFACEMAP * __thiscall CCmdTarget::CCmdTarget::GetInterfaceMap(CCmdTarget *this);
int __thiscall CWinApp::CWinApp::Run(CWinApp *this);
int __thiscall CWinThread::CWinThread::PreTranslateMessage(CWinThread *this,tagMSG *param_1);
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
void __thiscall CWinApp::~CWinApp(CWinApp *this);
void __thiscall CException::Delete(CException *this);
int AfxMessageBox(char *param_1,uint param_2,uint param_3);
char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4);
void __cdecl AfxEnableControlContainer(COccManager *param_1);
int __thiscall CWinApp::InitInstance(CWinApp *this);
int __thiscall CWinApp::ExitInstance(CWinApp *this);
int __thiscall CWinApp::OnIdle(CWinApp *this,long param_1);
void __cdecl operator_delete[](void *param_1);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
void __fastcall __security_check_cookie(int param_1);
void __alloca_probe(void);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_6030429d(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_60304635(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl terminate(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_603047c9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_60304896(void);
int __cdecl _atexit(_func_4879 *param_1);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __cdecl initterm(void);
void __cdecl initterm_e(void);
void __cdecl _amsg_exit(int param_1);
int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
void __cdecl ___security_init_cookie(void);
void __cdecl _crt_debugger_hook(int param_1);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl except_handler4_common(void);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
bool __thiscall CControlBase::CControlBase::DestroyControl(CControlBase *this);
bool __thiscall CControlBase::CControlBase::IsCreated(CControlBase *this);
void __thiscall CControlBase::CControlBase::UpdateControlForGame(CControlBase *this,IParam *param_1);
CWnd * __thiscall CControlBase::CControlBase::GetCWndPtr(CControlBase *this);
CRuntimeClass * __thiscall CChannelListCtrl::CChannelListCtrl::GetRuntimeClass(CChannelListCtrl *this);
AFX_MSGMAP * __thiscall CChannelListCtrl::CChannelListCtrl::GetMessageMap(CChannelListCtrl *this);
void __thiscall CChannelListCtrl::CChannelListCtrl::DrawItem(CChannelListCtrl *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CListCtrlEx::CListCtrlEx::OnSortItem(CListCtrlEx *this,ulong param_1,ulong param_2,int param_3,int param_4);
bool __thiscall CChannelListCtrl::CChannelListCtrl::DoListCtrlSetting(CChannelListCtrl *this);
void __thiscall CListCtrlEx::CListCtrlEx::GetColumnFormatString(CListCtrlEx *this,int param_1,char *param_2,char *param_3,int param_4);
void __thiscall CListCtrlEx::CListCtrlEx::MeasureItem(CListCtrlEx *this,tagMEASUREITEMSTRUCT *param_1);
bool __thiscall CListCtrlEx::CListCtrlEx::CreateControl(CListCtrlEx *this,IParam *param_1);
bool __thiscall CChannelListCtrl::CChannelListCtrl::DestroyControl(CChannelListCtrl *this);
void __thiscall CControlBase::CControlBase::ShowControl(CControlBase *this,bool param_1);
void __thiscall CChannelListCtrl::CChannelListCtrl::UpdateControl(CChannelListCtrl *this,IParam *param_1);
CRuntimeClass * __thiscall CListCtrlEx::CListCtrlEx::GetRuntimeClass(CListCtrlEx *this);
AFX_MSGMAP * __thiscall CListCtrlEx::CListCtrlEx::GetMessageMap(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::DrawItem(CListCtrlEx *this,tagDRAWITEMSTRUCT *param_1);
bool __thiscall CListCtrlEx::CListCtrlEx::DoListCtrlSetting(CListCtrlEx *this);
bool __thiscall CListCtrlEx::CListCtrlEx::DestroyControl(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::UpdateControl(CListCtrlEx *this,IParam *param_1);
CRuntimeClass * __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::GetRuntimeClass(CChannelRoomCreateDialog *this);
AFX_MSGMAP * __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::GetMessageMap(CChannelRoomCreateDialog *this);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::DoDataExchange(CChannelRoomCreateDialog *this,CDataExchange *param_1);
long __thiscall CDialogRoot::CDialogRoot::WindowProc(CDialogRoot *this,uint param_1,uint param_2,long param_3);
int __thiscall CDialogRoot::CDialogRoot::DoModal(CDialogRoot *this);
int __thiscall CDialogRoot::CDialogRoot::OnInitDialog(CDialogRoot *this);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::OnOK(CChannelRoomCreateDialog *this);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::OnCancel(CChannelRoomCreateDialog *this);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::InitDialogData(CChannelRoomCreateDialog *this,CParam *param_1);
void __thiscall CDialogRoot::CDialogRoot::GetDialogData(CDialogRoot *this,CParam *param_1);
int __thiscall CDialogRoot::CDialogRoot::ShowModaless(CDialogRoot *this,bool param_1);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::AfterShowIt(CChannelRoomCreateDialog *this,CParam *param_1);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::Draw(CChannelRoomCreateDialog *this,CDC *param_1);
void __thiscall CDialogRoot::CDialogRoot::UpdateProgressValue(CDialogRoot *this,CParam *param_1);
bool __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::OnInitControl(CChannelRoomCreateDialog *this);
bool __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::CreateControl(CChannelRoomCreateDialog *this,IParam *param_1);
void __thiscall CDialogRoot::CDialogRoot::ShowControl(CDialogRoot *this,bool param_1);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::UpdateControl(CChannelRoomCreateDialog *this,IParam *param_1);
CRuntimeClass * __thiscall CItemWebDialog::CItemWebDialog::GetRuntimeClass(CItemWebDialog *this);
AFX_MSGMAP * __thiscall CItemWebDialog::CItemWebDialog::GetMessageMap(CItemWebDialog *this);
AFX_EVENTSINKMAP * __thiscall CItemWebDialog::CItemWebDialog::GetEventSinkMap(CItemWebDialog *this);
void __thiscall CItemWebDialog::CItemWebDialog::DoDataExchange(CItemWebDialog *this,CDataExchange *param_1);
void __thiscall CDialogRoot::CDialogRoot::OnOK(CDialogRoot *this);
void __thiscall CDialogRoot::CDialogRoot::OnCancel(CDialogRoot *this);
void __thiscall CItemWebDialog::CItemWebDialog::InitDialogData(CItemWebDialog *this,CParam *param_1);
void __thiscall CItemWebDialog::CItemWebDialog::AfterShowIt(CItemWebDialog *this,CParam *param_1);
void __thiscall CDialogRoot::CDialogRoot::Draw(CDialogRoot *this,CDC *param_1);
bool __thiscall CItemWebDialog::CItemWebDialog::OnInitControl(CItemWebDialog *this);
bool __thiscall CItemWebDialog::CItemWebDialog::CreateControl(CItemWebDialog *this,IParam *param_1);
void __thiscall CItemWebDialog::CItemWebDialog::UpdateControl(CItemWebDialog *this,IParam *param_1);
CRuntimeClass * __thiscall CInviteResponseDialog::CInviteResponseDialog::GetRuntimeClass(CInviteResponseDialog *this);
AFX_MSGMAP * __thiscall CInviteResponseDialog::CInviteResponseDialog::GetMessageMap(CInviteResponseDialog *this);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::DoDataExchange(CInviteResponseDialog *this,CDataExchange *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::OnOK(CInviteResponseDialog *this);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::OnCancel(CInviteResponseDialog *this);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::InitDialogData(CInviteResponseDialog *this,CParam *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::AfterShowIt(CInviteResponseDialog *this,CParam *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::Draw(CInviteResponseDialog *this,CDC *param_1);
bool __thiscall CDialogRoot::CDialogRoot::OnInitControl(CDialogRoot *this);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::StopReceiveResponse(CInviteResponseDialog *this,IParam *param_1);
bool __thiscall CInviteResponseDialog::CInviteResponseDialog::CreateControl(CInviteResponseDialog *this,IParam *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::UpdateControl(CInviteResponseDialog *this,IParam *param_1);
CRuntimeClass * __thiscall CDialogRoot::CDialogRoot::GetRuntimeClass(CDialogRoot *this);
AFX_MSGMAP * __thiscall CAccuseUserDlg::CAccuseUserDlg::GetMessageMap(CAccuseUserDlg *this);
void __thiscall CAccuseUserDlg::CAccuseUserDlg::DoDataExchange(CAccuseUserDlg *this,CDataExchange *param_1);
void __thiscall CAccuseUserDlg::CAccuseUserDlg::InitDialogData(CAccuseUserDlg *this,CParam *param_1);
void __thiscall CAccuseUserDlg::CAccuseUserDlg::AfterShowIt(CAccuseUserDlg *this,CParam *param_1);
void __thiscall CAccuseUserDlg::CAccuseUserDlg::Draw(CAccuseUserDlg *this,CDC *param_1);
bool __thiscall CAccuseUserDlg::CAccuseUserDlg::OnInitControl(CAccuseUserDlg *this);
bool __thiscall CAccuseUserDlg::CAccuseUserDlg::CreateControl(CAccuseUserDlg *this,IParam *param_1);
void __thiscall CAccuseUserDlg::CAccuseUserDlg::UpdateControl(CAccuseUserDlg *this,IParam *param_1);
AFX_MSGMAP * __thiscall CAlarm2Dialog::CAlarm2Dialog::GetMessageMap(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::DoDataExchange(CAlarm2Dialog *this,CDataExchange *param_1);
int __thiscall CAlarm2Dialog::CAlarm2Dialog::DoModal(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::InitDialogData(CAlarm2Dialog *this,CParam *param_1);
int __thiscall CAlarm2Dialog::CAlarm2Dialog::ShowModaless(CAlarm2Dialog *this,bool param_1);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::AfterShowIt(CAlarm2Dialog *this,CParam *param_1);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::Draw(CAlarm2Dialog *this,CDC *param_1);
bool __thiscall CAlarm2Dialog::CAlarm2Dialog::OnInitControl(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::SetNormalMode(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::SetUPPMode(CAlarm2Dialog *this);
bool __thiscall CAlarm2Dialog::CAlarm2Dialog::CreateControl(CAlarm2Dialog *this,IParam *param_1);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::UpdateControl(CAlarm2Dialog *this,IParam *param_1);
CRuntimeClass * __thiscall CEndingPopupDlg2::CEndingPopupDlg2::GetRuntimeClass(CEndingPopupDlg2 *this);
AFX_MSGMAP * __thiscall CEndingPopupDlg2::CEndingPopupDlg2::GetMessageMap(CEndingPopupDlg2 *this);
void __thiscall CEndingPopupDlg2::CEndingPopupDlg2::DoDataExchange(CEndingPopupDlg2 *this,CDataExchange *param_1);
void __thiscall CEndingPopupDlg2::CEndingPopupDlg2::InitDialogData(CEndingPopupDlg2 *this,CParam *param_1);
void __thiscall CDialogRoot::CDialogRoot::AfterShowIt(CDialogRoot *this,CParam *param_1);
bool __thiscall CEndingPopupDlg2::CEndingPopupDlg2::OnInitControl(CEndingPopupDlg2 *this);
void __thiscall CEndingPopupDlg2::CEndingPopupDlg2::DestroyHtmlControl(CEndingPopupDlg2 *this);
bool __thiscall CEndingPopupDlg2::CEndingPopupDlg2::CreateHtmlControl(CEndingPopupDlg2 *this);
bool __thiscall CEndingPopupDlg2::CEndingPopupDlg2::CreateControl(CEndingPopupDlg2 *this,IParam *param_1);
void __thiscall CEndingPopupDlg2::CEndingPopupDlg2::UpdateControl(CEndingPopupDlg2 *this,IParam *param_1);
CRuntimeClass * __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::GetRuntimeClass(CShutdownNoticeDialog *this);
AFX_MSGMAP * __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::GetMessageMap(CShutdownNoticeDialog *this);
void __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::DoDataExchange(CShutdownNoticeDialog *this,CDataExchange *param_1);
void __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::InitDialogData(CShutdownNoticeDialog *this,CParam *param_1);
void __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::Draw(CShutdownNoticeDialog *this,CDC *param_1);
bool __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::OnInitControl(CShutdownNoticeDialog *this);
bool __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::CreateControl(CShutdownNoticeDialog *this,IParam *param_1);
void __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::UpdateControl(CShutdownNoticeDialog *this,IParam *param_1);
CRuntimeClass * __thiscall CShutdownExitDialog::CShutdownExitDialog::GetRuntimeClass(CShutdownExitDialog *this);
AFX_MSGMAP * __thiscall CShutdownExitDialog::CShutdownExitDialog::GetMessageMap(CShutdownExitDialog *this);
void __thiscall CShutdownExitDialog::CShutdownExitDialog::DoDataExchange(CShutdownExitDialog *this,CDataExchange *param_1);
void __thiscall CShutdownExitDialog::CShutdownExitDialog::InitDialogData(CShutdownExitDialog *this,CParam *param_1);
void __thiscall CShutdownExitDialog::CShutdownExitDialog::Draw(CShutdownExitDialog *this,CDC *param_1);
bool __thiscall CShutdownExitDialog::CShutdownExitDialog::OnInitControl(CShutdownExitDialog *this);
bool __thiscall CShutdownExitDialog::CShutdownExitDialog::CreateControl(CShutdownExitDialog *this,IParam *param_1);
void __thiscall CShutdownExitDialog::CShutdownExitDialog::UpdateControl(CShutdownExitDialog *this,IParam *param_1);
void Unwind@60304dd0(void);
void Unwind@60304e00(void);
void Unwind@60304e30(void);
void Unwind@60304e3b(void);
void Unwind@60304e46(void);
void Unwind@60304e51(void);
void Unwind@60304e5c(void);
void Unwind@60304e67(void);
void Unwind@60304e72(void);
void Unwind@60304e7d(void);
void Unwind@60304e88(void);
void Unwind@60304e93(void);
void Unwind@60304e9e(void);
void Unwind@60304ea9(void);
void Unwind@60304eb4(void);
void Unwind@60304ebf(void);
void Unwind@60304eca(void);
void Unwind@60304ed5(void);
void Unwind@60304ee0(void);
void Unwind@60304eeb(void);
void Unwind@60304ef6(void);
void Unwind@60304f01(void);
void Unwind@60304f30(void);
void Unwind@60304f3b(void);
void Unwind@60304f46(void);
void Unwind@60304f51(void);
void Unwind@60304f5c(void);
void Unwind@60304f67(void);
void Unwind@60304f72(void);
void Unwind@60304fa0(void);
void Unwind@60304fe0(void);
void Unwind@60304fec(void);
void Unwind@60305030(void);
void Unwind@60305070(void);
void Unwind@6030507c(void);
void Unwind@60305088(void);
void Unwind@60305094(void);
void Unwind@603050a0(void);
void Unwind@603050ac(void);
void Unwind@603050b8(void);
void Unwind@60305100(void);
void Unwind@60305130(void);
void FUN_60305200(void);
void FUN_60305240(void);
void FUN_60305280(void);

