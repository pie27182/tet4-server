typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    int64_t;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    uint64_t;
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

typedef struct CHanChatModel CHanChatModel, *PCHanChatModel;

struct CHanChatModel { // PlaceHolder Class Structure
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

typedef struct CLobbyStateModel CLobbyStateModel, *PCLobbyStateModel;

struct CLobbyStateModel { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct CNetworkModel CNetworkModel, *PCNetworkModel;

struct CNetworkModel { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList ESTypeList;

typedef struct CChannelListLobbyModel CChannelListLobbyModel, *PCChannelListLobbyModel;

struct CChannelListLobbyModel { // PlaceHolder Class Structure
};

typedef struct CBaseLobbyModel CBaseLobbyModel, *PCBaseLobbyModel;

struct CBaseLobbyModel { // PlaceHolder Class Structure
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

typedef uint64_t __uint64;

typedef struct CChannelLobbyModel CChannelLobbyModel, *PCChannelLobbyModel;

struct CChannelLobbyModel { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct CMainFrameModel CMainFrameModel, *PCMainFrameModel;

struct CMainFrameModel { // PlaceHolder Class Structure
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef ulong DWORD;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef ushort WORD;

typedef uchar BYTE;

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

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

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

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[36];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (*FARPROC)(void);

typedef int INT;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef BYTE *PBYTE;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

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

typedef struct CPlayerInfo CPlayerInfo, *PCPlayerInfo;

typedef struct CPlayerInfo_vftable CPlayerInfo_vftable, *PCPlayerInfo_vftable;

struct CPlayerInfo { // class CPlayerInfo
    struct CPlayerInfo_vftable *vftablePtr;
};

struct CPlayerInfo_vftable {
    CPlayerInfo * (*deleting_destructor)(void *, byte); // CPlayerInfo virtual function #1
};

typedef struct CMFunctor<CHanChatModel> CMFunctor<CHanChatModel>, *PCMFunctor<CHanChatModel>;

typedef struct CMFunctor<CHanChatModel>_vftable CMFunctor<CHanChatModel>_vftable, *PCMFunctor<CHanChatModel>_vftable;

struct CMFunctor<CHanChatModel> { // class CMFunctor<CHanChatModel> : IFunctor
    struct CMFunctor<CHanChatModel>_vftable *vftablePtr;
};

struct CMFunctor<CHanChatModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CHanChatModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/CBaseLobbyModel/CBaseLobbyModel - /CBaseLobbyModel

typedef struct CBaseLobbyModel_vftable CBaseLobbyModel_vftable, *PCBaseLobbyModel_vftable;

struct CBaseLobbyModel_vftable {
    bool (*OnAttached)(void *); // CBaseLobbyModel virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyModel virtual function #2
    undefined4 * (*deleting_destructor)(void *, byte); // CBaseLobbyModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CBaseLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CBaseLobbyModel virtual function #5
};

typedef struct CBaseLobbyModel_data CBaseLobbyModel_data, *PCBaseLobbyModel_data;

struct CBaseLobbyModel_data {
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
    undefined1 offset_0x24;
    undefined2 offset_0x25;
    undefined1 offset_0x27;
    undefined field36_0x28;
    undefined field37_0x29;
    undefined field38_0x2a;
    undefined field39_0x2b;
    undefined field40_0x2c;
    undefined field41_0x2d;
    undefined field42_0x2e;
    undefined field43_0x2f;
    undefined field44_0x30;
    undefined field45_0x31;
    undefined field46_0x32;
    undefined field47_0x33;
    undefined field48_0x34;
    undefined field49_0x35;
    undefined field50_0x36;
    undefined field51_0x37;
    undefined field52_0x38;
    undefined field53_0x39;
    undefined field54_0x3a;
    undefined field55_0x3b;
    undefined field56_0x3c;
    undefined field57_0x3d;
    undefined field58_0x3e;
    undefined field59_0x3f;
    undefined field60_0x40;
    undefined field61_0x41;
    undefined field62_0x42;
    undefined field63_0x43;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined field66_0x4c;
    undefined field67_0x4d;
    undefined field68_0x4e;
    undefined field69_0x4f;
    undefined4 offset_0x50;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHanChatModel/CHanChatModel - /CHanChatModel

typedef struct CHanChatModel_data CHanChatModel_data, *PCHanChatModel_data;

typedef struct MessageLog MessageLog, *PMessageLog;

struct CHanChatModel_data {
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
    struct MessageLog *offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
};

struct MessageLog { // PlaceHolder Structure
};

typedef struct CHanChatModel_vftable CHanChatModel_vftable, *PCHanChatModel_vftable;

struct CHanChatModel_vftable {
    bool (*OnAttached)(void *); // CHanChatModel virtual function #1
    bool (*OnDetached)(void *); // CChannelListLobbyModel virtual function #2
    CHanChatModel * (*deleting_destructor)(void *, byte); // CHanChatModel virtual function #3
};

typedef struct IComponent IComponent, *PIComponent;

struct IComponent { // class IComponent
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CMFunctor<CGameLobbyModel> CMFunctor<CGameLobbyModel>, *PCMFunctor<CGameLobbyModel>;

typedef struct CMFunctor<CGameLobbyModel>_vftable CMFunctor<CGameLobbyModel>_vftable, *PCMFunctor<CGameLobbyModel>_vftable;

struct CMFunctor<CGameLobbyModel> { // class CMFunctor<CGameLobbyModel> : IFunctor
    struct CMFunctor<CGameLobbyModel>_vftable *vftablePtr;
};

struct CMFunctor<CGameLobbyModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGameLobbyModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CGameLobbyModel CGameLobbyModel, *PCGameLobbyModel;

typedef struct CGameLobbyModel_vftable CGameLobbyModel_vftable, *PCGameLobbyModel_vftable;

struct CBaseLobbyModel_data {
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
    undefined1 offset_0x24;
    undefined2 offset_0x25;
    undefined1 offset_0x27;
    undefined field36_0x28;
    undefined field37_0x29;
    undefined field38_0x2a;
    undefined field39_0x2b;
    undefined field40_0x2c;
    undefined field41_0x2d;
    undefined field42_0x2e;
    undefined field43_0x2f;
    undefined field44_0x30;
    undefined field45_0x31;
    undefined field46_0x32;
    undefined field47_0x33;
    undefined field48_0x34;
    undefined field49_0x35;
    undefined field50_0x36;
    undefined field51_0x37;
    undefined field52_0x38;
    undefined field53_0x39;
    undefined field54_0x3a;
    undefined field55_0x3b;
    undefined field56_0x3c;
    undefined field57_0x3d;
    undefined field58_0x3e;
    undefined field59_0x3f;
    undefined field60_0x40;
    undefined field61_0x41;
    undefined field62_0x42;
    undefined field63_0x43;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined field66_0x4c;
    undefined field67_0x4d;
    undefined field68_0x4e;
    undefined field69_0x4f;
    undefined4 offset_0x50;
};

struct CGameLobbyModel_vftable {
    bool (*OnAttached)(void *); // CGameLobbyModel virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyModel virtual function #2
    undefined4 * (*deleting_destructor)(void *, byte); // CGameLobbyModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CGameLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CGameLobbyModel virtual function #5
    int (*GameReport_RefreshPlayerInfoList)(void *, struct IParam *); // CGameLobbyModel virtual function #6
    int (*GameReport_RefreshPlayerInfo)(void *, int, struct IParam *, struct CMemberData *); // CGameLobbyModel virtual function #7
    int (*GameReport_RefreshMyInfo)(void *); // CGameLobbyModel virtual function #8
    bool (*CheckBanishInfo)(void *); // CGameLobbyModel virtual function #9
};

struct CGameLobbyModel { // class CGameLobbyModel : CBaseLobbyModel
    struct CGameLobbyModel_vftable *vftablePtr;
    struct CBaseLobbyModel_data CBaseLobbyModel_data;
};

typedef struct IFunctor IFunctor, *PIFunctor;

struct IFunctor { // class IFunctor
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CMFunctor<CLobbyStateModel>_vftable CMFunctor<CLobbyStateModel>_vftable, *PCMFunctor<CLobbyStateModel>_vftable;

struct CMFunctor<CLobbyStateModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CLobbyStateModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CMFunctor<CLobbyStateModel> CMFunctor<CLobbyStateModel>, *PCMFunctor<CLobbyStateModel>;

struct CMFunctor<CLobbyStateModel> { // class CMFunctor<CLobbyStateModel> : IFunctor
    struct CMFunctor<CLobbyStateModel>_vftable *vftablePtr;
};

typedef struct CChannelListLobbyModel_data CChannelListLobbyModel_data, *PCChannelListLobbyModel_data;

struct CChannelListLobbyModel_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
};


// WARNING! conflicting data type names: /ClassDataTypes/CChannelListLobbyModel/CChannelListLobbyModel - /CChannelListLobbyModel

typedef struct CChannelListLobbyModel_vftable CChannelListLobbyModel_vftable, *PCChannelListLobbyModel_vftable;

struct CChannelListLobbyModel_vftable {
    bool (*OnAttached)(void *); // CChannelListLobbyModel virtual function #1
    bool (*OnDetached)(void *); // CChannelListLobbyModel virtual function #2
    undefined4 * (*deleting_destructor)(void *, byte); // CChannelListLobbyModel virtual function #3
    void (*_SelectChannel_Tetris)(void *); // CChannelListLobbyModel virtual function #4
    int (*ConnectCdsServer)(void *); // CChannelListLobbyModel virtual function #5
};

typedef struct CMFunctor<CChannelListLobbyModel> CMFunctor<CChannelListLobbyModel>, *PCMFunctor<CChannelListLobbyModel>;

typedef struct CMFunctor<CChannelListLobbyModel>_vftable CMFunctor<CChannelListLobbyModel>_vftable, *PCMFunctor<CChannelListLobbyModel>_vftable;

struct CMFunctor<CChannelListLobbyModel> { // class CMFunctor<CChannelListLobbyModel> : IFunctor
    struct CMFunctor<CChannelListLobbyModel>_vftable *vftablePtr;
};

struct CMFunctor<CChannelListLobbyModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CChannelListLobbyModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CNetworkModel_vftable CNetworkModel_vftable, *PCNetworkModel_vftable;

struct CNetworkModel_vftable {
    CNetworkModel * (*deleting_destructor)(void *, byte); // CNetworkModel virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CNetworkModel/CNetworkModel - /CNetworkModel

typedef struct CNetworkModel_data CNetworkModel_data, *PCNetworkModel_data;

struct CNetworkModel_data {
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
    int offset_0x40;
    undefined field62_0x44;
    undefined field63_0x45;
    undefined field64_0x46;
    undefined field65_0x47;
    undefined field66_0x48;
    undefined field67_0x49;
    undefined field68_0x4a;
    undefined field69_0x4b;
    undefined field70_0x4c;
    undefined field71_0x4d;
    undefined field72_0x4e;
    undefined field73_0x4f;
    undefined field74_0x50;
    undefined field75_0x51;
    undefined field76_0x52;
    undefined field77_0x53;
    undefined field78_0x54;
    undefined field79_0x55;
    undefined field80_0x56;
    undefined field81_0x57;
    int *offset_0x58;
    int offset_0x5c;
    undefined1 offset_0x60;
    undefined field85_0x61;
    undefined field86_0x62;
    undefined field87_0x63;
};

typedef struct CMFunctor<CBaseLobbyModel> CMFunctor<CBaseLobbyModel>, *PCMFunctor<CBaseLobbyModel>;

typedef struct CMFunctor<CBaseLobbyModel>_vftable CMFunctor<CBaseLobbyModel>_vftable, *PCMFunctor<CBaseLobbyModel>_vftable;

struct CMFunctor<CBaseLobbyModel> { // class CMFunctor<CBaseLobbyModel> : IFunctor
    struct CMFunctor<CBaseLobbyModel>_vftable *vftablePtr;
};

struct CMFunctor<CBaseLobbyModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CBaseLobbyModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CMFunctor<CChannelLobbyModel> CMFunctor<CChannelLobbyModel>, *PCMFunctor<CChannelLobbyModel>;

typedef struct CMFunctor<CChannelLobbyModel>_vftable CMFunctor<CChannelLobbyModel>_vftable, *PCMFunctor<CChannelLobbyModel>_vftable;

struct CMFunctor<CChannelLobbyModel> { // class CMFunctor<CChannelLobbyModel> : IFunctor
    struct CMFunctor<CChannelLobbyModel>_vftable *vftablePtr;
};

struct CMFunctor<CChannelLobbyModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CChannelLobbyModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CGameWarpModel CGameWarpModel, *PCGameWarpModel;

typedef struct CGameWarpModel_vftable CGameWarpModel_vftable, *PCGameWarpModel_vftable;

struct CBaseLobbyModel_data {
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
    undefined1 offset_0x24;
    undefined2 offset_0x25;
    undefined1 offset_0x27;
    undefined field36_0x28;
    undefined field37_0x29;
    undefined field38_0x2a;
    undefined field39_0x2b;
    undefined field40_0x2c;
    undefined field41_0x2d;
    undefined field42_0x2e;
    undefined field43_0x2f;
    undefined field44_0x30;
    undefined field45_0x31;
    undefined field46_0x32;
    undefined field47_0x33;
    undefined field48_0x34;
    undefined field49_0x35;
    undefined field50_0x36;
    undefined field51_0x37;
    undefined field52_0x38;
    undefined field53_0x39;
    undefined field54_0x3a;
    undefined field55_0x3b;
    undefined field56_0x3c;
    undefined field57_0x3d;
    undefined field58_0x3e;
    undefined field59_0x3f;
    undefined field60_0x40;
    undefined field61_0x41;
    undefined field62_0x42;
    undefined field63_0x43;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined field66_0x4c;
    undefined field67_0x4d;
    undefined field68_0x4e;
    undefined field69_0x4f;
    undefined4 offset_0x50;
};

struct CGameWarpModel_vftable {
    bool (*OnAttached)(void *); // CGameWarpModel virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyModel virtual function #2
    undefined4 * (*deleting_destructor)(void *, byte); // CGameWarpModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CBaseLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CBaseLobbyModel virtual function #5
    void (*RunHanStart)(void *, char *); // CGameWarpModel virtual function #6
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * (*_GetRecommenedGameID)(void *, struct IParam *); // CGameWarpModel virtual function #7
    IParam * (*_GetChannelID)(void *, struct IParam *, char *); // CGameWarpModel virtual function #8
    int (*_OpenGamePage)(void *, int, char *); // CGameWarpModel virtual function #9
};

struct CGameWarpModel { // class CGameWarpModel : CBaseLobbyModel
    struct CGameWarpModel_vftable *vftablePtr;
    struct CBaseLobbyModel_data CBaseLobbyModel_data;
};

typedef struct CMFunctor<CNetworkModel>_vftable CMFunctor<CNetworkModel>_vftable, *PCMFunctor<CNetworkModel>_vftable;

struct CMFunctor<CNetworkModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CNetworkModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CMFunctor<CNetworkModel> CMFunctor<CNetworkModel>, *PCMFunctor<CNetworkModel>;

struct CMFunctor<CNetworkModel> { // class CMFunctor<CNetworkModel> : IFunctor
    struct CMFunctor<CNetworkModel>_vftable *vftablePtr;
};

typedef struct CMessengerModel CMessengerModel, *PCMessengerModel;

typedef struct CMessengerModel_vftable CMessengerModel_vftable, *PCMessengerModel_vftable;

struct CBaseLobbyModel_data {
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
    undefined1 offset_0x24;
    undefined2 offset_0x25;
    undefined1 offset_0x27;
    undefined field36_0x28;
    undefined field37_0x29;
    undefined field38_0x2a;
    undefined field39_0x2b;
    undefined field40_0x2c;
    undefined field41_0x2d;
    undefined field42_0x2e;
    undefined field43_0x2f;
    undefined field44_0x30;
    undefined field45_0x31;
    undefined field46_0x32;
    undefined field47_0x33;
    undefined field48_0x34;
    undefined field49_0x35;
    undefined field50_0x36;
    undefined field51_0x37;
    undefined field52_0x38;
    undefined field53_0x39;
    undefined field54_0x3a;
    undefined field55_0x3b;
    undefined field56_0x3c;
    undefined field57_0x3d;
    undefined field58_0x3e;
    undefined field59_0x3f;
    undefined field60_0x40;
    undefined field61_0x41;
    undefined field62_0x42;
    undefined field63_0x43;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined field66_0x4c;
    undefined field67_0x4d;
    undefined field68_0x4e;
    undefined field69_0x4f;
    undefined4 offset_0x50;
};

struct CMessengerModel_vftable {
    bool (*OnAttached)(void *); // CMessengerModel virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyModel virtual function #2
    undefined4 * (*deleting_destructor)(void *, byte); // CMessengerModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CBaseLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CBaseLobbyModel virtual function #5
};

struct CMessengerModel { // class CMessengerModel : CBaseLobbyModel
    struct CMessengerModel_vftable *vftablePtr;
    struct CBaseLobbyModel_data CBaseLobbyModel_data;
};

typedef struct GA_PRM_MasterInfo GA_PRM_MasterInfo, *PGA_PRM_MasterInfo;

typedef struct GA_PRM_MasterInfo_vftable GA_PRM_MasterInfo_vftable, *PGA_PRM_MasterInfo_vftable;

struct GA_PRM_MasterInfo { // class GA_PRM_MasterInfo
    struct GA_PRM_MasterInfo_vftable *vftablePtr;
};

struct GA_PRM_MasterInfo_vftable {
    GA_PRM_MasterInfo * (*deleting_destructor)(void *, byte); // GA_PRM_MasterInfo virtual function #1
};

typedef struct IParam IParam, *PIParam;

struct IParam { // class IParam
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
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

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CMainFrameModel_vftable CMainFrameModel_vftable, *PCMainFrameModel_vftable;

struct CMainFrameModel_vftable {
    bool (*OnAttached)(void *); // CMainFrameModel virtual function #1
    bool (*deleting_destructor)(void *); // CMainFrameModel virtual function #2
};


// WARNING! conflicting data type names: /ClassDataTypes/CMainFrameModel/CMainFrameModel - /CMainFrameModel

typedef struct CItem_vftable CItem_vftable, *PCItem_vftable;

struct CItem_vftable {
    CItem * (*deleting_destructor)(void *, byte); // CItem virtual function #1
};

typedef struct CItem CItem, *PCItem;

struct CItem { // class CItem
    struct CItem_vftable *vftablePtr;
};

typedef struct CMFunctor<CMainFrameModel>_vftable CMFunctor<CMainFrameModel>_vftable, *PCMFunctor<CMainFrameModel>_vftable;

struct CMFunctor<CMainFrameModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CMainFrameModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CMFunctor<CMainFrameModel> CMFunctor<CMainFrameModel>, *PCMFunctor<CMainFrameModel>;

struct CMFunctor<CMainFrameModel> { // class CMFunctor<CMainFrameModel> : IFunctor
    struct CMFunctor<CMainFrameModel>_vftable *vftablePtr;
};

typedef struct CRoomData_vftable CRoomData_vftable, *PCRoomData_vftable;

struct CRoomData_vftable {
    CRoomData * (*deleting_destructor)(void *, byte); // CRoomData virtual function #1
};

typedef struct CRoomData CRoomData, *PCRoomData;

struct CRoomData { // class CRoomData
    struct CRoomData_vftable *vftablePtr;
};

typedef struct CMetpParser_vftable CMetpParser_vftable, *PCMetpParser_vftable;

struct CMetpParser_vftable {
    void (*SetContext)(void *, uint); // CMetpParser virtual function #1
    uint (*GetContext)(void *); // CMetpParser virtual function #2
    char * (*GetService)(void *); // CMetpParser virtual function #3
    char * (*GetCommand)(void *); // CMetpParser virtual function #4
    int (*GetItemCount)(void *); // CMetpParser virtual function #5
    bool (*IsConst)(void *); // CMetpParser virtual function #6
    bool (*IsExistKey)(void *, char *); // CMetpParser virtual function #7
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #8
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #9
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #10
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #11
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #12
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #13
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #14
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #15
    bool (*AddValue)(void *, char *, struct IParam *); // CMetpParser virtual function #16
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #17
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #18
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #19
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #20
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #21
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #22
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #23
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #24
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #25
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #26
    bool (*GetValue)(void *, char *, struct IParam **); // CMetpParser virtual function #27
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #28
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #29
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #30
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #31
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #32
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #33
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #34
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #35
    bool (*SetValue)(void *, char *, struct IParam *); // CMetpParser virtual function #36
    bool (*DelKey)(void *, char *); // CMetpParser virtual function #37
    void (*Clear)(void *); // CMetpParser virtual function #38
    bool (*GetData)(void *, void **, int *); // CMetpParser virtual function #39
    char * (*GetIPAddress)(void *); // CMetpParser virtual function #40
    ushort (*GetPort)(void *); // CMetpParser virtual function #41
    bool (*IsEncrypted)(void *); // CMetpParser virtual function #42
    bool (*GetURL)(void *, char **, int *); // CMetpParser virtual function #43
    bool (*GetZipURL)(void *, char **, int *); // CMetpParser virtual function #44
    bool (*GetEncryptURL)(void *, char **, int *, char *, bool); // CMetpParser virtual function #45
    CMetpParser * (*deleting_destructor)(void *, byte); // CMetpParser virtual function #46
};

typedef struct CMetpParser CMetpParser, *PCMetpParser;

struct CMetpParser { // class CMetpParser : IParam
    struct CMetpParser_vftable *vftablePtr;
};

typedef struct CMembership_vftable CMembership_vftable, *PCMembership_vftable;

struct CMembership_vftable {
    CMembership * (*deleting_destructor)(void *, byte); // CMembership virtual function #1
};

typedef struct CMembership CMembership, *PCMembership;

struct CMembership { // class CMembership
    struct CMembership_vftable *vftablePtr;
};

typedef struct CMFunctor<CGameWarpModel>_vftable CMFunctor<CGameWarpModel>_vftable, *PCMFunctor<CGameWarpModel>_vftable;

struct CMFunctor<CGameWarpModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGameWarpModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CMFunctor<CGameWarpModel> CMFunctor<CGameWarpModel>, *PCMFunctor<CGameWarpModel>;

struct CMFunctor<CGameWarpModel> { // class CMFunctor<CGameWarpModel> : IFunctor
    struct CMFunctor<CGameWarpModel>_vftable *vftablePtr;
};

typedef struct CLobbyStateModel_vftable CLobbyStateModel_vftable, *PCLobbyStateModel_vftable;

struct CLobbyStateModel_vftable {
    bool (*OnAttached)(void *); // CLobbyStateModel virtual function #1
    bool (*deleting_destructor)(void *); // CLobbyStateModel virtual function #2
};

typedef struct CLobbyStateModel_data CLobbyStateModel_data, *PCLobbyStateModel_data;

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct CLobbyStateModel_data {
    bool offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *offset_0x10;
    struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *offset_0x14;
    undefined field15_0x18;
    undefined field16_0x19;
    undefined field17_0x1a;
    undefined field18_0x1b;
    undefined4 offset_0x1c;
};

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /ClassDataTypes/CLobbyStateModel/CLobbyStateModel - /CLobbyStateModel

typedef struct CMFunctor<CMessengerModel>_vftable CMFunctor<CMessengerModel>_vftable, *PCMFunctor<CMessengerModel>_vftable;

struct CMFunctor<CMessengerModel>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyModel> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CMessengerModel> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyModel> virtual function #3
};

typedef struct CMFunctor<CMessengerModel> CMFunctor<CMessengerModel>, *PCMFunctor<CMessengerModel>;

struct CMFunctor<CMessengerModel> { // class CMFunctor<CMessengerModel> : IFunctor
    struct CMFunctor<CMessengerModel>_vftable *vftablePtr;
};


// WARNING! conflicting data type names: /ClassDataTypes/CChannelLobbyModel/CChannelLobbyModel - /CChannelLobbyModel

typedef struct CChannelLobbyModel_vftable CChannelLobbyModel_vftable, *PCChannelLobbyModel_vftable;

struct CChannelLobbyModel_vftable {
    bool (*OnAttached)(void *); // CChannelLobbyModel virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyModel virtual function #2
    undefined4 * (*deleting_destructor)(void *, byte); // CChannelLobbyModel virtual function #3
    int (*Msg_ActivateOn)(void *, struct IParam *); // CChannelLobbyModel virtual function #4
    int (*Msg_ActivateOff)(void *, struct IParam *); // CBaseLobbyModel virtual function #5
    int (*Msg_HannotiCommonCode)(void *, struct IParam *); // CChannelLobbyModel virtual function #6
    int (*Msg_CheckMyStatus)(void *, struct IParam *); // CChannelLobbyModel virtual function #7
    int (*Msg_CheckMyStatus)(void *, struct IParam *); // CChannelLobbyModel virtual function #8
    int (*Msg_GetMakeUserId)(void *, struct IParam *); // CChannelLobbyModel virtual function #9
    int (*Msg_GetCheckUserId)(void *, struct IParam *); // CChannelLobbyModel virtual function #10
    int (*SetRoomInfo)(void *, struct IParam *, bool, int); // CChannelLobbyModel virtual function #11
    int (*Msg_SetCreateRoomOption)(void *, struct IParam *); // CChannelLobbyModel virtual function #12
    int (*Msg_SetCreateRoomReturn)(void *, struct IParam *); // CChannelLobbyModel virtual function #13
    int (*Msg_SetRoomPassWordReturn)(void *, struct IParam *); // CChannelLobbyModel virtual function #14
};

typedef struct CGameReg CGameReg, *PCGameReg;

struct CGameReg { // PlaceHolder Structure
};

typedef struct CMsnBuddyList CMsnBuddyList, *PCMsnBuddyList;

struct CMsnBuddyList { // PlaceHolder Structure
};

typedef struct CItemManager CItemManager, *PCItemManager;

struct CItemManager { // PlaceHolder Structure
};

typedef struct CWinThread CWinThread, *PCWinThread;

struct CWinThread { // PlaceHolder Structure
};

typedef struct CMemberData CMemberData, *PCMemberData;

struct CMemberData { // PlaceHolder Structure
};

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};

typedef struct CGameFinder CGameFinder, *PCGameFinder;

struct CGameFinder { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/IFunctor - /ClassDataTypes/IFunctor/IFunctor

typedef struct IGod IGod, *PIGod;

struct IGod { // PlaceHolder Structure
};

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};

typedef struct CFunctor CFunctor, *PCFunctor;

struct CFunctor { // PlaceHolder Structure
};

typedef struct CStringList CStringList, *PCStringList;

struct CStringList { // PlaceHolder Structure
};

typedef struct CFrameworkException CFrameworkException, *PCFrameworkException;

struct CFrameworkException { // PlaceHolder Structure
};

typedef struct IXStream IXStream, *PIXStream;

struct IXStream { // PlaceHolder Structure
};

typedef struct CGlobalGameEvent CGlobalGameEvent, *PCGlobalGameEvent;

struct CGlobalGameEvent { // PlaceHolder Structure
};

typedef enum NInfoTypes {
} NInfoTypes;

typedef struct CHanChatSetting CHanChatSetting, *PCHanChatSetting;

struct CHanChatSetting { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CItem - /ClassDataTypes/CItem/CItem

typedef struct SGlobalInfo SGlobalInfo, *PSGlobalInfo;

struct SGlobalInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMessengerModel - /ClassDataTypes/CMessengerModel/CMessengerModel

typedef struct CMembershipManager CMembershipManager, *PCMembershipManager;

struct CMembershipManager { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMetpParser - /ClassDataTypes/CMetpParser/CMetpParser

typedef struct CWnd CWnd, *PCWnd;

struct CWnd { // PlaceHolder Structure
};

typedef struct XMemory XMemory, *PXMemory;

struct XMemory { // PlaceHolder Structure
};

typedef struct CGameBanish CGameBanish, *PCGameBanish;

struct CGameBanish { // PlaceHolder Structure
};

typedef struct CChannelData CChannelData, *PCChannelData;

struct CChannelData { // PlaceHolder Structure
};

typedef struct GA_PRZ_Data GA_PRZ_Data, *PGA_PRZ_Data;

struct GA_PRZ_Data { // PlaceHolder Structure
};

typedef struct CMetpParserRet CMetpParserRet, *PCMetpParserRet;

struct CMetpParserRet { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CPlayerInfo - /ClassDataTypes/CPlayerInfo/CPlayerInfo

typedef struct CGaeaData CGaeaData, *PCGaeaData;

struct CGaeaData { // PlaceHolder Structure
};

typedef struct GA_PRM_UserInfo GA_PRM_UserInfo, *PGA_PRM_UserInfo;

struct GA_PRM_UserInfo { // PlaceHolder Structure
};

typedef struct CParam CParam, *PCParam;

struct CParam { // PlaceHolder Structure
};

typedef struct EncodeLongLong EncodeLongLong, *PEncodeLongLong;

struct EncodeLongLong { // PlaceHolder Structure
};

typedef struct GA_GameValue_Data GA_GameValue_Data, *PGA_GameValue_Data;

struct GA_GameValue_Data { // PlaceHolder Structure
};

typedef struct CFileFind CFileFind, *PCFileFind;

struct CFileFind { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct CAppRunningState CAppRunningState, *PCAppRunningState;

struct CAppRunningState { // PlaceHolder Structure
};

typedef struct CCfgSetting CCfgSetting, *PCCfgSetting;

struct CCfgSetting { // PlaceHolder Structure
};

typedef struct ISocket ISocket, *PISocket;

struct ISocket { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameLobbyModel - /ClassDataTypes/CGameLobbyModel/CGameLobbyModel

typedef struct CSTLogFile CSTLogFile, *PCSTLogFile;

struct CSTLogFile { // PlaceHolder Structure
};

typedef struct CPlayerInfoList CPlayerInfoList, *PCPlayerInfoList;

struct CPlayerInfoList { // PlaceHolder Structure
};

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};

typedef struct CRoomDataList CRoomDataList, *PCRoomDataList;

struct CRoomDataList { // PlaceHolder Structure
};

typedef struct GA_PRM_Data GA_PRM_Data, *PGA_PRM_Data;

struct GA_PRM_Data { // PlaceHolder Structure
};

typedef struct CHgObjectFactory CHgObjectFactory, *PCHgObjectFactory;

struct CHgObjectFactory { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameWarpModel - /ClassDataTypes/CGameWarpModel/CGameWarpModel


// WARNING! conflicting data type names: /Demangler/GA_PRM_MasterInfo - /ClassDataTypes/GA_PRM_MasterInfo/GA_PRM_MasterInfo


// WARNING! conflicting data type names: /Demangler/IParam - /ClassDataTypes/IParam/IParam

typedef struct MessageNode MessageNode, *PMessageNode;

struct MessageNode { // PlaceHolder Structure
};

typedef struct XMemoryStream XMemoryStream, *PXMemoryStream;

struct XMemoryStream { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMembership - /ClassDataTypes/CMembership/CMembership

typedef struct GA_PRM_MoneyInfo GA_PRM_MoneyInfo, *PGA_PRM_MoneyInfo;

struct GA_PRM_MoneyInfo { // PlaceHolder Structure
};

typedef struct CMemberDataList CMemberDataList, *PCMemberDataList;

struct CMemberDataList { // PlaceHolder Structure
};

typedef struct CExitReason CExitReason, *PCExitReason;

struct CExitReason { // PlaceHolder Structure
};

typedef struct CEncodeToWeb CEncodeToWeb, *PCEncodeToWeb;

struct CEncodeToWeb { // PlaceHolder Structure
};

typedef struct CConfLoader CConfLoader, *PCConfLoader;

struct CConfLoader { // PlaceHolder Structure
};

typedef struct __POSITION __POSITION, *P__POSITION;

struct __POSITION { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CRoomData - /ClassDataTypes/CRoomData/CRoomData

typedef struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CSimpleStringT<char,1> CSimpleStringT<char,1>, *PCSimpleStringT<char,1>;

struct CSimpleStringT<char,1> { // PlaceHolder Structure
};

typedef struct IAtlStringMgr IAtlStringMgr, *PIAtlStringMgr;

struct IAtlStringMgr { // PlaceHolder Structure
};

typedef struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct bitset<64> bitset<64>, *Pbitset<64>;

struct bitset<64> { // PlaceHolder Structure
};

typedef struct vector<CChannelstGroupData*,std::allocator<CChannelstGroupData*>_> vector<CChannelstGroupData*,std::allocator<CChannelstGroupData*>_>, *Pvector<CChannelstGroupData*,std::allocator<CChannelstGroupData*>_>;

struct vector<CChannelstGroupData*,std::allocator<CChannelstGroupData*>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct vector<CChannelData*,std::allocator<CChannelData*>_> vector<CChannelData*,std::allocator<CChannelData*>_>, *Pvector<CChannelData*,std::allocator<CChannelData*>_>;

struct vector<CChannelData*,std::allocator<CChannelData*>_> { // PlaceHolder Structure
};

typedef struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *Pvector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Handle _Handle, *P_Handle;

struct _Handle { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;




CBaseLobbyModel * __thiscall CBaseLobbyModel::CBaseLobbyModel(CBaseLobbyModel *this,CBaseLobbyModel *param_1);
CBaseLobbyModel * __thiscall CBaseLobbyModel::operator=(CBaseLobbyModel *this,CBaseLobbyModel *param_1);
CBaseLobbyModel * __thiscall CBaseLobbyModel::CBaseLobbyModel(CBaseLobbyModel *this,char *param_1,bool param_2);
void __thiscall CBaseLobbyModel::~CBaseLobbyModel(CBaseLobbyModel *this);
bool __thiscall CBaseLobbyModel::CBaseLobbyModel::OnAttached(CBaseLobbyModel *this);
bool __thiscall CBaseLobbyModel::CBaseLobbyModel::OnDetached(CBaseLobbyModel *this);
int __thiscall CBaseLobbyModel::CBaseLobbyModel::Msg_ActivateOn(CBaseLobbyModel *this,IParam *param_1);
void __thiscall CMFunctor<CBaseLobbyModel>::scalar_deleting_destructor(CMFunctor<CBaseLobbyModel> *this);
CNetworkModel * __thiscall CNetworkModel::CNetworkModel(CNetworkModel *this,CNetworkModel *param_1);
CNetworkModel * __thiscall CNetworkModel::operator=(CNetworkModel *this,CNetworkModel *param_1);
CNetworkModel * __thiscall CNetworkModel::scalar_deleting_destructor(CNetworkModel *this,byte param_1);
void FUN_60901330(undefined4 *param_1);
void __thiscall CChannelListLobbyModel::CChannelListLobbyModel(CChannelListLobbyModel *this,CChannelListLobbyModel *param_1);
CChannelListLobbyModel * __thiscall CChannelListLobbyModel::operator=(CChannelListLobbyModel *this,CChannelListLobbyModel *param_1);
undefined4 * __thiscall CChannelListLobbyModel::scalar_deleting_destructor(CChannelListLobbyModel *this,byte param_1);
bool __thiscall CChannelListLobbyModel::CChannelListLobbyModel::OnAttached(CChannelListLobbyModel *this);
void __thiscall CChannelListLobbyModel::CChannelListLobbyModel(CChannelListLobbyModel *this);
void __thiscall CChannelListLobbyModel::~CChannelListLobbyModel(CChannelListLobbyModel *this);
int __thiscall CChannelListLobbyModel::Msg_SelectChannel(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_SelectChannelGrp(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_SelectChannelGrpCompulsion(CChannelListLobbyModel *this,IParam *param_1);
void __thiscall CChannelListLobbyModel::Init(CChannelListLobbyModel *this);
void __thiscall CChannelListLobbyModel::Clear(CChannelListLobbyModel *this);
int __thiscall CChannelListLobbyModel::Msg_ConnectChannelLstServer(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_DisconnectChannelLstServer(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_SendGetChannelList(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_FillChannelList(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_ClearChannelGrpList(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_ClearChannelList(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_GetSelectedChannel(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_GetSelectedChannelGrp(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_LoadHsp(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::FilterChannelByName(CChannelListLobbyModel *this,IParam *param_1,int param_2,char *param_3);
int __thiscall CChannelListLobbyModel::Msg_AutoSelectChannel(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_ManualSelectChannel(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_InitSelectChannelGrp(CChannelListLobbyModel *this,IParam *param_1);
void __thiscall CChannelListLobbyModel::SetChannelDataFromParser(CChannelListLobbyModel *this,CChannelData *param_1,int param_2,IParam *param_3);
int __thiscall CChannelListLobbyModel::Msg_CheckEnterableState(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_FailEnterChannel(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_JoinValidate(CChannelListLobbyModel *this,IParam *param_1);
int __thiscall CChannelListLobbyModel::Msg_ShowWindow(CChannelListLobbyModel *this,IParam *param_1);
void __thiscall CChannelListLobbyModel::CChannelListLobbyModel::_SelectChannel_Tetris(CChannelListLobbyModel *this);
void __fastcall FUN_60903600(int *param_1);
undefined4 __cdecl FUN_60904130(undefined4 param_1);
int __thiscall CChannelListLobbyModel::CChannelListLobbyModel::ConnectCdsServer(CChannelListLobbyModel *this);
int * FUN_60904780(int *param_1);
void FUN_609047e0(void);
int * FUN_60904810(int *param_1);
void Catch_All@609048a1(void);
void FUN_609048c0(undefined4 *param_1);
void FUN_60904910(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1);
void FUN_609049b0(void);
void FUN_609049c0(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4);
void FUN_60904a50(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined4 * __fastcall FUN_60904b10(undefined4 param_1,undefined4 *param_2);
void FUN_60904b40(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_60904c20(void);
void FUN_60904c90(void);
void FUN_60904cd0(int *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2,int param_3,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4);
int * FUN_60904db0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_5);
void FUN_60904e50(void);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall FUN_60904ea0(undefined4 param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
void FUN_60904ed0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 * FUN_609050b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
undefined4 * __thiscall FUN_609053a0(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@6090543a(void);
void FUN_60905450(void);
void FUN_60905470(void);
void FUN_609054b0(void);
void __thiscall FUN_609054d0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,undefined4 param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void Catch_All@609056ad(void);
void Catch_All@609057ab(void);
void __thiscall std::length_error::length_error(length_error *this);
undefined4 FUN_609058d0(void);
void FUN_609058f0(exception *param_1);
void FUN_60905910(int *param_1);
undefined4 * __thiscall FUN_60905950(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void Catch_All@609059da(void);
void FUN_609059f0(void);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
undefined4 __thiscall FUN_60905a70(void *this,undefined4 param_1);
void Catch@60905b0b(void);
int __fastcall FUN_60905b30(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void * __fastcall FUN_60905be0(undefined4 param_1,void *param_2);
void __fastcall FUN_60905c10(undefined4 param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4);
void FUN_60905c40(exception *param_1);
void __thiscall CMFunctor<CChannelListLobbyModel>::scalar_deleting_destructor(CMFunctor<CChannelListLobbyModel> *this);
void __thiscall FUN_60905c80(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
void Catch_All@60905cdc(void);
int __cdecl FUN_60905d10(int param_1);
void __fastcall FUN_60905d60(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@60905de0(void);
void __thiscall std::logic_error::~logic_error(logic_error *this);
exception * __thiscall std::invalid_argument::scalar_deleting_destructor(invalid_argument *this,byte param_1);
void FUN_60905e90(exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
int __thiscall std::logic_error::vfunction2(logic_error *this);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
undefined4 FUN_60905fe0(void);
void FUN_60906000(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
void FUN_60906040(exception *param_1);
CChannelLobbyModel * __thiscall CChannelLobbyModel::CChannelLobbyModel(CChannelLobbyModel *this,CChannelLobbyModel *param_1);
CChannelLobbyModel * __thiscall CChannelLobbyModel::operator=(CChannelLobbyModel *this,CChannelLobbyModel *param_1);
void __thiscall CChannelLobbyModel::`default_constructor_closure'(CChannelLobbyModel *this);
undefined4 * __thiscall CChannelLobbyModel::scalar_deleting_destructor(CChannelLobbyModel *this,byte param_1);
bool __thiscall CChannelLobbyModel::CChannelLobbyModel::OnAttached(CChannelLobbyModel *this);
CChannelLobbyModel * __thiscall CChannelLobbyModel::CChannelLobbyModel(CChannelLobbyModel *this,bool param_1);
void __thiscall CBaseLobbyModel::CBaseLobbyModel(CBaseLobbyModel *this);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_ActivateOn(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CBaseLobbyModel::CBaseLobbyModel::Msg_ActivateOff(CBaseLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_FillChannelInfo(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ClearChannelInfo(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ClearMemberList(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ClearRoomList(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ClearItemState(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_EnterChannel(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_AuthEnterChannel(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_EnterChannelByUserId(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendGetMemberList(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ConnectChannelServer(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendGetRoomList(CChannelLobbyModel *this,IParam *param_1);
char * __thiscall CChannelLobbyModel::GetMemberId(CChannelLobbyModel *this,char *param_1);
int __thiscall CChannelLobbyModel::Msg_FillMemberList(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_RefillMemberList(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_FillRoomList(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_FillItemState(CChannelLobbyModel *this,IParam *param_1);
CItem * __thiscall CItem::scalar_deleting_destructor(CItem *this,byte param_1);
int __thiscall CMembership::~CMembership(CMembership *this,IParam *param_1);
CMembership * __thiscall CMembership::scalar_deleting_destructor(CMembership *this,byte param_1);
int __thiscall CChannelLobbyModel::Msg_SendGetItemState(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::SetRoomInfo(CChannelLobbyModel *this,IParam *param_1,bool param_2,int param_3);
CRoomData * __thiscall CRoomData::scalar_deleting_destructor(CRoomData *this,byte param_1);
int __thiscall CChannelLobbyModel::Msg_UpdateRoomInfo(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_AddMember(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_DeleteMember(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_GetMemberInfo(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_GetShutdownTime(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ShutdownExit(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ShutdownNotice(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendEnterRoom(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendExitChannel(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_DisconnectChannelServer(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_DetectGhost(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SetNotice(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_AvatarChange(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendAvatarChange(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendInviteGameToMember(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendResponseInviteGame(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ExitProgramByChannel(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::GetRandomRoomTitle(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_SetCreateRoomOption(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_FillEnterRoomParameter(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_AutoEnterRoom(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ManualEnterRoom(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_LinkGuildPage(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_LinkHomepage(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_LinkHappyBeanpage(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_LinkSPCRoom(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SetSPCRoomString(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_LinkBuyAvatar(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_LinkPhotoAlbum(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_AutoCreateRoom(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_GetEnterRoomType(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendAccuseUser(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ShowWindow(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendTicket(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_RefreshTicket(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_MoveSpecificChannelGrp(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SetGameRate(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SetComplaintAgree(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendComplaintAgree(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_FillClientOptions(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendClientOptions(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SetCouponCount(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendCouponUsed(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_InviteFriendMissionSuccess(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_SetCreateRoomReturn(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_SetRoomPassWordReturn(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_HannotiCommonCode(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::ClearGotoInfo(CChannelLobbyModel *this);
int __thiscall CChannelLobbyModel::Msg_VisitFriend(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_ProcessVisitFriend(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendAuth(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_GetAuth(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendGetUserByMemberId(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_GetUserId(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendMakeUserId(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_GetMakeUserId(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendCheckUserId(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_GetCheckUserId(CChannelLobbyModel *this,IParam *param_1);
char * __thiscall CChannelLobbyModel::GetIndexKeyString(CChannelLobbyModel *this,char *param_1,int param_2);
int __thiscall CChannelLobbyModel::Msg_GaeaPromotionData(CChannelLobbyModel *this,IParam *param_1);
GA_PRM_MasterInfo * __thiscall GA_PRM_MasterInfo::scalar_deleting_destructor(GA_PRM_MasterInfo *this,byte param_1);
int __thiscall CChannelLobbyModel::Msg_GaeaPrizeData(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::Msg_SendGameValueData(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::_FillParam_AutoEnterRoomCreate(CChannelLobbyModel *this,IParam *param_1,int param_2);
int __thiscall CChannelLobbyModel::_FillParam_CreateRoomForInvite(CChannelLobbyModel *this,IParam *param_1);
void __thiscall CChannelLobbyModel::_FillParam_AutoEnterRoomByServer(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::_FillParam_JoinRoomCanView(CChannelLobbyModel *this,IParam *param_1,int param_2,int param_3);
int __thiscall CChannelLobbyModel::_FillParam_Password(CChannelLobbyModel *this,int *param_1,undefined4 param_2,int param_3,undefined **param_5);
void __thiscall CChannelLobbyModel::_UpdateRoomMembers(CChannelLobbyModel *this,IParam *param_1,CRoomData *param_2,int param_3);
void FUN_60912340(undefined4 *param_1);
void __thiscall CChannelLobbyModel::_UpdateRoomViewers(CChannelLobbyModel *this,IParam *param_1,CRoomData *param_2,int param_3,int param_4);
int FUN_60912a40(void);
undefined4 * FUN_60912a60(int *param_1,int *param_2);
void FUN_60912b70(void);
void __fastcall FUN_60912b80(int param_1);
void FUN_60912b90(uint param_1);
int * FUN_60912c70(int *param_1);
int * FUN_60912cf0(int *param_1,int *param_2,int param_3,void *param_4);
void FUN_60912ed0(void);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void __thiscall FUN_60912f70(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void __thiscall std::length_error::length_error(length_error *this);
int * FUN_609131e0(int *param_1,int *param_2);
void FUN_609132e0(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall FUN_609133c0(void *this,undefined4 *param_1,char param_2,void *param_3);
undefined4 * FUN_60913600(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void __thiscall FUN_609138f0(void *this,int param_1);
void __thiscall FUN_60913940(void *this,int param_1);
undefined4 * __thiscall FUN_60913990(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void Catch_All@60913a18(void);
void FUN_60913a30(int *param_1);
undefined1 __fastcall FUN_60913a70(undefined4 param_1,CMetpParserRet *param_2,undefined4 param_3);
undefined1 * Catch@60913b11(void);
undefined1 __thiscall FUN_60913b30(void *this,undefined4 param_1,undefined4 param_2);
undefined1 * Catch@60913bde(void);
undefined4 __fastcall FUN_60913c00(int *param_1);
undefined4 __fastcall FUN_60913c50(int *param_1);
undefined4 __fastcall FUN_60913ca0(int *param_1);
void __thiscall CMFunctor<CChannelLobbyModel>::scalar_deleting_destructor(CMFunctor<CChannelLobbyModel> *this);
undefined1 __fastcall FUN_60913da0(undefined4 param_1,CMetpParserRet *param_2,undefined4 param_3);
undefined1 * Catch@60913e3e(void);
undefined1 __fastcall FUN_60913e60(int *param_1);
undefined4 FUN_60913ea0(undefined4 param_1,int param_2);
undefined4 FUN_60913ed0(HINSTANCE__ *param_1,int param_2);
CGameLobbyModel * __thiscall CGameLobbyModel::CGameLobbyModel(CGameLobbyModel *this,CGameLobbyModel *param_1);
void __thiscall CGameLobbyModel::CGameLobbyModel(CGameLobbyModel *this);
bool __thiscall CGameLobbyModel::CGameLobbyModel::OnAttached(CGameLobbyModel *this);
CGameLobbyModel * __thiscall CGameLobbyModel::CGameLobbyModel(CGameLobbyModel *this,bool param_1);
int __thiscall CGameLobbyModel::CGameLobbyModel::Msg_ActivateOn(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::CGameLobbyModel::Msg_ActivateOff(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_ConnectGameServer(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SetGameRoomInfo(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendEnterRoom(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendExitRoom(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_DisconnectGameServer(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_AddRoomMember(CGameLobbyModel *this,IParam *param_1);
CPlayerInfo * __thiscall CPlayerInfo::scalar_deleting_destructor(CPlayerInfo *this,byte param_1);
int __thiscall CGameLobbyModel::Msg_DeleteRoomMember(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_RoomMemberList(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_ClearPlayerInfoList(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendReport(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendRoomStartNewGame(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendRoomNotice(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendChangeViewerToPlayer(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendAlterRoomOption(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendSetRoomState(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendAvatarChange(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendProvokeItem(CGameLobbyModel *this,IParam *param_1);
int __thiscall CChannelLobbyModel::CChannelLobbyModel::Msg_CheckMyStatus(CChannelLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendChatString(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendReqBanish(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendTimeBanish(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::CGameLobbyModel::GameReport_RefreshPlayerInfo(CGameLobbyModel *this,int param_1,IParam *param_2,CMemberData *param_3);
int __thiscall CGameLobbyModel::CGameLobbyModel::GameReport_RefreshMyInfo(CGameLobbyModel *this);
int __thiscall CGameLobbyModel::CGameLobbyModel::GameReport_RefreshPlayerInfoList(CGameLobbyModel *this,IParam *param_1);
bool __thiscall CGameLobbyModel::CGameLobbyModel::CheckBanishInfo(CGameLobbyModel *this);
int __thiscall CGameLobbyModel::Msg_GameReport(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_AvatarChange(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_OnAltF4KeyDown(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_ForceExitRoom(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_ChangeViewerToPlayer(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_ChatString(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_ReqBanishMember(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_DetectGhost(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_RecvProvokeItem(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendReserveChanceItem(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendAccuseUser(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_GameOver(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_GetShutdownTime(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendClientOptions(CGameLobbyModel *this,IParam *param_1);
char * __thiscall CChannelLobbyModel::GetIndexKeyString(CChannelLobbyModel *this,char *param_1,int param_2,int param_3);
int __thiscall CGameLobbyModel::Msg_GaeaPromotionData(CGameLobbyModel *this,IParam *param_1);
int __thiscall CGameLobbyModel::Msg_SendGameValueData(CGameLobbyModel *this,IParam *param_1);
void __thiscall CMFunctor<CGameLobbyModel>::scalar_deleting_destructor(CMFunctor<CGameLobbyModel> *this);
CGameWarpModel * __thiscall CGameWarpModel::CGameWarpModel(CGameWarpModel *this,CGameWarpModel *param_1);
undefined4 * __thiscall CGameWarpModel::scalar_deleting_destructor(CGameWarpModel *this,byte param_1);
void __fastcall FUN_6091a4a0(char *param_1,int param_2);
void __fastcall FUN_6091a510(char *param_1,int param_2);
void __fastcall FUN_6091a570(char *param_1,int param_2);
void __fastcall FUN_6091a5d0(char *param_1,int param_2);
void __fastcall FUN_6091a630(char *param_1,int param_2);
void __cdecl FUN_6091a690(undefined4 param_1,char *param_2);
void FUN_6091a870(void);
void __fastcall FUN_6091ada0(LPCSTR param_1,char *param_2);
CGameWarpModel * __thiscall CGameWarpModel::CGameWarpModel(CGameWarpModel *this);
bool __thiscall CGameWarpModel::CGameWarpModel::OnAttached(CGameWarpModel *this);
bool __thiscall CGameWarpModel::IsWarpFileReady(CGameWarpModel *this);
bool __thiscall CGameWarpModel::GetBipLogCode(CGameWarpModel *this,char *param_1,char *param_2,int param_3);
void __thiscall CGameWarpModel::FindRecommendedGame(CGameWarpModel *this);
void __thiscall CGameWarpModel::CGameWarpModel::RunHanStart(CGameWarpModel *this,char *param_1);
int __thiscall CGameWarpModel::Msg_RunRecommendedGame(CGameWarpModel *this,IParam *param_1);
int __thiscall CGameWarpModel::Msg_RequestTicketFromGameStringServer(CGameWarpModel *this,IParam *param_1);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __thiscall CGameWarpModel::CGameWarpModel::_GetRecommenedGameID(CGameWarpModel *this,IParam *param_1);
IParam * __thiscall CGameWarpModel::CGameWarpModel::_GetChannelID(CGameWarpModel *this,IParam *param_1,char *param_2);
int __thiscall CGameWarpModel::CGameWarpModel::_OpenGamePage(CGameWarpModel *this,int param_1,char *param_2);
void __thiscall CMFunctor<CGameWarpModel>::scalar_deleting_destructor(CMFunctor<CGameWarpModel> *this);
void __thiscall CMFunctor<CBaseLobbyModel>::vfunction3(CMFunctor<CBaseLobbyModel> *this,undefined4 *param_1);
CHanChatModel * __thiscall CHanChatModel::scalar_deleting_destructor(CHanChatModel *this,byte param_1);
void FUN_6091c260(void);
void FUN_6091c410(void);
void __fastcall FUN_6091c430(undefined4 param_1,char param_2,undefined4 param_3,int param_4,char param_5);
bool __thiscall CHanChatModel::CHanChatModel::OnAttached(CHanChatModel *this);
bool __thiscall CChannelListLobbyModel::CChannelListLobbyModel::OnDetached(CChannelListLobbyModel *this);
CHanChatModel * __thiscall CHanChatModel::CHanChatModel(CHanChatModel *this);
void __thiscall CHanChatModel::~CHanChatModel(CHanChatModel *this);
int __thiscall CHanChatModel::Msg_ProcessHanChatString(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_SendHanChatString(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_SetHanChatSetting(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_ClearChatBuffer(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_GetAccuseBuffer(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_AbuseCheckMessage(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_AddAccuseMessage(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_SetChatEditTextColor(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_ChatNoticeMessage(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::Msg_SendAccuseUser(CHanChatModel *this,IParam *param_1);
int __thiscall CHanChatModel::abuseCheckMessage(CHanChatModel *this,char *param_1);
int __thiscall CHanChatModel::addAccuseMessage(CHanChatModel *this,char *param_1,char *param_2,int param_3);
int __thiscall CHanChatModel::checkAccuseTime(CHanChatModel *this);
int __thiscall CHanChatModel::selfAccuseUser(CHanChatModel *this);
void __thiscall CMFunctor<CHanChatModel>::scalar_deleting_destructor(CMFunctor<CHanChatModel> *this);
CLobbyStateModel * __thiscall CLobbyStateModel::CLobbyStateModel(CLobbyStateModel *this,CLobbyStateModel *param_1);
void __thiscall CLobbyStateModel::`default_constructor_closure'(CLobbyStateModel *this);
CLobbyStateModel * __thiscall CLobbyStateModel::CLobbyStateModel(CLobbyStateModel *this,bool param_1);
void __thiscall CLobbyStateModel::~CLobbyStateModel(CLobbyStateModel *this);
bool __thiscall CLobbyStateModel::CLobbyStateModel::OnAttached(CLobbyStateModel *this);
bool __thiscall CLobbyStateModel::CLobbyStateModel::OnDetached(CLobbyStateModel *this);
int __thiscall CLobbyStateModel::Msg_AddState(CLobbyStateModel *this,IParam *param_1);
void __thiscall CLobbyStateModel::Clear(CLobbyStateModel *this);
int __thiscall CLobbyStateModel::Msg_QueryState(CLobbyStateModel *this,IParam *param_1);
int __thiscall CLobbyStateModel::Msg_MoveNext(CLobbyStateModel *this,IParam *param_1);
int __thiscall CLobbyStateModel::Msg_MovePrev(CLobbyStateModel *this,IParam *param_1);
int __thiscall CLobbyStateModel::Msg_ActivateOffCurState(CLobbyStateModel *this,IParam *param_1);
int * __thiscall FUN_6091e050(void *this,int *param_1);
void Catch_All@6091e158(void);
void __cdecl FUN_6091e170(undefined4 *param_1,undefined4 param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,undefined4 param_4,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_5,undefined4 *param_6);
void __thiscall CMFunctor<CBaseLobbyModel>::vfunction1(CMFunctor<CBaseLobbyModel> *this);
void __thiscall CMFunctor<CLobbyStateModel>::scalar_deleting_destructor(CMFunctor<CLobbyStateModel> *this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_6091e1f0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void Catch_All@6091e24c(void);
void __thiscall CMainFrameModel::~CMainFrameModel(CMainFrameModel *this,CMainFrameModel *param_1);
CMainFrameModel * __thiscall CMainFrameModel::operator=(CMainFrameModel *this,CMainFrameModel *param_1);
void __thiscall CMainFrameModel::~CMainFrameModel(CMainFrameModel *this);
void __thiscall CMainFrameModel::~CMainFrameModel(CMainFrameModel *this);
bool __thiscall CMainFrameModel::CMainFrameModel::OnAttached(CMainFrameModel *this);
bool __thiscall CMainFrameModel::CMainFrameModel::OnDetached(CMainFrameModel *this);
int __thiscall CMainFrameModel::Msg_ReloadHanGame(CMainFrameModel *this,IParam *param_1);
int __thiscall CMainFrameModel::Msg_RemoveUsedFile(CMainFrameModel *this,IParam *param_1);
int __thiscall CMainFrameModel::Msg_Destroy(CMainFrameModel *this,IParam *param_1);
int __thiscall CMainFrameModel::Msg_ShowWindow(CMainFrameModel *this,IParam *param_1);
int __thiscall CMainFrameModel::Msg_EnableWindow(CMainFrameModel *this,IParam *param_1);
void __thiscall CMainFrameModel::DeleteAdvertiseFile(CMainFrameModel *this);
void __thiscall CMFunctor<CMainFrameModel>::scalar_deleting_destructor(CMFunctor<CMainFrameModel> *this);
CMessengerModel * __thiscall CMessengerModel::CMessengerModel(CMessengerModel *this,CMessengerModel *param_1);
CMessengerModel * __thiscall CMessengerModel::operator=(CMessengerModel *this,CMessengerModel *param_1);
undefined4 * __thiscall CMessengerModel::scalar_deleting_destructor(CMessengerModel *this,byte param_1);
CMessengerModel * __thiscall CMessengerModel::CMessengerModel(CMessengerModel *this);
CMessengerModel * __thiscall CMessengerModel::CMessengerModel(CMessengerModel *this,bool param_1);
bool __thiscall CMessengerModel::CMessengerModel::OnAttached(CMessengerModel *this);
int __thiscall CMessengerModel::Msg_MsnConnect(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Msg_MsnIsMessengerOn(CMessengerModel *this,IParam *param_1);
int __thiscall CMetpParser::~CMetpParser(CMetpParser *this,IParam *param_1);
CMetpParser * __thiscall CMetpParser::scalar_deleting_destructor(CMetpParser *this,byte param_1);
int __thiscall CMessengerModel::Msg_MsnAddBuddy(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Msg_MsnSendMemo(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Msg_MsnGetPref(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Msg_MsnSavePref(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Msg_MsnClearBuddyList(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Evt_Msn_OnChannelJoinComplete(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Msg_MsnSendGameInfo(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Msg_MsnSendGameMemberList(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Msg_MsnEndGame(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Evt_MainFrame_OnDestroy(CMessengerModel *this,IParam *param_1);
int __thiscall CMessengerModel::Net_GameReport(CMessengerModel *this,IParam *param_1);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __cdecl FUN_60920240(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1);
void __thiscall CMFunctor<CMessengerModel>::scalar_deleting_destructor(CMFunctor<CMessengerModel> *this);
void FUN_609202f0(void);
CNetworkModel * __cdecl Network(void);
void __thiscall CMFunctor<CNetworkModel>::CMFunctor<CNetworkModel>(CMFunctor<CNetworkModel> *this);
void __thiscall CNetworkModel::~CNetworkModel(CNetworkModel *this);
int __thiscall CNetworkModel::Connect(CNetworkModel *this,char *param_1,char *param_2,uint param_3,bool param_4);
int __thiscall CNetworkModel::Close(CNetworkModel *this,char *param_1);
int __thiscall CNetworkModel::Send(CNetworkModel *this,char *param_1,CMetpParser *param_2,bool param_3);
int __thiscall CNetworkModel::Net_SocketError(CNetworkModel *this,IParam *param_1);
int __thiscall CNetworkModel::SetNetworkMessage(CNetworkModel *this,char *param_1);
ISocket * __thiscall CNetworkModel::Socket(CNetworkModel *this,char *param_1);
int __thiscall CNetworkModel::Net_CheckSocketLife(CNetworkModel *this,IParam *param_1);
int __thiscall CNetworkModel::Evt_OnDestroy(CNetworkModel *this,IParam *param_1);
undefined4 * FUN_60921460(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
int * FUN_60921540(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int * FUN_609215c0(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,int param_3,void *param_4);
int * FUN_60921800(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_60921920(void *this,undefined4 *param_1,char param_2,void *param_3);
undefined4 * FUN_60921b60(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void FUN_60921bb0(void);
void __thiscall CMFunctor<CNetworkModel>::scalar_deleting_destructor(CMFunctor<CNetworkModel> *this);
void __fastcall FUN_60921c60(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5);
IGod * __cdecl God(void);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,char *param_2);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,int param_2);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,__int64 param_2);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,uint param_2);
IFunctor * __cdecl Fnt(_func_int_IParam_ptr *param_1);
CFrameworkException * __cdecl Ex(char *param_1,int param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,char **param_2);
void __thiscall CMetpParser::CMetpParser::SetContext(CMetpParser *this,uint param_1);
uint __thiscall CMetpParser::CMetpParser::GetContext(CMetpParser *this);
char * __thiscall CMetpParser::CMetpParser::GetService(CMetpParser *this);
char * __thiscall CMetpParser::CMetpParser::GetCommand(CMetpParser *this);
int __thiscall CMetpParser::CMetpParser::GetItemCount(CMetpParser *this);
bool __thiscall CMetpParser::CMetpParser::IsConst(CMetpParser *this);
bool __thiscall CMetpParser::CMetpParser::IsExistKey(CMetpParser *this,char *param_1);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,IParam *param_2);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,double param_2);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,ushort param_2);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,__uint64 param_2);
bool __thiscall CMetpParser::CMetpParser::AddValue(CMetpParser *this,char *param_1,ulong param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,IParam **param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,double *param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,ushort *param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,__uint64 *param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,__int64 *param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,uint *param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,long *param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,ulong *param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,int *param_2);
bool __thiscall CMetpParser::CMetpParser::GetValue(CMetpParser *this,char *param_1,bool *param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,IParam *param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,char *param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,double param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,ushort param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,__uint64 param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,__int64 param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,ulong param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,uint param_2);
bool __thiscall CMetpParser::CMetpParser::SetValue(CMetpParser *this,char *param_1,int param_2);
bool __thiscall CMetpParser::CMetpParser::DelKey(CMetpParser *this,char *param_1);
void __thiscall CMetpParser::CMetpParser::Clear(CMetpParser *this);
bool __thiscall CMetpParser::CMetpParser::GetData(CMetpParser *this,void **param_1,int *param_2);
char * __thiscall CMetpParser::CMetpParser::GetIPAddress(CMetpParser *this);
ushort __thiscall CMetpParser::CMetpParser::GetPort(CMetpParser *this);
bool __thiscall CMetpParser::CMetpParser::IsEncrypted(CMetpParser *this);
bool __thiscall CMetpParser::CMetpParser::GetURL(CMetpParser *this,char **param_1,int *param_2);
bool __thiscall CMetpParser::CMetpParser::GetZipURL(CMetpParser *this,char **param_1,int *param_2);
bool __thiscall CMetpParser::CMetpParser::GetEncryptURL(CMetpParser *this,char **param_1,int *param_2,char *param_3,bool param_4);
void __cdecl operator_delete(void *param_1);
void * __cdecl operator_new(uint param_1);
void __cdecl operator_delete[](void *param_1);
CWinThread * AfxGetThread(void);
AFX_MODULE_STATE * AfxGetModuleState(void);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
void AfxThrowInvalidArgException(void);
void __thiscall CStringList::CStringList(CStringList *this,int param_1);
void __thiscall CStringList::~CStringList(CStringList *this);
__POSITION * __thiscall CStringList::Find(CStringList *this,char *param_1,__POSITION *param_2);
void __thiscall CStringList::RemoveAll(CStringList *this);
void __thiscall CFileFind::CFileFind(CFileFind *this);
void __thiscall CFileFind::~CFileFind(CFileFind *this);
int __thiscall CFileFind::FindFile(CFileFind *this,char *param_1,ulong param_2);
int __thiscall CFileFind::FindNextFileA(CFileFind *this);
int __thiscall CFileFind::IsDots(CFileFind *this);
void __thiscall CFileFind::GetFilePath(CFileFind *this);
void __fastcall __security_check_cookie(int param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_60921f10(void);
char * __thiscall std::exception::std::exception::what(exception *this);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_60921fd0(void);
int __cdecl _atexit(_func_4879 *param_1);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_60922370(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_60922505(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __cdecl initterm(void);
void __cdecl initterm_e(void);
void __cdecl _amsg_exit(int param_1);
void __cdecl ___security_init_cookie(void);
void __cdecl _crt_debugger_hook(int param_1);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl except_handler4_common(void);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void __alloca_probe(void);
void Unwind@60922800(void);
void Unwind@60922840(void);
void Unwind@60922880(void);
void Unwind@6092288b(void);
void Unwind@609228d0(void);
void Unwind@609228db(void);
void Unwind@60922910(void);
void Unwind@60922950(void);
void Unwind@6092295c(void);
void Unwind@60922968(void);
void Unwind@60922a10(void);
void Unwind@60922a50(void);
void Unwind@60922a59(void);
void Unwind@60922a80(void);
void Unwind@60922a8c(void);
void Unwind@60922a98(void);
void Unwind@60922aa4(void);
void Unwind@60922ab0(void);
void Unwind@60922abc(void);
void Unwind@60922b00(void);
void Unwind@60922b40(void);
void Unwind@60922b80(void);
void Unwind@60922b8c(void);
void Unwind@60922bd0(void);
void Unwind@60922c10(void);
void Unwind@60922c1c(void);
void Unwind@60922c28(void);
void Unwind@60922c34(void);
void Unwind@60922c40(void);
void Unwind@60922c4c(void);
void Unwind@60922c58(void);
void Unwind@60922ca0(void);
void Unwind@60922cac(void);
void Unwind@60922cf0(void);
void Unwind@60922d30(void);
void Unwind@60922d70(void);
void Unwind@60922db0(void);
void Unwind@60922dbc(void);
void Unwind@60922dc5(void);
void Unwind@60922e00(void);
void Unwind@60922e30(void);
void __thiscall CChannelListLobbyModel::Unwind@60922e60(CChannelListLobbyModel *this);
void Unwind@60922e80(void);
void Unwind@60922eb0(void);
void Unwind@60922ee0(void);
void Unwind@60922f20(void);
void Unwind@60922f50(void);
void Unwind@60922f5c(void);
void Unwind@60922f68(void);
void Unwind@60922f74(void);
void Unwind@60922fb0(void);
void __thiscall CChannelListLobbyModel::Unwind@60922ff0(CChannelListLobbyModel *this);
void Unwind@60923010(void);
void Unwind@60923050(void);
void Unwind@60923080(void);
void Unwind@6092308b(void);
void Unwind@60923097(void);
void Unwind@609230c0(void);
void Unwind@609230f0(void);
void Unwind@60923130(void);
void Unwind@60923170(void);
void Unwind@609231b0(void);
void Unwind@609231bc(void);
void Unwind@609231c8(void);
void Unwind@609231d4(void);
void Unwind@609231e0(void);
void Unwind@609231ec(void);
void Unwind@60923230(void);
void Unwind@6092323e(void);
void Unwind@60923280(void);
void Unwind@6092328c(void);
void Unwind@609232d0(void);
void Unwind@609232de(void);
void Unwind@609232ea(void);
void __thiscall CChannelListLobbyModel::Unwind@60923330(CChannelListLobbyModel *this);
void Unwind@60923350(void);
void Unwind@60923359(void);
void Unwind@60923362(void);
void Unwind@60923390(void);
void Unwind@60923399(void);
void Unwind@609233c0(void);
void Unwind@609233cb(void);
void Unwind@609233d4(void);
void Unwind@609233dd(void);
void Unwind@609233e6(void);
void Unwind@609233ef(void);
void Unwind@609233f8(void);
void Unwind@60923401(void);
void Unwind@6092340a(void);
void Unwind@60923413(void);
void Unwind@6092341c(void);
void Unwind@60923425(void);
void Unwind@6092342e(void);
void Unwind@60923437(void);
void Unwind@60923440(void);
void Unwind@60923449(void);
void Unwind@60923452(void);
void Unwind@6092345b(void);
void Unwind@60923464(void);
void Unwind@6092346d(void);
void Unwind@60923476(void);
void Unwind@6092347f(void);
void Unwind@60923488(void);
void Unwind@60923491(void);
void Unwind@609234c0(void);
void Unwind@609234f0(void);
void Unwind@60923520(void);
void Unwind@60923529(void);
void Unwind@60923532(void);
void Unwind@60923560(void);
void Unwind@6092356b(void);
void Unwind@60923577(void);
void Unwind@609235c0(void);
void Unwind@60923600(void);
void Unwind@6092360e(void);
void Unwind@6092361c(void);
void Unwind@6092362a(void);
void Unwind@60923670(void);
void Unwind@609236b0(void);
void Unwind@609236f0(void);
void Unwind@60923720(void);
void Unwind@60923728(void);
void Unwind@60923750(void);
void Unwind@60923780(void);
void __thiscall CChannelListLobbyModel::Unwind@60923789(CChannelListLobbyModel *this);
void __thiscall CChannelListLobbyModel::Unwind@609237c0(CChannelListLobbyModel *this);
void Unwind@609237e0(void);
void Unwind@60923810(void);
void Unwind@60923819(void);
void Unwind@60923870(void);
void Unwind@609238a0(void);
void Unwind@609238e0(void);
void Unwind@609238e9(void);
void Unwind@60923930(void);
void Unwind@60923960(void);
void Unwind@6092396c(void);
void Unwind@60923978(void);
void Unwind@60923986(void);
void Unwind@609239c0(void);
void Unwind@609239c9(void);
void Unwind@609239d2(void);
void Unwind@609239db(void);
void Unwind@60923a10(void);
void Unwind@60923a40(void);
void Unwind@60923a70(void);
void Unwind@60923aa0(void);
void Unwind@60923aa9(void);
void Unwind@60923ab2(void);
void Unwind@60923abb(void);
void Unwind@60923ae0(void);
void Unwind@60923aec(void);
void Unwind@60923af8(void);
void Unwind@60923b04(void);
void Unwind@60923b10(void);
void Unwind@60923b1c(void);
void Unwind@60923b28(void);
void Unwind@60923b34(void);
void Unwind@60923b40(void);
void Unwind@60923b4c(void);
void Unwind@60923b58(void);
void Unwind@60923b64(void);
void Unwind@60923b70(void);
void Unwind@60923b7c(void);
void Unwind@60923b88(void);
void Unwind@60923bd0(void);
void Unwind@60923bdc(void);
void Unwind@60923be8(void);
void Unwind@60923bf4(void);
void Unwind@60923c30(void);
void Unwind@60923c60(void);
void Unwind@60923c6c(void);
void Unwind@60923c78(void);
void Unwind@60923c84(void);
void Unwind@60923c90(void);
void Unwind@60923c9c(void);
void Unwind@60923ce0(void);
void Unwind@60923cec(void);
void Unwind@60923cf8(void);
void Unwind@60923d04(void);
void Unwind@60923d10(void);
void Unwind@60923d1c(void);
void Unwind@60923d28(void);
void Unwind@60923d34(void);
void Unwind@60923d70(void);
void Unwind@60923d7c(void);
void Unwind@60923dc0(void);
void Unwind@60923dcc(void);
void Unwind@60923dd7(void);
void Unwind@60923de3(void);
void Unwind@60923def(void);
void Unwind@60923dfb(void);
void Unwind@60923e40(void);
void Unwind@60923e70(void);
void Unwind@60923ea0(void);
void Unwind@60923ea9(void);
void Unwind@60923ed0(void);
void Unwind@60923edc(void);
void Unwind@60923ee8(void);
void Unwind@60923f30(void);
void Unwind@60923f39(void);
void Unwind@60923f60(void);
void Unwind@60923f69(void);
void Unwind@60923f72(void);
void Unwind@60923f7b(void);
void Unwind@60923f84(void);
void Unwind@60923f8d(void);
void Unwind@60923fc0(void);
void Unwind@60923fc9(void);
void Unwind@60923ff0(void);
void Unwind@60923ffc(void);
void Unwind@60924040(void);
void Unwind@60924049(void);
void Unwind@60924070(void);
void Unwind@6092407c(void);
void Unwind@609240c0(void);
void Unwind@609240f0(void);
void Unwind@609240fa(void);
void Unwind@60924104(void);
void Unwind@6092410d(void);
void Unwind@60924116(void);
void Unwind@6092411f(void);
void Unwind@60924128(void);
void Unwind@60924131(void);
void Unwind@6092413a(void);
void Unwind@60924143(void);
void Unwind@6092414c(void);
void Unwind@60924155(void);
void Unwind@60924180(void);
void Unwind@6092418d(void);
void Unwind@609241b0(void);
void Unwind@609241f0(void);
void Unwind@60924220(void);
void Unwind@6092422c(void);
void Unwind@60924270(void);
void Unwind@6092427c(void);
void Unwind@60924288(void);
void Unwind@609242d0(void);
void Unwind@60924300(void);
void Unwind@60924330(void);
void Unwind@60924360(void);
void Unwind@609243a0(void);
void Unwind@609243e0(void);
void Unwind@60924420(void);
void Unwind@60924450(void);
void Unwind@6092445c(void);
void Unwind@60924469(void);
void Unwind@60924474(void);
void Unwind@60924480(void);
void Unwind@6092448c(void);
void Unwind@60924498(void);
void Unwind@609244e0(void);
void Unwind@609244ec(void);
void Unwind@609244f5(void);
void Unwind@60924501(void);
void Unwind@6092450d(void);
void Unwind@60924540(void);
void Unwind@6092454c(void);
void Unwind@60924590(void);
void Unwind@60924599(void);
void Unwind@609245e0(void);
void Unwind@60924620(void);
void Unwind@60924660(void);
void Unwind@60924690(void);
void Unwind@6092469c(void);
void Unwind@609246a8(void);
void Unwind@609246b4(void);
void Unwind@609246f0(void);
void Unwind@609246fc(void);
void Unwind@60924708(void);
void Unwind@60924714(void);
void Unwind@60924750(void);
void Unwind@6092475c(void);
void Unwind@60924768(void);
void Unwind@60924774(void);
void Unwind@60924780(void);
void Unwind@609247c0(void);
void Unwind@60924800(void);
void Unwind@60924840(void);
void Unwind@6092484c(void);
void Unwind@60924890(void);
void Unwind@6092489c(void);
void Unwind@609248a9(void);
void Unwind@609248b4(void);
void Unwind@609248c0(void);
void Unwind@609248cc(void);
void Unwind@609248d8(void);
void Unwind@60924920(void);
void FUN_60924950(void);
void FUN_60924980(void);
void FUN_60924a00(void);
void FUN_60924ab0(void);
void FUN_60924ae0(void);
void FUN_60924b50(void);

