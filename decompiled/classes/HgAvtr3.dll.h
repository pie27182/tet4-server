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

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef struct CAvtrPartPool CAvtrPartPool, *PCAvtrPartPool;

struct CAvtrPartPool { // PlaceHolder Class Structure
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

typedef struct cHgAniDIBList cHgAniDIBList, *PcHgAniDIBList;

struct cHgAniDIBList { // PlaceHolder Class Structure
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

typedef struct _s_ESTypeList ESTypeList;

typedef struct CAvtrId CAvtrId, *PCAvtrId;

struct CAvtrId { // PlaceHolder Class Structure
};

typedef struct CHgAvtr CHgAvtr, *PCHgAvtr;

struct CHgAvtr { // PlaceHolder Class Structure
};

typedef struct tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>, *PtMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>;

struct tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct CHgAImage CHgAImage, *PCHgAImage;

struct CHgAImage { // PlaceHolder Class Structure
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

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

typedef uchar BYTE;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef ulong DWORD;

typedef long LONG;

typedef ushort WORD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef GUID CLSID;

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

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

typedef struct _SECURITY_ATTRIBUTES SECURITY_ATTRIBUTES;

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

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

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

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef double ULONGLONG;

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
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

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef WCHAR *LPCWSTR;

typedef long HRESULT;

typedef CHAR *LPCSTR;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef CHAR *LPSTR;

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef DWORD ACCESS_MASK;

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

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

struct IStreamVtbl {
    HRESULT (*QueryInterface)(struct IStream *, IID *, void **);
    ULONG (*AddRef)(struct IStream *);
    ULONG (*Release)(struct IStream *);
    HRESULT (*Read)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Write)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Seek)(struct IStream *, LARGE_INTEGER, DWORD, ULARGE_INTEGER *);
    HRESULT (*SetSize)(struct IStream *, ULARGE_INTEGER);
    HRESULT (*CopyTo)(struct IStream *, struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER *, ULARGE_INTEGER *);
    HRESULT (*Commit)(struct IStream *, DWORD);
    HRESULT (*Revert)(struct IStream *);
    HRESULT (*LockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct IStream *, STATSTG *, DWORD);
    HRESULT (*Clone)(struct IStream *, struct IStream **);
};

typedef union _union_2260 _union_2260, *P_union_2260;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

typedef void *HMETAFILEPICT;

typedef struct HENHMETAFILE__ HENHMETAFILE__, *PHENHMETAFILE__;

typedef struct HENHMETAFILE__ *HENHMETAFILE;

typedef HANDLE HGLOBAL;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

typedef struct IStream IStream, *PIStream;

typedef struct IStorage IStorage, *PIStorage;

typedef struct IStorageVtbl IStorageVtbl, *PIStorageVtbl;

union _union_2260 {
    HBITMAP hBitmap;
    HMETAFILEPICT hMetaFilePict;
    HENHMETAFILE hEnhMetaFile;
    HGLOBAL hGlobal;
    LPOLESTR lpszFileName;
    struct IStream *pstm;
    struct IStorage *pstg;
};

struct HBITMAP__ {
    int unused;
};

struct HENHMETAFILE__ {
    int unused;
};

struct IStream {
    struct IStreamVtbl *lpVtbl;
};

struct IStorage {
    struct IStorageVtbl *lpVtbl;
};

struct IStorageVtbl {
    HRESULT (*QueryInterface)(struct IStorage *, IID *, void **);
    ULONG (*AddRef)(struct IStorage *);
    ULONG (*Release)(struct IStorage *);
    HRESULT (*CreateStream)(struct IStorage *, OLECHAR *, DWORD, DWORD, DWORD, struct IStream **);
    HRESULT (*OpenStream)(struct IStorage *, OLECHAR *, void *, DWORD, DWORD, struct IStream **);
    HRESULT (*CreateStorage)(struct IStorage *, OLECHAR *, DWORD, DWORD, DWORD, struct IStorage **);
    HRESULT (*OpenStorage)(struct IStorage *, OLECHAR *, struct IStorage *, DWORD, SNB, DWORD, struct IStorage **);
    HRESULT (*CopyTo)(struct IStorage *, DWORD, IID *, SNB, struct IStorage *);
    HRESULT (*MoveElementTo)(struct IStorage *, OLECHAR *, struct IStorage *, OLECHAR *, DWORD);
    HRESULT (*Commit)(struct IStorage *, DWORD);
    HRESULT (*Revert)(struct IStorage *);
    HRESULT (*EnumElements)(struct IStorage *, DWORD, void *, DWORD, struct IEnumSTATSTG **);
    HRESULT (*DestroyElement)(struct IStorage *, OLECHAR *);
    HRESULT (*RenameElement)(struct IStorage *, OLECHAR *, OLECHAR *);
    HRESULT (*SetElementTimes)(struct IStorage *, OLECHAR *, FILETIME *, FILETIME *, FILETIME *);
    HRESULT (*SetClass)(struct IStorage *, IID *);
    HRESULT (*SetStateBits)(struct IStorage *, DWORD, DWORD);
    HRESULT (*Stat)(struct IStorage *, STATSTG *, DWORD);
};

typedef struct tagSTGMEDIUM tagSTGMEDIUM, *PtagSTGMEDIUM;

typedef struct tagSTGMEDIUM uSTGMEDIUM;

typedef uSTGMEDIUM STGMEDIUM;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

union _union_2260 {
    HBITMAP hBitmap;
    HMETAFILEPICT hMetaFilePict;
    HENHMETAFILE hEnhMetaFile;
    HGLOBAL hGlobal;
    LPOLESTR lpszFileName;
    struct IStream *pstm;
    struct IStorage *pstg;
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct tagSTGMEDIUM {
    DWORD tymed;
    union _union_2260 u;
    struct IUnknown *pUnkForRelease;
};

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
};

typedef LPOLESTR *SNB;

typedef struct tagFORMATETC tagFORMATETC, *PtagFORMATETC;

typedef WORD CLIPFORMAT;

typedef struct tagDVTARGETDEVICE tagDVTARGETDEVICE, *PtagDVTARGETDEVICE;

typedef struct tagDVTARGETDEVICE DVTARGETDEVICE;

struct tagFORMATETC {
    CLIPFORMAT cfFormat;
    DVTARGETDEVICE *ptd;
    DWORD dwAspect;
    LONG lindex;
    DWORD tymed;
};

struct tagDVTARGETDEVICE {
    DWORD tdSize;
    WORD tdDriverNameOffset;
    WORD tdDeviceNameOffset;
    WORD tdPortNameOffset;
    WORD tdExtDevmodeOffset;
    BYTE tdData[1];
};

typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl, *PIEnumSTATSTGVtbl;

struct IEnumSTATSTGVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATSTG *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATSTG *);
    ULONG (*Release)(struct IEnumSTATSTG *);
    HRESULT (*Next)(struct IEnumSTATSTG *, ULONG, STATSTG *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATSTG *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATSTG *);
    HRESULT (*Clone)(struct IEnumSTATSTG *, struct IEnumSTATSTG **);
};

typedef struct tagFORMATETC FORMATETC;

typedef struct IEnumSTATSTG IEnumSTATSTG, *PIEnumSTATSTG;

struct IEnumSTATSTG {
    struct IEnumSTATSTGVtbl *lpVtbl;
};

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef uint UINT_PTR;

typedef long LONG_PTR;

typedef DWORD ULONG;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[35];
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef UINT_PTR WPARAM;

typedef DWORD *LPDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef LONG_PTR LPARAM;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
    int unused;
};

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef BYTE *LPBYTE;

typedef struct _FILETIME *LPFILETIME;

typedef struct HDC__ *HDC;

typedef int INT;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef struct tagRECT *LPRECT;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef struct HBRUSH__ *HBRUSH;

typedef DWORD COLORREF;

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

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef char *va_list;

typedef struct _tagBINDINFO _tagBINDINFO, *P_tagBINDINFO;

typedef struct _tagBINDINFO BINDINFO;

struct _tagBINDINFO {
    ULONG cbSize;
    LPWSTR szExtraInfo;
    STGMEDIUM stgmedData;
    DWORD grfBindInfoF;
    DWORD dwBindVerb;
    LPWSTR szCustomVerb;
    DWORD cbstgmedData;
    DWORD dwOptions;
    DWORD dwOptionsFlags;
    DWORD dwCodePage;
    SECURITY_ATTRIBUTES securityAttributes;
    IID iid;
    struct IUnknown *pUnk;
    DWORD dwReserved;
};

typedef struct IBindStatusCallback IBindStatusCallback, *PIBindStatusCallback;

typedef struct IBindStatusCallbackVtbl IBindStatusCallbackVtbl, *PIBindStatusCallbackVtbl;

struct IBindStatusCallback {
    struct IBindStatusCallbackVtbl *lpVtbl;
};

struct IBindStatusCallbackVtbl {
    HRESULT (*QueryInterface)(struct IBindStatusCallback *, IID *, void **);
    ULONG (*AddRef)(struct IBindStatusCallback *);
    ULONG (*Release)(struct IBindStatusCallback *);
    HRESULT (*OnStartBinding)(struct IBindStatusCallback *, DWORD, struct IBinding *);
    HRESULT (*GetPriority)(struct IBindStatusCallback *, LONG *);
    HRESULT (*OnLowResource)(struct IBindStatusCallback *, DWORD);
    HRESULT (*OnProgress)(struct IBindStatusCallback *, ULONG, ULONG, ULONG, LPCWSTR);
    HRESULT (*OnStopBinding)(struct IBindStatusCallback *, HRESULT, LPCWSTR);
    HRESULT (*GetBindInfo)(struct IBindStatusCallback *, DWORD *, BINDINFO *);
    HRESULT (*OnDataAvailable)(struct IBindStatusCallback *, DWORD, DWORD, FORMATETC *, STGMEDIUM *);
    HRESULT (*OnObjectAvailable)(struct IBindStatusCallback *, IID *, struct IUnknown *);
};

typedef struct IBinding IBinding, *PIBinding;

typedef struct IBindingVtbl IBindingVtbl, *PIBindingVtbl;

struct IBinding {
    struct IBindingVtbl *lpVtbl;
};

struct IBindingVtbl {
    HRESULT (*QueryInterface)(struct IBinding *, IID *, void **);
    ULONG (*AddRef)(struct IBinding *);
    ULONG (*Release)(struct IBinding *);
    HRESULT (*Abort)(struct IBinding *);
    HRESULT (*Suspend)(struct IBinding *);
    HRESULT (*Resume)(struct IBinding *);
    HRESULT (*SetPriority)(struct IBinding *, LONG);
    HRESULT (*GetPriority)(struct IBinding *, LONG *);
    HRESULT (*GetBindResult)(struct IBinding *, CLSID *, DWORD *, LPOLESTR *, DWORD *);
};

typedef struct IBindStatusCallback *LPBINDSTATUSCALLBACK;


