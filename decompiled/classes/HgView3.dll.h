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

typedef struct CChannelMainWnd CChannelMainWnd, *PCChannelMainWnd;

struct CChannelMainWnd { // PlaceHolder Class Structure
};

typedef struct CHanChatView CHanChatView, *PCHanChatView;

struct CHanChatView { // PlaceHolder Class Structure
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

typedef struct CMiniChannelListView CMiniChannelListView, *PCMiniChannelListView;

struct CMiniChannelListView { // PlaceHolder Class Structure
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

typedef struct CGameWnd CGameWnd, *PCGameWnd;

struct CGameWnd { // PlaceHolder Class Structure
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

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct _s_ESTypeList ESTypeList;

typedef struct CHanChatViewWnd CHanChatViewWnd, *PCHanChatViewWnd;

struct CHanChatViewWnd { // PlaceHolder Class Structure
};

typedef struct CMainFrameView CMainFrameView, *PCMainFrameView;

struct CMainFrameView { // PlaceHolder Class Structure
};

typedef struct CChannelLobbyView CChannelLobbyView, *PCChannelLobbyView;

struct CChannelLobbyView { // PlaceHolder Class Structure
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

typedef struct CBaseLobbyView CBaseLobbyView, *PCBaseLobbyView;

struct CBaseLobbyView { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef ulong DWORD;

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

struct HWND__ {
    int unused;
};

typedef union _union_658 _union_658, *P_union_658;

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef uchar BYTE;

typedef ushort WORD;

typedef union _union_655 _union_655, *P_union_655;

typedef struct _struct_656 _struct_656, *P_struct_656;

typedef struct _struct_657 _struct_657, *P_struct_657;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

typedef long LONG;

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _struct_656 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

struct _struct_657 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _POINTL {
    LONG x;
    LONG y;
};

union _union_655 {
    struct _struct_656 field0;
    struct _struct_657 field1;
};

struct _devicemodeA {
    BYTE dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_655 field6_0x2c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_658 field17_0x74;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct _devicemodeA DEVMODEA;

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

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef long HRESULT;

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

typedef long LONG_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[35];
};

typedef struct tagPOINT tagPOINT, *PtagPOINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct tagPOINT *LPPOINT;

typedef UINT_PTR WPARAM;

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef LONG_PTR LPARAM;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
    int unused;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void *LPVOID;

typedef HINSTANCE HMODULE;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HDC__ *HDC;

typedef WORD ATOM;

typedef struct HRGN__ *HRGN;

typedef LONG_PTR LRESULT;

typedef struct tagRECT *LPRECT;

typedef BYTE *PBYTE;

typedef int BOOL;

typedef struct HBRUSH__ *HBRUSH;

typedef struct tagPOINT POINT;

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

typedef struct CChannelMainWnd_data CChannelMainWnd_data, *PCChannelMainWnd_data;

struct CChannelMainWnd_data {
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
    int *offset_0x34;
    int *offset_0x38;
    int *offset_0x3c;
    undefined4 *offset_0x40;
    int *offset_0x44;
    undefined4 *offset_0x48;
    int *offset_0x4c;
    int *offset_0x50;
    int *offset_0x54;
    int *offset_0x58;
    int *offset_0x5c;
    int *offset_0x60;
    int *offset_0x64;
    int *offset_0x68;
    int *offset_0x6c;
    undefined4 *offset_0x70;
    undefined4 *offset_0x74;
    int *offset_0x78;
    int *offset_0x7c;
    undefined field71_0x80;
    undefined field72_0x81;
    undefined field73_0x82;
    undefined field74_0x83;
    int *offset_0x84;
    int *offset_0x88;
    int *offset_0x8c;
    int *offset_0x90;
    int *offset_0x94;
    int *offset_0x98;
    undefined4 *offset_0x9c;
    undefined4 *offset_0xa0;
    int *offset_0xa4;
    int *offset_0xa8;
};


// WARNING! conflicting data type names: /ClassDataTypes/CChannelMainWnd/CChannelMainWnd - /CChannelMainWnd

typedef struct CChannelMainWnd_vftable0 CChannelMainWnd_vftable0, *PCChannelMainWnd_vftable0;

struct CChannelMainWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CChannelMainWnd virtual function #1
    CChannelMainWnd * (*deleting_destructor)(void *, byte); // CChannelMainWnd virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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

typedef struct CChannelMainWnd_vftable1 CChannelMainWnd_vftable1, *PCChannelMainWnd_vftable1;

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

typedef struct CComboBox CComboBox, *PCComboBox;

typedef struct CWnd CWnd, *PCWnd;

typedef struct CCmdTarget CCmdTarget, *PCCmdTarget;

typedef struct CObject CObject, *PCObject;

struct CObject { // class CObject
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

struct CComboBox { // class CComboBox : CWnd
    struct CWnd CWnd;
};

typedef struct CScrollSupportCtrl CScrollSupportCtrl, *PCScrollSupportCtrl;

typedef struct CScrollSupportCtrl_vftable0 CScrollSupportCtrl_vftable0, *PCScrollSupportCtrl_vftable0;

typedef struct CScrollSupportCtrl_vftable1 CScrollSupportCtrl_vftable1, *PCScrollSupportCtrl_vftable1;

struct CScrollSupportCtrl { // class CScrollSupportCtrl : CWnd : CControlBase
    struct CScrollSupportCtrl_vftable0 *vftablePtr;
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
    struct CScrollSupportCtrl_vftable1 *vftablePtr;
};

struct CScrollSupportCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CScrollSupportCtrl virtual function #1
    CScrollSupportCtrl * (*deleting_destructor)(void *, byte); // CScrollSupportCtrl virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CScrollSupportCtrl virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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
};

struct CScrollSupportCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CScrollSupportCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CScrollSupportCtrl virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CScrollSupportCtrl virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CHanChatEditComboBox_vftable0 CHanChatEditComboBox_vftable0, *PCHanChatEditComboBox_vftable0;

struct CHanChatEditComboBox_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomComboBox virtual function #1
    CHanChatEditComboBox * (*deleting_destructor)(void *, byte); // CHanChatEditComboBox virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CHanChatEditComboBox virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CHanChatEditComboBox virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CComboBox virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CComboBox virtual function #82
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CComboBox virtual function #83
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CComboBox virtual function #84
    int (*CompareItem)(void *, struct tagCOMPAREITEMSTRUCT *); // CComboBox virtual function #85
    void (*DeleteItem)(void *, struct tagDELETEITEMSTRUCT *); // CComboBox virtual function #86
};

typedef struct CHanChatEditComboBox_vftable1 CHanChatEditComboBox_vftable1, *PCHanChatEditComboBox_vftable1;

struct CHanChatEditComboBox_vftable1 {
    void (*vfunction1)(void *, byte); // CHanChatEditComboBox virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomComboBox virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CHanChatEditComboBox CHanChatEditComboBox, *PCHanChatEditComboBox;

struct CHanChatEditComboBox { // class CHanChatEditComboBox : CCustomComboBox
    struct CHanChatEditComboBox_vftable0 *vftablePtr;
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
    struct CHanChatEditComboBox_vftable1 *vftablePtr;
};

typedef struct CMFunctor<CBaseLobbyView>_vftable CMFunctor<CBaseLobbyView>_vftable, *PCMFunctor<CBaseLobbyView>_vftable;

struct CMFunctor<CBaseLobbyView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CBaseLobbyView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyView> virtual function #3
};

typedef struct CMFunctor<CBaseLobbyView> CMFunctor<CBaseLobbyView>, *PCMFunctor<CBaseLobbyView>;

struct CMFunctor<CBaseLobbyView> { // class CMFunctor<CBaseLobbyView> : IFunctor
    struct CMFunctor<CBaseLobbyView>_vftable *vftablePtr;
};

typedef struct IFunctor IFunctor, *PIFunctor;

struct IFunctor { // class IFunctor
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CCustomStatic CCustomStatic, *PCCustomStatic;

typedef struct CCustomStatic_vftable0 CCustomStatic_vftable0, *PCCustomStatic_vftable0;

typedef struct CCustomStatic_vftable1 CCustomStatic_vftable1, *PCCustomStatic_vftable1;

struct CCustomStatic { // class CCustomStatic : CStatic : CControlBase
    struct CCustomStatic_vftable0 *vftablePtr;
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
    struct CCustomStatic_vftable1 *vftablePtr;
};

struct CCustomStatic_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomStatic virtual function #1
    CCustomStatic * (*deleting_destructor)(void *, byte); // CCustomStatic virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCustomStatic virtual function #13
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
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CCustomStatic virtual function #28
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CStatic virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CStatic virtual function #82
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CCustomStatic virtual function #83
    void (*MovePostion)(void *, int, int, int); // CCustomStatic virtual function #84
};

struct CCustomStatic_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomStatic virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CCustomStatic virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomStatic virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomComboBox CCustomComboBox, *PCCustomComboBox;

typedef struct CControlBase CControlBase, *PCControlBase;

struct CComboBox { // class CComboBox : CWnd
    struct CWnd CWnd;
};

struct CControlBase { // class CControlBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CCustomComboBox { // class CCustomComboBox : CComboBox : CControlBase
    struct CComboBox CComboBox;
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

typedef struct CMiniChannelListWnd CMiniChannelListWnd, *PCMiniChannelListWnd;

typedef struct CMiniChannelListWnd_vftable0 CMiniChannelListWnd_vftable0, *PCMiniChannelListWnd_vftable0;

typedef struct CMiniChannelListWnd_vftable1 CMiniChannelListWnd_vftable1, *PCMiniChannelListWnd_vftable1;

typedef struct CMiniChannelListWnd_data CMiniChannelListWnd_data, *PCMiniChannelListWnd_data;

struct CMiniChannelListWnd_data {
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
    int *offset_0x18;
    int *offset_0x1c;
    int *offset_0x20;
    undefined4 *offset_0x24;
    int *offset_0x28;
    int *offset_0x2c;
    int *offset_0x30;
    int *offset_0x34;
    int *offset_0x38;
};

struct CMiniChannelListWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CMiniChannelListWnd virtual function #1
    CMiniChannelListWnd * (*deleting_destructor)(void *, byte); // CMiniChannelListWnd virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMiniChannelListWnd virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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
};

struct CMiniChannelListWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CMiniChannelListWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CMiniChannelListWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

struct CMiniChannelListWnd { // class CMiniChannelListWnd : CWnd : CControlBase
    struct CMiniChannelListWnd_vftable0 *vftablePtr;
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
    struct CMiniChannelListWnd_vftable1 *vftablePtr;
    struct CMiniChannelListWnd_data CMiniChannelListWnd_data;
};

typedef struct CMyInfoCtrl CMyInfoCtrl, *PCMyInfoCtrl;

typedef struct CMyInfoCtrl_vftable0 CMyInfoCtrl_vftable0, *PCMyInfoCtrl_vftable0;

typedef struct CMyInfoCtrl_vftable1 CMyInfoCtrl_vftable1, *PCMyInfoCtrl_vftable1;

struct CMyInfoCtrl { // class CMyInfoCtrl : CWnd : CControlBase
    struct CMyInfoCtrl_vftable0 *vftablePtr;
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
    struct CMyInfoCtrl_vftable1 *vftablePtr;
};

struct CMyInfoCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CMyInfoCtrl virtual function #1
    CMyInfoCtrl * (*deleting_destructor)(void *, byte); // CMyInfoCtrl virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMyInfoCtrl virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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
};

struct CMyInfoCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CMyInfoCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CMyInfoCtrl virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CFrameWnd CFrameWnd, *PCFrameWnd;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CFrameWnd { // class CFrameWnd : CWnd
    struct CWnd CWnd;
};

typedef struct CScrollView CScrollView, *PCScrollView;

typedef struct CView CView, *PCView;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CView { // class CView : CWnd
    struct CWnd CWnd;
};

struct CScrollView { // class CScrollView : CView
    struct CView CView;
};

typedef struct CHanChatView_data CHanChatView_data, *PCHanChatView_data;

typedef enum ViewType {
} ViewType;

struct CHanChatView_data {
    int *offset_0x0;
    enum ViewType offset_0x4;
    int offset_0x8;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHanChatView/CHanChatView - /CHanChatView

typedef struct CHanChatView_vftable CHanChatView_vftable, *PCHanChatView_vftable;

struct CHanChatView_vftable {
    bool (*OnAttached)(void *); // CHanChatView virtual function #1
    bool (*OnDetached)(void *); // CHanChatView virtual function #2
    undefined4 * (*deleting_destructor)(void *, byte); // CHanChatView virtual function #3
};

typedef struct CBrush_vftable CBrush_vftable, *PCBrush_vftable;

struct CBrush_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CBrush virtual function #1
    void * (*deleting_destructor)(void *, uint); // CBrush virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
};

typedef struct CBrush CBrush, *PCBrush;

struct CBrush { // class CBrush : CGdiObject
    struct CBrush_vftable *vftablePtr;
};


// WARNING! conflicting data type names: /ClassDataTypes/CMiniChannelListView/CMiniChannelListView - /CMiniChannelListView

typedef struct CMiniChannelListView_data CMiniChannelListView_data, *PCMiniChannelListView_data;

struct CMiniChannelListView_data {
    int *offset_0x0;
    undefined4 offset_0x4;
};

typedef struct CMiniChannelListView_vftable CMiniChannelListView_vftable, *PCMiniChannelListView_vftable;

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
    undefined4 * (*deleting_destructor)(void *, byte); // CMiniChannelListView virtual function #11
    void (*SetMiniChannelListWnd)(void *, struct CMiniChannelListWnd *); // CMiniChannelListView virtual function #12
};

typedef struct CRoomListCtrl_T1_vftable0 CRoomListCtrl_T1_vftable0, *PCRoomListCtrl_T1_vftable0;

struct CRoomListCtrl_T1_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CRoomListCtrl_T1 virtual function #1
    CRoomListCtrl_T1 * (*deleting_destructor)(void *, byte); // CRoomListCtrl_T1 virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CView virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CRoomListCtrl_T1 virtual function #13
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
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CView virtual function #28
    void (*CalcWindowRect)(void *, struct tagRECT *, uint); // CScrollView virtual function #29
    CMenu * (*GetMenu)(void *); // CWnd virtual function #30
    int (*SetMenu)(void *, struct CMenu *); // CWnd virtual function #31
    int (*OnToolHitTest)(void *, struct CPoint, struct tagTOOLINFOA *); // CWnd virtual function #32
    CScrollBar * (*GetScrollBarCtrl)(void *, int); // CView virtual function #33
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CRoomListCtrl_T1 virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CRoomListCtrl_T1 virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*IsSelected)(void *, struct CObject *); // CView virtual function #82
    int (*OnScroll)(void *, uint, uint, int); // CScrollView virtual function #83
    int (*OnScrollBy)(void *, struct CSize, int); // CScrollView virtual function #84
    ulong (*OnDragEnter)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #85
    ulong (*OnDragOver)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #86
    void (*OnDragLeave)(void *); // CView virtual function #87
    int (*OnDrop)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #88
    ulong (*OnDropEx)(void *, struct COleDataObject *, ulong, ulong, struct CPoint); // CView virtual function #89
    ulong (*OnDragScroll)(void *, ulong, struct CPoint); // CView virtual function #90
    void (*OnPrepareDC)(void *, struct CDC *, struct CPrintInfo *); // CScrollView virtual function #91
    void (*OnInitialUpdate)(void *); // CView virtual function #92
    void (*OnActivateView)(void *, int, struct CView *, struct CView *); // CView virtual function #93
    void (*OnActivateFrame)(void *, uint, struct CFrameWnd *); // CView virtual function #94
    void (*OnUpdate)(void *, struct CView *, long, struct CObject *); // CView virtual function #95
    void (*OnDraw)(void *, struct CDC *); // CRoomListCtrl_T1 virtual function #96
    int (*OnPreparePrinting)(void *, struct CPrintInfo *); // CView virtual function #97
    void (*OnBeginPrinting)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #98
    void (*OnPrint)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #99
    void (*OnEndPrinting)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #100
    void (*OnEndPrintPreview)(void *, struct CDC *, struct CPrintInfo *, struct tagPOINT, struct CPreviewView *); // CView virtual function #101
    CSize (*GetWheelScrollDistance)(void *, struct CSize, int, int); // CScrollView virtual function #102
    void (*Initialize)(void *); // CRoomListCtrl_T1 virtual function #103
    bool (*AddRoom)(void *, int); // CRoomListCtrl_T1 virtual function #104
    void (*CalculateRoomRect)(void *, int, struct CRect *); // CRoomListCtrl_T1 virtual function #105
};

typedef struct CRoomListCtrl_T1_vftable1 CRoomListCtrl_T1_vftable1, *PCRoomListCtrl_T1_vftable1;

