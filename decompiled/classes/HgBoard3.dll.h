typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
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

typedef struct CHgBoardEndInfo CHgBoardEndInfo, *PCHgBoardEndInfo;

struct CHgBoardEndInfo { // PlaceHolder Class Structure
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

typedef struct CHgBoardGameInfo CHgBoardGameInfo, *PCHgBoardGameInfo;

struct CHgBoardGameInfo { // PlaceHolder Class Structure
};

typedef struct CHgBoard CHgBoard, *PCHgBoard;

struct CHgBoard { // PlaceHolder Class Structure
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

typedef struct CHgBoardGetReqDialog CHgBoardGetReqDialog, *PCHgBoardGetReqDialog;

struct CHgBoardGetReqDialog { // PlaceHolder Class Structure
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

typedef struct CHgSeqInfo CHgSeqInfo, *PCHgSeqInfo;

struct CHgSeqInfo { // PlaceHolder Class Structure
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

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct CHgBoardLogic CHgBoardLogic, *PCHgBoardLogic;

struct CHgBoardLogic { // PlaceHolder Class Structure
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

typedef struct CHgBoardImage CHgBoardImage, *PCHgBoardImage;

struct CHgBoardImage { // PlaceHolder Class Structure
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

typedef long LONG_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[36];
};

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

struct HDC__ {
    int unused;
};

typedef struct tagRECT tagRECT, *PtagRECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef UINT_PTR WPARAM;

typedef LONG_PTR LRESULT;

typedef struct tagRECT *LPRECT;

typedef LONG_PTR LPARAM;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef int BOOL;

typedef DWORD COLORREF;

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


// WARNING! conflicting data type names: /ClassDataTypes/CHgBoardEndInfo/CHgBoardEndInfo - /CHgBoardEndInfo

typedef struct CHgBoardEndInfo_data CHgBoardEndInfo_data, *PCHgBoardEndInfo_data;

struct CHgBoardEndInfo_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
};

typedef struct CHgBoardEndInfo_vftable CHgBoardEndInfo_vftable, *PCHgBoardEndInfo_vftable;

struct CHgBoardEndInfo_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgBoardEndInfo virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgSeqInfo/CHgSeqInfo - /CHgSeqInfo

typedef struct CHgSeqInfo_vftable CHgSeqInfo_vftable, *PCHgSeqInfo_vftable;

struct CHgSeqInfo_vftable {
    CHgSeqInfo * (*deleting_destructor)(void *, byte); // CHgSeqInfo virtual function #1
};

typedef struct CHgSeqInfo_data CHgSeqInfo_data, *PCHgSeqInfo_data;

typedef struct CPtrList CPtrList, *PCPtrList;

struct CHgSeqInfo_data {
    int offset_0x0;
    struct CPtrList *offset_0x4;
    void *offset_0x8;
};

struct CPtrList { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgBoardImage/CHgBoardImage - /CHgBoardImage

typedef struct CHgBoardImage_vftable CHgBoardImage_vftable, *PCHgBoardImage_vftable;

struct CHgBoardImage_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CObject virtual function #1
    undefined4 * (*deleting_destructor)(void *, byte); // CHgBoardImage virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
    undefined4 * (*deleting_destructor)(void *, byte); // CHgBoardImage virtual function #6
    int (*ChangeBoardImage)(void *, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4); // CHgBoardImage virtual function #7
    void (*DrawBlock)(void *, struct CHgDIB *, int, int); // CHgBoardImage virtual function #8
    void (*DrawStone)(void *, struct CHgDIB *, int, int, int); // CHgBoardImage virtual function #9
    void (*DrawStoneAlpha)(void *, struct CHgDIB *, int, int, int, int); // CHgBoardImage virtual function #10
    void (*DrawSeqNo)(void *, int, int, int, int); // CHgBoardImage virtual function #11
    void (*DrawSeqNo)(void *, int, int, int, int); // CHgBoardImage virtual function #12
    void (*DrawBoard)(void *, struct CHgDIB *); // CHgBoardImage virtual function #13
    void (*MarkingLastPut)(void *, int, struct CHgCellInfo *, struct CHgCellInfo *, int, int, int); // CHgBoardImage virtual function #14
    void (*MarkingLastPut)(void *, int, struct CHgCellInfo *, struct CHgCellInfo *, int, int, int); // CHgBoardImage virtual function #15
    void (*MarkingMouseCell)(void *, struct CPoint *, int, int, int); // CHgBoardImage virtual function #16
};

typedef struct CHgBoardImage_data CHgBoardImage_data, *PCHgBoardImage_data;

struct CHgBoardImage_data {
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
    int *offset_0x28;
    void *offset_0x2c;
    undefined4 *offset_0x30;
    undefined4 *offset_0x34;
    struct HDC__ **offset_0x38;
};

typedef struct CObject CObject, *PCObject;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct _CTypedPtrList<CPtrList,CPoint*> _CTypedPtrList<CPtrList,CPoint*>, *P_CTypedPtrList<CPtrList,CPoint*>;


// WARNING! conflicting data type names: /ClassDataTypes/CPtrList/CPtrList - /Demangler/CPtrList

struct CPtrList { // class CPtrList : CObject
    struct CObject CObject;
};

struct _CTypedPtrList<CPtrList,CPoint*> { // class _CTypedPtrList<CPtrList,CPoint*> : CPtrList
    struct CPtrList CPtrList;
};

typedef struct CProgressCtrl_vftable CProgressCtrl_vftable, *PCProgressCtrl_vftable;

struct CProgressCtrl_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CProgressCtrl virtual function #1
    CProgressCtrl * (*deleting_destructor)(void *, byte); // CProgressCtrl virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
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
    void (*vfunction3)(void *); // CGdiObject virtual function #66
    void (*vfunction67)(void *); // CProgressCtrl virtual function #67
    void (*vfunction68)(void *); // CProgressCtrl virtual function #68
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

typedef struct CProgressCtrl CProgressCtrl, *PCProgressCtrl;

struct CProgressCtrl { // class CProgressCtrl : CWnd
    struct CProgressCtrl_vftable *vftablePtr;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgBoardGetReqDialog/CHgBoardGetReqDialog - /CHgBoardGetReqDialog

typedef struct CHgBoardGetReqDialog_vftable CHgBoardGetReqDialog_vftable, *PCHgBoardGetReqDialog_vftable;

struct CHgBoardGetReqDialog_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDialog virtual function #1
    CHgBoardGetReqDialog * (*deleting_destructor)(void *, byte); // CHgBoardGetReqDialog virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CHgBoardGetReqDialog virtual function #13
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
    void (*DoDataExchange)(void *, struct CDataExchange *); // CHgBoardGetReqDialog virtual function #66
    void (*vfunction67)(void *); // CProgressCtrl virtual function #67
    void (*vfunction68)(void *); // CProgressCtrl virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CDialog virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CHgBoardGetReqDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialog virtual function #86
    int (*OnInitDialog)(void *); // CHgBoardGetReqDialog virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CDialog virtual function #89
    void (*OnCancel)(void *); // CDialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
};

typedef struct CHgBoardGetReqDialog_data CHgBoardGetReqDialog_data, *PCHgBoardGetReqDialog_data;

struct CHgBoardGetReqDialog_data {
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
    undefined4 *offset_0xd8;
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
    HDC offset_0x14c;
    HGDIOBJ offset_0x150;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgBoardLogic/CHgBoardLogic - /CHgBoardLogic

typedef struct CHgBoardLogic_vftable CHgBoardLogic_vftable, *PCHgBoardLogic_vftable;

struct CHgBoardLogic_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CObject virtual function #1
    CHgBoardLogic * (*deleting_destructor)(void *, byte); // CHgBoardLogic virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
    int (*Create)(void *, struct CHgBoard *); // CHgBoardLogic virtual function #6
    int (*InitializeBoard)(void *, void *); // CHgBoardLogic virtual function #7
    int (*StartGame)(void *, int, int, int, int, void *, int, int, int); // CHgBoardLogic virtual function #8
    int (*GameOver)(void *); // CHgBoardLogic virtual function #9
    int (*UndoGameOver)(void *); // CHgBoardLogic virtual function #10
    CHgBoardLogic * (*deleting_destructor)(void *, byte); // CHgBoardLogic virtual function #11
    int (*GetNextTurn)(void *, int); // CHgBoardLogic virtual function #12
    int (*GetNextTurn)(void *, int); // CHgBoardLogic virtual function #13
    int (*IsGameOver)(void *, int, int, int); // CHgBoardLogic virtual function #14
    int (*IsGameOver)(void *, int, int, int); // CHgBoardLogic virtual function #15
    int (*IsPassState)(void *, int); // CHgBoardLogic virtual function #16
    int (*IsValidPosition)(void *, int, int, int); // CHgBoardLogic virtual function #17
    void (*ClearUndoList)(void *); // CHgBoardLogic virtual function #18
    int (*UndoLastTurn)(void *); // CHgBoardLogic virtual function #19
};

typedef struct CHgBoardLogic_data CHgBoardLogic_data, *PCHgBoardLogic_data;

struct CHgBoardLogic_data {
    int offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    int offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    struct CPtrList *offset_0x3c;
    undefined4 offset_0x40;
};

typedef struct CHgBoardProgressInfo_data CHgBoardProgressInfo_data, *PCHgBoardProgressInfo_data;

typedef struct CAvtr2004 CAvtr2004, *PCAvtr2004;

struct CHgBoardProgressInfo_data {
    int offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
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
    struct CAvtr2004 *offset_0x2c;
    undefined4 *offset_0x30;
    undefined4 *offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
};

struct CAvtr2004 { // PlaceHolder Structure
};

typedef struct CHgBoardProgressInfo_vftable CHgBoardProgressInfo_vftable, *PCHgBoardProgressInfo_vftable;

struct CHgBoardProgressInfo_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgBoardProgressInfo virtual function #1
    void (*SetStartGame)(void *, int, int, int); // CHgBoardProgressInfo virtual function #2
    undefined (*vfunction3)(void); // MSVCR90.DLL CHgBoardProgressInfo pure virtual function #3
    int (*DrawPlayerInfo)(void *, struct CHgDIB *); // CHgBoardProgressInfo virtual function #4
    int (*DrawTurnInfo)(void *, struct CHgDIB *); // CHgBoardProgressInfo virtual function #5
};

typedef struct CHgBoardProgressInfo CHgBoardProgressInfo, *PCHgBoardProgressInfo;

struct CHgBoardProgressInfo_data {
    int offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
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
    struct CAvtr2004 *offset_0x2c;
    undefined4 *offset_0x30;
    undefined4 *offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
};

struct CHgBoardProgressInfo { // class CHgBoardProgressInfo
    struct CHgBoardProgressInfo_vftable *vftablePtr;
    struct CHgBoardProgressInfo_data CHgBoardProgressInfo_data;
};

typedef struct CHgDDB_vftable CHgDDB_vftable, *PCHgDDB_vftable;

struct CHgDDB_vftable {
    CHgDDB * (*deleting_destructor)(void *, byte); // CHgDDB virtual function #1
    bool (*Create)(void *, char *); // CHgImageBase virtual function #2
    bool (*Create)(void *, char *); // CHgImageBase virtual function #3
    bool (*Create)(void *, char *); // CHgImageBase virtual function #4
    bool (*Create)(void *, char *); // CHgDDB virtual function #5
    void (*Destroy)(void *); // CHgDDB virtual function #6
    bool (*__CreateFromBitmapWithColorTable)(void *, uchar *, ulong); // CHgImage virtual function #7
    bool (*__CreateFromBitmap16)(void *, uchar *, ulong); // CHgImage virtual function #8
    bool (*__CreateFromBitmap24)(void *, uchar *, ulong); // CHgImage virtual function #9
};

typedef struct CHgDDB CHgDDB, *PCHgDDB;

struct CHgDDB { // class CHgDDB : CHgImage
    struct CHgDDB_vftable *vftablePtr;
};

typedef struct _CTypedPtrList<CPtrList,CHgSeqInfo*> _CTypedPtrList<CPtrList,CHgSeqInfo*>, *P_CTypedPtrList<CPtrList,CHgSeqInfo*>;

struct CPtrList { // class CPtrList : CObject
    struct CObject CObject;
};

struct _CTypedPtrList<CPtrList,CHgSeqInfo*> { // class _CTypedPtrList<CPtrList,CHgSeqInfo*> : CPtrList
    struct CPtrList CPtrList;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgBoardGameInfo/CHgBoardGameInfo - /CHgBoardGameInfo

typedef struct CHgBoardGameInfo_vftable CHgBoardGameInfo_vftable, *PCHgBoardGameInfo_vftable;

struct CHgBoardGameInfo_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgBoardGameInfo virtual function #1
};

typedef struct CHgBoardGameInfo_data CHgBoardGameInfo_data, *PCHgBoardGameInfo_data;

struct CHgBoardGameInfo_data {
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
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
};

struct CFont { // class CFont : CGdiObject
    struct CFont_vftable *vftablePtr;
    struct CFont_data CFont_data;
};

typedef struct CHgImageBase CHgImageBase, *PCHgImageBase;

struct CHgImageBase { // class CHgImageBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CTypedPtrList<CPtrList,CHgCellInfo*> CTypedPtrList<CPtrList,CHgCellInfo*>, *PCTypedPtrList<CPtrList,CHgCellInfo*>;

typedef struct CTypedPtrList<CPtrList,CHgCellInfo*>_vftable CTypedPtrList<CPtrList,CHgCellInfo*>_vftable, *PCTypedPtrList<CPtrList,CHgCellInfo*>_vftable;

struct CTypedPtrList<CPtrList,CHgCellInfo*> { // class CTypedPtrList<CPtrList,CHgCellInfo*> : _CTypedPtrList<CPtrList,CHgCellInfo*>
    struct CTypedPtrList<CPtrList,CHgCellInfo*>_vftable *vftablePtr;
};

struct CTypedPtrList<CPtrList,CHgCellInfo*>_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPtrList virtual function #1
    CPtrList * (*deleting_destructor)(void *, byte); // CTypedPtrList<CPtrList,CHgCellInfo*> virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
};

typedef struct CDialog CDialog, *PCDialog;

typedef struct CWnd CWnd, *PCWnd;

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

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CDialog { // class CDialog : CWnd
    struct CWnd CWnd;
};

typedef struct CHgBoard_vftable CHgBoard_vftable, *PCHgBoard_vftable;

struct CHgBoard_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CObject virtual function #1
    CHgBoard * (*deleting_destructor)(void *, byte); // CHgBoard virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
    int (*Create)(void *, int, int); // CHgBoard virtual function #6
    int (*PutStone)(void *, int, int, int, int); // CHgBoard virtual function #7
    int (*PutSeqNo)(void *, int, int, int); // CHgBoard virtual function #8
};

typedef struct CHgBoard_data CHgBoard_data, *PCHgBoard_data;

struct CHgBoard_data {
    int **offset_0x0;
    int **offset_0x4;
    int offset_0x8;
    int offset_0xc;
    int offset_0x10;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgBoard/CHgBoard - /CHgBoard

typedef struct CTypedPtrList<CPtrList,CPoint*>_vftable CTypedPtrList<CPtrList,CPoint*>_vftable, *PCTypedPtrList<CPtrList,CPoint*>_vftable;

struct CTypedPtrList<CPtrList,CPoint*>_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPtrList virtual function #1
    CPtrList * (*deleting_destructor)(void *, byte); // CTypedPtrList<CPtrList,CPoint*> virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
};

typedef struct CTypedPtrList<CPtrList,CPoint*> CTypedPtrList<CPtrList,CPoint*>, *PCTypedPtrList<CPtrList,CPoint*>;

struct CTypedPtrList<CPtrList,CPoint*> { // class CTypedPtrList<CPtrList,CPoint*> : _CTypedPtrList<CPtrList,CPoint*>
    struct CTypedPtrList<CPtrList,CPoint*>_vftable *vftablePtr;
};

typedef struct CHgImage CHgImage, *PCHgImage;

struct CHgImageBase { // class CHgImageBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CHgImage { // class CHgImage : CHgImageBase
    struct CHgImageBase CHgImageBase;
};

typedef struct CGdiObject CGdiObject, *PCGdiObject;

typedef struct CGdiObject_vftable CGdiObject_vftable, *PCGdiObject_vftable;

struct CGdiObject { // class CGdiObject : CObject
    struct CGdiObject_vftable *vftablePtr;
};

struct CGdiObject_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGdiObject virtual function #1
    void * (*deleting_destructor)(void *, uint); // CGdiObject virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
};

typedef struct _CTypedPtrList<CPtrList,CHgCellInfo*> _CTypedPtrList<CPtrList,CHgCellInfo*>, *P_CTypedPtrList<CPtrList,CHgCellInfo*>;

struct CPtrList { // class CPtrList : CObject
    struct CObject CObject;
};

struct _CTypedPtrList<CPtrList,CHgCellInfo*> { // class _CTypedPtrList<CPtrList,CHgCellInfo*> : CPtrList
    struct CPtrList CPtrList;
};

typedef struct CTypedPtrList<CPtrList,CHgSeqInfo*>_vftable CTypedPtrList<CPtrList,CHgSeqInfo*>_vftable, *PCTypedPtrList<CPtrList,CHgSeqInfo*>_vftable;

struct CTypedPtrList<CPtrList,CHgSeqInfo*>_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPtrList virtual function #1
    CPtrList * (*deleting_destructor)(void *, byte); // CTypedPtrList<CPtrList,CHgSeqInfo*> virtual function #2
    void (*vfunction3)(void *); // CGdiObject virtual function #3
    void (*~CHgCellInfo)(void *); // CHgCellInfo virtual function #4
    void (*vfunction3)(void *); // CGdiObject virtual function #5
};

