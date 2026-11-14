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
typedef unsigned long long    ulonglong;
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

typedef struct CInviteResponseDialog CInviteResponseDialog, *PCInviteResponseDialog;

struct CInviteResponseDialog { // PlaceHolder Class Structure
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

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct CThreadLoadingWnd CThreadLoadingWnd, *PCThreadLoadingWnd;

struct CThreadLoadingWnd { // PlaceHolder Class Structure
};

typedef struct tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>, *PtMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>;

struct tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> { // PlaceHolder Class Structure
};

typedef struct CAlarm2Dialog CAlarm2Dialog, *PCAlarm2Dialog;

struct CAlarm2Dialog { // PlaceHolder Class Structure
};

typedef struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>, *PCMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>;

struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> { // PlaceHolder Class Structure
};

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

typedef struct CShutdownNoticeDialog CShutdownNoticeDialog, *PCShutdownNoticeDialog;

struct CShutdownNoticeDialog { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList ESTypeList;

typedef struct CAccuseUserDlg CAccuseUserDlg, *PCAccuseUserDlg;

struct CAccuseUserDlg { // PlaceHolder Class Structure
};

typedef struct CMemberInfoDialog CMemberInfoDialog, *PCMemberInfoDialog;

struct CMemberInfoDialog { // PlaceHolder Class Structure
};

typedef struct CShutdownExitDialog CShutdownExitDialog, *PCShutdownExitDialog;

struct CShutdownExitDialog { // PlaceHolder Class Structure
};

typedef struct CDialogCmp CDialogCmp, *PCDialogCmp;

struct CDialogCmp { // PlaceHolder Class Structure
};

typedef struct CAccuseConfirmDlg CAccuseConfirmDlg, *PCAccuseConfirmDlg;

struct CAccuseConfirmDlg { // PlaceHolder Class Structure
};

typedef struct CItemWebDialog CItemWebDialog, *PCItemWebDialog;

struct CItemWebDialog { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct CDialogList CDialogList, *PCDialogList;

struct CDialogList { // PlaceHolder Class Structure
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

typedef struct CChannelRoomCreateDialog CChannelRoomCreateDialog, *PCChannelRoomCreateDialog;

struct CChannelRoomCreateDialog { // PlaceHolder Class Structure
};

typedef struct CEndingPopupDlg2 CEndingPopupDlg2, *PCEndingPopupDlg2;

struct CEndingPopupDlg2 { // PlaceHolder Class Structure
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

typedef ULONG_PTR SIZE_T;

typedef long LONG_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[34];
};

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef UINT_PTR WPARAM;

typedef struct HPEN__ HPEN__, *PHPEN__;

typedef struct HPEN__ *HPEN;

struct HPEN__ {
    int unused;
};

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef LONG_PTR LPARAM;

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

typedef HANDLE HLOCAL;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct HDC__ *HDC;

typedef int INT;

typedef LONG_PTR LRESULT;

typedef struct tagRECT *LPRECT;

typedef struct HICON__ *HICON;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef int BOOL;

typedef HICON HCURSOR;

typedef struct HBRUSH__ *HBRUSH;

typedef DWORD COLORREF;

typedef struct HBITMAP__ *HBITMAP;

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

typedef struct CAnimatedStatic CAnimatedStatic, *PCAnimatedStatic;

typedef struct CAnimatedStatic_vftable0 CAnimatedStatic_vftable0, *PCAnimatedStatic_vftable0;

typedef struct CAnimatedStatic_vftable1 CAnimatedStatic_vftable1, *PCAnimatedStatic_vftable1;

struct CAnimatedStatic { // class CAnimatedStatic : CWnd : CControlBase
    struct CAnimatedStatic_vftable0 *vftablePtr;
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
    struct CAnimatedStatic_vftable1 *vftablePtr;
};

struct CAnimatedStatic_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWnd virtual function #1
    CAnimatedStatic * (*deleting_destructor)(void *, byte); // CAnimatedStatic virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CAnimatedStatic virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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

struct CAnimatedStatic_vftable1 {
    void (*vfunction1)(void *, byte); // CAnimatedStatic virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAnimatedStatic virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CAnimatedStatic virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMessageBox_vftable1 CMessageBox_vftable1, *PCMessageBox_vftable1;

struct CMessageBox_vftable1 {
    void (*vfunction1)(void *, byte); // CMessageBox virtual function #1
    void (*vfunction2)(void *); // CMessageBox virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CMessageBox2 virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMessageBox_vftable0 CMessageBox_vftable0, *PCMessageBox_vftable0;

struct CMessageBox_vftable0 {
    void (*vfunction1)(void *, byte); // CMessageBox virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CMessageBox virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CChannelRoomPasswordDialog virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*vfunction89)(void *); // CMessageBox2 virtual function #89
    void (*vfunction90)(void *); // CMessageBox2 virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CMessageBox2 virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*vfunction96)(void *, int *); // CMessageBox virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    undefined1 (*vfunction98)(void *); // CMessageBox2 virtual function #98
};

typedef struct CMessageBox CMessageBox, *PCMessageBox;

typedef struct CDialogRoot_data CDialogRoot_data, *PCDialogRoot_data;

typedef struct CMessageBox_data CMessageBox_data, *PCMessageBox_data;

typedef struct CBgPainter CBgPainter, *PCBgPainter;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CMessageBox_data {
    char offset_0x0;
    char offset_0x1;
    char offset_0x2;
    char offset_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    int *offset_0xc;
    int *offset_0x10;
    int *offset_0x14;
    undefined4 *offset_0x18;
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
    undefined field28_0x28;
    undefined field29_0x29;
    undefined field30_0x2a;
    undefined field31_0x2b;
};

struct CBgPainter { // PlaceHolder Structure
};

struct CMessageBox { // class CMessageBox : CDialogRoot
    struct CMessageBox_vftable0 *vftablePtr;
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
    struct CMessageBox_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CMessageBox_data CMessageBox_data;
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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

typedef struct IFunctor IFunctor, *PIFunctor;

struct IFunctor { // class IFunctor
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CAlarm2Dialog virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CAlarm2Dialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CAlarm2Dialog virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
    void (*SetNormalMode)(void *); // CAlarm2Dialog virtual function #99
    void (*SetUPPMode)(void *); // CAlarm2Dialog virtual function #100
};

typedef struct CAlarm2Dialog_data CAlarm2Dialog_data, *PCAlarm2Dialog_data;

struct CAlarm2Dialog_data {
    int *offset_0x0;
    int *offset_0x4;
    undefined4 offset_0x8;
    int *offset_0xc;
    int *offset_0x10;
    int *offset_0x14;
    int *offset_0x18;
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
    undefined4 offset_0x4c;
    undefined4 offset_0x50;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
};


// WARNING! conflicting data type names: /ClassDataTypes/CAlarm2Dialog/CAlarm2Dialog - /CAlarm2Dialog

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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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

typedef struct CBitmap_vftable CBitmap_vftable, *PCBitmap_vftable;

struct CBitmap_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CBitmap virtual function #1
    void * (*deleting_destructor)(void *, uint); // CBitmap virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
};

typedef struct CBitmap CBitmap, *PCBitmap;

struct CBitmap { // class CBitmap : CGdiObject
    struct CBitmap_vftable *vftablePtr;
};

typedef struct CCustomComboBox CCustomComboBox, *PCCustomComboBox;

typedef struct CCustomComboBox_vftable0 CCustomComboBox_vftable0, *PCCustomComboBox_vftable0;

typedef struct CCustomComboBox_vftable1 CCustomComboBox_vftable1, *PCCustomComboBox_vftable1;

struct CCustomComboBox { // class CCustomComboBox : CComboBox : CControlBase
    struct CCustomComboBox_vftable0 *vftablePtr;
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
    struct CCustomComboBox_vftable1 *vftablePtr;
};

struct CCustomComboBox_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomComboBox virtual function #1
    CCustomComboBox * (*deleting_destructor)(void *, byte); // CCustomComboBox virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCustomComboBox virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CCustomComboBox virtual function #69
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

struct CCustomComboBox_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomComboBox virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomComboBox virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomProgress CCustomProgress, *PCCustomProgress;

typedef struct CCustomProgress_vftable0 CCustomProgress_vftable0, *PCCustomProgress_vftable0;

typedef struct CCustomProgress_vftable1 CCustomProgress_vftable1, *PCCustomProgress_vftable1;

struct CCustomProgress { // class CCustomProgress : CProgressCtrl : CControlBase
    struct CCustomProgress_vftable0 *vftablePtr;
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
    struct CCustomProgress_vftable1 *vftablePtr;
};

struct CCustomProgress_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomProgress virtual function #1
    CCustomProgress * (*deleting_destructor)(void *, byte); // CCustomProgress virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCustomProgress virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CProgressCtrl virtual function #82
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CProgressCtrl virtual function #83
};

struct CCustomProgress_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomProgress virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomProgress virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMFunctor<CInviteGameToChnlDlg>_vftable CMFunctor<CInviteGameToChnlDlg>_vftable, *PCMFunctor<CInviteGameToChnlDlg>_vftable;

struct CMFunctor<CInviteGameToChnlDlg>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CInviteGameToChnlDlg> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CInviteGameToChnlDlg> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CInviteGameToChnlDlg> virtual function #3
};

typedef struct CMFunctor<CInviteGameToChnlDlg> CMFunctor<CInviteGameToChnlDlg>, *PCMFunctor<CInviteGameToChnlDlg>;

struct CMFunctor<CInviteGameToChnlDlg> { // class CMFunctor<CInviteGameToChnlDlg> : IFunctor
    struct CMFunctor<CInviteGameToChnlDlg>_vftable *vftablePtr;
};

typedef struct IThreadLoadingWnd_vftable IThreadLoadingWnd_vftable, *PIThreadLoadingWnd_vftable;

struct IThreadLoadingWnd_vftable {
    undefined (*vfunction1)(void); // MSVCR90.DLL IThreadLoadingWnd pure virtual function #1
};

typedef struct IThreadLoadingWnd IThreadLoadingWnd, *PIThreadLoadingWnd;

struct IThreadLoadingWnd { // class IThreadLoadingWnd
    struct IThreadLoadingWnd_vftable *vftablePtr;
};

typedef struct CBrush_vftable CBrush_vftable, *PCBrush_vftable;

struct CBrush_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CBrush virtual function #1
    void * (*deleting_destructor)(void *, uint); // CBrush virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
};

typedef struct CBrush CBrush, *PCBrush;

struct CBrush { // class CBrush : CGdiObject
    struct CBrush_vftable *vftablePtr;
};

typedef struct CSplashWnd_vftable1 CSplashWnd_vftable1, *PCSplashWnd_vftable1;

struct CSplashWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CSplashWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CSplashWnd CSplashWnd, *PCSplashWnd;

typedef struct CSplashWnd_vftable0 CSplashWnd_vftable0, *PCSplashWnd_vftable0;

typedef struct CSplashWnd_vftable2 CSplashWnd_vftable2, *PCSplashWnd_vftable2;

typedef struct CSplashWnd_data CSplashWnd_data, *PCSplashWnd_data;

typedef struct CGdiObject CGdiObject, *PCGdiObject;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CSplashWnd_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct CGdiObject *offset_0x8;
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
};

struct CSplashWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CSplashWnd * (*deleting_destructor)(void *, byte); // CSplashWnd virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CSplashWnd virtual function #13
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
    int (*Create)(void *, char *); // CWnd virtual function #24
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CSplashWnd virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CSplashWnd virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

struct CSplashWnd_vftable2 {
    int (*Create)(void *, char *); // CSplashWnd virtual function #1
};

struct CGdiObject { // PlaceHolder Structure
};

struct CSplashWnd { // class CSplashWnd : CDialogRoot : ISplashWnd
    struct CSplashWnd_vftable0 *vftablePtr;
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
    struct CSplashWnd_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CSplashWnd_vftable2 *vftablePtr;
    struct CSplashWnd_data CSplashWnd_data;
};

typedef struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>_vftable CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>_vftable, *PCMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>_vftable;

struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>_vftable {
    CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> * (*deleting_destructor)(void *, byte); // CMapWrapper<...> virtual function #1
};

typedef struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>_data CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>_data, *PCMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>_data;

struct CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>_data {
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


// WARNING! conflicting data type names: /ClassDataTypes/CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>/CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> - /CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>

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

typedef struct CInviteWaitingDialog_data CInviteWaitingDialog_data, *PCInviteWaitingDialog_data;

struct CInviteWaitingDialog_data {
    int *offset_0x0;
    int *offset_0x4;
    undefined4 *offset_0x8;
    undefined4 *offset_0xc;
    undefined field4_0x10;
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
};

typedef struct CInviteWaitingDialog CInviteWaitingDialog, *PCInviteWaitingDialog;

typedef struct CInviteWaitingDialog_vftable0 CInviteWaitingDialog_vftable0, *PCInviteWaitingDialog_vftable0;

typedef struct CInviteWaitingDialog_vftable1 CInviteWaitingDialog_vftable1, *PCInviteWaitingDialog_vftable1;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CInviteWaitingDialog_data {
    int *offset_0x0;
    int *offset_0x4;
    undefined4 *offset_0x8;
    undefined4 *offset_0xc;
    undefined field4_0x10;
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
};

struct CInviteWaitingDialog_vftable0 {
    void (*vfunction1)(void *, byte); // CInviteWaitingDialog virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CInviteWaitingDialog virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CInviteWaitingDialog virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*vfunction90)(void *); // CInviteWaitingDialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *); // CInviteWaitingDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CMemberInfoDialog virtual function #95
    void (*vfunction96)(void *, int *); // CInviteWaitingDialog virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

struct CInviteWaitingDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CInviteWaitingDialog virtual function #1
    void (*vfunction2)(void *); // CInviteWaitingDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAccuseConfirmDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

struct CInviteWaitingDialog { // class CInviteWaitingDialog : CDialogRoot
    struct CInviteWaitingDialog_vftable0 *vftablePtr;
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
    struct CInviteWaitingDialog_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CInviteWaitingDialog_data CInviteWaitingDialog_data;
};

typedef struct CControlBase CControlBase, *PCControlBase;

struct CControlBase { // class CControlBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CBmpButton_vftable0 CBmpButton_vftable0, *PCBmpButton_vftable0;

struct CBmpButton_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CBmpButton virtual function #1
    CBmpButton * (*deleting_destructor)(void *, byte); // CBmpButton virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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

typedef struct CBmpButton CBmpButton, *PCBmpButton;

typedef struct CBmpButton_vftable1 CBmpButton_vftable1, *PCBmpButton_vftable1;

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

typedef struct CDialog CDialog, *PCDialog;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CDialog { // class CDialog : CWnd
    struct CWnd CWnd;
};

typedef struct CThreadLoadingWnd_vftable0 CThreadLoadingWnd_vftable0, *PCThreadLoadingWnd_vftable0;

struct CThreadLoadingWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CThreadLoadingWnd * (*deleting_destructor)(void *, byte); // CThreadLoadingWnd virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CThreadLoadingWnd virtual function #13
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
    int (*Create)(void *, char *); // CWnd virtual function #24
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CThreadLoadingWnd virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CThreadLoadingWnd virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*UpdateProgressValue)(void *, struct CParam *); // CThreadLoadingWnd virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CThreadLoadingWnd_vftable2 CThreadLoadingWnd_vftable2, *PCThreadLoadingWnd_vftable2;

struct CThreadLoadingWnd_vftable2 {
    int (*Create)(void *, char *); // CThreadLoadingWnd virtual function #1
};

typedef struct CThreadLoadingWnd_vftable1 CThreadLoadingWnd_vftable1, *PCThreadLoadingWnd_vftable1;

struct CThreadLoadingWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CThreadLoadingWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CThreadLoadingWnd virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CThreadLoadingWnd/CThreadLoadingWnd - /CThreadLoadingWnd


// WARNING! conflicting data type names: /ClassDataTypes/tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>/tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> - /tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>

typedef struct CChannelRoomCreateDialog_data CChannelRoomCreateDialog_data, *PCChannelRoomCreateDialog_data;

struct CChannelRoomCreateDialog_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    int *offset_0x10;
    int *offset_0x14;
    int *offset_0x18;
    undefined4 *offset_0x1c;
    undefined4 *offset_0x20;
    undefined4 *offset_0x24;
    undefined field10_0x28;
    undefined field11_0x29;
    undefined field12_0x2a;
    undefined field13_0x2b;
    undefined field14_0x2c;
    undefined field15_0x2d;
    undefined field16_0x2e;
    undefined field17_0x2f;
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CChannelRoomCreateDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CChannelRoomCreateDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CChannelRoomCreateDialog virtual function #95
    void (*Draw)(void *, struct CDC *); // CChannelRoomCreateDialog virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CChannelRoomCreateDialog virtual function #98
};


// WARNING! conflicting data type names: /ClassDataTypes/CChannelRoomCreateDialog/CChannelRoomCreateDialog - /CChannelRoomCreateDialog

typedef struct CDialogList_vftable CDialogList_vftable, *PCDialogList_vftable;

struct CDialogList_vftable {
    CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> * (*deleting_destructor)(void *, byte); // CDialogList virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CDialogList/CDialogList - /CDialogList

typedef struct CChannelRoomPasswordDialog_vftable0 CChannelRoomPasswordDialog_vftable0, *PCChannelRoomPasswordDialog_vftable0;

struct CChannelRoomPasswordDialog_vftable0 {
    void (*vfunction1)(void *, byte); // CChannelRoomPasswordDialog virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CChannelRoomPasswordDialog virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CChannelRoomPasswordDialog virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*vfunction89)(void *); // CChannelRoomPasswordDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *); // CChannelRoomPasswordDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*vfunction95)(void *, int *); // CChannelRoomPasswordDialog virtual function #95
    void (*vfunction96)(void *, int *); // CChannelRoomPasswordDialog virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    undefined4 (*vfunction98)(void *); // CChannelRoomPasswordDialog virtual function #98
};

typedef struct CChannelRoomPasswordDialog_vftable1 CChannelRoomPasswordDialog_vftable1, *PCChannelRoomPasswordDialog_vftable1;

struct CChannelRoomPasswordDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CChannelRoomPasswordDialog virtual function #1
    void (*vfunction2)(void *); // CChannelRoomPasswordDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CChannelRoomPasswordDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CChannelRoomPasswordDialog_data CChannelRoomPasswordDialog_data, *PCChannelRoomPasswordDialog_data;

struct CChannelRoomPasswordDialog_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    undefined4 *offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

typedef struct CChannelRoomPasswordDialog CChannelRoomPasswordDialog, *PCChannelRoomPasswordDialog;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CChannelRoomPasswordDialog_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    undefined4 *offset_0x10;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

struct CChannelRoomPasswordDialog { // class CChannelRoomPasswordDialog : CDialogRoot
    struct CChannelRoomPasswordDialog_vftable0 *vftablePtr;
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
    struct CChannelRoomPasswordDialog_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CChannelRoomPasswordDialog_data CChannelRoomPasswordDialog_data;
};

typedef struct CMutexErrorDlg_vftable0 CMutexErrorDlg_vftable0, *PCMutexErrorDlg_vftable0;

struct CMutexErrorDlg_vftable0 {
    void (*vfunction1)(void *, byte); // CMutexErrorDlg virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CMutexErrorDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CMutexErrorDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CMutexErrorDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CMutexErrorDlg_vftable1 CMutexErrorDlg_vftable1, *PCMutexErrorDlg_vftable1;

struct CMutexErrorDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CMutexErrorDlg virtual function #1
    void (*vfunction2)(void *); // CMutexErrorDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMutexErrorDlg CMutexErrorDlg, *PCMutexErrorDlg;

typedef struct CMutexErrorDlg_data CMutexErrorDlg_data, *PCMutexErrorDlg_data;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CMutexErrorDlg_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int *offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
};

struct CMutexErrorDlg { // class CMutexErrorDlg : CDialogRoot
    struct CMutexErrorDlg_vftable0 *vftablePtr;
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
    struct CMutexErrorDlg_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CMutexErrorDlg_data CMutexErrorDlg_data;
};

typedef struct CHtmlCtrl_vftable CHtmlCtrl_vftable, *PCHtmlCtrl_vftable;

struct CHtmlCtrl_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CHtmlCtrl virtual function #1
    CHtmlCtrl * (*deleting_destructor)(void *, byte); // CHtmlCtrl virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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

typedef struct CEdit CEdit, *PCEdit;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CEdit { // class CEdit : CWnd
    struct CWnd CWnd;
};

typedef struct CFindFriendFailDlg_vftable0 CFindFriendFailDlg_vftable0, *PCFindFriendFailDlg_vftable0;

struct CFindFriendFailDlg_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CFindFriendFailDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CFindFriendFailDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CFindFriendFailDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*vfunction96)(void *, int *); // CFindFriendFailDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CFindFriendFailDlg_vftable1 CFindFriendFailDlg_vftable1, *PCFindFriendFailDlg_vftable1;

struct CFindFriendFailDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CFindFriendFailDlg virtual function #1
    void (*vfunction2)(void *); // CFindFriendFailDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CFindFriendFailDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CFindFriendFailDlg CFindFriendFailDlg, *PCFindFriendFailDlg;

typedef struct CFindFriendFailDlg_data CFindFriendFailDlg_data, *PCFindFriendFailDlg_data;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CFindFriendFailDlg_data {
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
    undefined4 *offset_0x10;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined4 *offset_0x18;
};

struct CFindFriendFailDlg { // class CFindFriendFailDlg : CDialogRoot
    struct CFindFriendFailDlg_vftable0 *vftablePtr;
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
    struct CFindFriendFailDlg_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CFindFriendFailDlg_data CFindFriendFailDlg_data;
};

typedef struct CEndingPopupDlg_vftable1 CEndingPopupDlg_vftable1, *PCEndingPopupDlg_vftable1;

struct CEndingPopupDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CEndingPopupDlg virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CEndingPopupDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CEndingPopupDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CEndingPopupDlg_vftable0 CEndingPopupDlg_vftable0, *PCEndingPopupDlg_vftable0;

struct CEndingPopupDlg_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CEndingPopupDlg virtual function #1
    CEndingPopupDlg * (*deleting_destructor)(void *, byte); // CEndingPopupDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CEndingPopupDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CEndingPopupDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*Draw)(void *, struct CDC *); // CEndingPopupDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CEndingPopupDlg CEndingPopupDlg, *PCEndingPopupDlg;

typedef struct CEndingPopupDlg_data CEndingPopupDlg_data, *PCEndingPopupDlg_data;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CEndingPopupDlg_data {
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
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    int *offset_0x18;
    int *offset_0x1c;
    int *offset_0x20;
    int *offset_0x24;
    undefined4 *offset_0x28;
    undefined4 *offset_0x2c;
    int *offset_0x30;
};

struct CEndingPopupDlg { // class CEndingPopupDlg : CDialogRoot
    struct CEndingPopupDlg_vftable0 *vftablePtr;
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
    struct CEndingPopupDlg_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CEndingPopupDlg_data CEndingPopupDlg_data;
};

typedef struct CInviteChnlToWebDlg_vftable0 CInviteChnlToWebDlg_vftable0, *PCInviteChnlToWebDlg_vftable0;

struct CInviteChnlToWebDlg_vftable0 {
    void (*vfunction1)(void *, byte); // CInviteChnlToWebDlg virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CInviteChnlToWebDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CInviteChnlToWebDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *); // CInviteChnlToWebDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*vfunction96)(void *, int *); // CInviteChnlToWebDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CInviteChnlToWebDlg_vftable1 CInviteChnlToWebDlg_vftable1, *PCInviteChnlToWebDlg_vftable1;

struct CInviteChnlToWebDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CInviteChnlToWebDlg virtual function #1
    void (*vfunction2)(void *); // CInviteChnlToWebDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CInviteChnlToWebDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CInviteChnlToWebDlg_data CInviteChnlToWebDlg_data, *PCInviteChnlToWebDlg_data;

struct CInviteChnlToWebDlg_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    undefined4 *offset_0x10;
    undefined4 *offset_0x14;
    undefined field6_0x18;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
};

typedef struct CInviteChnlToWebDlg CInviteChnlToWebDlg, *PCInviteChnlToWebDlg;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CInviteChnlToWebDlg_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    undefined4 *offset_0x10;
    undefined4 *offset_0x14;
    undefined field6_0x18;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
};

struct CInviteChnlToWebDlg { // class CInviteChnlToWebDlg : CDialogRoot
    struct CInviteChnlToWebDlg_vftable0 *vftablePtr;
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
    struct CInviteChnlToWebDlg_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CInviteChnlToWebDlg_data CInviteChnlToWebDlg_data;
};

typedef struct IComponent IComponent, *PIComponent;

struct IComponent { // class IComponent
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};


// WARNING! conflicting data type names: /ClassDataTypes/CAccuseUserDlg/CAccuseUserDlg - /CAccuseUserDlg

typedef struct CAccuseUserDlg_data CAccuseUserDlg_data, *PCAccuseUserDlg_data;

struct CAccuseUserDlg_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    void *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    int *offset_0x10;
    int *offset_0x14;
    int *offset_0x18;
    int *offset_0x1c;
    int *offset_0x20;
    undefined field12_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
};

typedef struct CAccuseUserDlg_vftable1 CAccuseUserDlg_vftable1, *PCAccuseUserDlg_vftable1;

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

typedef struct CAccuseUserDlg_vftable0 CAccuseUserDlg_vftable0, *PCAccuseUserDlg_vftable0;

struct CAccuseUserDlg_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CAccuseUserDlg * (*deleting_destructor)(void *, byte); // CAccuseUserDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CAccuseUserDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*Draw)(void *, struct CDC *); // CAccuseUserDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseUserDlg virtual function #98
};

