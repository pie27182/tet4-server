typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

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

typedef struct CGraphicCtrl_ChatBox CGraphicCtrl_ChatBox, *PCGraphicCtrl_ChatBox;

struct CGraphicCtrl_ChatBox { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_MultiLineText CGraphicCtrl_MultiLineText, *PCGraphicCtrl_MultiLineText;

struct CGraphicCtrl_MultiLineText { // PlaceHolder Class Structure
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

typedef struct CGraphicCurve CGraphicCurve, *PCGraphicCurve;

struct CGraphicCurve { // PlaceHolder Class Structure
};

typedef struct CHgDDB16E CHgDDB16E, *PCHgDDB16E;

struct CHgDDB16E { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_PushBtn CGraphicCtrl_PushBtn, *PCGraphicCtrl_PushBtn;

struct CGraphicCtrl_PushBtn { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_SlideBar CGraphicCtrl_SlideBar, *PCGraphicCtrl_SlideBar;

struct CGraphicCtrl_SlideBar { // PlaceHolder Class Structure
};

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct CGraphicCtrl_Scale CGraphicCtrl_Scale, *PCGraphicCtrl_Scale;

struct CGraphicCtrl_Scale { // PlaceHolder Class Structure
};

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

typedef struct CGraphicCtrl_Tile_Ani CGraphicCtrl_Tile_Ani, *PCGraphicCtrl_Tile_Ani;

struct CGraphicCtrl_Tile_Ani { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct __CWndForInput __CWndForInput, *P__CWndForInput;

struct __CWndForInput { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList ESTypeList;

typedef struct CGraphicCtrl_EditBox CGraphicCtrl_EditBox, *PCGraphicCtrl_EditBox;

struct CGraphicCtrl_EditBox { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_TextBox CGraphicCtrl_TextBox, *PCGraphicCtrl_TextBox;

struct CGraphicCtrl_TextBox { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl CGraphicCtrl, *PCGraphicCtrl;

struct CGraphicCtrl { // PlaceHolder Class Structure
};

typedef struct CHgDIB16E CHgDIB16E, *PCHgDIB16E;

struct CHgDIB16E { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_Text CGraphicCtrl_Text, *PCGraphicCtrl_Text;

struct CGraphicCtrl_Text { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct CAnimateGameWnd CAnimateGameWnd, *PCAnimateGameWnd;

struct CAnimateGameWnd { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_Rotate CGraphicCtrl_Rotate, *PCGraphicCtrl_Rotate;

struct CGraphicCtrl_Rotate { // PlaceHolder Class Structure
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

typedef struct CGraphicCtrl_Notify CGraphicCtrl_Notify, *PCGraphicCtrl_Notify;

struct CGraphicCtrl_Notify { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_Root CGraphicCtrl_Root, *PCGraphicCtrl_Root;

struct CGraphicCtrl_Root { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_ScrollBar CGraphicCtrl_ScrollBar, *PCGraphicCtrl_ScrollBar;

struct CGraphicCtrl_ScrollBar { // PlaceHolder Class Structure
};

typedef struct CGraphicCtrl_Tile_Scale CGraphicCtrl_Tile_Scale, *PCGraphicCtrl_Tile_Scale;

struct CGraphicCtrl_Tile_Scale { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct CGraphicCtrl_TileSupport CGraphicCtrl_TileSupport, *PCGraphicCtrl_TileSupport;

struct CGraphicCtrl_TileSupport { // PlaceHolder Class Structure
};

typedef struct CHgDummyCtrl CHgDummyCtrl, *PCHgDummyCtrl;

struct CHgDummyCtrl { // PlaceHolder Class Structure
};

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef ulong DWORD;

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

struct HWND__ {
    int unused;
};

typedef struct tagTEXTMETRICA tagTEXTMETRICA, *PtagTEXTMETRICA;

typedef long LONG;

typedef uchar BYTE;

struct tagTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef struct tagTEXTMETRICA *LPTEXTMETRICA;

typedef struct __CGraphicCtrl_ChatInputBox __CGraphicCtrl_ChatInputBox, *P__CGraphicCtrl_ChatInputBox;

struct __CGraphicCtrl_ChatInputBox { // PlaceHolder Class Structure
};

typedef struct __CHgChatLine __CHgChatLine, *P__CHgChatLine;

struct __CHgChatLine { // PlaceHolder Class Structure
};

typedef struct __CHgChatInputBoxEdit __CHgChatInputBoxEdit, *P__CHgChatInputBoxEdit;

struct __CHgChatInputBoxEdit { // PlaceHolder Class Structure
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
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

typedef ULONG_PTR SIZE_T;

typedef long LONG_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[42];
};

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct tagPOINT tagPOINT, *PtagPOINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct tagPOINT *LPPOINT;

typedef UINT_PTR WPARAM;

typedef DWORD *LPDWORD;

typedef LONG_PTR LPARAM;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef HANDLE HLOCAL;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct tagSIZE *LPSIZE;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HDC__ *HDC;

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef LONG_PTR LRESULT;

typedef struct tagRECT *LPRECT;

typedef struct HICON__ *HICON;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef HICON HCURSOR;

typedef DWORD COLORREF;

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

typedef void (TIMECALLBACK)(UINT, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);

typedef TIMECALLBACK *LPTIMECALLBACK;

typedef UINT MMRESULT;

typedef struct timecaps_tag timecaps_tag, *Ptimecaps_tag;

typedef struct timecaps_tag *LPTIMECAPS;

struct timecaps_tag {
    UINT wPeriodMin;
    UINT wPeriodMax;
};

typedef char *va_list;


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_TileSupport/CGraphicCtrl_TileSupport - /CGraphicCtrl_TileSupport

typedef struct CGraphicCtrl_TileSupport_vftable CGraphicCtrl_TileSupport_vftable, *PCGraphicCtrl_TileSupport_vftable;

struct CGraphicCtrl_TileSupport_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_TileSupport virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_TileSupport virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_TileSupport virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*PostProc)(void *); // CGraphicCtrl virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_TileSupport virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};

typedef struct CGraphicCtrl_TileSupport_data CGraphicCtrl_TileSupport_data, *PCGraphicCtrl_TileSupport_data;

struct CGraphicCtrl_TileSupport_data {
    undefined4 offset_0x0;
};

typedef struct CHgImage16 CHgImage16, *PCHgImage16;

typedef struct CHgImageBase CHgImageBase, *PCHgImageBase;

struct CHgImageBase { // class CHgImageBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CHgImage16 { // class CHgImage16 : CHgImageBase
    struct CHgImageBase CHgImageBase;
};

typedef struct CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>, *PCArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>;

typedef struct CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable, *PCArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable;

typedef struct CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data, *PCArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data;

struct CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data {
    void *offset_0x0;
    int offset_0x4;
};

struct CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CObject virtual function #1
    undefined4 * (*deleting_destructor)(void *, byte); // CArray<...> virtual function #2
    void (*vfunction3)(void *, struct CArchive *); // CArray<...> virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
};

struct CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> { // class CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> : CObject
    struct CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_vftable *vftablePtr;
    struct CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>_data;
};

typedef struct CObject CObject, *PCObject;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CNoTrackObject CNoTrackObject, *PCNoTrackObject;

struct CNoTrackObject { // class CNoTrackObject
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

typedef struct CGraphicCtrl_EditBox_vftable CGraphicCtrl_EditBox_vftable, *PCGraphicCtrl_EditBox_vftable;

struct CGraphicCtrl_EditBox_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_EditBox virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_EditBox virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_EditBox virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #14
    void (*__OnInputArrive)(void *, char *); // CGraphicCtrl_EditBox virtual function #15
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_EditBox/CGraphicCtrl_EditBox - /CGraphicCtrl_EditBox

typedef struct CGraphicCtrl_EditBox_data CGraphicCtrl_EditBox_data, *PCGraphicCtrl_EditBox_data;

struct CGraphicCtrl_EditBox_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 *offset_0x20;
    undefined **offset_0x24;
    undefined4 offset_0x28;
    undefined field11_0x2c;
    undefined field12_0x2d;
    undefined field13_0x2e;
    undefined field14_0x2f;
    undefined field15_0x30;
    undefined field16_0x31;
    undefined field17_0x32;
    undefined field18_0x33;
    undefined field19_0x34;
    undefined field20_0x35;
    undefined field21_0x36;
    undefined field22_0x37;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined **offset_0x40;
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
    undefined field42_0x54;
    undefined field43_0x55;
    undefined field44_0x56;
    undefined field45_0x57;
    undefined field46_0x58;
    undefined field47_0x59;
    undefined field48_0x5a;
    undefined field49_0x5b;
    undefined field50_0x5c;
    undefined field51_0x5d;
    undefined field52_0x5e;
    undefined field53_0x5f;
    undefined field54_0x60;
    undefined field55_0x61;
    undefined field56_0x62;
    undefined field57_0x63;
    undefined field58_0x64;
    undefined field59_0x65;
    undefined field60_0x66;
    undefined field61_0x67;
    undefined field62_0x68;
    undefined field63_0x69;
    undefined field64_0x6a;
    undefined field65_0x6b;
    undefined field66_0x6c;
    undefined field67_0x6d;
    undefined field68_0x6e;
    undefined field69_0x6f;
    undefined field70_0x70;
    undefined field71_0x71;
    undefined field72_0x72;
    undefined field73_0x73;
    undefined field74_0x74;
    undefined field75_0x75;
    undefined field76_0x76;
    undefined field77_0x77;
    undefined field78_0x78;
    undefined field79_0x79;
    undefined field80_0x7a;
    undefined field81_0x7b;
    undefined field82_0x7c;
    undefined field83_0x7d;
    undefined field84_0x7e;
    undefined field85_0x7f;
    undefined field86_0x80;
    undefined field87_0x81;
    undefined field88_0x82;
    undefined field89_0x83;
    undefined field90_0x84;
    undefined field91_0x85;
    undefined field92_0x86;
    undefined field93_0x87;
    undefined field94_0x88;
    undefined field95_0x89;
    undefined field96_0x8a;
    undefined field97_0x8b;
    undefined field98_0x8c;
    undefined field99_0x8d;
    undefined field100_0x8e;
    undefined field101_0x8f;
    undefined field102_0x90;
    undefined field103_0x91;
    undefined field104_0x92;
    undefined field105_0x93;
    undefined field106_0x94;
    undefined field107_0x95;
    undefined field108_0x96;
    undefined field109_0x97;
    undefined field110_0x98;
    undefined field111_0x99;
    undefined field112_0x9a;
    undefined field113_0x9b;
    undefined field114_0x9c;
    undefined field115_0x9d;
    undefined field116_0x9e;
    undefined field117_0x9f;
    undefined field118_0xa0;
    undefined field119_0xa1;
    undefined field120_0xa2;
    undefined field121_0xa3;
    undefined field122_0xa4;
    undefined field123_0xa5;
    undefined field124_0xa6;
    undefined field125_0xa7;
    undefined field126_0xa8;
    undefined field127_0xa9;
    undefined field128_0xaa;
    undefined field129_0xab;
    undefined field130_0xac;
    undefined field131_0xad;
    undefined field132_0xae;
    undefined field133_0xaf;
    undefined4 offset_0xb0;
    undefined4 offset_0xb4;
    undefined1 offset_0xb8;
    undefined1 offset_0xb9;
    undefined1 offset_0xba;
    undefined1 offset_0xbb;
    undefined4 offset_0xbc;
    undefined field141_0xc0;
    undefined field142_0xc1;
    undefined field143_0xc2;
    undefined field144_0xc3;
    undefined field145_0xc4;
    undefined field146_0xc5;
    undefined field147_0xc6;
    undefined field148_0xc7;
    undefined field149_0xc8;
    undefined field150_0xc9;
    undefined field151_0xca;
    undefined field152_0xcb;
    undefined field153_0xcc;
    undefined field154_0xcd;
    undefined field155_0xce;
    undefined field156_0xcf;
    undefined field157_0xd0;
    undefined field158_0xd1;
    undefined field159_0xd2;
    undefined field160_0xd3;
    undefined field161_0xd4;
    undefined field162_0xd5;
    undefined field163_0xd6;
    undefined field164_0xd7;
    undefined field165_0xd8;
    undefined field166_0xd9;
    undefined field167_0xda;
    undefined field168_0xdb;
    undefined4 offset_0xdc;
};

typedef struct CGraphicCtrl_Root_vftable CGraphicCtrl_Root_vftable, *PCGraphicCtrl_Root_vftable;

struct CGraphicCtrl_Root_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Root virtual function #1
    void * (*clone)(void *); // CGraphicCtrl_Root virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*PostProc)(void *); // CGraphicCtrl virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_Root/CGraphicCtrl_Root - /CGraphicCtrl_Root


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_TextBox/CGraphicCtrl_TextBox - /CGraphicCtrl_TextBox

typedef struct CGraphicCtrl_TextBox_vftable CGraphicCtrl_TextBox_vftable, *PCGraphicCtrl_TextBox_vftable;

struct CGraphicCtrl_TextBox_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_TextBox virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_TextBox virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_TextBox virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl_TextBox virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};

typedef struct CList<CGraphicCtrl*,CGraphicCtrl*>_vftable CList<CGraphicCtrl*,CGraphicCtrl*>_vftable, *PCList<CGraphicCtrl*,CGraphicCtrl*>_vftable;

struct CList<CGraphicCtrl*,CGraphicCtrl*>_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CObject virtual function #1
    void * (*deleting_destructor)(void *, uint); // CList<CGraphicCtrl*...> virtual function #2
    void (*vfunction3)(void *, struct CArchive *); // CList<CGraphicCtrl*...> virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
};

typedef struct CList<CGraphicCtrl*,CGraphicCtrl*>_data CList<CGraphicCtrl*,CGraphicCtrl*>_data, *PCList<CGraphicCtrl*,CGraphicCtrl*>_data;

typedef struct CPlex CPlex, *PCPlex;

struct CList<CGraphicCtrl*,CGraphicCtrl*>_data {
    undefined4 *offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    struct CPlex *offset_0x10;
};

struct CPlex { // PlaceHolder Structure
};

typedef struct CList<CGraphicCtrl*,CGraphicCtrl*> CList<CGraphicCtrl*,CGraphicCtrl*>, *PCList<CGraphicCtrl*,CGraphicCtrl*>;

struct CList<CGraphicCtrl*,CGraphicCtrl*>_data {
    undefined4 *offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    struct CPlex *offset_0x10;
};

struct CList<CGraphicCtrl*,CGraphicCtrl*> { // class CList<CGraphicCtrl*,CGraphicCtrl*> : CObject
    struct CList<CGraphicCtrl*,CGraphicCtrl*>_vftable *vftablePtr;
    struct CList<CGraphicCtrl*,CGraphicCtrl*>_data CList<CGraphicCtrl*,CGraphicCtrl*>_data;
};

typedef struct CGraphicCtrl_PushBtn_vftable CGraphicCtrl_PushBtn_vftable, *PCGraphicCtrl_PushBtn_vftable;

struct CGraphicCtrl_PushBtn_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_PushBtn virtual function #1
    void * (*clone)(void *); // CGraphicCtrl_PushBtn virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_PushBtn virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_PushBtn virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_PushBtn virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_PushBtn virtual function #14
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #15
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #16
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #17
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #18
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #19
};

typedef struct CGraphicCtrl_PushBtn_data CGraphicCtrl_PushBtn_data, *PCGraphicCtrl_PushBtn_data;

struct CGraphicCtrl_PushBtn_data {
    int *offset_0x0;
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
    undefined1 offset_0x38;
    undefined field15_0x39;
    undefined field16_0x3a;
    undefined field17_0x3b;
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_PushBtn/CGraphicCtrl_PushBtn - /CGraphicCtrl_PushBtn

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct CNoTrackObject { // class CNoTrackObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct AFX_MODULE_STATE { // class AFX_MODULE_STATE : CNoTrackObject
    struct CNoTrackObject CNoTrackObject;
};

typedef struct CGraphicCtrl_SlideBar_vftable CGraphicCtrl_SlideBar_vftable, *PCGraphicCtrl_SlideBar_vftable;

struct CGraphicCtrl_SlideBar_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_SlideBar virtual function #1
    void * (*clone)(void *); // CGraphicCtrl_SlideBar virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_SlideBar virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_SlideBar virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    void (*_OnBtnDrag)(void *); // CGraphicCtrl_SlideBar virtual function #14
    void (*_PostMsg)(void *, uint); // CGraphicCtrl_SlideBar virtual function #15
};

typedef struct CGraphicCtrl_SlideBar_data CGraphicCtrl_SlideBar_data, *PCGraphicCtrl_SlideBar_data;

struct CGraphicCtrl_SlideBar_data {
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
    int *offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_SlideBar/CGraphicCtrl_SlideBar - /CGraphicCtrl_SlideBar

typedef struct __CGraphicCtrl_SlideBar_Thumb __CGraphicCtrl_SlideBar_Thumb, *P__CGraphicCtrl_SlideBar_Thumb;

typedef struct __CGraphicCtrl_SlideBar_Thumb_vftable __CGraphicCtrl_SlideBar_Thumb_vftable, *P__CGraphicCtrl_SlideBar_Thumb_vftable;

typedef struct CGraphicCtrl_data CGraphicCtrl_data, *PCGraphicCtrl_data;

typedef struct __CGraphicCtrl_SlideBar_Thumb_data __CGraphicCtrl_SlideBar_Thumb_data, *P__CGraphicCtrl_SlideBar_Thumb_data;

struct CGraphicCtrl_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined1 offset_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined2 offset_0x8;
    undefined field6_0xa;
    undefined field7_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined field14_0x24;
    undefined field15_0x25;
    undefined field16_0x26;
    undefined field17_0x27;
    undefined field18_0x28;
    undefined field19_0x29;
    undefined field20_0x2a;
    undefined field21_0x2b;
    undefined field22_0x2c;
    undefined field23_0x2d;
    undefined field24_0x2e;
    undefined field25_0x2f;
    undefined field26_0x30;
    undefined field27_0x31;
    undefined field28_0x32;
    undefined field29_0x33;
    undefined field30_0x34;
    undefined field31_0x35;
    undefined field32_0x36;
    undefined field33_0x37;
    undefined field34_0x38;
    undefined field35_0x39;
    undefined field36_0x3a;
    undefined field37_0x3b;
    undefined field38_0x3c;
    undefined field39_0x3d;
    undefined field40_0x3e;
    undefined field41_0x3f;
    undefined field42_0x40;
    undefined field43_0x41;
    undefined field44_0x42;
    undefined field45_0x43;
    undefined field46_0x44;
    undefined field47_0x45;
    undefined field48_0x46;
    undefined field49_0x47;
    undefined field50_0x48;
    undefined field51_0x49;
    undefined field52_0x4a;
    undefined field53_0x4b;
    undefined field54_0x4c;
    undefined field55_0x4d;
    undefined field56_0x4e;
    undefined field57_0x4f;
    undefined field58_0x50;
    undefined field59_0x51;
    undefined field60_0x52;
    undefined field61_0x53;
    undefined field62_0x54;
    undefined field63_0x55;
    undefined field64_0x56;
    undefined field65_0x57;
    undefined field66_0x58;
    undefined field67_0x59;
    undefined field68_0x5a;
    undefined field69_0x5b;
    undefined field70_0x5c;
    undefined field71_0x5d;
    undefined field72_0x5e;
    undefined field73_0x5f;
    undefined field74_0x60;
    undefined field75_0x61;
    undefined field76_0x62;
    undefined field77_0x63;
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    undefined field82_0x68;
    undefined field83_0x69;
    undefined field84_0x6a;
    undefined field85_0x6b;
    undefined field86_0x6c;
    undefined field87_0x6d;
    undefined field88_0x6e;
    undefined field89_0x6f;
    undefined field90_0x70;
    undefined field91_0x71;
    undefined field92_0x72;
    undefined field93_0x73;
    undefined field94_0x74;
    undefined field95_0x75;
    undefined field96_0x76;
    undefined field97_0x77;
    undefined field98_0x78;
    undefined field99_0x79;
    undefined field100_0x7a;
    undefined field101_0x7b;
    undefined field102_0x7c;
    undefined field103_0x7d;
    undefined field104_0x7e;
    undefined field105_0x7f;
    undefined field106_0x80;
    undefined field107_0x81;
    undefined field108_0x82;
    undefined field109_0x83;
    undefined field110_0x84;
    undefined field111_0x85;
    undefined field112_0x86;
    undefined field113_0x87;
    undefined field114_0x88;
    undefined field115_0x89;
    undefined field116_0x8a;
    undefined field117_0x8b;
    undefined field118_0x8c;
    undefined field119_0x8d;
    undefined field120_0x8e;
    undefined field121_0x8f;
    undefined field122_0x90;
    undefined field123_0x91;
    undefined field124_0x92;
    undefined field125_0x93;
    undefined field126_0x94;
    undefined field127_0x95;
    undefined field128_0x96;
    undefined field129_0x97;
    undefined field130_0x98;
    undefined field131_0x99;
    undefined field132_0x9a;
    undefined field133_0x9b;
    undefined field134_0x9c;
    undefined field135_0x9d;
    undefined field136_0x9e;
    undefined field137_0x9f;
    undefined field138_0xa0;
    undefined field139_0xa1;
    undefined field140_0xa2;
    undefined field141_0xa3;
    undefined field142_0xa4;
    undefined field143_0xa5;
    undefined field144_0xa6;
    undefined field145_0xa7;
    undefined field146_0xa8;
    undefined field147_0xa9;
    undefined field148_0xaa;
    undefined field149_0xab;
    undefined field150_0xac;
    undefined field151_0xad;
    undefined field152_0xae;
    undefined field153_0xaf;
    undefined field154_0xb0;
    undefined field155_0xb1;
    undefined field156_0xb2;
    undefined field157_0xb3;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
    undefined4 offset_0xdc;
    undefined **offset_0xe0;
    undefined4 *offset_0xe4;
    undefined4 offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    struct CPlex *offset_0xf4;
    undefined4 offset_0xf8;
    undefined field176_0xfc;
    undefined field177_0xfd;
    undefined field178_0xfe;
    undefined field179_0xff;
    undefined field180_0x100;
    undefined field181_0x101;
    undefined field182_0x102;
    undefined field183_0x103;
    undefined field184_0x104;
    undefined field185_0x105;
    undefined field186_0x106;
    undefined field187_0x107;
    undefined field188_0x108;
    undefined field189_0x109;
    undefined field190_0x10a;
    undefined field191_0x10b;
    undefined field192_0x10c;
    undefined field193_0x10d;
    undefined field194_0x10e;
    undefined field195_0x10f;
    undefined field196_0x110;
    undefined field197_0x111;
    undefined field198_0x112;
    undefined field199_0x113;
    undefined field200_0x114;
    undefined field201_0x115;
    undefined field202_0x116;
    undefined field203_0x117;
    undefined field204_0x118;
    undefined field205_0x119;
    undefined field206_0x11a;
    undefined field207_0x11b;
    undefined1 offset_0x11c;
    undefined1 offset_0x11d;
    undefined1 offset_0x11e;
    undefined1 offset_0x11f;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
    undefined4 offset_0x134;
    undefined4 offset_0x138;
    undefined4 offset_0x13c;
    undefined4 offset_0x140;
    undefined4 offset_0x144;
    undefined4 offset_0x148;
    undefined4 offset_0x14c;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined4 offset_0x158;
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
};

struct CGraphicCtrl_PushBtn_data {
    int *offset_0x0;
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
    undefined1 offset_0x38;
    undefined field15_0x39;
    undefined field16_0x3a;
    undefined field17_0x3b;
};

struct __CGraphicCtrl_SlideBar_Thumb_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
};

struct __CGraphicCtrl_SlideBar_Thumb_vftable {
    CGraphicCtrl * (*vfunction1)(void *, byte); // __CGraphicCtrl_SlideBar_Thumb virtual function #1
    void * (*_AllocSelf)(void *); // __CGraphicCtrl_SlideBar_Thumb virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_PushBtn virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_PushBtn virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_PushBtn virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_PushBtn virtual function #14
    void (*OnBtnPushed)(void *); // __CGraphicCtrl_SlideBar_Thumb virtual function #15
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #16
    void (*OnBtnDrag)(void *); // __CGraphicCtrl_SlideBar_Thumb virtual function #17
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #18
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #19
};

struct __CGraphicCtrl_SlideBar_Thumb { // class __CGraphicCtrl_SlideBar_Thumb : CGraphicCtrl_PushBtn
    struct __CGraphicCtrl_SlideBar_Thumb_vftable *vftablePtr;
    struct CGraphicCtrl_data CGraphicCtrl_data;
    struct CGraphicCtrl_PushBtn_data CGraphicCtrl_PushBtn_data;
    struct __CGraphicCtrl_SlideBar_Thumb_data __CGraphicCtrl_SlideBar_Thumb_data;
};

typedef struct CAnimateGmApp CAnimateGmApp, *PCAnimateGmApp;

typedef struct CAnimateGmApp_vftable CAnimateGmApp_vftable, *PCAnimateGmApp_vftable;

struct CAnimateGmApp { // class CAnimateGmApp : CWinApp
    struct CAnimateGmApp_vftable *vftablePtr;
};

struct CAnimateGmApp_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWinApp virtual function #1
    CWinApp * (*deleting_destructor)(void *, byte); // CAnimateGmApp virtual function #2
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CCmdTarget virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CAnimateGmApp virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CCmdTarget virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    undefined4 (*vfunction23)(void *); // CAnimateGmApp virtual function #23
    int (*Run)(void *); // CWinApp virtual function #24
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWinThread virtual function #25
    int (*PumpMessage)(void *); // CWinThread virtual function #26
    int (*OnIdle)(void *, long); // CWinApp virtual function #27
    int (*IsIdleMessage)(void *, struct tagMSG *); // CWinThread virtual function #28
    int (*ExitInstance)(void *); // CWinApp virtual function #29
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
};

typedef struct CAnimateGameWnd_vftable0 CAnimateGameWnd_vftable0, *PCAnimateGameWnd_vftable0;

struct CAnimateGameWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CAnimateGameWnd virtual function #1
    CAnimateGameWnd * (*deleting_destructor)(void *, byte); // CAnimateGameWnd virtual function #2
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CAnimateGameWnd virtual function #13
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
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #66
    void (*vfunction67)(void *); // __CWndForInput virtual function #67
    void (*vfunction68)(void *); // __CWndForInput virtual function #68
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
    void (*DoExActive)(void *, int); // CAnimateGameWnd virtual function #86
    int (*FlipScreen)(void *); // CGameWnd virtual function #87
    void (*ExitGameRoom)(void *); // CGameWnd virtual function #88
    void (*AccuseUser)(void *); // CGameWnd virtual function #89
    undefined (*vfunction90)(void); // MSVCR90.DLL CAnimateGameWnd pure virtual function #90
    char * (*GetGameChatContent)(void *); // CGameWnd virtual function #91
    void (*UpdateChanceInfo)(void *, struct CMemberData *); // CGameWnd virtual function #92
    void (*CreateCaptionButtons)(void *); // CGameWnd virtual function #93
    undefined (*vfunction94)(void); // MSVCR90.DLL CAnimateGameWnd pure virtual function #94
    undefined (*vfunction95)(void); // MSVCR90.DLL CAnimateGameWnd pure virtual function #95
    undefined (*vfunction96)(void); // MSVCR90.DLL CAnimateGameWnd pure virtual function #96
    undefined (*vfunction97)(void); // MSVCR90.DLL CAnimateGameWnd pure virtual function #97
    undefined (*vfunction98)(void); // MSVCR90.DLL CAnimateGameWnd pure virtual function #98
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
    void (*FlipEx)(void *, struct CRect *); // CAnimateGameWnd virtual function #129
    void (*FlipSc)(void *, struct CRect *); // CAnimateGameWnd virtual function #130
    void (*AnimationProc)(void *, ulong); // CAnimateGameWnd virtual function #131
};

typedef struct CAnimateGameWnd_vftable1 CAnimateGameWnd_vftable1, *PCAnimateGameWnd_vftable1;

struct CAnimateGameWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CAnimateGameWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CGameWnd virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CControlBase virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CAnimateGameWnd_data CAnimateGameWnd_data, *PCAnimateGameWnd_data;

struct CAnimateGameWnd_data {
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
    undefined1 offset_0x174;
    undefined field373_0x175;
    undefined field374_0x176;
    undefined field375_0x177;
    undefined4 offset_0x178;
    undefined4 offset_0x17c;
    undefined4 offset_0x180;
    undefined field379_0x184;
    undefined field380_0x185;
    undefined field381_0x186;
    undefined field382_0x187;
    undefined4 offset_0x188;
    undefined4 offset_0x18c;
    undefined4 offset_0x190;
    undefined4 offset_0x194;
    undefined4 offset_0x198;
    undefined **offset_0x19c;
    undefined field389_0x1a0;
    undefined field390_0x1a1;
    undefined field391_0x1a2;
    undefined field392_0x1a3;
    undefined field393_0x1a4;
    undefined field394_0x1a5;
    undefined field395_0x1a6;
    undefined field396_0x1a7;
    undefined field397_0x1a8;
    undefined field398_0x1a9;
    undefined field399_0x1aa;
    undefined field400_0x1ab;
    undefined field401_0x1ac;
    undefined field402_0x1ad;
    undefined field403_0x1ae;
    undefined field404_0x1af;
    undefined field405_0x1b0;
    undefined field406_0x1b1;
    undefined field407_0x1b2;
    undefined field408_0x1b3;
    undefined field409_0x1b4;
    undefined field410_0x1b5;
    undefined field411_0x1b6;
    undefined field412_0x1b7;
    undefined field413_0x1b8;
    undefined field414_0x1b9;
    undefined field415_0x1ba;
    undefined field416_0x1bb;
    undefined field417_0x1bc;
    undefined field418_0x1bd;
    undefined field419_0x1be;
    undefined field420_0x1bf;
    undefined field421_0x1c0;
    undefined field422_0x1c1;
    undefined field423_0x1c2;
    undefined field424_0x1c3;
    undefined field425_0x1c4;
    undefined field426_0x1c5;
    undefined field427_0x1c6;
    undefined field428_0x1c7;
    undefined field429_0x1c8;
    undefined field430_0x1c9;
    undefined field431_0x1ca;
    undefined field432_0x1cb;
    undefined field433_0x1cc;
    undefined field434_0x1cd;
    undefined field435_0x1ce;
    undefined field436_0x1cf;
    undefined field437_0x1d0;
    undefined field438_0x1d1;
    undefined field439_0x1d2;
    undefined field440_0x1d3;
    undefined field441_0x1d4;
    undefined field442_0x1d5;
    undefined field443_0x1d6;
    undefined field444_0x1d7;
    undefined field445_0x1d8;
    undefined field446_0x1d9;
    undefined field447_0x1da;
    undefined field448_0x1db;
    undefined field449_0x1dc;
    undefined field450_0x1dd;
    undefined field451_0x1de;
    undefined field452_0x1df;
    undefined field453_0x1e0;
    undefined field454_0x1e1;
    undefined field455_0x1e2;
    undefined field456_0x1e3;
    undefined field457_0x1e4;
    undefined field458_0x1e5;
    undefined field459_0x1e6;
    undefined field460_0x1e7;
    undefined field461_0x1e8;
    undefined field462_0x1e9;
    undefined field463_0x1ea;
    undefined field464_0x1eb;
    undefined field465_0x1ec;
    undefined field466_0x1ed;
    undefined field467_0x1ee;
    undefined field468_0x1ef;
    undefined field469_0x1f0;
    undefined field470_0x1f1;
    undefined field471_0x1f2;
    undefined field472_0x1f3;
    undefined field473_0x1f4;
    undefined field474_0x1f5;
    undefined field475_0x1f6;
    undefined field476_0x1f7;
    undefined field477_0x1f8;
    undefined field478_0x1f9;
    undefined field479_0x1fa;
    undefined field480_0x1fb;
    undefined field481_0x1fc;
    undefined field482_0x1fd;
    undefined field483_0x1fe;
    undefined field484_0x1ff;
    undefined4 offset_0x200;
    undefined field486_0x204;
    undefined field487_0x205;
    undefined field488_0x206;
    undefined field489_0x207;
    undefined4 offset_0x208;
    DWORD offset_0x20c;
    undefined4 offset_0x210;
    undefined4 offset_0x214;
    undefined4 offset_0x218;
    undefined4 offset_0x21c;
    undefined4 offset_0x220;
    undefined4 offset_0x224;
    undefined4 offset_0x228;
};


// WARNING! conflicting data type names: /ClassDataTypes/CAnimateGameWnd/CAnimateGameWnd - /CAnimateGameWnd


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCurve/CGraphicCurve - /CGraphicCurve

typedef struct CGraphicCurve_data CGraphicCurve_data, *PCGraphicCurve_data;

struct CGraphicCurve_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined *offset_0x10;
    undefined1 offset_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    float offset_0x20;
    undefined1 offset_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    float offset_0x28;
    undefined4 offset_0x2c;
    float offset_0x30;
    undefined4 offset_0x34;
    float offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined1 offset_0x44;
    undefined field24_0x45;
    undefined field25_0x46;
    undefined field26_0x47;
    float offset_0x48;
    undefined4 offset_0x4c;
    float offset_0x50;
    undefined4 offset_0x54;
    float offset_0x58;
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
    float offset_0x6c;
    float offset_0x70;
    float offset_0x74;
    float offset_0x78;
    float offset_0x7c;
    float offset_0x80;
    int offset_0x84;
    undefined4 offset_0x88;
};

typedef struct CGraphicCurve_vftable CGraphicCurve_vftable, *PCGraphicCurve_vftable;

struct CGraphicCurve_vftable {
    int (*_SafeAction_DAMPING_Common)(void *); // CGraphicCurve virtual function #1
    int (*_SafeAction_DAMPING_X)(void *); // CGraphicCurve virtual function #2
    int (*_SafeAction_DAMPING_Y)(void *); // CGraphicCurve virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_Rotate/CGraphicCtrl_Rotate - /CGraphicCtrl_Rotate

typedef struct CGraphicCtrl_Rotate_vftable CGraphicCtrl_Rotate_vftable, *PCGraphicCtrl_Rotate_vftable;

struct CGraphicCtrl_Rotate_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Rotate virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_Rotate virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_Rotate virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*PostProc)(void *); // CGraphicCtrl virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_Rotate virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};

typedef struct CGraphicCtrl_Rotate_data CGraphicCtrl_Rotate_data, *PCGraphicCtrl_Rotate_data;

struct CGraphicCtrl_Rotate_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
};

typedef struct CGraphicCtrl_PushBtn_Ani CGraphicCtrl_PushBtn_Ani, *PCGraphicCtrl_PushBtn_Ani;

typedef struct CGraphicCtrl_PushBtn_Ani_vftable CGraphicCtrl_PushBtn_Ani_vftable, *PCGraphicCtrl_PushBtn_Ani_vftable;

typedef struct CGraphicCtrl_Tile_Ani_data CGraphicCtrl_Tile_Ani_data, *PCGraphicCtrl_Tile_Ani_data;

typedef struct CGraphicCtrl_PushBtn_Ani_data CGraphicCtrl_PushBtn_Ani_data, *PCGraphicCtrl_PushBtn_Ani_data;

struct CGraphicCtrl_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined1 offset_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined2 offset_0x8;
    undefined field6_0xa;
    undefined field7_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined field14_0x24;
    undefined field15_0x25;
    undefined field16_0x26;
    undefined field17_0x27;
    undefined field18_0x28;
    undefined field19_0x29;
    undefined field20_0x2a;
    undefined field21_0x2b;
    undefined field22_0x2c;
    undefined field23_0x2d;
    undefined field24_0x2e;
    undefined field25_0x2f;
    undefined field26_0x30;
    undefined field27_0x31;
    undefined field28_0x32;
    undefined field29_0x33;
    undefined field30_0x34;
    undefined field31_0x35;
    undefined field32_0x36;
    undefined field33_0x37;
    undefined field34_0x38;
    undefined field35_0x39;
    undefined field36_0x3a;
    undefined field37_0x3b;
    undefined field38_0x3c;
    undefined field39_0x3d;
    undefined field40_0x3e;
    undefined field41_0x3f;
    undefined field42_0x40;
    undefined field43_0x41;
    undefined field44_0x42;
    undefined field45_0x43;
    undefined field46_0x44;
    undefined field47_0x45;
    undefined field48_0x46;
    undefined field49_0x47;
    undefined field50_0x48;
    undefined field51_0x49;
    undefined field52_0x4a;
    undefined field53_0x4b;
    undefined field54_0x4c;
    undefined field55_0x4d;
    undefined field56_0x4e;
    undefined field57_0x4f;
    undefined field58_0x50;
    undefined field59_0x51;
    undefined field60_0x52;
    undefined field61_0x53;
    undefined field62_0x54;
    undefined field63_0x55;
    undefined field64_0x56;
    undefined field65_0x57;
    undefined field66_0x58;
    undefined field67_0x59;
    undefined field68_0x5a;
    undefined field69_0x5b;
    undefined field70_0x5c;
    undefined field71_0x5d;
    undefined field72_0x5e;
    undefined field73_0x5f;
    undefined field74_0x60;
    undefined field75_0x61;
    undefined field76_0x62;
    undefined field77_0x63;
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    undefined field82_0x68;
    undefined field83_0x69;
    undefined field84_0x6a;
    undefined field85_0x6b;
    undefined field86_0x6c;
    undefined field87_0x6d;
    undefined field88_0x6e;
    undefined field89_0x6f;
    undefined field90_0x70;
    undefined field91_0x71;
    undefined field92_0x72;
    undefined field93_0x73;
    undefined field94_0x74;
    undefined field95_0x75;
    undefined field96_0x76;
    undefined field97_0x77;
    undefined field98_0x78;
    undefined field99_0x79;
    undefined field100_0x7a;
    undefined field101_0x7b;
    undefined field102_0x7c;
    undefined field103_0x7d;
    undefined field104_0x7e;
    undefined field105_0x7f;
    undefined field106_0x80;
    undefined field107_0x81;
    undefined field108_0x82;
    undefined field109_0x83;
    undefined field110_0x84;
    undefined field111_0x85;
    undefined field112_0x86;
    undefined field113_0x87;
    undefined field114_0x88;
    undefined field115_0x89;
    undefined field116_0x8a;
    undefined field117_0x8b;
    undefined field118_0x8c;
    undefined field119_0x8d;
    undefined field120_0x8e;
    undefined field121_0x8f;
    undefined field122_0x90;
    undefined field123_0x91;
    undefined field124_0x92;
    undefined field125_0x93;
    undefined field126_0x94;
    undefined field127_0x95;
    undefined field128_0x96;
    undefined field129_0x97;
    undefined field130_0x98;
    undefined field131_0x99;
    undefined field132_0x9a;
    undefined field133_0x9b;
    undefined field134_0x9c;
    undefined field135_0x9d;
    undefined field136_0x9e;
    undefined field137_0x9f;
    undefined field138_0xa0;
    undefined field139_0xa1;
    undefined field140_0xa2;
    undefined field141_0xa3;
    undefined field142_0xa4;
    undefined field143_0xa5;
    undefined field144_0xa6;
    undefined field145_0xa7;
    undefined field146_0xa8;
    undefined field147_0xa9;
    undefined field148_0xaa;
    undefined field149_0xab;
    undefined field150_0xac;
    undefined field151_0xad;
    undefined field152_0xae;
    undefined field153_0xaf;
    undefined field154_0xb0;
    undefined field155_0xb1;
    undefined field156_0xb2;
    undefined field157_0xb3;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
    undefined4 offset_0xdc;
    undefined **offset_0xe0;
    undefined4 *offset_0xe4;
    undefined4 offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    struct CPlex *offset_0xf4;
    undefined4 offset_0xf8;
    undefined field176_0xfc;
    undefined field177_0xfd;
    undefined field178_0xfe;
    undefined field179_0xff;
    undefined field180_0x100;
    undefined field181_0x101;
    undefined field182_0x102;
    undefined field183_0x103;
    undefined field184_0x104;
    undefined field185_0x105;
    undefined field186_0x106;
    undefined field187_0x107;
    undefined field188_0x108;
    undefined field189_0x109;
    undefined field190_0x10a;
    undefined field191_0x10b;
    undefined field192_0x10c;
    undefined field193_0x10d;
    undefined field194_0x10e;
    undefined field195_0x10f;
    undefined field196_0x110;
    undefined field197_0x111;
    undefined field198_0x112;
    undefined field199_0x113;
    undefined field200_0x114;
    undefined field201_0x115;
    undefined field202_0x116;
    undefined field203_0x117;
    undefined field204_0x118;
    undefined field205_0x119;
    undefined field206_0x11a;
    undefined field207_0x11b;
    undefined1 offset_0x11c;
    undefined1 offset_0x11d;
    undefined1 offset_0x11e;
    undefined1 offset_0x11f;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
    undefined4 offset_0x134;
    undefined4 offset_0x138;
    undefined4 offset_0x13c;
    undefined4 offset_0x140;
    undefined4 offset_0x144;
    undefined4 offset_0x148;
    undefined4 offset_0x14c;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined4 offset_0x158;
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
};

struct CGraphicCtrl_Tile_Ani_data {
    undefined4 offset_0x0;
    undefined4 *offset_0x4;
    int *offset_0x8;
    void *offset_0xc;
    undefined1 offset_0x10;
    undefined1 offset_0x11;
    byte offset_0x12;
    undefined1 offset_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined1 offset_0x1c;
    undefined1 offset_0x1d;
    undefined1 offset_0x1e;
    undefined field13_0x1f;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
};

struct CGraphicCtrl_PushBtn_Ani_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined1 offset_0x24;
    undefined field10_0x25;
    undefined field11_0x26;
    undefined field12_0x27;
};

struct CGraphicCtrl_PushBtn_Ani_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_PushBtn_Ani virtual function #1
    void * (*clone)(void *); // CGraphicCtrl_PushBtn_Ani virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_PushBtn_Ani virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl_Tile_Ani virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_PushBtn_Ani virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CHgDummyCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl_Tile_Ani virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile_Ani virtual function #14
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile_Ani virtual function #15
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_PushBtn_Ani virtual function #16
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #17
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #18
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #19
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #20
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #21
};

struct CGraphicCtrl_PushBtn_Ani { // class CGraphicCtrl_PushBtn_Ani : CGraphicCtrl_Tile_Ani
    struct CGraphicCtrl_PushBtn_Ani_vftable *vftablePtr;
    struct CGraphicCtrl_data CGraphicCtrl_data;
    struct CGraphicCtrl_Tile_Ani_data CGraphicCtrl_Tile_Ani_data;
    struct CGraphicCtrl_PushBtn_Ani_data CGraphicCtrl_PushBtn_Ani_data;
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

typedef struct CGraphicCtrl_MultiLineText_vftable CGraphicCtrl_MultiLineText_vftable, *PCGraphicCtrl_MultiLineText_vftable;

struct CGraphicCtrl_MultiLineText_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_MultiLineText virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_MultiLineText virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_MultiLineText virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    char * (*GetBufData)(void *); // CGraphicCtrl_MultiLineText virtual function #14
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_MultiLineText/CGraphicCtrl_MultiLineText - /CGraphicCtrl_MultiLineText

typedef struct CGraphicCtrl_MultiLineText_data CGraphicCtrl_MultiLineText_data, *PCGraphicCtrl_MultiLineText_data;

struct CGraphicCtrl_MultiLineText_data {
    undefined **offset_0x0;
    undefined4 offset_0x4;
    undefined1 offset_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined **offset_0xc;
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
    undefined4 offset_0x70;
    undefined4 offset_0x74;
    undefined field105_0x78;
    undefined field106_0x79;
    undefined field107_0x7a;
    undefined field108_0x7b;
    undefined field109_0x7c;
    undefined field110_0x7d;
    undefined field111_0x7e;
    undefined field112_0x7f;
    undefined field113_0x80;
    undefined field114_0x81;
    undefined field115_0x82;
    undefined field116_0x83;
    undefined field117_0x84;
    undefined field118_0x85;
    undefined field119_0x86;
    undefined field120_0x87;
    undefined field121_0x88;
    undefined field122_0x89;
    undefined field123_0x8a;
    undefined field124_0x8b;
    undefined field125_0x8c;
    undefined field126_0x8d;
    undefined field127_0x8e;
    undefined field128_0x8f;
    undefined field129_0x90;
    undefined field130_0x91;
    undefined field131_0x92;
    undefined field132_0x93;
    undefined field133_0x94;
    undefined field134_0x95;
    undefined field135_0x96;
    undefined field136_0x97;
    undefined field137_0x98;
    undefined field138_0x99;
    undefined field139_0x9a;
    undefined field140_0x9b;
    undefined field141_0x9c;
    undefined field142_0x9d;
    undefined field143_0x9e;
    undefined field144_0x9f;
    undefined field145_0xa0;
    undefined field146_0xa1;
    undefined field147_0xa2;
    undefined field148_0xa3;
    undefined field149_0xa4;
    undefined field150_0xa5;
    undefined field151_0xa6;
    undefined field152_0xa7;
    undefined field153_0xa8;
    undefined field154_0xa9;
    undefined field155_0xaa;
    undefined field156_0xab;
    undefined field157_0xac;
    undefined field158_0xad;
    undefined field159_0xae;
    undefined field160_0xaf;
    undefined field161_0xb0;
    undefined field162_0xb1;
    undefined field163_0xb2;
    undefined field164_0xb3;
    undefined field165_0xb4;
    undefined field166_0xb5;
    undefined field167_0xb6;
    undefined field168_0xb7;
    undefined field169_0xb8;
    undefined field170_0xb9;
    undefined field171_0xba;
    undefined field172_0xbb;
    undefined field173_0xbc;
    undefined field174_0xbd;
    undefined field175_0xbe;
    undefined field176_0xbf;
    undefined field177_0xc0;
    undefined field178_0xc1;
    undefined field179_0xc2;
    undefined field180_0xc3;
    undefined field181_0xc4;
    undefined field182_0xc5;
    undefined field183_0xc6;
    undefined field184_0xc7;
    undefined field185_0xc8;
    undefined field186_0xc9;
    undefined field187_0xca;
    undefined field188_0xcb;
    undefined field189_0xcc;
    undefined field190_0xcd;
    undefined field191_0xce;
    undefined field192_0xcf;
    undefined field193_0xd0;
    undefined field194_0xd1;
    undefined field195_0xd2;
    undefined field196_0xd3;
    undefined field197_0xd4;
    undefined field198_0xd5;
    undefined field199_0xd6;
    undefined field200_0xd7;
    undefined field201_0xd8;
    undefined field202_0xd9;
    undefined field203_0xda;
    undefined field204_0xdb;
    undefined field205_0xdc;
    undefined field206_0xdd;
    undefined field207_0xde;
    undefined field208_0xdf;
    undefined field209_0xe0;
    undefined field210_0xe1;
    undefined field211_0xe2;
    undefined field212_0xe3;
    undefined field213_0xe4;
    undefined field214_0xe5;
    undefined field215_0xe6;
    undefined field216_0xe7;
    undefined field217_0xe8;
    undefined field218_0xe9;
    undefined field219_0xea;
    undefined field220_0xeb;
    undefined field221_0xec;
    undefined field222_0xed;
    undefined field223_0xee;
    undefined field224_0xef;
    undefined field225_0xf0;
    undefined field226_0xf1;
    undefined field227_0xf2;
    undefined field228_0xf3;
    undefined field229_0xf4;
    undefined field230_0xf5;
    undefined field231_0xf6;
    undefined field232_0xf7;
    undefined field233_0xf8;
    undefined field234_0xf9;
    undefined field235_0xfa;
    undefined field236_0xfb;
    undefined field237_0xfc;
    undefined field238_0xfd;
    undefined field239_0xfe;
    undefined field240_0xff;
    undefined field241_0x100;
    undefined field242_0x101;
    undefined field243_0x102;
    undefined field244_0x103;
    undefined field245_0x104;
    undefined field246_0x105;
    undefined field247_0x106;
    undefined field248_0x107;
    undefined field249_0x108;
    undefined field250_0x109;
    undefined field251_0x10a;
    undefined field252_0x10b;
    undefined4 offset_0x10c;
    undefined field254_0x110;
    undefined field255_0x111;
    undefined field256_0x112;
    undefined field257_0x113;
    undefined field258_0x114;
    undefined field259_0x115;
    undefined field260_0x116;
    undefined field261_0x117;
    undefined4 offset_0x118;
    undefined4 offset_0x11c;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined2 offset_0x128;
    undefined field267_0x12a;
    undefined field268_0x12b;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
    undefined field271_0x134;
    undefined field272_0x135;
    undefined field273_0x136;
    undefined field274_0x137;
    undefined **offset_0x138;
    undefined field276_0x13c;
    undefined field277_0x13d;
    undefined field278_0x13e;
    undefined field279_0x13f;
    undefined field280_0x140;
    undefined field281_0x141;
    undefined field282_0x142;
    undefined field283_0x143;
    undefined field284_0x144;
    undefined field285_0x145;
    undefined field286_0x146;
    undefined field287_0x147;
    undefined field288_0x148;
    undefined field289_0x149;
    undefined field290_0x14a;
    undefined field291_0x14b;
    undefined field292_0x14c;
    undefined field293_0x14d;
    undefined field294_0x14e;
    undefined field295_0x14f;
    undefined field296_0x150;
    undefined field297_0x151;
    undefined field298_0x152;
    undefined field299_0x153;
    undefined field300_0x154;
    undefined field301_0x155;
    undefined field302_0x156;
    undefined field303_0x157;
    undefined field304_0x158;
    undefined field305_0x159;
    undefined field306_0x15a;
    undefined field307_0x15b;
    undefined field308_0x15c;
    undefined field309_0x15d;
    undefined field310_0x15e;
    undefined field311_0x15f;
    undefined field312_0x160;
    undefined field313_0x161;
    undefined field314_0x162;
    undefined field315_0x163;
    undefined field316_0x164;
    undefined field317_0x165;
    undefined field318_0x166;
    undefined field319_0x167;
    undefined field320_0x168;
    undefined field321_0x169;
    undefined field322_0x16a;
    undefined field323_0x16b;
    undefined field324_0x16c;
    undefined field325_0x16d;
    undefined field326_0x16e;
    undefined field327_0x16f;
    undefined field328_0x170;
    undefined field329_0x171;
    undefined field330_0x172;
    undefined field331_0x173;
    undefined field332_0x174;
    undefined field333_0x175;
    undefined field334_0x176;
    undefined field335_0x177;
    undefined field336_0x178;
    undefined field337_0x179;
    undefined field338_0x17a;
    undefined field339_0x17b;
    undefined field340_0x17c;
    undefined field341_0x17d;
    undefined field342_0x17e;
    undefined field343_0x17f;
    undefined field344_0x180;
    undefined field345_0x181;
    undefined field346_0x182;
    undefined field347_0x183;
    undefined field348_0x184;
    undefined field349_0x185;
    undefined field350_0x186;
    undefined field351_0x187;
    undefined field352_0x188;
    undefined field353_0x189;
    undefined field354_0x18a;
    undefined field355_0x18b;
    undefined4 *offset_0x18c;
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_MultiLineText/__CHgChatLine/__CHgChatLine - /CGraphicCtrl_MultiLineText/__CHgChatLine

typedef struct __CHgChatLine_vftable __CHgChatLine_vftable, *P__CHgChatLine_vftable;

struct __CHgChatLine_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // __CHgChatLine virtual function #1
};

typedef struct __CHgChatLine_data __CHgChatLine_data, *P__CHgChatLine_data;

struct __CHgChatLine_data {
    void *offset_0x0;
    void *offset_0x4;
    undefined1 offset_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
};

typedef struct __CGraphicCtrl_ChatInputBox_data __CGraphicCtrl_ChatInputBox_data, *P__CGraphicCtrl_ChatInputBox_data;

struct __CGraphicCtrl_ChatInputBox_data {
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
    undefined4 offset_0x100;
    undefined4 offset_0x104;
    undefined4 offset_0x108;
    undefined4 offset_0x10c;
    undefined4 offset_0x110;
    undefined4 offset_0x114;
    undefined4 offset_0x118;
    undefined4 offset_0x11c;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined4 offset_0x128;
    undefined **offset_0x12c;
    undefined field268_0x130;
    undefined field269_0x131;
    undefined field270_0x132;
    undefined field271_0x133;
    undefined field272_0x134;
    undefined field273_0x135;
    undefined field274_0x136;
    undefined field275_0x137;
    undefined field276_0x138;
    undefined field277_0x139;
    undefined field278_0x13a;
    undefined field279_0x13b;
    undefined field280_0x13c;
    undefined field281_0x13d;
    undefined field282_0x13e;
    undefined field283_0x13f;
    undefined field284_0x140;
    undefined field285_0x141;
    undefined field286_0x142;
    undefined field287_0x143;
    undefined field288_0x144;
    undefined field289_0x145;
    undefined field290_0x146;
    undefined field291_0x147;
    undefined field292_0x148;
    undefined field293_0x149;
    undefined field294_0x14a;
    undefined field295_0x14b;
    undefined field296_0x14c;
    undefined field297_0x14d;
    undefined field298_0x14e;
    undefined field299_0x14f;
    undefined field300_0x150;
    undefined field301_0x151;
    undefined field302_0x152;
    undefined field303_0x153;
    undefined field304_0x154;
    undefined field305_0x155;
    undefined field306_0x156;
    undefined field307_0x157;
    undefined field308_0x158;
    undefined field309_0x159;
    undefined field310_0x15a;
    undefined field311_0x15b;
    undefined field312_0x15c;
    undefined field313_0x15d;
    undefined field314_0x15e;
    undefined field315_0x15f;
    undefined field316_0x160;
    undefined field317_0x161;
    undefined field318_0x162;
    undefined field319_0x163;
    undefined field320_0x164;
    undefined field321_0x165;
    undefined field322_0x166;
    undefined field323_0x167;
    undefined field324_0x168;
    undefined field325_0x169;
    undefined field326_0x16a;
    undefined field327_0x16b;
    undefined field328_0x16c;
    undefined field329_0x16d;
    undefined field330_0x16e;
    undefined field331_0x16f;
    undefined field332_0x170;
    undefined field333_0x171;
    undefined field334_0x172;
    undefined field335_0x173;
    undefined field336_0x174;
    undefined field337_0x175;
    undefined field338_0x176;
    undefined field339_0x177;
    undefined field340_0x178;
    undefined field341_0x179;
    undefined field342_0x17a;
    undefined field343_0x17b;
    undefined field344_0x17c;
    undefined field345_0x17d;
    undefined field346_0x17e;
    undefined field347_0x17f;
    undefined field348_0x180;
    undefined field349_0x181;
    undefined field350_0x182;
    undefined field351_0x183;
    undefined field352_0x184;
    undefined field353_0x185;
    undefined field354_0x186;
    undefined field355_0x187;
    undefined field356_0x188;
    undefined field357_0x189;
    undefined field358_0x18a;
    undefined field359_0x18b;
    undefined field360_0x18c;
    undefined field361_0x18d;
    undefined field362_0x18e;
    undefined field363_0x18f;
    undefined4 offset_0x190;
    undefined4 offset_0x194;
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_MultiLineText/__CGraphicCtrl_ChatInputBox/__CGraphicCtrl_ChatInputBox - /CGraphicCtrl_MultiLineText/__CGraphicCtrl_ChatInputBox

typedef struct __CGraphicCtrl_ChatInputBox_vftable __CGraphicCtrl_ChatInputBox_vftable, *P__CGraphicCtrl_ChatInputBox_vftable;

struct __CGraphicCtrl_ChatInputBox_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // __CGraphicCtrl_ChatInputBox virtual function #1
    void * (*_AllocSelf)(void *); // __CGraphicCtrl_ChatInputBox virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // __CGraphicCtrl_ChatInputBox virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_MultiLineText/__CGraphicCtrl_ChatInputBox/__CHgChatInputBoxEdit/__CHgChatInputBoxEdit - /CGraphicCtrl_MultiLineText/__CGraphicCtrl_ChatInputBox/__CHgChatInputBoxEdit

typedef struct __CHgChatInputBoxEdit_vftable __CHgChatInputBoxEdit_vftable, *P__CHgChatInputBoxEdit_vftable;

struct __CHgChatInputBoxEdit_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CEdit virtual function #1
    CEdit * (*deleting_destructor)(void *, byte); // __CHgChatInputBoxEdit virtual function #2
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // __CHgChatInputBoxEdit virtual function #13
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
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #66
    void (*vfunction67)(void *); // __CWndForInput virtual function #67
    void (*vfunction68)(void *); // __CWndForInput virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // __CHgChatInputBoxEdit virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // __CHgChatInputBoxEdit virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*_PreTranslateMessage_ReturnKeyDown)(void *, struct tagMSG *); // __CHgChatInputBoxEdit virtual function #82
};

typedef struct __CHgChatInputBoxEdit_data __CHgChatInputBoxEdit_data, *P__CHgChatInputBoxEdit_data;

struct __CHgChatInputBoxEdit_data {
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
    undefined4 *offset_0x50;
    void *offset_0x54;
    undefined field82_0x58;
    undefined field83_0x59;
    undefined field84_0x5a;
    undefined field85_0x5b;
    undefined field86_0x5c;
    undefined field87_0x5d;
    undefined field88_0x5e;
    undefined field89_0x5f;
    void *offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
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

struct CFont { // class CFont : CGdiObject
    struct CFont_vftable *vftablePtr;
};

struct CFont_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CFont virtual function #1
    void * (*deleting_destructor)(void *, uint); // CFont virtual function #2
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
};

typedef struct CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*> CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>, *PCList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>;

typedef struct CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_vftable CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_vftable, *PCList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_vftable;

typedef struct CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data, *PCList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data;

struct CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data {
    undefined4 *offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    struct CPlex *offset_0x10;
    undefined4 offset_0x14;
};

struct CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CObject virtual function #1
    undefined4 * (*deleting_destructor)(void *, byte); // CList<CGraphicCtrl_Tile_Ani::_KeyFrame*...> virtual function #2
    void (*vfunction3)(void *, struct CArchive *); // CList<CGraphicCtrl*...> virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
};

struct CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*> { // class CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*> : CObject
    struct CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_vftable *vftablePtr;
    struct CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_data;
};

typedef struct CStatic CStatic, *PCStatic;

typedef struct CWnd CWnd, *PCWnd;

struct CCmdTarget { // class CCmdTarget : CObject
    struct CObject CObject;
};

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CStatic { // class CStatic : CWnd
    struct CWnd CWnd;
};

typedef struct CGameWnd CGameWnd, *PCGameWnd;

typedef struct CControlBase CControlBase, *PCControlBase;

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


// WARNING! conflicting data type names: /ClassDataTypes/CHgDDB16E/CHgDDB16E - /CHgDDB16E

typedef struct CHgDDB16E_vftable CHgDDB16E_vftable, *PCHgDDB16E_vftable;

struct CHgDDB16E_vftable {
    CHgDIB16 * (*deleting_destructor)(void *, byte); // CHgDDB16E virtual function #1
    bool (*Create)(void *, char *); // CHgImageBase virtual function #2
    bool (*Create)(void *, char *); // CHgImageBase virtual function #3
    bool (*Create)(void *, char *); // CHgImageBase virtual function #4
    bool (*Create)(void *, char *); // CHgDDB16E virtual function #5
    void (*Destroy)(void *); // CHgDDB16E virtual function #6
    bool (*__CreateFromBitmapWithColorTable)(void *, uchar *, ulong); // CHgImage16 virtual function #7
    bool (*__CreateFromBitmap16)(void *, uchar *, ulong); // CHgImage16 virtual function #8
    bool (*__CreateFromBitmap24)(void *, uchar *, ulong); // CHgImage16 virtual function #9
};

typedef struct CHgDDB16E_data CHgDDB16E_data, *PCHgDDB16E_data;

struct CHgDDB16E_data {
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
    undefined4 offset_0x60;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgDIB16E/CHgDIB16E - /CHgDIB16E

typedef struct CHgDIB16E_vftable CHgDIB16E_vftable, *PCHgDIB16E_vftable;

struct CHgDIB16E_vftable {
    CHgDIB16 * (*deleting_destructor)(void *, byte); // CHgDIB16E virtual function #1
};

typedef struct CGraphicCtrl_vftable CGraphicCtrl_vftable, *PCGraphicCtrl_vftable;

struct CGraphicCtrl_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl virtual function #1
    void * (*clone)(void *); // CGraphicCtrl virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*PostProc)(void *); // CGraphicCtrl virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl/CGraphicCtrl - /CGraphicCtrl

typedef struct CGraphicCtrl_Scale_data CGraphicCtrl_Scale_data, *PCGraphicCtrl_Scale_data;

struct CGraphicCtrl_Scale_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_Scale/CGraphicCtrl_Scale - /CGraphicCtrl_Scale

typedef struct CGraphicCtrl_Scale_vftable CGraphicCtrl_Scale_vftable, *PCGraphicCtrl_Scale_vftable;

struct CGraphicCtrl_Scale_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Scale virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_Scale virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_Scale virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*PostProc)(void *); // CGraphicCtrl virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_Scale virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Scale virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Scale virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Scale virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl_Scale virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_ChatBox/CGraphicCtrl_ChatBox - /CGraphicCtrl_ChatBox

typedef struct CGraphicCtrl_ChatBox_vftable CGraphicCtrl_ChatBox_vftable, *PCGraphicCtrl_ChatBox_vftable;

struct CGraphicCtrl_ChatBox_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_ChatBox virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_ChatBox virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_TextBox virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl_ChatBox virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_ChatBox/__CGraphicCtrl_ChatInputBox/__CGraphicCtrl_ChatInputBox - /CGraphicCtrl_MultiLineText/__CGraphicCtrl_ChatInputBox


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_ChatBox/__CGraphicCtrl_ChatInputBox/__CGraphicCtrl_ChatInputBox_vftable - /ClassDataTypes/CGraphicCtrl_MultiLineText/__CGraphicCtrl_ChatInputBox/__CGraphicCtrl_ChatInputBox_vftable

typedef struct CGraphicCtrl_Notify_vftable CGraphicCtrl_Notify_vftable, *PCGraphicCtrl_Notify_vftable;

struct CGraphicCtrl_Notify_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Notify virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_Notify virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_Notify virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_Notify virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #10
    void (*OnNoticeTime)(void *); // CGraphicCtrl_Notify virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};

typedef struct CGraphicCtrl_Notify_data CGraphicCtrl_Notify_data, *PCGraphicCtrl_Notify_data;

struct CGraphicCtrl_Notify_data {
    undefined4 offset_0x0;
    undefined **offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
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
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_Notify/CGraphicCtrl_Notify - /CGraphicCtrl_Notify

typedef struct CHgDIB16 CHgDIB16, *PCHgDIB16;

struct CHgImage16 { // class CHgImage16 : CHgImageBase
    struct CHgImageBase CHgImageBase;
};

struct CHgDIB16 { // class CHgDIB16 : CHgImage16
    struct CHgImage16 CHgImage16;
};

typedef struct CGdiObject CGdiObject, *PCGdiObject;

typedef struct CGdiObject_vftable CGdiObject_vftable, *PCGdiObject_vftable;

struct CGdiObject { // class CGdiObject : CObject
    struct CGdiObject_vftable *vftablePtr;
};

struct CGdiObject_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGdiObject virtual function #1
    void * (*deleting_destructor)(void *, uint); // CGdiObject virtual function #2
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
};

typedef struct CHgDummyCtrl_vftable CHgDummyCtrl_vftable, *PCHgDummyCtrl_vftable;

struct CHgDummyCtrl_vftable {
    CGraphicCtrl * (*vfunction1)(void *, byte); // CHgDummyCtrl virtual function #1
    void * (*_AllocSelf)(void *); // CHgDummyCtrl virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*PostProc)(void *); // CGraphicCtrl virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CHgDummyCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgDummyCtrl/CHgDummyCtrl - /CHgDummyCtrl

typedef struct _AFX_DLL_MODULE_STATE _AFX_DLL_MODULE_STATE, *P_AFX_DLL_MODULE_STATE;

typedef struct _AFX_DLL_MODULE_STATE_vftable _AFX_DLL_MODULE_STATE_vftable, *P_AFX_DLL_MODULE_STATE_vftable;

struct _AFX_DLL_MODULE_STATE { // class _AFX_DLL_MODULE_STATE : AFX_MODULE_STATE
    struct _AFX_DLL_MODULE_STATE_vftable *vftablePtr;
};

struct _AFX_DLL_MODULE_STATE_vftable {
    AFX_MODULE_STATE * (*deleting_destructor)(void *, byte); // _AFX_DLL_MODULE_STATE virtual function #1
};

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinThread { // class CWinThread : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CWinApp { // class CWinApp : CWinThread
    struct CWinThread CWinThread;
};

typedef struct CGraphicCtrl_Tile_Ani_vftable CGraphicCtrl_Tile_Ani_vftable, *PCGraphicCtrl_Tile_Ani_vftable;

struct CGraphicCtrl_Tile_Ani_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Tile_Ani virtual function #1
    void * (*clone)(void *); // CGraphicCtrl_Tile_Ani virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_Tile_Ani virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl_Tile_Ani virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_Tile_Ani virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CHgDummyCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl_Tile_Ani virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile_Ani virtual function #14
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile_Ani virtual function #15
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_Tile_Ani/CGraphicCtrl_Tile_Ani - /CGraphicCtrl_Tile_Ani

typedef struct _KeyFrame _KeyFrame, *P_KeyFrame;

typedef struct _KeyFrame_vftable _KeyFrame_vftable, *P_KeyFrame_vftable;

typedef struct _KeyFrame_data _KeyFrame_data, *P_KeyFrame_data;

struct _KeyFrame_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined1 offset_0x8;
    undefined1 offset_0x9;
    undefined1 offset_0xa;
    undefined field5_0xb;
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
};

struct _KeyFrame_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // _KeyFrame virtual function #1
};

struct _KeyFrame { // class _KeyFrame
    struct _KeyFrame_vftable *vftablePtr;
    struct _KeyFrame_data _KeyFrame_data;
};

typedef struct CGraphicCtrl_Tile_Element CGraphicCtrl_Tile_Element, *PCGraphicCtrl_Tile_Element;

typedef struct CGraphicCtrl_Tile_Element_vftable CGraphicCtrl_Tile_Element_vftable, *PCGraphicCtrl_Tile_Element_vftable;

typedef struct CGraphicCtrl_Tile_Element_data CGraphicCtrl_Tile_Element_data, *PCGraphicCtrl_Tile_Element_data;

struct CGraphicCtrl_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined1 offset_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined2 offset_0x8;
    undefined field6_0xa;
    undefined field7_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined field14_0x24;
    undefined field15_0x25;
    undefined field16_0x26;
    undefined field17_0x27;
    undefined field18_0x28;
    undefined field19_0x29;
    undefined field20_0x2a;
    undefined field21_0x2b;
    undefined field22_0x2c;
    undefined field23_0x2d;
    undefined field24_0x2e;
    undefined field25_0x2f;
    undefined field26_0x30;
    undefined field27_0x31;
    undefined field28_0x32;
    undefined field29_0x33;
    undefined field30_0x34;
    undefined field31_0x35;
    undefined field32_0x36;
    undefined field33_0x37;
    undefined field34_0x38;
    undefined field35_0x39;
    undefined field36_0x3a;
    undefined field37_0x3b;
    undefined field38_0x3c;
    undefined field39_0x3d;
    undefined field40_0x3e;
    undefined field41_0x3f;
    undefined field42_0x40;
    undefined field43_0x41;
    undefined field44_0x42;
    undefined field45_0x43;
    undefined field46_0x44;
    undefined field47_0x45;
    undefined field48_0x46;
    undefined field49_0x47;
    undefined field50_0x48;
    undefined field51_0x49;
    undefined field52_0x4a;
    undefined field53_0x4b;
    undefined field54_0x4c;
    undefined field55_0x4d;
    undefined field56_0x4e;
    undefined field57_0x4f;
    undefined field58_0x50;
    undefined field59_0x51;
    undefined field60_0x52;
    undefined field61_0x53;
    undefined field62_0x54;
    undefined field63_0x55;
    undefined field64_0x56;
    undefined field65_0x57;
    undefined field66_0x58;
    undefined field67_0x59;
    undefined field68_0x5a;
    undefined field69_0x5b;
    undefined field70_0x5c;
    undefined field71_0x5d;
    undefined field72_0x5e;
    undefined field73_0x5f;
    undefined field74_0x60;
    undefined field75_0x61;
    undefined field76_0x62;
    undefined field77_0x63;
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    undefined field82_0x68;
    undefined field83_0x69;
    undefined field84_0x6a;
    undefined field85_0x6b;
    undefined field86_0x6c;
    undefined field87_0x6d;
    undefined field88_0x6e;
    undefined field89_0x6f;
    undefined field90_0x70;
    undefined field91_0x71;
    undefined field92_0x72;
    undefined field93_0x73;
    undefined field94_0x74;
    undefined field95_0x75;
    undefined field96_0x76;
    undefined field97_0x77;
    undefined field98_0x78;
    undefined field99_0x79;
    undefined field100_0x7a;
    undefined field101_0x7b;
    undefined field102_0x7c;
    undefined field103_0x7d;
    undefined field104_0x7e;
    undefined field105_0x7f;
    undefined field106_0x80;
    undefined field107_0x81;
    undefined field108_0x82;
    undefined field109_0x83;
    undefined field110_0x84;
    undefined field111_0x85;
    undefined field112_0x86;
    undefined field113_0x87;
    undefined field114_0x88;
    undefined field115_0x89;
    undefined field116_0x8a;
    undefined field117_0x8b;
    undefined field118_0x8c;
    undefined field119_0x8d;
    undefined field120_0x8e;
    undefined field121_0x8f;
    undefined field122_0x90;
    undefined field123_0x91;
    undefined field124_0x92;
    undefined field125_0x93;
    undefined field126_0x94;
    undefined field127_0x95;
    undefined field128_0x96;
    undefined field129_0x97;
    undefined field130_0x98;
    undefined field131_0x99;
    undefined field132_0x9a;
    undefined field133_0x9b;
    undefined field134_0x9c;
    undefined field135_0x9d;
    undefined field136_0x9e;
    undefined field137_0x9f;
    undefined field138_0xa0;
    undefined field139_0xa1;
    undefined field140_0xa2;
    undefined field141_0xa3;
    undefined field142_0xa4;
    undefined field143_0xa5;
    undefined field144_0xa6;
    undefined field145_0xa7;
    undefined field146_0xa8;
    undefined field147_0xa9;
    undefined field148_0xaa;
    undefined field149_0xab;
    undefined field150_0xac;
    undefined field151_0xad;
    undefined field152_0xae;
    undefined field153_0xaf;
    undefined field154_0xb0;
    undefined field155_0xb1;
    undefined field156_0xb2;
    undefined field157_0xb3;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
    undefined4 offset_0xdc;
    undefined **offset_0xe0;
    undefined4 *offset_0xe4;
    undefined4 offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    struct CPlex *offset_0xf4;
    undefined4 offset_0xf8;
    undefined field176_0xfc;
    undefined field177_0xfd;
    undefined field178_0xfe;
    undefined field179_0xff;
    undefined field180_0x100;
    undefined field181_0x101;
    undefined field182_0x102;
    undefined field183_0x103;
    undefined field184_0x104;
    undefined field185_0x105;
    undefined field186_0x106;
    undefined field187_0x107;
    undefined field188_0x108;
    undefined field189_0x109;
    undefined field190_0x10a;
    undefined field191_0x10b;
    undefined field192_0x10c;
    undefined field193_0x10d;
    undefined field194_0x10e;
    undefined field195_0x10f;
    undefined field196_0x110;
    undefined field197_0x111;
    undefined field198_0x112;
    undefined field199_0x113;
    undefined field200_0x114;
    undefined field201_0x115;
    undefined field202_0x116;
    undefined field203_0x117;
    undefined field204_0x118;
    undefined field205_0x119;
    undefined field206_0x11a;
    undefined field207_0x11b;
    undefined1 offset_0x11c;
    undefined1 offset_0x11d;
    undefined1 offset_0x11e;
    undefined1 offset_0x11f;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
    undefined4 offset_0x134;
    undefined4 offset_0x138;
    undefined4 offset_0x13c;
    undefined4 offset_0x140;
    undefined4 offset_0x144;
    undefined4 offset_0x148;
    undefined4 offset_0x14c;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined4 offset_0x158;
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
};

