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

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
};


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID CLSID;

typedef CLSID *LPCLSID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID IID;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef ulong DWORD;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef ushort WORD;

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

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef ulong ULONG_PTR;

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

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

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

typedef wchar_t WCHAR;

typedef CHAR *LPCSTR;

typedef LONG *PLONG;

typedef CHAR *LPCH;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef WCHAR *LPWSTR;

typedef WCHAR *LPWCH;

typedef WCHAR *LPCWSTR;

typedef DWORD LCID;

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

typedef ULONG_PTR SIZE_T;

typedef uint UINT_PTR;

typedef long LONG_PTR;

typedef DWORD ULONG;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPCOLESTR;

typedef int (*FARPROC)(void);

typedef UINT_PTR WPARAM;

typedef WORD *LPWORD;

typedef DWORD *LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef LONG_PTR LPARAM;

typedef int BOOL;

typedef BOOL *LPBOOL;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

typedef void *LPVOID;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

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

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
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

typedef char *va_list;

typedef uint size_t;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

typedef struct IUnknown *LPUNKNOWN;




void FUN_10001010(void);
void FUN_10001020(void);
void __fastcall FUN_10001040(undefined4 *param_1);
undefined4 * __thiscall FUN_10001050(void *this,byte param_1);
int FUN_100010d0(int param_1);
undefined4 FUN_10001360(undefined4 param_1,int param_2);
undefined4 FUN_100014a0(void);
void __fastcall FUN_10001740(int param_1);
bool __fastcall FUN_10001760(int param_1);
void __fastcall FUN_100017d0(int *param_1);
int __thiscall FUN_100017e0(void *this,int *param_1);
int __thiscall FUN_10001860(void *this,int *param_1);
void __fastcall FUN_100018e0(undefined4 *param_1);
void __fastcall FUN_10001930(undefined4 param_1);
undefined4 FUN_10001950(undefined4 param_1,uint param_2);
void __cdecl SetNotiHwnd(undefined4 param_1);
void ClearMsgrSink(void);
undefined4 __cdecl GetBuddyListData(undefined4 param_1);
undefined4 Catch@10001a56(void);
undefined4 HaniMgrSink(void);
undefined4 IsMsgLogin(void);
undefined4 Catch@10001ca8(void);
HRESULT __thiscall FUN_10001d10(void *this,IID *param_1,LPUNKNOWN param_2,uint param_3);
int __fastcall FUN_10001da0(int param_1);
void FUN_10001e70(undefined4 param_1);
void FUN_10001e7e(undefined4 param_1,int *param_2,undefined4 param_3);
void FUN_10001ee9(void);
void FUN_10001efb(void);
LPSTR FUN_10001f1d(LPCWSTR param_1);
undefined2 * __thiscall FUN_10001f91(void *this,int param_1,short param_2);
undefined4 * FUN_10001fed(undefined4 param_1,int *param_2);
undefined4 * __thiscall FUN_10002011(void *this,undefined4 param_1,int *param_2,char param_3);
undefined4 * __thiscall FUN_10002043(void *this,byte param_1);
void __fastcall FUN_1000208c(undefined4 *param_1);
undefined4 __cdecl FUN_100020b2(undefined4 param_1);
int __cdecl FUN_10002130(undefined4 param_1);
void __cdecl FUN_10002171(undefined *param_1);
void FUN_1000217c(undefined *UNRECOVERED_JUMPTABLE);
void FUN_100021b0(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE);
void FUN_100021b7(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE);
void FUN_100021be(PVOID param_1,PEXCEPTION_RECORD param_2);
undefined4 __cdecl FUN_1000220d(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4);
undefined4 __cdecl FUN_10002243(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
void __cdecl FUN_10002297(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3);
undefined4 __cdecl FUN_100022bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 __cdecl FUN_10002372(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3);
int __cdecl FUN_100023e7(uint param_1,int param_2,int param_3,uint *param_4,uint *param_5);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,int param_2);
int __cdecl __abnormal_termination(void);
void __fastcall __NLG_Notify1(undefined4 param_1);
void FUN_1000253a(void);
void * __cdecl operator_new(uint param_1);
void __cdecl FUN_10002560(undefined *param_1);
void FUN_100025ca(void);
void FUN_10002622(void);
void * __cdecl _malloc(size_t _Size);
void * __cdecl __nh_malloc(size_t _Size,int _NhFlag);
void __cdecl FUN_10002687(uint *param_1);
void FUN_100026ee(void);
void FUN_1000274d(void);
void __cdecl FUN_10002790(undefined1 param_1);
void __fastcall FUN_100027bf(undefined4 *param_1);
undefined4 * __thiscall FUN_100027e8(void *this,byte param_1);
int __cdecl FUN_10002804(undefined1 *param_1,byte *param_2,undefined4 param_3);
undefined4 FUN_10002856(undefined4 param_1,int param_2);
int entry(undefined4 param_1,uint param_2,undefined4 param_3);
void __cdecl __amsg_exit(int param_1);
int __cdecl FUN_100029ff(short *param_1);
void __CxxThrowException@8(undefined4 param_1,undefined4 param_2);
void FUN_10002a56(void);
void __cdecl __exit(int _Code);
void FUN_10002a94(void);
void __cdecl FUN_10002aa3(UINT param_1,int param_2,int param_3);
void FUN_10002b48(void);
void FUN_10002b51(void);
void __cdecl FUN_10002b5a(undefined4 *param_1,undefined4 *param_2);
byte * __cdecl FUN_10002b74(byte *param_1,uint *param_2);
void FUN_10002cff(void);
void FUN_10002e4d(void);
SIZE_T __cdecl FUN_10002ea3(undefined *param_1);
void FUN_10002f0d(void);
void FUN_10002f88(void);
undefined4 __cdecl FUN_10002f91(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,int param_6,PVOID param_7,char param_8);
void __cdecl FUN_1000302c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,uint param_5,char param_6,int param_7,PVOID param_8);
void __cdecl FUN_100031df(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,uint param_5,int param_6,int param_7,PVOID param_8);
undefined4 __cdecl FUN_10003289(byte *param_1,byte *param_2,uint *param_3);
void __cdecl FUN_100032e6(int param_1,undefined4 param_2,int param_3,int param_4);
undefined4 __cdecl FUN_10003384(undefined4 *param_1);
void __cdecl FUN_1000339a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10);
undefined4 __cdecl FUN_10003415(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,int param_6,int param_7);
void FUN_100034e2(void);
undefined4 __cdecl FUN_10003530(int *param_1);
void __cdecl FUN_1000355a(int param_1,int param_2,byte *param_3,byte *param_4);
void __cdecl FUN_1000371e(int param_1);
int __cdecl FUN_10003785(int param_1,int *param_2);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 FUN_100037fc(void);
void FUN_10003850(void);
void __cdecl FUN_1000386e(int param_1);
DWORD * FUN_10003881(void);
void __cdecl FUN_100038e8(undefined *param_1);
void FUN_10003988(void);
void FUN_100039e9(void);
void __cdecl FUN_10003a3f(undefined4 *param_1);
int FUN_10003a6c(void);
undefined4 __cdecl FUN_10003bb4(int param_1);
void FUN_10003c11(void);
undefined4 __cdecl FUN_10003cb9(undefined4 param_1);
uint __cdecl FUN_10003d01(int param_1);
void __cdecl FUN_10003d2c(uint *param_1,int param_2);
int * __cdecl FUN_10004055(uint *param_1);
undefined4 * FUN_1000435e(void);
int __cdecl FUN_1000440f(int param_1);
undefined4 __cdecl FUN_1000450a(uint *param_1,int param_2,int param_3);
undefined ** FUN_10004800(void);
void __cdecl FUN_10004944(undefined **param_1);
void __cdecl FUN_1000499a(int param_1);
int __cdecl FUN_10004a5c(undefined *param_1,undefined4 *param_2,uint *param_3);
void __cdecl FUN_10004ab3(int param_1,int param_2,byte *param_3);
int * __cdecl FUN_10004af8(uint param_1);
int __cdecl FUN_10004d00(int *param_1,uint param_2,uint param_3);
undefined4 __cdecl FUN_10004e24(int param_1,int *param_2,byte *param_3,uint param_4);
void FUN_10004ecd(void);
void FUN_10004ef6(void);
void __cdecl FUN_10004f62(int param_1);
void __cdecl FUN_10004fc3(int param_1);
void FUN_1000509d(int param_1);
undefined4 __cdecl FUN_100050b8(undefined4 param_1);
int __cdecl _strcmp(char *_Str1,char *_Str2);
uint __cdecl FUN_10005164(uint param_1,int *param_2);
int __cdecl FUN_1000527c(int *param_1,byte *param_2,undefined4 *param_3);
void __cdecl FUN_10005a1a(uint param_1,int *param_2,int *param_3);
void __cdecl FUN_10005a4f(uint param_1,int param_2,int *param_3,int *param_4);
void __cdecl FUN_10005a80(char *param_1,int param_2,int *param_3,int *param_4);
undefined4 __cdecl FUN_10005ab8(int *param_1);
undefined8 __cdecl FUN_10005ac5(int *param_1);
undefined4 __cdecl FUN_10005ad5(int *param_1);
void FUN_10005ae3(void);
void FUN_10005c9f(void);
void FUN_10005cf3(void);
void FUN_10005dac(void);
void __cdecl FUN_10005e45(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5);
LPSTR FUN_10005ff9(void);
void FUN_1000612b(void);
void __cdecl FUN_10006164(DWORD param_1);
int FUN_100062b7(int *param_1);
undefined4 * __cdecl FUN_10006320(undefined4 *param_1,undefined4 *param_2,uint param_3);
bool __cdecl FUN_10006655(void *param_1,UINT_PTR param_2);
bool __cdecl FUN_10006671(LPVOID param_1,UINT_PTR param_2);
bool __cdecl FUN_1000668d(FARPROC param_1);
undefined4 * __cdecl FUN_100066b0(undefined4 *param_1,undefined4 *param_2,uint param_3);
int * __cdecl FUN_100069e5(int param_1,int param_2);
void FUN_10006a7e(void);
void FUN_10006b07(void);
void FUN_10006b22(void);
void __thiscall FUN_10006b39(void *this,byte *param_1,int *param_2,void *param_3);
void * __thiscall FUN_10006b50(void *this,byte *param_1,int *param_2,void *param_3,uint param_4);
char * __cdecl _strchr(char *_Str,int _Val);
char * __cdecl _strstr(char *_Str,char *_SubStr);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
DWORD __cdecl FUN_10006f48(uint param_1,LONG param_2,DWORD param_3);
DWORD __cdecl FUN_10006fad(uint param_1,LONG param_2,DWORD param_3);
int __cdecl FUN_10007020(uint param_1,char *param_2,DWORD param_3);
int __cdecl FUN_10007085(DWORD param_1,char *param_2,DWORD param_3);
void __cdecl FUN_10007210(undefined4 *param_1);
byte __cdecl FUN_10007254(uint param_1);
void __cdecl FUN_10007339(uint param_1);
void __cdecl FUN_10007368(int param_1,int param_2);
void __cdecl FUN_1000738b(uint param_1);
void __cdecl FUN_100073ba(int param_1,int param_2);
size_t __cdecl _strlen(char *_Str);
int __cdecl FUN_1000745b(LPSTR param_1,WCHAR param_2);
int __cdecl FUN_100074b4(LPSTR param_1,WCHAR param_2);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4);
uint * __cdecl FUN_10007610(uint *param_1,uint *param_2);
uint * __cdecl FUN_10007620(uint *param_1,uint *param_2);
undefined4 __cdecl FUN_10007700(int param_1);
int __cdecl FUN_100078ad(int param_1);
undefined4 __cdecl FUN_100078f7(int param_1);
void FUN_1000792a(void);
void FUN_10007953(void);
void FUN_10007ad8(void);
int __cdecl FUN_10007af4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);
undefined4 __cdecl FUN_10007c7e(DWORD *param_1);
uint __cdecl FUN_10007e00(int param_1,uint param_2);
void __cdecl FUN_10007e3d(uint param_1);
DWORD * FUN_10007eb0(void);
DWORD * FUN_10007eb9(void);
uint __cdecl FUN_10007ec2(uint param_1);
uint __thiscall FUN_10007f31(void *this,uint param_1);
uint __thiscall FUN_10007ffd(void *this,int param_1,uint param_2);
undefined4 __cdecl FUN_10008072(uint param_1);
undefined4 __cdecl FUN_100080f1(uint param_1);
void __cdecl FUN_10008133(uint param_1);
void __cdecl FUN_10008192(uint param_1);
int __cdecl FUN_10008235(int *param_1);
undefined4 __cdecl FUN_10008263(int *param_1);
int __cdecl FUN_100082c8(int param_1);
void __cdecl __fptrap(void);
int __cdecl FUN_10008375(LCID param_1,DWORD param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,UINT param_7,int param_8);
int __cdecl FUN_10008599(char *param_1,int param_2);
BOOL __cdecl FUN_100085c4(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,int param_7);
undefined4 __cdecl FUN_1000870d(FILE *param_1);
undefined4 __cdecl __fclose_lk(FILE *param_1);
undefined4 __cdecl FUN_1000878a(uint param_1);
int __cdecl FUN_10008820(byte *param_1,byte *param_2);
byte * __cdecl FUN_10008860(byte *param_1,byte *param_2);
undefined4 __cdecl FUN_1000889a(uint param_1);
undefined4 __cdecl FUN_100088f7(uint param_1);
void __cdecl __freebuf(FILE *_File);
uint __thiscall FUN_100089b0(void *this,byte *param_1,byte *param_2);
undefined4 __cdecl FUN_10008a80(byte *param_1,char *param_2,void *param_3);
uint __thiscall FUN_10008b81(void *this,uint param_1);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
void Unwind@10008c90(void);
void Unwind@10008c98(void);
void Unwind@10008ca0(void);
void Unwind@10008ca8(void);
void Unwind@10008cc0(void);
void Unwind@10008ccb(void);
void Unwind@10008ce0(void);
void Unwind@10008ce8(void);