typedef struct CItemWebDialog_vftable1 CItemWebDialog_vftable1, *PCItemWebDialog_vftable1;

struct CItemWebDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CItemWebDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CItemWebDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAlarm2Dialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CItemWebDialog_vftable0 CItemWebDialog_vftable0, *PCItemWebDialog_vftable0;

struct CItemWebDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CItemWebDialog virtual function #1
    CItemWebDialog * (*deleting_destructor)(void *, byte); // CItemWebDialog virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CItemWebDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CItemWebDialog virtual function #98
};


// WARNING! conflicting data type names: /ClassDataTypes/CItemWebDialog/CItemWebDialog - /CItemWebDialog

typedef struct CItemWebDialog_data CItemWebDialog_data, *PCItemWebDialog_data;

struct CItemWebDialog_data {
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
    int *offset_0x218;
    undefined field534_0x21c;
    undefined field535_0x21d;
    undefined field536_0x21e;
    undefined field537_0x21f;
    undefined4 *offset_0x220;
};

typedef struct CPen_vftable CPen_vftable, *PCPen_vftable;

struct CPen_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPen virtual function #1
    void * (*deleting_destructor)(void *, uint); // CPen virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
};

typedef struct CPen CPen, *PCPen;

struct CPen { // class CPen : CGdiObject
    struct CPen_vftable *vftablePtr;
};

typedef struct CShutdownExitDialog_vftable1 CShutdownExitDialog_vftable1, *PCShutdownExitDialog_vftable1;

struct CShutdownExitDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CShutdownExitDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CShutdownExitDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAlarm2Dialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CShutdownExitDialog_vftable0 CShutdownExitDialog_vftable0, *PCShutdownExitDialog_vftable0;

struct CShutdownExitDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CShutdownExitDialog virtual function #1
    CShutdownExitDialog * (*deleting_destructor)(void *, byte); // CShutdownExitDialog virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CShutdownExitDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};


// WARNING! conflicting data type names: /ClassDataTypes/CShutdownExitDialog/CShutdownExitDialog - /CShutdownExitDialog

typedef struct CShutdownExitDialog_data CShutdownExitDialog_data, *PCShutdownExitDialog_data;

struct CShutdownExitDialog_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    int *offset_0x10;
    int *offset_0x14;
    int *offset_0x18;
    int *offset_0x1c;
    int *offset_0x20;
};

typedef struct CGuildInfoCtrl_vftable1 CGuildInfoCtrl_vftable1, *PCGuildInfoCtrl_vftable1;

struct CGuildInfoCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CGuildInfoCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CGuildInfoCtrl virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CGuildInfoCtrl virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CGuildInfoCtrl CGuildInfoCtrl, *PCGuildInfoCtrl;

typedef struct CGuildInfoCtrl_vftable0 CGuildInfoCtrl_vftable0, *PCGuildInfoCtrl_vftable0;

struct CGuildInfoCtrl { // class CGuildInfoCtrl : CWnd : CControlBase
    struct CGuildInfoCtrl_vftable0 *vftablePtr;
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
    struct CGuildInfoCtrl_vftable1 *vftablePtr;
};

struct CGuildInfoCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGuildInfoCtrl virtual function #1
    CGuildInfoCtrl * (*deleting_destructor)(void *, byte); // CGuildInfoCtrl virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CGuildInfoCtrl virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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

typedef struct CSettingDialog_vftable0 CSettingDialog_vftable0, *PCSettingDialog_vftable0;

struct CSettingDialog_vftable0 {
    void (*vfunction1)(void *, byte); // CSettingDialog virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CSettingDialog virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CSettingDialog virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CSettingDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*vfunction96)(void *, struct CDC *); // CSettingDialog virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CSettingDialog_vftable1 CSettingDialog_vftable1, *PCSettingDialog_vftable1;

struct CSettingDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CSettingDialog virtual function #1
    void (*vfunction2)(void *); // CSettingDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CSettingDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CSettingDialog CSettingDialog, *PCSettingDialog;

typedef struct CSettingDialog_data CSettingDialog_data, *PCSettingDialog_data;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CSettingDialog_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    int *offset_0x10;
    int *offset_0x14;
    int *offset_0x18;
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
    undefined4 *offset_0x4c;
    undefined4 *offset_0x50;
    undefined4 *offset_0x54;
    undefined4 *offset_0x58;
    undefined4 *offset_0x5c;
    undefined4 *offset_0x60;
    undefined4 *offset_0x64;
    undefined4 *offset_0x68;
    undefined4 *offset_0x6c;
    undefined4 *offset_0x70;
    undefined4 *offset_0x74;
    undefined field30_0x78;
    undefined field31_0x79;
    undefined field32_0x7a;
    undefined field33_0x7b;
    undefined field34_0x7c;
    undefined field35_0x7d;
    undefined field36_0x7e;
    undefined field37_0x7f;
    undefined field38_0x80;
    undefined field39_0x81;
    undefined field40_0x82;
    undefined field41_0x83;
};

struct CSettingDialog { // class CSettingDialog : CDialogRoot
    struct CSettingDialog_vftable0 *vftablePtr;
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
    struct CSettingDialog_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CSettingDialog_data CSettingDialog_data;
};

typedef struct CCustomRadioButton_vftable1 CCustomRadioButton_vftable1, *PCCustomRadioButton_vftable1;

struct CCustomRadioButton_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomRadioButton virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomRadioButton virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomRadioButton_vftable0 CCustomRadioButton_vftable0, *PCCustomRadioButton_vftable0;

struct CCustomRadioButton_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomRadioButton virtual function #1
    CCustomRadioButton * (*deleting_destructor)(void *, byte); // CCustomRadioButton virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCustomRadioButton virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CCustomRadioButton virtual function #83
};

typedef struct CCustomRadioButton CCustomRadioButton, *PCCustomRadioButton;

struct CCustomRadioButton { // class CCustomRadioButton : CButton : CControlBase
    struct CCustomRadioButton_vftable0 *vftablePtr;
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
    struct CCustomRadioButton_vftable1 *vftablePtr;
};

typedef struct CDialogCmp_vftable CDialogCmp_vftable, *PCDialogCmp_vftable;

struct CDialogCmp_vftable {
    bool (*OnAttached)(void *); // CDialogCmp virtual function #1
    bool (*OnDetached)(void *); // CDialogCmp virtual function #2
    void (*InitDefaultDialog)(void *); // CDialogCmp virtual function #3
    void (*InitAddtionalDialog)(void *); // CDialogCmp virtual function #4
};


// WARNING! conflicting data type names: /ClassDataTypes/CDialogCmp/CDialogCmp - /CDialogCmp

typedef struct CDialogCmp_data CDialogCmp_data, *PCDialogCmp_data;

struct CDialogCmp_data {
    undefined4 offset_0x0;
};

typedef struct CProgressCtrl CProgressCtrl, *PCProgressCtrl;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CProgressCtrl { // class CProgressCtrl : CWnd
    struct CWnd CWnd;
};

typedef struct CMFunctor<CDialogCmp>_vftable CMFunctor<CDialogCmp>_vftable, *PCMFunctor<CDialogCmp>_vftable;

struct CMFunctor<CDialogCmp>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CDialogCmp> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CDialogCmp> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CDialogCmp> virtual function #3
};

typedef struct CMFunctor<CDialogCmp> CMFunctor<CDialogCmp>, *PCMFunctor<CDialogCmp>;

struct CMFunctor<CDialogCmp> { // class CMFunctor<CDialogCmp> : IFunctor
    struct CMFunctor<CDialogCmp>_vftable *vftablePtr;
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

typedef struct CInviteGameToChnlDlg_data CInviteGameToChnlDlg_data, *PCInviteGameToChnlDlg_data;

struct CInviteGameToChnlDlg_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    undefined4 *offset_0x10;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
};

typedef struct CInviteGameToChnlDlg CInviteGameToChnlDlg, *PCInviteGameToChnlDlg;

typedef struct CInviteGameToChnlDlg_vftable0 CInviteGameToChnlDlg_vftable0, *PCInviteGameToChnlDlg_vftable0;

typedef struct CInviteGameToChnlDlg_vftable1 CInviteGameToChnlDlg_vftable1, *PCInviteGameToChnlDlg_vftable1;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CInviteGameToChnlDlg_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    undefined4 *offset_0x10;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
};

struct CInviteGameToChnlDlg_vftable0 {
    void (*vfunction1)(void *, byte); // CInviteGameToChnlDlg virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CInviteGameToChnlDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CInviteGameToChnlDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CInviteGameToChnlDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*vfunction96)(void *, int *); // CInviteGameToChnlDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

struct CInviteGameToChnlDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CInviteGameToChnlDlg virtual function #1
    void (*vfunction2)(void *); // CInviteGameToChnlDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CChannelRoomPasswordDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

struct CInviteGameToChnlDlg { // class CInviteGameToChnlDlg : CDialogRoot
    struct CInviteGameToChnlDlg_vftable0 *vftablePtr;
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
    struct CInviteGameToChnlDlg_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CInviteGameToChnlDlg_data CInviteGameToChnlDlg_data;
};

typedef struct CCustomEdit CCustomEdit, *PCCustomEdit;

typedef struct CCustomEdit_vftable0 CCustomEdit_vftable0, *PCCustomEdit_vftable0;

typedef struct CCustomEdit_vftable1 CCustomEdit_vftable1, *PCCustomEdit_vftable1;

struct CCustomEdit { // class CCustomEdit : CEdit : CControlBase
    struct CCustomEdit_vftable0 *vftablePtr;
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
    struct CCustomEdit_vftable1 *vftablePtr;
};

struct CCustomEdit_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomEdit virtual function #1
    CCustomEdit * (*deleting_destructor)(void *, byte); // CCustomEdit virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCustomEdit virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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

struct CCustomEdit_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomEdit virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomEdit virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CFindFriendSuccessDlg_vftable1 CFindFriendSuccessDlg_vftable1, *PCFindFriendSuccessDlg_vftable1;

struct CFindFriendSuccessDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CFindFriendSuccessDlg virtual function #1
    void (*vfunction2)(void *); // CFindFriendSuccessDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CFindFriendSuccessDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CFindFriendSuccessDlg_vftable0 CFindFriendSuccessDlg_vftable0, *PCFindFriendSuccessDlg_vftable0;

struct CFindFriendSuccessDlg_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CFindFriendSuccessDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CFindFriendSuccessDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CFindFriendSuccessDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*vfunction96)(void *, int *); // CFindFriendSuccessDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CFindFriendSuccessDlg_data CFindFriendSuccessDlg_data, *PCFindFriendSuccessDlg_data;

struct CFindFriendSuccessDlg_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int *offset_0x4;
    int *offset_0x8;
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
    undefined4 *offset_0x18;
    undefined field19_0x1c;
    undefined field20_0x1d;
    undefined field21_0x1e;
    undefined field22_0x1f;
    undefined4 *offset_0x20;
    undefined field24_0x24;
    undefined field25_0x25;
    undefined field26_0x26;
    undefined field27_0x27;
    undefined field28_0x28;
    undefined field29_0x29;
    undefined field30_0x2a;
    undefined field31_0x2b;
    undefined field32_0x2c;
    undefined field33_0x2d;
    undefined field34_0x2e;
    undefined field35_0x2f;
    undefined field36_0x30;
    undefined field37_0x31;
    undefined field38_0x32;
    undefined field39_0x33;
};

typedef struct CFindFriendSuccessDlg CFindFriendSuccessDlg, *PCFindFriendSuccessDlg;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CFindFriendSuccessDlg_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int *offset_0x4;
    int *offset_0x8;
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
    undefined4 *offset_0x18;
    undefined field19_0x1c;
    undefined field20_0x1d;
    undefined field21_0x1e;
    undefined field22_0x1f;
    undefined4 *offset_0x20;
    undefined field24_0x24;
    undefined field25_0x25;
    undefined field26_0x26;
    undefined field27_0x27;
    undefined field28_0x28;
    undefined field29_0x29;
    undefined field30_0x2a;
    undefined field31_0x2b;
    undefined field32_0x2c;
    undefined field33_0x2d;
    undefined field34_0x2e;
    undefined field35_0x2f;
    undefined field36_0x30;
    undefined field37_0x31;
    undefined field38_0x32;
    undefined field39_0x33;
};