struct CGraphicCtrl_Tile_Element_data {
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
    undefined1 offset_0x28;
    undefined field11_0x29;
    undefined field12_0x2a;
    undefined field13_0x2b;
};

struct CGraphicCtrl_Tile_Element_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Tile_Element virtual function #1
    void * (*clone)(void *); // CGraphicCtrl_Tile_Element virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    undefined4 (*vfunction5)(void *); // CGraphicCtrl_Tile_Element virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    undefined4 (*vfunction7)(void *, int *, int *); // CGraphicCtrl_Tile_Element virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};

struct CGraphicCtrl_Tile_Element { // class CGraphicCtrl_Tile_Element : CHgDummyCtrl
    struct CGraphicCtrl_Tile_Element_vftable *vftablePtr;
    struct CGraphicCtrl_data CGraphicCtrl_data;
    struct CGraphicCtrl_Tile_Element_data CGraphicCtrl_Tile_Element_data;
};

typedef struct CGraphicCtrl_Text_vftable CGraphicCtrl_Text_vftable, *PCGraphicCtrl_Text_vftable;

struct CGraphicCtrl_Text_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Text virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_Text virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_Text virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_Text virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Text virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Text virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};

typedef struct CGraphicCtrl_Text_data CGraphicCtrl_Text_data, *PCGraphicCtrl_Text_data;

