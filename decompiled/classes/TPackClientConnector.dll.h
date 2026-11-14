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
typedef unsigned long long    undefined8;
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

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Class Structure
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

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

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
    char pdbpath[91];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef int BOOL;

typedef uint UINT;

typedef BYTE *PBYTE;

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
    exception * (*deleting_destructor)(void *, uint); // out_of_range virtual function #1
    void (*vfunction2)(void *); // logic_error virtual function #2
};

struct out_of_range { // class out_of_range : logic_error
    struct out_of_range_vftable *vftablePtr;
    struct logic_error_data logic_error_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/std/bad_alloc/bad_alloc - /std/bad_alloc

typedef struct bad_alloc_vftable bad_alloc_vftable, *Pbad_alloc_vftable;

struct bad_alloc_vftable {
    bad_alloc * (*deleting_destructor)(void *, uint); // bad_alloc virtual function #1
    char * (*what)(void *); // exception virtual function #2
};

typedef struct length_error_vftable length_error_vftable, *Plength_error_vftable;

struct length_error_vftable {
    exception * (*deleting_destructor)(void *, uint); // length_error virtual function #1
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
    exception * (*deleting_destructor)(void *, uint); // logic_error virtual function #1
    void (*vfunction2)(void *); // logic_error virtual function #2
};

struct logic_error { // class logic_error : exception
    struct logic_error_vftable *vftablePtr;
    struct logic_error_data logic_error_data;
};

typedef struct XDRAuthSessionRequest XDRAuthSessionRequest, *PXDRAuthSessionRequest;

typedef struct XDRAuthSessionRequest_vftable XDRAuthSessionRequest_vftable, *PXDRAuthSessionRequest_vftable;

typedef struct XDRAuthSessionRequest_data XDRAuthSessionRequest_data, *PXDRAuthSessionRequest_data;

struct XDRAuthSessionRequest_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
};

struct XDRAuthSessionRequest_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRAuthSessionRequest virtual function #1
    void (*vfunction2)(void *); // XDRAuthSessionRequest virtual function #2
    undefined4 (*vfunction3)(void *); // XDRAuthSessionRequest virtual function #3
    char * (*vfunction4)(void *); // XDRAuthSessionRequest virtual function #4
    int (*vfunction5)(void *); // XDRAuthSessionRequest virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRAuthSessionRequest virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRAuthSessionRequest virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

struct XDRAuthSessionRequest { // class XDRAuthSessionRequest : IMessage
    struct XDRAuthSessionRequest_vftable *vftablePtr;
    struct XDRAuthSessionRequest_data XDRAuthSessionRequest_data;
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct XDRTPackLoginRequest_vftable XDRTPackLoginRequest_vftable, *PXDRTPackLoginRequest_vftable;

struct XDRTPackLoginRequest_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRTPackLoginRequest virtual function #1
    void (*vfunction2)(void *); // XDRTPackLogoutRequest virtual function #2
    undefined4 (*vfunction3)(void *); // XDRTPackLoginRequest virtual function #3
    char * (*vfunction4)(void *); // XDRTPackLoginRequest virtual function #4
    int (*vfunction5)(void *); // XDRTPackLogoutRequest virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRTPackLogoutRequest virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRTPackLogoutRequest virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

typedef struct XDRTPackLoginRequest XDRTPackLoginRequest, *PXDRTPackLoginRequest;

typedef struct XDRTPackLoginRequest_data XDRTPackLoginRequest_data, *PXDRTPackLoginRequest_data;

struct XDRTPackLoginRequest_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
};

struct XDRTPackLoginRequest { // class XDRTPackLoginRequest : IMessage
    struct XDRTPackLoginRequest_vftable *vftablePtr;
    struct XDRTPackLoginRequest_data XDRTPackLoginRequest_data;
};

typedef struct IMessage IMessage, *PIMessage;

typedef struct IMessage_vftable IMessage_vftable, *PIMessage_vftable;

struct IMessage { // class IMessage
    struct IMessage_vftable *vftablePtr;
};

struct IMessage_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // IMessage virtual function #1
    void (*vfunction2)(void *); // MSVCR90.DLL IMessage pure virtual function #2
    undefined4 (*vfunction3)(void *); // MSVCR90.DLL IMessage pure virtual function #3
    char * (*vfunction4)(void *); // MSVCR90.DLL IMessage pure virtual function #4
    int (*vfunction5)(void *); // MSVCR90.DLL IMessage pure virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // MSVCR90.DLL IMessage pure virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // MSVCR90.DLL IMessage pure virtual function #7
    void (*vfunction8)(void *, undefined1); // MSVCR90.DLL IMessage pure virtual function #8
    undefined1 (*vfunction9)(void *); // MSVCR90.DLL IMessage pure virtual function #9
};

typedef struct XDRDelivery XDRDelivery, *PXDRDelivery;

typedef struct XDRDelivery_vftable XDRDelivery_vftable, *PXDRDelivery_vftable;

typedef struct XDRDelivery_data XDRDelivery_data, *PXDRDelivery_data;

struct XDRDelivery_data {
    undefined4 offset_0x0;
};

struct XDRDelivery_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRDelivery virtual function #1
    void (*vfunction2)(void *, char *, undefined4, char *, char *, char *); // XDRDelivery virtual function #2
    void (*vfunction3)(void *, char *, undefined4, char *, char *); // XDRDelivery virtual function #3
    void (*vfunction4)(void *, char *, undefined4, char *, char *); // XDRDelivery virtual function #4
    uint (*vfunction5)(void *); // XDRDelivery virtual function #5
};

struct XDRDelivery { // class XDRDelivery : Delivery
    struct XDRDelivery_vftable *vftablePtr;
    struct XDRDelivery_data XDRDelivery_data;
};

typedef struct TCPSocket TCPSocket, *PTCPSocket;

typedef struct TCPSocket_vftable TCPSocket_vftable, *PTCPSocket_vftable;

typedef struct TCPSocket_data TCPSocket_data, *PTCPSocket_data;

typedef struct _THandle _THandle, *P_THandle;

struct TCPSocket_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    struct _THandle *offset_0x4;
    struct _THandle *offset_0x8;
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
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    undefined field26_0x20;
    undefined field27_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    undefined field30_0x24;
    undefined field31_0x25;
    undefined field32_0x26;
    undefined field33_0x27;
    undefined field34_0x28;
    undefined field35_0x29;
    undefined field36_0x2a;
    undefined field37_0x2b;
    undefined field38_0x2c;
    undefined field39_0x2d;
    undefined field40_0x2e;
    undefined field41_0x2f;
    undefined field42_0x30;
    undefined field43_0x31;
    undefined field44_0x32;
    undefined field45_0x33;
    undefined field46_0x34;
    undefined field47_0x35;
    undefined field48_0x36;
    undefined field49_0x37;
    undefined field50_0x38;
    undefined field51_0x39;
    undefined field52_0x3a;
    undefined field53_0x3b;
    undefined field54_0x3c;
    undefined field55_0x3d;
    undefined field56_0x3e;
    undefined field57_0x3f;
    undefined field58_0x40;
    undefined field59_0x41;
    undefined field60_0x42;
    undefined field61_0x43;
    undefined field62_0x44;
    undefined field63_0x45;
    undefined field64_0x46;
    undefined field65_0x47;
    undefined field66_0x48;
    undefined field67_0x49;
    undefined field68_0x4a;
    undefined field69_0x4b;
    undefined4 offset_0x4c;
};

struct TCPSocket_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // TCPSocket virtual function #1
    void (*vfunction2)(void *, char *, char *); // TCPSocket virtual function #2
    undefined4 (*vfunction3)(void *); // TCPSocket virtual function #3
    undefined4 (*vfunction4)(void *, struct _THandle *); // TCPSocket virtual function #4
};

struct _THandle { // PlaceHolder Structure
};

struct TCPSocket { // class TCPSocket : Socket
    struct TCPSocket_vftable *vftablePtr;
    struct TCPSocket_data TCPSocket_data;
};

