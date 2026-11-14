typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    int64_t;
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

typedef struct CF5MainFrmWnd CF5MainFrmWnd, *PCF5MainFrmWnd;

struct CF5MainFrmWnd { // PlaceHolder Class Structure
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

typedef struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>, *PCMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>;

struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> { // PlaceHolder Class Structure
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

typedef struct CF5ChatView CF5ChatView, *PCF5ChatView;

struct CF5ChatView { // PlaceHolder Class Structure
};

typedef struct CF5ChannelLobbyWnd CF5ChannelLobbyWnd, *PCF5ChannelLobbyWnd;

struct CF5ChannelLobbyWnd { // PlaceHolder Class Structure
};

typedef struct CF5GameView CF5GameView, *PCF5GameView;

struct CF5GameView { // PlaceHolder Class Structure
};

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct CF5ConfigLoader CF5ConfigLoader, *PCF5ConfigLoader;

struct CF5ConfigLoader { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct CF5MiniChannelListWnd CF5MiniChannelListWnd, *PCF5MiniChannelListWnd;

struct CF5MiniChannelListWnd { // PlaceHolder Class Structure
};

typedef struct CF5DialogList CF5DialogList, *PCF5DialogList;

struct CF5DialogList { // PlaceHolder Class Structure
};

typedef struct tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>, *PtMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>;

struct tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> { // PlaceHolder Class Structure
};

typedef struct CF5DialogCmp CF5DialogCmp, *PCF5DialogCmp;

struct CF5DialogCmp { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct _s_ESTypeList ESTypeList;

typedef struct CF5MiniChannelListView CF5MiniChannelListView, *PCF5MiniChannelListView;

struct CF5MiniChannelListView { // PlaceHolder Class Structure
};

typedef struct CF5ChannelLobbyView CF5ChannelLobbyView, *PCF5ChannelLobbyView;

struct CF5ChannelLobbyView { // PlaceHolder Class Structure
};

typedef struct CF5MainFrmView CF5MainFrmView, *PCF5MainFrmView;

struct CF5MainFrmView { // PlaceHolder Class Structure
};

typedef struct CF5ChatWnd CF5ChatWnd, *PCF5ChatWnd;

struct CF5ChatWnd { // PlaceHolder Class Structure
};

typedef struct CF5GameWnd CF5GameWnd, *PCF5GameWnd;

struct CF5GameWnd { // PlaceHolder Class Structure
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

typedef struct CF5App CF5App, *PCF5App;

struct CF5App { // PlaceHolder Class Structure
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef ulong DWORD;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef long LONG;

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

struct HWND__ {
    int unused;
};

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct tagMSG *LPMSG;

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

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

typedef short SHORT;

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
    char pdbpath[33];
};

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef WORD ATOM;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef LONG_PTR LRESULT;

typedef struct HICON__ *HICON;

typedef BYTE *PBYTE;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef HICON HCURSOR;

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

typedef struct CMFunctor<CF5DialogCmp>_vftable CMFunctor<CF5DialogCmp>_vftable, *PCMFunctor<CF5DialogCmp>_vftable;

struct CMFunctor<CF5DialogCmp>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CF5ChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CF5DialogCmp> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CF5ChannelLobbyView> virtual function #3
};

typedef struct CMFunctor<CF5DialogCmp> CMFunctor<CF5DialogCmp>, *PCMFunctor<CF5DialogCmp>;

struct CMFunctor<CF5DialogCmp> { // class CMFunctor<CF5DialogCmp> : IFunctor
    struct CMFunctor<CF5DialogCmp>_vftable *vftablePtr;
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


// WARNING! conflicting data type names: /ClassDataTypes/CF5MainFrmWnd/CF5MainFrmWnd - /CF5MainFrmWnd

typedef struct CF5MainFrmWnd_data CF5MainFrmWnd_data, *PCF5MainFrmWnd_data;

struct CF5MainFrmWnd_data {
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
    undefined4 *offset_0x104;
    undefined field261_0x108;
    undefined field262_0x109;
    undefined field263_0x10a;
    undefined field264_0x10b;
    undefined field265_0x10c;
    undefined field266_0x10d;
    undefined field267_0x10e;
    undefined field268_0x10f;
    undefined field269_0x110;
    undefined field270_0x111;
    undefined field271_0x112;
    undefined field272_0x113;
    undefined field273_0x114;
    undefined field274_0x115;
    undefined field275_0x116;
    undefined field276_0x117;
    undefined field277_0x118;
    undefined field278_0x119;
    undefined field279_0x11a;
    undefined field280_0x11b;
    undefined field281_0x11c;
    undefined field282_0x11d;
    undefined field283_0x11e;
    undefined field284_0x11f;
    undefined field285_0x120;
    undefined field286_0x121;
    undefined field287_0x122;
    undefined field288_0x123;
    undefined field289_0x124;
    undefined field290_0x125;
    undefined field291_0x126;
    undefined field292_0x127;
    undefined field293_0x128;
    undefined field294_0x129;
    undefined field295_0x12a;
    undefined field296_0x12b;
    undefined field297_0x12c;
    undefined field298_0x12d;
    undefined field299_0x12e;
    undefined field300_0x12f;
    undefined field301_0x130;
    undefined field302_0x131;
    undefined field303_0x132;
    undefined field304_0x133;
    undefined field305_0x134;
    undefined field306_0x135;
    undefined field307_0x136;
    undefined field308_0x137;
    undefined field309_0x138;
    undefined field310_0x139;
    undefined field311_0x13a;
    undefined field312_0x13b;
    undefined field313_0x13c;
    undefined field314_0x13d;
    undefined field315_0x13e;
    undefined field316_0x13f;
    undefined field317_0x140;
    undefined field318_0x141;
    undefined field319_0x142;
    undefined field320_0x143;
    undefined field321_0x144;
    undefined field322_0x145;
    undefined field323_0x146;
    undefined field324_0x147;
    undefined field325_0x148;
    undefined field326_0x149;
    undefined field327_0x14a;
    undefined field328_0x14b;
    undefined field329_0x14c;
    undefined field330_0x14d;
    undefined field331_0x14e;
    undefined field332_0x14f;
    undefined field333_0x150;
    undefined field334_0x151;
    undefined field335_0x152;
    undefined field336_0x153;
    undefined field337_0x154;
    undefined field338_0x155;
    undefined field339_0x156;
    undefined field340_0x157;
    undefined field341_0x158;
    undefined field342_0x159;
    undefined field343_0x15a;
    undefined field344_0x15b;
    undefined field345_0x15c;
    undefined field346_0x15d;
    undefined field347_0x15e;
    undefined field348_0x15f;
    undefined field349_0x160;
    undefined field350_0x161;
    undefined field351_0x162;
    undefined field352_0x163;
    undefined field353_0x164;
    undefined field354_0x165;
    undefined field355_0x166;
    undefined field356_0x167;
    undefined field357_0x168;
    undefined field358_0x169;
    undefined field359_0x16a;
    undefined field360_0x16b;
    undefined field361_0x16c;
    undefined field362_0x16d;
    undefined field363_0x16e;
    undefined field364_0x16f;
    undefined field365_0x170;
    undefined field366_0x171;
    undefined field367_0x172;
    undefined field368_0x173;
    undefined field369_0x174;
    undefined field370_0x175;
    undefined field371_0x176;
    undefined field372_0x177;
    undefined field373_0x178;
    undefined field374_0x179;
    undefined field375_0x17a;
    undefined field376_0x17b;
    undefined field377_0x17c;
    undefined field378_0x17d;
    undefined field379_0x17e;
    undefined field380_0x17f;
    undefined field381_0x180;
    undefined field382_0x181;
    undefined field383_0x182;
    undefined field384_0x183;
    undefined field385_0x184;
    undefined field386_0x185;
    undefined field387_0x186;
    undefined field388_0x187;
    undefined field389_0x188;
    undefined field390_0x189;
    undefined field391_0x18a;
    undefined field392_0x18b;
    undefined field393_0x18c;
    undefined field394_0x18d;
    undefined field395_0x18e;
    undefined field396_0x18f;
    undefined field397_0x190;
    undefined field398_0x191;
    undefined field399_0x192;
    undefined field400_0x193;
    undefined field401_0x194;
    undefined field402_0x195;
    undefined field403_0x196;
    undefined field404_0x197;
    undefined field405_0x198;
    undefined field406_0x199;
    undefined field407_0x19a;
    undefined field408_0x19b;
    undefined field409_0x19c;
    undefined field410_0x19d;
    undefined field411_0x19e;
    undefined field412_0x19f;
    undefined field413_0x1a0;
    undefined field414_0x1a1;
    undefined field415_0x1a2;
    undefined field416_0x1a3;
    undefined field417_0x1a4;
    undefined field418_0x1a5;
    undefined field419_0x1a6;
    undefined field420_0x1a7;
    undefined field421_0x1a8;
    undefined field422_0x1a9;
    undefined field423_0x1aa;
    undefined field424_0x1ab;
    undefined field425_0x1ac;
    undefined field426_0x1ad;
    undefined field427_0x1ae;
    undefined field428_0x1af;
    undefined field429_0x1b0;
    undefined field430_0x1b1;
    undefined field431_0x1b2;
    undefined field432_0x1b3;
    undefined field433_0x1b4;
    undefined field434_0x1b5;
    undefined field435_0x1b6;
    undefined field436_0x1b7;
    undefined field437_0x1b8;
    undefined field438_0x1b9;
    undefined field439_0x1ba;
    undefined field440_0x1bb;
    undefined field441_0x1bc;
    undefined field442_0x1bd;
    undefined field443_0x1be;
    undefined field444_0x1bf;
    undefined field445_0x1c0;
    undefined field446_0x1c1;
    undefined field447_0x1c2;
    undefined field448_0x1c3;
    undefined field449_0x1c4;
    undefined field450_0x1c5;
    undefined field451_0x1c6;
    undefined field452_0x1c7;
    undefined field453_0x1c8;
    undefined field454_0x1c9;
    undefined field455_0x1ca;
    undefined field456_0x1cb;
    undefined field457_0x1cc;
    undefined field458_0x1cd;
    undefined field459_0x1ce;
    undefined field460_0x1cf;
    undefined field461_0x1d0;
    undefined field462_0x1d1;
    undefined field463_0x1d2;
    undefined field464_0x1d3;
    undefined field465_0x1d4;
    undefined field466_0x1d5;
    undefined field467_0x1d6;
    undefined field468_0x1d7;
    undefined field469_0x1d8;
    undefined field470_0x1d9;
    undefined field471_0x1da;
    undefined field472_0x1db;
    undefined field473_0x1dc;
    undefined field474_0x1dd;
    undefined field475_0x1de;
    undefined field476_0x1df;
    undefined field477_0x1e0;
    undefined field478_0x1e1;
    undefined field479_0x1e2;
    undefined field480_0x1e3;
    undefined field481_0x1e4;
    undefined field482_0x1e5;
    undefined field483_0x1e6;
    undefined field484_0x1e7;
    undefined field485_0x1e8;
    undefined field486_0x1e9;
    undefined field487_0x1ea;
    undefined field488_0x1eb;
    undefined field489_0x1ec;
    undefined field490_0x1ed;
    undefined field491_0x1ee;
    undefined field492_0x1ef;
    undefined field493_0x1f0;
    undefined field494_0x1f1;
    undefined field495_0x1f2;
    undefined field496_0x1f3;
    undefined field497_0x1f4;
    undefined field498_0x1f5;
    undefined field499_0x1f6;
    undefined field500_0x1f7;
    undefined field501_0x1f8;
    undefined field502_0x1f9;
    undefined field503_0x1fa;
    undefined field504_0x1fb;
    undefined field505_0x1fc;
    undefined field506_0x1fd;
    undefined field507_0x1fe;
    undefined field508_0x1ff;
    undefined field509_0x200;
    undefined field510_0x201;
    undefined field511_0x202;
    undefined field512_0x203;
    undefined field513_0x204;
    undefined field514_0x205;
    undefined field515_0x206;
    undefined field516_0x207;
    undefined field517_0x208;
    undefined field518_0x209;
    undefined field519_0x20a;
    undefined field520_0x20b;
    undefined field521_0x20c;
    undefined field522_0x20d;
    undefined field523_0x20e;
    undefined field524_0x20f;
    undefined field525_0x210;
    undefined field526_0x211;
    undefined field527_0x212;
    undefined field528_0x213;
    undefined field529_0x214;
    undefined field530_0x215;
    undefined field531_0x216;
    undefined field532_0x217;
    undefined field533_0x218;
    undefined field534_0x219;
    undefined field535_0x21a;
    undefined field536_0x21b;
    undefined field537_0x21c;
    undefined field538_0x21d;
    undefined field539_0x21e;
    undefined field540_0x21f;
    undefined field541_0x220;
    undefined field542_0x221;
    undefined field543_0x222;
    undefined field544_0x223;
    undefined field545_0x224;
    undefined field546_0x225;
    undefined field547_0x226;
    undefined field548_0x227;
    undefined field549_0x228;
    undefined field550_0x229;
    undefined field551_0x22a;
    undefined field552_0x22b;
    undefined field553_0x22c;
    undefined field554_0x22d;
    undefined field555_0x22e;
    undefined field556_0x22f;
    undefined field557_0x230;
    undefined field558_0x231;
    undefined field559_0x232;
    undefined field560_0x233;
    undefined field561_0x234;
    undefined field562_0x235;
    undefined field563_0x236;
    undefined field564_0x237;
    undefined field565_0x238;
    undefined field566_0x239;
    undefined field567_0x23a;
    undefined field568_0x23b;
    undefined field569_0x23c;
    undefined field570_0x23d;
    undefined field571_0x23e;
    undefined field572_0x23f;
    undefined field573_0x240;
    undefined field574_0x241;
    undefined field575_0x242;
    undefined field576_0x243;
    undefined field577_0x244;
    undefined field578_0x245;
    undefined field579_0x246;
    undefined field580_0x247;
    undefined field581_0x248;
    undefined field582_0x249;
    undefined field583_0x24a;
    undefined field584_0x24b;
    undefined field585_0x24c;
    undefined field586_0x24d;
    undefined field587_0x24e;
    undefined field588_0x24f;
    undefined field589_0x250;
    undefined field590_0x251;
    undefined field591_0x252;
    undefined field592_0x253;
    undefined field593_0x254;
    undefined field594_0x255;
    undefined field595_0x256;
    undefined field596_0x257;
    undefined field597_0x258;
    undefined field598_0x259;
    undefined field599_0x25a;
    undefined field600_0x25b;
    undefined field601_0x25c;
    undefined field602_0x25d;
    undefined field603_0x25e;
    undefined field604_0x25f;
    undefined field605_0x260;
    undefined field606_0x261;
    undefined field607_0x262;
    undefined field608_0x263;
    undefined field609_0x264;
    undefined field610_0x265;
    undefined field611_0x266;
    undefined field612_0x267;
    undefined field613_0x268;
    undefined field614_0x269;
    undefined field615_0x26a;
    undefined field616_0x26b;
    undefined field617_0x26c;
    undefined field618_0x26d;
    undefined field619_0x26e;
    undefined field620_0x26f;
    undefined field621_0x270;
    undefined field622_0x271;
    undefined field623_0x272;
    undefined field624_0x273;
    undefined field625_0x274;
    undefined field626_0x275;
    undefined field627_0x276;
    undefined field628_0x277;
    undefined field629_0x278;
    undefined field630_0x279;
    undefined field631_0x27a;
    undefined field632_0x27b;
    undefined field633_0x27c;
    undefined field634_0x27d;
    undefined field635_0x27e;
    undefined field636_0x27f;
    undefined field637_0x280;
    undefined field638_0x281;
    undefined field639_0x282;
    undefined field640_0x283;
    undefined field641_0x284;
    undefined field642_0x285;
    undefined field643_0x286;
    undefined field644_0x287;
    undefined field645_0x288;
    undefined field646_0x289;
    undefined field647_0x28a;
    undefined field648_0x28b;
    undefined field649_0x28c;
    undefined field650_0x28d;
    undefined field651_0x28e;
    undefined field652_0x28f;
    undefined field653_0x290;
    undefined field654_0x291;
    undefined field655_0x292;
    undefined field656_0x293;
    undefined field657_0x294;
    undefined field658_0x295;
    undefined field659_0x296;
    undefined field660_0x297;
    undefined field661_0x298;
    undefined field662_0x299;
    undefined field663_0x29a;
    undefined field664_0x29b;
    undefined field665_0x29c;
    undefined field666_0x29d;
    undefined field667_0x29e;
    undefined field668_0x29f;
    undefined field669_0x2a0;
    undefined field670_0x2a1;
    undefined field671_0x2a2;
    undefined field672_0x2a3;
    undefined field673_0x2a4;
    undefined field674_0x2a5;
    undefined field675_0x2a6;
    undefined field676_0x2a7;
    undefined field677_0x2a8;
    undefined field678_0x2a9;
    undefined field679_0x2aa;
    undefined field680_0x2ab;
    undefined field681_0x2ac;
    undefined field682_0x2ad;
    undefined field683_0x2ae;
    undefined field684_0x2af;
    undefined field685_0x2b0;
    undefined field686_0x2b1;
    undefined field687_0x2b2;
    undefined field688_0x2b3;
    undefined field689_0x2b4;
    undefined field690_0x2b5;
    undefined field691_0x2b6;
    undefined field692_0x2b7;
    undefined field693_0x2b8;
    undefined field694_0x2b9;
    undefined field695_0x2ba;
    undefined field696_0x2bb;
    undefined field697_0x2bc;
    undefined field698_0x2bd;
    undefined field699_0x2be;
    undefined field700_0x2bf;
    undefined field701_0x2c0;
    undefined field702_0x2c1;
    undefined field703_0x2c2;
    undefined field704_0x2c3;
    undefined field705_0x2c4;
    undefined field706_0x2c5;
    undefined field707_0x2c6;
    undefined field708_0x2c7;
    undefined field709_0x2c8;
    undefined field710_0x2c9;
    undefined field711_0x2ca;
    undefined field712_0x2cb;
    undefined field713_0x2cc;
    undefined field714_0x2cd;
    undefined field715_0x2ce;
    undefined field716_0x2cf;
    undefined field717_0x2d0;
    undefined field718_0x2d1;
    undefined field719_0x2d2;
    undefined field720_0x2d3;
    undefined field721_0x2d4;
    undefined field722_0x2d5;
    undefined field723_0x2d6;
    undefined field724_0x2d7;
    undefined field725_0x2d8;
    undefined field726_0x2d9;
    undefined field727_0x2da;
    undefined field728_0x2db;
    undefined field729_0x2dc;
    undefined field730_0x2dd;
    undefined field731_0x2de;
    undefined field732_0x2df;
    undefined field733_0x2e0;
    undefined field734_0x2e1;
    undefined field735_0x2e2;
    undefined field736_0x2e3;
    undefined field737_0x2e4;
    undefined field738_0x2e5;
    undefined field739_0x2e6;
    undefined field740_0x2e7;
    undefined field741_0x2e8;
    undefined field742_0x2e9;
    undefined field743_0x2ea;
    undefined field744_0x2eb;
    undefined field745_0x2ec;
    undefined field746_0x2ed;
    undefined field747_0x2ee;
    undefined field748_0x2ef;
    undefined field749_0x2f0;
    undefined field750_0x2f1;
    undefined field751_0x2f2;
    undefined field752_0x2f3;
    undefined field753_0x2f4;
    undefined field754_0x2f5;
    undefined field755_0x2f6;
    undefined field756_0x2f7;
    undefined field757_0x2f8;
    undefined field758_0x2f9;
    undefined field759_0x2fa;
    undefined field760_0x2fb;
    undefined field761_0x2fc;
    undefined field762_0x2fd;
    undefined field763_0x2fe;
    undefined field764_0x2ff;
    undefined field765_0x300;
    undefined field766_0x301;
    undefined field767_0x302;
    undefined field768_0x303;
    undefined field769_0x304;
    undefined field770_0x305;
    undefined field771_0x306;
    undefined field772_0x307;
    undefined field773_0x308;
    undefined field774_0x309;
    undefined field775_0x30a;
    undefined field776_0x30b;
    undefined field777_0x30c;
    undefined field778_0x30d;
    undefined field779_0x30e;
    undefined field780_0x30f;
    undefined field781_0x310;
    undefined field782_0x311;
    undefined field783_0x312;
    undefined field784_0x313;
    undefined field785_0x314;
    undefined field786_0x315;
    undefined field787_0x316;
    undefined field788_0x317;
    undefined field789_0x318;
    undefined field790_0x319;
    undefined field791_0x31a;
    undefined field792_0x31b;
    undefined field793_0x31c;
    undefined field794_0x31d;
    undefined field795_0x31e;
    undefined field796_0x31f;
    undefined field797_0x320;
    undefined field798_0x321;
    undefined field799_0x322;
    undefined field800_0x323;
    undefined field801_0x324;
    undefined field802_0x325;
    undefined field803_0x326;
    undefined field804_0x327;
    undefined field805_0x328;
    undefined field806_0x329;
    undefined field807_0x32a;
    undefined field808_0x32b;
    undefined field809_0x32c;
    undefined field810_0x32d;
    undefined field811_0x32e;
    undefined field812_0x32f;
    undefined field813_0x330;
    undefined field814_0x331;
    undefined field815_0x332;
    undefined field816_0x333;
    undefined field817_0x334;
    undefined field818_0x335;
    undefined field819_0x336;
    undefined field820_0x337;
    undefined field821_0x338;
    undefined field822_0x339;
    undefined field823_0x33a;
    undefined field824_0x33b;
    undefined field825_0x33c;
    undefined field826_0x33d;
    undefined field827_0x33e;
    undefined field828_0x33f;
    undefined field829_0x340;
    undefined field830_0x341;
    undefined field831_0x342;
    undefined field832_0x343;
    undefined field833_0x344;
    undefined field834_0x345;
    undefined field835_0x346;
    undefined field836_0x347;
    undefined field837_0x348;
    undefined field838_0x349;
    undefined field839_0x34a;
    undefined field840_0x34b;
    undefined field841_0x34c;
    undefined field842_0x34d;
    undefined field843_0x34e;
    undefined field844_0x34f;
    undefined field845_0x350;
    undefined field846_0x351;
    undefined field847_0x352;
    undefined field848_0x353;
    undefined field849_0x354;
    undefined field850_0x355;
    undefined field851_0x356;
    undefined field852_0x357;
    undefined field853_0x358;
    undefined field854_0x359;
    undefined field855_0x35a;
    undefined field856_0x35b;
    undefined field857_0x35c;
    undefined field858_0x35d;
    undefined field859_0x35e;
    undefined field860_0x35f;
    undefined field861_0x360;
    undefined field862_0x361;
    undefined field863_0x362;
    undefined field864_0x363;
    undefined field865_0x364;
    undefined field866_0x365;
    undefined field867_0x366;
    undefined field868_0x367;
    undefined field869_0x368;
    undefined field870_0x369;
    undefined field871_0x36a;
    undefined field872_0x36b;
    undefined field873_0x36c;
    undefined field874_0x36d;
    undefined field875_0x36e;
    undefined field876_0x36f;
    undefined field877_0x370;
    undefined field878_0x371;
    undefined field879_0x372;
    undefined field880_0x373;
    undefined field881_0x374;
    undefined field882_0x375;
    undefined field883_0x376;
    undefined field884_0x377;
    undefined field885_0x378;
    undefined field886_0x379;
    undefined field887_0x37a;
    undefined field888_0x37b;
    undefined field889_0x37c;
    undefined field890_0x37d;
    undefined field891_0x37e;
    undefined field892_0x37f;
    undefined field893_0x380;
    undefined field894_0x381;
    undefined field895_0x382;
    undefined field896_0x383;
    undefined field897_0x384;
    undefined field898_0x385;
    undefined field899_0x386;
    undefined field900_0x387;
    undefined field901_0x388;
    undefined field902_0x389;
    undefined field903_0x38a;
    undefined field904_0x38b;
    undefined field905_0x38c;
    undefined field906_0x38d;
    undefined field907_0x38e;
    undefined field908_0x38f;
    undefined field909_0x390;
    undefined field910_0x391;
    undefined field911_0x392;
    undefined field912_0x393;
    undefined field913_0x394;
    undefined field914_0x395;
    undefined field915_0x396;
    undefined field916_0x397;
    undefined field917_0x398;
    undefined field918_0x399;
    undefined field919_0x39a;
    undefined field920_0x39b;
    undefined field921_0x39c;
    undefined field922_0x39d;
    undefined field923_0x39e;
    undefined field924_0x39f;
    undefined field925_0x3a0;
    undefined field926_0x3a1;
    undefined field927_0x3a2;
    undefined field928_0x3a3;
    undefined field929_0x3a4;
    undefined field930_0x3a5;
    undefined field931_0x3a6;
    undefined field932_0x3a7;
    undefined field933_0x3a8;
    undefined field934_0x3a9;
    undefined field935_0x3aa;
    undefined field936_0x3ab;
    undefined field937_0x3ac;
    undefined field938_0x3ad;
    undefined field939_0x3ae;
    undefined field940_0x3af;
    undefined field941_0x3b0;
    undefined field942_0x3b1;
    undefined field943_0x3b2;
    undefined field944_0x3b3;
    undefined field945_0x3b4;
    undefined field946_0x3b5;
    undefined field947_0x3b6;
    undefined field948_0x3b7;
    undefined field949_0x3b8;
    undefined field950_0x3b9;
    undefined field951_0x3ba;
    undefined field952_0x3bb;
    undefined field953_0x3bc;
    undefined field954_0x3bd;
    undefined field955_0x3be;
    undefined field956_0x3bf;
    undefined field957_0x3c0;
    undefined field958_0x3c1;
    undefined field959_0x3c2;
    undefined field960_0x3c3;
    undefined field961_0x3c4;
    undefined field962_0x3c5;
    undefined field963_0x3c6;
    undefined field964_0x3c7;
    undefined field965_0x3c8;
    undefined field966_0x3c9;
    undefined field967_0x3ca;
    undefined field968_0x3cb;
    undefined field969_0x3cc;
    undefined field970_0x3cd;
    undefined field971_0x3ce;
    undefined field972_0x3cf;
    undefined field973_0x3d0;
    undefined field974_0x3d1;
    undefined field975_0x3d2;
    undefined field976_0x3d3;
    undefined field977_0x3d4;
    undefined field978_0x3d5;
    undefined field979_0x3d6;
    undefined field980_0x3d7;
    undefined field981_0x3d8;
    undefined field982_0x3d9;
    undefined field983_0x3da;
    undefined field984_0x3db;
    undefined field985_0x3dc;
    undefined field986_0x3dd;
    undefined field987_0x3de;
    undefined field988_0x3df;
    undefined field989_0x3e0;
    undefined field990_0x3e1;
    undefined field991_0x3e2;
    undefined field992_0x3e3;
    undefined field993_0x3e4;
    undefined field994_0x3e5;
    undefined field995_0x3e6;
    undefined field996_0x3e7;
    undefined field997_0x3e8;
    undefined field998_0x3e9;
    undefined field999_0x3ea;
    undefined field1000_0x3eb;
    undefined field1001_0x3ec;
    undefined field1002_0x3ed;
    undefined field1003_0x3ee;
    undefined field1004_0x3ef;
    undefined field1005_0x3f0;
    undefined field1006_0x3f1;
    undefined field1007_0x3f2;
    undefined field1008_0x3f3;
    undefined field1009_0x3f4;
    undefined field1010_0x3f5;
    undefined field1011_0x3f6;
    undefined field1012_0x3f7;
    undefined field1013_0x3f8;
    undefined field1014_0x3f9;
    undefined field1015_0x3fa;
    undefined field1016_0x3fb;
    undefined field1017_0x3fc;
    undefined field1018_0x3fd;
    undefined field1019_0x3fe;
    undefined field1020_0x3ff;
    undefined field1021_0x400;
    undefined field1022_0x401;
    undefined field1023_0x402;
    undefined field1024_0x403;
    undefined field1025_0x404;
    undefined field1026_0x405;
    undefined field1027_0x406;
    undefined field1028_0x407;
    undefined field1029_0x408;
    undefined field1030_0x409;
    undefined field1031_0x40a;
    undefined field1032_0x40b;
    undefined field1033_0x40c;
    undefined field1034_0x40d;
    undefined field1035_0x40e;
    undefined field1036_0x40f;
    undefined field1037_0x410;
    undefined field1038_0x411;
    undefined field1039_0x412;
    undefined field1040_0x413;
    undefined field1041_0x414;
    undefined field1042_0x415;
    undefined field1043_0x416;
    undefined field1044_0x417;
    undefined4 offset_0x418;
};

typedef struct CF5MainFrmWnd_vftable CF5MainFrmWnd_vftable, *PCF5MainFrmWnd_vftable;

struct CF5MainFrmWnd_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CF5MainFrmWnd virtual function #1
    CF5MainFrmWnd * (*deleting_destructor)(void *, byte); // CF5MainFrmWnd virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #3
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CFrameWnd virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CF5MainFrmWnd virtual function #13
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
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CF5MainFrmWnd virtual function #28
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
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #66
    void (*BeginModalState)(void *); // CFrameWnd virtual function #67
    void (*EndModalState)(void *); // CFrameWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CF5MainFrmWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CF5MainFrmWnd virtual function #71
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
    void (*GetTicket)(void *, int); // CF5MainFrmWnd virtual function #104
    void (*RefreshCookie)(void *); // CF5MainFrmWnd virtual function #105
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #106
    void (*DisplayAdWnd)(void *); // CF5MainFrmWnd virtual function #107
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #108
    void (*OnTimer)(void *, uint); // CF5MainFrmWnd virtual function #109
    int (*DeleteEngineObject)(void *); // CF5MainFrmWnd virtual function #110
    int (*DeleteEngineObject)(void *); // CF5MainFrmWnd virtual function #111
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #112
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #113
    void (*Reg_LoadFullScreenSetting)(void *, ulong); // CF5MainFrmWnd virtual function #114
};

typedef struct IFunctor IFunctor, *PIFunctor;

struct IFunctor { // class IFunctor
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CF5App_vftable CF5App_vftable, *PCF5App_vftable;

struct CF5App_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWinApp virtual function #1
    CWinApp * (*deleting_destructor)(void *, byte); // CF5App virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #3
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CCmdTarget virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CF5App virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CCmdTarget virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    int (*InitInstance)(void *); // CF5App virtual function #23
    void (*DialogRun)(void *); // CF5App virtual function #24
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWinThread virtual function #25
    int (*PumpMessage)(void *); // CWinThread virtual function #26
    int (*OnIdle)(void *, long); // CWinApp virtual function #27
    int (*IsIdleMessage)(void *, struct tagMSG *); // CWinThread virtual function #28
    int (*ExitInstance)(void *); // CF5App virtual function #29
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
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #49
    bool (*LoadDefaultObjects)(void *); // CF5App virtual function #50
    bool (*LoadViewObjects)(void *); // CF5App virtual function #51
    bool (*LoadDialogObjects)(void *); // CF5App virtual function #52
    void (*RegWork_LoadFullScreenSetting)(void *); // CF5App virtual function #53
    void (*RegWork_RegisterNotifyWnd)(void *); // CF5App virtual function #54
    void (*RegWork_EraseNotifyWnd)(void *); // CF5App virtual function #55
    void (*CheckTestMode)(void *); // CF5App virtual function #56
    char * (*GetGameChatContent)(void *); // CF5GameWnd virtual function #57
    char * (*GetGameChatContent)(void *); // CF5GameWnd virtual function #58
    char * (*GetGameChatContent)(void *); // CF5GameWnd virtual function #59
    void (*DialogRun)(void *); // CF5App virtual function #60
    int (*DeleteEngineObject)(void *); // CF5MainFrmWnd virtual function #61
    void (*CheckBipLog)(void *); // CF5App virtual function #62
};


// WARNING! conflicting data type names: /ClassDataTypes/CF5App/CF5App - /CF5App

typedef struct CF5App_data CF5App_data, *PCF5App_data;

struct CF5App_data {
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
    undefined4 offset_0xa4;
    undefined4 offset_0xa8;
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


// WARNING! conflicting data type names: /ClassDataTypes/CF5GameView/CF5GameView - /CF5GameView

typedef struct CF5GameView_vftable CF5GameView_vftable, *PCF5GameView_vftable;

struct CF5GameView_vftable {
    bool (*OnAttached)(void *); // CF5GameView virtual function #1
    bool (*OnDetached)(void *); // CF5GameView virtual function #2
    CF5GameView * (*deleting_destructor)(void *, byte); // CF5GameView virtual function #3
    int (*Msg_RegisterGameWnd)(void *, struct IParam *); // CF5GameView virtual function #4
    int (*Msg_GetWindow)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #5
    int (*Evt_GameView_OnAvatarChange)(void *, struct IParam *); // CF5GameView virtual function #6
    int (*Evt_GameView_OnActivateOn)(void *, struct IParam *); // CF5GameView virtual function #7
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #8
    int (*Evt_GameView_OnActivateOnGameWnd)(void *, struct IParam *); // CF5GameView virtual function #9
    int (*Evt_GameView_OnActivateOffGameWnd)(void *, struct IParam *); // CF5GameView virtual function #10
    int (*Evt_GameView_OnForceExitRoom)(void *, struct IParam *); // CF5GameView virtual function #11
    int (*Evt_GameView_OnRecvProvokeItem)(void *, struct IParam *); // CF5GameView virtual function #12
    int (*OnClickExitGameBtn)(void *, struct IParam *); // CF5GameView virtual function #13
};

typedef struct CF5GameView_data CF5GameView_data, *PCF5GameView_data;

struct CF5GameView_data {
    undefined4 *offset_0x0;
    undefined4 offset_0x4;
};


// WARNING! conflicting data type names: /ClassDataTypes/CF5ChatView/CF5ChatView - /CF5ChatView

typedef struct CF5ChatView_vftable CF5ChatView_vftable, *PCF5ChatView_vftable;

struct CF5ChatView_vftable {
    bool (*OnAttached)(void *); // CF5ChatView virtual function #1
    bool (*OnDetached)(void *); // CF5ChatView virtual function #2
    CF5ChatView * (*deleting_destructor)(void *, byte); // CF5ChatView virtual function #3
    int (*Msg_GetWindow)(void *, struct IParam *); // CF5ChatView virtual function #4
    int (*Msg_CreateWindow)(void *, struct IParam *); // CF5ChatView virtual function #5
    int (*Msg_DestroyWindow)(void *, struct IParam *); // CF5ChatView virtual function #6
    int (*Evt_HanChat_OnUpdateHanChat)(void *, struct IParam *); // CF5ChatView virtual function #7
    int (*Evt_HanChat_OnUpdateHanChatSetting)(void *, struct IParam *); // CF5ChatView virtual function #8
    int (*Evt_HanChat_OnClearHanChatBuffer)(void *, struct IParam *); // CF5ChatView virtual function #9
    int (*Evt_HanChat_OnChatNoticeMessage)(void *, struct IParam *); // CF5ChatView virtual function #10
    int (*HanChatEditComboBox_OnGetChatString)(void *, struct IParam *); // CF5ChatView virtual function #11
    int (*SimpleColorPicker_OnColorChange)(void *, struct IParam *); // CF5ChatView virtual function #12
};

typedef struct CF5ChatView_data CF5ChatView_data, *PCF5ChatView_data;

typedef enum ViewType {
} ViewType;

struct CF5ChatView_data {
    int offset_0x0;
    undefined4 *offset_0x4;
    enum ViewType offset_0x8;
    undefined4 offset_0xc;
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


// WARNING! conflicting data type names: /ClassDataTypes/CF5ChannelLobbyView/CF5ChannelLobbyView - /CF5ChannelLobbyView

typedef struct CF5ChannelLobbyView_vftable CF5ChannelLobbyView_vftable, *PCF5ChannelLobbyView_vftable;

struct CF5ChannelLobbyView_vftable {
    bool (*OnAttached)(void *); // CF5ChannelLobbyView virtual function #1
    bool (*OnDetached)(void *); // CF5ChannelLobbyView virtual function #2
    CF5ChannelLobbyView * (*deleting_destructor)(void *, byte); // CF5ChannelLobbyView virtual function #3
    int (*OnDblClickRoomList)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #4
    int (*OnClickChangeChannelBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #5
    int (*OnClickCreateRoomBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #6
    int (*OnClickJoinRoomBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #7
    int (*OnClickViewRoomBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #8
    int (*OnClickRoomAvatar)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #9
    int (*OnDblClickMemberList)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #10
    int (*OnClickDirectStartBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #11
    int (*OnClickRecommendedGameBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #12
    int (*OnClickExitBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #13
    int (*OnClickAutoCreateRoomBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #14
    int (*OnGetItemState)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #15
    int (*OnCloseItemWebDlg)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #16
    int (*OnClickShowItemWebBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #17
    int (*OnClickMyHomepageBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #18
    int (*OnClickGuildWebBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #19
    int (*OnClickThermometer)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #20
    int (*OnClickDonationWebBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #21
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #22
    int (*OnClickShowEmptyRoomBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #23
    int (*OnClickShowRoomNumOrderBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #24
    int (*OnClickSearchRoomBtn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #25
    int (*OnClickSPCRoom)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #26
    int (*Net_Banish)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #27
    int (*Msg_GetWindow)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #28
    int (*Msg_CreateWindow)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #29
    int (*Msg_DestroyWindow)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #30
    int (*Evt_ChannelLobby_OnActivateOn)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #31
    int (*Evt_ChannelLobby_OnActivateOff)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #32
    int (*Evt_ChannelLobby_OnUpdateRoomList)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #33
    int (*Evt_ChannelLobby_OnUpdateMemberList)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #34
    int (*Evt_ChannelLobby_OnUpdateMsnBuddyList)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #35
    int (*Evt_ChannelLobby_OnUpdateNotice)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #36
    int (*Evt_ChannelLobby_OnExitReason_MINUSMONEY)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #37
    int (*Evt_ChannelLobby_OnExitReason_BANISHED)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #38
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #39
    int (*Evt_ChannelLobby_OnExitReason_NOGUAGE)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #40
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #41
    int (*Evt_ChannelLobby_OnExitReason_CANTSTAYCHANNEL)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #42
    int (*Evt_ChannelLobby_OnExitReason_BADUSER)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #43
    int (*Evt_ChannelLobby_OnExitReason_ConnectTypeError)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #44
    int (*Evt_ChannelLobby_OnExitReason_ReserveBanish)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #45
    int (*Evt_ChannelLobby_OnAvatarChange)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #46
    int (*Evt_ChannelLobby_OnUpdateMyInfo)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #47
    int (*Evt_ChannelLobby_OnChannelSocketActive)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #48
    int (*Evt_ChannelLobby_OnChannelJoinComplete)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #49
    int (*Evt_ChannelLobby_FailAutoCreateRoom)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #50
    int (*Evt_LobbyState_OnStateChanged)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #51
    int (*Evt_ChannelLobby_OnUserExitGameRoom)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #52
    int (*Evt_ChannelLobby_OnShowWindow)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #53
    int (*Evt_ChannelLobby_OnSetGameRate)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #54
    int (*Evt_ChannelLobby_OnGetShutdownTime)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #55
    int (*Evt_ChannelLobby_OnShutdownExit)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #56
    int (*Evt_ChannelLobby_OnShutdownNotice)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #57
    int (*Evt_ChannelLobby_OnExitReason_SHUTDOWN)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #58
    int (*Evt_ChannelLobby_OnSetSPCRoomString)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #59
    int (*Evt_ChannelLobby_RefreshTicket)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #60
    int (*Evt_ChannelGaeaPromotionData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #61
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #62
};

typedef struct CF5ChannelLobbyView_data CF5ChannelLobbyView_data, *PCF5ChannelLobbyView_data;

struct CF5ChannelLobbyView_data {
    undefined4 *offset_0x0;
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
    int offset_0x20;
    undefined field30_0x24;
    undefined field31_0x25;
    undefined field32_0x26;
    undefined field33_0x27;
    undefined4 offset_0x28;
};

typedef struct CF5GameWnd_vftable CF5GameWnd_vftable, *PCF5GameWnd_vftable;

struct CF5GameWnd_vftable {
    CF5GameWnd * (*deleting_destructor)(void *, byte); // CF5GameWnd virtual function #1
    bool (*DisplayChatMessage)(void *, uint, char *, int, ulong, int, int, char *); // CF5GameWnd virtual function #2
    bool (*DisplayNoticeMessage)(void *, char *, int, int, char *, char *); // CF5GameWnd virtual function #3
    bool (*DisplayStatusMessage)(void *, char *, int, ulong, int, int, char *); // CF5GameWnd virtual function #4
    void (*CaptureGameScreen)(void *); // CF5GameWnd virtual function #5
    void (*DoExActive)(void *, int); // CF5GameWnd virtual function #6
    void (*ExitGameRoom)(void *); // CF5GameWnd virtual function #7
    void (*AccuseUser)(void *); // CF5GameWnd virtual function #8
    undefined (*vfunction9)(void); // MSVCR90.DLL CF5GameWnd pure virtual function #9
    char * (*GetGameChatContent)(void *); // CF5GameWnd virtual function #10
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #11
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #12
    undefined (*vfunction13)(void); // MSVCR90.DLL CF5GameWnd pure virtual function #13
    undefined (*vfunction14)(void); // MSVCR90.DLL CF5GameWnd pure virtual function #14
    undefined (*vfunction15)(void); // MSVCR90.DLL CF5GameWnd pure virtual function #15
    undefined (*vfunction16)(void); // MSVCR90.DLL CF5GameWnd pure virtual function #16
    undefined (*vfunction17)(void); // MSVCR90.DLL CF5GameWnd pure virtual function #17
    int (*ShowInviteGameToChnlDlg)(void *, bool); // CF5GameWnd virtual function #18
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #19
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #20
    int (*GetGameOptionFromRegistry)(void *); // CF5GameWnd virtual function #21
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #22
    int (*IsActivate)(void *); // CF5GameWnd virtual function #23
    void (*ProcessItemProvokeCommand)(void *, struct IParam *); // CF5GameWnd virtual function #24
    int (*HasRightOfBanish)(void *); // CF5GameWnd virtual function #25
    int (*Evt_OnAddRoomMember)(void *, struct IParam *); // CF5GameWnd virtual function #26
    int (*Evt_OnDeleteRoomMember)(void *, struct IParam *); // CF5GameWnd virtual function #27
    int (*Evt_OnRoomMemberList)(void *, struct IParam *); // CF5GameWnd virtual function #28
    int (*Evt_OnModifyRoomMemberInfo)(void *, struct IParam *); // CF5GameWnd virtual function #29
    int (*Evt_OnEnableHostBanish)(void *, struct IParam *); // CF5GameWnd virtual function #30
    int (*Evt_OnTimeHostBanish)(void *, struct IParam *); // CF5GameWnd virtual function #31
    int (*Evt_OnGameStatusMessage)(void *, struct IParam *); // CF5GameWnd virtual function #32
    int (*Evt_OnChatString)(void *, struct IParam *); // CF5GameWnd virtual function #33
    int (*Evt_OnReqBanishMember)(void *, struct IParam *); // CF5GameWnd virtual function #34
    int (*Evt_OnClickBanishMember)(void *, struct IParam *); // CF5GameWnd virtual function #35
    int (*Evt_OnHostBanishCheck)(void *, struct IParam *); // CF5GameWnd virtual function #36
    int (*Evt_OnConnectTypeError)(void *, struct IParam *); // CF5GameWnd virtual function #37
    int (*Evt_OnItemReserveChance)(void *, struct IParam *); // CF5GameWnd virtual function #38
    int (*Evt_OnStartNewGame)(void *, struct IParam *); // CF5GameWnd virtual function #39
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #40
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #41
    int (*Evt_ChannelLobby_OnUpdateNotice)(void *, struct IParam *); // CF5GameWnd virtual function #42
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #43
    int (*Evt_OnExitGameDuetoShutdown)(void *, struct IParam *); // CF5GameWnd virtual function #44
    int (*Evt_OnGetShutdownTime)(void *, struct IParam *); // CF5GameWnd virtual function #45
    int (*Net_SocketClose)(void *, struct IParam *); // CF5GameWnd virtual function #46
    int (*Net_commandTimeBanish)(void *, struct IParam *); // CF5GameWnd virtual function #47
};


// WARNING! conflicting data type names: /ClassDataTypes/CF5GameWnd/CF5GameWnd - /CF5GameWnd

typedef struct CF5GameWnd_data CF5GameWnd_data, *PCF5GameWnd_data;

struct CF5GameWnd_data {
    undefined4 offset_0x0;
    void *offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    void *offset_0x10;
    void *offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined field18_0x30;
    undefined field19_0x31;
    undefined field20_0x32;
    undefined field21_0x33;
    undefined field22_0x34;
    undefined field23_0x35;
    undefined field24_0x36;
    undefined field25_0x37;
    undefined field26_0x38;
    undefined field27_0x39;
    undefined field28_0x3a;
    undefined field29_0x3b;
    undefined field30_0x3c;
    undefined field31_0x3d;
    undefined field32_0x3e;
    undefined field33_0x3f;
    undefined field34_0x40;
    undefined field35_0x41;
    undefined field36_0x42;
    undefined field37_0x43;
    undefined field38_0x44;
    undefined field39_0x45;
    undefined field40_0x46;
    undefined field41_0x47;
    undefined field42_0x48;
    undefined field43_0x49;
    undefined field44_0x4a;
    undefined field45_0x4b;
    undefined field46_0x4c;
    undefined field47_0x4d;
    undefined field48_0x4e;
    undefined field49_0x4f;
    undefined field50_0x50;
    undefined field51_0x51;
    undefined field52_0x52;
    undefined field53_0x53;
    undefined field54_0x54;
    undefined field55_0x55;
    undefined field56_0x56;
    undefined field57_0x57;
    undefined field58_0x58;
    undefined field59_0x59;
    undefined field60_0x5a;
    undefined field61_0x5b;
    undefined field62_0x5c;
    undefined field63_0x5d;
    undefined field64_0x5e;
    undefined field65_0x5f;
    undefined field66_0x60;
    undefined field67_0x61;
    undefined field68_0x62;
    undefined field69_0x63;
    undefined field70_0x64;
    undefined field71_0x65;
    undefined field72_0x66;
    undefined field73_0x67;
    undefined field74_0x68;
    undefined field75_0x69;
    undefined field76_0x6a;
    undefined field77_0x6b;
    undefined field78_0x6c;
    undefined field79_0x6d;
    undefined field80_0x6e;
    undefined field81_0x6f;
    undefined field82_0x70;
    undefined field83_0x71;
    undefined field84_0x72;
    undefined field85_0x73;
    undefined field86_0x74;
    undefined field87_0x75;
    undefined field88_0x76;
    undefined field89_0x77;
    undefined field90_0x78;
    undefined field91_0x79;
    undefined field92_0x7a;
    undefined field93_0x7b;
    undefined field94_0x7c;
    undefined field95_0x7d;
    undefined field96_0x7e;
    undefined field97_0x7f;
    undefined field98_0x80;
    undefined field99_0x81;
    undefined field100_0x82;
    undefined field101_0x83;
    undefined field102_0x84;
    undefined field103_0x85;
    undefined field104_0x86;
    undefined field105_0x87;
    undefined field106_0x88;
    undefined field107_0x89;
    undefined field108_0x8a;
    undefined field109_0x8b;
    undefined field110_0x8c;
    undefined field111_0x8d;
    undefined field112_0x8e;
    undefined field113_0x8f;
    undefined field114_0x90;
    undefined field115_0x91;
    undefined field116_0x92;
    undefined field117_0x93;
    undefined field118_0x94;
    undefined field119_0x95;
    undefined field120_0x96;
    undefined field121_0x97;
    undefined field122_0x98;
    undefined field123_0x99;
    undefined field124_0x9a;
    undefined field125_0x9b;
    undefined field126_0x9c;
    undefined field127_0x9d;
    undefined field128_0x9e;
    undefined field129_0x9f;
    undefined field130_0xa0;
    undefined field131_0xa1;
    undefined field132_0xa2;
    undefined field133_0xa3;
    undefined field134_0xa4;
    undefined field135_0xa5;
    undefined field136_0xa6;
    undefined field137_0xa7;
    undefined field138_0xa8;
    undefined field139_0xa9;
    undefined field140_0xaa;
    undefined field141_0xab;
    undefined field142_0xac;
    undefined field143_0xad;
    undefined field144_0xae;
    undefined field145_0xaf;
    undefined field146_0xb0;
    undefined field147_0xb1;
    undefined field148_0xb2;
    undefined field149_0xb3;
    undefined field150_0xb4;
    undefined field151_0xb5;
    undefined field152_0xb6;
    undefined field153_0xb7;
    undefined field154_0xb8;
    undefined field155_0xb9;
    undefined field156_0xba;
    undefined field157_0xbb;
    undefined field158_0xbc;
    undefined field159_0xbd;
    undefined field160_0xbe;
    undefined field161_0xbf;
    undefined field162_0xc0;
    undefined field163_0xc1;
    undefined field164_0xc2;
    undefined field165_0xc3;
    undefined field166_0xc4;
    undefined field167_0xc5;
    undefined field168_0xc6;
    undefined field169_0xc7;
    undefined field170_0xc8;
    undefined field171_0xc9;
    undefined field172_0xca;
    undefined field173_0xcb;
    undefined field174_0xcc;
    undefined field175_0xcd;
    undefined field176_0xce;
    undefined field177_0xcf;
    undefined field178_0xd0;
    undefined field179_0xd1;
    undefined field180_0xd2;
    undefined field181_0xd3;
    undefined field182_0xd4;
    undefined field183_0xd5;
    undefined field184_0xd6;
    undefined field185_0xd7;
    undefined field186_0xd8;
    undefined field187_0xd9;
    undefined field188_0xda;
    undefined field189_0xdb;
    undefined field190_0xdc;
    undefined field191_0xdd;
    undefined field192_0xde;
    undefined field193_0xdf;
    undefined field194_0xe0;
    undefined field195_0xe1;
    undefined field196_0xe2;
    undefined field197_0xe3;
    undefined field198_0xe4;
    undefined field199_0xe5;
    undefined field200_0xe6;
    undefined field201_0xe7;
    undefined field202_0xe8;
    undefined field203_0xe9;
    undefined field204_0xea;
    undefined field205_0xeb;
    undefined field206_0xec;
    undefined field207_0xed;
    undefined field208_0xee;
    undefined field209_0xef;
    undefined field210_0xf0;
    undefined field211_0xf1;
    undefined field212_0xf2;
    undefined field213_0xf3;
    undefined field214_0xf4;
    undefined field215_0xf5;
    undefined field216_0xf6;
    undefined field217_0xf7;
    undefined field218_0xf8;
    undefined field219_0xf9;
    undefined field220_0xfa;
    undefined field221_0xfb;
    undefined field222_0xfc;
    undefined field223_0xfd;
    undefined field224_0xfe;
    undefined field225_0xff;
    undefined field226_0x100;
    undefined field227_0x101;
    undefined field228_0x102;
    undefined field229_0x103;
    undefined field230_0x104;
    undefined field231_0x105;
    undefined field232_0x106;
    undefined field233_0x107;
    undefined field234_0x108;
    undefined field235_0x109;
    undefined field236_0x10a;
    undefined field237_0x10b;
    undefined field238_0x10c;
    undefined field239_0x10d;
    undefined field240_0x10e;
    undefined field241_0x10f;
    undefined field242_0x110;
    undefined field243_0x111;
    undefined field244_0x112;
    undefined field245_0x113;
    undefined field246_0x114;
    undefined field247_0x115;
    undefined field248_0x116;
    undefined field249_0x117;
    undefined field250_0x118;
    undefined field251_0x119;
    undefined field252_0x11a;
    undefined field253_0x11b;
    undefined field254_0x11c;
    undefined field255_0x11d;
    undefined field256_0x11e;
    undefined field257_0x11f;
    undefined field258_0x120;
    undefined field259_0x121;
    undefined field260_0x122;
    undefined field261_0x123;
    undefined field262_0x124;
    undefined field263_0x125;
    undefined field264_0x126;
    undefined field265_0x127;
    undefined field266_0x128;
    undefined field267_0x129;
    undefined field268_0x12a;
    undefined field269_0x12b;
    undefined field270_0x12c;
    undefined field271_0x12d;
    undefined field272_0x12e;
    undefined field273_0x12f;
    undefined field274_0x130;
    undefined field275_0x131;
    undefined field276_0x132;
    undefined field277_0x133;
    undefined field278_0x134;
    undefined field279_0x135;
    undefined field280_0x136;
    undefined field281_0x137;
    undefined field282_0x138;
    undefined field283_0x139;
    undefined field284_0x13a;
    undefined field285_0x13b;
    undefined field286_0x13c;
    undefined field287_0x13d;
    undefined field288_0x13e;
    undefined field289_0x13f;
    undefined4 offset_0x140;
    undefined4 offset_0x144;
    undefined4 offset_0x148;
    undefined1 offset_0x14c;
    undefined field294_0x14d;
    undefined field295_0x14e;
    undefined field296_0x14f;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined4 offset_0x158;
    undefined4 offset_0x15c;
};

typedef struct CF5DialogCmp_data CF5DialogCmp_data, *PCF5DialogCmp_data;

struct CF5DialogCmp_data {
    undefined4 offset_0x0;
};


// WARNING! conflicting data type names: /ClassDataTypes/CF5DialogCmp/CF5DialogCmp - /CF5DialogCmp

typedef struct CF5DialogCmp_vftable CF5DialogCmp_vftable, *PCF5DialogCmp_vftable;

struct CF5DialogCmp_vftable {
    bool (*OnAttached)(void *); // CF5DialogCmp virtual function #1
    bool (*OnDetached)(void *); // CF5DialogCmp virtual function #2
    int (*ShowDialog)(void *, char *, struct IParam *); // CF5DialogCmp virtual function #3
    int (*CloseOPenDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #4
    int (*Msg_ShowCreateRoomDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #5
    int (*Msg_ShowRoomPasswordDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #6
    int (*Msg_ShowInviteWaitingDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #7
    int (*Msg_ShowInviteResponseDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #8
    int (*Msg_ShowItemWebDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #9
    int (*Msg_ShowAccuseUserDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #10
    int (*Msg_ShowAccuseConfirmDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #11
    int (*Msg_ShowMemberInfoDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #12
    int (*Msg_ShowSplashWnd)(void *, struct IParam *); // CF5DialogCmp virtual function #13
    int (*Msg_ShowInviteChnlToWebDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #14
    int (*Msg_ShowInviteGameToChnlDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #15
    int (*Msg_ShowSettingDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #16
    int (*Msg_ShowEndingPopupDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #17
    int (*Msg_ShowMsgBox)(void *, struct IParam *); // CF5DialogCmp virtual function #18
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #19
    int (*Msg_ShowDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #20
    int (*Msg_IsWindowVisible)(void *, struct IParam *); // CF5DialogCmp virtual function #21
    int (*Msg_ClearDialogList)(void *, struct IParam *); // CF5DialogCmp virtual function #22
    int (*Msg_IsSplashOn)(void *, struct IParam *); // CF5DialogCmp virtual function #23
    int (*Msg_SplashWndCancel)(void *, struct IParam *); // CF5DialogCmp virtual function #24
    int (*Msg_CreateSplashWnd)(void *, struct IParam *); // CF5DialogCmp virtual function #25
    int (*Msg_ShowShutdownNoticeDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #26
    int (*Msg_ShowShutdownExitDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #27
    int (*Msg_ShowThreadLoadingWnd)(void *, struct IParam *); // CF5DialogCmp virtual function #28
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #29
    int (*Msg_CheckRunningModalDialog)(void *, struct IParam *); // CF5DialogCmp virtual function #30
};

typedef struct CFrameWnd CFrameWnd, *PCFrameWnd;

typedef struct CWnd CWnd, *PCWnd;

struct CCmdTarget { // class CCmdTarget : CObject
    struct CObject CObject;
};

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CFrameWnd { // class CFrameWnd : CWnd
    struct CWnd CWnd;
};

typedef struct CMFunctor<CF5GameWnd>_vftable CMFunctor<CF5GameWnd>_vftable, *PCMFunctor<CF5GameWnd>_vftable;

struct CMFunctor<CF5GameWnd>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CF5ChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CF5GameWnd> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CF5ChannelLobbyView> virtual function #3
};

typedef struct CMFunctor<CF5GameWnd> CMFunctor<CF5GameWnd>, *PCMFunctor<CF5GameWnd>;

struct CMFunctor<CF5GameWnd> { // class CMFunctor<CF5GameWnd> : IFunctor
    struct CMFunctor<CF5GameWnd>_vftable *vftablePtr;
};

typedef struct CMFunctor<CF5MiniChannelListView> CMFunctor<CF5MiniChannelListView>, *PCMFunctor<CF5MiniChannelListView>;

typedef struct CMFunctor<CF5MiniChannelListView>_vftable CMFunctor<CF5MiniChannelListView>_vftable, *PCMFunctor<CF5MiniChannelListView>_vftable;

struct CMFunctor<CF5MiniChannelListView> { // class CMFunctor<CF5MiniChannelListView> : IFunctor
    struct CMFunctor<CF5MiniChannelListView>_vftable *vftablePtr;
};

struct CMFunctor<CF5MiniChannelListView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CF5ChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CF5MiniChannelListView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CF5ChannelLobbyView> virtual function #3
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

typedef struct CMFunctor<CF5ChannelLobbyView> CMFunctor<CF5ChannelLobbyView>, *PCMFunctor<CF5ChannelLobbyView>;

typedef struct CMFunctor<CF5ChannelLobbyView>_vftable CMFunctor<CF5ChannelLobbyView>_vftable, *PCMFunctor<CF5ChannelLobbyView>_vftable;

struct CMFunctor<CF5ChannelLobbyView> { // class CMFunctor<CF5ChannelLobbyView> : IFunctor
    struct CMFunctor<CF5ChannelLobbyView>_vftable *vftablePtr;
};

struct CMFunctor<CF5ChannelLobbyView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CF5ChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CF5ChannelLobbyView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CF5ChannelLobbyView> virtual function #3
};

typedef struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data, *PCMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data;

struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data {
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
    int *offset_0x14;
    undefined4 offset_0x18;
};

typedef struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_vftable CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_vftable, *PCMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_vftable;

struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_vftable {
    CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> * (*deleting_destructor)(void *, byte); // CMapWrapper<...> virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>/CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> - /CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>

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
    void (*vfunction2)(void *); // logic_error virtual function #2
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
    void (*vfunction2)(void *); // logic_error virtual function #2
};

struct logic_error { // class logic_error : exception
    struct logic_error_vftable *vftablePtr;
    struct logic_error_data logic_error_data;
};

typedef struct length_error_vftable length_error_vftable, *Plength_error_vftable;

struct length_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // length_error virtual function #1
    void (*vfunction2)(void *); // logic_error virtual function #2
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
    void (*vfunction2)(void *); // logic_error virtual function #2
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


// WARNING! conflicting data type names: /ClassDataTypes/CF5ConfigLoader/CF5ConfigLoader - /CF5ConfigLoader

typedef struct CF5ConfigLoader_vftable CF5ConfigLoader_vftable, *PCF5ConfigLoader_vftable;

struct CF5ConfigLoader_vftable {
    CF5ConfigLoader * (*deleting_destructor)(void *, byte); // CF5ConfigLoader virtual function #1
};

typedef struct CConfigLoader CConfigLoader, *PCConfigLoader;

struct CConfigLoader { // class CConfigLoader
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CMFunctor<CF5GameView> CMFunctor<CF5GameView>, *PCMFunctor<CF5GameView>;

typedef struct CMFunctor<CF5GameView>_vftable CMFunctor<CF5GameView>_vftable, *PCMFunctor<CF5GameView>_vftable;

struct CMFunctor<CF5GameView> { // class CMFunctor<CF5GameView> : IFunctor
    struct CMFunctor<CF5GameView>_vftable *vftablePtr;
};

struct CMFunctor<CF5GameView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CF5ChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CF5GameView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CF5ChannelLobbyView> virtual function #3
};

typedef struct CF5DialogRoot CF5DialogRoot, *PCF5DialogRoot;

typedef struct CF5DialogRoot_vftable CF5DialogRoot_vftable, *PCF5DialogRoot_vftable;

typedef struct CF5DialogRoot_data CF5DialogRoot_data, *PCF5DialogRoot_data;

struct CF5DialogRoot_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};

struct CF5DialogRoot_vftable {
    CF5DialogRoot * (*deleting_destructor)(void *, byte); // CF5DialogRoot virtual function #1
    void (*RunModalLoop)(void *); // CF5DialogRoot virtual function #2
    char * (*GetGameChatContent)(void *); // CF5GameWnd virtual function #3
    int (*DoModal)(void *); // CF5DialogRoot virtual function #4
    int (*EndDialog)(void *, int); // CF5DialogRoot virtual function #5
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #6
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #7
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #8
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #9
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #10
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #11
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #12
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #13
    void (*OnOK)(void *); // CF5DialogRoot virtual function #14
    void (*OnCancel)(void *); // CF5DialogRoot virtual function #15
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #16
    CFunctor * (*GetSplashCancelFnc)(void *); // CF5DialogRoot virtual function #17
};

struct CF5DialogRoot { // class CF5DialogRoot
    struct CF5DialogRoot_vftable *vftablePtr;
    struct CF5DialogRoot_data CF5DialogRoot_data;
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


// WARNING! conflicting data type names: /ClassDataTypes/CF5MainFrmView/CF5MainFrmView - /CF5MainFrmView

typedef struct CF5MainFrmView_vftable CF5MainFrmView_vftable, *PCF5MainFrmView_vftable;

struct CF5MainFrmView_vftable {
    bool (*OnAttached)(void *); // CF5MainFrmView virtual function #1
    bool (*deleting_destructor)(void *); // CF5MainFrmView virtual function #2
    int (*OnAltF4KeyDown)(void *, struct IParam *); // CF5MainFrmView virtual function #3
    int (*OnClickExitButton)(void *, struct IParam *); // CF5MainFrmView virtual function #4
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #5
    int (*OnClickMinimizeButton)(void *, struct IParam *); // CF5MainFrmView virtual function #6
    int (*OnClickAccuseButton)(void *, struct IParam *); // CF5MainFrmView virtual function #7
    int (*OnClickInviteButton)(void *, struct IParam *); // CF5MainFrmView virtual function #8
    int (*OnClickOptionButton)(void *, struct IParam *); // CF5MainFrmView virtual function #9
    int (*Msg_GetWindow)(void *, struct IParam *); // CF5MainFrmView virtual function #10
    int (*Evt_MainFrame_OnDestroy)(void *, struct IParam *); // CF5MainFrmView virtual function #11
    int (*Evt_MainFrame_OnShowWindow)(void *, struct IParam *); // CF5MainFrmView virtual function #12
    int (*Evt_MainFrame_OnEnableWindow)(void *, struct IParam *); // CF5MainFrmView virtual function #13
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #14
    int (*Evt_Channel_OnChannelJoinCompleted)(void *, struct IParam *); // CF5MainFrmView virtual function #15
    int (*Evt_GameView_OnDisplayModeChanged)(void *, struct IParam *); // CF5MainFrmView virtual function #16
};

typedef struct CMFunctor<CF5MainFrmView>_vftable CMFunctor<CF5MainFrmView>_vftable, *PCMFunctor<CF5MainFrmView>_vftable;

struct CMFunctor<CF5MainFrmView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CF5ChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CF5MainFrmView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CF5ChannelLobbyView> virtual function #3
};

typedef struct CMFunctor<CF5MainFrmView> CMFunctor<CF5MainFrmView>, *PCMFunctor<CF5MainFrmView>;

struct CMFunctor<CF5MainFrmView> { // class CMFunctor<CF5MainFrmView> : IFunctor
    struct CMFunctor<CF5MainFrmView>_vftable *vftablePtr;
};

typedef struct CF5DialogList_vftable CF5DialogList_vftable, *PCF5DialogList_vftable;

struct CF5DialogList_vftable {
    CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> * (*deleting_destructor)(void *, byte); // CF5DialogList virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CF5DialogList/CF5DialogList - /CF5DialogList


// WARNING! conflicting data type names: /ClassDataTypes/CF5ChatWnd/CF5ChatWnd - /CF5ChatWnd

typedef struct CF5ChatWnd_vftable CF5ChatWnd_vftable, *PCF5ChatWnd_vftable;

struct CF5ChatWnd_vftable {
    CF5ChatWnd * (*deleting_destructor)(void *, byte); // CF5ChatWnd virtual function #1
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #3
    void (*OnAppendText)(void *, struct IParam *, char *, ulong, int, int); // CF5ChatWnd virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #5
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #6
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #7
};

typedef struct CF5ChatWnd_data CF5ChatWnd_data, *PCF5ChatWnd_data;

struct CF5ChatWnd_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
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
    undefined field15_0x18;
    undefined field16_0x19;
    undefined field17_0x1a;
    undefined field18_0x1b;
    undefined field19_0x1c;
    undefined field20_0x1d;
    undefined field21_0x1e;
    undefined field22_0x1f;
    undefined field23_0x20;
    undefined field24_0x21;
    undefined field25_0x22;
    undefined field26_0x23;
    undefined field27_0x24;
    undefined field28_0x25;
    undefined field29_0x26;
    undefined field30_0x27;
    undefined field31_0x28;
    undefined field32_0x29;
    undefined field33_0x2a;
    undefined field34_0x2b;
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
    undefined field83_0x5c;
    undefined field84_0x5d;
    undefined field85_0x5e;
    undefined field86_0x5f;
    undefined field87_0x60;
    undefined field88_0x61;
    undefined field89_0x62;
    undefined field90_0x63;
    undefined field91_0x64;
    undefined field92_0x65;
    undefined field93_0x66;
    undefined field94_0x67;
    undefined field95_0x68;
    undefined field96_0x69;
    undefined field97_0x6a;
    undefined field98_0x6b;
    undefined field99_0x6c;
    undefined field100_0x6d;
    undefined field101_0x6e;
    undefined field102_0x6f;
    undefined field103_0x70;
    undefined field104_0x71;
    undefined field105_0x72;
    undefined field106_0x73;
    undefined field107_0x74;
    undefined field108_0x75;
    undefined field109_0x76;
    undefined field110_0x77;
    undefined field111_0x78;
    undefined field112_0x79;
    undefined field113_0x7a;
    undefined field114_0x7b;
    undefined field115_0x7c;
    undefined field116_0x7d;
    undefined field117_0x7e;
    undefined field118_0x7f;
    undefined field119_0x80;
    undefined field120_0x81;
    undefined field121_0x82;
    undefined field122_0x83;
    undefined field123_0x84;
    undefined field124_0x85;
    undefined field125_0x86;
    undefined field126_0x87;
    undefined field127_0x88;
    undefined field128_0x89;
    undefined field129_0x8a;
    undefined field130_0x8b;
    undefined field131_0x8c;
    undefined field132_0x8d;
    undefined field133_0x8e;
    undefined field134_0x8f;
    undefined field135_0x90;
    undefined field136_0x91;
    undefined field137_0x92;
    undefined field138_0x93;
    undefined field139_0x94;
    undefined field140_0x95;
    undefined field141_0x96;
    undefined field142_0x97;
    undefined field143_0x98;
    undefined field144_0x99;
    undefined field145_0x9a;
    undefined field146_0x9b;
    undefined field147_0x9c;
    undefined field148_0x9d;
    undefined field149_0x9e;
    undefined field150_0x9f;
    undefined field151_0xa0;
    undefined field152_0xa1;
    undefined field153_0xa2;
    undefined field154_0xa3;
    undefined field155_0xa4;
    undefined field156_0xa5;
    undefined field157_0xa6;
    undefined field158_0xa7;
    undefined field159_0xa8;
    undefined field160_0xa9;
    undefined field161_0xaa;
    undefined field162_0xab;
    undefined field163_0xac;
    undefined field164_0xad;
    undefined field165_0xae;
    undefined field166_0xaf;
    undefined field167_0xb0;
    undefined field168_0xb1;
    undefined field169_0xb2;
    undefined field170_0xb3;
    undefined field171_0xb4;
    undefined field172_0xb5;
    undefined field173_0xb6;
    undefined field174_0xb7;
    undefined field175_0xb8;
    undefined field176_0xb9;
    undefined field177_0xba;
    undefined field178_0xbb;
    undefined field179_0xbc;
    undefined field180_0xbd;
    undefined field181_0xbe;
    undefined field182_0xbf;
    undefined field183_0xc0;
    undefined field184_0xc1;
    undefined field185_0xc2;
    undefined field186_0xc3;
    undefined field187_0xc4;
    undefined field188_0xc5;
    undefined field189_0xc6;
    undefined field190_0xc7;
    undefined field191_0xc8;
    undefined field192_0xc9;
    undefined field193_0xca;
    undefined field194_0xcb;
    undefined field195_0xcc;
    undefined field196_0xcd;
    undefined field197_0xce;
    undefined field198_0xcf;
    undefined4 offset_0xd0;
};

typedef struct CMFunctor<CF5ChatView> CMFunctor<CF5ChatView>, *PCMFunctor<CF5ChatView>;

typedef struct CMFunctor<CF5ChatView>_vftable CMFunctor<CF5ChatView>_vftable, *PCMFunctor<CF5ChatView>_vftable;

struct CMFunctor<CF5ChatView> { // class CMFunctor<CF5ChatView> : IFunctor
    struct CMFunctor<CF5ChatView>_vftable *vftablePtr;
};

struct CMFunctor<CF5ChatView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CF5ChannelLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CF5ChatView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CF5ChannelLobbyView> virtual function #3
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


// WARNING! conflicting data type names: /ClassDataTypes/CF5MiniChannelListWnd/CF5MiniChannelListWnd - /CF5MiniChannelListWnd

typedef struct CF5MiniChannelListWnd_vftable CF5MiniChannelListWnd_vftable, *PCF5MiniChannelListWnd_vftable;

struct CF5MiniChannelListWnd_vftable {
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #1
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #3
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #6
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #7
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #8
};

typedef struct CF5MiniChannelListWnd_data CF5MiniChannelListWnd_data, *PCF5MiniChannelListWnd_data;

struct CF5MiniChannelListWnd_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
};

typedef struct CF5MiniChannelListView_vftable CF5MiniChannelListView_vftable, *PCF5MiniChannelListView_vftable;

struct CF5MiniChannelListView_vftable {
    bool (*OnAttached)(void *); // CF5MiniChannelListView virtual function #1
    bool (*OnDetached)(void *); // CF5MiniChannelListView virtual function #2
    CF5MiniChannelListView * (*deleting_destructor)(void *, byte); // CF5MiniChannelListView virtual function #3
    int (*OnClickRefreshBtn)(void *, struct IParam *); // CF5MiniChannelListView virtual function #4
    int (*OnClickJoinBtn)(void *, struct IParam *); // CF5MiniChannelListView virtual function #5
    int (*OnClickRoomListBtn)(void *, struct IParam *); // CF5MiniChannelListView virtual function #6
    int (*OnClickAutoJoinBtn)(void *, struct IParam *); // CF5MiniChannelListView virtual function #7
    int (*OnClickGrpListBtn)(void *, struct IParam *); // CF5MiniChannelListView virtual function #8
    int (*OnClickChannelGrpLst)(void *, struct IParam *); // CF5MiniChannelListView virtual function #9
    int (*OnClickChannelLst)(void *, struct IParam *); // CF5MiniChannelListView virtual function #10
    int (*OnCheckEnterableState)(void *, struct IParam *); // CF5MiniChannelListView virtual function #11
    int (*Msg_GetWindow)(void *, struct IParam *); // CF5ChannelLobbyView virtual function #12
    int (*Msg_CreateWindow)(void *, struct IParam *); // CF5MiniChannelListView virtual function #13
    int (*Msg_DestroyWindow)(void *, struct IParam *); // CF5MiniChannelListView virtual function #14
    int (*Evt_MiniChannelList_OnUpdateChannelGrpList)(void *, struct IParam *); // CF5MiniChannelListView virtual function #15
    int (*Evt_MiniChannelList_OnUpdateChannelList)(void *, struct IParam *); // CF5MiniChannelListView virtual function #16
    int (*Evt_MiniChannelList_OnChannelJoinComplete)(void *, struct IParam *); // CF5MiniChannelListView virtual function #17
    int (*Evt_MiniChannelList_OnFailEnterChannel)(void *, struct IParam *); // CF5MiniChannelListView virtual function #18
    int (*Evt_MiniChannelList_OnShowWindow)(void *, struct IParam *); // CF5MiniChannelListView virtual function #19
};


// WARNING! conflicting data type names: /ClassDataTypes/CF5MiniChannelListView/CF5MiniChannelListView - /CF5MiniChannelListView

typedef struct CF5MiniChannelListView_data CF5MiniChannelListView_data, *PCF5MiniChannelListView_data;

struct CF5MiniChannelListView_data {
    undefined4 *offset_0x0;
    undefined4 offset_0x4;
    int offset_0x8;
};

typedef struct CAdFileDownload CAdFileDownload, *PCAdFileDownload;

typedef struct CAdFileDownload_vftable CAdFileDownload_vftable, *PCAdFileDownload_vftable;

struct CAdFileDownload { // class CAdFileDownload
    struct CAdFileDownload_vftable *vftablePtr;
};

struct CAdFileDownload_vftable {
    CAdFileDownload * (*deleting_destructor)(void *, byte); // CAdFileDownload virtual function #1
};

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinThread { // class CWinThread : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CWinApp { // class CWinApp : CWinThread
    struct CWinThread CWinThread;
};


// WARNING! conflicting data type names: /ClassDataTypes/tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>/tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> - /tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>

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


// WARNING! conflicting data type names: /ClassDataTypes/CF5ChannelLobbyWnd/CF5ChannelLobbyWnd - /CF5ChannelLobbyWnd

typedef struct CF5ChannelLobbyWnd_vftable CF5ChannelLobbyWnd_vftable, *PCF5ChannelLobbyWnd_vftable;

struct CF5ChannelLobbyWnd_vftable {
    CF5ChannelLobbyWnd * (*deleting_destructor)(void *, byte); // CF5ChannelLobbyWnd virtual function #1
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #3
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #5
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #6
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #7
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #8
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #9
    void (*CreateCaptionButtons)(void *); // CF5GameWnd virtual function #10
    void (*AfterShowIt)(void *, struct CParam *); // CF5DialogRoot virtual function #11
    void (*OnLobbyStateChanged)(void *, char *, char *); // CF5ChannelLobbyWnd virtual function #12
};

typedef struct CF5ChannelLobbyWnd_data CF5ChannelLobbyWnd_data, *PCF5ChannelLobbyWnd_data;

struct CF5ChannelLobbyWnd_data {
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
};

typedef struct CGameReg CGameReg, *PCGameReg;

struct CGameReg { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHanChatModel - /ClassDataTypes/CHanChatModel/CHanChatModel


// WARNING! conflicting data type names: /Demangler/CItemManager - /ClassDataTypes/CItemManager/CItemManager


// WARNING! conflicting data type names: /Demangler/CWinThread - /ClassDataTypes/CWinThread/CWinThread


// WARNING! conflicting data type names: /Demangler/CMemberData - /ClassDataTypes/CMemberData/CMemberData

typedef struct CGameFinder CGameFinder, *PCGameFinder;

struct CGameFinder { // PlaceHolder Structure
};

typedef struct IGod IGod, *PIGod;

struct IGod { // PlaceHolder Structure
};

typedef struct CFunctor CFunctor, *PCFunctor;

struct CFunctor { // PlaceHolder Structure
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID { // PlaceHolder Structure
};

typedef struct CGlobalGameEvent CGlobalGameEvent, *PCGlobalGameEvent;

struct CGlobalGameEvent { // PlaceHolder Structure
};

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

typedef struct CMetpParser CMetpParser, *PCMetpParser;

struct CMetpParser { // PlaceHolder Structure
};

typedef struct CNetworkController CNetworkController, *PCNetworkController;

struct CNetworkController { // PlaceHolder Structure
};

typedef struct CGameBanish CGameBanish, *PCGameBanish;

struct CGameBanish { // PlaceHolder Structure
};

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

struct tagVARIANT { // PlaceHolder Structure
};

typedef struct IConnectionPoint IConnectionPoint, *PIConnectionPoint;

struct IConnectionPoint { // PlaceHolder Structure
};

typedef struct CPlayerInfo CPlayerInfo, *PCPlayerInfo;

struct CPlayerInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CF5DialogRoot - /ClassDataTypes/CF5DialogRoot/CF5DialogRoot

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};

typedef struct CHttpFile CHttpFile, *PCHttpFile;

struct CHttpFile { // PlaceHolder Structure
};

typedef struct GA_PRM_UserInfo GA_PRM_UserInfo, *PGA_PRM_UserInfo;

struct GA_PRM_UserInfo { // PlaceHolder Structure
};

typedef struct CParam CParam, *PCParam;

struct CParam { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CChannelListLobbyModel - /ClassDataTypes/CChannelListLobbyModel/CChannelListLobbyModel

typedef struct CPrintPreviewState CPrintPreviewState, *PCPrintPreviewState;

struct CPrintPreviewState { // PlaceHolder Structure
};

typedef struct GA_PRZ_Data GA_PRZ_Data, *PGA_PRZ_Data;

struct GA_PRZ_Data { // PlaceHolder Structure
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info


// WARNING! conflicting data type names: /Demangler/CConfigLoader - /ClassDataTypes/CConfigLoader/CConfigLoader

typedef struct SGlobalInfo SGlobalInfo, *PSGlobalInfo;

struct SGlobalInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCfgSetting - /ClassDataTypes/CCfgSetting/CCfgSetting

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFrameWnd - /ClassDataTypes/CFrameWnd/CFrameWnd

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWinApp - /ClassDataTypes/CWinApp/CWinApp

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CAdFileDownload - /ClassDataTypes/CAdFileDownload/CAdFileDownload

typedef struct CHanChatController CHanChatController, *PCHanChatController;

struct CHanChatController { // PlaceHolder Structure
};

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { // PlaceHolder Structure
};

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

struct HACCEL__ { // PlaceHolder Structure
};

typedef struct tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*> tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>, *PtMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>;

struct tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*> { // PlaceHolder Structure
};

typedef enum NThread_State {
} NThread_State;


// WARNING! conflicting data type names: /Demangler/CBaseLobbyModel - /ClassDataTypes/CBaseLobbyModel/CBaseLobbyModel

typedef struct CRoomDataList CRoomDataList, *PCRoomDataList;

struct CRoomDataList { // PlaceHolder Structure
};

typedef struct GA_PRM_Data GA_PRM_Data, *PGA_PRM_Data;

struct GA_PRM_Data { // PlaceHolder Structure
};

typedef struct CHgObjectFactory CHgObjectFactory, *PCHgObjectFactory;

struct CHgObjectFactory { // PlaceHolder Structure
};

typedef struct GA_PRM_MasterInfo GA_PRM_MasterInfo, *PGA_PRM_MasterInfo;

struct GA_PRM_MasterInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameLobbyModel - /ClassDataTypes/CGameLobbyModel/CGameLobbyModel

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};

typedef struct CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*> CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>, *PCMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>;

struct CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*> { // PlaceHolder Structure
};

typedef struct CLobbyStateController CLobbyStateController, *PCLobbyStateController;

struct CLobbyStateController { // PlaceHolder Structure
};

typedef struct CMemberDataList CMemberDataList, *PCMemberDataList;

struct CMemberDataList { // PlaceHolder Structure
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown { // PlaceHolder Structure
};

typedef struct CExitReason CExitReason, *PCExitReason;

struct CExitReason { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCmdTarget - /ClassDataTypes/CCmdTarget/CCmdTarget

typedef struct CGaeaData CGaeaData, *PCGaeaData;

struct CGaeaData { // PlaceHolder Structure
};

typedef struct tagRECT tagRECT, *PtagRECT;

struct tagRECT { // PlaceHolder Structure
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

typedef struct CPlayerInfoList CPlayerInfoList, *PCPlayerInfoList;

struct CPlayerInfoList { // PlaceHolder Structure
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

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ { // PlaceHolder Structure
};

typedef struct CChannelLobbyController CChannelLobbyController, *PCChannelLobbyController;

struct CChannelLobbyController { // PlaceHolder Structure
};

typedef struct CAlarmData CAlarmData, *PCAlarmData;

struct CAlarmData { // PlaceHolder Structure
};

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/IFunctor - /ClassDataTypes/IFunctor/IFunctor

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

typedef struct CInternetSession CInternetSession, *PCInternetSession;

struct CInternetSession { // PlaceHolder Structure
};

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

typedef struct AFX_INTERFACEMAP AFX_INTERFACEMAP, *PAFX_INTERFACEMAP;

struct AFX_INTERFACEMAP { // PlaceHolder Structure
};

typedef struct tagCREATESTRUCTA tagCREATESTRUCTA, *PtagCREATESTRUCTA;

struct tagCREATESTRUCTA { // PlaceHolder Structure
};

typedef struct CHttpConnection CHttpConnection, *PCHttpConnection;

struct CHttpConnection { // PlaceHolder Structure
};

typedef struct AFX_MSGMAP AFX_MSGMAP, *PAFX_MSGMAP;

struct AFX_MSGMAP { // PlaceHolder Structure
};

typedef struct CGameLobbyController CGameLobbyController, *PCGameLobbyController;

struct CGameLobbyController { // PlaceHolder Structure
};

typedef struct CAppRunningState CAppRunningState, *PCAppRunningState;

struct CAppRunningState { // PlaceHolder Structure
};

typedef struct CSwitch2LobbyController CSwitch2LobbyController, *PCSwitch2LobbyController;

struct CSwitch2LobbyController { // PlaceHolder Structure
};

typedef struct CGameReport CGameReport, *PCGameReport;

struct CGameReport { // PlaceHolder Structure
};

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ { // PlaceHolder Structure
};

typedef struct CChannelListLobbyController CChannelListLobbyController, *PCChannelListLobbyController;

struct CChannelListLobbyController { // PlaceHolder Structure
};

typedef struct MessageLog MessageLog, *PMessageLog;

struct MessageLog { // PlaceHolder Structure
};

typedef enum NThread_Location {
} NThread_Location;

typedef struct CRoomData CRoomData, *PCRoomData;

struct CRoomData { // PlaceHolder Structure
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


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CF5DialogRoot*>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CF5DialogRoot*>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CF5DialogRoot*>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CF5DialogRoot*>_>_> { // PlaceHolder Structure
};

typedef struct bitset<64> bitset<64>, *Pbitset<64>;

struct bitset<64> { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct vector<CChannelData*,std::allocator<CChannelData*>_> vector<CChannelData*,std::allocator<CChannelData*>_>, *Pvector<CChannelData*,std::allocator<CChannelData*>_>;

struct vector<CChannelData*,std::allocator<CChannelData*>_> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;




void __cdecl FUN_60a01000(char *param_1,size_t param_2,char *param_3,char param_4);
errno_t __cdecl strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
errno_t __cdecl _splitpath_s(char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize);
int __thiscall CF5App::GetWindowWidth(CF5App *this);
int __thiscall CF5App::GetWindowHeight(CF5App *this);
CF5MiniChannelListView * __thiscall CF5MiniChannelListView::scalar_deleting_destructor(CF5MiniChannelListView *this,byte param_1);
CF5ChannelLobbyView * __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView(CF5ChannelLobbyView *this,CF5ChannelLobbyView *param_1);
CF5ChannelLobbyView * __thiscall CF5ChannelLobbyView::operator=(CF5ChannelLobbyView *this,CF5ChannelLobbyView *param_1);
CF5ChannelLobbyView * __thiscall CF5ChannelLobbyView::scalar_deleting_destructor(CF5ChannelLobbyView *this,byte param_1);
void __thiscall CF5GameView::CF5GameView(CF5GameView *this,CF5GameView *param_1);
CF5GameView * __thiscall CF5GameView::operator=(CF5GameView *this,CF5GameView *param_1);
CF5GameView * __thiscall CF5GameView::scalar_deleting_destructor(CF5GameView *this,byte param_1);
void __thiscall CF5ChatView::CF5ChatView(CF5ChatView *this,CF5ChatView *param_1);
CF5ChatView * __thiscall CF5ChatView::operator=(CF5ChatView *this,CF5ChatView *param_1);
CF5ChatView * __thiscall CF5ChatView::scalar_deleting_destructor(CF5ChatView *this,byte param_1);
void __thiscall CF5MainFrmView::~CF5MainFrmView(CF5MainFrmView *this,CF5MainFrmView *param_1);
tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>* __thiscall tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::operator=(tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this,tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>*param_1);
void __thiscall CF5DialogCmp::CF5DialogCmp(CF5DialogCmp *this,CF5DialogCmp *param_1);
CF5DialogCmp * __thiscall CF5DialogCmp::operator=(CF5DialogCmp *this,CF5DialogCmp *param_1);
void __thiscall CF5MiniChannelListWnd::CF5MiniChannelListWnd(CF5MiniChannelListWnd *this,CF5MiniChannelListWnd *param_1);
CF5MiniChannelListWnd * __thiscall CF5MiniChannelListWnd::operator=(CF5MiniChannelListWnd *this,CF5MiniChannelListWnd *param_1);
void __thiscall CF5ChannelLobbyWnd::CF5ChannelLobbyWnd(CF5ChannelLobbyWnd *this,CF5ChannelLobbyWnd *param_1);
CF5ChannelLobbyWnd * __thiscall CF5ChannelLobbyWnd::operator=(CF5ChannelLobbyWnd *this,CF5ChannelLobbyWnd *param_1);
CF5ChannelLobbyWnd * __thiscall CF5ChannelLobbyWnd::scalar_deleting_destructor(CF5ChannelLobbyWnd *this,byte param_1);
bool __thiscall CF5GameWnd::CF5GameWnd::DisplayChatMessage(CF5GameWnd *this,uint param_1,char *param_2,int param_3,ulong param_4,int param_5,int param_6,char *param_7);
bool __thiscall CF5GameWnd::CF5GameWnd::DisplayNoticeMessage(CF5GameWnd *this,char *param_1,int param_2,int param_3,char *param_4,char *param_5);
bool __thiscall CF5GameWnd::CF5GameWnd::DisplayStatusMessage(CF5GameWnd *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5,char *param_6);
int __thiscall CF5GameWnd::CF5GameWnd::IsActivate(CF5GameWnd *this);
CF5GameWnd * __thiscall CF5GameWnd::scalar_deleting_destructor(CF5GameWnd *this,byte param_1);
char * __thiscall CF5ChatWnd::GetControlNamePrefix(CF5ChatWnd *this);
void __thiscall CF5ChatWnd::SetHanChatViewType(CF5ChatWnd *this,ViewType param_1);
ViewType __thiscall CF5ChatWnd::GetHanChatViewType(CF5ChatWnd *this);
void __thiscall CF5ChatWnd::SetHanChatType(CF5ChatWnd *this,int param_1);
int __thiscall CF5ChatWnd::GetHanChatType(CF5ChatWnd *this);
void __thiscall CF5ChatWnd::CF5ChatWnd(CF5ChatWnd *this,CF5ChatWnd *param_1);
CF5ChatWnd * __thiscall CF5ChatWnd::operator=(CF5ChatWnd *this,CF5ChatWnd *param_1);
CF5ChatWnd * __thiscall CF5ChatWnd::scalar_deleting_destructor(CF5ChatWnd *this,byte param_1);
ulong __thiscall CF5MainFrmWnd::GetFullScreen(CF5MainFrmWnd *this);
void __thiscall CF5GameWnd::CF5GameWnd::CreateCaptionButtons(CF5GameWnd *this);
CF5ConfigLoader * __thiscall CF5ConfigLoader::CF5ConfigLoader(CF5ConfigLoader *this,CF5ConfigLoader *param_1);
CF5ConfigLoader * __thiscall CF5ConfigLoader::operator=(CF5ConfigLoader *this,CF5ConfigLoader *param_1);
CF5ConfigLoader * __thiscall CF5ConfigLoader::scalar_deleting_destructor(CF5ConfigLoader *this,byte param_1);
undefined4 FUN_60a018a0(void);
undefined4 FUN_60a01920(void);
void __cdecl FUN_60a019c0(HMODULE param_1);
undefined4 FUN_60a01f10(void);
CItemManager * FUN_60a021e0(void);
CItemManager * __thiscall CItemManager::scalar_deleting_destructor(CItemManager *this,byte param_1);
CMemberData * FUN_60a02260(void);
CMemberData * __thiscall CMemberData::scalar_deleting_destructor(CMemberData *this,byte param_1);
CCfgSetting * FUN_60a022e0(void);
CCfgSetting * __thiscall CCfgSetting::scalar_deleting_destructor(CCfgSetting *this,byte param_1);
CF5App * __thiscall CF5App::CF5App(CF5App *this);
void __thiscall CF5App::~CF5App(CF5App *this);
void __thiscall CF5App::RegisterDefaultHandlers(CF5App *this);
bool __thiscall CF5App::CF5App::LoadDefaultObjects(CF5App *this);
undefined1 * Catch@60a028cc(void);
CChannelListLobbyModel * __thiscall CChannelListLobbyModel::scalar_deleting_destructor(CChannelListLobbyModel *this,byte param_1);
CChannelLobbyModel * __thiscall CChannelLobbyModel::scalar_deleting_destructor(CChannelLobbyModel *this,byte param_1);
CGameLobbyModel * __thiscall CGameLobbyModel::scalar_deleting_destructor(CGameLobbyModel *this,byte param_1);
CBaseLobbyModel * __thiscall CBaseLobbyModel::scalar_deleting_destructor(CBaseLobbyModel *this,byte param_1);
CHanChatModel * __thiscall CHanChatModel::scalar_deleting_destructor(CHanChatModel *this,byte param_1);
CGameWarpModel * __thiscall CGameWarpModel::scalar_deleting_destructor(CGameWarpModel *this,byte param_1);
CMessengerModel * __thiscall CMessengerModel::scalar_deleting_destructor(CMessengerModel *this,byte param_1);
void __thiscall CF5App::ConfigurationStart(CF5App *this);
undefined4 Catch@60a02a5f(void);
bool __thiscall CF5App::CF5App::LoadViewObjects(CF5App *this);
int __thiscall CF5App::_CheckAnotherMutex(CF5App *this);
bool __thiscall CF5App::CF5App::LoadDialogObjects(CF5App *this);
int __thiscall CF5App::CF5App::ExitInstance(CF5App *this);
char * __thiscall CF5GameWnd::CF5GameWnd::GetGameChatContent(CF5GameWnd *this);
void __thiscall CF5App::CF5App::RegWork_LoadFullScreenSetting(CF5App *this);
void __thiscall CF5App::CF5App::RegWork_RegisterNotifyWnd(CF5App *this);
void __thiscall CF5App::CF5App::RegWork_EraseNotifyWnd(CF5App *this);
void __thiscall CF5App::CF5App::CheckTestMode(CF5App *this);
void __thiscall CF5App::RegisterPlatformConverters(CF5App *this);
void __thiscall CF5App::CF5App::DialogRun(CF5App *this);
int __thiscall CF5MainFrmWnd::CF5MainFrmWnd::DeleteEngineObject(CF5MainFrmWnd *this);
void __thiscall CF5App::CF5App::CheckBipLog(CF5App *this);
void FUN_60a03610(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::logic_error::vfunction2(logic_error *this);
void __thiscall std::length_error::length_error(length_error *this);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void FUN_60a037f0(exception *param_1);
void FUN_60a03810(exception *param_1);
CWinApp * __thiscall CF5App::scalar_deleting_destructor(CF5App *this,byte param_1);
void __thiscall CF5MiniChannelListView::CF5MiniChannelListView(CF5MiniChannelListView *this,CF5MiniChannelListView *param_1);
CF5MiniChannelListView * __thiscall CF5MiniChannelListView::operator=(CF5MiniChannelListView *this,CF5MiniChannelListView *param_1);
AFX_MSGMAP * __thiscall CF5App::CF5App::GetMessageMap(CF5App *this);
void __thiscall CF5App::_RegisterpacketConverters(CF5App *this);
int __thiscall CF5App::CF5App::InitInstance(CF5App *this);
void __fastcall FUN_60a03d50(undefined4 *param_1);
undefined4 __thiscall FUN_60a03d60(void *this,char *param_1);
void * __cdecl FUN_60a03db0(void *param_1,int param_2,void *param_3);
void * FUN_60a03df0(void *param_1,int param_2,void *param_3);
void __fastcall FUN_60a03e30(undefined4 *param_1);
int * __thiscall FUN_60a03e70(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,void *param_5);
undefined4 * __thiscall FUN_60a03f00(void *this,int param_1);
void __fastcall FUN_60a03fe0(undefined4 *param_1);
CF5GameWnd * __thiscall CF5GameWnd::CF5GameWnd(CF5GameWnd *this,CF5GameWnd *param_1);
undefined4 * __thiscall FUN_60a04180(void *this,undefined4 *param_1);
CF5GameWnd * __thiscall CF5GameWnd::operator=(CF5GameWnd *this,CF5GameWnd *param_1);
void __thiscall CF5ChannelLobbyView::~CF5ChannelLobbyView(CF5ChannelLobbyView *this);
bool __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnDetached(CF5ChannelLobbyView *this);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Msg_GetWindow(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Msg_CreateWindow(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Msg_DestroyWindow(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnActivateOff(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateRoomList(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMemberList(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMsnBuddyList(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateNotice(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_NOGUAGE(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_CANTSTAYCHANNEL(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_ConnectTypeError(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_ReserveBanish(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnAvatarChange(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMyInfo(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnChannelSocketActive(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnChannelJoinComplete(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_LobbyState_OnStateChanged(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnDblClickRoomList(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickChangeChannelBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickCreateRoomBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickJoinRoomBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickViewRoomBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickRoomAvatar(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnDblClickMemberList(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickDirectStartBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickRecommendedGameBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickExitBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickAutoCreateRoomBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnGetItemState(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnCloseItemWebDlg(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickShowItemWebBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickMyHomepageBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickGuildWebBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickThermometer(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickDonationWebBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickShowEmptyRoomBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickShowRoomNumOrderBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickSearchRoomBtn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnShowWindow(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnClickSPCRoom(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnSetSPCRoomString(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Net_Banish(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnSetGameRate(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnGetShutdownTime(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnShutdownExit(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnShutdownNotice(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_SHUTDOWN(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelGaeaPromotionData(CF5ChannelLobbyView *this,IParam *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
exception * __thiscall std::out_of_range::scalar_deleting_destructor(out_of_range *this,byte param_1);
CF5ChannelLobbyView * __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView(CF5ChannelLobbyView *this);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnActivateOn(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_MINUSMONEY(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_BANISHED(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_BADUSER(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_FailAutoCreateRoom(CF5ChannelLobbyView *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_RefreshTicket(CF5ChannelLobbyView *this,IParam *param_1);
undefined4 __thiscall FUN_60a05f40(void *this,undefined4 param_1);
void Catch@60a05fd7(void);
void FUN_60a06000(exception *param_1);
void __thiscall FUN_60a06020(void *this,uint param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelLobby_OnUserExitGameRoom(CF5ChannelLobbyView *this,IParam *param_1);
void __thiscall CMFunctor<CF5ChannelLobbyView>::scalar_deleting_destructor(CMFunctor<CF5ChannelLobbyView> *this);
CMFunctor<CF5ChannelLobbyView> * __thiscall CMFunctor<CF5ChannelLobbyView>::CMFunctor<CF5ChannelLobbyView>(CMFunctor<CF5ChannelLobbyView> *this,CF5ChannelLobbyWnd *param_1,int param_2);
bool __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::OnAttached(CF5ChannelLobbyView *this);
CF5ChannelLobbyWnd * __thiscall CF5ChannelLobbyWnd::CF5ChannelLobbyWnd(CF5ChannelLobbyWnd *this);
void __thiscall CF5ChannelLobbyWnd::~CF5ChannelLobbyWnd(CF5ChannelLobbyWnd *this);
void __thiscall CF5ChannelLobbyWnd::CF5ChannelLobbyWnd::OnLobbyStateChanged(CF5ChannelLobbyWnd *this,char *param_1,char *param_2);
bool __thiscall CF5ChatView::CF5ChatView::OnDetached(CF5ChatView *this);
void __thiscall CF5ChatView::~CF5ChatView(CF5ChatView *this);
int __thiscall CF5ChatView::CF5ChatView::Msg_GetWindow(CF5ChatView *this,IParam *param_1);
int __thiscall CF5ChatView::CF5ChatView::Msg_CreateWindow(CF5ChatView *this,IParam *param_1);
int __thiscall CF5ChatView::CF5ChatView::Msg_DestroyWindow(CF5ChatView *this,IParam *param_1);
int __thiscall CF5ChatView::CF5ChatView::Evt_HanChat_OnUpdateHanChat(CF5ChatView *this,IParam *param_1);
int __thiscall CF5ChatView::CF5ChatView::HanChatEditComboBox_OnGetChatString(CF5ChatView *this,IParam *param_1);
int __thiscall CF5ChatView::CF5ChatView::Evt_HanChat_OnUpdateHanChatSetting(CF5ChatView *this,IParam *param_1);
int __thiscall CF5ChatView::CF5ChatView::Evt_HanChat_OnClearHanChatBuffer(CF5ChatView *this,IParam *param_1);
int __thiscall CF5ChatView::CF5ChatView::Evt_HanChat_OnChatNoticeMessage(CF5ChatView *this,IParam *param_1);
int __thiscall CF5ChatView::CF5ChatView::SimpleColorPicker_OnColorChange(CF5ChatView *this,IParam *param_1);
void __thiscall CF5ChatView::CF5ChatView(CF5ChatView *this);
void __thiscall CMFunctor<CF5ChannelLobbyView>::vfunction1(CMFunctor<CF5ChannelLobbyView> *this);
void __thiscall CMFunctor<CF5ChannelLobbyView>::vfunction3(CMFunctor<CF5ChannelLobbyView> *this,undefined4 *param_1);
void __thiscall CMFunctor<CF5ChatView>::scalar_deleting_destructor(CMFunctor<CF5ChatView> *this);
bool __thiscall CF5ChatView::CF5ChatView::OnAttached(CF5ChatView *this);
CMFunctor<CF5ChatView> * __thiscall CMFunctor<CF5ChatView>::CMFunctor<CF5ChatView>(CMFunctor<CF5ChatView> *this,CF5ChatWnd *param_1,ViewType param_2,int param_3);
CF5ChatWnd * __thiscall CF5ChatWnd::CF5ChatWnd(CF5ChatWnd *this);
void __thiscall CF5ChatWnd::~CF5ChatWnd(CF5ChatWnd *this);
void __thiscall CF5ChatWnd::SetControlNamePrefix(CF5ChatWnd *this,char *param_1);
void __thiscall CF5ChatWnd::CF5ChatWnd::OnAppendText(CF5ChatWnd *this,IParam *param_1,char *param_2,ulong param_3,int param_4,int param_5);
CF5ConfigLoader * __thiscall CF5ConfigLoader::CF5ConfigLoader(CF5ConfigLoader *this);
void __thiscall CF5ConfigLoader::~CF5ConfigLoader(CF5ConfigLoader *this);
void __fastcall FUN_60a07c60(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_60a07cd0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __cdecl FUN_60a07d50(void *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
void __thiscall FUN_60a07db0(void *this,uint param_1);
undefined4 *FUN_60a07e40(undefined4 param_1,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@60a07ebf(void);
void __thiscall CF5ConfigLoader::Load(CF5ConfigLoader *this,char *param_1);
void __cdecl F5Firewall::On(void);
void __cdecl F5Firewall::Off(void);
void __thiscall CF5GameView::~CF5GameView(CF5GameView *this);
bool __thiscall CF5GameView::CF5GameView::OnDetached(CF5GameView *this);
int __thiscall CF5GameView::CF5GameView::Evt_GameView_OnAvatarChange(CF5GameView *this,IParam *param_1);
int __thiscall CF5GameView::CF5GameView::Evt_GameView_OnActivateOn(CF5GameView *this,IParam *param_1);
int __thiscall CF5GameView::CF5GameView::OnClickExitGameBtn(CF5GameView *this,IParam *param_1);
int __thiscall CF5GameView::CF5GameView::Evt_GameView_OnActivateOnGameWnd(CF5GameView *this,IParam *param_1);
int __thiscall CF5GameView::CF5GameView::Evt_GameView_OnActivateOffGameWnd(CF5GameView *this,IParam *param_1);
int __thiscall CF5GameView::CF5GameView::Evt_GameView_OnForceExitRoom(CF5GameView *this,IParam *param_1);
int __thiscall CF5GameView::CF5GameView::Evt_GameView_OnRecvProvokeItem(CF5GameView *this,IParam *param_1);
int __thiscall CF5GameView::Evt_RoomGaeaPrizeData(CF5GameView *this,IParam *param_1);
void __thiscall CF5GameView::CF5GameView(CF5GameView *this);
void __thiscall CMFunctor<CF5GameView>::scalar_deleting_destructor(CMFunctor<CF5GameView> *this);
bool __thiscall CF5GameView::CF5GameView::OnAttached(CF5GameView *this);
int __thiscall CF5GameView::CF5GameView::Msg_RegisterGameWnd(CF5GameView *this,IParam *param_1);
CF5GameWnd * __cdecl AfxGetGameWnd(void);
int __thiscall CF5GameWnd::ActivateOff(CF5GameWnd *this,IParam *param_1);
void __thiscall CF5GameWnd::CF5GameWnd::DoExActive(CF5GameWnd *this,int param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnAddRoomMember(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnRoomMemberList(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnModifyRoomMemberInfo(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnTimeHostBanish(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnChatString(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnReqBanishMember(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView::Evt_ChannelGaeaPrizeData(CF5ChannelLobbyView *this,IParam *param_1);
void __thiscall CF5GameWnd::CF5GameWnd::ProcessItemProvokeCommand(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnStartNewGame(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Net_commandTimeBanish(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Net_SocketClose(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnHostBanishCheck(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnConnectTypeError(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnGameStatusMessage(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_ChannelLobby_OnUpdateNotice(CF5GameWnd *this,IParam *param_1);
void __thiscall CF5GameWnd::CF5GameWnd::CaptureGameScreen(CF5GameWnd *this);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnExitGameDuetoShutdown(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnGetShutdownTime(CF5GameWnd *this,IParam *param_1);
void __thiscall CF5GameWnd::CF5GameWnd::ExitGameRoom(CF5GameWnd *this);
CMemberData * __thiscall CF5GameWnd::GetMemberData(CF5GameWnd *this,char *param_1);
int __thiscall CF5GameWnd::ShowMemberInfoDialog(CF5GameWnd *this,char *param_1);
int __thiscall CF5GameWnd::SendReport(CF5GameWnd *this,int param_1,char *param_2,CGameReport *param_3,char *param_4);
int __thiscall CF5GameWnd::SendCommonChatString(CF5GameWnd *this,char *param_1,ulong param_2,char *param_3);
void __thiscall CF5GameWnd::SendStartNewGame(CF5GameWnd *this);
void __thiscall CF5GameWnd::SendSetRoomState(CF5GameWnd *this,int param_1);
void __thiscall CF5GameWnd::SendAlterRoomOption(CF5GameWnd *this,char *param_1,char *param_2,char *param_3);
void __thiscall CF5GameWnd::InvokeItemAutoWebDialog(CF5GameWnd *this,char *param_1);
int __thiscall CF5GameWnd::SendReserveChanceItem(CF5GameWnd *this,int param_1,int param_2);
void __thiscall CF5GameWnd::SendProvokeItem(CF5GameWnd *this);
void __thiscall CF5GameWnd::CF5GameWnd::AccuseUser(CF5GameWnd *this);
void __thiscall CF5GameWnd::SetBaseGameOption(CF5GameWnd *this,int param_1,int param_2,int param_3);
int __thiscall CF5GameWnd::CF5GameWnd::GetGameOptionFromRegistry(CF5GameWnd *this);
int __thiscall CF5GameWnd::CF5GameWnd::ShowInviteGameToChnlDlg(CF5GameWnd *this,bool param_1);
int __thiscall CF5GameWnd::CF5GameWnd::HasRightOfBanish(CF5GameWnd *this);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnDeleteRoomMember(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnItemReserveChance(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::ActivateOn(CF5GameWnd *this,IParam *param_1);
void __cdecl FUN_60a0ab80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void * __cdecl FUN_60a0aba0(void *param_1,int param_2,int param_3);
void __thiscall CMFunctor<CF5GameWnd>::scalar_deleting_destructor(CMFunctor<CF5GameWnd> *this);
undefined4 * __fastcall FUN_60a0abf0(undefined4 *param_1);
void __thiscall CF5GameWnd::GetPlayerCount(CF5GameWnd *this,int *param_1,int *param_2);
undefined4 * FUN_60a0ad90(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_60a0adc0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnEnableHostBanish(CF5GameWnd *this,IParam *param_1);
int __thiscall CF5GameWnd::CF5GameWnd::Evt_OnClickBanishMember(CF5GameWnd *this,IParam *param_1);
void __thiscall FUN_60a0b200(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall CF5GameWnd::~CF5GameWnd(CF5GameWnd *this);
void __thiscall CF5GameWnd::CF5GameWnd(CF5GameWnd *this);
void __thiscall CF5MainFrmView::~CF5MainFrmView(CF5MainFrmView *this);
int __thiscall CF5MainFrmView::CF5MainFrmView::OnAltF4KeyDown(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::OnClickExitButton(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::OnClickAccuseButton(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::OnClickInviteButton(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::OnClickOptionButton(CF5MainFrmView *this,IParam *param_1);
void __thiscall CF5MainFrmView::~CF5MainFrmView(CF5MainFrmView *this);
bool __thiscall CF5MainFrmView::CF5MainFrmView::OnDetached(CF5MainFrmView *this);
int __thiscall CF5MainFrmView::CF5MainFrmView::Msg_GetWindow(CF5MainFrmView *this,IParam *param_1);
CF5MainFrmWnd * __thiscall CF5MainFrmView::GetMainWnd(CF5MainFrmView *this);
int __thiscall CF5MainFrmView::CF5MainFrmView::OnClickMinimizeButton(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::Evt_GameView_OnDisplayModeChanged(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::Evt_Channel_OnChannelJoinCompleted(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::Evt_MainFrame_OnDestroy(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::Evt_MainFrame_OnShowWindow(CF5MainFrmView *this,IParam *param_1);
int __thiscall CF5MainFrmView::CF5MainFrmView::Evt_MainFrame_OnEnableWindow(CF5MainFrmView *this,IParam *param_1);
void __thiscall CMFunctor<CF5MainFrmView>::scalar_deleting_destructor(CMFunctor<CF5MainFrmView> *this);
bool __thiscall CF5MainFrmView::CF5MainFrmView::OnAttached(CF5MainFrmView *this);
int __thiscall CF5DialogRoot::IsModal(CF5DialogRoot *this);
CFunctor * __thiscall CF5DialogRoot::CF5DialogRoot::GetSplashCancelFnc(CF5DialogRoot *this);
CF5DialogRoot * __thiscall CF5DialogRoot::CF5DialogRoot(CF5DialogRoot *this,CF5DialogRoot *param_1);
CF5DialogRoot * __thiscall CF5DialogRoot::operator=(CF5DialogRoot *this,CF5DialogRoot *param_1);
CF5DialogRoot * __thiscall CF5DialogRoot::scalar_deleting_destructor(CF5DialogRoot *this,byte param_1);
CF5DialogList * __thiscall CF5DialogList::scalar_deleting_destructor(CF5DialogList *this,byte param_1);
CRuntimeClass * CF5MainFrmWnd::_GetBaseClass(void);
CRuntimeClass * __thiscall CF5MainFrmWnd::CF5MainFrmWnd::GetRuntimeClass(CF5MainFrmWnd *this);
CAdFileDownload * __thiscall CAdFileDownload::CAdFileDownload(CAdFileDownload *this);
CAdFileDownload * __thiscall CAdFileDownload::scalar_deleting_destructor(CAdFileDownload *this,byte param_1);
void __thiscall CF5MainFrmWnd::~CF5MainFrmWnd(CF5MainFrmWnd *this);
int __thiscall CF5MainFrmWnd::CF5MainFrmWnd::PreCreateWindow(CF5MainFrmWnd *this,tagCREATESTRUCTA *param_1);
long __thiscall CF5MainFrmWnd::CF5MainFrmWnd::WindowProc(CF5MainFrmWnd *this,uint param_1,uint param_2,long param_3);
void __thiscall CF5MainFrmWnd::CF5MainFrmWnd::GetTicket(CF5MainFrmWnd *this,int param_1);
int __thiscall CF5MainFrmWnd::CF5MainFrmWnd::PreTranslateMessage(CF5MainFrmWnd *this,tagMSG *param_1);
CF5DialogRoot * __thiscall CF5MainFrmWnd::GetCurModalDlg(CF5MainFrmWnd *this);
void __thiscall CF5MainFrmWnd::SetCurModalDlg(CF5MainFrmWnd *this,CF5DialogRoot *param_1);
long __thiscall CF5MainFrmWnd::OnHanNotify(CF5MainFrmWnd *this,uint param_1,long param_2);
void __thiscall CF5MainFrmWnd::CF5MainFrmWnd::Reg_LoadFullScreenSetting(CF5MainFrmWnd *this,ulong param_1);
void __thiscall CF5MainFrmWnd::RegWork_SaveFullScreenSetting(CF5MainFrmWnd *this);
map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CF5DialogRoot*>_>_>* __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::Map(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
void __cdecl FUN_60a0d240(int param_1);
void __cdecl FUN_60a0d260(int *param_1);
void __thiscall FUN_60a0d280(void *this,int param_1);
void __thiscall FUN_60a0d2d0(void *this,int *param_1);
void FUN_60a0d330(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
CF5MainFrmWnd * __thiscall CF5MainFrmWnd::scalar_deleting_destructor(CF5MainFrmWnd *this,byte param_1);
int __thiscall CF5MainFrmWnd::OnCreate(CF5MainFrmWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CF5MainFrmWnd::OnDestroy(CF5MainFrmWnd *this);
void __thiscall CF5MainFrmWnd::CF5MainFrmWnd::RefreshCookie(CF5MainFrmWnd *this);
void __thiscall CF5MainFrmWnd::CF5MainFrmWnd::DisplayAdWnd(CF5MainFrmWnd *this);
void __thiscall CF5MainFrmWnd::OnClose(CF5MainFrmWnd *this);
void __fastcall FUN_60a0da70(int *param_1);
undefined4 * __thiscall FUN_60a0dae0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_60a0db30(int *param_1);
void FUN_60a0dbc0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
AFX_MSGMAP * __thiscall CF5MainFrmWnd::CF5MainFrmWnd::GetMessageMap(CF5MainFrmWnd *this);
void FUN_60a0dc50(void);
undefined4 *FUN_60a0dc90(undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,undefined1 param_5);
void Catch_All@60a0dd22(void);
undefined4 __cdecl FUN_60a0dd40(undefined4 param_1,int *param_2,int param_3,int *param_4,int param_5);
void __thiscall FUN_60a0dde0(void *this,undefined4 *param_1,int param_2,int *param_3);
void FUN_60a0e0b0(exception *param_1);
void FUN_60a0e0d0(int *param_1);
void __thiscall FUN_60a0e110(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void __thiscall FUN_60a0e300(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_60a0e3f0(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
undefined4 * __thiscall FUN_60a0e470(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@60a0e50d(void);
undefined4 __thiscall FUN_60a0e530(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall CF5MainFrmWnd::CF5MainFrmWnd::OnTimer(CF5MainFrmWnd *this,uint param_1);
void __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::Clear(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this);
bool __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::Add(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
CF5DialogRoot * __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::Get(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
bool __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::QueryKey(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall FUN_60a0e970(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall FUN_60a0ea50(void *this,int param_1);
void __fastcall FUN_60a0ead0(int *param_1);
undefined4 * __thiscall FUN_60a0eb10(void *this,int param_1);
void Catch_All@60a0eba8(void);
void __fastcall FUN_60a0ebc0(int *param_1);
undefined4 * __fastcall FUN_60a0ec40(undefined4 *param_1);
void __fastcall FUN_60a0ecd0(undefined4 *param_1);
void __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::~CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this);
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> *__thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this,CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>*param_1);
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> *__thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this);
CF5DialogList * __thiscall CF5DialogList::CF5DialogList(CF5DialogList *this,CF5DialogList *param_1);
CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>* __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::operator=(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this,CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>*param_1);
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> *__thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::scalar_deleting_destructor(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>*this,byte param_1);
void __thiscall CF5MiniChannelListView::CF5MiniChannelListView(CF5MiniChannelListView *this,CF5MiniChannelListWnd *param_1,int param_2);
bool __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnDetached(CF5MiniChannelListView *this);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnClickRefreshBtn(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnClickJoinBtn(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnClickRoomListBtn(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnClickAutoJoinBtn(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnClickGrpListBtn(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnClickChannelGrpLst(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnCheckEnterableState(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::Msg_CreateWindow(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::Msg_DestroyWindow(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::Evt_MiniChannelList_OnUpdateChannelGrpList(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::Evt_MiniChannelList_OnUpdateChannelList(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::Evt_MiniChannelList_OnChannelJoinComplete(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::Evt_MiniChannelList_OnFailEnterChannel(CF5MiniChannelListView *this,IParam *param_1);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::Evt_MiniChannelList_OnShowWindow(CF5MiniChannelListView *this,IParam *param_1);
void __thiscall CF5MiniChannelListView::CF5MiniChannelListView(CF5MiniChannelListView *this);
void __thiscall CF5MiniChannelListView::~CF5MiniChannelListView(CF5MiniChannelListView *this);
int __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnClickChannelLst(CF5MiniChannelListView *this,IParam *param_1);
void __thiscall CMFunctor<CF5MiniChannelListView>::scalar_deleting_destructor(CMFunctor<CF5MiniChannelListView> *this);
bool __thiscall CF5MiniChannelListView::CF5MiniChannelListView::OnAttached(CF5MiniChannelListView *this);
CF5MiniChannelListWnd * __thiscall CF5MiniChannelListWnd::CF5MiniChannelListWnd(CF5MiniChannelListWnd *this);
void __thiscall CF5MiniChannelListWnd::~CF5MiniChannelListWnd(CF5MiniChannelListWnd *this);
void __thiscall CF5DialogRoot::CF5DialogRoot::AfterShowIt(CF5DialogRoot *this,CParam *param_1);
undefined4 FUN_60a0fa70(HINSTANCE__ *param_1,int param_2);
undefined4 FUN_60a0fad0(undefined4 param_1,int param_2);
void __thiscall CF5DialogList::ClearDialogList(CF5DialogList *this);
CF5DialogList * __thiscall CF5DialogList::CF5DialogList(CF5DialogList *this);
void __thiscall CF5DialogList::~CF5DialogList(CF5DialogList *this);
CF5DialogList * __cdecl F5DialogList(void);
bool __thiscall CF5DialogCmp::CF5DialogCmp::OnDetached(CF5DialogCmp *this);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowRoomPasswordDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowItemWebDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowAccuseUserDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowAccuseConfirmDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowMemberInfoDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowInviteWaitingDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowInviteChnlToWebDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowInviteGameToChnlDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowEndingPopupDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowMsgBox(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowThreadLoadingWnd(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowShutdownNoticeDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowShutdownExitDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowInviteResponseDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowSettingDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_CreateSplashWnd(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowSplashWnd(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ClearDialogList(CF5DialogCmp *this,IParam *param_1);
void __thiscall CF5DialogCmp::CF5DialogCmp(CF5DialogCmp *this);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_SplashWndCancel(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_ShowCreateRoomDialog(CF5DialogCmp *this,IParam *param_1);
void __thiscall CMFunctor<CF5DialogCmp>::scalar_deleting_destructor(CMFunctor<CF5DialogCmp> *this);
int __thiscall CF5DialogCmp::CF5DialogCmp::CloseOPenDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_CheckRunningModalDialog(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_IsWindowVisible(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::Msg_IsSplashOn(CF5DialogCmp *this,IParam *param_1);
int __thiscall CF5DialogCmp::CF5DialogCmp::ShowDialog(CF5DialogCmp *this,char *param_1,IParam *param_2);
int __thiscall CF5DialogCmp::Msg_CloseInviteResponseDialog(CF5DialogCmp *this,IParam *param_1);
bool __thiscall CF5DialogCmp::CF5DialogCmp::OnAttached(CF5DialogCmp *this);
CF5DialogRoot * __thiscall CF5DialogRoot::CF5DialogRoot(CF5DialogRoot *this);
void __thiscall CF5DialogRoot::~CF5DialogRoot(CF5DialogRoot *this);
int __thiscall CF5DialogRoot::CF5DialogRoot::EndDialog(CF5DialogRoot *this,int param_1);
void __thiscall CF5DialogRoot::CF5DialogRoot::OnOK(CF5DialogRoot *this);
void __thiscall CF5DialogRoot::CF5DialogRoot::OnCancel(CF5DialogRoot *this);
void __thiscall CF5DialogRoot::EndModalLoop(CF5DialogRoot *this);
int __thiscall CF5DialogRoot::CF5DialogRoot::DoModal(CF5DialogRoot *this);
void __thiscall CF5DialogRoot::CF5DialogRoot::RunModalLoop(CF5DialogRoot *this);
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
void __cdecl operator_delete(void *param_1);
AFX_MODULE_STATE * AfxGetModuleState(void);
CWinThread * AfxGetThread(void);
CWnd * CWnd::FromHandle(HWND__ *param_1);
void __cdecl operator_delete[](void *param_1);
int __thiscall CWnd::ShowWindow(CWnd *this,int param_1);
void * __cdecl operator_new(uint param_1);
void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1);
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
int __thiscall CWinThread::CWinThread::PreTranslateMessage(CWinThread *this,tagMSG *param_1);
int __thiscall CWinThread::CWinThread::PumpMessage(CWinThread *this);
int __thiscall CWinApp::CWinApp::OnIdle(CWinApp *this,long param_1);
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
int __thiscall CWinApp::ExitInstance(CWinApp *this);
int AfxMessageBox(char *param_1,uint param_2,uint param_3);
int __thiscall CWinApp::Run(CWinApp *this);
void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1);
char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4);
void __cdecl AfxEnableControlContainer(COccManager *param_1);
int __thiscall CWinApp::InitInstance(CWinApp *this);
int AfxIsValidString(char *param_1,int param_2);
int __thiscall CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
int __thiscall CWnd::EnableWindow(CWnd *this,int param_1);
CRuntimeClass * CFrameWnd::GetThisClass(void);
void __thiscall CFrameWnd::~CFrameWnd(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd(CFrameWnd *this);
int __thiscall CFrameWnd::CFrameWnd::OnCmdMsg(CFrameWnd *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
void __thiscall CWnd::CWnd::OnFinalRelease(CWnd *this);
AFX_INTERFACEMAP * __thiscall CWnd::CWnd::GetInterfaceMap(CWnd *this);
void __thiscall CWnd::CWnd::PreSubclassWindow(CWnd *this);
int __thiscall CWnd::CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,uint param_6,CCreateContext *param_7);
int __thiscall CWnd::CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,CWnd *param_6,uint param_7,void *param_8);
int __thiscall CWnd::CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11);
int __thiscall CWnd::CWnd::DestroyWindow(CWnd *this);
void __thiscall CWnd::CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2);
CMenu * __thiscall CFrameWnd::CFrameWnd::GetMenu(CFrameWnd *this);
int __thiscall CFrameWnd::CFrameWnd::SetMenu(CFrameWnd *this,CMenu *param_1);
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
int __thiscall CFrameWnd::CFrameWnd::OnCommand(CFrameWnd *this,uint param_1,long param_2);
int __thiscall CWnd::CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3);
_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::CWnd::GetSuperWndProcAddr(CWnd *this);
void __thiscall CFrameWnd::CFrameWnd::BeginModalState(CFrameWnd *this);
void __thiscall CFrameWnd::CFrameWnd::EndModalState(CFrameWnd *this);
int __thiscall CWnd::CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3);
int __thiscall CWnd::CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
long __thiscall CWnd::CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3);
void __thiscall CFrameWnd::CFrameWnd::PostNcDestroy(CFrameWnd *this);
int __thiscall CWnd::CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CWnd::CWnd::CheckAutoCenter(CWnd *this);
int __thiscall CFrameWnd::CFrameWnd::IsFrameWnd(CFrameWnd *this);
int __thiscall CWnd::CWnd::CreateControlContainer(CWnd *this,COleControlContainer **param_1);
int __thiscall CWnd::CWnd::CreateControlSite(CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,_GUID *param_4);
int __thiscall CWnd::CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1);
_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd::GetOccDialogInfo(CWnd *this);
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
long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3);
int __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this,tagMSG *param_1);
int __thiscall CFrameWnd::OnCreate(CFrameWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CFrameWnd::OnDestroy(CFrameWnd *this);
void __thiscall CInternetSession::~CInternetSession(CInternetSession *this);
void __thiscall CInternetSession::Close(CInternetSession *this);
int __thiscall CHttpFile::QueryInfoStatusCode(CHttpFile *this,ulong *param_1);
int __thiscall CHttpFile::SendRequest(CHttpFile *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,void *param_2,ulong param_3);
int __thiscall CHttpFile::AddRequestHeaders(CHttpFile *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,ulong param_2);
CHttpFile * __thiscall CHttpConnection::OpenRequest(CHttpConnection *this,int param_1,char *param_2,char *param_3,ulong param_4,char **param_5,char *param_6,ulong param_7);
CHttpConnection * __thiscall CInternetSession::GetHttpConnection(CInternetSession *this,char *param_1,ushort param_2,char *param_3,char *param_4);
void __thiscall CInternetSession::CInternetSession(CInternetSession *this,char *param_1,ulong param_2,ulong param_3,char *param_4,char *param_5,ulong param_6);
void __thiscall CFrameWnd::OnClose(CFrameWnd *this);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_60a11b65(void);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
void __cdecl purecall(void);
void __fastcall __security_check_cookie(int param_1);
void __alloca_probe(void);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void __RTDynamicCast(void);
char * __thiscall std::exception::std::exception::what(exception *this);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_60a11cd6(void);
int __cdecl _atexit(_func_4879 *param_1);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_60a12076(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_60a12105(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
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
void __cdecl ___security_init_cookie(void);
void __cdecl except_handler4_common(void);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl _crt_debugger_hook(int param_1);
void Unwind@60a124c0(void);
void Unwind@60a124f0(void);
void Unwind@60a12520(void);
void Unwind@60a1252b(void);
void Unwind@60a12536(void);
void Unwind@60a12541(void);
void Unwind@60a1254c(void);
void Unwind@60a12557(void);
void Unwind@60a12562(void);
void Unwind@60a1256d(void);
void Unwind@60a12578(void);
void Unwind@60a12583(void);
void Unwind@60a1258e(void);
void Unwind@60a12599(void);
void Unwind@60a125a4(void);
void Unwind@60a125af(void);
void Unwind@60a125ba(void);
void Unwind@60a125c5(void);
void Unwind@60a125d0(void);
void Unwind@60a125db(void);
void Unwind@60a125e6(void);
void Unwind@60a12610(void);
void Unwind@60a12640(void);
void Unwind@60a1264b(void);
void Unwind@60a12656(void);
void Unwind@60a12661(void);
void Unwind@60a1266c(void);
void Unwind@60a12677(void);
void Unwind@60a12682(void);
void Unwind@60a1268d(void);
void Unwind@60a12698(void);
void Unwind@60a126a3(void);
void Unwind@60a126ae(void);
void Unwind@60a126e0(void);
void Unwind@60a12720(void);
void Unwind@60a12760(void);
void Unwind@60a1276c(void);
void Unwind@60a12778(void);
void Unwind@60a12784(void);
void Unwind@60a12790(void);
void Unwind@60a1279c(void);
void Unwind@60a127a8(void);
void Unwind@60a127f0(void);
void Unwind@60a12820(void);
void Unwind@60a12850(void);
void Unwind@60a12880(void);
void Unwind@60a128b0(void);
void Unwind@60a128e0(void);
void Unwind@60a128ec(void);
void Unwind@60a128f7(void);
void Unwind@60a12906(void);
void Unwind@60a12915(void);
void Unwind@60a12940(void);
void Unwind@60a1294c(void);
void Unwind@60a12980(void);
void Unwind@60a1298c(void);
void Unwind@60a12998(void);
void Unwind@60a129a4(void);
void Unwind@60a129e0(void);
void Unwind@60a129e9(void);
void Unwind@60a12a10(void);
void Unwind@60a12a40(void);
void Unwind@60a12a80(void);
void Unwind@60a12ac0(void);
void Unwind@60a12acc(void);
void Unwind@60a12ad8(void);
void Unwind@60a12b20(void);
void Unwind@60a12b2c(void);
void Unwind@60a12b60(void);
void Unwind@60a12b69(void);
void Unwind@60a12b90(void);
void Unwind@60a12b9c(void);
void Unwind@60a12ba8(void);
void Unwind@60a12bf0(void);
void Unwind@60a12c20(void);
void Unwind@60a12c2c(void);
void Unwind@60a12c38(void);
void Unwind@60a12c44(void);
void Unwind@60a12c50(void);
void Unwind@60a12c5c(void);
void Unwind@60a12ca0(void);
void Unwind@60a12cac(void);
void Unwind@60a12ce0(void);
void Unwind@60a12d10(void);
void Unwind@60a12d1c(void);
void Unwind@60a12d28(void);
void Unwind@60a12d34(void);
void Unwind@60a12d40(void);
void Unwind@60a12d4c(void);
void Unwind@60a12d58(void);
void Unwind@60a12d64(void);
void Unwind@60a12d70(void);
void Unwind@60a12d7c(void);
void Unwind@60a12d88(void);
void Unwind@60a12d94(void);
void Unwind@60a12da0(void);
void Unwind@60a12dac(void);
void Unwind@60a12db8(void);
void Unwind@60a12dc4(void);
void Unwind@60a12dd0(void);
void Unwind@60a12ddc(void);
void Unwind@60a12de8(void);
void Unwind@60a12df4(void);
void Unwind@60a12e00(void);
void Unwind@60a12e0c(void);
void Unwind@60a12e40(void);
void Unwind@60a12e49(void);
void Unwind@60a12e70(void);
void Unwind@60a12e79(void);
void Unwind@60a12ea0(void);
void Unwind@60a12ed0(void);
void Unwind@60a12f20(void);
void Unwind@60a12f2c(void);
void Unwind@60a12f38(void);
void Unwind@60a12f44(void);
void Unwind@60a12f50(void);
void Unwind@60a12f5c(void);
void Unwind@60a12f67(void);
void Unwind@60a12f73(void);
void Unwind@60a12f7f(void);
void Unwind@60a12f8a(void);
void Unwind@60a12f96(void);
void Unwind@60a12fa2(void);
void Unwind@60a12fad(void);
void Unwind@60a12fb9(void);
void Unwind@60a12fc5(void);
void Unwind@60a12fd1(void);
void Unwind@60a12fdc(void);
void Unwind@60a12fe8(void);
void Unwind@60a12ff4(void);
void Unwind@60a12fff(void);
void Unwind@60a1300b(void);
void Unwind@60a13017(void);
void Unwind@60a13050(void);
void Unwind@60a13090(void);
void Unwind@60a13099(void);
void Unwind@60a130c0(void);
void Unwind@60a130f0(void);
void Unwind@60a130f9(void);
void Unwind@60a13130(void);
void Unwind@60a13170(void);
void Unwind@60a13179(void);
void Unwind@60a13182(void);
void Unwind@60a131b0(void);
void Unwind@60a131f0(void);
void Unwind@60a13230(void);
void Unwind@60a13270(void);
void Unwind@60a132b0(void);
void Unwind@60a132f0(void);
void Unwind@60a13330(void);
void Unwind@60a13339(void);
void Unwind@60a13360(void);
void Unwind@60a13369(void);
void Unwind@60a13390(void);
void Unwind@60a133c0(void);
void Unwind@60a13400(void);
void Unwind@60a13440(void);
void Unwind@60a1344f(void);
void Unwind@60a1345d(void);
void Unwind@60a1346f(void);
void Unwind@60a13481(void);
void Unwind@60a13493(void);
void Unwind@60a134a5(void);
void Unwind@60a134e0(void);
void Unwind@60a134ec(void);
void Unwind@60a134f8(void);
void Unwind@60a13540(void);
void Unwind@60a13580(void);
void Unwind@60a13588(void);
void Unwind@60a13597(void);
void Unwind@60a135a6(void);
void Unwind@60a135b5(void);
void Unwind@60a135c4(void);
void Unwind@60a135d3(void);
void Unwind@60a135e2(void);
void Unwind@60a135f1(void);
void Unwind@60a13620(void);
void Unwind@60a13628(void);
void Unwind@60a13637(void);
void Unwind@60a13646(void);
void Unwind@60a13655(void);
void Unwind@60a13664(void);
void Unwind@60a13673(void);
void Unwind@60a13682(void);
void Unwind@60a136b0(void);
void Unwind@60a136f0(void);
void Unwind@60a136fc(void);
void Unwind@60a13740(void);
void Unwind@60a13780(void);
void Unwind@60a137b0(void);
void Unwind@60a137bc(void);
void Unwind@60a137c8(void);
void Unwind@60a137d4(void);
void Unwind@60a137e0(void);
void Unwind@60a137ec(void);
void Unwind@60a137f8(void);
void Unwind@60a13804(void);
void Unwind@60a13810(void);
void Unwind@60a1381b(void);
void Unwind@60a13860(void);
void Unwind@60a13890(void);
void Unwind@60a138c0(void);
void Unwind@60a138f0(void);
void Unwind@60a13940(void);
void Unwind@60a13970(void);
void Unwind@60a13979(void);
void Unwind@60a13981(void);
void Unwind@60a139b0(void);
void Unwind@60a139e0(void);
void Unwind@60a13a10(void);
void Unwind@60a13a40(void);
void Unwind@60a13a70(void);
void Unwind@60a13aa0(void);
void Unwind@60a13aac(void);
void Unwind@60a13ab8(void);
void Unwind@60a13b00(void);
void Unwind@60a13b0c(void);
void Unwind@60a13b18(void);
void Unwind@60a13b24(void);
void Unwind@60a13b30(void);
void Unwind@60a13b3c(void);
void Unwind@60a13b48(void);
void Unwind@60a13b70(void);
void Unwind@60a13ba0(void);
void Unwind@60a13bd0(void);
void Unwind@60a13bdc(void);
void Unwind@60a13c20(void);
void Unwind@60a13c2c(void);
void Unwind@60a13c38(void);
void Unwind@60a13c80(void);
void Unwind@60a13cb0(void);
void Unwind@60a13cb9(void);
void Unwind@60a13ce0(void);
void Unwind@60a13d10(void);
void Unwind@60a13d40(void);
void Unwind@60a13d4c(void);
void Unwind@60a13d80(void);
void FUN_60a13de0(void);
void FUN_60a13e50(void);
void FUN_60a13f10(void);
void FUN_60a13ff0(void);
void FUN_60a14030(void);
void FUN_60a14070(void);
void FUN_60a140e0(void);