struct CGraphicCtrl_Text_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined **offset_0xc;
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
    undefined field32_0x2c;
    undefined field33_0x2d;
    undefined field34_0x2e;
    undefined field35_0x2f;
    undefined field36_0x30;
    undefined field37_0x31;
    undefined field38_0x32;
    undefined field39_0x33;
    undefined field40_0x34;
    undefined field41_0x35;
    undefined field42_0x36;
    undefined field43_0x37;
    undefined field44_0x38;
    undefined field45_0x39;
    undefined field46_0x3a;
    undefined field47_0x3b;
    undefined field48_0x3c;
    undefined field49_0x3d;
    undefined field50_0x3e;
    undefined field51_0x3f;
    undefined field52_0x40;
    undefined field53_0x41;
    undefined field54_0x42;
    undefined field55_0x43;
    undefined field56_0x44;
    undefined field57_0x45;
    undefined field58_0x46;
    undefined field59_0x47;
    undefined field60_0x48;
    undefined field61_0x49;
    undefined field62_0x4a;
    undefined field63_0x4b;
    undefined field64_0x4c;
    undefined field65_0x4d;
    undefined field66_0x4e;
    undefined field67_0x4f;
    undefined field68_0x50;
    undefined field69_0x51;
    undefined field70_0x52;
    undefined field71_0x53;
    undefined field72_0x54;
    undefined field73_0x55;
    undefined field74_0x56;
    undefined field75_0x57;
    undefined field76_0x58;
    undefined field77_0x59;
    undefined field78_0x5a;
    undefined field79_0x5b;
    undefined field80_0x5c;
    undefined field81_0x5d;
    undefined field82_0x5e;
    undefined field83_0x5f;
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
    undefined4 offset_0x70;
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_Text/CGraphicCtrl_Text - /CGraphicCtrl_Text