typedef struct XDRDispatcher XDRDispatcher, *PXDRDispatcher;

typedef struct XDRDispatcher_vftable XDRDispatcher_vftable, *PXDRDispatcher_vftable;

typedef struct XDRDispatcher_data XDRDispatcher_data, *PXDRDispatcher_data;

struct XDRDispatcher_data {
    undefined4 offset_0x0;
};

struct XDRDispatcher_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRDispatcher virtual function #1
    void (*vfunction2)(void *, struct _THandle *); // XDRDispatcher virtual function #2
    void (*vfunction3)(void *); // XDRDispatcher virtual function #3
};

struct XDRDispatcher { // class XDRDispatcher : Dispatcher
    struct XDRDispatcher_vftable *vftablePtr;
    struct XDRDispatcher_data XDRDispatcher_data;
};

typedef struct Delivery_vftable Delivery_vftable, *PDelivery_vftable;

struct Delivery_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // Delivery virtual function #1
    void (*vfunction2)(void *, char *, undefined4, char *, char *, char *); // MSVCR90.DLL Delivery pure virtual function #2
    void (*vfunction3)(void *, char *, undefined4, char *, char *); // MSVCR90.DLL Delivery pure virtual function #3
    void (*vfunction4)(void *, char *, undefined4, char *, char *); // MSVCR90.DLL Delivery pure virtual function #4
    uint (*vfunction5)(void *); // MSVCR90.DLL Delivery pure virtual function #5
};

typedef struct Delivery Delivery, *PDelivery;

struct Delivery { // class Delivery
    struct Delivery_vftable *vftablePtr;
};

typedef struct Dispatcher_vftable Dispatcher_vftable, *PDispatcher_vftable;

struct Dispatcher_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // Dispatcher virtual function #1
    void (*vfunction2)(void *, struct _THandle *); // MSVCR90.DLL Dispatcher pure virtual function #2
    void (*vfunction3)(void *); // MSVCR90.DLL Dispatcher pure virtual function #3
};

typedef struct Dispatcher Dispatcher, *PDispatcher;

struct Dispatcher { // class Dispatcher
    struct Dispatcher_vftable *vftablePtr;
};

typedef struct Socket Socket, *PSocket;

typedef struct Socket_vftable Socket_vftable, *PSocket_vftable;

struct Socket { // class Socket
    struct Socket_vftable *vftablePtr;
};

struct Socket_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // Socket virtual function #1
    void (*vfunction2)(void *, char *, char *); // MSVCR90.DLL Socket pure virtual function #2
    undefined4 (*vfunction3)(void *); // MSVCR90.DLL Socket pure virtual function #3
    undefined4 (*vfunction4)(void *, struct _THandle *); // MSVCR90.DLL Socket pure virtual function #4
};

typedef struct XDRTPackLogoutResponse_vftable XDRTPackLogoutResponse_vftable, *PXDRTPackLogoutResponse_vftable;

struct XDRTPackLogoutResponse_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRTPackLogoutResponse virtual function #1
    void (*vfunction2)(void *); // XDRTPackLogoutResponse virtual function #2
    undefined4 (*vfunction3)(void *); // XDRTPackLogoutResponse virtual function #3
    char * (*vfunction4)(void *); // XDRTPackLogoutResponse virtual function #4
    int (*vfunction5)(void *); // XDRTPackLogoutResponse virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRTPackLogoutResponse virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRTPackLogoutResponse virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

typedef struct XDRTPackLogoutResponse XDRTPackLogoutResponse, *PXDRTPackLogoutResponse;

typedef struct XDRTPackLogoutResponse_data XDRTPackLogoutResponse_data, *PXDRTPackLogoutResponse_data;

struct XDRTPackLogoutResponse_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
    undefined4 offset_0x7c;
};

struct XDRTPackLogoutResponse { // class XDRTPackLogoutResponse : IMessage
    struct XDRTPackLogoutResponse_vftable *vftablePtr;
    struct XDRTPackLogoutResponse_data XDRTPackLogoutResponse_data;
};

typedef struct XDRAuthSessionResponse_data XDRAuthSessionResponse_data, *PXDRAuthSessionResponse_data;

struct XDRAuthSessionResponse_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
};

typedef struct XDRAuthSessionResponse_vftable XDRAuthSessionResponse_vftable, *PXDRAuthSessionResponse_vftable;

struct XDRAuthSessionResponse_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRAuthSessionResponse virtual function #1
    void (*vfunction2)(void *); // XDRAuthSessionResponse virtual function #2
    undefined4 (*vfunction3)(void *); // XDRAuthSessionResponse virtual function #3
    char * (*vfunction4)(void *); // XDRAuthSessionResponse virtual function #4
    int (*vfunction5)(void *); // XDRAuthSessionResponse virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRAuthSessionResponse virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRAuthSessionResponse virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

typedef struct XDRAuthSessionResponse XDRAuthSessionResponse, *PXDRAuthSessionResponse;

struct XDRAuthSessionResponse_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
};

struct XDRAuthSessionResponse { // class XDRAuthSessionResponse : IMessage
    struct XDRAuthSessionResponse_vftable *vftablePtr;
    struct XDRAuthSessionResponse_data XDRAuthSessionResponse_data;
};

typedef struct _XDRResponseHeader_vftable _XDRResponseHeader_vftable, *P_XDRResponseHeader_vftable;

struct _XDRResponseHeader_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // _XDRResponseHeader virtual function #1
    void (*vfunction2)(void *); // _XDRResponseHeader virtual function #2
    undefined4 (*vfunction3)(void *); // _XDRResponseHeader virtual function #3
    char * (*vfunction4)(void *); // _XDRResponseHeader virtual function #4
    int (*vfunction5)(void *); // _XDRResponseHeader virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // _XDRResponseHeader virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // _XDRResponseHeader virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

typedef struct _XDRResponseHeader_data _XDRResponseHeader_data, *P_XDRResponseHeader_data;

struct _XDRResponseHeader_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
    undefined4 offset_0x6c;
};

typedef struct _XDRResponseHeader _XDRResponseHeader, *P_XDRResponseHeader;

struct _XDRResponseHeader_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
    undefined4 offset_0x6c;
};

struct _XDRResponseHeader { // class _XDRResponseHeader : IMessage
    struct _XDRResponseHeader_vftable *vftablePtr;
    struct _XDRResponseHeader_data _XDRResponseHeader_data;
};

typedef struct XDRTPackLoginResponse_data XDRTPackLoginResponse_data, *PXDRTPackLoginResponse_data;

struct XDRTPackLoginResponse_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
};

typedef struct XDRTPackLoginResponse XDRTPackLoginResponse, *PXDRTPackLoginResponse;

typedef struct XDRTPackLoginResponse_vftable XDRTPackLoginResponse_vftable, *PXDRTPackLoginResponse_vftable;

struct XDRTPackLoginResponse_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
};

struct XDRTPackLoginResponse_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRTPackLoginResponse virtual function #1
    void (*vfunction2)(void *); // XDRTPackLoginResponse virtual function #2
    undefined4 (*vfunction3)(void *); // XDRTPackLoginResponse virtual function #3
    char * (*vfunction4)(void *); // XDRTPackLoginResponse virtual function #4
    int (*vfunction5)(void *); // XDRTPackLoginResponse virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRTPackLoginResponse virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRTPackLoginResponse virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

struct XDRTPackLoginResponse { // class XDRTPackLoginResponse : IMessage
    struct XDRTPackLoginResponse_vftable *vftablePtr;
    struct XDRTPackLoginResponse_data XDRTPackLoginResponse_data;
};

typedef struct _XDRRequestHeader _XDRRequestHeader, *P_XDRRequestHeader;

typedef struct _XDRRequestHeader_vftable _XDRRequestHeader_vftable, *P_XDRRequestHeader_vftable;

typedef struct _XDRRequestHeader_data _XDRRequestHeader_data, *P_XDRRequestHeader_data;