struct CRoomListCtrl_T1_vftable1 {
    void (*vfunction1)(void *, byte); // CRoomListCtrl_T1 virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CRoomListCtrl_T1 virtual function #2
    bool (*DestroyControl)(void *); // CRoomListCtrl_T1 virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CRoomListCtrl_T1 virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CRoomListCtrl_T1 virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CRoomListCtrl_T1 CRoomListCtrl_T1, *PCRoomListCtrl_T1;

struct CRoomListCtrl_T1 { // class CRoomListCtrl_T1 : CScrollView : CControlBase
    struct CRoomListCtrl_T1_vftable0 *vftablePtr;
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
    struct CRoomListCtrl_T1_vftable1 *vftablePtr;
};

typedef struct CFontElement CFontElement, *PCFontElement;

typedef struct CFontElement_vftable CFontElement_vftable, *PCFontElement_vftable;

typedef struct CComplexType_data CComplexType_data, *PCComplexType_data;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CFontElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CFontElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CFontElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

struct CFontElement { // class CFontElement : CComplexType
    struct CFontElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CRectElement CRectElement, *PCRectElement;

typedef struct CRectElement_vftable CRectElement_vftable, *PCRectElement_vftable;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CRectElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CRectElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CRectElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

struct CRectElement { // class CRectElement : CComplexType
    struct CRectElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CMsgBoxElement_vftable CMsgBoxElement_vftable, *PCMsgBoxElement_vftable;

struct CMsgBoxElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CMsgBoxElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CMsgBoxElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*vfunction6)(void *); // CMsgBoxElement virtual function #6
};

typedef struct CMsgBoxElement CMsgBoxElement, *PCMsgBoxElement;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CMsgBoxElement { // class CMsgBoxElement : CComplexType
    struct CMsgBoxElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CNoticeWndElement_vftable CNoticeWndElement_vftable, *PCNoticeWndElement_vftable;

struct CNoticeWndElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CNoticeWndElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CNoticeWndElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

typedef struct CNoticeWndElement CNoticeWndElement, *PCNoticeWndElement;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CNoticeWndElement { // class CNoticeWndElement : CComplexType
    struct CNoticeWndElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CWindowElement CWindowElement, *PCWindowElement;

typedef struct CWindowElement_vftable CWindowElement_vftable, *PCWindowElement_vftable;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CWindowElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CWindowElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CWindowElement virtual function #3
    void (*vfunction4)(void *); // CWindowElement virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*vfunction6)(void *); // CMsgBoxElement virtual function #6
};

struct CWindowElement { // class CWindowElement : CComplexType
    struct CWindowElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CButtonElement_vftable CButtonElement_vftable, *PCButtonElement_vftable;

struct CButtonElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CButtonElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CButtonElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

typedef struct CButtonElement CButtonElement, *PCButtonElement;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CButtonElement { // class CButtonElement : CComplexType
    struct CButtonElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CGaugeCtrlElement CGaugeCtrlElement, *PCGaugeCtrlElement;

typedef struct CGaugeCtrlElement_vftable CGaugeCtrlElement_vftable, *PCGaugeCtrlElement_vftable;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CGaugeCtrlElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CGaugeCtrlElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CGaugeCtrlElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

struct CGaugeCtrlElement { // class CGaugeCtrlElement : CComplexType
    struct CGaugeCtrlElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CWebElement_vftable CWebElement_vftable, *PCWebElement_vftable;

struct CWebElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CWebElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CWebElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

typedef struct CWebElement CWebElement, *PCWebElement;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CWebElement { // class CWebElement : CComplexType
    struct CWebElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CLineElement_vftable CLineElement_vftable, *PCLineElement_vftable;

struct CLineElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CLineElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CLineElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

typedef struct CLineElement CLineElement, *PCLineElement;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CLineElement { // class CLineElement : CComplexType
    struct CLineElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CRoomListElement CRoomListElement, *PCRoomListElement;

typedef struct CRoomListElement_vftable CRoomListElement_vftable, *PCRoomListElement_vftable;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CRoomListElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CRoomListElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CRoomListElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

struct CRoomListElement { // class CRoomListElement : CComplexType
    struct CRoomListElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CStaticElement CStaticElement, *PCStaticElement;

typedef struct CStaticElement_vftable CStaticElement_vftable, *PCStaticElement_vftable;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CStaticElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CStaticElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CStaticElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

struct CStaticElement { // class CStaticElement : CComplexType
    struct CStaticElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CListElement_vftable CListElement_vftable, *PCListElement_vftable;

struct CListElement_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CListElement virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*vfunction3)(void *); // CListElement virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

typedef struct CListElement CListElement, *PCListElement;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CListElement { // class CListElement : CComplexType
    struct CListElement_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CComplexType_vftable CComplexType_vftable, *PCComplexType_vftable;

struct CComplexType_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CComplexType virtual function #1
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #2
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #5
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #6
};

typedef struct CComplexType CComplexType, *PCComplexType;

struct CComplexType_data {
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
    void *offset_0x3c;
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
    int *offset_0x54;
    undefined4 offset_0x58;
    void *offset_0x5c;
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
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
};

struct CComplexType { // class CComplexType
    struct CComplexType_vftable *vftablePtr;
    struct CComplexType_data CComplexType_data;
};

typedef struct CMFunctor<CHanChatView> CMFunctor<CHanChatView>, *PCMFunctor<CHanChatView>;

typedef struct CMFunctor<CHanChatView>_vftable CMFunctor<CHanChatView>_vftable, *PCMFunctor<CHanChatView>_vftable;

typedef struct CMFunctor<CHanChatView>_data CMFunctor<CHanChatView>_data, *PCMFunctor<CHanChatView>_data;

struct CMFunctor<CHanChatView>_data {
    void *offset_0x0;
    undefined *offset_0x4;
};

struct CMFunctor<CHanChatView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CHanChatView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyView> virtual function #3
};

struct CMFunctor<CHanChatView> { // class CMFunctor<CHanChatView> : IFunctor
    struct CMFunctor<CHanChatView>_vftable *vftablePtr;
    struct CMFunctor<CHanChatView>_data CMFunctor<CHanChatView>_data;
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

typedef struct CNoticeWnd_vftable0 CNoticeWnd_vftable0, *PCNoticeWnd_vftable0;

struct CNoticeWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWnd virtual function #1
    CNoticeWnd * (*deleting_destructor)(void *, byte); // CNoticeWnd virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CNoticeWnd virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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
    void (*ManualUpdateControl)(void *, ulong, ulong, ulong); // CNoticeWnd virtual function #82
};

typedef struct CNoticeWnd CNoticeWnd, *PCNoticeWnd;

typedef struct CNoticeWnd_vftable1 CNoticeWnd_vftable1, *PCNoticeWnd_vftable1;

struct CNoticeWnd { // class CNoticeWnd : CWnd : CControlBase
    struct CNoticeWnd_vftable0 *vftablePtr;
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
    struct CNoticeWnd_vftable1 *vftablePtr;
};

struct CNoticeWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CNoticeWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CNoticeWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CGameWnd/CGameWnd - /CGameWnd

typedef struct CGameWnd_vftable0 CGameWnd_vftable0, *PCGameWnd_vftable0;

struct CGameWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGameWnd virtual function #1
    CGameWnd * (*deleting_destructor)(void *, byte); // CGameWnd virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CGameWnd virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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
    bool (*DisplayChatMessage)(void *, uint, char *, int, ulong, int, int, char *); // CGameWnd virtual function #82
    bool (*DisplayNoticeMessage)(void *, char *, int, int, char *, char *); // CGameWnd virtual function #83
    bool (*DisplayStatusMessage)(void *, char *, int, ulong, int, int, char *); // CGameWnd virtual function #84
    void (*CaptureGameScreen)(void *); // CGameWnd virtual function #85
    void (*DoExActive)(void *, int); // CGameWnd virtual function #86
    int (*FlipScreen)(void *); // CGameWnd virtual function #87
    void (*ExitGameRoom)(void *); // CGameWnd virtual function #88
    void (*AccuseUser)(void *); // CGameWnd virtual function #89
    undefined (*vfunction90)(void); // MSVCR90.DLL CGameWnd pure virtual function #90
    int (*FlipScreen)(void *); // CGameWnd virtual function #91
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #92
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #93
    undefined (*vfunction94)(void); // MSVCR90.DLL CGameWnd pure virtual function #94
    undefined (*vfunction95)(void); // MSVCR90.DLL CGameWnd pure virtual function #95
    undefined (*vfunction96)(void); // MSVCR90.DLL CGameWnd pure virtual function #96
    undefined (*vfunction97)(void); // MSVCR90.DLL CGameWnd pure virtual function #97
    undefined (*vfunction98)(void); // MSVCR90.DLL CGameWnd pure virtual function #98
    int (*ShowInviteGameToChnlDlg)(void *, bool); // CGameWnd virtual function #99
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #100
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #101
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
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CChannelLobbyView virtual function #122
    int (*Evt_ChannelLobby_OnUpdateNotice)(void *, struct IParam *); // CGameWnd virtual function #123
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CChannelLobbyView virtual function #124
    int (*Evt_OnExitGameDuetoShutdown)(void *, struct IParam *); // CGameWnd virtual function #125
    int (*Evt_OnGetShutdownTime)(void *, struct IParam *); // CGameWnd virtual function #126
    int (*Net_SocketClose)(void *, struct IParam *); // CGameWnd virtual function #127
    int (*Net_commandTimeBanish)(void *, struct IParam *); // CGameWnd virtual function #128
};

typedef struct CGameWnd_vftable1 CGameWnd_vftable1, *PCGameWnd_vftable1;

struct CGameWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CGameWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CGameWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CGameWnd_data CGameWnd_data, *PCGameWnd_data;

typedef struct CBgPainter CBgPainter, *PCBgPainter;

struct CGameWnd_data {
    void *offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    void *offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
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
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined field32_0x38;
    undefined field33_0x39;
    undefined field34_0x3a;
    undefined field35_0x3b;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    undefined field40_0x40;
    undefined field41_0x41;
    undefined field42_0x42;
    undefined field43_0x43;
    undefined field44_0x44;
    undefined field45_0x45;
    undefined field46_0x46;
    undefined field47_0x47;
    undefined field48_0x48;
    undefined field49_0x49;
    undefined field50_0x4a;
    undefined field51_0x4b;
    undefined field52_0x4c;
    undefined field53_0x4d;
    undefined field54_0x4e;
    undefined field55_0x4f;
    undefined field56_0x50;
    undefined field57_0x51;
    undefined field58_0x52;
    undefined field59_0x53;
    undefined field60_0x54;
    undefined field61_0x55;
    undefined field62_0x56;
    undefined field63_0x57;
    undefined field64_0x58;
    undefined field65_0x59;
    undefined field66_0x5a;
    undefined field67_0x5b;
    undefined field68_0x5c;
    undefined field69_0x5d;
    undefined field70_0x5e;
    undefined field71_0x5f;
    undefined field72_0x60;
    undefined field73_0x61;
    undefined field74_0x62;
    undefined field75_0x63;
    undefined field76_0x64;
    undefined field77_0x65;
    undefined field78_0x66;
    undefined field79_0x67;
    undefined field80_0x68;
    undefined field81_0x69;
    undefined field82_0x6a;
    undefined field83_0x6b;
    undefined field84_0x6c;
    undefined field85_0x6d;
    undefined field86_0x6e;
    undefined field87_0x6f;
    undefined field88_0x70;
    undefined field89_0x71;
    undefined field90_0x72;
    undefined field91_0x73;
    undefined field92_0x74;
    undefined field93_0x75;
    undefined field94_0x76;
    undefined field95_0x77;
    undefined field96_0x78;
    undefined field97_0x79;
    undefined field98_0x7a;
    undefined field99_0x7b;
    undefined field100_0x7c;
    undefined field101_0x7d;
    undefined field102_0x7e;
    undefined field103_0x7f;
    undefined field104_0x80;
    undefined field105_0x81;
    undefined field106_0x82;
    undefined field107_0x83;
    undefined field108_0x84;
    undefined field109_0x85;
    undefined field110_0x86;
    undefined field111_0x87;
    undefined field112_0x88;
    undefined field113_0x89;
    undefined field114_0x8a;
    undefined field115_0x8b;
    undefined field116_0x8c;
    undefined field117_0x8d;
    undefined field118_0x8e;
    undefined field119_0x8f;
    undefined field120_0x90;
    undefined field121_0x91;
    undefined field122_0x92;
    undefined field123_0x93;
    undefined field124_0x94;
    undefined field125_0x95;
    undefined field126_0x96;
    undefined field127_0x97;
    undefined field128_0x98;
    undefined field129_0x99;
    undefined field130_0x9a;
    undefined field131_0x9b;
    undefined field132_0x9c;
    undefined field133_0x9d;
    undefined field134_0x9e;
    undefined field135_0x9f;
    undefined field136_0xa0;
    undefined field137_0xa1;
    undefined field138_0xa2;
    undefined field139_0xa3;
    undefined field140_0xa4;
    undefined field141_0xa5;
    undefined field142_0xa6;
    undefined field143_0xa7;
    undefined field144_0xa8;
    undefined field145_0xa9;
    undefined field146_0xaa;
    undefined field147_0xab;
    undefined field148_0xac;
    undefined field149_0xad;
    undefined field150_0xae;
    undefined field151_0xaf;
    undefined field152_0xb0;
    undefined field153_0xb1;
    undefined field154_0xb2;
    undefined field155_0xb3;
    undefined field156_0xb4;
    undefined field157_0xb5;
    undefined field158_0xb6;
    undefined field159_0xb7;
    undefined field160_0xb8;
    undefined field161_0xb9;
    undefined field162_0xba;
    undefined field163_0xbb;
    undefined field164_0xbc;
    undefined field165_0xbd;
    undefined field166_0xbe;
    undefined field167_0xbf;
    undefined field168_0xc0;
    undefined field169_0xc1;
    undefined field170_0xc2;
    undefined field171_0xc3;
    undefined field172_0xc4;
    undefined field173_0xc5;
    undefined field174_0xc6;
    undefined field175_0xc7;
    undefined field176_0xc8;
    undefined field177_0xc9;
    undefined field178_0xca;
    undefined field179_0xcb;
    undefined field180_0xcc;
    undefined field181_0xcd;
    undefined field182_0xce;
    undefined field183_0xcf;
    undefined field184_0xd0;
    undefined field185_0xd1;
    undefined field186_0xd2;
    undefined field187_0xd3;
    undefined field188_0xd4;
    undefined field189_0xd5;
    undefined field190_0xd6;
    undefined field191_0xd7;
    undefined field192_0xd8;
    undefined field193_0xd9;
    undefined field194_0xda;
    undefined field195_0xdb;
    undefined field196_0xdc;
    undefined field197_0xdd;
    undefined field198_0xde;
    undefined field199_0xdf;
    undefined field200_0xe0;
    undefined field201_0xe1;
    undefined field202_0xe2;
    undefined field203_0xe3;
    undefined field204_0xe4;
    undefined field205_0xe5;
    undefined field206_0xe6;
    undefined field207_0xe7;
    undefined field208_0xe8;
    undefined field209_0xe9;
    undefined field210_0xea;
    undefined field211_0xeb;
    undefined field212_0xec;
    undefined field213_0xed;
    undefined field214_0xee;
    undefined field215_0xef;
    undefined field216_0xf0;
    undefined field217_0xf1;
    undefined field218_0xf2;
    undefined field219_0xf3;
    undefined field220_0xf4;
    undefined field221_0xf5;
    undefined field222_0xf6;
    undefined field223_0xf7;
    undefined field224_0xf8;
    undefined field225_0xf9;
    undefined field226_0xfa;
    undefined field227_0xfb;
    undefined field228_0xfc;
    undefined field229_0xfd;
    undefined field230_0xfe;
    undefined field231_0xff;
    undefined field232_0x100;
    undefined field233_0x101;
    undefined field234_0x102;
    undefined field235_0x103;
    undefined field236_0x104;
    undefined field237_0x105;
    undefined field238_0x106;
    undefined field239_0x107;
    undefined field240_0x108;
    undefined field241_0x109;
    undefined field242_0x10a;
    undefined field243_0x10b;
    undefined field244_0x10c;
    undefined field245_0x10d;
    undefined field246_0x10e;
    undefined field247_0x10f;
    undefined field248_0x110;
    undefined field249_0x111;
    undefined field250_0x112;
    undefined field251_0x113;
    undefined field252_0x114;
    undefined field253_0x115;
    undefined field254_0x116;
    undefined field255_0x117;
    undefined field256_0x118;
    undefined field257_0x119;
    undefined field258_0x11a;
    undefined field259_0x11b;
    undefined field260_0x11c;
    undefined field261_0x11d;
    undefined field262_0x11e;
    undefined field263_0x11f;
    undefined field264_0x120;
    undefined field265_0x121;
    undefined field266_0x122;
    undefined field267_0x123;
    undefined field268_0x124;
    undefined field269_0x125;
    undefined field270_0x126;
    undefined field271_0x127;
    undefined field272_0x128;
    undefined field273_0x129;
    undefined field274_0x12a;
    undefined field275_0x12b;
    undefined field276_0x12c;
    undefined field277_0x12d;
    undefined field278_0x12e;
    undefined field279_0x12f;
    undefined field280_0x130;
    undefined field281_0x131;
    undefined field282_0x132;
    undefined field283_0x133;
    undefined field284_0x134;
    undefined field285_0x135;
    undefined field286_0x136;
    undefined field287_0x137;
    undefined field288_0x138;
    undefined field289_0x139;
    undefined field290_0x13a;
    undefined field291_0x13b;
    undefined field292_0x13c;
    undefined field293_0x13d;
    undefined field294_0x13e;
    undefined field295_0x13f;
    undefined field296_0x140;
    undefined field297_0x141;
    undefined field298_0x142;
    undefined field299_0x143;
    undefined field300_0x144;
    undefined field301_0x145;
    undefined field302_0x146;
    undefined field303_0x147;
    undefined field304_0x148;
    undefined field305_0x149;
    undefined field306_0x14a;
    undefined field307_0x14b;
    undefined4 offset_0x14c;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined field311_0x158;
    undefined1 offset_0x159;
    undefined field313_0x15a;
    undefined field314_0x15b;
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
    undefined4 offset_0x164;
    struct CBgPainter *offset_0x168;
    undefined field319_0x16c;
    undefined field320_0x16d;
    undefined field321_0x16e;
    undefined field322_0x16f;
};

struct CBgPainter { // PlaceHolder Structure
};

typedef struct CMFunctor<CMiniChannelListView>_vftable CMFunctor<CMiniChannelListView>_vftable, *PCMFunctor<CMiniChannelListView>_vftable;

struct CMFunctor<CMiniChannelListView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CMiniChannelListView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyView> virtual function #3
};

typedef struct CMFunctor<CMiniChannelListView> CMFunctor<CMiniChannelListView>, *PCMFunctor<CMiniChannelListView>;

struct CMFunctor<CMiniChannelListView> { // class CMFunctor<CMiniChannelListView> : IFunctor
    struct CMFunctor<CMiniChannelListView>_vftable *vftablePtr;
};

typedef struct CBmpButton_vftable0 CBmpButton_vftable0, *PCBmpButton_vftable0;

struct CBmpButton_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CBmpButton virtual function #1
    CBmpButton * (*deleting_destructor)(void *, byte); // CBmpButton virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CBmpButton virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CBmpButton virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CButton virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CButton virtual function #82
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CBmpButton virtual function #83
};

typedef struct CBmpButton_vftable1 CBmpButton_vftable1, *PCBmpButton_vftable1;

struct CBmpButton_vftable1 {
    void (*vfunction1)(void *, byte); // CBmpButton virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CBmpButton virtual function #2
    bool (*DestroyControl)(void *); // CBmpButton virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CBmpButton virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CBmpButton virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CBmpButton CBmpButton, *PCBmpButton;

struct CBmpButton { // class CBmpButton : CButton : CControlBase
    struct CBmpButton_vftable0 *vftablePtr;
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
    struct CBmpButton_vftable1 *vftablePtr;
};

typedef struct CAdFileDownload_vftable CAdFileDownload_vftable, *PCAdFileDownload_vftable;

struct CAdFileDownload_vftable {
    CAdFileDownload * (*deleting_destructor)(void *, byte); // CAdFileDownload virtual function #1
};

typedef struct CAdFileDownload CAdFileDownload, *PCAdFileDownload;

struct CAdFileDownload { // class CAdFileDownload
    struct CAdFileDownload_vftable *vftablePtr;
};

typedef struct CHtmlCtrl_vftable CHtmlCtrl_vftable, *PCHtmlCtrl_vftable;

struct CHtmlCtrl_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CHtmlCtrl virtual function #1
    CHtmlCtrl * (*deleting_destructor)(void *, byte); // CHtmlCtrl virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CHtmlCtrl virtual function #13
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
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CHtmlCtrl virtual function #24
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #25
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #26
    int (*DestroyWindow)(void *); // CHtmlCtrl virtual function #27
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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
};

typedef struct CHtmlCtrl CHtmlCtrl, *PCHtmlCtrl;

struct CHtmlCtrl { // class CHtmlCtrl : CWnd
    struct CHtmlCtrl_vftable *vftablePtr;
};

typedef struct CBaseLobbyView_vftable CBaseLobbyView_vftable, *PCBaseLobbyView_vftable;

struct CBaseLobbyView_vftable {
    bool (*OnAttached)(void *); // CBaseLobbyView virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyView virtual function #2
    CBaseLobbyView * (*deleting_destructor)(void *, byte); // CBaseLobbyView virtual function #3
    int (*Msg_GetWindow)(void *, struct IParam *); // CBaseLobbyView virtual function #4
    int (*Msg_UpdateUIFromXML)(void *, struct IParam *); // CBaseLobbyView virtual function #5
};


// WARNING! conflicting data type names: /ClassDataTypes/CBaseLobbyView/CBaseLobbyView - /CBaseLobbyView

typedef struct CBaseLobbyView_data CBaseLobbyView_data, *PCBaseLobbyView_data;

struct CBaseLobbyView_data {
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
    undefined1 offset_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    undefined field36_0x27;
    undefined4 offset_0x28;
};

typedef struct CMultiBmpButton CMultiBmpButton, *PCMultiBmpButton;

typedef struct CMultiBmpButton_vftable0 CMultiBmpButton_vftable0, *PCMultiBmpButton_vftable0;

typedef struct CMultiBmpButton_vftable1 CMultiBmpButton_vftable1, *PCMultiBmpButton_vftable1;

struct CMultiBmpButton { // class CMultiBmpButton : CButton : CControlBase
    struct CMultiBmpButton_vftable0 *vftablePtr;
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
    struct CMultiBmpButton_vftable1 *vftablePtr;
};

struct CMultiBmpButton_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CButton virtual function #1
    CMultiBmpButton * (*deleting_destructor)(void *, byte); // CMultiBmpButton virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMultiBmpButton virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CWnd virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    void (*PreSubclassWindow)(void *); // CMultiBmpButton virtual function #23
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CButton virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CButton virtual function #82
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CMultiBmpButton virtual function #83
};

struct CMultiBmpButton_vftable1 {
    void (*vfunction1)(void *, byte); // CMultiBmpButton virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CMultiBmpButton virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CMultiBmpButton virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomTabCtrl CCustomTabCtrl, *PCCustomTabCtrl;

struct CControlBase { // class CControlBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CCustomTabCtrl { // class CCustomTabCtrl : CControlBase
    struct CControlBase CControlBase;
};

typedef struct IComponent IComponent, *PIComponent;

struct IComponent { // class IComponent
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CMainFrameWnd_vftable1 CMainFrameWnd_vftable1, *PCMainFrameWnd_vftable1;

struct CMainFrameWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CMainFrameWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CMainFrameWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CMainFrameWnd virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMainFrameWnd_vftable0 CMainFrameWnd_vftable0, *PCMainFrameWnd_vftable0;

struct CMainFrameWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CMainFrameWnd virtual function #1
    CMainFrameWnd * (*deleting_destructor)(void *, byte); // CMainFrameWnd virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CMainFrameWnd virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMainFrameWnd virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*BeginModalState)(void *); // CFrameWnd virtual function #67
    void (*EndModalState)(void *); // CFrameWnd virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CMainFrameWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
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
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #104
    void (*DisplayAdWnd)(void *); // CMainFrameWnd virtual function #105
    void (*ShowGameRate)(void *, int); // CMainFrameWnd virtual function #106
    void (*GetTicket)(void *, int); // CMainFrameWnd virtual function #107
    void (*RefreshCookie)(void *); // CMainFrameWnd virtual function #108
    void (*OnTimer)(void *, uint); // CMainFrameWnd virtual function #109
};

typedef struct CMainFrameWnd CMainFrameWnd, *PCMainFrameWnd;

typedef struct CMainFrameWnd_data CMainFrameWnd_data, *PCMainFrameWnd_data;

typedef struct CConsoleAdapter CConsoleAdapter, *PCConsoleAdapter;

struct CMainFrameWnd_data {
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
    int *offset_0x1c;
    int *offset_0x20;
    int *offset_0x24;
    int *offset_0x28;
    int *offset_0x2c;
    int *offset_0x30;
    int *offset_0x34;
    int *offset_0x38;
    int *offset_0x3c;
    int *offset_0x40;
    int *offset_0x44;
    int *offset_0x48;
    int *offset_0x4c;
    undefined4 *offset_0x50;
    struct CBgPainter *offset_0x54;
    struct CBgPainter *offset_0x58;
    undefined field44_0x5c;
    undefined field45_0x5d;
    undefined field46_0x5e;
    undefined field47_0x5f;
    undefined field48_0x60;
    undefined field49_0x61;
    undefined field50_0x62;
    undefined field51_0x63;
    undefined field52_0x64;
    undefined field53_0x65;
    undefined field54_0x66;
    undefined field55_0x67;
    undefined field56_0x68;
    undefined field57_0x69;
    undefined field58_0x6a;
    undefined field59_0x6b;
    undefined field60_0x6c;
    undefined field61_0x6d;
    undefined field62_0x6e;
    undefined field63_0x6f;
    undefined field64_0x70;
    undefined field65_0x71;
    undefined field66_0x72;
    undefined field67_0x73;
    undefined field68_0x74;
    undefined field69_0x75;
    undefined field70_0x76;
    undefined field71_0x77;
    undefined field72_0x78;
    undefined field73_0x79;
    undefined field74_0x7a;
    undefined field75_0x7b;
    undefined field76_0x7c;
    undefined field77_0x7d;
    undefined field78_0x7e;
    undefined field79_0x7f;
    undefined4 *offset_0x80;
    undefined field81_0x84;
    undefined field82_0x85;
    undefined field83_0x86;
    undefined field84_0x87;
    struct CConsoleAdapter *offset_0x88;
};

struct CConsoleAdapter { // PlaceHolder Structure
};

struct CMainFrameWnd { // class CMainFrameWnd : CFrameWnd : CControlBase
    struct CMainFrameWnd_vftable0 *vftablePtr;
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
    struct CMainFrameWnd_vftable1 *vftablePtr;
    struct CMainFrameWnd_data CMainFrameWnd_data;
};

typedef struct CMFunctor<CGameLobbyView>_vftable CMFunctor<CGameLobbyView>_vftable, *PCMFunctor<CGameLobbyView>_vftable;

struct CMFunctor<CGameLobbyView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGameLobbyView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyView> virtual function #3
};

typedef struct CMFunctor<CGameLobbyView>_data CMFunctor<CGameLobbyView>_data, *PCMFunctor<CGameLobbyView>_data;

struct CMFunctor<CGameLobbyView>_data {
    void *offset_0x0;
    undefined1 *offset_0x4;
};

typedef struct CMFunctor<CGameLobbyView> CMFunctor<CGameLobbyView>, *PCMFunctor<CGameLobbyView>;

struct CMFunctor<CGameLobbyView>_data {
    void *offset_0x0;
    undefined1 *offset_0x4;
};

struct CMFunctor<CGameLobbyView> { // class CMFunctor<CGameLobbyView> : IFunctor
    struct CMFunctor<CGameLobbyView>_vftable *vftablePtr;
    struct CMFunctor<CGameLobbyView>_data CMFunctor<CGameLobbyView>_data;
};

typedef struct CMFunctor<CGameWnd> CMFunctor<CGameWnd>, *PCMFunctor<CGameWnd>;

typedef struct CMFunctor<CGameWnd>_vftable CMFunctor<CGameWnd>_vftable, *PCMFunctor<CGameWnd>_vftable;

struct CMFunctor<CGameWnd> { // class CMFunctor<CGameWnd> : IFunctor
    struct CMFunctor<CGameWnd>_vftable *vftablePtr;
};

struct CMFunctor<CGameWnd>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelMainWnd> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGameWnd> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelMainWnd> virtual function #3
};

typedef struct CRectDrawer_vftable CRectDrawer_vftable, *PCRectDrawer_vftable;

struct CRectDrawer_vftable {
    CRectDrawer * (*deleting_destructor)(void *, byte); // CRectDrawer virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CRectDrawer virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CRectDrawer CRectDrawer, *PCRectDrawer;

struct CRectDrawer { // class CRectDrawer : CControlBase
    struct CRectDrawer_vftable *vftablePtr;
};

typedef struct CButton CButton, *PCButton;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CButton { // class CButton : CWnd
    struct CWnd CWnd;
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CHanChatViewWnd_vftable0 CHanChatViewWnd_vftable0, *PCHanChatViewWnd_vftable0;

struct CHanChatViewWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CHanChatViewWnd virtual function #1
    CHanChatViewWnd * (*deleting_destructor)(void *, byte); // CHanChatViewWnd virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CHanChatViewWnd virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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
};

typedef struct CHanChatViewWnd_vftable1 CHanChatViewWnd_vftable1, *PCHanChatViewWnd_vftable1;

struct CHanChatViewWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CHanChatViewWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CHanChatViewWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CHanChatViewWnd_data CHanChatViewWnd_data, *PCHanChatViewWnd_data;

struct CHanChatViewWnd_data {
    int *offset_0x0;
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
    undefined field253_0x100;
    undefined field254_0x101;
    undefined field255_0x102;
    undefined field256_0x103;
    undefined field257_0x104;
    undefined field258_0x105;
    undefined field259_0x106;
    undefined field260_0x107;
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
    int *offset_0x244;
    struct CBgPainter *offset_0x248;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHanChatViewWnd/CHanChatViewWnd - /CHanChatViewWnd

typedef struct CStatic CStatic, *PCStatic;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CStatic { // class CStatic : CWnd
    struct CWnd CWnd;
};

typedef struct CLineDrawer_vftable CLineDrawer_vftable, *PCLineDrawer_vftable;

struct CLineDrawer_vftable {
    CLineDrawer * (*deleting_destructor)(void *, byte); // CLineDrawer virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CLineDrawer virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CLineDrawer CLineDrawer, *PCLineDrawer;

struct CLineDrawer { // class CLineDrawer : CControlBase
    struct CLineDrawer_vftable *vftablePtr;
};


// WARNING! conflicting data type names: /ClassDataTypes/CMainFrameView/CMainFrameView - /CMainFrameView

typedef struct CMainFrameView_vftable CMainFrameView_vftable, *PCMainFrameView_vftable;

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
    undefined4 * (*deleting_destructor)(void *, byte); // CMainFrameView virtual function #10
};

typedef struct CGameLobbyView CGameLobbyView, *PCGameLobbyView;

typedef struct CGameLobbyView_vftable CGameLobbyView_vftable, *PCGameLobbyView_vftable;

struct CBaseLobbyView_data {
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
    undefined1 offset_0x20;
    undefined field30_0x21;
    undefined field31_0x22;
    undefined field32_0x23;
    undefined field33_0x24;
    undefined field34_0x25;
    undefined field35_0x26;
    undefined field36_0x27;
    undefined4 offset_0x28;
};

struct CGameLobbyView_vftable {
    bool (*OnAttached)(void *); // CGameLobbyView virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyView virtual function #2
    CBaseLobbyView * (*deleting_destructor)(void *, byte); // CGameLobbyView virtual function #3
    int (*Msg_GetWindow)(void *, struct IParam *); // CBaseLobbyView virtual function #4
    int (*Msg_UpdateUIFromXML)(void *, struct IParam *); // CGameLobbyView virtual function #5
    int (*OnClickExitGameBtn)(void *, struct IParam *); // CGameLobbyView virtual function #6
};

struct CGameLobbyView { // class CGameLobbyView : CBaseLobbyView
    struct CGameLobbyView_vftable *vftablePtr;
    struct CBaseLobbyView_data CBaseLobbyView_data;
};

typedef struct CMFunctor<CMainFrameView>_vftable CMFunctor<CMainFrameView>_vftable, *PCMFunctor<CMainFrameView>_vftable;

struct CMFunctor<CMainFrameView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CMainFrameView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyView> virtual function #3
};

typedef struct CMFunctor<CMainFrameView> CMFunctor<CMainFrameView>, *PCMFunctor<CMainFrameView>;

struct CMFunctor<CMainFrameView> { // class CMFunctor<CMainFrameView> : IFunctor
    struct CMFunctor<CMainFrameView>_vftable *vftablePtr;
};

typedef struct CMFunctor<CChannelLobbyView> CMFunctor<CChannelLobbyView>, *PCMFunctor<CChannelLobbyView>;

typedef struct CMFunctor<CChannelLobbyView>_vftable CMFunctor<CChannelLobbyView>_vftable, *PCMFunctor<CChannelLobbyView>_vftable;

struct CMFunctor<CChannelLobbyView> { // class CMFunctor<CChannelLobbyView> : IFunctor
    struct CMFunctor<CChannelLobbyView>_vftable *vftablePtr;
};

struct CMFunctor<CChannelLobbyView>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CBaseLobbyView> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CChannelLobbyView> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CBaseLobbyView> virtual function #3
};

typedef struct CMemberListTabCtrl_vftable CMemberListTabCtrl_vftable, *PCMemberListTabCtrl_vftable;

struct CMemberListTabCtrl_vftable {
    CMemberListTabCtrl * (*deleting_destructor)(void *, byte); // CMemberListTabCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CCustomTabCtrl virtual function #4
    void (*ShowControl)(void *, bool); // CCustomTabCtrl virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomTabCtrl virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CCustomTabCtrl virtual function #8
};

typedef struct CMemberListTabCtrl CMemberListTabCtrl, *PCMemberListTabCtrl;

struct CMemberListTabCtrl { // class CMemberListTabCtrl : CCustomTabCtrl
    struct CMemberListTabCtrl_vftable *vftablePtr;
};

typedef struct CChannelLobbyView_vftable CChannelLobbyView_vftable, *PCChannelLobbyView_vftable;

struct CChannelLobbyView_vftable {
    bool (*OnAttached)(void *); // CChannelLobbyView virtual function #1
    bool (*OnDetached)(void *); // CBaseLobbyView virtual function #2
    CBaseLobbyView * (*deleting_destructor)(void *, byte); // CChannelLobbyView virtual function #3
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
    int (*Evt_ChannelGaeaPrizeData)(void *, struct IParam *); // CChannelLobbyView virtual function #24
    int (*OnClickShowEmptyRoomBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #25
    int (*OnClickShowRoomNumOrderBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #26
    int (*OnClickSearchRoomBtn)(void *, struct IParam *); // CChannelLobbyView virtual function #27
};


// WARNING! conflicting data type names: /ClassDataTypes/CChannelLobbyView/CChannelLobbyView - /CChannelLobbyView

typedef struct CGdiObject CGdiObject, *PCGdiObject;

typedef struct CGdiObject_vftable CGdiObject_vftable, *PCGdiObject_vftable;

struct CGdiObject { // class CGdiObject : CObject
    struct CGdiObject_vftable *vftablePtr;
};

struct CGdiObject_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGdiObject virtual function #1
    void * (*deleting_destructor)(void *, uint); // CGdiObject virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
};

typedef struct CMemberListCtrl_vftable0 CMemberListCtrl_vftable0, *PCMemberListCtrl_vftable0;

struct CMemberListCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CMemberListCtrl virtual function #1
    CMemberListCtrl * (*deleting_destructor)(void *, byte); // CMemberListCtrl virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMemberListCtrl virtual function #13
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CMemberListCtrl virtual function #82
    int (*OnSortItem)(void *, ulong, ulong, int, int); // CListCtrlEx virtual function #83
    bool (*DoListCtrlSetting)(void *); // CMemberListCtrl virtual function #84
    void (*GetColumnFormatString)(void *, int, char *, char *, int); // CListCtrlEx virtual function #85
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CListCtrlEx virtual function #86
};

typedef struct CMemberListCtrl_vftable1 CMemberListCtrl_vftable1, *PCMemberListCtrl_vftable1;

struct CMemberListCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CMemberListCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CListCtrlEx virtual function #2
    bool (*DestroyControl)(void *); // CMemberListCtrl virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CListCtrlEx virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMemberListCtrl CMemberListCtrl, *PCMemberListCtrl;

struct CMemberListCtrl { // class CMemberListCtrl : CListCtrlEx
    struct CMemberListCtrl_vftable0 *vftablePtr;
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
    struct CMemberListCtrl_vftable1 *vftablePtr;
};

typedef struct CMFunctor<CMainFrameWnd>_vftable CMFunctor<CMainFrameWnd>_vftable, *PCMFunctor<CMainFrameWnd>_vftable;

struct CMFunctor<CMainFrameWnd>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelMainWnd> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CMainFrameWnd> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelMainWnd> virtual function #3
};

typedef struct CMFunctor<CMainFrameWnd>_data CMFunctor<CMainFrameWnd>_data, *PCMFunctor<CMainFrameWnd>_data;

struct CMFunctor<CMainFrameWnd>_data {
    void *offset_0x0;
    undefined *offset_0x4;
    undefined4 offset_0x8;
};

typedef struct CMFunctor<CMainFrameWnd> CMFunctor<CMainFrameWnd>, *PCMFunctor<CMainFrameWnd>;

struct CMFunctor<CMainFrameWnd>_data {
    void *offset_0x0;
    undefined *offset_0x4;
    undefined4 offset_0x8;
};

struct CMFunctor<CMainFrameWnd> { // class CMFunctor<CMainFrameWnd> : IFunctor
    struct CMFunctor<CMainFrameWnd>_vftable *vftablePtr;
    struct CMFunctor<CMainFrameWnd>_data CMFunctor<CMainFrameWnd>_data;
};

typedef struct CListCtrl CListCtrl, *PCListCtrl;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CListCtrl { // class CListCtrl : CWnd
    struct CWnd CWnd;
};

typedef struct CMFunctor<CChannelMainWnd>_data CMFunctor<CChannelMainWnd>_data, *PCMFunctor<CChannelMainWnd>_data;

struct CMFunctor<CChannelMainWnd>_data {
    void *offset_0x0;
    undefined *offset_0x4;
    undefined4 offset_0x8;
};

typedef struct CMFunctor<CChannelMainWnd>_vftable CMFunctor<CChannelMainWnd>_vftable, *PCMFunctor<CChannelMainWnd>_vftable;

struct CMFunctor<CChannelMainWnd>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelMainWnd> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CChannelMainWnd> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelMainWnd> virtual function #3
};

