typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
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

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
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

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

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

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct basic_streambuf<char,std::char_traits<char>_> basic_streambuf<char,std::char_traits<char>_>, *Pbasic_streambuf<char,std::char_traits<char>_>;

struct basic_streambuf<char,std::char_traits<char>_> { // PlaceHolder Class Structure
};

typedef struct runtime_error runtime_error, *Pruntime_error;

struct runtime_error { // PlaceHolder Class Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Class Structure
};

typedef struct _Locimp _Locimp, *P_Locimp;

struct _Locimp { // PlaceHolder Class Structure
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef int BOOL;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef BOOL (*LOCALE_ENUMPROCA)(LPSTR);

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void *LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

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

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef BYTE *LPBYTE;

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

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

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

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef PCONTEXT LPCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

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

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

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

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef wchar_t WCHAR;

typedef CHAR *LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef LONG *PLONG;

typedef CHAR *LPCH;

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

typedef uint UINT_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[68];
};

typedef struct _Ctypevec _Ctypevec, *P_Ctypevec;

struct _Ctypevec {
    uint _Page;
    short *_Table;
    int _Delfl;
    wchar_t *_LocaleName;
};

typedef struct tagLC_STRINGS tagLC_STRINGS, *PtagLC_STRINGS;

struct tagLC_STRINGS {
    wchar_t szLanguage[64];
    wchar_t szCountry[64];
    wchar_t szCodePage[16];
    wchar_t szLocaleName[85];
};

typedef struct tagLC_STRINGS *LPLC_STRINGS;

typedef longlong fpos_t;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (*FARPROC)(void);

typedef DWORD *LPDWORD;

typedef WORD *LPWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef DWORD *PDWORD;

typedef BOOL *LPBOOL;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

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