struct _XDRRequestHeader_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
    undefined4 offset_0x6c;
    undefined field106_0x70;
    undefined field107_0x71;
    undefined field108_0x72;
    undefined field109_0x73;
    undefined4 offset_0x74;
    undefined4 offset_0x78;
};

struct _XDRRequestHeader_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // _XDRRequestHeader virtual function #1
    void (*vfunction2)(void *); // _XDRRequestHeader virtual function #2
    undefined4 (*vfunction3)(void *); // _XDRRequestHeader virtual function #3
    char * (*vfunction4)(void *); // _XDRRequestHeader virtual function #4
    int (*vfunction5)(void *); // _XDRRequestHeader virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // _XDRRequestHeader virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // _XDRRequestHeader virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

struct _XDRRequestHeader { // class _XDRRequestHeader : IMessage
    struct _XDRRequestHeader_vftable *vftablePtr;
    struct _XDRRequestHeader_data _XDRRequestHeader_data;
};

typedef struct XDRDetectGhostCheckResponse_vftable XDRDetectGhostCheckResponse_vftable, *PXDRDetectGhostCheckResponse_vftable;

struct XDRDetectGhostCheckResponse_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRDetectGhostCheckResponse virtual function #1
    void (*vfunction2)(void *); // XDRDetectGhostCheckResponse virtual function #2
    undefined4 (*vfunction3)(void *); // XDRDetectGhostCheckResponse virtual function #3
    char * (*vfunction4)(void *); // XDRDetectGhostCheckResponse virtual function #4
    int (*vfunction5)(void *); // XDRDetectGhostCheckResponse virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRDetectGhostCheckResponse virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRDetectGhostCheckResponse virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

typedef struct XDRDetectGhostCheckResponse XDRDetectGhostCheckResponse, *PXDRDetectGhostCheckResponse;

typedef struct XDRDetectGhostCheckResponse_data XDRDetectGhostCheckResponse_data, *PXDRDetectGhostCheckResponse_data;

struct XDRDetectGhostCheckResponse_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

struct XDRDetectGhostCheckResponse { // class XDRDetectGhostCheckResponse : IMessage
    struct XDRDetectGhostCheckResponse_vftable *vftablePtr;
    struct XDRDetectGhostCheckResponse_data XDRDetectGhostCheckResponse_data;
};

typedef struct XDRDetectGhostCheckRequest_data XDRDetectGhostCheckRequest_data, *PXDRDetectGhostCheckRequest_data;

struct XDRDetectGhostCheckRequest_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

typedef struct XDRDetectGhostCheckRequest XDRDetectGhostCheckRequest, *PXDRDetectGhostCheckRequest;

typedef struct XDRDetectGhostCheckRequest_vftable XDRDetectGhostCheckRequest_vftable, *PXDRDetectGhostCheckRequest_vftable;

struct XDRDetectGhostCheckRequest_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

struct XDRDetectGhostCheckRequest_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRDetectGhostCheckRequest virtual function #1
    void (*vfunction2)(void *); // XDRDetectGhostCheckResponse virtual function #2
    undefined4 (*vfunction3)(void *); // XDRDetectGhostCheckRequest virtual function #3
    char * (*vfunction4)(void *); // XDRDetectGhostCheckRequest virtual function #4
    int (*vfunction5)(void *); // XDRDetectGhostCheckResponse virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRDetectGhostCheckResponse virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRDetectGhostCheckResponse virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

struct XDRDetectGhostCheckRequest { // class XDRDetectGhostCheckRequest : IMessage
    struct XDRDetectGhostCheckRequest_vftable *vftablePtr;
    struct XDRDetectGhostCheckRequest_data XDRDetectGhostCheckRequest_data;
};

typedef struct XDRTPackLogOutUserNotice XDRTPackLogOutUserNotice, *PXDRTPackLogOutUserNotice;

typedef struct XDRTPackLogOutUserNotice_vftable XDRTPackLogOutUserNotice_vftable, *PXDRTPackLogOutUserNotice_vftable;

typedef struct XDRTPackLogOutUserNotice_data XDRTPackLogOutUserNotice_data, *PXDRTPackLogOutUserNotice_data;

struct XDRTPackLogOutUserNotice_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
};

struct XDRTPackLogOutUserNotice_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRTPackLogOutUserNotice virtual function #1
    void (*vfunction2)(void *); // XDRTPackLogOutUserNotice virtual function #2
    undefined4 (*vfunction3)(void *); // XDRTPackLogOutUserNotice virtual function #3
    char * (*vfunction4)(void *); // XDRTPackLogOutUserNotice virtual function #4
    int (*vfunction5)(void *); // XDRTPackLogOutUserNotice virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRTPackLogOutUserNotice virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRTPackLogOutUserNotice virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

struct XDRTPackLogOutUserNotice { // class XDRTPackLogOutUserNotice : IMessage
    struct XDRTPackLogOutUserNotice_vftable *vftablePtr;
    struct XDRTPackLogOutUserNotice_data XDRTPackLogOutUserNotice_data;
};

typedef struct _XDRCommonHeader_vftable _XDRCommonHeader_vftable, *P_XDRCommonHeader_vftable;

struct _XDRCommonHeader_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // _XDRCommonHeader virtual function #1
    void (*vfunction2)(void *); // _XDRCommonHeader virtual function #2
    undefined4 (*vfunction3)(void *); // _XDRCommonHeader virtual function #3
    char * (*vfunction4)(void *); // _XDRCommonHeader virtual function #4
    int (*vfunction5)(void *); // _XDRCommonHeader virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // _XDRCommonHeader virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // _XDRCommonHeader virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

typedef struct _XDRCommonHeader _XDRCommonHeader, *P_XDRCommonHeader;

typedef struct _XDRCommonHeader_data _XDRCommonHeader_data, *P_XDRCommonHeader_data;

struct _XDRCommonHeader_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
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
    undefined4 offset_0x24;
    undefined field34_0x28;
    undefined field35_0x29;
    undefined field36_0x2a;
    undefined field37_0x2b;
    undefined field38_0x2c;
    undefined field39_0x2d;
    undefined field40_0x2e;
    undefined field41_0x2f;
    undefined field42_0x30;
    undefined field43_0x31;
    undefined field44_0x32;
    undefined field45_0x33;
    undefined field46_0x34;
    undefined field47_0x35;
    undefined field48_0x36;
    undefined field49_0x37;
    undefined field50_0x38;
    undefined field51_0x39;
    undefined field52_0x3a;
    undefined field53_0x3b;
    undefined field54_0x3c;
    undefined field55_0x3d;
    undefined field56_0x3e;
    undefined field57_0x3f;
    undefined field58_0x40;
    undefined field59_0x41;
    undefined field60_0x42;
    undefined field61_0x43;
    undefined field62_0x44;
    undefined field63_0x45;
    undefined field64_0x46;
    undefined field65_0x47;
};

struct _XDRCommonHeader { // class _XDRCommonHeader : IMessage
    struct _XDRCommonHeader_vftable *vftablePtr;
    struct _XDRCommonHeader_data _XDRCommonHeader_data;
};

typedef struct XDRTPackLogoutRequest_data XDRTPackLogoutRequest_data, *PXDRTPackLogoutRequest_data;

struct XDRTPackLogoutRequest_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
};

typedef struct XDRTPackLogoutRequest XDRTPackLogoutRequest, *PXDRTPackLogoutRequest;

typedef struct XDRTPackLogoutRequest_vftable XDRTPackLogoutRequest_vftable, *PXDRTPackLogoutRequest_vftable;

struct XDRTPackLogoutRequest_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
};