typedef struct CGraphicCtrl_ScrollBar_vftable CGraphicCtrl_ScrollBar_vftable, *PCGraphicCtrl_ScrollBar_vftable;

struct CGraphicCtrl_ScrollBar_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_ScrollBar virtual function #1
    void * (*clone)(void *); // CGraphicCtrl_ScrollBar virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_ScrollBar virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CHgDummyCtrl virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_ScrollBar/CGraphicCtrl_ScrollBar - /CGraphicCtrl_ScrollBar

typedef struct CGraphicCtrl_ScrollBar_data CGraphicCtrl_ScrollBar_data, *PCGraphicCtrl_ScrollBar_data;

struct CGraphicCtrl_ScrollBar_data {
    undefined2 offset_0x0;
    undefined2 offset_0x2;
    undefined2 offset_0x4;
    undefined2 offset_0x6;
    undefined2 offset_0x8;
    undefined2 offset_0xa;
    undefined2 offset_0xc;
    undefined field7_0xe;
    undefined field8_0xf;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
};

typedef struct __CGraphicCtrl_ScrollBar_Dn __CGraphicCtrl_ScrollBar_Dn, *P__CGraphicCtrl_ScrollBar_Dn;

typedef struct __CGraphicCtrl_ScrollBar_Dn_vftable __CGraphicCtrl_ScrollBar_Dn_vftable, *P__CGraphicCtrl_ScrollBar_Dn_vftable;

struct CGraphicCtrl_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined1 offset_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined2 offset_0x8;
    undefined field6_0xa;
    undefined field7_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined field14_0x24;
    undefined field15_0x25;
    undefined field16_0x26;
    undefined field17_0x27;
    undefined field18_0x28;
    undefined field19_0x29;
    undefined field20_0x2a;
    undefined field21_0x2b;
    undefined field22_0x2c;
    undefined field23_0x2d;
    undefined field24_0x2e;
    undefined field25_0x2f;
    undefined field26_0x30;
    undefined field27_0x31;
    undefined field28_0x32;
    undefined field29_0x33;
    undefined field30_0x34;
    undefined field31_0x35;
    undefined field32_0x36;
    undefined field33_0x37;
    undefined field34_0x38;
    undefined field35_0x39;
    undefined field36_0x3a;
    undefined field37_0x3b;
    undefined field38_0x3c;
    undefined field39_0x3d;
    undefined field40_0x3e;
    undefined field41_0x3f;
    undefined field42_0x40;
    undefined field43_0x41;
    undefined field44_0x42;
    undefined field45_0x43;
    undefined field46_0x44;
    undefined field47_0x45;
    undefined field48_0x46;
    undefined field49_0x47;
    undefined field50_0x48;
    undefined field51_0x49;
    undefined field52_0x4a;
    undefined field53_0x4b;
    undefined field54_0x4c;
    undefined field55_0x4d;
    undefined field56_0x4e;
    undefined field57_0x4f;
    undefined field58_0x50;
    undefined field59_0x51;
    undefined field60_0x52;
    undefined field61_0x53;
    undefined field62_0x54;
    undefined field63_0x55;
    undefined field64_0x56;
    undefined field65_0x57;
    undefined field66_0x58;
    undefined field67_0x59;
    undefined field68_0x5a;
    undefined field69_0x5b;
    undefined field70_0x5c;
    undefined field71_0x5d;
    undefined field72_0x5e;
    undefined field73_0x5f;
    undefined field74_0x60;
    undefined field75_0x61;
    undefined field76_0x62;
    undefined field77_0x63;
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    undefined field82_0x68;
    undefined field83_0x69;
    undefined field84_0x6a;
    undefined field85_0x6b;
    undefined field86_0x6c;
    undefined field87_0x6d;
    undefined field88_0x6e;
    undefined field89_0x6f;
    undefined field90_0x70;
    undefined field91_0x71;
    undefined field92_0x72;
    undefined field93_0x73;
    undefined field94_0x74;
    undefined field95_0x75;
    undefined field96_0x76;
    undefined field97_0x77;
    undefined field98_0x78;
    undefined field99_0x79;
    undefined field100_0x7a;
    undefined field101_0x7b;
    undefined field102_0x7c;
    undefined field103_0x7d;
    undefined field104_0x7e;
    undefined field105_0x7f;
    undefined field106_0x80;
    undefined field107_0x81;
    undefined field108_0x82;
    undefined field109_0x83;
    undefined field110_0x84;
    undefined field111_0x85;
    undefined field112_0x86;
    undefined field113_0x87;
    undefined field114_0x88;
    undefined field115_0x89;
    undefined field116_0x8a;
    undefined field117_0x8b;
    undefined field118_0x8c;
    undefined field119_0x8d;
    undefined field120_0x8e;
    undefined field121_0x8f;
    undefined field122_0x90;
    undefined field123_0x91;
    undefined field124_0x92;
    undefined field125_0x93;
    undefined field126_0x94;
    undefined field127_0x95;
    undefined field128_0x96;
    undefined field129_0x97;
    undefined field130_0x98;
    undefined field131_0x99;
    undefined field132_0x9a;
    undefined field133_0x9b;
    undefined field134_0x9c;
    undefined field135_0x9d;
    undefined field136_0x9e;
    undefined field137_0x9f;
    undefined field138_0xa0;
    undefined field139_0xa1;
    undefined field140_0xa2;
    undefined field141_0xa3;
    undefined field142_0xa4;
    undefined field143_0xa5;
    undefined field144_0xa6;
    undefined field145_0xa7;
    undefined field146_0xa8;
    undefined field147_0xa9;
    undefined field148_0xaa;
    undefined field149_0xab;
    undefined field150_0xac;
    undefined field151_0xad;
    undefined field152_0xae;
    undefined field153_0xaf;
    undefined field154_0xb0;
    undefined field155_0xb1;
    undefined field156_0xb2;
    undefined field157_0xb3;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
    undefined4 offset_0xdc;
    undefined **offset_0xe0;
    undefined4 *offset_0xe4;
    undefined4 offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    struct CPlex *offset_0xf4;
    undefined4 offset_0xf8;
    undefined field176_0xfc;
    undefined field177_0xfd;
    undefined field178_0xfe;
    undefined field179_0xff;
    undefined field180_0x100;
    undefined field181_0x101;
    undefined field182_0x102;
    undefined field183_0x103;
    undefined field184_0x104;
    undefined field185_0x105;
    undefined field186_0x106;
    undefined field187_0x107;
    undefined field188_0x108;
    undefined field189_0x109;
    undefined field190_0x10a;
    undefined field191_0x10b;
    undefined field192_0x10c;
    undefined field193_0x10d;
    undefined field194_0x10e;
    undefined field195_0x10f;
    undefined field196_0x110;
    undefined field197_0x111;
    undefined field198_0x112;
    undefined field199_0x113;
    undefined field200_0x114;
    undefined field201_0x115;
    undefined field202_0x116;
    undefined field203_0x117;
    undefined field204_0x118;
    undefined field205_0x119;
    undefined field206_0x11a;
    undefined field207_0x11b;
    undefined1 offset_0x11c;
    undefined1 offset_0x11d;
    undefined1 offset_0x11e;
    undefined1 offset_0x11f;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
    undefined4 offset_0x134;
    undefined4 offset_0x138;
    undefined4 offset_0x13c;
    undefined4 offset_0x140;
    undefined4 offset_0x144;
    undefined4 offset_0x148;
    undefined4 offset_0x14c;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined4 offset_0x158;
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
};

struct CGraphicCtrl_PushBtn_data {
    int *offset_0x0;
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
    undefined1 offset_0x38;
    undefined field15_0x39;
    undefined field16_0x3a;
    undefined field17_0x3b;
};

struct __CGraphicCtrl_ScrollBar_Dn_vftable {
    CGraphicCtrl * (*vfunction1)(void *, byte); // __CGraphicCtrl_ScrollBar_Dn virtual function #1
    void * (*_AllocSelf)(void *); // __CGraphicCtrl_ScrollBar_Dn virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_PushBtn virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_PushBtn virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_PushBtn virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_PushBtn virtual function #14
    void (*OnBtnPushed)(void *); // __CGraphicCtrl_ScrollBar_Dn virtual function #15
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #16
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #17
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #18
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #19
};

struct __CGraphicCtrl_ScrollBar_Dn { // class __CGraphicCtrl_ScrollBar_Dn : CGraphicCtrl_PushBtn
    struct __CGraphicCtrl_ScrollBar_Dn_vftable *vftablePtr;
    struct CGraphicCtrl_data CGraphicCtrl_data;
    struct CGraphicCtrl_PushBtn_data CGraphicCtrl_PushBtn_data;
};

typedef struct __CGraphicCtrl_ScrollBar_Up __CGraphicCtrl_ScrollBar_Up, *P__CGraphicCtrl_ScrollBar_Up;

typedef struct __CGraphicCtrl_ScrollBar_Up_vftable __CGraphicCtrl_ScrollBar_Up_vftable, *P__CGraphicCtrl_ScrollBar_Up_vftable;

struct CGraphicCtrl_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined1 offset_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined2 offset_0x8;
    undefined field6_0xa;
    undefined field7_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined field14_0x24;
    undefined field15_0x25;
    undefined field16_0x26;
    undefined field17_0x27;
    undefined field18_0x28;
    undefined field19_0x29;
    undefined field20_0x2a;
    undefined field21_0x2b;
    undefined field22_0x2c;
    undefined field23_0x2d;
    undefined field24_0x2e;
    undefined field25_0x2f;
    undefined field26_0x30;
    undefined field27_0x31;
    undefined field28_0x32;
    undefined field29_0x33;
    undefined field30_0x34;
    undefined field31_0x35;
    undefined field32_0x36;
    undefined field33_0x37;
    undefined field34_0x38;
    undefined field35_0x39;
    undefined field36_0x3a;
    undefined field37_0x3b;
    undefined field38_0x3c;
    undefined field39_0x3d;
    undefined field40_0x3e;
    undefined field41_0x3f;
    undefined field42_0x40;
    undefined field43_0x41;
    undefined field44_0x42;
    undefined field45_0x43;
    undefined field46_0x44;
    undefined field47_0x45;
    undefined field48_0x46;
    undefined field49_0x47;
    undefined field50_0x48;
    undefined field51_0x49;
    undefined field52_0x4a;
    undefined field53_0x4b;
    undefined field54_0x4c;
    undefined field55_0x4d;
    undefined field56_0x4e;
    undefined field57_0x4f;
    undefined field58_0x50;
    undefined field59_0x51;
    undefined field60_0x52;
    undefined field61_0x53;
    undefined field62_0x54;
    undefined field63_0x55;
    undefined field64_0x56;
    undefined field65_0x57;
    undefined field66_0x58;
    undefined field67_0x59;
    undefined field68_0x5a;
    undefined field69_0x5b;
    undefined field70_0x5c;
    undefined field71_0x5d;
    undefined field72_0x5e;
    undefined field73_0x5f;
    undefined field74_0x60;
    undefined field75_0x61;
    undefined field76_0x62;
    undefined field77_0x63;
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    undefined field82_0x68;
    undefined field83_0x69;
    undefined field84_0x6a;
    undefined field85_0x6b;
    undefined field86_0x6c;
    undefined field87_0x6d;
    undefined field88_0x6e;
    undefined field89_0x6f;
    undefined field90_0x70;
    undefined field91_0x71;
    undefined field92_0x72;
    undefined field93_0x73;
    undefined field94_0x74;
    undefined field95_0x75;
    undefined field96_0x76;
    undefined field97_0x77;
    undefined field98_0x78;
    undefined field99_0x79;
    undefined field100_0x7a;
    undefined field101_0x7b;
    undefined field102_0x7c;
    undefined field103_0x7d;
    undefined field104_0x7e;
    undefined field105_0x7f;
    undefined field106_0x80;
    undefined field107_0x81;
    undefined field108_0x82;
    undefined field109_0x83;
    undefined field110_0x84;
    undefined field111_0x85;
    undefined field112_0x86;
    undefined field113_0x87;
    undefined field114_0x88;
    undefined field115_0x89;
    undefined field116_0x8a;
    undefined field117_0x8b;
    undefined field118_0x8c;
    undefined field119_0x8d;
    undefined field120_0x8e;
    undefined field121_0x8f;
    undefined field122_0x90;
    undefined field123_0x91;
    undefined field124_0x92;
    undefined field125_0x93;
    undefined field126_0x94;
    undefined field127_0x95;
    undefined field128_0x96;
    undefined field129_0x97;
    undefined field130_0x98;
    undefined field131_0x99;
    undefined field132_0x9a;
    undefined field133_0x9b;
    undefined field134_0x9c;
    undefined field135_0x9d;
    undefined field136_0x9e;
    undefined field137_0x9f;
    undefined field138_0xa0;
    undefined field139_0xa1;
    undefined field140_0xa2;
    undefined field141_0xa3;
    undefined field142_0xa4;
    undefined field143_0xa5;
    undefined field144_0xa6;
    undefined field145_0xa7;
    undefined field146_0xa8;
    undefined field147_0xa9;
    undefined field148_0xaa;
    undefined field149_0xab;
    undefined field150_0xac;
    undefined field151_0xad;
    undefined field152_0xae;
    undefined field153_0xaf;
    undefined field154_0xb0;
    undefined field155_0xb1;
    undefined field156_0xb2;
    undefined field157_0xb3;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
    undefined4 offset_0xdc;
    undefined **offset_0xe0;
    undefined4 *offset_0xe4;
    undefined4 offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    struct CPlex *offset_0xf4;
    undefined4 offset_0xf8;
    undefined field176_0xfc;
    undefined field177_0xfd;
    undefined field178_0xfe;
    undefined field179_0xff;
    undefined field180_0x100;
    undefined field181_0x101;
    undefined field182_0x102;
    undefined field183_0x103;
    undefined field184_0x104;
    undefined field185_0x105;
    undefined field186_0x106;
    undefined field187_0x107;
    undefined field188_0x108;
    undefined field189_0x109;
    undefined field190_0x10a;
    undefined field191_0x10b;
    undefined field192_0x10c;
    undefined field193_0x10d;
    undefined field194_0x10e;
    undefined field195_0x10f;
    undefined field196_0x110;
    undefined field197_0x111;
    undefined field198_0x112;
    undefined field199_0x113;
    undefined field200_0x114;
    undefined field201_0x115;
    undefined field202_0x116;
    undefined field203_0x117;
    undefined field204_0x118;
    undefined field205_0x119;
    undefined field206_0x11a;
    undefined field207_0x11b;
    undefined1 offset_0x11c;
    undefined1 offset_0x11d;
    undefined1 offset_0x11e;
    undefined1 offset_0x11f;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
    undefined4 offset_0x134;
    undefined4 offset_0x138;
    undefined4 offset_0x13c;
    undefined4 offset_0x140;
    undefined4 offset_0x144;
    undefined4 offset_0x148;
    undefined4 offset_0x14c;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined4 offset_0x158;
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
};

struct CGraphicCtrl_PushBtn_data {
    int *offset_0x0;
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
    undefined1 offset_0x38;
    undefined field15_0x39;
    undefined field16_0x3a;
    undefined field17_0x3b;
};

struct __CGraphicCtrl_ScrollBar_Up_vftable {
    CGraphicCtrl * (*vfunction1)(void *, byte); // __CGraphicCtrl_ScrollBar_Dn virtual function #1
    void * (*_AllocSelf)(void *); // __CGraphicCtrl_ScrollBar_Up virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_PushBtn virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_PushBtn virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_PushBtn virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_PushBtn virtual function #14
    void (*OnBtnPushed)(void *); // __CGraphicCtrl_ScrollBar_Up virtual function #15
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #16
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #17
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #18
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #19
};

struct __CGraphicCtrl_ScrollBar_Up { // class __CGraphicCtrl_ScrollBar_Up : CGraphicCtrl_PushBtn
    struct __CGraphicCtrl_ScrollBar_Up_vftable *vftablePtr;
    struct CGraphicCtrl_data CGraphicCtrl_data;
    struct CGraphicCtrl_PushBtn_data CGraphicCtrl_PushBtn_data;
};

typedef struct __CGraphicCtrl_ScrollBar_Bar_vftable __CGraphicCtrl_ScrollBar_Bar_vftable, *P__CGraphicCtrl_ScrollBar_Bar_vftable;

struct __CGraphicCtrl_ScrollBar_Bar_vftable {
    CGraphicCtrl * (*vfunction1)(void *, byte); // __CGraphicCtrl_ScrollBar_Bar virtual function #1
    void * (*clone)(void *); // __CGraphicCtrl_ScrollBar_Bar virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_PushBtn virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*Proc)(void *, ulong); // CGraphicCtrl_PushBtn virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_PushBtn virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_PushBtn virtual function #14
    void (*OnBtnPushed)(void *); // __CGraphicCtrl_ScrollBar_Bar virtual function #15
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #16
    void (*OnBtnDrag)(void *); // __CGraphicCtrl_ScrollBar_Bar virtual function #17
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #18
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #19
};

typedef struct __CGraphicCtrl_ScrollBar_Bar __CGraphicCtrl_ScrollBar_Bar, *P__CGraphicCtrl_ScrollBar_Bar;

typedef struct __CGraphicCtrl_ScrollBar_Bar_data __CGraphicCtrl_ScrollBar_Bar_data, *P__CGraphicCtrl_ScrollBar_Bar_data;

struct CGraphicCtrl_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined1 offset_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined2 offset_0x8;
    undefined field6_0xa;
    undefined field7_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined field14_0x24;
    undefined field15_0x25;
    undefined field16_0x26;
    undefined field17_0x27;
    undefined field18_0x28;
    undefined field19_0x29;
    undefined field20_0x2a;
    undefined field21_0x2b;
    undefined field22_0x2c;
    undefined field23_0x2d;
    undefined field24_0x2e;
    undefined field25_0x2f;
    undefined field26_0x30;
    undefined field27_0x31;
    undefined field28_0x32;
    undefined field29_0x33;
    undefined field30_0x34;
    undefined field31_0x35;
    undefined field32_0x36;
    undefined field33_0x37;
    undefined field34_0x38;
    undefined field35_0x39;
    undefined field36_0x3a;
    undefined field37_0x3b;
    undefined field38_0x3c;
    undefined field39_0x3d;
    undefined field40_0x3e;
    undefined field41_0x3f;
    undefined field42_0x40;
    undefined field43_0x41;
    undefined field44_0x42;
    undefined field45_0x43;
    undefined field46_0x44;
    undefined field47_0x45;
    undefined field48_0x46;
    undefined field49_0x47;
    undefined field50_0x48;
    undefined field51_0x49;
    undefined field52_0x4a;
    undefined field53_0x4b;
    undefined field54_0x4c;
    undefined field55_0x4d;
    undefined field56_0x4e;
    undefined field57_0x4f;
    undefined field58_0x50;
    undefined field59_0x51;
    undefined field60_0x52;
    undefined field61_0x53;
    undefined field62_0x54;
    undefined field63_0x55;
    undefined field64_0x56;
    undefined field65_0x57;
    undefined field66_0x58;
    undefined field67_0x59;
    undefined field68_0x5a;
    undefined field69_0x5b;
    undefined field70_0x5c;
    undefined field71_0x5d;
    undefined field72_0x5e;
    undefined field73_0x5f;
    undefined field74_0x60;
    undefined field75_0x61;
    undefined field76_0x62;
    undefined field77_0x63;
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    undefined field82_0x68;
    undefined field83_0x69;
    undefined field84_0x6a;
    undefined field85_0x6b;
    undefined field86_0x6c;
    undefined field87_0x6d;
    undefined field88_0x6e;
    undefined field89_0x6f;
    undefined field90_0x70;
    undefined field91_0x71;
    undefined field92_0x72;
    undefined field93_0x73;
    undefined field94_0x74;
    undefined field95_0x75;
    undefined field96_0x76;
    undefined field97_0x77;
    undefined field98_0x78;
    undefined field99_0x79;
    undefined field100_0x7a;
    undefined field101_0x7b;
    undefined field102_0x7c;
    undefined field103_0x7d;
    undefined field104_0x7e;
    undefined field105_0x7f;
    undefined field106_0x80;
    undefined field107_0x81;
    undefined field108_0x82;
    undefined field109_0x83;
    undefined field110_0x84;
    undefined field111_0x85;
    undefined field112_0x86;
    undefined field113_0x87;
    undefined field114_0x88;
    undefined field115_0x89;
    undefined field116_0x8a;
    undefined field117_0x8b;
    undefined field118_0x8c;
    undefined field119_0x8d;
    undefined field120_0x8e;
    undefined field121_0x8f;
    undefined field122_0x90;
    undefined field123_0x91;
    undefined field124_0x92;
    undefined field125_0x93;
    undefined field126_0x94;
    undefined field127_0x95;
    undefined field128_0x96;
    undefined field129_0x97;
    undefined field130_0x98;
    undefined field131_0x99;
    undefined field132_0x9a;
    undefined field133_0x9b;
    undefined field134_0x9c;
    undefined field135_0x9d;
    undefined field136_0x9e;
    undefined field137_0x9f;
    undefined field138_0xa0;
    undefined field139_0xa1;
    undefined field140_0xa2;
    undefined field141_0xa3;
    undefined field142_0xa4;
    undefined field143_0xa5;
    undefined field144_0xa6;
    undefined field145_0xa7;
    undefined field146_0xa8;
    undefined field147_0xa9;
    undefined field148_0xaa;
    undefined field149_0xab;
    undefined field150_0xac;
    undefined field151_0xad;
    undefined field152_0xae;
    undefined field153_0xaf;
    undefined field154_0xb0;
    undefined field155_0xb1;
    undefined field156_0xb2;
    undefined field157_0xb3;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
    undefined4 offset_0xdc;
    undefined **offset_0xe0;
    undefined4 *offset_0xe4;
    undefined4 offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    struct CPlex *offset_0xf4;
    undefined4 offset_0xf8;
    undefined field176_0xfc;
    undefined field177_0xfd;
    undefined field178_0xfe;
    undefined field179_0xff;
    undefined field180_0x100;
    undefined field181_0x101;
    undefined field182_0x102;
    undefined field183_0x103;
    undefined field184_0x104;
    undefined field185_0x105;
    undefined field186_0x106;
    undefined field187_0x107;
    undefined field188_0x108;
    undefined field189_0x109;
    undefined field190_0x10a;
    undefined field191_0x10b;
    undefined field192_0x10c;
    undefined field193_0x10d;
    undefined field194_0x10e;
    undefined field195_0x10f;
    undefined field196_0x110;
    undefined field197_0x111;
    undefined field198_0x112;
    undefined field199_0x113;
    undefined field200_0x114;
    undefined field201_0x115;
    undefined field202_0x116;
    undefined field203_0x117;
    undefined field204_0x118;
    undefined field205_0x119;
    undefined field206_0x11a;
    undefined field207_0x11b;
    undefined1 offset_0x11c;
    undefined1 offset_0x11d;
    undefined1 offset_0x11e;
    undefined1 offset_0x11f;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
    undefined4 offset_0x134;
    undefined4 offset_0x138;
    undefined4 offset_0x13c;
    undefined4 offset_0x140;
    undefined4 offset_0x144;
    undefined4 offset_0x148;
    undefined4 offset_0x14c;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined4 offset_0x158;
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
};

