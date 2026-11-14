typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
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
typedef unsigned long long    undefined6;
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

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

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

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct CThread CThread, *PCThread;

struct CThread { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

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

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

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

typedef void *LPVOID;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

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

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef long LONG;

typedef wchar_t WCHAR;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
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

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

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

typedef void (*_PHNDLR)(int);

typedef DWORD ULONG;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[35];
};

typedef struct _strflt _strflt, *P_strflt;

struct _strflt {
    int sign;
    int decpt;
    int flag;
    char *mantissa;
};

typedef struct _flt _flt, *P_flt;

struct _flt {
    int flags;
    int nbytes;
    long lval;
    double dval;
};

typedef struct _strflt *STRFLT;

typedef enum enum_3272 {
    INTRNCVT_OK=0,
    INTRNCVT_OVERFLOW=1,
    INTRNCVT_UNDERFLOW=2
} enum_3272;

typedef enum enum_3272 INTRNCVT_STATUS;

typedef struct _flt *FLT;

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

typedef struct lconv lconv, *Plconv;

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

typedef uint size_t;

typedef ushort wint_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

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

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
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

typedef long __time32_t;

typedef struct threadlocaleinfostruct threadlocinfo;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
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

typedef int errno_t;

typedef int intptr_t;

typedef struct localeinfo_struct *_locale_t;

typedef longlong __time64_t;

typedef size_t rsize_t;

typedef struct tagWNDCLASSEXA tagWNDCLASSEXA, *PtagWNDCLASSEXA;

typedef struct tagWNDCLASSEXA WNDCLASSEXA;

typedef long LONG_PTR;

typedef LONG_PTR LRESULT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef CHAR *LPCSTR;

struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
};

struct HWND__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct HBRUSH__ {
    int unused;
};

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

struct HDC__ {
    int unused;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Class Structure
};


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
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

typedef WCHAR *LPWSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef WCHAR *PCNZWCH;

typedef WCHAR *LPWCH;

typedef WCHAR *LPCWSTR;

typedef long HRESULT;

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

typedef DWORD LCID;

typedef CHAR *PCNZCH;

typedef HANDLE *PHANDLE;

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

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef long clock_t;

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct tagLC_STRINGS tagLC_STRINGS, *PtagLC_STRINGS;

struct tagLC_STRINGS {
    wchar_t szLanguage[64];
    wchar_t szCountry[64];
    wchar_t szCodePage[16];
    wchar_t szLocaleName[85];
};

typedef struct tagLC_STRINGS *LPLC_STRINGS;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef HINSTANCE HMODULE;

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

typedef int (*FARPROC)(void);

typedef HANDLE *LPHANDLE;

typedef WORD *LPWORD;

typedef WORD ATOM;

typedef struct tagRECT *LPRECT;

typedef HANDLE HGLOBAL;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

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

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct _tiddata *_ptiddata;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct setloc_struct _setloc_struct;

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

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

typedef struct CThread_vftable CThread_vftable, *PCThread_vftable;

struct CThread_vftable {
    CThread * (*deleting_destructor)(void *, byte); // CThread virtual function #1
    void (*vfunction2)(void *); //  CThread pure virtual function #2
};

typedef struct CThread_data CThread_data, *PCThread_data;

struct CThread_data {
    undefined4 *offset_0x0;
};


// WARNING! conflicting data type names: /ClassDataTypes/CThread/CThread - /CThread

typedef struct exception_data exception_data, *Pexception_data;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};


// WARNING! conflicting data type names: /ClassDataTypes/std/exception/exception - /std/exception

typedef struct exception_vftable exception_vftable, *Pexception_vftable;

struct exception_vftable {
    exception * (*deleting_destructor)(void *, byte); // exception virtual function #1
    char * (*vfunction2)(void *); // exception virtual function #2
};

typedef struct out_of_range out_of_range, *Pout_of_range;

typedef struct out_of_range_vftable out_of_range_vftable, *Pout_of_range_vftable;

typedef struct logic_error_data logic_error_data, *Plogic_error_data;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct logic_error_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    void *offset_0x4;
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
    undefined4 offset_0x14;
    uint offset_0x18;
};

struct out_of_range_vftable {
    exception * (*deleting_destructor)(void *, byte); // out_of_range virtual function #1
    char * (*vfunction2)(void *); // logic_error virtual function #2
};

struct out_of_range { // class out_of_range : logic_error
    struct out_of_range_vftable *vftablePtr;
    struct exception_data exception_data;
    struct logic_error_data logic_error_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/std/bad_alloc/bad_alloc - /std/bad_alloc

typedef struct bad_alloc_vftable bad_alloc_vftable, *Pbad_alloc_vftable;

struct bad_alloc_vftable {
    exception * (*deleting_destructor)(void *, byte); // bad_alloc virtual function #1
    char * (*vfunction2)(void *); // exception virtual function #2
};

typedef struct logic_error_vftable logic_error_vftable, *Plogic_error_vftable;

struct logic_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // logic_error virtual function #1
    char * (*vfunction2)(void *); // logic_error virtual function #2
};

typedef struct logic_error logic_error, *Plogic_error;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct logic_error_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    void *offset_0x4;
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
    undefined4 offset_0x14;
    uint offset_0x18;
};

struct logic_error { // class logic_error : exception
    struct logic_error_vftable *vftablePtr;
    struct exception_data exception_data;
    struct logic_error_data logic_error_data;
};

typedef struct length_error_vftable length_error_vftable, *Plength_error_vftable;

struct length_error_vftable {
    exception * (*deleting_destructor)(void *, byte); // length_error virtual function #1
    char * (*vfunction2)(void *); // logic_error virtual function #2
};

typedef struct length_error length_error, *Plength_error;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct logic_error_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    void *offset_0x4;
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
    undefined4 offset_0x14;
    uint offset_0x18;
};

struct length_error { // class length_error : logic_error
    struct length_error_vftable *vftablePtr;
    struct exception_data exception_data;
    struct logic_error_data logic_error_data;
};

typedef struct bad_exception_vftable bad_exception_vftable, *Pbad_exception_vftable;