struct XDRTPackLogoutRequest_vftable {
    undefined4 * (*deleting_destructor)(void *, uint); // XDRTPackLogoutRequest virtual function #1
    void (*vfunction2)(void *); // XDRTPackLogoutRequest virtual function #2
    undefined4 (*vfunction3)(void *); // XDRTPackLogoutRequest virtual function #3
    char * (*vfunction4)(void *); // XDRTPackLogoutRequest virtual function #4
    int (*vfunction5)(void *); // XDRTPackLogoutRequest virtual function #5
    uint (*vfunction6)(void *, struct _THandle *); // XDRTPackLogoutRequest virtual function #6
    uint (*vfunction7)(void *, struct _THandle *); // XDRTPackLogoutRequest virtual function #7
    void (*vfunction8)(void *, undefined1); // XDRTPackLoginResponse virtual function #8
    undefined1 (*vfunction9)(void *); // XDRTPackLoginResponse virtual function #9
};

struct XDRTPackLogoutRequest { // class XDRTPackLogoutRequest : IMessage
    struct XDRTPackLogoutRequest_vftable *vftablePtr;
    struct XDRTPackLogoutRequest_data XDRTPackLogoutRequest_data;
};

typedef struct CXMLParser CXMLParser, *PCXMLParser;

struct CXMLParser { // PlaceHolder Structure
};

typedef struct CXMLParserRoot CXMLParserRoot, *PCXMLParserRoot;

struct CXMLParserRoot { // PlaceHolder Structure
};

typedef struct CDHtmlElementEventSink CDHtmlElementEventSink, *PCDHtmlElementEventSink;