struct CGraphicCtrl_PushBtn_data {
    int *offset_0x0;
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
    undefined1 offset_0x38;
    undefined field15_0x39;
    undefined field16_0x3a;
    undefined field17_0x3b;
};

struct __CGraphicCtrl_ScrollBar_Bar_data {
    undefined2 offset_0x0;
    undefined2 offset_0x2;
    undefined2 offset_0x4;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};

struct __CGraphicCtrl_ScrollBar_Bar { // class __CGraphicCtrl_ScrollBar_Bar : CGraphicCtrl_PushBtn
    struct __CGraphicCtrl_ScrollBar_Bar_vftable *vftablePtr;
    struct CGraphicCtrl_data CGraphicCtrl_data;
    struct CGraphicCtrl_PushBtn_data CGraphicCtrl_PushBtn_data;
    struct __CGraphicCtrl_ScrollBar_Bar_data __CGraphicCtrl_ScrollBar_Bar_data;
};

typedef struct CEdit_vftable CEdit_vftable, *PCEdit_vftable;

struct CEdit_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CEdit virtual function #1
    CEdit * (*deleting_destructor)(void *, byte); // CEdit virtual function #2
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CWnd virtual function #13
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
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #66
    void (*vfunction67)(void *); // __CWndForInput virtual function #67
    void (*vfunction68)(void *); // __CWndForInput virtual function #68
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

typedef struct CEdit CEdit, *PCEdit;

struct CEdit { // class CEdit : CWnd
    struct CEdit_vftable *vftablePtr;
};

typedef struct CGraphicCtrl_Tile_data CGraphicCtrl_Tile_data, *PCGraphicCtrl_Tile_data;

struct CGraphicCtrl_Tile_data {
    undefined4 *offset_0x0;
    undefined1 offset_0x4;
    undefined1 offset_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

typedef struct CGraphicCtrl_Tile_vftable CGraphicCtrl_Tile_vftable, *PCGraphicCtrl_Tile_vftable;

struct CGraphicCtrl_Tile_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Tile virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_Tile virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_Tile virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*PostProc)(void *); // CGraphicCtrl virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_Tile virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile virtual function #14
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile virtual function #15
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile virtual function #16
};

typedef struct CGraphicCtrl_Tile CGraphicCtrl_Tile, *PCGraphicCtrl_Tile;

struct CGraphicCtrl_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined1 offset_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined2 offset_0x8;
    undefined field6_0xa;
    undefined field7_0xb;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined field14_0x24;
    undefined field15_0x25;
    undefined field16_0x26;
    undefined field17_0x27;
    undefined field18_0x28;
    undefined field19_0x29;
    undefined field20_0x2a;
    undefined field21_0x2b;
    undefined field22_0x2c;
    undefined field23_0x2d;
    undefined field24_0x2e;
    undefined field25_0x2f;
    undefined field26_0x30;
    undefined field27_0x31;
    undefined field28_0x32;
    undefined field29_0x33;
    undefined field30_0x34;
    undefined field31_0x35;
    undefined field32_0x36;
    undefined field33_0x37;
    undefined field34_0x38;
    undefined field35_0x39;
    undefined field36_0x3a;
    undefined field37_0x3b;
    undefined field38_0x3c;
    undefined field39_0x3d;
    undefined field40_0x3e;
    undefined field41_0x3f;
    undefined field42_0x40;
    undefined field43_0x41;
    undefined field44_0x42;
    undefined field45_0x43;
    undefined field46_0x44;
    undefined field47_0x45;
    undefined field48_0x46;
    undefined field49_0x47;
    undefined field50_0x48;
    undefined field51_0x49;
    undefined field52_0x4a;
    undefined field53_0x4b;
    undefined field54_0x4c;
    undefined field55_0x4d;
    undefined field56_0x4e;
    undefined field57_0x4f;
    undefined field58_0x50;
    undefined field59_0x51;
    undefined field60_0x52;
    undefined field61_0x53;
    undefined field62_0x54;
    undefined field63_0x55;
    undefined field64_0x56;
    undefined field65_0x57;
    undefined field66_0x58;
    undefined field67_0x59;
    undefined field68_0x5a;
    undefined field69_0x5b;
    undefined field70_0x5c;
    undefined field71_0x5d;
    undefined field72_0x5e;
    undefined field73_0x5f;
    undefined field74_0x60;
    undefined field75_0x61;
    undefined field76_0x62;
    undefined field77_0x63;
    undefined field78_0x64;
    undefined field79_0x65;
    undefined field80_0x66;
    undefined field81_0x67;
    undefined field82_0x68;
    undefined field83_0x69;
    undefined field84_0x6a;
    undefined field85_0x6b;
    undefined field86_0x6c;
    undefined field87_0x6d;
    undefined field88_0x6e;
    undefined field89_0x6f;
    undefined field90_0x70;
    undefined field91_0x71;
    undefined field92_0x72;
    undefined field93_0x73;
    undefined field94_0x74;
    undefined field95_0x75;
    undefined field96_0x76;
    undefined field97_0x77;
    undefined field98_0x78;
    undefined field99_0x79;
    undefined field100_0x7a;
    undefined field101_0x7b;
    undefined field102_0x7c;
    undefined field103_0x7d;
    undefined field104_0x7e;
    undefined field105_0x7f;
    undefined field106_0x80;
    undefined field107_0x81;
    undefined field108_0x82;
    undefined field109_0x83;
    undefined field110_0x84;
    undefined field111_0x85;
    undefined field112_0x86;
    undefined field113_0x87;
    undefined field114_0x88;
    undefined field115_0x89;
    undefined field116_0x8a;
    undefined field117_0x8b;
    undefined field118_0x8c;
    undefined field119_0x8d;
    undefined field120_0x8e;
    undefined field121_0x8f;
    undefined field122_0x90;
    undefined field123_0x91;
    undefined field124_0x92;
    undefined field125_0x93;
    undefined field126_0x94;
    undefined field127_0x95;
    undefined field128_0x96;
    undefined field129_0x97;
    undefined field130_0x98;
    undefined field131_0x99;
    undefined field132_0x9a;
    undefined field133_0x9b;
    undefined field134_0x9c;
    undefined field135_0x9d;
    undefined field136_0x9e;
    undefined field137_0x9f;
    undefined field138_0xa0;
    undefined field139_0xa1;
    undefined field140_0xa2;
    undefined field141_0xa3;
    undefined field142_0xa4;
    undefined field143_0xa5;
    undefined field144_0xa6;
    undefined field145_0xa7;
    undefined field146_0xa8;
    undefined field147_0xa9;
    undefined field148_0xaa;
    undefined field149_0xab;
    undefined field150_0xac;
    undefined field151_0xad;
    undefined field152_0xae;
    undefined field153_0xaf;
    undefined field154_0xb0;
    undefined field155_0xb1;
    undefined field156_0xb2;
    undefined field157_0xb3;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
    undefined4 offset_0xdc;
    undefined **offset_0xe0;
    undefined4 *offset_0xe4;
    undefined4 offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    struct CPlex *offset_0xf4;
    undefined4 offset_0xf8;
    undefined field176_0xfc;
    undefined field177_0xfd;
    undefined field178_0xfe;
    undefined field179_0xff;
    undefined field180_0x100;
    undefined field181_0x101;
    undefined field182_0x102;
    undefined field183_0x103;
    undefined field184_0x104;
    undefined field185_0x105;
    undefined field186_0x106;
    undefined field187_0x107;
    undefined field188_0x108;
    undefined field189_0x109;
    undefined field190_0x10a;
    undefined field191_0x10b;
    undefined field192_0x10c;
    undefined field193_0x10d;
    undefined field194_0x10e;
    undefined field195_0x10f;
    undefined field196_0x110;
    undefined field197_0x111;
    undefined field198_0x112;
    undefined field199_0x113;
    undefined field200_0x114;
    undefined field201_0x115;
    undefined field202_0x116;
    undefined field203_0x117;
    undefined field204_0x118;
    undefined field205_0x119;
    undefined field206_0x11a;
    undefined field207_0x11b;
    undefined1 offset_0x11c;
    undefined1 offset_0x11d;
    undefined1 offset_0x11e;
    undefined1 offset_0x11f;
    undefined4 offset_0x120;
    undefined4 offset_0x124;
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
    undefined4 offset_0x134;
    undefined4 offset_0x138;
    undefined4 offset_0x13c;
    undefined4 offset_0x140;
    undefined4 offset_0x144;
    undefined4 offset_0x148;
    undefined4 offset_0x14c;
    undefined4 offset_0x150;
    undefined4 offset_0x154;
    undefined4 offset_0x158;
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
};

struct CGraphicCtrl_Tile_data {
    undefined4 *offset_0x0;
    undefined1 offset_0x4;
    undefined1 offset_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

struct CGraphicCtrl_Tile { // class CGraphicCtrl_Tile : CHgDummyCtrl
    struct CGraphicCtrl_Tile_vftable *vftablePtr;
    struct CGraphicCtrl_data CGraphicCtrl_data;
    struct CGraphicCtrl_Tile_data CGraphicCtrl_Tile_data;
};

typedef struct CGraphicCtrl_Tile_Scale_data CGraphicCtrl_Tile_Scale_data, *PCGraphicCtrl_Tile_Scale_data;

struct CGraphicCtrl_Tile_Scale_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};

typedef struct CGraphicCtrl_Tile_Scale_vftable CGraphicCtrl_Tile_Scale_vftable, *PCGraphicCtrl_Tile_Scale_vftable;

struct CGraphicCtrl_Tile_Scale_vftable {
    CGraphicCtrl * (*deleting_destructor)(void *, byte); // CGraphicCtrl_Tile_Scale virtual function #1
    void * (*_AllocSelf)(void *); // CGraphicCtrl_Tile_Scale virtual function #2
    CGraphicCtrl * (*CreateInstance)(void *); // CGraphicCtrl_Tile_Scale virtual function #3
    void (*SetSpeedRate)(void *, float); // CGraphicCtrl virtual function #4
    int (*PostProc)(void *); // CGraphicCtrl virtual function #5
    int (*PostProc)(void *); // CGraphicCtrl virtual function #6
    int (*DrawProc)(void *, struct CRect *, struct CRect *); // CGraphicCtrl_Tile_Scale virtual function #7
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl virtual function #8
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #9
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CHgDummyCtrl virtual function #10
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #11
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl_Tile_Scale virtual function #12
    int (*SetChildsZOrder)(void *, struct CGraphicCtrl *, uchar, struct CGraphicCtrl *); // CGraphicCtrl virtual function #13
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile_Scale virtual function #14
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile_Scale virtual function #15
    int (*CreateGraphicCtrl)(void *, int *, uint, undefined4, undefined4, undefined4); // CGraphicCtrl_Tile_Scale virtual function #16
};


// WARNING! conflicting data type names: /ClassDataTypes/CGraphicCtrl_Tile_Scale/CGraphicCtrl_Tile_Scale - /CGraphicCtrl_Tile_Scale


// WARNING! conflicting data type names: /ClassDataTypes/__CWndForInput/__CWndForInput - /__CWndForInput

typedef struct __CWndForInput_vftable __CWndForInput_vftable, *P__CWndForInput_vftable;

struct __CWndForInput_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CStatic virtual function #1
    CStatic * (*vfunction2)(void *, byte); // __CWndForInput virtual function #2
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #3
    void (*OnBtnClicked)(void *); // CGraphicCtrl_PushBtn virtual function #4
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // __CWndForInput virtual function #13
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
    void (*OnSelfNotice)(void *, ushort); // CGraphicCtrl virtual function #66
    void (*vfunction67)(void *); // __CWndForInput virtual function #67
    void (*vfunction68)(void *); // __CWndForInput virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // __CWndForInput virtual function #69
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CStatic virtual function #83
    int (*PreTranslateInput)(void *, struct tagMSG *); // __CWndForInput virtual function #84
};

typedef struct __CWndForInput_data __CWndForInput_data, *P__CWndForInput_data;

struct __CWndForInput_data {
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
    undefined4 *offset_0x50;
    undefined4 offset_0x54;
};

typedef struct CDC CDC, *PCDC;

struct CDC { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CEdit - /ClassDataTypes/CEdit/CEdit

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};

typedef struct CList<IControlSiteFactory*,IControlSiteFactory*> CList<IControlSiteFactory*,IControlSiteFactory*>, *PCList<IControlSiteFactory*,IControlSiteFactory*>;

struct CList<IControlSiteFactory*,IControlSiteFactory*> { // PlaceHolder Structure
};

typedef struct CSize CSize, *PCSize;