// WARNING! conflicting data type names: /ClassDataTypes/CAvtrId/CAvtrId - /CAvtrId

typedef struct CAvtrId_vftable CAvtrId_vftable, *PCAvtrId_vftable;

struct CAvtrId_vftable {
    CAvtrId * (*deleting_destructor)(void *, byte); // CAvtrId virtual function #1
};

typedef struct CAvtrId_data CAvtrId_data, *PCAvtrId_data;

struct CAvtrId_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int offset_0x4;
    uint offset_0x8;
    undefined4 offset_0xc;
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
    int offset_0x48;
    undefined field64_0x4c;
    undefined field65_0x4d;
    undefined field66_0x4e;
    undefined field67_0x4f;
    undefined field68_0x50;
    undefined field69_0x51;
    undefined field70_0x52;
    undefined field71_0x53;
    uint offset_0x54;
    uint offset_0x58;
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

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CGdiObject CGdiObject, *PCGdiObject;

typedef struct CGdiObject_vftable CGdiObject_vftable, *PCGdiObject_vftable;

typedef struct CGdiObject_data CGdiObject_data, *PCGdiObject_data;

struct CGdiObject_data {
    undefined **offset_0x0;
    void *offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined1 offset_0x10;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    void *offset_0x1c;
};

struct CGdiObject_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CGdiObject virtual function #1
};

struct CGdiObject { // class CGdiObject
    struct CGdiObject_vftable *vftablePtr;
    struct CGdiObject_data CGdiObject_data;
};

typedef struct CAvatarLayer_vftable CAvatarLayer_vftable, *PCAvatarLayer_vftable;

struct CAvatarLayer_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CAvatarLayer virtual function #1
};

typedef struct CAvatarLayer_data CAvatarLayer_data, *PCAvatarLayer_data;

struct CAvatarLayer_data {
    undefined **offset_0x0;
    undefined **offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined1 offset_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined1 offset_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
    undefined field20_0x2c;
    undefined field21_0x2d;
    undefined field22_0x2e;
    undefined field23_0x2f;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
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
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
};

typedef struct CAvatarLayer CAvatarLayer, *PCAvatarLayer;

struct CAvatarLayer_data {
    undefined **offset_0x0;
    undefined **offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined1 offset_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined1 offset_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
    undefined field20_0x2c;
    undefined field21_0x2d;
    undefined field22_0x2e;
    undefined field23_0x2f;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
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
    undefined4 offset_0x128;
    undefined4 offset_0x12c;
    undefined4 offset_0x130;
};

struct CAvatarLayer { // class CAvatarLayer
    struct CAvatarLayer_vftable *vftablePtr;
    struct CAvatarLayer_data CAvatarLayer_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>/tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> - /tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>

typedef struct CLsp CLsp, *PCLsp;

typedef struct CLsp_vftable CLsp_vftable, *PCLsp_vftable;

struct CLsp { // class CLsp
    struct CLsp_vftable *vftablePtr;
};

struct CLsp_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CLsp virtual function #1
    void (*vfunction2)(void *, int, uint); // CLsp virtual function #2
    undefined (*vfunction3)(int); // MSVCR90.DLL CLsp pure virtual function #3
    void (*vfunction4)(void *); // CLsp virtual function #4
};

typedef struct CLspDib_vftable CLspDib_vftable, *PCLspDib_vftable;

struct CLspDib_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CLspDib virtual function #1
    void (*vfunction2)(void *, int, uint); // CLsp virtual function #2
    undefined (*vfunction3)(int); // CLspDib virtual function #3
    void (*vfunction4)(void *); // CLspDib virtual function #4
    void (*vfunction5)(void *, int, uint, undefined2, int); // CLspDib virtual function #5
};

typedef struct CLspDib_data CLspDib_data, *PCLspDib_data;

struct CLspDib_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined4 offset_0x10;
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
    undefined4 offset_0x48;
};

typedef struct CLspDib CLspDib, *PCLspDib;

struct CLspDib_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined4 offset_0x10;
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
    undefined4 offset_0x48;
};

struct CLspDib { // class CLspDib : CLsp
    struct CLspDib_vftable *vftablePtr;
    struct CLspDib_data CLspDib_data;
};

typedef struct CAvtrPartPool_vftable CAvtrPartPool_vftable, *PCAvtrPartPool_vftable;