struct bad_exception_vftable {
    exception * (*deleting_destructor)(void *, byte); // bad_exception virtual function #1
    char * (*vfunction2)(void *); // exception virtual function #2
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct exception_data {
    char *offset_0x0;
    int offset_0x4;
};

struct bad_exception { // class bad_exception : exception
    struct bad_exception_vftable *vftablePtr;
    struct exception_data exception_data;
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*`scalar_deleting_destructor')(void *, uint); // type_info virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/type_info/type_info - /type_info

typedef struct type_info_data type_info_data, *Ptype_info_data;

struct type_info_data {
    void *offset_0x0;
};

typedef struct CLuaScript_vftable CLuaScript_vftable, *PCLuaScript_vftable;

struct CLuaScript_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CLuaScript virtual function #1
};

typedef struct CLuaScript CLuaScript, *PCLuaScript;

struct CLuaScript { // class CLuaScript
    struct CLuaScript_vftable *vftablePtr;
};

typedef struct CAgent_vftable CAgent_vftable, *PCAgent_vftable;

struct CAgent_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CAgent virtual function #1
};

typedef struct CAgent CAgent, *PCAgent;

struct CAgent { // class CAgent
    struct CAgent_vftable *vftablePtr;
};

typedef struct CAdWindow CAdWindow, *PCAdWindow;

typedef struct CAdWindow_vftable CAdWindow_vftable, *PCAdWindow_vftable;

struct CAdWindow { // class CAdWindow
    struct CAdWindow_vftable *vftablePtr;
};

struct CAdWindow_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CAdWindow virtual function #1
};

typedef struct CWindowMgr_vftable CWindowMgr_vftable, *PCWindowMgr_vftable;

struct CWindowMgr_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CWindowMgr virtual function #1
};

typedef struct CWindowMgr_data CWindowMgr_data, *PCWindowMgr_data;

struct CWindowMgr_data {
    undefined4 *offset_0x0;
    HWND offset_0x4;
    HWND offset_0x8;
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
    LONG offset_0x28;
    HMODULE offset_0x2c;
};

typedef struct CWindowMgr CWindowMgr, *PCWindowMgr;

struct CWindowMgr_data {
    undefined4 *offset_0x0;
    HWND offset_0x4;
    HWND offset_0x8;
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
    LONG offset_0x28;
    HMODULE offset_0x2c;
};

struct CWindowMgr { // class CWindowMgr
    struct CWindowMgr_vftable *vftablePtr;
    struct CWindowMgr_data CWindowMgr_data;
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { // PlaceHolder Structure
};

typedef struct _Handle _Handle, *P_Handle;

struct _Handle { // PlaceHolder Structure
};

typedef struct _LDBL12 _LDBL12, *P_LDBL12;

struct _LDBL12 {
    uchar ld12[12];
};

typedef struct _CRT_FLOAT _CRT_FLOAT, *P_CRT_FLOAT;

struct _CRT_FLOAT {
    float f;
};

typedef struct _CRT_DOUBLE _CRT_DOUBLE, *P_CRT_DOUBLE;

struct _CRT_DOUBLE {
    double x;
};

typedef int (*_onexit_t)(void);

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




void FUN_10001000(void);
undefined4 * __thiscall IRIA::CAgent::scalar_deleting_destructor(CAgent *this,byte param_1);
uint FUN_100010c0(void);
void __fastcall FUN_10001110(undefined4 param_1,char *param_2);
BOOL FUN_100011b0(HMODULE param_1,int param_2);
CAgent * __thiscall IRIA::CAgent::CAgent(CAgent *this);
void IRIA::DestroyHandle(_Handle *param_1);
bool IRIA::LoadScriptFile(_Handle *param_1,char *param_2,char *param_3);
bool IRIA::SetState(_Handle *param_1,char *param_2);
undefined4 __cdecl FUN_10001300(int param_1);
undefined4 __cdecl FUN_100013e0(int param_1);
undefined4 __cdecl FUN_10001410(int param_1);
undefined4 __cdecl FUN_100014c0(int param_1);
undefined4 __cdecl FUN_100015a0(int param_1);
undefined4 FUN_10001670(void);
undefined4 * __thiscall IRIA::CLuaScript::scalar_deleting_destructor(CLuaScript *this,byte param_1);
undefined4 FUN_10001720(void);
uint FUN_10001780(void);
void FUN_10001830(int param_1);
void FUN_100018a0(int param_1);
undefined4 __fastcall FUN_100019d0(undefined4 param_1,char *param_2);
void __thiscall CThread::CThread(CThread *this,CThread *param_1);
CThread * __thiscall CThread::operator=(CThread *this,CThread *param_1);
CThread * __thiscall CThread::scalar_deleting_destructor(CThread *this,byte param_1);
CThread * __thiscall CThread::CThread(CThread *this);
void __thiscall CThread::~CThread(CThread *this);
bool __thiscall CThread::Start(CThread *this);
void __thiscall CThread::Stop(CThread *this);
bool __thiscall CThread::Suspend(CThread *this);
bool __thiscall CThread::Resume(CThread *this);
void __thiscall CThread::Terminate(CThread *this);
bool __thiscall CThread::WaitFor(CThread *this,uint param_1);
bool __thiscall CThread::Terminated(CThread *this);
void __thiscall CThread::SetFinished(CThread *this,bool param_1);
bool __thiscall CThread::GetFinished(CThread *this);
void __thiscall CThread::SetFreeOnTerminate(CThread *this,bool param_1);
bool __thiscall CThread::GetFreeOnTerminate(CThread *this);
void __thiscall CThread::SetReturnValue(CThread *this,int param_1);
int __thiscall CThread::GetReturnValue(CThread *this);
uint CThread::InternalThreadProc(CThread *param_1);
void Catch_All@10001dae(void);
void FUN_10001dc0(void);
void FUN_100022c0(void);
undefined4 FUN_100022f0(void);
undefined4 __cdecl FUN_10002340(LPCSTR param_1);
undefined4 * __thiscall IRIA::CAdWindow::scalar_deleting_destructor(CAdWindow *this,byte param_1);
undefined4 __thiscall FUN_10002650(void *this,HINSTANCE param_1,int param_2,int param_3);
undefined4 FUN_10002750(void);
void FUN_100027b0(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4);
LRESULT FUN_10002820(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4);
void FUN_10002900(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
void FUN_10002a90(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,void *param_1);
int __thiscall std::logic_error::vfunction2(logic_error *this);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,byte param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
void FUN_10002be0(exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
undefined4 * FUN_10002c80(undefined4 *param_1);
undefined4 * __thiscall IRIA::CWindowMgr::scalar_deleting_destructor(CWindowMgr *this,byte param_1);
void thunk_FUN_10003df0(void);
void __thiscall IRIA::CWindowMgr::~CWindowMgr(CWindowMgr *this);
void __fastcall FUN_10002e60(HWND param_1);
undefined4 __fastcall FUN_10003050(undefined4 param_1,char *param_2,char *param_3);
void FUN_10003090(void);
void __thiscall FUN_10003170(void *this,int param_1);
HWND __thiscall FUN_10003260(void *this,int param_1,int param_2,int param_3,LPCSTR param_4);
undefined4 FUN_10003360(void);
int FUN_10003420(void);
LRESULT FUN_10003480(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
int __thiscall FUN_10003510(void *this,char *param_1);
void __fastcall FUN_10003550(int param_1);
void FUN_10003580(uint *param_1);
void FUN_10003660(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void FUN_10003920(void);
void * __thiscall FUN_10003990(void *this,void *param_1,uint param_2,uint param_3);
void FUN_10003a70(int *param_1);
int * __thiscall FUN_10003ab0(void *this,int param_1,int *param_2,char param_3);
void __thiscall FUN_10003d30(void *this,int param_1);
void FUN_10003d80(void);
void __thiscall FUN_10003da0(void *this,int param_1);
void FUN_10003df0(void);
void FUN_10003e30(exception *param_1);
void * __thiscall FUN_10003e50(void *this,undefined4 *param_1,uint param_2);
int __thiscall FUN_10003f20(void *this,undefined4 *param_1,uint param_2);
void FUN_10003fb0(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_100040c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10004100(void);
void __thiscall FUN_10004170(void *this,uint param_1);
undefined * Catch_All@1000421f(void);
void FUN_10004247(void);
void Catch_All@100042b0(void);
void FUN_100042f0(void);
void FUN_10004330(void);
void FUN_100043b0(char *param_1);
void FUN_10004410(exception *param_1);
undefined4 * __fastcall FUN_10004430(int param_1);
undefined4 __fastcall FUN_100044b0(int param_1);
void FUN_10004520(void);
void __fastcall FUN_10004560(int param_1);
void FUN_100045b0(void);
void FUN_100045f0(void);
void FUN_10004640(void);
float10 __fastcall FUN_10004660(int param_1);
int __fastcall FUN_100046b0(int param_1);
undefined4 __fastcall FUN_10004710(int param_1);
int __cdecl FUN_10004730(undefined4 param_1,undefined4 *param_2);
uint __fastcall FUN_100047a0(int param_1);
int FUN_10004810(void);
void __cdecl FUN_10004870(byte *param_1,uint param_2);
void __cdecl FUN_100048b0(byte *param_1);
void __cdecl FUN_10004910(uint *param_1,undefined1 param_2);
void __thiscall FUN_10004940(void *this,undefined4 param_1);
void FUN_100049d0(void);
undefined4 FUN_10004a30(void);
void FUN_10004a80(void);
void FUN_10004ae0(void);
void FUN_10004b40(void);
void __cdecl FUN_10004c00(int param_1);
undefined4 FUN_10004ca0(void);
undefined4 FUN_10004d40(void);
void __fastcall FUN_10004e00(int param_1);
void __fastcall FUN_10004ed0(void *param_1);
undefined * FUN_10004f40(void);
undefined * FUN_10004fc0(void);
void __cdecl FUN_10005070(int param_1);
void __fastcall FUN_10005170(int param_1,void *param_2);
undefined4 __cdecl FUN_10005220(uint *param_1,undefined1 param_2);
int __thiscall FUN_10005290(void *this,int param_1,undefined4 *param_2);
undefined4 __fastcall FUN_10005350(void *param_1);
int __fastcall FUN_10005430(int param_1);
int __fastcall FUN_10005540(int param_1);
void __cdecl FUN_100055b0(int param_1);
int __cdecl FUN_100056a0(int param_1);
undefined4 FUN_10005750(void);
undefined4 FUN_100057d0(void);
void __thiscall FUN_10005880(void *this,uint *param_1);
void __fastcall FUN_10005a30(uint *param_1,void *param_2,char *param_3,char *param_4);
uint * __thiscall FUN_10005b70(void *this,uint *param_1);
undefined4 FUN_10005dd0(void);
void __cdecl FUN_10005e40(int param_1);
void __cdecl FUN_10005f30(undefined1 *param_1,int param_2);
void FUN_10005fd0(void);
undefined * __cdecl FUN_10006040(undefined4 param_1,int *param_2,int *param_3);
undefined4 __cdecl FUN_100060a0(undefined1 param_1);
void __fastcall FUN_10006160(void *param_1,char *param_2);
void FUN_100064c0(void);
void FUN_10006660(void);
void FUN_100067a0(void);
undefined4 * FUN_10006880(void);
void FUN_10006950(void);
undefined4 * FUN_100069a0(void);
void __cdecl FUN_10006ad0(int param_1);
void FUN_10006af0(void);
bool __fastcall FUN_10006b60(double *param_1);
bool FUN_10006bb0(void);
void __fastcall FUN_10006c50(undefined4 param_1,char *param_2);
void __fastcall FUN_10006cc0(void *param_1,uint *param_2,int param_3);
void __thiscall FUN_10007040(void *this,uint *param_1,undefined1 param_2);
void __thiscall FUN_10007060(void *this,char *param_1);
undefined4 __fastcall FUN_100071c0(undefined4 param_1,int param_2);
undefined4 __fastcall FUN_10007210(int param_1,int param_2);
char * __cdecl FUN_10007280(int param_1);
void __fastcall FUN_100072f0(int param_1);
void __cdecl FUN_10007370(int param_1);
undefined4 __cdecl FUN_10007460(int param_1,char *param_2,int param_3,void *param_4);
undefined4 __thiscall FUN_100075b0(void *this,uint *param_1);
undefined4 FUN_10007670(void);
bool FUN_100076d0(void);
undefined4 __fastcall FUN_10007700(uint param_1,int param_2);
undefined4 __cdecl FUN_10007750(int param_1,int param_2,uint param_3);
undefined * __fastcall FUN_10007c10(int param_1);
char * __cdecl FUN_10007c40(int param_1,int param_2,int *param_3);
char * __thiscall FUN_10007dc0(void *this,int *param_1);
void FUN_10007e60(void);
undefined4 __fastcall FUN_10007ee0(undefined4 param_1,int param_2);
void __cdecl FUN_10007f30(undefined4 param_1);
void FUN_10007fd0(void);
void __cdecl FUN_10008060(void *param_1,uint *param_2,undefined1 param_3);
void FUN_100080a0(void);
void __cdecl FUN_10008130(int param_1);
void __thiscall FUN_10008270(void *this,int param_1);
void __cdecl FUN_100083c0(int param_1,int param_2,undefined4 *param_3);
void FUN_10008540(void);
undefined4 __cdecl FUN_100085b0(int param_1);
int __cdecl FUN_10008600(int param_1,int param_2);
int __fastcall FUN_10008640(undefined4 param_1,uint *param_2);
int __thiscall FUN_100086e0(void *this,void *param_1);
undefined4 __fastcall FUN_100087c0(double *param_1,int param_2);
int __cdecl FUN_100088a0(int *param_1);
undefined4 __cdecl FUN_10008900(int param_1);
int __cdecl FUN_10008980(int param_1,int param_2);
int __cdecl FUN_10008a00(int param_1,int param_2,int *param_3);
void FUN_10008a60(void);
void __cdecl FUN_10008ad0(void *param_1);
void __thiscall FUN_10008bb0(void *this,void *param_1);
void __cdecl FUN_10008da0(undefined4 param_1);
undefined4 * __cdecl FUN_10008e90(int param_1);
void FUN_10008f00(void);
undefined4 * __thiscall FUN_10008f50(void *this,int param_1,int param_2,uint *param_3);
undefined4 * __cdecl FUN_10009060(int param_1);
undefined4 * __fastcall FUN_100090f0(undefined4 param_1,int param_2);
undefined4 * __fastcall FUN_10009130(undefined4 param_1);
void FUN_10009200(void);
void __fastcall FUN_10009250(undefined4 param_1,uint param_2,void *param_3);
uint __fastcall FUN_10009370(int param_1);
void __cdecl FUN_100093d0(int param_1,int param_2);
int __cdecl FUN_100094b0(int param_1,int param_2);
undefined4 __cdecl FUN_10009560(int param_1,int param_2);
void __cdecl FUN_10009720(int param_1);
void FUN_10009800(void);
void __cdecl FUN_100098a0(int param_1);
int FUN_100099f0(void);
void __cdecl FUN_10009af0(int param_1);
void __fastcall FUN_10009bf0(int param_1);
int * __cdecl FUN_10009c90(int param_1,int *param_2,int param_3);
void FUN_10009d20(void);
void FUN_10009da0(void);
void FUN_10009e60(void);
void __cdecl FUN_10009ea0(int param_1);
void FUN_10009ee0(void);
void FUN_10009f50(void);
void __cdecl FUN_10009f90(int param_1);
int FUN_1000a120(void);
uint FUN_1000a220(void);
int FUN_1000a2a0(void);
void __thiscall FUN_1000a310(void *this,int param_1);
void FUN_1000a340(void);
void __cdecl FUN_1000a3d0(uint param_1);
void __cdecl FUN_1000a460(void *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
void __fastcall FUN_1000a520(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_1000a5c0(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
void __cdecl FUN_1000a710(int param_1,int *param_2,double *param_3,int *param_4);
undefined4 __cdecl FUN_1000a8f0(void *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5);
double * __fastcall FUN_1000a9c0(undefined4 param_1,int param_2,int param_3);
undefined4 __cdecl FUN_1000aa30(int *param_1,int *param_2,undefined4 param_3);
uint __fastcall FUN_1000ab60(int param_1);
uint __cdecl FUN_1000abd0(double *param_1);
uint __cdecl FUN_1000ac80(double *param_1);
bool FUN_1000ad50(void);
void __cdecl FUN_1000ae10(void *param_1,int param_2,int param_3);
void __cdecl FUN_1000b020(void *param_1,double *param_2,double *param_3,undefined4 param_4);
void __cdecl FUN_1000b1f0(void *param_1,int param_2);
void __cdecl FUN_1000c550(int param_1,undefined4 param_2);
void __thiscall FUN_1000c5c0(void *this,undefined4 param_1);
void __fastcall FUN_1000c630(undefined4 param_1,int param_2);
void __cdecl FUN_1000c6c0(int param_1);
void __cdecl FUN_1000c6f0(uint param_1);
void FUN_1000c7d0(void);
void FUN_1000c860(void);
void __thiscall FUN_1000c8f0(void *this,int param_1);
int __fastcall FUN_1000c930(int param_1);
void __fastcall FUN_1000c970(undefined4 *param_1);
void FUN_1000c9e0(void);
void FUN_1000ca50(int param_1,undefined4 param_2);
undefined4 __cdecl FUN_1000cab0(int param_1,undefined *param_2,undefined4 param_3);
void __fastcall FUN_1000cb10(int param_1,int param_2);
void FUN_1000cba0(void);
void FUN_1000cc10(void);
undefined4 FUN_1000cca0(void);
void __fastcall FUN_1000ccf0(int param_1,int param_2,undefined4 param_3);
int __thiscall FUN_1000cde0(void *this,int param_1);
void FUN_1000d000(void);
undefined4 __thiscall FUN_1000d0d0(void *this,int param_1);
int FUN_1000d2a0(void);
int __fastcall FUN_1000d300(int param_1);
void __cdecl FUN_1000d380(void *param_1,undefined4 param_2,int param_3);
void __cdecl FUN_1000d400(void *param_1);
undefined4 __fastcall FUN_1000d480(undefined4 param_1,byte *param_2);
uint __fastcall FUN_1000d510(int param_1);
int __fastcall FUN_1000d5b0(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,int param_5);
void __cdecl FUN_1000d6b0(void *param_1,int *param_2);
int __fastcall FUN_1000d830(undefined4 param_1,int param_2);
void FUN_1000d8a0(void);
undefined4 * __fastcall FUN_1000d8f0(undefined4 param_1,int param_2,byte param_3);
void __cdecl FUN_1000d940(void *param_1,int param_2);
undefined4 * __cdecl FUN_1000da20(void *param_1,void *param_2);
void __cdecl FUN_1000dad0(void *param_1,byte *param_2,uint param_3);
uint FUN_1000dc30(void);
uint __thiscall FUN_1000dc70(void *this,void *param_1);
undefined4 __fastcall FUN_1000dd00(void *param_1);
undefined4 __cdecl FUN_1000dd90(int param_1);
undefined4 __cdecl FUN_1000de20(int param_1);
undefined4 FUN_1000deb0(void);
undefined4 __cdecl FUN_1000ded0(int param_1);
void FUN_1000df90(void);
void __cdecl FUN_1000dff0(byte *param_1);
void __cdecl FUN_1000e0c0(void *param_1);
void __cdecl FUN_1000e470(int param_1);
void __cdecl FUN_1000e5e0(int param_1);
int __cdecl FUN_1000e760(int param_1);
void __cdecl FUN_1000e840(int param_1);
void __cdecl FUN_1000e880(void *param_1,int *param_2);
void FUN_1000e970(void);
undefined4 __cdecl FUN_1000ea40(int param_1);
void __cdecl FUN_1000eda0(int param_1);
void __cdecl FUN_1000efc0(void *param_1);
undefined4 __cdecl FUN_1000f3e0(int param_1);
undefined4 __cdecl FUN_1000f420(int param_1);
undefined4 __cdecl FUN_1000f460(int param_1);
undefined4 __cdecl FUN_1000f4a0(int param_1);
undefined4 __cdecl FUN_1000f4e0(int param_1);
undefined4 __cdecl FUN_1000f520(int param_1);
undefined4 __cdecl FUN_1000f560(int param_1);
undefined4 __cdecl FUN_1000f5a0(int param_1);
undefined4 __cdecl FUN_1000f5e0(int param_1);
undefined4 __cdecl FUN_1000f620(int param_1);
undefined4 __cdecl FUN_1000f660(int param_1);
undefined4 __cdecl FUN_1000f6b0(int param_1);
undefined4 __cdecl FUN_1000f6f0(int param_1);
undefined4 __cdecl FUN_1000f730(int param_1);
undefined4 __cdecl FUN_1000f780(int param_1);
undefined4 __cdecl FUN_1000f7e0(int param_1);
undefined4 __cdecl FUN_1000f820(int param_1);
undefined4 __cdecl FUN_1000f870(int param_1);
undefined4 __cdecl FUN_1000f8b0(int param_1);
undefined4 __cdecl FUN_1000f8f0(int param_1);
undefined4 __cdecl FUN_1000f930(int param_1);
undefined4 __cdecl FUN_1000f970(int param_1);
undefined4 __cdecl FUN_1000f9b0(int param_1);
undefined4 __cdecl FUN_1000fa10(int param_1);
undefined4 __cdecl FUN_1000fa60(int param_1);
undefined4 __cdecl FUN_1000fae0(int param_1);
undefined4 __cdecl FUN_1000fb60(int param_1);
undefined4 __cdecl FUN_1000fcd0(void *param_1);
int __cdecl FUN_100104a0(int param_1);
char * FUN_100109b0(void);
uint FUN_10010a20(void);
bool __cdecl FUN_10010b30(byte *param_1);
char * __fastcall FUN_10010bd0(char *param_1);
byte * __cdecl FUN_10010c40(int param_1,char *param_2,char *param_3,int param_4);
int __cdecl FUN_10010ce0(int param_1,char *param_2,int param_3);
void __cdecl FUN_10010d80(byte *param_1,undefined4 param_2);
void FUN_10010dd0(void);
byte * __fastcall FUN_10010e30(int param_1);
byte * __cdecl FUN_10010f00(int param_1,byte *param_2,byte *param_3);
void switchD_10011089::caseD_2a(void);
byte * __cdecl FUN_10011200(byte *param_1,byte *param_2,char *param_3);
void __thiscall FUN_10011300(void *this,byte *param_1,int param_2);
int __cdecl FUN_100113f0(byte *param_1,int param_2);
int __cdecl FUN_10011460(int param_1);
void FUN_10011680(void);
void FUN_100116a0(void);
int __cdecl FUN_100116c0(int param_1);
void __cdecl FUN_100118e0(void *param_1,byte *param_2,int param_3);
void __thiscall FUN_100119d0(void *this,undefined4 param_1,byte *param_2);
void __cdecl FUN_10011b60(void *param_1);
void __fastcall FUN_10011e00(int param_1);
byte * __cdecl FUN_10012000(undefined1 *param_1);
void __cdecl FUN_100120e0(void *param_1);
void FUN_100124d0(void);
undefined4 __cdecl FUN_100125c0(void *param_1);
undefined4 __cdecl FUN_10012670(void *param_1);
undefined4 __cdecl FUN_10012830(int param_1);
undefined4 __cdecl FUN_100129b0(void *param_1);
void __thiscall FUN_10012cd0(void *this,int param_1);
undefined4 __cdecl FUN_10012de0(void *param_1);
undefined4 __cdecl FUN_10012e30(void *param_1);
undefined4 __cdecl FUN_10012fc0(int param_1);
undefined4 __cdecl FUN_10013070(int param_1);
undefined4 __cdecl FUN_10013150(int param_1);
undefined4 __cdecl FUN_10013290(int param_1);
undefined4 __cdecl FUN_10013380(int param_1);
undefined4 __cdecl FUN_100133f0(int param_1);
undefined4 __cdecl FUN_100134c0(int param_1);
undefined4 __cdecl FUN_10013680(int param_1);
undefined4 __cdecl FUN_10013750(int param_1);
int __cdecl FUN_10013880(void *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 __cdecl FUN_100139a0(int param_1);
int __cdecl FUN_10013ac0(void *param_1);
int __cdecl FUN_10013b40(int param_1);
int __cdecl FUN_10013d50(int param_1);
int __cdecl FUN_10013e20(int param_1);
int __cdecl FUN_10013f10(int param_1);
undefined4 __cdecl FUN_10014050(int param_1);
undefined4 __cdecl FUN_100141d0(int param_1);
void __cdecl FUN_100143e0(int param_1);
void __thiscall FUN_100144a0(void *this,int param_1,int param_2);
int __cdecl FUN_10014610(int param_1);
int __cdecl FUN_100146b0(void *param_1);
undefined4 __cdecl FUN_10014760(undefined4 *param_1);
undefined4 __cdecl FUN_10014830(undefined4 *param_1);
void __cdecl FUN_100148e0(byte *param_1,undefined4 param_2,undefined4 param_3);
void FUN_100149a0(void);
undefined4 __cdecl FUN_10014bc0(void *param_1);
void __cdecl FUN_10014bf0(undefined1 param_1);
undefined4 __cdecl FUN_10014c70(void *param_1);
undefined4 * FUN_10014dd0(void);
undefined4 __cdecl FUN_10014ec0(void *param_1);
void FUN_10015050(void);
void __cdecl FUN_100150d0(int param_1);
undefined4 __cdecl FUN_10015150(int param_1);
undefined4 __cdecl FUN_10015180(void *param_1);
int FUN_10015410(void);
undefined4 __cdecl FUN_10015490(int param_1,char *param_2);
undefined4 __cdecl FUN_10015600(void *param_1);
undefined4 __fastcall FUN_10015770(FILE *param_1);
bool __fastcall FUN_100157b0(void *param_1);
void __thiscall FUN_10015810(void *this,FILE *param_1);
void __thiscall FUN_10015960(void *this,FILE *param_1,uint param_2);
int __cdecl FUN_10015aa0(FILE *param_1,int param_2);
undefined4 __cdecl FUN_10015e60(FILE *param_1,int param_2);
void FUN_10016430(void);
void __thiscall FUN_100164b0(void *this,undefined4 param_1);
void __cdecl FUN_10016570(undefined4 param_1);
undefined4 __cdecl FUN_10016630(void *param_1);
undefined4 __cdecl FUN_100167d0(int param_1,undefined1 param_2);
undefined4 __cdecl FUN_10016850(int param_1);
void __cdecl FUN_100168e0(int param_1);
void FUN_10016930(void);
void __fastcall FUN_10016a00(undefined4 param_1,byte *param_2,int param_3);
undefined4 FUN_10016a70(void);
void __cdecl FUN_10016b10(byte *param_1,int param_2);
void __cdecl FUN_10016bc0(void *param_1);
undefined4 __cdecl FUN_10016e90(int param_1);
undefined4 __cdecl FUN_10017010(int param_1);
void __fastcall FUN_10017160(void *param_1);
void FUN_10017250(void);
undefined4 * FUN_100172e0(void);
void __cdecl FUN_10017490(int param_1);
undefined4 __thiscall FUN_100174c0(void *this,LPCSTR param_1);
undefined4 __cdecl FUN_10017530(void *param_1);
uint * __fastcall FUN_100175b0(void *param_1);
char * __cdecl FUN_10017640(uint *param_1,byte *param_2);
void FUN_10017890(void);
void FUN_10017980(void);
undefined4 __cdecl FUN_100179f0(void *param_1);
undefined4 __cdecl FUN_10017a50(void *param_1);
undefined4 __cdecl FUN_10017b40(void *param_1);
undefined4 __cdecl FUN_10017c40(void *param_1);
void __fastcall FUN_10018220(void *param_1);
void __cdecl FUN_100182c0(int param_1);
void __fastcall FUN_100183a0(void *param_1);
undefined4 __cdecl FUN_100184e0(void *param_1);
undefined4 __cdecl FUN_100186a0(void *param_1);
void __fastcall FUN_10018800(byte *param_1);
undefined4 __cdecl FUN_100188e0(void *param_1);
undefined4 __cdecl FUN_10018d70(void *param_1);
undefined4 __cdecl FUN_10018f70(void *param_1);
undefined4 __cdecl FUN_10019160(int param_1);
undefined4 __cdecl FUN_10019290(int param_1);
undefined4 __cdecl FUN_10019320(int param_1);
void __cdecl FUN_10019650(undefined4 param_1,int param_2);
uint FUN_10019940(void);
void __cdecl FUN_10019a40(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_10019eb0(int param_1);
void __cdecl FUN_1001a060(undefined1 param_1);
void FUN_1001a0e0(void);
undefined * FUN_1001a120(void);
undefined * FUN_1001a170(void);
void FUN_1001a1e0(int param_1,undefined4 param_2,int param_3);
uint __fastcall FUN_1001a260(byte *param_1);
void FUN_1001a2a0(void);
void __fastcall FUN_1001a360(undefined4 param_1,uint param_2,uint param_3);
undefined4 FUN_1001a450(void);
void __cdecl FUN_1001a4e0(int param_1);
void __fastcall FUN_1001a570(uint *param_1);
int FUN_1001a700(void);
void __cdecl FUN_1001a800(uint *param_1,int param_2);
void __cdecl FUN_1001ab20(uint param_1,uint *param_2);
uint __cdecl FUN_1001afd0(uint *param_1);
void FUN_1001b8c0(void);
int __thiscall FUN_1001b910(void *this,void *param_1,undefined4 param_2,int *param_3,uint *param_4);
void __cdecl FUN_1001b9e0(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_1001ba30(void);
undefined4 __fastcall FUN_1001ba50(void *param_1);
void __thiscall FUN_1001bad0(void *this,int param_1);
void __thiscall FUN_1001bbb0(void *this,int *param_1,int param_2);
void __thiscall FUN_1001be80(void *this,uint *param_1,void *param_2);
void * __cdecl FUN_1001c2b0(uint *param_1,undefined4 param_2);
void __fastcall FUN_1001c4b0(void *param_1);
void __cdecl FUN_1001c5c0(void *param_1,undefined4 param_2,void *param_3,char *param_4);
void FUN_1001c630(void);
void FUN_1001c690(void);
void __fastcall FUN_1001c6f0(undefined4 param_1,undefined1 param_2);
undefined4 FUN_1001c730(void);
void __fastcall FUN_1001c780(int param_1);
void __cdecl FUN_1001c7e0(int param_1);
undefined4 FUN_1001c880(void);
void FUN_1001c900(void);
int __cdecl FUN_1001c940(int param_1,int param_2);
void __fastcall FUN_1001ca00(undefined4 param_1,int param_2);
void __fastcall FUN_1001ca40(undefined4 param_1,int param_2);
uint __cdecl FUN_1001ca80(int *param_1,int param_2,uint *param_3);
undefined4 __cdecl FUN_1001cbb0(int *param_1,int param_2,uint *param_3,int param_4);
void __cdecl FUN_1001cca0(uint *param_1);
void __fastcall FUN_1001ccf0(int param_1,int param_2,int param_3);
void __fastcall FUN_1001cd90(undefined4 param_1);
void __cdecl FUN_1001cdf0(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_1001cf20(int param_1);
void __thiscall FUN_1001d000(void *this,int param_1);
void __cdecl FUN_1001d320(void *param_1,undefined4 param_2,undefined4 param_3,byte *param_4);
void __thiscall FUN_1001d440(void *this,int *param_1);
void FUN_1001d530(void);
void __cdecl FUN_1001d630(int param_1);
void __fastcall FUN_1001d770(int param_1);
void __fastcall FUN_1001daa0(int param_1);
void __cdecl FUN_1001dc90(int param_1,undefined4 *param_2,int param_3,undefined4 param_4);
int FUN_1001de80(void);
void __cdecl FUN_1001df70(undefined4 *param_1);
void __fastcall FUN_1001e0a0(int param_1);
void __cdecl FUN_1001e150(int *param_1);
void FUN_1001e430(void);
undefined4 FUN_1001e630(void);
int __cdecl FUN_1001e7e0(int param_1,int *param_2,uint param_3);
void FUN_1001e9c0(void);
void __fastcall FUN_1001ea50(int param_1);
void __cdecl FUN_1001eaf0(int param_1,int param_2,int param_3);
void __fastcall FUN_1001ec30(int param_1);
void __cdecl FUN_1001ecd0(int param_1);
void FUN_1001eee0(void);
void __thiscall FUN_1001f0e0(void *this,uint param_1,undefined4 param_2,int param_3);
void __cdecl FUN_1001f3a0(void *param_1,int param_2,undefined4 param_3);
void __cdecl FUN_1001f710(int param_1);
void __fastcall FUN_1001fa70(void *param_1);
undefined4 FUN_1001fb90(void);
void __cdecl FUN_1001fc90(int param_1);
void FUN_1001ff60(void);
void FUN_10020060(void);
undefined4 FUN_10020230(void);
void __cdecl FUN_100202c0(undefined4 param_1);
void FUN_10020350(void);
void FUN_100203b0(void);
undefined4 FUN_100204e0(void);
void __cdecl FUN_10020620(int param_1);
void __cdecl FUN_10020700(int param_1);
int FUN_10020790(void);
int __cdecl FUN_100207d0(uint param_1,uint param_2,uint param_3);
void __fastcall FUN_10020830(int param_1,int *param_2);
undefined4 __fastcall FUN_10020880(undefined4 param_1,int param_2);
void __cdecl FUN_100208e0(int *param_1);
void __cdecl FUN_10020970(int param_1,uint param_2,int param_3);
void __fastcall FUN_10020ab0(int *param_1,int *param_2);
void __fastcall FUN_10020b00(int *param_1);
void __fastcall FUN_10020b40(int param_1);
ulonglong __cdecl FUN_10020b60(int *param_1);
ulonglong __cdecl FUN_10020c90(undefined8 param_1);
ulonglong FUN_10020cb0(void);
void __fastcall FUN_10020cf0(int param_1,int *param_2);
void __fastcall FUN_10020d90(undefined4 param_1,int *param_2);
void __fastcall FUN_10020de0(undefined4 param_1,int *param_2);
void __thiscall FUN_10020eb0(void *this,int *param_1);
void FUN_10021030(void);
void __thiscall FUN_10021080(void *this,int *param_1,uint param_2);
void __fastcall FUN_100211a0(undefined4 *param_1);
uint __fastcall FUN_10021210(undefined4 param_1);
void __fastcall FUN_10021260(undefined4 param_1);
uint __fastcall FUN_100212b0(int *param_1);
void __fastcall FUN_10021410(int *param_1);
void __thiscall FUN_10021500(void *this,int *param_1);
void __fastcall FUN_100215f0(int *param_1);
int __cdecl FUN_10021640(uint param_1);
void __fastcall FUN_10021750(undefined4 param_1);
void __fastcall FUN_100217f0(undefined4 param_1);
void __fastcall FUN_10021880(undefined4 param_1);
undefined4 __cdecl FUN_10021950(undefined4 param_1);
void __thiscall FUN_10021a40(void *this,uint param_1);
void __cdecl FUN_10021b30(uint param_1,uint param_2,int *param_3);
void FUN_10021c10(void);
void __thiscall FUN_10021ca0(void *this,int *param_1);
void __cdecl FUN_10021ec0(undefined4 param_1,undefined4 param_2);
void __thiscall FUN_10021f70(void *this,uint param_1,uint param_2,uint param_3);
void __fastcall FUN_10021fa0(uint param_1,int param_2);
void __thiscall std::length_error::length_error(length_error *this);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
int __cdecl _sprintf(char *_Dest,char *_Format,...);
int __cdecl _sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...);
void __thiscall type_info::~type_info(type_info *this);
void * __thiscall type_info::type_info::`scalar_deleting_destructor'(type_info *this,uint param_1);
bool __thiscall type_info::operator==(type_info *this,type_info *param_1);
void __fastcall __security_check_cookie(int param_1);
void __cdecl _free(void *_Memory);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void __cdecl FUN_100221b0(size_t param_1);
errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_10022328(void);
void __cdecl __endthreadex(uint _Retval);
void __callthreadstartex(void);
uintptr_t __cdecl __beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,uint _InitFlag,uint *_ThrdAddr);
void __thiscall __purecall(void *this);
void __thiscall std::exception::exception(exception *this);
exception * __thiscall std::exception::exception(exception *this,char **param_1);
void __thiscall std::exception::exception(exception *this,char **param_1,int param_2);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
void __thiscall std::exception::~exception(exception *this);
char * __thiscall std::exception::vfunction2(exception *this);
exception * __thiscall std::exception::scalar_deleting_destructor(exception *this,byte param_1);
errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
void __cdecl FUN_100226f6(undefined4 param_1);
void __cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void __cdecl FUN_100227fc(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_10022820(void);
undefined4 __CRT_INIT@12(undefined4 param_1,int param_2,int param_3);
BOOL __fastcall ___DllMainCRTStartup(int param_1,int param_2,HMODULE param_3);
void entry(HMODULE param_1,int param_2,int param_3);
int __cdecl FUN_10022b20(FILE *param_1);
int __cdecl _fclose(FILE *_File);
void FUN_10022c06(void);
int __cdecl FID_conflict:_getc(FILE *_File);
void FUN_10022d3d(void);
int __cdecl _feof(FILE *_File);
int __cdecl _ferror(FILE *_File);
void __cdecl _free(void *_Memory);
void FUN_10022df9(void);
char * __cdecl __get_sys_err_msg(int m);
char * __cdecl _strerror(char *_ErrMsg);
int __cdecl __ungetc_nolock(int _Ch,FILE *_File);
int __cdecl _ungetc(int _Ch,FILE *_File);
void FUN_10023041(void);
uint * __cdecl FUN_10023050(uint *param_1,char *param_2);
undefined ** FUN_100230d6(void);
void __cdecl FUN_100231ad(uint param_1);
void __cdecl FUN_100231e9(int param_1,int param_2);
void __cdecl FUN_10023217(uint param_1);
void __cdecl FUN_1002324d(int param_1,int param_2);
uint * __cdecl FUN_10023290(uint *param_1,char param_2);
int __cdecl FUN_1002334e(int param_1);
undefined * FUN_10023389(void);
DWORD * FUN_1002339c(void);
void __cdecl FUN_100233af(DWORD param_1);
FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag);
void FUN_10023487(void);
FILE * __cdecl _fopen(char *_Filename,char *_Mode);
uint __cdecl FUN_100234a4(LPWSTR param_1,LPWSTR param_2,uint param_3,uint param_4,FILE *param_5);
size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
void FUN_10023736(void);
void __cdecl FUN_10023740(void *param_1,size_t param_2,size_t param_3,FILE *param_4);
int __cdecl _fprintf(FILE *_File,char *_Format,...);
void FUN_100238a0(void);
undefined4 __cdecl __freopen_helper(int *param_1,char *param_2,char *param_3,FILE *param_4,int param_5);
void FUN_10023979(void);
FILE * __cdecl _freopen(char *_Filename,char *_Mode,FILE *_File);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void FUN_10023aeb(void);
void * __cdecl FUN_10023bc2(void *param_1,uint param_2,uint param_3);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1);
float10 __cdecl FUN_10023cbd(byte *param_1,undefined4 *param_2,localeinfo_struct *param_3);
void __cdecl FUN_10023dd8(byte *param_1,undefined4 *param_2);
char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count);
int __cdecl __isalpha_l(int _C,_locale_t _Locale);
int __cdecl _isalpha(int _C);
int __cdecl __isupper_l(int _C,_locale_t _Locale);
int __cdecl _isupper(int _C);
int __cdecl __islower_l(int _C,_locale_t _Locale);
int __cdecl _islower(int _C);
int __cdecl __isdigit_l(int _C,_locale_t _Locale);
int __cdecl _isdigit(int _C);
int __cdecl __isxdigit_l(int _C,_locale_t _Locale);
int __cdecl _isxdigit(int _C);
int __cdecl __isspace_l(int _C,_locale_t _Locale);
int __cdecl _isspace(int _C);
int __cdecl __ispunct_l(int _C,_locale_t _Locale);
int __cdecl _ispunct(int _C);
int __cdecl __isalnum_l(int _C,_locale_t _Locale);
int __cdecl _isalnum(int _C);
int __cdecl __iscntrl_l(int _C,_locale_t _Locale);
int __cdecl _iscntrl(int _C);
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);
size_t __cdecl _strcspn(char *_Str,char *_Control);
ulong __cdecl strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix);
int __cdecl __strcoll_l(char *_Str1,char *_Str2,_locale_t _Locale);
int __cdecl _strcoll(char *_Str1,char *_Str2);
void __cdecl FID_conflict:___longjmp_internal(int *_Buf,int _Value);
void __cdecl __amsg_exit(int param_1);
void __cdecl FUN_10024901(undefined4 param_1);
void __cdecl ___crtExitProcess(int param_1);
void FUN_1002493c(void);
void FUN_10024945(void);
void __cdecl FUN_1002494e(undefined4 *param_1);
void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl __get_osplatform(int *param_1);
undefined4 __cdecl __get_osver(undefined4 *param_1);
undefined4 __cdecl __get_winmajor(undefined4 *param_1);
int __cdecl __cinit(int param_1);
void __cdecl FUN_10024ac7(int param_1,int param_2,int param_3);
void FUN_10024b94(void);
void __cdecl FUN_10024ba9(int param_1);
void __cdecl __exit(int _Code);
void __cdecl __cexit(void);
void __cdecl __init_pointers(void);
int __cdecl _fputs(char *_Str,FILE *_File);
void FUN_10024d60(void);
char * __cdecl _fgets(char *_Buf,int _MaxCount,FILE *_File);
void FUN_10024ee7(void);
float10 __cdecl FUN_10024ef0(double param_1,undefined2 param_2);
float10 __cdecl FUN_10025010(double param_1,double *param_2);
double __cdecl _ldexp(double _X,int _Y);
void __cdecl FUN_10025306(ulong param_1);
int __cdecl _rand(void);
double __cdecl _frexp(double _X,int *_Y);
void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount);
int __cdecl __tolower_l(int _C,_locale_t _Locale);
int __cdecl _tolower(int _C);
int __cdecl __toupper_l(int _C,_locale_t _Locale);
int __cdecl _toupper(int _C);
char * __cdecl _strpbrk(char *_Str,char *_Control);
int __cdecl vfscanf(undefined *param_1,FILE *param_2,int param_3,undefined4 param_4,undefined4 param_5);
void FUN_100258b5(void);
int __cdecl FID_conflict:_fscanf(FILE *_File,char *_Format,...);
void __cdecl init_namebuf(char *param_1);
void __cdecl genfname(int param_1,uint param_2);
int __cdecl __tmpnam_helper(char *param_1,uint param_2,char *param_3,uint param_4,undefined4 *param_5);
void FUN_10025b58(void);
char * __cdecl _tmpnam(char *_Buffer);
int __cdecl __tmpfile_helper(undefined4 *param_1,int param_2);
void FUN_10025d9e(void);
FILE * __cdecl _tmpfile(void);
int * __cdecl idtab(void);
FILE * __cdecl __popen(char *_Command,char *_Mode);
void FUN_1002634e(void);
int __cdecl __pclose(FILE *_File);
void FUN_10026421(void);
int __cdecl __flush(FILE *_File);
int __cdecl __fflush_nolock(FILE *_File);
int __cdecl flsall(int param_1);
void FUN_10026570(void);
void FUN_1002659f(void);
int __cdecl _fflush(FILE *_File);
void FUN_100265f1(void);
void FUN_100265fb(void);
int __cdecl _setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size);
void FUN_100266f8(void);
uint __cdecl FUN_10026702(char *param_1,uint param_2,uint param_3,FILE *param_4);
size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File);
void FUN_100268d9(void);
long __cdecl __ftell_nolock(FILE *_File);
long __cdecl _ftell(FILE *_File);
void FUN_10026adf(void);
int __cdecl __fseek_nolock(FILE *_File,long _Offset,int _Origin);
int __cdecl _fseek(FILE *_File,long _Offset,int _Origin);
void FUN_10026beb(void);
errno_t __cdecl _clearerr_s(FILE *_File);
void FUN_10026c99(void);
errno_t __cdecl _clearerr_s(FILE *_File);
undefined4 __cdecl FUN_10026ca6(LPCSTR param_1,LPCSTR param_2);
undefined8 __cdecl __make__time64_t(int param_1);
__time64_t __cdecl __mktime64(tm *_Tm);
errno_t __cdecl __gmtime64_s(tm *_Tm,__time64_t *_Time);
tm * __cdecl __gmtime64(__time64_t *_Time);
int __cdecl _system(char *_Command);
undefined4 __cdecl FUN_10027303(LPCSTR param_1);
clock_t __cdecl _clock(void);
undefined4 ___inittime(void);
void __cdecl __freea(void *_Memory);
void __fastcall FUN_100273c2(int *param_1,char *param_2);
void __cdecl FID_conflict:__store_num(int param_1,int param_2,char **param_3,uint *param_4,uint param_5);
undefined4 __fastcall FUN_1002745b(int *param_1,int *param_2,_locale_t param_3,uint *param_4,int param_5,int param_6);
void __cdecl FUN_10027841(_locale_t param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,int param_6);
int __cdecl __Strftime_l(char *param_1,uint param_2,char *param_3,int *param_4,int *param_5,localeinfo_struct *param_6);
size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm);
void __cdecl ___freetlocinfo(void *param_1);
void __cdecl ___addlocaleref(LONG *param_1);
LONG * __cdecl ___removelocaleref(LONG *param_1);
void __fastcall __copytlocinfo_nolock(LONG *param_1);
LONG * __updatetlocinfoEx_nolock(void);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_10028188(void);
void __cdecl sync_legacy_variables_lk(void);
void __cdecl __strcats(char *param_1,rsize_t param_2,int param_3);
undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2);
void __cdecl ___lc_lctostr(char *param_1,rsize_t param_2,char *param_3);
char * __setlocale_get_all(void);
void __cdecl __expandlocale(char *param_1,char *param_2,rsize_t param_3,undefined2 *param_4,undefined4 *param_5);
void __thiscall __setlocale_set_cat(void *this,int param_1);
void __fastcall __setlocale_nolock(char *param_1,int param_2,int param_3);
char * __cdecl _setlocale(int _Category,char *_Locale);
void FUN_10028cf0(void);
void FUN_10028cfc(void);
void FUN_10028d2d(void);
errno_t __cdecl FUN_10028d32(tm *param_1,uint *param_2);
tm * __cdecl FID_conflict:__localtime64(__time32_t *_Time);
char * __cdecl __getenv_helper_nolock(char *param_1);
char * __cdecl _getenv(char *_VarName);
void FUN_10029116(void);
errno_t __cdecl __dupenv_s(char **_PBuffer,size_t *_PBufferSizeInBytes,char *_VarName);
void FUN_100291fc(void);
double __cdecl __difftime64(__time64_t _Time1,__time64_t _Time2);
__time64_t __cdecl __time64(__time64_t *_Time);
char * __cdecl _strrchr(char *_Str,int _Ch);
lconv * __cdecl _localeconv(void);
size_t __cdecl _strlen(char *_Str);
void __CxxThrowException@8(undefined4 param_1,byte *param_2);
void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2);
void FID_conflict:_CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4);
void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2);
undefined4 __cdecl FID_conflict:___CxxFrameHandler3(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4);
int __cdecl _CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7);
_EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4);
_s_TryBlockMapEntry * __cdecl _GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5);
undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2);
undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1);
void __cdecl __FindAndUnlinkFrame(void *param_1);
void * __cdecl _CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,ulong param_5);
void __cdecl __EH_prolog3(int param_1);
void __cdecl __EH_prolog3_catch(int param_1);
int __cdecl __flsbuf(int _Ch,FILE *_File);
void __cdecl write_char(void);
void __cdecl write_multi_char(undefined4 param_1,int param_2);
void __cdecl FUN_100299ac(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4);
int __cdecl __vsnprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,undefined4 param_6);
int __cdecl __vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList);
void __cdecl type_info::_Type_info_dtor(type_info *param_1);
void FUN_1002a4f7(void);
int __cdecl _strcmp(char *_Str1,char *_Str2);
void __cdecl ___report_gsfailure(void);
int __cdecl FUN_1002a68c(int param_1);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_1002a7aa(void);
int __cdecl _atexit(_func_4879 *param_1);
int * __cdecl _V6_HeapAlloc(uint *param_1);
void FUN_1002a808(void);
void * __cdecl _malloc(size_t _Size);
void __cdecl FUN_1002a8d4(undefined4 param_1);
int __cdecl __callnewh(size_t _Size);
void __cdecl terminate(void);
void __cdecl unexpected(void);
void __cdecl _inconsistency(void);
void __initp_eh_hooks(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3);
undefined4 FUN_1002ab86(void);
int __cdecl FUN_1002abf2(int param_1);
void __encoded_null(void);
int __cdecl FUN_1002ac69(int param_1);
void FUN_1002ace0(undefined4 param_1);
undefined4 FUN_1002acf5(void);
LPVOID FUN_1002acfb(void);
void FUN_1002ad2d(undefined4 param_1,undefined4 param_2);
void __cdecl __mtterm(void);
void __cdecl FUN_1002ad83(int param_1,int param_2);
void FUN_1002ae39(void);
DWORD * FUN_1002ae42(void);
_ptiddata __cdecl __getptd(void);
void __freefls@4(void *param_1);
void FUN_1002afdd(void);
void FUN_1002afe9(void);
void __cdecl __freeptd(_ptiddata _Ptd);
int __cdecl __mtinit(void);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
undefined4 __cdecl FUN_1002b31b(int param_1,DWORD param_2);
void * __cdecl __malloc_crt(size_t _Size);
void * __cdecl __calloc_crt(size_t _Count,size_t _Size);
void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize);
void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size);
void __cdecl _abort(void);
uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask);
void __cdecl FUN_1002b6c8(int param_1);
void __cdecl __FF_MSGBANNER(void);
int __cdecl ___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address);
void __cdecl FUN_1002b9fb(undefined4 param_1);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
void FUN_1002c165(void);
int __cdecl __ioinit(void);
void __cdecl __ioterm(void);
int __cdecl __setenvp(void);
void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3);
int __cdecl __setargv(void);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void __RTC_Initialize(void);
undefined4 ___heap_select(void);
int __cdecl __heap_init(void);
void __cdecl __heap_term(void);
void __cdecl ___security_init_cookie(void);
int __cdecl __close_nolock(int _FileHandle);
int __cdecl __close(int _FileHandle);
void FUN_1002cbb6(void);
int __cdecl __fileno(FILE *_File);
void __cdecl __freebuf(FILE *_File);
int __cdecl __filbuf(FILE *_File);
int __cdecl __mtinitlocks(void);
void __cdecl __mtdeletelocks(void);
void __cdecl FUN_1002cdd7(int param_1);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_1002cea6(void);
void __cdecl __lock(int _File);
undefined4 __cdecl ___sbh_heap_init(undefined4 param_1);
void __thiscall thunk_FUN_1002cf4c(void *this,int param_1);
void __thiscall FUN_1002cf4c(void *this,int param_1);
void __cdecl ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int __cdecl ___sbh_alloc_new_group(int param_1);
undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * __cdecl ___sbh_alloc_block(uint *param_1);
undefined * FUN_1002d9df(void);
undefined ** FUN_1002d9e5(void);
errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
void __cdecl __getbuf(FILE *_File);
int FUN_1002dae2(void);
void FUN_1002db78(void);
undefined4 * __cdecl FUN_1002db81(char *param_1,char *param_2,int param_3,undefined4 *param_4);
undefined4 * FUN_1002de21(void);
void FUN_1002df48(void);
void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3);
void FUN_1002e02a(int param_1);
void __fastcall _EH4_CallFilterFunc(undefined *param_1);
void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE);
void __fastcall _EH4_GlobalUnwind(PVOID param_1);
void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4);
int __cdecl FUN_1002e0a7(uint param_1,LPWSTR param_2,LPWSTR param_3);
int __cdecl FUN_1002e668(uint param_1,LPWSTR param_2,LPWSTR param_3);
void FUN_1002e75b(void);
int __cdecl __stbuf(FILE *_File);
void __cdecl __ftbuf(int _Flag,FILE *_File);
size_t __cdecl __msize(void *_Memory);
void FUN_1002e8c4(void);
undefined4 FUN_1002e8cd(void);
void __cdecl setSBCS(threadmbcinfostruct *param_1);
void __cdecl setSBUpLow(threadmbcinfostruct *param_1);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_1002eb76(void);
int __cdecl getSystemCP(int param_1);
void __cdecl FUN_1002ebf9(undefined4 param_1,int param_2);
int __cdecl __setmbcp(int _CodePage);
void FUN_1002ef33(void);
undefined4 ___initmbctable(void);
FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale);
int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale);
void FUN_1002f0e5(void);
void __cfltcvt_init(void);
void __cdecl __fpmath(int param_1);
int __cdecl __crtCompareStringA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8);
int __cdecl ___crtCompareStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,uint param_2);
undefined4 __fastcall __NLG_Notify1(undefined4 param_1);
void __NLG_Notify(ulong param_1);
void FUN_1002f664(void);
undefined4 __rt_probe_read4@4(void);
void __initp_misc_cfltcvt_tab(void);
void __cdecl __initp_misc_winsig(undefined4 param_1);
uint __cdecl siglookup(uint param_1);
_PHNDLR __cdecl ___get_sigabrt(void);
int __cdecl _raise(int _SigNum);
void FUN_1002f89f(void);
void __cdecl FUN_1002f8db(undefined4 param_1);
void __cdecl FUN_1002f8e5(undefined4 param_1);
undefined4 ___crtInitCritSecNoSpinCount@8(LPCRITICAL_SECTION param_1);
int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2);
void __cdecl ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4);
float10 __cdecl __ceil_default(double param_1);
float10 __cdecl __modf_default(double param_1,double *param_2);
float10 __cdecl __set_exp(undefined8 param_1,short param_2);
undefined4 __cdecl __sptype(int param_1,uint param_2);
void __cdecl FUN_1002fee8(uint param_1,uint param_2,int *param_3);
double __cdecl __copysign(double _Number,double _Sign);
int __cdecl __fpclass(double _X);
void __cdecl __raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,int param_7);
void __cdecl __raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6);
bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3);
void __cdecl __set_errno_from_matherr(int param_1);
char __cdecl __errcode(byte param_1);
float10 __cdecl __umatherr(int param_1,int param_2);
float10 __cdecl __handle_qnan1(int param_1,double param_2);
float10 __cdecl __handle_qnan2(int param_1,double param_2,double param_3);
void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5);
void __cdecl __except2(uint param_1,int param_2,undefined8 param_3,undefined8 param_4,double param_5,uint param_6);
int __statfp(void);
int __clrfp(void);
int __ctrlfp(void);
void FUN_10030896(void);
void __cdecl ___set_fpsr_sse2(uint param_1);
int __cdecl __crtLCMapStringA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8,int param_9);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
int __cdecl __isleadbyte_l(int _C,_locale_t _Locale);
int __cdecl _isleadbyte(int _C);
errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
undefined4 xtoa_s(uint param_1,uint param_2,int param_3);
errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix);
errno_t __cdecl __ultoa_s(ulong _Val,char *_DstBuf,size_t _Size,int _Radix);
DWORD GetCurrentProcessId(void);
uchar * __cdecl __mbsrchr_l(uchar *_Str,uint _Ch,_locale_t _Locale);
uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch);
void FUN_10031d42(void);
void FUN_10031d68(void);
errno_t __cdecl __access_s(char *_Filename,int _AccessMode);
char * __cdecl __strdup(char *_Src);
undefined4 __cdecl FUN_10031e48(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5);
errno_t __cdecl FID_conflict:__sopen_helper(char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure);
void FUN_1003263f(void);
errno_t __cdecl __sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode);
char * __cdecl __getpath(char *_Src,char *_Dst,size_t _SizeInChars);
FILE * __cdecl __fdopen(int _FileHandle,char *_Mode);
void FUN_1003289c(void);
int __cdecl __pipe(int *_PtHandles,uint _PipeSize,int _TextMode);
void FUN_10032add(void);
void FUN_10032aed(void);
intptr_t __cdecl __cwait(int *_TermStat,intptr_t _ProcHandle,int _Action);
int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount);
int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount);
void FUN_10033281(void);
int __cdecl __commit(int _FileHandle);
void FUN_10033362(void);
long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin);
long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin);
void FUN_100334b0(void);
errno_t __cdecl __get_daylight(int *_Daylight);
errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias);
errno_t __cdecl __get_timezone(long *_Timezone);
undefined4 * FUN_10033556(void);
undefined4 * FUN_1003355c(void);
undefined4 * FUN_10033562(void);
undefined ** FUN_10033568(void);
void FUN_1003356e(void);
void FUN_1003381d(void);
int __cdecl cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
bool __isindst_nolock(void);
void __cdecl ___tzset(void);
void FUN_10033ca0(void);
int __cdecl __isindst(tm *_Time);
void FUN_10033ce1(void);
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4);
tm * __cdecl ___getgmtimebuf(void);
intptr_t __cdecl __spawnvpe(int _Mode,char *_Filename,char **_ArgList,char **_Env);
intptr_t __cdecl comexecmd(int param_1,char *param_2,char **param_3,char **param_4);
intptr_t __cdecl __spawnve(int _Mode,char *_Filename,char **_ArgList,char **_Env);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2);
int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale);
int __cdecl __stricmp(char *_Str1,char *_Str2);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
uint __get_lc_time(void);
void __cdecl ___free_lc_time(undefined4 *param_1);
int __cdecl ___init_time(threadlocinfo *_LocInfo);
void __cdecl ___free_lconv_num(undefined4 *param_1);
int __cdecl ___init_numeric(threadlocinfo *_LocInfo);
void __cdecl ___free_lconv_mon(int param_1);
int __cdecl ___init_monetary(threadlocinfo *_LocInfo);
int __cdecl ___init_ctype(threadlocinfo *_LocInfo);
UINT __cdecl ____lc_codepage_func(void);
undefined4 FUN_10035508(void);
bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3);
void __fastcall _ProcessCodePage(CHAR *param_1);
undefined4 __cdecl _TestDefaultCountry(short param_1);
int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2);
int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2);
void _CountryEnumProc@4(char *param_1);
void __thiscall _TestDefaultLanguage(void *this,uint param_1,int param_2);
void _LangCountryEnumProc@4(char *param_1);
void _LanguageEnumProc@4(char *param_1);
void _GetLcidFromLangCountry(void);
void _GetLcidFromLanguage(void);
BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr);
int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size);
int __cdecl __crtGetStringTypeA_stat(localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,int param_6,int param_7,int param_8);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount);
int __cdecl ___wtomb_environ(void);
int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3);
void FUN_10037832(void);
void * __cdecl _calloc(size_t _Count,size_t _Size);
size_t __cdecl _strnlen(char *_Str,size_t _MaxCount);
void FUN_100378ad(void);
exception * __thiscall std::bad_exception::scalar_deleting_destructor(bad_exception *this,byte param_1);
undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_10037a40(void);
void __cdecl ___DestructExceptionObject(int *param_1);
int __cdecl ___AdjustPointer(int param_1,int *param_2);
uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2);
void __cdecl CallUnexpected(_s_ESTypeList *param_1);
void Catch_All@10037bc3(void);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_10037d01(void);
char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FindHandlerForForeignException(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
void FUN_1003843b(exception *param_1);
undefined4 __cdecl ___InternalCxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin);
longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin);
void FUN_1003871e(void);
int __cdecl __isatty(int _FileHandle);
bool FUN_10038786(void);
errno_t __cdecl __wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
void __cdecl write_string(int param_1);
undefined4 __cdecl FUN_100393af(undefined4 param_1,undefined4 param_2,uint param_3);
int __cdecl __set_error_mode(int _Mode);
int __cdecl __crtGetLocaleInfoW_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,int param_6);
void __cdecl ___crtGetLocaleInfoW(localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,int param_6);
int __cdecl __crtGetLocaleInfoA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,int param_6);
int __cdecl ___crtGetLocaleInfoA(_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData);
void __cdecl FUN_100398a0(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2);
undefined1 (*) [16] __cdecl __VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3);
int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4);
int __cdecl __ismbblead(uint _C);
int __cdecl __set_osfhnd(int param_1,intptr_t param_2);
int __cdecl __free_osfhnd(int param_1);
intptr_t __cdecl __get_osfhandle(int _FileHandle);
int __cdecl ___lock_fhandle(int _Filehandle);
void FUN_10039d5a(void);
void __cdecl __unlock_fhandle(int _Filehandle);
int __cdecl __alloc_osfhnd(void);
void FUN_10039e58(void);
void FUN_10039f1b(void);
int __cdecl __mbsicmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale);
int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2);
int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount);
INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D);
INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F);
void __cdecl FUN_1003ad55(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int *param_8);
void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale);
void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale);
void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4);
void __shift(void);
undefined4 __cdecl __cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6);
void __cdecl __cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,localeinfo_struct *param_6);
errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps);
errno_t __cdecl __cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,localeinfo_struct *param_6);
undefined4 __thiscall __cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4);
void __cdecl __cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5);
void __cdecl __cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,localeinfo_struct *param_6);
errno_t __cdecl __cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,_locale_t plocinfo);
errno_t __cdecl __cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps);
void __setdefaultprecision(void);
undefined4 __ms_p5_test_fdiv(void);
void __ms_p5_mp_test_fdiv(void);
void __cdecl ___ansicp(LCID param_1);
void __cdecl ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6);
undefined4 FUN_1003c153(void);
undefined4 __get_sse2_info(void);
float10 __cdecl __frnd(double param_1);
int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes);
int __cdecl __chsize_nolock(int _FileHandle,longlong _Size);
int __cdecl __setmode_nolock(int _FileHandle,int _Mode);
errno_t __cdecl __get_fmode(int *_PMode);
wint_t __cdecl __putwch_nolock(wchar_t _WCh);
long __cdecl _atol(char *_Str);
uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale);
uchar * __cdecl __mbschr(uchar *_Str,uint _Ch);
intptr_t __cdecl __dospawn(int _Mode,char *_Name,char *_Cmd,char *_Env);
int __cdecl __cenvarg(char **_Argv,char **_Env,char **_ArgBlk,char **_EnvBlk,char *_Name);
void __alloca_probe(void);
int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl findenv(uchar *param_1);
undefined4 * __cdecl copy_environ(void);
undefined4 __cdecl FUN_1003d099(undefined4 *param_1,int param_2);
int __cdecl _ValidateRead(void *param_1,uint param_2);
void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3);
int __cdecl FID_conflict:__atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
int __cdecl FID_conflict:__atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt);
void __cdecl ___dtold(uint *param_1,uint *param_2);
STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes);
undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong __fastcall __aullshr(byte param_1,uint param_2);
errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask);
void __cdecl ___initconout(void);
int __cdecl __mbsnicmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl __mbsnicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
void __cdecl FUN_1003dc11(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6);
uint __hw_cw(void);
uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2);
uint __cdecl __control87(uint _NewValue,uint _Mask);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
undefined4 __cdecl __setjmp3(undefined4 *param_1,int param_2,void *param_3,undefined4 param_4,undefined4 param_5);
void FUN_1003e9d0(void);
void FUN_1003ea2d(undefined1 param_1,undefined4 param_2,int param_3);
float10 __cdecl FUN_1003ec20(double param_1,undefined2 param_2);
ulonglong __fastcall FUN_1003ed50(undefined4 param_1,undefined4 param_2);
ulonglong FUN_1003ed86(void);
void __fastcall FUN_1003ee3c(undefined4 param_1);
void FUN_1003eed0(void);
uint __cdecl FUN_1003ef28(int param_1,uint param_2);
void FUN_1003f020(void);
uint __cdecl FUN_1003f078(int param_1,uint param_2);
void FUN_1003f130(void);
uint __cdecl FUN_1003f14d(uint param_1,uint param_2);
void __fastcall FUN_1003f1fa(undefined4 param_1);
void __fastcall FUN_1003f23a(undefined4 param_1);
void FUN_1003f290(void);
void __cdecl FUN_1003f2e8(int param_1,undefined4 param_2);
void FUN_1003f3b0(void);
void __cdecl FUN_1003f408(int param_1,uint param_2);
void FUN_1003f500(void);
void __cdecl FUN_1003f558(int param_1,uint param_2);
void __fastcall FUN_1003f628(undefined4 param_1);
void FUN_1003f632(void);
void FUN_1003f639(void);
void __fastcall FUN_1003f680(void *param_1);
void __thiscall FUN_1003f6cf(void *this,undefined1 param_1);
uint __cdecl FUN_1003f6d8(int param_1,undefined4 param_2);
void __fastcall FUN_1003f7b0(void *param_1);
void __thiscall FUN_1003f7ff(void *this,undefined1 param_1);
uint __cdecl FUN_1003f808(int param_1,undefined4 param_2);
void __fastcall FUN_1003f8e0(void *param_1);
void __thiscall FUN_1003f92f(void *this,undefined1 param_1);
uint __cdecl FUN_1003f938(int param_1,undefined4 param_2);
void FUN_1003f9d0(void);
float10 __cdecl FUN_1003f9e9(double param_1,int param_2,uint param_3);
void __fastcall __trandisp1(undefined4 param_1,int param_2);
void __fastcall __trandisp2(undefined4 param_1,int param_2);
void FUN_10040903(void);
float10 __fastcall FUN_10040910(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
float10 __fastcall __startOneArgErrorHandling(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10040985(void);
undefined4 FUN_1004099c(void);
uint __fastcall __fload_withFB(undefined4 param_1,int param_2);
uint __cdecl FUN_100409f8(undefined4 param_1,uint param_2);
void __fastcall __math_exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 __cdecl __d_inttype(double param_1);
undefined4 __cdecl FUN_10040b60(int param_1,int param_2,int param_3,int param_4,double *param_5);
void FUN_10040d70(void);
float10 __cdecl FUN_10040d8e(int param_1,uint param_2);
void __fastcall __cintrindisp2(undefined4 param_1,int param_2);
void __fastcall __cintrindisp1(undefined4 param_1,int param_2);
void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4);
void FUN_100410f3(void);
void FUN_100410fa(void);
void __cdecl __ctrandisp1(uint param_1,int param_2);
float10 __cdecl __fload(uint param_1,int param_2);
void FUN_100412b0(void);
float10 __cdecl FUN_100412ce(double param_1);
void FUN_10041540(void);
float10 __cdecl FUN_1004155e(double param_1);
undefined4 __cdecl FUN_10041fb6(undefined4 param_1,uint param_2,ushort param_3);
float10 FUN_100421bc(void);
undefined1  [10] FUN_100425ac(void);
void FUN_100425f0(void);
float10 __cdecl FUN_1004260e(double param_1);
void FUN_100428e0(void);
float10 __cdecl FUN_100428fe(double param_1);
void FUN_10042e40(void);
float10 __cdecl FUN_10042e5e(double param_1);
void __fastcall FUN_100434c0(void *param_1);
float10 __thiscall FUN_100434de(void *param_1,undefined1 param_2);
void __fastcall FUN_10043720(void *param_1);
float10 __thiscall FUN_1004373e(void *param_1,undefined1 param_2);
void __fastcall FUN_100438d0(void *param_1);
float10 __thiscall FUN_100438ee(void *param_1,undefined1 param_2);
void __cdecl __87except(int param_1,int *param_2,ushort *param_3);
void Unwind@10043ba0(void);
void Unwind@10043be0(void);
void Unwind@10043c30(void);
void Unwind@10043c60(void);
void Unwind@10043c90(void);
void Unwind@10043cc0(void);
void Unwind@10043cf0(void);
void Unwind@10043d20(void);
void __thiscall std::bad_alloc::~bad_alloc(void);