struct CFindFriendSuccessDlg { // class CFindFriendSuccessDlg : CDialogRoot
    struct CFindFriendSuccessDlg_vftable0 *vftablePtr;
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
    struct CFindFriendSuccessDlg_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CFindFriendSuccessDlg_data CFindFriendSuccessDlg_data;
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CFont CFont, *PCFont;

typedef struct CFont_vftable CFont_vftable, *PCFont_vftable;

typedef struct CFont_data CFont_data, *PCFont_data;

struct CFont_data {
    undefined4 offset_0x0;
};

struct CFont_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CFont virtual function #1
    void * (*deleting_destructor)(void *, uint); // CFont virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
};

struct CFont { // class CFont : CGdiObject
    struct CFont_vftable *vftablePtr;
    struct CFont_data CFont_data;
};

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

typedef struct CSaveChatNoticetDlg_vftable1 CSaveChatNoticetDlg_vftable1, *PCSaveChatNoticetDlg_vftable1;

struct CSaveChatNoticetDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CSaveChatNoticetDlg virtual function #1
    void (*vfunction2)(void *); // CSaveChatNoticetDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CSaveChatNoticetDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CSaveChatNoticetDlg_vftable0 CSaveChatNoticetDlg_vftable0, *PCSaveChatNoticetDlg_vftable0;

struct CSaveChatNoticetDlg_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CSaveChatNoticetDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CSaveChatNoticetDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CSaveChatNoticetDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CSaveChatNoticetDlg_data CSaveChatNoticetDlg_data, *PCSaveChatNoticetDlg_data;

struct CSaveChatNoticetDlg_data {
    int *offset_0x0;
};

typedef struct CSaveChatNoticetDlg CSaveChatNoticetDlg, *PCSaveChatNoticetDlg;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CSaveChatNoticetDlg_data {
    int *offset_0x0;
};

struct CSaveChatNoticetDlg { // class CSaveChatNoticetDlg : CDialogRoot
    struct CSaveChatNoticetDlg_vftable0 *vftablePtr;
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
    struct CSaveChatNoticetDlg_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CSaveChatNoticetDlg_data CSaveChatNoticetDlg_data;
};

typedef struct CAccuseConfirmDlg_vftable0 CAccuseConfirmDlg_vftable0, *PCAccuseConfirmDlg_vftable0;

struct CAccuseConfirmDlg_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CAccuseConfirmDlg * (*deleting_destructor)(void *, byte); // CAccuseConfirmDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CAccuseConfirmDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*AfterShowIt)(void *, struct CParam *); // CMemberInfoDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CAccuseConfirmDlg_vftable1 CAccuseConfirmDlg_vftable1, *PCAccuseConfirmDlg_vftable1;

struct CAccuseConfirmDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CAccuseConfirmDlg virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CAccuseConfirmDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAccuseConfirmDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CAccuseConfirmDlg/CAccuseConfirmDlg - /CAccuseConfirmDlg

typedef struct CAccuseConfirmDlg_data CAccuseConfirmDlg_data, *PCAccuseConfirmDlg_data;

struct CAccuseConfirmDlg_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    undefined field4_0x10;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
};

typedef struct CMFunctor<CMemberInfoDialog>_vftable CMFunctor<CMemberInfoDialog>_vftable, *PCMFunctor<CMemberInfoDialog>_vftable;

struct CMFunctor<CMemberInfoDialog>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CInviteGameToChnlDlg> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CMemberInfoDialog> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CInviteGameToChnlDlg> virtual function #3
};

typedef struct CMFunctor<CMemberInfoDialog> CMFunctor<CMemberInfoDialog>, *PCMFunctor<CMemberInfoDialog>;

struct CMFunctor<CMemberInfoDialog> { // class CMFunctor<CMemberInfoDialog> : IFunctor
    struct CMFunctor<CMemberInfoDialog>_vftable *vftablePtr;
};

typedef struct ISplashWnd_vftable ISplashWnd_vftable, *PISplashWnd_vftable;

struct ISplashWnd_vftable {
    undefined (*vfunction1)(void); // MSVCR90.DLL ISplashWnd pure virtual function #1
};

typedef struct ISplashWnd ISplashWnd, *PISplashWnd;

struct ISplashWnd { // class ISplashWnd
    struct ISplashWnd_vftable *vftablePtr;
};

typedef struct CCustomCheckBox_vftable1 CCustomCheckBox_vftable1, *PCCustomCheckBox_vftable1;

struct CCustomCheckBox_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomCheckBox virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomCheckBox virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomCheckBox CCustomCheckBox, *PCCustomCheckBox;

typedef struct CCustomCheckBox_vftable0 CCustomCheckBox_vftable0, *PCCustomCheckBox_vftable0;

struct CCustomCheckBox { // class CCustomCheckBox : CButton : CControlBase
    struct CCustomCheckBox_vftable0 *vftablePtr;
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
    struct CCustomCheckBox_vftable1 *vftablePtr;
};

struct CCustomCheckBox_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomCheckBox virtual function #1
    CCustomCheckBox * (*deleting_destructor)(void *, byte); // CCustomCheckBox virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCustomCheckBox virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CCustomCheckBox virtual function #83
};

typedef struct CDialogRoot_vftable0 CDialogRoot_vftable0, *PCDialogRoot_vftable0;

struct CDialogRoot_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CDialogRoot virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CDialogRoot virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CDialogRoot_vftable1 CDialogRoot_vftable1, *PCDialogRoot_vftable1;

struct CDialogRoot_vftable1 {
    void (*vfunction1)(void *, byte); // CDialogRoot virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CDialogRoot virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CDialogRoot CDialogRoot, *PCDialogRoot;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CDialogRoot { // class CDialogRoot : CDialog : CControlBase
    struct CDialogRoot_vftable0 *vftablePtr;
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
    struct CDialogRoot_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
};

typedef struct CDefaultSkin_vftable CDefaultSkin_vftable, *PCDefaultSkin_vftable;

struct CDefaultSkin_vftable {
    CControlBase * (*deleting_destructor)(void *, byte); // CDefaultSkin virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CDefaultSkin virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CDefaultSkin CDefaultSkin, *PCDefaultSkin;

typedef struct CDefaultSkin_data CDefaultSkin_data, *PCDefaultSkin_data;

struct CDefaultSkin_data {
    struct CBgPainter *offset_0x0;
};

struct CDefaultSkin { // class CDefaultSkin : CControlBase
    struct CDefaultSkin_vftable *vftablePtr;
    struct CDefaultSkin_data CDefaultSkin_data;
};

typedef struct CWaitingMemberListCtrl_vftable1 CWaitingMemberListCtrl_vftable1, *PCWaitingMemberListCtrl_vftable1;

struct CWaitingMemberListCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CWaitingMemberListCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CListCtrlEx virtual function #2
    bool (*DestroyControl)(void *); // CWaitingMemberListCtrl virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CListCtrlEx virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CWaitingMemberListCtrl_vftable0 CWaitingMemberListCtrl_vftable0, *PCWaitingMemberListCtrl_vftable0;

struct CWaitingMemberListCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWaitingMemberListCtrl virtual function #1
    CWaitingMemberListCtrl * (*deleting_destructor)(void *, byte); // CWaitingMemberListCtrl virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CWaitingMemberListCtrl virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    bool (*DoListCtrlSetting)(void *); // CWaitingMemberListCtrl virtual function #84
    void (*GetColumnFormatString)(void *, int, char *, char *, int); // CListCtrlEx virtual function #85
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CListCtrlEx virtual function #86
};

typedef struct CWaitingMemberListCtrl CWaitingMemberListCtrl, *PCWaitingMemberListCtrl;

struct CWaitingMemberListCtrl { // class CWaitingMemberListCtrl : CListCtrlEx
    struct CWaitingMemberListCtrl_vftable0 *vftablePtr;
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
    struct CWaitingMemberListCtrl_vftable1 *vftablePtr;
};

typedef struct CShutdownNoticeDialog_data CShutdownNoticeDialog_data, *PCShutdownNoticeDialog_data;

struct CShutdownNoticeDialog_data {
    int *offset_0x0;
    int *offset_0x4;
};

typedef struct CShutdownNoticeDialog_vftable0 CShutdownNoticeDialog_vftable0, *PCShutdownNoticeDialog_vftable0;

struct CShutdownNoticeDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CShutdownNoticeDialog virtual function #1
    CShutdownNoticeDialog * (*deleting_destructor)(void *, byte); // CShutdownNoticeDialog virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*AfterShowIt)(void *, struct CParam *); // CMemberInfoDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CShutdownNoticeDialog_vftable1 CShutdownNoticeDialog_vftable1, *PCShutdownNoticeDialog_vftable1;

struct CShutdownNoticeDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CShutdownNoticeDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CShutdownNoticeDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAlarm2Dialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CShutdownNoticeDialog/CShutdownNoticeDialog - /CShutdownNoticeDialog


// WARNING! conflicting data type names: /ClassDataTypes/CGdiObject/CGdiObject - /Demangler/CGdiObject

typedef struct CGdiObject_vftable CGdiObject_vftable, *PCGdiObject_vftable;

struct CGdiObject_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGdiObject virtual function #1
    void * (*deleting_destructor)(void *, uint); // CGdiObject virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
};

typedef struct CSaveChatAcceptDlg_vftable1 CSaveChatAcceptDlg_vftable1, *PCSaveChatAcceptDlg_vftable1;

struct CSaveChatAcceptDlg_vftable1 {
    void (*vfunction1)(void *, byte); // CSaveChatAcceptDlg virtual function #1
    void (*vfunction2)(void *); // CSaveChatAcceptDlg virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CSaveChatAcceptDlg virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CSaveChatAcceptDlg_vftable0 CSaveChatAcceptDlg_vftable0, *PCSaveChatAcceptDlg_vftable0;

struct CSaveChatAcceptDlg_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialogRoot virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CSaveChatAcceptDlg virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CSaveChatAcceptDlg virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CSaveChatAcceptDlg virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CSaveChatAcceptDlg_data CSaveChatAcceptDlg_data, *PCSaveChatAcceptDlg_data;

struct CSaveChatAcceptDlg_data {
    int *offset_0x0;
    int *offset_0x4;
};

typedef struct CSaveChatAcceptDlg CSaveChatAcceptDlg, *PCSaveChatAcceptDlg;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CSaveChatAcceptDlg_data {
    int *offset_0x0;
    int *offset_0x4;
};

struct CSaveChatAcceptDlg { // class CSaveChatAcceptDlg : CDialogRoot
    struct CSaveChatAcceptDlg_vftable0 *vftablePtr;
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
    struct CSaveChatAcceptDlg_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CSaveChatAcceptDlg_data CSaveChatAcceptDlg_data;
};

typedef struct CListCtrl CListCtrl, *PCListCtrl;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CListCtrl { // class CListCtrl : CWnd
    struct CWnd CWnd;
};

typedef struct CMemberInfoDialog_vftable1 CMemberInfoDialog_vftable1, *PCMemberInfoDialog_vftable1;

struct CMemberInfoDialog_vftable1 {
    void (*vfunction1)(void *, byte); // CMemberInfoDialog virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CMemberInfoDialog virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CMemberInfoDialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMemberInfoDialog_vftable0 CMemberInfoDialog_vftable0, *PCMemberInfoDialog_vftable0;

struct CMemberInfoDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CMemberInfoDialog virtual function #1
    CMemberInfoDialog * (*deleting_destructor)(void *, byte); // CMemberInfoDialog virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMemberInfoDialog virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CMemberInfoDialog virtual function #89
    void (*OnCancel)(void *); // CMemberInfoDialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CMemberInfoDialog virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CMemberInfoDialog virtual function #95
    void (*Draw)(void *, struct CDC *); // CMemberInfoDialog virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
};

typedef struct CMemberInfoDialog_data CMemberInfoDialog_data, *PCMemberInfoDialog_data;

typedef struct CAvtr2004 CAvtr2004, *PCAvtr2004;

struct CMemberInfoDialog_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    int *offset_0xc;
    int *offset_0x10;
    int *offset_0x14;
    int *offset_0x18;
    int *offset_0x1c;
    int *offset_0x20;
    int *offset_0x24;
    undefined4 *offset_0x28;
    undefined4 *offset_0x2c;
    undefined4 *offset_0x30;
    struct CAvtr2004 *offset_0x34;
    undefined field14_0x38;
    undefined field15_0x39;
    undefined field16_0x3a;
    undefined field17_0x3b;
    undefined field18_0x3c;
    undefined field19_0x3d;
    undefined field20_0x3e;
    undefined field21_0x3f;
    undefined field22_0x40;
    undefined field23_0x41;
    undefined field24_0x42;
    undefined field25_0x43;
    undefined field26_0x44;
    undefined field27_0x45;
    undefined field28_0x46;
    undefined field29_0x47;
    undefined field30_0x48;
    undefined field31_0x49;
    undefined field32_0x4a;
    undefined field33_0x4b;
    undefined field34_0x4c;
    undefined field35_0x4d;
    undefined field36_0x4e;
    undefined field37_0x4f;
    undefined field38_0x50;
    undefined field39_0x51;
    undefined field40_0x52;
    undefined field41_0x53;
};

struct CAvtr2004 { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /ClassDataTypes/CMemberInfoDialog/CMemberInfoDialog - /CMemberInfoDialog

typedef struct CMessageBox2 CMessageBox2, *PCMessageBox2;

typedef struct CMessageBox2_vftable0 CMessageBox2_vftable0, *PCMessageBox2_vftable0;

typedef struct CMessageBox2_vftable1 CMessageBox2_vftable1, *PCMessageBox2_vftable1;

typedef struct CMessageBox2_data CMessageBox2_data, *PCMessageBox2_data;

struct CDialogRoot_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined2 offset_0x14;
    undefined2 offset_0x16;
    undefined2 offset_0x18;
    undefined2 offset_0x1a;
    undefined2 offset_0x1c;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    int *offset_0x28;
    struct CBgPainter *offset_0x2c;
};

struct CMessageBox2_data {
    char offset_0x0;
    char offset_0x1;
    char offset_0x2;
    char offset_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    int *offset_0xc;
    int *offset_0x10;
    int *offset_0x14;
    undefined4 *offset_0x18;
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
    undefined field28_0x28;
    undefined field29_0x29;
    undefined field30_0x2a;
    undefined field31_0x2b;
};

struct CMessageBox2_vftable0 {
    void (*vfunction1)(void *, byte); // CMessageBox2 virtual function #1
    CDialogRoot * (*deleting_destructor)(void *, byte); // CMessageBox2 virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CChannelRoomPasswordDialog virtual function #13
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*vfunction89)(void *); // CMessageBox2 virtual function #89
    void (*vfunction90)(void *); // CMessageBox2 virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*vfunction92)(void *, int *); // CMessageBox2 virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*vfunction96)(void *, int *); // CMessageBox2 virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    undefined1 (*vfunction98)(void *); // CMessageBox2 virtual function #98
};

struct CMessageBox2_vftable1 {
    void (*vfunction1)(void *, byte); // CMessageBox2 virtual function #1
    void (*vfunction2)(void *); // CMessageBox2 virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CMessageBox2 virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

struct CMessageBox2 { // class CMessageBox2 : CDialogRoot
    struct CMessageBox2_vftable0 *vftablePtr;
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
    struct CMessageBox2_vftable1 *vftablePtr;
    struct CDialogRoot_data CDialogRoot_data;
    struct CMessageBox2_data CMessageBox2_data;
};

typedef struct CListCtrlEx_vftable0 CListCtrlEx_vftable0, *PCListCtrlEx_vftable0;

struct CListCtrlEx_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CListCtrlEx virtual function #1
    CListCtrlEx * (*deleting_destructor)(void *, byte); // CListCtrlEx virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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

typedef struct CEndingPopupDlg2_vftable0 CEndingPopupDlg2_vftable0, *PCEndingPopupDlg2_vftable0;

struct CEndingPopupDlg2_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CEndingPopupDlg2 virtual function #1
    CEndingPopupDlg2 * (*deleting_destructor)(void *, byte); // CEndingPopupDlg2 virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialogRoot virtual function #86
    int (*OnInitDialog)(void *); // CDialogRoot virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnBtnClose)(void *); // CShutdownExitDialog virtual function #89
    void (*OnBtnCancel)(void *); // CAlarm2Dialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
    void (*InitDialogData)(void *, struct CParam *); // CEndingPopupDlg2 virtual function #92
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #95
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CEndingPopupDlg2 virtual function #98
    void (*DestroyHtmlControl)(void *); // CEndingPopupDlg2 virtual function #99
    bool (*CreateHtmlControl)(void *); // CEndingPopupDlg2 virtual function #100
};

typedef struct CEndingPopupDlg2_data CEndingPopupDlg2_data, *PCEndingPopupDlg2_data;

struct CEndingPopupDlg2_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    int *offset_0x14;
    int *offset_0x18;
    int *offset_0x1c;
};

typedef struct CEndingPopupDlg2_vftable1 CEndingPopupDlg2_vftable1, *PCEndingPopupDlg2_vftable1;