typedef struct CMFunctor<CChannelMainWnd> CMFunctor<CChannelMainWnd>, *PCMFunctor<CChannelMainWnd>;

struct CMFunctor<CChannelMainWnd>_data {
    void *offset_0x0;
    undefined *offset_0x4;
    undefined4 offset_0x8;
};

struct CMFunctor<CChannelMainWnd> { // class CMFunctor<CChannelMainWnd> : IFunctor
    struct CMFunctor<CChannelMainWnd>_vftable *vftablePtr;
    struct CMFunctor<CChannelMainWnd>_data CMFunctor<CChannelMainWnd>_data;
};

typedef struct CListCtrlEx_vftable0 CListCtrlEx_vftable0, *PCListCtrlEx_vftable0;

struct CListCtrlEx_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CListCtrlEx virtual function #1
    CListCtrlEx * (*deleting_destructor)(void *, byte); // CListCtrlEx virtual function #2
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #3
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #4
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #5
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
    void (*PlayEventSound)(void *, int); // CGameWnd virtual function #66
    void (*vfunction67)(void *); // CGameWnd virtual function #67
    void (*vfunction68)(void *); // CGameWnd virtual function #68
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

typedef struct CGameReg CGameReg, *PCGameReg;

struct CGameReg { // PlaceHolder Structure
};