struct CAvtrPartPool_vftable {
    CAvtrPartPool * (*deleting_destructor)(void *, byte); // CAvtrPartPool virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CAvtrPartPool/CAvtrPartPool - /CAvtrPartPool

typedef struct CAvtrPartPool_data CAvtrPartPool_data, *PCAvtrPartPool_data;

struct CAvtrPartPool_data {
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
    undefined field70_0x4c;
    undefined field71_0x4d;
    undefined field72_0x4e;
    undefined field73_0x4f;
    undefined field74_0x50;
    undefined field75_0x51;
    undefined field76_0x52;
    undefined field77_0x53;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
};

typedef struct CHgAvtr_data CHgAvtr_data, *PCHgAvtr_data;

struct CHgAvtr_data {
    undefined **offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined1 offset_0x10;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined2 offset_0x2c;
    undefined2 offset_0x2e;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined field19_0x3c;
    undefined field20_0x3d;
    undefined field21_0x3e;
    undefined field22_0x3f;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined field25_0x48;
    undefined field26_0x49;
    undefined field27_0x4a;
    undefined field28_0x4b;
    undefined4 offset_0x4c;
    undefined4 offset_0x50;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    char offset_0x68;
    undefined field37_0x69;
    undefined1 offset_0x6a;
    undefined field39_0x6b;
    undefined field40_0x6c;
    undefined field41_0x6d;
    undefined field42_0x6e;
    undefined field43_0x6f;
    undefined field44_0x70;
    undefined field45_0x71;
    undefined field46_0x72;
    undefined field47_0x73;
    undefined field48_0x74;
    undefined field49_0x75;
    undefined field50_0x76;
    undefined field51_0x77;
    undefined field52_0x78;
    undefined field53_0x79;
    undefined field54_0x7a;
    undefined field55_0x7b;
    undefined field56_0x7c;
    undefined field57_0x7d;
    undefined field58_0x7e;
    undefined field59_0x7f;
    undefined field60_0x80;
    undefined field61_0x81;
    undefined field62_0x82;
    undefined field63_0x83;
    int offset_0x84;
};

typedef struct CHgAvtr_vftable CHgAvtr_vftable, *PCHgAvtr_vftable;

struct CHgAvtr_vftable {
    CHgAvtr * (*deleting_destructor)(void *, byte); // CHgAvtr virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgAvtr/CHgAvtr - /CHgAvtr


// WARNING! conflicting data type names: /ClassDataTypes/CHgAImage/CHgAImage - /CHgAImage

typedef struct CHgAImage_data CHgAImage_data, *PCHgAImage_data;

struct CHgAImage_data {
    int offset_0x0;
    int offset_0x4;
    int offset_0x8;
    undefined1 offset_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    int offset_0x10;
    int offset_0x14;
    int offset_0x18;
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
    undefined4 offset_0x2b;
    undefined field26_0x2f;
    undefined field27_0x30;
    undefined field28_0x31;
    undefined field29_0x32;
    undefined field30_0x33;
    undefined field31_0x34;
    undefined field32_0x35;
    undefined field33_0x36;
    undefined field34_0x37;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined field39_0x3c;
    undefined field40_0x3d;
    undefined field41_0x3e;
    undefined field42_0x3f;
    undefined field43_0x40;
    undefined field44_0x41;
    undefined field45_0x42;
    undefined field46_0x43;
    undefined field47_0x44;
    undefined field48_0x45;
    undefined field49_0x46;
    undefined field50_0x47;
    undefined field51_0x48;
    undefined field52_0x49;
    undefined field53_0x4a;
    undefined field54_0x4b;
    undefined field55_0x4c;
    undefined field56_0x4d;
    undefined field57_0x4e;
    undefined field58_0x4f;
    undefined field59_0x50;
    undefined field60_0x51;
    undefined field61_0x52;
    undefined field62_0x53;
    undefined field63_0x54;
    undefined field64_0x55;
    undefined field65_0x56;
    undefined field66_0x57;
    undefined field67_0x58;
    undefined field68_0x59;
    undefined field69_0x5a;
    undefined field70_0x5b;
    undefined field71_0x5c;
    undefined field72_0x5d;
    undefined field73_0x5e;
    undefined field74_0x5f;
    undefined field75_0x60;
    undefined field76_0x61;
    undefined field77_0x62;
    undefined field78_0x63;
    undefined field79_0x64;
    undefined field80_0x65;
    undefined field81_0x66;
    undefined field82_0x67;
    undefined field83_0x68;
    undefined field84_0x69;
    undefined field85_0x6a;
    undefined field86_0x6b;
    undefined field87_0x6c;
    undefined field88_0x6d;
    undefined field89_0x6e;
    undefined field90_0x6f;
    undefined field91_0x70;
    undefined field92_0x71;
    undefined field93_0x72;
    undefined field94_0x73;
    undefined field95_0x74;
    undefined field96_0x75;
    undefined field97_0x76;
    undefined field98_0x77;
    undefined field99_0x78;
    undefined field100_0x79;
    undefined field101_0x7a;
    undefined field102_0x7b;
    undefined field103_0x7c;
    undefined field104_0x7d;
    undefined field105_0x7e;
    undefined field106_0x7f;
    undefined field107_0x80;
    undefined field108_0x81;
    undefined field109_0x82;
    undefined field110_0x83;
    undefined field111_0x84;
    undefined field112_0x85;
    undefined field113_0x86;
    undefined field114_0x87;
    undefined field115_0x88;
    undefined field116_0x89;
    undefined field117_0x8a;
    undefined field118_0x8b;
    undefined field119_0x8c;
    undefined field120_0x8d;
    undefined field121_0x8e;
    undefined field122_0x8f;
    undefined field123_0x90;
    undefined field124_0x91;
    undefined field125_0x92;
    undefined field126_0x93;
    undefined field127_0x94;
    undefined field128_0x95;
    undefined field129_0x96;
    undefined field130_0x97;
    undefined field131_0x98;
    undefined field132_0x99;
    undefined field133_0x9a;
    undefined field134_0x9b;
    undefined field135_0x9c;
    undefined field136_0x9d;
    undefined field137_0x9e;
    undefined field138_0x9f;
    undefined field139_0xa0;
    undefined field140_0xa1;
    undefined field141_0xa2;
    undefined field142_0xa3;
    undefined field143_0xa4;
    undefined field144_0xa5;
    undefined field145_0xa6;
    undefined field146_0xa7;
    undefined field147_0xa8;
    undefined field148_0xa9;
    undefined field149_0xaa;
    undefined field150_0xab;
    undefined field151_0xac;
    undefined field152_0xad;
    undefined field153_0xae;
    undefined field154_0xaf;
    undefined field155_0xb0;
    undefined field156_0xb1;
    undefined field157_0xb2;
    undefined field158_0xb3;
    undefined field159_0xb4;
    undefined field160_0xb5;
    undefined field161_0xb6;
    undefined field162_0xb7;
    undefined field163_0xb8;
    undefined field164_0xb9;
    undefined field165_0xba;
    undefined field166_0xbb;
    undefined field167_0xbc;
    undefined field168_0xbd;
    undefined field169_0xbe;
    undefined field170_0xbf;
    undefined field171_0xc0;
    undefined field172_0xc1;
    undefined field173_0xc2;
    undefined field174_0xc3;
    undefined field175_0xc4;
    undefined field176_0xc5;
    undefined field177_0xc6;
    undefined field178_0xc7;
    undefined field179_0xc8;
    undefined field180_0xc9;
    undefined field181_0xca;
    undefined field182_0xcb;
    undefined field183_0xcc;
    undefined field184_0xcd;
    undefined field185_0xce;
    undefined field186_0xcf;
    undefined field187_0xd0;
    undefined field188_0xd1;
    undefined field189_0xd2;
    undefined field190_0xd3;
    undefined field191_0xd4;
    undefined field192_0xd5;
    undefined field193_0xd6;
    undefined field194_0xd7;
    undefined field195_0xd8;
    undefined field196_0xd9;
    undefined field197_0xda;
    undefined field198_0xdb;
    undefined field199_0xdc;
    undefined field200_0xdd;
    undefined field201_0xde;
    undefined field202_0xdf;
    undefined field203_0xe0;
    undefined field204_0xe1;
    undefined field205_0xe2;
    undefined field206_0xe3;
    undefined field207_0xe4;
    undefined field208_0xe5;
    undefined field209_0xe6;
    undefined field210_0xe7;
    undefined field211_0xe8;
    undefined field212_0xe9;
    undefined field213_0xea;
    undefined field214_0xeb;
    undefined field215_0xec;
    undefined field216_0xed;
    undefined field217_0xee;
    undefined field218_0xef;
    undefined field219_0xf0;
    undefined field220_0xf1;
    undefined field221_0xf2;
    undefined field222_0xf3;
    undefined field223_0xf4;
    undefined field224_0xf5;
    undefined field225_0xf6;
    undefined field226_0xf7;
    undefined field227_0xf8;
    undefined field228_0xf9;
    undefined field229_0xfa;
    undefined field230_0xfb;
    undefined field231_0xfc;
    undefined field232_0xfd;
    undefined field233_0xfe;
    undefined field234_0xff;
    undefined field235_0x100;
    undefined field236_0x101;
    undefined field237_0x102;
    undefined field238_0x103;
    undefined field239_0x104;
    undefined field240_0x105;
    undefined field241_0x106;
    undefined field242_0x107;
    undefined field243_0x108;
    undefined field244_0x109;
    undefined field245_0x10a;
    undefined field246_0x10b;
    undefined field247_0x10c;
    undefined field248_0x10d;
    undefined field249_0x10e;
    undefined field250_0x10f;
    undefined field251_0x110;
    undefined field252_0x111;
    undefined field253_0x112;
    undefined field254_0x113;
    undefined field255_0x114;
    undefined field256_0x115;
    undefined field257_0x116;
    undefined field258_0x117;
    undefined field259_0x118;
    undefined field260_0x119;
    undefined field261_0x11a;
    undefined field262_0x11b;
    undefined field263_0x11c;
    undefined field264_0x11d;
    undefined field265_0x11e;
    undefined field266_0x11f;
    undefined field267_0x120;
    undefined field268_0x121;
    undefined field269_0x122;
    undefined field270_0x123;
    undefined field271_0x124;
    undefined field272_0x125;
    undefined field273_0x126;
    undefined field274_0x127;
    undefined field275_0x128;
    undefined field276_0x129;
    undefined field277_0x12a;
    undefined field278_0x12b;
    undefined field279_0x12c;
    undefined field280_0x12d;
    undefined field281_0x12e;
    undefined field282_0x12f;
    undefined field283_0x130;
    undefined field284_0x131;
    undefined field285_0x132;
    undefined field286_0x133;
    undefined field287_0x134;
    undefined field288_0x135;
    undefined field289_0x136;
    undefined field290_0x137;
    undefined field291_0x138;
    undefined field292_0x139;
    undefined field293_0x13a;
    undefined field294_0x13b;
    undefined field295_0x13c;
    undefined field296_0x13d;
    undefined field297_0x13e;
    undefined field298_0x13f;
    undefined field299_0x140;
    undefined field300_0x141;
    undefined field301_0x142;
    undefined field302_0x143;
    undefined field303_0x144;
    undefined field304_0x145;
    undefined field305_0x146;
    undefined field306_0x147;
    undefined field307_0x148;
    undefined field308_0x149;
    undefined field309_0x14a;
    undefined field310_0x14b;
    undefined field311_0x14c;
    undefined field312_0x14d;
    undefined field313_0x14e;
    undefined field314_0x14f;
    undefined field315_0x150;
    undefined field316_0x151;
    undefined field317_0x152;
    undefined field318_0x153;
    undefined field319_0x154;
    undefined field320_0x155;
    undefined field321_0x156;
    undefined field322_0x157;
    undefined field323_0x158;
    undefined field324_0x159;
    undefined field325_0x15a;
    undefined field326_0x15b;
    undefined field327_0x15c;
    undefined field328_0x15d;
    undefined field329_0x15e;
    undefined field330_0x15f;
    undefined field331_0x160;
    undefined field332_0x161;
    undefined field333_0x162;
    undefined field334_0x163;
    undefined field335_0x164;
    undefined field336_0x165;
    undefined field337_0x166;
    undefined field338_0x167;
    undefined field339_0x168;
    undefined field340_0x169;
    undefined field341_0x16a;
    undefined field342_0x16b;
    undefined field343_0x16c;
    undefined field344_0x16d;
    undefined field345_0x16e;
    undefined field346_0x16f;
    undefined field347_0x170;
    undefined field348_0x171;
    undefined field349_0x172;
    undefined field350_0x173;
    undefined field351_0x174;
    undefined field352_0x175;
    undefined field353_0x176;
    undefined field354_0x177;
    undefined field355_0x178;
    undefined field356_0x179;
    undefined field357_0x17a;
    undefined field358_0x17b;
    undefined field359_0x17c;
    undefined field360_0x17d;
    undefined field361_0x17e;
    undefined field362_0x17f;
    undefined field363_0x180;
    undefined field364_0x181;
    undefined field365_0x182;
    undefined field366_0x183;
    undefined field367_0x184;
    undefined field368_0x185;
    undefined field369_0x186;
    undefined field370_0x187;
    undefined field371_0x188;
    undefined field372_0x189;
    undefined field373_0x18a;
    undefined field374_0x18b;
    undefined field375_0x18c;
    undefined field376_0x18d;
    undefined field377_0x18e;
    undefined field378_0x18f;
    undefined field379_0x190;
    undefined field380_0x191;
    undefined field381_0x192;
    undefined field382_0x193;
    undefined field383_0x194;
    undefined field384_0x195;
    undefined field385_0x196;
    undefined field386_0x197;
    undefined field387_0x198;
    undefined field388_0x199;
    undefined field389_0x19a;
    undefined field390_0x19b;
    undefined field391_0x19c;
    undefined field392_0x19d;
    undefined field393_0x19e;
    undefined field394_0x19f;
    undefined field395_0x1a0;
    undefined field396_0x1a1;
    undefined field397_0x1a2;
    undefined field398_0x1a3;
    undefined field399_0x1a4;
    undefined field400_0x1a5;
    undefined field401_0x1a6;
    undefined field402_0x1a7;
    undefined field403_0x1a8;
    undefined field404_0x1a9;
    undefined field405_0x1aa;
    undefined field406_0x1ab;
    undefined field407_0x1ac;
    undefined field408_0x1ad;
    undefined field409_0x1ae;
    undefined field410_0x1af;
    undefined field411_0x1b0;
    undefined field412_0x1b1;
    undefined field413_0x1b2;
    undefined field414_0x1b3;
    undefined field415_0x1b4;
    undefined field416_0x1b5;
    undefined field417_0x1b6;
    undefined field418_0x1b7;
    undefined field419_0x1b8;
    undefined field420_0x1b9;
    undefined field421_0x1ba;
    undefined field422_0x1bb;
    undefined field423_0x1bc;
    undefined field424_0x1bd;
    undefined field425_0x1be;
    undefined field426_0x1bf;
    undefined field427_0x1c0;
    undefined field428_0x1c1;
    undefined field429_0x1c2;
    undefined field430_0x1c3;
    undefined field431_0x1c4;
    undefined field432_0x1c5;
    undefined field433_0x1c6;
    undefined field434_0x1c7;
    undefined field435_0x1c8;
    undefined field436_0x1c9;
    undefined field437_0x1ca;
    undefined field438_0x1cb;
    undefined field439_0x1cc;
    undefined field440_0x1cd;
    undefined field441_0x1ce;
    undefined field442_0x1cf;
    undefined field443_0x1d0;
    undefined field444_0x1d1;
    undefined field445_0x1d2;
    undefined field446_0x1d3;
    undefined field447_0x1d4;
    undefined field448_0x1d5;
    undefined field449_0x1d6;
    undefined field450_0x1d7;
    undefined field451_0x1d8;
    undefined field452_0x1d9;
    undefined field453_0x1da;
    undefined field454_0x1db;
    undefined field455_0x1dc;
    undefined field456_0x1dd;
    undefined field457_0x1de;
    undefined field458_0x1df;
    undefined field459_0x1e0;
    undefined field460_0x1e1;
    undefined field461_0x1e2;
    undefined field462_0x1e3;
    undefined field463_0x1e4;
    undefined field464_0x1e5;
    undefined field465_0x1e6;
    undefined field466_0x1e7;
    undefined field467_0x1e8;
    undefined field468_0x1e9;
    undefined field469_0x1ea;
    undefined field470_0x1eb;
    undefined field471_0x1ec;
    undefined field472_0x1ed;
    undefined field473_0x1ee;
    undefined field474_0x1ef;
    undefined field475_0x1f0;
    undefined field476_0x1f1;
    undefined field477_0x1f2;
    undefined field478_0x1f3;
    undefined field479_0x1f4;
    undefined field480_0x1f5;
    undefined field481_0x1f6;
    undefined field482_0x1f7;
    undefined field483_0x1f8;
    undefined field484_0x1f9;
    undefined field485_0x1fa;
    undefined field486_0x1fb;
    undefined field487_0x1fc;
    undefined field488_0x1fd;
    undefined field489_0x1fe;
    undefined field490_0x1ff;
    undefined field491_0x200;
    undefined field492_0x201;
    undefined field493_0x202;
    undefined field494_0x203;
    undefined field495_0x204;
    undefined field496_0x205;
    undefined field497_0x206;
    undefined field498_0x207;
    undefined field499_0x208;
    undefined field500_0x209;
    undefined field501_0x20a;
    undefined field502_0x20b;
    undefined field503_0x20c;
    undefined field504_0x20d;
    undefined field505_0x20e;
    undefined field506_0x20f;
    undefined field507_0x210;
    undefined field508_0x211;
    undefined field509_0x212;
    undefined field510_0x213;
    undefined field511_0x214;
    undefined field512_0x215;
    undefined field513_0x216;
    undefined field514_0x217;
    undefined field515_0x218;
    undefined field516_0x219;
    undefined field517_0x21a;
    undefined field518_0x21b;
    undefined field519_0x21c;
    undefined field520_0x21d;
    undefined field521_0x21e;
    undefined field522_0x21f;
    undefined field523_0x220;
    undefined field524_0x221;
    undefined field525_0x222;
    undefined field526_0x223;
    undefined field527_0x224;
    undefined field528_0x225;
    undefined field529_0x226;
    undefined field530_0x227;
    undefined field531_0x228;
    undefined field532_0x229;
    undefined field533_0x22a;
    undefined field534_0x22b;
    undefined field535_0x22c;
    undefined field536_0x22d;
    undefined field537_0x22e;
    undefined field538_0x22f;
    undefined field539_0x230;
    undefined field540_0x231;
    undefined field541_0x232;
    undefined field542_0x233;
    struct HWND__ *offset_0x234;
    int offset_0x238;
    undefined field545_0x23c;
    undefined field546_0x23d;
    undefined field547_0x23e;
    undefined field548_0x23f;
    undefined field549_0x240;
    undefined field550_0x241;
    undefined field551_0x242;
    undefined field552_0x243;
    undefined field553_0x244;
    undefined field554_0x245;
    undefined field555_0x246;
    undefined field556_0x247;
    undefined field557_0x248;
    undefined field558_0x249;
    undefined field559_0x24a;
    undefined field560_0x24b;
    undefined field561_0x24c;
    undefined field562_0x24d;
    undefined field563_0x24e;
    undefined field564_0x24f;
    undefined field565_0x250;
    undefined field566_0x251;
    undefined field567_0x252;
    undefined field568_0x253;
    undefined field569_0x254;
    undefined field570_0x255;
    undefined field571_0x256;
    undefined field572_0x257;
    undefined field573_0x258;
    undefined field574_0x259;
    undefined field575_0x25a;
    undefined field576_0x25b;
    undefined field577_0x25c;
    undefined field578_0x25d;
    undefined field579_0x25e;
    undefined field580_0x25f;
    undefined field581_0x260;
    undefined field582_0x261;
    undefined field583_0x262;
    undefined field584_0x263;
    undefined field585_0x264;
    undefined field586_0x265;
    undefined field587_0x266;
    undefined field588_0x267;
    undefined field589_0x268;
    undefined field590_0x269;
    undefined field591_0x26a;
    undefined field592_0x26b;
    undefined field593_0x26c;
    undefined field594_0x26d;
    undefined field595_0x26e;
    undefined field596_0x26f;
    undefined field597_0x270;
    undefined field598_0x271;
    undefined field599_0x272;
    undefined field600_0x273;
    undefined field601_0x274;
    undefined field602_0x275;
    undefined field603_0x276;
    undefined field604_0x277;
    undefined field605_0x278;
    undefined field606_0x279;
    undefined field607_0x27a;
    undefined field608_0x27b;
    undefined field609_0x27c;
    undefined field610_0x27d;
    undefined field611_0x27e;
    undefined field612_0x27f;
    undefined field613_0x280;
    undefined field614_0x281;
    undefined field615_0x282;
    undefined field616_0x283;
    undefined field617_0x284;
    undefined field618_0x285;
    undefined field619_0x286;
    undefined field620_0x287;
    undefined field621_0x288;
    undefined field622_0x289;
    undefined field623_0x28a;
    undefined field624_0x28b;
    undefined field625_0x28c;
    undefined field626_0x28d;
    undefined field627_0x28e;
    undefined field628_0x28f;
    undefined field629_0x290;
    undefined field630_0x291;
    undefined field631_0x292;
    undefined field632_0x293;
    undefined field633_0x294;
    undefined field634_0x295;
    undefined field635_0x296;
    undefined field636_0x297;
    undefined field637_0x298;
    undefined field638_0x299;
    undefined field639_0x29a;
    undefined field640_0x29b;
    undefined field641_0x29c;
    undefined field642_0x29d;
    undefined field643_0x29e;
    undefined field644_0x29f;
    undefined field645_0x2a0;
    undefined field646_0x2a1;
    undefined field647_0x2a2;
    undefined field648_0x2a3;
    undefined field649_0x2a4;
    undefined field650_0x2a5;
    undefined field651_0x2a6;
    undefined field652_0x2a7;
    undefined field653_0x2a8;
    undefined field654_0x2a9;
    undefined field655_0x2aa;
    undefined field656_0x2ab;
    undefined field657_0x2ac;
    undefined field658_0x2ad;
    undefined field659_0x2ae;
    undefined field660_0x2af;
    undefined field661_0x2b0;
    undefined field662_0x2b1;
    undefined field663_0x2b2;
    undefined field664_0x2b3;
    undefined field665_0x2b4;
    undefined field666_0x2b5;
    undefined field667_0x2b6;
    undefined field668_0x2b7;
    undefined field669_0x2b8;
    undefined field670_0x2b9;
    undefined field671_0x2ba;
    undefined field672_0x2bb;
    undefined field673_0x2bc;
    undefined field674_0x2bd;
    undefined field675_0x2be;
    undefined field676_0x2bf;
    undefined field677_0x2c0;
    undefined field678_0x2c1;
    undefined field679_0x2c2;
    undefined field680_0x2c3;
    undefined field681_0x2c4;
    undefined field682_0x2c5;
    undefined field683_0x2c6;
    undefined field684_0x2c7;
    undefined field685_0x2c8;
    undefined field686_0x2c9;
    undefined field687_0x2ca;
    undefined field688_0x2cb;
    undefined field689_0x2cc;
    undefined field690_0x2cd;
    undefined field691_0x2ce;
    undefined field692_0x2cf;
    undefined field693_0x2d0;
    undefined field694_0x2d1;
    undefined field695_0x2d2;
    undefined field696_0x2d3;
    undefined4 offset_0x2d4;
    undefined **offset_0x2d8;
    void *offset_0x2dc;
    undefined4 offset_0x2e0;
    undefined4 offset_0x2e4;
    undefined1 offset_0x2e8;
    undefined field703_0x2e9;
    undefined field704_0x2ea;
    undefined field705_0x2eb;
    undefined4 offset_0x2ec;
    undefined4 offset_0x2f0;
    void *offset_0x2f4;
    undefined4 offset_0x2f8;
    undefined4 offset_0x2fc;
    undefined4 offset_0x300;
    undefined2 offset_0x304;
    undefined2 offset_0x306;
    undefined4 offset_0x308;
    undefined4 offset_0x30c;
    undefined4 offset_0x310;
    undefined field717_0x314;
    undefined field718_0x315;
    undefined field719_0x316;
    undefined field720_0x317;
    undefined4 offset_0x318;
    undefined4 offset_0x31c;
    undefined field723_0x320;
    undefined field724_0x321;
    undefined field725_0x322;
    undefined field726_0x323;
    undefined4 offset_0x324;
    undefined4 offset_0x328;
    undefined4 offset_0x32c;
    undefined4 offset_0x330;
    undefined4 offset_0x334;
};

typedef struct CHgAImage_vftable CHgAImage_vftable, *PCHgAImage_vftable;

struct CHgAImage_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgAImage virtual function #1
    bool (*Create)(void *, char *, ulong); // CHgAImage virtual function #2
};

typedef struct cHgAniDIBList_vftable cHgAniDIBList_vftable, *PcHgAniDIBList_vftable;

struct cHgAniDIBList_vftable {
    cHgAniDIBList * (*deleting_destructor)(void *, byte); // cHgAniDIBList virtual function #1
};

typedef struct cHgAniDIBList_data cHgAniDIBList_data, *PcHgAniDIBList_data;

struct cHgAniDIBList_data {
    undefined1 offset_0x0;
    undefined1 offset_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
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
    int offset_0x58;
    undefined field26_0x5c;
    undefined field27_0x5d;
    undefined field28_0x5e;
    undefined field29_0x5f;
    undefined field30_0x60;
    undefined field31_0x61;
    undefined field32_0x62;
    undefined field33_0x63;
    void *offset_0x64;
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
    undefined4 offset_0x70;
    undefined4 offset_0x74;
    undefined4 offset_0x78;
    void *offset_0x7c;
    undefined4 offset_0x80;
    void *offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    int offset_0x94;
    undefined field47_0x98;
    undefined field48_0x99;
    undefined field49_0x9a;
    undefined field50_0x9b;
    undefined field51_0x9c;
    undefined field52_0x9d;
    undefined field53_0x9e;
    undefined field54_0x9f;
    void *offset_0xa0;
    int *offset_0xa4;
    undefined4 offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    char offset_0xc8;
    undefined field66_0xc9;
    undefined field67_0xca;
    undefined field68_0xcb;
};


// WARNING! conflicting data type names: /ClassDataTypes/cHgAniDIBList/cHgAniDIBList - /cHgAniDIBList

typedef struct GIFTABLE GIFTABLE, *PGIFTABLE;

struct GIFTABLE { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info

typedef struct CAvtr2004 CAvtr2004, *PCAvtr2004;

struct CAvtr2004 { // PlaceHolder Structure
};

typedef struct CAvtrIdConv CAvtrIdConv, *PCAvtrIdConv;

struct CAvtrIdConv { // PlaceHolder Structure
};

typedef struct CHgAvatar CHgAvatar, *PCHgAvatar;

struct CHgAvatar { // PlaceHolder Structure
};

typedef struct tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*> tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*>, *PtMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*>;

struct tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*> { // PlaceHolder Structure
};

typedef union HWNDORHDC HWNDORHDC, *PHWNDORHDC;

union HWNDORHDC {
};

typedef struct CAvtrTickHandler CAvtrTickHandler, *PCAvtrTickHandler;

struct CAvtrTickHandler { // PlaceHolder Structure
};

typedef struct cHgAnigifList cHgAnigifList, *PcHgAnigifList;

struct cHgAnigifList { // PlaceHolder Structure
};

typedef struct CHgAniAvatar CHgAniAvatar, *PCHgAniAvatar;

struct CHgAniAvatar { // PlaceHolder Structure
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE { // PlaceHolder Structure
};

typedef struct CAvtrDownloadThread CAvtrDownloadThread, *PCAvtrDownloadThread;

struct CAvtrDownloadThread { // PlaceHolder Structure
};

typedef struct CAvtrPart CAvtrPart, *PCAvtrPart;

struct CAvtrPart { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/lsp/CLspDib - /ClassDataTypes/lsp/CLspDib/CLspDib


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct vector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_> vector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_>, *Pvector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_>;

struct vector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_> { // PlaceHolder Structure
};

typedef struct vector<char,std::allocator<char>_> vector<char,std::allocator<char>_>, *Pvector<char,std::allocator<char>_>;

struct vector<char,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct vector<CHgAImage*,std::allocator<CHgAImage*>_> vector<CHgAImage*,std::allocator<CHgAImage*>_>, *Pvector<CHgAImage*,std::allocator<CHgAImage*>_>;

struct vector<CHgAImage*,std::allocator<CHgAImage*>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> { // PlaceHolder Structure
};

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

struct allocator<char> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *P_Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct _String_iterator<char,std::char_traits<char>,std::allocator<char>_> _String_iterator<char,std::char_traits<char>,std::allocator<char>_>, *P_String_iterator<char,std::char_traits<char>,std::allocator<char>_>;

struct _String_iterator<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *Pvector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<unsigned_long,std::allocator<unsigned_long>_> vector<unsigned_long,std::allocator<unsigned_long>_>, *Pvector<unsigned_long,std::allocator<unsigned_long>_>;

struct vector<unsigned_long,std::allocator<unsigned_long>_> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;

typedef struct IUnknown *LPUNKNOWN;




CAvtrIdConv * __thiscall CAvtrIdConv::CAvtrIdConv(CAvtrIdConv *this);
void __thiscall CAvtrIdConv::~CAvtrIdConv(CAvtrIdConv *this);
CAvtrIdConv * __thiscall CAvtrIdConv::CAvtrIdConv(CAvtrIdConv *this,CAvtrIdConv *param_1);
CAvtrIdConv * __thiscall CAvtrIdConv::operator=(CAvtrIdConv *this,CAvtrIdConv *param_1);
bool __thiscall CAvtrIdConv::Conv(CAvtrIdConv *this);
void __thiscall CAvtrIdConv::Append(CAvtrIdConv *this,vector<char,std::allocator<char>_> *param_1);
int * __thiscall CAvtrIdConv::Hair(CAvtrIdConv *this);
int * __thiscall CAvtrIdConv::Face(CAvtrIdConv *this);
int * __thiscall CAvtrIdConv::HC(CAvtrIdConv *this);
int * __thiscall CAvtrIdConv::LC(CAvtrIdConv *this);
int __thiscall CAvtrIdConv::AC(CAvtrIdConv *this,int param_1);
int * __thiscall CAvtrIdConv::Set(CAvtrIdConv *this);
void __thiscall CAvtrIdConv::SetOrgAvtrId(CAvtrIdConv *this,char *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall CAvtrIdConv::GetAvtrId(CAvtrIdConv *this);
char __thiscall CAvtrIdConv::AvtCode(CAvtrIdConv *this,int param_1);
bool __thiscall CAvtrIdConv::IsMatch(CAvtrIdConv *this,int param_1,char param_2);
void FUN_60501a40(undefined4 *param_1);
void FUN_60501ab0(int param_1);
void FUN_60501bb0(uint param_1);
void FUN_60501c60(void);
void FUN_60501cc0(int *param_1,undefined4 param_2,int param_3,void *param_4);
void FUN_60501d70(void);
undefined4 FUN_60501db0(void);
undefined1 * FUN_60501de0(undefined1 *param_1);
void __thiscall std::length_error::length_error(length_error *this);
void FUN_60501e80(exception *param_1);
void FUN_60501ea0(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4);
void __thiscall FUN_60501f20(void *this,int param_1,void *param_2);
int * __cdecl FUN_605020f0(int *param_1,undefined *param_2,undefined4 param_3,char *param_4,undefined4 param_5,char *param_6,undefined4 param_7,int param_8);
int __fastcall FUN_60502150(void *param_1,void *param_2);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
int * FUN_605021c0(int *param_1,int param_2);
void __thiscall CHgAniAvatar::ReNameAvatarFile(CHgAniAvatar *this);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,byte param_1);
int __thiscall std::logic_error::vfunction2(logic_error *this);
void FUN_60502350(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
void FUN_60502390(exception *param_1);
int __thiscall CHgAImage::GetWidth(CHgAImage *this);
int __thiscall CHgAImage::GetHeight(CHgAImage *this);
uchar * __thiscall CHgAImage::GetBits(CHgAImage *this,int param_1);
void __thiscall CHgAImage::SetTileNum(CHgAImage *this,int param_1);
int __thiscall CHgAImage::GetTileNum(CHgAImage *this);
uchar ** __thiscall CHgAImage::GetVHeads(CHgAImage *this);
void __thiscall CHgAImage::CHgAImage(CHgAImage *this,CHgAImage *param_1);
undefined4 * __thiscall CHgAImage::scalar_deleting_destructor(CHgAImage *this,byte param_1);
void __thiscall CHgAImage::CHgAImage(CHgAImage *this);
void __thiscall CHgAImage::~CHgAImage(CHgAImage *this);
bool __thiscall CHgAImage::CHgAImage::Create(CHgAImage *this,int param_1,int param_2);
bool __thiscall CHgAImage::CHgAImage::Create(CHgAImage *this,int param_1,int param_2,ulong param_3);
bool __thiscall CHgAImage::CHgAImage::Create(CHgAImage *this,char *param_1);
bool __thiscall CHgAImage::CHgAImage::Create(CHgAImage *this,char *param_1,ulong param_2);
void __thiscall CHgAImage::CHgAImage::Destroy(CHgAImage *this);
bool __thiscall CHgAImage::HasTransparentColor(CHgAImage *this);
void __thiscall CHgAImage::SetTransparentColor(CHgAImage *this,ulong param_1);
ulong __thiscall CHgAImage::GetTransparentColor(CHgAImage *this);
void __thiscall CHgAImage::Draw(CHgAImage *this,int param_1,int param_2,CHgAImage *param_3,int param_4);
void __thiscall CHgAImage::DrawTile(CHgAImage *this,int param_1,int param_2,CHgAImage *param_3,int param_4,int param_5);
void __thiscall CHgAImage::DrawUnSafe(CHgAImage *this,int param_1,int param_2,CHgAImage *param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void __thiscall CHgAImage::FillRect(CHgAImage *this,tagRECT *param_1,ulong param_2,int param_3);
void __thiscall CHgAImage::FillRect(CHgAImage *this,ulong param_1,int param_2);
bool __thiscall CHgAImage::__CreateFromBitmap(CHgAImage *this,uchar *param_1,ulong param_2);
bool __thiscall CHgAImage::__CreateFromBitmapWithColorTable(CHgAImage *this,uchar *param_1,ulong param_2);
bool __thiscall CHgAImage::__CreateFromBitmapWithoutColorTable(CHgAImage *this,uchar *param_1,ulong param_2);
void __fastcall FUN_60502e00(int param_1,int param_2,short *param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void __thiscall FUN_60502ee0(void *this,int param_1);
int * __cdecl FUN_60502f60(int param_1,int param_2,short param_3);
cHgAnigifList * __thiscall cHgAnigifList::cHgAnigifList(cHgAnigifList *this,cHgAnigifList *param_1);
cHgAnigifList * __thiscall cHgAnigifList::operator=(cHgAnigifList *this,cHgAnigifList *param_1);
int __thiscall cHgAnigifList::getFrameCount(cHgAnigifList *this);
int __thiscall cHgAnigifList::getNowFrameNum(cHgAnigifList *this);
void __thiscall cHgAnigifList::GetSize(cHgAnigifList *this);
cHgAniDIBList * __thiscall cHgAniDIBList::cHgAniDIBList(cHgAniDIBList *this,cHgAniDIBList *param_1);
cHgAniDIBList * __thiscall cHgAniDIBList::operator=(cHgAniDIBList *this,cHgAniDIBList *param_1);
cHgAniDIBList * __thiscall cHgAniDIBList::scalar_deleting_destructor(cHgAniDIBList *this,byte param_1);
void __thiscall cHgAniDIBList::exportImageList(cHgAniDIBList *this,vector<CHgAImage*,std::allocator<CHgAImage*>_> *param_1,vector<unsigned_long,std::allocator<unsigned_long>_> *param_2);
void __thiscall cHgAniDIBList::exportImageList(cHgAniDIBList *this,vector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_> *param_1,vector<unsigned_long,std::allocator<unsigned_long>_> *param_2);
void __thiscall CHgAniAvatar::SetHWND(CHgAniAvatar *this,HWND__ *param_1);
CHgAImage * __thiscall CHgAImage::CHgAImage(CHgAImage *this,CHgAniAvatar *param_1);
void __thiscall FUN_60503930(void *this,char *param_1);
void __cdecl FUN_60503b30(char *param_1);
void __thiscall CHgAImage::CHgAImage(CHgAImage *this);
void __thiscall CHgAImage::CHgAImage(CHgAImage *this,HWND__ *param_1);
void __thiscall CHgAniAvatar::~CHgAniAvatar(CHgAniAvatar *this);
int __thiscall CHgAniAvatar::getAvatarFileName(CHgAniAvatar *this,char *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6);
int __thiscall CHgAniAvatar::makeAvatarURL(CHgAniAvatar *this,char *param_1,char *param_2,char *param_3);
undefined4 FUN_60504130(CHgAniAvatar *param_1);
int __thiscall CHgAniAvatar::Create(CHgAniAvatar *this,char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
int __thiscall CHgAniAvatar::CreateEx(CHgAniAvatar *this,char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
int __thiscall CHgAniAvatar::checkSavedAvatarFile(CHgAniAvatar *this);
int __thiscall CHgAniAvatar::downloadNewAvatar(CHgAniAvatar *this);
int __thiscall CHgAniAvatar::loadAvatar(CHgAniAvatar *this);
undefined * Catch_All@605046fc(void);
int __thiscall CHgAniAvatar::Draw(CHgAniAvatar *this,HDC__ *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAniAvatar::DirectDraw(CHgAniAvatar *this,HDC__ *param_1,int param_2,int param_3);
int __thiscall CHgAniAvatar::DrawSelected(CHgAniAvatar *this,HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5);
int __thiscall CHgAniAvatar::Draw(CHgAniAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
int __thiscall CHgAniAvatar::DirectDraw(CHgAniAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
int __thiscall CHgAniAvatar::DrawSelected(CHgAniAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,ulong param_6,int param_7);
int __thiscall CHgAniAvatar::SetAutoDraw(CHgAniAvatar *this,int param_1,int param_2,int param_3);
int __thiscall CHgAniAvatar::SetAutoDraw(CHgAniAvatar *this,int param_1,HDC__ *param_2,int param_3,int param_4);
int __thiscall CHgAniAvatar::IsAniAvatar(CHgAniAvatar *this);
int __thiscall CHgAniAvatar::IsReady(CHgAniAvatar *this);
void __thiscall CHgAniAvatar::Destroy(CHgAniAvatar *this);
void __thiscall CHgAniAvatar::AddFileName(CHgAniAvatar *this,int param_1);
void __thiscall CHgAniAvatar::CheckFolder(CHgAniAvatar *this);
void __thiscall CHgAniAvatar::GetOldestAvatarFile(CHgAniAvatar *this,char *param_1,char *param_2,int param_3);
void __thiscall CHgAniAvatar::DeleteAvatarFile(CHgAniAvatar *this,ulong param_1,char *param_2);
void FUN_605054e0(int param_1);
int * __thiscall FUN_605055e0(void *this,int *param_1);
void FUN_605056c0(void);
undefined4 FUN_605056f0(void);
void FUN_60505720(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
void FUN_605057e0(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void FUN_605058d0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void * __fastcall FUN_60505a70(undefined4 param_1,void *param_2);
cHgAnigifList * __thiscall cHgAnigifList::cHgAnigifList(cHgAnigifList *this);
void __thiscall cHgAnigifList::~cHgAnigifList(cHgAnigifList *this);
int __thiscall cHgAnigifList::Load(cHgAnigifList *this,char *param_1,HWND__ *param_2);
int __thiscall cHgAnigifList::Draw(cHgAnigifList *this,HDC__ *param_1,int param_2,int param_3);
undefined4 Catch_All@60505dd3(void);
int __thiscall cHgAnigifList::DrawSelected(cHgAnigifList *this,HDC__ *param_1,int param_2,int param_3);
int __thiscall cHgAnigifList::Draw(cHgAnigifList *this,int param_1,HDC__ *param_2,int param_3,int param_4);
int __thiscall cHgAnigifList::DrawAnimation(cHgAnigifList *this,HDC__ *param_1,int param_2,int param_3);
int __thiscall cHgAnigifList::Flip(cHgAnigifList *this,HDC__ *param_1,int param_2,int param_3);
int __thiscall cHgAnigifList::Draw(cHgAnigifList *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall cHgAnigifList::DrawAnimation(cHgAnigifList *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall cHgAnigifList::Flip(cHgAnigifList *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall cHgAnigifList::DrawSelected(cHgAnigifList *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall cHgAnigifList::ThreadAnimation(cHgAnigifList *this,HWND__ *param_1,int param_2,int param_3);
int __thiscall cHgAnigifList::Start(cHgAnigifList *this,HDC__ *param_2,int param_3,int param_4);
void __thiscall cHgAnigifList::Stop(cHgAnigifList *this);
void __thiscall cHgAnigifList::Destroy(cHgAnigifList *this);
ulong __thiscall cHgAnigifList::GetDelay(cHgAnigifList *this,int param_1);
void FUN_60507000(void);
cHgAniDIBList * __thiscall cHgAniDIBList::cHgAniDIBList(cHgAniDIBList *this);
void __thiscall cHgAniDIBList::~cHgAniDIBList(cHgAniDIBList *this);
int __thiscall cHgAniDIBList::Load(cHgAniDIBList *this,char *param_1);
int __thiscall cHgAniDIBList::Copy(cHgAniDIBList *this);
int __thiscall cHgAniDIBList::NextImage(cHgAniDIBList *this);
void __thiscall cHgAniDIBList::TakeIt_Step1(cHgAniDIBList *this,uchar *param_1);
int __thiscall cHgAniDIBList::TakeIt_Step2(cHgAniDIBList *this,GIFTABLE *param_1);
void __thiscall cHgAniDIBList::TakeIt_Step3(cHgAniDIBList *this,tagRGBQUAD *param_1);
int __thiscall cHgAniDIBList::TakeIt(cHgAniDIBList *this);
void __thiscall cHgAniDIBList::Output(cHgAniDIBList *this,uchar param_1);
uchar __thiscall cHgAniDIBList::GetByte(cHgAniDIBList *this);
ushort __thiscall cHgAniDIBList::GetCode(cHgAniDIBList *this);
int __thiscall cHgAnigifList::SetTransparentColor(cHgAnigifList *this,ulong param_1);
int * FUN_60508380(int *param_1);
int FUN_605083e0(void);
void FUN_60508400(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined4 * __fastcall FUN_605084c0(undefined4 param_1,undefined4 *param_2);
void __thiscall FUN_605084f0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void * __fastcall FUN_605086f0(undefined4 param_1,void *param_2);
undefined4 __cdecl FUN_60508720(int param_1);
void __cdecl FUN_60508880(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6);
int __cdecl initAnonymousBitmap(void);
int __cdecl DrawSelectedAnonymousAvatar(HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5);
int __cdecl DrawAnonymousAvatar(HDC__ *param_1,int param_2,int param_3,int param_4);
CAvtrPart * __thiscall CAvtrPart::CAvtrPart(CAvtrPart *this,CAvtrPart *param_1);
CAvtrPart * __thiscall CAvtrPart::operator=(CAvtrPart *this,CAvtrPart *param_1);
bool __thiscall CAvtrId::IsDefault(CAvtrId *this);
bool __thiscall CAvtrId::IsComAvtr(CAvtrId *this);
void __thiscall CAvtrId::SetComAvatar(CAvtrId *this,bool param_1);
void __thiscall CAvtrId::SetDefAvatar(CAvtrId *this,bool param_1);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall CAvtrId::IdVec(CAvtrId *this);
CAvtrId * __thiscall CAvtrId::CAvtrId(CAvtrId *this,CAvtrId *param_1);
CAvtrId * __thiscall CAvtrId::operator=(CAvtrId *this,CAvtrId *param_1);
CAvtrId * __thiscall CAvtrId::scalar_deleting_destructor(CAvtrId *this,byte param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall CAvtrPartPool::GetPrePath(CAvtrPartPool *this,bool param_1);
void __thiscall CAvtrPartPool::SetPrePath(CAvtrPartPool *this,char *param_1);
tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*>* __thiscall tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>::operator=(tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>*this,tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*>*param_1);
CAvtrPartPool * __thiscall CAvtrPartPool::CAvtrPartPool(CAvtrPartPool *this);
CAvtrPartPool * __thiscall CAvtrPartPool::CAvtrPartPool(CAvtrPartPool *this,CAvtrPartPool *param_1);
CAvtrPartPool * __thiscall CAvtrPartPool::operator=(CAvtrPartPool *this,CAvtrPartPool *param_1);
CAvtrPartPool * __thiscall CAvtrPartPool::scalar_deleting_destructor(CAvtrPartPool *this,byte param_1);
void FUN_605093b0(undefined4 *param_1);
CAvtrTickHandler * __thiscall CAvtrTickHandler::CAvtrTickHandler(CAvtrTickHandler *this);
CAvtrTickHandler * __thiscall CAvtrTickHandler::CAvtrTickHandler(CAvtrTickHandler *this,CAvtrTickHandler *param_1);
CAvtrTickHandler * __thiscall CAvtrTickHandler::operator=(CAvtrTickHandler *this,CAvtrTickHandler *param_1);
ulong __thiscall CAvtr2004::Height(CAvtr2004 *this);
int __thiscall cHgAnigifList::IsAnimatedGIF(cHgAnigifList *this);
int __thiscall CAvtr2004::IsReady(CAvtr2004 *this);
CAvtrId * __thiscall CAvtr2004::AvatarId(CAvtr2004 *this);
CAvtr2004 * __thiscall CAvtr2004::CAvtr2004(CAvtr2004 *this,CAvtr2004 *param_1);
CAvtr2004 * __thiscall CAvtr2004::operator=(CAvtr2004 *this,CAvtr2004 *param_1);
void __thiscall CAvtr2004::SetDrawingRect(CAvtr2004 *this,tagRECT *param_1);
bool __thiscall CAvtr2004::HasDrawingRect(CAvtr2004 *this);
uchar * __thiscall CHgAvtr::GetAvatarBits(CHgAvtr *this);
int __thiscall CHgAvtr::HasAvatarBitmap(CHgAvtr *this);
void __thiscall CHgAImage::CHgAImage(CHgAImage *this,CHgAvtr *param_1);
CHgAvtr * __thiscall CHgAvtr::scalar_deleting_destructor(CHgAvtr *this,byte param_1);
CHgAvatar * __thiscall CHgAvatar::operator=(CHgAvatar *this,CHgAvatar *param_1);
void __fastcall FUN_605098e0(undefined4 param_1,int param_2,int param_3,LPCSTR param_4,LPCSTR param_5);
void __fastcall FUN_60509a70(LPCSTR param_1,int param_2,LPCSTR param_3,undefined4 param_4);
void MeInitAvatar(void);
CHgAImage * __thiscall CHgAImage::CHgAImage(CHgAImage *this);
void __thiscall CHgAvtr::~CHgAvtr(CHgAvtr *this);
int __thiscall CHgAvtr::CreateAvatarSurface(CHgAvtr *this,char *param_1);
int __thiscall CHgAImage::~CHgAImage(CHgAImage *this);
int __thiscall CHgAvtr::Create(CHgAvtr *this,char *param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall CHgAvtr::Draw(CHgAvtr *this,HDC__ *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvtr::DrawSelected(CHgAvtr *this,HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5);
int __thiscall CHgAvtr::MakeHalfImage(CHgAvtr *this,int param_1,int param_2,CHgAImage *param_3,int param_4,int param_5,CHgAImage *param_6);
int __thiscall CHgAvtr::CheckScreenMode(CHgAvtr *this);
int __thiscall CHgAvtr::CreateAnonymousAvatar(CHgAvtr *this,int param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall CHgAniAvatar::SetChance(CHgAniAvatar *this,int param_1,int param_2);
void __thiscall CHgAvatar::CHgAvatar(CHgAvatar *this);
void __thiscall CHgAvatar::~CHgAvatar(CHgAvatar *this);
int __thiscall CHgAvatar::IsMe(CHgAvatar *this,CHgAvatar *param_1);
void __thiscall CHgAvatar::SetAniAvatar(CHgAvatar *this,int param_1);
void __thiscall CHgAvatar::SetWindowHandle(CHgAvatar *this,HWND__ *param_1);
ulong __thiscall CHgAvatar::GetHeight(CHgAvatar *this);
ulong __thiscall CHgAvatar::GetWidth(CHgAvatar *this);
int __thiscall CHgAvatar::Create(CHgAvatar *this,char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
int __thiscall CHgAvatar::CreateEx(CHgAvatar *this,char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void __thiscall CHgAvatar::Destroy(CHgAvatar *this);
int __thiscall CHgAvatar::Draw(CHgAvatar *this,HDC__ *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvatar::DirectDraw(CHgAvatar *this,HDC__ *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvatar::DrawSelected(CHgAvatar *this,HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5);
int __thiscall CHgAvatar::Draw(CHgAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
int __thiscall CHgAvatar::DirectDraw(CHgAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
int __thiscall CHgAvatar::DrawSelected(CHgAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,ulong param_6,int param_7);
int __thiscall CHgAvatar::IsReady(CHgAvatar *this);
int __thiscall CHgAvatar::IsAniAvatar(CHgAvatar *this);
int __thiscall CHgAvatar::GetAvatarType(CHgAvatar *this);
void __thiscall CHgAvatar::CheckAvatarFolder(CHgAvatar *this);
int __thiscall CHgAvtr::_EXCEED_INDEX(CHgAvtr *this,CHgAImage *param_1,int param_2);
int __thiscall CHgAvtr::_Drawgali(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvtr::_Drawgahc(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvtr::_NBackHead(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvtr::_NFace(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvtr::_NFrontHead(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvtr::_AFace(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvtr::_NCreateAvatarSurFace_Step1(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgAvtr::_NCreateAvatarSurFace_Step2(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3);
int __thiscall CHgAvtr::_NCreateAvatarSurFace_Step3(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3);
int __thiscall CHgAvtr::_ACreateAvatarSurFace_Step1(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall CHgAvtr::_ACreateAvatarSurFace_Step2(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_6050c7b0(int param_1);
int * __thiscall FUN_6050c8b0(void *this,int *param_1);
void Catch_All@6050c9b8(void);
void FUN_6050c9d0(undefined4 *param_1);
int FUN_6050ca20(int param_1);
int * FUN_6050cba0(int *param_1);
void Catch_All@6050cc31(void);
void FUN_6050cc50(void);
void FUN_6050cc60(void);
void FUN_6050ccb0(void);
undefined4 FUN_6050cd00(void);
void FUN_6050cd40(void);
void FUN_6050cd60(void);
int * FUN_6050cdb0(int *param_1);
void FUN_6050ce30(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_6050cf10(void);
void FUN_6050cf80(void);
int * FUN_6050cfc0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_5);
undefined4 * FUN_6050d060(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
undefined4 * __thiscall FUN_6050d350(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@6050d3ea(void);
void FUN_6050d400(void);
void FUN_6050d420(void);
void FUN_6050d460(int *param_1);
void __thiscall FUN_6050d4a0(void *this,int param_1);
undefined4 * __thiscall FUN_6050d4f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void Catch_All@6050d57a(void);
void FUN_6050d590(void);
int __fastcall FUN_6050d600(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __fastcall FUN_6050d650(undefined4 param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,void *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_6050d6e0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void Catch_All@6050d73c(void);
void __thiscall std::logic_error::~logic_error(logic_error *this);
void FUN_6050d7a0(exception *param_1);
int __cdecl InitAvatarDll(void);
void __cdecl DestroyAvatarDll(void);
void __cdecl FUN_6050d860(char *param_1,char param_2);
void __fastcall FUN_6050d8b0(LPCSTR param_1);
void FUN_6050da80(void);
undefined4 FUN_6050dc10(undefined4 param_1,int param_2);
int __cdecl GetHangameDirectory(char *param_1);
void __thiscall CHgAImage::CHgAImage(CHgAImage *this);
void __thiscall CGdiObject::~CGdiObject(CGdiObject *this);
undefined4 __fastcall FUN_6050dde0(CHgAImage *param_1);
void __thiscall CHgAImage::CHgAImage(CHgAImage *this);
undefined4 * __thiscall CAvatarLayer::scalar_deleting_destructor(CAvatarLayer *this,byte param_1);
void __thiscall CAvatarLayer::~CAvatarLayer(CAvatarLayer *this);
void __thiscall FUN_6050df80(void *this,int param_1);
undefined4 * __thiscall CGdiObject::scalar_deleting_destructor(CGdiObject *this,byte param_1);
undefined4 __thiscall FUN_6050e190(void *this,CHgAImage *param_1);
void FUN_6050e250(int param_1,int param_2);
void FUN_6050e420(void);
undefined4 * __thiscall lsp::CLsp::scalar_deleting_destructor(CLsp *this,byte param_1);
void FUN_6050e530(void);
void __thiscall lsp::CLsp::vfunction2(CLsp *this,int param_1,uint param_2);
void __thiscall lsp::CLsp::vfunction4(CLsp *this);
void __fastcall FUN_6050e640(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __thiscall FUN_6050e8e0(void *this,int param_1,int *param_2);
void __thiscall lsp::CLspDib::CLspDib(CLspDib *this);
undefined4 * __thiscall lsp::CLspDib::scalar_deleting_destructor(CLspDib *this,byte param_1);
void __thiscall lsp::CLspDib::~CLspDib(CLspDib *this);
void __thiscall lsp::CLspDib::vfunction5(CLspDib *this,int param_1,uint param_2,undefined2 param_3,int param_4);
void __thiscall lsp::CLspDib::vfunction4(CLspDib *this);
void __thiscall lsp::CLspDib::vfunction3(CLspDib *this);
void FUN_6050ec80(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void FUN_6050ed00(HDC param_1,HGDIOBJ param_2,int param_3,int param_4,int param_5,int param_6);
void __thiscall FUN_6050ef80(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_6050f030(int param_1,int param_2);
void __cdecl InitDefaultAvatars(void);
void __cdecl DestroyDefaultAvatar(void);
void __cdecl DrawDefaultAvatar(HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,char param_6,bool param_7,ulong param_8);
void __thiscall CAvtrTickHandler::~CAvtrTickHandler(CAvtrTickHandler *this);
void __thiscall CAvtrTickHandler::clear(CAvtrTickHandler *this);
void __thiscall CAvtrTickHandler::SetSize(CAvtrTickHandler *this,int param_1);
void __thiscall CAvtrTickHandler::SetDelay(CAvtrTickHandler *this,int param_1,ulong param_2);
void __thiscall CAvtrTickHandler::FrameMove(CAvtrTickHandler *this,int param_1,CAvtrPart *param_2);
ulong __thiscall CAvtrTickHandler::getNowFrameNo(CAvtrTickHandler *this,int param_1);
CAvtr2004 * __thiscall CAvtr2004::CAvtr2004(CAvtr2004 *this);
void __thiscall CAvtr2004::~CAvtr2004(CAvtr2004 *this);
int __thiscall CAvtr2004::Create(CAvtr2004 *this,char *param_1,int param_2,int param_3,int param_4,ulong param_5);
int __thiscall CAvtr2004::Create(CAvtr2004 *this,CAvtrId *param_1,int param_2,int param_3,int param_4,ulong param_5);
int __thiscall CAvtr2004::CreateBlock(CAvtr2004 *this,CAvtrId *param_1,int param_2,int param_3,int param_4,ulong param_5);
bool __thiscall CAvtr2004::SetBkgndImage(CAvtr2004 *this,char *param_1);
void __thiscall CAvtr2004::Destroy(CAvtr2004 *this);
int __thiscall CAvtr2004::Draw(CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,int param_4,bool param_5,ulong param_6);
void __thiscall CAvtr2004::DrawSelected(CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5,bool param_6,ulong param_7);
int __thiscall CAvtr2004::DrawDefaultAvtr(CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,bool param_4,ulong param_5);
int __thiscall CAvtr2004::ChangeAvatarExpress(CAvtr2004 *this,char param_1);
void __thiscall CAvtr2004::TransBlt(CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,HDC__ *param_6,int param_7,int param_8,int param_9,int param_10);
int __thiscall CAvtr2004::ReCreate(CAvtr2004 *this);
void __thiscall CAvtr2004::DrawOneImage(CAvtr2004 *this,tagRECT *param_1,tagRECT *param_2,CAvtrPart *param_3,int param_4);
void __thiscall CAvtr2004::GetDrawRect(CAvtr2004 *this,tagRECT *param_1,tagRECT *param_2);
void __thiscall CAvtr2004::TransDIBits(CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,void *param_10);
void __thiscall CAvtr2004::DrawOneImage(CAvtr2004 *this,CHgAImage *param_1,tagRECT *param_2,tagRECT *param_3,CAvtrPart *param_4,int param_5);
void __thiscall CAvtr2004::MakeComAvtrId(CAvtr2004 *this,CAvtrId *param_1,int *param_2,int *param_3,int *param_4);
tagBITMAPINFO * __thiscall CAvtr2004::GetLspBitmapInfo(CAvtr2004 *this);
uchar * __thiscall CAvtr2004::GetLspDIBData(CAvtr2004 *this);
CLspDib * __thiscall CAvtr2004::GetLsp(CAvtr2004 *this);
void FUN_60511210(uint param_1);
void FUN_605112f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void FUN_605113b0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 FUN_605114d0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void FUN_605119c0(undefined4 *param_1);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
void FUN_60511a30(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1,char *param_2);
void FUN_60511bc0(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_60511ce0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1);
void __thiscall FUN_60511d90(void *this,undefined4 *param_1,char param_2,void *param_3);
void FUN_60511fd0(int *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2,int param_3,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall FUN_605120b0(undefined4 param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
void __thiscall FUN_605120e0(void *this,int param_1);
undefined4 * __thiscall FUN_60512130(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void Catch_All@605121b8(void);
void __thiscall FUN_605121d0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,undefined4 param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void Catch_All@605123ad(void);
void Catch_All@605124ab(void);
void FUN_60512560(void);
void __cdecl FUN_605125f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void __fastcall FUN_60512670(undefined4 param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4);
void __thiscall FUN_605126a0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
void Catch_All@605126fc(void);
int __cdecl FUN_60512730(int param_1);
void __fastcall FUN_60512780(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@60512800(void);
void FUN_60512860(void);
void __fastcall FUN_60512880(int param_1);
void FUN_60512890(void);
void FUN_605128b0(void);
void FUN_605128d0(void);
void __fastcall FUN_605128f0(char *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void FUN_60512b00(void);
void FUN_60512bc0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void FUN_60512cf0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
bool __fastcall FUN_60512d80(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_60512f50(char *param_1);
CAvtrPart * __thiscall CAvtrPart::CAvtrPart(CAvtrPart *this);
void __thiscall CAvtrPart::~CAvtrPart(CAvtrPart *this);
CAvtrId * __thiscall CAvtrId::CAvtrId(CAvtrId *this);
void __thiscall CAvtrId::Set(CAvtrId *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2);
void __thiscall CAvtrId::~CAvtrId(CAvtrId *this);
bool __thiscall CAvtrId::Add(CAvtrId *this,char *param_1,bool param_2,char *param_3);
undefined * Catch_All@605135d9(void);
void FUN_605135e1(void);
void __thiscall CAvtrId::AddPrefix(CAvtrId *this,char *param_1);
bool __thiscall CAvtrId::IsExpressionAvatar(CAvtrId *this);
char __thiscall CAvtrId::GetExpressionCode(CAvtrId *this);
bool __thiscall CAvtrId::SetExpressionCode(CAvtrId *this,char param_1);
void __thiscall CAvtrId::Copy(CAvtrId *this,CAvtrId *param_1);
bool __thiscall CAvtrId::CheckDefaultAvatarId(CAvtrId *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
int * __thiscall CAvtrId::FindExpressAvtrId(CAvtrId *this);
bool __thiscall CAvtrId::ToString(CAvtrId *this,char *param_1,bool param_2);
bool __thiscall CAvtrId::ToString(CAvtrId *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2);
int __cdecl CAvtrPartPool::CreateInstance(void);
CAvtrPartPool * __cdecl CAvtrPartPool::Inst(void);
int __cdecl CAvtrPartPool::DestroyInstance(void);
void __cdecl CAvtrPartPool::CreateDLThread(void);
void __cdecl CAvtrPartPool::DestroyDLThread(void);
void __thiscall CAvtrPartPool::~CAvtrPartPool(CAvtrPartPool *this);
void __thiscall CAvtrPartPool::RequestLoad(CAvtrPartPool *this,CAvtrId *param_1,bool param_2);
void FUN_60514310(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall CAvtrPartPool::FileLoad(CAvtrPartPool *this,CAvtrId *param_1);
void __thiscall CAvtrPartPool::FileLoad(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
CAvtrPart * __thiscall CAvtrPartPool::Get(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall CAvtrPartPool::AdjustAvtrPart(CAvtrPartPool *this);
void __thiscall CAvtrPartPool::Add(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall CAvtrPartPool::Lock(CAvtrPartPool *this);
void __thiscall CAvtrPartPool::Unlock(CAvtrPartPool *this);
undefined4 * FUN_60514ba0(undefined4 *param_1);
void FUN_60514cf0(undefined4 *param_1);
void FUN_60514ed0(undefined1 *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2);
void FUN_60514f90(void);
void __fastcall FUN_60514ff0(int param_1);
undefined4 Catch_All@60515155(void);
undefined4 FUN_60515160(int param_1);
void FUN_605151a0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void __fastcall FUN_60515270(char *param_1);
void FUN_605153e0(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int * FUN_60515500(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int * FUN_60515580(int *param_1);
void FUN_605155f0(void);
basic_string<char,std::char_traits<char>,std::allocator<char>_> *FUN_60515610(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void __fastcall FUN_60515680(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
undefined4 FUN_60515880(void);
void FUN_605158a0(int param_1);
void __thiscall FUN_60515910(void *this,undefined4 *param_1,char param_2,void *param_3);
void FUN_60515b50(void);
void FUN_60515b70(void);
void FUN_60515bc0(void);
undefined4 * FUN_60515c00(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void FUN_60515c50(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __fastcall FUN_60515c90(int param_1);
undefined4 __cdecl FUN_60515d20(undefined4 param_1,int *param_2,int param_3,int *param_4,int param_5);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_60515db0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
undefined4 __cdecl FUN_60515ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,undefined4 *param_6);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void FUN_60515f30(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
undefined4 * __cdecl FUN_60515fc0(undefined4 *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
void FUN_60516060(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5);
void FUN_605160c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,undefined4 *param_6,int *param_7,undefined4 *param_8);
void Catch_All@60516193(void);
undefined4 * FUN_60516210(undefined4 *param_1,int *param_2,int *param_3);
void __fastcall FUN_60516290(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5);
HRESULT URLDownloadToFileA(LPUNKNOWN param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4,LPBINDSTATUSCALLBACK param_5);
void __cdecl FUN_605162b0(uint param_1);
void __fastcall __security_check_cookie(int param_1);
void __cdecl operator_delete(void *param_1);
void * __cdecl operator_new(uint param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
char * __thiscall std::exception::std::exception::what(exception *this);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_605163d7(void);
void __cdecl operator_delete[](void *param_1);
void `eh_vector_constructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,_func_void_void_ptr *param_5);
void FUN_60516443(void);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_605164f7(void);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl purecall(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,int *param_3);
void FUN_6051689e(void);
void entry(int *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_60516a31(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
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
void __CxxFrameHandler3(void);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __cdecl local_unwind4(void);
void Unwind@60516d00(void);
void Unwind@60516d0c(void);
void Unwind@60516d40(void);
void Unwind@60516d49(void);
void Unwind@60516d70(void);
void Unwind@60516d79(void);
void Unwind@60516d85(void);
void Unwind@60516d91(void);
void Unwind@60516dc0(void);
void Unwind@60516dc9(void);
void Unwind@60516dd5(void);
void Unwind@60516de1(void);
void Unwind@60516e10(void);
void Unwind@60516e19(void);
void Unwind@60516e22(void);
void Unwind@60516e2b(void);
void Unwind@60516e37(void);
void Unwind@60516e43(void);
void Unwind@60516e4f(void);
void Unwind@60516e80(void);
void Unwind@60516e89(void);
void Unwind@60516ed0(void);
void Unwind@60516ef3(void);
void Unwind@60516efc(void);
void Unwind@60516f08(void);
void Unwind@60516f11(void);
void Unwind@60516f1a(void);
void Unwind@60516f60(void);
void Unwind@60516fa0(void);
void Unwind@60516fa9(void);
void Unwind@60516fd0(void);
void Unwind@60517000(void);
void Unwind@60517030(void);
void Unwind@60517060(void);
void Unwind@60517069(void);
void Unwind@60517072(void);
void Unwind@6051707b(void);
void Unwind@60517084(void);
void Unwind@605170b0(void);
void Unwind@605170b9(void);
void __thiscall CHgAniAvatar::Unwind@605170f0(CHgAniAvatar *this);
void Unwind@60517110(void);
void __thiscall CHgAniAvatar::Unwind@60517140(CHgAniAvatar *this);
void __thiscall CHgAniAvatar::Unwind@60517160(CHgAniAvatar *this);
void Unwind@605171a0(void);
void Unwind@605171d0(void);
void Unwind@60517200(void);
void Unwind@60517230(void);
void Unwind@60517238(void);
void Unwind@60517244(void);
void Unwind@60517250(void);
void Unwind@6051725c(void);
void Unwind@60517290(void);
void Unwind@60517299(void);
void Unwind@605172c0(void);
void __thiscall CHgAniAvatar::Unwind@605172c9(CHgAniAvatar *this);
void __thiscall CHgAniAvatar::Unwind@60517300(CHgAniAvatar *this);
void Unwind@60517320(void);
void Unwind@60517350(void);
void Unwind@60517390(void);
void Unwind@605173c0(void);
void Unwind@605173f0(void);
void Unwind@60517420(void);
void Unwind@6051742c(void);
void Unwind@60517480(void);
void Unwind@605174b0(void);
void Unwind@605174e0(void);
void Unwind@60517520(void);
void Unwind@60517560(void);
void Unwind@6051756a(void);
void Unwind@60517574(void);
void Unwind@6051757e(void);
void Unwind@60517588(void);
void Unwind@60517592(void);
void Unwind@6051759c(void);
void Unwind@605175a6(void);
void Unwind@605175b0(void);
void Unwind@605175ba(void);
void Unwind@60517600(void);
void Unwind@60517630(void);
void Unwind@60517660(void);
void Unwind@60517668(void);
void Unwind@60517690(void);
void Unwind@605176c0(void);
void Unwind@605176cc(void);
void Unwind@605176d8(void);
void Unwind@605176e5(void);
void Unwind@60517710(void);
void Unwind@60517719(void);
void Unwind@60517750(void);
void Unwind@60517759(void);
void Unwind@60517765(void);
void Unwind@605177a0(void);
void Unwind@605177a9(void);
void Unwind@605177b6(void);
void Unwind@605177c0(void);
void Unwind@605177ce(void);
void Unwind@605177d6(void);
void Unwind@605177de(void);
void Unwind@605177e7(void);
void Unwind@605177f0(void);
void Unwind@605177f8(void);
void Unwind@60517830(void);
void Unwind@60517860(void);
void Unwind@6051786b(void);
void Unwind@605178b0(void);
void Unwind@605178b8(void);
void Unwind@605178e0(void);
void Unwind@605178ed(void);
void Unwind@60517920(void);
void Unwind@6051792d(void);
void Unwind@60517960(void);
void Unwind@60517990(void);
void Unwind@605179c0(void);
void Unwind@605179f0(void);
void Unwind@605179fb(void);
void Unwind@60517a30(void);
void Unwind@60517a60(void);
void Unwind@60517a6b(void);
void Unwind@60517aa0(void);
void Unwind@60517ad0(void);
void Unwind@60517ade(void);
void Unwind@60517b10(void);
void Unwind@60517b21(void);
void Unwind@60517b60(void);
void Unwind@60517b6e(void);
void Unwind@60517bb0(void);
void Unwind@60517bb9(void);
void Unwind@60517bc3(void);
void Unwind@60517bf0(void);
void Unwind@60517bfc(void);
void Unwind@60517c30(void);
void Unwind@60517c38(void);
void Unwind@60517c70(void);
void Unwind@60517ca0(void);
void Unwind@60517cd0(void);
void Unwind@60517d00(void);
void Unwind@60517d30(void);
void Unwind@60517d3b(void);
void Unwind@60517d70(void);
void Unwind@60517d7c(void);
void Unwind@60517d88(void);
void Unwind@60517d91(void);
void Unwind@60517d9d(void);
void Unwind@60517da6(void);
void Unwind@60517db2(void);
void Unwind@60517dbe(void);
void Unwind@60517dca(void);
void Unwind@60517dd6(void);
void Unwind@60517e10(void);
void Unwind@60517e1d(void);
void Unwind@60517e29(void);
void Unwind@60517e35(void);
void Unwind@60517e60(void);
void Unwind@60517e69(void);
void Unwind@60517e72(void);
void Unwind@60517e7e(void);
void Unwind@60517e87(void);
void Unwind@60517ec0(void);
void Unwind@60517ec9(void);
void Unwind@60517ed2(void);
void Unwind@60517ede(void);
void Unwind@60517eea(void);
void Unwind@60517ef7(void);
void Unwind@60517f40(void);
void Unwind@60517f49(void);
void Unwind@60517f51(void);
void Unwind@60517f5d(void);
void Unwind@60517f69(void);
void Unwind@60517f75(void);
void Unwind@60517fb0(void);
void Unwind@60517fb8(void);
void Unwind@60518000(void);
void Unwind@6051800e(void);
void Unwind@6051801c(void);
void Unwind@6051802a(void);
void Unwind@60518038(void);
void Unwind@60518046(void);
void Unwind@60518054(void);
void Unwind@60518062(void);
void Unwind@60518070(void);
void Unwind@60518078(void);
void Unwind@60518084(void);
void Unwind@6051808f(void);
void Unwind@605180d0(void);
void Unwind@60518100(void);
void Unwind@6051810a(void);
void Unwind@60518113(void);
void Unwind@6051811f(void);
void Unwind@60518139(void);
void Unwind@60518142(void);
void Unwind@60518170(void);
void Unwind@605181a0(void);
void Unwind@605181a8(void);
void Unwind@605181b4(void);
void Unwind@605181c0(void);
void Unwind@605181cc(void);
void Unwind@605181d7(void);
void Unwind@605181e0(void);
void Unwind@60518210(void);
void Unwind@60518240(void);
void FUN_60518270(void);
void FUN_605182a0(void);
void FUN_605182d0(void);
void FUN_60518300(void);
void FUN_60518310(void);
void FUN_60518330(void);
void FUN_60518350(void);
void FUN_60518370(void);