struct CEndingPopupDlg2_vftable1 {
    void (*vfunction1)(void *, byte); // CEndingPopupDlg2 virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CEndingPopupDlg2 virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CDialogRoot virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CAlarm2Dialog virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CEndingPopupDlg2/CEndingPopupDlg2 - /CEndingPopupDlg2

typedef struct CInviteResponseDialog_data CInviteResponseDialog_data, *PCInviteResponseDialog_data;

struct CInviteResponseDialog_data {
    int *offset_0x0;
    int *offset_0x4;
    int *offset_0x8;
    undefined4 *offset_0xc;
    undefined4 *offset_0x10;
    struct CAvtr2004 *offset_0x14;
    undefined field6_0x18;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    undefined field14_0x20;
    undefined field15_0x21;
    undefined field16_0x22;
    undefined field17_0x23;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
    undefined field22_0x28;
    undefined field23_0x29;
    undefined field24_0x2a;
    undefined field25_0x2b;
    undefined field26_0x2c;
    undefined field27_0x2d;
    undefined field28_0x2e;
    undefined field29_0x2f;
    undefined field30_0x30;
    undefined field31_0x31;
    undefined field32_0x32;
    undefined field33_0x33;
    undefined field34_0x34;
    undefined field35_0x35;
    undefined field36_0x36;
    undefined field37_0x37;
    undefined field38_0x38;
    undefined field39_0x39;
    undefined field40_0x3a;
    undefined field41_0x3b;
    undefined field42_0x3c;
    undefined field43_0x3d;
    undefined field44_0x3e;
    undefined field45_0x3f;
    undefined field46_0x40;
    undefined field47_0x41;
    undefined field48_0x42;
    undefined field49_0x43;
    undefined field50_0x44;
    undefined field51_0x45;
    undefined field52_0x46;
    undefined field53_0x47;
};

typedef struct CInviteResponseDialog_vftable0 CInviteResponseDialog_vftable0, *PCInviteResponseDialog_vftable0;

struct CInviteResponseDialog_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CInviteResponseDialog virtual function #1
    CInviteResponseDialog * (*deleting_destructor)(void *, byte); // CInviteResponseDialog virtual function #2
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #3
    void (*DownloadComplete_HtmlCtrl)(void *); // CItemWebDialog virtual function #4
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #5
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #66
    void (*vfunction67)(void *); // CScrollSupportCtrl virtual function #67
    void (*vfunction68)(void *); // CScrollSupportCtrl virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CDialogRoot virtual function #82
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
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #93
    int (*ShowModaless)(void *, bool); // CDialogRoot virtual function #94
    void (*AfterShowIt)(void *, struct CParam *); // CInviteResponseDialog virtual function #95
    void (*Draw)(void *, struct CDC *); // CInviteResponseDialog virtual function #96
    void (*AfterShowIt)(void *, struct CParam *); // CAccuseConfirmDlg virtual function #97
    bool (*OnInitControl)(void *); // CAccuseConfirmDlg virtual function #98
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


// WARNING! conflicting data type names: /ClassDataTypes/CInviteResponseDialog/CInviteResponseDialog - /CInviteResponseDialog

typedef struct CDC CDC, *PCDC;

struct CDC { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCustomStatic - /ClassDataTypes/CCustomStatic/CCustomStatic

typedef struct CWinThread CWinThread, *PCWinThread;

struct CWinThread { // PlaceHolder Structure
};

typedef struct CMemberData CMemberData, *PCMemberData;

struct CMemberData { // PlaceHolder Structure
};

typedef struct CGameFinder CGameFinder, *PCGameFinder;

struct CGameFinder { // PlaceHolder Structure
};

typedef struct IGod IGod, *PIGod;

struct IGod { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CSplashWnd - /ClassDataTypes/CSplashWnd/CSplashWnd

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

typedef struct AFX_EVENTSINKMAP AFX_EVENTSINKMAP, *PAFX_EVENTSINKMAP;

struct AFX_EVENTSINKMAP { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCustomEdit - /ClassDataTypes/CCustomEdit/CCustomEdit

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { // PlaceHolder Structure
};

typedef struct AFX_CONNECTIONMAP AFX_CONNECTIONMAP, *PAFX_CONNECTIONMAP;

struct AFX_CONNECTIONMAP { // PlaceHolder Structure
};

typedef struct CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*> CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>, *PCMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>;

struct CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*> { // PlaceHolder Structure
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

typedef struct tagCOMPAREITEMSTRUCT tagCOMPAREITEMSTRUCT, *PtagCOMPAREITEMSTRUCT;

struct tagCOMPAREITEMSTRUCT { // PlaceHolder Structure
};

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

struct tagVARIANT { // PlaceHolder Structure
};

typedef struct IConnectionPoint IConnectionPoint, *PIConnectionPoint;

struct IConnectionPoint { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CEndingPopupDlg - /ClassDataTypes/CEndingPopupDlg/CEndingPopupDlg

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGuildInfoCtrl - /ClassDataTypes/CGuildInfoCtrl/CGuildInfoCtrl

typedef struct CParam CParam, *PCParam;

struct CParam { // PlaceHolder Structure
};

typedef struct CPNDcurve CPNDcurve, *PCPNDcurve;

struct CPNDcurve { // PlaceHolder Structure
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
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


// WARNING! conflicting data type names: /Demangler/CCustomRadioButton - /ClassDataTypes/CCustomRadioButton/CCustomRadioButton

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinApp { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CListCtrl - /ClassDataTypes/CListCtrl/CListCtrl


// WARNING! conflicting data type names: /Demangler/CAnimatedStatic - /ClassDataTypes/CAnimatedStatic/CAnimatedStatic

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CPen - /ClassDataTypes/CPen/CPen

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { // PlaceHolder Structure
};

typedef enum NThread_State {
} NThread_State;

typedef struct CRoomDataList CRoomDataList, *PCRoomDataList;

struct CRoomDataList { // PlaceHolder Structure
};

typedef struct CHgObjectFactory CHgObjectFactory, *PCHgObjectFactory;

struct CHgObjectFactory { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CBrush - /ClassDataTypes/CBrush/CBrush

typedef struct CRect CRect, *PCRect;

struct CRect { // PlaceHolder Structure
};

typedef struct tagDRAWITEMSTRUCT tagDRAWITEMSTRUCT, *PtagDRAWITEMSTRUCT;

struct tagDRAWITEMSTRUCT { // PlaceHolder Structure
};

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};

typedef struct CMemberDataList CMemberDataList, *PCMemberDataList;

struct CMemberDataList { // PlaceHolder Structure
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFont - /ClassDataTypes/CFont/CFont

typedef struct tagMSG tagMSG, *PtagMSG;

struct tagMSG { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCmdTarget - /ClassDataTypes/CCmdTarget/CCmdTarget

typedef struct EncodeLongLong EncodeLongLong, *PEncodeLongLong;

struct EncodeLongLong { // PlaceHolder Structure
};

typedef struct CEncodeToWeb CEncodeToWeb, *PCEncodeToWeb;

struct CEncodeToWeb { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CDialogRoot - /ClassDataTypes/CDialogRoot/CDialogRoot


// WARNING! conflicting data type names: /Demangler/CProgressCtrl - /ClassDataTypes/CProgressCtrl/CProgressCtrl

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CButton - /ClassDataTypes/CButton/CButton

typedef struct IParam IParam, *PIParam;

struct IParam { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCustomProgress - /ClassDataTypes/CCustomProgress/CCustomProgress


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


// WARNING! conflicting data type names: /Demangler/CWaitingMemberListCtrl - /ClassDataTypes/CWaitingMemberListCtrl/CWaitingMemberListCtrl

typedef struct CHgGDImageInPool CHgGDImageInPool, *PCHgGDImageInPool;

struct CHgGDImageInPool { // PlaceHolder Structure
};

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { // PlaceHolder Structure
};

typedef struct CAlarmData CAlarmData, *PCAlarmData;

struct CAlarmData { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCustomCheckBox - /ClassDataTypes/CCustomCheckBox/CCustomCheckBox

typedef struct CClientDC CClientDC, *PCClientDC;

struct CClientDC { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CScrollSupportCtrl - /ClassDataTypes/CScrollSupportCtrl/CScrollSupportCtrl


// WARNING! conflicting data type names: /Demangler/CCustomComboBox - /ClassDataTypes/CCustomComboBox/CCustomComboBox

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/IFunctor - /ClassDataTypes/IFunctor/IFunctor

typedef struct AFX_OLECMDMAP AFX_OLECMDMAP, *PAFX_OLECMDMAP;

struct AFX_OLECMDMAP { // PlaceHolder Structure
};

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};

typedef struct tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*> tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>, *PtMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>;

struct tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*> { // PlaceHolder Structure
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


// WARNING! conflicting data type names: /Demangler/CWnd - /ClassDataTypes/CWnd/CWnd

typedef struct CMetpParserRet CMetpParserRet, *PCMetpParserRet;

struct CMetpParserRet { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CLineDrawer - /ClassDataTypes/CLineDrawer/CLineDrawer

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

typedef struct CAppRunningState CAppRunningState, *PCAppRunningState;

struct CAppRunningState { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CComboBox - /ClassDataTypes/CComboBox/CComboBox


// WARNING! conflicting data type names: /Demangler/CBitmap - /ClassDataTypes/CBitmap/CBitmap


// WARNING! conflicting data type names: /Demangler/CHtmlCtrl - /ClassDataTypes/CHtmlCtrl/CHtmlCtrl

typedef struct CFontChanger CFontChanger, *PCFontChanger;

struct CFontChanger { // PlaceHolder Structure
};

typedef struct CHgGDImagePool CHgGDImagePool, *PCHgGDImagePool;

struct CHgGDImagePool { // PlaceHolder Structure
};

typedef struct CHgGDImage CHgGDImage, *PCHgGDImage;

struct CHgGDImage { // PlaceHolder Structure
};

typedef struct CControlList CControlList, *PCControlList;

struct CControlList { // PlaceHolder Structure
};

typedef struct CStringArray CStringArray, *PCStringArray;

struct CStringArray { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CRectDrawer - /ClassDataTypes/CRectDrawer/CRectDrawer

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ { // PlaceHolder Structure
};

typedef struct MessageLog MessageLog, *PMessageLog;

struct MessageLog { // PlaceHolder Structure
};

typedef enum NThread_Location {
} NThread_Location;

typedef struct CRoomData CRoomData, *PCRoomData;

struct CRoomData { // PlaceHolder Structure
};

typedef struct CFontId CFontId, *PCFontId;

struct CFontId { // PlaceHolder Structure
};

typedef struct CAvtrId CAvtrId, *PCAvtrId;

struct CAvtrId { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CDialogRoot/CDefaultSkin - /ClassDataTypes/CDialogRoot/CDefaultSkin/CDefaultSkin

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

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CDialogRoot*>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CDialogRoot*>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CDialogRoot*>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CDialogRoot*>_>_> { // PlaceHolder Structure
};

typedef struct vector<CChannelData*,std::allocator<CChannelData*>_> vector<CChannelData*,std::allocator<CChannelData*>_>, *Pvector<CChannelData*,std::allocator<CChannelData*>_>;

struct vector<CChannelData*,std::allocator<CChannelData*>_> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;




undefined4 FUN_60401000(undefined4 param_1,int param_2);
void __thiscall CAccuseConfirmDlg::CAccuseConfirmDlg::AfterShowIt(CAccuseConfirmDlg *this,CParam *param_1);
tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>* __thiscall tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::operator=(tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this,tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>*param_1);
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> *__thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this,CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>*param_1);
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> *__thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this);
CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>* __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::operator=(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this,CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CDialogRoot*>*param_1);
CDialogList * __thiscall CDialogList::CDialogList(CDialogList *this);
CDialogList * __thiscall CDialogList::CDialogList(CDialogList *this,CDialogList *param_1);
CDialogList * __thiscall CDialogList::scalar_deleting_destructor(CDialogList *this,byte param_1);
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*> *__thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::scalar_deleting_destructor(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this,byte param_1);
void FUN_604011f0(undefined4 *param_1);
undefined4 FUN_60401240(HINSTANCE__ *param_1,int param_2);
void __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::~CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this);
void __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::Clear(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this);
bool __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::Add(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
CDialogRoot * __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::Get(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CDialogRoot*>_>_>* __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::Map(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this);
bool __thiscall CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>::QueryKey(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CDialogRoot*>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
int * FUN_604015a0(int *param_1);
void Catch_All@60401631(void);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
void FUN_60401660(void);
int * FUN_60401670(int *param_1);
void FUN_604016f0(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_60401810(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
int * FUN_604018f0(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_60401970(void);
void FUN_604019e0(void);
undefined4 * FUN_60401a20(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
undefined4 * __thiscall FUN_60401d10(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@60401daa(void);
void FUN_60401dc0(int *param_1);
void __thiscall FUN_60401e00(void *this,undefined4 *param_1,char param_2,void *param_3);
void FUN_60402040(void);
void FUN_60402060(void);
undefined4 * FUN_604020a0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_604020f0(void *this,int param_1);
void __thiscall FUN_60402140(void *this,int param_1);
undefined4 * __thiscall FUN_60402190(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void Catch_All@6040221a(void);
void FUN_60402230(void);
undefined4 __cdecl FUN_604022c0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int *param_5,int param_6);
undefined4 FUN_60402350(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void FUN_60402410(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void FUN_60402490(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
void FUN_60402570(exception *param_1);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,byte param_1);
void FUN_604025c0(exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
int __thiscall std::logic_error::vfunction2(logic_error *this);
void FUN_604026c0(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
void FUN_60402700(exception *param_1);
void FUN_60402720(void);
CPNDcurve * __thiscall CPNDcurve::operator=(CPNDcurve *this,CPNDcurve *param_1);
CAccuseConfirmDlg * __thiscall CAccuseConfirmDlg::scalar_deleting_destructor(CAccuseConfirmDlg *this,byte param_1);
AFX_MSGMAP * __thiscall CAccuseConfirmDlg::CAccuseConfirmDlg::GetMessageMap(CAccuseConfirmDlg *this);
CBmpButton * __thiscall CBmpButton::CBmpButton(CBmpButton *this);
CBmpButton * __thiscall CBmpButton::scalar_deleting_destructor(CBmpButton *this,byte param_1);
CCustomStatic * __thiscall CCustomStatic::scalar_deleting_destructor(CCustomStatic *this,byte param_1);
void __thiscall CAccuseConfirmDlg::~CAccuseConfirmDlg(CAccuseConfirmDlg *this);
bool __thiscall CAccuseConfirmDlg::CAccuseConfirmDlg::CreateControl(CAccuseConfirmDlg *this,IParam *param_1);
void __thiscall CAccuseConfirmDlg::OnCommand_1(CAccuseConfirmDlg *this);
void __thiscall CItemWebDialog::CItemWebDialog::DownloadComplete_HtmlCtrl(CItemWebDialog *this);
void __thiscall CAccuseConfirmDlg::OnCommand_310(CAccuseConfirmDlg *this);
void __thiscall CCustomStatic::vfunction1(CCustomStatic *this,byte param_1);
void __thiscall CAccuseConfirmDlg::vfunction1(CAccuseConfirmDlg *this,byte param_1);
void __thiscall CBmpButton::vfunction1(CBmpButton *this,byte param_1);
void __thiscall CDialogRoot::vfunction82(CDialogRoot *this,ushort param_1,CWnd *param_2);
void __thiscall CScrollSupportCtrl::vfunction68(CScrollSupportCtrl *this);
void __thiscall CScrollSupportCtrl::vfunction67(CScrollSupportCtrl *this);
CAccuseUserDlg * __thiscall CAccuseUserDlg::scalar_deleting_destructor(CAccuseUserDlg *this,byte param_1);
undefined4 * FUN_60402f00(undefined4 *param_1,undefined4 param_2);
void FUN_60402f70(int param_1);
void __thiscall FUN_604030b0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,uint param_4,char param_5);
void FUN_60403200(void);
void FUN_604032c0(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_60403360(int *param_1);
void __fastcall FUN_60403510(int param_1,char *param_2,int param_3);
AFX_MSGMAP * __thiscall CAccuseUserDlg::CAccuseUserDlg::GetMessageMap(CAccuseUserDlg *this);
CCustomEdit * __thiscall CCustomEdit::CCustomEdit(CCustomEdit *this);
CScrollSupportCtrl * __thiscall CScrollSupportCtrl::scalar_deleting_destructor(CScrollSupportCtrl *this,byte param_1);
CListCtrlEx * __thiscall CListCtrlEx::scalar_deleting_destructor(CListCtrlEx *this,byte param_1);
CCustomEdit * __thiscall CCustomEdit::scalar_deleting_destructor(CCustomEdit *this,byte param_1);
void __thiscall CAccuseUserDlg::~CAccuseUserDlg(CAccuseUserDlg *this);
void __thiscall CAccuseUserDlg::CAccuseUserDlg::InitDialogData(CAccuseUserDlg *this,CParam *param_1);
bool __thiscall CAccuseUserDlg::CAccuseUserDlg::CreateControl(CAccuseUserDlg *this,IParam *param_1);
void __thiscall CAccuseUserDlg::CAccuseUserDlg::UpdateControl(CAccuseUserDlg *this,IParam *param_1);
void __thiscall CAccuseUserDlg::OnCommand_2(CAccuseUserDlg *this);
void __thiscall CAccuseUserDlg::OnCommand_1(CAccuseUserDlg *this);
void __thiscall CAccuseUserDlg::OnCommand_315(CAccuseUserDlg *this);
void __thiscall CAccuseUserDlg::OnCommand_302(CAccuseUserDlg *this);
void __thiscall CAccuseUserDlg::OnCommand_305(CAccuseUserDlg *this);
void __thiscall CAccuseUserDlg::CAccuseUserDlg::Draw(CAccuseUserDlg *this,CDC *param_1);
bool __thiscall CAccuseUserDlg::CAccuseUserDlg::OnInitControl(CAccuseUserDlg *this);
int * FUN_60404680(int *param_1);
void FUN_604046e0(void);
void FUN_60404710(void);
void FUN_60404740(void);
void FUN_60404770(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined4 * __fastcall FUN_60404830(undefined4 param_1,undefined4 *param_2);
void FUN_60404860(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void __thiscall std::length_error::length_error(length_error *this);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
undefined4 __thiscall FUN_60404b10(void *this,undefined4 param_1);
void Catch@60404bab(void);
void * __fastcall FUN_60404bd0(undefined4 param_1,void *param_2);
void FUN_60404c00(exception *param_1);
void __thiscall CAccuseUserDlg::vfunction1(CAccuseUserDlg *this,byte param_1);
void __thiscall CCustomEdit::vfunction1(CCustomEdit *this,byte param_1);
void __thiscall CScrollSupportCtrl::vfunction1(CScrollSupportCtrl *this,byte param_1);
void __thiscall CListCtrlEx::vfunction1(CListCtrlEx *this,byte param_1);
CAlarm2Dialog * __thiscall CAlarm2Dialog::scalar_deleting_destructor(CAlarm2Dialog *this,byte param_1);
undefined4 __cdecl FUN_60404cc0(int *param_1);
AFX_MSGMAP * __thiscall CAlarm2Dialog::CAlarm2Dialog::GetMessageMap(CAlarm2Dialog *this);
CBmpButton * __thiscall CBmpButton::CBmpButton(CBmpButton *this);
CCustomRadioButton * __thiscall CCustomRadioButton::scalar_deleting_destructor(CCustomRadioButton *this,byte param_1);
void __thiscall CAlarm2Dialog::~CAlarm2Dialog(CAlarm2Dialog *this);
bool __thiscall CAlarm2Dialog::CAlarm2Dialog::CreateControl(CAlarm2Dialog *this,IParam *param_1);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::InitDialogData(CAlarm2Dialog *this,CParam *param_1);
int __thiscall CAlarm2Dialog::CAlarm2Dialog::ShowModaless(CAlarm2Dialog *this,bool param_1);
int __thiscall CAlarm2Dialog::CAlarm2Dialog::DoModal(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::SetNormalMode(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::SetUPPMode(CAlarm2Dialog *this);
int __thiscall CAlarm2Dialog::SetAlarmTimeBG(CAlarm2Dialog *this,int param_1);
int __thiscall CAlarm2Dialog::SetExitTypeBG(CAlarm2Dialog *this,int param_1);
int __thiscall CAlarm2Dialog::SetExitTime(CAlarm2Dialog *this,int param_1);
void __thiscall CAlarm2Dialog::OnCommand_1(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::OnCommand_3018(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::OnCommand_3006(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::OnCommand_3011(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::OnCommand_3016(CAlarm2Dialog *this);
void __thiscall CAlarm2Dialog::OnCommand_3017(CAlarm2Dialog *this);
void __thiscall CCustomRadioButton::vfunction1(CCustomRadioButton *this,byte param_1);
void __thiscall CAlarm2Dialog::vfunction1(CAlarm2Dialog *this,byte param_1);
CChannelRoomCreateDialog * __thiscall CChannelRoomCreateDialog::scalar_deleting_destructor(CChannelRoomCreateDialog *this,byte param_1);
CRuntimeClass * __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::GetRuntimeClass(CChannelRoomCreateDialog *this);
AFX_MSGMAP * __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::GetMessageMap(CChannelRoomCreateDialog *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this);
CCustomComboBox * __thiscall CCustomComboBox::scalar_deleting_destructor(CCustomComboBox *this,byte param_1);
CCustomCheckBox * __thiscall CCustomCheckBox::scalar_deleting_destructor(CCustomCheckBox *this,byte param_1);
CRectDrawer * __thiscall CRectDrawer::scalar_deleting_destructor(CRectDrawer *this,byte param_1);
void __thiscall CChannelRoomCreateDialog::~CChannelRoomCreateDialog(CChannelRoomCreateDialog *this);
bool __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::CreateControl(CChannelRoomCreateDialog *this,IParam *param_1);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::UpdateControl(CChannelRoomCreateDialog *this,IParam *param_1);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::InitDialogData(CChannelRoomCreateDialog *this,CParam *param_1);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::AfterShowIt(CChannelRoomCreateDialog *this,CParam *param_1);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::Draw(CChannelRoomCreateDialog *this,CDC *param_1);
bool __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::OnInitControl(CChannelRoomCreateDialog *this);
void __thiscall CChannelRoomCreateDialog::CChannelRoomCreateDialog::OnOK(CChannelRoomCreateDialog *this);
void __thiscall CChannelRoomCreateDialog::OnClickPrivateRoomBtn(CChannelRoomCreateDialog *this);
void __thiscall CChannelRoomCreateDialog::vfunction1(CChannelRoomCreateDialog *this,byte param_1);
void __thiscall CCustomCheckBox::vfunction1(CCustomCheckBox *this,byte param_1);
void __thiscall CCustomComboBox::vfunction1(CCustomComboBox *this,byte param_1);
CRuntimeClass * __thiscall CDialogRoot::CDialogRoot::GetRuntimeClass(CDialogRoot *this);
undefined ** __thiscall CChannelRoomPasswordDialog::vfunction1(CChannelRoomPasswordDialog *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this);
CDialogRoot * __thiscall CChannelRoomPasswordDialog::scalar_deleting_destructor(CChannelRoomPasswordDialog *this,byte param_1);
void __thiscall CChannelRoomPasswordDialog::~CChannelRoomPasswordDialog(CChannelRoomPasswordDialog *this);
void __thiscall CChannelRoomPasswordDialog::vfunction2(CChannelRoomPasswordDialog *this);
void __thiscall CChannelRoomPasswordDialog::vfunction92(CChannelRoomPasswordDialog *this);
void __thiscall CChannelRoomPasswordDialog::vfunction95(CChannelRoomPasswordDialog *this,int *param_1);
undefined4 __thiscall CChannelRoomPasswordDialog::vfunction98(CChannelRoomPasswordDialog *this);
void __thiscall CChannelRoomPasswordDialog::vfunction89(CChannelRoomPasswordDialog *this);
void __thiscall CChannelRoomPasswordDialog::vfunction96(CChannelRoomPasswordDialog *this,int *param_1);
void __thiscall CChannelRoomPasswordDialog::vfunction1(CChannelRoomPasswordDialog *this,byte param_1);
CDialogRoot * __thiscall CDialogRoot::scalar_deleting_destructor(CDialogRoot *this,byte param_1);
void __cdecl CDialogRoot::InitDefaultSkin(void);
CRuntimeClass * CDialogRoot::_GetBaseClass(void);
CCustomStatic * __thiscall CCustomStatic::CCustomStatic(CCustomStatic *this);
void __thiscall CDialogRoot::~CDialogRoot(CDialogRoot *this);
AFX_MSGMAP * __thiscall CDialogRoot::CDialogRoot::GetMessageMap(CDialogRoot *this);
int __thiscall CDialogRoot::CDialogRoot::OnInitDialog(CDialogRoot *this);
bool __thiscall CDialogRoot::Create(CDialogRoot *this,char *param_1,tagRECT *param_2);
void __thiscall CDialogRoot::CDialogRoot::UpdateControl(CDialogRoot *this,IParam *param_1);
void __thiscall CDialogRoot::CDialogRoot::ShowControl(CDialogRoot *this,bool param_1);
int __thiscall CDialogRoot::CDialogRoot::ShowModaless(CDialogRoot *this,bool param_1);
int __thiscall CDialogRoot::CDialogRoot::DoModal(CDialogRoot *this);
int __thiscall CDialogRoot::EndDialog(CDialogRoot *this,int param_1);
bool __thiscall CDialogRoot::IsModal(CDialogRoot *this);
void __thiscall CDialogRoot::GetCtlRect(CDialogRoot *this,CRect *param_1,uint param_2,CRect *param_3);
long __thiscall CDialogRoot::OnNcHitTest(void);
void __thiscall CDialogRoot::SkinOn(CDialogRoot *this);
bool __thiscall CDialogRoot::IsSkinOn(CDialogRoot *this);
void __thiscall CDialogRoot::RemoveWindowStyle(CDialogRoot *this);
void __thiscall CShutdownExitDialog::CShutdownExitDialog::OnBtnClose(CShutdownExitDialog *this);
long __thiscall CDialogRoot::CDialogRoot::WindowProc(CDialogRoot *this,uint param_1,uint param_2,long param_3);
int __thiscall CDialogRoot::OnEraseBkgnd(CDialogRoot *this,CDC *param_1);
void __thiscall CDialogRoot::OnPaint(CDialogRoot *this);
void __thiscall CDialogRoot::OnShowWindow(CDialogRoot *this,int param_1,uint param_2);
void __thiscall CDialogRoot::FitIntoScreen(CDialogRoot *this,HWND__ *param_1);
void __thiscall CDialogRoot::DrawAniRect(CDialogRoot *this,tagRECT param_1,bool param_2);
CDefaultSkin * __thiscall CDialogRoot::CDefaultSkin::CDefaultSkin(CDefaultSkin *this);
CControlBase * __thiscall CDialogRoot::CDefaultSkin::scalar_deleting_destructor(CDefaultSkin *this,byte param_1);
void __thiscall CDialogRoot::CDefaultSkin::~CDefaultSkin(CDefaultSkin *this);
void __thiscall CDialogRoot::CDefaultSkin::vfunction6(CDefaultSkin *this,IParam *param_1);
long __thiscall CDialogRoot::OnKickIdle(CDialogRoot *this,uint param_1,long param_2);
long __thiscall CDialogRoot::OnContextMenu(CDialogRoot *this,uint param_1,long param_2);
long __thiscall CDialogRoot::OnExitSizeMove(CDialogRoot *this,uint param_1,long param_2);
void __thiscall CDialogRoot::vfunction1(CDialogRoot *this,byte param_1);
CEndingPopupDlg * __thiscall CEndingPopupDlg::scalar_deleting_destructor(CEndingPopupDlg *this,byte param_1);
CRuntimeClass * __thiscall CEndingPopupDlg::CEndingPopupDlg::GetRuntimeClass(CEndingPopupDlg *this);
AFX_MSGMAP * __thiscall CEndingPopupDlg::CEndingPopupDlg::GetMessageMap(CEndingPopupDlg *this);
CAnimatedStatic * __thiscall CAnimatedStatic::CAnimatedStatic(CAnimatedStatic *this);
CAnimatedStatic * __thiscall CAnimatedStatic::scalar_deleting_destructor(CAnimatedStatic *this,byte param_1);
void __thiscall CEndingPopupDlg::~CEndingPopupDlg(CEndingPopupDlg *this);
bool __thiscall CEndingPopupDlg::CEndingPopupDlg::CreateControl(CEndingPopupDlg *this,IParam *param_1);
void __thiscall CEndingPopupDlg::CEndingPopupDlg::UpdateControl(CEndingPopupDlg *this,IParam *param_1);
void __thiscall CEndingPopupDlg::CEndingPopupDlg::InitDialogData(CEndingPopupDlg *this,CParam *param_1);
void __thiscall CEndingPopupDlg::CEndingPopupDlg::Draw(CEndingPopupDlg *this,CDC *param_1);
void __thiscall CEndingPopupDlg::OnCommand_102(CEndingPopupDlg *this);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __thiscall FUN_60409910(void *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,undefined4 *param_2);
void __thiscall CEndingPopupDlg::vfunction1(CEndingPopupDlg *this,byte param_1);
void __thiscall CAnimatedStatic::vfunction1(CAnimatedStatic *this,byte param_1);
CEndingPopupDlg2 * __thiscall CEndingPopupDlg2::scalar_deleting_destructor(CEndingPopupDlg2 *this,byte param_1);
CRuntimeClass * __thiscall CEndingPopupDlg2::CEndingPopupDlg2::GetRuntimeClass(CEndingPopupDlg2 *this);
AFX_MSGMAP * __thiscall CEndingPopupDlg2::CEndingPopupDlg2::GetMessageMap(CEndingPopupDlg2 *this);
CBmpButton * __thiscall CBmpButton::CBmpButton(CBmpButton *this);
void __thiscall CEndingPopupDlg2::~CEndingPopupDlg2(CEndingPopupDlg2 *this);
void __thiscall CEndingPopupDlg2::CEndingPopupDlg2::DestroyHtmlControl(CEndingPopupDlg2 *this);
bool __thiscall CEndingPopupDlg2::CEndingPopupDlg2::CreateHtmlControl(CEndingPopupDlg2 *this);
CHtmlCtrl * __thiscall CHtmlCtrl::scalar_deleting_destructor(CHtmlCtrl *this,byte param_1);
bool __thiscall CEndingPopupDlg2::CEndingPopupDlg2::OnInitControl(CEndingPopupDlg2 *this);
void __thiscall CEndingPopupDlg2::CEndingPopupDlg2::InitDialogData(CEndingPopupDlg2 *this,CParam *param_1);
bool __thiscall CEndingPopupDlg2::CEndingPopupDlg2::CreateControl(CEndingPopupDlg2 *this,IParam *param_1);
void __thiscall CEndingPopupDlg2::OnCommand_1(CEndingPopupDlg2 *this);
void __thiscall CEndingPopupDlg2::OnCommand_2(CEndingPopupDlg2 *this);
void __thiscall CEndingPopupDlg2::vfunction1(CEndingPopupDlg2 *this,byte param_1);
undefined ** __thiscall CFindFriendSuccessDlg::vfunction13(CFindFriendSuccessDlg *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this);
CDialogRoot * __thiscall CFindFriendSuccessDlg::scalar_deleting_destructor(CFindFriendSuccessDlg *this,byte param_1);
void __thiscall CFindFriendSuccessDlg::~CFindFriendSuccessDlg(CFindFriendSuccessDlg *this);
void __thiscall CFindFriendSuccessDlg::vfunction92(CFindFriendSuccessDlg *this,int *param_1);
void __thiscall CFindFriendSuccessDlg::vfunction2(CFindFriendSuccessDlg *this);
void __thiscall CFindFriendSuccessDlg::vfunction6(CFindFriendSuccessDlg *this,IParam *param_1);
void __thiscall CFindFriendSuccessDlg::vfunction96(CFindFriendSuccessDlg *this,int *param_1);
void __fastcall OnCommand_1(int *param_1);
undefined ** __thiscall CFindFriendFailDlg::vfunction13(CFindFriendFailDlg *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this);
CDialogRoot * __thiscall CFindFriendFailDlg::scalar_deleting_destructor(CFindFriendFailDlg *this,byte param_1);
void __thiscall CFindFriendFailDlg::~CFindFriendFailDlg(CFindFriendFailDlg *this);
void __thiscall CFindFriendFailDlg::vfunction92(CFindFriendFailDlg *this,int *param_1);
void __thiscall CFindFriendFailDlg::vfunction2(CFindFriendFailDlg *this);
void __thiscall CFindFriendFailDlg::vfunction6(CFindFriendFailDlg *this,IParam *param_1);
void __thiscall CFindFriendFailDlg::vfunction96(CFindFriendFailDlg *this,int *param_1);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::OnBtnCancel(CAlarm2Dialog *this);
void __thiscall CFindFriendSuccessDlg::vfunction1(CFindFriendSuccessDlg *this,byte param_1);
void __thiscall CFindFriendFailDlg::vfunction1(CFindFriendFailDlg *this,byte param_1);
undefined ** __thiscall CInviteChnlToWebDlg::vfunction1(CInviteChnlToWebDlg *this);
undefined ** __thiscall CInviteChnlToWebDlg::vfunction13(CInviteChnlToWebDlg *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this);
CDialogRoot * __thiscall CInviteChnlToWebDlg::scalar_deleting_destructor(CInviteChnlToWebDlg *this,byte param_1);
void __thiscall CInviteChnlToWebDlg::~CInviteChnlToWebDlg(CInviteChnlToWebDlg *this);
void __thiscall CInviteChnlToWebDlg::vfunction2(CInviteChnlToWebDlg *this);
void __thiscall CInviteChnlToWebDlg::vfunction6(CInviteChnlToWebDlg *this,IParam *param_1);
void __thiscall CInviteChnlToWebDlg::vfunction92(CInviteChnlToWebDlg *this);
void __thiscall CInviteChnlToWebDlg::vfunction96(CInviteChnlToWebDlg *this,int *param_1);
void __fastcall FUN_6040c0a0(int *param_1);
void __thiscall CInviteChnlToWebDlg::vfunction1(CInviteChnlToWebDlg *this,byte param_1);
undefined ** __thiscall CInviteGameToChnlDlg::vfunction1(CInviteGameToChnlDlg *this);
undefined ** __thiscall CInviteGameToChnlDlg::vfunction13(CInviteGameToChnlDlg *this);
CMFunctor<CInviteGameToChnlDlg> * __thiscall CMFunctor<CInviteGameToChnlDlg>::CMFunctor<CInviteGameToChnlDlg>(CMFunctor<CInviteGameToChnlDlg> *this);
CDialogRoot * __thiscall CInviteGameToChnlDlg::scalar_deleting_destructor(CInviteGameToChnlDlg *this,byte param_1);
CWaitingMemberListCtrl * __thiscall CWaitingMemberListCtrl::scalar_deleting_destructor(CWaitingMemberListCtrl *this,byte param_1);
void __thiscall CInviteGameToChnlDlg::~CInviteGameToChnlDlg(CInviteGameToChnlDlg *this);
void __thiscall CInviteGameToChnlDlg::vfunction2(CInviteGameToChnlDlg *this);
void __thiscall CChannelRoomPasswordDialog::vfunction6(CChannelRoomPasswordDialog *this,IParam *param_1);
void __thiscall CInviteGameToChnlDlg::vfunction92(CInviteGameToChnlDlg *this,int *param_1);
void __thiscall CInviteGameToChnlDlg::vfunction96(CInviteGameToChnlDlg *this,int *param_1);
void __fastcall FUN_6040cb10(int *param_1);
undefined4 __thiscall FUN_6040ce40(void *this,int *param_1);
void FUN_6040d000(void);
void __thiscall CMFunctor<CInviteGameToChnlDlg>::scalar_deleting_destructor(CMFunctor<CInviteGameToChnlDlg> *this);
void __thiscall CInviteGameToChnlDlg::vfunction1(CInviteGameToChnlDlg *this,byte param_1);
void __thiscall CWaitingMemberListCtrl::vfunction1(CWaitingMemberListCtrl *this,byte param_1);
CInviteResponseDialog * __thiscall CInviteResponseDialog::scalar_deleting_destructor(CInviteResponseDialog *this,byte param_1);
CRuntimeClass * __thiscall CInviteResponseDialog::CInviteResponseDialog::GetRuntimeClass(CInviteResponseDialog *this);
AFX_MSGMAP * __thiscall CInviteResponseDialog::CInviteResponseDialog::GetMessageMap(CInviteResponseDialog *this);
CLineDrawer * __thiscall CLineDrawer::CLineDrawer(CLineDrawer *this);
CCustomProgress * __thiscall CCustomProgress::scalar_deleting_destructor(CCustomProgress *this,byte param_1);
CLineDrawer * __thiscall CLineDrawer::scalar_deleting_destructor(CLineDrawer *this,byte param_1);
void __thiscall CInviteResponseDialog::~CInviteResponseDialog(CInviteResponseDialog *this);
bool __thiscall CInviteResponseDialog::CInviteResponseDialog::CreateControl(CInviteResponseDialog *this,IParam *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::UpdateControl(CInviteResponseDialog *this,IParam *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::InitDialogData(CInviteResponseDialog *this,CParam *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::AfterShowIt(CInviteResponseDialog *this,CParam *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::Draw(CInviteResponseDialog *this,CDC *param_1);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::OnOK(CInviteResponseDialog *this);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::OnCancel(CInviteResponseDialog *this);
void __thiscall CInviteResponseDialog::OnCommand_100(CInviteResponseDialog *this);
void __thiscall CInviteResponseDialog::OnCommand_101(CInviteResponseDialog *this);
void __thiscall CInviteResponseDialog::OnTimer(CInviteResponseDialog *this,uint param_1);
void __thiscall CInviteResponseDialog::ClearAvatar(CInviteResponseDialog *this);
void __thiscall CInviteResponseDialog::CInviteResponseDialog::StopReceiveResponse(CInviteResponseDialog *this,IParam *param_1);
void __thiscall CCustomProgress::vfunction1(CCustomProgress *this,byte param_1);
void __thiscall CInviteResponseDialog::vfunction1(CInviteResponseDialog *this,byte param_1);
undefined ** __thiscall CInviteWaitingDialog::vfunction1(CInviteWaitingDialog *this);
undefined ** __thiscall CInviteWaitingDialog::vfunction13(CInviteWaitingDialog *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this);
CDialogRoot * __thiscall CInviteWaitingDialog::scalar_deleting_destructor(CInviteWaitingDialog *this,byte param_1);
void __thiscall CInviteWaitingDialog::~CInviteWaitingDialog(CInviteWaitingDialog *this);
void __thiscall CInviteWaitingDialog::vfunction2(CInviteWaitingDialog *this);
void __thiscall CAccuseConfirmDlg::CAccuseConfirmDlg::UpdateControl(CAccuseConfirmDlg *this,IParam *param_1);
void __thiscall CInviteWaitingDialog::vfunction92(CInviteWaitingDialog *this);
void __thiscall CInviteWaitingDialog::vfunction90(CInviteWaitingDialog *this);
void __thiscall CInviteWaitingDialog::vfunction96(CInviteWaitingDialog *this,int *param_1);
void __thiscall CInviteWaitingDialog::vfunction1(CInviteWaitingDialog *this,byte param_1);
CItemWebDialog * __thiscall CItemWebDialog::scalar_deleting_destructor(CItemWebDialog *this,byte param_1);
CRuntimeClass * __thiscall CItemWebDialog::CItemWebDialog::GetRuntimeClass(CItemWebDialog *this);
AFX_MSGMAP * __thiscall CItemWebDialog::CItemWebDialog::GetMessageMap(CItemWebDialog *this);
AFX_EVENTSINKMAP * __thiscall CItemWebDialog::CItemWebDialog::GetEventSinkMap(CItemWebDialog *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this);
void __thiscall CItemWebDialog::OnCommand_102(CItemWebDialog *this);
void __thiscall CItemWebDialog::~CItemWebDialog(CItemWebDialog *this);
bool __thiscall CItemWebDialog::CItemWebDialog::OnInitControl(CItemWebDialog *this);
void __thiscall CItemWebDialog::CItemWebDialog::InitDialogData(CItemWebDialog *this,CParam *param_1);
bool __thiscall CItemWebDialog::CItemWebDialog::CreateControl(CItemWebDialog *this,IParam *param_1);
void __thiscall CAlarm2Dialog::CAlarm2Dialog::UpdateControl(CAlarm2Dialog *this,IParam *param_1);
void __thiscall CEndingPopupDlg2::OnDestroy(CEndingPopupDlg2 *this);
int __thiscall CEndingPopupDlg2::OnCreate(CEndingPopupDlg2 *this,tagCREATESTRUCTA *param_1);
long __thiscall CItemWebDialog::OnSizeHtmlCtrl(CItemWebDialog *this,uint param_1,long param_2);
void __thiscall CItemWebDialog::ResizeWindowFrom(CItemWebDialog *this,int param_1,int param_2);
void __thiscall CItemWebDialog::DocumentComplete_HtmlCtrl(CItemWebDialog *this,IDispatch *param_1,tagVARIANT *param_2);
void __thiscall CItemWebDialog::vfunction1(CItemWebDialog *this,byte param_1);
CMemberInfoDialog * __thiscall CMemberInfoDialog::scalar_deleting_destructor(CMemberInfoDialog *this,byte param_1);
CRuntimeClass * __thiscall CMemberInfoDialog::CMemberInfoDialog::GetRuntimeClass(CMemberInfoDialog *this);
AFX_MSGMAP * __thiscall CMemberInfoDialog::CMemberInfoDialog::GetMessageMap(CMemberInfoDialog *this);
CMemberInfoDialog * __cdecl CreateMemberInfoDialog(void);
CMFunctor<CMemberInfoDialog> * __thiscall CMFunctor<CMemberInfoDialog>::CMFunctor<CMemberInfoDialog>(CMFunctor<CMemberInfoDialog> *this);
CGuildInfoCtrl * __thiscall CGuildInfoCtrl::scalar_deleting_destructor(CGuildInfoCtrl *this,byte param_1);
void __thiscall CMemberInfoDialog::~CMemberInfoDialog(CMemberInfoDialog *this);
bool __thiscall CMemberInfoDialog::CMemberInfoDialog::CreateControl(CMemberInfoDialog *this,IParam *param_1);
void __thiscall CMemberInfoDialog::CMemberInfoDialog::UpdateControl(CMemberInfoDialog *this,IParam *param_1);
void __thiscall CMemberInfoDialog::CMemberInfoDialog::InitDialogData(CMemberInfoDialog *this,CParam *param_1);
void __thiscall CMemberInfoDialog::CMemberInfoDialog::Draw(CMemberInfoDialog *this,CDC *param_1);
void __thiscall CMemberInfoDialog::OnTimer(CMemberInfoDialog *this,uint param_1);
void __thiscall CMemberInfoDialog::OnChangedAvatarCombo(CMemberInfoDialog *this);
int __thiscall CMemberInfoDialog::Evt_Channel_OnAvatarChange(CMemberInfoDialog *this,IParam *param_1);
void __thiscall CMemberInfoDialog::UpdateAvatar(CMemberInfoDialog *this,char *param_1);
void __thiscall CMemberInfoDialog::CMemberInfoDialog::OnOK(CMemberInfoDialog *this);
void __thiscall CMemberInfoDialog::CMemberInfoDialog::OnCancel(CMemberInfoDialog *this);
void __thiscall CMemberInfoDialog::OnCommand_104(CMemberInfoDialog *this);
void __thiscall CMemberInfoDialog::OnCommand_103(CMemberInfoDialog *this);
void __thiscall CMemberInfoDialog::OnCommand_100(CMemberInfoDialog *this);
void __thiscall CMemberInfoDialog::OnCommand_101(CMemberInfoDialog *this);
int __thiscall CMemberInfoDialog::OnClickGuildCtrl(CMemberInfoDialog *this,IParam *param_1);
void __thiscall CMemberInfoDialog::OnCommand_106(CMemberInfoDialog *this);
int __thiscall CMemberInfoDialog::IsInviteAvailable(CMemberInfoDialog *this);
void __thiscall CMemberInfoDialog::ClearAvatar(CMemberInfoDialog *this);
void __thiscall CMemberInfoDialog::ChangeLayout(CMemberInfoDialog *this);
void __thiscall CMFunctor<CInviteGameToChnlDlg>::vfunction1(CMFunctor<CInviteGameToChnlDlg> *this);
void __thiscall CMFunctor<CMemberInfoDialog>::scalar_deleting_destructor(CMFunctor<CMemberInfoDialog> *this);
void __thiscall CMFunctor<CInviteGameToChnlDlg>::vfunction3(CMFunctor<CInviteGameToChnlDlg> *this,undefined4 *param_1);
void __thiscall CMemberInfoDialog::vfunction1(CMemberInfoDialog *this,byte param_1);
void __thiscall CGuildInfoCtrl::vfunction1(CGuildInfoCtrl *this,byte param_1);
undefined ** __thiscall CMessageBox::vfunction1(CMessageBox *this);
undefined ** __thiscall CChannelRoomPasswordDialog::vfunction13(CChannelRoomPasswordDialog *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this,char *param_1);
CDialogRoot * __thiscall CMessageBox::scalar_deleting_destructor(CMessageBox *this,byte param_1);
void __thiscall CMessageBox::~CMessageBox(CMessageBox *this);
void __thiscall CMessageBox::vfunction2(CMessageBox *this);
void __thiscall CMessageBox2::vfunction92(CMessageBox2 *this,int *param_1);
void __thiscall CMessageBox2::vfunction89(CMessageBox2 *this);
void __thiscall CMessageBox::vfunction96(CMessageBox *this,int *param_1);
undefined ** __thiscall CMessageBox2::vfunction1(CMessageBox2 *this);
CRectDrawer * __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this,char *param_1);
CDialogRoot * __thiscall CMessageBox2::scalar_deleting_destructor(CMessageBox2 *this,byte param_1);
void __thiscall CMessageBox2::~CMessageBox2(CMessageBox2 *this);
void __thiscall CMessageBox2::vfunction2(CMessageBox2 *this);
void __thiscall CMessageBox2::vfunction6(CMessageBox2 *this,IParam *param_1);
void FUN_604135c0(void);
void FUN_60413680(void);
undefined1 __thiscall CMessageBox2::vfunction98(CMessageBox2 *this);
void __thiscall CMessageBox2::vfunction90(CMessageBox2 *this);
void __thiscall CMessageBox2::vfunction96(CMessageBox2 *this,int *param_1);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __cdecl FUN_60413820(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2);
void FUN_604138c0(void);
void __thiscall CMessageBox2::vfunction1(CMessageBox2 *this,byte param_1);
void __thiscall CMessageBox::vfunction1(CMessageBox *this,byte param_1);
undefined ** __thiscall CMutexErrorDlg::vfunction1(CMutexErrorDlg *this);
undefined ** __thiscall CMutexErrorDlg::vfunction13(CMutexErrorDlg *this);
CBmpButton * __thiscall CBmpButton::CBmpButton(CBmpButton *this);
CDialogRoot * __thiscall CMutexErrorDlg::scalar_deleting_destructor(CMutexErrorDlg *this,byte param_1);
void __thiscall CMutexErrorDlg::~CMutexErrorDlg(CMutexErrorDlg *this);
void __thiscall CMutexErrorDlg::vfunction2(CMutexErrorDlg *this);
void __thiscall CMutexErrorDlg::vfunction92(CMutexErrorDlg *this,int *param_1);
void __fastcall OnPaint(CWnd *param_1);
void __thiscall CMutexErrorDlg::vfunction1(CMutexErrorDlg *this,byte param_1);
undefined ** __thiscall CSaveChatAcceptDlg::vfunction13(CSaveChatAcceptDlg *this);
CBmpButton * __thiscall CBmpButton::CBmpButton(CBmpButton *this);
CDialogRoot * __thiscall CSaveChatAcceptDlg::scalar_deleting_destructor(CSaveChatAcceptDlg *this,byte param_1);
void __thiscall CSaveChatAcceptDlg::~CSaveChatAcceptDlg(CSaveChatAcceptDlg *this);
void __thiscall CSaveChatAcceptDlg::vfunction92(CSaveChatAcceptDlg *this,int *param_1);
void __thiscall CSaveChatAcceptDlg::vfunction2(CSaveChatAcceptDlg *this);
void __thiscall CSaveChatAcceptDlg::vfunction6(CSaveChatAcceptDlg *this,IParam *param_1);
void __fastcall OnCommand_1(int *param_1);
void __fastcall OnCommand_2(int *param_1);
undefined ** __thiscall CSaveChatNoticetDlg::vfunction13(CSaveChatNoticetDlg *this);
CBmpButton * __thiscall CBmpButton::CBmpButton(CBmpButton *this);
CDialogRoot * __thiscall CSaveChatNoticetDlg::scalar_deleting_destructor(CSaveChatNoticetDlg *this,byte param_1);
void __thiscall CSaveChatNoticetDlg::~CSaveChatNoticetDlg(CSaveChatNoticetDlg *this);
void __thiscall CSaveChatNoticetDlg::vfunction92(CSaveChatNoticetDlg *this,int *param_1);
void __thiscall CSaveChatNoticetDlg::vfunction2(CSaveChatNoticetDlg *this);
void __thiscall CSaveChatNoticetDlg::vfunction6(CSaveChatNoticetDlg *this,IParam *param_1);
bool __thiscall CAccuseConfirmDlg::CAccuseConfirmDlg::OnInitControl(CAccuseConfirmDlg *this);
void __fastcall FUN_60414bc0(int *param_1);
void __thiscall CSaveChatNoticetDlg::vfunction1(CSaveChatNoticetDlg *this,byte param_1);
void __thiscall CSaveChatAcceptDlg::vfunction1(CSaveChatAcceptDlg *this,byte param_1);
undefined ** __thiscall CSettingDialog::vfunction1(CSettingDialog *this);
undefined ** __thiscall CSettingDialog::vfunction13(CSettingDialog *this);
CLineDrawer * __thiscall CLineDrawer::CLineDrawer(CLineDrawer *this);
CDialogRoot * __thiscall CSettingDialog::scalar_deleting_destructor(CSettingDialog *this,byte param_1);
void __thiscall CSettingDialog::~CSettingDialog(CSettingDialog *this);
void __thiscall CSettingDialog::vfunction2(CSettingDialog *this);
void __thiscall CSettingDialog::vfunction6(CSettingDialog *this,IParam *param_1);
void __thiscall CSettingDialog::vfunction92(CSettingDialog *this,int *param_1);
void __thiscall CSettingDialog::vfunction96(CSettingDialog *this,CDC *param_1);
void __fastcall FUN_60416970(int param_1);
void __thiscall CSettingDialog::vfunction1(CSettingDialog *this,byte param_1);
CShutdownExitDialog * __thiscall CShutdownExitDialog::scalar_deleting_destructor(CShutdownExitDialog *this,byte param_1);
CRuntimeClass * __thiscall CShutdownExitDialog::CShutdownExitDialog::GetRuntimeClass(CShutdownExitDialog *this);
AFX_MSGMAP * __thiscall CShutdownExitDialog::CShutdownExitDialog::GetMessageMap(CShutdownExitDialog *this);
CCustomStatic * __thiscall CCustomStatic::CCustomStatic(CCustomStatic *this);
void __thiscall CShutdownExitDialog::~CShutdownExitDialog(CShutdownExitDialog *this);
bool __thiscall CShutdownExitDialog::CShutdownExitDialog::CreateControl(CShutdownExitDialog *this,IParam *param_1);
void __thiscall CShutdownExitDialog::CShutdownExitDialog::InitDialogData(CShutdownExitDialog *this,CParam *param_1);
void __thiscall CShutdownExitDialog::OnCommand_436(CShutdownExitDialog *this);
void __thiscall CShutdownExitDialog::OnCommand_437(CShutdownExitDialog *this);
void __thiscall CShutdownExitDialog::OnCommand_438(CShutdownExitDialog *this);
void __thiscall CShutdownExitDialog::OnCommand_439(CShutdownExitDialog *this);
void __thiscall CShutdownExitDialog::ShowWebPage(CShutdownExitDialog *this,int param_1,bool param_2);
void __thiscall CShutdownExitDialog::vfunction1(CShutdownExitDialog *this,byte param_1);
CShutdownNoticeDialog * __thiscall CShutdownNoticeDialog::scalar_deleting_destructor(CShutdownNoticeDialog *this,byte param_1);
CRuntimeClass * __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::GetRuntimeClass(CShutdownNoticeDialog *this);
AFX_MSGMAP * __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::GetMessageMap(CShutdownNoticeDialog *this);
CBmpButton * __thiscall CBmpButton::CBmpButton(CBmpButton *this);
void __thiscall CShutdownNoticeDialog::~CShutdownNoticeDialog(CShutdownNoticeDialog *this);
bool __thiscall CShutdownNoticeDialog::CShutdownNoticeDialog::CreateControl(CShutdownNoticeDialog *this,IParam *param_1);
void __thiscall CMemberInfoDialog::CMemberInfoDialog::AfterShowIt(CMemberInfoDialog *this,CParam *param_1);
void __thiscall CShutdownNoticeDialog::OnCommand_431(CShutdownNoticeDialog *this);
void __thiscall CShutdownNoticeDialog::vfunction1(CShutdownNoticeDialog *this,byte param_1);
CSplashWnd * __thiscall CSplashWnd::scalar_deleting_destructor(CSplashWnd *this,byte param_1);
CSplashWnd * __thiscall CSplashWnd::CSplashWnd(CSplashWnd *this);
void __thiscall CSplashWnd::~CSplashWnd(CSplashWnd *this);
CSplashWnd * __cdecl CSplashWnd::Instance(void);
AFX_MSGMAP * __thiscall CSplashWnd::CSplashWnd::GetMessageMap(CSplashWnd *this);
void __thiscall CSplashWnd::CSplashWnd::InitDialogData(CSplashWnd *this,CParam *param_1);
void __thiscall CSplashWnd::OnPaint(CSplashWnd *this);
int __thiscall CPen::OnEraseBkgnd(CPen *this,CDC *param_1);
long __thiscall CSplashWnd::OnNcHitTest(CSplashWnd *this);
int __thiscall CSplashWnd::CSplashWnd::Create(CSplashWnd *this,char *param_1);
int __thiscall CSplashWnd::OnCreate(CSplashWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CSplashWnd::OnCommand_300(CSplashWnd *this);
void __thiscall CSplashWnd::SplashCancelOff(CSplashWnd *this);
void __thiscall CSplashWnd::OnSizing(CSplashWnd *this,uint param_1,tagRECT *param_2);
int __thiscall CSplashWnd::CSplashWnd::ShowModaless(CSplashWnd *this,bool param_1);
void __thiscall CSplashWnd::vfunction1(CSplashWnd *this,byte param_1);
undefined4 * __thiscall CPen::scalar_deleting_destructor(CPen *this,byte param_1);
void __thiscall CPen::~CPen(CPen *this);
undefined4 * __thiscall CBrush::scalar_deleting_destructor(CBrush *this,byte param_1);
void __thiscall CBrush::~CBrush(CBrush *this);
undefined4 * __thiscall CFont::scalar_deleting_destructor(CFont *this,byte param_1);
void * __thiscall CGdiObject::CImageList::`scalar_deleting_destructor'(CGdiObject *this,uint param_1);
void __thiscall CGdiObject::~CGdiObject(CGdiObject *this);
undefined4 Catch@60418943(void);
CThreadLoadingWnd * __thiscall CThreadLoadingWnd::scalar_deleting_destructor(CThreadLoadingWnd *this,byte param_1);
CBitmap * __thiscall CBitmap::CBitmap(CBitmap *this);
void __thiscall CThreadLoadingWnd::~CThreadLoadingWnd(CThreadLoadingWnd *this);
CThreadLoadingWnd * __cdecl CThreadLoadingWnd::Instance(void);
AFX_MSGMAP * __thiscall CThreadLoadingWnd::CThreadLoadingWnd::GetMessageMap(CThreadLoadingWnd *this);
bool __thiscall CThreadLoadingWnd::CThreadLoadingWnd::CreateControl(CThreadLoadingWnd *this,IParam *param_1);
void __thiscall CThreadLoadingWnd::CThreadLoadingWnd::InitDialogData(CThreadLoadingWnd *this,CParam *param_1);
void __thiscall CPen::OnPaint(CPen *this);
int __thiscall CThreadLoadingWnd::OnEraseBkgnd(CThreadLoadingWnd *this,CDC *param_1);
int __thiscall CThreadLoadingWnd::CThreadLoadingWnd::Create(CThreadLoadingWnd *this,char *param_1);
int __thiscall CThreadLoadingWnd::OnCreate(CThreadLoadingWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CThreadLoadingWnd::OnCommand_350(CThreadLoadingWnd *this);
void __thiscall CThreadLoadingWnd::CancelButOff(CThreadLoadingWnd *this);
void __thiscall CThreadLoadingWnd::OnSizing(CThreadLoadingWnd *this,uint param_1,tagRECT *param_2);
long __thiscall CThreadLoadingWnd::OnThreadLoadingUpdate(CThreadLoadingWnd *this,uint param_1,long param_2);
int __thiscall CThreadLoadingWnd::CThreadLoadingWnd::ShowModaless(CThreadLoadingWnd *this,bool param_1);
void __thiscall CThreadLoadingWnd::SetLoadingFrom(CThreadLoadingWnd *this);
void __thiscall CThreadLoadingWnd::CThreadLoadingWnd::UpdateProgressValue(CThreadLoadingWnd *this,CParam *param_1);
void __thiscall CThreadLoadingWnd::CreateMemDC(CThreadLoadingWnd *this);
void __thiscall CBrush::~CBrush(CBrush *this);
void __thiscall CThreadLoadingWnd::vfunction1(CThreadLoadingWnd *this,byte param_1);
void __thiscall CBitmap::~CBitmap(CBitmap *this);
undefined4 * __thiscall CBitmap::scalar_deleting_destructor(CBitmap *this,byte param_1);
void __thiscall CDialogList::~CDialogList(CDialogList *this);
void __thiscall CDialogList::SetParent(CDialogList *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall CDialogList::ClearDialogList(CDialogList *this);
int __thiscall CDialogList::IsRunningModalDialog(CDialogList *this);
int __thiscall CDialogList::CloseOpenDialog(CDialogList *this);
CDialogList * __cdecl DialogList(void);
void __thiscall CDialogCmp::CDialogCmp(CDialogCmp *this,CDialogCmp *param_1);
CDialogCmp * __thiscall CDialogCmp::operator=(CDialogCmp *this,CDialogCmp *param_1);
void __thiscall CDialogCmp::CDialogCmp::InitDefaultDialog(CDialogCmp *this);
void __thiscall CDialogCmp::CDialogCmp::InitAddtionalDialog(CDialogCmp *this);
bool __thiscall CDialogCmp::CDialogCmp::OnAttached(CDialogCmp *this);
bool __thiscall CDialogCmp::CDialogCmp::OnDetached(CDialogCmp *this);
void __thiscall CDialogCmp::CDialogCmp(CDialogCmp *this);
int __thiscall CDialogCmp::Msg_ShowRoomPasswordDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowInviteWaitingDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowItemWebDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowAccuseUserDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowMemberInfoDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowInviteChnlToWebDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowInviteGameToChnlDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowEndingPopupDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowMsgBox(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowMsgBox2(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowSaveChatDlg(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowSaveChatNoticeDlg(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowFindFriendSuccessDlg(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowFindFriendFailDlg(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowShutdownNoticeDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowShutdownExitDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowAlarm2Dialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowEndingPopupDialog2(CDialogCmp *this,IParam *param_1);
undefined4 FUN_6041b830(void);
void FUN_6041b9b0(void);
int __thiscall CDialogCmp::Msg_ShowDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_IsWindowVisible(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowCreateRoomDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowInviteResponseDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowSettingDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_CreateSplashWnd(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowSplashWnd(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_IsSplashOn(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_SplashWndCancel(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowMutexErrorDlg(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::ShowDialog(CDialogCmp *this,char *param_1,IParam *param_2);
int __thiscall CDialogCmp::Msg_ClearDialogList(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_CloseAlarmDlg(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_CloseInviteResponseDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ShowThreadLoadingWnd(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_ThreadLoadingValue(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_UpdateDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_CheckRunningModalDialog(CDialogCmp *this,IParam *param_1);
int __thiscall CDialogCmp::Msg_CloseOpenDialog(CDialogCmp *this,IParam *param_1);
void __thiscall CMFunctor<CDialogCmp>::vfunction1(CMFunctor<CDialogCmp> *this);
void __thiscall CMFunctor<CDialogCmp>::scalar_deleting_destructor(CMFunctor<CDialogCmp> *this);
void __thiscall CMFunctor<CDialogCmp>::vfunction3(CMFunctor<CDialogCmp> *this,undefined4 *param_1);
void __fastcall FUN_6041c8d0(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5);
void __cdecl operator_delete(void *param_1);
AFX_MODULE_STATE * AfxGetModuleState(void);
void __cdecl operator_delete[](void *param_1);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
void * __cdecl operator_new(uint param_1);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1);
int __thiscall CWnd::ShowWindow(CWnd *this,int param_1);
int __thiscall CStatic::CStatic::Create(CStatic *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
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
int __thiscall CStatic::CStatic::OnChildNotify(CStatic *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CDialog::CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
int __thiscall CDialog::CDialog::PreTranslateMessage(CDialog *this,tagMSG *param_1);
int __thiscall CWnd::CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CDialog::CDialog::CheckAutoCenter(CDialog *this);
int __thiscall CDialog::CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1);
_AFX_OCC_DIALOG_INFO * __thiscall CDialog::CDialog::GetOccDialogInfo(CDialog *this);
int __thiscall CDialog::CDialog::Create(CDialog *this,char *param_1,CWnd *param_2);
int __thiscall CDialog::CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2);
int __thiscall CDialog::CDialog::CreateIndirect(CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3);
void __thiscall CDialog::CDialog::OnSetFont(CDialog *this,CFont *param_1);
void __thiscall CDialog::CDialog::PreInitDialog(CDialog *this);
void __thiscall CStringArray::CStringArray(CStringArray *this);
void __thiscall CStringArray::~CStringArray(CStringArray *this);
void __thiscall CStringArray::SetSize(CStringArray *this,int param_1,int param_2);
void __thiscall CStringArray::SetAtGrow(CStringArray *this,int param_1,char *param_2);
void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1);
CWnd * __thiscall CWnd::SetFocus(CWnd *this);
int __thiscall CWnd::EnableWindow(CWnd *this,int param_1);
int __thiscall CListCtrl::Create(CListCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
int __thiscall CListCtrl::InsertColumn(CListCtrl *this,int param_1,char *param_2,int param_3,int param_4,int param_5);
void __thiscall CListCtrl::GetItemText(CListCtrl *this,int param_1,int param_2);
int __thiscall CWnd::MessageBoxA(CWnd *this,char *param_1,char *param_2,uint param_3);
void __thiscall CWnd::GetWindowTextA(CWnd *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1);
void AfxThrowInvalidArgException(void);
int __thiscall CListCtrl::InsertItem(CListCtrl *this,uint param_1,int param_2,char *param_3,uint param_4,uint param_5,int param_6,long param_7);
int __thiscall CListCtrl::SetItemText(CListCtrl *this,int param_1,int param_2,char *param_3);
int __thiscall CListCtrl::SetItemState(CListCtrl *this,int param_1,uint param_2,uint param_3);
int __thiscall CListCtrl::CListCtrl::OnChildNotify(CListCtrl *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void __thiscall CWinApp::EnableModeless(CWinApp *this,int param_1);
HWND__ * CWnd::GetSafeOwner_(HWND__ *param_1,HWND__ **param_2);
ulong __thiscall CWnd::GetStyle(CWnd *this);
int __thiscall CWnd::RunModalLoop(CWnd *this,ulong param_1);
int __thiscall CWnd::IsWindowEnabled(CWnd *this);
CWnd * __thiscall CWnd::GetDlgItem(CWnd *this,int param_1);
int __thiscall CComboBox::CComboBox::OnChildNotify(CComboBox *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CComboBox::CComboBox::Create(CComboBox *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
void __thiscall CComboBox::CComboBox::DrawItem(CComboBox *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CComboBox::CComboBox::MeasureItem(CComboBox *this,tagMEASUREITEMSTRUCT *param_1);
int __thiscall CComboBox::CComboBox::CompareItem(CComboBox *this,tagCOMPAREITEMSTRUCT *param_1);
void __thiscall CComboBox::CComboBox::DeleteItem(CComboBox *this,tagDELETEITEMSTRUCT *param_1);
CRuntimeClass * CDialog::GetThisClass(void);
void __thiscall CDialog::CDialog(CDialog *this);
void __thiscall CDialog::~CDialog(CDialog *this);
int __thiscall CDialog::OnInitDialog(CDialog *this);
int __thiscall CWnd::ModifyStyle(CWnd *this,ulong param_1,ulong param_2,uint param_3);
int __thiscall CWnd::ModifyStyleEx(CWnd *this,ulong param_1,ulong param_2,uint param_3);
int __thiscall CDialog::InitModalIndirect(CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3);
void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1);
void __thiscall CPaintDC::~CPaintDC(CPaintDC *this);
void __thiscall CWnd::ScreenToClient(CWnd *this,tagRECT *param_1);
long __thiscall CWnd::Default(CWnd *this);
CWnd * CWnd::FromHandle(HWND__ *param_1);
int __thiscall CDC::SetBkMode(CDC *this,int param_1);
CRuntimeClass * __thiscall CWnd::CWnd::GetRuntimeClass(CWnd *this);
char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4);
void __thiscall CWnd::OnDestroy(CWnd *this);
ulong __thiscall CListCtrl::GetItemData(CListCtrl *this,int param_1);
int __thiscall CProgressCtrl::CProgressCtrl::Create(CProgressCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
int __thiscall CProgressCtrl::CProgressCtrl::CreateEx(CProgressCtrl *this,ulong param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
void __thiscall CWnd::ClientToScreen(CWnd *this,tagRECT *param_1);
int __thiscall CGdiObject::DeleteObject(CGdiObject *this);
int AfxMessageBox(char *param_1,uint param_2,uint param_3);
CRuntimeClass * __thiscall CGdiObject::CGdiObject::GetRuntimeClass(CGdiObject *this);
CRuntimeClass * __thiscall CFont::CFont::GetRuntimeClass(CFont *this);
void __thiscall CBrush::CBrush(CBrush *this,ulong param_1);
CRuntimeClass * __thiscall CBrush::CBrush::GetRuntimeClass(CBrush *this);
void __thiscall CPen::CPen(CPen *this,int param_1,int param_2,ulong param_3);
CRuntimeClass * __thiscall CPen::CPen::GetRuntimeClass(CPen *this);
CBrush * __thiscall CDC::SelectObject(CDC *this,CBrush *param_1);
CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1);
CDC * CDC::FromHandle(HDC__ *param_1);
int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1);
void __thiscall CDC::CDC(CDC *this);
void __thiscall CDC::~CDC(CDC *this);
CRuntimeClass * __thiscall CBitmap::CBitmap::GetRuntimeClass(CBitmap *this);
CGdiObject * CDC::SelectGdiObject(HDC__ *param_1,void *param_2);
int __thiscall CDC::DeleteDC(CDC *this);
void __thiscall CClientDC::CClientDC(CClientDC *this,CWnd *param_1);
void __thiscall CClientDC::~CClientDC(CClientDC *this);
int __thiscall CDC::Attach(CDC *this,HDC__ *param_1);
void __thiscall CDC::FillSolidRect(CDC *this,int param_1,int param_2,int param_3,int param_4,ulong param_5);
CWinThread * AfxGetThread(void);
void __fastcall __security_check_cookie(int param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_6041cd9e(void);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
char * __thiscall std::exception::std::exception::what(exception *this);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_6041ceaa(void);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl purecall(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_6041d250(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_6041d3e5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
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
void __cdecl except_handler4_common(void);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
IGod * __cdecl God(void);
IFunctor * __cdecl Fnt(_func_int_IParam_ptr *param_1);
bool __thiscall CControlBase::CControlBase::IsCreated(CControlBase *this);
bool __thiscall CBmpButton::CBmpButton::CreateControl(CBmpButton *this,IParam *param_1);
CRuntimeClass * __thiscall CBmpButton::CBmpButton::GetRuntimeClass(CBmpButton *this);
AFX_MSGMAP * __thiscall CBmpButton::CBmpButton::GetMessageMap(CBmpButton *this);
long __thiscall CBmpButton::CBmpButton::WindowProc(CBmpButton *this,uint param_1,uint param_2,long param_3);
void __thiscall CBmpButton::CBmpButton::DrawItem(CBmpButton *this,tagDRAWITEMSTRUCT *param_1);
bool __thiscall CBmpButton::CBmpButton::DestroyControl(CBmpButton *this);
void __thiscall CControlBase::CControlBase::ShowControl(CControlBase *this,bool param_1);
void __thiscall CBmpButton::CBmpButton::UpdateControl(CBmpButton *this,IParam *param_1);
void __thiscall CBmpButton::CBmpButton::UpdateControlForGame(CBmpButton *this,IParam *param_1);
CWnd * __thiscall CControlBase::CControlBase::GetCWndPtr(CControlBase *this);
CRuntimeClass * __thiscall CCustomStatic::CCustomStatic::GetRuntimeClass(CCustomStatic *this);
AFX_MSGMAP * __thiscall CCustomStatic::CCustomStatic::GetMessageMap(CCustomStatic *this);
int __thiscall CCustomStatic::CCustomStatic::PreCreateWindow(CCustomStatic *this,tagCREATESTRUCTA *param_1);
void __thiscall CCustomStatic::CCustomStatic::DrawItem(CCustomStatic *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CCustomStatic::CCustomStatic::MovePostion(CCustomStatic *this,int param_1,int param_2,int param_3);
bool __thiscall CCustomStatic::CCustomStatic::CreateControl(CCustomStatic *this,IParam *param_1);
bool __thiscall CControlBase::CControlBase::DestroyControl(CControlBase *this);
void __thiscall CCustomStatic::CCustomStatic::UpdateControl(CCustomStatic *this,IParam *param_1);
void __thiscall CControlBase::CControlBase::UpdateControlForGame(CControlBase *this,IParam *param_1);
CRuntimeClass * __thiscall CListCtrlEx::CListCtrlEx::GetRuntimeClass(CListCtrlEx *this);
AFX_MSGMAP * __thiscall CListCtrlEx::CListCtrlEx::GetMessageMap(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::DrawItem(CListCtrlEx *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CListCtrlEx::CListCtrlEx::OnSortItem(CListCtrlEx *this,ulong param_1,ulong param_2,int param_3,int param_4);
bool __thiscall CListCtrlEx::CListCtrlEx::DoListCtrlSetting(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::GetColumnFormatString(CListCtrlEx *this,int param_1,char *param_2,char *param_3,int param_4);
void __thiscall CListCtrlEx::CListCtrlEx::MeasureItem(CListCtrlEx *this,tagMEASUREITEMSTRUCT *param_1);
bool __thiscall CListCtrlEx::CListCtrlEx::CreateControl(CListCtrlEx *this,IParam *param_1);
bool __thiscall CListCtrlEx::CListCtrlEx::DestroyControl(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::UpdateControl(CListCtrlEx *this,IParam *param_1);
CRuntimeClass * __thiscall CCustomEdit::CCustomEdit::GetRuntimeClass(CCustomEdit *this);
AFX_MSGMAP * __thiscall CCustomEdit::CCustomEdit::GetMessageMap(CCustomEdit *this);
bool __thiscall CControlBase::CControlBase::CreateControl(CControlBase *this,IParam *param_1);
void __thiscall CCustomEdit::CCustomEdit::UpdateControl(CCustomEdit *this,IParam *param_1);
CRuntimeClass * __thiscall CScrollSupportCtrl::CScrollSupportCtrl::GetRuntimeClass(CScrollSupportCtrl *this);
AFX_MSGMAP * __thiscall CScrollSupportCtrl::CScrollSupportCtrl::GetMessageMap(CScrollSupportCtrl *this);
void __thiscall CScrollSupportCtrl::CScrollSupportCtrl::UpdateControl(CScrollSupportCtrl *this,IParam *param_1);
void __thiscall CScrollSupportCtrl::CScrollSupportCtrl::UpdateControlForGame(CScrollSupportCtrl *this,IParam *param_1);
CRuntimeClass * __thiscall CCustomRadioButton::CCustomRadioButton::GetRuntimeClass(CCustomRadioButton *this);
AFX_MSGMAP * __thiscall CCustomRadioButton::CCustomRadioButton::GetMessageMap(CCustomRadioButton *this);
void __thiscall CCustomRadioButton::CCustomRadioButton::DrawItem(CCustomRadioButton *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CCustomRadioButton::CCustomRadioButton::UpdateControl(CCustomRadioButton *this,IParam *param_1);
CRuntimeClass * __thiscall CCustomCheckBox::CCustomCheckBox::GetRuntimeClass(CCustomCheckBox *this);
AFX_MSGMAP * __thiscall CCustomCheckBox::CCustomCheckBox::GetMessageMap(CCustomCheckBox *this);
void __thiscall CCustomCheckBox::CCustomCheckBox::DrawItem(CCustomCheckBox *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CCustomCheckBox::CCustomCheckBox::UpdateControl(CCustomCheckBox *this,IParam *param_1);
CRuntimeClass * __thiscall CCustomComboBox::CCustomComboBox::GetRuntimeClass(CCustomComboBox *this);
AFX_MSGMAP * __thiscall CCustomComboBox::CCustomComboBox::GetMessageMap(CCustomComboBox *this);
int __thiscall CCustomComboBox::CCustomComboBox::PreTranslateMessage(CCustomComboBox *this,tagMSG *param_1);
void __thiscall CCustomComboBox::CCustomComboBox::UpdateControl(CCustomComboBox *this,IParam *param_1);
void __thiscall CRectDrawer::CRectDrawer::UpdateControl(CRectDrawer *this,IParam *param_1);
AFX_MSGMAP * __thiscall CAnimatedStatic::CAnimatedStatic::GetMessageMap(CAnimatedStatic *this);
void __thiscall CAnimatedStatic::CAnimatedStatic::UpdateControl(CAnimatedStatic *this,IParam *param_1);
void __thiscall CAnimatedStatic::CAnimatedStatic::UpdateControlForGame(CAnimatedStatic *this,IParam *param_1);
int __thiscall CHtmlCtrl::CHtmlCtrl::DestroyWindow(CHtmlCtrl *this);
int __thiscall CHtmlCtrl::CHtmlCtrl::Create(CHtmlCtrl *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,uint param_6,CCreateContext *param_7);
CRuntimeClass * __thiscall CHtmlCtrl::CHtmlCtrl::GetRuntimeClass(CHtmlCtrl *this);
AFX_MSGMAP * __thiscall CHtmlCtrl::CHtmlCtrl::GetMessageMap(CHtmlCtrl *this);
CRuntimeClass * __thiscall CWaitingMemberListCtrl::CWaitingMemberListCtrl::GetRuntimeClass(CWaitingMemberListCtrl *this);
AFX_MSGMAP * __thiscall CWaitingMemberListCtrl::CWaitingMemberListCtrl::GetMessageMap(CWaitingMemberListCtrl *this);
bool __thiscall CWaitingMemberListCtrl::CWaitingMemberListCtrl::DoListCtrlSetting(CWaitingMemberListCtrl *this);
bool __thiscall CWaitingMemberListCtrl::CWaitingMemberListCtrl::DestroyControl(CWaitingMemberListCtrl *this);
CRuntimeClass * __thiscall CCustomProgress::CCustomProgress::GetRuntimeClass(CCustomProgress *this);
AFX_MSGMAP * __thiscall CCustomProgress::CCustomProgress::GetMessageMap(CCustomProgress *this);
void __thiscall CCustomProgress::CCustomProgress::UpdateControl(CCustomProgress *this,IParam *param_1);
void __thiscall CLineDrawer::CLineDrawer::UpdateControl(CLineDrawer *this,IParam *param_1);
CRuntimeClass * __thiscall CGuildInfoCtrl::CGuildInfoCtrl::GetRuntimeClass(CGuildInfoCtrl *this);
AFX_MSGMAP * __thiscall CGuildInfoCtrl::CGuildInfoCtrl::GetMessageMap(CGuildInfoCtrl *this);
bool __thiscall CGuildInfoCtrl::CGuildInfoCtrl::CreateControl(CGuildInfoCtrl *this,IParam *param_1);
void __thiscall CGuildInfoCtrl::CGuildInfoCtrl::UpdateControl(CGuildInfoCtrl *this,IParam *param_1);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
ulonglong __fastcall FUN_6041d850(undefined4 param_1,undefined4 param_2);
undefined4 FUN_6041d8fb(void);
undefined4 __get_sse2_info(void);
void Unwind@6041d9c0(void);
void Unwind@6041d9cc(void);
void Unwind@6041da10(void);
void Unwind@6041da40(void);
void Unwind@6041da70(void);
void Unwind@6041dab0(void);
void Unwind@6041daf0(void);
void Unwind@6041daf9(void);
void Unwind@6041db20(void);
void Unwind@6041db60(void);
void Unwind@6041db6c(void);
void Unwind@6041db78(void);
void Unwind@6041db84(void);
void Unwind@6041db90(void);
void Unwind@6041db9c(void);
void Unwind@6041dbe0(void);
void Unwind@6041dbec(void);
void Unwind@6041dc30(void);
void Unwind@6041dc3c(void);
void Unwind@6041dc48(void);
void Unwind@6041dc54(void);
void Unwind@6041dc90(void);
void Unwind@6041dcd0(void);
void Unwind@6041dd10(void);
void Unwind@6041dd40(void);
void Unwind@6041dd49(void);
void Unwind@6041dd70(void);
void Unwind@6041ddb0(void);
void Unwind@6041ddb8(void);
void Unwind@6041ddc4(void);
void Unwind@6041ddf0(void);
void Unwind@6041de20(void);
void Unwind@6041de28(void);
void Unwind@6041de60(void);
void Unwind@6041dea0(void);
void Unwind@6041dea8(void);
void Unwind@6041deb7(void);
void Unwind@6041dec6(void);
void Unwind@6041def0(void);
void Unwind@6041df20(void);
void Unwind@6041df29(void);
void Unwind@6041df32(void);
void Unwind@6041df60(void);
void Unwind@6041df90(void);
void Unwind@6041dfc0(void);
void Unwind@6041dff0(void);
void Unwind@6041e030(void);
void Unwind@6041e038(void);
void Unwind@6041e060(void);
void Unwind@6041e068(void);
void Unwind@6041e070(void);
void Unwind@6041e0a0(void);
void Unwind@6041e0a8(void);
void Unwind@6041e0b7(void);
void Unwind@6041e0c6(void);
void Unwind@6041e0d5(void);
void Unwind@6041e100(void);
void Unwind@6041e140(void);
void Unwind@6041e180(void);
void Unwind@6041e1b0(void);
void Unwind@6041e1b9(void);
void Unwind@6041e1c2(void);
void Unwind@6041e1cb(void);
void Unwind@6041e1d4(void);
void Unwind@6041e1dd(void);
void Unwind@6041e1e6(void);
void Unwind@6041e1ef(void);
void Unwind@6041e1f8(void);
void Unwind@6041e201(void);
void Unwind@6041e20a(void);
void Unwind@6041e230(void);
void Unwind@6041e270(void);
void Unwind@6041e278(void);
void Unwind@6041e2b0(void);
void Unwind@6041e2e0(void);
void Unwind@6041e2e8(void);
void Unwind@6041e2f7(void);
void Unwind@6041e306(void);
void Unwind@6041e315(void);
void Unwind@6041e324(void);
void Unwind@6041e350(void);
void Unwind@6041e380(void);
void Unwind@6041e38c(void);
void Unwind@6041e398(void);
void Unwind@6041e3a4(void);
void Unwind@6041e3b0(void);
void Unwind@6041e3bc(void);
void Unwind@6041e3c8(void);
void Unwind@6041e3d4(void);
void Unwind@6041e3e0(void);
void Unwind@6041e3ec(void);
void Unwind@6041e3f8(void);
void Unwind@6041e404(void);
void Unwind@6041e410(void);
void Unwind@6041e41c(void);
void Unwind@6041e428(void);
void Unwind@6041e434(void);
void Unwind@6041e440(void);
void Unwind@6041e44c(void);
void Unwind@6041e458(void);
void Unwind@6041e464(void);
void Unwind@6041e470(void);
void Unwind@6041e47c(void);
void Unwind@6041e488(void);
void Unwind@6041e494(void);
void Unwind@6041e4a0(void);
void Unwind@6041e4e0(void);
void Unwind@6041e4e9(void);
void Unwind@6041e510(void);
void Unwind@6041e51c(void);
void Unwind@6041e528(void);
void Unwind@6041e570(void);
void Unwind@6041e57c(void);
void Unwind@6041e587(void);
void Unwind@6041e593(void);
void Unwind@6041e59f(void);
void Unwind@6041e5ab(void);
void Unwind@6041e5b7(void);
void Unwind@6041e600(void);
void Unwind@6041e608(void);
void Unwind@6041e640(void);
void Unwind@6041e649(void);
void Unwind@6041e652(void);
void Unwind@6041e65b(void);
void Unwind@6041e680(void);
void Unwind@6041e6c0(void);
void Unwind@6041e6c8(void);
void Unwind@6041e700(void);
void Unwind@6041e709(void);
void Unwind@6041e715(void);
void Unwind@6041e721(void);
void Unwind@6041e72d(void);
void Unwind@6041e739(void);
void Unwind@6041e742(void);
void Unwind@6041e74e(void);
void Unwind@6041e75a(void);
void Unwind@6041e766(void);
void Unwind@6041e772(void);
void Unwind@6041e77e(void);
void Unwind@6041e78a(void);
void Unwind@6041e796(void);
void Unwind@6041e7a2(void);
void Unwind@6041e7ae(void);
void Unwind@6041e7ba(void);
void Unwind@6041e7f0(void);
void Unwind@6041e7f9(void);
void Unwind@6041e820(void);
void Unwind@6041e828(void);
void Unwind@6041e860(void);
void Unwind@6041e869(void);
void Unwind@6041e872(void);
void Unwind@6041e8a0(void);
void Unwind@6041e8e0(void);
void Unwind@6041e910(void);
void Unwind@6041e940(void);
void Unwind@6041e949(void);
void Unwind@6041e952(void);
void Unwind@6041e980(void);
void Unwind@6041e988(void);
void Unwind@6041e997(void);
void Unwind@6041e9d0(void);
void Unwind@6041ea10(void);
void Unwind@6041ea19(void);
void Unwind@6041ea50(void);
void Unwind@6041ea58(void);
void Unwind@6041ea67(void);
void Unwind@6041ea76(void);
void Unwind@6041ea85(void);
void Unwind@6041eab0(void);
void Unwind@6041eae0(void);
void Unwind@6041eaec(void);
void Unwind@6041eb30(void);
void Unwind@6041eb39(void);
void Unwind@6041eb42(void);
void Unwind@6041eb4b(void);
void Unwind@6041eb54(void);
void Unwind@6041eb5d(void);
void Unwind@6041eb66(void);
void Unwind@6041eb6f(void);
void Unwind@6041eb78(void);
void Unwind@6041eb81(void);
void Unwind@6041eb8a(void);
void Unwind@6041eb93(void);
void Unwind@6041ebc0(void);
void Unwind@6041ebf0(void);
void Unwind@6041ebf8(void);
void Unwind@6041ec40(void);
void Unwind@6041ec48(void);
void Unwind@6041ec54(void);
void Unwind@6041ec63(void);
void Unwind@6041ec6e(void);
void Unwind@6041eca0(void);
void Unwind@6041eca9(void);
void Unwind@6041ecd0(void);
void Unwind@6041ed10(void);
void Unwind@6041ed18(void);
void Unwind@6041ed27(void);
void Unwind@6041ed2f(void);
void Unwind@6041ed37(void);
void Unwind@6041ed3f(void);
void Unwind@6041ed70(void);
void Unwind@6041ed79(void);
void Unwind@6041ed82(void);
void Unwind@6041ed8b(void);
void Unwind@6041edb0(void);
void Unwind@6041edbc(void);
void Unwind@6041edc8(void);
void Unwind@6041edd4(void);
void Unwind@6041ee10(void);
void Unwind@6041ee18(void);
void Unwind@6041ee27(void);
void Unwind@6041ee36(void);
void Unwind@6041ee45(void);
void Unwind@6041ee4d(void);
void Unwind@6041ee55(void);
void Unwind@6041ee5d(void);
void Unwind@6041ee65(void);
void Unwind@6041ee6d(void);
void Unwind@6041ee75(void);
void Unwind@6041ee7d(void);
void Unwind@6041ee88(void);
void Unwind@6041ee93(void);
void Unwind@6041eec0(void);
void Unwind@6041eec8(void);
void Unwind@6041eed0(void);
void Unwind@6041eed8(void);
void Unwind@6041eee0(void);
void Unwind@6041eee8(void);
void Unwind@6041eef0(void);
void Unwind@6041eef8(void);
void Unwind@6041ef00(void);
void Unwind@6041ef08(void);
void Unwind@6041ef10(void);
void Unwind@6041ef18(void);
void Unwind@6041ef20(void);
void Unwind@6041ef28(void);
void Unwind@6041ef30(void);
void Unwind@6041ef38(void);
void Unwind@6041ef40(void);
void Unwind@6041ef48(void);
void Unwind@6041ef50(void);
void Unwind@6041ef80(void);
void Unwind@6041efb0(void);
void Unwind@6041efe0(void);
void Unwind@6041efe9(void);
void Unwind@6041f010(void);
void Unwind@6041f018(void);
void Unwind@6041f020(void);
void Unwind@6041f028(void);
void Unwind@6041f030(void);
void Unwind@6041f060(void);
void Unwind@6041f090(void);
void __thiscall CItemWebDialog::Unwind@6041f0c0(CItemWebDialog *this);
void Unwind@6041f100(void);
void Unwind@6041f130(void);
void Unwind@6041f160(void);
void Unwind@6041f168(void);
void Unwind@6041f190(void);
void Unwind@6041f198(void);
void Unwind@6041f1a0(void);
void Unwind@6041f1e0(void);
void Unwind@6041f1e8(void);
void Unwind@6041f1f7(void);
void Unwind@6041f206(void);
void Unwind@6041f215(void);
void Unwind@6041f224(void);
void Unwind@6041f232(void);
void Unwind@6041f260(void);
void Unwind@6041f268(void);
void Unwind@6041f277(void);
void Unwind@6041f286(void);
void Unwind@6041f295(void);
void Unwind@6041f2c0(void);
void Unwind@6041f2c9(void);
void Unwind@6041f2f0(void);
void Unwind@6041f2f8(void);
void Unwind@6041f307(void);
void Unwind@6041f340(void);
void Unwind@6041f348(void);
void Unwind@6041f350(void);
void Unwind@6041f380(void);
void Unwind@6041f388(void);
void Unwind@6041f390(void);
void Unwind@6041f398(void);
void Unwind@6041f3a0(void);
void Unwind@6041f3a8(void);
void Unwind@6041f3b0(void);
void Unwind@6041f3b8(void);
void Unwind@6041f3c0(void);
void Unwind@6041f3c8(void);
void Unwind@6041f3f0(void);
void Unwind@6041f430(void);
void Unwind@6041f43c(void);
void Unwind@6041f448(void);
void Unwind@6041f454(void);
void Unwind@6041f460(void);
void Unwind@6041f46c(void);
void Unwind@6041f478(void);
void Unwind@6041f484(void);
void Unwind@6041f490(void);
void Unwind@6041f49c(void);
void Unwind@6041f4a8(void);
void Unwind@6041f4b4(void);
void Unwind@6041f4c0(void);
void Unwind@6041f4cc(void);
void Unwind@6041f4d8(void);
void Unwind@6041f4e4(void);
void Unwind@6041f4f0(void);
void Unwind@6041f4fc(void);
void Unwind@6041f540(void);
void Unwind@6041f548(void);
void Unwind@6041f550(void);
void Unwind@6041f558(void);
void Unwind@6041f560(void);
void Unwind@6041f568(void);
void Unwind@6041f570(void);
void Unwind@6041f578(void);
void Unwind@6041f580(void);
void Unwind@6041f588(void);
void Unwind@6041f590(void);
void Unwind@6041f598(void);
void Unwind@6041f5a0(void);
void Unwind@6041f5a8(void);
void Unwind@6041f5b0(void);
void Unwind@6041f5b8(void);
void Unwind@6041f5c0(void);
void Unwind@6041f5c8(void);
void Unwind@6041f5d0(void);
void Unwind@6041f5d8(void);
void Unwind@6041f5e0(void);
void Unwind@6041f5eb(void);
void Unwind@6041f5f6(void);
void Unwind@6041f601(void);
void Unwind@6041f60c(void);
void Unwind@6041f617(void);
void Unwind@6041f622(void);
void Unwind@6041f62d(void);
void Unwind@6041f638(void);
void Unwind@6041f643(void);
void Unwind@6041f64e(void);
void Unwind@6041f680(void);
void Unwind@6041f688(void);
void Unwind@6041f6b0(void);
void Unwind@6041f6f0(void);
void Unwind@6041f6f8(void);
void Unwind@6041f700(void);
void Unwind@6041f730(void);
void Unwind@6041f73c(void);
void Unwind@6041f780(void);
void Unwind@6041f788(void);
void Unwind@6041f797(void);
void Unwind@6041f7c0(void);
void Unwind@6041f7cc(void);
void Unwind@6041f7d8(void);
void Unwind@6041f7e4(void);
void Unwind@6041f7f0(void);
void Unwind@6041f7fc(void);
void Unwind@6041f840(void);
void Unwind@6041f848(void);
void Unwind@6041f857(void);
void Unwind@6041f866(void);
void Unwind@6041f875(void);
void Unwind@6041f884(void);
void Unwind@6041f893(void);
void Unwind@6041f89b(void);
void Unwind@6041f8a3(void);
void Unwind@6041f8ab(void);
void Unwind@6041f8e0(void);
void Unwind@6041f8ec(void);
void Unwind@6041f8f8(void);
void Unwind@6041f904(void);
void Unwind@6041f910(void);
void Unwind@6041f91c(void);
void Unwind@6041f928(void);
void Unwind@6041f970(void);
void Unwind@6041f978(void);
void Unwind@6041f980(void);
void Unwind@6041f988(void);
void Unwind@6041f990(void);
void Unwind@6041f998(void);
void Unwind@6041f9a0(void);
void Unwind@6041f9a8(void);
void Unwind@6041f9b0(void);
void Unwind@6041f9b8(void);
void Unwind@6041f9c0(void);
void Unwind@6041f9c8(void);
void Unwind@6041f9d3(void);
void Unwind@6041f9de(void);
void Unwind@6041fa10(void);
void Unwind@6041fa40(void);
void Unwind@6041fa48(void);
void Unwind@6041fa57(void);
void Unwind@6041fa5f(void);
void Unwind@6041fa90(void);
void Unwind@6041fa98(void);
void Unwind@6041faa7(void);
void Unwind@6041faaf(void);
void Unwind@6041fab7(void);
void Unwind@6041fac2(void);
void Unwind@6041faf0(void);
void Unwind@6041faf8(void);
void Unwind@6041fb07(void);
void Unwind@6041fb0f(void);
void Unwind@6041fb17(void);
void Unwind@6041fb1f(void);
void Unwind@6041fb2a(void);
void Unwind@6041fb50(void);
void Unwind@6041fb5c(void);
void Unwind@6041fb68(void);
void Unwind@6041fb74(void);
void Unwind@6041fb80(void);
void Unwind@6041fb8c(void);
void Unwind@6041fb98(void);
void Unwind@6041fbe0(void);
void Unwind@6041fc10(void);
void Unwind@6041fc1c(void);
void Unwind@6041fc60(void);
void Unwind@6041fc68(void);
void Unwind@6041fc70(void);
void Unwind@6041fc78(void);
void Unwind@6041fc80(void);
void Unwind@6041fc88(void);
void Unwind@6041fcb0(void);
void Unwind@6041fcb8(void);
void Unwind@6041fcc0(void);
void Unwind@6041fcc8(void);
void Unwind@6041fcd0(void);
void Unwind@6041fcd8(void);
void Unwind@6041fce3(void);
void Unwind@6041fd10(void);
void Unwind@6041fd18(void);
void Unwind@6041fd27(void);
void Unwind@6041fd36(void);
void Unwind@6041fd3e(void);
void Unwind@6041fd49(void);
void Unwind@6041fd70(void);
void Unwind@6041fdb0(void);
void Unwind@6041fdb8(void);
void Unwind@6041fdc7(void);
void Unwind@6041fdd6(void);
void Unwind@6041fde5(void);
void Unwind@6041fdf4(void);
void Unwind@6041fdfc(void);
void Unwind@6041fe04(void);
void Unwind@6041fe0f(void);
void Unwind@6041fe40(void);
void Unwind@6041fe80(void);
void Unwind@6041fe88(void);
void Unwind@6041fe90(void);
void Unwind@6041fec0(void);
void Unwind@6041ff00(void);
void Unwind@6041ff08(void);
void Unwind@6041ff10(void);
void Unwind@6041ff18(void);
void Unwind@6041ff20(void);
void Unwind@6041ff28(void);
void Unwind@6041ff33(void);
void Unwind@6041ff3e(void);
void Unwind@6041ff70(void);
void Unwind@6041ff79(void);
void Unwind@6041ff82(void);
void Unwind@6041ff8b(void);
void Unwind@6041ffb0(void);
void Unwind@6041ffbc(void);
void Unwind@6041ffc8(void);
void Unwind@6041ffd4(void);
void Unwind@6041ffe0(void);
void Unwind@6041ffec(void);
void Unwind@6041fff8(void);
void Unwind@60420004(void);
void Unwind@60420010(void);
void Unwind@6042001c(void);
void Unwind@60420028(void);
void Unwind@60420070(void);
void Unwind@6042007b(void);
void Unwind@604200a0(void);
void Unwind@604200d0(void);
void Unwind@60420100(void);
void Unwind@60420130(void);
void Unwind@60420160(void);
void Unwind@60420169(void);
void Unwind@60420171(void);
void Unwind@604201a0(void);
void Unwind@604201d0(void);
void Unwind@604201d9(void);
void Unwind@604201e2(void);
void Unwind@60420210(void);
void Unwind@60420218(void);
void Unwind@60420227(void);
void Unwind@6042022f(void);
void Unwind@60420237(void);
void Unwind@60420242(void);
void Unwind@6042024a(void);
void Unwind@60420252(void);
void Unwind@6042025a(void);
void Unwind@60420262(void);
void Unwind@60420290(void);
void Unwind@604202d0(void);
void Unwind@604202db(void);
void Unwind@604202e6(void);
void Unwind@60420310(void);
void Unwind@60420340(void);
void Unwind@60420370(void);
void Unwind@604203a0(void);
void Unwind@604203d0(void);
void Unwind@60420400(void);
void Unwind@60420408(void);
void Unwind@60420440(void);
void Unwind@6042044d(void);
void Unwind@60420470(void);
void Unwind@604204a0(void);
void Unwind@604204d0(void);
void Unwind@604204d8(void);
void Unwind@60420500(void);
void Unwind@60420530(void);
void Unwind@60420560(void);
void Unwind@60420590(void);
void Unwind@60420599(void);
void Unwind@604205c0(void);
void Unwind@604205f0(void);
void Unwind@60420630(void);
void Unwind@6042063c(void);
void Unwind@60420648(void);
void Unwind@60420690(void);
void Unwind@604206c0(void);
void Unwind@604206c9(void);
void Unwind@604206d1(void);
void Unwind@60420700(void);
void Unwind@60420708(void);
void Unwind@60420722(void);
void Unwind@6042072b(void);
void Unwind@60420733(void);
void Unwind@6042074d(void);
void Unwind@60420756(void);
void Unwind@6042075e(void);
void Unwind@60420778(void);
void Unwind@60420781(void);
void Unwind@6042078a(void);
void Unwind@60420792(void);
void Unwind@6042079b(void);
void Unwind@604207a3(void);
void Unwind@604207ac(void);
void Unwind@604207b5(void);
void Unwind@604207be(void);
void Unwind@604207c7(void);
void Unwind@604207cf(void);
void Unwind@604207d8(void);
void Unwind@604207e0(void);
void Unwind@604207e9(void);
void Unwind@604207f1(void);
void Unwind@604207fa(void);
void Unwind@60420802(void);
void Unwind@6042080b(void);
void Unwind@60420813(void);
void Unwind@6042081c(void);
void Unwind@60420824(void);
void Unwind@6042082d(void);
void Unwind@60420835(void);
void Unwind@6042083e(void);
void Unwind@60420846(void);
void Unwind@6042084f(void);
void Unwind@60420858(void);
void Unwind@60420861(void);
void Unwind@6042086a(void);
void Unwind@60420890(void);
void FUN_60420960(void);
void FUN_60420990(void);
void FUN_60420a00(void);
void FUN_60420a20(void);
void FUN_60420a90(void);
void FUN_60420b30(void);

