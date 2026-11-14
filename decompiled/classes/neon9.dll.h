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
typedef unsigned int    uint3;
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

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef int ptrdiff_t;

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
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

typedef struct IInput IInput, *PIInput;

struct IInput { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

typedef struct IDxDevice IDxDevice, *PIDxDevice;

struct IDxDevice { // PlaceHolder Class Structure
};

typedef struct CManagedRes CManagedRes, *PCManagedRes;

struct CManagedRes { // PlaceHolder Class Structure
};

typedef struct CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>, *PCNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>;

struct CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

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

typedef struct CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>, *PCNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>;

struct CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> { // PlaceHolder Class Structure
};

typedef struct CDxAvatar CDxAvatar, *PCDxAvatar;

struct CDxAvatar { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct CAvtrId CAvtrId, *PCAvtrId;

struct CAvtrId { // PlaceHolder Class Structure
};

typedef struct CDxAvtr2004 CDxAvtr2004, *PCDxAvtr2004;

struct CDxAvtr2004 { // PlaceHolder Class Structure
};

typedef struct CDxAvtrPartPool CDxAvtrPartPool, *PCDxAvtrPartPool;

struct CDxAvtrPartPool { // PlaceHolder Class Structure
};

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef ulong DWORD;

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

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
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

typedef struct _OFSTRUCT _OFSTRUCT, *P_OFSTRUCT;

typedef uchar BYTE;

typedef char CHAR;

struct _OFSTRUCT {
    BYTE cBytes;
    BYTE fFixedDisk;
    WORD nErrCode;
    WORD Reserved1;
    WORD Reserved2;
    CHAR szPathName[128];
};

typedef struct _OFSTRUCT *LPOFSTRUCT;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

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

typedef struct IBindCtx IBindCtx, *PIBindCtx;

typedef struct IBindCtxVtbl IBindCtxVtbl, *PIBindCtxVtbl;

struct IBindCtx {
    struct IBindCtxVtbl *lpVtbl;
};

struct IBindCtxVtbl {
    HRESULT (*QueryInterface)(struct IBindCtx *, IID *, void **);
    ULONG (*AddRef)(struct IBindCtx *);
    ULONG (*Release)(struct IBindCtx *);
    HRESULT (*RegisterObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*RevokeObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*ReleaseBoundObjects)(struct IBindCtx *);
    HRESULT (*SetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetRunningObjectTable)(struct IBindCtx *, struct IRunningObjectTable **);
    HRESULT (*RegisterObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown *);
    HRESULT (*GetObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown **);
    HRESULT (*EnumObjectParam)(struct IBindCtx *, struct IEnumString **);
    HRESULT (*RevokeObjectParam)(struct IBindCtx *, LPOLESTR);
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

typedef struct IEnumString IEnumString, *PIEnumString;

typedef struct IEnumStringVtbl IEnumStringVtbl, *PIEnumStringVtbl;

struct IEnumString {
    struct IEnumStringVtbl *lpVtbl;
};

struct IEnumStringVtbl {
    HRESULT (*QueryInterface)(struct IEnumString *, IID *, void **);
    ULONG (*AddRef)(struct IEnumString *);
    ULONG (*Release)(struct IEnumString *);
    HRESULT (*Next)(struct IEnumString *, ULONG, LPOLESTR *, ULONG *);
    HRESULT (*Skip)(struct IEnumString *, ULONG);
    HRESULT (*Reset)(struct IEnumString *);
    HRESULT (*Clone)(struct IEnumString *, struct IEnumString **);
};

typedef struct IStream IStream, *PIStream;

struct IStream {
    struct IStreamVtbl *lpVtbl;
};

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef wchar_t WCHAR;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID CLSID;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef double ULONGLONG;

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

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

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

typedef struct IMoniker IMoniker, *PIMoniker;

typedef struct IMonikerVtbl IMonikerVtbl, *PIMonikerVtbl;

struct IMoniker {
    struct IMonikerVtbl *lpVtbl;
};

struct IMonikerVtbl {
    HRESULT (*QueryInterface)(struct IMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IMoniker *);
    ULONG (*Release)(struct IMoniker *);
    HRESULT (*GetClassID)(struct IMoniker *, CLSID *);
    HRESULT (*IsDirty)(struct IMoniker *);
    HRESULT (*Load)(struct IMoniker *, struct IStream *);
    HRESULT (*Save)(struct IMoniker *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IMoniker *, ULARGE_INTEGER *);
    HRESULT (*BindToObject)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*BindToStorage)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*Reduce)(struct IMoniker *, struct IBindCtx *, DWORD, struct IMoniker **, struct IMoniker **);
    HRESULT (*ComposeWith)(struct IMoniker *, struct IMoniker *, BOOL, struct IMoniker **);
    HRESULT (*Enum)(struct IMoniker *, BOOL, struct IEnumMoniker **);
    HRESULT (*IsEqual)(struct IMoniker *, struct IMoniker *);
    HRESULT (*Hash)(struct IMoniker *, DWORD *);
    HRESULT (*IsRunning)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, struct IMoniker *);
    HRESULT (*GetTimeOfLastChange)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, FILETIME *);
    HRESULT (*Inverse)(struct IMoniker *, struct IMoniker **);
    HRESULT (*CommonPrefixWith)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*RelativePathTo)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*GetDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR *);
    HRESULT (*ParseDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*IsSystemMoniker)(struct IMoniker *, DWORD *);
};

typedef struct tagBIND_OPTS tagBIND_OPTS, *PtagBIND_OPTS;

typedef struct tagBIND_OPTS BIND_OPTS;

struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
};

typedef struct IStream *LPSTREAM;

typedef struct IRunningObjectTable IRunningObjectTable, *PIRunningObjectTable;

typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl, *PIRunningObjectTableVtbl;

struct IRunningObjectTable {
    struct IRunningObjectTableVtbl *lpVtbl;
};

struct IRunningObjectTableVtbl {
    HRESULT (*QueryInterface)(struct IRunningObjectTable *, IID *, void **);
    ULONG (*AddRef)(struct IRunningObjectTable *);
    ULONG (*Release)(struct IRunningObjectTable *);
    HRESULT (*Register)(struct IRunningObjectTable *, DWORD, struct IUnknown *, struct IMoniker *, DWORD *);
    HRESULT (*Revoke)(struct IRunningObjectTable *, DWORD);
    HRESULT (*IsRunning)(struct IRunningObjectTable *, struct IMoniker *);
    HRESULT (*GetObjectA)(struct IRunningObjectTable *, struct IMoniker *, struct IUnknown **);
    HRESULT (*NoteChangeTime)(struct IRunningObjectTable *, DWORD, FILETIME *);
    HRESULT (*GetTimeOfLastChange)(struct IRunningObjectTable *, struct IMoniker *, FILETIME *);
    HRESULT (*EnumRunning)(struct IRunningObjectTable *, struct IEnumMoniker **);
};

typedef struct IEnumSTATSTG IEnumSTATSTG, *PIEnumSTATSTG;

typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl, *PIEnumSTATSTGVtbl;

struct IEnumSTATSTG {
    struct IEnumSTATSTGVtbl *lpVtbl;
};

struct IEnumSTATSTGVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATSTG *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATSTG *);
    ULONG (*Release)(struct IEnumSTATSTG *);
    HRESULT (*Next)(struct IEnumSTATSTG *, ULONG, STATSTG *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATSTG *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATSTG *);
    HRESULT (*Clone)(struct IEnumSTATSTG *, struct IEnumSTATSTG **);
};

typedef struct IStorage IStorage, *PIStorage;

typedef struct IStorageVtbl IStorageVtbl, *PIStorageVtbl;

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

typedef struct IEnumUnknownVtbl IEnumUnknownVtbl, *PIEnumUnknownVtbl;

struct IEnumUnknownVtbl {
    HRESULT (*QueryInterface)(struct IEnumUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IEnumUnknown *);
    ULONG (*Release)(struct IEnumUnknown *);
    HRESULT (*Next)(struct IEnumUnknown *, ULONG, struct IUnknown **, ULONG *);
    HRESULT (*Skip)(struct IEnumUnknown *, ULONG);
    HRESULT (*Reset)(struct IEnumUnknown *);
    HRESULT (*Clone)(struct IEnumUnknown *, struct IEnumUnknown **);
};

typedef struct IEnumUnknown IEnumUnknown, *PIEnumUnknown;

struct IEnumUnknown {
    struct IEnumUnknownVtbl *lpVtbl;
};

typedef LPOLESTR *SNB;

typedef struct IEnumMoniker IEnumMoniker, *PIEnumMoniker;

typedef struct IEnumMonikerVtbl IEnumMonikerVtbl, *PIEnumMonikerVtbl;

struct IEnumMoniker {
    struct IEnumMonikerVtbl *lpVtbl;
};

struct IEnumMonikerVtbl {
    HRESULT (*QueryInterface)(struct IEnumMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IEnumMoniker *);
    ULONG (*Release)(struct IEnumMoniker *);
    HRESULT (*Next)(struct IEnumMoniker *, ULONG, struct IMoniker **, ULONG *);
    HRESULT (*Skip)(struct IEnumMoniker *, ULONG);
    HRESULT (*Reset)(struct IEnumMoniker *);
    HRESULT (*Clone)(struct IEnumMoniker *, struct IEnumMoniker **);
};

typedef struct tagFORMATETC *LPFORMATETC;

typedef struct IStorage *LPSTORAGE;

typedef DWORD ULONG;

typedef OLECHAR *LPCOLESTR;

typedef struct CMixer<neon::dev::CSound,neon::util::CEmptyLock> CMixer<neon::dev::CSound,neon::util::CEmptyLock>, *PCMixer<neon::dev::CSound,neon::util::CEmptyLock>;

struct CMixer<neon::dev::CSound,neon::util::CEmptyLock> { // PlaceHolder Class Structure
};

typedef struct CMixer<neon::dev::CSound,neon::util::CCriticalSection> CMixer<neon::dev::CSound,neon::util::CCriticalSection>, *PCMixer<neon::dev::CSound,neon::util::CCriticalSection>;

struct CMixer<neon::dev::CSound,neon::util::CCriticalSection> { // PlaceHolder Class Structure
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[33];
};

typedef struct IOleClientSite IOleClientSite, *PIOleClientSite;

typedef struct IOleClientSiteVtbl IOleClientSiteVtbl, *PIOleClientSiteVtbl;

struct IOleClientSite {
    struct IOleClientSiteVtbl *lpVtbl;
};

struct IOleClientSiteVtbl {
    HRESULT (*QueryInterface)(struct IOleClientSite *, IID *, void **);
    ULONG (*AddRef)(struct IOleClientSite *);
    ULONG (*Release)(struct IOleClientSite *);
    HRESULT (*SaveObject)(struct IOleClientSite *);
    HRESULT (*GetMoniker)(struct IOleClientSite *, DWORD, DWORD, struct IMoniker **);
    HRESULT (*GetContainer)(struct IOleClientSite *, struct IOleContainer **);
    HRESULT (*ShowObject)(struct IOleClientSite *);
    HRESULT (*OnShowWindow)(struct IOleClientSite *, BOOL);
    HRESULT (*RequestNewObjectLayout)(struct IOleClientSite *);
};

typedef struct IOleContainer IOleContainer, *PIOleContainer;

typedef struct IOleContainerVtbl IOleContainerVtbl, *PIOleContainerVtbl;

struct IOleContainer {
    struct IOleContainerVtbl *lpVtbl;
};

struct IOleContainerVtbl {
    HRESULT (*QueryInterface)(struct IOleContainer *, IID *, void **);
    ULONG (*AddRef)(struct IOleContainer *);
    ULONG (*Release)(struct IOleContainer *);
    HRESULT (*ParseDisplayName)(struct IOleContainer *, struct IBindCtx *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*EnumObjects)(struct IOleContainer *, DWORD, struct IEnumUnknown **);
    HRESULT (*LockContainer)(struct IOleContainer *, BOOL);
};

typedef struct IOleClientSite *LPOLECLIENTSITE;

typedef struct CMsgDispatch CMsgDispatch, *PCMsgDispatch;

struct CMsgDispatch { // PlaceHolder Class Structure
};

typedef struct CCompositeHolder<neon::frw::CComponent> CCompositeHolder<neon::frw::CComponent>, *PCCompositeHolder<neon::frw::CComponent>;

struct CCompositeHolder<neon::frw::CComponent> { // PlaceHolder Class Structure
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

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

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

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef LONG_PTR LRESULT;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef CHAR *LPCSTR;

struct tagWNDCLASSA {
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

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct tagWNDCLASSEXA tagWNDCLASSEXA, *PtagWNDCLASSEXA;

typedef struct tagWNDCLASSEXA WNDCLASSEXA;

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

typedef struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *Pvector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *P_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct _Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Class Structure
};

typedef CLSID *LPCLSID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID IID;

typedef struct _RGNDATA _RGNDATA, *P_RGNDATA;

typedef struct _RGNDATAHEADER _RGNDATAHEADER, *P_RGNDATAHEADER;

typedef struct _RGNDATAHEADER RGNDATAHEADER;

struct _RGNDATA {
    RGNDATAHEADER rdh;
    char Buffer[1];
};

struct _RGNDATAHEADER {
    DWORD dwSize;
    DWORD iType;
    DWORD nCount;
    DWORD nRgnSize;
    RECT rcBound;
};

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef struct _devicemodeA DEVMODEA;

typedef union _union_655 _union_655, *P_union_655;

typedef union _union_658 _union_658, *P_union_658;

typedef struct _struct_656 _struct_656, *P_struct_656;

typedef struct _struct_657 _struct_657, *P_struct_657;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

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

typedef struct _DISPLAY_DEVICEA _DISPLAY_DEVICEA, *P_DISPLAY_DEVICEA;

struct _DISPLAY_DEVICEA {
    DWORD cb;
    CHAR DeviceName[32];
    CHAR DeviceString[128];
    DWORD StateFlags;
    CHAR DeviceID[128];
    CHAR DeviceKey[128];
};

typedef struct _DISPLAY_DEVICEA *PDISPLAY_DEVICEA;

typedef struct _RGNDATA *LPRGNDATA;

typedef struct CMoveReduction CMoveReduction, *PCMoveReduction;

struct CMoveReduction { // PlaceHolder Class Structure
};

typedef struct CActor CActor, *PCActor;

struct CActor { // PlaceHolder Class Structure
};

typedef struct CEffector CEffector, *PCEffector;

struct CEffector { // PlaceHolder Class Structure
};

typedef struct CMoveAcceleration CMoveAcceleration, *PCMoveAcceleration;

struct CMoveAcceleration { // PlaceHolder Class Structure
};

typedef struct CSound CSound, *PCSound;

struct CSound { // PlaceHolder Class Structure
};

typedef struct CWindow CWindow, *PCWindow;

struct CWindow { // PlaceHolder Class Structure
};

typedef struct CControl CControl, *PCControl;

struct CControl { // PlaceHolder Class Structure
};

typedef struct CTextWindow CTextWindow, *PCTextWindow;

struct CTextWindow { // PlaceHolder Class Structure
};

typedef struct CEdit CEdit, *PCEdit;

struct CEdit { // PlaceHolder Class Structure
};

typedef struct CSliderBar CSliderBar, *PCSliderBar;

struct CSliderBar { // PlaceHolder Class Structure
};

typedef struct CCheckButton CCheckButton, *PCCheckButton;

struct CCheckButton { // PlaceHolder Class Structure
};

typedef struct CRadioButton CRadioButton, *PCRadioButton;

struct CRadioButton { // PlaceHolder Class Structure
};

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { // PlaceHolder Class Structure
};

typedef struct CCheckBox CCheckBox, *PCCheckBox;

struct CCheckBox { // PlaceHolder Class Structure
};

typedef struct CTile CTile, *PCTile;

struct CTile { // PlaceHolder Class Structure
};

typedef struct CText CText, *PCText;

struct CText { // PlaceHolder Class Structure
};

typedef struct CSprite CSprite, *PCSprite;

struct CSprite { // PlaceHolder Class Structure
};

typedef struct CFrame CFrame, *PCFrame;

struct CFrame { // PlaceHolder Class Structure
};

typedef struct CAppManager CAppManager, *PCAppManager;

struct CAppManager { // PlaceHolder Class Structure
};

typedef struct CComponent CComponent, *PCComponent;

struct CComponent { // PlaceHolder Class Structure
};

typedef struct CFileManager CFileManager, *PCFileManager;

struct CFileManager { // PlaceHolder Class Structure
};

typedef struct CResource CResource, *PCResource;

struct CResource { // PlaceHolder Class Structure
};

typedef struct CRLESurface CRLESurface, *PCRLESurface;

struct CRLESurface { // PlaceHolder Class Structure
};

typedef struct CManager CManager, *PCManager;

struct CManager { // PlaceHolder Class Structure
};

typedef struct CFile CFile, *PCFile;

struct CFile { // PlaceHolder Class Structure
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

typedef WCHAR *LPCWSTR;

typedef long HRESULT;

typedef LONG *PLONG;

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

typedef short SHORT;

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

typedef long clock_t;

typedef ULONG_PTR SIZE_T;

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct HKL__ HKL__, *PHKL__;

struct HKL__ {
    int unused;
};

typedef struct tagPOINT *LPPOINT;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef DWORD *PDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct HKL__ *HKL;

typedef HINSTANCE HMODULE;

typedef struct tagSIZE *LPSIZE;

typedef BYTE *LPBYTE;

typedef long *LPLONG;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef struct HDC__ *HDC;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef WORD ATOM;

typedef struct HRGN__ *HRGN;

typedef int HFILE;

typedef struct tagRECT *LPRECT;

typedef HANDLE HGLOBAL;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

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

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct tagWAVEINCAPSA tagWAVEINCAPSA, *PtagWAVEINCAPSA;

typedef UINT MMVERSION;

struct tagWAVEINCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[32];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
};

typedef union _union_1099 _union_1099, *P_union_1099;

union _union_1099 {
    HWND hwndOwner;
    DWORD cMultipleItems;
};

typedef struct tWAVEFORMATEX tWAVEFORMATEX, *PtWAVEFORMATEX;

struct tWAVEFORMATEX {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
};

typedef struct HWAVEIN__ HWAVEIN__, *PHWAVEIN__;

typedef struct HWAVEIN__ *HWAVEIN;

typedef HWAVEIN *LPHWAVEIN;

struct HWAVEIN__ {
    int unused;
};

typedef union _union_1095 _union_1095, *P_union_1095;

union _union_1095 {
    DWORD dwControlID;
    DWORD dwControlType;
};

typedef struct tagMIXERCONTROLA tagMIXERCONTROLA, *PtagMIXERCONTROLA;

typedef union _union_1085 _union_1085, *P_union_1085;

typedef union _union_1088 _union_1088, *P_union_1088;

typedef struct _struct_1086 _struct_1086, *P_struct_1086;

typedef struct _struct_1087 _struct_1087, *P_struct_1087;

union _union_1088 {
    DWORD cSteps;
    DWORD cbCustomData;
    DWORD dwReserved[6];
};

struct _struct_1086 {
    LONG lMinimum;
    LONG lMaximum;
};

struct _struct_1087 {
    DWORD dwMinimum;
    DWORD dwMaximum;
};

union _union_1085 {
    struct _struct_1086 s;
    struct _struct_1087 s2;
    DWORD dwReserved[6];
};

struct tagMIXERCONTROLA {
    DWORD cbStruct;
    DWORD dwControlID;
    DWORD dwControlType;
    DWORD fdwControl;
    DWORD cMultipleItems;
    CHAR szShortName[16];
    CHAR szName[64];
    union _union_1085 Bounds;
    union _union_1088 Metrics;
};

typedef struct tMIXERCONTROLDETAILS tMIXERCONTROLDETAILS, *PtMIXERCONTROLDETAILS;

union _union_1099 {
    HWND hwndOwner;
    DWORD cMultipleItems;
};

struct tMIXERCONTROLDETAILS {
    DWORD cbStruct;
    DWORD dwControlID;
    DWORD cChannels;
    union _union_1099 u;
    DWORD cbDetails;
    LPVOID paDetails;
};

typedef struct tagMIXERLINEA tagMIXERLINEA, *PtagMIXERLINEA;

typedef struct tagMIXERLINEA *LPMIXERLINEA;

typedef struct _struct_1081 _struct_1081, *P_struct_1081;

struct _struct_1081 {
    DWORD dwType;
    DWORD dwDeviceID;
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[32];
};

struct tagMIXERLINEA {
    DWORD cbStruct;
    DWORD dwDestination;
    DWORD dwSource;
    DWORD dwLineID;
    DWORD fdwLine;
    DWORD_PTR dwUser;
    DWORD dwComponentType;
    DWORD cChannels;
    DWORD cConnections;
    DWORD cControls;
    CHAR szShortName[16];
    CHAR szName[64];
    struct _struct_1081 Target;
};

typedef struct wavehdr_tag wavehdr_tag, *Pwavehdr_tag;

typedef struct wavehdr_tag *LPWAVEHDR;

struct wavehdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD dwLoops;
    struct wavehdr_tag *lpNext;
    DWORD_PTR reserved;
};

typedef struct HMIXER__ HMIXER__, *PHMIXER__;

struct HMIXER__ {
    int unused;
};

typedef struct tWAVEFORMATEX WAVEFORMATEX;

typedef WAVEFORMATEX *LPCWAVEFORMATEX;

typedef struct tagMIXERLINECONTROLSA tagMIXERLINECONTROLSA, *PtagMIXERLINECONTROLSA;

typedef struct tagMIXERLINECONTROLSA *LPMIXERLINECONTROLSA;

typedef struct tagMIXERCONTROLA *LPMIXERCONTROLA;

union _union_1095 {
    DWORD dwControlID;
    DWORD dwControlType;
};

struct tagMIXERLINECONTROLSA {
    DWORD cbStruct;
    DWORD dwLineID;
    union _union_1095 u;
    DWORD cControls;
    DWORD cbmxctrl;
    LPMIXERCONTROLA pamxctrl;
};

typedef struct tagWAVEOUTCAPSA tagWAVEOUTCAPSA, *PtagWAVEOUTCAPSA;

struct tagWAVEOUTCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[32];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    DWORD dwSupport;
};

typedef struct _struct_1022 _struct_1022, *P_struct_1022;

struct _struct_1022 {
    DWORD songptrpos;
};

typedef struct _struct_1021 _struct_1021, *P_struct_1021;

struct _struct_1021 {
    BYTE hour;
    BYTE min;
    BYTE sec;
    BYTE frame;
    BYTE fps;
    BYTE dummy;
    BYTE pad[2];
};

typedef struct HWAVEOUT__ HWAVEOUT__, *PHWAVEOUT__;

typedef struct HWAVEOUT__ *HWAVEOUT;

struct HWAVEOUT__ {
    int unused;
};

typedef struct HMIXER__ *HMIXER;

typedef union _union_1020 _union_1020, *P_union_1020;

struct _struct_1021 {
    BYTE hour;
    BYTE min;
    BYTE sec;
    BYTE frame;
    BYTE fps;
    BYTE dummy;
    BYTE pad[2];
};

struct _struct_1022 {
    DWORD songptrpos;
};

union _union_1020 {
    DWORD ms;
    DWORD sample;
    DWORD cb;
    DWORD ticks;
    struct _struct_1021 smpte;
    struct _struct_1022 midi;
};

typedef void (TIMECALLBACK)(UINT, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);

typedef TIMECALLBACK *LPTIMECALLBACK;

typedef struct HMIXEROBJ__ HMIXEROBJ__, *PHMIXEROBJ__;

typedef struct HMIXEROBJ__ *HMIXEROBJ;

struct HMIXEROBJ__ {
    int unused;
};

typedef UINT MCIDEVICEID;

typedef HMIXER *LPHMIXER;

typedef struct mmtime_tag mmtime_tag, *Pmmtime_tag;

union _union_1020 {
    DWORD ms;
    DWORD sample;
    DWORD cb;
    DWORD ticks;
    struct _struct_1021 smpte;
    struct _struct_1022 midi;
};

struct mmtime_tag {
    UINT wType;
    union _union_1020 u;
};

typedef DWORD MCIERROR;

typedef struct tagWAVEINCAPSA *LPWAVEINCAPSA;

typedef HWAVEOUT *LPHWAVEOUT;

typedef struct tagWAVEOUTCAPSA *LPWAVEOUTCAPSA;

typedef struct mmtime_tag *LPMMTIME;

typedef UINT MMRESULT;

typedef struct tMIXERCONTROLDETAILS *LPMIXERCONTROLDETAILS;

typedef struct HIMC__ HIMC__, *PHIMC__;

struct HIMC__ {
    int unused;
};

typedef struct HIMC__ *HIMC;

typedef struct exception exception, *Pexception;

struct exception { // class exception
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct _Container_base_aux _Container_base_aux, *P_Container_base_aux;

struct _Container_base_aux { // class _Container_base_aux
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

typedef struct _Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *P_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;


// WARNING! conflicting data type names: /ClassDataTypes/std/_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>/_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> - /std/_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>

struct _Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // class _Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> : _Container_base_aux
    struct _Container_base_aux _Container_base_aux;
};

struct _Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // class _Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> : _Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    struct _Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;
};


// WARNING! conflicting data type names: /ClassDataTypes/std/vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>/vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> - /std/vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    type_info * (*vfunction1)(void *, byte); // type_info virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct IDxEffect IDxEffect, *PIDxEffect;

struct IDxEffect { // class IDxEffect
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CMove CMove, *PCMove;

typedef struct CMove_vftable CMove_vftable, *PCMove_vftable;

typedef struct CCompositeHolder<neon::frw::CComponent>_data CCompositeHolder<neon::frw::CComponent>_data, *PCCompositeHolder<neon::frw::CComponent>_data;

typedef struct CObject_data CObject_data, *PCObject_data;

typedef struct CMove_data CMove_data, *PCMove_data;

struct CCompositeHolder<neon::frw::CComponent>_data {
    int offset_0x0;
    void *offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
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
    int offset_0x1c;
    int offset_0x20;
};

struct CObject_data {
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
    undefined **offset_0x1c;
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
    undefined4 offset_0x40;
    undefined4 offset_0x44;
};

struct CMove_data {
    undefined4 offset_0x0;
    undefined1 offset_0x4;
    undefined1 offset_0x5;
    undefined1 offset_0x6;
    undefined field4_0x7;
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
};

struct CMove_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CMove virtual function #1
    void (*Logic)(void *); // CMove virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CObject virtual function #5
    void (*~IDxDevice)(void *); // IDxDevice virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CObject virtual function #11
    void (*Copy)(void *, struct CObject *); // CObject virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*ProcessMove)(void *, ulong); // CMove virtual function #15
    void (*SetParentPos)(void *); // CMove virtual function #16
};

struct CMove { // class CMove : CObject
    struct CMove_vftable *vftablePtr;
    struct CCompositeHolder<neon::frw::CComponent>_data CCompositeHolder<neon::frw::CComponent>_data;
    struct CObject_data CObject_data;
    struct CMove_data CMove_data;
};

typedef struct CEffector_data CEffector_data, *PCEffector_data;

struct CEffector_data {
    undefined4 offset_0x0;
    undefined1 offset_0x4;
    undefined1 offset_0x5;
    undefined1 offset_0x6;
    undefined1 offset_0x7;
    undefined1 offset_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
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
};

typedef struct CEffector_vftable CEffector_vftable, *PCEffector_vftable;

struct CEffector_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffector virtual function #1
    void (*Logic)(void *); // CEffector virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CObject virtual function #5
    void (*~IDxDevice)(void *); // IDxDevice virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CObject virtual function #11
    void (*Copy)(void *, struct CObject *); // CObject virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*OnFinish)(void *); // CEffector virtual function #15
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/phy/CEffector/CEffector - /neon/phy/CEffector

typedef struct CMoveAcceleration_vftable CMoveAcceleration_vftable, *PCMoveAcceleration_vftable;

struct CMoveAcceleration_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CMoveAcceleration virtual function #1
    void (*Logic)(void *); // CMove virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CObject virtual function #5
    void (*~IDxDevice)(void *); // IDxDevice virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CObject virtual function #11
    void (*Copy)(void *, struct CObject *); // CObject virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*ProcessMove)(void *, ulong); // CMoveAcceleration virtual function #15
    void (*SetParentPos)(void *); // CMove virtual function #16
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/phy/CMoveAcceleration/CMoveAcceleration - /neon/phy/CMoveAcceleration

typedef struct CMoveAcceleration_data CMoveAcceleration_data, *PCMoveAcceleration_data;

struct CMoveAcceleration_data {
    undefined4 offset_0x0;
};

typedef struct CActor_vftable CActor_vftable, *PCActor_vftable;

struct CActor_vftable {
    CText * (*deleting_destructor)(void *, byte); // CActor virtual function #1
    void (*Logic)(void *); // CActor virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CVisual virtual function #11
    void (*Copy)(void *, struct CObject *); // CVisual virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CVisual virtual function #15
    void (*Blt)(void *, int, int, struct IDxSurface *, struct tagRECT *, bool); // CRLESurface virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CVisual virtual function #27
};

typedef struct CActor_data CActor_data, *PCActor_data;

struct CActor_data {
    undefined4 offset_0x0;
    undefined1 offset_0x4;
    undefined1 offset_0x5;
    undefined1 offset_0x6;
    undefined1 offset_0x7;
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
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/phy/CActor/CActor - /neon/phy/CActor

typedef struct CMoveReduction_data CMoveReduction_data, *PCMoveReduction_data;

struct CMoveReduction_data {
    undefined4 offset_0x0;
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/phy/CMoveReduction/CMoveReduction - /neon/phy/CMoveReduction

typedef struct CMoveReduction_vftable CMoveReduction_vftable, *PCMoveReduction_vftable;

struct CMoveReduction_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CMoveReduction virtual function #1
    void (*Logic)(void *); // CMove virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CObject virtual function #5
    void (*~IDxDevice)(void *); // IDxDevice virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CObject virtual function #11
    void (*Copy)(void *, struct CObject *); // CObject virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*ProcessMove)(void *, ulong); // CMoveReduction virtual function #15
    void (*SetParentPos)(void *); // CMove virtual function #16
};

typedef struct IFunctor<void,int> IFunctor<void,int>, *PIFunctor<void,int>;

struct IFunctor<void,int> { // class IFunctor<void,int>
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct IOleObj_vftable IOleObj_vftable, *PIOleObj_vftable;

struct IOleObj_vftable {
    void (*MsgHandler)(void *, struct tagMSG *); // MSVCR90.DLL IOleObj pure virtual function #1
};

typedef struct IOleObj IOleObj, *PIOleObj;

struct IOleObj { // class IOleObj
    struct IOleObj_vftable *vftablePtr;
};

typedef struct CMemFunction<neon::visual::CSprite,void,int> CMemFunction<neon::visual::CSprite,void,int>, *PCMemFunction<neon::visual::CSprite,void,int>;

typedef struct CMemFunction<neon::visual::CSprite,void,int>_vftable CMemFunction<neon::visual::CSprite,void,int>_vftable, *PCMemFunction<neon::visual::CSprite,void,int>_vftable;

struct CMemFunction<neon::visual::CSprite,void,int> { // class CMemFunction<neon::visual::CSprite,void,int> : IFunctor<void,int>
    struct CMemFunction<neon::visual::CSprite,void,int>_vftable *vftablePtr;
};

struct CMemFunction<neon::visual::CSprite,void,int>_vftable {
    void (*vfunction1)(void *); // CMemFunction<...> virtual function #1
    undefined4 * (*vfunction2)(void *); // CMemFunction<...> virtual function #2
};

typedef struct CInputDI8_vftable CInputDI8_vftable, *PCInputDI8_vftable;

struct CInputDI8_vftable {
    void (*vfunction1)(void *); // CInputDI8 virtual function #1
    void (*vfunction2)(void *); // CInputDI8 virtual function #2
    void (*vfunction3)(void *, undefined4, undefined4); // CInputDI8 virtual function #3
    void (*vfunction4)(void *); // CInputDI8 virtual function #4
    byte (*vfunction5)(void *, byte); // CInputDI8 virtual function #5
    void (*vfunction6)(void *); // CInputDI8 virtual function #6
    void (*vfunction7)(void *); // CInputDI8 virtual function #7
    undefined4 * (*deleting_destructor)(void *, byte); // CInputDI8 virtual function #8
};

typedef struct CInputDI8_data CInputDI8_data, *PCInputDI8_data;

struct CInputDI8_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    int *offset_0xc;
    undefined4 offset_0x10;
    int *offset_0x14;
    undefined4 offset_0x18;
};

typedef struct CInputDI8 CInputDI8, *PCInputDI8;

struct CInputDI8_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    int *offset_0xc;
    undefined4 offset_0x10;
    int *offset_0x14;
    undefined4 offset_0x18;
};

struct CInputDI8 { // class CInputDI8 : IInput
    struct CInputDI8_vftable *vftablePtr;
    struct CInputDI8_data CInputDI8_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/dev/CSound/CSound - /neon/dev/CSound

typedef struct CSound_vftable CSound_vftable, *PCSound_vftable;

struct CSound_vftable {
    int (*Init)(void *, bool, struct HWND__ *, int, int, int, ulong); // MSVCR90.DLL CSound pure virtual function #1
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // MSVCR90.DLL CSound pure virtual function #2
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // MSVCR90.DLL CSound pure virtual function #3
    int (*LoadBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, ulong, int, bool, bool); // MSVCR90.DLL CSound pure virtual function #4
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // MSVCR90.DLL CSound pure virtual function #5
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // MSVCR90.DLL CSound pure virtual function #6
    bool (*FSoundOnEndOfStream)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char (*)(struct FSOUND_STREAM *, void *, int, void *), void *); // MSVCR90.DLL CSound pure virtual function #7
    bool (*SetEndCallback)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int *, undefined4); // MSVCR90.DLL CSound pure virtual function #8
    int (*CheckSample)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // MSVCR90.DLL CSound pure virtual function #9
    void (*SetEFXVolume)(void *, float); // MSVCR90.DLL CSound pure virtual function #10
    void (*SetBGMVolume)(void *, float); // MSVCR90.DLL CSound pure virtual function #11
    void (*SetVOXVolume)(void *, float); // MSVCR90.DLL CSound pure virtual function #12
    float (*GetBGMVolume)(void *); // MSVCR90.DLL CSound pure virtual function #13
    int (*Play)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool); // MSVCR90.DLL CSound pure virtual function #14
    int (*PlayBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, bool, bool); // MSVCR90.DLL CSound pure virtual function #15
    int (*Play3D)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct VECTOR *, struct VECTOR *, int, int *); // MSVCR90.DLL CSound pure virtual function #16
    bool (*Set3DChannelAttr)(void *, int, struct VECTOR *, struct VECTOR *); // MSVCR90.DLL CSound pure virtual function #17
    void (*Stop)(void *); // MSVCR90.DLL CSound pure virtual function #18
    void (*Stop)(void *); // MSVCR90.DLL CSound pure virtual function #19
    void (*StopEFX)(void *); // MSVCR90.DLL CSound pure virtual function #20
    void (*StopBGM)(void *); // MSVCR90.DLL CSound pure virtual function #21
    void (*StopBGM)(void *); // MSVCR90.DLL CSound pure virtual function #22
    void (*StopVOX)(void *); // MSVCR90.DLL CSound pure virtual function #23
    void (*FadeBGM)(void *, int, double); // MSVCR90.DLL CSound pure virtual function #24
    void (*FadeBGM)(void *, int, double); // MSVCR90.DLL CSound pure virtual function #25
    void (*SetCrossfadeTime)(void *, int); // MSVCR90.DLL CSound pure virtual function #26
    void (*DestroyChannel)(void *); // MSVCR90.DLL CSound pure virtual function #27
    int (*Work)(void *, int); // MSVCR90.DLL CSound pure virtual function #28
    void (*SetAutoUnLoadBGM)(void *, bool); // MSVCR90.DLL CSound pure virtual function #29
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * (*GetFilenameFromFullPathName)(void *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *); // MSVCR90.DLL CSound pure virtual function #30
    undefined (*vfunction31)(void); // MSVCR90.DLL CSound pure virtual function #31
    undefined (*vfunction32)(void); // MSVCR90.DLL CSound pure virtual function #32
    undefined (*vfunction33)(void); // MSVCR90.DLL CSound pure virtual function #33
    undefined (*vfunction34)(void); // MSVCR90.DLL CSound pure virtual function #34
    undefined4 * (*deleting_destructor)(void *, byte); // CSound virtual function #35
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CSliderBar/CSliderBar - /neon/ctrl/CSliderBar

typedef struct CSliderBar_vftable CSliderBar_vftable, *PCSliderBar_vftable;

struct CSliderBar_vftable {
    CText * (*deleting_destructor)(void *, byte); // CSliderBar virtual function #1
    void (*Logic)(void *); // CControl virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CSliderBar virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CControl virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CControl virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CControl virtual function #29
    void (*OnMouseLeave)(void *); // CControl virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CControl virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CControl virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CControl virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CControl virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CControl virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CControl virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
};

typedef struct CSliderBar_data CSliderBar_data, *PCSliderBar_data;

typedef enum NBarType {
} NBarType;

struct CSliderBar_data {
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
    enum NBarType offset_0x54;
    undefined4 offset_0x58;
    undefined1 offset_0x5c;
    undefined field24_0x5d;
    undefined field25_0x5e;
    undefined field26_0x5f;
};

typedef struct CWindow_vftable CWindow_vftable, *PCWindow_vftable;

struct CWindow_vftable {
    CTextWindow * (*deleting_destructor)(void *, byte); // CWindow virtual function #1
    void (*Logic)(void *); // CControl virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CWindow virtual function #9
    CObject * (*IsIn)(void *, int, int); // CControl virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CControl virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CControl virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CWindow virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CControl virtual function #29
    void (*OnMouseLeave)(void *); // CControl virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CWindow virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CControl virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CControl virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CWindow virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CControl virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CControl virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CWindow virtual function #50
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CWindow virtual function #51
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CWindow/CWindow - /neon/ctrl/CWindow

typedef struct CWindow_data CWindow_data, *PCWindow_data;

struct CWindow_data {
    undefined4 offset_0x0;
    undefined1 offset_0x4;
    undefined1 offset_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined4 offset_0x8;
};

typedef struct CScrollBar_vftable CScrollBar_vftable, *PCScrollBar_vftable;

struct CScrollBar_vftable {
    CText * (*deleting_destructor)(void *, byte); // CScrollBar virtual function #1
    void (*Logic)(void *); // CControl virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CControl virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CControl virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CControl virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CScrollBar virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CControl virtual function #29
    void (*OnMouseLeave)(void *); // CControl virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CControl virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CControl virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CScrollBar virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CControl virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CControl virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CScrollBar virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CScrollBar virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
    bool (*Create)(void *, int, int, struct CBasicPoint<float> *); // CScrollBar virtual function #50
};

typedef struct CScrollBar_data CScrollBar_data, *PCScrollBar_data;

struct CScrollBar_data {
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
    void *offset_0x1c;
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
    void *offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined1 offset_0x4c;
    undefined field53_0x4d;
    undefined field54_0x4e;
    undefined field55_0x4f;
    undefined4 offset_0x50;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
    undefined4 offset_0x70;
    undefined4 offset_0x74;
    undefined4 offset_0x78;
    undefined4 offset_0x7c;
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CScrollBar/CScrollBar - /neon/ctrl/CScrollBar

typedef struct CCheckButton_vftable CCheckButton_vftable, *PCCheckButton_vftable;

struct CCheckButton_vftable {
    CTextWindow * (*deleting_destructor)(void *, byte); // CCheckButton virtual function #1
    void (*Logic)(void *); // CCheckButton virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CControl virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CButton virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CButton virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CButton virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CButton virtual function #29
    void (*OnMouseLeave)(void *); // CButton virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CButton virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CCheckButton virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CControl virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CCheckButton virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CControl virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CButton virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CButton virtual function #50
    void (*SetBtnActive)(void *, bool); // CButton virtual function #51
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CCheckButton virtual function #52
    void (*SetCheck)(void *, bool); // CCheckButton virtual function #53
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CCheckButton/CCheckButton - /neon/ctrl/CCheckButton

typedef struct CCheckButton_data CCheckButton_data, *PCCheckButton_data;

struct CCheckButton_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    int *offset_0xc;
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
};

typedef struct CControl_vftable CControl_vftable, *PCControl_vftable;

struct CControl_vftable {
    CText * (*deleting_destructor)(void *, byte); // CControl virtual function #1
    void (*Logic)(void *); // CControl virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CControl virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CControl virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CControl virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CControl virtual function #29
    void (*OnMouseLeave)(void *); // CControl virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CControl virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CControl virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CControl virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CControl virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CControl virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CControl virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CControl/CControl - /neon/ctrl/CControl

typedef struct CControl_data CControl_data, *PCControl_data;

struct CControl_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined1 offset_0x8;
    char offset_0x9;
    char offset_0xa;
    undefined field5_0xb;
    undefined4 offset_0xc;
    undefined1 offset_0x10;
    undefined1 offset_0x11;
    undefined field9_0x12;
    undefined field10_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined1 offset_0x1c;
    undefined1 offset_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
};

typedef struct CTextWindow_vftable_for_CControl CTextWindow_vftable_for_CControl, *PCTextWindow_vftable_for_CControl;

struct CTextWindow_vftable_for_CControl {
    CTextWindow * (*deleting_destructor_for_CControl)(void *, byte); // CTextWindow virtual function #1 for parent class CControl
    void (*Logic)(void *); // CControl virtual function #2 for parent class CControl
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3 for parent class CControl
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4 for parent class CControl
    void (*OnAttached)(void *); // CVisual virtual function #5 for parent class CControl
    void (*OnDetached)(void *); // CVisual virtual function #6 for parent class CControl
    void (*OnActivate)(void *, bool); // CObject virtual function #7 for parent class CControl
    void (*OnSelect)(void *, bool); // CControl virtual function #8 for parent class CControl
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9 for parent class CControl
    CObject * (*IsIn)(void *, int, int); // CTextWindow virtual function #10 for parent class CControl
    CObject * (*Clone)(void *); // CControl virtual function #11 for parent class CControl
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12 for parent class CControl
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13 for parent class CControl
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14 for parent class CControl
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CControl virtual function #15 for parent class CControl
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CControl virtual function #16 for parent class CControl
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17 for parent class CControl
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18 for parent class CControl
    float (*GetPosX)(void *); // CVisual virtual function #19 for parent class CControl
    float (*GetPosY)(void *); // CVisual virtual function #20 for parent class CControl
    void (*SetPosX)(void *, float); // CText virtual function #21 for parent class CControl
    void (*SetPosY)(void *, float); // CText virtual function #22 for parent class CControl
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23 for parent class CControl
    void (*SetInverse)(void *, bool); // CVisual virtual function #24 for parent class CControl
    void (*SetPivot)(void *, float, float); // CTextWindow virtual function #25 for parent class CControl
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26 for parent class CControl
    uchar (*GetAlpha)(void *); // CControl virtual function #27 for parent class CControl
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28 for parent class CControl
    void (*OnMouseOver)(void *); // CControl virtual function #29 for parent class CControl
    void (*OnMouseLeave)(void *); // CControl virtual function #30 for parent class CControl
    void (*OnMouseLbDown)(void *, int, int); // CControl virtual function #31 for parent class CControl
    void (*OnMouseLbUp)(void *, int, int); // CControl virtual function #32 for parent class CControl
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33 for parent class CControl
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34 for parent class CControl
    void (*OnMouseWheel)(void *, int, short); // CTextWindow virtual function #35 for parent class CControl
    void (*OnMouseDrag)(void *, int, int); // CControl virtual function #36 for parent class CControl
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37 for parent class CControl
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38 for parent class CControl
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39 for parent class CControl
    void (*OnReturn)(void *); // CControl virtual function #40 for parent class CControl
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41 for parent class CControl
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42 for parent class CControl
    void (*SetActive)(void *, bool); // CControl virtual function #43 for parent class CControl
    void (*SetSelect)(void *, bool); // CControl virtual function #44 for parent class CControl
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45 for parent class CControl
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46 for parent class CControl
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47 for parent class CControl
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48 for parent class CControl
    bool (*GetCanFocus)(void *); // CControl virtual function #49 for parent class CControl
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CTextWindow virtual function #50 for parent class CControl
    void (*Clear)(void *); // CTextWindow virtual function #51 for parent class CControl
    int (*ChangeValue)(void *, struct COP_ThumbMove *); // CTextWindow virtual function #52 for parent class CControl
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CTextWindow/CTextWindow - /neon/ctrl/CTextWindow

typedef struct CTextWindow_vftable_for_CManagedRes CTextWindow_vftable_for_CManagedRes, *PCTextWindow_vftable_for_CManagedRes;

struct CTextWindow_vftable_for_CManagedRes {
    void (*vfunction1_for_CManagedRes)(void *, byte); // CTextWindow virtual function #1 for parent class CManagedRes
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2 for parent class CManagedRes
    long (*Restore)(void *); // CTextWindow virtual function #3 for parent class CManagedRes
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CCheckBox/CCheckBox - /neon/ctrl/CCheckBox

typedef struct CCheckBox_vftable CCheckBox_vftable, *PCCheckBox_vftable;

struct CCheckBox_vftable {
    CTextWindow * (*deleting_destructor)(void *, byte); // CCheckBox virtual function #1
    void (*Logic)(void *); // CCheckButton virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CControl virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CButton virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CButton virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CCheckBox virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CButton virtual function #29
    void (*OnMouseLeave)(void *); // CButton virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CButton virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CCheckButton virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CControl virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CCheckButton virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CControl virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CCheckBox virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CButton virtual function #50
    void (*SetBtnActive)(void *, bool); // CButton virtual function #51
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CCheckBox virtual function #52
    void (*SetCheck)(void *, bool); // CCheckButton virtual function #53
};

typedef struct CCheckBox_data CCheckBox_data, *PCCheckBox_data;

struct CCheckBox_data {
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
    undefined4 offset_0xc;
    undefined1 offset_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
};

typedef struct CEdit_vftable CEdit_vftable, *PCEdit_vftable;

struct CEdit_vftable {
    CText * (*deleting_destructor)(void *, byte); // CEdit virtual function #1
    void (*Logic)(void *); // CControl virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CEdit virtual function #9
    CObject * (*IsIn)(void *, int, int); // CControl virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CControl virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CControl virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CEdit virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CControl virtual function #29
    void (*OnMouseLeave)(void *); // CControl virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CEdit virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CControl virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CControl virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CControl virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CEdit virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CControl virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CEdit virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CEdit virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
    bool (*Create)(void *, int, int, struct CBasicPoint<float> *); // CEdit virtual function #50
    bool (*CreateCursor)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_>); // CEdit virtual function #51
    bool (*CreateFontA)(void *, struct CFontInfo *, bool); // CEdit virtual function #52
    bool (*CreateTextTile)(void *, int, int); // CEdit virtual function #53
    void (*Update)(void *); // CEdit virtual function #54
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CEdit/CEdit - /neon/ctrl/CEdit

typedef struct CEdit_data CEdit_data, *PCEdit_data;

struct CEdit_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    struct HFONT__ *offset_0x14;
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
    undefined4 offset_0x34;
    undefined1 offset_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined4 offset_0x4c;
    undefined4 offset_0x50;
    undefined1 offset_0x54;
    undefined1 offset_0x55;
    undefined field47_0x56;
    undefined field48_0x57;
    void *offset_0x58;
    undefined field50_0x5c;
    undefined field51_0x5d;
    undefined field52_0x5e;
    undefined field53_0x5f;
    undefined field54_0x60;
    undefined field55_0x61;
    undefined field56_0x62;
    undefined field57_0x63;
    void *offset_0x64;
    void *offset_0x68;
    undefined4 offset_0x6c;
    undefined4 offset_0x70;
    undefined4 offset_0x74;
    undefined1 offset_0x78;
    undefined1 offset_0x79;
    undefined1 offset_0x7a;
    undefined1 offset_0x7b;
    undefined field67_0x7c;
    undefined field68_0x7d;
    undefined field69_0x7e;
    undefined field70_0x7f;
};

typedef struct CWebBrowser_vftable_for_CVisual CWebBrowser_vftable_for_CVisual, *PCWebBrowser_vftable_for_CVisual;

struct CWebBrowser_vftable_for_CVisual {
    CText * (*deleting_destructor_for_CVisual)(void *, byte); // CWebBrowser virtual function #1 for parent class CVisual
    void (*Logic)(void *); // CWebBrowser virtual function #2 for parent class CVisual
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3 for parent class CVisual
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4 for parent class CVisual
    void (*OnAttached)(void *); // CVisual virtual function #5 for parent class CVisual
    void (*OnDetached)(void *); // CVisual virtual function #6 for parent class CVisual
    void (*OnActivate)(void *, bool); // CObject virtual function #7 for parent class CVisual
    void (*OnSelect)(void *, bool); // CObject virtual function #8 for parent class CVisual
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9 for parent class CVisual
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10 for parent class CVisual
    CObject * (*Clone)(void *); // CVisual virtual function #11 for parent class CVisual
    void (*Copy)(void *, struct CObject *); // CVisual virtual function #12 for parent class CVisual
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13 for parent class CVisual
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14 for parent class CVisual
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CVisual virtual function #15 for parent class CVisual
    void (*Blt)(void *, int, int, struct IDxSurface *, struct tagRECT *, bool); // CRLESurface virtual function #16 for parent class CVisual
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17 for parent class CVisual
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18 for parent class CVisual
    float (*GetPosX)(void *); // CVisual virtual function #19 for parent class CVisual
    float (*GetPosY)(void *); // CVisual virtual function #20 for parent class CVisual
    void (*SetPosX)(void *, float); // CVisual virtual function #21 for parent class CVisual
    void (*SetPosY)(void *, float); // CVisual virtual function #22 for parent class CVisual
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23 for parent class CVisual
    void (*SetInverse)(void *, bool); // CVisual virtual function #24 for parent class CVisual
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25 for parent class CVisual
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26 for parent class CVisual
    uchar (*GetAlpha)(void *); // CVisual virtual function #27 for parent class CVisual
    bool (*Create)(void *, int, int, struct CBasicPoint<float> *); // CWebBrowser virtual function #28 for parent class CVisual
    void (*OnDestroy)(void *); // CWebBrowser virtual function #29 for parent class CVisual
};

typedef struct CWebBrowser_data CWebBrowser_data, *PCWebBrowser_data;

struct CWebBrowser_data {
    undefined4 *offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    HWND offset_0x8;
};

typedef struct CWebBrowser CWebBrowser, *PCWebBrowser;

typedef struct CVisual_data CVisual_data, *PCVisual_data;

typedef struct CWebBrowser_vftable_for_IOleObj CWebBrowser_vftable_for_IOleObj, *PCWebBrowser_vftable_for_IOleObj;

struct CCompositeHolder<neon::frw::CComponent>_data {
    int offset_0x0;
    void *offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
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
    int offset_0x1c;
    int offset_0x20;
};

struct CObject_data {
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
    undefined **offset_0x1c;
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
    undefined4 offset_0x40;
    undefined4 offset_0x44;
};

struct CVisual_data {
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
    undefined1 offset_0x3c;
    undefined1 offset_0x3d;
    undefined1 offset_0x3e;
    undefined1 offset_0x3f;
    undefined1 offset_0x40;
    undefined1 offset_0x41;
    undefined1 offset_0x42;
    undefined field22_0x43;
    void *offset_0x44;
    void *offset_0x48;
    void *offset_0x4c;
};

struct CWebBrowser_data {
    undefined4 *offset_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    HWND offset_0x8;
};

struct CWebBrowser_vftable_for_IOleObj {
    void (*MsgHandler)(void *, struct tagMSG *); // CWebBrowser virtual function #1 for parent class IOleObj
};

struct CWebBrowser { // class CWebBrowser : CVisual : IOleObj
    struct CWebBrowser_vftable_for_CVisual *vftablePtr;
    struct CCompositeHolder<neon::frw::CComponent>_data CCompositeHolder<neon::frw::CComponent>_data;
    struct CObject_data CObject_data;
    struct CVisual_data CVisual_data;
    struct CWebBrowser_vftable_for_IOleObj *vftablePtr;
    struct CWebBrowser_data CWebBrowser_data;
};

typedef struct CButton_data CButton_data, *PCButton_data;

struct CButton_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined1 offset_0x10;
    undefined1 offset_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    undefined4 offset_0x14;
    undefined1 offset_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
};

typedef struct CButton CButton, *PCButton;

typedef struct CButton_vftable CButton_vftable, *PCButton_vftable;

struct CCompositeHolder<neon::frw::CComponent>_data {
    int offset_0x0;
    void *offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
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
    int offset_0x1c;
    int offset_0x20;
};

struct CObject_data {
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
    undefined **offset_0x1c;
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
    undefined4 offset_0x40;
    undefined4 offset_0x44;
};

struct CVisual_data {
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
    undefined1 offset_0x3c;
    undefined1 offset_0x3d;
    undefined1 offset_0x3e;
    undefined1 offset_0x3f;
    undefined1 offset_0x40;
    undefined1 offset_0x41;
    undefined1 offset_0x42;
    undefined field22_0x43;
    void *offset_0x44;
    void *offset_0x48;
    void *offset_0x4c;
};

struct CControl_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined1 offset_0x8;
    char offset_0x9;
    char offset_0xa;
    undefined field5_0xb;
    undefined4 offset_0xc;
    undefined1 offset_0x10;
    undefined1 offset_0x11;
    undefined field9_0x12;
    undefined field10_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined1 offset_0x1c;
    undefined1 offset_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
};

struct CButton_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined1 offset_0x10;
    undefined1 offset_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    undefined4 offset_0x14;
    undefined1 offset_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
};

struct CButton_vftable {
    CText * (*deleting_destructor)(void *, byte); // CButton virtual function #1
    void (*Logic)(void *); // CButton virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CControl virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CButton virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CButton virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CButton virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CButton virtual function #29
    void (*OnMouseLeave)(void *); // CButton virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CButton virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CButton virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CControl virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CButton virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CControl virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CButton virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
    bool (*Create)(void *, int, int, struct CBasicPoint<float> *); // CButton virtual function #50
    void (*SetBtnActive)(void *, bool); // CButton virtual function #51
};

struct CButton { // class CButton : CControl
    struct CButton_vftable *vftablePtr;
    struct CCompositeHolder<neon::frw::CComponent>_data CCompositeHolder<neon::frw::CComponent>_data;
    struct CObject_data CObject_data;
    struct CVisual_data CVisual_data;
    struct CControl_data CControl_data;
    struct CButton_data CButton_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/ctrl/CRadioButton/CRadioButton - /neon/ctrl/CRadioButton

typedef struct CRadioButton_data CRadioButton_data, *PCRadioButton_data;

struct CRadioButton_data {
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
    undefined4 offset_0x18;
    undefined1 offset_0x1c;
    undefined field26_0x1d;
    undefined field27_0x1e;
    undefined field28_0x1f;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
};

typedef struct CRadioButton_vftable CRadioButton_vftable, *PCRadioButton_vftable;

struct CRadioButton_vftable {
    CTextWindow * (*deleting_destructor)(void *, byte); // CRadioButton virtual function #1
    void (*Logic)(void *); // CCheckButton virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CControl virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CControl virtual function #10
    CObject * (*Clone)(void *); // CControl virtual function #11
    void (*Copy)(void *, struct CObject *); // CControl virtual function #12
    CObject * (*IsMyIn)(void *, int, int); // CControl virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CControl virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CButton virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CButton virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CCheckBox virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CControl virtual function #27
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #28
    void (*OnMouseOver)(void *); // CButton virtual function #29
    void (*OnMouseLeave)(void *); // CButton virtual function #30
    void (*OnMouseLbDown)(void *, int, int); // CButton virtual function #31
    void (*OnMouseLbUp)(void *, int, int); // CRadioButton virtual function #32
    void (*OnMouseRbDown)(void *, int, int); // CControl virtual function #33
    void (*OnMouseRbUp)(void *, int, int); // CControl virtual function #34
    void (*OnMouseWheel)(void *, int, short); // CControl virtual function #35
    void (*OnMouseDrag)(void *, int, int); // CCheckButton virtual function #36
    void (*OnMouseMove)(void *, int, int); // CControl virtual function #37
    void (*OnMouseLDoubleClick)(void *, int, int); // CControl virtual function #38
    void (*OnMouseRDoubleClick)(void *, int, int); // CControl virtual function #39
    void (*OnReturn)(void *); // CControl virtual function #40
    void (*OnKeyDown)(void *, uint); // CControl virtual function #41
    void (*OnKeyUp)(void *, uint); // CControl virtual function #42
    void (*SetActive)(void *, bool); // CRadioButton virtual function #43
    void (*SetSelect)(void *, bool); // CControl virtual function #44
    void (*SetFocus)(void *, bool, bool); // CControl virtual function #45
    void (*ProcessMessage)(void *, uint, uint, uint); // CControl virtual function #46
    void (*AttachToolTip)(void *, struct CVisual *); // CControl virtual function #47
    void (*SetCanFocus)(void *, bool); // CControl virtual function #48
    bool (*GetCanFocus)(void *); // CControl virtual function #49
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CButton virtual function #50
    void (*SetBtnActive)(void *, bool); // CButton virtual function #51
    bool (*Create)(void *, int, int, struct CBasicRect<float> *, bool); // CRadioButton virtual function #52
    void (*SetCheck)(void *, bool); // CRadioButton virtual function #53
};

typedef struct CSprite_data CSprite_data, *PCSprite_data;

struct CSprite_data {
    undefined4 offset_0x0;
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
    void *offset_0x20;
    undefined field30_0x24;
    undefined field31_0x25;
    undefined field32_0x26;
    undefined field33_0x27;
    undefined field34_0x28;
    undefined field35_0x29;
    undefined field36_0x2a;
    undefined field37_0x2b;
    void *offset_0x2c;
    undefined4 *offset_0x30;
    undefined4 offset_0x34;
    int offset_0x38;
    undefined field42_0x3c;
    undefined field43_0x3d;
    undefined field44_0x3e;
    undefined field45_0x3f;
    undefined field46_0x40;
    undefined field47_0x41;
    undefined field48_0x42;
    undefined field49_0x43;
    undefined1 *offset_0x44;
    undefined1 *offset_0x48;
    undefined field52_0x4c;
    undefined field53_0x4d;
    undefined field54_0x4e;
    undefined field55_0x4f;
    int *offset_0x50;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
    undefined4 offset_0x70;
    undefined4 offset_0x74;
    undefined4 offset_0x78;
    undefined4 offset_0x7c;
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined1 offset_0xa4;
    undefined1 offset_0xa5;
    undefined1 offset_0xa6;
    undefined field80_0xa7;
    undefined4 offset_0xa8;
    undefined4 offset_0xac;
    void *offset_0xb0;
    undefined4 offset_0xb4;
    undefined1 offset_0xb8;
    undefined field86_0xb9;
    undefined field87_0xba;
    undefined field88_0xbb;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined1 offset_0xc4;
    undefined field92_0xc5;
    undefined field93_0xc6;
    undefined field94_0xc7;
};

typedef struct CSprite_vftable CSprite_vftable, *PCSprite_vftable;

struct CSprite_vftable {
    CText * (*deleting_destructor)(void *, byte); // CSprite virtual function #1
    void (*Logic)(void *); // CSprite virtual function #2
    void (*Output)(void *); // CSprite virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CSprite virtual function #11
    void (*Copy)(void *, struct CObject *); // CSprite virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CSprite virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CSprite virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CSprite virtual function #23
    void (*SetInverse)(void *, bool); // CSprite virtual function #24
    void (*SetPivot)(void *, float, float); // CSprite virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CSprite virtual function #27
    void (*SetAnimate)(void *, int, int, bool, bool); // CSprite virtual function #28
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #29
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/visual/CSprite/CSprite - /neon/visual/CSprite

typedef struct CFrameEffect CFrameEffect, *PCFrameEffect;

typedef struct CFrameEffect_vftable CFrameEffect_vftable, *PCFrameEffect_vftable;

typedef struct CFrameEffect_data CFrameEffect_data, *PCFrameEffect_data;

struct CFrameEffect_data {
    undefined1 offset_0x0;
    undefined4 offset_0x1;
    undefined4 offset_0x5;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
};

struct CFrameEffect_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CFrameEffect virtual function #1
};

struct CFrameEffect { // class CFrameEffect
    struct CFrameEffect_vftable *vftablePtr;
    struct CFrameEffect_data CFrameEffect_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/visual/CSprite/CFrame/CFrame - /neon/visual/CSprite/CFrame

typedef struct CFrame_vftable CFrame_vftable, *PCFrame_vftable;

struct CFrame_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CFrame virtual function #1
};

typedef struct CFrame_data CFrame_data, *PCFrame_data;

struct CFrame_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined4 offset_0x11;
    undefined4 offset_0x15;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
};

typedef struct CVisual CVisual, *PCVisual;

typedef struct CVisual_vftable CVisual_vftable, *PCVisual_vftable;

struct CCompositeHolder<neon::frw::CComponent>_data {
    int offset_0x0;
    void *offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
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
    int offset_0x1c;
    int offset_0x20;
};

struct CObject_data {
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
    undefined **offset_0x1c;
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
    undefined4 offset_0x40;
    undefined4 offset_0x44;
};

struct CVisual_data {
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
    undefined1 offset_0x3c;
    undefined1 offset_0x3d;
    undefined1 offset_0x3e;
    undefined1 offset_0x3f;
    undefined1 offset_0x40;
    undefined1 offset_0x41;
    undefined1 offset_0x42;
    undefined field22_0x43;
    void *offset_0x44;
    void *offset_0x48;
    void *offset_0x4c;
};

struct CVisual_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CVisual virtual function #1
    void (*~IDxDevice)(void *); // IDxDevice virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CVisual virtual function #11
    void (*Copy)(void *, struct CObject *); // CVisual virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CVisual virtual function #15
    void (*Blt)(void *, int, int, struct IDxSurface *, struct tagRECT *, bool); // CRLESurface virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CVisual virtual function #27
};

struct CVisual { // class CVisual : CObject
    struct CVisual_vftable *vftablePtr;
    struct CCompositeHolder<neon::frw::CComponent>_data CCompositeHolder<neon::frw::CComponent>_data;
    struct CObject_data CObject_data;
    struct CVisual_data CVisual_data;
};

typedef struct CTile_data CTile_data, *PCTile_data;

typedef struct IDxSurface IDxSurface, *PIDxSurface;

struct CTile_data {
    struct IDxSurface *offset_0x0;
    int *offset_0x4;
    undefined1 offset_0x8;
    undefined field3_0x9;
    undefined2 offset_0xa;
    undefined2 offset_0xc;
    undefined2 offset_0xe;
    undefined2 offset_0x10;
    undefined2 offset_0x12;
    undefined2 offset_0x14;
    undefined field10_0x16;
    undefined field11_0x17;
    undefined4 offset_0x18;
    void *offset_0x1c;
    undefined field14_0x20;
    undefined field15_0x21;
    undefined field16_0x22;
    undefined field17_0x23;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
    void *offset_0x28;
    undefined4 *offset_0x2c;
    undefined4 offset_0x30;
    undefined field25_0x34;
    undefined field26_0x35;
    undefined field27_0x36;
    undefined field28_0x37;
    undefined field29_0x38;
    undefined field30_0x39;
    undefined field31_0x3a;
    undefined field32_0x3b;
    undefined field33_0x3c;
    undefined field34_0x3d;
    undefined field35_0x3e;
    undefined field36_0x3f;
    undefined field37_0x40;
    undefined field38_0x41;
    undefined field39_0x42;
    undefined field40_0x43;
    undefined field41_0x44;
    undefined field42_0x45;
    undefined field43_0x46;
    undefined field44_0x47;
    undefined field45_0x48;
    undefined field46_0x49;
    undefined field47_0x4a;
    undefined field48_0x4b;
    undefined field49_0x4c;
    undefined field50_0x4d;
    undefined field51_0x4e;
    undefined field52_0x4f;
    void *offset_0x50;
};

struct IDxSurface { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/visual/CTile/CTile - /neon/visual/CTile

typedef struct CTile_vftable CTile_vftable, *PCTile_vftable;

struct CTile_vftable {
    CText * (*deleting_destructor)(void *, byte); // CTile virtual function #1
    void (*~IDxDevice)(void *); // IDxDevice virtual function #2
    void (*Output)(void *); // CTile virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CTile virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CTile virtual function #11
    void (*Copy)(void *, struct CObject *); // CTile virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CTile virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CTile virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CTile virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CTile virtual function #27
    long (*Release)(void *); // CTile virtual function #28
};

typedef struct CText_vftable_for_CManagedRes CText_vftable_for_CManagedRes, *PCText_vftable_for_CManagedRes;

struct CText_vftable_for_CManagedRes {
    void (*vfunction1_for_CManagedRes)(void *, byte); // CText virtual function #1 for parent class CManagedRes
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2 for parent class CManagedRes
    long (*Restore)(void *); // CText virtual function #3 for parent class CManagedRes
};

typedef struct CText_vftable_for_CVisual CText_vftable_for_CVisual, *PCText_vftable_for_CVisual;

struct CText_vftable_for_CVisual {
    CText * (*deleting_destructor_for_CVisual)(void *, byte); // CText virtual function #1 for parent class CVisual
    void (*~IDxDevice)(void *); // IDxDevice virtual function #2 for parent class CVisual
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3 for parent class CVisual
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4 for parent class CVisual
    void (*OnAttached)(void *); // CVisual virtual function #5 for parent class CVisual
    void (*OnDetached)(void *); // CVisual virtual function #6 for parent class CVisual
    void (*OnActivate)(void *, bool); // CObject virtual function #7 for parent class CVisual
    void (*OnSelect)(void *, bool); // CObject virtual function #8 for parent class CVisual
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9 for parent class CVisual
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10 for parent class CVisual
    CObject * (*Clone)(void *); // CVisual virtual function #11 for parent class CVisual
    void (*Copy)(void *, struct CObject *); // CVisual virtual function #12 for parent class CVisual
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13 for parent class CVisual
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14 for parent class CVisual
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CText virtual function #15 for parent class CVisual
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CText virtual function #16 for parent class CVisual
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17 for parent class CVisual
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18 for parent class CVisual
    float (*GetPosX)(void *); // CVisual virtual function #19 for parent class CVisual
    float (*GetPosY)(void *); // CVisual virtual function #20 for parent class CVisual
    void (*SetPosX)(void *, float); // CText virtual function #21 for parent class CVisual
    void (*SetPosY)(void *, float); // CText virtual function #22 for parent class CVisual
    void (*SetShowRef)(void *, bool); // CVisual virtual function #23 for parent class CVisual
    void (*SetInverse)(void *, bool); // CVisual virtual function #24 for parent class CVisual
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25 for parent class CVisual
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26 for parent class CVisual
    uchar (*GetAlpha)(void *); // CVisual virtual function #27 for parent class CVisual
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/visual/CText/CText - /neon/visual/CText

typedef struct CManagedPool CManagedPool, *PCManagedPool;

typedef struct CManagedPool_vftable CManagedPool_vftable, *PCManagedPool_vftable;

typedef struct CManagedPool_data CManagedPool_data, *PCManagedPool_data;

struct CManagedPool_data {
    undefined4 offset_0x0;
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
};

struct CManagedPool_vftable {
    undefined4 (*vfunction1)(void *); // MSVCR90.DLL CManagedPool pure virtual function #1
    uint (*vfunction2)(void *, uint); // MSVCR90.DLL CManagedPool pure virtual function #2
    int (*vfunction3)(void *, uint); // MSVCR90.DLL CManagedPool pure virtual function #3
    undefined4 * (*deleting_destructor)(void *, byte); // CManagedPool virtual function #4
};

struct CManagedPool { // class CManagedPool
    struct CManagedPool_vftable *vftablePtr;
    struct CManagedPool_data CManagedPool_data;
};

typedef struct CApp CApp, *PCApp;

typedef struct CApp_vftable CApp_vftable, *PCApp_vftable;

typedef struct CApp_data CApp_data, *PCApp_data;

struct CApp_data {
    undefined4 offset_0x0;
    undefined4 *offset_0x4;
    undefined4 *offset_0x8;
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
    undefined4 offset_0x28;
    float offset_0x2c;
    float offset_0x30;
    DWORD offset_0x34;
    undefined1 offset_0x38;
    undefined1 offset_0x39;
    undefined field19_0x3a;
    undefined field20_0x3b;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined1 offset_0x48;
    undefined field25_0x49;
    undefined field26_0x4a;
    undefined field27_0x4b;
    undefined4 offset_0x4c;
    undefined4 offset_0x50;
    undefined4 offset_0x54;
};

struct CApp_vftable {
    CApp * (*deleting_destructor)(void *, byte); // CApp virtual function #1
};

struct CApp { // class CApp
    struct CApp_vftable *vftablePtr;
    struct CApp_data CApp_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/frw/CComponent/CComponent - /neon/frw/CComponent

typedef struct CComponent_vftable CComponent_vftable, *PCComponent_vftable;

struct CComponent_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CComponent virtual function #1
    undefined (*vfunction2)(void); // MSVCR90.DLL CComponent pure virtual function #2
    undefined (*vfunction3)(void); // MSVCR90.DLL CComponent pure virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/frw/CFileManager/CFileManager - /neon/frw/CFileManager

typedef struct CFileManager_data CFileManager_data, *PCFileManager_data;

struct CFileManager_data {
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
    int offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
};

typedef struct CFileManager_vftable CFileManager_vftable, *PCFileManager_vftable;

struct CFileManager_vftable {
    CFileManager * (*deleting_destructor)(void *, byte); // CFileManager virtual function #1
};

typedef struct CManagedPoolImpl<neon::util::CCriticalSection>_vftable CManagedPoolImpl<neon::util::CCriticalSection>_vftable, *PCManagedPoolImpl<neon::util::CCriticalSection>_vftable;

struct CManagedPoolImpl<neon::util::CCriticalSection>_vftable {
    undefined4 (*vfunction1)(void *); // CManagedPoolImpl<neon::util::CEmptyLock> virtual function #1
    uint (*vfunction2)(void *, uint); // CManagedPoolImpl<neon::util::CCriticalSection> virtual function #2
    int (*vfunction3)(void *, uint); // CManagedPoolImpl<neon::util::CCriticalSection> virtual function #3
    undefined4 * (*deleting_destructor)(void *, byte); // CManagedPoolImpl<neon::util::CCriticalSection> virtual function #4
};

typedef struct CManagedPoolImpl<neon::util::CCriticalSection> CManagedPoolImpl<neon::util::CCriticalSection>, *PCManagedPoolImpl<neon::util::CCriticalSection>;

struct CManagedPool_data {
    undefined4 offset_0x0;
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
};

struct CManagedPoolImpl<neon::util::CCriticalSection> { // class CManagedPoolImpl<neon::util::CCriticalSection> : CManagedPool
    struct CManagedPoolImpl<neon::util::CCriticalSection>_vftable *vftablePtr;
    struct CManagedPool_data CManagedPool_data;
};

typedef struct CObject CObject, *PCObject;

typedef struct CObject_vftable CObject_vftable, *PCObject_vftable;

struct CCompositeHolder<neon::frw::CComponent>_data {
    int offset_0x0;
    void *offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
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
    int offset_0x1c;
    int offset_0x20;
};

struct CObject_data {
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
    undefined **offset_0x1c;
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
    undefined4 offset_0x40;
    undefined4 offset_0x44;
};

struct CObject_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CObject virtual function #1
    void (*~IDxDevice)(void *); // IDxDevice virtual function #2
    void (*~IDxDevice)(void *); // IDxDevice virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CObject virtual function #5
    void (*~IDxDevice)(void *); // IDxDevice virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CObject virtual function #11
    void (*Copy)(void *, struct CObject *); // CObject virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
};

struct CObject { // class CObject : CCompositeHolder<neon::frw::CComponent>
    struct CObject_vftable *vftablePtr;
    struct CCompositeHolder<neon::frw::CComponent>_data CCompositeHolder<neon::frw::CComponent>_data;
    struct CObject_data CObject_data;
};

typedef struct CResourceImpl_data CResourceImpl_data, *PCResourceImpl_data;

struct CResourceImpl_data {
    undefined4 *offset_0x0;
    undefined4 *offset_0x4;
};

typedef struct CResourceImpl_vftable CResourceImpl_vftable, *PCResourceImpl_vftable;

struct CResourceImpl_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CResourceImpl virtual function #1
};

typedef struct CResourceImpl CResourceImpl, *PCResourceImpl;

struct CResourceImpl_data {
    undefined4 *offset_0x0;
    undefined4 *offset_0x4;
};

struct CResourceImpl { // class CResourceImpl
    struct CResourceImpl_vftable *vftablePtr;
    struct CResourceImpl_data CResourceImpl_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/frw/CAppManager/CAppManager - /neon/frw/CAppManager

typedef struct CAppManager_vftable CAppManager_vftable, *PCAppManager_vftable;

struct CAppManager_vftable {
    CAppManager * (*deleting_destructor)(void *, byte); // CAppManager virtual function #1
};

typedef struct CAppManager_data CAppManager_data, *PCAppManager_data;

struct CAppManager_data {
    undefined4 offset_0x0;
    undefined4 *offset_0x4;
    undefined1 offset_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
};

typedef struct CManagedPoolImpl<neon::util::CEmptyLock>_vftable CManagedPoolImpl<neon::util::CEmptyLock>_vftable, *PCManagedPoolImpl<neon::util::CEmptyLock>_vftable;

struct CManagedPoolImpl<neon::util::CEmptyLock>_vftable {
    undefined4 (*vfunction1)(void *); // CManagedPoolImpl<neon::util::CEmptyLock> virtual function #1
    uint (*vfunction2)(void *, uint); // CManagedPoolImpl<neon::util::CEmptyLock> virtual function #2
    int (*vfunction3)(void *, uint); // CManagedPoolImpl<neon::util::CEmptyLock> virtual function #3
    undefined4 * (*deleting_destructor)(void *, byte); // CManagedPoolImpl<neon::util::CEmptyLock> virtual function #4
};

typedef struct CManagedPoolImpl<neon::util::CEmptyLock> CManagedPoolImpl<neon::util::CEmptyLock>, *PCManagedPoolImpl<neon::util::CEmptyLock>;

struct CManagedPool_data {
    undefined4 offset_0x0;
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
};

struct CManagedPoolImpl<neon::util::CEmptyLock> { // class CManagedPoolImpl<neon::util::CEmptyLock> : CManagedPool
    struct CManagedPoolImpl<neon::util::CEmptyLock>_vftable *vftablePtr;
    struct CManagedPool_data CManagedPool_data;
};

typedef struct CResource_vftable CResource_vftable, *PCResource_vftable;

struct CResource_vftable {
    CResource * (*deleting_destructor)(void *, byte); // CResource virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/frw/CResource/CResource - /neon/frw/CResource

typedef struct CResource_data CResource_data, *PCResource_data;

struct CResource_data {
    undefined4 *offset_0x0;
    undefined4 *offset_0x4;
    undefined4 *offset_0x8;
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/render/CRLESurface/CRLESurface - /neon/render/CRLESurface

typedef struct CRLESurface_vftable CRLESurface_vftable, *PCRLESurface_vftable;

struct CRLESurface_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CRLESurface virtual function #1
    SurfaceDesc * (*GetSurfaceDesc)(void *); // CRLESurface virtual function #2
    bool (*Fill)(void); // CRLESurface virtual function #3
    bool (*Fill)(void); // CRLESurface virtual function #4
    void (*~IDxDevice)(void *); // IDxDevice virtual function #5
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #6
    void * (*GetSurfacePointer)(void *); // CRLESurface virtual function #7
    ushort (*GetWidth)(void *); // CRLESurface virtual function #8
    ushort (*GetHeight)(void *); // CRLESurface virtual function #9
    ulong (*GetBPP)(void *); // CRLESurface virtual function #10
    PixelFormat (*GetPixelFormat)(void *); // CRLESurface virtual function #11
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #12
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #13
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #14
    void (*Release)(void *); // C3DDisplay virtual function #15
    ushort (*Type)(void *); // CRLESurface virtual function #16
    long (*SetColorKey)(void *, ulong, ulong, bool); // CRLESurface virtual function #17
    void (*Blt)(void *, int, int, struct IDxSurface *, struct tagRECT *, bool); // CRLESurface virtual function #18
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #19
};

typedef struct CRLESurface_data CRLESurface_data, *PCRLESurface_data;

struct CRLESurface_data {
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
    void *offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
};

typedef struct C3DSurface_data C3DSurface_data, *PC3DSurface_data;

struct C3DSurface_data {
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
    int offset_0x44;
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
    int *offset_0x58;
    undefined field86_0x5c;
    undefined field87_0x5d;
    undefined field88_0x5e;
    undefined field89_0x5f;
    undefined field90_0x60;
    undefined field91_0x61;
    undefined field92_0x62;
    undefined field93_0x63;
    undefined4 offset_0x64;
    int *offset_0x68;
    int *offset_0x6c;
    undefined4 *offset_0x70;
    undefined field98_0x74;
    undefined field99_0x75;
    undefined field100_0x76;
    undefined field101_0x77;
    undefined1 offset_0x78;
    undefined field103_0x79;
    undefined field104_0x7a;
    undefined field105_0x7b;
    undefined4 offset_0x7c;
    char offset_0x80;
    undefined field108_0x81;
    undefined field109_0x82;
    undefined field110_0x83;
};

typedef struct C3DSurface C3DSurface, *PC3DSurface;

typedef struct C3DSurface_vftable0 C3DSurface_vftable0, *PC3DSurface_vftable0;

typedef struct C3DSurface_vftable1 C3DSurface_vftable1, *PC3DSurface_vftable1;

struct C3DSurface_data {
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
    int offset_0x44;
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
    int *offset_0x58;
    undefined field86_0x5c;
    undefined field87_0x5d;
    undefined field88_0x5e;
    undefined field89_0x5f;
    undefined field90_0x60;
    undefined field91_0x61;
    undefined field92_0x62;
    undefined field93_0x63;
    undefined4 offset_0x64;
    int *offset_0x68;
    int *offset_0x6c;
    undefined4 *offset_0x70;
    undefined field98_0x74;
    undefined field99_0x75;
    undefined field100_0x76;
    undefined field101_0x77;
    undefined1 offset_0x78;
    undefined field103_0x79;
    undefined field104_0x7a;
    undefined field105_0x7b;
    undefined4 offset_0x7c;
    char offset_0x80;
    undefined field108_0x81;
    undefined field109_0x82;
    undefined field110_0x83;
};

struct C3DSurface_vftable0 {
    undefined4 * (*deleting_destructor)(void *, byte); // C3DSurface virtual function #1
    list<eco::CCompositeHolder<neon::frw::CComponent>*,std::allocator<eco::CCompositeHolder<neon::frw::CComponent>*>_> * (*GetChildList)(void *); // CObject virtual function #2
    undefined4 (*vfunction3)(void *, uint); // C3DSurface virtual function #3
    int (*vfunction4)(void *, undefined4); // C3DSurface virtual function #4
    void (*vfunction5)(void *); // C3DSurface virtual function #5
    undefined4 (*vfunction6)(void *); // C3DSurface virtual function #6
    int (*vfunction7)(void *); // C3DSurface virtual function #7
    undefined2 (*vfunction8)(void *); // C3DSurface virtual function #8
    undefined2 (*vfunction9)(void *); // C3DSurface virtual function #9
    void (*vfunction10)(void *); // C3DSurface virtual function #10
    undefined4 (*vfunction11)(void *); // C3DSurface virtual function #11
    undefined4 (*vfunction12)(void *, undefined4, char); // C3DSurface virtual function #12
    void (*vfunction13)(void *); // C3DSurface virtual function #13
    void (*vfunction14)(void *, undefined1); // C3DSurface virtual function #14
    void (*Release)(void *); // C3DDisplay virtual function #15
    undefined4 (*vfunction16)(void *); // C3DSurface virtual function #16
    undefined4 (*vfunction17)(void *, uint, uint, char); // C3DSurface virtual function #17
    void (*vfunction18)(void *); // C3DSurface virtual function #18
    void (*vfunction19)(void *, int *); // C3DSurface virtual function #19
};

struct C3DSurface_vftable1 {
    void (*vfunction1)(void *, byte); // C3DSurface virtual function #1
    void (*vfunction2)(void *); // C3DSurface virtual function #2
    undefined4 (*vfunction3)(void *, uint); // C3DSurface virtual function #3
};

struct C3DSurface { // class C3DSurface : IDxSurface : IDxDeviceLost
    struct C3DSurface_vftable0 *vftablePtr;
    struct C3DSurface_vftable1 *vftablePtr;
    struct C3DSurface_data C3DSurface_data;
};

typedef struct CEffectScreen CEffectScreen, *PCEffectScreen;

typedef struct CEffectScreen_vftable CEffectScreen_vftable, *PCEffectScreen_vftable;

struct CEffectScreen { // class CEffectScreen : CEffectAbstract
    struct CEffectScreen_vftable *vftablePtr;
};

struct CEffectScreen_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectScreen virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectScreen virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectScreen virtual function #6
    void (*vfunction7)(void *); // CEffectDodge virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectRGBAdd CEffectRGBAdd, *PCEffectRGBAdd;

typedef struct CEffectRGBAdd_vftable CEffectRGBAdd_vftable, *PCEffectRGBAdd_vftable;

struct CEffectRGBAdd { // class CEffectRGBAdd : CEffectAbstract
    struct CEffectRGBAdd_vftable *vftablePtr;
};

struct CEffectRGBAdd_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectRGBAdd virtual function #1
    void (*vfunction2)(void *, undefined1, undefined1, undefined1, undefined1); // CEffectRGBAdd virtual function #2
    void (*vfunction3)(void *); // CEffectRGBAdd virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectRGBAdd virtual function #6
    void (*vfunction7)(void *); // CEffectRGBAdd virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectRGBAdd virtual function #8
};

typedef struct CEffectRGBMulti CEffectRGBMulti, *PCEffectRGBMulti;

typedef struct CEffectRGBMulti_vftable CEffectRGBMulti_vftable, *PCEffectRGBMulti_vftable;

struct CEffectRGBMulti { // class CEffectRGBMulti : CEffectAbstract
    struct CEffectRGBMulti_vftable *vftablePtr;
};

struct CEffectRGBMulti_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectRGBMulti virtual function #1
    void (*vfunction2)(void *, undefined1, undefined1, undefined1, undefined1); // CEffectRGBAdd virtual function #2
    void (*vfunction3)(void *); // CEffectRGBMulti virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectRGBMulti virtual function #5
    void (*vfunction6)(void *); // CEffectRGBMulti virtual function #6
    void (*vfunction7)(void *); // CEffectRGBMulti virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectAlpha CEffectAlpha, *PCEffectAlpha;

typedef struct CEffectAlpha_vftable CEffectAlpha_vftable, *PCEffectAlpha_vftable;

struct CEffectAlpha { // class CEffectAlpha : CEffectAbstract
    struct CEffectAlpha_vftable *vftablePtr;
};

struct CEffectAlpha_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectAlpha virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectAlpha virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*vfunction7)(void *); // CEffectAbstract virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAlpha virtual function #8
};

typedef struct CEffectSub_vftable CEffectSub_vftable, *PCEffectSub_vftable;

struct CEffectSub_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSub virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectSub virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectSub virtual function #6
    void (*vfunction7)(void *); // CEffectSub virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAlpha virtual function #8
};

typedef struct CEffectSub CEffectSub, *PCEffectSub;

struct CEffectSub { // class CEffectSub : CEffectAbstract
    struct CEffectSub_vftable *vftablePtr;
};

typedef struct CEffectDifferent_vftable CEffectDifferent_vftable, *PCEffectDifferent_vftable;

struct CEffectDifferent_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectDifferent virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectDifferent virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectDifferent virtual function #6
    void (*vfunction7)(void *); // CEffectLighten virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectDifferent CEffectDifferent, *PCEffectDifferent;

struct CEffectDifferent { // class CEffectDifferent : CEffectAbstract
    struct CEffectDifferent_vftable *vftablePtr;
};

typedef struct CEffectAdd_vftable CEffectAdd_vftable, *PCEffectAdd_vftable;

struct CEffectAdd_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectAdd virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectAdd virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectAdd virtual function #6
    void (*vfunction7)(void *); // CEffectAdd virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAlpha virtual function #8
};

typedef struct CEffectAdd CEffectAdd, *PCEffectAdd;

struct CEffectAdd { // class CEffectAdd : CEffectAbstract
    struct CEffectAdd_vftable *vftablePtr;
};

typedef struct CEffectRGBSub CEffectRGBSub, *PCEffectRGBSub;

typedef struct CEffectRGBSub_vftable CEffectRGBSub_vftable, *PCEffectRGBSub_vftable;

struct CEffectRGBSub { // class CEffectRGBSub : CEffectAbstract
    struct CEffectRGBSub_vftable *vftablePtr;
};

struct CEffectRGBSub_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectRGBSub virtual function #1
    void (*vfunction2)(void *, undefined1, undefined1, undefined1, undefined1); // CEffectRGBAdd virtual function #2
    void (*vfunction3)(void *); // CEffectRGBSub virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectRGBSub virtual function #6
    void (*vfunction7)(void *); // CEffectRGBSub virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectRGBAdd virtual function #8
};

typedef struct CEffectAbstract_vftable CEffectAbstract_vftable, *PCEffectAbstract_vftable;

struct CEffectAbstract_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectAbstract virtual function #1
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CVisual virtual function #2
    void (*vfunction3)(void *); // MSVCR90.DLL CEffectAbstract pure virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // MSVCR90.DLL CEffectAbstract pure virtual function #5
    void (*vfunction6)(void *); // MSVCR90.DLL CEffectAbstract pure virtual function #6
    void (*vfunction7)(void *); // CEffectAbstract virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectAbstract CEffectAbstract, *PCEffectAbstract;

struct CEffectAbstract { // class CEffectAbstract : IDxEffect
    struct CEffectAbstract_vftable *vftablePtr;
};

typedef struct CEffectDodge_vftable CEffectDodge_vftable, *PCEffectDodge_vftable;

struct CEffectDodge_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectDodge virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectDodge virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectDodge virtual function #6
    void (*vfunction7)(void *); // CEffectDodge virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectDodge CEffectDodge, *PCEffectDodge;

struct CEffectDodge { // class CEffectDodge : CEffectAbstract
    struct CEffectDodge_vftable *vftablePtr;
};

typedef struct CEffectAlphaGray CEffectAlphaGray, *PCEffectAlphaGray;

typedef struct CEffectAlphaGray_vftable CEffectAlphaGray_vftable, *PCEffectAlphaGray_vftable;

struct CEffectAlphaGray { // class CEffectAlphaGray : CEffectAbstract
    struct CEffectAlphaGray_vftable *vftablePtr;
};

struct CEffectAlphaGray_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectAlphaGray virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectAlphaGray virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectAlphaGray virtual function #6
    void (*vfunction7)(void *); // CEffectAlphaGray virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectDodgeBurn CEffectDodgeBurn, *PCEffectDodgeBurn;

typedef struct CEffectDodgeBurn_vftable CEffectDodgeBurn_vftable, *PCEffectDodgeBurn_vftable;

struct CEffectDodgeBurn { // class CEffectDodgeBurn : CEffectAbstract
    struct CEffectDodgeBurn_vftable *vftablePtr;
};

struct CEffectDodgeBurn_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectDodgeBurn virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectDodgeBurn virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectDodgeBurn virtual function #6
    void (*vfunction7)(void *); // CEffectDodge virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectLighten CEffectLighten, *PCEffectLighten;

typedef struct CEffectLighten_vftable CEffectLighten_vftable, *PCEffectLighten_vftable;

struct CEffectLighten { // class CEffectLighten : CEffectAbstract
    struct CEffectLighten_vftable *vftablePtr;
};

struct CEffectLighten_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectLighten virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectLighten virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectLighten virtual function #6
    void (*vfunction7)(void *); // CEffectLighten virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectSrcCopy CEffectSrcCopy, *PCEffectSrcCopy;

typedef struct CEffectSrcCopy_vftable CEffectSrcCopy_vftable, *PCEffectSrcCopy_vftable;

struct CEffectSrcCopy { // class CEffectSrcCopy : CEffectAbstract
    struct CEffectSrcCopy_vftable *vftablePtr;
};

struct CEffectSrcCopy_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcCopy virtual function #1
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CVisual virtual function #2
    void (*vfunction3)(void *); // CEffectSrcCopy virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*vfunction7)(void *); // CEffectAbstract virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectDarken CEffectDarken, *PCEffectDarken;

typedef struct CEffectDarken_vftable CEffectDarken_vftable, *PCEffectDarken_vftable;

struct CEffectDarken { // class CEffectDarken : CEffectAbstract
    struct CEffectDarken_vftable *vftablePtr;
};

struct CEffectDarken_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectDarken virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectDarken virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectDarken virtual function #6
    void (*vfunction7)(void *); // CEffectLighten virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectGray CEffectGray, *PCEffectGray;

typedef struct CEffectGray_vftable CEffectGray_vftable, *PCEffectGray_vftable;

struct CEffectGray { // class CEffectGray : CEffectAbstract
    struct CEffectGray_vftable *vftablePtr;
};

struct CEffectGray_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectGray virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectGray virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectGray virtual function #6
    void (*vfunction7)(void *); // CEffectGray virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectGray virtual function #8
};

typedef struct CEffectMultiply_vftable CEffectMultiply_vftable, *PCEffectMultiply_vftable;

struct CEffectMultiply_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectMultiply virtual function #1
    void (*vfunction2)(void *, undefined1); // CEffectAlpha virtual function #2
    void (*vfunction3)(void *); // CEffectMultiply virtual function #3
    void (*Release)(void *); // C3DDisplay virtual function #4
    void (*vfunction5)(void *); // CEffectSrcCopy virtual function #5
    void (*vfunction6)(void *); // CEffectMultiply virtual function #6
    void (*vfunction7)(void *); // CEffectMultiply virtual function #7
    undefined4 (*vfunction8)(void *); // CEffectAbstract virtual function #8
};

typedef struct CEffectMultiply CEffectMultiply, *PCEffectMultiply;

struct CEffectMultiply { // class CEffectMultiply : CEffectAbstract
    struct CEffectMultiply_vftable *vftablePtr;
};

typedef struct C3DDraw_vftable1 C3DDraw_vftable1, *PC3DDraw_vftable1;

struct C3DDraw_vftable1 {
    void (*vfunction1)(void *, byte); // C3DDraw virtual function #1
    void (*vfunction2)(void *, int *); // C3DDraw virtual function #2
};

typedef struct C3DDraw_vftable0 C3DDraw_vftable0, *PC3DDraw_vftable0;

struct C3DDraw_vftable0 {
    undefined4 * (*deleting_destructor)(void *, byte); // C3DDraw virtual function #1
    void (*vfunction2)(void *, int *); // C3DDraw virtual function #2
    void (*vfunction3)(void *, undefined4); // C3DDraw virtual function #3
    void (*vfunction4)(void *, int, undefined4, undefined4, undefined4); // C3DDraw virtual function #4
    void (*vfunction5)(void *, undefined4, undefined4, undefined4, undefined4, undefined4); // C3DDraw virtual function #5
    void (*vfunction6)(void *, undefined4 *); // C3DDraw virtual function #6
    void (*vfunction7)(void *, undefined4 *); // C3DDraw virtual function #7
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #8
    void (*vfunction9)(void *, undefined4 *); // C3DDraw virtual function #9
    void (*vfunction10)(void *, undefined4 *); // C3DDraw virtual function #10
    void (*vfunction11)(void *, undefined1); // C3DDraw virtual function #11
    undefined1 (*vfunction12)(void *); // C3DDraw virtual function #12
    int (*vfunction13)(void *); // C3DDraw virtual function #13
    int (*vfunction14)(void *); // C3DDraw virtual function #14
    int (*vfunction15)(void *); // C3DDraw virtual function #15
    int (*vfunction16)(void *); // C3DDraw virtual function #16
    int * (*vfunction17)(void *, undefined4); // C3DDraw virtual function #17
    void (*Release)(void *); // C3DDisplay virtual function #18
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #19
    undefined1 (*vfunction20)(void *); // C3DDraw virtual function #20
};

typedef struct C3DDraw C3DDraw, *PC3DDraw;

typedef struct C3DDraw_data C3DDraw_data, *PC3DDraw_data;

struct C3DDraw_data {
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
    undefined field25_0x64;
    undefined field26_0x65;
    undefined field27_0x66;
    undefined field28_0x67;
    undefined field29_0x68;
    undefined field30_0x69;
    undefined field31_0x6a;
    undefined field32_0x6b;
    undefined field33_0x6c;
    undefined field34_0x6d;
    undefined field35_0x6e;
    undefined field36_0x6f;
    undefined field37_0x70;
    undefined field38_0x71;
    undefined field39_0x72;
    undefined field40_0x73;
    undefined4 offset_0x74;
    undefined4 offset_0x78;
    undefined4 offset_0x7c;
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
    undefined4 offset_0xa8;
    int *offset_0xac;
    undefined4 offset_0xb0;
    undefined field57_0xb4;
    undefined field58_0xb5;
    undefined field59_0xb6;
    undefined field60_0xb7;
    struct IDxDevice *offset_0xb8;
};

struct C3DDraw { // class C3DDraw : IDxDraw : IRenderFunctor
    struct C3DDraw_vftable0 *vftablePtr;
    struct C3DDraw_vftable1 *vftablePtr;
    struct C3DDraw_data C3DDraw_data;
};

typedef struct FunctorImpl<void,Loki::NullType,Loki::ClassLevelLockable> FunctorImpl<void,Loki::NullType,Loki::ClassLevelLockable>, *PFunctorImpl<void,Loki::NullType,Loki::ClassLevelLockable>;

typedef struct FunctorImplBase<void,Loki::ClassLevelLockable> FunctorImplBase<void,Loki::ClassLevelLockable>, *PFunctorImplBase<void,Loki::ClassLevelLockable>;

typedef struct FunctorImplBase<void,Loki::ClassLevelLockable>_vftable FunctorImplBase<void,Loki::ClassLevelLockable>_vftable, *PFunctorImplBase<void,Loki::ClassLevelLockable>_vftable;

typedef struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>, *PSmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;

typedef struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>, *PSmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;

struct FunctorImplBase<void,Loki::ClassLevelLockable>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // FunctorImplBase<void...> virtual function #1
    undefined (*vfunction2)(void); // MSVCR90.DLL FunctorImplBase<void,Loki::ClassLevelLockable> pure virtual function #2
    undefined (*vfunction3)(void); // MSVCR90.DLL FunctorImplBase<void,Loki::ClassLevelLockable> pure virtual function #3
};

struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImplBase<void,Loki::ClassLevelLockable> { // class FunctorImplBase<void,Loki::ClassLevelLockable> : SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct FunctorImplBase<void,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImpl<void,Loki::NullType,Loki::ClassLevelLockable> { // class FunctorImpl<void,Loki::NullType,Loki::ClassLevelLockable> : FunctorImplBase<void,Loki::ClassLevelLockable>
    struct FunctorImplBase<void,Loki::ClassLevelLockable> FunctorImplBase<void,Loki::ClassLevelLockable>;
};

typedef struct MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>_vftable MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>_vftable, *PMemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>_vftable;

struct MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MemFunHandler<Loki::Functor<void...> virtual function #1
    undefined (*vfunction2)(void); // MemFunHandler<Loki::Functor<void...> virtual function #2
    undefined (*vfunction3)(void); // MemFunHandler<Loki::Functor<long...> virtual function #3
    void (*vfunction4)(void *); // MemFunHandler<Loki::Functor<void...> virtual function #4
};

typedef struct MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)> MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>, *PMemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)> { // class MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)> : FunctorImpl<void,Loki::NullType,Loki::ClassLevelLockable>
    struct MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

typedef struct MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)> MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>, *PMemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>;

typedef struct MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_vftable MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_vftable, *PMemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_vftable;

typedef struct MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_data MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_data, *PMemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_data;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_data {
    undefined4 offset_0x0;
};

struct MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MemFunHandler<Loki::Functor<long...> virtual function #1
    undefined (*vfunction2)(void); // MemFunHandler<Loki::Functor<long...> virtual function #2
    undefined (*vfunction3)(void); // MemFunHandler<Loki::Functor<long...> virtual function #3
    void (*vfunction4)(void *); // MemFunHandler<Loki::Functor<long...> virtual function #4
};

struct MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)> { // class MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)> : FunctorImpl<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>
    struct MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
    struct MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_data MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_data;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_vftable MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_vftable, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_vftable;

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*...> virtual function #1
    undefined (*vfunction2)(void); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*...> virtual function #2
    undefined (*vfunction3)(void); // MemFunHandler<Loki::Functor<long...> virtual function #3
    void (*vfunction4)(void *); // MemFunHandler<Loki::Functor<long...> virtual function #4
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_data, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_data;

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_data {
    undefined4 offset_0x0;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)> MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_data {
    undefined4 offset_0x0;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)> { // class MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)> : FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>_data;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)> MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>;

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_vftable MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_vftable, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_vftable;

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_data, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_data;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_data {
    undefined4 offset_0x0;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*...> virtual function #1
    undefined (*vfunction2)(void); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&...> virtual function #2
    undefined (*vfunction3)(void); // MemFunHandler<Loki::Functor<long...> virtual function #3
    void (*vfunction4)(void *); // MemFunHandler<Loki::Functor<long...> virtual function #4
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)> { // class MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)> : FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>_data;
};

typedef struct FunctorImplBase<int,Loki::ClassLevelLockable> FunctorImplBase<int,Loki::ClassLevelLockable>, *PFunctorImplBase<int,Loki::ClassLevelLockable>;

typedef struct FunctorImplBase<int,Loki::ClassLevelLockable>_vftable FunctorImplBase<int,Loki::ClassLevelLockable>_vftable, *PFunctorImplBase<int,Loki::ClassLevelLockable>_vftable;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImplBase<int,Loki::ClassLevelLockable>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // FunctorImplBase<int...> virtual function #1
    undefined (*vfunction2)(void); // MSVCR90.DLL FunctorImplBase<int,Loki::ClassLevelLockable> pure virtual function #2
    undefined (*vfunction3)(void); // MSVCR90.DLL FunctorImplBase<int,Loki::ClassLevelLockable> pure virtual function #3
};

struct FunctorImplBase<int,Loki::ClassLevelLockable> { // class FunctorImplBase<int,Loki::ClassLevelLockable> : SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct FunctorImplBase<int,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

typedef struct LifetimeTracker_vftable LifetimeTracker_vftable, *PLifetimeTracker_vftable;

struct LifetimeTracker_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MSVCR90.DLL LifetimeTracker pure virtual function #1
};

typedef struct LifetimeTracker LifetimeTracker, *PLifetimeTracker;

struct LifetimeTracker { // class LifetimeTracker
    struct LifetimeTracker_vftable *vftablePtr;
};

typedef struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_vftable ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_vftable, *PConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_vftable;

struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // ConcreteLifetimeTracker<...> virtual function #1
};

typedef struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_data ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_data, *PConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_data;

struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

typedef struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_> ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>, *PConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>;

struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_> { // class ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_> : LifetimeTracker
    struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_vftable *vftablePtr;
    struct ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_data ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>_data;
};

typedef struct FunctorImplBase<long,Loki::ClassLevelLockable>_vftable FunctorImplBase<long,Loki::ClassLevelLockable>_vftable, *PFunctorImplBase<long,Loki::ClassLevelLockable>_vftable;

struct FunctorImplBase<long,Loki::ClassLevelLockable>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // FunctorImplBase<long...> virtual function #1
    undefined (*vfunction2)(void); // MSVCR90.DLL FunctorImplBase<long,Loki::ClassLevelLockable> pure virtual function #2
    undefined (*vfunction3)(void); // MSVCR90.DLL FunctorImplBase<long,Loki::ClassLevelLockable> pure virtual function #3
};

typedef struct FunctorImplBase<long,Loki::ClassLevelLockable> FunctorImplBase<long,Loki::ClassLevelLockable>, *PFunctorImplBase<long,Loki::ClassLevelLockable>;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImplBase<long,Loki::ClassLevelLockable> { // class FunctorImplBase<long,Loki::ClassLevelLockable> : SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct FunctorImplBase<long,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

typedef struct FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable> FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>, *PFunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>;

struct FunctorImplBase<int,Loki::ClassLevelLockable> { // class FunctorImplBase<int,Loki::ClassLevelLockable> : SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct FunctorImplBase<int,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable> { // class FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable> : FunctorImplBase<int,Loki::ClassLevelLockable>
    struct FunctorImplBase<int,Loki::ClassLevelLockable> FunctorImplBase<int,Loki::ClassLevelLockable>;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_vftable MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_vftable, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_vftable;

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*...> virtual function #1
    undefined (*vfunction2)(void); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*...> virtual function #2
    undefined (*vfunction3)(void); // MemFunHandler<Loki::Functor<long...> virtual function #3
    void (*vfunction4)(void *); // MemFunHandler<Loki::Functor<long...> virtual function #4
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_data, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_data;

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_data {
    undefined4 offset_0x0;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)> MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_data {
    undefined4 offset_0x0;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)> { // class MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)> : FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>_data;
};

typedef struct FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable> FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>, *PFunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>;

struct FunctorImplBase<int,Loki::ClassLevelLockable> { // class FunctorImplBase<int,Loki::ClassLevelLockable> : SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct FunctorImplBase<int,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable> { // class FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable> : FunctorImplBase<int,Loki::ClassLevelLockable>
    struct FunctorImplBase<int,Loki::ClassLevelLockable> FunctorImplBase<int,Loki::ClassLevelLockable>;
};

typedef struct FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable> FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>, *PFunctorImpl<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>;

struct FunctorImplBase<int,Loki::ClassLevelLockable> { // class FunctorImplBase<int,Loki::ClassLevelLockable> : SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct FunctorImplBase<int,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable> { // class FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable> : FunctorImplBase<int,Loki::ClassLevelLockable>
    struct FunctorImplBase<int,Loki::ClassLevelLockable> FunctorImplBase<int,Loki::ClassLevelLockable>;
};

typedef struct FunctorImpl<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable> FunctorImpl<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>, *PFunctorImpl<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>;

struct FunctorImplBase<long,Loki::ClassLevelLockable> { // class FunctorImplBase<long,Loki::ClassLevelLockable> : SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct FunctorImplBase<long,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImpl<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable> { // class FunctorImpl<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable> : FunctorImplBase<long,Loki::ClassLevelLockable>
    struct FunctorImplBase<long,Loki::ClassLevelLockable> FunctorImplBase<long,Loki::ClassLevelLockable>;
};

typedef struct FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable> FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>, *PFunctorImpl<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>;

struct FunctorImplBase<int,Loki::ClassLevelLockable> { // class FunctorImplBase<int,Loki::ClassLevelLockable> : SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct FunctorImplBase<int,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable> { // class FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable> : FunctorImplBase<int,Loki::ClassLevelLockable>
    struct FunctorImplBase<int,Loki::ClassLevelLockable> FunctorImplBase<int,Loki::ClassLevelLockable>;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_vftable MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_vftable, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_vftable;

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*...> virtual function #1
    undefined (*vfunction2)(void); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*...> virtual function #2
    undefined (*vfunction3)(void); // MemFunHandler<Loki::Functor<long...> virtual function #3
    void (*vfunction4)(void *); // MemFunHandler<Loki::Functor<long...> virtual function #4
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)> MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>;

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_data, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_data;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_data {
    undefined4 offset_0x0;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)> { // class MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)> : FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>_data;
};

typedef struct FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>_vftable FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>_vftable, *PFunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>_vftable;

struct FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // FunctorHandler<...> virtual function #1
    undefined (*vfunction2)(void); // FunctorHandler<...> virtual function #2
    undefined (*vfunction3)(void); // FunctorHandler<...> virtual function #3
    void (*vfunction4)(void *); // FunctorHandler<...> virtual function #4
};

typedef struct FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)> FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>, *PFunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)> { // class FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)> : FunctorImpl<void,Loki::NullType,Loki::ClassLevelLockable>
    struct FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_vftable MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_vftable, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_vftable;

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&...> virtual function #1
    undefined (*vfunction2)(void); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&...> virtual function #2
    undefined (*vfunction3)(void); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&...> virtual function #3
    void (*vfunction4)(void *); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&...> virtual function #4
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)> MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>;

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_data, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_data;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)> { // class MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)> : FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>_data;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_data, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_data;

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_data {
    undefined4 offset_0x0;
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_vftable MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_vftable, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_vftable;

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*...> virtual function #1
    undefined (*vfunction2)(void); // MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*...> virtual function #2
    undefined (*vfunction3)(void); // MemFunHandler<Loki::Functor<long...> virtual function #3
    void (*vfunction4)(void *); // MemFunHandler<Loki::Functor<long...> virtual function #4
};

typedef struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)> MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>, *PMemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>;

struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // class SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> : SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
    struct SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallObjectBase<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_data {
    undefined4 offset_0x0;
};

struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)> { // class MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)> : FunctorImpl<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_vftable *vftablePtr;
    struct SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> SmallValueObject<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;
    struct MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_data MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/DXAvatar/CDxAvtr2004/CDxAvtr2004 - /DXAvatar/CDxAvtr2004

typedef struct CDxAvtr2004_vftable CDxAvtr2004_vftable, *PCDxAvtr2004_vftable;

struct CDxAvtr2004_vftable {
    CManagedRes * (*deleting_destructor)(void *, byte); // CDxAvtr2004 virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    long (*Restore)(void *); // CDxAvtr2004 virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/DXAvatar/CAvtrId/CAvtrId - /DXAvatar/CAvtrId

typedef struct CAvtrId_vftable CAvtrId_vftable, *PCAvtrId_vftable;

struct CAvtrId_vftable {
    CAvtrId * (*deleting_destructor)(void *, byte); // CAvtrId virtual function #1
};

typedef struct CAvtrId_data CAvtrId_data, *PCAvtrId_data;

struct CAvtrId_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    uint offset_0x8;
    uint offset_0xc;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined1 offset_0x14;
    undefined1 offset_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
};

typedef struct CHgDxAniSurfaceList CHgDxAniSurfaceList, *PCHgDxAniSurfaceList;

typedef struct CHgDxAniSurfaceList_vftable CHgDxAniSurfaceList_vftable, *PCHgDxAniSurfaceList_vftable;

typedef struct CHgDxAniSurfaceList_data CHgDxAniSurfaceList_data, *PCHgDxAniSurfaceList_data;

struct CHgDxAniSurfaceList_data {
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
    int offset_0x5c;
    undefined field30_0x60;
    undefined field31_0x61;
    undefined field32_0x62;
    undefined field33_0x63;
    undefined field34_0x64;
    undefined field35_0x65;
    undefined field36_0x66;
    undefined field37_0x67;
    void *offset_0x68;
    void *offset_0x6c;
    undefined field40_0x70;
    undefined field41_0x71;
    undefined field42_0x72;
    undefined field43_0x73;
    undefined4 offset_0x74;
    undefined4 offset_0x78;
    undefined4 offset_0x7c;
    void *offset_0x80;
    undefined4 offset_0x84;
    void *offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
    void *offset_0x98;
    undefined field54_0x9c;
    undefined field55_0x9d;
    undefined field56_0x9e;
    undefined field57_0x9f;
    undefined field58_0xa0;
    undefined field59_0xa1;
    undefined field60_0xa2;
    undefined field61_0xa3;
    void *offset_0xa4;
    void *offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined field71_0xc8;
    undefined field72_0xc9;
    undefined field73_0xca;
    undefined field74_0xcb;
};

struct CHgDxAniSurfaceList_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgDxAniSurfaceList virtual function #1
};

struct CHgDxAniSurfaceList { // class CHgDxAniSurfaceList
    struct CHgDxAniSurfaceList_vftable *vftablePtr;
    struct CHgDxAniSurfaceList_data CHgDxAniSurfaceList_data;
};

typedef struct CHgAniSurfaceList_data CHgAniSurfaceList_data, *PCHgAniSurfaceList_data;

struct CHgAniSurfaceList_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
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
    int offset_0x64;
    undefined field35_0x68;
    undefined field36_0x69;
    undefined field37_0x6a;
    undefined field38_0x6b;
    undefined field39_0x6c;
    undefined field40_0x6d;
    undefined field41_0x6e;
    undefined field42_0x6f;
    void *offset_0x70;
    void *offset_0x74;
    undefined field45_0x78;
    undefined field46_0x79;
    undefined field47_0x7a;
    undefined field48_0x7b;
    undefined4 offset_0x7c;
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    void *offset_0x88;
    undefined4 offset_0x8c;
    void *offset_0x90;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    void *offset_0xa0;
    undefined field59_0xa4;
    undefined field60_0xa5;
    undefined field61_0xa6;
    undefined field62_0xa7;
    undefined field63_0xa8;
    undefined field64_0xa9;
    undefined field65_0xaa;
    undefined field66_0xab;
    void *offset_0xac;
    void *offset_0xb0;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
};

typedef struct CHgAniSurfaceList CHgAniSurfaceList, *PCHgAniSurfaceList;

typedef struct CHgAniSurfaceList_vftable CHgAniSurfaceList_vftable, *PCHgAniSurfaceList_vftable;

struct CHgAniSurfaceList_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
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
    int offset_0x64;
    undefined field35_0x68;
    undefined field36_0x69;
    undefined field37_0x6a;
    undefined field38_0x6b;
    undefined field39_0x6c;
    undefined field40_0x6d;
    undefined field41_0x6e;
    undefined field42_0x6f;
    void *offset_0x70;
    void *offset_0x74;
    undefined field45_0x78;
    undefined field46_0x79;
    undefined field47_0x7a;
    undefined field48_0x7b;
    undefined4 offset_0x7c;
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    void *offset_0x88;
    undefined4 offset_0x8c;
    void *offset_0x90;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    void *offset_0xa0;
    undefined field59_0xa4;
    undefined field60_0xa5;
    undefined field61_0xa6;
    undefined field62_0xa7;
    undefined field63_0xa8;
    undefined field64_0xa9;
    undefined field65_0xaa;
    undefined field66_0xab;
    void *offset_0xac;
    void *offset_0xb0;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
};

struct CHgAniSurfaceList_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgAniSurfaceList virtual function #1
};

struct CHgAniSurfaceList { // class CHgAniSurfaceList
    struct CHgAniSurfaceList_vftable *vftablePtr;
    struct CHgAniSurfaceList_data CHgAniSurfaceList_data;
};

typedef struct CAvtrPartPool_vftable CAvtrPartPool_vftable, *PCAvtrPartPool_vftable;

struct CAvtrPartPool_vftable {
    CManagedRes * (*deleting_destructor)(void *, byte); // CAvtrPartPool virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #3
};

typedef struct CAvtrPartPool CAvtrPartPool, *PCAvtrPartPool;

typedef struct CManagedRes_data CManagedRes_data, *PCManagedRes_data;

typedef enum ERes {
} ERes;

struct CManagedRes_data {
    enum ERes offset_0x0;
    undefined **offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
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
    undefined1 offset_0x20;
    undefined1 offset_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined field37_0x40;
    undefined field38_0x41;
    undefined field39_0x42;
    undefined field40_0x43;
    undefined field41_0x44;
    undefined field42_0x45;
    undefined field43_0x46;
    undefined field44_0x47;
    undefined field45_0x48;
    undefined field46_0x49;
    undefined field47_0x4a;
    undefined field48_0x4b;
    undefined field49_0x4c;
    undefined field50_0x4d;
    undefined field51_0x4e;
    undefined field52_0x4f;
    undefined field53_0x50;
    undefined field54_0x51;
    undefined field55_0x52;
    undefined field56_0x53;
    undefined field57_0x54;
    undefined field58_0x55;
    undefined field59_0x56;
    undefined field60_0x57;
    undefined field61_0x58;
    undefined field62_0x59;
    undefined field63_0x5a;
    undefined field64_0x5b;
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
    undefined4 offset_0x70;
    undefined4 offset_0x74;
    undefined4 offset_0x78;
    undefined4 offset_0x7c;
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
    undefined4 offset_0xa8;
};

struct CAvtrPartPool { // class CAvtrPartPool : CManagedRes
    struct CAvtrPartPool_vftable *vftablePtr;
    struct CManagedRes_data CManagedRes_data;
};

typedef struct CDxAvtrPartPool_vftable CDxAvtrPartPool_vftable, *PCDxAvtrPartPool_vftable;

struct CDxAvtrPartPool_vftable {
    CManagedRes * (*deleting_destructor)(void *, byte); // CDxAvtrPartPool virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    long (*Restore)(void *); // CDxAvtrPartPool virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/DXAvatar/CDxAvtrPartPool/CDxAvtrPartPool - /DXAvatar/CDxAvtrPartPool

typedef struct C3DDisplay_vftable1 C3DDisplay_vftable1, *PC3DDisplay_vftable1;

struct C3DDisplay_vftable1 {
    void (*vfunction1)(void *, byte); // C3DDisplay virtual function #1
    void (*OnLostDevice)(void *); // C3DDisplay virtual function #2
    bool (*CreateVertexPool)(void *); // C3DDisplay virtual function #3
};

typedef struct C3DDisplay C3DDisplay, *PC3DDisplay;

typedef struct C3DDisplay_vftable0 C3DDisplay_vftable0, *PC3DDisplay_vftable0;

typedef struct C3DDisplay_data C3DDisplay_data, *PC3DDisplay_data;

struct C3DDisplay_data {
    undefined4 offset_0x0;
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
    int offset_0x14;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    int *offset_0x1c;
    int *offset_0x20;
    int *offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
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
    undefined4 offset_0x15c;
    undefined4 offset_0x160;
    undefined4 offset_0x164;
    undefined4 offset_0x168;
    undefined4 offset_0x16c;
    undefined4 offset_0x170;
    undefined1 offset_0x174;
    undefined1 offset_0x175;
    undefined1 offset_0x176;
    undefined field336_0x177;
    undefined4 offset_0x178;
    undefined4 offset_0x17c;
    undefined4 offset_0x180;
    undefined4 offset_0x184;
    undefined1 offset_0x188;
    undefined1 offset_0x189;
    undefined field343_0x18a;
    undefined field344_0x18b;
    undefined4 offset_0x18c;
    undefined field346_0x190;
    undefined field347_0x191;
    undefined field348_0x192;
    undefined field349_0x193;
    undefined field350_0x194;
    undefined field351_0x195;
    undefined field352_0x196;
    undefined field353_0x197;
    undefined field354_0x198;
    undefined field355_0x199;
    undefined field356_0x19a;
    undefined field357_0x19b;
    undefined field358_0x19c;
    undefined field359_0x19d;
    undefined field360_0x19e;
    undefined field361_0x19f;
    undefined field362_0x1a0;
    undefined field363_0x1a1;
    undefined field364_0x1a2;
    undefined field365_0x1a3;
    undefined field366_0x1a4;
    undefined field367_0x1a5;
    undefined field368_0x1a6;
    undefined field369_0x1a7;
    undefined field370_0x1a8;
    undefined field371_0x1a9;
    undefined field372_0x1aa;
    undefined field373_0x1ab;
    undefined field374_0x1ac;
    undefined field375_0x1ad;
    undefined field376_0x1ae;
    undefined field377_0x1af;
    undefined field378_0x1b0;
    undefined field379_0x1b1;
    undefined field380_0x1b2;
    undefined field381_0x1b3;
    undefined field382_0x1b4;
    undefined field383_0x1b5;
    undefined field384_0x1b6;
    undefined field385_0x1b7;
    undefined field386_0x1b8;
    undefined field387_0x1b9;
    undefined field388_0x1ba;
    undefined field389_0x1bb;
    undefined field390_0x1bc;
    undefined field391_0x1bd;
    undefined field392_0x1be;
    undefined field393_0x1bf;
    undefined field394_0x1c0;
    undefined field395_0x1c1;
    undefined field396_0x1c2;
    undefined field397_0x1c3;
    undefined4 offset_0x1c4;
    undefined4 offset_0x1c8;
    undefined4 offset_0x1cc;
    undefined4 offset_0x1d0;
    undefined4 offset_0x1d4;
    undefined4 offset_0x1d8;
    undefined4 offset_0x1dc;
    undefined field405_0x1e0;
    undefined field406_0x1e1;
    undefined field407_0x1e2;
    undefined field408_0x1e3;
    undefined field409_0x1e4;
    undefined field410_0x1e5;
    undefined field411_0x1e6;
    undefined field412_0x1e7;
    undefined field413_0x1e8;
    undefined field414_0x1e9;
    undefined field415_0x1ea;
    undefined field416_0x1eb;
    undefined field417_0x1ec;
    undefined field418_0x1ed;
    undefined field419_0x1ee;
    undefined field420_0x1ef;
    undefined field421_0x1f0;
    undefined field422_0x1f1;
    undefined field423_0x1f2;
    undefined field424_0x1f3;
    undefined field425_0x1f4;
    undefined field426_0x1f5;
    undefined field427_0x1f6;
    undefined field428_0x1f7;
    undefined4 offset_0x1f8;
    void *offset_0x1fc;
    undefined field431_0x200;
    undefined field432_0x201;
    undefined field433_0x202;
    undefined field434_0x203;
    undefined field435_0x204;
    undefined field436_0x205;
    undefined field437_0x206;
    undefined field438_0x207;
    undefined field439_0x208;
    undefined field440_0x209;
    undefined field441_0x20a;
    undefined field442_0x20b;
    undefined field443_0x20c;
    undefined field444_0x20d;
    undefined field445_0x20e;
    undefined field446_0x20f;
    undefined field447_0x210;
    undefined field448_0x211;
    undefined field449_0x212;
    undefined field450_0x213;
    undefined field451_0x214;
    undefined field452_0x215;
    undefined field453_0x216;
    undefined field454_0x217;
    undefined4 offset_0x218;
    undefined field456_0x21c;
    undefined field457_0x21d;
    undefined field458_0x21e;
    undefined field459_0x21f;
    undefined field460_0x220;
    undefined field461_0x221;
    undefined field462_0x222;
    undefined field463_0x223;
    undefined field464_0x224;
    undefined field465_0x225;
    undefined field466_0x226;
    undefined field467_0x227;
    undefined field468_0x228;
    undefined field469_0x229;
    undefined field470_0x22a;
    undefined field471_0x22b;
    undefined field472_0x22c;
    undefined field473_0x22d;
    undefined field474_0x22e;
    undefined field475_0x22f;
    undefined field476_0x230;
    undefined field477_0x231;
    undefined field478_0x232;
    undefined field479_0x233;
    undefined field480_0x234;
    undefined field481_0x235;
    undefined field482_0x236;
    undefined field483_0x237;
    undefined field484_0x238;
    undefined field485_0x239;
    undefined field486_0x23a;
    undefined field487_0x23b;
    undefined field488_0x23c;
    undefined field489_0x23d;
    undefined field490_0x23e;
    undefined field491_0x23f;
    undefined field492_0x240;
    undefined field493_0x241;
    undefined field494_0x242;
    undefined field495_0x243;
    undefined field496_0x244;
    undefined field497_0x245;
    undefined field498_0x246;
    undefined field499_0x247;
    undefined field500_0x248;
    undefined field501_0x249;
    undefined field502_0x24a;
    undefined field503_0x24b;
    undefined field504_0x24c;
    undefined field505_0x24d;
    undefined field506_0x24e;
    undefined field507_0x24f;
    undefined field508_0x250;
    undefined field509_0x251;
    undefined field510_0x252;
    undefined field511_0x253;
    undefined field512_0x254;
    undefined field513_0x255;
    undefined field514_0x256;
    undefined field515_0x257;
    undefined4 offset_0x258;
    undefined field517_0x25c;
    undefined field518_0x25d;
    undefined field519_0x25e;
    undefined field520_0x25f;
    undefined field521_0x260;
    undefined field522_0x261;
    undefined field523_0x262;
    undefined field524_0x263;
    undefined field525_0x264;
    undefined field526_0x265;
    undefined field527_0x266;
    undefined field528_0x267;
    undefined field529_0x268;
    undefined field530_0x269;
    undefined field531_0x26a;
    undefined field532_0x26b;
    undefined field533_0x26c;
    undefined field534_0x26d;
    undefined field535_0x26e;
    undefined field536_0x26f;
    undefined field537_0x270;
    undefined field538_0x271;
    undefined field539_0x272;
    undefined field540_0x273;
    undefined field541_0x274;
    undefined field542_0x275;
    undefined field543_0x276;
    undefined field544_0x277;
    undefined field545_0x278;
    undefined field546_0x279;
    undefined field547_0x27a;
    undefined field548_0x27b;
    undefined field549_0x27c;
    undefined field550_0x27d;
    undefined field551_0x27e;
    undefined field552_0x27f;
    undefined field553_0x280;
    undefined field554_0x281;
    undefined field555_0x282;
    undefined field556_0x283;
    undefined field557_0x284;
    undefined field558_0x285;
    undefined field559_0x286;
    undefined field560_0x287;
    undefined field561_0x288;
    undefined field562_0x289;
    undefined field563_0x28a;
    undefined field564_0x28b;
    undefined field565_0x28c;
    undefined field566_0x28d;
    undefined field567_0x28e;
    undefined field568_0x28f;
    undefined field569_0x290;
    undefined field570_0x291;
    undefined field571_0x292;
    undefined field572_0x293;
    undefined field573_0x294;
    undefined field574_0x295;
    undefined field575_0x296;
    undefined field576_0x297;
    undefined4 offset_0x298;
    undefined field578_0x29c;
    undefined field579_0x29d;
    undefined field580_0x29e;
    undefined field581_0x29f;
    undefined field582_0x2a0;
    undefined field583_0x2a1;
    undefined field584_0x2a2;
    undefined field585_0x2a3;
    undefined field586_0x2a4;
    undefined field587_0x2a5;
    undefined field588_0x2a6;
    undefined field589_0x2a7;
    undefined field590_0x2a8;
    undefined field591_0x2a9;
    undefined field592_0x2aa;
    undefined field593_0x2ab;
    undefined field594_0x2ac;
    undefined field595_0x2ad;
    undefined field596_0x2ae;
    undefined field597_0x2af;
    undefined field598_0x2b0;
    undefined field599_0x2b1;
    undefined field600_0x2b2;
    undefined field601_0x2b3;
    undefined field602_0x2b4;
    undefined field603_0x2b5;
    undefined field604_0x2b6;
    undefined field605_0x2b7;
    undefined field606_0x2b8;
    undefined field607_0x2b9;
    undefined field608_0x2ba;
    undefined field609_0x2bb;
    undefined field610_0x2bc;
    undefined field611_0x2bd;
    undefined field612_0x2be;
    undefined field613_0x2bf;
    undefined field614_0x2c0;
    undefined field615_0x2c1;
    undefined field616_0x2c2;
    undefined field617_0x2c3;
    undefined field618_0x2c4;
    undefined field619_0x2c5;
    undefined field620_0x2c6;
    undefined field621_0x2c7;
    undefined field622_0x2c8;
    undefined field623_0x2c9;
    undefined field624_0x2ca;
    undefined field625_0x2cb;
    undefined field626_0x2cc;
    undefined field627_0x2cd;
    undefined field628_0x2ce;
    undefined field629_0x2cf;
    undefined field630_0x2d0;
    undefined field631_0x2d1;
    undefined field632_0x2d2;
    undefined field633_0x2d3;
    undefined field634_0x2d4;
    undefined field635_0x2d5;
    undefined field636_0x2d6;
    undefined field637_0x2d7;
    undefined4 offset_0x2d8;
};

struct C3DDisplay_vftable0 {
    C3DDisplay * (*deleting_destructor)(void *, byte); // C3DDisplay virtual function #1
    bool (*Init)(void *, struct HWND__ *, ulong, ulong, ulong, ulong); // C3DDisplay virtual function #2
    void (*SetVSyncWait)(void *, bool); // C3DDisplay virtual function #3
    bool (*GetVSyncWait)(void *); // C3DDisplay virtual function #4
    ulong (*GetWidth)(void *); // C3DDisplay virtual function #5
    ulong (*GetHeight)(void *); // C3DDisplay virtual function #6
    ulong (*GetBPP)(void *); // C3DDisplay virtual function #7
    bool (*IsWindowMode)(void *); // C3DDisplay virtual function #8
    long (*ChangeDisplayMode)(void *, bool, bool); // C3DDisplay virtual function #9
    void (*OnCreateDxDeviceLost)(void *, struct IDxDeviceLost *); // C3DDisplay virtual function #10
    void (*OnDestroyDxDeviceLost)(void *, struct IDxDeviceLost *); // C3DDisplay virtual function #11
    bool (*Draw)(void *, struct IDxDraw *); // C3DDisplay virtual function #12
    bool (*RenderScene)(void *); // C3DDisplay virtual function #13
    bool (*PostRender)(void *); // C3DDisplay virtual function #14
    IDxSurface * (*CreateSurface)(void *, struct SurfaceDesc *); // C3DDisplay virtual function #15
    IDxDraw * (*CreateDraw)(void *, struct IDxSurface *); // C3DDisplay virtual function #16
    void (*Release)(void *); // C3DDisplay virtual function #17
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #18
    void (*AddClipRgn)(void *, struct HWND__ *); // C3DDisplay virtual function #19
    void (*RemoveClipRgn)(void *, struct HWND__ *); // C3DDisplay virtual function #20
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #21
    bool (*LostDeviceUpdate)(void *); // C3DDisplay virtual function #22
    void (*RenderListClear)(void *); // C3DDisplay virtual function #23
    void (*ApplyLinearFilter)(void *, bool); // C3DDisplay virtual function #24
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // C3DDisplay virtual function #25
    bool (*Make)(void *, struct HWND__ *, int, int, bool, ulong); // C3DDisplay virtual function #26
};

struct C3DDisplay { // class C3DDisplay : IDxDevice : IDxDeviceLost
    struct C3DDisplay_vftable0 *vftablePtr;
    struct C3DDisplay_vftable1 *vftablePtr;
    struct C3DDisplay_data C3DDisplay_data;
};

typedef struct CManager_data CManager_data, *PCManager_data;

struct CManager_data {
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
    int *offset_0x18;
    undefined4 offset_0x1c;
    int offset_0x20;
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
    int offset_0x38;
    undefined4 offset_0x3c;
};

typedef struct CManager_vftable CManager_vftable, *PCManager_vftable;

struct CManager_vftable {
    CManager * (*deleting_destructor)(void *, byte); // CManager virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/h2p/CManager/CManager - /h2p/CManager

typedef struct CLoader_data CLoader_data, *PCLoader_data;

struct CLoader_data {
    HANDLE offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined2 offset_0x10;
    undefined1 offset_0x12;
    undefined field6_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined field10_0x20;
    undefined field11_0x21;
    undefined field12_0x22;
    undefined field13_0x23;
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
    undefined4 offset_0x34;
    undefined field31_0x38;
    undefined field32_0x39;
    undefined field33_0x3a;
    undefined field34_0x3b;
    undefined field35_0x3c;
    undefined field36_0x3d;
    undefined field37_0x3e;
    undefined field38_0x3f;
    undefined field39_0x40;
    undefined field40_0x41;
    undefined field41_0x42;
    undefined field42_0x43;
    undefined field43_0x44;
    undefined field44_0x45;
    undefined field45_0x46;
    undefined field46_0x47;
    undefined field47_0x48;
    undefined field48_0x49;
    undefined field49_0x4a;
    undefined field50_0x4b;
    undefined field51_0x4c;
    undefined field52_0x4d;
    undefined field53_0x4e;
    undefined field54_0x4f;
};

typedef struct CLoader CLoader, *PCLoader;

typedef struct CLoader_vftable CLoader_vftable, *PCLoader_vftable;

struct CLoader_data {
    HANDLE offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined2 offset_0x10;
    undefined1 offset_0x12;
    undefined field6_0x13;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined field10_0x20;
    undefined field11_0x21;
    undefined field12_0x22;
    undefined field13_0x23;
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
    undefined4 offset_0x34;
    undefined field31_0x38;
    undefined field32_0x39;
    undefined field33_0x3a;
    undefined field34_0x3b;
    undefined field35_0x3c;
    undefined field36_0x3d;
    undefined field37_0x3e;
    undefined field38_0x3f;
    undefined field39_0x40;
    undefined field40_0x41;
    undefined field41_0x42;
    undefined field42_0x43;
    undefined field43_0x44;
    undefined field44_0x45;
    undefined field45_0x46;
    undefined field46_0x47;
    undefined field47_0x48;
    undefined field48_0x49;
    undefined field49_0x4a;
    undefined field50_0x4b;
    undefined field51_0x4c;
    undefined field52_0x4d;
    undefined field53_0x4e;
    undefined field54_0x4f;
};

struct CLoader_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CLoader virtual function #1
};

struct CLoader { // class CLoader
    struct CLoader_vftable *vftablePtr;
    struct CLoader_data CLoader_data;
};

typedef struct CFile_data CFile_data, *PCFile_data;

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct CFile_data {
    undefined4 offset_0x0;
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
    undefined4 *offset_0x28;
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
    void *offset_0x3c;
    undefined4 offset_0x40;
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
    undefined4 offset_0x5c;
    undefined4 offset_0x60;
    undefined field82_0x64;
    undefined field83_0x65;
    undefined field84_0x66;
    undefined field85_0x67;
    int offset_0x68;
    undefined field87_0x6c;
    undefined field88_0x6d;
    undefined field89_0x6e;
    undefined field90_0x6f;
    undefined field91_0x70;
    undefined field92_0x71;
    undefined field93_0x72;
    undefined field94_0x73;
    struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *offset_0x74;
    struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *offset_0x78;
    undefined field97_0x7c;
    undefined field98_0x7d;
    undefined field99_0x7e;
    undefined field100_0x7f;
    void *offset_0x80;
    undefined field102_0x84;
    undefined field103_0x85;
    undefined field104_0x86;
    undefined field105_0x87;
    undefined field106_0x88;
    undefined field107_0x89;
    undefined field108_0x8a;
    undefined field109_0x8b;
    void *offset_0x8c;
    undefined4 *offset_0x90;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
};

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /ClassDataTypes/h2p/CFile/CFile - /h2p/CFile

typedef struct CFile_vftable CFile_vftable, *PCFile_vftable;

struct CFile_vftable {
    CFile * (*deleting_destructor)(void *, byte); // CFile virtual function #1
};

typedef struct IDxDeviceLost IDxDeviceLost, *PIDxDeviceLost;

struct IDxDeviceLost { // class IDxDeviceLost
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};


// WARNING! conflicting data type names: /ClassDataTypes/CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>/CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> - /CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>

typedef struct CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>_data CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>_data, *PCNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>_data;

struct CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>_data {
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
    int *offset_0x18;
    undefined4 offset_0x1c;
};

typedef struct CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>_vftable CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>_vftable, *PCNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>_vftable;

struct CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>_vftable {
    int (*Init)(void *, bool, struct HWND__ *, int, int, int, ulong); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #1
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #2
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #3
    int (*LoadBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, ulong, int, bool, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #4
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #5
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #6
    bool (*FSoundOnEndOfStream)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char (*)(struct FSOUND_STREAM *, void *, int, void *), void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #7
    bool (*SetEndCallback)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int *, undefined4); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #8
    int (*CheckSample)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #9
    void (*SetEFXVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #10
    void (*SetBGMVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #11
    void (*SetVOXVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #12
    float (*GetBGMVolume)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #13
    int (*Play)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #14
    int (*PlayBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, bool, bool); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #15
    int (*Play3D)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct VECTOR *, struct VECTOR *, int, int *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #16
    bool (*Set3DChannelAttr)(void *, int, struct VECTOR *, struct VECTOR *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #17
    void (*Stop)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #18
    void (*Stop)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #19
    void (*StopEFX)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #20
    void (*StopBGM)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #21
    void (*StopBGM)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #22
    void (*StopVOX)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #23
    void (*FadeBGM)(void *, int, double); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #24
    void (*FadeBGM)(void *, int, double); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #25
    void (*SetCrossfadeTime)(void *, int); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #26
    void (*DestroyChannel)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #27
    int (*Work)(void *, int); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #28
    void (*SetAutoUnLoadBGM)(void *, bool); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #29
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * (*GetFilenameFromFullPathName)(void *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #30
    void (*DestroySoundData)(void *); // CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #31
    int (*LoadSound)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool, int, int, int, bool, bool, bool, bool, void *, ulong, bool); // CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #32
    int (*LoadSound)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool, int, int, int, bool, bool, bool, bool, void *, ulong, bool); // CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #33
    void (*Close)(void *); // CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #34
    undefined4 * (*deleting_destructor)(void *, byte); // CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #35
};

typedef struct IInput_vftable IInput_vftable, *PIInput_vftable;

struct IInput_vftable {
    void (*vfunction1)(void *); // MSVCR90.DLL IInput pure virtual function #1
    void (*vfunction2)(void *); // MSVCR90.DLL IInput pure virtual function #2
    void (*vfunction3)(void *, undefined4, undefined4); // MSVCR90.DLL IInput pure virtual function #3
    void (*vfunction4)(void *); // MSVCR90.DLL IInput pure virtual function #4
    byte (*vfunction5)(void *, byte); // MSVCR90.DLL IInput pure virtual function #5
    void (*vfunction6)(void *); // MSVCR90.DLL IInput pure virtual function #6
    void (*vfunction7)(void *); // MSVCR90.DLL IInput pure virtual function #7
};


// WARNING! conflicting data type names: /ClassDataTypes/IInput/IInput - /IInput

typedef struct IRenderFunctor IRenderFunctor, *PIRenderFunctor;

struct IRenderFunctor { // class IRenderFunctor
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CDxAvatar_vftable CDxAvatar_vftable, *PCDxAvatar_vftable;

struct CDxAvatar_vftable {
    CText * (*deleting_destructor)(void *, byte); // CDxAvatar virtual function #1
    void (*Logic)(void *); // CDxAvatar virtual function #2
    void (*Output)(void *); // CDxAvatar virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CVisual virtual function #11
    void (*Copy)(void *, struct CObject *); // CVisual virtual function #12
    long (*CalcVRAM)(void *, ulong *, ulong *); // C3DDisplay virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CVisual virtual function #15
    void (*Blt)(void *, int, int, struct IDxSurface *, struct tagRECT *, bool); // CRLESurface virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CDxAvatar virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CVisual virtual function #27
};

typedef struct CDxAvatar_data CDxAvatar_data, *PCDxAvatar_data;

struct CDxAvatar_data {
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
    int *offset_0xbc;
    undefined field180_0xc0;
    undefined field181_0xc1;
    undefined field182_0xc2;
    undefined field183_0xc3;
    undefined field184_0xc4;
    undefined field185_0xc5;
    undefined field186_0xc6;
    undefined field187_0xc7;
    undefined field188_0xc8;
    undefined field189_0xc9;
    undefined field190_0xca;
    undefined field191_0xcb;
    undefined field192_0xcc;
    undefined field193_0xcd;
    undefined field194_0xce;
    undefined field195_0xcf;
    undefined field196_0xd0;
    undefined field197_0xd1;
    undefined field198_0xd2;
    undefined field199_0xd3;
    undefined field200_0xd4;
    undefined field201_0xd5;
    undefined field202_0xd6;
    undefined field203_0xd7;
    undefined field204_0xd8;
    undefined field205_0xd9;
    undefined field206_0xda;
    undefined field207_0xdb;
    undefined4 offset_0xdc;
    undefined4 offset_0xe0;
    undefined4 offset_0xe4;
    undefined4 offset_0xe8;
    undefined4 offset_0xec;
};


// WARNING! conflicting data type names: /ClassDataTypes/CDxAvatar/CDxAvatar - /CDxAvatar

typedef struct IDxDraw IDxDraw, *PIDxDraw;

struct IDxDraw { // class IDxDraw
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CMixer<neon::dev::CSound,neon::util::CEmptyLock>_vftable CMixer<neon::dev::CSound,neon::util::CEmptyLock>_vftable, *PCMixer<neon::dev::CSound,neon::util::CEmptyLock>_vftable;

struct CMixer<neon::dev::CSound,neon::util::CEmptyLock>_vftable {
    int (*Init)(void *, bool, struct HWND__ *, int, int, int, ulong); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #1
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #2
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #3
    int (*LoadBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, ulong, int, bool, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #4
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #5
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #6
    bool (*FSoundOnEndOfStream)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char (*)(struct FSOUND_STREAM *, void *, int, void *), void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #7
    bool (*SetEndCallback)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int *, undefined4); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #8
    int (*CheckSample)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #9
    void (*SetEFXVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #10
    void (*SetBGMVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #11
    void (*SetVOXVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #12
    float (*GetBGMVolume)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #13
    int (*Play)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #14
    int (*PlayBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, bool, bool); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #15
    int (*Play3D)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct VECTOR *, struct VECTOR *, int, int *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #16
    bool (*Set3DChannelAttr)(void *, int, struct VECTOR *, struct VECTOR *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #17
    void (*Stop)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #18
    void (*Stop)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #19
    void (*StopEFX)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #20
    void (*StopBGM)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #21
    void (*StopBGM)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #22
    void (*StopVOX)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #23
    void (*FadeBGM)(void *, int, double); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #24
    void (*FadeBGM)(void *, int, double); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #25
    void (*SetCrossfadeTime)(void *, int); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #26
    void (*DestroyChannel)(void *); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #27
    int (*Work)(void *, int); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #28
    void (*SetAutoUnLoadBGM)(void *, bool); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #29
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * (*GetFilenameFromFullPathName)(void *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #30
    void (*DestroySoundData)(void *); // MSVCR90.DLL CMixer<neon::dev::CSound,neon::util::CEmptyLock> pure virtual function #31
    int (*LoadSound)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool, int, int, int, bool, bool, bool, bool, void *, ulong, bool); // MSVCR90.DLL CMixer<neon::dev::CSound,neon::util::CEmptyLock> pure virtual function #32
    int (*LoadSound)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool, int, int, int, bool, bool, bool, bool, void *, ulong, bool); // MSVCR90.DLL CMixer<neon::dev::CSound,neon::util::CEmptyLock> pure virtual function #33
    void (*Close)(void *); // MSVCR90.DLL CMixer<neon::dev::CSound,neon::util::CEmptyLock> pure virtual function #34
    undefined4 * (*deleting_destructor)(void *, byte); // CMixer<neon::dev::CSound,neon::util::CEmptyLock> virtual function #35
};


// WARNING! conflicting data type names: /ClassDataTypes/kiki/CMixer<neon::dev::CSound,neon::util::CEmptyLock>/CMixer<neon::dev::CSound,neon::util::CEmptyLock> - /kiki/CMixer<neon::dev::CSound,neon::util::CEmptyLock>

typedef struct CMixer<neon::dev::CSound,neon::util::CEmptyLock>_data CMixer<neon::dev::CSound,neon::util::CEmptyLock>_data, *PCMixer<neon::dev::CSound,neon::util::CEmptyLock>_data;

struct CMixer<neon::dev::CSound,neon::util::CEmptyLock>_data {
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
    undefined1 offset_0x20;
    undefined1 offset_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    int *offset_0x24;
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
    int *offset_0x3c;
    undefined field58_0x40;
    undefined field59_0x41;
    undefined field60_0x42;
    undefined field61_0x43;
    int *offset_0x44;
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
    int *offset_0x5c;
    undefined field84_0x60;
    undefined field85_0x61;
    undefined field86_0x62;
    undefined field87_0x63;
    int offset_0x64;
    undefined field89_0x68;
    undefined field90_0x69;
    undefined field91_0x6a;
    undefined field92_0x6b;
    undefined field93_0x6c;
    undefined field94_0x6d;
    undefined field95_0x6e;
    undefined field96_0x6f;
    undefined field97_0x70;
    undefined field98_0x71;
    undefined field99_0x72;
    undefined field100_0x73;
    undefined field101_0x74;
    undefined field102_0x75;
    undefined field103_0x76;
    undefined field104_0x77;
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
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
    undefined4 offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    undefined4 offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined *offset_0xd8;
    undefined4 offset_0xdc;
    undefined4 offset_0xe0;
    undefined4 offset_0xe4;
    undefined *offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    undefined4 offset_0xf4;
    undefined *offset_0xf8;
    undefined4 offset_0xfc;
    undefined4 offset_0x100;
    undefined4 offset_0x104;
    undefined1 offset_0x108;
    undefined1 offset_0x109;
    undefined1 offset_0x10a;
    undefined field153_0x10b;
};


// WARNING! conflicting data type names: /ClassDataTypes/kiki/CMixer<neon::dev::CSound,neon::util::CCriticalSection>/CMixer<neon::dev::CSound,neon::util::CCriticalSection> - /kiki/CMixer<neon::dev::CSound,neon::util::CCriticalSection>

typedef struct CMixer<neon::dev::CSound,neon::util::CCriticalSection>_vftable CMixer<neon::dev::CSound,neon::util::CCriticalSection>_vftable, *PCMixer<neon::dev::CSound,neon::util::CCriticalSection>_vftable;

struct CMixer<neon::dev::CSound,neon::util::CCriticalSection>_vftable {
    int (*Init)(void *, bool, struct HWND__ *, int, int, int, ulong); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #1
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #2
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #3
    int (*LoadBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, ulong, int, bool, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #4
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #5
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #6
    bool (*FSoundOnEndOfStream)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char (*)(struct FSOUND_STREAM *, void *, int, void *), void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #7
    bool (*SetEndCallback)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int *, undefined4); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #8
    int (*CheckSample)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #9
    void (*SetEFXVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #10
    void (*SetBGMVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #11
    void (*SetVOXVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #12
    float (*GetBGMVolume)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #13
    int (*Play)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #14
    int (*PlayBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, bool, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #15
    int (*Play3D)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct VECTOR *, struct VECTOR *, int, int *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #16
    bool (*Set3DChannelAttr)(void *, int, struct VECTOR *, struct VECTOR *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #17
    void (*Stop)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #18
    void (*Stop)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #19
    void (*StopEFX)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #20
    void (*StopBGM)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #21
    void (*StopBGM)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #22
    void (*StopVOX)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #23
    void (*FadeBGM)(void *, int, double); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #24
    void (*FadeBGM)(void *, int, double); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #25
    void (*SetCrossfadeTime)(void *, int); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #26
    void (*DestroyChannel)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #27
    int (*Work)(void *, int); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #28
    void (*SetAutoUnLoadBGM)(void *, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #29
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * (*GetFilenameFromFullPathName)(void *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #30
    void (*DestroySoundData)(void *); // MSVCR90.DLL CMixer<neon::dev::CSound,neon::util::CCriticalSection> pure virtual function #31
    int (*LoadSound)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool, int, int, int, bool, bool, bool, bool, void *, ulong, bool); // MSVCR90.DLL CMixer<neon::dev::CSound,neon::util::CCriticalSection> pure virtual function #32
    int (*LoadSound)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool, int, int, int, bool, bool, bool, bool, void *, ulong, bool); // MSVCR90.DLL CMixer<neon::dev::CSound,neon::util::CCriticalSection> pure virtual function #33
    void (*Close)(void *); // MSVCR90.DLL CMixer<neon::dev::CSound,neon::util::CCriticalSection> pure virtual function #34
    undefined4 * (*deleting_destructor)(void *, byte); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #35
};

typedef struct CMixer<neon::dev::CSound,neon::util::CCriticalSection>_data CMixer<neon::dev::CSound,neon::util::CCriticalSection>_data, *PCMixer<neon::dev::CSound,neon::util::CCriticalSection>_data;

struct CMixer<neon::dev::CSound,neon::util::CCriticalSection>_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
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
    undefined1 offset_0x34;
    undefined1 offset_0x35;
    undefined field36_0x36;
    undefined field37_0x37;
    int *offset_0x38;
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
    int *offset_0x50;
    undefined field60_0x54;
    undefined field61_0x55;
    undefined field62_0x56;
    undefined field63_0x57;
    int *offset_0x58;
    undefined field65_0x5c;
    undefined field66_0x5d;
    undefined field67_0x5e;
    undefined field68_0x5f;
    undefined field69_0x60;
    undefined field70_0x61;
    undefined field71_0x62;
    undefined field72_0x63;
    undefined field73_0x64;
    undefined field74_0x65;
    undefined field75_0x66;
    undefined field76_0x67;
    undefined field77_0x68;
    undefined field78_0x69;
    undefined field79_0x6a;
    undefined field80_0x6b;
    undefined field81_0x6c;
    undefined field82_0x6d;
    undefined field83_0x6e;
    undefined field84_0x6f;
    int *offset_0x70;
    undefined field86_0x74;
    undefined field87_0x75;
    undefined field88_0x76;
    undefined field89_0x77;
    int offset_0x78;
    undefined field91_0x7c;
    undefined field92_0x7d;
    undefined field93_0x7e;
    undefined field94_0x7f;
    undefined field95_0x80;
    undefined field96_0x81;
    undefined field97_0x82;
    undefined field98_0x83;
    undefined field99_0x84;
    undefined field100_0x85;
    undefined field101_0x86;
    undefined field102_0x87;
    undefined field103_0x88;
    undefined field104_0x89;
    undefined field105_0x8a;
    undefined field106_0x8b;
    undefined field107_0x8c;
    undefined field108_0x8d;
    undefined field109_0x8e;
    undefined field110_0x8f;
    undefined field111_0x90;
    undefined field112_0x91;
    undefined field113_0x92;
    undefined field114_0x93;
    undefined field115_0x94;
    undefined field116_0x95;
    undefined field117_0x96;
    undefined field118_0x97;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
    undefined4 offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
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
    undefined4 offset_0xe0;
    undefined4 offset_0xe4;
    undefined4 offset_0xe8;
    undefined *offset_0xec;
    undefined4 offset_0xf0;
    undefined4 offset_0xf4;
    undefined4 offset_0xf8;
    undefined *offset_0xfc;
    undefined4 offset_0x100;
    undefined4 offset_0x104;
    undefined4 offset_0x108;
    undefined *offset_0x10c;
    undefined4 offset_0x110;
    undefined4 offset_0x114;
    undefined4 offset_0x118;
    undefined1 offset_0x11c;
    undefined1 offset_0x11d;
    undefined1 offset_0x11e;
    undefined field155_0x11f;
};

typedef struct IFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter> IFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter>, *PIFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter>;

struct IFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter> { // class IFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter>
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>, *PCFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>;

typedef struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_vftable CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_vftable, *PCFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_vftable;

typedef struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_data CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_data, *PCFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_data;

struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_data {
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
    int *offset_0x18;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    int *offset_0x20;
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
    void *offset_0x34;
    undefined4 offset_0x38;
    undefined field45_0x3c;
    undefined field46_0x3d;
    undefined field47_0x3e;
    undefined field48_0x3f;
    undefined field49_0x40;
    undefined field50_0x41;
    undefined field51_0x42;
    undefined field52_0x43;
    undefined field53_0x44;
    undefined field54_0x45;
    undefined field55_0x46;
    undefined field56_0x47;
    undefined field57_0x48;
    undefined field58_0x49;
    undefined field59_0x4a;
    undefined field60_0x4b;
    undefined field61_0x4c;
    undefined field62_0x4d;
    undefined field63_0x4e;
    undefined field64_0x4f;
    undefined field65_0x50;
    undefined field66_0x51;
    undefined field67_0x52;
    undefined field68_0x53;
    undefined field69_0x54;
    undefined field70_0x55;
    undefined field71_0x56;
    undefined field72_0x57;
};

struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> virtual function #1
    LPCRITICAL_SECTION (*vfunction2)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, LPCRITICAL_SECTION); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> virtual function #2
    bool (*vfunction3)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> virtual function #3
    void (*vfunction4)(void *, HGDIOBJ, char); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> virtual function #4
    void (*vfunction5)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> virtual function #5
    void (*vfunction6)(void *); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> virtual function #6
    void (*vfunction7)(void *); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> virtual function #7
};

struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> { // class CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> : IFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter>
    struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_vftable *vftablePtr;
    struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_data CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>_data;
};

typedef struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_vftable CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_vftable, *PCFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_vftable;

struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> virtual function #1
    int (*vfunction2)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> virtual function #2
    bool (*vfunction3)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> virtual function #3
    void (*vfunction4)(void *, int *, char); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> virtual function #4
    void (*vfunction5)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> virtual function #5
    void (*vfunction6)(void *); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> virtual function #6
    void (*vfunction7)(void *); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> virtual function #7
};

typedef struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_data CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_data, *PCFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_data;

struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_data {
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
    int *offset_0x18;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    int *offset_0x20;
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
    void *offset_0x34;
    undefined4 offset_0x38;
};

typedef struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>, *PCFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>;

struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_data {
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
    int *offset_0x18;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    int *offset_0x20;
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
    void *offset_0x34;
    undefined4 offset_0x38;
};

struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> { // class CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock> : IFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter>
    struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_vftable *vftablePtr;
    struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_data CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>_data;
};

typedef struct IFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter> IFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter>, *PIFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter>;

struct IFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter> { // class IFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter>
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable> CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>;

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable;

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_data CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_data, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_data;

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_data {
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
    void *offset_0x14;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined4 offset_0x1c;
};

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&...> virtual function #1
};

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable> { // class CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_data CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>_data;
};

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable> CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>;

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable;

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_data CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_data, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_data;

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_data {
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
    void *offset_0x14;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined4 offset_0x1c;
};

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&...> virtual function #1
};

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable> { // class CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_data CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>_data;
};

typedef struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_vftable CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_vftable, *PCFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_vftable;

struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> virtual function #1
    LPCRITICAL_SECTION (*vfunction2)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, LPCRITICAL_SECTION); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> virtual function #2
    bool (*vfunction3)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> virtual function #3
    void (*vfunction4)(void *, int *, char); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> virtual function #4
    void (*vfunction5)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> virtual function #5
    void (*vfunction6)(void *); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> virtual function #6
    void (*vfunction7)(void *); // CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> virtual function #7
};

typedef struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_data CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_data, *PCFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_data;

struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_data {
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
    int *offset_0x18;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    int *offset_0x20;
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
    void *offset_0x34;
    undefined4 offset_0x38;
    undefined field45_0x3c;
    undefined field46_0x3d;
    undefined field47_0x3e;
    undefined field48_0x3f;
    undefined field49_0x40;
    undefined field50_0x41;
    undefined field51_0x42;
    undefined field52_0x43;
    undefined field53_0x44;
    undefined field54_0x45;
    undefined field55_0x46;
    undefined field56_0x47;
    undefined field57_0x48;
    undefined field58_0x49;
    undefined field59_0x4a;
    undefined field60_0x4b;
    undefined field61_0x4c;
    undefined field62_0x4d;
    undefined field63_0x4e;
    undefined field64_0x4f;
    undefined field65_0x50;
    undefined field66_0x51;
    undefined field67_0x52;
    undefined field68_0x53;
    undefined field69_0x54;
    undefined field70_0x55;
    undefined field71_0x56;
    undefined field72_0x57;
};

typedef struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>, *PCFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>;

struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_data {
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
    int *offset_0x18;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    int *offset_0x20;
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
    void *offset_0x34;
    undefined4 offset_0x38;
    undefined field45_0x3c;
    undefined field46_0x3d;
    undefined field47_0x3e;
    undefined field48_0x3f;
    undefined field49_0x40;
    undefined field50_0x41;
    undefined field51_0x42;
    undefined field52_0x43;
    undefined field53_0x44;
    undefined field54_0x45;
    undefined field55_0x46;
    undefined field56_0x47;
    undefined field57_0x48;
    undefined field58_0x49;
    undefined field59_0x4a;
    undefined field60_0x4b;
    undefined field61_0x4c;
    undefined field62_0x4d;
    undefined field63_0x4e;
    undefined field64_0x4f;
    undefined field65_0x50;
    undefined field66_0x51;
    undefined field67_0x52;
    undefined field68_0x53;
    undefined field69_0x54;
    undefined field70_0x55;
    undefined field71_0x56;
    undefined field72_0x57;
};

struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> { // class CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection> : IFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter>
    struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_vftable *vftablePtr;
    struct CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_data CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>_data;
};

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_data CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_data, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_data;

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_data {
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
    void *offset_0x14;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined4 offset_0x1c;
};

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable> CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>;

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable;

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_data {
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
    void *offset_0x14;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined4 offset_0x1c;
};

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&...> virtual function #1
};

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable> { // class CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_data CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>_data;
};

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable;

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&...> virtual function #1
};

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable> CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>;

typedef struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_data CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_data, *PCDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_data;

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_data {
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
    void *offset_0x14;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined4 offset_0x1c;
};

struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable> { // class CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>
    struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_vftable *vftablePtr;
    struct CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_data CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>_data;
};

typedef struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>, *PCFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>;

typedef struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_vftable CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_vftable, *PCFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_vftable;

typedef struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_data CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_data, *PCFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_data;

struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_data {
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
    int *offset_0x18;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    int *offset_0x20;
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
    void *offset_0x34;
    undefined4 offset_0x38;
};

struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> virtual function #1
    int * (*vfunction2)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int *); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> virtual function #2
    bool (*vfunction3)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection> virtual function #3
    void (*vfunction4)(void *, HGDIOBJ, char); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> virtual function #4
    void (*vfunction5)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> virtual function #5
    void (*vfunction6)(void *); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> virtual function #6
    void (*vfunction7)(void *); // CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> virtual function #7
};

struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> { // class CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock> : IFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter>
    struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_vftable *vftablePtr;
    struct CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_data CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/eco/CMsgDispatch/CMsgDispatch - /eco/CMsgDispatch

typedef struct CMsgDispatch_vftable CMsgDispatch_vftable, *PCMsgDispatch_vftable;

struct CMsgDispatch_vftable {
    CMsgDispatch * (*deleting_destructor)(void *, byte); // CMsgDispatch virtual function #1
};

typedef struct CMsgDispatch_data CMsgDispatch_data, *PCMsgDispatch_data;

struct CMsgDispatch_data {
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
    int *offset_0x18;
    undefined4 offset_0x1c;
};

typedef struct CCompositeHolder<neon::frw::CComponent>_vftable CCompositeHolder<neon::frw::CComponent>_vftable, *PCCompositeHolder<neon::frw::CComponent>_vftable;

struct CCompositeHolder<neon::frw::CComponent>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CCompositeHolder<...> virtual function #1
    void (*~IDxDevice)(void *); // MSVCR90.DLL CCompositeHolder<neon::frw::CComponent> pure virtual function #2
    void (*~IDxDevice)(void *); // MSVCR90.DLL CCompositeHolder<neon::frw::CComponent> pure virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
};


// WARNING! conflicting data type names: /ClassDataTypes/eco/CCompositeHolder<neon::frw::CComponent>/CCompositeHolder<neon::frw::CComponent> - /eco/CCompositeHolder<neon::frw::CComponent>

typedef struct CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>_data CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>_data, *PCNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>_data;

struct CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>_data {
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
    int *offset_0x18;
    undefined4 offset_0x1c;
};

typedef struct CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>_vftable CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>_vftable, *PCNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>_vftable;

struct CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>_vftable {
    int (*Init)(void *, bool, struct HWND__ *, int, int, int, ulong); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #1
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #2
    int (*Load)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #3
    int (*LoadBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, ulong, int, bool, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #4
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #5
    void (*UnLoad)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #6
    bool (*FSoundOnEndOfStream)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, char (*)(struct FSOUND_STREAM *, void *, int, void *), void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #7
    bool (*SetEndCallback)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int *, undefined4); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #8
    int (*CheckSample)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #9
    void (*SetEFXVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #10
    void (*SetBGMVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #11
    void (*SetVOXVolume)(void *, float); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #12
    float (*GetBGMVolume)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #13
    int (*Play)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #14
    int (*PlayBGM)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, bool, bool, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #15
    int (*Play3D)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct VECTOR *, struct VECTOR *, int, int *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #16
    bool (*Set3DChannelAttr)(void *, int, struct VECTOR *, struct VECTOR *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #17
    void (*Stop)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #18
    void (*Stop)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #19
    void (*StopEFX)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #20
    void (*StopBGM)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #21
    void (*StopBGM)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #22
    void (*StopVOX)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #23
    void (*FadeBGM)(void *, int, double); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #24
    void (*FadeBGM)(void *, int, double); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #25
    void (*SetCrossfadeTime)(void *, int); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #26
    void (*DestroyChannel)(void *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #27
    int (*Work)(void *, int); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #28
    void (*SetAutoUnLoadBGM)(void *, bool); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #29
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * (*GetFilenameFromFullPathName)(void *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *); // CMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #30
    void (*DestroySoundData)(void *); // CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #31
    int (*LoadSound)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool, int, int, int, bool, bool, bool, bool, void *, ulong, bool); // CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #32
    int (*LoadSound)(void *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, struct basic_string<char,std::char_traits<char>,std::allocator<char>_> *, int, int, int, bool, int, int, int, bool, bool, bool, bool, void *, ulong, bool); // CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #33
    void (*Close)(void *); // CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #34
    undefined4 * (*deleting_destructor)(void *, byte); // CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> virtual function #35
};


// WARNING! conflicting data type names: /ClassDataTypes/CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>/CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> - /CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>

typedef struct CManagedRes_vftable CManagedRes_vftable, *PCManagedRes_vftable;

struct CManagedRes_vftable {
    CManagedRes * (*deleting_destructor)(void *, byte); // CManagedRes virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    long (*Restore)(void *); // MSVCR90.DLL CManagedRes pure virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/CManagedRes/CManagedRes - /CManagedRes


// WARNING! conflicting data type names: /ClassDataTypes/IDxDevice/IDxDevice - /IDxDevice

typedef struct GdiplusBase GdiplusBase, *PGdiplusBase;

struct GdiplusBase { // class GdiplusBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct Bitmap_vftable Bitmap_vftable, *PBitmap_vftable;

struct Bitmap_vftable {
    undefined4 * (*vfunction1)(void *, byte); // Image virtual function #1
    undefined4 * (*vfunction2)(void *); // Image virtual function #2
};

typedef struct Bitmap Bitmap, *PBitmap;

struct GdiplusBase { // class GdiplusBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct Bitmap { // class Bitmap : Image
    struct Bitmap_vftable *vftablePtr;
    struct GdiplusBase GdiplusBase;
};

typedef struct Image_vftable Image_vftable, *PImage_vftable;

struct Image_vftable {
    undefined4 * (*vfunction1)(void *, byte); // Image virtual function #1
    undefined4 * (*vfunction2)(void *); // Image virtual function #2
};

typedef struct Image Image, *PImage;

struct GdiplusBase { // class GdiplusBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct Image { // class Image : GdiplusBase
    struct Image_vftable *vftablePtr;
    struct GdiplusBase GdiplusBase;
};


// WARNING! conflicting data type names: /ClassDataTypes/IDxSurface/IDxSurface - /Demangler/IDxSurface

typedef struct _D3DCAPS9 _D3DCAPS9, *P_D3DCAPS9;

struct _D3DCAPS9 { // PlaceHolder Structure
};

typedef struct IDirect3DDevice9 IDirect3DDevice9, *PIDirect3DDevice9;

struct IDirect3DDevice9 { // PlaceHolder Structure
};

typedef struct FSOUND_SAMPLE FSOUND_SAMPLE, *PFSOUND_SAMPLE;

struct FSOUND_SAMPLE { // PlaceHolder Structure
};

typedef enum _D3DFORMAT {
} _D3DFORMAT;


// WARNING! conflicting data type names: /Demangler/IRenderFunctor - /ClassDataTypes/IRenderFunctor/IRenderFunctor


// WARNING! conflicting data type names: /Demangler/IDxDraw - /ClassDataTypes/IDxDraw/IDxDraw

typedef enum VRenderEffectType {
} VRenderEffectType;

typedef struct C3DRenderStateManager C3DRenderStateManager, *PC3DRenderStateManager;

struct C3DRenderStateManager { // PlaceHolder Structure
};

typedef struct CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection>, *PCNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection>;

struct CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> { // PlaceHolder Structure
};

typedef struct IDirect3D9 IDirect3D9, *PIDirect3D9;

struct IDirect3D9 { // PlaceHolder Structure
};

typedef enum PixelFormat {
} PixelFormat;

typedef enum _D3DDEVTYPE {
} _D3DDEVTYPE;


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info


// WARNING! conflicting data type names: /Demangler/IDxEffect - /ClassDataTypes/IDxEffect/IDxEffect

typedef struct SurfaceDesc SurfaceDesc, *PSurfaceDesc;

struct SurfaceDesc { // PlaceHolder Structure
};

typedef struct CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock>, *PCNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock>;

struct CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/C3DDisplay - /ClassDataTypes/C3DDisplay/C3DDisplay

typedef enum ESurfaceUsage {
} ESurfaceUsage;


// WARNING! conflicting data type names: /Demangler/IDxDeviceLost - /ClassDataTypes/IDxDeviceLost/IDxDeviceLost

typedef enum ESurfaceMemType {
} ESurfaceMemType;

typedef struct FSOUND_STREAM FSOUND_STREAM, *PFSOUND_STREAM;

struct FSOUND_STREAM { // PlaceHolder Structure
};

typedef struct IDirectDraw4 IDirectDraw4, *PIDirectDraw4;

struct IDirectDraw4 { // PlaceHolder Structure
};

typedef struct CBasicPoint<float> CBasicPoint<float>, *PCBasicPoint<float>;

struct CBasicPoint<float> { // PlaceHolder Structure
};

typedef struct CCompositeHolder<class_neon::frw::CComponent> CCompositeHolder<class_neon::frw::CComponent>, *PCCompositeHolder<class_neon::frw::CComponent>;

struct CCompositeHolder<class_neon::frw::CComponent> { // PlaceHolder Structure
};

typedef struct CBasicRect<float> CBasicRect<float>, *PCBasicRect<float>;

struct CBasicRect<float> { // PlaceHolder Structure
};

typedef struct CBasicRect<long> CBasicRect<long>, *PCBasicRect<long>;

struct CBasicRect<long> { // PlaceHolder Structure
};

typedef struct Color8888 Color8888, *PColor8888;

struct Color8888 { // PlaceHolder Structure
};

typedef struct CBasicPoint<long> CBasicPoint<long>, *PCBasicPoint<long>;

struct CBasicPoint<long> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *Pallocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> - /ClassDataTypes/std/_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>/_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>

typedef struct list<Loki::Internal::LifetimeTracker*,std::allocator<Loki::Internal::LifetimeTracker*>_> list<Loki::Internal::LifetimeTracker*,std::allocator<Loki::Internal::LifetimeTracker*>_>, *Plist<Loki::Internal::LifetimeTracker*,std::allocator<Loki::Internal::LifetimeTracker*>_>;

struct list<Loki::Internal::LifetimeTracker*,std::allocator<Loki::Internal::LifetimeTracker*>_> { // PlaceHolder Structure
};

typedef struct _Vector_const_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Vector_const_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *P_Vector_const_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct _Vector_const_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *P_Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct list<eco::CCompositeHolder<neon::frw::CComponent>*,std::allocator<eco::CCompositeHolder<neon::frw::CComponent>*>_> list<eco::CCompositeHolder<neon::frw::CComponent>*,std::allocator<eco::CCompositeHolder<neon::frw::CComponent>*>_>, *Plist<eco::CCompositeHolder<neon::frw::CComponent>*,std::allocator<eco::CCompositeHolder<neon::frw::CComponent>*>_>;

struct list<eco::CCompositeHolder<neon::frw::CComponent>*,std::allocator<eco::CCompositeHolder<neon::frw::CComponent>*>_> { // PlaceHolder Structure
};

typedef struct map<void*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<void*>,std::allocator<std::pair<void*_const,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> map<void*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<void*>,std::allocator<std::pair<void*_const,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *Pmap<void*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<void*>,std::allocator<std::pair<void*_const,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct map<void*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<void*>,std::allocator<std::pair<void*_const,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Container_base_aux_alloc_real<class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> _Container_base_aux_alloc_real<class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>, *P_Container_base_aux_alloc_real<class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>;

struct _Container_base_aux_alloc_real<class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct reverse_iterator<std::_Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> reverse_iterator<std::_Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *Preverse_iterator<std::_Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct reverse_iterator<std::_Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct list<neon::ctrl::CWebBrowser::TWndZOrder*,std::allocator<neon::ctrl::CWebBrowser::TWndZOrder*>_> list<neon::ctrl::CWebBrowser::TWndZOrder*,std::allocator<neon::ctrl::CWebBrowser::TWndZOrder*>_>, *Plist<neon::ctrl::CWebBrowser::TWndZOrder*,std::allocator<neon::ctrl::CWebBrowser::TWndZOrder*>_>;

struct list<neon::ctrl::CWebBrowser::TWndZOrder*,std::allocator<neon::ctrl::CWebBrowser::TWndZOrder*>_> { // PlaceHolder Structure
};

typedef struct vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>, *Pvector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>;

struct vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<neon::ctrl::CControl*,std::allocator<neon::ctrl::CControl*>_> vector<neon::ctrl::CControl*,std::allocator<neon::ctrl::CControl*>_>, *Pvector<neon::ctrl::CControl*,std::allocator<neon::ctrl::CControl*>_>;

struct vector<neon::ctrl::CControl*,std::allocator<neon::ctrl::CControl*>_> { // PlaceHolder Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,DXAvatar::CDxAvtrPart*> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,DXAvatar::CDxAvtrPart*>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,DXAvatar::CDxAvtrPart*>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,DXAvatar::CDxAvtrPart*> { // PlaceHolder Structure
};

typedef struct _String_iterator<char,std::char_traits<char>,std::allocator<char>_> _String_iterator<char,std::char_traits<char>,std::allocator<char>_>, *P_String_iterator<char,std::char_traits<char>,std::allocator<char>_>;

struct _String_iterator<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,DXAvatar::CAvtrPart*> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,DXAvatar::CAvtrPart*>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,DXAvatar::CAvtrPart*>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,DXAvatar::CAvtrPart*> { // PlaceHolder Structure
};

typedef struct _Iterator<1> _Iterator<1>, *P_Iterator<1>;

struct _Iterator<1> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/phy/CMove - /ClassDataTypes/neon/phy/CMove/CMove


// WARNING! conflicting data type names: /Demangler/neon/util/IOleObj - /ClassDataTypes/neon/util/IOleObj/IOleObj

typedef struct CFunctor<void,int> CFunctor<void,int>, *PCFunctor<void,int>;

struct CFunctor<void,int> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/ctrl/CButton - /ClassDataTypes/neon/ctrl/CButton/CButton

typedef struct COP_LUp COP_LUp, *PCOP_LUp;

struct COP_LUp { // PlaceHolder Structure
};

typedef struct COP_ThumbMove COP_ThumbMove, *PCOP_ThumbMove;

struct COP_ThumbMove { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/ctrl/CWebBrowser - /ClassDataTypes/neon/ctrl/CWebBrowser/CWebBrowser

typedef struct COP_LDown COP_LDown, *PCOP_LDown;

struct COP_LDown { // PlaceHolder Structure
};

typedef struct COP_Drag COP_Drag, *PCOP_Drag;

struct COP_Drag { // PlaceHolder Structure
};

typedef struct CUIInputManager CUIInputManager, *PCUIInputManager;

struct CUIInputManager { // PlaceHolder Structure
};

typedef struct sRichEditItem sRichEditItem, *PsRichEditItem;

struct sRichEditItem { // PlaceHolder Structure
};

typedef enum NBarKind {
} NBarKind;

typedef enum EType {
} EType;

typedef struct CFontInfo CFontInfo, *PCFontInfo;

struct CFontInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/visual/CVisual - /ClassDataTypes/neon/visual/CVisual/CVisual

typedef struct TileSet TileSet, *PTileSet;

struct TileSet { // PlaceHolder Structure
};

typedef struct DATAHEADER DATAHEADER, *PDATAHEADER;

struct DATAHEADER { // PlaceHolder Structure
};

typedef struct SURFACEHEADER SURFACEHEADER, *PSURFACEHEADER;

struct SURFACEHEADER { // PlaceHolder Structure
};

typedef struct CAnimate CAnimate, *PCAnimate;

struct CAnimate { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/frw/CApp - /ClassDataTypes/neon/frw/CApp/CApp


// WARNING! conflicting data type names: /Demangler/neon/frw/CObject - /ClassDataTypes/neon/frw/CObject/CObject


// WARNING! conflicting data type names: /Demangler/neon/render/d9/C3DDraw - /ClassDataTypes/neon/render/d9/C3DDraw/C3DDraw

typedef struct SmallObjAllocator SmallObjAllocator, *PSmallObjAllocator;

struct SmallObjAllocator { // PlaceHolder Structure
};

typedef struct AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>, *PAllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;

struct AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // PlaceHolder Structure
};

typedef struct Functor<void,Loki::Typelist<void*,Loki::NullType>,Loki::ClassLevelLockable> Functor<void,Loki::Typelist<void*,Loki::NullType>,Loki::ClassLevelLockable>, *PFunctor<void,Loki::Typelist<void*,Loki::NullType>,Loki::ClassLevelLockable>;

struct Functor<void,Loki::Typelist<void*,Loki::NullType>,Loki::ClassLevelLockable> { // PlaceHolder Structure
};

typedef struct SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex> SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex>, *PSingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex>;

struct SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex> { // PlaceHolder Structure
};

typedef struct SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst> SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>, *PSmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>;

struct SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst> { // PlaceHolder Structure
};

typedef struct Functor<void,Loki::NullType,Loki::ClassLevelLockable> Functor<void,Loki::NullType,Loki::ClassLevelLockable>, *PFunctor<void,Loki::NullType,Loki::ClassLevelLockable>;

struct Functor<void,Loki::NullType,Loki::ClassLevelLockable> { // PlaceHolder Structure
};

typedef struct SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex> SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>, *PSingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>;

struct SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex> { // PlaceHolder Structure
};

typedef struct RefLinkedBase RefLinkedBase, *PRefLinkedBase;

struct RefLinkedBase { // PlaceHolder Structure
};

typedef struct CDxAvtrTickHandler CDxAvtrTickHandler, *PCDxAvtrTickHandler;

struct CDxAvtrTickHandler { // PlaceHolder Structure
};

typedef struct CDxAvtrPart CDxAvtrPart, *PCDxAvtrPart;

struct CDxAvtrPart { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/DXAvatar/CAvtrPartPool - /ClassDataTypes/DXAvatar/CAvtrPartPool/CAvtrPartPool

typedef struct CDxAvtrDownloadThread CDxAvtrDownloadThread, *PCDxAvtrDownloadThread;

struct CDxAvtrDownloadThread { // PlaceHolder Structure
};

typedef struct CAvtrDownloadThread CAvtrDownloadThread, *PCAvtrDownloadThread;

struct CAvtrDownloadThread { // PlaceHolder Structure
};

typedef struct CAvtrPart CAvtrPart, *PCAvtrPart;

struct CAvtrPart { // PlaceHolder Structure
};

typedef struct SubImage SubImage, *PSubImage;

struct SubImage { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/h2p/CLoader - /ClassDataTypes/h2p/CLoader/CLoader


// WARNING! conflicting data type names: /Demangler/Gdiplus/Bitmap - /ClassDataTypes/Gdiplus/Bitmap/Bitmap

typedef enum SoundType {
} SoundType;

typedef struct VECTOR VECTOR, *PVECTOR;

struct VECTOR { // PlaceHolder Structure
};

typedef struct CMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> CMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock>, *PCMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock>;

struct CMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> { // PlaceHolder Structure
};

typedef struct CMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> CMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection>, *PCMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection>;

struct CMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> { // PlaceHolder Structure
};

typedef struct SampleEntity SampleEntity, *PSampleEntity;

struct SampleEntity { // PlaceHolder Structure
};

typedef struct ChannelEntity ChannelEntity, *PChannelEntity;

struct ChannelEntity { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef struct _ldiv_t _ldiv_t, *P_ldiv_t;

typedef struct _ldiv_t ldiv_t;

struct _ldiv_t {
    long quot;
    long rem;
};

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




void __thiscall neon::ctrl::CUIInputManager::SetMainObject(CUIInputManager *this,CObject *param_1);
int __thiscall neon::ctrl::CUIInputManager::GetMousePosX(CUIInputManager *this);
void __thiscall neon::ctrl::CUIInputManager::FocusZero(CUIInputManager *this);
void __thiscall neon::ctrl::CUIInputManager::SelectOut(CUIInputManager *this);
void __thiscall neon::ctrl::CUIInputManager::SetMouseCoordBase(CUIInputManager *this,ushort param_1,ushort param_2);
CUIInputManager * __thiscall neon::ctrl::CUIInputManager::operator=(CUIInputManager *this,CUIInputManager *param_1);
CControl * __thiscall neon::ctrl::CControl::CControl(CControl *this);
CObject * __thiscall neon::ctrl::CControl::neon::ctrl::CControl::IsIn(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetSelect(CControl *this,bool param_1);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnSelect(CControl *this,bool param_1);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::ProcessMessage(CControl *this,uint param_1,uint param_2,uint param_3);
void FUN_100011b0(void);
exception * __thiscall std::bad_alloc::deleting_destructor(bad_alloc *this,byte param_1);
CControl * __thiscall neon::ctrl::CControl::FindControlParent(CControl *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::AttachToolTip(CControl *this,CVisual *param_1);
void __thiscall neon::ctrl::CControl::ShowTip(CControl *this,bool param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::logic_error::vfunction2(logic_error *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetCanFocus(CControl *this,bool param_1);
bool __thiscall neon::ctrl::CControl::neon::ctrl::CControl::GetCanFocus(CControl *this);
uchar __thiscall neon::ctrl::CControl::neon::ctrl::CControl::GetAlpha(CControl *this);
CObject * __thiscall neon::ctrl::CControl::neon::ctrl::CControl::Clone(CControl *this);
exception * __thiscall std::invalid_argument::deleting_destructor(invalid_argument *this,byte param_1);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::Copy(CControl *this,CObject *param_1);
void __thiscall neon::ctrl::CControl::SetCapture(CControl *this);
bool __thiscall neon::ctrl::CControl::IsCaptured(CControl *this);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
void __thiscall Loki::Internal::LifetimeTracker::~LifetimeTracker(LifetimeTracker *this);
int __thiscall neon::visual::CVisual::GetWidth(CVisual *this);
int __thiscall neon::visual::CVisual::GetHeight(CVisual *this);
bool __thiscall neon::visual::CVisual::GetShow(CVisual *this);
bool __thiscall neon::visual::CVisual::GetShowRef(CVisual *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetInverse(CVisual *this,bool param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetPivot(CVisual *this,float param_1,float param_2);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetUseParentRotation(CVisual *this,bool param_1);
bool __thiscall neon::ctrl::CControl::IsFocus(CControl *this);
void FUN_10001630(exception *param_1);
void FUN_10001650(exception *param_1);
void FUN_10001670(void);
void FUN_10001680(void);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::Logic(CControl *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetActive(CControl *this,bool param_1);
bool __thiscall neon::ctrl::CControl::ReleaseCapture(CControl *this);
undefined * FUN_100017a0(void);
void __thiscall Loki::Internal::ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>::~ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>(ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>*this);
undefined4 * __thiscall Loki::Internal::ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>::deleting_destructor(ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>*this,byte param_1);
CObject * __thiscall neon::ctrl::CControl::neon::ctrl::CControl::IsMyIn(CControl *this,int param_1,int param_2);
void __cdecl Loki::SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>::DestroySingleton(void);
void __cdecl FUN_10001970(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,undefined4 *param_6,undefined *param_7);
CControl * __cdecl neon::ctrl::CControl::GetModal(void);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetEffect(CControl *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetEffectType(CControl *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
undefined4 * __thiscall FUN_10001be0(void *this,undefined4 *param_1,undefined4 param_2,void *param_3);
undefined4 __thiscall FUN_10001c40(void *this,undefined4 param_1);
CObject * __thiscall neon::ctrl::CControl::neon::ctrl::CControl::IsChildIn(CControl *this,int param_1,int param_2);
undefined4 __thiscall FUN_10001dd0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001e40(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001eb0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001f20(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001f90(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002000(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002070(void *this,undefined4 param_1);
undefined4 __thiscall FUN_100020e0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002150(void *this,undefined4 param_1);
undefined4 __thiscall FUN_100021c0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002230(void *this,undefined4 param_1);
undefined4 __thiscall FUN_100022a0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002310(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002380(void *this,undefined4 param_1);
undefined4 __thiscall FUN_100023f0(void *this,undefined4 param_1);
void __thiscall Loki::Internal::ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>::~ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>(ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>*this,undefined4 param_1,undefined4 param_2);
void __thiscall neon::ctrl::CControl::SetModal(CControl *this,bool param_1);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetFocus(CControl *this,bool param_1,bool param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseOver(CControl *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseLeave(CControl *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseLbDown(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseLbUp(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseRbDown(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseRbUp(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseWheel(CControl *this,int param_1,short param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseDrag(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnReturn(CControl *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseMove(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnKeyDown(CControl *this,uint param_1);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnKeyUp(CControl *this,uint param_1);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseLDoubleClick(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnMouseRDoubleClick(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::~CControl(CControl *this);
CControl * __thiscall neon::ctrl::CControl::deleting_destructor(CControl *this,byte param_1);
void __cdecl Loki::SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>::MakeInstance(void);
AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>* __cdecl Loki::SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>::Instance(void);
CFontInfo * __thiscall neon::visual::CFontInfo::CFontInfo(CFontInfo *this);
void __thiscall neon::visual::CFontInfo::Init(CFontInfo *this,CFontInfo *param_1);
void __thiscall neon::ctrl::CEdit::SetXSpace(CEdit *this,int param_1);
void __thiscall neon::ctrl::CEdit::SetPadding(CEdit *this,int param_1,int param_2);
bool __thiscall neon::ctrl::CEdit::IsKorean(CEdit *this,uint param_1);
bool __thiscall neon::ctrl::CEdit::IsKoreanMode(CEdit *this);
void __thiscall neon::ctrl::CEdit::SetLimit(CEdit *this,int param_1);
int __thiscall neon::ctrl::CEdit::GetLimit(CEdit *this);
void __thiscall neon::ctrl::CEdit::SetPasswordMode(CEdit *this,bool param_1);
void __thiscall neon::ctrl::CEdit::SetEnableInput(CEdit *this,bool param_1);
void __thiscall IInput::~IInput(IInput *this);
void __thiscall IInput::~IInput(IInput *this,IInput *param_1);
SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex>* __thiscall IDxDevice::IDxDevice(IDxDevice *this,SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex>*param_1);
void __fastcall FUN_10003410(undefined4 *param_1);
bool __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::CreateCursor(CEdit *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall std::logic_error::~logic_error(logic_error *this);
int __thiscall neon::ctrl::CEdit::GetCompStringWidth(CEdit *this,HDC__ *param_1,uint param_2);
void __thiscall neon::ctrl::CEdit::OnCursorLeft(CEdit *this);
void __thiscall neon::ctrl::CEdit::OnCursorHome(CEdit *this);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::SetFocus(CEdit *this,bool param_1,bool param_2);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::SetPivot(CEdit *this,float param_1,float param_2);
int __thiscall FUN_100036d0(void *this,uint param_1);
CMsgDispatch * __thiscall eco::CMsgDispatch::deleting_destructor(CMsgDispatch *this,byte param_1);
void __thiscall neon::frw::CComponent::~CComponent(CComponent *this);
void __thiscall neon::frw::CComponent::~CComponent(CComponent *this,CComponent *param_1);
undefined4 * __thiscall neon::frw::CComponent::deleting_destructor(CComponent *this,byte param_1);
CObject * __thiscall neon::frw::CObject::deleting_destructor(CObject *this,byte param_1);
void __thiscall neon::visual::CVisual::SetLocalPosX(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetLocalPosY(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetLocalPos(CVisual *this,float param_1,float param_2);
void __thiscall neon::visual::CVisual::SetWidth(CVisual *this,int param_1);
void __thiscall neon::visual::CVisual::SetHeight(CVisual *this,int param_1);
CVisual * __thiscall neon::visual::CVisual::deleting_destructor(CVisual *this,byte param_1);
IDxSurface * __thiscall neon::visual::CTile::GetSurface(CTile *this);
void __fastcall FUN_10003920(int *param_1);
undefined4 __cdecl FUN_10003990(undefined4 *param_1);
CFontInfo * __thiscall neon::visual::CFontInfo::CFontInfo(CFontInfo *this,CFontInfo *param_1);
CFontInfo * __thiscall neon::visual::CFontInfo::operator=(CFontInfo *this,CFontInfo *param_1);
bool __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::CreateFontA(CEdit *this,CFontInfo *param_1,bool param_2);
bool __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::CreateTextTile(CEdit *this,int param_1,int param_2);
bool __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::Create(CEdit *this);
void __thiscall neon::ctrl::CEdit::CheckKoreanMode(CEdit *this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall neon::ctrl::CEdit::GetText(CEdit *this);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::OnFocus(CEdit *this,bool param_1,bool param_2);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::OnMouseLbDown(CEdit *this,int param_1,int param_2);
int __thiscall neon::ctrl::CEdit::GetCurrentByteLenth(CEdit *this);
bool __thiscall neon::ctrl::CEdit::IsByteToMerge(CEdit *this,char *param_1);
int __thiscall neon::ctrl::CEdit::GetValidAreaWidth(CEdit *this);
int __thiscall neon::ctrl::CEdit::GetFixedStringWidth(CEdit *this,uint param_1);
int __thiscall neon::ctrl::CEdit::GetCompStringWidth(CEdit *this,uint param_1);
int __thiscall neon::ctrl::CEdit::GetCursorWidth(CEdit *this,bool param_1);
int __thiscall neon::ctrl::CEdit::GetTotalStringWidth(CEdit *this,uint param_1);
int __thiscall neon::ctrl::CEdit::GetStartingOffset(CEdit *this,uint param_1);
void __thiscall neon::ctrl::CEdit::MakeCursorVisible(CEdit *this);
void __thiscall neon::ctrl::CEdit::OnCursorRight(CEdit *this);
void __thiscall neon::ctrl::CEdit::OnCursorEnd(CEdit *this);
int __thiscall neon::ctrl::CEdit::CalculateVisibleEndPosEx(CEdit *this,int param_1);
void __thiscall neon::ctrl::CEdit::CalculateCursorPos(CEdit *this);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::Update(CEdit *this);
void FUN_100048a0(void);
void FUN_100048e0(exception *param_1);
void __cdecl FUN_10004900(int *param_1,char param_2);
CEdit * __thiscall neon::ctrl::CEdit::CEdit(CEdit *this);
void __fastcall FUN_10004a90(int *param_1);
void __thiscall FUN_10004ad0(void *this,undefined4 param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6);
void Catch_All@10004bab(void);
void __thiscall neon::ctrl::CEdit::~CEdit(CEdit *this);
void __thiscall neon::ctrl::CEdit::Clear(CEdit *this);
void __thiscall neon::ctrl::CEdit::DeleteRichEditItem(CEdit *this,int param_1);
void __thiscall FUN_10004f80(void *this,int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4);
CEdit * __thiscall neon::ctrl::CEdit::deleting_destructor(CEdit *this,byte param_1);
void __thiscall neon::ctrl::CEdit::OnBackSpace(CEdit *this);
void __thiscall neon::ctrl::CEdit::OnDelete(CEdit *this);
void __cdecl FUN_10005090(int param_1,int param_2);
void __thiscall neon::ctrl::CEdit::OnSpecialKeyDown(CEdit *this,uint param_1);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::OnReturn(CEdit *this);
CMsgDispatch * __thiscall eco::CMsgDispatch::CMsgDispatch(CMsgDispatch *this,CMsgDispatch *param_1);
CMsgDispatch * __thiscall eco::CMsgDispatch::operator=(CMsgDispatch *this,CMsgDispatch *param_1);
CCompositeHolder<neon::frw::CComponent> * __thiscall eco::CCompositeHolder<neon::frw::CComponent>::CCompositeHolder<neon::frw::CComponent>(CCompositeHolder<neon::frw::CComponent> *this,CCompositeHolder<class_neon::frw::CComponent> *param_1);
void __thiscall eco::CCompositeHolder<neon::frw::CComponent>::~CCompositeHolder<neon::frw::CComponent>(CCompositeHolder<neon::frw::CComponent> *this);
void FUN_10005445(void);
void __thiscall neon::ctrl::CEdit::InsertRichEditItem(CEdit *this,int param_1,sRichEditItem *param_2);
CCompositeHolder<class_neon::frw::CComponent> * __thiscall eco::CCompositeHolder<neon::frw::CComponent>::operator=(CCompositeHolder<neon::frw::CComponent> *this,CCompositeHolder<class_neon::frw::CComponent> *param_1);
CObject * __thiscall eco::CMsgDispatch::CMsgDispatch(CMsgDispatch *this,CObject *param_1);
CObject * __thiscall neon::frw::CObject::operator=(CObject *this,CObject *param_1);
CCompositeHolder<neon::frw::CComponent> * __thiscall eco::CCompositeHolder<neon::frw::CComponent>::deleting_destructor(CCompositeHolder<neon::frw::CComponent> *this,byte param_1);
CVisual * __thiscall neon::visual::CVisual::CVisual(CVisual *this,CVisual *param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetEffect(CVisual *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::render::CRLESurface::neon::render::CRLESurface::Blt(CRLESurface *this,int param_1,int param_2,IDxSurface *param_3,tagRECT *param_4,bool param_5);
CVisual * __thiscall neon::visual::CVisual::operator=(CVisual *this,CVisual *param_1);
CControl * __thiscall neon::ctrl::CControl::CControl(CControl *this,CControl *param_1);
CControl * __thiscall neon::ctrl::CControl::operator=(CControl *this,CControl *param_1);
CEdit * __thiscall neon::ctrl::CEdit::CEdit(CEdit *this,CEdit *param_1);
CEdit * __thiscall neon::ctrl::CEdit::operator=(CEdit *this,CEdit *param_1);
void __thiscall neon::ctrl::CEdit::OnAddChar(CEdit *this,char *param_1,bool param_2);
void __cdecl FUN_10005fc0(CEdit *param_1,char *param_2);
void __thiscall neon::ctrl::CEdit::SetText(CEdit *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::ctrl::CEdit::ProcessMessage_WM_IME_COMPOSITION(CEdit *this,uint param_1,uint param_2);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::ProcessMessage(CEdit *this,uint param_1,uint param_2,uint param_3);
CButton * __thiscall neon::ctrl::CScrollBar::GetThumbBtn(CScrollBar *this);
CButton * __thiscall neon::ctrl::CScrollBar::GetUpBtn(CScrollBar *this);
CButton * __thiscall neon::ctrl::CScrollBar::GetDownBtn(CScrollBar *this);
float __thiscall neon::ctrl::CScrollBar::GetValue(CScrollBar *this);
int __thiscall neon::ctrl::CButton::GetCurBtnState(CButton *this);
void __thiscall neon::ctrl::CButton::SetInputDelay(CButton *this,ulong param_1);
CButton * __thiscall neon::ctrl::CButton::deleting_destructor(CButton *this,byte param_1);
void __thiscall neon::ctrl::CScrollBar::SetData(CScrollBar *this,float param_1,float param_2,float param_3);
float __thiscall neon::visual::CVisual::GetLocalPosX(CVisual *this);
float __thiscall neon::visual::CVisual::GetLocalPosY(CVisual *this);
void FUN_100065a0(void);
void __fastcall FUN_100065b0(int param_1);
void __thiscall neon::ctrl::CScrollBar::SetCurData(CScrollBar *this,float param_1);
void __thiscall neon::ctrl::CScrollBar::MovePos(CScrollBar *this,float param_1);
void __thiscall FUN_10006720(void *this,uint param_1);
void __thiscall std::_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::~_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall FUN_100067c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::SetCanFocus(CScrollBar *this,bool param_1);
void __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::SetPivot(CScrollBar *this,float param_1,float param_2);
void __fastcall FUN_10006bb0(int param_1);
void __thiscall FUN_10006c00(void *this,int *param_1,int *param_2);
void __thiscall neon::ctrl::CScrollBar::~CScrollBar(CScrollBar *this);
void __cdecl FUN_10006d70(undefined1 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,undefined4 param_6);
undefined4 __thiscall FUN_10006db0(void *this,undefined4 param_1);
CScrollBar * __thiscall neon::ctrl::CScrollBar::deleting_destructor(CScrollBar *this,byte param_1);
CScrollBar * __thiscall neon::ctrl::CScrollBar::CScrollBar(CScrollBar *this);
void __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::SetActive(CScrollBar *this,bool param_1);
void __cdecl FUN_10007040(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,int *param_6);
void __cdecl FUN_10007090(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,int *param_6,undefined4 *param_7,int *param_8);
undefined4 * __cdecl FUN_10007150(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,int *param_6,undefined4 *param_7,int *param_8);
undefined4 * __cdecl FUN_100071b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,undefined4 *param_5,int *param_6);
undefined4 * __fastcall FUN_10007217(int *param_1,undefined4 *param_2);
int __thiscall neon::ctrl::CScrollBar::UpBtnProc(CScrollBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CScrollBar::BarBtnProc(CScrollBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CScrollBar::DownBtnProc(CScrollBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CScrollBar::ThumbBtnProc(CScrollBar *this,COP_Drag *param_1);
void __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>::~CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>(CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>*this);
void __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>::~CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>(CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>*this);
undefined4 * __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>::deleting_destructor(CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>*this,byte param_1);
undefined4 * __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>::deleting_destructor(CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>*this,byte param_1);
undefined4 * __fastcall FUN_10007d30(int param_1);
undefined4 * __fastcall FUN_10007e30(int param_1);
void __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::OnMouseWheel(CScrollBar *this,int param_1,short param_2);
CButton * __thiscall neon::ctrl::CButton::CButton(CButton *this,CButton *param_1);
CButton * __thiscall neon::ctrl::CButton::operator=(CButton *this,CButton *param_1);
void * __cdecl FUN_10008190(uint param_1);
undefined4 * __thiscall Loki::Internal::FunctorImplBase<int,Loki::ClassLevelLockable>::vfunction1(FunctorImplBase<int,Loki::ClassLevelLockable> *this,byte param_1);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>*this);
void __thiscall FUN_100082c0(void *this,undefined4 *param_1,undefined4 param_2);
void __thiscall FUN_10008380(void *this,undefined4 *param_1,undefined4 param_2);
bool __thiscall neon::ctrl::CScrollBar::CreateUpBtn(CScrollBar *this);
bool __thiscall neon::ctrl::CScrollBar::CreateThumbBtn(CScrollBar *this);
bool __thiscall neon::ctrl::CScrollBar::CreateBarBtn(CScrollBar *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
bool __thiscall neon::ctrl::CScrollBar::CreateDownBtn(CScrollBar *this);
bool __thiscall neon::ctrl::CScrollBar::AttachY(CScrollBar *this,CControl *param_1,CBasicRect<float> *param_2,int param_3,int param_4);
bool __thiscall neon::ctrl::CScrollBar::AttachX(CScrollBar *this,CControl *param_1,CBasicRect<float> *param_2,int param_3,int param_4);
bool __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::Create(CScrollBar *this,CControl *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_3);
NBarKind __thiscall neon::ctrl::CSliderBar::GetBarKind(CSliderBar *this);
NBarType __thiscall neon::ctrl::CSliderBar::GetBarType(CSliderBar *this);
bool __thiscall neon::ctrl::CSliderBar::IsEnable(CSliderBar *this);
CSliderBar * __thiscall neon::ctrl::CSliderBar::CSliderBar(CSliderBar *this,NBarType param_1);
void __thiscall neon::ctrl::CSliderBar::~CSliderBar(CSliderBar *this);
void __thiscall neon::ctrl::CSliderBar::SetRange(CSliderBar *this,float param_1,float param_2);
void __thiscall neon::ctrl::CSliderBar::SetBarKind(CSliderBar *this,NBarKind param_1);
void __thiscall neon::ctrl::CSliderBar::SetBarType(CSliderBar *this,NBarType param_1);
int __thiscall neon::ctrl::CSliderBar::OnThumbClick(CSliderBar *this,COP_LDown *param_1);
void __thiscall neon::ctrl::CSliderBar::`default_constructor_closure'(CSliderBar *this);
CControl * __thiscall neon::ctrl::CSliderBar::deleting_destructor(CSliderBar *this,byte param_1);
float __thiscall neon::ctrl::CSliderBar::GetCurValue(CSliderBar *this);
void __thiscall neon::ctrl::CSliderBar::CheckBoundHor(CSliderBar *this,float *param_1);
void __thiscall neon::ctrl::CSliderBar::CheckBoundVert(CSliderBar *this,float *param_1);
void __thiscall neon::ctrl::CSliderBar::RestoreThumb(CSliderBar *this);
void __fastcall FUN_10009400(int *param_1);
CObject * __thiscall neon::ctrl::CSliderBar::neon::ctrl::CSliderBar::IsIn(CSliderBar *this,int param_1,int param_2);
void __thiscall neon::ctrl::CSliderBar::SetCurValue(CSliderBar *this,float param_1);
void __thiscall neon::ctrl::CSliderBar::EnableWindow(CSliderBar *this,bool param_1);
int __thiscall neon::ctrl::CSliderBar::OnBarClick(CSliderBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CSliderBar::OnUpBtnUp(CSliderBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CSliderBar::OnDownBtnUp(CSliderBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CSliderBar::OnThumbDrag(CSliderBar *this,COP_Drag *param_1);
void __cdecl FUN_10009b10(undefined4 *param_1,int *param_2);
void __thiscall neon::ctrl::CSliderBar::SetData(CSliderBar *this,float param_1,float param_2);
undefined4 * FUN_10009be0(undefined4 param_1,undefined4 param_2,int *param_3);
void Catch_All@10009c5c(void);
void __thiscall Loki::MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>::vfunction4(MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>*this);
int __thiscall Loki::MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>::vfunction3(MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>*this,int param_1);
void __fastcall FUN_10009ce0(int param_1);
void __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>::~CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>(CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>*this);
undefined4 * __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>::deleting_destructor(CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>*this,byte param_1);
undefined4 * __fastcall FUN_10009e80(int param_1);
CSliderBar * __thiscall neon::ctrl::CSliderBar::CSliderBar(CSliderBar *this,CSliderBar *param_1);
CSliderBar * __thiscall neon::ctrl::CSliderBar::operator=(CSliderBar *this,CSliderBar *param_1);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>::vfunction1(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>*this,byte param_1);
void __thiscall FUN_1000a2e0(void *this,undefined4 *param_1,undefined4 param_2);
void __thiscall FUN_1000a3a0(void *this,undefined4 *param_1,undefined4 param_2);
void __thiscall FUN_1000a460(void *this,undefined4 *param_1,undefined4 param_2);
bool __thiscall neon::ctrl::CSliderBar::Create(CSliderBar *this,CTile *param_1,CButton *param_2,CButton *param_3,CButton *param_4,NBarKind param_5);
void __thiscall neon::ctrl::CTextWindow::SetLineSpace(CTextWindow *this,int param_1);
void __thiscall neon::ctrl::CTextWindow::SetDrawMode(CTextWindow *this,int param_1,ulong param_2);
void __thiscall neon::ctrl::CTextWindow::SetFormat(CTextWindow *this,uint param_1);
uint __thiscall neon::ctrl::CTextWindow::GetFormat(CTextWindow *this);
int __thiscall neon::ctrl::CTextWindow::GetLineHeight(CTextWindow *this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall neon::visual::CText::GetText(CText *this);
int __thiscall neon::visual::CText::GetFontHeight(CText *this);
CTile * __thiscall neon::visual::CText::GetBackTile(CText *this);
CText * __thiscall neon::visual::CText::deleting_destructor_for_CVisual(CText *this,byte param_1);
void __thiscall neon::ctrl::CTextWindow::InitScrollBarData(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::GoNextLine(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::SetAlpha(CTextWindow *this,uchar param_1);
CObject * __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::IsIn(CTextWindow *this,int param_1,int param_2);
void __fastcall FUN_1000aa10(undefined4 *param_1);
void __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::SetPivot(CTextWindow *this,float param_1,float param_2);
void __cdecl FUN_1000aae0(char *param_1,char *param_2,char param_3);
void __cdecl FUN_1000ab00(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
float10 __cdecl FUN_1000ab70(float param_1);
void __thiscall CManagedRes::CManagedRes(CManagedRes *this,CManagedRes *param_1);
CManagedRes * __thiscall CManagedRes::deleting_destructor(CManagedRes *this,byte param_1);
void __thiscall neon::ctrl::CTextWindow::SetScrollBarPos(CTextWindow *this,CBasicPoint<float> *param_1);
void __thiscall neon::ctrl::CTextWindow::SetFont(CTextWindow *this,CFontInfo *param_1);
void __thiscall neon::visual::CText::neon::visual::CText::SetPosX(CText *this,float param_1);
void __thiscall FUN_1000ace0(void *this,HDC param_1);
uint __thiscall FUN_1000ad40(void *this,undefined4 param_1);
void __thiscall FUN_1000adc0(void *this,HDC param_1);
int * __fastcall FUN_1000b040(int *param_1);
bool __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::Create(CTextWindow *this,int param_1,int param_2,CBasicRect<float> *param_3,bool param_4);
undefined4 * __thiscall FUN_1000b2c0(void *this,HDC param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,int param_9);
int __fastcall FUN_1000b390(int *param_1);
int * __thiscall FUN_1000b3d0(void *this,int *param_1);
void FUN_1000b420(void);
void FUN_1000b440(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 *FUN_1000b480(undefined4 param_1,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@1000b4fc(void);
void __thiscall FUN_1000b520(void *this,uint param_1);
void __thiscall neon::ctrl::CTextWindow::CalcTextPos(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::DeleteAllText(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::Update(CTextWindow *this,bool param_1);
int __thiscall neon::ctrl::CTextWindow::CalcLastLinePos(CTextWindow *this);
int __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::ChangeValue(CTextWindow *this,COP_ThumbMove *param_1);
void __fastcall FUN_1000bc30(int param_1);
int __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>::vfunction3(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>*this,int param_1);
void __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>::vfunction4(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>*this);
void __thiscall neon::ctrl::CTextWindow::AutoNewLineByCR(CTextWindow *this,HDC__ *param_1,_Iterator<1> *param_2);
void __thiscall neon::ctrl::CTextWindow::AutoNewLineByWordWrap(CTextWindow *this,HDC__ *param_1,_Iterator<1> *param_2);
void __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::Clear(CTextWindow *this);
long __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::Restore(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::~CTextWindow(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::AutoNewLine(CTextWindow *this,HDC__ *param_1);
undefined4 * __fastcall FUN_1000c700(undefined4 *param_1);
void __fastcall FUN_1000c770(int param_1);
CTextWindow * __thiscall neon::ctrl::CTextWindow::deleting_destructor_for_CControl(CTextWindow *this,byte param_1);
CTextWindow * __thiscall neon::ctrl::CTextWindow::CTextWindow(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::AddText(CTextWindow *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::ctrl::CTextWindow::AddText(CTextWindow *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong param_2);
void __thiscall neon::ctrl::CTextWindow::AddText(CTextWindow *this,CFontInfo *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall neon::ctrl::CTextWindow::GetString(CTextWindow *this,int param_1);
void __cdecl FUN_1000d3b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,int *param_6);
void __thiscall neon::ctrl::CTextWindow::vfunction1_for_CManagedRes(CTextWindow *this,byte param_1);
void __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::OnMouseWheel(CTextWindow *this,int param_1,short param_2);
void __thiscall neon::ctrl::CTextWindow::SetText(CTextWindow *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>::~CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>(CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>*this);
undefined4 * __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>::deleting_destructor(CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>*this,byte param_1);
undefined4 * __fastcall FUN_1000d6d0(int param_1);
CTextWindow * __thiscall neon::ctrl::CTextWindow::CTextWindow(CTextWindow *this,CTextWindow *param_1);
CText * __thiscall neon::visual::CText::CText(CText *this,CText *param_1);
void __thiscall neon::visual::CText::vfunction1_for_CManagedRes(CText *this,byte param_1);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>::vfunction1(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>*this,byte param_1);
void __thiscall FUN_1000db10(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3);
bool __thiscall neon::ctrl::CTextWindow::CreateScrollBar(CTextWindow *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CUIInputManager::Init(CUIInputManager *this);
void __cdecl neon::ctrl::CUIInputManager::Destroy(void);
undefined2 __thiscall FUN_1000ddf0(void *this,int param_1,int param_2);
bool __thiscall neon::ctrl::CUIInputManager::IsIn(CUIInputManager *this);
EType __thiscall neon::ctrl::CUIInputManager::GetTypeFromMsg(CUIInputManager *this,uint param_1);
void __thiscall neon::ctrl::CUIInputManager::FocusOut(CUIInputManager *this);
void __thiscall neon::ctrl::CUIInputManager::FocusIn(CUIInputManager *this,CControl *param_1);
CControl * __thiscall neon::ctrl::CUIInputManager::GetCapture(CUIInputManager *this);
void __thiscall neon::ctrl::CUIInputManager::CUIInputManager(CUIInputManager *this);
CUIInputManager * __cdecl neon::ctrl::CUIInputManager::Instance(void);
undefined4 * __fastcall FUN_1000e0f0(undefined4 *param_1);
void __thiscall neon::ctrl::CUIInputManager::SetCapture(CUIInputManager *this,CControl *param_1);
undefined4 __thiscall FUN_1000e170(void *this,undefined4 param_1);
bool __thiscall neon::ctrl::CUIInputManager::PreProcessMessage(CUIInputManager *this,uint param_1,uint param_2,uint param_3,CControl *param_4);
bool __thiscall neon::ctrl::CUIInputManager::ProcessMessage(CUIInputManager *this,uint param_1,uint param_2,uint param_3,CControl *param_4);
void FUN_1000e6b0(undefined4 param_1);
void __cdecl FUN_1000e6d0(undefined4 param_1);
int __thiscall neon::frw::CObject::GetZOrder(CObject *this);
HINSTANCE__ * __thiscall neon::frw::CApp::GetInsth(CApp *this);
void __thiscall neon::frw::CApp::SetTopMostOleObj(CApp *this,IOleObj *param_1);
void __thiscall neon::ctrl::CWebBrowser::neon::ctrl::CWebBrowser::MsgHandler(CWebBrowser *this,tagMSG *param_1);
void __thiscall neon::ctrl::CWebBrowser::DisplayHTML(CWebBrowser *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
int * __thiscall FUN_1000e820(void *this,int *param_1);
undefined4 __thiscall FUN_1000e890(void *this,int *param_1);
void __thiscall FUN_1000e8c0(void *this,int param_1);
void __thiscall FUN_1000e910(void *this,int *param_1);
void __cdecl FUN_1000e970(int *param_1,size_t param_2,void *param_3,int param_4);
void __thiscall neon::ctrl::CWebBrowser::SetDestroyCallback(CWebBrowser *this,Functor<void,Loki::NullType,Loki::ClassLevelLockable> *param_1);
void __cdecl FUN_1000ea20(int param_1,int param_2,int param_3,int param_4,int *param_5);
void __thiscall neon::ctrl::CWebBrowser::neon::ctrl::CWebBrowser::OnDestroy(CWebBrowser *this);
int * __thiscall FUN_1000ea70(void *this,LPCSTR param_1);
void __thiscall FUN_1000ead0(void *this,undefined4 *param_1,uint *param_2);
void __thiscall neon::ctrl::CWebBrowser::Navigate(CWebBrowser *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
int __thiscall Loki::FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>::vfunction3(FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>*this,int param_1);
void __thiscall Loki::FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>::vfunction4(FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>*this);
bool __thiscall neon::ctrl::CWebBrowser::CheckZOrder(CWebBrowser *this);
void __thiscall neon::ctrl::CWebBrowser::RearrangeWindows(CWebBrowser *this);
void __thiscall FUN_1000ed40(void *this,int *param_1,uint *param_2);
int __thiscall FUN_1000ee30(void *this,uint *param_1);
void __thiscall FUN_1000eea0(void *this,int *param_1,uint *param_2);
undefined4 * __fastcall FUN_1000ef30(undefined4 *param_1);
LRESULT FUN_1000efa0(HWND param_1,uint param_2,uint param_3,LPARAM param_4);
void __thiscall neon::ctrl::CWebBrowser::RemoveOneself(CWebBrowser *this);
void __thiscall FUN_1000f140(void *this,undefined4 param_1,int param_2,void *param_3,undefined4 param_4,int param_5,undefined4 param_6,int param_7,uint param_8);
void __thiscall FUN_1000f1b0(void *this,int *param_1,undefined *param_2);
void __thiscall neon::ctrl::CWebBrowser::~CWebBrowser(CWebBrowser *this);
CWebBrowser * __thiscall neon::ctrl::CWebBrowser::CWebBrowser(CWebBrowser *this,CWebBrowser *param_1);
CWebBrowser * __thiscall neon::ctrl::CWebBrowser::operator=(CWebBrowser *this,CWebBrowser *param_1);
CWebBrowser * __thiscall neon::ctrl::CWebBrowser::deleting_destructor_for_CVisual(CWebBrowser *this,byte param_1);
void __thiscall FUN_1000f5b0(void *this,undefined *param_1);
void __thiscall neon::ctrl::CWebBrowser::SortZOrderList(CWebBrowser *this);
bool __thiscall neon::ctrl::CWebBrowser::neon::ctrl::CWebBrowser::Create(CWebBrowser *this,int param_1,int param_2,CBasicPoint<float> *param_3);
void __thiscall neon::ctrl::CWebBrowser::neon::ctrl::CWebBrowser::Logic(CWebBrowser *this);
undefined4 * __thiscall Loki::Internal::FunctorImplBase<void,Loki::ClassLevelLockable>::vfunction1(FunctorImplBase<void,Loki::ClassLevelLockable> *this,byte param_1);
undefined4 * __thiscall Loki::FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>::vfunction2(FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>*this);
undefined4 * __thiscall Loki::FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>::vfunction1(FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>*this,byte param_1);
FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)> *__thiscall Loki::FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>::FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>(FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>*this);
CWindow * __thiscall neon::ctrl::CWindow::CWindow(CWindow *this);
void __thiscall neon::ctrl::CWindow::~CWindow(CWindow *this);
void __thiscall neon::ctrl::CWindow::neon::ctrl::CWindow::SetPivot(CWindow *this,float param_1,float param_2);
CControl * __thiscall neon::ctrl::CWindow::deleting_destructor(CWindow *this,byte param_1);
bool __thiscall neon::ctrl::CWindow::neon::ctrl::CWindow::Create(CWindow *this,int param_1,int param_2,bool param_3,bool param_4);
bool __thiscall neon::ctrl::CWindow::neon::ctrl::CWindow::Create(CWindow *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall FUN_10010150(void *this,undefined4 *param_1);
void __thiscall neon::ctrl::CWindow::neon::ctrl::CWindow::OnFocus(CWindow *this,bool param_1,bool param_2);
void __thiscall neon::ctrl::CWindow::neon::ctrl::CWindow::OnMouseLbDown(CWindow *this,int param_1,int param_2);
void __thiscall neon::ctrl::CWindow::neon::ctrl::CWindow::OnMouseDrag(CWindow *this,int param_1,int param_2);
CWindow * __thiscall neon::ctrl::CWindow::CWindow(CWindow *this,CWindow *param_1);
CWindow * __thiscall neon::ctrl::CWindow::operator=(CWindow *this,CWindow *param_1);
CButton * __thiscall neon::ctrl::CButton::CButton(CButton *this);
void __thiscall neon::ctrl::CButton::~CButton(CButton *this);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::SetEffect(CButton *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::SetEffectType(CButton *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::OnMouseLbDown(CButton *this,int param_1,int param_2);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::OnMouseLbUp(CButton *this,int param_1,int param_2);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::OnMouseOver(CButton *this);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::OnMouseLeave(CButton *this);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::OnMouseDrag(CButton *this,int param_1,int param_2);
void __thiscall neon::ctrl::CButton::SetMove(CButton *this,bool param_1);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::SetBtnActive(CButton *this,bool param_1);
void __thiscall neon::ctrl::CButton::SetStartPos(CButton *this,uint param_1);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::SetPivot(CButton *this,float param_1,float param_2);
int __thiscall neon::visual::CSprite::GetAniIndex(CSprite *this);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::Logic(CButton *this);
bool __thiscall neon::ctrl::CButton::neon::ctrl::CButton::Create(CButton *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
CCheckButton * __thiscall neon::ctrl::CCheckButton::deleting_destructor(CCheckButton *this,byte param_1);
CCheckBox * __thiscall neon::ctrl::CCheckBox::CCheckBox(CCheckBox *this);
void __thiscall neon::ctrl::CCheckBox::~CCheckBox(CCheckBox *this);
void __thiscall neon::ctrl::CCheckBox::neon::ctrl::CCheckBox::SetActive(CCheckBox *this,bool param_1);
void __thiscall neon::ctrl::CCheckBox::neon::ctrl::CCheckBox::SetPivot(CCheckBox *this,float param_1,float param_2);
CCheckBox * __thiscall neon::ctrl::CCheckBox::deleting_destructor(CCheckBox *this,byte param_1);
bool __thiscall neon::ctrl::CCheckBox::neon::ctrl::CCheckBox::Create(CCheckBox *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CCheckBox::SetText(CCheckBox *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CCheckBox::SetActFont(CCheckBox *this,CFontInfo *param_1);
void __thiscall neon::ctrl::CCheckBox::SetInActFont(CCheckBox *this,CFontInfo *param_1);
CCheckButton * __thiscall neon::ctrl::CCheckButton::CCheckButton(CCheckButton *this,CCheckButton *param_1);
CCheckButton * __thiscall neon::ctrl::CCheckButton::operator=(CCheckButton *this,CCheckButton *param_1);
CCheckBox * __thiscall neon::ctrl::CCheckBox::CCheckBox(CCheckBox *this,CCheckBox *param_1);
CCheckBox * __thiscall neon::ctrl::CCheckBox::operator=(CCheckBox *this,CCheckBox *param_1);
CCheckButton * __thiscall neon::ctrl::CCheckButton::CCheckButton(CCheckButton *this);
void __thiscall neon::ctrl::CCheckButton::~CCheckButton(CCheckButton *this);
void __thiscall neon::ctrl::CButton::neon::ctrl::CButton::SetActive(CButton *this,bool param_1);
void __thiscall neon::ctrl::CCheckButton::neon::ctrl::CCheckButton::SetCheck(CCheckButton *this,bool param_1);
bool __thiscall neon::ctrl::CCheckButton::GetCheck(CCheckButton *this);
void __thiscall neon::ctrl::CCheckButton::neon::ctrl::CCheckButton::Logic(CCheckButton *this);
bool __thiscall neon::ctrl::CCheckButton::neon::ctrl::CCheckButton::Create(CCheckButton *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CCheckButton::neon::ctrl::CCheckButton::OnMouseLbUp(CCheckButton *this,int param_1,int param_2);
void __thiscall neon::ctrl::CCheckButton::neon::ctrl::CCheckButton::OnMouseDrag(CCheckButton *this,int param_1,int param_2);
void __thiscall neon::ctrl::CRadioButton::InitActiveFont(CRadioButton *this);
void __thiscall neon::ctrl::CRadioButton::InitInActiveFont(CRadioButton *this);
void __thiscall neon::ctrl::CRadioButton::Off(CRadioButton *this);
void __thiscall neon::ctrl::CRadioButton::neon::ctrl::CRadioButton::SetActive(CRadioButton *this,bool param_1);
bool __thiscall neon::ctrl::CRadioButton::neon::ctrl::CRadioButton::Create(CRadioButton *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CRadioButton::SetText(CRadioButton *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CRadioButton::SetActFont(CRadioButton *this,CFontInfo *param_1);
void __thiscall neon::ctrl::CRadioButton::SetInActFont(CRadioButton *this,CFontInfo *param_1);
void __thiscall neon::ctrl::CRadioButton::OffAllOtherBtn(CRadioButton *this);
void __thiscall neon::ctrl::CRadioButton::neon::ctrl::CRadioButton::SetCheck(CRadioButton *this,bool param_1);
void __cdecl FUN_10011ce0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,int *param_6);
void __thiscall neon::ctrl::CRadioButton::neon::ctrl::CRadioButton::OnMouseLbUp(CRadioButton *this,int param_1,int param_2);
void __fastcall FUN_10011e40(int *param_1);
undefined4 ** __thiscall FUN_10011e80(void *this,undefined4 *param_1);
CRadioButton * __thiscall neon::ctrl::CRadioButton::CRadioButton(CRadioButton *this,CRadioButton *param_1);
CRadioButton * __thiscall neon::ctrl::CRadioButton::CRadioButton(CRadioButton *this);
CRadioButton * __thiscall neon::ctrl::CRadioButton::operator=(CRadioButton *this,CRadioButton *param_1);
void __thiscall neon::ctrl::CRadioButton::Attach(CRadioButton *this,CRadioButton *param_1);
void __thiscall neon::ctrl::CRadioButton::Detach(CRadioButton *this);
void __thiscall neon::ctrl::CRadioButton::~CRadioButton(CRadioButton *this);
CRadioButton * __thiscall neon::ctrl::CRadioButton::deleting_destructor(CRadioButton *this,byte param_1);
undefined4 * __cdecl FUN_10012760(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * __cdecl FUN_10012780(undefined4 *param_1,undefined2 param_2,uint param_3);
void __thiscall FUN_100127c0(void *this,uint param_1);
int __cdecl FUN_10012820(int param_1,uint param_2,uint param_3,char *param_4,int *param_5);
int __cdecl FUN_10012a20(byte *param_1,ushort *param_2,int param_3,uint param_4,int *param_5);
int __cdecl FUN_10012c30(byte *param_1,ushort *param_2,int param_3,undefined4 param_4,int *param_5);
int __cdecl FUN_10012dc0(byte *param_1,undefined4 *param_2,int param_3,uint param_4,int *param_5);
int __cdecl FUN_10012f50(byte *param_1,ushort *param_2,int param_3,undefined4 param_4,int *param_5);
int __cdecl FUN_10013100(byte *param_1,ushort *param_2,int param_3,undefined4 param_4,int *param_5);
int __cdecl FUN_10013220(byte *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int *param_5);
void __thiscall FUN_10013370(void *this,uint param_1);
int __cdecl FUN_100133c0(int param_1,int param_2,uint param_3,byte *param_4,int *param_5);
int __cdecl FUN_10013670(int param_1,int param_2,uint param_3,byte *param_4,int *param_5);
int __cdecl FUN_10013920(byte *param_1,ushort *param_2,uint param_3,undefined4 param_4,int param_5,undefined4 param_6,uint param_7,int *param_8);
SurfaceDesc * __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetSurfaceDesc(CRLESurface *this);
bool __thiscall neon::render::CRLESurface::neon::render::CRLESurface::Fill(void);
void * __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetSurfacePointer(CRLESurface *this);
long __thiscall neon::render::CRLESurface::LoadBitmapA(CRLESurface *this);
ushort __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetWidth(CRLESurface *this);
ushort __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetHeight(CRLESurface *this);
ulong __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetBPP(CRLESurface *this);
ushort __thiscall neon::render::CRLESurface::neon::render::CRLESurface::Type(CRLESurface *this);
IDirect3DDevice9 * __thiscall IDxDevice::IDxDevice::GetD3DDevice(IDxDevice *this);
void __thiscall IDxDevice::IDxDevice::ApplyLinearFilter(IDxDevice *this,bool param_1);
long __thiscall neon::render::CRLESurface::neon::render::CRLESurface::SetColorKey(CRLESurface *this,ulong param_1,ulong param_2,bool param_3);
undefined4 __cdecl FUN_10013b40(undefined4 param_1);
void __thiscall neon::visual::CSprite::CAnimate::SprAni_SetName(CAnimate *this,char *param_1,uint param_2);
int __thiscall neon::visual::CSprite::CAnimate::SprAni_CompareName(CAnimate *this,char *param_1);
bool __thiscall neon::visual::CSprite::SetAniEndFuncCallWhenStop(CSprite *this,bool param_1);
void __thiscall neon::visual::CSprite::ResumeAnimate(CSprite *this);
void __thiscall neon::visual::CSprite::ProcessEffect(CSprite *this);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetEffect(CSprite *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetEffectType(CSprite *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
uchar __thiscall neon::visual::CSprite::neon::visual::CSprite::GetAlpha(CSprite *this);
void __thiscall neon::visual::CFontInfo::~CFontInfo(CFontInfo *this);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetShowRef(CSprite *this,bool param_1);
int __thiscall FUN_10013eb0(void *this,uint param_1);
void __fastcall FUN_10013ef0(undefined4 *param_1);
int * __thiscall FUN_10013f00(void *this,int param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl FUN_10014020(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10014060(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100140a0(int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_100140f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
bool __thiscall neon::visual::CVisual::GetInverse(CVisual *this);
void __thiscall FUN_10014130(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,undefined2 param_3,undefined2 param_4,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_5,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_6,undefined4 param_7,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11);
ulong __thiscall neon::frw::CApp::GetTick(CApp *this);
IDxDraw * __thiscall neon::visual::CTile::GetDraw(CTile *this);
CBasicRect<long> * __thiscall neon::visual::CTile::GetTile(CTile *this);
ushort __thiscall neon::visual::CTile::GetTileNum(CTile *this);
undefined4 * __thiscall neon::visual::CSprite::CFrameEffect::deleting_destructor(CFrameEffect *this,byte param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __thiscall neon::visual::CSprite::CAnimate::SprAni_SetName(CAnimate *this,char *param_1);
CFrame * __thiscall neon::visual::CSprite::CFrame::CFrame(CFrame *this);
int __thiscall neon::visual::CSprite::GetAnimationIndexByName(CSprite *this,char *param_1);
void __thiscall neon::visual::CSprite::StopAnimate(CSprite *this);
void __thiscall neon::visual::CSprite::SetAniEndFunc(CSprite *this,CFunctor<void,int> *param_1,int param_2);
IDxSurface * __thiscall neon::visual::CSprite::SurfaceFrom(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,SURFACEHEADER *param_2);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetInverse(CSprite *this,bool param_1);
int __thiscall FUN_10014600(void *this,uint param_1);
void __thiscall neon::util::CMemFunction<neon::visual::CSprite,void,int>::vfunction1(CMemFunction<neon::visual::CSprite,void,int> *this);
undefined4 * __thiscall neon::util::CMemFunction<neon::visual::CSprite,void,int>::vfunction2(CMemFunction<neon::visual::CSprite,void,int> *this);
undefined4 * __cdecl FUN_10014680(int param_1,int param_2,undefined4 *param_3);
void __thiscall neon::visual::CSprite::CFrameEffect::CFrameEffect(CFrameEffect *this);
void __thiscall neon::visual::CSprite::CFrameEffect::CFrameEffect(CFrameEffect *this,CFrame *param_1);
CFrame * __thiscall neon::visual::CSprite::CFrame::operator=(CFrame *this,CFrame *param_1);
undefined4 * __thiscall neon::visual::CSprite::CFrame::deleting_destructor(CFrame *this,byte param_1);
void __thiscall neon::visual::CSprite::ProcessTransform(CSprite *this);
void __thiscall neon::visual::CSprite::GetIndexedImageRect(CSprite *this,uint param_1);
undefined4 __thiscall FUN_10014f80(void *this,char *param_1);
void __thiscall FUN_10014fd0(void *this,int *param_1,int param_2);
void __thiscall FUN_10015020(void *this,int *param_1,int param_2);
undefined4 * __cdecl FUN_10015070(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 __thiscall FUN_100150d0(void *this,char *param_1);
int __cdecl FUN_10015120(CFrame *param_1,CFrame *param_2,int param_3);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::Output(CSprite *this);
int __thiscall neon::visual::CSprite::GetAnimationBound(CSprite *this,CBasicRect<float> *param_1,int param_2);
int __thiscall neon::visual::CSprite::GetAnimationBoundAll(CSprite *this,CBasicRect<float> *param_1);
void __cdecl FUN_10015980(CFrame *param_1,CFrame *param_2,CFrame *param_3);
void __cdecl FUN_100159b0(int param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_100159e0(CFrame *param_1,int param_2,CFrame *param_3);
int __cdecl FUN_10015a10(CFrame *param_1,CFrame *param_2,int param_3);
void __cdecl FUN_10015a70(CFrame *param_1,CFrame *param_2,int param_3);
CFrame * __cdecl FUN_10015aa0(CFrame *param_1,CFrame *param_2,CFrame *param_3);
void __cdecl FUN_10015ae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10015b20(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_10015b50(int param_1);
int * __thiscall FUN_10015ba0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,CFrame *param_5);
void __thiscall neon::visual::CSprite::AddPivot(CSprite *this,float param_1,float param_2);
CFrame * FUN_10015e20(CFrame *param_1,int param_2,CFrame *param_3);
void __cdecl FUN_10015e60(CFrame *param_1,CFrame *param_2,int param_3);
void __cdecl FUN_10015e90(undefined4 *param_1,int param_2,undefined4 *param_3);
void __fastcall FUN_10015ed0(undefined4 *param_1);
void __fastcall FUN_10015f30(undefined4 *param_1);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetPivot(CSprite *this,float param_1,float param_2);
undefined4 __thiscall FUN_10016020(void *this,undefined4 param_1);
CAnimate * __thiscall neon::visual::CSprite::CAnimate::CAnimate(CAnimate *this);
void __thiscall neon::visual::CSprite::CAnimate::~CAnimate(CAnimate *this);
undefined4 * __thiscall FUN_100160c0(void *this,int param_1);
void Catch_All@10016190(void);
undefined4 * __thiscall FUN_100161b0(void *this,undefined4 *param_1);
undefined4 * FUN_10016320(undefined4 *param_1,int param_2,undefined4 *param_3);
void FUN_10016360(CFrame *param_1,CFrame *param_2,CFrame *param_3);
CAnimate * __thiscall neon::visual::CSprite::CAnimate::CAnimate(CAnimate *this,CAnimate *param_1);
CAnimate * __thiscall neon::visual::CSprite::CAnimate::operator=(CAnimate *this,CAnimate *param_1);
void __thiscall neon::visual::CSprite::ProcessAnimate(CSprite *this);
int * __thiscall FUN_10016720(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void __thiscall FUN_100167a0(void *this,undefined4 param_1,CFrame *param_2,uint param_3,CFrame *param_4);
void Catch_All@10016979(void);
void Catch_All@10016a6c(void);
void FUN_10016b10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10016b40(undefined1 *param_1,undefined1 *param_2,int param_3);
undefined1 * __cdecl FUN_10016b90(int param_1,int param_2,undefined1 *param_3);
undefined1 * __cdecl FUN_10016be0(int param_1,int param_2,undefined1 *param_3);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::Logic(CSprite *this);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetAnimate(CSprite *this,int param_1,int param_2,bool param_3,bool param_4);
void __thiscall FUN_10016cd0(int *param_1,uint param_2,CFrame param_3);
void __thiscall FUN_10016dc0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@10016f72(void);
undefined4 * __cdecl FUN_100170b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void Catch_All@1001712a(void);
undefined1 * __cdecl FUN_10017160(int param_1,int param_2,undefined1 *param_3);
void __thiscall neon::visual::CSprite::CFrame::CFrame(CFrame *this,uint param_1);
void __thiscall FUN_10017220(void *this,uint param_1,undefined4 param_2);
void __thiscall FUN_100172f0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined1 * __cdecl FUN_100173c0(int param_1,int param_2,undefined1 *param_3);
void __cdecl FUN_10017420(int param_1,int param_2);
void __cdecl FUN_100174e0(undefined4 *param_1,int param_2,undefined4 *param_3);
void Catch_All@10017555(void);
void __thiscall FUN_10017590(void *this,undefined4 *param_1);
void __cdecl FUN_10017630(int param_1,int param_2,undefined1 *param_3);
void FUN_10017660(int param_1,int param_2);
undefined4 * FUN_10017680(undefined4 *param_1,int param_2,undefined4 *param_3);
void FUN_100176c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_100176f0(undefined4 *param_1);
int * __thiscall FUN_10017770(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined1 *param_5);
void __thiscall FUN_10017800(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,CAnimate *param_4);
void Catch_All@100179d2(void);
void Catch_All@10017ace(void);
CMemFunction<neon::visual::CSprite,void,int> * __thiscall neon::util::CMemFunction<neon::visual::CSprite,void,int>::CMemFunction<neon::visual::CSprite,void,int>(CMemFunction<neon::visual::CSprite,void,int> *this);
CObject * __thiscall neon::visual::CSprite::neon::visual::CSprite::Clone(CSprite *this);
void __fastcall FUN_10017db0(undefined4 *param_1);
void __thiscall FUN_10017e00(int *param_1,uint param_2,CAnimate param_3);
void __thiscall neon::visual::CSprite::~CSprite(CSprite *this);
undefined4 * __thiscall FUN_10018120(void *this,undefined4 *param_1);
CSprite * __thiscall neon::visual::CSprite::deleting_destructor(CSprite *this,byte param_1);
long __thiscall neon::visual::CSprite::CreateFromTile(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,ulong param_4,bool param_5,ulong param_6);
long __thiscall neon::visual::CSprite::LoadHGS(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,ulong param_3,bool param_4);
long __thiscall neon::visual::CSprite::CreateFromHGS(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,ulong param_3);
long __thiscall neon::visual::CSprite::Create(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,ulong param_3,int param_4,int param_5,bool param_6);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::Copy(CSprite *this,CObject *param_1);
void __thiscall neon::visual::CSprite::CFrameEffect::CFrameEffect(CFrameEffect *this);
void __thiscall neon::visual::CSprite::TileSet::TileSet(TileSet *this);
TileSet * __thiscall neon::visual::CSprite::TileSet::TileSet(TileSet *this,IDxSurface *param_1);
void __fastcall FUN_10019210(int param_1);
undefined4 * __thiscall FUN_10019220(void *this,undefined4 *param_1);
void __fastcall FUN_10019250(int param_1);
undefined4 * __thiscall FUN_10019260(void *this,undefined4 *param_1);
void __thiscall h2p::CFile::IncreaseRefCount(CFile *this);
void __thiscall h2p::CFile::DecreaseRefCount(CFile *this);
bool __cdecl h2p::CManager::IsConstructed(void);
map<void*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<void*>,std::allocator<std::pair<void*_const,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>* __thiscall h2p::CManager::GetSpriteMap(CManager *this);
CManager * __thiscall h2p::CManager::deleting_destructor(CManager *this,byte param_1);
void __fastcall FUN_10019350(int param_1);
CFile * __thiscall FUN_10019360(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall std::length_error::length_error(length_error *this);
void __cdecl FUN_100194a0(int *param_1);
void FUN_100194c0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
uint __cdecl FUN_10019670(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl FUN_10019720(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_10019760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100197c0(undefined4 *param_1,undefined4 *param_2);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_10019830(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __fastcall FUN_10019890(int param_1);
undefined4 * __cdecl FUN_100198a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100198f0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
SubImage * __thiscall h2p::CFile::operator[](CFile *this,ulong param_1);
uint __thiscall h2p::CFile::GetSubImageCount(CFile *this);
undefined4 * __cdecl FUN_100199b0(undefined4 *param_1,undefined4 param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_3);
void __cdecl FUN_10019a30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_10019a70(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
int __cdecl FUN_10019af0(undefined4 *param_1,undefined4 *param_2,int param_3);
undefined4 * __cdecl FUN_10019b50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int __cdecl FUN_10019bb0(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_10019c10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10019c50(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
int __cdecl FUN_10019cb0(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_10019d00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
SurfaceDesc * __thiscall h2p::CFile::GetSurfDesc(CFile *this,ulong param_1);
undefined4 __thiscall FUN_10019d70(void *this,char *param_1);
undefined4 __thiscall FUN_10019dc0(void *this,char *param_1);
undefined4 __thiscall FUN_10019e20(void *this,char *param_1);
uint __thiscall FUN_10019e70(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 *FUN_10019ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void Catch_All@10019f52(void);
void __thiscall FUN_10019f70(void *this,int *param_1,int param_2);
undefined4 * __cdecl FUN_10019fc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_1001a010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1001a070(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1001a0a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_1001a0d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void __cdecl FUN_1001a130(undefined4 *param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_1001a160(undefined4 *param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_1001a190(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_1001a1c0(void *this,uint param_1);
void * __cdecl FUN_1001a250(undefined4 *param_1,undefined4 *param_2,void *param_3);
void Catch_All@1001a2b9(void);
void __cdecl FUN_1001a2f0(undefined4 *param_1,undefined4 *param_2,int param_3);
undefined4 * __cdecl FUN_1001a320(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void Catch_All@1001a379(void);
void FUN_1001a3b0(void *param_1);
void __cdecl FUN_1001a3f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void __cdecl FUN_1001a420(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_1001a450(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1001a480(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_1001a4b0(undefined4 *param_1,int param_2,undefined4 *param_3);
void Catch_All@1001a507(void);
void __cdecl FUN_1001a540(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 *FUN_1001a580(undefined4 param_1,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@1001a5fc(void);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_1001a620(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void Catch_All@1001a6d8(void);
undefined4 * __cdecl FUN_1001a710(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void Catch_All@1001a7ab(void);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
int FUN_1001a850(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_1001a890(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_1001aa00(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * FUN_1001abf0(undefined4 *param_1,int param_2,undefined4 *param_3);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::begin(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall FUN_1001ac60(void *this,undefined4 param_1,int param_2,int *param_3);
undefined4 * __thiscall FUN_1001af30(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@1001afcd(void);
void FUN_1001aff0(void *param_1);
undefined4 * FUN_1001b030(undefined4 *param_1,int param_2,undefined4 *param_3);
void FUN_1001b070(undefined4 *param_1,undefined4 *param_2,void *param_3);
void __cdecl FUN_1001b0a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,int *param_5);
void __thiscall FUN_1001b0c0(void *this,undefined4 *param_1,int *param_2,int *param_3);
int * __thiscall FUN_1001b150(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void __thiscall FUN_1001b1e0(void *this,int *param_1,uint *param_2);
void __thiscall FUN_1001b2d0(void *this,undefined4 param_1,int param_2,int *param_3);
void __thiscall FUN_1001b5a0(void *this,int *param_1,uint *param_2);
undefined4 * FUN_1001b630(undefined4 *param_1,int param_2,undefined4 *param_3);
void FUN_1001b670(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_1001b6a0(IDxDevice *param_1,IDxDevice *param_2);
void __thiscall FUN_1001b6d0(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall FUN_1001b7b0(void *this,int param_1);
void __fastcall FUN_1001b830(int *param_1);
void FUN_1001b870(int param_1,int param_2);
int * __thiscall FUN_1001b8a0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5);
int * __thiscall FUN_1001b960(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
undefined4 * __thiscall FUN_1001ba00(void *this,int param_1);
void Catch_All@1001bafb(void);
int * __thiscall FUN_1001bb10(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void FUN_1001bbb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_1001bbe0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_1001bc10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __thiscall FUN_1001bc40(void *this,undefined4 param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6);
void Catch_All@1001bd1b(void);
void __fastcall FUN_1001bd90(undefined4 *param_1);
ulong __thiscall h2p::CFile::GetSubImageIndex(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
uint __cdecl FUN_1001be30(uint param_1);
void __fastcall FUN_1001bee0(int *param_1);
void __fastcall FUN_1001bf60(undefined4 *param_1);
void __fastcall FUN_1001bfa0(int param_1);
void __fastcall FUN_1001bff0(undefined4 *param_1);
void __fastcall FUN_1001c040(undefined4 *param_1);
void FUN_1001c090(int param_1,int param_2);
void __thiscall FUN_1001c0c0(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
undefined4 * __thiscall FUN_1001c1a0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@1001c338(void);
int * __thiscall FUN_1001c450(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
undefined4 * __thiscall FUN_1001c4f0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@1001c68b(void);
size_t * __thiscall FUN_1001c7a0(void *this,size_t *param_1);
void __thiscall FUN_1001c830(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@1001c987(void);
void FUN_1001ca80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_1001cab0(void *this,undefined4 *param_1);
void __fastcall FUN_1001cc10(int param_1);
void __fastcall FUN_1001cc60(undefined4 *param_1);
void __fastcall FUN_1001cc70(undefined4 *param_1);
undefined4 * __thiscall FUN_1001ccd0(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1001ce60(void *this,undefined4 *param_1);
void __fastcall FUN_1001cf70(int *param_1);
undefined4 * __thiscall FUN_1001cff0(void *this,int param_1);
void Catch_All@1001d088(void);
void __thiscall FUN_1001d0a0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __fastcall FUN_1001d180(undefined4 *param_1);
void __thiscall FUN_1001d1d0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_1001d2a0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@1001d496(void);
void Catch_All@1001d5a2(void);
void __thiscall FUN_1001d670(void *this,uint param_1,undefined4 param_2);
size_t * __cdecl FUN_1001d720(size_t *param_1,size_t *param_2,size_t *param_3);
void __fastcall thunk_FUN_1001cf70(int *param_1);
void __thiscall FUN_1001d7b0(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1001d860(void *this,undefined4 *param_1);
void __thiscall FUN_1001d9b0(void *this,undefined4 *param_1);
void __thiscall FUN_1001da50(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_1001db00(void *this,int param_1);
void Catch_All@1001dccc(void);
void __cdecl FUN_1001dd30(size_t *param_1,size_t *param_2,size_t *param_3);
size_t * __cdecl FUN_1001dda0(size_t *param_1,size_t *param_2,size_t *param_3);
CManager * __thiscall h2p::CManager::CManager(CManager *this,CManager *param_1);
CManager * __thiscall h2p::CManager::operator=(CManager *this,CManager *param_1);
void __thiscall FUN_1001dee0(void *this,undefined4 *param_1);
void FUN_1001df80(int param_1);
void * __cdecl FUN_1001dfd0(size_t *param_1,size_t *param_2,void *param_3);
void Catch_All@1001e039(void);
void __cdecl FUN_1001e080(size_t *param_1,size_t *param_2,size_t *param_3);
void __cdecl FUN_1001e0b0(void *param_1,int param_2,size_t *param_3);
void Catch_All@1001e119(void);
void __cdecl FUN_1001e150(int param_1,int param_2);
CFile * __thiscall h2p::CFile::operator=(CFile *this,CFile *param_1);
void __thiscall FUN_1001e220(void *this,undefined4 param_1,int param_2,undefined4 param_3,int param_4);
void * FUN_1001e3f0(void *param_1,int param_2,size_t *param_3);
void FUN_1001e430(int param_1,int param_2);
void FUN_1001e450(size_t *param_1,size_t *param_2,void *param_3);
void __fastcall FUN_1001e480(undefined4 *param_1);
void __thiscall FUN_1001e4d0(void *this,undefined4 param_1,size_t *param_2,uint param_3,size_t *param_4);
void Catch_All@1001e69e(void);
void Catch_All@1001e788(void);
int __fastcall FUN_1001e820(int param_1);
void __fastcall FUN_1001e8b0(int param_1);
void __thiscall FUN_1001e920(void *this,int *param_1,int param_2,size_t *param_3,size_t *param_4);
void __thiscall FUN_1001e9f0(void *this,size_t *param_1);
void __thiscall FUN_1001ea90(void *this,int *param_1);
void __thiscall FUN_1001f040(void *this,int *param_1);
undefined4 __thiscall FUN_1001f370(void *this,int param_1);
void __thiscall FUN_1001f870(void *this,int *param_1);
undefined4 __thiscall FUN_1001f8e0(void *this,int param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,undefined4 param_4);
void __thiscall neon::visual::CText::~CText(CText *this);
void __thiscall neon::visual::CText::SetBackColor(CText *this,ulong param_1);
void __thiscall neon::visual::CText::SetFontInfo(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ushort param_2,bool param_3,ulong param_4);
int __thiscall neon::visual::CText::CalcStringWidth(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::visual::CText::neon::visual::CText::SetEffect(CText *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::visual::CText::neon::visual::CText::SetEffectType(CText *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
void __thiscall neon::visual::CText::Create(CText *this,int param_1,int param_2,ulong param_3,ESurfaceMemType param_4,bool param_5);
void __thiscall neon::visual::CText::Create(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ESurfaceMemType param_2,bool param_3);
void __thiscall neon::visual::CText::SetTextStatic(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::visual::CText::SetText(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::visual::CText::SetText(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,uint param_2);
void __thiscall neon::visual::CText::Printf(CText *this,char *param_1,...);
void __thiscall neon::visual::CText::neon::visual::CText::SetPosY(CText *this,float param_1);
void __thiscall neon::visual::CText::Redraw(CText *this);
long __thiscall neon::visual::CText::neon::visual::CText::Restore(CText *this);
void __thiscall neon::visual::CText::SetColor(CText *this,ulong param_1);
void __thiscall neon::visual::CText::SetFont(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ushort param_2,bool param_3,ulong param_4);
void __thiscall neon::visual::CText::SetFont(CText *this,CFontInfo *param_1);
void __thiscall neon::visual::CText::SetDrawMode(CText *this,uint param_1);
CText * __thiscall neon::visual::CText::CText(CText *this);
void __thiscall neon::visual::CTile::neon::visual::CTile::SetEffect(CTile *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::visual::CTile::neon::visual::CTile::SetEffectType(CTile *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
void __thiscall neon::visual::CTile::neon::visual::CTile::SetShowRef(CTile *this,bool param_1);
uchar __thiscall neon::visual::CTile::neon::visual::CTile::GetAlpha(CTile *this);
void __thiscall neon::visual::CTile::neon::visual::CTile::OnAttached(CTile *this);
float __thiscall neon::visual::CVisual::GetPivotX(CVisual *this);
float __thiscall neon::visual::CVisual::GetPivotY(CVisual *this);
void __thiscall neon::visual::CTile::neon::visual::CTile::Output(CTile *this);
int __cdecl FUN_10021250(undefined4 *param_1,undefined4 *param_2,int param_3);
int __cdecl FUN_100212a0(int param_1,int param_2,int param_3);
void __thiscall neon::visual::CTile::SetTile(CTile *this,int param_1);
undefined4 __thiscall FUN_10021340(void *this,char *param_1);
void __thiscall FUN_10021390(void *this,int *param_1,int param_2);
void __cdecl FUN_100213e0(undefined4 *param_1,undefined4 *param_2,int param_3);
long __thiscall neon::visual::CTile::DestroySurface(CTile *this);
long __thiscall neon::visual::CTile::neon::visual::CTile::Release(CTile *this);
void __cdecl FUN_100214a0(int param_1,int param_2,int param_3);
long __thiscall neon::visual::CTile::CreateByCustomAllocation(CTile *this,int param_1,int param_2,int param_3,int param_4,ulong param_5,bool param_6,ulong param_7,bool param_8,ESurfaceMemType param_9,ESurfaceUsage param_10);
long __thiscall neon::visual::CTile::BuildSurface(CTile *this,int param_1,int param_2,ulong param_3,bool param_4,ulong param_5,bool param_6,ESurfaceMemType param_7,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_8);
long __thiscall neon::visual::CTile::BuildSurface(CTile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,ulong param_3,bool param_4,ESurfaceMemType param_5,int param_6);
void FUN_100219d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int * __thiscall FUN_10021a00(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void __thiscall FUN_10021a90(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@10021c02(void);
CTile * __thiscall neon::visual::CTile::CTile(CTile *this);
CObject * __thiscall neon::visual::CTile::neon::visual::CTile::Clone(CTile *this);
void __fastcall FUN_10021e70(undefined4 *param_1);
void __thiscall FUN_10021ec0(void *this,uint param_1,undefined4 param_2);
void __thiscall neon::visual::CTile::~CTile(CTile *this);
undefined4 * __thiscall FUN_10022070(void *this,undefined4 *param_1);
CTile * __thiscall neon::visual::CTile::deleting_destructor(CTile *this,byte param_1);
void __thiscall neon::visual::CTile::SplitTile(CTile *this,CBasicRect<long> *param_1,int param_2,int param_3);
void __thiscall neon::visual::CTile::SplitTile(CTile *this,int param_1,int param_2);
long __thiscall neon::visual::CTile::CreateFromH2pAlias(CTile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,ulong param_4);
long __thiscall neon::visual::CTile::CreateFromH2pIndex(CTile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong param_2,int param_3,int param_4,ulong param_5);
long __thiscall neon::visual::CTile::Create(CTile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,bool param_4,ulong param_5,bool param_6,ESurfaceMemType param_7,int param_8);
long __thiscall neon::visual::CTile::Create(CTile *this,int param_1,int param_2,int param_3,int param_4,ulong param_5,bool param_6,ulong param_7,bool param_8,ESurfaceMemType param_9,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_10);
void __thiscall neon::visual::CTile::neon::visual::CTile::Copy(CTile *this,CObject *param_1);
CBasicRect<float> * __thiscall neon::visual::CVisual::GetClipRect(CVisual *this);
CBasicRect<float> * __thiscall neon::visual::CVisual::GetLocalClipRect(CVisual *this);
void __thiscall neon::visual::CVisual::visual_AssignClipRect2(CVisual *this,CBasicRect<float> *param_1);
CBasicRect<float> * __thiscall neon::visual::CVisual::GetBoundRect(CVisual *this);
void __thiscall neon::visual::CVisual::BoundryCheckX(CVisual *this);
void __thiscall neon::visual::CVisual::BoundryCheckY(CVisual *this);
float __thiscall neon::visual::CVisual::GetScaleX(CVisual *this);
float __thiscall neon::visual::CVisual::GetScaleY(CVisual *this);
float __thiscall neon::visual::CVisual::GetRotation(CVisual *this);
void __thiscall neon::visual::CVisual::SetStretchedWidth(CVisual *this,int param_1);
void __thiscall neon::visual::CVisual::SetStretchedHeight(CVisual *this,int param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::OnDetached(CVisual *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::Copy(CVisual *this,CObject *param_1);
uchar __thiscall neon::visual::CVisual::neon::visual::CVisual::GetAlpha(CVisual *this);
void __fastcall FUN_10023040(int *param_1,undefined4 param_2);
void __thiscall FUN_10023130(void *this,float *param_1);
CVisual * __thiscall neon::visual::CVisual::CVisual(CVisual *this);
void __thiscall neon::visual::CVisual::ReCalcClipRect(CVisual *this);
float __thiscall neon::visual::CVisual::neon::visual::CVisual::GetPosX(CVisual *this);
float __thiscall neon::visual::CVisual::neon::visual::CVisual::GetPosY(CVisual *this);
void __thiscall neon::visual::CVisual::GetPos(CVisual *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetPosX(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetPosY(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetPos(CVisual *this,float param_1,float param_2);
void __thiscall neon::visual::CVisual::SetShow(CVisual *this,bool param_1);
void __thiscall neon::visual::CVisual::SetActor(CVisual *this,CObject *param_1);
void __thiscall neon::visual::CVisual::SetEffector(CVisual *this,CObject *param_1);
void __thiscall neon::visual::CVisual::SetMover(CVisual *this,CObject *param_1);
CObject * __thiscall neon::visual::CVisual::neon::visual::CVisual::Clone(CVisual *this);
void __thiscall neon::visual::CVisual::~CVisual(CVisual *this);
void __thiscall neon::visual::CVisual::SetVisualParent(CVisual *this,CVisual *param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetClipRect(CVisual *this,CBasicRect<float> *param_1,bool param_2);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetLocalClipRect(CVisual *this,CBasicRect<float> *param_1,bool param_2);
void __thiscall neon::visual::CVisual::SetBoundRect(CVisual *this,CBasicRect<float> *param_1);
CVisual * __thiscall neon::visual::CVisual::FindVisualParent(CVisual *this);
void __thiscall neon::visual::CVisual::GetClipRect(CVisual *this,CBasicRect<long> *param_1);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::OnAttached(CVisual *this);
void __thiscall neon::visual::CVisual::neon::visual::CVisual::SetShowRef(CVisual *this,bool param_1);
bool __thiscall DXAvatar::CAvtrId::IsDefault(CAvtrId *this);
bool __thiscall DXAvatar::CAvtrId::IsComAvtr(CAvtrId *this);
void __thiscall DXAvatar::CAvtrId::SetComAvatar(CAvtrId *this,bool param_1);
void __thiscall DXAvatar::CAvtrId::SetDefAvatar(CAvtrId *this,bool param_1);
bool __thiscall DXAvatar::CAvtrId::CheckDefaultAvatarId(CAvtrId *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
ulong __thiscall DXAvatar::CDxAvtr2004::GetHeight(CDxAvtr2004 *this);
HWND__ * __thiscall C3DDisplay::GetHWND(C3DDisplay *this);
int __thiscall DXAvatar::CDxAvtr2004::IsReady(CDxAvtr2004 *this);
IDxSurface * __thiscall DXAvatar::CDxAvtr2004::GetSurface(CDxAvtr2004 *this);
CDxAvtr2004 * __thiscall DXAvatar::CDxAvtr2004::deleting_destructor(CDxAvtr2004 *this,byte param_1);
bool __thiscall DXAvatar::CDxAvtr2004::IsDrawingRect(CDxAvtr2004 *this);
void __thiscall CDxAvatar::~CDxAvatar(CDxAvatar *this);
void __thiscall CDxAvatar::CDxAvatar::SetShowRef(CDxAvatar *this,bool param_1);
void __thiscall CDxAvatar::Destroy(CDxAvatar *this);
uint __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::capacity(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
uint __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::size(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
bool __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::empty(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
undefined4 __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::get_allocator(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::operator[](vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
void __thiscall std::invalid_argument::invalid_argument(invalid_argument *this);
int * __thiscall FUN_10024150(void *this,int param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __thiscall DXAvatar::CAvtrId::AddPrefix(CAvtrId *this,char *param_1);
CDxAvatar * __thiscall CDxAvatar::deleting_destructor(CDxAvatar *this,byte param_1);
CDxAvatar * __thiscall CDxAvatar::CDxAvatar(CDxAvatar *this);
long __thiscall CDxAvatar::Create(CDxAvatar *this,char *param_1,int param_2,int param_3,int param_4,ulong param_5,ulong param_6);
void __thiscall CDxAvatar::CDxAvatar::Logic(CDxAvatar *this);
undefined4 Catch_All@100245a4(void);
void __thiscall CDxAvatar::CDxAvatar::Output(CDxAvatar *this);
uint __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::max_size(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void FUN_100246c0(exception *param_1);
int __cdecl FUN_100246e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,int param_3);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Reverse(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
bool __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Buy(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
void __cdecl FUN_100247d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,int param_3);
void __cdecl FUN_10024800(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void * FUN_10024830(void *param_1,int param_2,void *param_3);
undefined4 * __cdecl FUN_10024870(undefined4 *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,undefined4 param_4,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_5);
int __cdecl FUN_100248f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,int param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_10024950(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void Catch_All@100249ba(void);
void __cdecl FUN_100249f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void Catch_All@10024a76(void);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::end(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::rbegin(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::rend(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::at(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __cdecl FUN_10024c60(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,int param_3);
void __cdecl FUN_10024c90(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@10024cfa(void);
void __thiscall std::_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::`default_constructor_closure'(_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall DXAvatar::CDxAvtrTickHandler::~CDxAvtrTickHandler(CDxAvtrTickHandler *this);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Make_iter(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,_Container_base_aux *param_2,undefined4 param_3,_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>param_4);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::at(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void FUN_10024ef0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void FUN_10024f20(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void __thiscall DXAvatar::CAvtrId::Copy(CAvtrId *this,CAvtrId *param_1);
CDxAvtrTickHandler * __thiscall DXAvatar::CDxAvtrTickHandler::CDxAvtrTickHandler(CDxAvtrTickHandler *this);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Destroy(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Tidy(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Ufill(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,uint param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
undefined4 * __thiscall FUN_100250f0(void *this,int param_1);
void __fastcall FUN_100251d0(undefined4 *param_1);
CDxAvtrTickHandler * __thiscall DXAvatar::CDxAvtrTickHandler::CDxAvtrTickHandler(CDxAvtrTickHandler *this,CDxAvtrTickHandler *param_1);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>*param_1);
void Catch_All@10025362(void);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Construct_n(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void Catch_All@10025408(void);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::reserve(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
void Catch_All@100255ac(void);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::pop_back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::erase(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,_Container_base_aux *param_2,undefined4 param_3,_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>param_4);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::erase(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,_Container_base_aux *param_2,undefined4 param_3,_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>param_4,undefined4 param_5,_Container_base_aux param_6);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::clear(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Insert_n(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,length_error *param_4,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5);
void Catch_All@100259a9(void);
void Catch_All@10025ab4(void);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this,CAvtrId *param_1);
void __thiscall DXAvatar::CAvtrId::~CAvtrId(CAvtrId *this);
CDxAvtrTickHandler * __thiscall DXAvatar::CDxAvtrTickHandler::operator=(CDxAvtrTickHandler *this,CDxAvtrTickHandler *param_1);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this,CDxAvtr2004 *param_1);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *param_3);
vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::operator=(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>*param_1);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::resize(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_3);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::insert(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,_Container_base_aux *param_2,_Container_base_aux param_3,int param_4,undefined4 param_5);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::insert(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::swap(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>*param_1);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Assign_n(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
CAvtrId * __thiscall DXAvatar::CAvtrId::operator=(CAvtrId *this,CAvtrId *param_1);
CAvtrId * __thiscall DXAvatar::CAvtrId::deleting_destructor(CAvtrId *this,byte param_1);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::resize(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::push_back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::assign(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
CDxAvatar * __thiscall CDxAvatar::CDxAvatar(CDxAvatar *this,CDxAvatar *param_1);
void __thiscall neon::phy::CActor::SetHideAfterEff(CActor *this,bool param_1);
void __thiscall neon::phy::CActor::SetRemoveAfterEff(CActor *this,bool param_1);
void __thiscall neon::phy::CActor::SetRepeatNumber(CActor *this,int param_1);
void __thiscall neon::phy::CActor::SetRemoveSelfAfterEff(CActor *this,bool param_1);
void __thiscall neon::phy::CActor::SetRotFactor(CActor *this,float param_1);
void __thiscall neon::phy::CActor::SetScaleFactor(CActor *this,float param_1);
void __thiscall neon::phy::CActor::StopPlay(CActor *this);
bool __thiscall neon::phy::CActor::IsPlay(CActor *this);
CActor * __thiscall neon::phy::CActor::CActor(CActor *this);
void __thiscall neon::phy::CActor::~CActor(CActor *this);
void __thiscall neon::visual::CVisual::SetScale(CVisual *this,float param_1,float param_2);
void __thiscall neon::visual::CVisual::SetRotation(CVisual *this,float param_1);
CVisual * __thiscall neon::phy::CActor::deleting_destructor(CActor *this,byte param_1);
void __thiscall neon::phy::CActor::neon::phy::CActor::Logic(CActor *this);
void __thiscall neon::phy::CActor::StartPlay(CActor *this);
void __thiscall neon::phy::CActor::Create(CActor *this,CTile *param_1,ulong param_2,int param_3,int param_4,int param_5);
CActor * __thiscall neon::phy::CActor::CActor(CActor *this,CActor *param_1);
CActor * __thiscall neon::phy::CActor::operator=(CActor *this,CActor *param_1);
void __thiscall neon::phy::CEffector::SetEffectType(CEffector *this,int param_1);
void __thiscall neon::phy::CEffector::SetAlphaParam(CEffector *this,int param_1,int param_2);
void __thiscall neon::phy::CEffector::SetHideAfterEff(CEffector *this,bool param_1);
void __thiscall neon::phy::CEffector::SetRemoveAfterEff(CEffector *this,bool param_1);
void __thiscall neon::phy::CEffector::SetNormalAfterEff(CEffector *this,bool param_1);
void __thiscall neon::phy::CEffector::SetRemoveSelfAfterEff(CEffector *this,bool param_1);
bool __thiscall neon::phy::CMove::IsMove(CMove *this);
CEffector * __thiscall neon::phy::CEffector::CEffector(CEffector *this);
void __thiscall neon::phy::CEffector::~CEffector(CEffector *this);
void __thiscall neon::phy::CEffector::CheckParam(CEffector *this,int *param_1);
void __thiscall neon::phy::CEffector::SetParam(CEffector *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
CObject * __thiscall neon::phy::CEffector::deleting_destructor(CEffector *this,byte param_1);
void __thiscall neon::phy::CEffector::neon::phy::CEffector::Logic(CEffector *this);
void __thiscall neon::phy::CEffector::neon::phy::CEffector::OnFinish(CEffector *this);
void __thiscall neon::phy::CEffector::StartPlay(CEffector *this);
void __thiscall neon::phy::CEffector::Create(CEffector *this,CVisual *param_1,ulong param_2,int param_3,int *param_4,int *param_5);
CEffector * __thiscall neon::phy::CEffector::CEffector(CEffector *this,CEffector *param_1);
CEffector * __thiscall neon::phy::CEffector::operator=(CEffector *this,CEffector *param_1);
void __thiscall neon::phy::CMove::StopMove(CMove *this);
void __thiscall neon::phy::CMove::SetTimeRate(CMove *this,ulong param_1);
CBasicPoint<float> * __thiscall neon::phy::CMove::GetPos(CMove *this);
CBasicPoint<float> * __thiscall neon::phy::CMove::GetSrcPos(CMove *this);
CBasicPoint<float> * __thiscall neon::phy::CMove::GetDstPos(CMove *this);
bool __thiscall neon::phy::CMove::IsChangeParentPos(CMove *this);
void __thiscall neon::phy::CMove::neon::phy::CMove::ProcessMove(CMove *this,ulong param_1);
void __thiscall neon::phy::CMove::SetMoveParent(CMove *this,CVisual *param_1);
void __thiscall neon::visual::CVisual::SetMovePosX(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetMovePosY(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetMovePos(CVisual *this,float param_1,float param_2);
CMove * __thiscall neon::phy::CMove::CMove(CMove *this);
void __thiscall neon::phy::CMove::Logic(CMove *this,ulong param_1);
void __thiscall neon::phy::CMove::neon::phy::CMove::SetParentPos(CMove *this);
void __thiscall neon::phy::CMove::SetSrcPos(CMove *this,undefined4 param_2,undefined4 param_3);
void __thiscall neon::phy::CMove::SetDstPos(CMove *this,undefined4 param_2,undefined4 param_3);
void __thiscall neon::phy::CMove::StartMove(CMove *this);
void __thiscall neon::phy::CMoveAcceleration::neon::phy::CMoveAcceleration::ProcessMove(CMoveAcceleration *this,ulong param_1);
void __thiscall neon::phy::CMoveReduction::neon::phy::CMoveReduction::ProcessMove(CMoveReduction *this,ulong param_1);
CObject * __thiscall neon::phy::CMove::deleting_destructor(CMove *this,byte param_1);
CMoveAcceleration * __thiscall neon::phy::CMoveAcceleration::CMoveAcceleration(CMoveAcceleration *this);
CObject * __thiscall neon::phy::CMoveReduction::deleting_destructor(CMoveReduction *this,byte param_1);
CMoveReduction * __thiscall neon::phy::CMoveReduction::CMoveReduction(CMoveReduction *this);
void __thiscall neon::phy::CMove::~CMove(CMove *this);
void __thiscall neon::phy::CMove::neon::phy::CMove::Logic(CMove *this);
void __thiscall neon::phy::CMove::Create(CMove *this,CVisual *param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8);
void __thiscall neon::phy::CMoveAcceleration::Create(CMoveAcceleration *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
CMove * __thiscall neon::phy::CMove::CMove(CMove *this,CMove *param_1);
CMove * __thiscall neon::phy::CMove::operator=(CMove *this,CMove *param_1);
CMoveAcceleration * __thiscall neon::phy::CMoveAcceleration::CMoveAcceleration(CMoveAcceleration *this,CMoveAcceleration *param_1);
CMoveReduction * __thiscall neon::phy::CMoveReduction::CMoveReduction(CMoveReduction *this,CMoveReduction *param_1);
CMoveAcceleration * __thiscall neon::phy::CMoveAcceleration::operator=(CMoveAcceleration *this,CMoveAcceleration *param_1);
int __cdecl FUN_10027a90(HWND param_1);
void __thiscall CManagedRes::CManagedRes(CManagedRes *this,ERes param_1);
void __thiscall CManagedRes::~CManagedRes(CManagedRes *this);
PixelFormat __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetPixelFormat(CRLESurface *this);
void __thiscall neon::render::CRLESurface::Create(CRLESurface *this,DATAHEADER *param_1,uchar *param_2,int param_3);
CRLESurface * __thiscall neon::render::CRLESurface::CRLESurface(CRLESurface *this,SurfaceDesc *param_1);
void __thiscall neon::render::CRLESurface::~CRLESurface(CRLESurface *this);
bool __thiscall neon::render::CRLESurface::DeCompress(CRLESurface *this,IDxSurface *param_1);
undefined4 * __thiscall neon::render::CRLESurface::deleting_destructor(CRLESurface *this,byte param_1);
bool __thiscall C3DDisplay::C3DDisplay::IsWindowMode(C3DDisplay *this);
IDxSurface * __thiscall C3DDisplay::C3DDisplay::CreateSurface(C3DDisplay *this,SurfaceDesc *param_1);
IDxDraw * __thiscall C3DDisplay::C3DDisplay::CreateDraw(C3DDisplay *this,IDxSurface *param_1);
long __thiscall C3DDisplay::CreateFullScreenDisplay(C3DDisplay *this,HWND__ *param_1,ulong param_2,ulong param_3,ulong param_4,bool param_5,bool param_6);
long __thiscall C3DDisplay::CreateWindowedDisplay(C3DDisplay *this,HWND__ *param_1,ulong param_2,ulong param_3,ulong param_4,bool param_5,bool param_6);
ulong __thiscall C3DDisplay::C3DDisplay::GetBPP(C3DDisplay *this);
long __thiscall C3DDisplay::TryFormat(C3DDisplay *this,_D3DFORMAT param_1,int param_2,_D3DDEVTYPE param_3,ulong param_4);
long __thiscall C3DDisplay::SubCreateDevice(C3DDisplay *this,uint *param_1,_D3DDEVTYPE param_2,ulong param_3);
long __thiscall C3DDisplay::CheckDeviceFormat(C3DDisplay *this,_D3DDEVTYPE param_1,_D3DFORMAT param_2);
void __thiscall C3DDisplay::AdjustGuraCaps(C3DDisplay *this);
void __thiscall C3DDisplay::C3DDisplay::ApplyLinearFilter(C3DDisplay *this,bool param_1);
bool __thiscall C3DDisplay::DeleteDevice(C3DDisplay *this);
int __thiscall C3DDisplay::QueryBpp(C3DDisplay *this,_D3DFORMAT param_1);
void __thiscall C3DDisplay::C3DDisplay::OnLostDevice(C3DDisplay *this);
bool __thiscall C3DDisplay::C3DDisplay::CreateVertexPool(C3DDisplay *this);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
IDxDevice * __thiscall IDxDevice::IDxDevice(IDxDevice *this);
C3DRenderStateManager * __thiscall C3DDisplay::GetRenderStateManager(C3DDisplay *this);
void __thiscall neon::frw::CApp::SetDeviceError(CApp *this,int param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
bool __thiscall C3DDisplay::C3DDisplay::Init(C3DDisplay *this,HWND__ *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5);
bool __thiscall C3DDisplay::RenderDraw(C3DDisplay *this,C3DDraw *param_1);
void __thiscall C3DDisplay::InitDisplayState(C3DDisplay *this);
void __cdecl FUN_10028930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __thiscall C3DDisplay::OnCreateDevice(C3DDisplay *this);
void __cdecl FUN_10028c60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10028c90(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 __thiscall FUN_10028cd0(void *this,char *param_1);
void __cdecl FUN_10028d20(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,int *param_6);
void __fastcall FUN_10028d60(int param_1);
undefined4 * FUN_10028db0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10028df0(void *this,undefined4 *param_1,int *param_2,int *param_3);
void __thiscall C3DDisplay::C3DDisplay::OnCreateDxDeviceLost(C3DDisplay *this,IDxDeviceLost *param_1);
void __thiscall C3DDisplay::DeleteLostDevice(C3DDisplay *this);
void __thiscall C3DDisplay::RecreateLostDevice(C3DDisplay *this);
void __thiscall FUN_10028f90(void *this,char *param_1);
void __fastcall FUN_10029040(undefined4 *param_1);
C3DDisplay * __thiscall C3DDisplay::C3DDisplay(C3DDisplay *this);
void __thiscall C3DDisplay::C3DDisplay::SetVSyncWait(C3DDisplay *this,bool param_1);
bool __thiscall C3DDisplay::C3DDisplay::GetVSyncWait(C3DDisplay *this);
ulong __thiscall C3DDisplay::C3DDisplay::GetWidth(C3DDisplay *this);
ulong __thiscall C3DDisplay::C3DDisplay::GetHeight(C3DDisplay *this);
IDirect3DDevice9 * __thiscall C3DDisplay::C3DDisplay::GetD3DDevice(C3DDisplay *this);
void __thiscall C3DDisplay::~C3DDisplay(C3DDisplay *this);
bool __thiscall C3DDisplay::C3DDisplay::PostRender(C3DDisplay *this);
bool __thiscall C3DDisplay::C3DDisplay::LostDeviceUpdate(C3DDisplay *this);
void __thiscall C3DDisplay::RenderRegistered(C3DDisplay *this);
void __thiscall C3DDisplay::C3DDisplay::RenderListClear(C3DDisplay *this);
undefined4 * FUN_10029740(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10029770(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@100298d1(void);
C3DDisplay * __thiscall C3DDisplay::deleting_destructor(C3DDisplay *this,byte param_1);
void __thiscall C3DDisplay::vfunction1(C3DDisplay *this,byte param_1);
bool __thiscall C3DDisplay::C3DDisplay::RenderScene(C3DDisplay *this);
void __thiscall FUN_10029ae0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall C3DDisplay::C3DDisplay::OnDestroyDxDeviceLost(C3DDisplay *this,IDxDeviceLost *param_1);
void __thiscall C3DDisplay::C3DDisplay::AddClipRgn(C3DDisplay *this,HWND__ *param_1);
void __thiscall C3DDisplay::C3DDisplay::RemoveClipRgn(C3DDisplay *this,HWND__ *param_1);
void __thiscall FUN_10029cf0(void *this,undefined4 *param_1);
uint __cdecl FUN_10029d70(undefined4 param_1,int *param_2);
void __thiscall C3DDisplay::Fill_D3DPP(C3DDisplay *this,bool param_1);
bool __thiscall C3DDisplay::CreateDevice(C3DDisplay *this);
long __thiscall C3DDisplay::ToggleWindowMode(C3DDisplay *this,bool param_1,bool param_2);
bool __thiscall C3DDisplay::RegisterSurface(C3DDisplay *this,C3DDraw *param_1);
bool __thiscall C3DDisplay::C3DDisplay::Draw(C3DDisplay *this,IDxDraw *param_1);
long __thiscall C3DDisplay::C3DDisplay::ChangeDisplayMode(C3DDisplay *this,bool param_1,bool param_2);
bool __thiscall C3DDisplay::C3DDisplay::Make(C3DDisplay *this,HWND__ *param_1,int param_2,int param_3,bool param_4,ulong param_5);
void __thiscall neon::render::d9::C3DDraw::vfunction2(C3DDraw *this,int *param_1);
void __thiscall neon::render::d9::C3DDraw::vfunction4(C3DDraw *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __thiscall neon::render::d9::C3DDraw::vfunction5(C3DDraw *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void __thiscall neon::render::d9::C3DDraw::vfunction3(C3DDraw *this,undefined4 param_1);
void __thiscall neon::render::d9::C3DDraw::vfunction6(C3DDraw *this,undefined4 *param_1);
void __thiscall neon::render::d9::C3DDraw::vfunction7(C3DDraw *this,undefined4 *param_1);
int __fastcall FUN_1002a7a0(int param_1);
void __fastcall FUN_1002a7c0(int param_1);
void __thiscall neon::render::d9::C3DDraw::vfunction2(C3DDraw *this);
undefined4 __cdecl FUN_1002a800(float *param_1,float *param_2);
void `vector_constructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_ptr_void_ptr *param_4);
_D3DCAPS9 * __thiscall C3DDisplay::GetD3DCaps9(C3DDisplay *this);
void __thiscall neon::render::d9::C3DDraw::vfunction1(C3DDraw *this,byte param_1);
void __thiscall neon::render::d9::C3DDraw::vfunction11(C3DDraw *this,undefined1 param_1);
undefined1 __thiscall neon::render::d9::C3DDraw::vfunction12(C3DDraw *this);
int __thiscall neon::render::d9::C3DDraw::vfunction13(C3DDraw *this);
int __thiscall neon::render::d9::C3DDraw::vfunction14(C3DDraw *this);
int __thiscall neon::render::d9::C3DDraw::vfunction15(C3DDraw *this);
int __thiscall neon::render::d9::C3DDraw::vfunction16(C3DDraw *this);
void __thiscall neon::render::d9::C3DDraw::vfunction9(C3DDraw *this,undefined4 *param_1);
void __fastcall FUN_1002a970(int param_1);
undefined1 __thiscall neon::render::d9::C3DDraw::vfunction20(C3DDraw *this);
undefined4 __cdecl FUN_1002aa60(int param_1,float *param_2);
uint __fastcall FUN_1002acf0(int param_1);
C3DDraw * __thiscall neon::render::d9::C3DDraw::C3DDraw(C3DDraw *this,int *param_1);
undefined4 * __thiscall neon::render::d9::C3DDraw::deleting_destructor(C3DDraw *this,byte param_1);
int * __thiscall neon::render::d9::C3DDraw::vfunction17(C3DDraw *this,int *param_1);
void __thiscall neon::render::d9::C3DDraw::vfunction10(C3DDraw *this,undefined4 *param_1);
void __thiscall neon::render::d9::d3d_effect::CEffectAbstract::vfunction7(CEffectAbstract *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAbstract::vfunction7(CEffectAbstract *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAdd::vfunction6(CEffectAdd *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAdd::vfunction7(CEffectAdd *this);
void __thiscall neon::render::d9::d3d_effect::CEffectSrcCopy::vfunction5(CEffectSrcCopy *this);
void __thiscall neon::render::d9::d3d_effect::CEffectSub::vfunction6(CEffectSub *this);
void __thiscall neon::render::d9::d3d_effect::CEffectSub::vfunction7(CEffectSub *this);
void __thiscall neon::render::d9::d3d_effect::CEffectGray::vfunction6(CEffectGray *this);
void __thiscall neon::render::d9::d3d_effect::CEffectGray::vfunction7(CEffectGray *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAlphaGray::vfunction7(CEffectAlphaGray *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDodge::vfunction6(CEffectDodge *this);
void __thiscall neon::render::d9::d3d_effect::CEffectScreen::vfunction6(CEffectScreen *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDodgeBurn::vfunction6(CEffectDodgeBurn *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDodge::vfunction7(CEffectDodge *this);
void __thiscall neon::render::d9::d3d_effect::CEffectLighten::vfunction6(CEffectLighten *this);
void __thiscall neon::render::d9::d3d_effect::CEffectLighten::vfunction7(CEffectLighten *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDarken::vfunction6(CEffectDarken *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDifferent::vfunction6(CEffectDifferent *this);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBAdd::vfunction6(CEffectRGBAdd *this);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBAdd::vfunction7(CEffectRGBAdd *this);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBSub::vfunction6(CEffectRGBSub *this);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBSub::vfunction7(CEffectRGBSub *this);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBMulti::vfunction5(CEffectRGBMulti *this,int *param_1);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBMulti::vfunction6(CEffectRGBMulti *this);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBMulti::vfunction7(CEffectRGBMulti *this);
void __thiscall neon::render::d9::d3d_effect::CEffectMultiply::vfunction6(CEffectMultiply *this);
void __thiscall neon::render::d9::d3d_effect::CEffectMultiply::vfunction7(CEffectMultiply *this);
void __thiscall C3DDisplay::C3DDisplay::Release(C3DDisplay *this);
void __thiscall neon::render::d9::d3d_effect::CEffectSrcCopy::vfunction6(CEffectSrcCopy *this);
uint __thiscall neon::render::d9::d3d_effect::CEffectAlpha::vfunction8(CEffectAlpha *this);
uint __thiscall neon::render::d9::d3d_effect::CEffectGray::vfunction8(CEffectGray *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAlphaGray::vfunction6(CEffectAlphaGray *this,int *param_1);
undefined4 __thiscall neon::render::d9::d3d_effect::CEffectRGBAdd::vfunction8(CEffectRGBAdd *this);
undefined4 __thiscall neon::render::d9::d3d_effect::CEffectAbstract::vfunction8(CEffectAbstract *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAlpha::vfunction2(CEffectAlpha *this,undefined1 param_1);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBAdd::vfunction2(CEffectRGBAdd *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBAdd::vfunction3(CEffectRGBAdd *this);
undefined4 * __cdecl FUN_1002bcd0(undefined4 param_1);
void __thiscall neon::render::d9::d3d_effect::CEffectSrcCopy::vfunction3(CEffectSrcCopy *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAlpha::vfunction3(CEffectAlpha *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAdd::vfunction3(CEffectAdd *this);
void __thiscall neon::render::d9::d3d_effect::CEffectSub::vfunction3(CEffectSub *this);
void __thiscall neon::render::d9::d3d_effect::CEffectGray::vfunction3(CEffectGray *this);
void __thiscall neon::render::d9::d3d_effect::CEffectAlphaGray::vfunction3(CEffectAlphaGray *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDodge::vfunction3(CEffectDodge *this);
undefined4 * __thiscall neon::render::d9::d3d_effect::CEffectMultiply::deleting_destructor(CEffectMultiply *this,byte param_1);
void __thiscall neon::render::d9::d3d_effect::CEffectScreen::vfunction3(CEffectScreen *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDodgeBurn::vfunction3(CEffectDodgeBurn *this);
void __thiscall neon::render::d9::d3d_effect::CEffectLighten::vfunction3(CEffectLighten *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDarken::vfunction3(CEffectDarken *this);
void __thiscall neon::render::d9::d3d_effect::CEffectDifferent::vfunction3(CEffectDifferent *this);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBSub::vfunction3(CEffectRGBSub *this);
void __thiscall neon::render::d9::d3d_effect::CEffectRGBMulti::vfunction3(CEffectRGBMulti *this);
void __thiscall neon::render::d9::d3d_effect::CEffectMultiply::vfunction3(CEffectMultiply *this);
void __fastcall FUN_1002c1e0(int param_1);
void __thiscall FUN_1002c1f0(void *this,int *param_1);
void __thiscall FUN_1002c270(void *this,int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_1002c310(int param_1,ushort *param_2,ushort *param_3);
undefined4 __thiscall neon::render::d9::C3DSurface::vfunction6(C3DSurface *this);
void __thiscall neon::render::d9::C3DSurface::vfunction10(C3DSurface *this);
undefined4 __thiscall neon::render::d9::C3DSurface::vfunction11(C3DSurface *this);
void __cdecl FUN_1002c400(int *param_1,undefined4 param_2,int param_3,int param_4);
void __cdecl FUN_1002c450(int *param_1,undefined2 param_2,int param_3,int param_4);
_D3DFORMAT __thiscall C3DDisplay::getBackBufferFormat(C3DDisplay *this);
_D3DFORMAT __thiscall C3DDisplay::getRecommendedTextureFormat(C3DDisplay *this);
bool __thiscall C3DDisplay::Is32bppTextureAvailable(C3DDisplay *this);
bool __thiscall C3DDisplay::Is16A4R4G4B4TextureAvailable(C3DDisplay *this);
undefined4 __thiscall FUN_1002c4e0(void *this,int param_1);
void __cdecl FUN_1002c550(int *param_1,int *param_2,int param_3,int param_4);
void __thiscall neon::render::d9::C3DSurface::vfunction13(C3DSurface *this);
void __cdecl FUN_1002c640(int *param_1,int param_2,int param_3,uint param_4,uint param_5,char param_6);
void __cdecl FUN_1002c6b0(int *param_1,int param_2,int param_3,ushort param_4,ushort param_5,char param_6);
void __cdecl FUN_1002c720(int *param_1,int param_2,int param_3,ushort param_4,ushort param_5,char param_6);
void __cdecl FUN_1002c7a0(int *param_1,int *param_2,int param_3,int param_4);
void __cdecl FUN_1002c820(int *param_1,int *param_2,int param_3,int param_4);
int __thiscall neon::render::d9::C3DSurface::vfunction4(C3DSurface *this,undefined4 param_1);
int __thiscall neon::render::d9::C3DSurface::vfunction7(C3DSurface *this);
bool __fastcall FUN_1002c8f0(int *param_1);
undefined4 __thiscall neon::render::d9::C3DSurface::vfunction17(C3DSurface *this,uint param_1,uint param_2,char param_3);
void __thiscall neon::render::d9::C3DSurface::vfunction18(C3DSurface *this);
void __thiscall FUN_1002ccf0(void *this,undefined4 param_1,int *param_2);
void __thiscall neon::render::d9::C3DSurface::vfunction2(C3DSurface *this);
void __cdecl FUN_1002ce80(int *param_1,int *param_2,int param_3,int param_4);
undefined4 __thiscall neon::render::d9::C3DSurface::vfunction3(C3DSurface *this,uint param_1);
void __thiscall neon::render::d9::C3DSurface::vfunction5(C3DSurface *this);
void __thiscall neon::render::d9::C3DSurface::vfunction19(C3DSurface *this,int *param_1);
undefined4 __thiscall neon::render::d9::C3DSurface::vfunction12(C3DSurface *this,undefined4 param_1,char param_2);
void __thiscall neon::render::d9::C3DSurface::vfunction14(C3DSurface *this,undefined1 param_1);
void __thiscall neon::render::d9::C3DSurface::vfunction14(C3DSurface *this,undefined1 param_1);
void __fastcall FUN_1002d530(undefined4 *param_1);
C3DSurface * __thiscall neon::render::d9::C3DSurface::C3DSurface(C3DSurface *this);
void __thiscall neon::render::d9::C3DSurface::vfunction1(C3DSurface *this,byte param_1);
undefined2 __thiscall neon::render::d9::C3DSurface::vfunction8(C3DSurface *this);
undefined2 __thiscall neon::render::d9::C3DSurface::vfunction9(C3DSurface *this);
undefined4 __thiscall neon::render::d9::C3DSurface::vfunction16(C3DSurface *this);
int ** __thiscall FUN_1002d640(void *this,undefined4 *param_1);
void __thiscall neon::render::d9::C3DSurface::~C3DSurface(C3DSurface *this);
int __thiscall FUN_1002d810(void *this,float *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
uint __thiscall neon::render::d9::C3DSurface::vfunction3(C3DSurface *this);
undefined4 * __thiscall neon::render::d9::C3DSurface::deleting_destructor(C3DSurface *this,byte param_1);
bool __cdecl CreateDxDevice9(void);
IDxDevice * __cdecl DxDevice(void);
void __cdecl ReleaseDxDevice(void);
void __cdecl CalcVRAM(ulong *param_1,ulong *param_2);
IDxDraw * __cdecl neon::Clone(IDxDraw *param_1);
IInput * __cdecl Input(void);
void __cdecl ReleaseInput(void);
void __thiscall neon::dev::CInputDI8::vfunction4(CInputDI8 *this);
byte __thiscall neon::dev::CInputDI8::vfunction5(CInputDI8 *this,byte param_1);
void __thiscall neon::dev::CInputDI8::vfunction6(CInputDI8 *this);
void __fastcall FUN_1002df40(int param_1);
undefined4 __fastcall FUN_1002dfc0(int param_1);
void __thiscall neon::dev::CInputDI8::vfunction7(CInputDI8 *this);
void __thiscall neon::dev::CInputDI8::vfunction1(CInputDI8 *this);
void __thiscall neon::dev::CInputDI8::vfunction2(CInputDI8 *this);
void __thiscall neon::dev::CInputDI8::vfunction3(CInputDI8 *this,undefined4 param_1,undefined4 param_2);
int __fastcall FUN_1002e0b0(int param_1);
undefined4 * __thiscall neon::dev::CInputDI8::deleting_destructor(CInputDI8 *this,byte param_1);
bool __cdecl CreateInputD8(void);
char * FUN_1002e200(void);
void __thiscall neon::dev::CSound::~CSound(CSound *this);
void __thiscall neon::dev::CSound::~CSound(CSound *this);
void __thiscall neon::dev::CSound::~CSound(CSound *this,CSound *param_1);
undefined4 * __thiscall neon::dev::CSound::deleting_destructor(CSound *this,byte param_1);
void __cdecl neon::dev::CSound::Destroy(void);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Load(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::SetCrossfadeTime(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::LoadBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,bool param_3,ulong param_4,int param_5,bool param_6,bool param_7);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::SetCrossfadeTime(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::GetFilenameFromFullPathName(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
undefined1 * __fastcall FUN_1002e580(undefined1 *param_1);
int __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::LoadSound(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,int param_3,int param_4,int param_5,bool param_6,int param_7,int param_8,int param_9,bool param_10,bool param_11,bool param_12,bool param_13,void *param_14,ulong param_15,bool param_16);
void __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::Close(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_1002e6d0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,undefined4 *param_2);
void __cdecl FUN_1002e6f0(int param_1);
void __cdecl FUN_1002e710(int *param_1);
void __cdecl FUN_1002e730(int *param_1);
void __cdecl FUN_1002e750(int param_1);
undefined4 __thiscall FUN_1002e770(void *this,int *param_1);
void __thiscall FUN_1002e7a0(void *this,int param_1);
void __thiscall FUN_1002e7f0(void *this,int *param_1);
void __fastcall FUN_1002e850(int *param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Init(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,bool param_1,HWND__ *param_2,int param_3,int param_4,int param_5,ulong param_6);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::_SetSampleMinMax(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,FSOUND_SAMPLE *param_1,float param_2,float param_3);
float __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::GetBGMVolume(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Stop(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
float __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::ClipFreq(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,float param_1,float param_2,float param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::SetAutoUnLoadBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,bool param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Init(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,bool param_1,HWND__ *param_2,int param_3,int param_4,int param_5,ulong param_6);
float __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::GetBGMVolume(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::_unloadFMODSampleOnly(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,SampleEntity *param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::ClipFreq(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1,int param_2,int param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::SetAutoUnLoadBGM(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,bool param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_1002edf0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall FUN_1002ee10(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_1002ee70(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_1002eed0(int *param_1);
void __fastcall FUN_1002ef60(int *param_1);
void __fastcall FUN_1002eff0(LPCRITICAL_SECTION param_1);
void __fastcall FUN_1002f000(undefined4 *param_1);
undefined4 * __thiscall FUN_1002f010(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
int __fastcall FUN_1002f060(int *param_1);
void FUN_1002f0a0(void);
void FUN_1002f0e0(void);
undefined4 *FUN_1002f120(undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,undefined1 param_5);
void Catch_All@1002f1b2(void);
void FUN_1002f1d0(void *param_1);
void FUN_1002f210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::_Load(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,SampleEntity *param_1);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::_Load(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,SampleEntity *param_1);
undefined4 * __thiscall FUN_1002f590(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@1002f62d(void);
void __fastcall FUN_1002f650(int param_1);
void __thiscall FUN_1002f660(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
undefined4 * __cdecl FUN_1002f850(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4);
void __thiscall FUN_1002f8e0(void *this,int param_1);
void __thiscall FUN_1002f960(void *this,undefined4 param_1,int param_2,int *param_3);
undefined4 * __thiscall FUN_1002fc20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::FadeBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1,double param_2);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::UnLoad(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::UnLoad(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::DestroyChannel(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::FadeBGM(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1,double param_2);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::UnLoad(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::UnLoad(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::DestroyChannel(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall FUN_100304b0(void *this,int *param_1,uint *param_2);
void __thiscall FUN_10030540(void *this,int *param_1,int *param_2);
void __thiscall FUN_100305d0(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_100306c0(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void * FUN_100307a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void Catch_All@1003081d(void);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Set3DChannelAttr(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1,VECTOR *param_2,VECTOR *param_3);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::CheckSample(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
SampleEntity * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::GetSample(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
ChannelEntity * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::GetChannel(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::_unloadFMODSampleOnly(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::UpdateVolume(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Adjust3DChannel(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1,bool param_2);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::UpdateFreq(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Set3DChannelAttr(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1,VECTOR *param_2,VECTOR *param_3);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::CheckSample(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
SampleEntity * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::GetSample(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
ChannelEntity * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::GetChannel(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::_unloadFMODSampleOnly(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::UpdateVolume(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Adjust3DChannel(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1,bool param_2);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::UpdateFreq(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1);
void __thiscall FUN_10031620(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * __thiscall FUN_10031810(void *this,undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::StopChannels(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,SoundType param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::StopChannels(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,SoundType param_1);
void __fastcall FUN_10031b90(int *param_1);
void __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::DestroySoundData(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::DestroySoundData(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __fastcall FUN_10031d50(int *param_1);
long __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::FadeBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,double param_3);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Play3D(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,VECTOR *param_2,VECTOR *param_3,int param_4,int *param_5);
long __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::StopBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::StopBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::FSoundOnEndOfStream(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,_func_char_FSOUND_STREAM_ptr_void_ptr_int_void_ptr *param_2,void *param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::SetEFXVolume(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,float param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::SetBGMVolume(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,float param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::SetVOXVolume(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,float param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Stop(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::StopEFX(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::StopVOX(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
long __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::FadeBGM(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,double param_3);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Play3D(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,VECTOR *param_2,VECTOR *param_3,int param_4,int *param_5);
long __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::StopBGM(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::StopBGM(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::FSoundOnEndOfStream(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,_func_char_FSOUND_STREAM_ptr_void_ptr_int_void_ptr *param_2,void *param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::SetEFXVolume(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,float param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::SetBGMVolume(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,float param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::SetVOXVolume(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,float param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Stop(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::StopEFX(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::StopVOX(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall FUN_10032ad0(void *this,int *param_1,uint *param_2);
undefined4 * __thiscall FUN_10032bc0(void *this,int *param_1);
undefined4 * __fastcall FUN_10032c70(undefined4 *param_1);
undefined4 * __fastcall FUN_10032d00(undefined4 *param_1);
void __fastcall thunk_FUN_10031b90(int *param_1);
undefined4 * __thiscall FUN_10032da0(void *this,int param_1);
void Catch_All@10032e38(void);
undefined4 * __fastcall FUN_10032e50(undefined4 *param_1);
void __thiscall FUN_10032ee0(void *this,undefined4 param_1,int param_2,int *param_3);
void FUN_100331b0(void *param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Load(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::TryToInvokeCallback(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,void *param_1);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::SetEndCallback(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int *param_2,undefined4 param_3);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Play(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,int param_4,bool param_5);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::PlayBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,bool param_3,bool param_4);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Work(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Load(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::TryToInvokeCallback(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,void *param_1);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::SetEndCallback(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int *param_2,undefined4 param_3);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Play(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,int param_4,bool param_5);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::PlayBGM(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,bool param_3,bool param_4);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Work(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1);
int __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::LoadSound(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,SoundType param_3,int param_4,int param_5,int param_6,bool param_7,int param_8,int param_9,int param_10,bool param_11,bool param_12,bool param_13,void *param_14,ulong param_15,bool param_16);
int __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::LoadSound(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,SoundType param_3,int param_4,int param_5,int param_6,bool param_7,int param_8,int param_9,int param_10,bool param_11,bool param_12,bool param_13,void *param_14,ulong param_15,bool param_16);
undefined4 * __thiscall FUN_10035290(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@1003532d(void);
void __thiscall FUN_10035350(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall FUN_10035430(void *this,int param_1);
void __fastcall FUN_100354b0(int *param_1);
undefined4 * __thiscall FUN_100354f0(void *this,int param_1);
void Catch_All@10035588(void);
void __fastcall FUN_100355a0(int *param_1);
void __fastcall FUN_10035620(undefined4 *param_1);
CMixer<neon::dev::CSound,neon::util::CEmptyLock> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::CMixer<neon::dev::CSound,neon::util::CEmptyLock>(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,CMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> *param_1);
CMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::operator=(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,CMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> *param_1);
CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> * __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::operator=(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> *param_1);
CMixer<neon::dev::CSound,neon::util::CCriticalSection> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::CMixer<neon::dev::CSound,neon::util::CCriticalSection>(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall neon::dev::CSound::CSound(CSound *this);
CMixer<neon::dev::CSound,neon::util::CEmptyLock> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::CMixer<neon::dev::CSound,neon::util::CEmptyLock>(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall neon::dev::CSound::CSound(CSound *this);
CMixer<neon::dev::CSound,neon::util::CCriticalSection> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::CMixer<neon::dev::CSound,neon::util::CCriticalSection>(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,CMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> *param_1);
CMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::operator=(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,CMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> *param_1);
CMixer<neon::dev::CSound,neon::util::CCriticalSection> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::deleting_destructor(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,byte param_1);
CMixer<neon::dev::CSound,neon::util::CEmptyLock> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::deleting_destructor(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,byte param_1);
CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> * __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> * __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> *param_1);
CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> * __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::operator=(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> *param_1);
CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> * __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> * __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> *param_1);
CSound * __cdecl neon::dev::CSound::Instance(bool param_1);
void __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::~CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::~CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> * __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::deleting_destructor(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,byte param_1);
CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> * __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::deleting_destructor(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,byte param_1);
CSound * __cdecl neon::dev::SSound::Instance(void);
CSound * __cdecl neon::dev::Sound(bool param_1);
CDxAvtrPartPool * __thiscall DXAvatar::CDxAvtrPartPool::deleting_destructor(CDxAvtrPartPool *this,byte param_1);
bool __thiscall neon::frw::CAppManager::GetCreateResult(CAppManager *this);
CAppManager * __thiscall neon::frw::CAppManager::deleting_destructor(CAppManager *this,byte param_1);
bool __thiscall neon::frw::CApp::DisplayCheck(CApp *this,int param_1);
void __thiscall neon::frw::CApp::SetDisplay24Bit(CApp *this,bool param_1);
void __thiscall neon::frw::CApp::RunTime(CApp *this);
void __thiscall neon::frw::CApp::Run(CApp *this);
void __thiscall neon::frw::CApp::Suspend(CApp *this);
void __thiscall neon::frw::CApp::Resume(CApp *this);
void __thiscall neon::frw::CApp::Quit(CApp *this);
void __thiscall neon::frw::CApp::GetFPS(CApp *this);
void __thiscall neon::frw::CApp::~CApp(CApp *this);
void __cdecl neon::frw::CApp::Destroy(void);
CApp * __thiscall neon::frw::CApp::deleting_destructor(CApp *this,byte param_1);
void __thiscall neon::frw::CAppManager::SetTickFunc(CAppManager *this,Functor<void,Loki::NullType,Loki::ClassLevelLockable> *param_1);
CAppManager * __thiscall neon::frw::CAppManager::CAppManager(CAppManager *this,CAppManager *param_1);
CAppManager * __thiscall neon::frw::CAppManager::operator=(CAppManager *this,CAppManager *param_1);
long __thiscall neon::frw::CApp::DefaultProc(CApp *this,HWND__ *param_1,uint param_2,uint param_3,long param_4,bool *param_5);
bool __thiscall neon::frw::CApp::Init(CApp *this,HINSTANCE__ *param_1,HWND__ *param_2,SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>*param_3,CBasicPoint<long> *param_4,bool param_5,bool param_6,bool param_7,bool param_8,int param_9);
void __cdecl neon::frw::DestroyNeon(void);
void * __cdecl FUN_100373d0(void *param_1,int param_2,void *param_3);
CDxAvtrPart * __thiscall DXAvatar::CDxAvtrPart::CDxAvtrPart(CDxAvtrPart *this);
CDxAvtrPart * __thiscall DXAvatar::CDxAvtrPart::CDxAvtrPart(CDxAvtrPart *this,CDxAvtrPart *param_1);
CDxAvtrPart * __thiscall DXAvatar::CDxAvtrPart::operator=(CDxAvtrPart *this,CDxAvtrPart *param_1);
undefined4 * __thiscall FUN_100374f0(void *this,int param_1);
void Catch_All@10037588(void);
CDxAvtrPartPool * __thiscall DXAvatar::CDxAvtrPartPool::CDxAvtrPartPool(CDxAvtrPartPool *this,CDxAvtrPartPool *param_1);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>::vfunction2(MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>::vfunction1(MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>*this,byte param_1);
undefined4 * __thiscall Loki::Internal::FunctorImplBase<long,Loki::ClassLevelLockable>::vfunction1(FunctorImplBase<long,Loki::ClassLevelLockable> *this,byte param_1);
void __thiscall Loki::MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>::MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>_Constructor_or_Destructor(MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>*this,undefined4 *param_1,undefined4 param_2);
CApp * __thiscall neon::frw::CApp::CApp(CApp *this);
CApp * __cdecl neon::frw::CApp::Instance(void);
CApp * __cdecl neon::frw::App(void);
long neon::frw::CApp::MsgProc(HWND__ *param_1,uint param_2,uint param_3,long param_4);
int __cdecl neon::frw::_TranslateMsgHook(tagMSG *param_1);
void __cdecl neon::frw::CreateNeon(bool param_1);
float10 FUN_10037a40(int param_1);
void __thiscall neon::frw::CFileManager::ConvertNPackPathToNormalPath(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
int __thiscall neon::frw::CFileManager::SplitFileName(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void __thiscall neon::frw::CFileManager::ConvertSlashToBackSlash(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_10038090(void *this,int param_1);
void __fastcall FUN_100380e0(int *param_1);
void __cdecl neon::frw::CFileManager::Destroy(void);
void * __thiscall neon::frw::CFileManager::JustOpen(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,uint *param_2);
undefined4 * __thiscall Gdiplus::Image::vfunction1(Image *this,byte param_1);
undefined4 * __thiscall Gdiplus::Image::vfunction2(Image *this);
void * __thiscall neon::frw::CFileManager::ExtractFromNPK(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_3);
void __thiscall neon::frw::CFileManager::Load2(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,void **param_2,uint *param_3);
void __thiscall neon::frw::CFileManager::DestroyPackage(CFileManager *this);
long __thiscall neon::frw::CFileManager::LoadFromStream(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Bitmap **param_2,void **param_3);
CFileManager * __thiscall neon::frw::CFileManager::CFileManager(CFileManager *this);
void __thiscall neon::frw::CFileManager::~CFileManager(CFileManager *this);
CFileManager * __cdecl neon::frw::CFileManager::Instance(void);
CFileManager * __thiscall neon::frw::CFileManager::deleting_destructor(CFileManager *this,byte param_1);
CFileManager * __cdecl neon::frw::FileManager(void);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl FUN_10038a90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10038ad0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10038b30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_10038b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
bool __thiscall FUN_10038bd0(void *this,void *param_1,size_t param_2);
undefined4 * __cdecl FUN_10038c30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __thiscall FUN_10038c90(void *this,int *param_1,int param_2);
void __cdecl FUN_10038ce0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
void * __cdecl FUN_10038d00(void *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_10038d30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10038d80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10038db0(void *param_1,int param_2,undefined4 *param_3);
void Catch_All@10038e19(void);
void __cdecl FUN_10038e50(undefined4 *param_1,int param_2,undefined4 *param_3);
void Catch_All@10038eeb(void);
int FUN_10038f20(void *param_1,int param_2,void *param_3);
void __fastcall FUN_10038f50(int param_1);
void * FUN_10038fa0(void *param_1,int param_2,undefined4 *param_3);
void __fastcall FUN_10038fe0(int param_1);
undefined4 * FUN_10039030(undefined4 *param_1,int param_2,undefined4 *param_3);
int * __thiscall FUN_10039070(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,void *param_5);
undefined1 * FUN_10039100(undefined1 *param_1,int param_2,undefined1 *param_3);
void FUN_10039130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10039160(undefined4 *param_1);
void __thiscall FUN_100391c0(void *this,char *param_1);
void Catch_All@100392c3(void);
void __fastcall FUN_100392e0(undefined4 *param_1);
void __thiscall FUN_10039340(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@100394ba(void);
void Catch_All@1003957e(void);
void __thiscall FUN_10039620(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@100397f0(void);
void Catch_All@100398e6(void);
void __thiscall FUN_10039990(void *this,undefined4 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
void __thiscall h2p::CLoader::~CLoader(CLoader *this);
undefined4 __fastcall FUN_10039ba0(void *param_1);
void __thiscall FUN_10039bf0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_10039cb0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_10039d80(void *this,uint param_1,undefined1 param_2);
undefined4 * __thiscall h2p::CLoader::deleting_destructor(CLoader *this,byte param_1);
void __thiscall FUN_10039e50(void *this,undefined4 *param_1);
void __thiscall FUN_10039ed0(void *this,undefined4 *param_1);
undefined4 __fastcall FUN_10039f70(void *param_1);
void __fastcall FUN_1003a070(void *param_1);
int __thiscall FUN_1003a1b0(void *this,uint param_1,void *param_2);
undefined4 __thiscall FUN_1003a270(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 __thiscall FUN_1003a310(void *this,undefined4 *param_1);
void __fastcall FUN_1003a3c0(undefined4 *param_1);
void __thiscall FUN_1003a3d0(void *this,undefined4 *param_1);
IDxSurface * __cdecl h2p::CreateSurface(SurfaceDesc *param_1);
void __thiscall h2p::CFile::ReleaseSurface(CFile *this,IDxSurface *param_1);
void __fastcall FUN_1003a4c0(int *param_1);
int * __thiscall FUN_1003a550(void *this,int param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_1003a5b0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
IDxSurface * __thiscall h2p::CFile::GetSurface(CFile *this,ulong param_1);
void __cdecl FUN_1003a680(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_1003a700(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void FUN_1003a770(void);
void __cdecl FUN_1003a790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1003a7e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void __cdecl FUN_1003a810(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@1003a8c6(void);
void __thiscall FUN_1003a900(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>*param_1);
CFile * __thiscall h2p::CManager::GetFile(CManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_1003aa40(int param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> *FUN_1003aa90(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
undefined4 * __thiscall FUN_1003aad0(void *this,undefined4 *param_1,int *param_2,int param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void FUN_1003ab60(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
SubImage * __thiscall h2p::CFile::GetSubImage(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
SurfaceDesc * __thiscall h2p::CFile::GetSurfDesc(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
IDxSurface * __thiscall h2p::CFile::GetSurface(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
long __thiscall h2p::CManager::Unload(CManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall h2p::CManager::Clear(CManager *this);
undefined4 * __thiscall FUN_1003af80(void *this,int param_1);
void Catch_All@1003b052(void);
void __fastcall FUN_1003b070(undefined4 *param_1);
undefined4 * __thiscall FUN_1003b0d0(void *this,int param_1);
void Catch_All@1003b1b6(void);
undefined4 * __thiscall FUN_1003b1d0(void *this,int param_1);
void Catch_All@1003b2c9(void);
void __thiscall FUN_1003b2e0(void *this,char *param_1);
void Catch_All@1003b3fa(void);
undefined4 * __fastcall FUN_1003b410(undefined4 *param_1);
void __thiscall FUN_1003b480(void *this,undefined4 param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,uint param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void Catch_All@1003b67d(void);
void Catch_All@1003b798(void);
void __thiscall FUN_1003b860(void *this,undefined4 param_1,int param_2,void *param_3,undefined4 param_4,int param_5,undefined4 param_6,int param_7,uint param_8);
CLoader * __thiscall h2p::CLoader::CLoader(CLoader *this);
void __cdecl h2p::CManager::Flush(void);
void __thiscall h2p::CManager::~CManager(CManager *this);
void __thiscall FUN_1003ba00(void *this,int *param_1,int param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void __thiscall FUN_1003bac0(void *this,int *param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void __thiscall FUN_1003bb80(void *this,uint param_1,undefined4 *param_2);
void __fastcall FUN_1003bc00(int param_1);
void __thiscall FUN_1003bc40(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
CManager * __thiscall h2p::CManager::CManager(CManager *this);
void * __thiscall FUN_1003bd60(void *this,int param_1);
void __thiscall FUN_1003bde0(void *this,undefined4 *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,int *param_3,int *param_4);
void __fastcall FUN_1003c120(int param_1);
CManager * __cdecl h2p::CManager::Get(void);
int __thiscall FUN_1003c230(void *this,undefined1 *param_1,undefined4 param_2);
CFile * __thiscall h2p::CFile::CFile(CFile *this,CFile *param_1);
long __thiscall h2p::CFile::AddToAliasIndexMap(CFile *this,SubImage *param_1,ulong param_2);
long __thiscall h2p::CFile::LoadSubRoutine(CFile *this,CLoader *param_1,ulong param_2);
int __thiscall h2p::CFile::Clear(CFile *this);
CFile * __thiscall h2p::CFile::CFile(CFile *this);
CFile * __thiscall h2p::CFile::CFile(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall h2p::CFile::~CFile(CFile *this);
long __thiscall h2p::CFile::Load(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong param_2);
long __thiscall h2p::CFile::LoadFromFileInMemory(CFile *this,uchar **param_1,ulong param_2);
CFile * __thiscall h2p::CManager::Load(CManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong param_2);
CFile * __thiscall h2p::CManager::LoadFromFileInMemory(CManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,uchar **param_2,ulong param_3);
CFile * __thiscall h2p::CFile::deleting_destructor(CFile *this,byte param_1);
bool __thiscall neon::frw::CApp::GetSuspend(CApp *this);
bool __thiscall neon::frw::CApp::IsRenderStop(CApp *this);
void __thiscall neon::frw::CAppManager::~CAppManager(CAppManager *this);
void __thiscall neon::frw::CAppManager::DefaultTick(CAppManager *this);
bool __thiscall neon::frw::CAppManager::appMan_Init(CAppManager *this,CObject *param_1,CBasicPoint<long> *param_2,bool param_3,bool param_4,bool param_5,int param_6);
void __thiscall neon::frw::CAppManager::Tick(CAppManager *this);
void __thiscall Loki::MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>::vfunction4(MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>::vfunction2(MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>::vfunction1(MemFunHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,neon::frw::CAppManager*,void_(__thiscall_neon::frw::CAppManager::*)(void)>*this,byte param_1);
CAppManager * __thiscall neon::frw::CAppManager::CAppManager(CAppManager *this,CObject *param_1,CBasicPoint<long> *param_2,bool param_3,bool param_4,bool param_5,int param_6);
void __thiscall neon::frw::CObject::SetName(CObject *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,uint param_2);
void __thiscall IDxDevice::IDxDevice::~IDxDevice(IDxDevice *this);
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::IsIn(CObject *this,int param_1,int param_2);
CObject * __cdecl neon::Clone(CObject *param_1);
void __thiscall neon::frw::CComponent::~CComponent(CComponent *this);
list<eco::CCompositeHolder<neon::frw::CComponent>*,std::allocator<eco::CCompositeHolder<neon::frw::CComponent>*>_>* __thiscall neon::frw::CObject::neon::frw::CObject::GetChildList(CObject *this);
int * __thiscall FUN_1003d480(void *this,int *param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnActivate(CObject *this,bool param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnSelect(CObject *this,bool param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnFocus(CObject *this,bool param_1,bool param_2);
undefined4 * __thiscall FUN_1003d530(void *this,undefined4 *param_1,int *param_2,int param_3,undefined4 *param_4);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnAttached(CObject *this);
void __thiscall neon::frw::CObject::DeleteAllChildren(CObject *this,bool param_1);
void __cdecl FUN_1003d670(undefined4 *param_1,undefined *param_2,undefined4 param_3);
CCompositeHolder<neon::frw::CComponent> * __thiscall eco::CCompositeHolder<neon::frw::CComponent>::CCompositeHolder<neon::frw::CComponent>(CCompositeHolder<neon::frw::CComponent> *this);
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::IsChildIn(CObject *this,int param_1,int param_2);
void __cdecl FUN_1003d8d0(int *param_1);
undefined4 __thiscall FUN_1003d940(void *this,undefined4 param_1);
void __thiscall neon::frw::CObject::ForEachLogic(CObject *this);
void __thiscall neon::frw::CObject::ForEachOutput(CObject *this);
void __thiscall FUN_1003d9e0(void *this,int *param_1);
void __thiscall neon::frw::CObject::AddChild(CObject *this,CObject *param_1);
void __thiscall neon::frw::CObject::SubChild(CObject *this,CObject *param_1);
CObject * __thiscall neon::frw::CObject::CObject(CObject *this);
void __thiscall neon::frw::CObject::~CObject(CObject *this);
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::Clone(CObject *this);
void __thiscall neon::frw::CObject::neon::frw::CObject::Copy(CObject *this,CObject *param_1);
void __fastcall FUN_1003df20(undefined4 **param_1);
void __thiscall neon::frw::CObject::SortByZOrder(CObject *this);
void __thiscall neon::frw::CObject::SetZOrder(CObject *this,int param_1);
void FUN_1003e280(void);
void __cdecl neon::frw::CResource::Destroy(void);
void __thiscall neon::frw::CResource::ReleaseFont(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ushort param_2,bool param_3);
void __thiscall neon::frw::CResource::ReleaseFont(CResource *this,HFONT__ *param_1);
bool __thiscall neon::frw::CResource::IsSurfaceExist(CResource *this,SurfaceDesc *param_1);
void __thiscall neon::frw::CResource::ReleaseSurface(CResource *this,SurfaceDesc *param_1,bool param_2);
void __thiscall neon::frw::CResource::ReleaseSurface(CResource *this,IDxSurface *param_1,bool param_2);
void __cdecl FUN_1003e400(int param_1);
void __thiscall FUN_1003e420(void *this,int *param_1);
void __cdecl FUN_1003e480(int *param_1);
void __thiscall FUN_1003e4a0(void *this,int *param_1);
void __cdecl FUN_1003e500(int param_1);
void __cdecl FUN_1003e520(int *param_1);
void __fastcall FUN_1003e540(int *param_1);
void __fastcall FUN_1003e5b0(int *param_1);
void __cdecl FUN_1003e620(int param_1);
void __cdecl FUN_1003e640(int *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
int * __thiscall FUN_1003e6c0(void *this,int param_1);
undefined1 * __cdecl FUN_1003e720(char *param_1,char *param_2,undefined1 *param_3,undefined *param_4);
bool __thiscall neon::frw::CResource::IsBmpExist(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,ulong param_4,ESurfaceMemType param_5);
HFONT__ * __thiscall neon::frw::CResource::GetFont(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ushort param_2,bool param_3,bool param_4);
void __thiscall FUN_1003e8e0(void *this,int param_1);
void __thiscall FUN_1003e930(void *this,int param_1);
void __thiscall FUN_1003e980(void *this,int param_1);
void __thiscall FUN_1003e9d0(void *this,int *param_1);
void __fastcall FUN_1003ea30(int *param_1);
void FUN_1003eaa0(void);
void FUN_1003eac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void FUN_1003eb00(void);
void FUN_1003eb40(void);
void FUN_1003eb80(void *param_1);
void FUN_1003ebc0(void);
undefined4 * __thiscall FUN_1003ec00(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@1003ec9d(void);
void __thiscall FUN_1003ecc0(void *this,undefined4 param_1,int param_2,int *param_3);
void FUN_1003ef80(void *param_1);
void FUN_1003efc0(void *param_1);
undefined4 * __cdecl FUN_1003f000(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4,undefined1 *param_5,undefined *param_6);
void __thiscall FUN_1003f070(void *this,int param_1);
void __thiscall FUN_1003f0f0(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __fastcall FUN_1003f1d0(int *param_1);
void __cdecl FUN_1003f210(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
IDxSurface * __thiscall neon::frw::CResource::GetSurface(CResource *this,SurfaceDesc *param_1,int param_2);
void __thiscall neon::frw::CResource::ReleaseSurface(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ESurfaceMemType param_2,bool param_3);
IDxSurface * __thiscall neon::frw::CResource::Clone(CResource *this,IDxSurface *param_1);
void __thiscall FUN_1003f4b0(void *this,undefined4 param_1,int param_2,int *param_3);
void __thiscall FUN_1003f780(void *this,undefined4 param_1,int param_2,int *param_3);
void __thiscall FUN_1003fa50(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall FUN_1003fb30(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
IDxSurface * __thiscall neon::frw::CResource::GetBmp(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,ulong param_4,ESurfaceMemType param_5,bool param_6,bool param_7,ulong param_8);
void __fastcall FUN_1003fd10(int *param_1);
undefined4 * __thiscall FUN_1003fd90(void *this,int param_1);
void Catch_All@1003fe28(void);
void __fastcall thunk_FUN_1003fd10(int *param_1);
void __fastcall FUN_1003fed0(int *param_1);
undefined4 * __fastcall FUN_1003ff50(undefined4 *param_1);
undefined4 * __fastcall FUN_1003ffe0(undefined4 *param_1);
undefined4 * __fastcall FUN_10040070(undefined4 *param_1);
void __fastcall FUN_10040100(undefined4 *param_1);
void __fastcall FUN_10040110(undefined4 *param_1);
CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>* __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this);
bool __thiscall FUN_100401a0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 * __thiscall FUN_10040230(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction7(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this);
LPCRITICAL_SECTION __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction2(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,LPCRITICAL_SECTION param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction5(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction6(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction4(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,int *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::~CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this);
undefined * Catch_All@100409d1(void);
CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>* __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this);
bool __cdecl FUN_10040ad0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_10040b30(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_10040bd0(int *param_1);
void * FUN_10040c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_4,undefined1 param_5);
void Catch_All@10040cdd(void);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction7(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this);
LPCRITICAL_SECTION __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction2(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,LPCRITICAL_SECTION param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction5(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction6(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction4(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,HGDIOBJ param_1,char param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::~CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this);
undefined * Catch_All@10041474(void);
CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>* __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this);
void __fastcall FUN_10041570(int *param_1);
undefined4 *FUN_10041600(undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,undefined1 param_5);
void Catch_All@10041697(void);
void __thiscall FUN_100416b0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
bool __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction3(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction7(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this);
void __thiscall FUN_10041990(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_10041a80(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction2(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction5(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction6(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction4(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this,int *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::~CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this);
undefined * Catch_All@10042001(void);
CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>* __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100420f0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10042130(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 * __thiscall FUN_100421b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,undefined1 param_5);
void __thiscall FUN_10042210(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_10042290(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
bool __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction3(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction7(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this);
void __thiscall FUN_10042570(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int * __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction2(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int *param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction5(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction6(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction4(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this,HGDIOBJ param_1,char param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::~CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this);
undefined * Catch_All@10042ba4(void);
undefined4 * __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::deleting_destructor(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,byte param_1);
undefined4 * __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::deleting_destructor(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,byte param_1);
undefined4 * __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::deleting_destructor(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this,byte param_1);
undefined4 * __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::deleting_destructor(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this,byte param_1);
void __cdecl FUN_10042ca0(void *param_1,int param_2,int param_3);
void Catch_All@10042d09(void);
undefined4 __fastcall FUN_10042d40(undefined4 *param_1);
void __fastcall FUN_10042da0(int *param_1);
void __fastcall FUN_10042dd0(int param_1);
undefined4 ** __thiscall FUN_10042e20(void *this,undefined4 *param_1);
void __fastcall FUN_10042ea0(undefined4 *param_1);
void __thiscall FUN_10042f00(void *this,char *param_1,int param_2);
void Catch_All@10042fa8(void);
void __thiscall neon::frw::CResource::~CResource(CResource *this);
void __thiscall neon::frw::CResource::Init(CResource *this,SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>*param_1);
undefined4 * __thiscall FUN_100430b0(void *this,char *param_1);
CResource * __thiscall neon::frw::CResource::deleting_destructor(CResource *this,byte param_1);
void __fastcall FUN_100431b0(int *param_1);
CObject * __thiscall neon::frw::CAppManager::GetMainObject(CAppManager *this);
void __thiscall FUN_10043250(void *this,undefined4 *param_1,uint *param_2);
void __cdecl FUN_100432e0(int param_1,int param_2,int param_3,int param_4,int *param_5);
void __thiscall FUN_10043320(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_10043510(void *this,int *param_1,uint *param_2);
int __thiscall FUN_10043600(void *this,uint *param_1);
uint __thiscall neon::frw::CManagedPoolImpl<neon::util::CEmptyLock>::vfunction2(CManagedPoolImpl<neon::util::CEmptyLock> *this,uint param_1);
int __thiscall neon::frw::CManagedPoolImpl<neon::util::CEmptyLock>::vfunction3(CManagedPoolImpl<neon::util::CEmptyLock> *this,uint param_1);
undefined4 * __thiscall neon::frw::CManagedPoolImpl<neon::util::CEmptyLock>::deleting_destructor(CManagedPoolImpl<neon::util::CEmptyLock> *this,byte param_1);
undefined4 __thiscall neon::frw::CManagedPoolImpl<neon::util::CEmptyLock>::vfunction1(CManagedPoolImpl<neon::util::CEmptyLock> *this);
undefined4 __thiscall neon::frw::CManagedPoolImpl<neon::util::CCriticalSection>::vfunction2(CManagedPoolImpl<neon::util::CCriticalSection> *this,uint param_1);
undefined4 __thiscall neon::frw::CManagedPoolImpl<neon::util::CCriticalSection>::vfunction3(CManagedPoolImpl<neon::util::CCriticalSection> *this,uint param_1);
undefined4 * __thiscall neon::frw::CManagedPoolImpl<neon::util::CCriticalSection>::deleting_destructor(CManagedPoolImpl<neon::util::CCriticalSection> *this,byte param_1);
undefined4 __cdecl FUN_10043ab0(char param_1);
CResourceImpl * __thiscall neon::frw::CResourceImpl::CResourceImpl(CResourceImpl *this,char param_1);
undefined4 * __thiscall neon::frw::CResourceImpl::deleting_destructor(CResourceImpl *this,byte param_1);
CResource * __thiscall neon::frw::CResource::CResource(CResource *this,bool param_1);
CResource * __cdecl neon::frw::CResource::Instance(bool param_1);
CResource * __cdecl neon::frw::CResource::Instance(void);
CResource * __cdecl neon::frw::SResource::Instance(void);
CResource * __cdecl neon::frw::Resource(bool param_1);
undefined4 FUN_10043ec0(undefined4 param_1,int param_2);
void __thiscall Loki::Internal::RefLinkedBase::RefLinkedBase(RefLinkedBase *this);
RefLinkedBase * __thiscall Loki::Internal::RefLinkedBase::operator=(RefLinkedBase *this,RefLinkedBase *param_1);
void __thiscall eco::CMsgDispatch::UnregisterAll(CMsgDispatch *this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall neon::frw::CObject::GetName(CObject *this);
uint __thiscall neon::frw::CObject::GetType(CObject *this);
void __thiscall neon::frw::CObject::SetType(CObject *this,uint param_1);
void __thiscall neon::frw::CObject::UnregisterAllHandler(CObject *this);
void __thiscall neon::frw::CResource::`default_constructor_closure'(CResource *this);
bool __thiscall IDxDevice::LostDeviceUpdate(IDxDevice *this);
CBasicPoint<float> * __thiscall neon::visual::CVisual::GetLocalPos(CVisual *this);
void __thiscall neon::visual::CVisual::AddPosXby(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::AddPosYby(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::AddPosby(CVisual *this,float param_1,float param_2);
float __thiscall neon::visual::CVisual::GetMovePosX(CVisual *this);
float __thiscall neon::visual::CVisual::GetMovePosY(CVisual *this);
void __thiscall neon::visual::CVisual::SetScale(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetScaleX(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetScaleY(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetAntialiasingRotation(CVisual *this,bool param_1);
int __thiscall neon::visual::CVisual::GetStretchedWidth(CVisual *this);
int __thiscall neon::visual::CVisual::GetStretchedHeight(CVisual *this);
CObject * __thiscall neon::visual::CVisual::GetActor(CVisual *this);
CObject * __thiscall neon::visual::CVisual::GetEffector(CVisual *this);
CObject * __thiscall neon::visual::CVisual::GetMover(CVisual *this);
bool __thiscall neon::visual::CVisual::GetUseParentRotation(CVisual *this);
bool __thiscall neon::ctrl::CControl::IsActive(CControl *this);
bool __thiscall neon::ctrl::CControl::IsModal(CControl *this);
IDirect3D9 * __thiscall C3DDisplay::GetD3D(C3DDisplay *this);
bool __thiscall C3DDisplay::IsFullScreen(C3DDisplay *this);
void __thiscall neon::frw::CApp::SetUpperBarSize(CApp *this,int param_1);
float __thiscall neon::frw::CApp::GetTickSec(CApp *this);
float __thiscall neon::frw::CApp::GetTime(CApp *this);
void __thiscall neon::frw::CApp::RenderStop(CApp *this);
void __thiscall neon::frw::CApp::RenderStart(CApp *this);
uint __thiscall Loki::SmallObjAllocator::GetAlignment(SmallObjAllocator *this);
int __thiscall neon::frw::CApp::GetDeviceError(CApp *this);
long __thiscall neon::frw::CFileManager::LoadImageUsingGdiplus(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Bitmap **param_2,void **param_3);
ushort __thiscall neon::visual::CTile::GetTileIndex(CTile *this);
ushort __thiscall neon::visual::CTile::GetTileNumX(CTile *this);
ushort __thiscall neon::visual::CTile::GetTileNumY(CTile *this);
int __thiscall neon::visual::CSprite::GetAniNumber(CSprite *this);
bool __thiscall neon::visual::CSprite::IsPlay(CSprite *this);
TileSet * __thiscall neon::visual::CSprite::TileSet::operator=(TileSet *this,TileSet *param_1);
int * __fastcall FUN_10044250(int *param_1);
undefined4 * __thiscall FUN_10044290(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@1004432d(void);
void __thiscall FUN_10044350(void *this,int param_1);
undefined4 * __thiscall FUN_100443d0(void *this,undefined4 *param_1);
void Catch_All@1004446d(void);
C3DDisplay * __thiscall C3DDisplay::C3DDisplay(C3DDisplay *this,C3DDisplay *param_1);
C3DDisplay * __thiscall C3DDisplay::operator=(C3DDisplay *this,C3DDisplay *param_1);
CFileManager * __thiscall neon::frw::CFileManager::CFileManager(CFileManager *this,CFileManager *param_1);
CFileManager * __thiscall neon::frw::CFileManager::operator=(CFileManager *this,CFileManager *param_1);
void __thiscall eco::CMsgDispatch::Release(CMsgDispatch *this);
CMsgDispatch * __thiscall eco::CMsgDispatch::CMsgDispatch(CMsgDispatch *this);
void __thiscall eco::CMsgDispatch::~CMsgDispatch(CMsgDispatch *this);
undefined * Catch_All@10044a88(void);
void FUN_10044a91(void);
void __cdecl Loki::Internal::AtExitFn(void);
int __fastcall FUN_10044b90(int param_1);
uint __fastcall FUN_10044bd0(int *param_1);
int * __fastcall FUN_10044c10(int *param_1);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
void __cdecl FUN_10044cb0(undefined4 *param_1,undefined4 *param_2);
undefined4 __thiscall FUN_10044ce0(void *this,int param_1,byte param_2);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(size_t param_1,char param_2);
void __cdecl FUN_10044d80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10044db0(int param_1);
void __cdecl FUN_10044dd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
bool __thiscall FUN_10044e00(void *this,byte param_1,int param_2,byte param_3);
int __cdecl FUN_10044f10(int param_1,int param_2,int param_3);
undefined4 __fastcall FUN_10044f50(int *param_1);
uint * __thiscall FUN_10045110(void *this,uint param_1);
uint * __thiscall FUN_100451b0(void *this,uint param_1);
bool __thiscall Loki::SmallObjAllocator::IsCorrupt(SmallObjAllocator *this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::front(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
uint __fastcall FUN_10045320(int *param_1);
void __fastcall FUN_10045390(int param_1);
undefined4 * __thiscall FUN_100453c0(void *this,int param_1);
void Catch_All@100454a4(void);
void __thiscall FUN_100454c0(void *this,char *param_1);
void Catch_All@100455a6(void);
void __thiscall FUN_100455c0(void *this,char *param_1,undefined4 *param_2);
void Catch_All@10045663(void);
void __fastcall FUN_10045680(int param_1);
uint __fastcall FUN_10045730(int param_1);
void __thiscall FUN_100457e0(void *this,undefined1 *param_1);
void __thiscall Loki::SmallObjAllocator::~SmallObjAllocator(SmallObjAllocator *this);
undefined4 * __thiscall FUN_100458b0(void *this,char *param_1);
void __thiscall FUN_10045920(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * __fastcall FUN_100459e0(undefined4 *param_1);
SmallObjAllocator * __thiscall Loki::SmallObjAllocator::SmallObjAllocator(SmallObjAllocator *this,uint param_1,uint param_2,uint param_3);
void __thiscall Loki::SmallObjAllocator::Deallocate(SmallObjAllocator *this,void *param_1,uint param_2);
void __thiscall Loki::SmallObjAllocator::Deallocate(SmallObjAllocator *this,void *param_1);
void __thiscall FUN_10045be0(void *this,undefined4 *param_1);
void __thiscall FUN_10045c60(void *this,int *param_1);
uint __fastcall FUN_10045cf0(int param_1);
uint __fastcall FUN_10045db0(int *param_1);
undefined4 Catch_All@10045e53(void);
undefined1 * __fastcall FUN_10045eb0(int *param_1);
bool __thiscall Loki::SmallObjAllocator::TrimExcessMemory(SmallObjAllocator *this);
void * __thiscall Loki::SmallObjAllocator::Allocate(SmallObjAllocator *this,uint param_1,bool param_2);
void __thiscall Loki::Internal::RefLinkedBase::RefLinkedBase(RefLinkedBase *this,RefLinkedBase *param_1);
bool __thiscall Loki::Internal::RefLinkedBase::Release(RefLinkedBase *this);
uint __cdecl Loki::Internal::RefLinkedBase::CountPrevCycle(RefLinkedBase *param_1);
uint __cdecl Loki::Internal::RefLinkedBase::CountNextCycle(RefLinkedBase *param_1);
bool __thiscall Loki::Internal::RefLinkedBase::HasPrevNode(RefLinkedBase *this,RefLinkedBase *param_1);
bool __thiscall Loki::Internal::RefLinkedBase::HasNextNode(RefLinkedBase *this,RefLinkedBase *param_1);
bool __thiscall Loki::Internal::RefLinkedBase::Merge(RefLinkedBase *this,RefLinkedBase *param_1);
void __cdecl FUN_10046250(undefined4 *param_1,undefined4 *param_2);
void __thiscall Loki::Internal::RefLinkedBase::Swap(RefLinkedBase *this,RefLinkedBase *param_1);
long __thiscall C3DDisplay::C3DDisplay::CalcVRAM(C3DDisplay *this,ulong *param_1,ulong *param_2);
void __cdecl FUN_100465a0(HWND param_1);
undefined4 __cdecl FUN_100465e0(HWND param_1);
undefined4 __cdecl FUN_10046770(HWND param_1);
undefined4 __cdecl FUN_10046870(HWND param_1);
void __cdecl FUN_100469f0(HWND param_1);
void __cdecl FUN_10046b10(HWND param_1);
void __cdecl FUN_10046b30(HWND param_1);
long __thiscall DXAvatar::CDxAvtr2004::DXAvatar::CDxAvtr2004::Restore(CDxAvtr2004 *this);
void __cdecl FUN_10046be0(char *param_1,char *param_2,char param_3);
void __thiscall DXAvatar::CDxAvtrTickHandler::SetDelay(CDxAvtrTickHandler *this,int param_1,ulong param_2);
void __thiscall DXAvatar::CDxAvtrTickHandler::FrameMove(CDxAvtrTickHandler *this,int param_1,CDxAvtrPart *param_2);
ulong __thiscall DXAvatar::CDxAvtrTickHandler::getNowFrameNo(CDxAvtrTickHandler *this,int param_1);
void __thiscall DXAvatar::CDxAvtr2004::DrawOneImage(CDxAvtr2004 *this,CDxAvtrPart *param_1,int param_2);
undefined4 Catch_All@10046e7c(void);
void __thiscall FUN_10046e90(void *this,int *param_1,int param_2);
int __thiscall DXAvatar::CDxAvtr2004::Draw(CDxAvtr2004 *this);
void __thiscall DXAvatar::CDxAvtrTickHandler::clear(CDxAvtrTickHandler *this);
void __thiscall FUN_100470d0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this);
void __thiscall DXAvatar::CDxAvtr2004::Destroy(CDxAvtr2004 *this);
void __thiscall FUN_100473b0(void *this,uint param_1,undefined4 param_2);
void __thiscall DXAvatar::CDxAvtr2004::~CDxAvtr2004(CDxAvtr2004 *this);
void __thiscall DXAvatar::CDxAvtrTickHandler::SetSize(CDxAvtrTickHandler *this,int param_1);
int __thiscall DXAvatar::CDxAvtr2004::Create(CDxAvtr2004 *this,CAvtrId *param_1,int param_2,int param_3,int param_4);
int __thiscall DXAvatar::CDxAvtr2004::Create(CDxAvtr2004 *this,char *param_1,int param_2,int param_3,int param_4);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_10047ae0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall FUN_10047ba0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined1 *FUN_10047cd0(char *param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*param_2);
void FUN_10047dc0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void FUN_10048230(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_10048310(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __fastcall FUN_10048450(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_10048520(int param_1);
void __cdecl FUN_100485f0(char *param_1,char *param_2,char param_3);
void __thiscall FUN_10048610(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __cdecl FUN_100487f0(LPBYTE param_1);
void FUN_10048910(char *param_1);
bool __fastcall FUN_100489c0(int param_1);
bool __thiscall FUN_10048aa0(void *this,int *param_1);
bool __thiscall DXAvatar::CAvtrId::Add(CAvtrId *this,char *param_1,bool param_2,char *param_3);
undefined * Catch_All@10048e75(void);
void FUN_10048e7d(void);
void __thiscall DXAvatar::CAvtrId::Set(CAvtrId *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2);
void __thiscall DXAvatar::CAvtrId::Set(CAvtrId *this,char **param_1,bool param_2);
void __fastcall FUN_10048ef0(int *param_1);
void __fastcall FUN_10049000(undefined4 *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall DXAvatar::CAvtrPartPool::GetPrePath(CAvtrPartPool *this,bool param_1);
void __thiscall DXAvatar::CAvtrPartPool::SetPrePath(CAvtrPartPool *this,char *param_1);
CAvtrPartPool * __cdecl DXAvatar::CAvtrPartPool::Inst(void);
int __thiscall FUN_100490b0(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_10049170(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100491f0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void FUN_10049270(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void __thiscall FUN_100492e0(void *this,int *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_10049340(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __fastcall FUN_100493c0(int param_1);
undefined1 __cdecl FUN_10049400(int *param_1,int param_2,int *param_3,int param_4,undefined1 param_5);
CAvtrPart * __thiscall DXAvatar::CAvtrPartPool::Get(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall DXAvatar::CAvtrPartPool::Add(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall FUN_100495d0(void *this,undefined1 *param_1,char *param_2);
void __fastcall FUN_10049690(undefined4 *param_1);
undefined4 * __fastcall FUN_10049780(undefined4 *param_1);
undefined1 __cdecl FUN_100497f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
undefined4 * __thiscall FUN_10049830(void *this,undefined4 *param_1);
int __cdecl DXAvatar::CAvtrPartPool::DestroyInstance(void);
void __thiscall DXAvatar::CAvtrPartPool::FileLoad(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __fastcall FUN_10049af0(undefined1 *param_1);
void __thiscall DXAvatar::CAvtrPartPool::~CAvtrPartPool(CAvtrPartPool *this);
void __thiscall DXAvatar::CAvtrPartPool::FileLoad(CAvtrPartPool *this,CAvtrId *param_1);
void __thiscall FUN_1004a110(void *this,int *param_1);
CAvtrPartPool * __thiscall DXAvatar::CAvtrPartPool::CAvtrPartPool(CAvtrPartPool *this,CAvtrPartPool *param_1);
CAvtrPartPool * __thiscall DXAvatar::CAvtrPartPool::deleting_destructor(CAvtrPartPool *this,byte param_1);
CAvtrPartPool * __thiscall DXAvatar::CAvtrPartPool::CAvtrPartPool(CAvtrPartPool *this);
void __thiscall DXAvatar::CAvtrPartPool::RequestLoad(CAvtrPartPool *this,CAvtrId *param_1);
void * __cdecl FUN_1004a690(void *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_6);
void __fastcall FUN_1004a740(int param_1);
undefined1 * Catch_All@1004a87e(void);
void __fastcall FUN_1004a890(undefined4 *param_1);
undefined4 * __fastcall FUN_1004a910(undefined4 *param_1);
int __cdecl DXAvatar::CAvtrPartPool::CreateInstance(IDirectDraw4 *param_1,ulong param_2,bool param_3,bool param_4);
CDxAvtrPartPool * __cdecl DXAvatar::CDxAvtrPartPool::Inst(void);
void __fastcall FUN_1004acd0(int param_1);
void __fastcall FUN_1004ad40(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void * __cdecl FUN_1004adb0(void *param_1,int param_2,int param_3);
int * __thiscall FUN_1004ade0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,void *param_5);
CDxAvtrPart * __thiscall DXAvatar::CDxAvtrPartPool::Get(CDxAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_1004aef0(void *this,undefined1 *param_1,char *param_2);
void __thiscall DXAvatar::CDxAvtrPart::~CDxAvtrPart(CDxAvtrPart *this);
void FUN_1004b110(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void __thiscall DXAvatar::CDxAvtrPartPool::Add(CDxAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __fastcall FUN_1004b230(undefined4 *param_1);
undefined1 __cdecl FUN_1004b410(int *param_1,int param_2,int *param_3,int param_4,undefined1 param_5);
void __thiscall DXAvatar::CDxAvtrPartPool::~CDxAvtrPartPool(CDxAvtrPartPool *this);
long __thiscall DXAvatar::CDxAvtrPartPool::DXAvatar::CDxAvtrPartPool::Restore(CDxAvtrPartPool *this);
void __thiscall DXAvatar::CDxAvtrPartPool::CreateAvatarPartSurfaces(CDxAvtrPartPool *this);
void __thiscall DXAvatar::CDxAvtrPartPool::FileLoad(CDxAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __fastcall FUN_1004bab0(undefined1 *param_1);
int __cdecl DXAvatar::CDxAvtrPartPool::DestroyInstance(void);
CDxAvtrPartPool * __thiscall DXAvatar::CDxAvtrPartPool::CDxAvtrPartPool(CDxAvtrPartPool *this);
void __thiscall DXAvatar::CDxAvtrPartPool::FileLoad(CDxAvtrPartPool *this,CAvtrId *param_1);
void __thiscall FUN_1004c120(void *this,int *param_1);
void __thiscall DXAvatar::CDxAvtrPartPool::RequestLoad(CDxAvtrPartPool *this,CAvtrId *param_1);
void __fastcall FUN_1004c500(int param_1);
undefined4 Catch_All@1004c5cb(void);
void __fastcall FUN_1004c5e0(int param_1);
undefined4 * __fastcall FUN_1004c650(undefined4 *param_1);
int __cdecl DXAvatar::CDxAvtrPartPool::CreateInstance(bool param_1,bool param_2);
int __cdecl DXAvatar::CDxAvtrPartPool::CreateInstance(ulong param_1,bool param_2,bool param_3);
void __cdecl FUN_1004ca30(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,byte param_10);
void __thiscall FUN_1004cb00(void *this,undefined1 *param_1);
void __thiscall FUN_1004cc30(void *this,undefined1 param_1);
undefined4 __fastcall FUN_1004cce0(int param_1);
ushort __fastcall FUN_1004cd50(int param_1);
undefined4 __thiscall FUN_1004ce30(void *this,int param_1);
void __cdecl FUN_1004d0b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
CHgAniSurfaceList * __thiscall DXAvatar::CHgAniSurfaceList::CHgAniSurfaceList(CHgAniSurfaceList *this);
void __thiscall FUN_1004d1e0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall DXAvatar::CHgAniSurfaceList::~CHgAniSurfaceList(CHgAniSurfaceList *this);
void __thiscall FUN_1004d3d0(void *this,undefined4 *param_1);
undefined4 * __thiscall DXAvatar::CHgAniSurfaceList::deleting_destructor(CHgAniSurfaceList *this,byte param_1);
undefined4 __fastcall FUN_1004d460(void *param_1);
undefined4 __fastcall FUN_1004da30(void *param_1);
undefined4 __fastcall FUN_1004dda0(void *param_1);
void __thiscall FUN_1004de10(void *this,undefined4 param_1,LPCSTR param_2,undefined1 param_3,undefined4 param_4);
void __thiscall FUN_1004e070(void *this,LPCSTR param_1,undefined1 param_2,undefined4 param_3);
void __thiscall FUN_1004e2b0(void *this,undefined1 *param_1);
void __thiscall FUN_1004e3e0(void *this,undefined1 param_1);
undefined4 __fastcall FUN_1004e490(int param_1);
ushort __fastcall FUN_1004e500(int param_1);
undefined4 __thiscall FUN_1004e5e0(void *this,int param_1);
CHgDxAniSurfaceList * __thiscall DXAvatar::CHgDxAniSurfaceList::CHgDxAniSurfaceList(CHgDxAniSurfaceList *this);
void __thiscall DXAvatar::CHgDxAniSurfaceList::~CHgDxAniSurfaceList(CHgDxAniSurfaceList *this);
undefined4 * __thiscall DXAvatar::CHgDxAniSurfaceList::deleting_destructor(CHgDxAniSurfaceList *this,byte param_1);
undefined4 __fastcall FUN_1004f1d0(void *param_1);
undefined4 __fastcall FUN_1004f500(void *param_1);
BOOL ImmReleaseContext(HWND param_1,HIMC param_2);
BOOL ImmGetConversionStatus(HIMC param_1,LPDWORD lpfdwConversion,LPDWORD lpfdwSentence);
HIMC ImmGetContext(HWND param_1);
uint thunk_FUN_101732db(HIMC param_1,DWORD param_2,LPSTR param_3,uint param_4);
void __cdecl FUN_1004f574(uint param_1);
void __cdecl operator_delete(void *param_1);
type_info * __thiscall type_info::vfunction1(type_info *this,byte param_1);
char * __thiscall std::exception::std::exception::what(exception *this);
void __RTDynamicCast(void);
void __fastcall __security_check_cookie(int param_1);
void * __cdecl operator_new(uint param_1);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __cdecl purecall(void);
ulonglong __fastcall FUN_1004f620(undefined4 param_1,undefined4 param_2);
ulonglong FUN_1004f656(void);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_1004f767(void);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl operator_delete[](void *param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_1004f837(void);
void __RTtypeid(void);
double __cdecl floor(double _X);
void __cdecl free(void *_Memory);
void `eh_vector_constructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,_func_void_void_ptr *param_5);
void FUN_1004f8af(void);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void _CIcos(void);
void _CIsin(void);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void _CIatan2(void);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count);
void * __cdecl malloc(size_t _Size);
void __alloca_probe(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,int *param_3);
void FUN_1004fd5b(void);
void entry(int *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
undefined4 FUN_1004fe8f(void);
undefined4 __get_sse2_info(void);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_1004ffb9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __cdecl initterm(void);
void __cdecl initterm_e(void);
void __cdecl _amsg_exit(int param_1);
void __cdecl ___security_init_cookie(void);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void __cdecl _crt_debugger_hook(int param_1);
void __cdecl except_handler4_common(void);
void Direct3DCreate9(void);
undefined4 FUN_1005025a(float param_1,float param_2);
void FUN_1005028e(void);
void thunk_FUN_1005028e(void);
void FUN_100502a7(int param_1,int param_2,uint param_3);
void FUN_10050349(void);
void thunk_FUN_10050349(void);
int FUN_10050362(int param_1,int param_2,uint param_3);
void FUN_10050409(void);
void FUN_1005041c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10050448(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_100504d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10050504(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_100505b5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_100505e6(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6);
void FUN_1005062b(void);
void thunk_FUN_1005062b(void);
void FUN_10050657(void);
void thunk_FUN_10050657(void);
void FUN_10050683(void);
void thunk_FUN_10050683(void);
void FUN_100506da(void);
void FUN_10050743(void);
void thunk_FUN_10050743(void);
void FUN_10050788(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_10050838(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10050864(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_10050937(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10050968(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6);
void FUN_100509c7(void);
void FUN_10050a67(void);
void FUN_10050b23(void);
void thunk_FUN_10050b23(void);
void FUN_10050b3c(void);
void thunk_FUN_10050b3c(void);
void FUN_10050c36(void);
void thunk_FUN_10050c36(void);
void FUN_10050cb7(void);
void FUN_10050d4a(void);
void FUN_10050e9b(void);
void FUN_10050eda(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_10050fad(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10050fd9(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_100510ce(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_100510ff(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6);
void FUN_10051178(void);
void FUN_1005122c(void);
void FUN_10051300(void);
void thunk_FUN_10051300(void);
void FUN_100513e5(void);
void FUN_100513f8(void);
void thunk_FUN_100513f8(void);
void FUN_10051649(void);
void thunk_FUN_10051649(void);
void FUN_100516d3(void);
void FUN_1005191e(void);
void thunk_FUN_1005191e(void);
void FUN_10051cde(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void thunk_FUN_10051cde(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10051d72(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void thunk_FUN_10051d72(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10051e06(undefined4 param_1,undefined4 param_2);
void FUN_10051e26(undefined4 *param_1,float param_2);
void FUN_10051ea2(undefined4 param_1,undefined4 param_2);
void FUN_10051ec2(float *param_1,float param_2);
void FUN_10051f3f(undefined4 param_1,undefined4 param_2);
void thunk_FUN_10051f3f(undefined4 param_1,undefined4 param_2);
void FUN_10051fe3(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10052006(float *param_1,float *param_2,float param_3);
void FUN_10052107(void);
void thunk_FUN_10052107(void);
void FUN_10052204(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10052234(void);
void FUN_10052553(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_1005287f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_10052998(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_10052aac(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_10052c04(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7);
void FUN_10052caa(void);
void FUN_10052d1b(void);
void thunk_FUN_10052d1b(void);
void FUN_10052e6a(undefined4 param_1,undefined4 param_2,undefined4 param_3);
float * FUN_10052e8d(float *param_1,undefined4 param_2,float param_3);
void FUN_10052eeb(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void thunk_FUN_10052eeb(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10052ffc(void);
void thunk_FUN_10052ffc(void);
void FUN_100530ad(void);
void FUN_10053178(void);
void thunk_FUN_10053178(void);
void FUN_10053244(void);
void thunk_FUN_10053244(void);
void FUN_100532da(void);
void thunk_FUN_100532da(void);
void FUN_1005338d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void thunk_FUN_1005338d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1005349e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_100534ca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float param_6);
void FUN_10053523(void);
undefined4 *FUN_10053567(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,float param_5,float param_6);
void FUN_100535f1(void);
void thunk_FUN_100535f1(void);
void FUN_100536ad(void);
void FUN_10053776(void);
void FUN_100537c4(void);
void FUN_1005387b(void);
void FUN_1005392f(void);
void FUN_10053a03(void);
void FUN_10053ab5(float *param_1,float *param_2,float *param_3);
float * FUN_10053b22(float *param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6);
void FUN_10053ba7(float *param_1,float *param_2,float *param_3);
float * FUN_10053c26(float *param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6);
void FUN_10053cc0(float *param_1,float *param_2);
void FUN_10053d5f(float *param_1,float *param_2,float *param_3);
undefined4 FUN_1005454c(float *param_1,int param_2,float *param_3,float *param_4);
undefined4 FUN_100548dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10054917(float *param_1,float *param_2);
void FUN_10054a15(float *param_1);
void FUN_10054ad6(undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4,float *param_5,float *param_6,int param_7);
int * FUN_10054ed7(int param_1);
uint __fastcall FUN_10054f02(int param_1,int param_2);
int FUN_10054f79(int *param_1,uint param_2,undefined4 param_3,int *param_4);
int FUN_10055077(int param_1);
int FUN_10055098(float *param_1,float *param_2,int *param_3);
int FUN_100550d5(int *param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,uint param_9,undefined4 param_10);
int FUN_100551bd(int *param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9,uint param_10,undefined4 param_11);
undefined4 __fastcall FUN_10055299(undefined4 param_1,int *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,uint param_7,int *param_8,int param_9,uint param_10);
void __thiscall FUN_1005564e(void *this,int *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,int *param_6,int param_7);
int __thiscall FUN_10055675(void *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,int param_7,int param_8);
void FUN_100556e5(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4);
int FUN_10055711(int *param_1,undefined4 param_2,uint *param_3,float *param_4,float *param_5,int *param_6,uint param_7,undefined4 param_8,int *param_9);
int FUN_100557cb(int *param_1,int *param_2,uint *param_3,int *param_4,int *param_5,uint *param_6,uint param_7,int param_8);
int FUN_100559df(int *param_1,undefined4 param_2,uint *param_3,int *param_4,undefined4 param_5,uint *param_6,uint param_7,undefined4 param_8);
uint FUN_10055a67(int *param_1,int *param_2,uint param_3,uint param_4);
uint FUN_10055d59(int *param_1,float *param_2,float *param_3,uint param_4,int *param_5,uint param_6,uint param_7,uint param_8,uint param_9,int param_10,uint param_11,uint param_12,uint param_13,int *param_14,undefined4 *param_15,uint param_16,undefined4 *param_17);
void FUN_100565ce(int *param_1,float *param_2,float *param_3,uint param_4,int *param_5,uint param_6,uint param_7,uint param_8,int param_9,uint param_10,uint param_11,uint param_12,int *param_13,undefined4 *param_14,undefined4 *param_15);
void FUN_1005660d(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint param_5,uint param_6,float *param_7,int *param_8,char *param_9,float param_10,float *param_11);
void FUN_10056987(float *param_1,float *param_2,float *param_3,float param_4,float *param_5);
void FUN_10056a26(float *param_1,int param_2,uint param_3,float *param_4,float *param_5,float *param_6,float *param_7,uint param_8);
undefined4 FUN_10056d7f(LPBYTE param_1,LPCSTR param_2,LPBYTE param_3,DWORD param_4);
undefined8 __fastcall FUN_10056dde(undefined4 param_1,undefined4 param_2);
int FUN_10056e06(void);
void FUN_10056eb8(void);
undefined * Catch@10056ef2(void);
undefined4 FUN_10056efe(void);
int FUN_10056f59(int param_1);
void FUN_1005705c(undefined4 param_1);
void FUN_10057131(void);
void __fastcall FUN_100571c0(undefined4 *param_1);
void __fastcall FUN_100571d9(int param_1);
void * __thiscall FUN_10057234(void *this,byte param_1);
uint FUN_10057255(int param_1,uint param_2);
float10 FUN_10057276(uint param_1);
undefined4 __thiscall FUN_100572a6(void *this,uint *param_1,byte *param_2);
void FUN_10057dda(int *param_1);
void FUN_10057dfc(int *param_1);
undefined4 FUN_10057e1b(int param_1);
void FUN_10057e38(int param_1,int param_2);
undefined4 FUN_10057e4f(int param_1,int param_2);
undefined4 __thiscall FUN_100580c9(void *this,uint *param_1,uint param_2);
uint __thiscall FUN_100585f3(void *this,uint *param_1,uint param_2);
void __cdecl FUN_1005887b(int *param_1,undefined4 *param_2,uint param_3);
void FUN_100588be(int *param_1);
undefined4 FUN_100588cf(int param_1,uint param_2);
undefined4 __thiscall FUN_10058e22(void *this,int *param_1,int *param_2);
undefined4 _StringCopyWorkerA@12(char *param_1,int param_2,char *param_3);
undefined4 __thiscall FUN_100591cd(void *this,short *param_1,uint param_2);
undefined4 FID_conflict:_StringCchCopyA@12(char *param_1,uint param_2,char *param_3);
undefined4 __thiscall FUN_1005921e(void *this,char *param_1,uint param_2);
undefined4 __thiscall FUN_100594c3(void *this,float *param_1,float *param_2);
undefined4 __thiscall FUN_10059c4c(void *this,float *param_1,float *param_2,int *param_3,int param_4);
void __fastcall FUN_10059efe(undefined4 *param_1);
void __fastcall FUN_10059f08(int *param_1);
float10 FUN_10059f28(float param_1);
int * FUN_10059f56(uint param_1,int param_2,int param_3);
undefined4 __fastcall FUN_1005a214(int *param_1);
undefined4 FUN_1005a36c(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6);
void __fastcall FUN_1005a496(int *param_1);
undefined4 FUN_1005a4b8(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,int param_6);
undefined4 FUN_1005a5a4(uint *param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5,int param_6);
void FUN_1005a6be(void);
void FUN_1005a6f8(void);
void __fastcall FUN_1005a729(int *param_1);
undefined4 __fastcall FUN_1005a74b(int *param_1);
undefined4 __fastcall FUN_1005a87f(int *param_1);
undefined4 __fastcall FUN_1005a984(int *param_1);
undefined4 __fastcall FUN_1005aaad(int *param_1);
undefined4 __fastcall FUN_1005abe4(int *param_1);
undefined4 __fastcall FUN_1005ad02(int *param_1);
undefined4 __fastcall FUN_1005ad8e(int *param_1);
undefined4 __fastcall FUN_1005aebc(int *param_1);
undefined4 __fastcall FUN_1005afc5(int *param_1);
undefined4 __fastcall FUN_1005b0f3(int *param_1);
undefined4 __fastcall FUN_1005b211(int *param_1);
undefined4 __fastcall FUN_1005b31b(int *param_1);
undefined4 __fastcall FUN_1005b3ee(int *param_1);
undefined4 __fastcall FUN_1005b5c1(int *param_1);
undefined4 __fastcall FUN_1005b797(int *param_1);
undefined4 __fastcall FUN_1005bb5f(int *param_1);
uint * FUN_1005bf67(int param_1);
undefined4 __fastcall FUN_1005c053(int *param_1);
undefined4 __fastcall FUN_1005c3f5(int *param_1);
int * __thiscall FUN_1005cab7(void *this,byte param_1);
void __fastcall FUN_1005cb06(int *param_1);
undefined4 __fastcall FUN_1005d18c(int *param_1);
int __thiscall FUN_1005d74c(void *this,undefined4 *param_1,undefined4 *param_2,uint param_3);
void __fastcall FUN_1005d889(undefined4 *param_1);
int FUN_1005d89c(int *param_1,int *param_2);
undefined4 __fastcall FUN_1005d97b(byte *param_1);
void __fastcall FUN_1005da2e(undefined4 *param_1);
undefined4 __fastcall FUN_1005da34(int *param_1);
undefined4 __fastcall thunk_FUN_1005d97b(byte *param_1);
int __thiscall FUN_1005da5d(void *this,undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4,undefined4 param_5,uint param_6);
undefined4 __fastcall thunk_FUN_1005da34(int *param_1);
int __thiscall FUN_1005df51(void *this,undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4,undefined4 param_5,uint param_6);
void __fastcall FUN_1005e2c6(undefined4 *param_1);
undefined4 __thiscall FUN_1005e2f1(void *this,int param_1);
undefined4 __fastcall FUN_1005e809(int param_1);
int __thiscall FUN_1005eb0c(void *this,uint param_1,float *param_2,uint param_3);
void __fastcall FUN_1005f193(undefined4 *param_1);
void __fastcall FUN_1005f218(int param_1);
float10 FUN_1005f2fa(float param_1);
float10 FUN_1005f34c(float param_1);
undefined4 * __thiscall FUN_1005f395(void *this,undefined4 *param_1,uint param_2,int param_3);
undefined4 __thiscall FUN_1005f561(void *this,int param_1);
undefined4 __thiscall FUN_1005f5e4(void *this,int param_1);
void __fastcall FUN_1005f6d9(int *param_1);
void __thiscall FUN_1005f78b(void *this,uint param_1);
undefined4 __thiscall FUN_1005f805(void *this,int param_1);
void __thiscall FUN_1005f9f8(void *this,uint param_1);
void __thiscall FUN_1005fb21(void *this,int param_1);
void __thiscall FUN_1005fb93(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_1005fe90(void *this,uint param_1,float *param_2,int param_3);
void __thiscall FUN_1006023f(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_10060555(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_10060858(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_10060b57(void *this,uint param_1,float *param_2,int param_3);
void __thiscall FUN_10060ee7(void *this,uint param_1,float *param_2,int param_3);
void __thiscall FUN_10061277(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_1006158c(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_1006174d(void *this,uint param_1,float *param_2,int param_3);
void __thiscall FUN_10061ae5(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_10061de4(void *this,uint param_1,float *param_2,int param_3);
void __thiscall FUN_10062199(void *this,uint param_1,float *param_2,int param_3);
void __thiscall FUN_10062548(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_1006285e(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10062ad3(void *this,uint param_1,float *param_2,int param_3);
void __thiscall FUN_10062e88(void *this,uint param_1,float *param_2,int param_3);
void __thiscall FUN_1006323f(void *this,float *param_1,uint param_2,uint param_3);
void __thiscall FUN_10063487(void *this,uint param_1,float param_2,uint param_3);
void __thiscall FUN_1006354e(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_10063737(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_100639c5(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_10063c66(void *this,uint param_1,uint param_2,int param_3);
undefined4 * __thiscall FUN_10063ecd(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10063eee(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10063f0f(void *this,undefined4 *param_1);
void __thiscall FUN_10063f30(void *this,uint param_1,uint param_2,float *param_3);
undefined4 * __thiscall FUN_1006424b(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1006426c(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1006428d(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100642ae(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100642cf(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100642f0(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064311(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064332(void *this,undefined4 *param_1);
void __thiscall FUN_10064353(void *this,uint param_1,uint param_2,float *param_3);
undefined4 * __thiscall FUN_1006466c(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1006468d(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100646ae(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100646cf(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100646f0(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064711(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064732(void *this,undefined4 *param_1);
void __thiscall FUN_10064753(void *this,uint param_1,float *param_2,int param_3);
undefined4 * __thiscall FUN_10064aff(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064b20(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064b41(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064b62(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064b83(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064ba4(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064bc5(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064be6(void *this,undefined4 *param_1);
void __thiscall FUN_10064c07(void *this,uint param_1,uint param_2,int param_3);
undefined4 * __thiscall FUN_10064e7e(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064e9f(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064ec0(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064ee1(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10064f02(void *this,undefined4 *param_1);
void __thiscall FUN_10064f23(void *this,uint param_1,float *param_2,int param_3);
undefined4 * __thiscall FUN_100652fd(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1006531e(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1006533f(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10065360(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10065381(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100653a2(void *this,byte param_1);
undefined4 * __thiscall FUN_100653c3(void *this,undefined4 *param_1);
void __thiscall FUN_100653e7(void *this,uint param_1,float *param_2,int param_3);
undefined4 * __thiscall FUN_100657bc(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100657dd(void *this,undefined4 *param_1);
void __thiscall FUN_100657fe(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10065a6e(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_10065c5f(void *this,undefined4 param_1,undefined4 param_2,int param_3);
void __thiscall FUN_10065cb7(void *this,undefined4 param_1,undefined4 param_2,int param_3);
void __thiscall FUN_10065d10(void *this,undefined4 param_1,undefined4 param_2,int param_3);
void __thiscall FUN_10065d51(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10065d9e(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10065df1(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10065e3d(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_100660e5(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_100663e8(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066480(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066532(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100665da(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066687(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066731(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100667e9(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100668a0(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066982(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066a34(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066adc(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066b7a(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066c5c(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066d56(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066e00(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10066e7e(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066f38(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10066fdf(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_1006706f(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_100670de(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10067158(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100671e9(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_1006727a(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100672f6(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100673a4(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10067477(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10067536(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10067624(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100676d9(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100677e5(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100678ef(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100679c3(void *this,int param_1,int param_2,int param_3);
void __thiscall FUN_10067a47(void *this,int param_1,int param_2,int param_3);
void __thiscall FUN_10067ac7(void *this,undefined4 param_1,undefined4 param_2,uint param_3);
void __thiscall FUN_10067b17(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10067b8b(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10067c00(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10067c5b(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10067cf5(void *this,int param_1,int param_2,float *param_3);
undefined4 * __thiscall FUN_10067d8d(void *this,undefined4 *param_1);
void __fastcall FUN_10067e7b(undefined4 *param_1);
void __thiscall FUN_10067ea4(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10067f32(void *this,int param_1,int param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_10067fa7(void *this,undefined4 *param_1);
void __thiscall FUN_1006818f(void *this,uint param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_100685b0(void *this,int param_1,int param_2,float *param_3);
undefined4 * __thiscall FUN_1006883b(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10068858(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_10068875(void *this,byte param_1);
undefined4 * __thiscall FUN_10068896(void *this,byte param_1);
int * FUN_100688b7(undefined4 *param_1);
void __cdecl FUN_1006908b(undefined4 *param_1);
void __cdecl FUN_100691fe(undefined4 *param_1);
undefined8 FUN_10069367(void);
void __cdecl FUN_1006944d(undefined4 *param_1);
float * FUN_100696e3(float *param_1,float *param_2,float *param_3);
float * FUN_1006974e(float *param_1,float *param_2,float *param_3);
float * FUN_10069785(float *param_1,float *param_2,float *param_3);
float * FUN_10069812(float *param_1,float *param_2,float *param_3);
float * FUN_10069873(float *param_1,float *param_2,float *param_3);
float10 FUN_1006990e(uint param_1);
float * FUN_10069953(float *param_1,float *param_2);
void FUN_10069a1f(float *param_1,float *param_2,float *param_3);
void FUN_10069b04(float *param_1,float *param_2,float *param_3);
void FUN_10069b94(undefined4 *param_1);
undefined4 FUN_10069be0(void);
int FUN_10069c50(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10069ce0(int *param_1);
void FUN_10069dc0(int *param_1,int param_2,int param_3);
void FUN_10069eb0(int param_1);
void FUN_10069ec0(void);
int FUN_1006a030(int *param_1);
undefined4 FUN_1006a0f0(int *param_1);
int FUN_1006a1b0(int *param_1,int param_2);
undefined4 FUN_1006a220(void);
undefined4 __fastcall FUN_1006a2d0(int param_1,int param_2);
undefined4 FUN_1006a5b0(void);
undefined4 FUN_1006a870(int *param_1);
undefined4 FUN_1006ab40(int *param_1);
undefined4 FUN_1006ad90(int *param_1);
void __fastcall FUN_1006ae70(int param_1);
void __thiscall FUN_1006b050(void *this,int param_1);
undefined4 FUN_1006b0f0(int *param_1);
undefined4 FUN_1006b240(int *param_1);
undefined4 FUN_1006b2f0(int *param_1);
undefined4 FUN_1006b400(int *param_1);
undefined4 FUN_1006b4a0(int *param_1);
undefined4 FUN_1006b7b0(int *param_1);
undefined4 FUN_1006b840(int *param_1,int param_2);
void FUN_1006b940(int param_1);
void FUN_1006b980(int param_1);
void FUN_1006ba10(int *param_1);
void FUN_1006ba30(int *param_1);
void FUN_1006ba60(int *param_1,int param_2);
void FUN_1006baa0(int *param_1,char *param_2);
void FUN_1006bb50(int *param_1);
void FUN_1006bb70(undefined4 *param_1);
void __thiscall FUN_1006bbc3(void *this,int param_1,undefined4 *param_2);
void FUN_1006bc4f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1006bc6d(int *param_1,undefined4 param_2);
void FUN_1006bc8e(int param_1,undefined4 param_2);
void FUN_1006bca9(int *param_1,undefined4 *param_2);
void FUN_1006bccc(int param_1,undefined4 *param_2);
int FUN_1006bcf2(int param_1,uint param_2,uint param_3);
undefined4 * FUN_1006bd40(int *param_1,int param_2,int param_3);
void FUN_1006bd96(int param_1,void *param_2);
void FUN_1006bda1(int param_1);
void FUN_1006bdbd(int param_1,byte *param_2,uint param_3);
void FUN_1006bdff(undefined4 param_1,undefined4 *param_2);
undefined4 * FUN_1006be14(int param_1);
void FUN_1006be41(int param_1,int param_2,double param_3);
void FUN_1006be61(int param_1,uint *param_2,uint param_3,uint param_4,char param_5,byte param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9);
void FUN_1006bf04(int param_1,int param_2,undefined4 param_3,undefined2 param_4);
void FUN_1006bf2c(int param_1,int param_2,undefined1 param_3);
void FUN_1006bf4c(int param_1,int param_2,undefined1 param_3);
void FUN_1006bf85(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5);
int * FUN_1006bfd0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1006c0c6(int *param_1,uint *param_2);
void FUN_1006c236(int *param_1,int *param_2);
void __thiscall FUN_1006c259(void *this,int *param_1,byte *param_2,byte *param_3);
void FUN_1006c5de(int *param_1,undefined4 *param_2);
void FUN_1006c62b(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_1006c742(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uint FUN_1006c7c1(int param_1,int param_2,uint param_3);
undefined4 FUN_1006c7e1(int param_1,int param_2);
undefined1 FUN_1006c7fe(int param_1,int param_2);
undefined4 FUN_1006c81b(int param_1,int param_2,double *param_3);
undefined4 FUN_1006c84a(int param_1,int param_2,uint *param_3);
undefined4 FUN_1006c87b(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,uint *param_7,uint *param_8,uint *param_9);
undefined4 FUN_1006c94e(int param_1,int param_2,undefined4 *param_3,uint *param_4);
undefined4 FUN_1006c986(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5);
void FUN_1006c9f1(int param_1);
void FUN_1006ca01(int param_1);
void FUN_1006ca1a(int param_1);
undefined4 FUN_1006ca3a(int param_1);
void FUN_1006ca5b(int param_1,byte param_2,int param_3);
void FUN_1006caad(int *param_1,undefined1 *param_2);
void FUN_1006cae0(int *param_1,undefined1 *param_2);
void FUN_1006cba3(int param_1,double param_2,double param_3);
void FUN_1006cbde(int param_1);
void FUN_1006cbee(int param_1,int *param_2);
void FUN_1006ccd7(int *param_1,int param_2);
int * FUN_1006cdea(int *param_1,byte *param_2,byte *param_3);
void FUN_1006cf68(int *param_1,undefined1 *param_2);
void FUN_1006cfb2(uint *param_1,undefined1 *param_2,uint param_3,uint param_4);
void FUN_1006d1e7(int *param_1,byte *param_2,int param_3,byte *param_4,byte param_5);
void FUN_1006d539(uint *param_1,byte *param_2,int param_3,uint param_4,int param_5);
void FUN_1006d744(byte *param_1,int param_2,int param_3);
void FUN_1006da9d(int *param_1,byte *param_2,int param_3,int param_4);
void FUN_1006dbae(int *param_1);
void FUN_1006deb5(int *param_1);
void FUN_1006dfcb(int *param_1);
void FUN_1006e16c(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_1006e198(int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_1006e1d9(uint param_1);
undefined4 __fastcall FUN_1006e227(float *param_1);
undefined4 __fastcall FUN_1006e2ab(float *param_1);
uint __fastcall FUN_1006e2db(float *param_1);
void FUN_1006e3de(float *param_1,float *param_2,int param_3,uint param_4);
void FUN_1006e705(float *param_1,float *param_2,float param_3,float param_4);
undefined4 FUN_1006ec85(ushort *param_1,float param_2,int param_3);
undefined4 FUN_1006f5d8(float *param_1,ushort *param_2);
int FUN_1006f71a(float *param_1,uint *param_2);
int FUN_1006f79f(float *param_1,byte *param_2);
int FUN_1006f8dd(ushort *param_1,int param_2,int param_3);
void FUN_1006fa01(undefined4 *param_1,int param_2,int param_3);
int FUN_1006fb30(char *param_1,float param_2,int param_3);
int FUN_10070004(float *param_1,uint *param_2);
int FUN_1007002a(float *param_1,byte *param_2);
int FUN_10070050(undefined4 *param_1,undefined4 param_2,int param_3);
int FUN_10070089(char *param_1,undefined4 param_2,int param_3);
undefined8 * FUN_100700c2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
float * FUN_1007013d(float *param_1,float *param_2);
void FUN_1007031c(float *param_1,float *param_2);
float * FUN_10070448(float *param_1,float *param_2,float *param_3);
undefined8 * FUN_10070488(undefined8 *param_1,float *param_2,float *param_3);
undefined8 * FUN_100704e1(undefined8 *param_1,float *param_2,float *param_3);
void FUN_1007051a(float *param_1,float *param_2,float *param_3);
undefined8 * FUN_100705da(undefined8 *param_1,float *param_2,undefined8 *param_3);
float * FUN_10070710(float *param_1,float *param_2);
float * FUN_100707a4(float *param_1,float *param_2);
float * FUN_10070907(float *param_1,float *param_2);
undefined8 *FUN_100709a3(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,float param_6);
undefined8 *FUN_10070a57(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,float param_6);
float * FUN_10070ade(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
undefined8 *FUN_10070b85(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,float param_6);
float * FUN_10070c3a(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
undefined8 *FUN_10070cd6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,float param_6);
undefined8 *FUN_10070d5e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,float param_5,float param_6);
float * FUN_10070dba(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6);
undefined8 *FUN_10070e02(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,float param_5,float param_6);
undefined8 *FUN_10070e53(undefined8 *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4);
void FUN_1007180f(undefined8 *param_1,undefined8 *param_2,float *param_3);
void FUN_100718db(float *param_1,undefined8 *param_2,float *param_3);
void FUN_100719a2(undefined8 *param_1,undefined8 *param_2,float *param_3);
void __thiscall FUN_10071a96(void *this,undefined4 *param_1);
void FUN_10072774(void);
int FUN_1007289e(int param_1,int param_2,uint param_3);
void FUN_100734ec(void);
int FUN_100735df(int param_1,undefined8 *param_2,uint param_3);
float * FUN_100736b3(float *param_1,float *param_2);
float * FUN_10073747(float *param_1,float *param_2);
float * FUN_10074040(float *param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6);
float * FUN_10074100(float *param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6);
float * FUN_10074840(float *param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6);
void FUN_10074f72(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3);
void FUN_100754ac(undefined8 *param_1,ulonglong *param_2,uint param_3);
void FUN_10075518(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4);
undefined8 *FUN_1007564f(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,uint param_5,uint param_6);
void FUN_100756dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,uint param_6);
void FUN_100757d2(undefined8 *param_1,undefined8 *param_2);
void FUN_1007591e(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,ulonglong *param_5,ulonglong *param_6,ulonglong *param_7);
void FUN_10076bce(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7);
void FUN_10077dca(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
void FUN_100784a3(undefined8 *param_1,ulonglong *param_2);
void FUN_100785be(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7);
void FUN_10079776(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3);
undefined8 * FUN_10079e50(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3);
undefined8 * FUN_1007a186(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3);
undefined8 * FUN_1007a1a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1007a217(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_1007a280(undefined8 *param_1,ulonglong *param_2);
undefined8 * FUN_1007a50e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1007a59b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_1007a764(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
ulonglong *FUN_1007a76f(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,undefined8 *param_6);
ulonglong *FUN_1007ab18(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,undefined8 *param_6);
ulonglong * FUN_1007acc0(ulonglong *param_1,undefined4 *param_2,uint param_3);
undefined8 * FUN_1007af7b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1007afd2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1007b00d(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1007b242(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_1007b855(undefined8 *param_1,ulonglong *param_2);
undefined4 __fastcall FUN_1007b940(undefined4 param_1,int param_2);
void FUN_1007b9c0(int *param_1);
void FUN_1007bbd0(void);
void FUN_1007bc50(void);
void FUN_1007be00(int *param_1);
void FUN_1007bf30(int param_1);
void FUN_1007bf60(int param_1);
void FUN_1007bfa0(void);
uint FUN_1007c180(void);
void FUN_1007c310(void);
void FUN_1007c3b0(int param_1);
int FUN_1007c3f0(int *param_1);
void FUN_1007c4c0(int *param_1);
void FUN_1007c510(int param_1);
void FUN_1007c530(int param_1);
int FUN_1007c580(int *param_1,int param_2,uint param_3);
undefined4 * FUN_1007c6c0(int *param_1,int param_2,uint param_3);
int FUN_1007c770(int *param_1,int param_2,uint param_3,uint param_4);
int FUN_1007c820(int *param_1,int param_2,int param_3,uint param_4);
void FUN_1007c8d0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_1007c940(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_1007c9b0(int *param_1);
void FUN_1007cb50(undefined4 param_1,int param_2);
void FUN_1007cbf0(undefined4 param_1,int param_2);
int FUN_1007cca0(int *param_1,int *param_2,uint param_3,uint param_4,int param_5);
int FUN_1007cde0(int *param_1,int *param_2,uint param_3,uint param_4,int param_5);
void FUN_1007cf20(int *param_1,int param_2);
void FUN_1007d020(int *param_1);
void FUN_1007d060(int *param_1);
void FUN_1007d120(int param_1);
void FUN_1007d160(int param_1);
void FUN_1007d190(int param_1);
void FUN_1007d1c0(int param_1);
int FUN_1007d1f0(int param_1,int param_2);
int FUN_1007d210(int param_1,int param_2);
void FUN_1007d230(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void FUN_1007d280(undefined4 *param_1,undefined4 *param_2,uint param_3);
void FUN_1007d2b0(undefined4 *param_1,uint param_2);
undefined4 * FUN_1007d2d1(int param_1);
void FUN_1007d319(void *param_1);
void * FUN_1007d331(int *param_1,size_t param_2);
void FUN_1007d36a(int param_1,void *param_2);
undefined4 * FUN_1007d388(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4);
undefined4 * FUN_1007d3b0(undefined4 param_1,undefined4 *param_2,undefined1 param_3,uint param_4);
uint FUN_1007d3e6(uint param_1,byte *param_2,uint param_3);
void FUN_1007d4db(void);
char * __thiscall FUN_1007d52f(void *this,uint param_1);
void FUN_1007d679(void);
char FUN_1007d7d1(int *param_1,int param_2);
undefined4 FUN_1007df0a(int param_1);
undefined4 FUN_1007df49(int param_1);
undefined4 FUN_1007df86(int param_1,int param_2,char *param_3,int param_4);
void FUN_1007e065(int param_1,char *param_2,int param_3);
byte * FUN_1007e07b(int *param_1,int param_2);
undefined4 FUN_1007e3de(undefined1 *param_1);
int FUN_1007e408(byte *param_1);
void FUN_1007e422(int *param_1,byte *param_2,uint param_3);
bool FUN_1007e43b(int *param_1);
void FUN_1007e499(int *param_1,byte *param_2);
void FUN_1007e4ff(int param_1,byte *param_2,uint param_3);
void FUN_1007e717(uint *param_1,int *param_2,int param_3);
void FUN_1007e9e4(int param_1,int param_2,byte *param_3,byte *param_4,byte *param_5);
void FUN_1007eb5d(int *param_1);
undefined4 FUN_1007ecfc(int *param_1,uint param_2);
void FUN_1007ed85(int *param_1,uint *param_2,int param_3);
void FUN_1007ef67(int *param_1,int param_2,uint param_3);
void FUN_1007f082(int *param_1,undefined4 param_2,uint param_3);
void FUN_1007f0ca(int *param_1,int param_2,uint param_3);
void FUN_1007f1cd(int *param_1,int param_2,uint param_3);
void FUN_1007f2b1(int *param_1,int param_2,uint param_3);
void FUN_1007f445(int *param_1,int param_2,uint param_3);
void __thiscall FUN_1007f48e(void *this,int *param_1);
void FUN_1007f6a8(uint *param_1,uint *param_2,uint *param_3);
void FUN_1007f894(uint *param_1,uint *param_2,uint *param_3);
ulonglong FUN_1007fac0(void);
ulonglong FUN_1007fbc0(void);
uint FUN_100801a0(void);
uint FUN_100802a0(void);
void FUN_10080660(void);
void __fastcall FUN_10080710(int param_1);
void FUN_10080850(void);
void FUN_10080930(void);
void FUN_100809e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10080a60(int param_1,undefined4 param_2,uint *param_3,uint param_4);
void FUN_10080b90(int *param_1,int param_2);
void FUN_10080c00(int *param_1,int param_2);
void __fastcall FUN_10080ce0(int param_1);
void FUN_10080d30(int param_1);
undefined4 FUN_10080d50(int param_1,int param_2);
undefined4 FUN_10080fc0(int param_1);
int FUN_100811e0(int param_1,int param_2);
undefined4 FUN_10081360(int param_1);
int FUN_10081490(int param_1,int param_2);
void FUN_10081a30(int param_1);
void FUN_10081a90(int param_1,undefined4 *param_2);
void FUN_10081be0(int *param_1,int param_2,int param_3,int *param_4);
undefined4 FUN_10081e70(undefined4 *param_1,uint param_2,int param_3,int param_4);
uint FUN_10081f90(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5);
undefined4 FUN_10082080(void);
undefined4 FUN_100820f0(int param_1,int param_2);
void FUN_100824c0(int *param_1);
void FUN_10082620(int param_1);
undefined4 FUN_10082670(void);
undefined4 FUN_100826e0(uint param_1,int param_2);
undefined4 FUN_10082910(int param_1,int *param_2);
undefined4 FUN_10082b40(int param_1,int param_2);
undefined4 FUN_10082c30(int *param_1,int *param_2);
void FUN_10082fd0(int *param_1);
void FUN_10083220(int param_1);
void FUN_10083290(int *param_1);
void FUN_100835f0(undefined4 *param_1);
void FUN_10083680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void FUN_10083700(int *param_1,int param_2);
void FUN_10083780(int *param_1,int param_2);
void FUN_100837f0(int param_1);
void FUN_10083820(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void FUN_10083910(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void FUN_10083930(void);
void FUN_10083950(int param_1,int param_2,undefined4 *param_3,int *param_4);
void FUN_10083a40(int param_1,undefined4 param_2,int param_3,undefined4 *param_4);
void FUN_10083aa0(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4);
void __fastcall FUN_10083b20(int param_1,int param_2,int param_3);
void __thiscall FUN_10083be0(void *this,int param_1,int param_2);
void __fastcall FUN_10083e70(undefined4 param_1,int param_2,int param_3,undefined4 *param_4);
void __fastcall FUN_10083fa0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4);
void FUN_10084570(int *param_1,void *param_2,int param_3);
void __thiscall FUN_100845f0(void *this,int *param_1,int param_2,undefined4 *param_3);
void FUN_10084670(int *param_1);
void FUN_10084870(void);
void FUN_10084950(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void FUN_10084a70(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void FUN_10084bb0(int param_1,int param_2,int param_3,int *param_4,int param_5);
void FUN_10084c40(int param_1,int *param_2,int param_3,int param_4,int param_5);
void FUN_10084c70(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void FUN_10084cd0(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void FUN_10084e10(void);
void FUN_10085230(undefined1 *param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void FUN_100853e0(int param_1,int *param_2,int param_3,int *param_4,int param_5);
void FUN_100855e0(int *param_1);
void FUN_100857c0(void);
void FUN_100858a0(int param_1);
void FUN_100858c0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void FUN_10085990(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6);
void FUN_100859d0(int param_1,int *param_2,int param_3,undefined4 *param_4);
void __fastcall FUN_10085b20(int *param_1,int param_2,undefined4 *param_3);
void __fastcall FUN_10085d10(int param_1,int param_2,byte *param_3);
void FUN_10086220(int param_1,byte *param_2,int param_3,undefined4 *param_4);
void FUN_10086270(int param_1);
void FUN_10086300(undefined4 param_1,int param_2);
void FUN_10086320(undefined4 param_1,int param_2);
int FUN_10086350(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_10086370(int *param_1,int param_2,void *param_3,long param_4,size_t param_5);
void FUN_100863d0(int *param_1,int param_2,void *param_3,long param_4,size_t param_5);
void FUN_10086430(undefined4 param_1,int param_2);
void FUN_10086450(int *param_1,undefined4 *param_2);
undefined4 FUN_100864b0(void);
uint FUN_100864b8(uint param_1,byte *param_2,uint param_3);
void FUN_100865d3(void);
void FUN_10086631(int param_1);
void __fastcall FUN_100866e3(undefined4 param_1,int param_2);
void scan_tree(int param_1);
void __fastcall FUN_10086959(int param_1,int param_2);
void FUN_10086df6(int param_1,int param_2,int param_3);
void FUN_10087031(int param_1,int param_2);
void __fastcall FUN_100873e5(int param_1);
void FUN_1008743a(void);
void __fastcall FUN_10087491(int param_1,undefined1 *param_2,int param_3);
void __fastcall FUN_1008750b(undefined4 param_1,int param_2,int param_3);
void FUN_1008757b(int *param_1);
void FUN_1008775e(void);
void FUN_100877b8(int param_1,undefined1 *param_2,int param_3,int param_4);
void FUN_10087844(int param_1,undefined1 *param_2,int param_3,int param_4);
void FUN_100879fb(undefined4 param_1,int param_2,int param_3);
void FUN_10087a2d(int *param_1,int param_2,int *param_3);
int * FUN_10087a93(int param_1);
void FUN_10087b11(uint *param_1,int *param_2,byte *param_3);
undefined4 FUN_1008825d(int *param_1,int param_2);
void FUN_10088290(int param_1,int param_2,short *param_3,int param_4,int param_5);
void FUN_10088660(int param_1,int param_2,short *param_3,int param_4,int param_5);
void FUN_10088aa0(int param_1,short *param_2,short *param_3,int param_4,int param_5);
void FUN_10088f90(short *param_1,short *param_2,int *param_3,int param_4,int param_5,int param_6);
void FUN_10089420(int param_1,int param_2,short *param_3,int param_4,int param_5);
void FUN_10089460(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,int param_6);
void FUN_10089b80(int param_1,int param_2,undefined8 *param_3,int param_4,int param_5);
void FUN_10089bc0(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_10089ed0(int param_1,int param_2,short *param_3,int *param_4,int param_5);
void FUN_1008a380(int param_1,int param_2,ushort *param_3,int *param_4,int param_5);
void FUN_1008a3d0(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5);
void FUN_1008a510(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_1008a543(undefined1 *param_1,int *param_2,int param_3);
void FUN_1008aa9a(undefined4 param_1,int param_2);
undefined4 FUN_1008aaab(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,int param_7,uint *param_8,uint *param_9);
int FUN_1008ae2a(uint *param_1,int *param_2,int *param_3,int param_4,int param_5);
int FUN_1008aea3(uint param_1,uint param_2,uint *param_3,int *param_4,int *param_5,int *param_6,int *param_7,int param_8,int param_9);
undefined4 FUN_1008af9d(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int FUN_1008afce(undefined1 *param_1,int param_2,int param_3);
undefined4 FUN_1008b0df(uint param_1,int param_2,int param_3,int param_4,int param_5,int *param_6);
void DirectInput8Create(void);
uint FUN_1008c470(void);
undefined4 FUN_1008c4a7(void);
uint FUN_1008c4fb(int param_1);
uint FUN_1008c587(int param_1);
int FUN_1008c5e5(undefined4 param_1);
uint FUN_1008c611(int param_1);
void FUN_1008c65b(void);
void FUN_1008c815(void);
float10 FUN_1008c8b1(void);
int FUN_1008c8b8(void);
undefined4 FUN_1008c8dc(void);
undefined4 FUN_1008c8f7(void);
undefined * FUN_1008c91f(int param_1);
undefined4 FUN_1008c971(void);
int FUN_1008c98f(void);
undefined4 FUN_1008c9e5(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 FUN_1008ca44(void);
uint FUN_1008ca4a(int param_1,int param_2,uint param_3);
uint __cdecl FUN_1008d08b(int param_1);
void __cdecl FUN_1008d11a(int param_1,uint param_2);
int * __cdecl FUN_1008d15a(int param_1,uint param_2,char *param_3);
undefined4 * __cdecl FUN_1008d1f4(int param_1,int param_2);
int __cdecl FUN_1008d215(int param_1,uint param_2,int param_3);
int __cdecl FUN_1008d26d(int param_1,uint param_2,int param_3);
void __cdecl FUN_1008d2d0(uint param_1,int param_2,uint param_3,int param_4);
void __cdecl FUN_1008d5ce(int param_1,uint param_2,uint param_3);
void __cdecl FUN_1008d67b(size_t param_1);
int * __cdecl FUN_1008d7b6(int *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7);
uint __cdecl FUN_1008da7e(int param_1,char param_2);
void FUN_1008dbd7(int param_1);
bool FUN_1008dbe7(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_1008dc2d(int param_1);
undefined8 __cdecl FUN_1008dce3(int param_1,char param_2,uint *param_3);
int FUN_1008de1e(int param_1);
undefined4 FUN_1008df07(int param_1);
bool FUN_1008df43(int *param_1);
bool FUN_1008df9e(int param_1);
void __cdecl FUN_1008dfd6(int param_1);
void FUN_1008e002(void);
undefined4 FUN_1008e0fe(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_1008e27f(size_t param_1);
void __cdecl FUN_1008e406(int param_1);
uint FUN_1008e654(int *param_1);
uint __thiscall FUN_1008e876(void *this,uint param_1,uint param_2,char param_3,char param_4);
void __thiscall FUN_1008e96c(void *this,uint param_1,uint param_2);
undefined4 __cdecl FUN_1008e983(uint param_1,int param_2,char param_3,char param_4);
undefined4 FUN_1008efc9(void);
undefined4 FUN_1008f0fd(uint param_1,ushort *param_2,size_t param_3);
int * __cdecl FUN_1008f598(int *param_1,char *param_2,uint param_3,int param_4,int param_5,char param_6);
int * FUN_10090418(char *param_1,uint param_2,int param_3,int param_4);
int FUN_1009054c(uint param_1,void *param_2,int *param_3,undefined4 param_4);
void FUN_1009074f(int *param_1);
undefined4 __cdecl FUN_100908b1(uint *param_1,uint *param_2,size_t param_3,uint param_4,uint param_5,int param_6);
undefined1 __cdecl FUN_10090b53(size_t param_1,uint *param_2,undefined4 param_3,int param_4,uint param_5);
undefined1 FUN_10090c7f(size_t param_1,uint *param_2,uint param_3);
uint FUN_10090d2a(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7);
undefined4 FUN_10090dc7(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
uint FUN_10090e10(int param_1,float param_2,float param_3);
uint FUN_10090e96(int param_1,undefined4 *param_2,undefined4 *param_3);
bool FUN_10090eea(int param_1,undefined4 param_2);
void __cdecl FUN_10090f26(int param_1);
uint FUN_100911a5(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
undefined4 FUN_1009124d(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8);
void _Dns_StartDebug@20(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
int * __cdecl FUN_1009130b(int param_1,uint param_2);
int * __cdecl FUN_100915d3(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
uint FUN_10091689(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7);
undefined4 FUN_10091719(int param_1,uint param_2);
uint FUN_100917b0(int param_1,int param_2,int param_3);
int * __cdecl FUN_1009182d(int param_1,uint *param_2,undefined1 *param_3,int param_4,int param_5,int param_6);
void FUN_10091dc9(int param_1,uint *param_2,undefined1 *param_3,int param_4,int param_5);
undefined4 __cdecl FUN_10091de9(uint param_1);
int __cdecl FUN_10091e47(uint param_1);
undefined1 FUN_10091eb9(uint param_1);
undefined1 FUN_10091f64(uint param_1,int param_2);
undefined4 FUN_10092001(uint param_1);
undefined1 FUN_1009204c(uint param_1);
undefined1 __cdecl FUN_10092151(uint param_1,int param_2);
undefined1 FUN_10092214(uint param_1,char param_2);
uint FUN_10092296(uint param_1);
undefined1 FUN_100922e6(uint param_1,undefined4 param_2);
uint FUN_10092384(uint param_1);
undefined1 FUN_100923cb(uint param_1,undefined4 param_2);
undefined1 FUN_10092443(uint param_1,char param_2);
undefined1 FUN_100924c5(uint param_1,uint param_2);
undefined4 FUN_10092560(uint param_1);
undefined4 FUN_100925a6(uint param_1);
uint FUN_100925e7(uint param_1);
undefined1 FUN_1009262d(uint param_1,uint param_2);
uint FUN_10092724(uint param_1,int param_2);
undefined1 FUN_100927fa(uint param_1,uint param_2);
int __cdecl FUN_100928a6(uint param_1,uint *param_2,int param_3,int param_4,uint param_5,char param_6);
uint __cdecl FUN_10092c8a(uint *param_1,int param_2,int param_3,int *param_4,undefined4 param_5);
void FUN_10092f40(uint param_1,int param_2,int *param_3,undefined4 param_4);
void FUN_10092fc7(uint param_1,int param_2);
void FUN_10093052(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined1 FUN_10093193(uint param_1,float *param_2,float *param_3);
float10 __cdecl FUN_10093308(int param_1);
void FUN_10093380(void);
uint __cdecl FUN_10093401(DWORD param_1);
uint __cdecl FUN_1009353c(size_t param_1);
undefined4 __cdecl FUN_10093670(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,int *param_7);
undefined4 __cdecl FUN_1009374a(int param_1);
void FUN_100938b4(void);
uint __cdecl FUN_1009392f(int param_1,uint param_2,DWORD param_3);
uint FUN_10093949(void);
uint __cdecl FUN_10093c53(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void FUN_10093d3f(void);
undefined1 FUN_10093efa(void);
undefined1 __cdecl FUN_100942c4(void *param_1);
uint __cdecl FUN_100945ea(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
uint __cdecl FUN_10094690(int param_1,byte *param_2,byte *param_3,int param_4,int param_5);
undefined1 __cdecl FUN_10094707(undefined4 param_1,int param_2,int param_3);
undefined4 __cdecl FUN_100947e8(int param_1);
undefined1 __cdecl FUN_10094880(int param_1,int param_2);
uint __cdecl FUN_100949c3(int param_1,int param_2);
uint __cdecl FUN_10094a39(int param_1,int param_2);
uint __cdecl FUN_10094a8f(uint param_1);
uint __cdecl FUN_10094af0(int param_1);
void FUN_10094b68(void);
undefined1 __cdecl FUN_10094d6a(int param_1);
int __cdecl FUN_10094e80(undefined4 *param_1,undefined1 param_2);
bool __cdecl FUN_10095259(int param_1,int param_2,undefined4 param_3);
void __thiscall FUN_100952d8(void *this,int param_1);
void __fastcall FUN_10095354(undefined4 param_1);
void FUN_100953cb(void);
undefined1 __cdecl FUN_1009556b(uint param_1,char param_2);
void __cdecl FUN_100956a1(uint *param_1,int param_2);
undefined4 __cdecl FUN_100958a6(undefined4 param_1,int param_2);
uint FUN_10095c91(void);
uint FUN_10095e7f(void);
undefined4 __cdecl FUN_10095f1d(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,int *param_7);
void __cdecl FUN_10095fcb(int param_1);
void FUN_10096019(void);
void FUN_100962d9(void);
undefined FUN_1009644f(void);
undefined4 __cdecl FUN_10096637(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6);
void __cdecl FUN_10096657(int param_1);
void __cdecl FUN_1009668b(int param_1);
DWORD GetCurrentThreadId(void);
HANDLE __cdecl FUN_1009677c(undefined4 param_1,LPTHREAD_START_ROUTINE param_2,LPVOID param_3,int param_4);
void __cdecl FUN_100967c9(undefined4 param_1,LPTHREAD_START_ROUTINE param_2,LPVOID param_3,int param_4);
void __cdecl FUN_100967e7(HANDLE param_1);
LPCRITICAL_SECTION FUN_100967fd(void);
void __cdecl FUN_10096833(LPCRITICAL_SECTION param_1);
void __cdecl FUN_1009685a(LPCRITICAL_SECTION param_1);
void __cdecl FUN_1009686c(LPCRITICAL_SECTION param_1);
HANDLE FUN_1009687e(void);
void __cdecl FUN_10096899(HANDLE param_1);
void __cdecl FUN_100968ab(HANDLE param_1);
void __cdecl FUN_100968bf(HANDLE param_1);
undefined4 FUN_100968d1(void);
int * __cdecl FUN_10096901(char *param_1,char param_2,int param_3);
void FUN_10096ab6(void);
size_t __cdecl FUN_10096b21(void *param_1,int param_2,int param_3,uint *param_4);
uint __cdecl FUN_10096d73(uint *param_1,uint param_2,undefined4 param_3);
uint __cdecl FUN_10096ee0(uint *param_1);
void __cdecl FUN_10096f2e(int param_1);
void __cdecl FUN_10096f45(int param_1,undefined4 param_2);
void __cdecl FUN_10096f55(int param_1,undefined4 param_2);
void __cdecl FUN_10096f65(uint *param_1);
size_t __cdecl FUN_10096fde(void *param_1,int param_2,int param_3,uint *param_4);
undefined1 __cdecl FUN_100970ab(uint *param_1);
undefined2 __cdecl FUN_100970d0(uint *param_1);
uint __cdecl FUN_100970f7(uint *param_1,uint param_2,undefined4 param_3);
void FUN_100971d6(size_t param_1);
void FUN_100971e4(void *param_1,size_t param_2);
void FUN_100971f7(void *param_1);
void __cdecl FUN_10097205(int *param_1,int param_2,int param_3,size_t param_4);
int * __cdecl FUN_10097221(int *param_1,int param_2);
void __cdecl FUN_10097322(int *param_1,int *param_2);
int * __cdecl FUN_1009737a(int *param_1,size_t param_2);
int * __cdecl FUN_100973c4(int *param_1,int *param_2,int param_3);
void __cdecl FUN_1009759f(void *param_1);
bool FUN_100976e5(void);
uint FUN_100977dd(void);
void FUN_10097895(void);
uint __cdecl FUN_1009790f(int param_1);
uint __cdecl FUN_10097974(int param_1);
uint __cdecl FUN_10097b19(int param_1,char *param_2,uint *param_3);
int FUN_10097dc7(undefined4 param_1,int param_2,int param_3);
undefined4 FUN_10097df0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_10097e33(undefined4 param_1,int param_2,int param_3);
undefined4 FUN_100980f7(undefined4 param_1,undefined4 param_2,uint param_3);
void __cdecl FUN_10098172(int param_1,undefined4 param_2);
undefined4 FUN_100982d2(void);
void FUN_1009830c(void);
uint __cdecl FUN_10098452(int param_1);
uint __cdecl FUN_100985b1(size_t param_1,int param_2,size_t param_3,int *param_4,undefined4 *param_5,size_t *param_6,int *param_7);
undefined4 __cdecl FUN_100987dc(int param_1,undefined2 *param_2,undefined2 *param_3,uint param_4,uint param_5);
undefined4 __cdecl FUN_10098a36(int param_1);
undefined4 __cdecl FUN_10098a95(int param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_10098bef(int param_1);
undefined4 __cdecl FUN_10098c89(int param_1,float param_2);
undefined4 __cdecl FUN_10098d97(int param_1,int param_2);
undefined4 __cdecl FUN_10098e08(int param_1,int param_2);
undefined4 __cdecl FUN_10098e7a(int param_1,uint param_2);
void __cdecl FUN_10098eb6(int param_1,int *param_2,int *param_3);
undefined4 __cdecl FUN_1009945b(int param_1,float *param_2,float *param_3);
uint __fastcall FUN_100995ee(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_1009993d(int param_1);
void __cdecl FUN_1009996a(undefined4 *param_1);
int __thiscall FUN_10099a20(void *this,byte param_1,byte param_2);
char * __cdecl FUN_10099a43(int param_1,int *param_2);
uint FUN_10099a75(void);
void __cdecl FUN_10099ae1(char param_1);
int FUN_10099b77(void);
undefined1 __cdecl FUN_10099be1(uint param_1,uint *param_2);
uint FUN_10099d0e(void);
void __cdecl FUN_10099d26(int param_1);
int __cdecl FUN_10099d91(int param_1,int param_2,int param_3);
void __cdecl FUN_10099dc9(int param_1);
bool __cdecl FUN_10099dda(undefined1 param_1,undefined1 param_2);
char __cdecl FUN_10099e17(int param_1);
char __cdecl FUN_10099e55(int param_1,byte param_2,void *param_3,size_t param_4,undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9);
char __cdecl FUN_10099f4d(int param_1,byte param_2,void *param_3,size_t param_4,undefined4 param_5,undefined4 param_6);
uint __cdecl FUN_10099f7f(int param_1,int param_2,int param_3);
void __cdecl FUN_1009a138(int param_1,uint param_2);
uint __cdecl FUN_1009a18a(int param_1,int *param_2);
uint __cdecl FUN_1009a330(int param_1,int *param_2);
uint __cdecl FUN_1009a64c(int param_1,undefined2 *param_2,undefined4 param_3,int param_4);
uint __cdecl FUN_1009a7b5(int param_1,int param_2);
undefined4 __thiscall FUN_1009a8b0(void *this,int param_1,char param_2);
undefined4 __cdecl FUN_1009a8fd(int param_1);
uint __thiscall FUN_1009a943(void *this,int *param_1);
int __cdecl FUN_1009a9dc(int param_1,int param_2);
undefined4 __cdecl FUN_1009aa01(int param_1,int param_2);
int __cdecl FUN_1009ab72(int param_1,uint param_2,char param_3);
int * __cdecl FUN_1009abe2(char param_1);
undefined1 __cdecl FUN_1009afcb(int param_1);
void FUN_1009afda(void);
bool __thiscall FUN_1009b08d(void *this,int *param_1);
uint __fastcall FUN_1009b0a7(void *param_1);
uint FUN_1009b11e(void);
char __cdecl FUN_1009b1e3(int param_1);
uint __cdecl FUN_1009b223(int param_1,char param_2);
undefined1 __cdecl FUN_1009b3cc(undefined1 param_1,undefined1 param_2,undefined1 param_3);
uint __cdecl FUN_1009b411(int *param_1,int param_2,int param_3);
int __cdecl FUN_1009b51e(int *param_1,int param_2);
uint __cdecl FUN_1009b561(int param_1);
uint FUN_1009b5db(int param_1,undefined4 param_2,undefined4 param_3,void *param_4,size_t *param_5);
uint __cdecl FUN_1009b6ce(char param_1);
undefined4 __cdecl FUN_1009b8b6(undefined4 param_1,char *param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6,undefined4 *param_7,int *param_8,undefined4 *param_9,undefined4 param_10,int *param_11);
void FUN_1009bb92(void);
void __cdecl FUN_1009bbbe(int param_1);
int __cdecl FUN_1009bc17(int param_1);
void __cdecl FUN_1009bcd1(int param_1);
void __cdecl FUN_1009bcee(DWORD_PTR param_1);
uint FUN_1009bd44(void);
uint FUN_1009bd88(void);
uint FUN_1009bdcc(void);
undefined4 FUN_1009be10(void);
uint FUN_1009be80(undefined4 param_1);
undefined4 FUN_1009bee7(undefined4 param_1,char param_2);
undefined4 FUN_1009bf5e(void);
uint FUN_1009bf9a(char param_1,uint param_2,uint param_3);
void FUN_1009c105(char param_1,uint param_2);
undefined4 FUN_1009c117(void);
void FUN_1009c158(HWND param_1,UINT param_2,uint param_3,char *param_4);
uint __cdecl FUN_1009c346(int *param_1);
int * __cdecl FUN_1009c537(char param_1);
bool __cdecl FUN_1009c5cf(HMIXEROBJ param_1,DWORD param_2,DWORD param_3,void *param_4,undefined4 *param_5);
bool __cdecl FUN_1009c6cd(HMIXEROBJ param_1,undefined4 param_2,DWORD param_3);
void FUN_1009c753(void);
void FUN_1009c7ce(void);
void __cdecl FUN_1009c805(int param_1,undefined4 param_2);
void FUN_1009c8bf(void);
void FUN_1009c8fa(void);
uint FUN_1009cb75(void);
void __cdecl FUN_1009cbc8(char *param_1);
int * __cdecl FUN_1009cbe5(char *param_1);
uint __cdecl FUN_1009cc22(int *param_1);
uint __cdecl FUN_1009ccab(char *param_1,int param_2,undefined4 *param_3,int *param_4);
int __thiscall FUN_1009cd3f(void *this,undefined4 *param_1,int *param_2);
uint __cdecl FUN_1009d4e5(int param_1);
undefined4 FUN_1009d54f(void);
undefined4 __cdecl FUN_1009d5c4(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_1009d5f4(int param_1,undefined4 *param_2,char *param_3,size_t param_4,char *param_5,int param_6,undefined4 *param_7);
uint __cdecl FUN_1009d785(int param_1,char *param_2,uint *param_3,undefined4 *param_4,int *param_5,int *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,int *param_11,undefined4 param_12,int *param_13);
undefined4 __cdecl FUN_1009db1e(undefined1 param_1);
void __cdecl FUN_1009dbcf(int param_1,int param_2);
int * __cdecl FUN_1009dc20(int param_1,int param_2,int param_3);
int * __cdecl FUN_1009dd80(int *param_1);
uint FUN_1009de2f(int param_1);
void FUN_1009df1c(void);
undefined4 FUN_1009df43(int param_1,undefined1 param_2);
undefined4 * __cdecl FUN_1009df88(int param_1,uint param_2,uint param_3);
int __cdecl FUN_1009e18d(int param_1,char *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7);
void __cdecl FUN_1009e322(void *param_1,void *param_2);
uint FUN_1009e4dc(void);
int FUN_1009e504(void);
uint FUN_1009e554(void);
void __cdecl FUN_1009e563(DWORD param_1);
void __cdecl FUN_1009e579(int *param_1);
float10 __cdecl FUN_1009e585(uint *param_1,int param_2);
void __cdecl FUN_1009e616(int param_1,int param_2);
void FUN_1009e9a8(void);
void thunk_FUN_100b35ca(void);
int __cdecl FUN_1009ea0a(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,uint *param_5);
bool FUN_1009ea59(int *param_1);
uint __cdecl FUN_1009ea8c(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,int *param_10);
uint __cdecl FUN_1009ec37(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
void __cdecl FUN_1009edc0(int param_1);
void FUN_1009f170(void);
int __cdecl FUN_1009f1a0(uint *param_1,uint param_2,int param_3,uint *param_4);
void FUN_1009f330(void);
undefined4 FUN_1009f380(int *param_1);
uint __cdecl FUN_1009f3b0(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint *param_5,undefined4 *param_6,undefined4 *param_7,uint *param_8,undefined4 *param_9,uint *param_10,undefined4 *param_11,int param_12);
uint __cdecl FUN_1009f7e0(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
int __cdecl FUN_1009fbdc(char *param_1);
char * __cdecl FUN_1009fbf0(char *param_1,char *param_2);
char * __cdecl FUN_1009fc07(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_1009fc2a(char *param_1,char *param_2);
char * __cdecl FUN_1009fc49(char *param_1,char *param_2,int param_3);
char __cdecl FUN_1009fc7c(char param_1);
int __cdecl FUN_1009fc8b(char *param_1,char *param_2);
int __cdecl FUN_1009fcac(char *param_1,char *param_2,int param_3);
int __cdecl FUN_1009fcd8(char *param_1,char *param_2);
int __cdecl FUN_1009fd0e(char *param_1,char *param_2,int param_3);
int __cdecl FUN_1009fd4f(char *param_1,int param_2,int param_3);
undefined1 * __cdecl FUN_1009fd78(undefined1 *param_1,undefined1 *param_2,int param_3);
char * __cdecl FUN_1009fdb8(char *param_1,char *param_2);
uint FUN_1009fe02(int *param_1);
undefined4 FUN_1009fe81(int *param_1,char param_2);
uint __cdecl FUN_1009ff26(uint param_1,int param_2);
undefined4 __cdecl FUN_1009ff95(int param_1);
uint __cdecl FUN_100a0026(int param_1,uint param_2);
uint __cdecl FUN_100a007b(int param_1,undefined4 param_2);
undefined4 FUN_100a00ca(int param_1);
void __cdecl FUN_100a0111(int param_1);
uint __cdecl FUN_100a0148(uint *param_1,char *param_2,undefined4 param_3,undefined4 param_4,uint *param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8);
void FUN_100a03cb(void);
void FUN_100a03e9(int *param_1,int *param_2,int param_3);
void FUN_100a0463(int *param_1,int param_2);
void FUN_100a0498(int param_1,undefined1 param_2);
undefined4 FUN_100a04aa(int *param_1);
int * FUN_100a04e5(int param_1,int param_2,int param_3);
void FUN_100a054f(int *param_1);
bool FUN_100a061a(int param_1,uint *param_2,size_t param_3,uint *param_4,uint *param_5);
uint FUN_100a0774(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4,uint *param_5);
uint FUN_100a0841(int param_1,uint *param_2,undefined4 param_3,int param_4,int *param_5);
void FUN_100a09c1(int param_1,uint *param_2,size_t param_3,uint *param_4,uint *param_5);
uint FUN_100a09ca(int param_1,uint *param_2,undefined4 param_3,void *param_4,size_t *param_5);
bool FUN_100a0be6(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,size_t *param_5);
bool __cdecl FUN_100a0cb6(void *param_1,void *param_2);
uint __cdecl FUN_100a0cce(int param_1,int *param_2);
bool FUN_100a0db3(void);
undefined4 FUN_100a0df6(int *param_1);
uint __cdecl FUN_100a0e42(undefined4 *param_1,undefined4 param_2,undefined4 param_3,void *param_4,undefined4 *param_5);
undefined4 __cdecl FUN_100a0ed6(undefined4 *param_1,uint param_2);
undefined4 FUN_100a0fa9(int param_1,void *param_2,int param_3);
undefined4 FUN_100a1069(undefined4 *param_1);
uint __cdecl FUN_100a109a(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,int *param_5,undefined4 *param_6,undefined4 *param_7,uint *param_8,undefined4 *param_9,undefined4 *param_10);
uint __cdecl FUN_100a1529(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
void __cdecl FUN_100a1661(int param_1,int param_2);
undefined8 __cdecl FUN_100a1695(int *param_1,uint param_2,int param_3);
undefined8 __cdecl FUN_100a177c(int *param_1);
undefined4 __cdecl FUN_100a185b(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,uint param_6,int param_7,int param_8,int param_9);
int __thiscall FUN_100a1a59(void *this,void *param_1,int *param_2,int *param_3);
void __cdecl FUN_100a1b79(int param_1,int param_2);
void FUN_100a1e50(void);
void FUN_100a1e9c(void);
int __cdecl FUN_100a1ebe(undefined4 *param_1,int param_2,int param_3);
undefined4 __cdecl FUN_100a211f(int *param_1);
ulonglong __fastcall FUN_100a224c(undefined4 param_1,undefined4 param_2,int param_3);
longlong __cdecl FUN_100a22a6(int param_1,int param_2);
float10 __cdecl FUN_100a2317(float param_1,int param_2);
undefined4 __cdecl FUN_100a2386(int param_1,uint param_2,int param_3);
undefined4 __cdecl FUN_100a2658(int param_1,uint param_2,int param_3);
int __cdecl FUN_100a2b81(int param_1,uint param_2,int param_3);
undefined8 __cdecl FUN_100a2e01(int param_1);
int __cdecl FUN_100a2e1b(int param_1,int param_2);
int __cdecl FUN_100a2e49(int param_1,int param_2);
uint __cdecl FUN_100a2e77(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,undefined4 *param_7);
void __fastcall FUN_100a3131(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,int param_7);
int thunk_FUN_100a31f9(void);
int FUN_100a31f9(void);
int FUN_100a3202(void);
void __thiscall FUN_100a323c(void *this,int param_1,int param_2,int param_3,int param_4,int param_5);
int __cdecl FUN_100a3327(undefined4 param_1,undefined4 param_2,undefined *param_3);
void __cdecl FUN_100a3447(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_100a3461(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_100a347b(void);
int __cdecl FUN_100a3542(void *param_1,size_t param_2,int param_3,undefined *param_4,int param_5,int param_6);
uint FUN_100a3630(void);
void __cdecl FUN_100a3663(undefined4 param_1,undefined4 param_2,void *param_3,size_t param_4,int param_5,undefined *param_6,int param_7,int param_8);
uint __cdecl FUN_100a369d(int *param_1,int param_2);
uint __cdecl FUN_100a36f3(int *param_1);
bool __cdecl FUN_100a3749(int param_1,char *param_2,void *param_3,size_t param_4,int *param_5);
uint __cdecl FUN_100a37d0(uint *param_1,int *param_2);
uint __cdecl FUN_100a39fb(uint *param_1,int *param_2);
uint __cdecl FUN_100a3cc0(uint *param_1,int *param_2);
undefined4 __cdecl FUN_100a3d76(uint *param_1,int *param_2);
uint __cdecl FUN_100a41d7(uint *param_1,int *param_2);
undefined4 __cdecl FUN_100a439a(int *param_1,int *param_2);
uint __cdecl FUN_100a4435(int *param_1,char *param_2,int param_3,int *param_4,int *param_5);
uint __cdecl FUN_100a44b0(uint *param_1);
void __cdecl FUN_100a45d3(int param_1,int param_2,int param_3,byte param_4);
undefined4 __cdecl FUN_100a4660(int *param_1,char *param_2,undefined4 *param_3,int *param_4,int *param_5);
undefined4 __cdecl FUN_100a4890(uint *param_1,uint *param_2,int param_3,int *param_4);
void FUN_100a4980(int param_1);
void __fastcall FUN_100a49f0(float *param_1);
void __cdecl FUN_100a5660(int param_1,int param_2,undefined4 param_3,int param_4);
float10 __cdecl FUN_100a578e(byte *param_1);
uint __cdecl FUN_100a5852(uint *param_1,uint *param_2,int *param_3,uint *param_4,undefined4 *param_5,int param_6,uint *param_7);
undefined4 __cdecl FUN_100a5ca8(uint *param_1,uint *param_2,undefined4 *param_3,int *param_4,int *param_5,uint *param_6,uint *param_7,int param_8);
uint __cdecl FUN_100a5d23(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
uint __cdecl FUN_100a5ece(uint *param_1,int *param_2,uint *param_3,uint *param_4,undefined4 *param_5,int param_6,undefined4 *param_7);
uint __cdecl FUN_100a6282(uint *param_1,uint *param_2,int *param_3,uint *param_4,uint *param_5,int *param_6,uint *param_7,uint *param_8,undefined4 *param_9,int param_10);
undefined4 FUN_100a6531(int *param_1);
undefined4 __cdecl FUN_100a657e(undefined4 *param_1,uint *param_2,size_t param_3,uint *param_4,int *param_5);
int * __cdecl FUN_100a66bc(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
uint FUN_100a694f(int *param_1);
uint __cdecl FUN_100a6a38(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6,int *param_7,int *param_8,int param_9);
int * __cdecl FUN_100a6f45(undefined4 param_1,uint *param_2,uint param_3,undefined4 *param_4);
void FUN_100a72d3(int *param_1);
bool __cdecl FUN_100a72f4(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,size_t *param_5);
uint __cdecl FUN_100a734a(int param_1);
int __cdecl FUN_100a73b0(undefined4 *param_1,void *param_2,size_t param_3);
uint __cdecl FUN_100a741e(int *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9);
void FUN_100a7532(int *param_1);
int __cdecl FUN_100a755f(char *param_1,void *param_2,size_t param_3);
uint __cdecl FUN_100a7718(int *param_1,undefined4 *param_2,int *param_3,int *param_4);
uint __cdecl FUN_100a7aa2(int *param_1,uint *param_2,undefined4 *param_3,int *param_4,int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9);
uint __cdecl FUN_100a7c14(byte param_1);
bool __cdecl FUN_100a7c86(int *param_1);
undefined4 FUN_100a7ce6(void);
uint __cdecl FUN_100a7d0e(int param_1,char *param_2,uint param_3,char param_4);
uint __cdecl FUN_100a7e48(int param_1,undefined2 *param_2,uint param_3,char param_4);
int __cdecl FUN_100a7f80(byte param_1,int param_2,int param_3);
undefined1 __cdecl FUN_100a7fd9(uint *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6);
undefined1 __cdecl FUN_100a80f0(uint *param_1,uint *param_2,int param_3,int param_4,int param_5);
undefined4 __cdecl FUN_100a82ed(HMODULE param_1,char param_2);
undefined4 FUN_100a84a4(void);
uint __cdecl FUN_100a84bd(int param_1,uint param_2,int param_3);
int FUN_100a8655(void);
uint __cdecl FUN_100a86a7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
uint __cdecl FUN_100a8716(undefined4 param_1);
undefined1 FUN_100a8759(void);
undefined4 __fastcall FUN_100a8a25(undefined4 param_1);
uint __cdecl FUN_100a8a85(undefined4 *param_1);
uint __cdecl FUN_100a8b44(undefined4 *param_1);
uint __cdecl FUN_100a8c49(int param_1,undefined4 *param_2);
uint __cdecl FUN_100a8d38(undefined4 param_1);
undefined1 FUN_100a8d7b(void);
undefined4 __fastcall FUN_100a9105(undefined4 param_1);
uint __cdecl FUN_100a9165(undefined4 *param_1);
uint __cdecl FUN_100a9278(undefined4 *param_1);
uint __cdecl FUN_100a938b(int param_1,undefined4 *param_2);
undefined4 __cdecl FUN_100a949c(int param_1);
undefined4 FUN_100a951b(void);
undefined4 FUN_100a953d(void);
undefined4 FUN_100a9552(void);
undefined4 __cdecl FUN_100a9567(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_100a9591(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 __cdecl FUN_100a95ce(undefined4 param_1);
undefined4 __cdecl FUN_100a95e8(undefined8 param_1);
undefined4 __cdecl FUN_100a9607(undefined4 param_1,undefined4 param_2);
undefined4 __cdecl FUN_100a9625(int param_1);
undefined4 __cdecl FUN_100a965a(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_100a969b(void);
undefined4 FUN_100a96b0(void);
int * __fastcall FUN_100a96c5(int *param_1);
void __fastcall thunk_FUN_100a9b8e(undefined4 *param_1);
uint __thiscall FUN_100a96da(void *this,char *param_1);
void __fastcall FUN_100a9701(int param_1);
uint __thiscall FUN_100a9718(void *this,char *param_1);
undefined4 __cdecl FUN_100a97c7(char *param_1,LPBYTE param_2,DWORD param_3);
int * __cdecl FUN_100a993d(HKEY param_1,BYTE *param_2,int param_3,int *param_4);
void __cdecl FUN_100a9aaa(void *param_1);
void __cdecl thunk_FUN_100a9ae8(int param_1);
void __cdecl FUN_100a9ae8(int param_1);
int * __fastcall FUN_100a9aed(int *param_1);
void __fastcall FUN_100a9b8e(undefined4 *param_1);
undefined4 __fastcall FUN_100a9ba3(int param_1);
HRESULT FUN_100a9ba7(int param_1,LPVOID *param_2);
undefined4 FUN_100a9c04(int param_1);
undefined4 FUN_100a9c30(int param_1,char *param_2,uint param_3);
void __cdecl FUN_100a9ca2(int *param_1);
undefined8 __fastcall FUN_100a9d00(undefined4 param_1,undefined4 param_2);
undefined8 __fastcall FUN_100a9d2f(undefined4 param_1,undefined4 param_2);
undefined8 __fastcall FUN_100a9d5c(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_100a9d8d(undefined4 param_1,uint param_2);
int * __cdecl FUN_100a9de4(byte *param_1);
bool __cdecl FUN_100a9f41(char *param_1,int *param_2);
void __cdecl FUN_100a9f8a(char *param_1,int param_2);
undefined4 FUN_100aa058(void);
undefined1 FUN_100aa085(void);
void __cdecl FUN_100aa09d(int param_1);
void __cdecl FUN_100aa0be(undefined4 param_1);
int __cdecl FUN_100aa0c8(undefined4 param_1,char *param_2,int param_3);
uint __cdecl FUN_100aa207(char *param_1,char *param_2,int param_3,char *param_4,int param_5,int *param_6,char *param_7,int param_8);
undefined4 __cdecl FUN_100aa3c2(uint *param_1);
uint __cdecl FUN_100aa3d3(int *param_1);
undefined4 __cdecl FUN_100aa456(byte *param_1,int *param_2,int *param_3);
bool __cdecl FUN_100aa4b6(byte *param_1,undefined4 *param_2,undefined4 *param_3);
uint __cdecl FUN_100aa511(uint *param_1,char param_2);
int __cdecl FUN_100aa580(uint *param_1,void *param_2,size_t param_3);
int __cdecl FUN_100aa640(byte *param_1,void *param_2,size_t param_3);
int __thiscall FUN_100aa6c4(uint3 param_1,uint *param_2,int param_3,int param_4);
void __cdecl FUN_100aa741(byte *param_1,char *param_2,char param_3);
bool __cdecl FUN_100aa784(byte *param_1);
bool __cdecl FUN_100aa7a7(byte *param_1);
uint __cdecl FUN_100aa7c9(byte *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
undefined4 __cdecl FUN_100aa807(int param_1);
undefined4 FUN_100aa817(void);
undefined4 FUN_100aab95(void);
undefined4 FUN_100aabe2(void);
int * __cdecl FUN_100aac3a(int param_1);
uint __cdecl FUN_100aad0c(int param_1,uint param_2);
void __cdecl FUN_100aad24(int param_1);
void __cdecl FUN_100aad6c(int param_1);
void __cdecl FUN_100aadf8(int param_1);
void __cdecl FUN_100aae93(int param_1);
void __cdecl FUN_100ab448(int param_1);
uint __cdecl FUN_100ab976(int param_1,uint *param_2);
void __cdecl FUN_100ac079(int param_1);
void __cdecl FUN_100ac0b7(int param_1,int param_2);
void __cdecl FUN_100ac12c(int param_1,int param_2);
void __cdecl FUN_100ac1c6(int param_1,int param_2);
void __cdecl FUN_100ac25d(int param_1);
void __cdecl FUN_100ac2fc(int param_1);
void __cdecl FUN_100ac3a0(uint *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,int param_7,uint param_8,uint param_9,byte param_10);
void __cdecl FUN_100ac4e8(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_100ac960(int param_1);
void __cdecl FUN_100aca2d(int param_1,int param_2,char *param_3,char param_4);
void __cdecl FUN_100acbe9(int param_1);
void __cdecl FUN_100acd4b(uint param_1);
uint __cdecl FUN_100ae6d6(int param_1,uint *param_2);
int * __cdecl FUN_100af3b6(int param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_100af3e1(uint param_1,int param_2,int param_3);
void __cdecl FUN_100af560(int param_1);
void __cdecl FUN_100af5a3(int param_1);
void __cdecl FUN_100af61d(int param_1);
void __cdecl FUN_100af6ca(uint *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,uint param_7,byte param_8,byte param_9);
void __cdecl FUN_100af7d3(int param_1,int param_2);
void __cdecl FUN_100af8c2(int param_1,byte param_2);
int __cdecl FUN_100af98e(int param_1,int param_2);
void __cdecl FUN_100af9cd(char *param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_100afb4b(int param_1);
void __cdecl FUN_100b0382(int param_1);
uint __cdecl FUN_100b0b80(int param_1,uint *param_2);
void __cdecl FUN_100b160d(int param_1);
void __cdecl FUN_100b164d(int param_1);
void __cdecl FUN_100b16f6(int param_1);
void __cdecl FUN_100b177f(int param_1);
void __cdecl FUN_100b1f09(int param_1);
uint __cdecl FUN_100b2581(int param_1,uint *param_2);
uint __cdecl FUN_100b2eb2(int param_1,uint *param_2,uint param_3,int param_4,int param_5);
void FUN_100b35ca(void);
undefined * __cdecl FUN_100b36b1(int param_1,int param_2);
void __cdecl FUN_100b3730(int param_1);
undefined4 __cdecl FUN_100b4170(uint *param_1,int param_2,int param_3,int param_4);
undefined4 __thiscall FUN_100b47e0(void *this,int param_1,int param_2,int param_3);
int __fastcall FUN_100b4dc0(uint *param_1,int param_2);
int __fastcall FUN_100b5270(int param_1,uint *param_2,int param_3);
undefined4 __cdecl FUN_100b53e0(float *param_1,int *param_2,int param_3,int param_4,int param_5);
undefined4 __cdecl FUN_100b61a0(float *param_1,int *param_2,int param_3,int param_4,uint param_5);
void __fastcall FUN_100b7120(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5);
void __cdecl FUN_100b7700(float *param_1);
void __fastcall FUN_100b78f0(float *param_1,float *param_2,float *param_3);
void __fastcall FUN_100b7e90(undefined4 *param_1,float *param_2,float *param_3,undefined4 *param_4);
void __fastcall FUN_100b8390(int param_1,int param_2,float *param_3,float *param_4,int param_5);
undefined4 __cdecl FUN_100b8670(int param_1,int param_2,int param_3,int *param_4);
void FUN_100b89d0(void);
void __cdecl FUN_100b8b00(int param_1,int *param_2,int *param_3,uint *param_4);
void __cdecl FUN_100b8ff0(int param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_100b96b0(undefined4 *param_1);
undefined4 __cdecl FUN_100b9710(int param_1,int *param_2,int param_3,int *param_4);
byte __cdecl FUN_100b97db(int *param_1);
byte __cdecl FUN_100b97e9(int *param_1);
undefined8 __cdecl FUN_100b97f7(int *param_1);
undefined4 __cdecl FUN_100b987f(int *param_1);
undefined4 __cdecl FUN_100b98a0(int *param_1);
undefined4 __cdecl FUN_100b98c1(undefined4 *param_1,undefined4 param_2);
undefined4 __cdecl FUN_100b993f(undefined4 *param_1);
void __fastcall FUN_100b99aa(int param_1);
void __cdecl FUN_100b99f8(int *param_1);
undefined4 __cdecl FUN_100b9a8c(void *param_1);
undefined4 __cdecl FUN_100b9aa6(undefined4 *param_1);
int __cdecl FUN_100b9ad5(int *param_1,int param_2);
undefined4 __cdecl FUN_100b9b54(int param_1,int param_2);
int __cdecl FUN_100b9b70(int *param_1,int *param_2);
undefined4 __cdecl FUN_100b9cae(int *param_1,int *param_2);
undefined4 __cdecl FUN_100b9f06(int param_1);
undefined4 __cdecl FUN_100b9f1e(int param_1);
undefined4 __cdecl FUN_100b9f67(int param_1,undefined4 param_2);
undefined4 __thiscall FUN_100b9f7f(void *this,int param_1);
void __cdecl FUN_100ba074(void *param_1);
void __cdecl FUN_100ba087(void *param_1);
void __thiscall FUN_100ba09a(void *this,int *param_1);
void __cdecl FUN_100ba0ba(void *param_1);
void __cdecl FUN_100ba0cb(int *param_1);
undefined4 __cdecl FUN_100ba159(int param_1,int param_2);
void __cdecl FUN_100ba170(void *param_1);
void __cdecl FUN_100ba19d(void *param_1);
undefined4 FUN_100ba307(void);
undefined4 __cdecl FUN_100ba3c2(int *param_1);
undefined4 __cdecl FUN_100ba4be(void *param_1);
undefined4 __cdecl FUN_100ba73d(void *param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_100ba819(int *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_100ba953(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_100baa1b(int param_1,undefined4 *param_2);
undefined4 __cdecl FUN_100baa85(undefined4 param_1,void *param_2);
int __cdecl FUN_100baaaa(int param_1,int param_2);
void __cdecl FUN_100bab1c(int param_1);
undefined4 __cdecl FUN_100bab9a(void *param_1);
undefined4 __cdecl FUN_100babee(void *param_1,int param_2);
void __cdecl FUN_100baeb3(void *param_1);
undefined4 __cdecl FUN_100bb159(int param_1);
undefined4 __cdecl FUN_100bb1ac(void *param_1,int param_2);
undefined4 __cdecl FUN_100bb1c8(int param_1,float *param_2);
int __cdecl FUN_100bb71b(int param_1,undefined4 *param_2);
undefined4 __cdecl FUN_100bb76b(int param_1,int param_2);
int __cdecl FUN_100bb78d(int param_1,undefined4 *param_2);
undefined4 __cdecl FUN_100bb955(int param_1,int param_2);
undefined8 __fastcall FUN_100bb980(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5,undefined2 *param_6);
undefined8 __fastcall FUN_100bbbb0(undefined4 param_1,undefined4 param_2,uint *param_3,int *param_4,uint param_5);
void FUN_100bc7ac(void);
undefined8 __fastcall FUN_100bc7c0(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,int param_5);
undefined8 __fastcall FUN_100bc964(undefined4 param_1,undefined4 param_2,uint *param_3,float *param_4,int param_5);
undefined8 __fastcall FUN_100bcb33(undefined4 param_1,undefined4 param_2,uint *param_3,float *param_4,int param_5);
undefined8 __fastcall FUN_100bccea(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,uint param_5);
undefined8 __fastcall FUN_100bcda0(undefined4 param_1,undefined4 param_2,uint *param_3,int *param_4,uint param_5);
void FUN_100bd9dc(void);
undefined8 __fastcall FUN_100bda00(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4);
undefined8 __fastcall FUN_100bda53(undefined4 param_1,undefined4 param_2,undefined8 *param_3,uint param_4);
undefined8 __fastcall FUN_100bdac0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,uint param_4);
undefined8 __fastcall FUN_100bdb30(undefined4 param_1,undefined4 param_2,float *param_3,int *param_4,uint param_5);
void FUN_100be87e(void);
undefined4 FUN_100be883(void);
void __cdecl FUN_100be9b9(void *param_1,undefined4 param_2,undefined4 param_3);
uint __cdecl FUN_100be9de(int *param_1,int param_2);
void __cdecl FUN_100bea72(int *param_1,int param_2);
uint __cdecl FUN_100bea95(int *param_1,uint param_2);
void __cdecl FUN_100beb4d(int *param_1);
void __cdecl FUN_100beb74(int *param_1);
void __cdecl FUN_100beb9e(void *param_1);
int __cdecl FUN_100beca0(uint param_1);
float10 __cdecl FUN_100becb0(uint param_1);
uint * __cdecl FUN_100becef(int param_1,int param_2,int param_3);
void __cdecl FUN_100bee4b(int *param_1);
int * __cdecl FUN_100beec0(int *param_1,int param_2,int param_3);
void __cdecl FUN_100bf058(void *param_1);
void __cdecl FUN_100bf0a3(int *param_1);
void __cdecl FUN_100bf0c7(void *param_1);
undefined4 __cdecl FUN_100bf177(undefined4 *param_1,uint *param_2);
undefined4 __cdecl FUN_100bf4ed(int *param_1,uint *param_2);
uint FUN_100bf731(void);
uint __cdecl FUN_100bf795(int *param_1);
uint __cdecl FUN_100bf891(int param_1,int *param_2);
undefined4 __cdecl FUN_100bf8ad(float *param_1,float *param_2,undefined4 param_3,int param_4);
undefined4 __cdecl FUN_100bf976(int *param_1,int param_2,int *param_3,int param_4);
undefined4 __cdecl FUN_100bfa95(int *param_1,int param_2,int *param_3,int param_4);
undefined4 __cdecl FUN_100bfae4(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6);
void __cdecl FUN_100bfb64(int *param_1,uint param_2);
void FUN_100bfd77(void);
void FUN_100bfe03(void);
void FUN_100bfed5(void);
void __fastcall FUN_100c009d(int param_1,float *param_2);
void __fastcall FUN_100c01a7(int param_1,float *param_2,int param_3);
void __cdecl FUN_100c02b9(undefined4 param_1,int param_2);
void __cdecl FUN_100c0353(void *param_1);
void __fastcall FUN_100c03a2(undefined4 param_1,float *param_2);
void __cdecl FUN_100c04bf(float *param_1,float *param_2,float *param_3);
void __cdecl FUN_100c06fc(void *param_1);
void __cdecl FUN_100c074b(void *param_1);
void __cdecl FUN_100c07c4(int *param_1);
uint * __cdecl FUN_100c07ee(int param_1,int *param_2);
undefined4 __cdecl FUN_100c09af(float *param_1,int *param_2);
void __cdecl FUN_100c0d16(int *param_1);
uint * __cdecl FUN_100c0ddf(uint *param_1,int *param_2);
int * __cdecl FUN_100c0f06(int param_1,int param_2);
undefined4 __cdecl FUN_100c10fc(int param_1,int param_2,int param_3,undefined *param_4);
undefined4 __cdecl FUN_100c12b8(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5);
undefined4 __cdecl FUN_100c1305(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5);
undefined4 __cdecl FUN_100c1352(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_100c14a1(int *param_1);
void __cdecl FUN_100c14cb(int *param_1);
uint * __cdecl FUN_100c14f5(int param_1,int *param_2);
int * __cdecl FUN_100c16e3(undefined4 param_1,int *param_2);
void __thiscall FUN_100c18b9(void *this,int param_1,int param_2,int param_3);
uint * __cdecl FUN_100c1956(int param_1,int param_2);
undefined4 __cdecl FUN_100c1bea(int param_1,int *param_2,int *param_3,void *param_4);
void __cdecl FUN_100c1ce1(int *param_1);
uint * __cdecl FUN_100c1d74(int param_1,int *param_2);
void __fastcall FUN_100c1e36(int param_1);
int __cdecl FUN_100c200b(int param_1,int param_2);
bool __cdecl FUN_100c2112(int param_1,float *param_2,float *param_3,void *param_4);
float10 __cdecl FUN_100c217e(float param_1);
float10 __cdecl FUN_100c21bf(float param_1);
float10 __cdecl FUN_100c2206(float param_1);
void __cdecl FUN_100c2251(int param_1,int param_2,int param_3,float param_4,float *param_5,uint param_6,float param_7,float param_8);
void GdipFree(void);
void GdipAlloc(void);
void GdipDisposeImage(void);
void GdipCreateBitmapFromStream(void);
void GdipCloneImage(void);
void GdiplusStartup(void);
void GdiplusShutdown(void);
void __fastcall FUN_100c23d0(int param_1);
void __cdecl FUN_100c23f0(uint param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,undefined4 param_6,ushort param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12,int param_13,int param_14);
undefined4 FUN_100c24a0(uchar *param_1,void *param_2,uint param_3);
undefined4 __thiscall FUN_100c25e0(void *this,int param_1,undefined4 *param_2,char param_3);
undefined4 __thiscall FUN_100c2630(void *this,char *param_1);
uint __thiscall FUN_100c26e0(void *this,int param_1);
undefined4 __thiscall FUN_100c2730(void *this,size_t param_1,int param_2);
undefined4 __thiscall FUN_100c28d0(void *this,void *param_1,int param_2,int *param_3,size_t *param_4,uint param_5);
undefined4 __thiscall FUN_100c29a0(void *this,uint param_1,undefined4 *param_2,size_t param_3);
void __fastcall FUN_100c2bb0(undefined4 *param_1);
uint __thiscall FUN_100c2c00(void *this,void *param_1);
void __cdecl FUN_100c2c60(int param_1);
undefined4 __thiscall FUN_100c2c80(void *this,void *param_1,int *param_2,size_t param_3);
undefined4 __thiscall FUN_100c2d10(void *this,int param_1,int param_2,int param_3,int param_4);
void __fastcall FUN_100c2e10(undefined4 *param_1);
undefined4 __thiscall FUN_100c2e20(void *this,void *param_1);
void __thiscall FUN_100c2fd0(void *this,char *param_1);
undefined4 * __thiscall FUN_100c3140(void *this,undefined4 *param_1,int param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
undefined4 __fastcall FUN_100c3380(int param_1);
void __thiscall FUN_100c3410(void *this,char *param_1,undefined4 *param_2,int *param_3,char param_4);
undefined4 * __thiscall FUN_100c3480(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_100c3560(int param_1);
void __thiscall FUN_100c35d0(void *this,void *param_1,char param_2);
undefined4 __fastcall FUN_100c3750(void *param_1);
int __thiscall FUN_100c3b90(void *this,char *param_1,undefined4 *param_2,undefined4 param_3,int param_4);
undefined4 * __fastcall FUN_100c3d40(undefined4 *param_1);
void __fastcall FUN_100c3e30(int param_1);
undefined4 __fastcall FUN_100c3e70(int param_1);
undefined4 FUN_100c3f70(char *param_1,undefined4 *param_2);
undefined4 __thiscall FUN_100c4030(void *this,int param_1,int *param_2,uint param_3,void *param_4,int *param_5,uint param_6,uint param_7);
undefined4 __thiscall FUN_100c4250(void *this,int param_1,int *param_2,uint param_3,int param_4,int *param_5,size_t param_6,uint param_7);
undefined4 __thiscall FUN_100c4410(void *this,undefined4 *param_1,undefined4 *param_2,size_t *param_3,int *param_4,uint param_5);
void __fastcall FUN_100c4570(undefined4 *param_1);
int __thiscall FUN_100c45b0(void *this,char *param_1,undefined2 param_2);
undefined4 __thiscall FUN_100c4600(void *this,char *param_1,int *param_2,int *param_3,uint param_4,uint param_5);
undefined4 __thiscall FUN_100c46f0(void *this,int param_1,int *param_2,uint param_3,void *param_4,int *param_5,uint param_6,uint param_7);
undefined4 __thiscall FUN_100c4770(void *this,int param_1,int *param_2,uint param_3,int param_4,int *param_5,size_t param_6,uint param_7);
void __cdecl FUN_100c47e0(undefined4 param_1);
undefined4 __cdecl FUN_100c47f0(LPCSTR param_1,DWORD *param_2);
undefined4 __cdecl FUN_100c4870(int param_1);
undefined4 __cdecl FUN_100c48a0(int *param_1,char *param_2,undefined4 param_3,char param_4,char param_5);
uint __cdecl FUN_100c4980(int param_1,int param_2,uint param_3,undefined *param_4,undefined4 param_5,uint param_6,undefined4 param_7);
uint __cdecl FUN_100c4a40(int param_1,int param_2,uint param_3,undefined *param_4,undefined4 param_5,uint param_6,undefined4 param_7);
uint __cdecl FUN_100c4b10(int *param_1,int param_2,uint *param_3,uint param_4,undefined *param_5,undefined4 param_6,uint param_7,undefined4 param_8);
uint __cdecl FUN_100c4be0(int *param_1,int param_2,void *param_3,uint param_4,undefined *param_5,undefined4 param_6,uint param_7,undefined4 param_8);
int FUN_100c4d10(undefined4 param_1,undefined4 *param_2,int param_3,int param_4);
void __cdecl FUN_100c4dc0(uint *param_1,int *param_2);
void __cdecl FUN_100c4e50(uint *param_1,int *param_2);
void __cdecl FUN_100c4ef0(uint *param_1,uint param_2,int *param_3);
void __cdecl FUN_100c4f30(uint *param_1,uint param_2,int *param_3);
uint FUN_100c4f70(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5);
void FUN_100c5020(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4);
undefined4 FUN_100c5040(int param_1);
undefined4 FUN_100c50b0(int param_1,uint param_2,char *param_3,int param_4);
void FUN_100c5180(int param_1,char *param_2,int param_3);
undefined4 __cdecl FUN_100c51a0(uint param_1);
int FUN_100c52c0(int *param_1,int param_2);
undefined4 FUN_100c68c0(int param_1);
void __fastcall FUN_100c6910(undefined4 param_1);
void FUN_100c6940(void);
uint FUN_100c69b0(int *param_1,int param_2);
uint FUN_100c7200(int param_1);
uint __thiscall FUN_100c72d0(void *this,undefined4 *param_1);
void __fastcall FUN_100c7350(undefined4 param_1,int param_2);
uint __cdecl FUN_100c73f0(int param_1);
void __cdecl FUN_100c74b0(int *param_1);
byte __cdecl FUN_100c7b80(int *param_1,int param_2);
undefined4 FUN_100c7fa0(int param_1);
undefined4 FUN_100c8040(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,int param_8);
void FUN_100c8280(int param_1,int param_2,char *param_3,int param_4);
void __cdecl FUN_100c82b0(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_100c82d0(undefined4 param_1,void *param_2);
void __cdecl thunk_FUN_100c83e8(int *param_1,int param_2);
void __cdecl FUN_100c83e8(int *param_1,int param_2);
undefined4 __cdecl FUN_100c8a80(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6);
uint FUN_100c8f70(uint param_1,byte *param_2,uint param_3);
uint __fastcall FUN_100c91d0(uint *param_1,uint param_2);
uint FUN_100c94b0(undefined4 param_1,uint *param_2,uint param_3);
void __fastcall FUN_100c94d0(undefined4 param_1,int param_2);
void __cdecl FUN_100c9540(int param_1);
void __fastcall FUN_100c9610(int *param_1);
void __thiscall FUN_100c9850(void *this,int param_1);
void __thiscall FUN_100c9930(void *this,int param_1);
void __cdecl FUN_100c9e40(int param_1,int param_2,int param_3);
void __cdecl FUN_100ca0b0(int param_1,int param_2);
void __fastcall FUN_100ca4d0(undefined4 param_1,int *param_2);
void FUN_100ca5a0(void);
void FUN_100ca620(void);
void __fastcall FUN_100ca690(int param_1,undefined1 *param_2,int param_3);
void __cdecl FUN_100ca720(int param_1);
void __fastcall FUN_100ca790(undefined4 param_1,int param_2);
void __cdecl FUN_100ca810(int *param_1);
void FUN_100caa10(void);
void __cdecl FUN_100caa80(int param_1,undefined1 *param_2,int param_3,int param_4);
void __cdecl FUN_100cab20(int param_1);
void __cdecl FUN_100cad20(int *param_1,undefined1 *param_2,int param_3,int param_4);
void __fastcall FUN_100caf30(undefined4 param_1,undefined4 param_2);
uint __cdecl FUN_100caf50(int param_1,uint param_2);
undefined8 __fastcall FUN_100cb459(undefined4 param_1,undefined4 param_2);
int __cdecl FUN_100cb497(int param_1,uint param_2);
void _CIacos(void);
int __cdecl _finite(double _X);
void __cdecl ftol(void);
void FUN_100cb694(void);
void __cdecl longjmp(int *_Buf,int _Value);
void __cdecl setjmp3(void);
int __cdecl isdigit(int _C);
int __cdecl isspace(int _C);
void _CIpow(void);
int __cdecl sscanf(char *_Src,char *_Format,...);
double __cdecl ldexp(double _X,int _Y);
char * __cdecl _strdup(char *_Src);
char * __cdecl setlocale(int _Category,char *_Locale);
ulonglong __fastcall __aullshr(byte param_1,uint param_2);
void __cdecl exit(int _Code);
int __cdecl sprintf(char *_Dest,char *_Format,...);
size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File);
int __cdecl fseek(FILE *_File,long _Offset,int _Origin);
size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File);
int __cdecl fclose(FILE *_File);
FILE * __cdecl tmpfile(void);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4);
double __cdecl sqrt(double _X);
double __cdecl fmod(double _X,double _Y);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size);
char * __cdecl strcpy(char *_Dest,char *_Source);
size_t __cdecl strlen(char *_Str);
int __cdecl strcmp(char *_Str1,char *_Str2);
double __cdecl cos(double _X);
double __cdecl sin(double _X);
double __cdecl atan(double _X);
double __cdecl pow(double _X,double _Y);
double __cdecl log(double _X);
int __cdecl abs(int _X);
double __cdecl fabs(double _X);
void acmStreamSize(void);
void acmStreamOpen(void);
void acmFormatSuggest(void);
void acmStreamClose(void);
void acmStreamUnprepareHeader(void);
void acmStreamConvert(void);
void acmStreamPrepareHeader(void);
void Ordinal_111(void);
void Ordinal_10(void);
void Ordinal_108(void);
void Ordinal_11(void);
void Ordinal_103(void);
void Ordinal_115(void);
void Ordinal_116(void);
void Ordinal_23(void);
void Ordinal_3(void);
void Ordinal_18(void);
void Ordinal_4(void);
void Ordinal_12(void);
void Ordinal_9(void);
void Ordinal_19(void);
void Ordinal_16(void);
void Ordinal_151(void);
void Unwind@100cb980(void);
void Unwind@100cb9b0(void);
void Unwind@100cb9e0(void);
void __fastcall Unwind@100cba10(IDxDevice *param_1);
void Unwind@100cba40(void);
void Unwind@100cba70(void);
void Unwind@100cba7b(void);
void Unwind@100cbaa0(void);
void Unwind@100cbad0(void);
void Unwind@100cbb00(void);
void Unwind@100cbb30(void);
void Unwind@100cbb60(void);
void Unwind@100cbb90(void);
void Unwind@100cbbc0(void);
void Unwind@100cbbcb(void);
void Unwind@100cbbf0(void);
void Unwind@100cbc20(void);
void Unwind@100cbc60(void);
void Unwind@100cbc90(void);
void Unwind@100cbcc0(void);
void Unwind@100cbcc8(void);
void Unwind@100cbcd6(void);
void Unwind@100cbd20(void);
void Unwind@100cbd28(void);
void Unwind@100cbd36(void);
void Unwind@100cbd44(void);
void Unwind@100cbd70(void);
void Unwind@100cbd78(void);
void Unwind@100cbdb0(void);
void Unwind@100cbde0(void);
void Unwind@100cbde8(void);
void Unwind@100cbe10(void);
void Unwind@100cbe18(void);
void Unwind@100cbe40(void);
void Unwind@100cbe48(void);
void Unwind@100cbe56(void);
void Unwind@100cbe80(void);
void Unwind@100cbec0(void);
void Unwind@100cbef0(void);
void Unwind@100cbef8(void);
void Unwind@100cbf07(void);
void Unwind@100cbf30(void);
void Unwind@100cbf60(void);
void Unwind@100cbf90(void);
void Unwind@100cbfc0(void);
void Unwind@100cbfcb(void);
void Unwind@100cbff0(void);
void Unwind@100cc020(void);
void Unwind@100cc050(void);
void Unwind@100cc080(void);
void Unwind@100cc089(void);
void Unwind@100cc0b0(void);
void Unwind@100cc0b9(void);
void Unwind@100cc0e0(void);
void Unwind@100cc110(void);
void Unwind@100cc160(void);
void Unwind@100cc190(void);
void Unwind@100cc1c0(void);
void Unwind@100cc1cb(void);
void Unwind@100cc1f0(void);
void Unwind@100cc240(void);
void Unwind@100cc249(void);
void Unwind@100cc252(void);
void Unwind@100cc25d(void);
void Unwind@100cc266(void);
void Unwind@100cc2a0(void);
void Unwind@100cc2a9(void);
void Unwind@100cc2b2(void);
void Unwind@100cc2bb(void);
void Unwind@100cc2c4(void);
void Unwind@100cc300(void);
void Unwind@100cc308(void);
void Unwind@100cc316(void);
void Unwind@100cc324(void);
void Unwind@100cc350(void);
void Unwind@100cc358(void);
void Unwind@100cc366(void);
void Unwind@100cc374(void);
void Unwind@100cc3a0(void);
void Unwind@100cc3d0(void);
void Unwind@100cc400(void);
void Unwind@100cc430(void);
void Unwind@100cc438(void);
void Unwind@100cc441(void);
void Unwind@100cc45b(void);
void Unwind@100cc490(void);
void Unwind@100cc498(void);
void Unwind@100cc4d0(void);
void Unwind@100cc4d8(void);
void Unwind@100cc4e6(void);
void Unwind@100cc510(void);
void Unwind@100cc518(void);
void Unwind@100cc526(void);
void Unwind@100cc550(void);
void Unwind@100cc559(void);
void Unwind@100cc580(void);
void Unwind@100cc5b0(void);
void Unwind@100cc5e0(void);
void Unwind@100cc5e8(void);
void Unwind@100cc620(void);
void Unwind@100cc650(void);
void Unwind@100cc680(void);
void Unwind@100cc68b(void);
void Unwind@100cc6b0(void);
void Unwind@100cc6b9(void);
void Unwind@100cc6e0(void);
void Unwind@100cc710(void);
void Unwind@100cc718(void);
void Unwind@100cc726(void);
void Unwind@100cc750(void);
void Unwind@100cc758(void);
void Unwind@100cc790(void);
void Unwind@100cc799(void);
void Unwind@100cc7a4(void);
void Unwind@100cc7d0(void);
void Unwind@100cc7d8(void);
void Unwind@100cc810(void);
void Unwind@100cc840(void);
void Unwind@100cc848(void);
void Unwind@100cc856(void);
void Unwind@100cc880(void);
void Unwind@100cc888(void);
void Unwind@100cc896(void);
void Unwind@100cc8a4(void);
void Unwind@100cc8d0(void);
void Unwind@100cc8db(void);
void Unwind@100cc900(void);
void Unwind@100cc930(void);
void Unwind@100cc938(void);
void Unwind@100cc946(void);
void Unwind@100cc954(void);
void Unwind@100cc980(void);
void Unwind@100cc9b0(void);
void Unwind@100cc9e0(void);
void Unwind@100cc9e8(void);
void Unwind@100cca20(void);
void Unwind@100cca70(void);
void Unwind@100ccaa0(void);
void Unwind@100ccad0(void);
void Unwind@100ccb00(void);
void Unwind@100ccb30(void);
void Unwind@100ccb38(void);
void Unwind@100ccb70(void);
void Unwind@100ccb78(void);
void Unwind@100ccb87(void);
void Unwind@100ccb95(void);
void Unwind@100ccba3(void);
void Unwind@100ccbd0(void);
void Unwind@100ccc00(void);
void Unwind@100ccc08(void);
void Unwind@100ccc17(void);
void Unwind@100ccc25(void);
void Unwind@100ccc33(void);
void Unwind@100ccc60(void);
void Unwind@100ccc90(void);
void Unwind@100ccc9b(void);
void Unwind@100ccca7(void);
void Unwind@100cccf0(void);
void Unwind@100ccd20(void);
void Unwind@100ccd29(void);
void Unwind@100ccd60(void);
void Unwind@100ccd90(void);
void Unwind@100ccdc0(void);
void Unwind@100cce50(void);
void Unwind@100cce80(void);
void Unwind@100cced0(void);
void Unwind@100ccf60(void);
void Unwind@100ccfb0(void);
void Unwind@100ccfe0(void);
void Unwind@100ccfe8(void);
void Unwind@100cd040(void);
void Unwind@100cd070(void);
void Unwind@100cd0a0(void);
void Unwind@100cd0d0(void);
void Unwind@100cd0d9(void);
void Unwind@100cd110(void);
void Unwind@100cd118(void);
void Unwind@100cd140(void);
void Unwind@100cd14c(void);
void Unwind@100cd158(void);
void Unwind@100cd180(void);
void Unwind@100cd18c(void);
void Unwind@100cd1c0(void);
void Unwind@100cd1c8(void);
void Unwind@100cd1d0(void);
void Unwind@100cd1db(void);
void Unwind@100cd1e3(void);
void Unwind@100cd210(void);
void Unwind@100cd218(void);
void Unwind@100cd223(void);
void Unwind@100cd22e(void);
void Unwind@100cd270(void);
void Unwind@100cd2a0(void);
void Unwind@100cd2a8(void);
void Unwind@100cd2d0(void);
void Unwind@100cd2d8(void);
void Unwind@100cd2e6(void);
void Unwind@100cd2f5(void);
void Unwind@100cd320(void);
void Unwind@100cd32b(void);
void Unwind@100cd350(void);
void Unwind@100cd35b(void);
void Unwind@100cd366(void);
void Unwind@100cd390(void);
void Unwind@100cd3d0(void);
void Unwind@100cd3d8(void);
void Unwind@100cd3e6(void);
void Unwind@100cd3f5(void);
void Unwind@100cd403(void);
void Unwind@100cd430(void);
void Unwind@100cd480(void);
void Unwind@100cd488(void);
void Unwind@100cd4c0(void);
void Unwind@100cd4c8(void);
void Unwind@100cd4d6(void);
void Unwind@100cd500(void);
void Unwind@100cd509(void);
void Unwind@100cd512(void);
void Unwind@100cd51b(void);
void Unwind@100cd550(void);
void Unwind@100cd558(void);
void Unwind@100cd566(void);
void Unwind@100cd590(void);
void Unwind@100cd599(void);
void Unwind@100cd5e0(void);
void Unwind@100cd610(void);
void Unwind@100cd619(void);
void Unwind@100cd650(void);
void Unwind@100cd680(void);
void Unwind@100cd688(void);
void Unwind@100cd6b0(void);
void Unwind@100cd6e0(void);
void Unwind@100cd6e8(void);
void Unwind@100cd710(void);
void Unwind@100cd780(void);
void Unwind@100cd789(void);
void Unwind@100cd7c0(void);
void Unwind@100cd7f0(void);
void Unwind@100cd7f8(void);
void Unwind@100cd820(void);
void Unwind@100cd828(void);
void Unwind@100cd850(void);
void Unwind@100cd880(void);
void Unwind@100cd8c0(void);
void Unwind@100cd8c8(void);
void Unwind@100cd900(void);
void Unwind@100cd90b(void);
void Unwind@100cd940(void);
void Unwind@100cd970(void);
void Unwind@100cd9b0(void);
void Unwind@100cd9bb(void);
void Unwind@100cd9c9(void);
void Unwind@100cda00(void);
void Unwind@100cda0b(void);
void Unwind@100cda19(void);
void Unwind@100cda70(void);
void Unwind@100cdaa0(void);
void Unwind@100cdad0(void);
void Unwind@100cdadb(void);
void Unwind@100cdae6(void);
void Unwind@100cdb10(void);
void Unwind@100cdb40(void);
void Unwind@100cdb70(void);
void Unwind@100cdba0(void);
void Unwind@100cdbd0(void);
void Unwind@100cdc00(void);
void Unwind@100cdc50(void);
void Unwind@100cdc58(void);
void Unwind@100cdc90(void);
void Unwind@100cdcc0(void);
void Unwind@100cdcf0(void);
void Unwind@100cdd20(void);
void Unwind@100cdd29(void);
void Unwind@100cdd31(void);
void Unwind@100cdd3a(void);
void Unwind@100cdd60(void);
void Unwind@100cdd68(void);
void Unwind@100cdd70(void);
void Unwind@100cdd78(void);
void Unwind@100cdda0(void);
void Unwind@100cddd0(void);
void Unwind@100cddd9(void);
void Unwind@100cdde2(void);
void Unwind@100cde10(void);
void Unwind@100cde40(void);
void Unwind@100cde49(void);
void Unwind@100cde52(void);
void Unwind@100cde5a(void);
void Unwind@100cdec0(void);
void Unwind@100cdef0(void);
void Unwind@100cdf20(void);
void Unwind@100cdf28(void);
void Unwind@100cdf34(void);
void Unwind@100cdf3f(void);
void Unwind@100cdf70(void);
void Unwind@100cdf78(void);
void Unwind@100cdf83(void);
void Unwind@100cdf8f(void);
void Unwind@100cdf9a(void);
void Unwind@100cdfc0(void);
void Unwind@100cdfc8(void);
void Unwind@100cdfd3(void);
void Unwind@100cdfdf(void);
void Unwind@100cdfea(void);
void Unwind@100cdff5(void);
void Unwind@100ce020(void);
void Unwind@100ce028(void);
void Unwind@100ce034(void);
void Unwind@100ce03f(void);
void Unwind@100ce070(void);
void Unwind@100ce078(void);
void Unwind@100ce084(void);
void Unwind@100ce08f(void);
void Unwind@100ce09a(void);
void Unwind@100ce0c0(void);
void Unwind@100ce0c8(void);
void Unwind@100ce0d3(void);
void Unwind@100ce0df(void);
void Unwind@100ce0ea(void);
void Unwind@100ce110(void);
void Unwind@100ce140(void);
void Unwind@100ce170(void);
void Unwind@100ce17b(void);
void Unwind@100ce1b0(void);
void Unwind@100ce1b8(void);
void Unwind@100ce1f0(void);
void Unwind@100ce1f8(void);
void Unwind@100ce230(void);
void Unwind@100ce260(void);
void Unwind@100ce290(void);
void Unwind@100ce2c0(void);
void Unwind@100ce2f0(void);
void Unwind@100ce320(void);
void Unwind@100ce350(void);
void Unwind@100ce380(void);
void Unwind@100ce3b0(void);
void Unwind@100ce3b9(void);
void Unwind@100ce3e0(void);
void Unwind@100ce3e9(void);
void Unwind@100ce410(void);
void Unwind@100ce419(void);
void Unwind@100ce424(void);
void Unwind@100ce42c(void);
void Unwind@100ce450(void);
void Unwind@100ce459(void);
void Unwind@100ce490(void);
void Unwind@100ce4c0(void);
void Unwind@100ce4f0(void);
void Unwind@100ce520(void);
void Unwind@100ce570(void);
void Unwind@100ce578(void);
void Unwind@100ce5a0(void);
void Unwind@100ce5a8(void);
void Unwind@100ce5e0(void);
void Unwind@100ce5eb(void);
void Unwind@100ce620(void);
void Unwind@100ce650(void);
void Unwind@100ce680(void);
void Unwind@100ce6b0(void);
void Unwind@100ce6e0(void);
void Unwind@100ce710(void);
void Unwind@100ce760(void);
void Unwind@100ce768(void);
void Unwind@100ce7a0(void);
void Unwind@100ce7ab(void);
void Unwind@100ce7e0(void);
void Unwind@100ce7eb(void);
void Unwind@100ce820(void);
void Unwind@100ce82b(void);
void Unwind@100ce860(void);
void Unwind@100ce86b(void);
void Unwind@100ce8a0(void);
void Unwind@100ce8d0(void);
void Unwind@100ce8d8(void);
void Unwind@100ce8e3(void);
void Unwind@100ce920(void);
void Unwind@100ce92c(void);
void Unwind@100ce937(void);
void Unwind@100ce942(void);
void Unwind@100ce970(void);
void Unwind@100ce97c(void);
void Unwind@100ce987(void);
void Unwind@100ce992(void);
void Unwind@100ce9c0(void);
void Unwind@100ce9cc(void);
void Unwind@100ce9d7(void);
void Unwind@100ce9e2(void);
void Unwind@100ce9f0(void);
void Unwind@100cea20(void);
void Unwind@100cea50(void);
void Unwind@100cea5b(void);
void Unwind@100cea63(void);
void Unwind@100ceaa0(void);
void Unwind@100ceaab(void);
void Unwind@100ceae0(void);
void Unwind@100ceb10(void);
void Unwind@100ceb40(void);
void Unwind@100ceb48(void);
void Unwind@100ceb70(void);
void Unwind@100ceb78(void);
void Unwind@100ceb84(void);
void Unwind@100cebb0(void);
void Unwind@100cebbb(void);
void Unwind@100cec00(void);
void Unwind@100cec30(void);
void Unwind@100cec80(void);
void Unwind@100cecb0(void);
void Unwind@100cece0(void);
void Unwind@100ced10(void);
void Unwind@100ced18(void);
void Unwind@100ced20(void);
void Unwind@100ced50(void);
void Unwind@100ced58(void);
void Unwind@100ced80(void);
void Unwind@100ced8b(void);
void Unwind@100ced96(void);
void Unwind@100ceda1(void);
void Unwind@100cedd0(void);
void Unwind@100cee00(void);
void Unwind@100cee30(void);
void Unwind@100cee38(void);
void Unwind@100cee40(void);
void Unwind@100cee70(void);
void Unwind@100ceea0(void);
void Unwind@100ceed0(void);
void Unwind@100cef00(void);
void Unwind@100cef0b(void);
void Unwind@100cef16(void);
void Unwind@100cef21(void);
void Unwind@100cef50(void);
void Unwind@100cef80(void);
void Unwind@100cefb0(void);
void Unwind@100cefe0(void);
void Unwind@100cf010(void);
void Unwind@100cf01b(void);
void Unwind@100cf050(void);
void Unwind@100cf080(void);
void Unwind@100cf0b0(void);
void Unwind@100cf0bb(void);
void Unwind@100cf0f0(void);
void Unwind@100cf120(void);
void Unwind@100cf170(void);
void Unwind@100cf17b(void);
void Unwind@100cf1a0(void);
void Unwind@100cf1a8(void);
void Unwind@100cf1d0(void);
void Unwind@100cf200(void);
void Unwind@100cf230(void);
void Unwind@100cf23b(void);
void Unwind@100cf270(void);
void Unwind@100cf27b(void);
void Unwind@100cf286(void);
void Unwind@100cf291(void);
void Unwind@100cf2c0(void);
void Unwind@100cf2cb(void);
void Unwind@100cf2d3(void);
void Unwind@100cf320(void);
void Unwind@100cf350(void);
void Unwind@100cf35b(void);
void Unwind@100cf390(void);
void Unwind@100cf3c0(void);
void Unwind@100cf3f0(void);
void Unwind@100cf460(void);
void Unwind@100cf490(void);
void Unwind@100cf4e0(void);
void Unwind@100cf550(void);
void Unwind@100cf558(void);
void Unwind@100cf580(void);
void Unwind@100cf588(void);
void Unwind@100cf593(void);
void Unwind@100cf5c0(void);
void Unwind@100cf5f0(void);
void Unwind@100cf5f8(void);
void Unwind@100cf620(void);
void Unwind@100cf629(void);
void Unwind@100cf650(void);
void Unwind@100cf659(void);
void Unwind@100cf6a0(void);
void Unwind@100cf6d0(void);
void Unwind@100cf6d9(void);
void Unwind@100cf6e4(void);
void Unwind@100cf6ec(void);
void Unwind@100cf6f7(void);
void Unwind@100cf6ff(void);
void Unwind@100cf707(void);
void Unwind@100cf710(void);
void Unwind@100cf719(void);
void Unwind@100cf750(void);
void Unwind@100cf759(void);
void Unwind@100cf762(void);
void Unwind@100cf76b(void);
void Unwind@100cf777(void);
void Unwind@100cf783(void);
void Unwind@100cf78f(void);
void Unwind@100cf79b(void);
void Unwind@100cf7d0(void);
void Unwind@100cf7d9(void);
void Unwind@100cf7e5(void);
void Unwind@100cf7f1(void);
void Unwind@100cf7fd(void);
void Unwind@100cf830(void);
void Unwind@100cf853(void);
void Unwind@100cf85c(void);
void Unwind@100cf868(void);
void Unwind@100cf871(void);
void Unwind@100cf87a(void);
void Unwind@100cf8c0(void);
void Unwind@100cf8c9(void);
void Unwind@100cf8d2(void);
void Unwind@100cf8db(void);
void Unwind@100cf8e4(void);
void Unwind@100cf910(void);
void Unwind@100cf919(void);
void Unwind@100cf921(void);
void Unwind@100cf950(void);
void Unwind@100cf958(void);
void Unwind@100cf980(void);
void Unwind@100cf9b0(void);
void Unwind@100cf9b9(void);
void Unwind@100cf9c5(void);
void Unwind@100cf9d1(void);
void Unwind@100cfa00(void);
void Unwind@100cfa09(void);
void Unwind@100cfa30(void);
void Unwind@100cfa39(void);
void Unwind@100cfa60(void);
void Unwind@100cfa90(void);
void Unwind@100cfa99(void);
void Unwind@100cfad0(void);
void Unwind@100cfb00(void);
void Unwind@100cfb08(void);
void Unwind@100cfb14(void);
void Unwind@100cfb40(void);
void Unwind@100cfb4b(void);
void Unwind@100cfb59(void);
void Unwind@100cfb90(void);
void Unwind@100cfb98(void);
void Unwind@100cfba3(void);
void Unwind@100cfbaf(void);
void Unwind@100cfbe0(void);
void Unwind@100cfbe9(void);
void Unwind@100cfbf2(void);
void Unwind@100cfbfe(void);
void Unwind@100cfc0a(void);
void Unwind@100cfc15(void);
void Unwind@100cfc50(void);
void Unwind@100cfc58(void);
void Unwind@100cfc63(void);
void Unwind@100cfc90(void);
void Unwind@100cfc98(void);
void Unwind@100cfcb1(void);
void Unwind@100cfcba(void);
void Unwind@100cfce0(void);
void Unwind@100cfd10(void);
void Unwind@100cfd18(void);
void Unwind@100cfd24(void);
void Unwind@100cfd30(void);
void Unwind@100cfd3c(void);
void Unwind@100cfd47(void);
void Unwind@100cfd50(void);
void Unwind@100cfd80(void);
void Unwind@100cfd8e(void);
void Unwind@100cfd9a(void);
void Unwind@100cfda6(void);
void Unwind@100cfdb2(void);
void Unwind@100cfdbe(void);
void Unwind@100cfdca(void);
void Unwind@100cfe10(void);
void Unwind@100cfe1c(void);
void Unwind@100cfe50(void);
void Unwind@100cfe80(void);
void Unwind@100cfe88(void);
void Unwind@100cfeb0(void);
void Unwind@100cfeb8(void);
void Unwind@100cfec4(void);
void Unwind@100cfed0(void);
void Unwind@100cfedc(void);
void Unwind@100cff10(void);
void Unwind@100cff18(void);
void Unwind@100cff23(void);
void Unwind@100cff2f(void);
void Unwind@100cff3b(void);
void Unwind@100cff70(void);
void Unwind@100cff7b(void);
void Unwind@100cffa0(void);
void Unwind@100cffd0(void);
void Unwind@100cffd9(void);
void Unwind@100cffe2(void);
void Unwind@100cffee(void);
void Unwind@100cfff7(void);
void Unwind@100d0030(void);
void Unwind@100d0038(void);
void Unwind@100d0043(void);
void Unwind@100d004f(void);
void Unwind@100d0080(void);
void Unwind@100d008c(void);
void Unwind@100d0098(void);
void Unwind@100d00a1(void);
void Unwind@100d00ad(void);
void Unwind@100d00b6(void);
void Unwind@100d00c2(void);
void Unwind@100d00ce(void);
void Unwind@100d00d7(void);
void Unwind@100d00e3(void);
void Unwind@100d0120(void);
void Unwind@100d0180(void);
void Unwind@100d0188(void);
void Unwind@100d0194(void);
void Unwind@100d01a0(void);
void Unwind@100d01ac(void);
void Unwind@100d01b7(void);
void Unwind@100d01c0(void);
void Unwind@100d01c9(void);
void Unwind@100d01f0(void);
void Unwind@100d01fe(void);
void Unwind@100d020a(void);
void Unwind@100d0216(void);
void Unwind@100d0260(void);
void Unwind@100d0290(void);
void Unwind@100d029b(void);
void Unwind@100d02d0(void);
void Unwind@100d02db(void);
void Unwind@100d0310(void);
void Unwind@100d0350(void);
void Unwind@100d0364(void);
void Unwind@100d0380(void);
void Unwind@100d03c0(void);
void Unwind@100d03f0(void);
void Unwind@100d03fb(void);
void Unwind@100d0430(void);
void Unwind@100d0470(void);
void Unwind@100d047b(void);
void Unwind@100d04b0(void);
void FUN_100d04e0(void);
void FUN_100d0500(void);
void FUN_100d0520(void);
void FUN_100d0590(void);
void FUN_100d05b0(void);
void FUN_100d05c0(void);
void FUN_100d0610(void);
undefined8 FUN_10173000(LPCSTR param_1,int param_2);
void FUN_101730bc(void);
BOOL FUN_101730cd(HDC param_1,int param_2,int param_3,LPCSTR param_4,int param_5);
BOOL FUN_10173116(HDC param_1,LPCSTR param_2,int param_3,LPSIZE param_4);
int FUN_1017315c(HDC param_1,LPCSTR param_2,int param_3,LPRECT param_4,UINT param_5);
HFONT FUN_101731f1(int param_1,int param_2,int param_3,int param_4,int param_5,DWORD param_6,DWORD param_7,DWORD param_8,uint param_9,DWORD param_10,DWORD param_11,DWORD param_12,DWORD param_13,LPCSTR param_14);
bool FUN_1017327b(byte param_1);
void FUN_10173293(uint param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6);
void FUN_101732b7(uint param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,LPCSTR param_7,LPBOOL param_8);
uint FUN_101732db(HIMC param_1,DWORD param_2,LPSTR param_3,uint param_4);