typedef struct CTypedPtrList<CPtrList,CHgSeqInfo*> CTypedPtrList<CPtrList,CHgSeqInfo*>, *PCTypedPtrList<CPtrList,CHgSeqInfo*>;

struct CTypedPtrList<CPtrList,CHgSeqInfo*> { // class CTypedPtrList<CPtrList,CHgSeqInfo*> : _CTypedPtrList<CPtrList,CHgSeqInfo*>
    struct CTypedPtrList<CPtrList,CHgSeqInfo*>_vftable *vftablePtr;
};

typedef struct CHgDIB CHgDIB, *PCHgDIB;

struct CHgDIB { // PlaceHolder Structure
};

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};

typedef struct CSize CSize, *PCSize;

struct CSize { // PlaceHolder Structure
};

typedef struct CMemberData CMemberData, *PCMemberData;

struct CMemberData { // PlaceHolder Structure
};

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};

typedef struct CRect CRect, *PCRect;

struct CRect { // PlaceHolder Structure
};

typedef struct CHgCellInfo CHgCellInfo, *PCHgCellInfo;

struct CHgCellInfo { // PlaceHolder Structure
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

typedef struct CDataExchange CDataExchange, *PCDataExchange;

struct CDataExchange { // PlaceHolder Structure
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


// WARNING! conflicting data type names: /Demangler/CHgImageBase - /ClassDataTypes/CHgImageBase/CHgImageBase


// WARNING! conflicting data type names: /Demangler/CDialog - /ClassDataTypes/CDialog/CDialog

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { // PlaceHolder Structure
};

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { // PlaceHolder Structure
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CProgressCtrl - /ClassDataTypes/CProgressCtrl/CProgressCtrl

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


// WARNING! conflicting data type names: /Demangler/CTypedPtrList<CPtrList,CHgCellInfo*> - /ClassDataTypes/CTypedPtrList<CPtrList,CHgCellInfo*>/CTypedPtrList<CPtrList,CHgCellInfo*>

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

struct DLGTEMPLATE { // PlaceHolder Structure
};

typedef struct IDispatch IDispatch, *PIDispatch;

struct IDispatch { // PlaceHolder Structure
};

typedef struct AFX_INTERFACEMAP AFX_INTERFACEMAP, *PAFX_INTERFACEMAP;

struct AFX_INTERFACEMAP { // PlaceHolder Structure
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


// WARNING! conflicting data type names: /Demangler/CHgBoardProgressInfo - /ClassDataTypes/CHgBoardProgressInfo/CHgBoardProgressInfo


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct HGBG HGBG, *PHGBG;

struct HGBG { // PlaceHolder Structure
};

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHgImage - /ClassDataTypes/CHgImage/CHgImage


// WARNING! conflicting data type names: /Demangler/CGdiObject - /ClassDataTypes/CGdiObject/CGdiObject

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHgDDB - /ClassDataTypes/CHgDDB/CHgDDB

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFont - /ClassDataTypes/CFont/CFont

typedef struct tagMSG tagMSG, *PtagMSG;

struct tagMSG { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCmdTarget - /ClassDataTypes/CCmdTarget/CCmdTarget


// WARNING! conflicting data type names: /Demangler/CObject - /ClassDataTypes/CObject/CObject


// WARNING! conflicting data type names: /Demangler/CTypedPtrList<CPtrList,CHgSeqInfo*> - /ClassDataTypes/CTypedPtrList<CPtrList,CHgSeqInfo*>/CTypedPtrList<CPtrList,CHgSeqInfo*>

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ { // PlaceHolder Structure
};

typedef struct __POSITION __POSITION, *P__POSITION;

struct __POSITION { // PlaceHolder Structure
};

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { // PlaceHolder Structure
};

typedef struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CSimpleStringT<char,1> CSimpleStringT<char,1>, *PCSimpleStringT<char,1>;

struct CSimpleStringT<char,1> { // PlaceHolder Structure
};

typedef struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;




undefined4 FUN_60b01000(undefined4 param_1,int param_2);
undefined4 FUN_60b01030(HINSTANCE__ *param_1,int param_2);
void FUN_60b01090(void);
void __thiscall CHgBoardEndInfo::CHgBoardEndInfo(CHgBoardEndInfo *this,CHgBoardEndInfo *param_1);
CHgBoardEndInfo * __thiscall CHgBoardEndInfo::operator=(CHgBoardEndInfo *this,CHgBoardEndInfo *param_1);
undefined4 * __thiscall CHgBoardEndInfo::scalar_deleting_destructor(CHgBoardEndInfo *this,byte param_1);
void __thiscall CHgBoardEndInfo::~CHgBoardEndInfo(CHgBoardEndInfo *this);
void __thiscall CHgBoardEndInfo::~CHgBoardEndInfo(CHgBoardEndInfo *this);
void __thiscall CHgBoardEndInfo::SetValue(CHgBoardEndInfo *this,int param_1,int param_2);
int __thiscall CHgBoardGameInfo::GetGameState(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::SetPreSettingState(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::SetInSettingState(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::SetPlayingState(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::SetCountingState(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::SetCountingOkState(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::SetEndingState(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::SetGiboViewState(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::CHgBoardGameInfo(CHgBoardGameInfo *this,CHgBoardGameInfo *param_1);
CHgBoardGameInfo * __thiscall CHgBoardGameInfo::operator=(CHgBoardGameInfo *this,CHgBoardGameInfo *param_1);
undefined4 * __thiscall CHgBoardGameInfo::scalar_deleting_destructor(CHgBoardGameInfo *this,byte param_1);
void __thiscall CHgBoardGameInfo::CHgBoardGameInfo(CHgBoardGameInfo *this);
void __thiscall CHgBoardGameInfo::~CHgBoardGameInfo(CHgBoardGameInfo *this);
CHgBoardGetReqDialog * __thiscall CHgBoardGetReqDialog::scalar_deleting_destructor(CHgBoardGetReqDialog *this,byte param_1);
CHgBoardGetReqDialog * __thiscall CHgBoardGetReqDialog::CHgBoardGetReqDialog(CHgBoardGetReqDialog *this,uint param_1,char *param_2,CWnd *param_3);
void __thiscall CHgBoardGetReqDialog::~CHgBoardGetReqDialog(CHgBoardGetReqDialog *this);
void __thiscall CHgBoardGetReqDialog::CHgBoardGetReqDialog::DoDataExchange(CHgBoardGetReqDialog *this,CDataExchange *param_1);
AFX_MSGMAP * __thiscall CHgBoardGetReqDialog::CHgBoardGetReqDialog::GetMessageMap(CHgBoardGetReqDialog *this);
int __thiscall CHgBoardGetReqDialog::CHgBoardGetReqDialog::OnInitDialog(CHgBoardGetReqDialog *this);
CHgDDB * __thiscall CHgDDB::scalar_deleting_destructor(CHgDDB *this,byte param_1);
void __thiscall CHgBoardGetReqDialog::OnTimer(CHgBoardGetReqDialog *this,uint param_1);
void __thiscall CHgBoardGetReqDialog::OnPaint(CHgBoardGetReqDialog *this);
void __thiscall CHgBoardGetReqDialog::vfunction82(CHgBoardGetReqDialog *this,ushort param_1,CWnd *param_2);
CProgressCtrl * __thiscall CProgressCtrl::scalar_deleting_destructor(CProgressCtrl *this,byte param_1);
void __thiscall CHgCellInfo::CHgCellInfo::~CHgCellInfo(CHgCellInfo *this);
void __thiscall CGdiObject::vfunction3(CGdiObject *this);
void __thiscall CProgressCtrl::vfunction67(CProgressCtrl *this);
void __thiscall CProgressCtrl::vfunction68(CProgressCtrl *this);
int __thiscall CHgBoard::Create(CHgBoard *this,CSize *param_1);
int __thiscall CHgBoard::HaveNoAccessList(CHgBoard *this);
int __thiscall CHgBoard::AddNoAccessCell(CHgBoard *this,CPoint *param_1);
int __thiscall CHgBoard::RemoveNoAccessCell(CHgBoard *this,CPoint *param_1);
int __thiscall CHgBoard::IsNoAccessCell(CHgBoard *this,CPoint *param_1);
int __thiscall CHgBoard::PutStone(CHgBoard *this,CPoint *param_1,int param_2,int param_3);
int __thiscall CHgBoard::PutSeqNo(CHgBoard *this,CPoint *param_1,int param_2);
void __thiscall CHgBoard::GetDimension(CHgBoard *this);
void __thiscall CHgBoard::GetReversePoint(CHgBoard *this,int *param_2,int param_3,int param_4);
int __thiscall CHgBoard::IsValidRange(CHgBoard *this,int param_1,int param_2);
int __thiscall CHgBoard::IsValidRange(CHgBoard *this,CPoint *param_1);
int __thiscall CHgBoard::IsInStone(CHgBoard *this,int param_1,int param_2);
int __thiscall CHgBoard::IsInStone(CHgBoard *this,CPoint *param_1);
int __thiscall CHgBoard::GetStone(CHgBoard *this,CPoint *param_1);
int __thiscall CHgBoard::GetSeqNo(CHgBoard *this,CPoint *param_1);
void __thiscall CHgBoardImage::SetBlockSize(CHgBoardImage *this,CSize *param_1);
void __thiscall CHgBoardImage::SetBlockSize(CHgBoardImage *this,int param_1,int param_2);
CSize * __thiscall CHgBoardImage::GetBlockSize(CHgBoardImage *this);
CSize * __thiscall CHgBoardImage::GetStoneSize(CHgBoardImage *this);
int __thiscall CHgBoardImage::GetCellIndex(CHgBoardImage *this,int param_1,int param_2);
CPoint * __thiscall CHgBoardImage::GetCellIndex(CHgBoardImage *this,CPoint *param_1);
void __thiscall CHgBoardImage::GetCellCood(CHgBoardImage *this,int param_1,int param_2);
void __thiscall CHgBoardImage::GetCellCood(CHgBoardImage *this,CPoint *param_1);
void __thiscall CHgBoardImage::GetCellRect(CHgBoardImage *this,int param_1,int param_2);
CHgDDB * __thiscall CHgBoardImage::GetBoardImage(CHgBoardImage *this);
CHgDDB * __thiscall CHgBoardImage::GetStoneImage(CHgBoardImage *this);
CPoint * __thiscall CHgBoardImage::GetLTEdge(CHgBoardImage *this);
undefined4 * __thiscall CHgBoardImage::scalar_deleting_destructor(CHgBoardImage *this,byte param_1);
void __thiscall CHgBoardImage::CHgBoardImage(CHgBoardImage *this,HDC__ **param_1);
void __thiscall CHgBoardImage::~CHgBoardImage(CHgBoardImage *this);
int __thiscall CHgBoardImage::CHgBoardImage::Create(CHgBoardImage *this,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,char *param_9,void *param_10,undefined4 param_11,undefined4 param_12);
int __thiscall CFont::~CFont(CFont *this,char *param_1);
int __thiscall CHgBoardImage::CHgBoardImage::ChangeBoardImage(CHgBoardImage *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
void __thiscall CHgBoardImage::GetBoardRect(CHgBoardImage *this);
void __thiscall CHgBoardImage::CHgBoardImage::DrawBlock(CHgBoardImage *this,CHgDIB *param_1,int param_2,int param_3);
void __thiscall CHgBoardImage::CHgBoardImage::DrawStone(CHgBoardImage *this,CHgDIB *param_1,int param_2,int param_3,int param_4);
void __thiscall CHgBoardImage::CHgBoardImage::DrawStoneAlpha(CHgBoardImage *this,CHgDIB *param_1,int param_2,int param_3,int param_4,int param_5);
void __thiscall CHgBoardImage::CHgBoardImage::DrawSeqNo(CHgBoardImage *this);
void __thiscall CHgBoardImage::CHgBoardImage::DrawSeqNo(CHgBoardImage *this,int param_1,int param_2,int param_3,int param_4);
void __thiscall CHgBoardImage::CHgBoardImage::DrawBoard(CHgBoardImage *this,CHgDIB *param_1);
void __thiscall CHgBoardImage::CHgBoardImage::MarkingLastPut(CHgBoardImage *this,int param_1,CHgCellInfo *param_2,int param_3,int param_4,int param_5);
void __thiscall CHgBoardImage::CHgBoardImage::MarkingLastPut(CHgBoardImage *this,int param_1,CHgCellInfo *param_2,CHgCellInfo *param_3,int param_4,int param_5,int param_6);
void __thiscall CHgBoardImage::CHgBoardImage::MarkingMouseCell(CHgBoardImage *this,CPoint *param_1,int param_2,int param_3,int param_4);
undefined4 * __thiscall CFont::scalar_deleting_destructor(CFont *this,byte param_1);
void * __thiscall CGdiObject::CImageList::`scalar_deleting_destructor'(CGdiObject *this,uint param_1);
void __thiscall CGdiObject::~CGdiObject(CGdiObject *this);
undefined4 Catch@60b02c73(void);
void __thiscall CHgSeqInfo::CHgSeqInfo(CHgSeqInfo *this,CHgSeqInfo *param_1);
CHgSeqInfo * __thiscall CHgSeqInfo::operator=(CHgSeqInfo *this,CHgSeqInfo *param_1);
void __thiscall CHgSeqInfo::CHgSeqInfo(CHgSeqInfo *this);
CHgSeqInfo * __thiscall CHgSeqInfo::scalar_deleting_destructor(CHgSeqInfo *this,byte param_1);
void __thiscall CHgBoardLogic::SetTeamNumber(CHgBoardLogic *this,int param_1);
void __thiscall CHgBoardLogic::SetCurTurn(CHgBoardLogic *this,int param_1);
void __thiscall CHgBoardLogic::SetPlayerTurn(CHgBoardLogic *this,int param_1);
void __thiscall CHgBoardLogic::SetOwnMode(CHgBoardLogic *this,int param_1,int param_2);
void __thiscall CHgBoardLogic::ReleaseSelectedCell(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::GetPlayerNumber(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::GetTeamNumber(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::GetCurTurn(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::GetPlayerTurn(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::IsMyTurn(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::GetOwnMode(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::IsPlaying(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::GetSeqNo(CHgBoardLogic *this);
CAvtr2004 * __thiscall CHgBoardProgressInfo::GetPlayerAvatarImage(CHgBoardProgressInfo *this);
CPoint * __thiscall CHgBoardLogic::GetSelectedCell(CHgBoardLogic *this);
void __thiscall CHgBoardLogic::SetUndoSize(CHgBoardLogic *this,int param_1);
CTypedPtrList<CPtrList,CHgSeqInfo*> * __thiscall CHgBoardLogic::GetUndoList(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::IsViewMode(CHgBoardLogic *this);
CHgBoardLogic * __thiscall CHgBoardLogic::scalar_deleting_destructor(CHgBoardLogic *this,byte param_1);
void __thiscall CHgBoardLogic::CHgBoardLogic(CHgBoardLogic *this);
void __thiscall CHgBoardLogic::~CHgBoardLogic(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::CHgBoardLogic::Create(CHgBoardLogic *this,CHgBoard *param_1);
int __thiscall CHgBoardLogic::CHgBoardLogic::InitializeBoard(CHgBoardLogic *this,void *param_1);
int __thiscall CHgBoardLogic::CHgBoardLogic::StartGame(CHgBoardLogic *this,int param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,int param_7,int param_8);
int __thiscall CHgBoardLogic::CHgBoardLogic::GameOver(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::CHgBoardLogic::UndoGameOver(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::SetSelectedCell(CHgBoardLogic *this,int param_1,int param_2);
CTypedPtrList<CPtrList,CHgCellInfo*> * __thiscall CHgBoardLogic::CHgBoardLogic::UpdateBoard(CHgBoardLogic *this,int param_1,int param_2,int param_3);
void __thiscall CHgBoardLogic::FreeUpdateList(CHgBoardLogic *this,CTypedPtrList<CPtrList,CHgCellInfo*> *param_1);
int __thiscall CHgBoardLogic::IsStoneOfTurn(CHgBoardLogic *this,int param_1,int param_2);
int __thiscall CHgBoardLogic::GetKeyStoneOfTurn(CHgBoardLogic *this,int param_1);
int __thiscall CHgBoardLogic::GetStoneOwner(CHgBoardLogic *this,int param_1);
int __thiscall CHgBoardLogic::GetPrevTurn(CHgBoardLogic *this,int param_1);
int __thiscall CHgBoardLogic::CHgBoardLogic::GetNextTurn(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::CHgBoardLogic::GetNextTurn(CHgBoardLogic *this,int param_1);
int __thiscall CHgBoardLogic::GetLastPut(CHgBoardLogic *this,int *param_1,CHgCellInfo *param_2);
int __thiscall CHgBoardLogic::GetCurrPut(CHgBoardLogic *this,int *param_1,CHgCellInfo *param_2);
int __thiscall CHgBoardLogic::GetLastPut(CHgBoardLogic *this,int *param_1,CHgCellInfo *param_2,CHgCellInfo *param_3);
int __thiscall CHgBoardLogic::GetCurrPut(CHgBoardLogic *this,int *param_1,CHgCellInfo *param_2,CHgCellInfo *param_3);
CHgSeqInfo * __thiscall CHgBoardLogic::GetLastSeqInfo(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::CHgBoardLogic::IsGameOver(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::CHgBoardLogic::IsGameOver(CHgBoardLogic *this,int param_1,int param_2,int param_3);
int __thiscall CHgBoardLogic::CHgBoardLogic::IsPassState(CHgBoardLogic *this,int param_1);
int __thiscall CHgBoardLogic::CHgBoardLogic::IsValidPosition(CHgBoardLogic *this,int param_1,int param_2,int param_3);
int __thiscall CHgBoardLogic::GetTeamTurn(CHgBoardLogic *this,int param_1);
void __thiscall CHgBoardLogic::CHgBoardLogic::ClearUndoList(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::AddUndo(CHgBoardLogic *this,int param_1,CTypedPtrList<CPtrList,CHgCellInfo*> *param_2);
int __thiscall CHgBoardLogic::RemoveOldUndo(CHgBoardLogic *this,int param_1);
int __thiscall CHgBoardLogic::ReplaceUndo(CHgBoardLogic *this,int param_1,int param_2,CTypedPtrList<CPtrList,CHgCellInfo*> *param_3);
int __thiscall CHgBoardLogic::GetUndoListCount(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::CHgBoardLogic::UndoLastTurn(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::SetViewMode(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::FreeViewMode(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::IsFirstDo(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::IsLastDo(CHgBoardLogic *this);
int __thiscall CHgBoardLogic::ApplySeqInfoForward(CHgBoardLogic *this,CHgSeqInfo *param_1);
int __thiscall CHgBoardLogic::ApplySeqInfoBackward(CHgBoardLogic *this,CHgSeqInfo *param_1);
CHgSeqInfo * __thiscall CHgBoardLogic::GetPrevDo(CHgBoardLogic *this);
CHgSeqInfo * __thiscall CHgBoardLogic::GetCurrDo(CHgBoardLogic *this);
CHgSeqInfo * __thiscall CHgBoardLogic::GetNextDo(CHgBoardLogic *this);
int __fastcall FUN_60b03f90(int *param_1);
CPtrList * __thiscall CTypedPtrList<CPtrList,CHgCellInfo*>::scalar_deleting_destructor(CTypedPtrList<CPtrList,CHgCellInfo*> *this,byte param_1);
CHgBoard * __thiscall CHgBoard::scalar_deleting_destructor(CHgBoard *this,byte param_1);
void __thiscall CHgBoard::CHgBoard(CHgBoard *this);
void __thiscall CHgBoard::~CHgBoard(CHgBoard *this);
int __thiscall CHgBoard::AllocBoardArray(CHgBoard *this,int ***param_1);
void __thiscall CHgBoard::FreeBoardArray(CHgBoard *this,int ***param_1);
int __thiscall CHgBoard::ClearBoard(CHgBoard *this,int ***param_1,int param_2);
int __thiscall CHgBoard::CHgBoard::Create(CHgBoard *this,int param_1,int param_2);
int __thiscall CHgBoard::RegisterNoAccessList(CHgBoard *this);
int __thiscall CHgBoard::UnRegisterNoAccessList(CHgBoard *this);
int __thiscall CHgBoard::AddNoAccessCell(CHgBoard *this,int param_1,int param_2);
int __thiscall CHgBoard::RemoveNoAccessCell(CHgBoard *this,int param_1,int param_2);
int __thiscall CHgBoard::IsNoAccessCell(CHgBoard *this,int param_1,int param_2);
int __thiscall CHgBoard::ClearNoAccessList(CHgBoard *this);
int __thiscall CHgBoard::ClearBoard(CHgBoard *this,int param_1,int param_2);
void __thiscall CPtrList::~CPtrList(CPtrList *this);
void __thiscall CHgBoard::ReverseBoard(CHgBoard *this);
int __thiscall CHgBoard::CHgBoard::PutStone(CHgBoard *this,int param_1,int param_2,int param_3,int param_4);
int __thiscall CHgBoard::CHgBoard::PutSeqNo(CHgBoard *this,int param_1,int param_2,int param_3);
int __thiscall CHgBoard::GetStone(CHgBoard *this,int param_1,int param_2);
int __thiscall CHgBoard::GetSeqNo(CHgBoard *this,int param_1,int param_2);
int __thiscall CHgBoard::GetStoneCount(CHgBoard *this,int param_1,int param_2,int param_3);
int __thiscall CHgBoardProgressInfo::CHgBoardProgressInfo::DrawPlayerInfo(CHgBoardProgressInfo *this,CHgDIB *param_1);
int __thiscall CHgBoardProgressInfo::CHgBoardProgressInfo::DrawTurnInfo(CHgBoardProgressInfo *this,CHgDIB *param_1);
void __thiscall CHgBoardProgressInfo::CHgBoardProgressInfo(CHgBoardProgressInfo *this,CHgBoardProgressInfo *param_1);
CHgBoardProgressInfo * __thiscall CHgBoardProgressInfo::operator=(CHgBoardProgressInfo *this,CHgBoardProgressInfo *param_1);
undefined4 * __thiscall CHgBoardProgressInfo::scalar_deleting_destructor(CHgBoardProgressInfo *this,byte param_1);
void __thiscall CHgBoardProgressInfo::CHgBoardProgressInfo(CHgBoardProgressInfo *this);
void __thiscall CHgBoardProgressInfo::~CHgBoardProgressInfo(CHgBoardProgressInfo *this);
int __thiscall CHgBoardProgressInfo::SetTurnImage(CHgBoardProgressInfo *this,char *param_1,char *param_2,ulong param_3);
void __thiscall CHgBoardProgressInfo::SetCoord(CHgBoardProgressInfo *this,CRect *param_1,CRect *param_2);
int __thiscall CHgBoardProgressInfo::SetPlayerInfo(CHgBoardProgressInfo *this,CMemberData *param_1,int param_2,HWND__ *param_3,int param_4);
int __thiscall CHgBoardProgressInfo::IsSamePlayer(CHgBoardProgressInfo *this,char *param_1);
int __thiscall CHgBoardProgressInfo::ResetPlayerInfo(CHgBoardProgressInfo *this);
void __thiscall CHgBoardLogic::SetPlayerNumber(CHgBoardLogic *this,int param_1);
void __thiscall CHgBoardProgressInfo::CHgBoardProgressInfo::SetStartGame(CHgBoardProgressInfo *this,int param_1,int param_2,int param_3);
void __thiscall CHgBoardProgressInfo::MakeAvatarImage(CHgBoardProgressInfo *this,HWND__ *param_1,int param_2);
HGBG * __thiscall HGBG::operator=(HGBG *this,HGBG *param_1);
void __thiscall CHgCellInfo::CHgCellInfo(CHgCellInfo *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
CHgCellInfo * __thiscall CHgCellInfo::CHgCellInfo(CHgCellInfo *this,CHgCellInfo *param_1);
void __thiscall CHgCellInfo::CHgCellInfo(CHgCellInfo *this);
CHgSeqInfo * __thiscall CHgSeqInfo::CHgSeqInfo(CHgSeqInfo *this,int param_1,CTypedPtrList<CPtrList,CHgCellInfo*> *param_2,void *param_3);
void __thiscall CHgSeqInfo::~CHgSeqInfo(CHgSeqInfo *this);
int __thiscall CHgSeqInfo::CopyList(CHgSeqInfo *this,CTypedPtrList<CPtrList,CHgCellInfo*> *param_1);
void __thiscall CHgSeqInfo::RemoveList(CHgSeqInfo *this);
void __cdecl operator_delete(void *param_1);
AFX_MODULE_STATE * AfxGetModuleState(void);
int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2);
void * __cdecl operator_new(uint param_1);
void __thiscall CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2);
void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2);
void __cdecl operator_delete[](void *param_1);
void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2);
void __thiscall CDialog::~CDialog(CDialog *this);
int __thiscall CProgressCtrl::CProgressCtrl::CreateEx(CProgressCtrl *this,ulong param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
int __thiscall CProgressCtrl::CProgressCtrl::Create(CProgressCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd::GetOccDialogInfo(CWnd *this);
int __thiscall CWnd::CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1);
int __thiscall CWnd::CWnd::CreateControlSite(CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,_GUID *param_4);
int __thiscall CWnd::CWnd::CreateControlContainer(CWnd *this,COleControlContainer **param_1);
int __thiscall CWnd::CWnd::IsFrameWnd(CWnd *this);
int __thiscall CWnd::CWnd::CheckAutoCenter(CWnd *this);
int __thiscall CWnd::CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
void __thiscall CWnd::CWnd::PostNcDestroy(CWnd *this);
long __thiscall CWnd::CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3);
int __thiscall CWnd::CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
long __thiscall CWnd::CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3);
int __thiscall CWnd::CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3);
int __thiscall CWnd::CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1);
_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::CWnd::GetSuperWndProcAddr(CWnd *this);
int __thiscall CWnd::CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3);
int __thiscall CWnd::CWnd::OnCommand(CWnd *this,uint param_1,long param_2);
long __thiscall CWnd::CWnd::CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3);
long __thiscall CWnd::CWnd::SetProxy(CWnd *this,IAccessibleProxy *param_1);
long __thiscall CWnd::CWnd::put_accValue(void);
long __thiscall CWnd::CWnd::put_accName(void);
long __thiscall CWnd::CWnd::accDoDefaultAction(void);
long __thiscall CWnd::CWnd::accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3);
long __thiscall CWnd::CWnd::accNavigate(void);
long __thiscall CWnd::CWnd::accLocation(void);
long __thiscall CWnd::CWnd::accSelect(void);
long __thiscall CWnd::CWnd::get_accDefaultAction(void);
long __thiscall CWnd::CWnd::get_accSelection(CWnd *this,tagVARIANT *param_1);
long __thiscall CWnd::CWnd::get_accFocus(CWnd *this,tagVARIANT *param_1);
long __thiscall CWnd::CWnd::get_accKeyboardShortcut(void);
long __thiscall CWnd::CWnd::get_accHelpTopic(void);
long __thiscall CWnd::CWnd::get_accHelp(void);
long __thiscall CWnd::CWnd::get_accState(void);
long __thiscall CWnd::CWnd::get_accRole(void);
long __thiscall CWnd::CWnd::get_accDescription(void);
long __thiscall CWnd::CWnd::get_accValue(void);
long __thiscall CWnd::CWnd::get_accName(void);
long __thiscall CWnd::CWnd::get_accChild(void);
long __thiscall CWnd::CWnd::get_accChildCount(CWnd *this,long *param_1);
long __thiscall CWnd::CWnd::get_accParent(CWnd *this,IDispatch **param_1);
long __thiscall CWnd::CWnd::EnsureStdObj(CWnd *this);
void __thiscall CWnd::CWnd::EndModalLoop(CWnd *this,int param_1);
int __thiscall CWnd::CWnd::ContinueModal(CWnd *this);
void __thiscall CWnd::CWnd::WinHelpInternal(CWnd *this,ulong param_1,uint param_2);
void __thiscall CWnd::CWnd::HtmlHelpA(CWnd *this,ulong param_1,uint param_2);
void __thiscall CWnd::CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2);
CScrollBar * __thiscall CWnd::CWnd::GetScrollBarCtrl(CWnd *this,int param_1);
int __thiscall CWnd::CWnd::OnToolHitTest(void);
int __thiscall CWnd::CWnd::SetMenu(CWnd *this,CMenu *param_1);
CMenu * __thiscall CWnd::CWnd::GetMenu(CWnd *this);
void __thiscall CWnd::CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2);
int __thiscall CWnd::CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CWnd::CWnd::DestroyWindow(CWnd *this);
int __thiscall CWnd::CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11);
int __thiscall CWnd::CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,CWnd *param_6,uint param_7,void *param_8);
int __thiscall CWnd::CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,uint param_6,CCreateContext *param_7);
void __thiscall CWnd::CWnd::PreSubclassWindow(CWnd *this);
IConnectionPoint * __thiscall CCmdTarget::CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1);
int __thiscall CCmdTarget::CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1);
IUnknown * __thiscall CCmdTarget::CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1);
int __thiscall CCmdTarget::CCmdTarget::OnCreateAggregates(CCmdTarget *this);
AFX_EVENTSINKMAP * __thiscall CCmdTarget::CCmdTarget::GetEventSinkMap(CCmdTarget *this);
AFX_INTERFACEMAP * __thiscall CWnd::CWnd::GetInterfaceMap(CWnd *this);
AFX_CONNECTIONMAP * __thiscall CCmdTarget::CCmdTarget::GetConnectionMap(CCmdTarget *this);
AFX_DISPMAP * __thiscall CCmdTarget::CCmdTarget::GetDispatchMap(CCmdTarget *this);
AFX_OLECMDMAP * __thiscall CCmdTarget::CCmdTarget::GetCommandMap(CCmdTarget *this);
AFX_MSGMAP * __thiscall CWnd::CWnd::GetMessageMap(CWnd *this);
long __thiscall CCmdTarget::CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2);
CTypeLibCache * __thiscall CCmdTarget::CCmdTarget::GetTypeLibCache(CCmdTarget *this);
uint __thiscall CCmdTarget::CCmdTarget::GetTypeInfoCount(CCmdTarget *this);
int __thiscall CCmdTarget::CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1);
int __thiscall CCmdTarget::CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1);
void __thiscall CWnd::CWnd::OnFinalRelease(CWnd *this);
int __thiscall CCmdTarget::CCmdTarget::OnCmdMsg(CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
CRuntimeClass * __thiscall CProgressCtrl::CProgressCtrl::GetRuntimeClass(CProgressCtrl *this);
void __thiscall CWnd::CWnd(CWnd *this);
void __thiscall CProgressCtrl::~CProgressCtrl(CProgressCtrl *this);
void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3);
void DDX_Text(CDataExchange *param_1,int param_2,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_3);
int __thiscall CDialog::OnInitDialog(CDialog *this);
CWnd * __thiscall CWnd::GetDlgItem(CWnd *this,int param_1);
void __thiscall CWnd::ScreenToClient(CWnd *this,tagRECT *param_1);
void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1);
void __thiscall CDialog::EndDialog(CDialog *this,int param_1);
long __thiscall CWnd::Default(CWnd *this);
void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1);
void __thiscall CPaintDC::~CPaintDC(CPaintDC *this);
CRuntimeClass * __thiscall CDialog::CDialog::GetRuntimeClass(CDialog *this);
int __thiscall CDialog::CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
int __thiscall CDialog::CDialog::PreTranslateMessage(CDialog *this,tagMSG *param_1);
int __thiscall CDialog::CDialog::CheckAutoCenter(CDialog *this);
int __thiscall CDialog::CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1);
_AFX_OCC_DIALOG_INFO * __thiscall CDialog::CDialog::GetOccDialogInfo(CDialog *this);
int __thiscall CDialog::CDialog::Create(CDialog *this,char *param_1,CWnd *param_2);
int __thiscall CDialog::CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2);
int __thiscall CDialog::CDialog::CreateIndirect(CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3);
int __thiscall CDialog::CDialog::DoModal(CDialog *this);
void __thiscall CDialog::CDialog::OnSetFont(CDialog *this,CFont *param_1);
void __thiscall CDialog::CDialog::OnOK(CDialog *this);
void __thiscall CDialog::CDialog::OnCancel(CDialog *this);
void __thiscall CDialog::CDialog::PreInitDialog(CDialog *this);
int AfxMessageBox(char *param_1,uint param_2,uint param_3);
int __thiscall CGdiObject::DeleteObject(CGdiObject *this);
CRuntimeClass * __thiscall CGdiObject::CGdiObject::GetRuntimeClass(CGdiObject *this);
CRuntimeClass * __thiscall CFont::CFont::GetRuntimeClass(CFont *this);
void * __cdecl operator_new[](uint param_1);
int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1);
CRuntimeClass * __thiscall CObject::CObject::GetRuntimeClass(CObject *this);
void __thiscall CPtrList::RemoveAll(CPtrList *this);
__POSITION * __thiscall CPtrList::AddTail(CPtrList *this,void *param_1);
void * __thiscall CPtrList::RemoveHead(CPtrList *this);
void * __thiscall CPtrList::RemoveTail(CPtrList *this);
void AfxThrowInvalidArgException(void);
void __thiscall CPtrList::~CPtrList(CPtrList *this);
void __thiscall CPtrList::CPtrList(CPtrList *this,int param_1);
CRuntimeClass * __thiscall CPtrList::CPtrList::GetRuntimeClass(CPtrList *this);
void __fastcall __security_check_cookie(int param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_60b0579e(void);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
void __cdecl purecall(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_60b05b88(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl terminate(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_60b05d1d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_60b05dea(void);
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
void __cdecl except_handler4_common(void);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,char *param_1);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,char *param_1,ulong param_2);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,int param_1,int param_2,ulong param_3);
bool __thiscall CHgDDB::CHgDDB::Create(CHgDDB *this,int param_1,int param_2);
void __thiscall CHgDDB::CHgDDB::Destroy(CHgDDB *this);
bool __thiscall CHgImage::CHgImage::__CreateFromBitmapWithColorTable(CHgImage *this,uchar *param_1,ulong param_2);
bool __thiscall CHgImage::CHgImage::__CreateFromBitmap16(CHgImage *this,uchar *param_1,ulong param_2);
bool __thiscall CHgImage::CHgImage::__CreateFromBitmap24(CHgImage *this,uchar *param_1,ulong param_2);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void Unwind@60b060d0(void);
void Unwind@60b060db(void);
void Unwind@60b06110(void);
void Unwind@60b06150(void);
void Unwind@60b06180(void);
void Unwind@60b06189(void);
void Unwind@60b061b0(void);
void Unwind@60b061b8(void);
void Unwind@60b061c3(void);
void Unwind@60b061d2(void);
void Unwind@60b061e1(void);
void Unwind@60b061f0(void);
void Unwind@60b06220(void);
void Unwind@60b06228(void);
void Unwind@60b06233(void);
void Unwind@60b06242(void);
void Unwind@60b06251(void);
void Unwind@60b06260(void);
void Unwind@60b06290(void);
void Unwind@60b062c0(void);
void Unwind@60b062f0(void);
void Unwind@60b06320(void);
void Unwind@60b06350(void);
void Unwind@60b06380(void);
void Unwind@60b063b0(void);
void Unwind@60b063bb(void);
void Unwind@60b063f0(void);
void Unwind@60b06420(void);
void Unwind@60b06450(void);
void Unwind@60b06480(void);
void FUN_60b06550(void);
void FUN_60b06580(void);