typedef uint uintptr_t;

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct _tiddata *_ptiddata;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct setloc_struct _setloc_struct;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct lconv lconv, *Plconv;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char *_token;
    wchar_t *_wtoken;
    uchar *_mtoken;
    char *_errmsg;
    wchar_t *_werrmsg;
    char *_namebuf0;
    wchar_t *_wnamebuf0;
    char *_namebuf1;
    wchar_t *_wnamebuf1;
    char *_asctimebuf;
    wchar_t *_wasctimebuf;
    void *_gmtimebuf;
    char *_cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void *_initaddr;
    void *_initarg;
    void *_pxcptacttab;
    void *_tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void *_terminate;
    void *_unexpected;
    void *_translator;
    void *_purecall;
    void *_curexception;
    void *_curcontext;
    int _ProcessingThrow;
    void *_curexcspec;
    void *_pFrameInfoChain;
    _setloc_struct _setloc_data;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct setloc_struct {
    wchar_t *pchLanguage;
    wchar_t *pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;

typedef struct PMD PMD, *PPMD;

struct PMD { // PlaceHolder Structure
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { // PlaceHolder Structure
};

typedef struct FrameInfo FrameInfo, *PFrameInfo;

struct FrameInfo { // PlaceHolder Structure
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

struct _s_ThrowInfo { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct _Locinfo _Locinfo, *P_Locinfo;

struct _Locinfo { // PlaceHolder Structure
};

typedef struct _Fac_node _Fac_node, *P_Fac_node;

struct _Fac_node { // PlaceHolder Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Structure
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct _Init_locks _Init_locks, *P_Init_locks;

struct _Init_locks { // PlaceHolder Structure
};

typedef struct facet facet, *Pfacet;

struct facet { // PlaceHolder Structure
};

typedef enum event {
} event;

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef struct threadlocaleinfostruct threadlocinfo;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef int intptr_t;

typedef struct localeinfo_struct *_locale_t;




void __fastcall thunk_FUN_67401990(undefined4 *param_1);
uint __thiscall FUN_67401010(void *this,char *param_1,uint param_2,uint param_3);
void __thiscall FUN_674010b0(void *this,char param_1,uint param_2);
int __thiscall FUN_67401110(void *this,uint param_1,uint param_2);
void __fastcall FUN_67401190(int param_1);
void __fastcall FUN_674011b0(int param_1);
void __thiscall FUN_674011e0(void *this,uint param_1);
undefined * Catch@67401253(void);
void __fastcall FUN_6740127c(undefined4 param_1,undefined4 *param_2);
void Catch@674012eb(void);
void __fastcall FUN_67401320(undefined4 *param_1);
undefined4 * __thiscall FUN_674013b0(void *this,byte param_1);
void * __thiscall FUN_674013d0(void *this,void *param_1,uint param_2,uint param_3);
void * __thiscall FUN_674014c0(void *this,uint param_1);
void * __thiscall FUN_67401590(void *this,void *param_1);
undefined4 * __thiscall FUN_674015c0(void *this,void *param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_67401650(void *this,uint param_1);
void * __cdecl FUN_67401680(void *param_1,void *param_2);
void __fastcall FUN_67401780(int param_1);
undefined * Catch@674018e8(void);
void FUN_674018f1(void);
undefined4 FUN_67401970(HMODULE param_1,int param_2);
void __fastcall FUN_67401990(undefined4 *param_1);
undefined4 __fastcall FUN_674019b0(int param_1);
void __fastcall FUN_674019c0(int param_1);
void __fastcall FUN_674019d0(int param_1);
undefined4 * __fastcall FUN_674019e0(undefined4 *param_1);
void __fastcall FUN_67401a10(undefined4 *param_1);
undefined4 * __thiscall FUN_67401a50(void *this,byte param_1);
undefined4 * __thiscall FUN_67401a70(void *this,byte param_1);
undefined4 * __fastcall FUN_67401a90(undefined4 *param_1);
undefined4 * __thiscall FUN_67401ab0(void *this,byte param_1);
undefined4 * __thiscall FUN_67401ad0(void *this,undefined4 *param_1);
void __fastcall FUN_67401af0(undefined4 *param_1);
undefined4 Catch@67401b35(void);
undefined4 * __thiscall FUN_67401b40(void *this,byte param_1);
void __fastcall FUN_67401b60(undefined4 *param_1);
undefined4 __fastcall FUN_67401b90(int param_1);
void __fastcall FUN_67401bc0(int param_1);
undefined1 __fastcall FUN_67401bd0(int param_1);
void FUN_67401be0(undefined4 param_1);
void __fastcall FUN_67401c70(int *param_1);
void __fastcall FUN_67401cb0(DWORD param_1);
uint FUN_67401d10(int *param_1);
void Catch@67401db2(void);
void __fastcall FUN_67401dc0(undefined4 *param_1);
void __thiscall FUN_67401dd0(void *this,char param_1);
undefined4 * __thiscall FUN_67401e20(void *this,byte param_1);
undefined4 __thiscall FUN_67401e40(void *this,int param_1,int *param_2,undefined4 param_3);
undefined4 _SetDiagAssertOptions@4(int param_1);
undefined4 _SetDiagAssertFile@4(undefined4 param_1);
undefined4 _SetDiagOutputFile@4(undefined4 param_1);
void __cdecl DiagOutputA(char *param_1,char param_2);
void __cdecl DiagOutputW(LPCWSTR param_1,char param_2);
void _DiagOutputVB@4(char *param_1);
LPSTR __cdecl FUN_67402180(LPSTR param_1);
void __cdecl FUN_67402340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_67402360(void *param_1,int param_2,int param_3);
void * FUN_67402390(void *param_1,int param_2,void *param_3);
undefined4 * FUN_674023c0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __fastcall FUN_67402400(int param_1);
void * __thiscall FUN_67402430(void *this,undefined4 *param_1,uint param_2);
void __thiscall FUN_67402520(void *this,char *param_1);
void * __thiscall FUN_67402550(void *this,char *param_1);
exception * __thiscall FUN_67402590(void *this,void *param_1);
exception * __thiscall FUN_674025f0(void *this,byte param_1);
void __fastcall FUN_67402610(exception *param_1);
exception * __thiscall FUN_67402650(void *this,exception *param_1);
void FUN_674026c0(void);
void __thiscall FUN_67402750(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3);
undefined4 _AddDiagAssertModule@4(undefined4 param_1);
void __cdecl FUN_67402990(LPSTR param_1,LPSTR param_2);
undefined4 FUN_67402bd0(int param_1,undefined4 param_2,int param_3);
void _DiagAssertA@16(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void _DiagAssertW@16(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void _DiagAssertVB@12(int param_1,int param_2,undefined4 param_3);
void __cdecl XLogFatalA(char *param_1,char *param_2,char param_3);
void __cdecl XLogFatalW(undefined4 param_1,wchar_t *param_2,char param_3);
void __cdecl XLogErrorA(char *param_1,char *param_2,char param_3);
void __cdecl XLogErrorW(undefined4 param_1,wchar_t *param_2,char param_3);
void __cdecl XLogWarningA(char *param_1,char *param_2,char param_3);
void __cdecl XLogWarningW(undefined4 param_1,wchar_t *param_2,char param_3);
void __cdecl XLogInfoA(char *param_1,char *param_2,char param_3);
void __cdecl XLogInfoW(undefined4 param_1,wchar_t *param_2,char param_3);
void __cdecl XLogTraceA(char *param_1,char *param_2,char param_3);
void __cdecl XLogTraceW(undefined4 param_1,wchar_t *param_2,char param_3);
void __cdecl XLogIsEnabledA(char *param_1,int param_2);
void __cdecl XLogIsEnabledW(undefined4 param_1,int param_2);
void FUN_67403440(void);
void __fastcall FUN_67403450(int param_1);
uint __fastcall FUN_67403480(uint param_1);
void __fastcall FUN_674034c0(uint *param_1);
void __fastcall FUN_67403500(undefined4 *param_1);
int * __thiscall FUN_67403530(void *this,int *param_1);
ios_base * __thiscall FUN_67403570(void *this,byte param_1);
void __fastcall FUN_67403590(undefined4 *param_1);
void __fastcall FUN_674035b0(int param_1);
void __fastcall FUN_674035c0(ios_base *param_1);
ios_base * __thiscall FUN_674035d0(void *this,byte param_1);
int __fastcall FUN_674035f0(int param_1);
int * __thiscall FUN_67403620(void *this,int *param_1);
void __fastcall FUN_67403660(int *param_1);
uint __thiscall FUN_67403680(void *this,uint param_1,uint param_2,byte *param_3,uint param_4);
undefined4 * __thiscall FUN_67403700(void *this,int param_1,char param_2,undefined4 param_3);
byte * __thiscall FUN_67403800(void *this,byte *param_1,byte *param_2);
byte * __thiscall FUN_67403850(void *this,byte *param_1,byte *param_2);
undefined4 __cdecl FUN_67403900(int *param_1);
undefined4 * __thiscall FUN_67403970(void *this,byte param_1);
void __fastcall FUN_67403990(undefined4 *param_1);
int * __fastcall FUN_674039d0(int *param_1);
void __fastcall FUN_67403a30(undefined4 *param_1);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::std::basic_streambuf<char,std::char_traits<char>_>::uflow(basic_streambuf<char,std::char_traits<char>_> *this);
char * __thiscall std::basic_streambuf<char,std::char_traits<char>_>::_Gninc(basic_streambuf<char,std::char_traits<char>_> *this);
undefined4 * __thiscall FUN_67403d00(void *this,byte param_1);
undefined4 * __thiscall FUN_67403d20(void *this,int *param_1);
void __fastcall FUN_67403db0(int param_1);
facet * __cdecl FUN_67403e10(locale *param_1);
undefined4 * __thiscall FUN_67403f20(void *this,undefined4 param_1);
undefined4 * __thiscall FUN_67403fe0(void *this,byte param_1);
int __thiscall FUN_67404000(void *this,int param_1,char *param_2);
int __thiscall FUN_67404050(void *this,int param_1,wchar_t *param_2);
void __thiscall FUN_67404100(void *this,int *param_1);
void __fastcall FUN_67404170(int *param_1);
undefined4 * __fastcall FUN_674041e0(undefined4 *param_1);
void __thiscall FUN_67404250(void *this,undefined4 param_1);
int * FUN_67404300(int *param_1,char *param_2);
undefined * Catch@6740448f(void);
void FUN_674044bb(void);
bool __cdecl FUN_67404510(void *param_1,int param_2);
undefined4 __cdecl FUN_67404540(int *param_1);
undefined4 * __thiscall FUN_674045b0(void *this,int param_1);
undefined4 __fastcall FUN_67404660(int *param_1);
uint __thiscall FUN_67404690(void *this,uint param_1);
undefined4 __fastcall FUN_67404730(int param_1);
uint __fastcall FUN_67404740(int *param_1);
void __thiscall FUN_67404790(void *this,undefined4 param_1,char param_2);
facet * __cdecl FUN_674047f0(locale *param_1);
void FUN_67404900(int param_1);
int * __thiscall FUN_67404950(void *this,undefined4 param_1,char param_2,int param_3);
void * __thiscall FUN_674049d0(void *this,char *param_1,int param_2,uint param_3);
void * __thiscall FUN_67404b00(void *this,int param_1,uint param_2,uint param_3);
void __cdecl FUN_67404bf0(int param_1,int param_2);
uint __fastcall FUN_67404c30(int param_1);
void * __thiscall FUN_67404df0(void *this,undefined4 *param_1,uint param_2);
undefined4 __fastcall FUN_67404f00(int *param_1);
char __cdecl FUN_67405050(void *param_1);
int __thiscall FUN_67405210(void *this,int param_1);
void __thiscall FUN_67405550(void *this,undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6);
int * __fastcall FUN_67405660(int *param_1);
void FUN_674056c0(int param_1,int param_2);
void FUN_674056e0(void);
void __cdecl FUN_67405750(void *param_1,void *param_2,void *param_3);
void * __cdecl FUN_67405780(void *param_1,void *param_2,void *param_3);
void * __cdecl FUN_674057c0(void *param_1,void *param_2,void *param_3);
void Catch@67405826(void);
bool __fastcall FUN_67405860(int param_1);
undefined4 __cdecl FUN_67405bd0(int param_1);
void __fastcall FUN_67405de0(int *param_1);
int * __thiscall FUN_67405e70(void *this,byte param_1);
void * __cdecl FUN_67405e90(void *param_1,void *param_2,char *param_3);
void __cdecl FUN_67405f40(void *param_1,int param_2,void *param_3);
void Catch@67405fa6(void);
void __fastcall FUN_67405fe0(undefined4 *param_1);
undefined4 Catch@674061ec(void);
void * __cdecl FUN_67406210(void *param_1,int param_2);
void __fastcall FUN_67406340(int param_1);
int * __thiscall FUN_67406380(void *this,int param_1);
void __fastcall FUN_67406480(int param_1);
void __fastcall FUN_674064e0(int param_1);
void __fastcall FUN_67406500(int param_1);
void __thiscall FUN_67406680(void *this,int param_1,char *param_2,char *param_3);
void __thiscall FUN_67406a00(void *this,int param_1,wchar_t *param_2,wchar_t *param_3);
void * FUN_67406db0(void *param_1,int param_2,void *param_3);
void __thiscall FUN_67406de0(void *this,void *param_1,uint param_2,void *param_3);
void Catch@67406fd1(void);
void Catch@6740708d(void);
void __thiscall FUN_67407120(void *this,int *param_1,void *param_2,void *param_3);
void __thiscall FUN_674071c0(void *this,void *param_1);
undefined4 * __fastcall FUN_67407250(undefined4 *param_1);
void FUN_67407690(void);
int FUN_67407760(void);
void * __cdecl operator_new(uint param_1);
exception * __thiscall FUN_67407798(void *this,byte param_1);
void __fastcall FUN_674077b4(exception *param_1);
void FUN_674077bf(void);
void FUN_67407817(void);
uint __cdecl __Tolower_lk(uint param_1,undefined4 *param_2);
_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__);
void FUN_674079ee(void);
int __cdecl __Tolower(int param_1,_Ctypevec *param_2);
void FUN_67407a9a(void);
_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this);
_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1);
void __fastcall FUN_67407b32(int *param_1);
void __thiscall std::_Fac_node::~_Fac_node(_Fac_node *this);
void __cdecl __Deletegloballocale(uint *param_1);
void __cdecl tidy_global(void);
void __cdecl __Setgloballocale(undefined4 param_1);
facet * __thiscall std::locale::_Getfacet(locale *this,uint param_1);
void __Fac_tidy(void);
void __thiscall std::locale::facet::_Register(facet *this);
void __thiscall std::locale::_Locimp::~_Locimp(_Locimp *this);
void __thiscall std::_Locinfo::~_Locinfo(_Locinfo *this);
void * __thiscall std::locale::_Locimp::std::locale::_Locimp::`scalar_deleting_destructor'(_Locimp *this,uint param_1);
undefined4 * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1);
_Lockit * __thiscall std::_Locinfo::_Locinfo(_Locinfo *this,char *param_1);
_Locimp * __cdecl std::locale::_Init(void);
locale * __thiscall std::locale::locale(locale *this);
void __thiscall std::ios_base::_Callfns(ios_base *this,event param_1);
void __thiscall std::ios_base::_Addstd(ios_base *this);
void __thiscall std::ios_base::_Tidy(ios_base *this);
void __thiscall std::ios_base::~ios_base(ios_base *this);
void __fastcall FUN_67407ff5(exception *param_1);
exception * __thiscall FUN_67408020(void *this,byte param_1);
exception * __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
exception * __thiscall FUN_67408078(void *this,byte param_1);
void __fastcall FUN_67408094(exception *param_1);
void __thiscall std::ios_base::clear(ios_base *this,int param_1,bool param_2);
exception * FUN_67408165(void);
void __thiscall std::ios_base::_Init(ios_base *this);
undefined4 * __fastcall FUN_67408206(undefined4 *param_1);
void __fastcall FUN_6740821e(undefined4 *param_1);
void __fastcall FUN_67408233(undefined4 *param_1);
void __fastcall FUN_6740823c(undefined4 *param_1);
uint __cdecl __Toupper_lk(uint param_1,undefined4 *param_2);
int __cdecl __Toupper(int param_1,_Ctypevec *param_2);
void FUN_674083b4(void);
bool thunk_FUN_6740ba67(void);
_iobuf * __cdecl std::_Fiopen(char *param_1,int param_2,int param_3);
void __fastcall FUN_674084cd(exception *param_1);
exception * __thiscall FUN_674084d8(void *this,byte param_1);
void FUN_6740850c(void);
void __cdecl FUN_6740856d(LPCRITICAL_SECTION param_1);
void __cdecl FUN_67408578(LPCRITICAL_SECTION param_1);
void __cdecl FUN_67408583(LPCRITICAL_SECTION param_1);
void __cdecl FUN_6740858e(LPCRITICAL_SECTION param_1);
void __cdecl __Atexit(_func_9331 *param_1);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
void __cdecl _free(void *_Memory);
void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2);
void FID_conflict:_CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4);
void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2);
undefined4 __cdecl ___CxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4);
int __cdecl _CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7);
_EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4);
_s_TryBlockMapEntry * __cdecl _GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5);
FrameInfo * __cdecl _CreateFrameInfo(FrameInfo *param_1,void *param_2);
int __cdecl IsExceptionObjectToBeDestroyed(void *param_1);
void __cdecl _FindAndUnlinkFrame(FrameInfo *param_1);
void * __cdecl _CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,ulong param_5);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,int param_2);
int __cdecl __abnormal_termination(void);
void __fastcall __NLG_Notify1(undefined4 param_1);
void FUN_67408dd6(void);
void __CxxThrowException@8(undefined4 param_1,undefined4 param_2);
void __cdecl report_failure(void);
void __fastcall __security_check_cookie(uintptr_t _StackCookie);
void FUN_67408f6a(int param_1);
void __cdecl __endthreadex(uint _Retval);
uintptr_t __cdecl __beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,uint _InitFlag,uint *_ThrdAddr);
uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch);
uchar * __cdecl __mbsstr(uchar *_Str,uchar *_Substr);
int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args);
void __thiscall exception::exception(exception *this);
exception * __thiscall exception::exception(exception *this,char **param_1);
exception * __thiscall exception::exception(exception *this,exception *param_1);
void __thiscall exception::~exception(exception *this);
exception * __thiscall FUN_67409304(void *this,char *param_1);
void __fastcall FUN_67409335(exception *param_1);
exception * __thiscall FUN_67409340(void *this,byte param_1);
exception * __thiscall FUN_6740935c(void *this,byte param_1);
void __thiscall type_info::~type_info(type_info *this);
void FUN_674093b5(void);
void * __thiscall type_info::type_info::`scalar_deleting_destructor'(type_info *this,uint param_1);
void __cdecl __chkstk(undefined1 param_1);
void __onexit_lk(void);
undefined4 ___onexitinit(void);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_674094f7(void);
int __cdecl _atexit(_func_4879 *param_1);
int __cdecl FID_conflict:vswprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args);
void __cdecl _free(void *_Memory);
void __cdecl _free(void *_Memory);
void FUN_674095d6(void);
int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...);
int __cdecl _setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size);
void FUN_6740971d(void);
int __cdecl __flush(FILE *_File);
int __cdecl __fflush_lk(FILE *param_1);
int __cdecl flsall(int param_1);
void FUN_67409852(void);
void FUN_6740987e(void);
int __cdecl _fflush(FILE *_File);
void FUN_674098cd(void);
uint __cdecl __ungetc_lk(uint param_1,FILE *param_2);
int __cdecl _ungetc(int _Ch,FILE *_File);
void FUN_67409987(void);
int __cdecl FID_conflict:_getc(FILE *_File);
void FUN_674099d9(void);
uint __cdecl __fwrite_lk(char *param_1,uint param_2,uint param_3,FILE *param_4);
size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File);
void FUN_67409b2a(void);
int __cdecl FID_conflict:_fputc(int _Ch,FILE *_File);
void FUN_67409b84(void);
int __cdecl _fgetpos(FILE *_File,fpos_t *_Pos);
int __cdecl __fseek_lk(FILE *param_1,int param_2,int param_3);
int __cdecl _fseek(FILE *_File,long _Offset,int _Origin);
void FUN_67409c7c(void);
int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos);
int __cdecl __fclose_lk(FILE *param_1);
int __cdecl _fclose(FILE *_File);
void FUN_67409d33(void);
undefined4 __CRT_INIT@12(undefined4 param_1,int param_2);
int entry(HMODULE param_1,int param_2,undefined4 param_3);
void __cdecl __amsg_exit(int param_1);
void * __cdecl __heap_alloc(size_t _Size);
void FUN_6740a045(void);
void * __cdecl __nh_malloc(size_t _Size,int _NhFlag);
void * __cdecl _malloc(size_t _Size);
int __cdecl __callnewh(size_t _Size);
size_t __cdecl _strlen(char *_Str);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
void FUN_6740a480(void);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
undefined * FUN_6740a85b(void);
int __cdecl _isupper(int _C);
int __cdecl _islower(int _C);
int __cdecl _isdigit(int _C);
int __cdecl ___init_ctype(threadlocinfo *_LocInfo);
UINT __cdecl ____lc_codepage_func(void);
uint * ____lc_handle_func(void);
int __cdecl __mtinitlocks(void);
void __cdecl __mtdeletelocks(void);
void __cdecl FUN_6740abc9(int param_1);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_6740ac75(void);
void __cdecl __lock(int _File);
undefined4 FUN_6740acaf(void);
undefined * FUN_6740acb5(void);
void __cdecl ___freetlocinfo(void *param_1);
int ___updatetlocinfo_lk(void);
void __cdecl __strcats(uint *param_1,int param_2);
undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2);
void __cdecl ___lc_lctostr(uint *param_1,uint *param_2);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_6740afcf(void);
uint * __setlocale_get_all(void);
uint * __cdecl __expandlocale(char *param_1,uint *param_2,undefined2 *param_3,undefined4 *param_4);
undefined4 __cdecl __setlocale_set_cat(char *param_1);
uint * __fastcall __setlocale_lk(char *param_1,int param_2);
char * __cdecl _setlocale(int _Category,char *_Locale);
void FUN_6740b7a4(void);
void __cdecl __SEH_prolog(undefined4 param_1,int param_2);
void __SEH_epilog(void);
int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size);
int __cdecl TypeMatch(_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_6740b9e8(void);
void __cdecl ___DestructExceptionObject(int param_1);
void * __cdecl AdjustPointer(void *param_1,PMD *param_2);
bool FUN_6740ba67(void);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_6740bbcf(void);
void __cdecl BuildCatchObject(EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,_s_CatchableType *param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FindHandlerForForeignException(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
undefined4 __cdecl ___InternalCxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8);
FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag);
void FUN_6740c1d7(void);
FILE * __cdecl _fopen(char *_Filename,char *_Mode);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
undefined ** FUN_6740c260(void);
void __cdecl __lock_file(FILE *_File);
void __cdecl __lock_file2(int _Index,void *_File);
void __cdecl __unlock_file(FILE *_File);
void __cdecl __unlock_file2(int _Index,void *_File);
void __cdecl _abort(void);
void FUN_6740c3df(void);
void __cdecl __mtterm(void);
void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale);
_ptiddata __cdecl __getptd(void);
void __freefls@4(void *param_1);
void FUN_6740c5bb(void);
void FUN_6740c5c7(void);
void __cdecl __freeptd(_ptiddata _Ptd);
int __cdecl __mtinit(void);
void __cdecl terminate(void);
void __cdecl _inconsistency(void);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
int FUN_6740c79c(int *param_1);
void __cdecl ___security_init_cookie(void);
void ___security_error_handler(int param_1);
undefined4 __cdecl __ValidateEH3RN(void *param_1);
void __cdecl ___crtExitProcess(int param_1);
void FUN_6740cc11(void);
void FUN_6740cc1a(void);
void __cdecl __initterm(undefined4 *param_1);
int __cdecl __cinit(int param_1);
void __cdecl doexit(UINT param_1,int param_2,int param_3);
void FUN_6740cd54(void);
void __cdecl __exit(int _Code);
void __cdecl __cexit(void);
int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
int * FUN_6740cf07(void);
ulong * FUN_6740cf10(void);
void __cdecl __dosmaperr(ulong param_1);
void * __cdecl _calloc(size_t _Count,size_t _Size);
void FUN_6740d036(void);
char * __cdecl _strrchr(char *_Str,int _Ch);
undefined4 _CPtoLCID(void);
void __cdecl setSBCS(void);
void __cdecl setSBUpLow(void);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_6740d2c7(void);
undefined4 __cdecl __setmbcp_lk(UINT param_1);
int __cdecl __setmbcp(int _CodePage);
void FUN_6740d5a7(void);
undefined4 ___initmbctable(void);
uint * __cdecl FUN_6740d5d0(uint *param_1,char *param_2);
int __cdecl __flsbuf(int _Ch,FILE *_File);
void __cdecl write_char(void);
void __cdecl write_multi_char(undefined4 param_1,int param_2);
void __cdecl write_string(int param_1);
int __cdecl __output(undefined4 param_1,byte *param_2,wchar_t *param_3);
uint * __cdecl FUN_6740e000(uint *param_1,uint *param_2);
uint * __cdecl FUN_6740e010(uint *param_1,uint *param_2);
int __cdecl _strcmp(char *_Str1,char *_Str2);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void FUN_6740e2f0(void);
size_t __cdecl __msize(void *_Memory);
void FUN_6740e3a2(void);
void __cdecl write_char(uint param_1);
void __cdecl write_multi_char(uint param_1,int param_2);
void __cdecl write_string(int param_1);
int __cdecl __woutput(undefined4 param_1,short *param_2,wchar_t *param_3);
undefined4 ___heap_select(void);
int __cdecl __heap_init(void);
void __cdecl __heap_term(void);
undefined4 __cdecl ___sbh_heap_init(undefined4 param_1);
uint __cdecl ___sbh_find_block(int param_1);
void __cdecl ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int __cdecl ___sbh_alloc_new_group(int param_1);
undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * __cdecl ___sbh_alloc_block(uint *param_1);
void __cdecl __freebuf(FILE *_File);
int __cdecl __write_lk(uint param_1,char *param_2,DWORD param_3);
int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount);
void FUN_6740faef(void);
int __cdecl __commit(int _FileHandle);
void FUN_6740fbb3(void);
void __cdecl __getbuf(FILE *_File);
int __cdecl __filbuf(FILE *_File);
ulonglong __cdecl __ftelli64_lk(uint *param_1);
longlong __cdecl __ftelli64(FILE *_File);
void FUN_6740fec6(void);
DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3);
long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin);
void FUN_6740ffcb(void);
int __cdecl __ftell_lk(uint *param_1);
undefined4 __cdecl __fseeki64_lk(FILE *param_1,undefined4 param_2,undefined4 param_3,int param_4);
int __cdecl __fseeki64(FILE *_File,longlong _Offset,int _Origin);
void FUN_67410226(void);
undefined4 __cdecl __close_lk(uint param_1);
int __cdecl __close(int _FileHandle);
void FUN_6741032a(void);
int __cdecl __ioinit(void);
void __cdecl __ioterm(void);
int __cdecl __setenvp(void);
void __cdecl parse_cmdline(undefined4 *param_1,int *param_2);
int __cdecl __setargv(void);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void __RTC_Initialize(void);
void __cdecl __NMSG_WRITE(int param_1);
void __cdecl __FF_MSGBANNER(void);
long __cdecl ___ansicp(LCID param_1);
LPSTR __cdecl ___convertcp(UINT param_1,UINT param_2,char *param_3,size_t *param_4,LPSTR param_5,int param_6);
int __cdecl __resetstkoflw(void);
uint __thiscall ___isctype_mt(void *this,int param_1,int param_2,uint param_3);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
int __cdecl ___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address);
undefined4 ___crtInitCritSecNoSpinCount@8(LPCRITICAL_SECTION param_1);
void __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2);
uint __get_lc_time(void);
void __cdecl ___free_lc_time(undefined4 *param_1);
void __cdecl ___free_lconv_num(undefined4 *param_1);
int __cdecl ___init_numeric(threadlocinfo *_LocInfo);
void __cdecl ___free_lconv_mon(int param_1);
int __cdecl ___init_monetary(threadlocinfo *_LocInfo);
size_t __cdecl _strcspn(char *_Str,char *_Control);
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);
bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3);
void _GetLcidFromDefault(void);
void __fastcall _ProcessCodePage(char *param_1);
undefined4 __cdecl _TestDefaultCountry(short param_1);
int crtGetLocaleInfoA(uint param_1,LCTYPE param_2,LPSTR param_3,int param_4);
int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2);
int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2);
uint __thiscall _CountryEnumProc@4(void *this,char *param_1);
undefined4 __cdecl _TestDefaultLanguage(uint param_1,int param_2);
uint __thiscall _LangCountryEnumProc@4(void *this,char *param_1);
uint __thiscall _LanguageEnumProc@4(void *this,char *param_1);
void _GetLcidFromCountry(void);
void _GetLcidFromLangCountry(void);
void _GetLcidFromLanguage(void);
BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
char * __cdecl _strpbrk(char *_Str,char *_Control);
int __cdecl _ValidateRead(void *param_1,uint param_2);
int __cdecl _ValidateWrite(void *param_1,uint param_2);
int __cdecl _ValidateExecute(_func_int *param_1);
FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File);
FILE * __cdecl __getstream(void);
void FUN_67412b11(void);
void __cdecl siglookup(void);
int __cdecl _raise(int _SigNum);
void __fastcall FUN_67412d1e(int param_1);
int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType);
uint * __cdecl FUN_67412e76(uint *param_1);
int __cdecl __isatty(int _FileHandle);
int __cdecl ___wctomb_mt(int param_1,LPSTR param_2,WCHAR param_3);
int __cdecl _wctomb(char *_MbCh,wchar_t _WCh);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
uint __cdecl __putwc_lk(uint param_1,FILE *param_2);
undefined4 __cdecl ___mbtowc_mt(int param_1,LPWSTR param_2,byte *param_3,uint param_4);
int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes);
undefined8 __cdecl __lseeki64_lk(uint param_1,LONG param_2,LONG param_3,DWORD param_4);
longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin);
void FUN_67413351(void);
int __cdecl __set_osfhnd(int param_1,intptr_t param_2);
int __cdecl __free_osfhnd(int param_1);
intptr_t __cdecl __get_osfhandle(int _FileHandle);
int __cdecl __lock_fhandle(int _Filehandle);
void FUN_6741354a(void);
void __cdecl __unlock_fhandle(int _Filehandle);
int __cdecl __alloc_osfhnd(void);
void FUN_6741364e(void);
void FUN_674136e8(void);
int __cdecl __read_lk(uint param_1,char *param_2,char *param_3);
int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount);
void FUN_67413953(void);
long __cdecl _atol(char *_Str);
int __cdecl ___crtGetLocaleInfoW(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,int param_5);
int __cdecl ___crtGetLocaleInfoA(_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData);
int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2);
int __cdecl __stricmp(char *_Str1,char *_Str2);
int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
void __cdecl xtoa(uint param_1,int param_2);
char * __cdecl __itoa(int _Value,char *_Dest,int _Radix);
uint __thiscall __tsopen_lk(void *this,undefined4 *param_1,uint *param_2,LPCSTR param_3,uint param_4,byte param_5);
int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...);
void FUN_6741413a(void);
void __cdecl __fptrap(void);
int __cdecl __flswbuf(int _Ch,FILE *_File);
uint __thiscall ___tolower_mt(void *this,int param_1,uint param_2);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl __chsize_lk(uint param_1,int param_2);
int __cdecl __setmode_lk(uint param_1,int param_2);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
char * __cdecl __strupr(char *_String);
void Unwind@674146c0(void);
void Unwind@674146c8(void);
void Unwind@674146d3(void);
void Unwind@674146f0(void);
void Unwind@674146f8(void);
void Unwind@67414710(void);
void Unwind@67414730(void);
void Unwind@67414760(void);
void Unwind@67414780(void);
void Unwind@674147a0(void);
void Unwind@674147c0(void);
void Unwind@674147e0(void);
void Unwind@67414800(void);
void Unwind@67414820(void);
void Unwind@67414840(void);
void Unwind@67414860(void);
void Unwind@67414880(void);
void Unwind@674148a0(void);
void Unwind@674148c0(void);
void Unwind@674148e0(void);
void Unwind@67414910(void);
void Unwind@67414930(void);
void Unwind@67414938(void);
void Unwind@67414950(void);
void Unwind@67414970(void);
void Unwind@67414990(void);
void Unwind@6741499b(void);
void Unwind@674149a6(void);
void Unwind@674149b1(void);
void Unwind@674149d0(void);
void Unwind@674149f0(void);
void Unwind@67414a10(void);
void Unwind@67414a30(void);
void Unwind@67414a50(void);
void Unwind@67414a5b(void);
void Unwind@67414a66(void);
void Unwind@67414a80(void);
void Unwind@67414a9c(void);
void Unwind@67414ac0(void);
void Unwind@67414ae0(void);
void Unwind@67414aeb(void);
void Unwind@67414af6(void);
void Unwind@67414b04(void);
void Unwind@67414b12(void);
void Unwind@67414b20(void);
void Unwind@67414b40(void);
void Unwind@67414b60(void);
void Unwind@67414b80(void);
void Unwind@67414b8e(void);
void Unwind@67414b9c(void);
void Unwind@67414bad(void);
void Unwind@67414bbe(void);
void Unwind@67414bcf(void);
void Unwind@67414bda(void);
void Unwind@67414be5(void);
void Unwind@67414bf0(void);
void Unwind@67414bfb(void);
void Unwind@67414c06(void);
void Unwind@67414c20(void);
void Unwind@67414c2e(void);
void Unwind@67414c36(void);
void Unwind@67414c4b(void);
void Unwind@67414c5d(void);
void Unwind@67414c65(void);
void Unwind@67414c70(void);
void Unwind@67414c82(void);
void Unwind@67414c94(void);
void Unwind@67414c9c(void);
void Unwind@67414ca7(void);
void Unwind@67414cb2(void);
void Unwind@67414cbd(void);
void Unwind@67414cd2(void);
void Unwind@67414cda(void);
void Unwind@67414cee(void);
void Unwind@67414d00(void);
void Unwind@67414d08(void);
void Unwind@67414d10(void);
void FUN_67414d30(void);
void FUN_67414d40(void);
void FUN_67414d50(void);
void FUN_67414d70(void);
void FUN_67414d90(void);
void FUN_67414db0(void);
void FUN_67414dd0(void);
void FUN_67414df0(void);
void FUN_67414e10(void);
void FUN_67414e30(void);
void FUN_67414e50(void);
void FUN_67414e6d(void);
void FUN_67414e83(void);
void FUN_67414e8f(void);
void FUN_67414ea5(void);
void FUN_67414ec4(void);
void FUN_67414eed(void);
void FUN_67414f03(void);