struct CSize { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWinThread - /ClassDataTypes/CWinThread/CWinThread


// WARNING! conflicting data type names: /Demangler/CStatic - /ClassDataTypes/CStatic/CStatic

typedef struct CDisplayModeChanger CDisplayModeChanger, *PCDisplayModeChanger;

struct CDisplayModeChanger { // PlaceHolder Structure
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

typedef struct CRect CRect, *PCRect;

struct CRect { // PlaceHolder Structure
};

typedef struct CDocument CDocument, *PCDocument;

struct CDocument { // PlaceHolder Structure
};

typedef struct AFX_OLECMDMAP AFX_OLECMDMAP, *PAFX_OLECMDMAP;

struct AFX_OLECMDMAP { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/AFX_MODULE_STATE - /ClassDataTypes/AFX_MODULE_STATE/AFX_MODULE_STATE

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};

typedef struct CArchive CArchive, *PCArchive;

struct CArchive { // PlaceHolder Structure
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID { // PlaceHolder Structure
};

typedef struct _AFX_THREAD_STATE _AFX_THREAD_STATE, *P_AFX_THREAD_STATE;

struct _AFX_THREAD_STATE { // PlaceHolder Structure
};

typedef struct AFX_EVENTSINKMAP AFX_EVENTSINKMAP, *PAFX_EVENTSINKMAP;

struct AFX_EVENTSINKMAP { // PlaceHolder Structure
};

typedef struct tagTOOLINFOA tagTOOLINFOA, *PtagTOOLINFOA;

struct tagTOOLINFOA { // PlaceHolder Structure
};

typedef struct AFX_CONNECTIONMAP AFX_CONNECTIONMAP, *PAFX_CONNECTIONMAP;

struct AFX_CONNECTIONMAP { // PlaceHolder Structure
};

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { // PlaceHolder Structure
};

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { // PlaceHolder Structure
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHgImageBase - /ClassDataTypes/CHgImageBase/CHgImageBase

typedef struct SGlobalInfo SGlobalInfo, *PSGlobalInfo;

struct SGlobalInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGameWnd - /ClassDataTypes/CGameWnd/CGameWnd


// WARNING! conflicting data type names: /Demangler/CControlBase - /ClassDataTypes/CControlBase/CControlBase

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHgImage16 - /ClassDataTypes/CHgImage16/CHgImage16

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { // PlaceHolder Structure
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ { // PlaceHolder Structure
};

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

struct tagVARIANT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWnd - /ClassDataTypes/CWnd/CWnd

typedef struct IConnectionPoint IConnectionPoint, *PIConnectionPoint;

struct IConnectionPoint { // PlaceHolder Structure
};

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};

typedef struct _AFX_OCC_DIALOG_INFO _AFX_OCC_DIALOG_INFO, *P_AFX_OCC_DIALOG_INFO;

struct _AFX_OCC_DIALOG_INFO { // PlaceHolder Structure
};

typedef struct CParam CParam, *PCParam;

struct CParam { // PlaceHolder Structure
};

typedef struct AFX_INTERFACEMAP AFX_INTERFACEMAP, *PAFX_INTERFACEMAP;

struct AFX_INTERFACEMAP { // PlaceHolder Structure
};

typedef struct IDispatch IDispatch, *PIDispatch;

struct IDispatch { // PlaceHolder Structure
};

typedef struct tagCREATESTRUCTA tagCREATESTRUCTA, *PtagCREATESTRUCTA;

struct tagCREATESTRUCTA { // PlaceHolder Structure
};

typedef struct AFX_MSGMAP AFX_MSGMAP, *PAFX_MSGMAP;

struct AFX_MSGMAP { // PlaceHolder Structure
};

typedef struct __CEnhancedChar __CEnhancedChar, *P__CEnhancedChar;

struct __CEnhancedChar { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CList<CGraphicCtrl*,CGraphicCtrl*> - /ClassDataTypes/CList<CGraphicCtrl*,CGraphicCtrl*>/CList<CGraphicCtrl*,CGraphicCtrl*>


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct CCreateFT CCreateFT, *PCCreateFT;

struct CCreateFT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHgDIB16 - /ClassDataTypes/CHgDIB16/CHgDIB16

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGdiObject - /ClassDataTypes/CGdiObject/CGdiObject


// WARNING! conflicting data type names: /Demangler/CWinApp - /ClassDataTypes/CWinApp/CWinApp

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGraphicCtrl_Tile - /ClassDataTypes/CGraphicCtrl_Tile/CGraphicCtrl_Tile

typedef struct tagDRAWITEMSTRUCT tagDRAWITEMSTRUCT, *PtagDRAWITEMSTRUCT;

struct tagDRAWITEMSTRUCT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGraphicCtrl_PushBtn_Ani - /ClassDataTypes/CGraphicCtrl_PushBtn_Ani/CGraphicCtrl_PushBtn_Ani

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};

typedef struct AFX_MAINTAIN_STATE2 AFX_MAINTAIN_STATE2, *PAFX_MAINTAIN_STATE2;

struct AFX_MAINTAIN_STATE2 { // PlaceHolder Structure
};

typedef struct CException CException, *PCException;

struct CException { // PlaceHolder Structure
};

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFont - /ClassDataTypes/CFont/CFont

typedef struct tagMSG tagMSG, *PtagMSG;

struct tagMSG { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCmdTarget - /ClassDataTypes/CCmdTarget/CCmdTarget

typedef struct GCCB_EBINFO GCCB_EBINFO, *PGCCB_EBINFO;

struct GCCB_EBINFO { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CObject - /ClassDataTypes/CObject/CObject

typedef struct CList<void*,void*> CList<void*,void*>, *PCList<void*,void*>;

struct CList<void*,void*> { // PlaceHolder Structure
};

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ { // PlaceHolder Structure
};

typedef struct __POSITION __POSITION, *P__POSITION;

struct __POSITION { // PlaceHolder Structure
};

typedef struct IParam IParam, *PIParam;

struct IParam { // PlaceHolder Structure
};

typedef struct GCTB_SBINFO GCTB_SBINFO, *PGCTB_SBINFO;

struct GCTB_SBINFO { // PlaceHolder Structure
};

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};

typedef enum SLIDE_BAR_TYPE {
} SLIDE_BAR_TYPE;


// WARNING! conflicting data type names: /Demangler/CGraphicCtrl_SlideBar/__CGraphicCtrl_SlideBar_Thumb - /ClassDataTypes/CGraphicCtrl_SlideBar/__CGraphicCtrl_SlideBar_Thumb/__CGraphicCtrl_SlideBar_Thumb

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

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGraphicCtrl_Tile_Ani/_KeyFrame - /ClassDataTypes/CGraphicCtrl_Tile_Ani/_KeyFrame/_KeyFrame


// WARNING! conflicting data type names: /CGraphicCtrl_ScrollBar/__CGraphicCtrl_ScrollBar_Dn - /ClassDataTypes/CGraphicCtrl_ScrollBar/__CGraphicCtrl_ScrollBar_Dn/__CGraphicCtrl_ScrollBar_Dn


// WARNING! conflicting data type names: /CGraphicCtrl_ScrollBar/__CGraphicCtrl_ScrollBar_Up - /ClassDataTypes/CGraphicCtrl_ScrollBar/__CGraphicCtrl_ScrollBar_Up/__CGraphicCtrl_ScrollBar_Up


// WARNING! conflicting data type names: /CGraphicCtrl_ScrollBar/__CGraphicCtrl_ScrollBar_Bar - /ClassDataTypes/CGraphicCtrl_ScrollBar/__CGraphicCtrl_ScrollBar_Bar/__CGraphicCtrl_ScrollBar_Bar

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;




errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
char * __cdecl strtok_s(char *_Str,char *_Delim,char **_Context);
int __cdecl vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList);
void __cdecl FUN_60001040(char *param_1,size_t param_2,char *param_3,char param_4);
void __thiscall CHgDIB16E::~CHgDIB16E(CHgDIB16E *this);
void __thiscall CHgDIB16E::PutPixel(CHgDIB16E *this,long param_1,long param_2,ushort param_3);
void __thiscall CHgDIB16E::PutPixel(CHgDIB16E *this,long param_1,long param_2,ulong param_3);
CHgDIB16E * __thiscall CHgDIB16E::CHgDIB16E(CHgDIB16E *this);
CHgDIB16 * __thiscall CHgDIB16E::scalar_deleting_destructor(CHgDIB16E *this,byte param_1);
int __thiscall CAnimateGameWnd::IsActivatedGameWnd(CAnimateGameWnd *this);
void __thiscall CGraphicCurve::SetVelocity(CGraphicCurve *this,float param_1,float param_2);
int __thiscall CGraphicCurve::SafeAction(CGraphicCurve *this,ulong param_1);
void __thiscall CGraphicCurve::CGraphicCurve(CGraphicCurve *this,CGraphicCurve *param_1);
CGraphicCurve * __thiscall CGraphicCurve::operator=(CGraphicCurve *this,CGraphicCurve *param_1);
CHgDIB16E * __cdecl CGraphicCtrl::GetBackBuf(void);
HDC__ * __cdecl CGraphicCtrl::GetBackDC(void);
bool __thiscall CGraphicCtrl::GetFreeDraw(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetFreeDraw(CGraphicCtrl *this,bool param_1);
void __thiscall CGraphicCtrl::__SetAttachedToParentsChildList(CGraphicCtrl *this,char param_1);
char __thiscall CGraphicCtrl::__IsAttachedToParentsChildList(CGraphicCtrl *this);
void * __thiscall CGraphicCtrl::CGraphicCtrl::_AllocSelf(CGraphicCtrl *this);
CGraphicCtrl * __thiscall CGraphicCtrl::GetReference(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetID(CGraphicCtrl *this,ushort param_1);
ushort __thiscall CGraphicCtrl::GetID(CGraphicCtrl *this);
CGraphicCtrl * __thiscall CGraphicCtrl::GetParent(CGraphicCtrl *this);
CList<CGraphicCtrl*,CGraphicCtrl*> * __thiscall CGraphicCtrl::GetChildList(CGraphicCtrl *this);
int __thiscall CGraphicCtrl::IsDependent(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetDependent(CGraphicCtrl *this,int param_1);
void __thiscall CGraphicCtrl::SafeDelete(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetEffectType(CGraphicCtrl *this,uchar param_1);
void __thiscall CGraphicCtrl::SetEffectCurrentDegree(CGraphicCtrl *this,uchar param_1);
uchar __thiscall CGraphicCtrl::GetEffectType(CGraphicCtrl *this);
uchar __thiscall CGraphicCtrl::GetEffectCurrentDegree(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetLifeTime(CGraphicCtrl *this,ulong param_1,int param_2);
ulong __thiscall CGraphicCtrl::GetLifeTime(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetEffectTime(CGraphicCtrl *this,ulong param_1,int param_2);
ulong __thiscall CGraphicCtrl::GetEffectTime(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetShowTime(CGraphicCtrl *this,ulong param_1,int param_2,int param_3);
ulong __thiscall CGraphicCtrl::GetShowTime(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetPlayTime(CGraphicCtrl *this,ulong param_1,int param_2,int param_3);
ulong __thiscall CGraphicCtrl::GetPlayTime(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetNoticeTime(CGraphicCtrl *this,ulong param_1,int param_2);
ulong __thiscall CGraphicCtrl::GetNoticeTime(CGraphicCtrl *this);
ulong * __thiscall CGraphicCtrl::GetAccumulatedTime(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::CGraphicCtrl::SetSpeedRate(CGraphicCtrl *this,float param_1);
void __thiscall CGraphicCtrl::SetPos(CGraphicCtrl *this,int param_1,int param_2);
void __thiscall CGraphicCtrl::GetPosBase(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::GetSize(CGraphicCtrl *this);
CGraphicCurve * __thiscall CGraphicCtrl::GetCurve(CGraphicCtrl *this);
CRect * __thiscall CGraphicCtrl::GetClippingRect(CGraphicCtrl *this);
CRect * __thiscall CGraphicCtrl::GetLastUpdatedRect(CGraphicCtrl *this);
CRect * __thiscall CGraphicCtrl::GetInvalidateArea(CGraphicCtrl *this);
CHgDIB16E * __thiscall CGraphicCtrl::GetDIBSrc(CGraphicCtrl *this);
int __thiscall CGraphicCtrl::IsUseDIB(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetUseDIB(CGraphicCtrl *this,int param_1);
int __thiscall CGraphicCtrl::IsShow(CGraphicCtrl *this);
int __thiscall CGraphicCtrl::IsPlay(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::ShowCtrl(CGraphicCtrl *this,int param_1);
void __thiscall CGraphicCtrl::PlayCtrl(CGraphicCtrl *this,int param_1);
void * __thiscall CGraphicCtrl_Root::CGraphicCtrl_Root::_AllocSelf(CGraphicCtrl_Root *this);
CRuntimeClass * CAnimateGameWnd::_GetBaseClass(void);
CRuntimeClass * __thiscall CAnimateGameWnd::CAnimateGameWnd::GetRuntimeClass(CAnimateGameWnd *this);
void __thiscall CAnimateGameWnd::~CAnimateGameWnd(CAnimateGameWnd *this);
long __thiscall CAnimateGameWnd::OnAnimate(CAnimateGameWnd *this,uint param_1,long param_2);
int __thiscall CGraphicCtrl::CGraphicCtrl::PostProc(CGraphicCtrl *this);
void __thiscall CAnimateGameWnd::OnDestroy(CAnimateGameWnd *this);
void __thiscall CAnimateGameWnd::RemoveAllGC(CAnimateGameWnd *this);
long __thiscall CAnimateGameWnd::OnMsgFromMainActiveApp(CAnimateGameWnd *this,uint param_1,long param_2);
void FUN_600019d0(void *param_1);
void __thiscall __CWndForInput::vfunction67(__CWndForInput *this);
void __thiscall __CWndForInput::vfunction68(__CWndForInput *this);
CAnimateGameWnd * __thiscall CAnimateGameWnd::scalar_deleting_destructor(CAnimateGameWnd *this,byte param_1);
int __thiscall CGraphicCurve::IsArrived(CGraphicCurve *this);
undefined4 * __thiscall CGraphicCurve::GetPosition(CGraphicCurve *this);
CGraphicCtrl * __thiscall CGraphicCtrl::GetChild(CGraphicCtrl *this,int param_1);
void __thiscall CGraphicCtrl::SetBlendType(CGraphicCtrl *this,int param_1,int param_2);
undefined4 * __thiscall CGraphicCtrl::GetPos(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetPosTo(CGraphicCtrl *this,int param_1,int param_2);
void __thiscall CGraphicCtrl::SetRates(CGraphicCtrl *this,float param_1,float param_2);
void __thiscall CGraphicCtrl::InvalidateArea(CGraphicCtrl *this,int param_1,int param_2,int param_3,int param_4);
CHgDIB16E * __thiscall CHgDIB16E::CHgDIB16E(CHgDIB16E *this);
void __thiscall CAnimateGameWnd::CAnimateGameWnd::AnimationProc(CAnimateGameWnd *this,ulong param_1);
void __thiscall CAnimateGameWnd::CAnimateGameWnd::FlipEx(CAnimateGameWnd *this,CRect *param_1);
void __thiscall CAnimateGameWnd::CAnimateGameWnd::FlipSc(CAnimateGameWnd *this,CRect *param_1);
void __thiscall CAnimateGameWnd::CAnimateGameWnd::DoExActive(CAnimateGameWnd *this,int param_1);
CGraphicCtrl * __thiscall CAnimateGameWnd::LinkGC(CAnimateGameWnd *this,CGraphicCtrl *param_1,int param_2,int param_3,int param_4,int param_5,ushort param_6,int param_7,int param_8,uchar param_9,CGraphicCtrl *param_10);
CGraphicCtrl * __thiscall CAnimateGameWnd::AddGC(CAnimateGameWnd *this,CGraphicCtrl *param_1,int param_2,int param_3,int param_4,int param_5,ushort param_6,int param_7,int param_8,uchar param_9,CGraphicCtrl *param_10);
void __thiscall CAnimateGameWnd::OnPaint(CAnimateGameWnd *this);
void __thiscall CAnimateGameWnd::UseSkin(CAnimateGameWnd *this,int param_1);
void __thiscall CAnimateGameWnd::OnLButtonDown(CAnimateGameWnd *this,undefined4 param_1,LONG param_3,LONG param_4);
void __thiscall CAnimateGameWnd::OnLButtonDblClk(CAnimateGameWnd *this,undefined4 param_1,LONG param_3,LONG param_4);
void __thiscall CAnimateGameWnd::OnLButtonUp(CAnimateGameWnd *this);
void __thiscall CAnimateGameWnd::OnRButtonDown(CAnimateGameWnd *this);
void __thiscall CAnimateGameWnd::OnRButtonUp(CAnimateGameWnd *this);
void __thiscall CAnimateGameWnd::OnTimer(CAnimateGameWnd *this,uint param_1);
void __thiscall CAnimateGameWnd::vfunction1(CAnimateGameWnd *this,byte param_1);
void __thiscall CGraphicCtrl::Invalidate(CGraphicCtrl *this);
int __thiscall CAnimateGameWnd::OnCreate(CAnimateGameWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CAnimateGameWnd::RemoveGC(CAnimateGameWnd *this,CGraphicCtrl *param_1);
void __thiscall CGraphicCtrl::SetEffectDegrees(CGraphicCtrl *this,uchar param_1,uchar param_2);
void __thiscall CGraphicCtrl::SetSize(CGraphicCtrl *this,CSize *param_1);
void __thiscall CGraphicCtrl::SetClippingRect(CGraphicCtrl *this,CRect *param_1);
AFX_MSGMAP * __thiscall CAnimateGameWnd::CAnimateGameWnd::GetMessageMap(CAnimateGameWnd *this);
void __thiscall CGraphicCtrl::SetSize(CGraphicCtrl *this,int param_1,int param_2);
void __thiscall CGraphicCtrl::SetClippingRect(CGraphicCtrl *this,int param_1,int param_2,int param_3,int param_4);
int __cdecl FUN_60002a20(undefined4 param_1,int param_2,int param_3,int *param_4);
int __cdecl FUN_60002b10(undefined4 param_1,int param_2,int param_3,int *param_4);
int __cdecl FUN_60002c30(undefined4 param_1,int param_2,int param_3,int *param_4);
int __cdecl FUN_60002da0(undefined4 param_1,int param_2,int param_3,int *param_4);
int __cdecl FUN_60002f10(undefined4 param_1,int param_2,int param_3,int *param_4);
int __cdecl FUN_60003040(int param_1,CHgImageBase *param_2,int *param_3);
void __thiscall __CEnhancedChar::__CEnhancedChar(__CEnhancedChar *this);
__CEnhancedChar * __thiscall __CEnhancedChar::__CEnhancedChar(__CEnhancedChar *this,char param_1,char param_2);
void __thiscall __CEnhancedChar::__CEnhancedChar(__CEnhancedChar *this,char param_1);
bool __thiscall __CEnhancedChar::IsUnicode(__CEnhancedChar *this);
char * __thiscall __CEnhancedChar::GetBuf(__CEnhancedChar *this);
int __thiscall __CEnhancedChar::GetByteLength(__CEnhancedChar *this);
__CEnhancedChar * __thiscall __CEnhancedChar::operator=(__CEnhancedChar *this,__CEnhancedChar *param_1);
void __thiscall CGraphicCtrl_EditBox::SetFont(CGraphicCtrl_EditBox *this,CFont *param_1);
int __thiscall CGraphicCtrl_EditBox::IsOperate(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::ReserveDraw(CGraphicCtrl_EditBox *this);
int __thiscall CGraphicCtrl_EditBox::IsCompositing(CGraphicCtrl_EditBox *this);
void * __thiscall CGraphicCtrl_EditBox::CGraphicCtrl_EditBox::_AllocSelf(CGraphicCtrl_EditBox *this);
void * __thiscall CGraphicCtrl_TextBox::CGraphicCtrl_TextBox::_AllocSelf(CGraphicCtrl_TextBox *this);
void __thiscall CGraphicCtrl_ChatBox::OperateInputBox(CGraphicCtrl_ChatBox *this,bool param_1);
bool __thiscall CGraphicCtrl_ChatBox::IsOperateInputBox(CGraphicCtrl_ChatBox *this);
undefined4 __thiscall CGraphicCtrl_ChatBox::GetInputArea(CGraphicCtrl_ChatBox *this);
int __thiscall CGraphicCtrl_ChatBox::GetChatEditLength(CGraphicCtrl_ChatBox *this);
__CGraphicCtrl_ChatInputBox * __thiscall CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox::__CGraphicCtrl_ChatInputBox(__CGraphicCtrl_ChatInputBox *this);
void __thiscall CGraphicCtrl_ChatBox::~CGraphicCtrl_ChatBox(CGraphicCtrl_ChatBox *this);
void __thiscall CGraphicCtrl_ChatBox::CGraphicCtrl_ChatBox::OnSelfNotice(CGraphicCtrl_ChatBox *this,ushort param_1);
void __thiscall CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox::vfunction14(__CGraphicCtrl_ChatInputBox *this);
int __thiscall CGraphicCtrl_ChatBox::InitTextBox(void);
void FUN_600034a0(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::logic_error::vfunction2(logic_error *this);
exception * __thiscall std::out_of_range::scalar_deleting_destructor(out_of_range *this,byte param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
void FUN_600035a0(exception *param_1);
CGraphicCtrl_EditBox * __thiscall CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox::vfunction2(__CGraphicCtrl_ChatInputBox *this);
void * __thiscall CGraphicCtrl_ChatBox::CGraphicCtrl_ChatBox::_AllocSelf(CGraphicCtrl_ChatBox *this);
CGraphicCtrl_ChatBox * __thiscall CGraphicCtrl_ChatBox::scalar_deleting_destructor(CGraphicCtrl_ChatBox *this,byte param_1);
CGraphicCtrl_EditBox * __thiscall CGraphicCtrl_ChatBox::__CGraphicCtrl_ChatInputBox::scalar_deleting_destructor(__CGraphicCtrl_ChatInputBox *this,byte param_1);
int __thiscall CGraphicCtrl_ChatBox::InitChatBox(CGraphicCtrl_ChatBox *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_6);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
void FUN_600038d0(exception *param_1);
void __fastcall FUN_600038f0(undefined4 *param_1);
void __cdecl FUN_60003900(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
__CWndForInput * __thiscall __CWndForInput::__CWndForInput(__CWndForInput *this,CGraphicCtrl_EditBox *param_1);
void __thiscall __CWndForInput::~__CWndForInput(__CWndForInput *this);
CStatic * __thiscall __CWndForInput::vfunction2(__CWndForInput *this,byte param_1);
void __thiscall CGraphicCtrl_EditBox::attachMsg(CGraphicCtrl_EditBox *this,_func_int_CStatic_ptr_tagMSG_ptr *param_1);
void __thiscall CGraphicCtrl_ChatBox::attachMsg(CGraphicCtrl_ChatBox *this,_func_int_CStatic_ptr_tagMSG_ptr *param_1);
int __thiscall __CWndForInput::PreTranslateInput(__CWndForInput *this,tagMSG *param_1);
long __thiscall __CWndForInput::OnMyImeNotify(__CWndForInput *this,uint param_1,long param_2);
int __thiscall CHgDummyCtrl::CHgDummyCtrl::DrawProc(CHgDummyCtrl *this,CRect *param_1,CRect *param_2);
long __thiscall __CWndForInput::OnMyImeEndComposition(__CWndForInput *this,uint param_1,long param_2);
void __thiscall CGraphicCtrl_EditBox::CGraphicCtrl_EditBox::__OnInputArrive(CGraphicCtrl_EditBox *this,char *param_1);
void __thiscall CGraphicCtrl_EditBox::CarotBlank(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl::CGraphicCtrl::OnSelfNotice(CGraphicCtrl *this,ushort param_1);
int __thiscall CGraphicCtrl_EditBox::HScrollPosDecrease(CGraphicCtrl_EditBox *this);
int __thiscall CGraphicCtrl_EditBox::CalculateBufWidth(CGraphicCtrl_EditBox *this,char *param_1);
void __thiscall CGraphicCtrl_EditBox::RechargeCarotBlank(CGraphicCtrl_EditBox *this);
void FUN_60003ba0(uint param_1);
void __thiscall CGdiObject::~CGdiObject(CGdiObject *this);
undefined4 Catch@60003c23(void);
void __thiscall CFont::~CFont(CFont *this);
void __thiscall CGraphicCtrl_EditBox::ProcessCompositionStr(CGraphicCtrl_EditBox *this,char param_1,char param_2,long param_3);
void __thiscall CGraphicCtrl_EditBox::CancelCompotision(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::__IncreaseCarotPos(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::CarotLeftMove(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::__MaximizeCarotPos(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::CarotHomeMove(CGraphicCtrl_EditBox *this);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
void __thiscall std::length_error::length_error(length_error *this);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void * __thiscall CGdiObject::CImageList::`scalar_deleting_destructor'(CGdiObject *this,uint param_1);
undefined4 * __thiscall CFont::scalar_deleting_destructor(CFont *this,byte param_1);
void FUN_60003fb0(exception *param_1);
long __thiscall __CWndForInput::OnMyImeComposition(__CWndForInput *this,uint param_1,long param_2);
void __thiscall CGraphicCtrl_EditBox::CarotRightMove(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::CarotEndMove(CGraphicCtrl_EditBox *this);
uint __fastcall FUN_60004100(int *param_1);
int * __thiscall FUN_60004140(void *this,int param_1);
void __thiscall FUN_60004190(void *this,int *param_1,int param_2);
void * __cdecl FUN_600041e0(void *param_1,int param_2,int param_3);
CHgDIB16E * __thiscall CHgDIB16E::CHgDIB16E(CHgDIB16E *this);
undefined4 * __thiscall FUN_60004330(void *this,undefined4 *param_1);
uint __thiscall FUN_60004360(void *this,uint param_1);
int * __thiscall FUN_600043f0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,void *param_5);
int __thiscall CGraphicCtrl_EditBox::InitEditBox(CGraphicCtrl_EditBox *this,int param_1,int param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,ulong param_7,int param_8);
int __thiscall CGraphicCtrl_EditBox::CalculateTotalLength(CGraphicCtrl_EditBox *this,int param_1,int param_2);
int __thiscall CGraphicCtrl_EditBox::GetTotalStrLength(CGraphicCtrl_EditBox *this);
int __thiscall CGraphicCtrl_EditBox::HScrollPosIncrease(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::CopyString(CGraphicCtrl_EditBox *this,char *param_1,int param_2,int param_3);
undefined4 * __thiscall FUN_60004aa0(void *this,undefined4 *param_1,undefined4 param_2,void *param_3);
void __thiscall FUN_60004b00(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void __thiscall CGraphicCtrl_EditBox::~CGraphicCtrl_EditBox(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::RemoveEnhancedCharByBackSpace(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::RemoveEnhancedCharByDelete(CGraphicCtrl_EditBox *this);
void __thiscall CGraphicCtrl_EditBox::OnEnter(CGraphicCtrl_EditBox *this);
void __thiscall FUN_600051b0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
CGraphicCtrl_EditBox * __thiscall CGraphicCtrl_EditBox::scalar_deleting_destructor(CGraphicCtrl_EditBox *this,byte param_1);
int __thiscall __CWndForInput::PreTranslateMessage(__CWndForInput *this,tagMSG *param_1);
bool __thiscall CGraphicCtrl_EditBox::AddChar(CGraphicCtrl_EditBox *this,char param_1);
bool __thiscall CGraphicCtrl_EditBox::SetIMEChar(CGraphicCtrl_EditBox *this,char param_1,char param_2,bool param_3,bool param_4);
void __thiscall __CWndForInput::OnChar(__CWndForInput *this,uint param_1,uint param_2,uint param_3);
long __thiscall __CWndForInput::OnMyImeChar(__CWndForInput *this,uint param_1,long param_2);
void __thiscall CGraphicCtrl_EditBox::Operate(CGraphicCtrl_EditBox *this,int param_1);
void __thiscall __CWndForInput::OnKillFocus(__CWndForInput *this,CWnd *param_1);
void __thiscall __CWndForInput::OnKeyDown(__CWndForInput *this,uint param_1,uint param_2,uint param_3);
int __thiscall CGraphicCtrl_EditBox::CGraphicCtrl_EditBox::Proc(CGraphicCtrl_EditBox *this,ulong param_1);
AFX_MSGMAP * __thiscall __CWndForInput::GetMessageMap(__CWndForInput *this);
void __thiscall CHgDIB16E::CHgDIB16E(CHgDIB16E *this);
void * __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text::_AllocSelf(CGraphicCtrl_Text *this);
CGraphicCtrl_Text * __thiscall CGraphicCtrl_Text::scalar_deleting_destructor(CGraphicCtrl_Text *this,byte param_1);
CGraphicCtrl * __thiscall CGraphicCtrl_Notify::CGraphicCtrl_Notify::CreateInstance(CGraphicCtrl_Notify *this);
void __thiscall ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this);
void __cdecl FUN_600061d0(undefined4 param_1);
void __thiscall CGraphicCtrl_Notify::SetDecoration(CGraphicCtrl_Notify *this,int param_1);
int __thiscall CGraphicCtrl_Notify::GetDecoration(CGraphicCtrl_Notify *this);
void __thiscall CGraphicCtrl_Notify::CreateFontA(CGraphicCtrl_Notify *this,HFONT__ *param_1);
int __thiscall CGraphicCtrl_Notify::GetFlashTime(CGraphicCtrl_Notify *this);
void __cdecl FUN_600062b0(void *param_1,rsize_t param_2,void *param_3,rsize_t param_4);
void __thiscall FUN_600062e0(void *this,int param_1,int param_2);
void __thiscall CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::~CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>(CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *this);
undefined4 * __thiscall CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::scalar_deleting_destructor(CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *this,byte param_1);
void __thiscall FUN_60006430(void *this,int param_1,int param_2);
void __thiscall FUN_600066b0(void *param_1,int param_2,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void FUN_60006760(CArchive *param_1,void *param_2,uint param_3);
CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> * __thiscall CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>(CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *this);
void __thiscall CGraphicCtrl_Notify::~CGraphicCtrl_Notify(CGraphicCtrl_Notify *this);
int __thiscall FUN_600068c0(void *param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void __thiscall CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO>::vfunction3(CArray<CGraphicCtrl_Notify::WAIT_INFO,CGraphicCtrl_Notify::WAIT_INFO> *this,CArchive *param_1);
void * __thiscall CGraphicCtrl_Notify::CGraphicCtrl_Notify::_AllocSelf(CGraphicCtrl_Notify *this);
CGraphicCtrl * __thiscall CGraphicCtrl_Notify::scalar_deleting_destructor(CGraphicCtrl_Notify *this,byte param_1);
void __thiscall CGraphicCtrl_Notify::DeleteNotice(CGraphicCtrl_Notify *this,int param_1);
void __thiscall CGraphicCtrl_Notify::CGraphicCtrl_Notify::OnNoticeTime(CGraphicCtrl_Notify *this);
void __thiscall CGraphicCtrl_Notify::AddNotice(CGraphicCtrl_Notify *this,ulong param_2,undefined4 param_3,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_4,int param_5,CHgDIB16E *param_6,void *param_7,undefined4 param_8);
int __thiscall CGraphicCtrl_Notify::CGraphicCtrl_Notify::Proc(CGraphicCtrl_Notify *this,ulong param_1);
CHgDIB16E * __thiscall CHgDIB16E::CHgDIB16E(CHgDIB16E *this);
int __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text::CreateGraphicCtrl(CGraphicCtrl_Text *this,int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
int __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text::CreateGraphicCtrl(CGraphicCtrl_Text *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text::Proc(CGraphicCtrl_Text *this,ulong param_1);
void __thiscall CGraphicCtrl_Text::SetMode(CGraphicCtrl_Text *this,HDC__ *param_1,int param_2);
void __thiscall CGraphicCtrl_Text::SetDecoration(CGraphicCtrl_Text *this,int param_1,ulong param_2);
int __thiscall CGraphicCtrl_Text::GetShadowDegree(CGraphicCtrl_Text *this);
void __thiscall CGraphicCtrl_Text::SetShadowDegree(CGraphicCtrl_Text *this,int param_1);
CGraphicCtrl * __thiscall CGraphicCtrl_Text::CGraphicCtrl_Text::CreateInstance(CGraphicCtrl_Text *this);
void __thiscall CGraphicCtrl_Text::TextOutA(CGraphicCtrl_Text *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,int param_2,int param_3,HFONT__ *param_4,ulong param_5);
void __thiscall CGraphicCtrl_Text::TextOutA(CGraphicCtrl_Text *this,float param_1,int param_2,int param_3,HFONT__ *param_4,ulong param_5);
void __thiscall CGraphicCtrl_Text::TextOutA(CGraphicCtrl_Text *this,int param_1,int param_2,int param_3,HFONT__ *param_4,ulong param_5);
void __thiscall CGraphicCtrl_Text::DrawTextA(CGraphicCtrl_Text *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,CRect *param_2,HFONT__ *param_3,ulong param_4,uint param_5);
void __thiscall CGraphicCtrl_Text::DrawTextA(CGraphicCtrl_Text *this,float param_1,CRect *param_2,HFONT__ *param_3,ulong param_4,uint param_5);
void __thiscall CGraphicCtrl_Text::DrawTextA(CGraphicCtrl_Text *this,int param_1,CRect *param_2,HFONT__ *param_3,ulong param_4,uint param_5);
void __thiscall CGraphicCtrl_Text::CreateBuffer(CGraphicCtrl_Text *this,int param_1,int param_2,HFONT__ *param_3,ulong param_4);
CHgDummyCtrl * __thiscall CHgDummyCtrl::CHgDummyCtrl(CHgDummyCtrl *this);
void __thiscall CHgDummyCtrl::~CHgDummyCtrl(CHgDummyCtrl *this);
CGraphicCtrl * __thiscall CHgDummyCtrl::vfunction1(CHgDummyCtrl *this,byte param_1);
void __thiscall CGraphicCtrl_PushBtn::SetWantDblClk(CGraphicCtrl_PushBtn *this,int param_1);
int __thiscall CGraphicCtrl_PushBtn::IsWantDblClk(CGraphicCtrl_PushBtn *this);
int __thiscall CGraphicCtrl_PushBtn::IsDblClk(CGraphicCtrl_PushBtn *this);
void __thiscall CGraphicCtrl_PushBtn::EnableButton(CGraphicCtrl_PushBtn *this,int param_1);
int __thiscall CGraphicCtrl_PushBtn::IsWindowEnabled(CGraphicCtrl_PushBtn *this);
void * __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn::_AllocSelf(CGraphicCtrl_PushBtn *this);
void __thiscall CGraphicCtrl_ScrollBar::SetPageSize(CGraphicCtrl_ScrollBar *this,ushort param_1);
void __thiscall CGraphicCtrl_ScrollBar::SetCurrentPos(CGraphicCtrl_ScrollBar *this,ushort param_1);
void * __thiscall CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar::_AllocSelf(CGraphicCtrl_ScrollBar *this);
__CGraphicCtrl_ScrollBar_Up * __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::__CGraphicCtrl_ScrollBar_Up(__CGraphicCtrl_ScrollBar_Up *this);
__CGraphicCtrl_ScrollBar_Dn * __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::__CGraphicCtrl_ScrollBar_Dn(__CGraphicCtrl_ScrollBar_Dn *this);
CGraphicCtrl_PushBtn * __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::vfunction1(__CGraphicCtrl_ScrollBar_Dn *this,byte param_1);
void __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::~__CGraphicCtrl_ScrollBar_Bar(__CGraphicCtrl_ScrollBar_Bar *this);
CGraphicCtrl_PushBtn * __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::vfunction1(__CGraphicCtrl_ScrollBar_Bar *this,byte param_1);
void __thiscall CGraphicCtrl_TextBox::SetFont(CGraphicCtrl_TextBox *this,CFont *param_1);
void __thiscall CGraphicCtrl_TextBox::ReserveDraw(CGraphicCtrl_TextBox *this);
void __thiscall CGraphicCtrl_TextBox::CGraphicCtrl_TextBox::OnSelfNotice(CGraphicCtrl_TextBox *this,ushort param_1);
void * __thiscall CHgDummyCtrl::CHgDummyCtrl::_AllocSelf(CHgDummyCtrl *this);
void * __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::_AllocSelf(__CGraphicCtrl_ScrollBar_Up *this);
void * __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::_AllocSelf(__CGraphicCtrl_ScrollBar_Dn *this);
__CGraphicCtrl_ScrollBar_Bar * __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::__CGraphicCtrl_ScrollBar_Bar(__CGraphicCtrl_ScrollBar_Bar *this);
void * __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::_AllocSelf(__CGraphicCtrl_ScrollBar_Bar *this);
CHgDIB16E * __thiscall CHgDIB16E::CHgDIB16E(CHgDIB16E *this);
int __thiscall CGraphicCtrl_TextBox::InitTextBox(CGraphicCtrl_TextBox *this,int *param_1,uint param_2,int *param_3,int param_4,uint param_6,char param_7);
void __thiscall CGraphicCtrl_TextBox::ChangeScrollBar(CGraphicCtrl_TextBox *this,int param_2,int param_3,ushort param_4,char param_5);
void __thiscall FUN_60008500(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall CGraphicCtrl_TextBox::RenderText(CGraphicCtrl_TextBox *this);
int __thiscall CGraphicCtrl_TextBox::CGraphicCtrl_TextBox::Proc(CGraphicCtrl_TextBox *this,ulong param_1);
char * __thiscall CGraphicCtrl_TextBox::GetBufData(CGraphicCtrl_TextBox *this);
void __fastcall FUN_60008860(int param_1);
void __thiscall CGraphicCtrl_TextBox::~CGraphicCtrl_TextBox(CGraphicCtrl_TextBox *this);
void __thiscall FUN_60008a40(void *this,undefined4 *param_1);
CGraphicCtrl_TextBox * __thiscall CGraphicCtrl_TextBox::scalar_deleting_destructor(CGraphicCtrl_TextBox *this,byte param_1);
void __thiscall FUN_60008b10(void *this,BYTE param_1,void *param_2);
void __thiscall FUN_60008b80(void *this,char *param_1);
void __thiscall CGraphicCtrl_TextBox::__AddSingleLine(CGraphicCtrl_TextBox *this,char *param_1,ulong param_2);
void __thiscall CGraphicCtrl_TextBox::AddTextLines(CGraphicCtrl_TextBox *this,char *param_1,ulong param_2);
void __thiscall CGraphicCtrl_TextBox::AddLine(CGraphicCtrl_TextBox *this,char *param_1,ulong param_2);
void __thiscall CGraphicCurve::SetRate(CGraphicCurve *this,float param_1,float param_2);
void __thiscall CGraphicCurve::SetPosForce(CGraphicCurve *this,float param_1,float param_2);
int __thiscall CGraphicCurve::_SafeAction_DAMPING(CGraphicCurve *this,ulong param_1);
int __thiscall CGraphicCurve::_SafeAction_JELLY(CGraphicCurve *this,ulong param_1);
int __thiscall CGraphicCurve::_SafeAction_TOUGH(CGraphicCurve *this,ulong param_1);
int __thiscall CGraphicCurve::_SafeAction_NORMAL(CGraphicCurve *this,ulong param_1);
int __thiscall CGraphicCurve::_SafeAction_STRAIGHT(CGraphicCurve *this,ulong param_1);
int __thiscall CGraphicCurve::_SafeAction_QUAD(CGraphicCurve *this,ulong param_1);
void __thiscall CGraphicCurve::_ifCalculateSetting(CGraphicCurve *this);
int __thiscall CGraphicCurve::CGraphicCurve::_SafeAction_DAMPING_Common(CGraphicCurve *this);
int __thiscall CGraphicCurve::CGraphicCurve::_SafeAction_DAMPING_X(CGraphicCurve *this);
int __thiscall CGraphicCurve::CGraphicCurve::_SafeAction_DAMPING_Y(CGraphicCurve *this);
void __thiscall CGraphicCurve::SetStyle(CGraphicCurve *this,int param_1,int param_2);
void __thiscall CGraphicCurve::SetPos(CGraphicCurve *this,float param_1,float param_2,int param_3);
void __thiscall CGraphicCurve::SetStartPos(CGraphicCurve *this,float param_1,float param_2,int param_3);
void __thiscall CGraphicCurve::SetCurve(CGraphicCurve *this,uchar param_1,float param_2,float param_3,float param_4,float param_5,ulong param_6,char param_7);
void __thiscall CGraphicCurve::SetTarget(CGraphicCurve *this,float param_1,float param_2,int param_3);
void __thiscall CGraphicCurve::SetPivot(CGraphicCurve *this,char param_1,int param_2);
void __thiscall CGraphicCurve::SetNormal(CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,ulong param_5,char param_6);
void __thiscall CGraphicCurve::SetJelly(CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,ulong param_5,char param_6);
void __thiscall CGraphicCurve::SetTough(CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,ulong param_5,char param_6);
void __thiscall CGraphicCurve::SetStraight(CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,float param_5,char param_6);
void __thiscall CGraphicCurve::SetDamping(CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,float param_8,char param_9);
void __thiscall CGraphicCurve::SetQuad(CGraphicCurve *this,float param_1,float param_2,float param_3,float param_4,float param_5,float param_6);
CGraphicCurve * __thiscall CGraphicCurve::CGraphicCurve(CGraphicCurve *this);
undefined4 __thiscall CAnimateGmApp::vfunction23(CAnimateGmApp *this);
int __thiscall CWinApp::CWinApp::ExitInstance(CWinApp *this);
undefined ** __thiscall CAnimateGmApp::vfunction13(CAnimateGmApp *this);
CWinApp * __thiscall CAnimateGmApp::scalar_deleting_destructor(CAnimateGmApp *this,byte param_1);
undefined4 FUN_6000a730(void);
void __thiscall FUN_6000a740(void *this,uint param_1);
CHgDDB16E * __thiscall CHgDDB16E::CHgDDB16E(CHgDDB16E *this);
bool __thiscall CHgDDB16E::CHgDDB16E::Create(CHgDDB16E *this,int param_1,int param_2);
void __thiscall CHgDDB16E::CHgDDB16E::Destroy(CHgDDB16E *this);
void __thiscall CHgDDB16E::~CHgDDB16E(CHgDDB16E *this);
CHgDDB16E * __thiscall CHgDDB16E::scalar_deleting_destructor(CHgDDB16E *this,byte param_1);
void __thiscall CHgDIB16E::HalfImage(CHgDIB16E *this,CHgImage16 *param_1);
int __thiscall CGraphicCtrl::SetZOrder(CGraphicCtrl *this,uchar param_1,CGraphicCtrl *param_2);
int __cdecl CGraphicCtrl::Printf(HDC__ *param_1,int param_2,int param_3,ulong param_4,HFONT__ *param_5,char *param_6,...);
int __thiscall CGraphicCtrl::IsShowing(CGraphicCtrl *this);
int __thiscall CGraphicCtrl::IsPlaying(CGraphicCtrl *this);
int __thiscall CGraphicCtrl::CGraphicCtrl::DrawProc(CGraphicCtrl *this,CRect *param_1,CRect *param_2);
undefined8 __thiscall CGraphicCtrl::GetPosScreen(CGraphicCtrl *this);
LPRECT __thiscall CGraphicCtrl::GetArea(CGraphicCtrl *this);
LPRECT __thiscall CGraphicCtrl::GetAreaScreen(CGraphicCtrl *this);
void __thiscall CGraphicCtrl::SetPosBase_low(CGraphicCtrl *this,int param_1,int param_2);
void __thiscall CGraphicCtrl::SetPosBase(CGraphicCtrl *this,int param_2,int param_3);
int __thiscall CGraphicCtrl::Printf(CGraphicCtrl *this,int param_1,int param_2,ulong param_3,HFONT__ *param_4,char *param_5,...);
int __thiscall CGraphicCtrl::DrawString(CGraphicCtrl *this,CRect *param_1,ulong param_2,HFONT__ *param_3,uint param_4,char *param_5,...);
void __thiscall RemoveAt(void *this,int *param_1);
void __fastcall CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>_Constructor_or_Destructor(undefined4 *param_1);
void * __thiscall CList<CGraphicCtrl*,CGraphicCtrl*>::scalar_deleting_destructor(CList<CGraphicCtrl*,CGraphicCtrl*> *this,uint param_1);
CList<CGraphicCtrl*,CGraphicCtrl*> * __thiscall CList<CGraphicCtrl*,CGraphicCtrl*>::CList<CGraphicCtrl*,CGraphicCtrl*>(CList<CGraphicCtrl*,CGraphicCtrl*> *this);
void __thiscall CGraphicCtrl::SetParent(CGraphicCtrl *this,CGraphicCtrl *param_1);
int __thiscall CGraphicCtrl::UpdateScreen(CGraphicCtrl *this,CRect *param_1);
void __thiscall CGraphicCtrl::__AdjustShow(CGraphicCtrl *this,int param_1);
void __thiscall AddHead(void *this,undefined4 param_1);
void __thiscall AddTail(void *this,undefined4 param_1);
__POSITION * __thiscall CList<void*,void*>::InsertBefore(CList<void*,void*> *this,__POSITION *param_1,void *param_2);
void __thiscall FUN_6000b910(void *this,int *param_1,undefined4 param_2);
void __thiscall CGraphicCtrl::~CGraphicCtrl(CGraphicCtrl *this);
int __thiscall CGraphicCtrl::AddChild(CGraphicCtrl *this,CGraphicCtrl *param_1,uchar param_2,CGraphicCtrl *param_3);
int __thiscall CGraphicCtrl::DelChild(CGraphicCtrl *this,CGraphicCtrl *param_1);
void __thiscall CGraphicCtrl::DelAllChild(CGraphicCtrl *this);
int __thiscall CGraphicCtrl::CalculateDelay(CGraphicCtrl *this,ulong param_1);
int __thiscall CGraphicCtrl::CGraphicCtrl::SetChildsZOrder(CGraphicCtrl *this,CGraphicCtrl *param_1,uchar param_2,CGraphicCtrl *param_3);
CGraphicCtrl * __thiscall CGraphicCtrl::scalar_deleting_destructor(CGraphicCtrl *this,byte param_1);
int __thiscall CGraphicCtrl::CGraphicCtrl::CreateGraphicCtrl(CGraphicCtrl *this,int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int __thiscall CGraphicCtrl::CGraphicCtrl::CreateGraphicCtrl(CGraphicCtrl *this,int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
int __thiscall CGraphicCtrl::CGraphicCtrl::CreateGraphicCtrl(CGraphicCtrl *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
CGraphicCtrl * __thiscall CGraphicCtrl::CGraphicCtrl::CreateInstance(CGraphicCtrl *this);
CGraphicCtrl * __thiscall CGraphicCtrl::LinkChild(CGraphicCtrl *this,CGraphicCtrl *param_1,uchar param_2,CGraphicCtrl *param_3);
LPRECT __thiscall CGraphicCtrl::UpdateState(CGraphicCtrl *this,ulong param_1,uchar param_2);
int __thiscall CHgDummyCtrl::CHgDummyCtrl::CreateGraphicCtrl(void);
int __thiscall CHgDummyCtrl::CHgDummyCtrl::CreateGraphicCtrl(CHgDummyCtrl *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::__CHgChatLine(__CHgChatLine *this,__CHgChatLine *param_1);
__CHgChatLine * __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::operator=(__CHgChatLine *this,__CHgChatLine *param_1);
void __thiscall CGraphicCtrl_MultiLineText::SetApplyGap(CGraphicCtrl_MultiLineText *this,bool param_1);
int __thiscall CGraphicCtrl_MultiLineText::SetFocus(CGraphicCtrl_MultiLineText *this,int param_1);
int __thiscall CGraphicCtrl_MultiLineText::IsChatNow(CGraphicCtrl_MultiLineText *this);
void __thiscall CGraphicCtrl_MultiLineText::ChangeScrollBar(CGraphicCtrl_MultiLineText *this,int param_2,int param_3,ushort param_4,char *param_5,char *param_6,char *param_7);
int __thiscall CGraphicCtrl_MultiLineText::AddLine(CGraphicCtrl_MultiLineText *this,char *param_1,ulong param_2,ulong param_3);
undefined4 Catch_All@6000cfd8(void);
char * __thiscall CGraphicCtrl_MultiLineText::CGraphicCtrl_MultiLineText::GetBufData(CGraphicCtrl_MultiLineText *this);
void __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::__CHgChatLine(__CHgChatLine *this);
void __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::~__CHgChatLine(__CHgChatLine *this);
CHgDIB16E * __thiscall CHgDIB16E::CHgDIB16E(CHgDIB16E *this);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::~__CGraphicCtrl_ChatInputBox(__CGraphicCtrl_ChatInputBox *this);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::ValidateChatInput(__CGraphicCtrl_ChatInputBox *this,int param_1);
void __cdecl FUN_6000d2d0(undefined4 param_1,int param_2);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnEditChange(__CHgChatInputBoxEdit *this);
undefined4 FUN_6000d480(void);
CEdit * __thiscall CEdit::scalar_deleting_destructor(CEdit *this,byte param_1);
void * __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::_AllocSelf(__CGraphicCtrl_ChatInputBox *this);
undefined4 * __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::scalar_deleting_destructor(__CHgChatLine *this,byte param_1);
__CGraphicCtrl_ChatInputBox * __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::scalar_deleting_destructor(__CGraphicCtrl_ChatInputBox *this,byte param_1);
__CHgChatLine * __thiscall CGraphicCtrl_MultiLineText::__CHgChatLine::__CHgChatLine(__CHgChatLine *this);
void __thiscall CGraphicCtrl_MultiLineText::~CGraphicCtrl_MultiLineText(CGraphicCtrl_MultiLineText *this);
int __thiscall CGraphicCtrl_MultiLineText::InitWithNoChat(CGraphicCtrl_MultiLineText *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,int param_8,int param_9,char *param_10,char *param_11,char *param_12);
int __thiscall CGraphicCtrl_MultiLineText::CGraphicCtrl_MultiLineText::Proc(CGraphicCtrl_MultiLineText *this,ulong param_1);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetSelPos(__CGraphicCtrl_ChatInputBox *this,int param_1,int param_2);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetCaretPos(__CGraphicCtrl_ChatInputBox *this,int param_1);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetCaretSize(__CGraphicCtrl_ChatInputBox *this,int param_1);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::SetChatBuf(__CGraphicCtrl_ChatInputBox *this,char *param_1);
int __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::Proc(__CGraphicCtrl_ChatInputBox *this,ulong param_1);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnKeyDown(__CHgChatInputBoxEdit *this,uint param_1,uint param_2,uint param_3);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnChar(__CHgChatInputBoxEdit *this,uint param_1,uint param_2,uint param_3);
long __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnEditNotify(__CHgChatInputBoxEdit *this,uint param_1,long param_2);
int __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::_PreTranslateMessage_ReturnKeyDown(__CHgChatInputBoxEdit *this,tagMSG *param_1);
void * __thiscall CGraphicCtrl_MultiLineText::CGraphicCtrl_MultiLineText::_AllocSelf(CGraphicCtrl_MultiLineText *this);
CGraphicCtrl_MultiLineText * __thiscall CGraphicCtrl_MultiLineText::scalar_deleting_destructor(CGraphicCtrl_MultiLineText *this,byte param_1);
int __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::OnWndMsg(__CHgChatInputBoxEdit *this,uint param_1,uint param_2,long param_3,long *param_4);
AFX_MSGMAP * __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::GetMessageMap(__CHgChatInputBoxEdit *this);
undefined4 * __fastcall FUN_6000e600(undefined4 *param_1);
void * FUN_6000e660(void *param_1,int param_2,void *param_3);
void __fastcall FUN_6000e6a0(undefined4 *param_1);
undefined4 * FUN_6000e6e0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::~__CHgChatInputBoxEdit(__CHgChatInputBoxEdit *this);
int __thiscall FUN_6000e760(void *this,undefined4 param_1,undefined4 param_2);
CEdit * __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::scalar_deleting_destructor(__CHgChatInputBoxEdit *this,byte param_1);
int __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::PreTranslateMessage(__CHgChatInputBoxEdit *this,tagMSG *param_1);
void __thiscall FUN_6000e9b0(void *this,int param_1);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::attachMsg(__CHgChatInputBoxEdit *this,_func_int___CHgChatInputBoxEdit_ptr_tagMSG_ptr *param_1);
void __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::__CHgChatInputBoxEdit::__CHgChatInputBoxEdit(__CHgChatInputBoxEdit *this,__CGraphicCtrl_ChatInputBox *param_1);
int __thiscall CGraphicCtrl_MultiLineText::__CGraphicCtrl_ChatInputBox::InitChatInputBox(__CGraphicCtrl_ChatInputBox *this,int param_1,ulong param_2,ulong param_3,ulong param_4,CFont *param_5);
int __thiscall CGraphicCtrl_MultiLineText::InitWithChat(CGraphicCtrl_MultiLineText *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_8,undefined4 param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,ulong param_15,ulong param_16,ulong param_17);
CGraphicCtrl_PushBtn * __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn(CGraphicCtrl_PushBtn *this);
void __thiscall CGraphicCtrl_PushBtn::~CGraphicCtrl_PushBtn(CGraphicCtrl_PushBtn *this);
CGraphicCtrl * __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn::CreateInstance(CGraphicCtrl_PushBtn *this);
CGraphicCtrl_PushBtn * __thiscall CGraphicCtrl_PushBtn::scalar_deleting_destructor(CGraphicCtrl_PushBtn *this,byte param_1);
int __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn::CreateGraphicCtrl(CGraphicCtrl_PushBtn *this,char *param_1,ushort param_2,HWND__ *param_3,ulong param_4,int param_5);
int __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn::Proc(CGraphicCtrl_PushBtn *this,ulong param_1);
int __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn::DrawProc(CGraphicCtrl_PushBtn *this,CRect *param_1,CRect *param_2);
void __thiscall CGraphicCtrl_Tile_Ani::SetRepeatNumber(CGraphicCtrl_Tile_Ani *this,int param_1);
int __thiscall CGraphicCtrl_Tile_Ani::IsAnimationEnd(CGraphicCtrl_Tile_Ani *this);
uchar __thiscall CGraphicCtrl_Tile_Ani::GetSpriteNumber(CGraphicCtrl_Tile_Ani *this);
uchar __thiscall CGraphicCtrl_Tile_Ani::GetAniListNumber(CGraphicCtrl_Tile_Ani *this);
uchar __thiscall CGraphicCtrl_Tile_Ani::GetAniFrameIndex(CGraphicCtrl_Tile_Ani *this);
uchar __thiscall CGraphicCtrl_Tile_Ani::GetAniIndex(CGraphicCtrl_Tile_Ani *this);
void __thiscall CGraphicCtrl_Tile_Ani::Rewind(CGraphicCtrl_Tile_Ani *this);
void __thiscall CGraphicCtrl_Tile_Ani::SetDieAfterEndAnimation(CGraphicCtrl_Tile_Ani *this,int param_1);
void __thiscall CGraphicCtrl_Tile_Ani::SetHideAfterEndAnimation(CGraphicCtrl_Tile_Ani *this,int param_1);
void * __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani::_AllocSelf(CGraphicCtrl_Tile_Ani *this);
void __thiscall CGraphicCtrl_PushBtn_Ani::EnableButton(CGraphicCtrl_PushBtn_Ani *this,int param_1);
CGraphicCtrl_PushBtn_Ani * __thiscall CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani(CGraphicCtrl_PushBtn_Ani *this);
void __thiscall CGraphicCtrl_PushBtn_Ani::~CGraphicCtrl_PushBtn_Ani(CGraphicCtrl_PushBtn_Ani *this);
int __thiscall CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani::CreateGraphicCtrl(CGraphicCtrl_PushBtn_Ani *this,char *param_1,ushort param_2,HWND__ *param_3,ulong param_4,int param_5);
CGraphicCtrl * __thiscall CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani::CreateInstance(CGraphicCtrl_PushBtn_Ani *this);
void __thiscall CGraphicCtrl_PushBtn::CGraphicCtrl_PushBtn::OnBtnClicked(CGraphicCtrl_PushBtn *this);
int __thiscall CGraphicCtrl_Tile_Ani::GetAniFrameNumber(CGraphicCtrl_Tile_Ani *this,int param_1);
void * __thiscall CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani::_AllocSelf(CGraphicCtrl_PushBtn_Ani *this);
CGraphicCtrl_Tile_Ani * __thiscall CGraphicCtrl_PushBtn_Ani::scalar_deleting_destructor(CGraphicCtrl_PushBtn_Ani *this,byte param_1);
int __thiscall CGraphicCtrl_PushBtn_Ani::CGraphicCtrl_PushBtn_Ani::Proc(CGraphicCtrl_PushBtn_Ani *this,ulong param_1);
CGraphicCtrl_Root * __thiscall CGraphicCtrl_Root::CGraphicCtrl_Root(CGraphicCtrl_Root *this);
void __thiscall CGraphicCtrl_Root::~CGraphicCtrl_Root(CGraphicCtrl_Root *this);
void __thiscall CGraphicCtrl_Root::ValidateArea(CGraphicCtrl_Root *this);
CGraphicCtrl_Root * __thiscall CGraphicCtrl_Root::scalar_deleting_destructor(CGraphicCtrl_Root *this,byte param_1);
int __thiscall CHgDIB16E::~CHgDIB16E(CHgDIB16E *this,int param_1,int param_2,CHgDIB16E *param_3,CRect *param_4);
CGraphicCtrl_TileSupport * __thiscall CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport(CGraphicCtrl_TileSupport *this);
void * __thiscall CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport::_AllocSelf(CGraphicCtrl_TileSupport *this);
CGraphicCtrl * __thiscall CGraphicCtrl_TileSupport::scalar_deleting_destructor(CGraphicCtrl_TileSupport *this,byte param_1);
void __thiscall CGraphicCtrl_Rotate::~CGraphicCtrl_Rotate(CGraphicCtrl_Rotate *this);
void __thiscall CGraphicCtrl_Rotate::SetRotationDegree(CGraphicCtrl_Rotate *this,int param_1);
void __thiscall CGraphicCtrl_Rotate::SetScale(CGraphicCtrl_Rotate *this,float param_1);
CGraphicCtrl * __thiscall CGraphicCtrl_Rotate::scalar_deleting_destructor(CGraphicCtrl_Rotate *this,byte param_1);
CGraphicCtrl_Rotate * __thiscall CGraphicCtrl_Rotate::CGraphicCtrl_Rotate(CGraphicCtrl_Rotate *this);
CGraphicCtrl * __thiscall CGraphicCtrl_Rotate::CGraphicCtrl_Rotate::CreateInstance(CGraphicCtrl_Rotate *this);
void * __thiscall CGraphicCtrl_Rotate::CGraphicCtrl_Rotate::_AllocSelf(CGraphicCtrl_Rotate *this);
int __thiscall CGraphicCtrl_Rotate::CGraphicCtrl_Rotate::DrawProc(CGraphicCtrl_Rotate *this,CRect *param_1,CRect *param_2);
void __thiscall CGraphicCtrl_Scale::~CGraphicCtrl_Scale(CGraphicCtrl_Scale *this);
CGraphicCtrl * __thiscall CGraphicCtrl_Scale::scalar_deleting_destructor(CGraphicCtrl_Scale *this,byte param_1);
CGraphicCtrl * __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale::CreateInstance(CGraphicCtrl_Scale *this);
void __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale::OnSelfNotice(CGraphicCtrl_Scale *this,ushort param_1);
CGraphicCtrl_Scale * __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale(CGraphicCtrl_Scale *this);
int __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale::DrawProc(CGraphicCtrl_Scale *this,CRect *param_1,CRect *param_2);
void * __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale::_AllocSelf(CGraphicCtrl_Scale *this);
int __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale::CreateGraphicCtrl(CGraphicCtrl_Scale *this,undefined4 *param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale::CreateGraphicCtrl(CGraphicCtrl_Scale *this,int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
int __thiscall CGraphicCtrl_Scale::CGraphicCtrl_Scale::CreateGraphicCtrl(CGraphicCtrl_Scale *this,undefined4 param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
CGraphicCtrl_ScrollBar * __thiscall CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar(CGraphicCtrl_ScrollBar *this);
void __thiscall CGraphicCtrl_ScrollBar::~CGraphicCtrl_ScrollBar(CGraphicCtrl_ScrollBar *this);
void __thiscall CGraphicCtrl_ScrollBar::SetCurrentSize(CGraphicCtrl_ScrollBar *this,ushort param_1);
int __thiscall CGraphicCtrl_ScrollBar::CGraphicCtrl_ScrollBar::Proc(CGraphicCtrl_ScrollBar *this,ulong param_1);
CGraphicCtrl * __thiscall CGraphicCtrl_ScrollBar::scalar_deleting_destructor(CGraphicCtrl_ScrollBar *this,byte param_1);
int __thiscall CGraphicCtrl_ScrollBar::InitScrollBar(CGraphicCtrl_ScrollBar *this,char *param_1,char *param_2,char *param_3,ushort param_4);
void __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::OnBtnPushed(__CGraphicCtrl_ScrollBar_Bar *this);
void __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Bar::OnBtnDrag(__CGraphicCtrl_ScrollBar_Bar *this);
void __thiscall CGraphicCtrl_ScrollBar::OnUp(CGraphicCtrl_ScrollBar *this);
void __thiscall CGraphicCtrl_ScrollBar::OnDn(CGraphicCtrl_ScrollBar *this);
void __thiscall CGraphicCtrl_ScrollBar::RePositionBar(CGraphicCtrl_ScrollBar *this);
void __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Up::OnBtnPushed(__CGraphicCtrl_ScrollBar_Up *this);
void __thiscall CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::CGraphicCtrl_ScrollBar::__CGraphicCtrl_ScrollBar_Dn::OnBtnPushed(__CGraphicCtrl_ScrollBar_Dn *this);
CGraphicCtrl_PushBtn * __thiscall CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::vfunction1(__CGraphicCtrl_SlideBar_Thumb *this,byte param_1);
void __thiscall CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::OnBtnDrag(__CGraphicCtrl_SlideBar_Thumb *this);
CGraphicCtrl_SlideBar * __thiscall CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar(CGraphicCtrl_SlideBar *this);
void __thiscall CGraphicCtrl_SlideBar::_DestroyBgImg(CGraphicCtrl_SlideBar *this);
void __thiscall CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar::_PostMsg(CGraphicCtrl_SlideBar *this,uint param_1);
int __thiscall CGraphicCtrl_SlideBar::GetSlideType(CGraphicCtrl_SlideBar *this);
void __thiscall CGraphicCtrl_SlideBar::EnableWindow(CGraphicCtrl_SlideBar *this,int param_1);
int __thiscall CGraphicCtrl_Text::GetDecoration(CGraphicCtrl_Text *this);
int __thiscall CGraphicCtrl_SlideBar::SetRange(CGraphicCtrl_SlideBar *this,ulong param_1,ulong param_2);
void __thiscall CGraphicCtrl_SlideBar::GetRange(CGraphicCtrl_SlideBar *this,ulong *param_1,ulong *param_2);
ulong __thiscall CGraphicCtrl_SlideBar::GetCurrentValue(CGraphicCtrl_SlideBar *this);
int __thiscall CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar::Proc(CGraphicCtrl_SlideBar *this,ulong param_1);
__CGraphicCtrl_SlideBar_Thumb * __thiscall CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::__CGraphicCtrl_SlideBar_Thumb(__CGraphicCtrl_SlideBar_Thumb *this);
void * __thiscall CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::_AllocSelf(__CGraphicCtrl_SlideBar_Thumb *this);
void * __thiscall CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar::_AllocSelf(CGraphicCtrl_SlideBar *this);
void __thiscall CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::CGraphicCtrl_SlideBar::__CGraphicCtrl_SlideBar_Thumb::OnBtnPushed(__CGraphicCtrl_SlideBar_Thumb *this);
void __thiscall CGraphicCtrl_SlideBar::~CGraphicCtrl_SlideBar(CGraphicCtrl_SlideBar *this);
void __thiscall CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar::_OnBtnDrag(CGraphicCtrl_SlideBar *this);
int __thiscall CGraphicCtrl_SlideBar::SetCurrentValue(CGraphicCtrl_SlideBar *this,ulong param_1);
void __thiscall CGraphicCtrl_SlideBar::SetSlideMargin(CGraphicCtrl_SlideBar *this,int param_1);
void __thiscall CGraphicCtrl_SlideBar::SetThumbBtnMargin(CGraphicCtrl_SlideBar *this,int param_1);
int __thiscall CGraphicCtrl_SlideBar::CGraphicCtrl_SlideBar::DrawProc(CGraphicCtrl_SlideBar *this,CRect *param_1,CRect *param_2);
CGraphicCtrl_SlideBar * __thiscall CGraphicCtrl_SlideBar::scalar_deleting_destructor(CGraphicCtrl_SlideBar *this,byte param_1);
int __thiscall CGraphicCtrl_SlideBar::InitSlideBar(CGraphicCtrl_SlideBar *this,char *param_1,char *param_2,SLIDE_BAR_TYPE param_3,ulong param_4,HWND__ *param_5,ulong param_6);
CGraphicCtrl_Tile * __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile(CGraphicCtrl_Tile *this);
CGraphicCtrl * __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile::CreateInstance(CGraphicCtrl_Tile *this);
void * __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile::_AllocSelf(CGraphicCtrl_Tile *this);
void __thiscall CGraphicCtrl_Tile::~CGraphicCtrl_Tile(CGraphicCtrl_Tile *this);
int __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile::DrawProc(CGraphicCtrl_Tile *this,CRect *param_1,CRect *param_2);
CGraphicCtrl_Tile * __thiscall CGraphicCtrl_Tile::scalar_deleting_destructor(CGraphicCtrl_Tile *this,byte param_1);
int __thiscall CGraphicCtrl_Tile::ActivateTile(CGraphicCtrl_Tile *this,uchar param_1);
int __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile::CreateGraphicCtrl(CGraphicCtrl_Tile *this,undefined4 *param_1,ulong param_2,undefined1 param_3);
int __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile::CreateGraphicCtrl(CGraphicCtrl_Tile *this,undefined4 param_1,undefined4 param_2,ulong param_3,undefined1 param_4);
int __thiscall CGraphicCtrl_Tile::CGraphicCtrl_Tile::CreateGraphicCtrl(CGraphicCtrl_Tile *this,undefined4 param_1,ulong param_2,undefined1 param_3);
CGraphicCtrl_Tile_Element * __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::CGraphicCtrl_Tile_Element(CGraphicCtrl_Tile_Element *this);
undefined4 * __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::CreateObject(CGraphicCtrl_Tile_Element *this);
undefined4 __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::vfunction5(CGraphicCtrl_Tile_Element *this);
void __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani::SetSpeedRate(CGraphicCtrl_Tile_Ani *this,float param_1);
CGraphicCtrl_Tile_Ani * __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani(CGraphicCtrl_Tile_Ani *this);
int __thiscall CGraphicCtrl_Tile_Ani::GetAniIndexByName(CGraphicCtrl_Tile_Ani *this,char *param_1);
void __thiscall CGraphicCtrl_Tile_Ani::_KeyFrame::_KeyFrame(_KeyFrame *this);
undefined4 * __thiscall CGraphicCtrl_Tile_Ani::_KeyFrame::scalar_deleting_destructor(_KeyFrame *this,byte param_1);
CGraphicCtrl * __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::scalar_deleting_destructor(CGraphicCtrl_Tile_Element *this,byte param_1);
undefined4 __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Element::vfunction7(CGraphicCtrl_Tile_Element *this,int *param_1,int *param_2);
int __thiscall CGraphicCtrl_Tile_Ani::GetTileIndex(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2);
_KeyFrame * __thiscall CGraphicCtrl_Tile_Ani::GetKeyFrame(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2);
int __thiscall CGraphicCtrl_Tile_Ani::GetAniFrameDelay(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2);
int __thiscall CGraphicCtrl_Tile_Ani::GetNextAniFrameIndex(CGraphicCtrl_Tile_Ani *this);
ulong __thiscall CGraphicCtrl_Tile_Ani::GetTotalAnimationTime(CGraphicCtrl_Tile_Ani *this,int param_1);
void __fastcall CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>_Constructor_or_Destructor(undefined4 *param_1);
void __thiscall FUN_60012820(void *this,undefined4 param_1,undefined4 param_2);
void FUN_60012890(CArchive *param_1,void *param_2,uint param_3);
void __thiscall CGraphicCtrl_Tile_Ani::~CGraphicCtrl_Tile_Ani(CGraphicCtrl_Tile_Ani *this);
undefined4 * __thiscall CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::scalar_deleting_destructor(CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*> *this,byte param_1);
void __thiscall CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>::CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*>(CList<CGraphicCtrl_Tile_Ani::_KeyFrame*,CGraphicCtrl_Tile_Ani::_KeyFrame*> *this);
void __thiscall CList<CGraphicCtrl*,CGraphicCtrl*>::vfunction3(CList<CGraphicCtrl*,CGraphicCtrl*> *this,CArchive *param_1);
CGraphicCtrl_Tile_Ani * __thiscall CGraphicCtrl_Tile_Ani::scalar_deleting_destructor(CGraphicCtrl_Tile_Ani *this,byte param_1);
void __thiscall FUN_60012d90(void *this,CHgImageBase *param_1);
int __thiscall CGraphicCtrl_Tile_Ani::ActivateAniTile(CGraphicCtrl_Tile_Ani *this,uchar param_1);
int __thiscall CGraphicCtrl_Tile_Ani::ActivateAniFrame(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2);
int __thiscall CGraphicCtrl_Tile_Ani::__ActivateAniFrame_NotResetDelay(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2);
int __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani::Proc(CGraphicCtrl_Tile_Ani *this,ulong param_1);
int __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani::CreateGraphicCtrl(CGraphicCtrl_Tile_Ani *this,char *param_1,byte param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5,uint param_6,uint param_7,undefined1 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
int __thiscall CGraphicCtrl_Tile_Ani::SetAniFrameIndex(CGraphicCtrl_Tile_Ani *this,uchar param_1,int param_2);
int __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani::CreateGraphicCtrl(CGraphicCtrl_Tile_Ani *this,char *param_1,int param_2,int param_3);
CGraphicCtrl * __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani::CreateInstance(CGraphicCtrl_Tile_Ani *this);
void __thiscall CGraphicCtrl_Tile_Ani::CGraphicCtrl_Tile_Ani::OnSelfNotice(CGraphicCtrl_Tile_Ani *this,ushort param_1);
int __thiscall CGraphicCtrl_Tile_Ani::ActivateAni(CGraphicCtrl_Tile_Ani *this,int param_1);
int __thiscall CGraphicCtrl_Tile_Ani::ActivateAni(CGraphicCtrl_Tile_Ani *this,char *param_1);
void __thiscall CGraphicCtrl_Tile_Scale::~CGraphicCtrl_Tile_Scale(CGraphicCtrl_Tile_Scale *this);
CGraphicCtrl_Tile * __thiscall CGraphicCtrl_Tile_Scale::scalar_deleting_destructor(CGraphicCtrl_Tile_Scale *this,byte param_1);
CGraphicCtrl * __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale::CreateInstance(CGraphicCtrl_Tile_Scale *this);
void __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale::OnSelfNotice(CGraphicCtrl_Tile_Scale *this,ushort param_1);
CGraphicCtrl_Tile_Scale * __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale(CGraphicCtrl_Tile_Scale *this);
int __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale::DrawProc(CGraphicCtrl_Tile_Scale *this,CRect *param_1,CRect *param_2);
void * __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale::_AllocSelf(CGraphicCtrl_Tile_Scale *this);
int __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale::CreateGraphicCtrl(CGraphicCtrl_Tile_Scale *this,undefined4 *param_1,ulong param_2,undefined1 param_3);
int __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale::CreateGraphicCtrl(CGraphicCtrl_Tile_Scale *this,undefined4 param_1,undefined4 param_2,ulong param_3,undefined1 param_4);
int __thiscall CGraphicCtrl_Tile_Scale::CGraphicCtrl_Tile_Scale::CreateGraphicCtrl(CGraphicCtrl_Tile_Scale *this,undefined4 param_1,ulong param_2,undefined1 param_3);
CGraphicCtrl * __thiscall CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport::CreateInstance(CGraphicCtrl_TileSupport *this);
bool __thiscall CGraphicCtrl_TileSupport::GetTileIntersectRect(CGraphicCtrl_TileSupport *this,tagRECT *param_1,tagRECT *param_2);
int __thiscall CGraphicCtrl_TileSupport::CGraphicCtrl_TileSupport::DrawProc(CGraphicCtrl_TileSupport *this,CRect *param_1,CRect *param_2);
bool __thiscall CGraphicCtrl_TileSupport::ActivateTile(CGraphicCtrl_TileSupport *this,int param_1);
void __thiscall CGraphicCtrl_TileSupport::SetTileNum(CGraphicCtrl_TileSupport *this,int param_1);
undefined4 __cdecl FUN_60014b00(undefined4 param_1);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,char *param_1);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,char *param_1,ulong param_2);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,int param_1,int param_2,ulong param_3);
bool __thiscall CHgDIB16::CHgDIB16::Create(CHgDIB16 *this,int param_1,int param_2);
void __thiscall CHgDIB16::CHgDIB16::Destroy(CHgDIB16 *this);
bool __thiscall CHgImage16::CHgImage16::__CreateFromBitmapWithColorTable(CHgImage16 *this,uchar *param_1,ulong param_2);
bool __thiscall CHgImage16::CHgImage16::__CreateFromBitmap16(CHgImage16 *this,uchar *param_1,ulong param_2);
bool __thiscall CHgImage16::CHgImage16::__CreateFromBitmap24(CHgImage16 *this,uchar *param_1,ulong param_2);
bool __thiscall CControlBase::CControlBase::CreateControl(CControlBase *this,IParam *param_1);
bool __thiscall CControlBase::CControlBase::DestroyControl(CControlBase *this);
bool __thiscall CControlBase::CControlBase::IsCreated(CControlBase *this);
void __thiscall CControlBase::CControlBase::ShowControl(CControlBase *this,bool param_1);
void __thiscall CControlBase::CControlBase::UpdateControlForGame(CControlBase *this,IParam *param_1);
CWnd * __thiscall CControlBase::CControlBase::GetCWndPtr(CControlBase *this);
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
void __cdecl operator_delete(void *param_1);
void __cdecl operator_delete[](void *param_1);
void * __cdecl operator_new(uint param_1);
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
void __thiscall CWnd::OnDestroy(CWnd *this);
CDC * CDC::FromHandle(HDC__ *param_1);
long __thiscall CWnd::Default(CWnd *this);
void __thiscall CPaintDC::~CPaintDC(CPaintDC *this);
void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1);
void __thiscall CWnd::CWnd(CWnd *this);
CRuntimeClass * __thiscall CStatic::CStatic::GetRuntimeClass(CStatic *this);
AFX_MSGMAP * __thiscall CWnd::CWnd::GetMessageMap(CWnd *this);
int __thiscall CWnd::CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CStatic::CStatic::OnChildNotify(CStatic *this,uint param_1,uint param_2,long param_3,long *param_4);
int __thiscall CStatic::CStatic::Create(CStatic *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
void __thiscall CStatic::CStatic::DrawItem(CStatic *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CStatic::~CStatic(CStatic *this);
int __thiscall CWnd::PreTranslateInput(CWnd *this,tagMSG *param_1);
CRuntimeClass * __thiscall CGdiObject::CGdiObject::GetRuntimeClass(CGdiObject *this);
int AfxMessageBox(char *param_1,uint param_2,uint param_3);
int __thiscall CGdiObject::DeleteObject(CGdiObject *this);
CRuntimeClass * __thiscall CFont::CFont::GetRuntimeClass(CFont *this);
int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1);
void AfxThrowInvalidArgException(void);
void AfxThrowMemoryException(void);
CRuntimeClass * __thiscall CObject::CObject::GetRuntimeClass(CObject *this);
void AfxThrowArchiveException(int param_1,char *param_2);
uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2);
void * __cdecl operator_new[](uint param_1);
void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2);
ulong __thiscall CArchive::ReadCount(CArchive *this);
void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1);
void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1);
CRuntimeClass * __thiscall CWinApp::CWinApp::GetRuntimeClass(CWinApp *this);
void __thiscall CCmdTarget::CCmdTarget::OnFinalRelease(CCmdTarget *this);
AFX_INTERFACEMAP * __thiscall CCmdTarget::CCmdTarget::GetInterfaceMap(CCmdTarget *this);
int __thiscall CWinApp::CWinApp::Run(CWinApp *this);
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
int __thiscall CWinApp::InitInstance(CWinApp *this);
int __thiscall CWinApp::ExitInstance(CWinApp *this);
void __thiscall CPlex::FreeDataChain(CPlex *this);
CWinThread * AfxGetThread(void);
CPlex * CPlex::Create(CPlex **param_1,uint param_2,uint param_3);
CWnd * __thiscall CWnd::SetFocus(CWnd *this);
void __thiscall CWnd::GetWindowTextA(CWnd *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1);
AFX_MODULE_STATE * AfxGetModuleState(void);
CRuntimeClass * __thiscall CEdit::CEdit::GetRuntimeClass(CEdit *this);
void __thiscall CEdit::~CEdit(CEdit *this);
void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1);
int __thiscall CEdit::Create(CEdit *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
long FUN_60015052(void);
undefined4 FUN_6001509d(HINSTANCE__ *param_1,int param_2);
undefined * Catch@6001514a(void);
undefined4 FUN_60015173(void);
undefined4 _RawDllMain@12(undefined4 param_1,int param_2);
undefined4 _DllMain@12(HINSTANCE__ *param_1,int param_2);
_AFX_DLL_MODULE_STATE * __thiscall _AFX_DLL_MODULE_STATE::_AFX_DLL_MODULE_STATE(_AFX_DLL_MODULE_STATE *this);
AFX_MODULE_STATE * __thiscall _AFX_DLL_MODULE_STATE::scalar_deleting_destructor(_AFX_DLL_MODULE_STATE *this,byte param_1);
void __fastcall FUN_6001530c(undefined4 *param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_6001541e(void);
void __fastcall __security_check_cookie(int param_1);
void __cdecl purecall(void);
ulonglong __fastcall FUN_60015460(undefined4 param_1,undefined4 param_2);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
char * __thiscall std::exception::std::exception::what(exception *this);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __alloca_probe(void);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void _CIsqrt(void);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_60015604(void);
int __cdecl _atexit(_func_4879 *param_1);
void `eh_vector_constructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,_func_void_void_ptr *param_5);
void FUN_60015671(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_60015a09(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl FUN_60015a37(int param_1);
void __cdecl __EH_prolog3_catch(int param_1);
void __EH_epilog3(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_60015b15(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl ___report_gsfailure(void);
undefined4 FUN_60015c40(void);
undefined4 __get_sse2_info(void);
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
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl except_handler4_common(void);
void __cdecl _crt_debugger_hook(int param_1);
void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this);
long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4);
void __thiscall AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1);
void AfxTermThread(HINSTANCE__ *param_1);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
int AfxUnlockTempMaps(int param_1);
void AfxLockTempMaps(void);
AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1);
void __thiscall CException::Delete(CException *this);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
void AfxWinTerm(void);
int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4);
_AFX_THREAD_STATE * AfxGetThreadState(void);
void AfxCoreInitModule(void);
void __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,ulong param_3,int param_4);
void CNoTrackObject::operator_delete(void *param_1);
int AfxDeactivateActCtx(ulong param_1,ulong param_2);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
undefined4 __RawDllMainProxy@12(undefined4 param_1,int param_2);
void Unwind@600160e0(void);
void Unwind@600160e9(void);
void Unwind@60016120(void);
void Unwind@60016150(void);
void Unwind@60016180(void);
void Unwind@600161b0(void);
void Unwind@600161e0(void);
void Unwind@60016210(void);
void Unwind@60016240(void);
void Unwind@60016270(void);
void Unwind@600162a0(void);
void Unwind@600162d0(void);
void Unwind@60016310(void);
void Unwind@60016340(void);
void Unwind@60016348(void);
void Unwind@60016356(void);
void Unwind@60016364(void);
void Unwind@60016390(void);
void Unwind@6001639a(void);
void Unwind@600163c0(void);
void Unwind@600163c8(void);
void Unwind@600163d6(void);
void Unwind@600163e4(void);
void Unwind@600163f3(void);
void Unwind@60016420(void);
void Unwind@60016460(void);
void Unwind@600164a0(void);
void Unwind@600164d0(void);
void Unwind@60016500(void);
void Unwind@60016530(void);
void Unwind@60016560(void);
void Unwind@60016569(void);
void Unwind@60016571(void);
void Unwind@600165a0(void);
void Unwind@600165d0(void);
void Unwind@600165d8(void);
void Unwind@60016610(void);
void Unwind@60016640(void);
void Unwind@60016670(void);
void Unwind@60016678(void);
void Unwind@600166b0(void);
void Unwind@600166bb(void);
void Unwind@600166e0(void);
void Unwind@60016720(void);
void Unwind@60016729(void);
void Unwind@60016760(void);
void Unwind@60016768(void);
void Unwind@60016776(void);
void Unwind@600167a0(void);
void Unwind@600167d0(void);
void Unwind@60016800(void);
void Unwind@60016830(void);
void Unwind@60016890(void);
void Unwind@600168c0(void);
void Unwind@600168c8(void);
void Unwind@60016900(void);
void Unwind@60016940(void);
void Unwind@60016948(void);
void Unwind@60016956(void);
void Unwind@60016964(void);
void Unwind@60016972(void);
void Unwind@600169a0(void);
void Unwind@600169a8(void);
void Unwind@600169b6(void);
void Unwind@600169c4(void);
void Unwind@600169f0(void);
void Unwind@60016a20(void);
void Unwind@60016a50(void);
void Unwind@60016a5b(void);
void Unwind@60016aa0(void);
void Unwind@60016ad0(void);
void Unwind@60016b00(void);
void Unwind@60016b30(void);
void Unwind@60016b3b(void);
void Unwind@60016b70(void);
void Unwind@60016ba0(void);
void Unwind@60016bd0(void);
void Unwind@60016bdb(void);
void Unwind@60016c10(void);
void Unwind@60016c1b(void);
void Unwind@60016c26(void);
void Unwind@60016c50(void);
void Unwind@60016c58(void);
void Unwind@60016c63(void);
void Unwind@60016c90(void);
void Unwind@60016cc0(void);
void Unwind@60016cf0(void);
void Unwind@60016d20(void);
void Unwind@60016d50(void);
void Unwind@60016d58(void);
void Unwind@60016d63(void);
void Unwind@60016d6e(void);
void Unwind@60016da0(void);
void Unwind@60016dab(void);
void Unwind@60016db6(void);
void Unwind@60016ddc(void);
void Unwind@60016dff(void);
void Unwind@60016e08(void);
void __thiscall CAnimateGmApp::~CAnimateGmApp(void);
void FUN_60016f00(void);
void FUN_60016f40(void);
void FUN_60016f80(void);
void FUN_60016fb5(void);
void FUN_60016fd0(void);
void FUN_60016fda(void);