typedef struct CDC CDC, *PCDC;

struct CDC { // PlaceHolder Structure
};

typedef struct CItemManager CItemManager, *PCItemManager;

struct CItemManager { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCustomStatic - /ClassDataTypes/CCustomStatic/CCustomStatic

typedef struct CWinThread CWinThread, *PCWinThread;

struct CWinThread { // PlaceHolder Structure
};

typedef struct CDisplayModeChanger CDisplayModeChanger, *PCDisplayModeChanger;

struct CDisplayModeChanger { // PlaceHolder Structure
};

typedef struct CMemberData CMemberData, *PCMemberData;

struct CMemberData { // PlaceHolder Structure
};

typedef struct CGameFinder CGameFinder, *PCGameFinder;

struct CGameFinder { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMyInfoCtrl - /ClassDataTypes/CMyInfoCtrl/CMyInfoCtrl

typedef struct IGod IGod, *PIGod;

struct IGod { // PlaceHolder Structure
};

typedef struct CFunctor CFunctor, *PCFunctor;

struct CFunctor { // PlaceHolder Structure
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CListCtrlEx - /ClassDataTypes/CListCtrlEx/CListCtrlEx

typedef struct CGlobalGameEvent CGlobalGameEvent, *PCGlobalGameEvent;

struct CGlobalGameEvent { // PlaceHolder Structure
};

typedef struct CProcessXML CProcessXML, *PCProcessXML;

struct CProcessXML { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CRoomListCtrl_T1 - /ClassDataTypes/CRoomListCtrl_T1/CRoomListCtrl_T1

typedef struct AFX_EVENTSINKMAP AFX_EVENTSINKMAP, *PAFX_EVENTSINKMAP;

struct AFX_EVENTSINKMAP { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMemberListCtrl - /ClassDataTypes/CMemberListCtrl/CMemberListCtrl

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { // PlaceHolder Structure
};

typedef struct AFX_CONNECTIONMAP AFX_CONNECTIONMAP, *PAFX_CONNECTIONMAP;

struct AFX_CONNECTIONMAP { // PlaceHolder Structure
};

typedef struct tagNMHDR tagNMHDR, *PtagNMHDR;

struct tagNMHDR { // PlaceHolder Structure
};

typedef struct CChatCtrl CChatCtrl, *PCChatCtrl;

struct CChatCtrl { // PlaceHolder Structure
};

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { // PlaceHolder Structure
};

typedef struct tagMEASUREITEMSTRUCT tagMEASUREITEMSTRUCT, *PtagMEASUREITEMSTRUCT;

struct tagMEASUREITEMSTRUCT { // PlaceHolder Structure
};

typedef struct CMetpParser CMetpParser, *PCMetpParser;

struct CMetpParser { // PlaceHolder Structure
};

typedef struct CGameBanish CGameBanish, *PCGameBanish;

struct CGameBanish { // PlaceHolder Structure
};

typedef struct tagCOMPAREITEMSTRUCT tagCOMPAREITEMSTRUCT, *PtagCOMPAREITEMSTRUCT;

struct tagCOMPAREITEMSTRUCT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMultiBmpButton - /ClassDataTypes/CMultiBmpButton/CMultiBmpButton

typedef struct CChannelData CChannelData, *PCChannelData;

struct CChannelData { // PlaceHolder Structure
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

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};

typedef struct CHttpFile CHttpFile, *PCHttpFile;

struct CHttpFile { // PlaceHolder Structure
};

typedef struct CMsnBuddyList CMsnBuddyList, *PCMsnBuddyList;

struct CMsnBuddyList { // PlaceHolder Structure
};

typedef struct GA_PRM_UserInfo GA_PRM_UserInfo, *PGA_PRM_UserInfo;

struct GA_PRM_UserInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameLobbyView - /ClassDataTypes/CGameLobbyView/CGameLobbyView

typedef struct CParam CParam, *PCParam;

struct CParam { // PlaceHolder Structure
};

typedef struct CPrintPreviewState CPrintPreviewState, *PCPrintPreviewState;

struct CPrintPreviewState { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CView - /ClassDataTypes/CView/CView

typedef struct GA_PRZ_Data GA_PRZ_Data, *PGA_PRZ_Data;

struct GA_PRZ_Data { // PlaceHolder Structure
};

typedef struct CPNDcurve CPNDcurve, *PCPNDcurve;

struct CPNDcurve { // PlaceHolder Structure
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};

typedef struct CChannelListCtrl CChannelListCtrl, *PCChannelListCtrl;

struct CChannelListCtrl { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct SGlobalInfo SGlobalInfo, *PSGlobalInfo;

struct SGlobalInfo { // PlaceHolder Structure
};

typedef struct CCfgSetting CCfgSetting, *PCCfgSetting;

struct CCfgSetting { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CBmpButton - /ClassDataTypes/CBmpButton/CBmpButton

typedef struct tagDELETEITEMSTRUCT tagDELETEITEMSTRUCT, *PtagDELETEITEMSTRUCT;

struct tagDELETEITEMSTRUCT { // PlaceHolder Structure
};

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Structure
};

typedef struct CPrintInfo CPrintInfo, *PCPrintInfo;

struct CPrintInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFrameWnd - /ClassDataTypes/CFrameWnd/CFrameWnd

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGdiObject - /ClassDataTypes/CGdiObject/CGdiObject


// WARNING! conflicting data type names: /Demangler/CListCtrl - /ClassDataTypes/CListCtrl/CListCtrl


// WARNING! conflicting data type names: /Demangler/CHanChatEditComboBox - /ClassDataTypes/CHanChatEditComboBox/CHanChatEditComboBox

typedef struct CSTLogFile CSTLogFile, *PCSTLogFile;

struct CSTLogFile { // PlaceHolder Structure
};

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CAdFileDownload - /ClassDataTypes/CAdFileDownload/CAdFileDownload

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { // PlaceHolder Structure
};

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

struct HACCEL__ { // PlaceHolder Structure
};

typedef enum NThread_State {
} NThread_State;

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

typedef struct CRect CRect, *PCRect;

struct CRect { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CBrush - /ClassDataTypes/CBrush/CBrush

typedef struct tagDRAWITEMSTRUCT tagDRAWITEMSTRUCT, *PtagDRAWITEMSTRUCT;

struct tagDRAWITEMSTRUCT { // PlaceHolder Structure
};

typedef struct CDialogList CDialogList, *PCDialogList;

struct CDialogList { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CNoticeWnd - /ClassDataTypes/CNoticeWnd/CNoticeWnd

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};

typedef struct CFontList CFontList, *PCFontList;

struct CFontList { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMemberListTabCtrl - /ClassDataTypes/CMemberListTabCtrl/CMemberListTabCtrl

typedef struct CMemberDataList CMemberDataList, *PCMemberDataList;

struct CMemberDataList { // PlaceHolder Structure
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown { // PlaceHolder Structure
};

typedef struct CExitReason CExitReason, *PCExitReason;

struct CExitReason { // PlaceHolder Structure
};

typedef struct tagMSG tagMSG, *PtagMSG;

struct tagMSG { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCmdTarget - /ClassDataTypes/CCmdTarget/CCmdTarget

typedef struct CGaeaData CGaeaData, *PCGaeaData;

struct CGaeaData { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMainFrameWnd - /ClassDataTypes/CMainFrameWnd/CMainFrameWnd


// WARNING! conflicting data type names: /Demangler/CWnd - /ClassDataTypes/CWnd/CWnd

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CButton - /ClassDataTypes/CButton/CButton

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};

typedef struct CPlayerInfoList CPlayerInfoList, *PCPlayerInfoList;

struct CPlayerInfoList { // PlaceHolder Structure
};

typedef struct IParam IParam, *PIParam;

struct IParam { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CStatic - /ClassDataTypes/CStatic/CStatic

typedef struct _AFX_OCC_DIALOG_INFO _AFX_OCC_DIALOG_INFO, *P_AFX_OCC_DIALOG_INFO;

struct _AFX_OCC_DIALOG_INFO { // PlaceHolder Structure
};

typedef struct tagTOOLINFOA tagTOOLINFOA, *PtagTOOLINFOA;

struct tagTOOLINFOA { // PlaceHolder Structure
};

typedef struct IDispatch IDispatch, *PIDispatch;

struct IDispatch { // PlaceHolder Structure
};

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CMiniChannelListWnd - /ClassDataTypes/CMiniChannelListWnd/CMiniChannelListWnd

typedef struct CAlarmData CAlarmData, *PCAlarmData;

struct CAlarmData { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CScrollSupportCtrl - /ClassDataTypes/CScrollSupportCtrl/CScrollSupportCtrl

typedef struct CPreviewView CPreviewView, *PCPreviewView;

struct CPreviewView { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCustomComboBox - /ClassDataTypes/CCustomComboBox/CCustomComboBox

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


// WARNING! conflicting data type names: /Demangler/CScrollView - /ClassDataTypes/CScrollView/CScrollView

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};

typedef struct CMsgCaller CMsgCaller, *PCMsgCaller;

struct CMsgCaller { // PlaceHolder Structure
};

typedef enum NInfoTypes {
} NInfoTypes;

typedef struct CInternetSession CInternetSession, *PCInternetSession;

struct CInternetSession { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CControlBase - /ClassDataTypes/CControlBase/CControlBase

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { // PlaceHolder Structure
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};

typedef struct CSize CSize, *PCSize;

struct CSize { // PlaceHolder Structure
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

typedef struct tagCOPYDATASTRUCT tagCOPYDATASTRUCT, *PtagCOPYDATASTRUCT;

struct tagCOPYDATASTRUCT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CLineDrawer - /ClassDataTypes/CLineDrawer/CLineDrawer

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

typedef struct CAppRunningState CAppRunningState, *PCAppRunningState;

struct CAppRunningState { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CComboBox - /ClassDataTypes/CComboBox/CComboBox

typedef struct COleDataObject COleDataObject, *PCOleDataObject;

struct COleDataObject { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHtmlCtrl - /ClassDataTypes/CHtmlCtrl/CHtmlCtrl

typedef struct CControlList CControlList, *PCControlList;

struct CControlList { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCustomTabCtrl - /ClassDataTypes/CCustomTabCtrl/CCustomTabCtrl


// WARNING! conflicting data type names: /Demangler/CObject - /ClassDataTypes/CObject/CObject


// WARNING! conflicting data type names: /Demangler/CRectDrawer - /ClassDataTypes/CRectDrawer/CRectDrawer

typedef struct CGameReport CGameReport, *PCGameReport;

struct CGameReport { // PlaceHolder Structure
};

typedef struct MessageLog MessageLog, *PMessageLog;

struct MessageLog { // PlaceHolder Structure
};

typedef enum NThread_Location {
} NThread_Location;

typedef struct CRoomData CRoomData, *PCRoomData;

struct CRoomData { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct bitset<64> bitset<64>, *Pbitset<64>;

struct bitset<64> { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,SchemaFactory::CComplexType*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,SchemaFactory::CComplexType*>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,SchemaFactory::CComplexType*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,SchemaFactory::CComplexType*>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,SchemaFactory::CComplexType*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,SchemaFactory::CComplexType*>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,SchemaFactory::CComplexType*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,SchemaFactory::CComplexType*>_>_> { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_> { // PlaceHolder Structure
};

typedef struct vector<CChannelstGroupData*,std::allocator<CChannelstGroupData*>_> vector<CChannelstGroupData*,std::allocator<CChannelstGroupData*>_>, *Pvector<CChannelstGroupData*,std::allocator<CChannelstGroupData*>_>;

struct vector<CChannelstGroupData*,std::allocator<CChannelstGroupData*>_> { // PlaceHolder Structure
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

typedef enum Type {
} Type;

typedef struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CSimpleStringT<char,1> CSimpleStringT<char,1>, *PCSimpleStringT<char,1>;

struct CSimpleStringT<char,1> { // PlaceHolder Structure
};

typedef enum NBorderRect {
} NBorderRect;

typedef enum WndType {
} WndType;

typedef enum SortType {
} SortType;

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;




CBaseLobbyView * __thiscall CBaseLobbyView::CBaseLobbyView(CBaseLobbyView *this,CBaseLobbyView *param_1);
CBaseLobbyView * __thiscall CBaseLobbyView::operator=(CBaseLobbyView *this,CBaseLobbyView *param_1);
CBaseLobbyView * __thiscall CBaseLobbyView::scalar_deleting_destructor(CBaseLobbyView *this,byte param_1);
void FUN_60a010c0(void);
uint FUN_60a010e0(void);
CFontElement * __thiscall SchemaFactory::CVS_NET_UI::CFontElement::CFontElement(CFontElement *this,undefined4 *param_1);
void __fastcall FUN_60a011d0(int param_1);
void __fastcall FUN_60a01310(int param_1);
void __fastcall FUN_60a01450(int param_1);
void __fastcall FUN_60a01590(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CFontElement::vfunction3(CFontElement *this);
CWindowElement * __thiscall SchemaFactory::CVS_NET_UI::CWindowElement::CWindowElement(CWindowElement *this,undefined4 *param_1);
void __fastcall FUN_60a018c0(int param_1);
void __fastcall FUN_60a01a00(int param_1);
void __fastcall FUN_60a01b40(int param_1);
void __fastcall FUN_60a01c80(int param_1);
void __fastcall FUN_60a01dc0(int param_1);
void __fastcall FUN_60a01f00(int param_1);
void __fastcall FUN_60a02040(int param_1);
void __fastcall FUN_60a02180(int param_1);
void __fastcall FUN_60a022e0(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CWindowElement::vfunction3(CWindowElement *this);
void __thiscall SchemaFactory::CVS_NET_UI::CWindowElement::vfunction4(CWindowElement *this);
CButtonElement * __thiscall SchemaFactory::CVS_NET_UI::CButtonElement::CButtonElement(CButtonElement *this,undefined4 *param_1);
void __fastcall FUN_60a02a20(int param_1);
void __fastcall FUN_60a02b70(int param_1);
void __fastcall FUN_60a02cb0(int param_1);
void __fastcall FUN_60a02dc0(int param_1);
void __fastcall FUN_60a02f10(int param_1);
void __fastcall FUN_60a03050(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CButtonElement::vfunction3(CButtonElement *this);
CRoomListElement * __thiscall SchemaFactory::CVS_NET_UI::CRoomListElement::CRoomListElement(CRoomListElement *this,undefined4 *param_1);
void __fastcall FUN_60a03490(int param_1);
void __fastcall FUN_60a035d0(int param_1);
void __fastcall FUN_60a03710(int param_1);
void __fastcall FUN_60a03850(int param_1);
void __fastcall FUN_60a03990(int param_1);
void __fastcall FUN_60a03ad0(int param_1);
void __fastcall FUN_60a03c10(int param_1);
void __fastcall FUN_60a03d60(int param_1);
void __fastcall FUN_60a03ea0(int param_1);
void __fastcall FUN_60a03ff0(int param_1);
void __fastcall FUN_60a04130(int param_1);
void __fastcall FUN_60a04270(int param_1);
void __fastcall FUN_60a043c0(int param_1);
void __fastcall FUN_60a04500(int param_1);
void __fastcall FUN_60a04640(int param_1);
void __fastcall FUN_60a04780(int param_1);
void __fastcall FUN_60a048c0(int param_1);
void __fastcall FUN_60a04a00(int param_1);
void __fastcall FUN_60a04b40(int param_1);
void __fastcall FUN_60a04c80(int param_1);
void __fastcall FUN_60a04dc0(int param_1);
void __fastcall FUN_60a04f00(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CRoomListElement::vfunction3(CRoomListElement *this);
CListElement * __thiscall SchemaFactory::CVS_NET_UI::CListElement::CListElement(CListElement *this,undefined4 *param_1);
void __fastcall FUN_60a05840(int param_1);
void __fastcall FUN_60a05980(int param_1);
void __fastcall FUN_60a05ae0(int param_1);
void __fastcall FUN_60a05c20(int param_1);
void __fastcall FUN_60a05d60(int param_1);
void __fastcall FUN_60a05ea0(int param_1);
void __fastcall FUN_60a05fb0(int param_1);
void __fastcall FUN_60a060f0(int param_1);
void __fastcall FUN_60a06200(int param_1);
void __fastcall FUN_60a06310(int param_1);
void __fastcall FUN_60a06420(int param_1);
void __fastcall FUN_60a06530(int param_1);
void __fastcall FUN_60a06640(int param_1);
void __fastcall FUN_60a06750(int param_1);
void __fastcall FUN_60a06860(int param_1);
void __fastcall FUN_60a06970(int param_1);
void __fastcall FUN_60a06a80(int param_1);
void __fastcall FUN_60a06bc0(int param_1);
void __fastcall FUN_60a06d00(int param_1);
void __fastcall FUN_60a06e40(int param_1);
void __fastcall FUN_60a06f80(int param_1);
void __fastcall FUN_60a070c0(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CListElement::vfunction3(CListElement *this);
CNoticeWndElement * __thiscall SchemaFactory::CVS_NET_UI::CNoticeWndElement::CNoticeWndElement(CNoticeWndElement *this,undefined4 *param_1);
void __fastcall FUN_60a078e0(int param_1);
void __fastcall FUN_60a07a20(int param_1);
void __fastcall FUN_60a07b60(int param_1);
void __fastcall FUN_60a07cc0(int param_1);
void __fastcall FUN_60a07dd0(int param_1);
void __fastcall FUN_60a07ee0(int param_1);
void __fastcall FUN_60a07ff0(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CNoticeWndElement::vfunction3(CNoticeWndElement *this);
CStaticElement * __thiscall SchemaFactory::CVS_NET_UI::CStaticElement::CStaticElement(CStaticElement *this,undefined4 *param_1);
void __fastcall FUN_60a08570(int param_1);
void __fastcall FUN_60a086c0(int param_1);
void __fastcall FUN_60a08800(int param_1);
void __fastcall FUN_60a08910(int param_1);
void __fastcall FUN_60a08a70(int param_1);
void __fastcall FUN_60a08bb0(int param_1);
void __fastcall FUN_60a08cf0(int param_1);
void __fastcall FUN_60a08e30(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CStaticElement::vfunction3(CStaticElement *this);
CMsgBoxElement * __thiscall SchemaFactory::CVS_NET_UI::CMsgBoxElement::CMsgBoxElement(CMsgBoxElement *this,undefined4 *param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CMsgBoxElement::vfunction6(CMsgBoxElement *this);
void __fastcall FUN_60a09250(int param_1);
void __fastcall FUN_60a093b0(int param_1);
void __fastcall FUN_60a09510(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CMsgBoxElement::vfunction3(CMsgBoxElement *this);
undefined4 * __thiscall SchemaFactory::CVS_NET_UI::CWindowElement::scalar_deleting_destructor(CWindowElement *this,byte param_1);
CLineElement * __thiscall SchemaFactory::CVS_NET_UI::CLineElement::CLineElement(CLineElement *this,undefined4 *param_1);
void __thiscall CGameWnd::CGameWnd::CreateCaptionButtons(CGameWnd *this);
void __fastcall FUN_60a098b0(int param_1);
void __fastcall FUN_60a099f0(int param_1);
void __fastcall FUN_60a09b30(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CLineElement::vfunction3(CLineElement *this);
CRectElement * __thiscall SchemaFactory::CVS_NET_UI::CRectElement::CRectElement(CRectElement *this,undefined4 *param_1);
void __fastcall FUN_60a09e10(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CRectElement::vfunction3(CRectElement *this);
CGaugeCtrlElement * __thiscall SchemaFactory::CVS_NET_UI::CGaugeCtrlElement::CGaugeCtrlElement(CGaugeCtrlElement *this,undefined4 *param_1);
void __fastcall FUN_60a0a120(int param_1);
void __fastcall FUN_60a0a280(int param_1);
void __fastcall FUN_60a0a3d0(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CGaugeCtrlElement::vfunction3(CGaugeCtrlElement *this);
CWebElement * __thiscall SchemaFactory::CVS_NET_UI::CWebElement::CWebElement(CWebElement *this,undefined4 *param_1);
void __fastcall FUN_60a0a6f0(int param_1);
void __thiscall SchemaFactory::CVS_NET_UI::CWebElement::vfunction3(CWebElement *this);
bool __thiscall CBaseLobbyView::CBaseLobbyView::OnAttached(CBaseLobbyView *this);
CBaseLobbyView * __thiscall CBaseLobbyView::CBaseLobbyView(CBaseLobbyView *this,char *param_1,CWnd *param_2,bool param_3);
void __thiscall CBaseLobbyView::~CBaseLobbyView(CBaseLobbyView *this);
int __thiscall CBaseLobbyView::CBaseLobbyView::Msg_GetWindow(CBaseLobbyView *this,IParam *param_1);
int __thiscall CBaseLobbyView::CBaseLobbyView::Msg_UpdateUIFromXML(CBaseLobbyView *this,IParam *param_1);
int * FUN_60a0ad50(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
undefined4 * FUN_60a0add0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall CMFunctor<CBaseLobbyView>::scalar_deleting_destructor(CMFunctor<CBaseLobbyView> *this);
void FUN_60a0ae40(undefined4 *param_1);
void FUN_60a0aef0(void);
void FUN_60a0af80(undefined4 *param_1);
int * FUN_60a0b020(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_60a0b140(void *this,undefined4 *param_1,char param_2,void *param_3);
undefined4 * __thiscall FUN_60a0b380(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void Catch_All@60a0b408(void);
void FUN_60a0b420(void);
undefined4 * __cdecl FUN_60a0b4b0(CWebElement *param_1);
void FUN_60a0b520(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0b5d0(CWindowElement *param_1);
undefined4 * __cdecl FUN_60a0b640(CGaugeCtrlElement *param_1);
void FUN_60a0b6b0(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0b760(CRectElement *param_1);
void FUN_60a0b7d0(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0b880(CLineElement *param_1);
void FUN_60a0b8f0(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0b9a0(CNoticeWndElement *param_1);
void FUN_60a0ba10(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0bac0(CFontElement *param_1);
void FUN_60a0bb30(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0bbe0(CMsgBoxElement *param_1);
void FUN_60a0bc50(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0bd00(CStaticElement *param_1);
void FUN_60a0bd70(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0be20(CListElement *param_1);
void FUN_60a0be90(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0bf40(CRoomListElement *param_1);
void FUN_60a0bfb0(undefined4 *param_1);
undefined4 * __cdecl FUN_60a0c060(CButtonElement *param_1);
void FUN_60a0c0d0(undefined4 *param_1);
void FUN_60a0c180(exception *param_1);
void __thiscall SchemaFactory::CComplexType::~CComplexType(CComplexType *this);
void FUN_60a0c330(void);
int * FUN_60a0c370(int *param_1);
void FUN_60a0c3f0(int *param_1);
void FUN_60a0c430(void);
void __thiscall FUN_60a0c450(void *this,int param_1);
void __thiscall FUN_60a0c4a0(void *this,int param_1);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
undefined4 * FUN_60a0c500(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void FUN_60a0c7f0(void);
void FUN_60a0c860(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_60a0c940(void);
void FUN_60a0c980(undefined4 *param_1);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void FUN_60a0ca90(void);
int * FUN_60a0cad0(int *param_1);
void FUN_60a0cb50(void);
void FUN_60a0cb60(int *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,byte param_1);
void FUN_60a0cca0(exception *param_1);
int __thiscall std::logic_error::vfunction2(logic_error *this);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
void __thiscall FUN_60a0cd40(void *this,int param_1);
void __thiscall FUN_60a0cd90(void *this,int param_1);
undefined4 * FUN_60a0cde0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void FUN_60a0d100(void);
void FUN_60a0d170(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_60a0d250(void);
void FUN_60a0d290(undefined4 *param_1);
CComplexType * __thiscall SchemaFactory::CComplexType::CComplexType(CComplexType *this);
void FUN_60a0d370(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
void FUN_60a0d3b0(exception *param_1);
CChannelLobbyView * __thiscall CChannelLobbyView::CChannelLobbyView(CChannelLobbyView *this,CChannelLobbyView *param_1);
CChannelLobbyView * __thiscall CChannelLobbyView::operator=(CChannelLobbyView *this,CChannelLobbyView *param_1);
CBaseLobbyView * __thiscall CChannelLobbyView::scalar_deleting_destructor(CChannelLobbyView *this,byte param_1);
bool __thiscall CChannelLobbyView::CChannelLobbyView::OnAttached(CChannelLobbyView *this);
CChannelLobbyView * __thiscall CChannelLobbyView::CChannelLobbyView(CChannelLobbyView *this);
CMFunctor<CChannelLobbyView> * __thiscall CMFunctor<CChannelLobbyView>::CMFunctor<CChannelLobbyView>(CMFunctor<CChannelLobbyView> *this,char *param_1,CWnd *param_2,bool param_3);
void __thiscall CChannelLobbyView::~CChannelLobbyView(CChannelLobbyView *this);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_RefreshTicket(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnActivateOn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_LobbyState_OnStateChanged(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::Msg_UpdateUIFromXML(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnUpdateRoomList(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnUpdateMemberList(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnUpdateMsnBuddyList(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnUpdateNotice(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnDblClickRoomList(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnDblClickMemberList(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnGetItemState(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnCloseItemWebDlg(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickChangeChannelBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickAutoCreateRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickCreateRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickJoinRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickViewRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickRoomAvatar(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickDirectStartBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickRecommendedGameBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickExitBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickShowItemWebBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickHappyBeanBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickGuildCtrl(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnExitReason_MINUSMONEY(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnExitReason_BANISHED(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnExitReason_NOGUAGE(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnExitReason_CANTSTAYCHANNEL(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnExitReason_BADUSER(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnAvatarChange(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnUpdateMyInfo(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_FailAutoCreateRoom(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnExitReason_ConnectTypeError(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnExitReason_ReserveBanish(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnExitReason_SHUTDOWN(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnChannelSocketActive(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnChannelJoinComplete(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickShowEmptyRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickShowRoomNumOrderBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickSearchRoomBtn(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnUserExitGameRoom(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnSetGameRate(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnGetShutdownTime(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnShutdownExit(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnShutdownNotice(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickThermometer(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnShowWindow(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::OnClickSPCRoom(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelLobby_OnSetSPCRoomString(CChannelLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::CChannelLobbyView::Evt_ChannelGaeaPrizeData(CChannelLobbyView *this,IParam *param_1);
int * __thiscall FUN_60a10ff0(void *this,int *param_1);
void FUN_60a110d0(void);
int FUN_60a11100(void);
void __thiscall std::length_error::length_error(length_error *this);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
undefined4 __thiscall FUN_60a11200(void *this,undefined4 param_1);
void Catch@60a1129b(void);
void FUN_60a112c0(exception *param_1);
void __thiscall CMFunctor<CChannelLobbyView>::scalar_deleting_destructor(CMFunctor<CChannelLobbyView> *this);
void FUN_60a11420(void);
void FUN_60a11440(void);
CChannelMainWnd * __thiscall CChannelMainWnd::scalar_deleting_destructor(CChannelMainWnd *this,byte param_1);
CRuntimeClass * CChannelMainWnd::_GetBaseClass(void);
CRuntimeClass * __thiscall CChannelMainWnd::CChannelMainWnd::GetRuntimeClass(CChannelMainWnd *this);
CChannelMainWnd * __thiscall CChannelMainWnd::CChannelMainWnd(CChannelMainWnd *this);
CRoomListCtrl_T1 * __thiscall CRoomListCtrl_T1::scalar_deleting_destructor(CRoomListCtrl_T1 *this,byte param_1);
CListCtrlEx * __thiscall CListCtrlEx::scalar_deleting_destructor(CListCtrlEx *this,byte param_1);
CRectDrawer * __thiscall CRectDrawer::scalar_deleting_destructor(CRectDrawer *this,byte param_1);
CNoticeWnd * __thiscall CNoticeWnd::scalar_deleting_destructor(CNoticeWnd *this,byte param_1);
CScrollSupportCtrl * __thiscall CScrollSupportCtrl::scalar_deleting_destructor(CScrollSupportCtrl *this,byte param_1);
CBmpButton * __thiscall CBmpButton::scalar_deleting_destructor(CBmpButton *this,byte param_1);
CCustomStatic * __thiscall CCustomStatic::scalar_deleting_destructor(CCustomStatic *this,byte param_1);
CMyInfoCtrl * __thiscall CMyInfoCtrl::scalar_deleting_destructor(CMyInfoCtrl *this,byte param_1);
CMemberListCtrl * __thiscall CMemberListCtrl::scalar_deleting_destructor(CMemberListCtrl *this,byte param_1);
CMultiBmpButton * __thiscall CMultiBmpButton::scalar_deleting_destructor(CMultiBmpButton *this,byte param_1);
void __thiscall CChannelMainWnd::~CChannelMainWnd(CChannelMainWnd *this);
AFX_MSGMAP * __thiscall CChannelMainWnd::CChannelMainWnd::GetMessageMap(CChannelMainWnd *this);
int __thiscall CChannelMainWnd::OnCreate(CChannelMainWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CChannelMainWnd::CChannelMainWnd::InitiateChannelMainWnd(CChannelMainWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateRoomListCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateMyInfoCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AddTab(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AttachScrollCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AttachListControl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AttachHtmlCtrl(CChannelMainWnd *this,IParam *param_1);
CHtmlCtrl * __thiscall CHtmlCtrl::scalar_deleting_destructor(CHtmlCtrl *this,byte param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::AttachBtn(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CrateTabMemberList(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateTabCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateMemberListCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateGuildListCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateFriendListCtrl(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateNoticeWnd(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::CreateChannelButton(CChannelMainWnd *this,IParam *param_1);
int __thiscall CBrush::OnEraseBkgnd(CBrush *this,CDC *param_1);
void __thiscall CChannelMainWnd::OnDblClickRoomList(CChannelMainWnd *this,tagNMHDR *param_1,long *param_2);
void __thiscall CChannelMainWnd::OnCommand_204(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::OnCommand_205(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::OnCommand_216(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::OnCommand_206(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::CChannelMainWnd::SortRoomList(CChannelMainWnd *this,int param_1);
void __thiscall CChannelMainWnd::OnCommand_207(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::OnCommand_210(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::OnCommand_208(CChannelMainWnd *this);
void __thiscall CChannelMainWnd::OnCommand_209(CChannelMainWnd *this);
int __thiscall CChannelMainWnd::OnClickHideHanChatBtn(CChannelMainWnd *this,IParam *param_1);
int __thiscall CChannelMainWnd::OnClickHideGuildHanChatBtn(CChannelMainWnd *this,IParam *param_1);
void __thiscall CChannelMainWnd::CChannelMainWnd::UpdateControl(CChannelMainWnd *this,IParam *param_1);
long __thiscall CChannelMainWnd::OnHanNotify(CChannelMainWnd *this,uint param_1,long param_2);
void __thiscall CMFunctor<CChannelMainWnd>::scalar_deleting_destructor(CMFunctor<CChannelMainWnd> *this);
void __thiscall CCustomStatic::vfunction1(CCustomStatic *this,byte param_1);
void __thiscall CNoticeWnd::vfunction1(CNoticeWnd *this,byte param_1);
void __thiscall CMultiBmpButton::vfunction1(CMultiBmpButton *this,byte param_1);
void __thiscall CChannelMainWnd::vfunction1(CChannelMainWnd *this,byte param_1);
void __thiscall CRoomListCtrl_T1::vfunction1(CRoomListCtrl_T1 *this,byte param_1);
void __thiscall CMyInfoCtrl::vfunction1(CMyInfoCtrl *this,byte param_1);
void __thiscall CBmpButton::vfunction1(CBmpButton *this,byte param_1);
void __thiscall CScrollSupportCtrl::vfunction1(CScrollSupportCtrl *this,byte param_1);
void __thiscall CListCtrlEx::vfunction1(CListCtrlEx *this,byte param_1);
void __thiscall CMemberListCtrl::vfunction1(CMemberListCtrl *this,byte param_1);
CMemberListTabCtrl * __thiscall CMemberListTabCtrl::scalar_deleting_destructor(CMemberListTabCtrl *this,byte param_1);
void __thiscall CGameWnd::vfunction68(CGameWnd *this);
void __thiscall CGameWnd::vfunction67(CGameWnd *this);
void __thiscall CGameWnd::CGameWnd::PlayEventSound(CGameWnd *this,int param_1);
undefined4 * __thiscall CBrush::scalar_deleting_destructor(CBrush *this,byte param_1);
void * __thiscall CGdiObject::CImageList::`scalar_deleting_destructor'(CGdiObject *this,uint param_1);
void __thiscall CGdiObject::~CGdiObject(CGdiObject *this);
undefined4 Catch@60a15673(void);
undefined4 FUN_60a15710(undefined4 param_1,int param_2);
undefined4 FUN_60a15740(HINSTANCE__ *param_1,int param_2);
bool __thiscall CGameWnd::CGameWnd::DisplayChatMessage(CGameWnd *this,uint param_1,char *param_2,int param_3,ulong param_4,int param_5,int param_6,char *param_7);
bool __thiscall CGameWnd::CGameWnd::DisplayNoticeMessage(CGameWnd *this,char *param_1,int param_2,int param_3,char *param_4,char *param_5);
bool __thiscall CGameWnd::CGameWnd::DisplayStatusMessage(CGameWnd *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5,char *param_6);
int __thiscall CGameWnd::CGameWnd::FlipScreen(CGameWnd *this);
bool __thiscall CGameWnd::CGameWnd::IsActivate(CGameWnd *this);
CGameLobbyView * __thiscall CGameLobbyView::CGameLobbyView(CGameLobbyView *this,CGameLobbyView *param_1);
CBaseLobbyView * __thiscall CGameLobbyView::scalar_deleting_destructor(CGameLobbyView *this,byte param_1);
bool __thiscall CGameLobbyView::CGameLobbyView::OnAttached(CGameLobbyView *this);
bool __thiscall CBaseLobbyView::CBaseLobbyView::OnDetached(CBaseLobbyView *this);
CGameLobbyView * __thiscall CGameLobbyView::CGameLobbyView(CGameLobbyView *this);
void __thiscall CGameLobbyView::~CGameLobbyView(CGameLobbyView *this);
int __thiscall CGameLobbyView::Evt_GameLobby_OnActivateOn(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::CGameLobbyView::OnClickExitGameBtn(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::Msg_RegisterGameWnd(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::CGameLobbyView::Msg_UpdateUIFromXML(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::Evt_GameLobby_OnActivateOnGameWnd(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::Evt_GameLobby_OnActivateOffGameWnd(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::Evt_GameLobby_OnForceExitRoom(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::Evt_GameLobby_OnAvatarChange(CGameLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::Evt_GameLobby_OnRecvProvokeItem(CGameLobbyView *this,IParam *param_1);
int __thiscall CChannelLobbyView::Evt_ChannelGaeaPromotionData(CChannelLobbyView *this,IParam *param_1);
int __thiscall CGameLobbyView::Evt_RoomGaeaPrizeData(CGameLobbyView *this,IParam *param_1);
void __thiscall CMFunctor<CGameLobbyView>::scalar_deleting_destructor(CMFunctor<CGameLobbyView> *this);
CGameWnd * __thiscall CGameWnd::scalar_deleting_destructor(CGameWnd *this,byte param_1);
CRuntimeClass * __thiscall CGameWnd::CGameWnd::GetRuntimeClass(CGameWnd *this);
void __thiscall CMFunctor<CGameWnd>::CMFunctor<CGameWnd>(CMFunctor<CGameWnd> *this);
void __thiscall CGameWnd::~CGameWnd(CGameWnd *this);
AFX_MSGMAP * __thiscall CGameWnd::CGameWnd::GetMessageMap(CGameWnd *this);
int __thiscall CGameWnd::ActivateOn(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::ActivateOff(CGameWnd *this,IParam *param_1);
void __thiscall CGameWnd::CGameWnd::DoExActive(CGameWnd *this,int param_1);
int __thiscall CGameWnd::OnCreate(CGameWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CGameWnd::OnEraseBkgnd(CGameWnd *this,CDC *param_1);
void __thiscall CChannelMainWnd::OnPaint(CChannelMainWnd *this);
void __thiscall CGameWnd::OnTimer(CGameWnd *this,uint param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnAddRoomMember(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnDeleteRoomMember(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnRoomMemberList(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnModifyRoomMemberInfo(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnTimeHostBanish(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnEnableHostBanish(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnChatString(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnReqBanishMember(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnClickBanishMember(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnItemReserveChance(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnRoomEvent(CGameWnd *this,IParam *param_1);
void __thiscall CGameWnd::CGameWnd::ProcessItemProvokeCommand(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnStartNewGame(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Net_commandTimeBanish(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Net_SocketClose(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnHostBanishCheck(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnConnectTypeError(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnGameStatusMessage(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_ChannelLobby_OnUpdateNotice(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnGetShutdownTime(CGameWnd *this,IParam *param_1);
int __thiscall CGameWnd::CGameWnd::Evt_OnExitGameDuetoShutdown(CGameWnd *this,IParam *param_1);
void __thiscall CGameWnd::CGameWnd::CaptureGameScreen(CGameWnd *this);
void __thiscall CGameWnd::CGameWnd::ExitGameRoom(CGameWnd *this);
CMemberData * __thiscall CGameWnd::GetMemberData(CGameWnd *this,char *param_1);
int __thiscall CGameWnd::ShowMemberInfoDialog(CGameWnd *this,char *param_1);
int __thiscall CGameWnd::SendReport(CGameWnd *this,int param_1,char *param_2,CGameReport *param_3,char *param_4);
int __thiscall CGameWnd::SendCommonChatString(CGameWnd *this,char *param_1,ulong param_2,char *param_3);
void __thiscall CGameWnd::SendStartNewGame(CGameWnd *this);
void __thiscall CGameWnd::SendSetRoomState(CGameWnd *this,int param_1);
void __thiscall CGameWnd::SendAlterRoomOption(CGameWnd *this,char *param_1,char *param_2,char *param_3);
void __thiscall CGameWnd::GetPlayerCount(CGameWnd *this,int *param_1,int *param_2);
void __thiscall CGameWnd::CGameWnd::UpdateControl(CGameWnd *this,IParam *param_1);
void __thiscall CGameWnd::InvokeItemAutoWebDialog(CGameWnd *this,char *param_1);
int __thiscall CGameWnd::SendReserveChanceItem(CGameWnd *this,int param_1,int param_2);
void __thiscall CGameWnd::SendProvokeItem(CGameWnd *this);
CGameWnd * __cdecl AfxGetGameWnd(void);
int __thiscall CGameWnd::CGameWnd::PreCreateWindow(CGameWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CGameWnd::SetCaptionRect(CGameWnd *this,tagRECT *param_1);
void __thiscall CGameWnd::OnLButtonDown(CGameWnd *this,undefined4 param_1,LONG param_3,LONG param_4);
void __thiscall CGameWnd::CGameWnd::AccuseUser(CGameWnd *this);
void __thiscall CGameWnd::SetBaseGameOption(CGameWnd *this,int param_1,int param_2,int param_3);
int __thiscall CGameWnd::CGameWnd::GetGameOptionFromRegistry(CGameWnd *this);
int __thiscall CGameWnd::CGameWnd::ShowInviteGameToChnlDlg(CGameWnd *this,bool param_1);
int __thiscall CGameWnd::CGameWnd::HasRightOfBanish(CGameWnd *this);
int * FUN_60a193f0(int *param_1);
void FUN_60a19450(void);
void FUN_60a194b0(void);
void FUN_60a19500(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
void FUN_60a195c0(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4);
undefined4 * __fastcall FUN_60a19650(undefined4 param_1,undefined4 *param_2);
void FUN_60a19680(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void __thiscall std::length_error::length_error(length_error *this);
void * __fastcall FUN_60a198d0(undefined4 param_1,void *param_2);
void __thiscall CMFunctor<CChannelMainWnd>::vfunction1(CMFunctor<CChannelMainWnd> *this);
void __thiscall CMFunctor<CGameWnd>::scalar_deleting_destructor(CMFunctor<CGameWnd> *this);
void __thiscall CMFunctor<CChannelMainWnd>::vfunction3(CMFunctor<CChannelMainWnd> *this,undefined4 *param_1);
void __thiscall CGameWnd::vfunction1(CGameWnd *this,byte param_1);
void __thiscall CHanChatView::CHanChatView(CHanChatView *this,CHanChatView *param_1);
CHanChatView * __thiscall CHanChatView::operator=(CHanChatView *this,CHanChatView *param_1);
undefined4 * __thiscall CHanChatView::scalar_deleting_destructor(CHanChatView *this,byte param_1);
bool __thiscall CHanChatView::CHanChatView::OnAttached(CHanChatView *this);
bool __thiscall CHanChatView::CHanChatView::OnDetached(CHanChatView *this);
CHanChatView * __thiscall CHanChatView::CHanChatView(CHanChatView *this,ViewType param_1,int param_2);
void __thiscall CHanChatView::~CHanChatView(CHanChatView *this);
int __thiscall CHanChatView::Msg_CreateWindow(CHanChatView *this,IParam *param_1);
int __thiscall CHanChatView::Evt_HanChat_OnUpdateHanChat(CHanChatView *this,IParam *param_1);
int __thiscall CHanChatView::HanChatEditComboBox_OnGetChatString(CHanChatView *this,IParam *param_1);
int __thiscall CHanChatView::Evt_HanChat_OnUpdateHanChatSetting(CHanChatView *this,IParam *param_1);
int __thiscall CHanChatView::Evt_HanChat_OnClearHanChatBuffer(CHanChatView *this,IParam *param_1);
int __thiscall CHanChatView::EVT_HanChat_OnChatNoticeMessage(CHanChatView *this,IParam *param_1);
int __thiscall CHanChatView::SimpleColorPicker_OnColorChange(CHanChatView *this,IParam *param_1);
void __thiscall CMFunctor<CHanChatView>::scalar_deleting_destructor(CMFunctor<CHanChatView> *this);
CHanChatViewWnd * __thiscall CHanChatViewWnd::scalar_deleting_destructor(CHanChatViewWnd *this,byte param_1);
void __cdecl FUN_60a1a4a0(undefined4 param_1,int param_2);
CRuntimeClass * __thiscall CHanChatViewWnd::CHanChatViewWnd::GetRuntimeClass(CHanChatViewWnd *this);
void __thiscall CHanChatViewWnd::CHanChatViewWnd(CHanChatViewWnd *this,char *param_1);
CHanChatEditComboBox * __thiscall CHanChatEditComboBox::scalar_deleting_destructor(CHanChatEditComboBox *this,byte param_1);
void __thiscall CHanChatViewWnd::~CHanChatViewWnd(CHanChatViewWnd *this);
AFX_MSGMAP * __thiscall CHanChatViewWnd::CHanChatViewWnd::GetMessageMap(CHanChatViewWnd *this);
int __thiscall CHanChatViewWnd::OnCreate(CHanChatViewWnd *this,tagCREATESTRUCTA *param_1);
long __thiscall CHanChatViewWnd::OnColorChange(CHanChatViewWnd *this,uint param_1,long param_2);
void __thiscall CHanChatViewWnd::CHanChatViewWnd::UpdateControl(CHanChatViewWnd *this,IParam *param_1);
int __thiscall CHanChatViewWnd::OnEraseBkgnd(CHanChatViewWnd *this,CDC *param_1);
void __thiscall CHanChatEditComboBox::vfunction1(CHanChatEditComboBox *this,byte param_1);
void __thiscall CHanChatViewWnd::vfunction1(CHanChatViewWnd *this,byte param_1);
void __thiscall CMainFrameView::~CMainFrameView(CMainFrameView *this,CMainFrameView *param_1);
CMainFrameView * __thiscall CMainFrameView::operator=(CMainFrameView *this,CMainFrameView *param_1);
undefined4 * __thiscall CMainFrameView::scalar_deleting_destructor(CMainFrameView *this,byte param_1);
void __thiscall CMainFrameView::~CMainFrameView(CMainFrameView *this);
void __thiscall CMainFrameView::~CMainFrameView(CMainFrameView *this);
bool __thiscall CMainFrameView::CMainFrameView::OnAttached(CMainFrameView *this);
bool __thiscall CMainFrameView::CMainFrameView::OnDetached(CMainFrameView *this);
int __thiscall CMainFrameView::Evt_MainFrame_OnDestroy(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::Evt_MainFrame_OnShowWindow(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::Evt_MainFrame_OnEnableWindow(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::Msg_GetWindow(CMainFrameView *this,IParam *param_1);
CMainFrameWnd * __thiscall CMainFrameView::GetMainWnd(CMainFrameView *this);
int __thiscall CMainFrameView::CMainFrameView::OnAltF4KeyDown(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickExitButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnToggleScreenButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickMinimizeButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickAccuseButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickInviteButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::CMainFrameView::OnClickOptionButton(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::Evt_LobbyState_OnStateChanged(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::Evt_GameView_OnDisplayModeChanged(CMainFrameView *this,IParam *param_1);
int __thiscall CMainFrameView::Evt_Channel_OnChannelJoinCompleted(CMainFrameView *this,IParam *param_1);
void __thiscall CMFunctor<CMainFrameView>::scalar_deleting_destructor(CMFunctor<CMainFrameView> *this);
CMainFrameWnd * __thiscall CMainFrameWnd::scalar_deleting_destructor(CMainFrameWnd *this,byte param_1);
CRuntimeClass * CMainFrameWnd::_GetBaseClass(void);
CRuntimeClass * __thiscall CMainFrameWnd::CMainFrameWnd::GetRuntimeClass(CMainFrameWnd *this);
AFX_MSGMAP * __thiscall CMainFrameWnd::CMainFrameWnd::GetMessageMap(CMainFrameWnd *this);
CMainFrameWnd * __thiscall CMainFrameWnd::CMainFrameWnd(CMainFrameWnd *this);
CLineDrawer * __thiscall CLineDrawer::scalar_deleting_destructor(CLineDrawer *this,byte param_1);
CAdFileDownload * __thiscall CAdFileDownload::scalar_deleting_destructor(CAdFileDownload *this,byte param_1);
void __thiscall CMainFrameWnd::~CMainFrameWnd(CMainFrameWnd *this);
int __thiscall CMainFrameWnd::OnCreate(CMainFrameWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CMainFrameWnd::CMainFrameWnd::PreCreateWindow(CMainFrameWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CMainFrameWnd::CMainFrameWnd::OnCmdMsg(CMainFrameWnd *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
int __thiscall CMainFrameWnd::OnEraseBkgnd(CMainFrameWnd *this,CDC *param_1);
long __thiscall CMainFrameWnd::OnNcHitTest(CMainFrameWnd *this,undefined4 param_2,int param_3);
void __thiscall CMainFrameWnd::OnCommand_208(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnCommand_209(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnCommand_206(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnCommand_205(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnCommand_203(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnCommand_204(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnCommand_300(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnActivate(CMainFrameWnd *this,uint param_1,CWnd *param_2,int param_3);
int __thiscall CMainFrameWnd::CMainFrameWnd::PreTranslateMessage(CMainFrameWnd *this,tagMSG *param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::UpdateControl(CMainFrameWnd *this,IParam *param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::UpdateControlForGame(CMainFrameWnd *this,IParam *param_1);
void __thiscall CMainFrameWnd::UpdateToggleBtnState(CMainFrameWnd *this);
int __thiscall CMainFrameWnd::UpdateAlarmTimeTop(CMainFrameWnd *this,IParam *param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::ShowGameRate(CMainFrameWnd *this,int param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::DisplayAdWnd(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::CMainFrameWnd::GetTicket(CMainFrameWnd *this,int param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::RefreshCookie(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnClose(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::OnDestroy(CMainFrameWnd *this);
void __thiscall CMainFrameWnd::UpdateSkin(CMainFrameWnd *this,char *param_1);
void __thiscall CMainFrameWnd::CMainFrameWnd::OnTimer(CMainFrameWnd *this,uint param_1);
int __thiscall CMainFrameWnd::OnCopyData(CMainFrameWnd *this,CWnd *param_1,tagCOPYDATASTRUCT *param_2);
long __thiscall CMainFrameWnd::OnDispatchConsoleCmd(CMainFrameWnd *this,uint param_1,long param_2);
long __thiscall CMainFrameWnd::OnDisplayChange(CMainFrameWnd *this,uint param_1,long param_2);
void __thiscall CMainFrameWnd::OnSysCommand(CMainFrameWnd *this,uint param_1,long param_2);
long __thiscall CMainFrameWnd::OnBanishDialog(CMainFrameWnd *this,uint param_1,long param_2);
void __thiscall CMFunctor<CMainFrameWnd>::scalar_deleting_destructor(CMFunctor<CMainFrameWnd> *this);
void __thiscall CMainFrameWnd::vfunction1(CMainFrameWnd *this,byte param_1);
void __thiscall CMiniChannelListView::CMiniChannelListView(CMiniChannelListView *this,CMiniChannelListView *param_1);
CMiniChannelListView * __thiscall CMiniChannelListView::operator=(CMiniChannelListView *this,CMiniChannelListView *param_1);
void __thiscall CMiniChannelListView::CMiniChannelListView(CMiniChannelListView *this);
undefined4 * __thiscall CMiniChannelListView::scalar_deleting_destructor(CMiniChannelListView *this,byte param_1);
bool __thiscall CMiniChannelListView::CMiniChannelListView::OnAttached(CMiniChannelListView *this);
bool __thiscall CMiniChannelListView::CMiniChannelListView::OnDetached(CMiniChannelListView *this);
CMiniChannelListView * __thiscall CMiniChannelListView::CMiniChannelListView(CMiniChannelListView *this,WndType param_1);
void __thiscall CMiniChannelListView::CMiniChannelListView::SetMiniChannelListWnd(CMiniChannelListView *this,CMiniChannelListWnd *param_1);
void __thiscall CMiniChannelListView::~CMiniChannelListView(CMiniChannelListView *this);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickRefreshBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickJoinBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickExitBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickAutoJoinBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickGrpListBtn(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::Msg_CreateWindow(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::Evt_MiniChannelList_OnChannelJoinComplete(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::Evt_MiniChannelList_OnUpdateChannelList(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::Evt_MiniChannelList_OnUpdateChannelGrpList(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickChannelGrpLst(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnClickChannelLst(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::CMiniChannelListView::OnCheckEnterableState(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::Evt_MiniChannelList_OnFailEnterChannel(CMiniChannelListView *this,IParam *param_1);
int __thiscall CMiniChannelListView::Evt_MiniChannelList_OnShowWindow(CMiniChannelListView *this,IParam *param_1);
void __thiscall CMFunctor<CBaseLobbyView>::vfunction1(CMFunctor<CBaseLobbyView> *this);
void __thiscall CMFunctor<CMiniChannelListView>::scalar_deleting_destructor(CMFunctor<CMiniChannelListView> *this);
void __thiscall CMFunctor<CBaseLobbyView>::vfunction3(CMFunctor<CBaseLobbyView> *this,undefined4 *param_1);
CMiniChannelListWnd * __thiscall CMiniChannelListWnd::scalar_deleting_destructor(CMiniChannelListWnd *this,byte param_1);
CRuntimeClass * __thiscall CMiniChannelListWnd::CMiniChannelListWnd::GetRuntimeClass(CMiniChannelListWnd *this);
CMiniChannelListWnd * __thiscall CMiniChannelListWnd::CMiniChannelListWnd(CMiniChannelListWnd *this);
void __thiscall CMiniChannelListWnd::~CMiniChannelListWnd(CMiniChannelListWnd *this);
AFX_MSGMAP * __thiscall CMiniChannelListWnd::CMiniChannelListWnd::GetMessageMap(CMiniChannelListWnd *this);
int __thiscall CMiniChannelListWnd::OnCreate(CMiniChannelListWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CBrush::OnEraseBkgnd(CBrush *this,CDC *param_1);
void __thiscall CMiniChannelListWnd::OnCommand_100(CMiniChannelListWnd *this);
void __thiscall CChannelMainWnd::OnCommand_203(CChannelMainWnd *this);
void __thiscall CMiniChannelListWnd::OnCommand_104(CMiniChannelListWnd *this);
void __thiscall CMiniChannelListWnd::OnCommand_102(CMiniChannelListWnd *this);
void __thiscall CMiniChannelListWnd::OnCommand_103(CMiniChannelListWnd *this);
void __thiscall CMiniChannelListWnd::OnCommand_114(CMiniChannelListWnd *this);
void __thiscall CMiniChannelListWnd::OnCommand_105(CMiniChannelListWnd *this);
void __thiscall CMiniChannelListWnd::CMiniChannelListWnd::UpdateControl(CMiniChannelListWnd *this,IParam *param_1);
void __thiscall CMiniChannelListWnd::vfunction1(CMiniChannelListWnd *this,byte param_1);
CPNDcurve * __thiscall CPNDcurve::operator=(CPNDcurve *this,CPNDcurve *param_1);
void __fastcall FUN_60a1ff20(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5);
IGod * __cdecl God(void);
bool __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::CreateControl(CRoomListCtrl_T1 *this,IParam *param_1);
CWnd * __thiscall CControlBase::CControlBase::GetCWndPtr(CControlBase *this);
bool __thiscall CListCtrlEx::CListCtrlEx::CreateControl(CListCtrlEx *this,IParam *param_1);
bool __thiscall CBmpButton::CBmpButton::CreateControl(CBmpButton *this,IParam *param_1);
int __thiscall CHtmlCtrl::CHtmlCtrl::Create(CHtmlCtrl *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,uint param_6,CCreateContext *param_7);
CRuntimeClass * __thiscall CBmpButton::CBmpButton::GetRuntimeClass(CBmpButton *this);
AFX_MSGMAP * __thiscall CBmpButton::CBmpButton::GetMessageMap(CBmpButton *this);
long __thiscall CBmpButton::CBmpButton::WindowProc(CBmpButton *this,uint param_1,uint param_2,long param_3);
void __thiscall CBmpButton::CBmpButton::DrawItem(CBmpButton *this,tagDRAWITEMSTRUCT *param_1);
bool __thiscall CBmpButton::CBmpButton::DestroyControl(CBmpButton *this);
bool __thiscall CControlBase::CControlBase::IsCreated(CControlBase *this);
void __thiscall CControlBase::CControlBase::ShowControl(CControlBase *this,bool param_1);
void __thiscall CBmpButton::CBmpButton::UpdateControl(CBmpButton *this,IParam *param_1);
void __thiscall CBmpButton::CBmpButton::UpdateControlForGame(CBmpButton *this,IParam *param_1);
CRuntimeClass * __thiscall CListCtrlEx::CListCtrlEx::GetRuntimeClass(CListCtrlEx *this);
AFX_MSGMAP * __thiscall CListCtrlEx::CListCtrlEx::GetMessageMap(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::DrawItem(CListCtrlEx *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CListCtrlEx::CListCtrlEx::OnSortItem(CListCtrlEx *this,ulong param_1,ulong param_2,int param_3,int param_4);
bool __thiscall CListCtrlEx::CListCtrlEx::DoListCtrlSetting(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::GetColumnFormatString(CListCtrlEx *this,int param_1,char *param_2,char *param_3,int param_4);
void __thiscall CListCtrlEx::CListCtrlEx::MeasureItem(CListCtrlEx *this,tagMEASUREITEMSTRUCT *param_1);
bool __thiscall CListCtrlEx::CListCtrlEx::DestroyControl(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::UpdateControl(CListCtrlEx *this,IParam *param_1);
void __thiscall CControlBase::CControlBase::UpdateControlForGame(CControlBase *this,IParam *param_1);
CRuntimeClass * __thiscall CCustomStatic::CCustomStatic::GetRuntimeClass(CCustomStatic *this);
AFX_MSGMAP * __thiscall CCustomStatic::CCustomStatic::GetMessageMap(CCustomStatic *this);
int __thiscall CCustomStatic::CCustomStatic::PreCreateWindow(CCustomStatic *this,tagCREATESTRUCTA *param_1);
void __thiscall CCustomStatic::CCustomStatic::DrawItem(CCustomStatic *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CCustomStatic::CCustomStatic::MovePostion(CCustomStatic *this,int param_1,int param_2,int param_3);
bool __thiscall CCustomStatic::CCustomStatic::CreateControl(CCustomStatic *this,IParam *param_1);
bool __thiscall CControlBase::CControlBase::DestroyControl(CControlBase *this);
void __thiscall CCustomStatic::CCustomStatic::UpdateControl(CCustomStatic *this,IParam *param_1);
bool __thiscall CControlBase::CControlBase::CreateControl(CControlBase *this,IParam *param_1);
bool __thiscall CCustomTabCtrl::CCustomTabCtrl::IsCreated(CCustomTabCtrl *this);
void __thiscall CCustomTabCtrl::CCustomTabCtrl::ShowControl(CCustomTabCtrl *this,bool param_1);
void __thiscall CCustomTabCtrl::CCustomTabCtrl::UpdateControl(CCustomTabCtrl *this,IParam *param_1);
CWnd * __thiscall CCustomTabCtrl::CCustomTabCtrl::GetCWndPtr(CCustomTabCtrl *this);
void __thiscall CRectDrawer::CRectDrawer::UpdateControl(CRectDrawer *this,IParam *param_1);
CRuntimeClass * __thiscall CHtmlCtrl::CHtmlCtrl::GetRuntimeClass(CHtmlCtrl *this);
AFX_MSGMAP * __thiscall CHtmlCtrl::CHtmlCtrl::GetMessageMap(CHtmlCtrl *this);
int __thiscall CHtmlCtrl::CHtmlCtrl::DestroyWindow(CHtmlCtrl *this);
CRuntimeClass * __thiscall CMemberListCtrl::CMemberListCtrl::GetRuntimeClass(CMemberListCtrl *this);
AFX_MSGMAP * __thiscall CMemberListCtrl::CMemberListCtrl::GetMessageMap(CMemberListCtrl *this);
void __thiscall CMemberListCtrl::CMemberListCtrl::DrawItem(CMemberListCtrl *this,tagDRAWITEMSTRUCT *param_1);
bool __thiscall CMemberListCtrl::CMemberListCtrl::DoListCtrlSetting(CMemberListCtrl *this);
bool __thiscall CMemberListCtrl::CMemberListCtrl::DestroyControl(CMemberListCtrl *this);
AFX_MSGMAP * __thiscall CMultiBmpButton::CMultiBmpButton::GetMessageMap(CMultiBmpButton *this);
void __thiscall CMultiBmpButton::CMultiBmpButton::PreSubclassWindow(CMultiBmpButton *this);
void __thiscall CMultiBmpButton::CMultiBmpButton::DrawItem(CMultiBmpButton *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CMultiBmpButton::CMultiBmpButton::UpdateControl(CMultiBmpButton *this,IParam *param_1);
void __thiscall CMultiBmpButton::CMultiBmpButton::UpdateControlForGame(CMultiBmpButton *this,IParam *param_1);
CRuntimeClass * __thiscall CMyInfoCtrl::CMyInfoCtrl::GetRuntimeClass(CMyInfoCtrl *this);
AFX_MSGMAP * __thiscall CMyInfoCtrl::CMyInfoCtrl::GetMessageMap(CMyInfoCtrl *this);
void __thiscall CMyInfoCtrl::CMyInfoCtrl::UpdateControl(CMyInfoCtrl *this,IParam *param_1);
AFX_MSGMAP * __thiscall CNoticeWnd::CNoticeWnd::GetMessageMap(CNoticeWnd *this);
void __thiscall CNoticeWnd::CNoticeWnd::ManualUpdateControl(CNoticeWnd *this,ulong param_1,ulong param_2,ulong param_3);
void __thiscall CNoticeWnd::CNoticeWnd::UpdateControl(CNoticeWnd *this,IParam *param_1);
CRuntimeClass * __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::GetRuntimeClass(CRoomListCtrl_T1 *this);
AFX_MSGMAP * __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::GetMessageMap(CRoomListCtrl_T1 *this);
int __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::PreTranslateMessage(CRoomListCtrl_T1 *this,tagMSG *param_1);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::PostNcDestroy(CRoomListCtrl_T1 *this);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::OnDraw(CRoomListCtrl_T1 *this,CDC *param_1);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::Initialize(CRoomListCtrl_T1 *this);
bool __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::AddRoom(CRoomListCtrl_T1 *this,int param_1);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::CalculateRoomRect(CRoomListCtrl_T1 *this,int param_1,CRect *param_2);
bool __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::DestroyControl(CRoomListCtrl_T1 *this);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::UpdateControl(CRoomListCtrl_T1 *this,IParam *param_1);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::UpdateControlForGame(CRoomListCtrl_T1 *this,IParam *param_1);
CRuntimeClass * __thiscall CScrollSupportCtrl::CScrollSupportCtrl::GetRuntimeClass(CScrollSupportCtrl *this);
AFX_MSGMAP * __thiscall CScrollSupportCtrl::CScrollSupportCtrl::GetMessageMap(CScrollSupportCtrl *this);
void __thiscall CScrollSupportCtrl::CScrollSupportCtrl::UpdateControl(CScrollSupportCtrl *this,IParam *param_1);
void __thiscall CScrollSupportCtrl::CScrollSupportCtrl::UpdateControlForGame(CScrollSupportCtrl *this,IParam *param_1);
CRuntimeClass * __thiscall CCustomComboBox::CCustomComboBox::GetRuntimeClass(CCustomComboBox *this);
AFX_MSGMAP * __thiscall CHanChatEditComboBox::CHanChatEditComboBox::GetMessageMap(CHanChatEditComboBox *this);
int __thiscall CHanChatEditComboBox::CHanChatEditComboBox::PreTranslateMessage(CHanChatEditComboBox *this,tagMSG *param_1);
void __thiscall CCustomComboBox::CCustomComboBox::UpdateControl(CCustomComboBox *this,IParam *param_1);
void __thiscall CLineDrawer::CLineDrawer::UpdateControl(CLineDrawer *this,IParam *param_1);
void __cdecl operator_delete(void *param_1);
void * __cdecl operator_new(uint param_1);
void __cdecl operator_delete[](void *param_1);
CWinThread * AfxGetThread(void);
int __thiscall CWnd::ShowWindow(CWnd *this,int param_1);
char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4);
int __thiscall CWnd::EnableWindow(CWnd *this,int param_1);
void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1);
CRuntimeClass * CWnd::GetThisClass(void);
void __thiscall CWnd::CWnd(CWnd *this);
void __thiscall CWnd::~CWnd(CWnd *this);
long __thiscall CWnd::Default(CWnd *this);
int __thiscall CWnd::ModifyStyle(CWnd *this,ulong param_1,ulong param_2,uint param_3);
int __thiscall CStatic::CStatic::Create(CStatic *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
void __thiscall CBrush::CBrush(CBrush *this,ulong param_1);
int AfxMessageBox(char *param_1,uint param_2,uint param_3);
int __thiscall CGdiObject::DeleteObject(CGdiObject *this);
CRuntimeClass * __thiscall CGdiObject::CGdiObject::GetRuntimeClass(CGdiObject *this);
CRuntimeClass * __thiscall CBrush::CBrush::GetRuntimeClass(CBrush *this);
void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1);
void __thiscall CPaintDC::~CPaintDC(CPaintDC *this);
void __thiscall CWnd::ScreenToClient(CWnd *this,tagRECT *param_1);
CWnd * CWnd::FromHandle(HWND__ *param_1);
int __thiscall CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void __thiscall CWnd::MoveWindow(CWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall CCmdTarget::CCmdTarget::OnCmdMsg(CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
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
int __thiscall CWnd::CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1);
int __thiscall CWnd::CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3);
int __thiscall CWnd::CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
long __thiscall CWnd::CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3);
void __thiscall CWnd::CWnd::PostNcDestroy(CWnd *this);
int __thiscall CButton::CButton::OnChildNotify(CButton *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CWnd::CWnd::CheckAutoCenter(CWnd *this);
int __thiscall CWnd::CWnd::IsFrameWnd(CWnd *this);
int __thiscall CWnd::CWnd::CreateControlContainer(CWnd *this,COleControlContainer **param_1);
int __thiscall CWnd::CWnd::CreateControlSite(CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,_GUID *param_4);
int __thiscall CWnd::CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1);
_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd::GetOccDialogInfo(CWnd *this);
int __thiscall CButton::CButton::Create(CButton *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
long __thiscall CWnd::CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3);
int __thiscall CListCtrl::CListCtrl::OnChildNotify(CListCtrl *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CStatic::CStatic::OnChildNotify(CStatic *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CWnd::CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
CRuntimeClass * __thiscall CButton::CButton::GetRuntimeClass(CButton *this);
CRuntimeClass * __thiscall CWnd::CWnd::GetRuntimeClass(CWnd *this);
int __thiscall CView::CView::OnCmdMsg(CView *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
int __thiscall CView::CView::PreCreateWindow(CView *this,tagCREATESTRUCTA *param_1);
void __thiscall CScrollView::CScrollView::CalcWindowRect(CScrollView *this,tagRECT *param_1,uint param_2);
CScrollBar * __thiscall CView::CView::GetScrollBarCtrl(CView *this,int param_1);
int __thiscall CView::CView::IsSelected(CView *this,CObject *param_1);
int __thiscall CScrollView::CScrollView::OnScroll(CScrollView *this,uint param_1,uint param_2,int param_3);
int __thiscall CScrollView::CScrollView::OnScrollBy(void);
ulong __thiscall CView::CView::OnDragEnter(void);
ulong __thiscall CView::CView::OnDragOver(void);
void __thiscall CView::CView::OnDragLeave(CView *this);
int __thiscall CView::CView::OnDrop(void);
ulong __thiscall CView::CView::OnDropEx(void);
ulong __thiscall CView::CView::OnDragScroll(void);
void __thiscall CScrollView::CScrollView::OnPrepareDC(CScrollView *this,CDC *param_1,CPrintInfo *param_2);
void __thiscall CView::CView::OnInitialUpdate(CView *this);
void __thiscall CView::CView::OnActivateView(CView *this,int param_1,CView *param_2,CView *param_3);
void __thiscall CView::CView::OnActivateFrame(CView *this,uint param_1,CFrameWnd *param_2);
void __thiscall CView::CView::OnUpdate(CView *this,CView *param_1,long param_2,CObject *param_3);
int __thiscall CView::CView::OnPreparePrinting(CView *this,CPrintInfo *param_1);
void __thiscall CView::CView::OnBeginPrinting(CView *this,CDC *param_1,CPrintInfo *param_2);
void __thiscall CView::CView::OnPrint(CView *this,CDC *param_1,CPrintInfo *param_2);
void __thiscall CView::CView::OnEndPrinting(CView *this,CDC *param_1,CPrintInfo *param_2);
void __thiscall CView::CView::OnEndPrintPreview(CView *this,CDC *param_1,CPrintInfo *param_2,tagPOINT param_3,CPreviewView *param_4);
void __thiscall CScrollView::CScrollView::GetWheelScrollDistance(void);
AFX_MODULE_STATE * AfxGetModuleState(void);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
int AfxIsValidString(char *param_1,int param_2);
int __thiscall CComboBox::CComboBox::OnChildNotify(CComboBox *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CComboBox::CComboBox::Create(CComboBox *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
void __thiscall CComboBox::CComboBox::DrawItem(CComboBox *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CComboBox::CComboBox::MeasureItem(CComboBox *this,tagMEASUREITEMSTRUCT *param_1);
int __thiscall CComboBox::CComboBox::CompareItem(CComboBox *this,tagCOMPAREITEMSTRUCT *param_1);
void __thiscall CComboBox::CComboBox::DeleteItem(CComboBox *this,tagDELETEITEMSTRUCT *param_1);
CRuntimeClass * CFrameWnd::GetThisClass(void);
void __thiscall CFrameWnd::CFrameWnd(CFrameWnd *this);
void __thiscall CFrameWnd::~CFrameWnd(CFrameWnd *this);
int __thiscall CFrameWnd::OnCreate(CFrameWnd *this,tagCREATESTRUCTA *param_1);
int AfxInitRichEdit2(void);
CMenu * CMenu::FromHandle(HMENU__ *param_1);
int __thiscall CFrameWnd::PreCreateWindow(CFrameWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CFrameWnd::OnCmdMsg(CFrameWnd *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
void __thiscall CFrameWnd::OnActivate(CFrameWnd *this,uint param_1,CWnd *param_2,int param_3);
int __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this,tagMSG *param_1);
void __thiscall CInternetSession::CInternetSession(CInternetSession *this,char *param_1,ulong param_2,ulong param_3,char *param_4,char *param_5,ulong param_6);
void __thiscall CInternetSession::~CInternetSession(CInternetSession *this);
CHttpConnection * __thiscall CInternetSession::GetHttpConnection(CInternetSession *this,char *param_1,ushort param_2,char *param_3,char *param_4);
CHttpFile * __thiscall CHttpConnection::OpenRequest(CHttpConnection *this,int param_1,char *param_2,char *param_3,ulong param_4,char **param_5,char *param_6,ulong param_7);
int __thiscall CHttpFile::AddRequestHeaders(CHttpFile *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,ulong param_2);
int __thiscall CHttpFile::SendRequest(CHttpFile *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,void *param_2,ulong param_3);
int __thiscall CHttpFile::QueryInfoStatusCode(CHttpFile *this,ulong *param_1);
void __thiscall CInternetSession::Close(CInternetSession *this);
void __thiscall CFrameWnd::OnClose(CFrameWnd *this);
void __thiscall CFrameWnd::OnDestroy(CFrameWnd *this);
void __thiscall CFrameWnd::OnSysCommand(CFrameWnd *this,uint param_1,long param_2);
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
int __thiscall CListCtrl::InsertItem(CListCtrl *this,uint param_1,int param_2,char *param_3,uint param_4,uint param_5,int param_6,long param_7);
int __thiscall CListCtrl::InsertColumn(CListCtrl *this,int param_1,char *param_2,int param_3,int param_4,int param_5);
void __fastcall __security_check_cookie(int param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
char * __thiscall std::exception::std::exception::what(exception *this);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_60a2069f(void);
void __cdecl purecall(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_60a20a3e(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_60a20bd1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_60a20c9e(void);
int __cdecl _atexit(_func_4879 *param_1);
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
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void Unwind@60a20f50(void);
void Unwind@60a20f58(void);
void Unwind@60a20f64(void);
void Unwind@60a20f70(void);
void Unwind@60a20f7c(void);
void Unwind@60a20f88(void);
void Unwind@60a20f94(void);
void Unwind@60a20fc0(void);
void Unwind@60a20fcc(void);
void Unwind@60a20fd8(void);
void Unwind@60a21020(void);
void Unwind@60a2102c(void);
void Unwind@60a21038(void);
void Unwind@60a21044(void);
void Unwind@60a21050(void);
void Unwind@60a2105c(void);
void Unwind@60a21068(void);
void Unwind@60a21074(void);
void Unwind@60a21080(void);
void Unwind@60a2108c(void);
void Unwind@60a210d0(void);
void Unwind@60a210dc(void);
void Unwind@60a210e8(void);
void Unwind@60a210f4(void);
void Unwind@60a21100(void);
void Unwind@60a21140(void);
void Unwind@60a21180(void);
void Unwind@60a2118c(void);
void Unwind@60a21198(void);
void Unwind@60a211a4(void);
void Unwind@60a211b0(void);
void Unwind@60a211f0(void);
void Unwind@60a21230(void);
void Unwind@60a21270(void);
void Unwind@60a212b0(void);
void Unwind@60a212f0(void);
void Unwind@60a21330(void);
void Unwind@60a21370(void);
void Unwind@60a21379(void);
void Unwind@60a21382(void);
void Unwind@60a213b0(void);
void Unwind@60a213f0(void);
void Unwind@60a21420(void);
void Unwind@60a21429(void);
void Unwind@60a21432(void);
void Unwind@60a2143b(void);
void Unwind@60a21460(void);
void Unwind@60a21469(void);
void Unwind@60a21490(void);
void Unwind@60a21499(void);
void Unwind@60a214c0(void);
void Unwind@60a214c9(void);
void Unwind@60a214f0(void);
void Unwind@60a21530(void);
void Unwind@60a2153c(void);
void Unwind@60a21548(void);
void Unwind@60a21554(void);
void Unwind@60a21560(void);
void Unwind@60a215a0(void);
void Unwind@60a215ac(void);
void Unwind@60a215b8(void);
void Unwind@60a21600(void);
void Unwind@60a21608(void);
void Unwind@60a21614(void);
void Unwind@60a21620(void);
void Unwind@60a2162c(void);
void Unwind@60a21638(void);
void Unwind@60a21644(void);
void Unwind@60a21650(void);
void Unwind@60a2165c(void);
void Unwind@60a21668(void);
void Unwind@60a21674(void);
void Unwind@60a21680(void);
void Unwind@60a2168c(void);
void Unwind@60a2169b(void);
void Unwind@60a216aa(void);
void Unwind@60a216e0(void);
void Unwind@60a216e9(void);
void Unwind@60a21710(void);
void Unwind@60a2171c(void);
void Unwind@60a21728(void);
void Unwind@60a21734(void);
void Unwind@60a21770(void);
void Unwind@60a21779(void);
void Unwind@60a217a0(void);
void Unwind@60a217d0(void);
void Unwind@60a21800(void);
void Unwind@60a21830(void);
void Unwind@60a21860(void);
void Unwind@60a21869(void);
void Unwind@60a21890(void);
void Unwind@60a2189c(void);
void Unwind@60a218a8(void);
void Unwind@60a218f0(void);
void Unwind@60a218f8(void);
void Unwind@60a21904(void);
void Unwind@60a21910(void);
void Unwind@60a2191c(void);
void Unwind@60a21928(void);
void Unwind@60a21934(void);
void Unwind@60a21940(void);
void Unwind@60a21948(void);
void Unwind@60a21950(void);
void Unwind@60a21958(void);
void Unwind@60a21960(void);
void Unwind@60a21968(void);
void Unwind@60a21970(void);
void Unwind@60a21978(void);
void Unwind@60a219a0(void);
void Unwind@60a219d0(void);
void Unwind@60a21a00(void);
void Unwind@60a21a0c(void);
void Unwind@60a21a18(void);
void Unwind@60a21a24(void);
void Unwind@60a21a30(void);
void Unwind@60a21a3c(void);
void Unwind@60a21a48(void);
void Unwind@60a21a54(void);
void Unwind@60a21a60(void);
void Unwind@60a21a6b(void);
void Unwind@60a21ab0(void);
void Unwind@60a21af0(void);
void Unwind@60a21b30(void);
void Unwind@60a21b38(void);
void Unwind@60a21b47(void);
void Unwind@60a21b56(void);
void Unwind@60a21b65(void);
void Unwind@60a21b74(void);
void Unwind@60a21b83(void);
void Unwind@60a21b92(void);
void Unwind@60a21ba1(void);
void Unwind@60a21bd0(void);
void Unwind@60a21bd8(void);
void Unwind@60a21be7(void);
void Unwind@60a21bf6(void);
void Unwind@60a21c05(void);
void Unwind@60a21c14(void);
void Unwind@60a21c23(void);
void Unwind@60a21c32(void);
void Unwind@60a21c41(void);
void Unwind@60a21c50(void);
void Unwind@60a21c5b(void);
void Unwind@60a21c66(void);
void Unwind@60a21c71(void);
void Unwind@60a21c79(void);
void Unwind@60a21c81(void);
void Unwind@60a21c89(void);
void Unwind@60a21c91(void);
void Unwind@60a21c99(void);
void Unwind@60a21ca1(void);
void Unwind@60a21ca9(void);
void Unwind@60a21cb1(void);
void Unwind@60a21cb9(void);
void Unwind@60a21cc1(void);
void Unwind@60a21cc9(void);
void Unwind@60a21cd1(void);
void Unwind@60a21cd9(void);
void Unwind@60a21ce4(void);
void Unwind@60a21d10(void);
void Unwind@60a21d50(void);
void Unwind@60a21d59(void);
void Unwind@60a21d62(void);
void Unwind@60a21d6b(void);
void Unwind@60a21da0(void);
void Unwind@60a21da8(void);
void Unwind@60a21db4(void);
void Unwind@60a21de0(void);
void Unwind@60a21deb(void);
void Unwind@60a21dfa(void);
void Unwind@60a21e09(void);
void Unwind@60a21e14(void);
void Unwind@60a21e1f(void);
void Unwind@60a21e60(void);
void Unwind@60a21e90(void);
void Unwind@60a21ec0(void);
void Unwind@60a21ec9(void);
void Unwind@60a21f00(void);
void Unwind@60a21f08(void);
void Unwind@60a21f14(void);
void Unwind@60a21f1f(void);
void Unwind@60a21f2e(void);
void Unwind@60a21f3d(void);
void Unwind@60a21f4c(void);
void Unwind@60a21f5b(void);
void Unwind@60a21f90(void);
void Unwind@60a21fd0(void);
void Unwind@60a22010(void);
void Unwind@60a22050(void);
void Unwind@60a22090(void);
void Unwind@60a220c0(void);
void Unwind@60a22100(void);
void Unwind@60a22108(void);
void Unwind@60a22114(void);
void Unwind@60a22120(void);
void Unwind@60a2212c(void);
void Unwind@60a22138(void);
void Unwind@60a22144(void);
void Unwind@60a22150(void);
void Unwind@60a2215c(void);
void Unwind@60a22168(void);
void Unwind@60a22174(void);
void Unwind@60a22180(void);
void Unwind@60a2218c(void);
void Unwind@60a2219b(void);
void Unwind@60a221aa(void);
void Unwind@60a221b9(void);
void Unwind@60a221c1(void);
void Unwind@60a221c9(void);
void Unwind@60a221d4(void);
void Unwind@60a221dc(void);
void Unwind@60a221e7(void);
void Unwind@60a221ef(void);
void Unwind@60a221f7(void);
void Unwind@60a221ff(void);
void Unwind@60a22207(void);
void Unwind@60a2220f(void);
void Unwind@60a22217(void);
void Unwind@60a2221f(void);
void Unwind@60a22227(void);
void Unwind@60a2222f(void);
void Unwind@60a22237(void);
void Unwind@60a22242(void);
void Unwind@60a2224d(void);
void Unwind@60a22255(void);
void Unwind@60a2225d(void);
void Unwind@60a22265(void);
void Unwind@60a2226d(void);
void Unwind@60a22275(void);
void Unwind@60a2227d(void);
void Unwind@60a22285(void);
void Unwind@60a2228d(void);
void Unwind@60a22295(void);
void Unwind@60a2229d(void);
void Unwind@60a222a8(void);
void Unwind@60a222d0(void);
void Unwind@60a22300(void);
void Unwind@60a22330(void);
void Unwind@60a22370(void);
void Unwind@60a2237c(void);
void Unwind@60a22388(void);
void Unwind@60a22394(void);
void Unwind@60a223a0(void);
void Unwind@60a223ac(void);
void Unwind@60a223f0(void);
void Unwind@60a223f8(void);
void Unwind@60a22420(void);
void Unwind@60a22428(void);
void Unwind@60a22430(void);
void Unwind@60a22460(void);
void __thiscall CGameWnd::Unwind@60a22490(CGameWnd *this);
void Unwind@60a224b0(void);
void Unwind@60a224e0(void);
void Unwind@60a22510(void);
void Unwind@60a2251b(void);
void Unwind@60a2252a(void);
void Unwind@60a22538(void);
void Unwind@60a2254a(void);
void Unwind@60a2255c(void);
void Unwind@60a2256e(void);
void Unwind@60a22580(void);
void Unwind@60a22592(void);
void Unwind@60a225a0(void);
void Unwind@60a225e0(void);
void Unwind@60a22610(void);
void Unwind@60a22640(void);
void Unwind@60a22670(void);
void Unwind@60a226b0(void);
void Unwind@60a226f0(void);
void Unwind@60a22720(void);
void Unwind@60a22750(void);
void Unwind@60a22759(void);
void Unwind@60a22762(void);
void Unwind@60a2277c(void);
void Unwind@60a227b0(void);
void Unwind@60a227b9(void);
void Unwind@60a227c2(void);
void Unwind@60a22800(void);
void Unwind@60a22809(void);
void Unwind@60a22840(void);
void Unwind@60a22849(void);
void Unwind@60a22870(void);
void Unwind@60a228a0(void);
void Unwind@60a228ac(void);
void Unwind@60a228f0(void);
void Unwind@60a228fc(void);
void Unwind@60a22908(void);
void Unwind@60a22950(void);
void Unwind@60a2295c(void);
void Unwind@60a22968(void);
void Unwind@60a229b0(void);
void Unwind@60a229bc(void);
void Unwind@60a229c8(void);
void Unwind@60a22a10(void);
void Unwind@60a22a1c(void);
void Unwind@60a22a28(void);
void Unwind@60a22a70(void);
void Unwind@60a22a7c(void);
void Unwind@60a22a88(void);
void Unwind@60a22a94(void);
void Unwind@60a22aa0(void);
void Unwind@60a22ae0(void);
void Unwind@60a22aec(void);
void Unwind@60a22af8(void);
void Unwind@60a22b04(void);
void Unwind@60a22b10(void);
void Unwind@60a22b1c(void);
void Unwind@60a22b28(void);
void Unwind@60a22b34(void);
void Unwind@60a22b40(void);
void Unwind@60a22b4c(void);
void Unwind@60a22b58(void);
void Unwind@60a22ba0(void);
void Unwind@60a22bac(void);
void Unwind@60a22bb8(void);
void Unwind@60a22bc4(void);
void Unwind@60a22bd0(void);
void Unwind@60a22bdc(void);
void Unwind@60a22be8(void);
void Unwind@60a22bf4(void);
void Unwind@60a22c00(void);
void Unwind@60a22c0c(void);
void Unwind@60a22c18(void);
void Unwind@60a22c24(void);
void Unwind@60a22c30(void);
void Unwind@60a22c3c(void);
void Unwind@60a22c48(void);
void Unwind@60a22c54(void);
void Unwind@60a22c60(void);
void Unwind@60a22ca0(void);
void Unwind@60a22cac(void);
void Unwind@60a22cb8(void);
void Unwind@60a22cc4(void);
void Unwind@60a22cd0(void);
void Unwind@60a22cdc(void);
void Unwind@60a22ce8(void);
void Unwind@60a22cf4(void);
void Unwind@60a22d00(void);
void Unwind@60a22d0c(void);
void Unwind@60a22d18(void);
void Unwind@60a22d24(void);
void Unwind@60a22d30(void);
void Unwind@60a22d3c(void);
void Unwind@60a22d48(void);
void Unwind@60a22d54(void);
void Unwind@60a22d60(void);
void Unwind@60a22d6c(void);
void Unwind@60a22d78(void);
void Unwind@60a22d84(void);
void Unwind@60a22d90(void);
void Unwind@60a22d9c(void);
void Unwind@60a22da8(void);
void Unwind@60a22df0(void);
void Unwind@60a22dfc(void);
void Unwind@60a22e08(void);
void Unwind@60a22e14(void);
void Unwind@60a22e20(void);
void Unwind@60a22e2c(void);
void Unwind@60a22e70(void);
void Unwind@60a22e79(void);
void Unwind@60a22ea0(void);
void Unwind@60a22eac(void);
void Unwind@60a22eb8(void);
void Unwind@60a22ec4(void);
void Unwind@60a22ed0(void);
void Unwind@60a22edc(void);
void Unwind@60a22ee8(void);
void Unwind@60a22ef4(void);
void Unwind@60a22f00(void);
void Unwind@60a22f0c(void);
void Unwind@60a22f18(void);
void Unwind@60a22f24(void);
void Unwind@60a22f30(void);
void Unwind@60a22f3c(void);
void Unwind@60a22f80(void);
void Unwind@60a22fb0(void);
void Unwind@60a22fbc(void);
void Unwind@60a22fc8(void);
void Unwind@60a22fd5(void);
void Unwind@60a22fe2(void);
void Unwind@60a22ff1(void);
void Unwind@60a22ff9(void);
void Unwind@60a23020(void);
void Unwind@60a2302c(void);
void Unwind@60a23038(void);
void Unwind@60a23045(void);
void Unwind@60a23070(void);
void Unwind@60a230a0(void);
void Unwind@60a230d0(void);
void Unwind@60a23100(void);
void Unwind@60a23130(void);
void Unwind@60a2313a(void);
void Unwind@60a23143(void);
void Unwind@60a2314c(void);
void Unwind@60a23170(void);
void Unwind@60a2317c(void);
void Unwind@60a23188(void);
void Unwind@60a23194(void);
void Unwind@60a231a0(void);
void Unwind@60a231ac(void);
void FUN_60a231f0(void);
void FUN_60a23250(void);
void FUN_60a23350(void);
void FUN_60a23380(void);