struct CDHtmlElementEventSink { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct CPaneContainerGC CPaneContainerGC, *PCPaneContainerGC;

struct CPaneContainerGC { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct _Container_proxy _Container_proxy, *P_Container_proxy;

struct _Container_proxy { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>, *Ptime_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>;

struct time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> { // PlaceHolder Structure
};

typedef struct time_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_> time_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>, *Ptime_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>;

struct time_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_> { // PlaceHolder Structure
};

typedef struct time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>, *Ptime_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>;

struct time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> { // PlaceHolder Structure
};

typedef struct allocator<std::_Container_proxy> allocator<std::_Container_proxy>, *Pallocator<std::_Container_proxy>;

struct allocator<std::_Container_proxy> { // PlaceHolder Structure
};

typedef struct CriticalSection CriticalSection, *PCriticalSection;

struct CriticalSection { // PlaceHolder Structure
};

typedef struct AutoResetEvent AutoResetEvent, *PAutoResetEvent;

struct AutoResetEvent { // PlaceHolder Structure
};

typedef struct _XMemory _XMemory, *P_XMemory;

struct _XMemory { // PlaceHolder Structure
};

typedef struct SchedulingNode SchedulingNode, *PSchedulingNode;

struct SchedulingNode { // PlaceHolder Structure
};

typedef struct ScheduleGroupBase ScheduleGroupBase, *PScheduleGroupBase;

struct ScheduleGroupBase { // PlaceHolder Structure
};

typedef struct _Handle _Handle, *P_Handle;

struct _Handle { // PlaceHolder Structure
};

typedef struct CAtlWinModule CAtlWinModule, *PCAtlWinModule;

struct CAtlWinModule { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef int errno_t;




bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1);
void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this);
bad_alloc * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,uint param_1);
undefined4 __cdecl FUN_10001080(undefined4 param_1,undefined4 param_2);
void FUN_10001090(void);
undefined4 * __thiscall FUN_100010a0(void *this,undefined4 param_1);
undefined4 __fastcall FUN_100010c0(undefined4 *param_1);
void FUN_100010d0(void);
undefined4 * __fastcall FUN_100010e0(undefined4 *param_1);
void __thiscall FUN_10001100(void *this,undefined4 *param_1);
undefined4 __fastcall FUN_10001120(int *param_1);
bool __thiscall FUN_10001150(void *this,int *param_1);
bool __fastcall FUN_10001170(int *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
void __thiscall std::logic_error::vfunction2(logic_error *this);
exception * __thiscall std::logic_error::scalar_deleting_destructor(logic_error *this,uint param_1);
out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::out_of_range::~out_of_range(out_of_range *this);
exception * __thiscall std::out_of_range::scalar_deleting_destructor(out_of_range *this,uint param_1);
out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
void __thiscall XDR::IMessage::~IMessage(IMessage *this);
undefined4 * __thiscall XDR::IMessage::scalar_deleting_destructor(IMessage *this,uint param_1);
uint __cdecl FUN_10001400(_THandle *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int __cdecl FUN_10001470(_THandle *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int __cdecl FUN_100014f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
bool __thiscall FUN_10001520(void *this,undefined4 param_1,int *param_2);
bool __thiscall FUN_10001590(void *this,undefined4 param_1,int *param_2);
undefined4 __cdecl FUN_10001600(int *param_1);
_XDRCommonHeader * __thiscall _XDRCommonHeader::_XDRCommonHeader(_XDRCommonHeader *this);
void __thiscall _XDRCommonHeader::~_XDRCommonHeader(_XDRCommonHeader *this);
void __thiscall _XDRCommonHeader::vfunction2(_XDRCommonHeader *this);
undefined4 __thiscall _XDRCommonHeader::vfunction3(_XDRCommonHeader *this);
char * __thiscall _XDRCommonHeader::vfunction4(_XDRCommonHeader *this);
int __thiscall _XDRCommonHeader::vfunction5(_XDRCommonHeader *this);
uint __thiscall _XDRCommonHeader::vfunction6(_XDRCommonHeader *this,_THandle *param_1);
uint __thiscall _XDRCommonHeader::vfunction7(_XDRCommonHeader *this,_THandle *param_1);
undefined4 * __thiscall _XDRCommonHeader::scalar_deleting_destructor(_XDRCommonHeader *this,uint param_1);
IMessage * __thiscall XDR::IMessage::IMessage(IMessage *this);
_XDRResponseHeader * __thiscall _XDRResponseHeader::_XDRResponseHeader(_XDRResponseHeader *this);
void __thiscall _XDRResponseHeader::~_XDRResponseHeader(_XDRResponseHeader *this);
void __thiscall _XDRResponseHeader::vfunction2(_XDRResponseHeader *this);
undefined4 __thiscall _XDRResponseHeader::vfunction3(_XDRResponseHeader *this);
char * __thiscall _XDRResponseHeader::vfunction4(_XDRResponseHeader *this);
int __thiscall _XDRResponseHeader::vfunction5(_XDRResponseHeader *this);
uint __thiscall _XDRResponseHeader::vfunction6(_XDRResponseHeader *this,_THandle *param_1);
uint __thiscall _XDRResponseHeader::vfunction7(_XDRResponseHeader *this,_THandle *param_1);
void * __thiscall _XDRResponseHeader::scalar_deleting_destructor(_XDRResponseHeader *this,uint param_1);
XDRTPackLoginResponse * __thiscall XDRTPackLoginResponse::XDRTPackLoginResponse(XDRTPackLoginResponse *this);
void __thiscall XDRTPackLoginResponse::~XDRTPackLoginResponse(XDRTPackLoginResponse *this);
void __thiscall XDRTPackLoginResponse::vfunction2(XDRTPackLoginResponse *this);
undefined4 __thiscall XDRTPackLoginResponse::vfunction3(XDRTPackLoginResponse *this);
char * __thiscall XDRTPackLoginResponse::vfunction4(XDRTPackLoginResponse *this);
int __thiscall XDRTPackLoginResponse::vfunction5(XDRTPackLoginResponse *this);
uint __thiscall XDRTPackLoginResponse::vfunction6(XDRTPackLoginResponse *this,_THandle *param_1);
uint __thiscall XDRTPackLoginResponse::vfunction7(XDRTPackLoginResponse *this,_THandle *param_1);
undefined4 * __thiscall XDRTPackLoginResponse::scalar_deleting_destructor(XDRTPackLoginResponse *this,uint param_1);
void __fastcall FUN_100020e0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 __fastcall FUN_10002100(int param_1);
undefined4 __fastcall FUN_10002120(int param_1);
void __thiscall FUN_10002140(void *this,undefined4 param_1);
undefined4 __fastcall FUN_10002160(int param_1);
undefined4 __fastcall FUN_10002180(int param_1);
void __fastcall FUN_100021a0(void *param_1);
void * __fastcall FUN_100021c0(void *param_1);
void __thiscall FID_conflict:~CAtlWinModule(void *this);
void * __thiscall FUN_10002250(void *this,void *param_1);
void * __thiscall FUN_10002280(void *this,void *param_1);
undefined4 * __thiscall FUN_100022b0(void *this,undefined4 *param_1,int param_2,undefined4 param_3);
void __fastcall FUN_10002a90(void *param_1);
void __fastcall FUN_10002af0(int *param_1);
bool __thiscall FUN_10002b10(void *this,int *param_1);
void __fastcall FUN_10002b40(undefined4 *param_1);
void __fastcall FUN_10002b60(undefined4 *param_1);
int __cdecl FUN_10002b80(int param_1);
int __cdecl FUN_10002b90(int param_1);
int __cdecl FUN_10002ba0(int param_1);
int __cdecl FUN_10002bb0(int param_1);
int __thiscall FUN_10002bc0(void *this,undefined4 param_1);
undefined4 * __thiscall FUN_10002c30(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_10002c60(void *this,_Container_proxy *param_1);
void __fastcall FUN_10002ce0(int param_1);
void __thiscall FUN_10002d00(void *this,int param_1);
int __cdecl FUN_10002e30(int param_1);
undefined4 __cdecl FUN_10002e70(undefined4 param_1);
void __thiscall FUN_10002eb0(void *this,int param_1);
void __fastcall FUN_10002fe0(void *param_1);
void __fastcall FUN_100030b0(undefined4 *param_1);
void FUN_100030e0(void *param_1);
void * __thiscall _Vector_iterator<>(void *this,undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10003120(int *param_1);
int * __fastcall FUN_10003170(int *param_1);
bool __thiscall FUN_10003190(void *this,int *param_1);
undefined4 __fastcall FUN_100031e0(int param_1);
undefined4 * __thiscall FUN_10003200(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __fastcall FUN_100032b0(int param_1);
undefined4 * __thiscall FUN_10003320(void *this,undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10003360(int *param_1);
undefined4 * __fastcall FUN_10003440(undefined4 *param_1);
void FUN_10003460(void);
void Catch_All@1000352a(void);
undefined4 FUN_1000358d(void);
int * __thiscall FUN_100035d0(void *this,int *param_1);
void FUN_10003610(uint param_1);
void FUN_10003630(uint param_1);
void FUN_10003650(void);
void __cdecl FUN_10003670(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __cdecl FUN_10003690(_THandle *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __cdecl FUN_100036b0(_THandle *param_1,undefined4 *param_2);
void __cdecl FUN_100036d0(_THandle *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __cdecl FUN_100036f0(_THandle *param_1,undefined4 *param_2);
void FUN_10003710(void);
void __cdecl FUN_10003730(void *param_1,int *param_2);
void __cdecl FUN_10003750(_THandle *param_1,undefined4 *param_2);
void __cdecl FUN_10003770(void *param_1,int *param_2);
void __cdecl FUN_10003790(_THandle *param_1,undefined8 *param_2);
void __cdecl FUN_100037b0(int *param_1);
void __cdecl FUN_100037d0(int param_1,char *param_2,int param_3);
void __cdecl FUN_100037f0(undefined1 *param_1,undefined1 *param_2);
undefined4 __fastcall FUN_10003820(undefined4 param_1);
void __cdecl FUN_10003830(uint param_1);
void __cdecl FUN_10003880(uint param_1);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,bad_alloc *param_1);
undefined4 __cdecl FUN_10003900(undefined4 param_1);
void __cdecl FUN_10003960(undefined4 param_1);
undefined4 FUN_10003980(void);
bool __cdecl FUN_10003990(_THandle *param_1,undefined4 *param_2);
bool __cdecl FUN_100039d0(_THandle *param_1,undefined4 *param_2);
undefined4 FUN_10003a10(void);
bool __cdecl FUN_10003a20(_THandle *param_1,undefined4 *param_2);
bool __cdecl FUN_10003a60(_THandle *param_1,undefined8 *param_2);
undefined8 __cdecl FUN_10003ab0(undefined4 param_1,undefined4 param_2);
undefined8 __cdecl FUN_10003b10(undefined4 param_1,undefined4 param_2);
undefined4 __fastcall FUN_10003b30(undefined4 param_1);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
length_error * __thiscall std::length_error::length_error(length_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::length_error::~length_error(length_error *this);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,uint param_1);
void __fastcall FUN_10003bf0(void *param_1);
int __fastcall FUN_10003c10(int param_1);
void __fastcall FUN_10003c80(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_10003ca0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void * __thiscall FUN_10003cd0(void *this,uint param_1);
void __fastcall FUN_10003d00(int param_1);
void * __fastcall FUN_10003d70(void *param_1);
int __thiscall FUN_10003da0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FID_conflict:~CAtlWinModule(void *this);
void * __thiscall FUN_10003f00(void *this,void *param_1);
void * __thiscall FUN_10003f30(void *this,void *param_1);
undefined4 * __thiscall FUN_10003f60(void *this,undefined4 *param_1,int param_2,undefined4 param_3);
undefined4 * __thiscall FUN_10004740(void *this,undefined4 *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall FUN_100047e0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_10004810(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10004840(void *this,undefined4 param_1,char param_2);
void __fastcall FUN_100048b0(undefined4 *param_1);
undefined4 * __fastcall FUN_10004910(undefined4 *param_1);
void __fastcall FUN_10004930(int *param_1);
undefined4 __thiscall FUN_10004950(void *this,int *param_1);
bool __thiscall FUN_100049a0(void *this,int *param_1);
int FUN_100049d0(void);
void __fastcall FUN_100049f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_10004a10(undefined4 *param_1);
void __fastcall FUN_10004a30(undefined4 *param_1);
int __cdecl FUN_10004a50(int param_1);
int __cdecl FUN_10004a60(int param_1);
void __cdecl FUN_10004a70(int param_1);
int __thiscall FUN_10004a90(void *this,undefined4 param_1);
undefined4 * __thiscall FUN_10004b00(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __thiscall FUN_10004b30(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5);
void * __thiscall FUN_10005150(void *this,void *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_10005180(void *this,int param_1);
int __cdecl FUN_100052b0(int param_1);
undefined4 __cdecl FUN_100052f0(undefined4 param_1);
void __fastcall FUN_10005330(int param_1);
void __fastcall FUN_10005350(int param_1);
void __thiscall FUN_10005370(void *this,int param_1);
void __fastcall FUN_100054a0(void *param_1);
void FUN_10005570(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_10005590(void *param_1);
void __fastcall FUN_100055b0(undefined4 *param_1);
void __fastcall FUN_100055f0(undefined4 *param_1);
void * __thiscall _Vector_iterator<>(void *this,undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10005650(int *param_1);
undefined4 * __fastcall _String_const_iterator<>(undefined4 *param_1);
int * __fastcall FUN_10005690(int *param_1);
void * __thiscall FUN_100056b0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,undefined4 *param_2);
void FUN_100056e0(void);
undefined4 * __fastcall FUN_100057c0(undefined4 *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100057e0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
int __cdecl FUN_10005810(int param_1);
undefined4 __fastcall FUN_10005820(int param_1);
void * __thiscall FUN_10005840(undefined4 *param_1,void *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
undefined4 * __thiscall FUN_10005a10(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __fastcall FUN_10005ac0(int param_1);
void * __thiscall FUN_10005b30(void *this,void *param_1,char param_2,int param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
int __thiscall FUN_10005fb0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void * FUN_10006040(undefined4 param_1,undefined1 param_2);
undefined4 __cdecl FUN_10006080(undefined4 param_1);
void __thiscall std::allocator<std::_Container_proxy>::destroy(allocator<std::_Container_proxy> *this,_Container_proxy *param_1);
undefined4 * __thiscall FUN_100060b0(void *this,undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_100060f0(int *param_1);
int * __fastcall FUN_10006140(int *param_1);
void __fastcall FUN_10006160(int *param_1);
void FUN_10006240(void);
void FUN_10006290(void);
length_error * __thiscall std::length_error::length_error(length_error *this,exception *param_1);
int * __thiscall FUN_10006340(void *this,uint param_1);
void FUN_10006370(void);
void __fastcall FUN_10006390(int param_1);
void FUN_100063f0(void);
void Catch_All@100064ba(void);
undefined4 FUN_1000651d(void);
void FUN_10006560(undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_4,undefined1 param_5);
void Catch_All@100065fc(void);
undefined4 FUN_10006623(void);
int __thiscall FUN_10006650(void *this,undefined4 param_1);
int * __fastcall FUN_10006690(int *param_1);
int * __thiscall FUN_100066b0(void *this,int *param_1);
void __fastcall FUN_100066f0(int *param_1);
undefined4 * __thiscall FUN_10006820(void *this,undefined4 *param_1,undefined1 *param_2);
void FUN_10006850(void *param_1);
int FUN_100068d0(undefined4 param_1,undefined1 param_2);
undefined4 max_size(void);
void FUN_10006940(uint param_1);
void FUN_10006960(undefined4 param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10006980(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,undefined1 param_5);
void * __thiscall FUN_100069d0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
undefined4 * FUN_10006a00(void);
undefined4 * __fastcall FUN_10006a30(undefined4 *param_1);
undefined1 __cdecl FUN_10006ae0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __cdecl FUN_10006b40(void *param_1);
void __cdecl FUN_10006b50(uint param_1);
void __cdecl FUN_10006ba0(undefined4 param_1,undefined4 *param_2);
CDHtmlElementEventSink * __thiscall FUN_10006be0(void *this,uint param_1);
void __thiscall CDHtmlElementEventSink::~CDHtmlElementEventSink(CDHtmlElementEventSink *this);
undefined4 * __thiscall TPACK::Connector::Impl::Socket::scalar_deleting_destructor(Socket *this,uint param_1);
undefined4 __fastcall FUN_10006c60(int param_1);
void __fastcall FUN_10006d00(int param_1);
undefined4 * __thiscall TPACK::Connector::Impl::TCPSocket::scalar_deleting_destructor(TCPSocket *this,uint param_1);
void FUN_10006de0(void);
void FUN_10006e00(void);
void FUN_10006e20(void);
int FUN_10006e30(void);
void FUN_10006e50(void);
void FUN_10006f30(void);
CriticalSection * __thiscall FUN_10006f80(void *this,uint param_1);
CriticalSection * __fastcall FUN_10006fb0(CriticalSection *param_1);
void __fastcall FUN_10007000(CriticalSection *param_1);
undefined4 * __thiscall TPACK::Connector::Impl::Delivery::scalar_deleting_destructor(Delivery *this,uint param_1);
_XDRRequestHeader * __thiscall _XDRRequestHeader::_XDRRequestHeader(_XDRRequestHeader *this);
void __thiscall _XDRRequestHeader::~_XDRRequestHeader(_XDRRequestHeader *this);
void __thiscall _XDRRequestHeader::vfunction2(_XDRRequestHeader *this);
undefined4 __thiscall _XDRRequestHeader::vfunction3(_XDRRequestHeader *this);
char * __thiscall _XDRRequestHeader::vfunction4(_XDRRequestHeader *this);
int __thiscall _XDRRequestHeader::vfunction5(_XDRRequestHeader *this);
uint __thiscall _XDRRequestHeader::vfunction6(_XDRRequestHeader *this,_THandle *param_1);
uint __thiscall _XDRRequestHeader::vfunction7(_XDRRequestHeader *this,_THandle *param_1);
void __thiscall XDRTPackLoginResponse::vfunction8(XDRTPackLoginResponse *this,undefined1 param_1);
void * __thiscall _XDRRequestHeader::scalar_deleting_destructor(_XDRRequestHeader *this,uint param_1);
XDRAuthSessionRequest * __thiscall XDRAuthSessionRequest::XDRAuthSessionRequest(XDRAuthSessionRequest *this);
void __thiscall XDRAuthSessionRequest::~XDRAuthSessionRequest(XDRAuthSessionRequest *this);
void __thiscall XDRAuthSessionRequest::vfunction2(XDRAuthSessionRequest *this);
undefined4 __thiscall XDRAuthSessionRequest::vfunction3(XDRAuthSessionRequest *this);
char * __thiscall XDRAuthSessionRequest::vfunction4(XDRAuthSessionRequest *this);
int __thiscall XDRAuthSessionRequest::vfunction5(XDRAuthSessionRequest *this);
uint __thiscall XDRAuthSessionRequest::vfunction6(XDRAuthSessionRequest *this,_THandle *param_1);
uint __thiscall XDRAuthSessionRequest::vfunction7(XDRAuthSessionRequest *this,_THandle *param_1);
undefined1 __thiscall XDRTPackLoginResponse::vfunction9(XDRTPackLoginResponse *this);
undefined4 * __thiscall XDRAuthSessionRequest::scalar_deleting_destructor(XDRAuthSessionRequest *this,uint param_1);
XDRTPackLoginRequest * __thiscall XDRTPackLoginRequest::XDRTPackLoginRequest(XDRTPackLoginRequest *this);
void __thiscall XDRTPackLoginRequest::~XDRTPackLoginRequest(XDRTPackLoginRequest *this);
void __thiscall XDRTPackLogoutRequest::vfunction2(XDRTPackLogoutRequest *this);
undefined4 __thiscall XDRTPackLoginRequest::vfunction3(XDRTPackLoginRequest *this);
char * __thiscall XDRTPackLoginRequest::vfunction4(XDRTPackLoginRequest *this);
undefined4 * __thiscall XDRTPackLoginRequest::scalar_deleting_destructor(XDRTPackLoginRequest *this,uint param_1);
XDRTPackLogoutRequest * __thiscall XDRTPackLogoutRequest::XDRTPackLogoutRequest(XDRTPackLogoutRequest *this);
void __thiscall XDRTPackLogoutRequest::~XDRTPackLogoutRequest(XDRTPackLogoutRequest *this);
undefined4 __thiscall XDRTPackLogoutRequest::vfunction3(XDRTPackLogoutRequest *this);
char * __thiscall XDRTPackLogoutRequest::vfunction4(XDRTPackLogoutRequest *this);
int __thiscall XDRTPackLogoutRequest::vfunction5(XDRTPackLogoutRequest *this);
bool __thiscall XDRTPackLogoutRequest::vfunction6(XDRTPackLogoutRequest *this,_THandle *param_1);
bool __thiscall XDRTPackLogoutRequest::vfunction7(XDRTPackLogoutRequest *this,_THandle *param_1);
undefined4 * __thiscall XDRTPackLogoutRequest::scalar_deleting_destructor(XDRTPackLogoutRequest *this,uint param_1);
XDRDetectGhostCheckResponse * __thiscall XDRDetectGhostCheckResponse::XDRDetectGhostCheckResponse(XDRDetectGhostCheckResponse *this);
void __thiscall XDRDetectGhostCheckResponse::~XDRDetectGhostCheckResponse(XDRDetectGhostCheckResponse *this);
undefined4 __thiscall XDRDetectGhostCheckResponse::vfunction3(XDRDetectGhostCheckResponse *this);
char * __thiscall XDRDetectGhostCheckResponse::vfunction4(XDRDetectGhostCheckResponse *this);
bool __thiscall XDRDetectGhostCheckResponse::vfunction7(XDRDetectGhostCheckResponse *this,_THandle *param_1);
undefined4 * __thiscall XDRDetectGhostCheckResponse::scalar_deleting_destructor(XDRDetectGhostCheckResponse *this,uint param_1);
undefined4 * __thiscall TPACK::Connector::Impl::XDRDelivery::scalar_deleting_destructor(XDRDelivery *this,uint param_1);
uint __thiscall FUN_10007be0(void *this,int *param_1);
undefined4 * __thiscall TPACK::Connector::Impl::Dispatcher::scalar_deleting_destructor(Dispatcher *this,uint param_1);
XDRAuthSessionResponse * __thiscall XDRAuthSessionResponse::XDRAuthSessionResponse(XDRAuthSessionResponse *this);
void __thiscall XDRAuthSessionResponse::~XDRAuthSessionResponse(XDRAuthSessionResponse *this);
void __thiscall XDRAuthSessionResponse::vfunction2(XDRAuthSessionResponse *this);
undefined4 __thiscall XDRAuthSessionResponse::vfunction3(XDRAuthSessionResponse *this);
char * __thiscall XDRAuthSessionResponse::vfunction4(XDRAuthSessionResponse *this);
int __thiscall XDRAuthSessionResponse::vfunction5(XDRAuthSessionResponse *this);
bool __thiscall XDRAuthSessionResponse::vfunction6(XDRAuthSessionResponse *this,_THandle *param_1);
bool __thiscall XDRAuthSessionResponse::vfunction7(XDRAuthSessionResponse *this,_THandle *param_1);
undefined4 * __thiscall XDRAuthSessionResponse::scalar_deleting_destructor(XDRAuthSessionResponse *this,uint param_1);
XDRTPackLogoutResponse * __thiscall XDRTPackLogoutResponse::XDRTPackLogoutResponse(XDRTPackLogoutResponse *this);
void __thiscall XDRTPackLogoutResponse::~XDRTPackLogoutResponse(XDRTPackLogoutResponse *this);
void __thiscall XDRTPackLogoutResponse::vfunction2(XDRTPackLogoutResponse *this);
undefined4 __thiscall XDRTPackLogoutResponse::vfunction3(XDRTPackLogoutResponse *this);
char * __thiscall XDRTPackLogoutResponse::vfunction4(XDRTPackLogoutResponse *this);
int __thiscall XDRTPackLogoutResponse::vfunction5(XDRTPackLogoutResponse *this);
uint __thiscall XDRTPackLogoutResponse::vfunction6(XDRTPackLogoutResponse *this,_THandle *param_1);
uint __thiscall XDRTPackLogoutResponse::vfunction7(XDRTPackLogoutResponse *this,_THandle *param_1);
undefined4 * __thiscall XDRTPackLogoutResponse::scalar_deleting_destructor(XDRTPackLogoutResponse *this,uint param_1);
XDRDetectGhostCheckRequest * __thiscall XDRDetectGhostCheckRequest::XDRDetectGhostCheckRequest(XDRDetectGhostCheckRequest *this);
void __thiscall XDRDetectGhostCheckRequest::~XDRDetectGhostCheckRequest(XDRDetectGhostCheckRequest *this);
void __thiscall XDRDetectGhostCheckResponse::vfunction2(XDRDetectGhostCheckResponse *this);
undefined4 __thiscall XDRDetectGhostCheckRequest::vfunction3(XDRDetectGhostCheckRequest *this);
char * __thiscall XDRDetectGhostCheckRequest::vfunction4(XDRDetectGhostCheckRequest *this);
int __thiscall XDRDetectGhostCheckResponse::vfunction5(XDRDetectGhostCheckResponse *this);
bool __thiscall XDRDetectGhostCheckResponse::vfunction6(XDRDetectGhostCheckResponse *this,_THandle *param_1);
undefined4 * __thiscall XDRDetectGhostCheckRequest::scalar_deleting_destructor(XDRDetectGhostCheckRequest *this,uint param_1);
XDRTPackLogOutUserNotice * __thiscall XDRTPackLogOutUserNotice::XDRTPackLogOutUserNotice(XDRTPackLogOutUserNotice *this);
void __thiscall XDRTPackLogOutUserNotice::~XDRTPackLogOutUserNotice(XDRTPackLogOutUserNotice *this);
void __thiscall XDRTPackLogOutUserNotice::vfunction2(XDRTPackLogOutUserNotice *this);
undefined4 __thiscall XDRTPackLogOutUserNotice::vfunction3(XDRTPackLogOutUserNotice *this);
char * __thiscall XDRTPackLogOutUserNotice::vfunction4(XDRTPackLogOutUserNotice *this);
int __thiscall XDRTPackLogOutUserNotice::vfunction5(XDRTPackLogOutUserNotice *this);
uint __thiscall XDRTPackLogOutUserNotice::vfunction6(XDRTPackLogOutUserNotice *this,_THandle *param_1);
uint __thiscall XDRTPackLogOutUserNotice::vfunction7(XDRTPackLogOutUserNotice *this,_THandle *param_1);
undefined4 * __thiscall XDRTPackLogOutUserNotice::scalar_deleting_destructor(XDRTPackLogOutUserNotice *this,uint param_1);
void __thiscall FUN_10008730(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * __thiscall TPACK::Connector::Impl::XDRDispatcher::scalar_deleting_destructor(XDRDispatcher *this,uint param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall FUN_100087a0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __cdecl FUN_100087c0(undefined4 param_1);
void __thiscall FUN_100087e0(void *this,undefined4 param_1);
SchedulingNode * __thiscall FUN_10008820(void *this,uint param_1);
void * __thiscall FUN_10008850(void *this,uint param_1);
void Ordinal_8(void);
void Ordinal_14(void);
void __fastcall __security_check_cookie(int param_1);
char * __thiscall std::exception::std::exception::what(exception *this);
void __cdecl purecall(void);
void __cdecl operator_delete(void *param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
void * __cdecl operator_new(uint param_1);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_1000899e(void);
int __cdecl _atexit(_func_4879 *param_1);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HMODULE param_3);
void FUN_10008d3e(void);
void entry(HMODULE param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_10008f1b(void);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_10008fa1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __cdecl initterm(void);
void __cdecl initterm_e(void);
void __cdecl _amsg_exit(int param_1);
int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
void __cdecl ___security_init_cookie(void);
void __cdecl _crt_debugger_hook(int param_1);
void __cdecl terminate(void);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl except_handler4_common(void);
BOOL FUN_10009240(HMODULE param_1,int param_2);
void __fastcall FUN_10009280(LARGE_INTEGER *param_1);
void FUN_100092b0(void);
LARGE_INTEGER * __fastcall FUN_100092c0(LARGE_INTEGER *param_1);
void __thiscall FUN_100092e0(void *this,char *param_1);
void __fastcall FUN_10009390(int param_1);
void __thiscall FUN_100093b0(void *this,int param_1);
undefined4 __fastcall FUN_100093e0(undefined4 *param_1);
void FUN_100093f0(void);
void __fastcall FUN_10009400(int param_1);
undefined4 * __fastcall FUN_10009470(undefined4 *param_1);
uint __cdecl FUN_100094f0(_THandle *param_1);
void __thiscall TPACK::Connector::Impl::Dispatcher::~Dispatcher(Dispatcher *this);
Dispatcher * __thiscall TPACK::Connector::Impl::Dispatcher::Dispatcher(Dispatcher *this);
undefined4 * __cdecl FUN_100095c0(int param_1,undefined4 param_2);
void __thiscall TPACK::Connector::Impl::Delivery::~Delivery(Delivery *this);
Delivery * __thiscall TPACK::Connector::Impl::Delivery::Delivery(Delivery *this);
undefined4 * __cdecl FUN_10009650(int param_1,undefined4 param_2);
void FUN_100096a0(undefined4 param_1,_THandle *param_2,int param_3);
void FUN_10009710(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 __fastcall FUN_10009740(int param_1);
void FUN_100097b0(undefined4 param_1,_THandle *param_2,int param_3);
undefined4 __thiscall TPACK::Connector::Impl::TCPSocket::vfunction4(TCPSocket *this,_THandle *param_1);
undefined4 __thiscall TPACK::Connector::Impl::TCPSocket::vfunction3(TCPSocket *this);
void __thiscall TPACK::Connector::Impl::TCPSocket::vfunction2(TCPSocket *this,char *param_1,char *param_2);
void __thiscall TPACK::Connector::Impl::TCPSocket::~TCPSocket(TCPSocket *this);
TCPSocket * __thiscall TPACK::Connector::Impl::TCPSocket::TCPSocket(TCPSocket *this,undefined4 param_1);
void __thiscall TPACK::Connector::Impl::Socket::~Socket(Socket *this);
Socket * __thiscall TPACK::Connector::Impl::Socket::Socket(Socket *this);
undefined4 * FUN_10009d40(int param_1,undefined4 param_2);
undefined4 Catch_All@10009dcd(void);
undefined4 FUN_10009dda(void);
bool FUN_10009e00(int param_1,uint param_2);
uint __thiscall FUN_10009eb0(void *this,int param_1);
void __fastcall FUN_1000a140(int *param_1);
void __thiscall FUN_1000a2e0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
undefined1 __thiscall FUN_1000a4a0(void *this,undefined4 *param_1);
bool __thiscall FUN_1000a6b0(void *this,undefined4 *param_1,char *param_2,undefined4 param_3);
void * __fastcall FUN_1000a940(void *param_1);
void __fastcall FUN_1000a9d0(int *param_1);
void FUN_1000aa50(void);
void TPACK::Environment::SetGameID(_Handle *param_1,char *param_2);
void TPACK::Environment::SetTimeout(_Handle *param_1,int param_2);
void TPACK::Environment::DestroyHandle(_Handle *param_1);
_Handle * TPACK::Environment::CreateHandle(void);
void __thiscall TPACK::Connector::Impl::XDRDispatcher::vfunction3(XDRDispatcher *this);
void __thiscall TPACK::Connector::Impl::XDRDispatcher::~XDRDispatcher(XDRDispatcher *this);
XDRDispatcher * __thiscall TPACK::Connector::Impl::XDRDispatcher::XDRDispatcher(XDRDispatcher *this,undefined4 param_1);
void __thiscall TPACK::Connector::Impl::XDRDispatcher::vfunction2(XDRDispatcher *this,_THandle *param_1);
void __thiscall TPACK::Connector::Impl::XDRDelivery::~XDRDelivery(XDRDelivery *this);
XDRDelivery * __thiscall TPACK::Connector::Impl::XDRDelivery::XDRDelivery(XDRDelivery *this,undefined4 param_1);
uint __thiscall TPACK::Connector::Impl::XDRDelivery::vfunction5(XDRDelivery *this);
void __thiscall TPACK::Connector::Impl::XDRDelivery::vfunction4(XDRDelivery *this,char *param_1,undefined4 param_2,char *param_3,char *param_4);
void __thiscall TPACK::Connector::Impl::XDRDelivery::vfunction3(XDRDelivery *this,char *param_1,undefined4 param_2,char *param_3,char *param_4);
void __thiscall TPACK::Connector::Impl::XDRDelivery::vfunction2(XDRDelivery *this,char *param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5);
void __fastcall FUN_1000b280(int param_1);
void __fastcall FUN_1000b2b0(void *param_1);
void __fastcall FUN_1000b2e0(void *param_1);
void __fastcall FUN_1000b300(int param_1);
void __thiscall FUN_1000b480(void *this,void *param_1,ushort param_2);
undefined4 * __thiscall FUN_1000b570(void *this,undefined4 param_1);
void __thiscall Concurrency::details::SchedulingNode::~SchedulingNode(SchedulingNode *this);
void FUN_1000b670(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_1000b6b0(void *this,int param_1,int *param_2);
void __thiscall FUN_1000b990(void *this,int param_1,int *param_2,undefined4 *param_3);
uint __thiscall FUN_1000bc80(void *this,int param_1,int param_2);
void TPACK::Connector::Disconnect(_Handle *param_1);
bool TPACK::Connector::Connect(_Handle *param_1,char *param_2,ushort param_3);
_Handle * TPACK::Connector::CreateHandle(_Handle *param_1);
undefined4 Catch_All@1000bf4f(void);
undefined4 FUN_1000bf5c(void);
void TPACK::Connector::DestroyHandle(_Handle *param_1);
bool TPACK::Connector::LogoutTPack(_Handle *param_1,char *param_2,int *param_3);
bool TPACK::Connector::LoginTPack(_Handle *param_1,char *param_2,int *param_3,__int64 *param_4);
bool TPACK::Connector::AuthSession(_Handle *param_1,char *param_2,char *param_3);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void Unwind@1000c180(void);
void Unwind@1000c1b5(void);
void Unwind@1000c1dc(void);
void Unwind@1000c1ff(void);
void Unwind@1000c20a(void);
void Unwind@1000c213(void);
void Unwind@1000c21b(void);
void Unwind@1000c226(void);
void Unwind@1000c232(void);
void Unwind@1000c25b(void);
void Unwind@1000c27e(void);
void Unwind@1000c2a1(void);
void Unwind@1000c2c4(void);
void Unwind@1000c2e7(void);
void Unwind@1000c30a(void);
void Unwind@1000c312(void);
void Unwind@1000c335(void);
void Unwind@1000c33d(void);
void Unwind@1000c349(void);
void Unwind@1000c355(void);
void Unwind@1000c361(void);
void Unwind@1000c36d(void);
void Unwind@1000c394(void);
void Unwind@1000c39c(void);
void Unwind@1000c3a8(void);
void Unwind@1000c3b4(void);
void Unwind@1000c3c0(void);
void Unwind@1000c3cc(void);
void Unwind@1000c3f3(void);
void Unwind@1000c419(void);
void Unwind@1000c422(void);
void Unwind@1000c42a(void);
void Unwind@1000c432(void);
void Unwind@1000c45f(void);
void Unwind@1000c467(void);
void Unwind@1000c46f(void);
void Unwind@1000c477(void);
void Unwind@1000c483(void);
void Unwind@1000c4a9(void);
void Unwind@1000c4b1(void);
void Unwind@1000c4bc(void);
void Unwind@1000c4c8(void);
void Unwind@1000c4d0(void);
void Unwind@1000c4d8(void);
void Unwind@1000c4fe(void);
void Unwind@1000c50a(void);
void Unwind@1000c516(void);
void Unwind@1000c53c(void);
void Unwind@1000c562(void);
void Unwind@1000c588(void);
void Unwind@1000c594(void);
void Unwind@1000c5bb(void);
void Unwind@1000c5ee(void);
void Unwind@1000c621(void);
void Unwind@1000c654(void);
void Unwind@1000c660(void);
void Unwind@1000c66c(void);
void Unwind@1000c692(void);
void Unwind@1000c6b8(void);
void Unwind@1000c6de(void);
void Unwind@1000c6e6(void);
void Unwind@1000c719(void);
void Unwind@1000c721(void);
void Unwind@1000c754(void);
void Unwind@1000c777(void);
void Unwind@1000c782(void);
void Unwind@1000c78d(void);
void Unwind@1000c798(void);
void Unwind@1000c7a3(void);
void Unwind@1000c7ae(void);
void Unwind@1000c7b9(void);
void Unwind@1000c7c4(void);
void Unwind@1000c800(void);
void Unwind@1000c80c(void);
void Unwind@1000c840(void);
void Unwind@1000c870(void);
void Unwind@1000c878(void);
void Unwind@1000c884(void);
void Unwind@1000c8d0(void);
void Unwind@1000c900(void);
void Unwind@1000c950(void);
void Unwind@1000c958(void);
void Unwind@1000c964(void);
void Unwind@1000c990(void);
void Unwind@1000c9c0(void);
void Unwind@1000c9f0(void);
void Unwind@1000ca20(void);
void Unwind@1000ca50(void);
void Unwind@1000ca80(void);
void Unwind@1000cab0(void);
void Unwind@1000cae0(void);
void Unwind@1000cae8(void);
void Unwind@1000cb10(void);
void Unwind@1000cb40(void);
void Unwind@1000cb70(void);
void Unwind@1000cba0(void);
void Unwind@1000cbd0(void);
void Unwind@1000cbd8(void);
void Unwind@1000cc00(void);
void Unwind@1000cc08(void);
void FUN_1000cc30(void);
void FUN_1000cc60(void);
void FUN_1000cc90(void);
void FUN_1000cca0(void);

