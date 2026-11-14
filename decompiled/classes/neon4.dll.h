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

typedef struct CAvatar CAvatar, *PCAvatar;

struct CAvatar { // PlaceHolder Class Structure
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

typedef struct CAvtrPartPool CAvtrPartPool, *PCAvtrPartPool;

struct CAvtrPartPool { // PlaceHolder Class Structure
};

typedef struct CAvtr2004dx CAvtr2004dx, *PCAvtr2004dx;

struct CAvtr2004dx { // PlaceHolder Class Structure
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef ulong DWORD;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

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

typedef long LONG;

typedef ushort WORD;

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

typedef struct _DISPLAY_DEVICEA _DISPLAY_DEVICEA, *P_DISPLAY_DEVICEA;

struct _DISPLAY_DEVICEA {
    DWORD cb;
    CHAR DeviceName[32];
    CHAR DeviceString[128];
    DWORD StateFlags;
    CHAR DeviceID[128];
    CHAR DeviceKey[128];
};

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

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

typedef struct _devicemodeA DEVMODEA;

typedef struct _DISPLAY_DEVICEA *PDISPLAY_DEVICEA;

typedef struct CMove CMove, *PCMove;

struct CMove { // PlaceHolder Class Structure
};

typedef struct CMoveReduction CMoveReduction, *PCMoveReduction;

struct CMoveReduction { // PlaceHolder Class Structure
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

typedef struct CLine CLine, *PCLine;

struct CLine { // PlaceHolder Class Structure
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

typedef struct CDDDisplay CDDDisplay, *PCDDDisplay;

struct CDDDisplay { // PlaceHolder Class Structure
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

typedef ULONG_PTR DWORD_PTR;

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


// WARNING! conflicting data type names: /ClassDataTypes/neon/phy/CMove/CMove - /neon/phy/CMove

typedef struct CMove_data CMove_data, *PCMove_data;

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

typedef struct CMove_vftable CMove_vftable, *PCMove_vftable;

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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*ProcessMove)(void *, ulong); // CMove virtual function #15
    void (*SetParentPos)(void *); // CMove virtual function #16
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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

typedef struct CActor CActor, *PCActor;

typedef struct CCompositeHolder<neon::frw::CComponent>_data CCompositeHolder<neon::frw::CComponent>_data, *PCCompositeHolder<neon::frw::CComponent>_data;

typedef struct CObject_data CObject_data, *PCObject_data;

typedef struct CVisual_data CVisual_data, *PCVisual_data;

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

struct CActor { // class CActor : CVisual
    struct CActor_vftable *vftablePtr;
    struct CCompositeHolder<neon::frw::CComponent>_data CCompositeHolder<neon::frw::CComponent>_data;
    struct CObject_data CObject_data;
    struct CVisual_data CVisual_data;
    struct CActor_data CActor_data;
};

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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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

typedef struct CInput_vftable CInput_vftable, *PCInput_vftable;

struct CInput_vftable {
    void (*vfunction1)(void *); // CInput virtual function #1
    void (*vfunction2)(void *); // CInput virtual function #2
    void (*vfunction3)(void *, undefined4, undefined4); // CInput virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    undefined4 (*vfunction5)(void *, byte); // CInput virtual function #5
    void (*vfunction6)(void *); // CInput virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
    undefined4 * (*deleting_destructor)(void *, byte); // CInput virtual function #8
};

typedef struct CInput CInput, *PCInput;

typedef struct CInput_data CInput_data, *PCInput_data;

struct CInput_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

struct CInput { // class CInput : IInput
    struct CInput_vftable *vftablePtr;
    struct CInput_data CInput_data;
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    bool (*Destroy)(void *); // CControl virtual function #28 for parent class CControl
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13 for parent class CVisual
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    bool (*Destroy)(void *); // CControl virtual function #28
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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


// WARNING! conflicting data type names: /ClassDataTypes/neon/visual/CLine/CLine - /neon/visual/CLine

typedef struct CLine_vftable CLine_vftable, *PCLine_vftable;

struct CLine_vftable {
    CText * (*deleting_destructor)(void *, byte); // CLine virtual function #1
    void (*~IDxDevice)(void *); // IDxDevice virtual function #2
    void (*Output)(void *); // CLine virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CVisual virtual function #11
    void (*Copy)(void *, struct CObject *); // CVisual virtual function #12
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CLine virtual function #15
    void (*SetEffectType)(void *, enum VRenderEffectType, uchar, uchar, uchar, uchar); // CLine virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CLine virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CVisual virtual function #27
    void (*SetDraw)(void *, struct SLine *, struct CBasicRect<long> *); // CLine virtual function #28
};

typedef struct CLine_data CLine_data, *PCLine_data;

struct CLine_data {
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
    void *offset_0x14;
    void *offset_0x18;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    void *offset_0x20;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
    undefined field22_0x28;
    undefined field23_0x29;
    undefined field24_0x2a;
    undefined field25_0x2b;
    void *offset_0x2c;
    undefined4 *offset_0x30;
    undefined4 offset_0x34;
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13 for parent class CVisual
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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

typedef struct CAppManager CAppManager, *PCAppManager;

typedef struct CAppManager_vftable CAppManager_vftable, *PCAppManager_vftable;

typedef struct CAppManager_data CAppManager_data, *PCAppManager_data;

struct CAppManager_data {
    undefined4 offset_0x0;
    undefined4 *offset_0x4;
    undefined1 offset_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
};

struct CAppManager_vftable {
    CAppManager * (*deleting_destructor)(void *, byte); // CAppManager virtual function #1
};

struct CAppManager { // class CAppManager
    struct CAppManager_vftable *vftablePtr;
    struct CAppManager_data CAppManager_data;
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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #12
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #13
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #14
    void (*Release)(void *); // CDDDisplay virtual function #15
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

typedef struct CDDSurface_vftable1 CDDSurface_vftable1, *PCDDSurface_vftable1;

struct CDDSurface_vftable1 {
    void (*vfunction1)(void *, byte); // CDDSurface virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    undefined4 (*vfunction3)(void *, undefined4); // CDDSurface virtual function #3
};

typedef struct CDDSurface_data CDDSurface_data, *PCDDSurface_data;

struct CDDSurface_data {
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
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined4 *offset_0x3c;
};

typedef struct CDDSurface CDDSurface, *PCDDSurface;

typedef struct CDDSurface_vftable0 CDDSurface_vftable0, *PCDDSurface_vftable0;

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

struct CDDSurface_data {
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
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined4 *offset_0x3c;
};

struct CDDSurface_vftable0 {
    undefined4 * (*deleting_destructor)(void *, byte); // CDDSurface virtual function #1
    list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> * (*DirtyRectList)(void *); // CRefreshRgnMgr virtual function #2
    undefined4 (*vfunction3)(void *, undefined4); // CDDSurface virtual function #3
    undefined4 (*vfunction4)(void *, undefined4); // CDDSurface virtual function #4
    void (*vfunction5)(void *); // CDDSurface virtual function #5
    undefined4 (*vfunction6)(void *); // CDDSurface virtual function #6
    undefined4 (*vfunction7)(void *); // CDDSurface virtual function #7
    undefined2 (*vfunction8)(void *); // CDDSurface virtual function #8
    undefined2 (*vfunction9)(void *); // CDDSurface virtual function #9
    undefined2 (*vfunction10)(void *); // CDDSurface virtual function #10
    PixelFormat (*GetPixelFormat)(void *); // CRLESurface virtual function #11
    int (*vfunction12)(void *, undefined4, char); // CDDSurface virtual function #12
    void (*vfunction13)(void *); // CDDSurface virtual function #13
    void (*vfunction14)(void *); // CDDSurface virtual function #14
    void (*Release)(void *); // CDDDisplay virtual function #15
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #16
    undefined4 (*vfunction17)(void *, uint, uint); // CDDSurface virtual function #17
    void (*vfunction18)(void *, undefined4, undefined4, int, undefined4, char); // CDDSurface virtual function #18
    void (*vfunction19)(void *, int *); // CDDSurface virtual function #19
    bool (*vfunction20)(void *, int, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *); // CDDSurface virtual function #20
    void (*vfunction21)(void *, int, int, int, int, uint); // CDDSurface virtual function #21
};

struct CDDSurface { // class CDDSurface : IDxSurface : CManagedRes
    struct CDDSurface_vftable0 *vftablePtr;
    struct CDDSurface_vftable1 *vftablePtr;
    struct CManagedRes_data CManagedRes_data;
    struct CDDSurface_data CDDSurface_data;
};

typedef struct CGSurface_data CGSurface_data, *PCGSurface_data;

struct CGSurface_data {
    void *offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

typedef struct CGSurface CGSurface, *PCGSurface;

typedef struct CGSurface_vftable0 CGSurface_vftable0, *PCGSurface_vftable0;

typedef struct CGSurface_vftable1 CGSurface_vftable1, *PCGSurface_vftable1;

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

struct CDDSurface_data {
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
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined4 *offset_0x3c;
};

struct CGSurface_data {
    void *offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
};

struct CGSurface_vftable0 {
    undefined4 * (*deleting_destructor)(void *, byte); // CGSurface virtual function #1
    list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> * (*DirtyRectList)(void *); // CRefreshRgnMgr virtual function #2
    uint (*vfunction3)(void *, undefined4); // CGSurface virtual function #3
    undefined4 (*vfunction4)(void *, undefined4); // CGSurface virtual function #4
    void (*vfunction5)(void *); // CGSurface virtual function #5
    undefined4 (*vfunction6)(void *); // CGSurface virtual function #6
    undefined4 (*vfunction7)(void *); // CGSurface virtual function #7
    undefined2 (*vfunction8)(void *); // CDDSurface virtual function #8
    undefined2 (*vfunction9)(void *); // CDDSurface virtual function #9
    undefined2 (*vfunction10)(void *); // CDDSurface virtual function #10
    PixelFormat (*vfunction11)(void *); // CGSurface virtual function #11
    int (*vfunction12)(void *, undefined4, char); // CDDSurface virtual function #12
    void (*vfunction13)(void *); // CDDSurface virtual function #13
    void (*vfunction14)(void *); // CDDSurface virtual function #14
    void (*Release)(void *); // CDDDisplay virtual function #15
    undefined4 (*vfunction16)(void *); // CGSurface virtual function #16
    long (*SetColorKey)(void *, ulong, ulong, bool); // CRLESurface virtual function #17
    void (*vfunction18)(void *, undefined4, undefined4, int, undefined4, char); // CGSurface virtual function #18
    void (*vfunction19)(void *, int *); // CGSurface virtual function #19
    bool (*vfunction20)(void *, int *, struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *); // CGSurface virtual function #20
    void (*vfunction21)(void *, int, int, int, int, uint); // CGSurface virtual function #21
};

struct CGSurface_vftable1 {
    void (*vfunction1)(void *, byte); // CGSurface virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    uint (*vfunction3)(void *, undefined4); // CDDSurface virtual function #3
};

struct CGSurface { // class CGSurface : CDDSurface
    struct CGSurface_vftable0 *vftablePtr;
    struct CGSurface_vftable1 *vftablePtr;
    struct CManagedRes_data CManagedRes_data;
    struct CDDSurface_data CDDSurface_data;
    struct CGSurface_data CGSurface_data;
};

typedef struct CEffectScreen CEffectScreen, *PCEffectScreen;

typedef struct CEffectScreen_vftable CEffectScreen_vftable, *PCEffectScreen_vftable;

struct CEffectScreen { // class CEffectScreen : CEffectAbstract
    struct CEffectScreen_vftable *vftablePtr;
};

struct CEffectScreen_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectScreen virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectScreen virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectRGBAdd CEffectRGBAdd, *PCEffectRGBAdd;

typedef struct CEffectRGBAdd_vftable CEffectRGBAdd_vftable, *PCEffectRGBAdd_vftable;

struct CEffectRGBAdd { // class CEffectRGBAdd : CEffectAbstract
    struct CEffectRGBAdd_vftable *vftablePtr;
};

struct CEffectRGBAdd_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectRGBAdd virtual function #1
    void (*vfunction2)(void *, byte); // CEffectRGBAdd virtual function #2
    void (*vfunction3)(void *); // CEffectRGBAdd virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>_vftable *vftablePtr;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectScreen>_data CEffectTransparent<neon::render::dd_effect::CEffectScreen>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectScreen>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectScreen>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectScreen> CEffectTransparent<neon::render::dd_effect::CEffectScreen>, *PCEffectTransparent<neon::render::dd_effect::CEffectScreen>;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectScreen>_vftable CEffectTransparent<neon::render::dd_effect::CEffectScreen>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectScreen>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectScreen>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectScreen>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectScreen> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectScreen> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

struct CEffectTransparent<neon::render::dd_effect::CEffectScreen> { // class CEffectTransparent<neon::render::dd_effect::CEffectScreen> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectScreen>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectScreen>_data CEffectTransparent<neon::render::dd_effect::CEffectScreen>_data;
};

typedef struct CEffectAbstract_vftable CEffectAbstract_vftable, *PCEffectAbstract_vftable;

struct CEffectAbstract_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectAbstract virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // MSVCR90.DLL CEffectAbstract pure virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // MSVCR90.DLL CEffectAbstract pure virtual function #6
    void (*~IDxDevice)(void *); // MSVCR90.DLL CEffectAbstract pure virtual function #7
};

typedef struct CEffectAbstract CEffectAbstract, *PCEffectAbstract;

struct CEffectAbstract { // class CEffectAbstract : IDxEffect
    struct CEffectAbstract_vftable *vftablePtr;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken> CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectDarken>;

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectDarken>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken>_vftable *vftablePtr;
};

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectDodgeBurn CEffectDodgeBurn, *PCEffectDodgeBurn;

typedef struct CEffectDodgeBurn_vftable CEffectDodgeBurn_vftable, *PCEffectDodgeBurn_vftable;

struct CEffectDodgeBurn { // class CEffectDodgeBurn : CEffectAbstract
    struct CEffectDodgeBurn_vftable *vftablePtr;
};

struct CEffectDodgeBurn_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectDodgeBurn virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectDodgeBurn virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent> CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent>_vftable *vftablePtr;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDarken>_vftable CEffectTransparent<neon::render::dd_effect::CEffectDarken>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectDarken>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectDarken>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectDarken> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectDarken> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDarken>_data CEffectTransparent<neon::render::dd_effect::CEffectDarken>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectDarken>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectDarken>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDarken> CEffectTransparent<neon::render::dd_effect::CEffectDarken>, *PCEffectTransparent<neon::render::dd_effect::CEffectDarken>;

struct CEffectTransparent<neon::render::dd_effect::CEffectDarken>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectDarken> { // class CEffectTransparent<neon::render::dd_effect::CEffectDarken> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectDarken>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectDarken>_data CEffectTransparent<neon::render::dd_effect::CEffectDarken>_data;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectDodge>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge> CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectDodge>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge>_vftable *vftablePtr;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectGray>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectGray>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectGray>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectGray>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectGray> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectGray> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectGray> CEffectSrcAlpha<neon::render::dd_effect::CEffectGray>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectGray>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectGray> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectGray> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectGray>_vftable *vftablePtr;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply> CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>_vftable *vftablePtr;
};

typedef struct CEffectRGBMulti CEffectRGBMulti, *PCEffectRGBMulti;

typedef struct CEffectRGBMulti_vftable CEffectRGBMulti_vftable, *PCEffectRGBMulti_vftable;

struct CEffectRGBMulti { // class CEffectRGBMulti : CEffectAbstract
    struct CEffectRGBMulti_vftable *vftablePtr;
};

struct CEffectRGBMulti_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectRGBMulti virtual function #1
    void (*vfunction2)(void *, byte); // CEffectRGBSub virtual function #2
    void (*vfunction3)(void *); // CEffectRGBMulti virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti> CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>;

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_data CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_data, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_data;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined **offset_0x8;
    undefined1 offset_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined1 offset_0x14;
    undefined1 offset_0x15;
    undefined1 offset_0x16;
    undefined field20_0x17;
};

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_vftable *vftablePtr;
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_data CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>_data;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn> CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn>_vftable *vftablePtr;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectLighten>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten> CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectLighten>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten>_vftable *vftablePtr;
};

typedef struct CEffectDifferent_vftable CEffectDifferent_vftable, *PCEffectDifferent_vftable;

struct CEffectDifferent_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectDifferent virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectDifferent virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectDifferent CEffectDifferent, *PCEffectDifferent;

struct CEffectDifferent { // class CEffectDifferent : CEffectAbstract
    struct CEffectDifferent_vftable *vftablePtr;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAdd>_vftable CEffectTransparent<neon::render::dd_effect::CEffectAdd>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectAdd>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectAdd>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAdd> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAdd> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAdd>_data CEffectTransparent<neon::render::dd_effect::CEffectAdd>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectAdd>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectAdd>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAdd> CEffectTransparent<neon::render::dd_effect::CEffectAdd>, *PCEffectTransparent<neon::render::dd_effect::CEffectAdd>;

struct CEffectTransparent<neon::render::dd_effect::CEffectAdd>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectAdd> { // class CEffectTransparent<neon::render::dd_effect::CEffectAdd> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectAdd>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectAdd>_data CEffectTransparent<neon::render::dd_effect::CEffectAdd>_data;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_vftable CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectRGBSub> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectRGBSub> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_data CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined1 offset_0x18;
    undefined1 offset_0x19;
    undefined1 offset_0x1a;
    undefined field21_0x1b;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub> CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBSub>;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined1 offset_0x18;
    undefined1 offset_0x19;
    undefined1 offset_0x1a;
    undefined field21_0x1b;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub> { // class CEffectTransparent<neon::render::dd_effect::CEffectRGBSub> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_data CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>_data;
};

typedef struct CEffectAlphaGray CEffectAlphaGray, *PCEffectAlphaGray;

typedef struct CEffectAlphaGray_vftable CEffectAlphaGray_vftable, *PCEffectAlphaGray_vftable;

struct CEffectAlphaGray { // class CEffectAlphaGray : CEffectAbstract
    struct CEffectAlphaGray_vftable *vftablePtr;
};

struct CEffectAlphaGray_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectAlphaGray virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectAlphaGray virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAlpha> CEffectTransparent<neon::render::dd_effect::CEffectAlpha>, *PCEffectTransparent<neon::render::dd_effect::CEffectAlpha>;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_vftable CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectAlpha>_vftable;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_data CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectAlpha>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

struct CEffectTransparent<neon::render::dd_effect::CEffectAlpha> { // class CEffectTransparent<neon::render::dd_effect::CEffectAlpha> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_data CEffectTransparent<neon::render::dd_effect::CEffectAlpha>_data;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDodge> CEffectTransparent<neon::render::dd_effect::CEffectDodge>, *PCEffectTransparent<neon::render::dd_effect::CEffectDodge>;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDodge>_vftable CEffectTransparent<neon::render::dd_effect::CEffectDodge>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectDodge>_vftable;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDodge>_data CEffectTransparent<neon::render::dd_effect::CEffectDodge>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectDodge>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectDodge>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectDodge>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectDodge> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectDodge> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

struct CEffectTransparent<neon::render::dd_effect::CEffectDodge> { // class CEffectTransparent<neon::render::dd_effect::CEffectDodge> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectDodge>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectDodge>_data CEffectTransparent<neon::render::dd_effect::CEffectDodge>_data;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectAdd>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd> CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectAdd>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd>_vftable *vftablePtr;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray> CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray>_vftable *vftablePtr;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub> CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>;

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_data CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_data, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_data;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined **offset_0x8;
    undefined1 offset_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined1 offset_0x14;
    undefined1 offset_0x15;
    undefined1 offset_0x16;
    undefined field20_0x17;
};

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_vftable *vftablePtr;
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_data CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>_data;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy> CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>;

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>_vftable *vftablePtr;
};

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray> CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>, *PCEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_vftable CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_vftable;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_data CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

struct CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray> { // class CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_data CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>_data;
};

typedef struct CEffectAlpha CEffectAlpha, *PCEffectAlpha;

typedef struct CEffectAlpha_vftable CEffectAlpha_vftable, *PCEffectAlpha_vftable;

struct CEffectAlpha { // class CEffectAlpha : CEffectAbstract
    struct CEffectAlpha_vftable *vftablePtr;
};

struct CEffectAlpha_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectAlpha virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectAlpha virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_data CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn> CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>, *PCEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_vftable CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn> { // class CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_data CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>_data;
};

typedef struct CEffectSub_vftable CEffectSub_vftable, *PCEffectSub_vftable;

struct CEffectSub_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSub virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectSub virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectSub CEffectSub, *PCEffectSub;

struct CEffectSub { // class CEffectSub : CEffectAbstract
    struct CEffectSub_vftable *vftablePtr;
};

typedef struct CEffectSrcCopy CEffectSrcCopy, *PCEffectSrcCopy;

typedef struct CEffectSrcCopy_vftable CEffectSrcCopy_vftable, *PCEffectSrcCopy_vftable;

struct CEffectSrcCopy { // class CEffectSrcCopy : CEffectAbstract
    struct CEffectSrcCopy_vftable *vftablePtr;
};

struct CEffectSrcCopy_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcCopy virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectSrcCopy virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectLighten> CEffectTransparent<neon::render::dd_effect::CEffectLighten>, *PCEffectTransparent<neon::render::dd_effect::CEffectLighten>;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectLighten>_vftable CEffectTransparent<neon::render::dd_effect::CEffectLighten>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectLighten>_vftable;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectLighten>_data CEffectTransparent<neon::render::dd_effect::CEffectLighten>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectLighten>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectLighten>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectLighten>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectLighten> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectLighten> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

struct CEffectTransparent<neon::render::dd_effect::CEffectLighten> { // class CEffectTransparent<neon::render::dd_effect::CEffectLighten> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectLighten>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectLighten>_data CEffectTransparent<neon::render::dd_effect::CEffectLighten>_data;
};

typedef struct CEffectGray CEffectGray, *PCEffectGray;

typedef struct CEffectGray_vftable CEffectGray_vftable, *PCEffectGray_vftable;

struct CEffectGray { // class CEffectGray : CEffectAbstract
    struct CEffectGray_vftable *vftablePtr;
};

struct CEffectGray_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectGray virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectGray virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_vftable CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_data CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined1 offset_0x18;
    undefined1 offset_0x19;
    undefined1 offset_0x1a;
    undefined field21_0x1b;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti> CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined1 offset_0x18;
    undefined1 offset_0x19;
    undefined1 offset_0x1a;
    undefined field21_0x1b;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti> { // class CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_data CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>_data;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_vftable CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectDifferent>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectDifferent> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectDifferent> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_data CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectDifferent>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent> CEffectTransparent<neon::render::dd_effect::CEffectDifferent>, *PCEffectTransparent<neon::render::dd_effect::CEffectDifferent>;

struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent> { // class CEffectTransparent<neon::render::dd_effect::CEffectDifferent> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_data CEffectTransparent<neon::render::dd_effect::CEffectDifferent>_data;
};

typedef struct CEffectMultiply_vftable CEffectMultiply_vftable, *PCEffectMultiply_vftable;

struct CEffectMultiply_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectMultiply virtual function #1
    void (*vfunction2)(void *, byte); // CEffectRGBAdd virtual function #2
    void (*vfunction3)(void *); // CEffectMultiply virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectMultiply CEffectMultiply, *PCEffectMultiply;

struct CEffectMultiply { // class CEffectMultiply : CEffectAbstract
    struct CEffectMultiply_vftable *vftablePtr;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectSub> CEffectTransparent<neon::render::dd_effect::CEffectSub>, *PCEffectTransparent<neon::render::dd_effect::CEffectSub>;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectSub>_vftable CEffectTransparent<neon::render::dd_effect::CEffectSub>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectSub>_vftable;

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectSub>_data CEffectTransparent<neon::render::dd_effect::CEffectSub>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectSub>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectSub>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectSub>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectSub> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectSub> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

struct CEffectTransparent<neon::render::dd_effect::CEffectSub> { // class CEffectTransparent<neon::render::dd_effect::CEffectSub> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectSub>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectSub>_data CEffectTransparent<neon::render::dd_effect::CEffectSub>_data;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectScreen>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen> CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectScreen>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen>_vftable *vftablePtr;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_vftable CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_data CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy> CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>, *PCEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>;

struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy> { // class CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_data CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>_data;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSub>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectSub>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectSub>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSub>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectSub> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectSub> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSub> CEffectSrcAlpha<neon::render::dd_effect::CEffectSub>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectSub>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSub> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectSub> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectSub>_vftable *vftablePtr;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectGray>_vftable CEffectTransparent<neon::render::dd_effect::CEffectGray>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectGray>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectGray>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectGray> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectGray> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectGray>_data CEffectTransparent<neon::render::dd_effect::CEffectGray>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectGray>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectGray>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectGray> CEffectTransparent<neon::render::dd_effect::CEffectGray>, *PCEffectTransparent<neon::render::dd_effect::CEffectGray>;

struct CEffectTransparent<neon::render::dd_effect::CEffectGray>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectGray> { // class CEffectTransparent<neon::render::dd_effect::CEffectGray> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectGray>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectGray>_data CEffectTransparent<neon::render::dd_effect::CEffectGray>_data;
};

typedef struct CEffectAdd_vftable CEffectAdd_vftable, *PCEffectAdd_vftable;

struct CEffectAdd_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectAdd virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectAdd virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
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
    void (*vfunction2)(void *, byte); // CEffectRGBSub virtual function #2
    void (*vfunction3)(void *); // CEffectRGBSub virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectDodge_vftable CEffectDodge_vftable, *PCEffectDodge_vftable;

struct CEffectDodge_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectDodge virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectDodge virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectDodge CEffectDodge, *PCEffectDodge;

struct CEffectDodge { // class CEffectDodge : CEffectAbstract
    struct CEffectDodge_vftable *vftablePtr;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_data CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectMultiply>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_vftable CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectMultiply>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectMultiply> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectMultiply> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply> CEffectTransparent<neon::render::dd_effect::CEffectMultiply>, *PCEffectTransparent<neon::render::dd_effect::CEffectMultiply>;

struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply> { // class CEffectTransparent<neon::render::dd_effect::CEffectMultiply> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_data CEffectTransparent<neon::render::dd_effect::CEffectMultiply>_data;
};

typedef struct CEffectLighten CEffectLighten, *PCEffectLighten;

typedef struct CEffectLighten_vftable CEffectLighten_vftable, *PCEffectLighten_vftable;

struct CEffectLighten { // class CEffectLighten : CEffectAbstract
    struct CEffectLighten_vftable *vftablePtr;
};

struct CEffectLighten_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectLighten virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectLighten virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_data CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_data, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_data;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined1 offset_0x18;
    undefined1 offset_0x19;
    undefined1 offset_0x1a;
    undefined field21_0x1b;
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_vftable CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_vftable, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_vftable;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectTransparent<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd> CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>, *PCEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>;

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined4 offset_0x8;
    undefined **offset_0xc;
    undefined1 offset_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined1 offset_0x18;
    undefined1 offset_0x19;
    undefined1 offset_0x1a;
    undefined field21_0x1b;
};

struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd> { // class CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd> : CEffectAbstract
    struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_vftable *vftablePtr;
    struct CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_data CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>_data;
};

typedef struct CEffectDarken CEffectDarken, *PCEffectDarken;

typedef struct CEffectDarken_vftable CEffectDarken_vftable, *PCEffectDarken_vftable;

struct CEffectDarken { // class CEffectDarken : CEffectAbstract
    struct CEffectDarken_vftable *vftablePtr;
};

struct CEffectDarken_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectDarken virtual function #1
    void (*vfunction2)(void *, byte); // CEffectAbstract virtual function #2
    void (*vfunction3)(void *); // CEffectDarken virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectAbstract virtual function #5
    void (*vfunction6)(void *); // CEffectSrcCopy virtual function #6
    void (*~IDxDevice)(void *); // IDxDevice virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_data CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_data, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_data;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined **offset_0x8;
    undefined1 offset_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined1 offset_0x14;
    undefined1 offset_0x15;
    undefined1 offset_0x16;
    undefined field20_0x17;
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_vftable CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_vftable, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_vftable;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd> virtual function #1
    void (*vfunction2)(void *, byte); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #2
    void (*vfunction3)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd> virtual function #3
    void (*Release)(void *); // CDDDisplay virtual function #4
    undefined1 (*vfunction5)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #5
    void (*vfunction6)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #6
    void (*vfunction7)(void *); // CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> virtual function #7
};

typedef struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd> CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>, *PCEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>;

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_data {
    undefined1 offset_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined **offset_0x8;
    undefined1 offset_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    undefined field13_0x10;
    undefined field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined1 offset_0x14;
    undefined1 offset_0x15;
    undefined1 offset_0x16;
    undefined field20_0x17;
};

struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd> { // class CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd> : CEffectAbstract
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_vftable *vftablePtr;
    struct CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_data CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>_data;
};

typedef struct CDDDisplay_data CDDDisplay_data, *PCDDDisplay_data;

struct CDDDisplay_data {
    int *offset_0x0;
    undefined4 *offset_0x4;
    undefined4 *offset_0x8;
    undefined4 *offset_0xc;
    undefined4 offset_0x10;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    undefined field9_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    undefined field17_0x20;
    undefined field18_0x21;
    undefined field19_0x22;
    undefined field20_0x23;
    undefined field21_0x24;
    undefined field22_0x25;
    undefined field23_0x26;
    undefined field24_0x27;
    undefined field25_0x28;
    undefined field26_0x29;
    undefined field27_0x2a;
    undefined field28_0x2b;
    undefined field29_0x2c;
    undefined field30_0x2d;
    undefined field31_0x2e;
    undefined field32_0x2f;
    undefined4 offset_0x30;
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined1 offset_0x44;
    undefined1 offset_0x45;
    undefined field40_0x46;
    undefined field41_0x47;
    undefined4 offset_0x48;
    undefined4 offset_0x4c;
    undefined4 offset_0x50;
    undefined1 offset_0x54;
    undefined1 offset_0x55;
    undefined field47_0x56;
    undefined field48_0x57;
    undefined4 offset_0x58;
    int *offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
    undefined1 offset_0x70;
    undefined1 offset_0x71;
    undefined field57_0x72;
    undefined field58_0x73;
    undefined4 offset_0x74;
    undefined field60_0x78;
    undefined field61_0x79;
    undefined field62_0x7a;
    undefined field63_0x7b;
    undefined field64_0x7c;
    undefined field65_0x7d;
    undefined field66_0x7e;
    undefined field67_0x7f;
    undefined field68_0x80;
    undefined field69_0x81;
    undefined field70_0x82;
    undefined field71_0x83;
    undefined field72_0x84;
    undefined field73_0x85;
    undefined field74_0x86;
    undefined field75_0x87;
    undefined field76_0x88;
    undefined field77_0x89;
    undefined field78_0x8a;
    undefined field79_0x8b;
    undefined field80_0x8c;
    undefined field81_0x8d;
    undefined field82_0x8e;
    undefined field83_0x8f;
    void *offset_0x90;
    undefined field85_0x94;
    undefined field86_0x95;
    undefined field87_0x96;
    undefined field88_0x97;
    undefined field89_0x98;
    undefined field90_0x99;
    undefined field91_0x9a;
    undefined field92_0x9b;
    undefined field93_0x9c;
    undefined field94_0x9d;
    undefined field95_0x9e;
    undefined field96_0x9f;
    undefined field97_0xa0;
    undefined field98_0xa1;
    undefined field99_0xa2;
    undefined field100_0xa3;
    void *offset_0xa4;
    undefined4 offset_0xa8;
};

typedef struct CDDDisplay_vftable CDDDisplay_vftable, *PCDDDisplay_vftable;

struct CDDDisplay_vftable {
    CDDDisplay * (*deleting_destructor)(void *, byte); // CDDDisplay virtual function #1
    bool (*Init)(void *, struct HWND__ *, ulong, ulong, ulong, ulong); // CDDDisplay virtual function #2
    void (*SetVSyncWait)(void *, bool); // CDDDisplay virtual function #3
    bool (*GetVSyncWait)(void *); // CDDDisplay virtual function #4
    ulong (*GetWidth)(void *); // CDDDisplay virtual function #5
    ulong (*GetHeight)(void *); // CDDDisplay virtual function #6
    ulong (*GetBPP)(void *); // CDDDisplay virtual function #7
    bool (*IsWindowMode)(void *); // CDDDisplay virtual function #8
    long (*ChangeDisplayMode)(void *, bool, bool); // CDDDisplay virtual function #9
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #10
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #11
    bool (*Draw)(void *, struct IDxDraw *); // CDDDisplay virtual function #12
    bool (*RenderScene)(void *); // CDDDisplay virtual function #13
    bool (*PostRender)(void *); // CDDDisplay virtual function #14
    IDxSurface * (*CreateSurface)(void *, struct SurfaceDesc *); // CDDDisplay virtual function #15
    IDxDraw * (*CreateDraw)(void *, struct IDxSurface *); // CDDDisplay virtual function #16
    void (*Release)(void *); // CDDDisplay virtual function #17
    void (*Process_WM_PAINT)(void *, struct tagRECT *); // CDDDisplay virtual function #18
    void (*AddClipRgn)(void *, struct HWND__ *); // CDDDisplay virtual function #19
    void (*RemoveClipRgn)(void *, struct HWND__ *); // CDDDisplay virtual function #20
    long (*CalcVRAM)(void *, ulong *, ulong *); // CDDDisplay virtual function #21
    bool (*Is32bppTextureAvailable)(void *); // CDDDisplay virtual function #22
    void (*RenderListClear)(void *); // CDDDisplay virtual function #23
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #24
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #25
    long (*DestroyObjects)(void *); // CDDDisplay virtual function #26
};


// WARNING! conflicting data type names: /ClassDataTypes/neon/render/CDDDisplay/CDDDisplay - /neon/render/CDDDisplay

typedef struct CDDDraw_vftable CDDDraw_vftable, *PCDDDraw_vftable;

struct CDDDraw_vftable {
    CDDDraw * (*deleting_destructor)(void *, byte); // CDDDraw virtual function #1
    void (*vfunction2)(void *, int *); // CDDDraw virtual function #2
    void (*ApplyLinearFilter)(void *, bool); // IDxDevice virtual function #3
    void (*vfunction4)(void *, int, undefined4, undefined4, undefined4); // CDDDraw virtual function #4
    void (*vfunction5)(void *, int, uint, uint, uint, uint); // CDDDraw virtual function #5
    void (*vfunction6)(void *, undefined4 *); // CDDDraw virtual function #6
    void (*vfunction7)(void *, undefined4 *); // CDDDraw virtual function #7
    void (*vfunction8)(void *, undefined1); // CDDDraw virtual function #8
    void (*vfunction9)(void *, undefined4 *); // CDDDraw virtual function #9
    void (*vfunction10)(void *, undefined4 *); // CDDDraw virtual function #10
    void (*vfunction11)(void *, undefined1); // CDDDraw virtual function #11
    undefined1 (*vfunction12)(void *); // CDDDraw virtual function #12
    list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> * (*DirtyRectList)(void *); // CRefreshRgnMgr virtual function #13
    int (*vfunction14)(void *); // CDDDraw virtual function #14
    int (*vfunction15)(void *); // CDDDraw virtual function #15
    int (*vfunction16)(void *); // CDDDraw virtual function #16
    void (*vfunction17)(void *, undefined4); // CDDDraw virtual function #17
    void (*Release)(void *); // CDDDisplay virtual function #18
    void (*vfunction19)(void *, undefined4 *); // CDDDraw virtual function #19
    undefined4 (*vfunction20)(void *); // CDDDraw virtual function #20
};

typedef struct CDDDraw CDDDraw, *PCDDDraw;

typedef struct CDDDraw_data CDDDraw_data, *PCDDDraw_data;

struct CDDDraw_data {
    int *offset_0x0;
    int *offset_0x4;
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
    undefined4 offset_0x4c;
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
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
    undefined4 offset_0xbc;
    undefined4 offset_0xc0;
    undefined4 offset_0xc4;
    undefined4 offset_0xc8;
    int offset_0xcc;
    char offset_0xd0;
    char offset_0xd1;
    char offset_0xd2;
    char offset_0xd3;
    undefined1 offset_0xd4;
    bool offset_0xd5;
    char offset_0xd6;
    undefined1 offset_0xd7;
    undefined field108_0xd8;
    undefined1 offset_0xd9;
    undefined field110_0xda;
    undefined field111_0xdb;
    void *offset_0xdc;
    undefined field113_0xe0;
    undefined field114_0xe1;
    undefined field115_0xe2;
    undefined field116_0xe3;
    undefined field117_0xe4;
    undefined field118_0xe5;
    undefined field119_0xe6;
    undefined field120_0xe7;
    void *offset_0xe8;
    undefined4 offset_0xec;
    undefined4 offset_0xf0;
    undefined1 offset_0xf4;
    undefined field125_0xf5;
    undefined field126_0xf6;
    undefined field127_0xf7;
};

struct CDDDraw { // class CDDDraw : IDxDraw
    struct CDDDraw_vftable *vftablePtr;
    struct CDDDraw_data CDDDraw_data;
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

typedef struct CAvatar_vftable CAvatar_vftable, *PCAvatar_vftable;

struct CAvatar_vftable {
    CText * (*deleting_destructor)(void *, byte); // CAvatar virtual function #1
    void (*Logic)(void *); // CAvatar virtual function #2
    void (*Output)(void *); // CAvatar virtual function #3
    void (*~IDxDevice)(void *); // IDxDevice virtual function #4
    void (*OnAttached)(void *); // CVisual virtual function #5
    void (*OnDetached)(void *); // CVisual virtual function #6
    void (*OnActivate)(void *, bool); // CObject virtual function #7
    void (*OnSelect)(void *, bool); // CObject virtual function #8
    void (*OnFocus)(void *, bool, bool); // CObject virtual function #9
    CObject * (*IsIn)(void *, int, int); // CObject virtual function #10
    CObject * (*Clone)(void *); // CVisual virtual function #11
    void (*Copy)(void *, struct CObject *); // CVisual virtual function #12
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
    CObject * (*IsChildIn)(void *, int, int); // CObject virtual function #14
    void (*SetEffect)(void *, enum VRenderEffectType, uchar, uchar, uchar); // CVisual virtual function #15
    void (*Blt)(void *, int, int, struct IDxSurface *, struct tagRECT *, bool); // CRLESurface virtual function #16
    void (*SetClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #17
    void (*SetLocalClipRect)(void *, struct CBasicRect<float> *, bool); // CVisual virtual function #18
    float (*GetPosX)(void *); // CVisual virtual function #19
    float (*GetPosY)(void *); // CVisual virtual function #20
    void (*SetPosX)(void *, float); // CVisual virtual function #21
    void (*SetPosY)(void *, float); // CVisual virtual function #22
    void (*SetShowRef)(void *, bool); // CAvatar virtual function #23
    void (*SetInverse)(void *, bool); // CVisual virtual function #24
    void (*SetPivot)(void *, float, float); // CVisual virtual function #25
    void (*SetUseParentRotation)(void *, bool); // CVisual virtual function #26
    uchar (*GetAlpha)(void *); // CVisual virtual function #27
};

typedef struct CAvatar_data CAvatar_data, *PCAvatar_data;

struct CAvatar_data {
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
    int *offset_0xb0;
    undefined field168_0xb4;
    undefined field169_0xb5;
    undefined field170_0xb6;
    undefined field171_0xb7;
    undefined field172_0xb8;
    undefined field173_0xb9;
    undefined field174_0xba;
    undefined field175_0xbb;
    undefined field176_0xbc;
    undefined field177_0xbd;
    undefined field178_0xbe;
    undefined field179_0xbf;
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
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
    undefined4 offset_0xdc;
    undefined4 offset_0xe0;
};


// WARNING! conflicting data type names: /ClassDataTypes/CAvatar/CAvatar - /CAvatar


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
    long (*Restore)(void *); // CAvtrPartPool virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/DXAvatar/CAvtrPartPool/CAvtrPartPool - /DXAvatar/CAvtrPartPool

typedef struct CDxAvtrPartPool_vftable CDxAvtrPartPool_vftable, *PCDxAvtrPartPool_vftable;

struct CDxAvtrPartPool_vftable {
    CManagedRes * (*deleting_destructor)(void *, byte); // CDxAvtrPartPool virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    long (*Restore)(void *); // CDxAvtrPartPool virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/DXAvatar/CDxAvtrPartPool/CDxAvtrPartPool - /DXAvatar/CDxAvtrPartPool

typedef struct CAvtr2004dx_vftable CAvtr2004dx_vftable, *PCAvtr2004dx_vftable;

struct CAvtr2004dx_vftable {
    CManagedRes * (*deleting_destructor)(void *, byte); // CAvtr2004dx virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    long (*Restore)(void *); // CAvtr2004dx virtual function #3
};


// WARNING! conflicting data type names: /ClassDataTypes/DXAvatar/CAvtr2004dx/CAvtr2004dx - /DXAvatar/CAvtr2004dx

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
    void (*~IDxDevice)(void *); // MSVCR90.DLL IInput pure virtual function #4
    undefined4 (*vfunction5)(void *, byte); // MSVCR90.DLL IInput pure virtual function #5
    void (*vfunction6)(void *); // MSVCR90.DLL IInput pure virtual function #6
    void (*~IDxDevice)(void *); // MSVCR90.DLL IInput pure virtual function #7
};


// WARNING! conflicting data type names: /ClassDataTypes/IInput/IInput - /IInput

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
    HDC__ * (*GetDC)(void); // CRLESurface virtual function #13
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


// WARNING! conflicting data type names: /ClassDataTypes/CManagedRes/CManagedRes - /CManagedRes

typedef struct CManagedRes_vftable CManagedRes_vftable, *PCManagedRes_vftable;

struct CManagedRes_vftable {
    CManagedRes * (*deleting_destructor)(void *, byte); // CManagedRes virtual function #1
    IDirect3DDevice9 * (*GetD3DDevice)(void *); // IDxDevice virtual function #2
    long (*Restore)(void *); // MSVCR90.DLL CManagedRes pure virtual function #3
};


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

typedef struct Bitmap_data Bitmap_data, *PBitmap_data;

struct GdiplusBase { // class GdiplusBase
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct Bitmap_data {
    int offset_0x0;
};

struct Bitmap { // class Bitmap : Image
    struct Bitmap_vftable *vftablePtr;
    struct GdiplusBase GdiplusBase;
    struct Bitmap_data Bitmap_data;
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

typedef struct IDirect3DDevice9 IDirect3DDevice9, *PIDirect3DDevice9;

struct IDirect3DDevice9 { // PlaceHolder Structure
};

typedef struct FSOUND_SAMPLE FSOUND_SAMPLE, *PFSOUND_SAMPLE;

struct FSOUND_SAMPLE { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/IDxDraw - /ClassDataTypes/IDxDraw/IDxDraw

typedef enum VRenderEffectType {
} VRenderEffectType;

typedef struct SLine SLine, *PSLine;

struct SLine { // PlaceHolder Structure
};

typedef struct CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection>, *PCNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection>;

struct CNeonMixer<class_neon::dev::CSound,class_neon::util::CCriticalSection> { // PlaceHolder Structure
};

typedef enum PixelFormat {
} PixelFormat;


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info


// WARNING! conflicting data type names: /Demangler/IDxEffect - /ClassDataTypes/IDxEffect/IDxEffect

typedef struct SurfaceDesc SurfaceDesc, *PSurfaceDesc;

struct SurfaceDesc { // PlaceHolder Structure
};

typedef struct CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock>, *PCNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock>;

struct CNeonMixer<class_neon::dev::CSound,class_neon::util::CEmptyLock> { // PlaceHolder Structure
};

typedef enum ESurfaceUsage {
} ESurfaceUsage;

typedef struct _DDPIXELFORMAT _DDPIXELFORMAT, *P_DDPIXELFORMAT;

struct _DDPIXELFORMAT { // PlaceHolder Structure
};

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

typedef struct map<neon::render::EIncludedPos,tagPOINT,std::less<neon::render::EIncludedPos>,std::allocator<std::pair<neon::render::EIncludedPos_const_,tagPOINT>_>_> map<neon::render::EIncludedPos,tagPOINT,std::less<neon::render::EIncludedPos>,std::allocator<std::pair<neon::render::EIncludedPos_const_,tagPOINT>_>_>, *Pmap<neon::render::EIncludedPos,tagPOINT,std::less<neon::render::EIncludedPos>,std::allocator<std::pair<neon::render::EIncludedPos_const_,tagPOINT>_>_>;

struct map<neon::render::EIncludedPos,tagPOINT,std::less<neon::render::EIncludedPos>,std::allocator<std::pair<neon::render::EIncludedPos_const_,tagPOINT>_>_> { // PlaceHolder Structure
};

typedef struct allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *Pallocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct vector<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> vector<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_>, *Pvector<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_>;

struct vector<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> - /ClassDataTypes/std/_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>/_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>

typedef struct list<Loki::Internal::LifetimeTracker*,std::allocator<Loki::Internal::LifetimeTracker*>_> list<Loki::Internal::LifetimeTracker*,std::allocator<Loki::Internal::LifetimeTracker*>_>, *Plist<Loki::Internal::LifetimeTracker*,std::allocator<Loki::Internal::LifetimeTracker*>_>;

struct list<Loki::Internal::LifetimeTracker*,std::allocator<Loki::Internal::LifetimeTracker*>_> { // PlaceHolder Structure
};

typedef struct list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_>, *Plist<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_>;

struct list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *P_Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct _Vector_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_const_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Vector_const_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *P_Vector_const_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct _Vector_const_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
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


// WARNING! conflicting data type names: /Demangler/neon/phy/CActor - /ClassDataTypes/neon/phy/CActor/CActor


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


// WARNING! conflicting data type names: /Demangler/neon/frw/CAppManager - /ClassDataTypes/neon/frw/CAppManager/CAppManager


// WARNING! conflicting data type names: /Demangler/neon/frw/CObject - /ClassDataTypes/neon/frw/CObject/CObject

typedef struct CRefreshRgnMgr CRefreshRgnMgr, *PCRefreshRgnMgr;

struct CRefreshRgnMgr { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/neon/render/CDDDraw - /ClassDataTypes/neon/render/CDDDraw/CDDDraw

typedef struct SmallObjAllocator SmallObjAllocator, *PSmallObjAllocator;

struct SmallObjAllocator { // PlaceHolder Structure
};

typedef struct AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>, *PAllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>;

struct AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex> { // PlaceHolder Structure
};

typedef struct Functor<void,Loki::Typelist<void*,Loki::NullType>,Loki::ClassLevelLockable> Functor<void,Loki::Typelist<void*,Loki::NullType>,Loki::ClassLevelLockable>, *PFunctor<void,Loki::Typelist<void*,Loki::NullType>,Loki::ClassLevelLockable>;

struct Functor<void,Loki::Typelist<void*,Loki::NullType>,Loki::ClassLevelLockable> { // PlaceHolder Structure
};

typedef struct SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst> SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>, *PSmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>;

struct SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst> { // PlaceHolder Structure
};

typedef struct SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex> SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex>, *PSingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex>;

struct SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex> { // PlaceHolder Structure
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

typedef struct CAvtrTickHandler CAvtrTickHandler, *PCAvtrTickHandler;

struct CAvtrTickHandler { // PlaceHolder Structure
};

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
bool __thiscall neon::ctrl::CControl::neon::ctrl::CControl::Destroy(CControl *this);
CObject * __thiscall neon::ctrl::CControl::neon::ctrl::CControl::IsIn(CControl *this,int param_1,int param_2);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetSelect(CControl *this,bool param_1);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::OnSelect(CControl *this,bool param_1);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::ProcessMessage(CControl *this,uint param_1,uint param_2,uint param_3);
void FUN_100011c0(void);
exception * __thiscall std::bad_alloc::deleting_destructor(bad_alloc *this,byte param_1);
void __fastcall FUN_10001200(int param_1);
CControl * __thiscall neon::ctrl::CControl::FindControlParent(CControl *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::AttachToolTip(CControl *this,CVisual *param_1);
void __thiscall neon::ctrl::CControl::ShowTip(CControl *this,bool param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
void __thiscall std::logic_error::vfunction2(logic_error *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetCanFocus(CControl *this,bool param_1);
bool __thiscall neon::ctrl::CControl::neon::ctrl::CControl::GetCanFocus(CControl *this);
uchar __thiscall neon::ctrl::CControl::neon::ctrl::CControl::GetAlpha(CControl *this);
CObject * __thiscall neon::ctrl::CControl::neon::ctrl::CControl::Clone(CControl *this);
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
void FUN_10001640(exception *param_1);
void FUN_10001660(exception *param_1);
void FUN_10001680(void);
void FUN_10001690(void);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::Logic(CControl *this);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetActive(CControl *this,bool param_1);
bool __thiscall neon::ctrl::CControl::ReleaseCapture(CControl *this);
undefined * FUN_100017b0(void);
void __thiscall Loki::Internal::ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>::~ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>(ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>*this);
undefined4 * __thiscall Loki::Internal::ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>::deleting_destructor(ConcreteLifetimeTracker<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::Internal::Adapter<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>_>_>*this,byte param_1);
CObject * __thiscall neon::ctrl::CControl::neon::ctrl::CControl::IsMyIn(CControl *this,int param_1,int param_2);
void __cdecl Loki::SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>::DestroySingleton(void);
void __cdecl FUN_10001980(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,undefined4 *param_6,undefined *param_7);
CControl * __cdecl neon::ctrl::CControl::GetModal(void);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetEffect(CControl *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::ctrl::CControl::neon::ctrl::CControl::SetEffectType(CControl *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
undefined4 __thiscall FUN_10001bf0(void *this,undefined4 param_1);
CObject * __thiscall neon::ctrl::CControl::neon::ctrl::CControl::IsChildIn(CControl *this,int param_1,int param_2);
undefined4 __thiscall FUN_10001d80(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001df0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001e60(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001ed0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001f40(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10001fb0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002020(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002090(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002100(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002170(void *this,undefined4 param_1);
undefined4 __thiscall FUN_100021e0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002250(void *this,undefined4 param_1);
undefined4 __thiscall FUN_100022c0(void *this,undefined4 param_1);
undefined4 __thiscall FUN_10002330(void *this,undefined4 param_1);
undefined4 __thiscall FUN_100023a0(void *this,undefined4 param_1);
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
void __fastcall FUN_100033b0(undefined4 *param_1);
bool __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::CreateCursor(CEdit *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
int __thiscall neon::ctrl::CEdit::GetCompStringWidth(CEdit *this,HDC__ *param_1,uint param_2);
exception * __thiscall std::invalid_argument::deleting_destructor(invalid_argument *this,byte param_1);
void __thiscall neon::ctrl::CEdit::OnCursorLeft(CEdit *this);
void __thiscall neon::ctrl::CEdit::OnCursorHome(CEdit *this);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::SetFocus(CEdit *this,bool param_1,bool param_2);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::SetPivot(CEdit *this,float param_1,float param_2);
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
undefined4 __cdecl FUN_100038a0(undefined4 *param_1);
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
void * FUN_100047b0(void *param_1,int param_2,void *param_3);
void FUN_100047f0(void *param_1);
void FUN_10004830(exception *param_1);
void __cdecl FUN_10004850(int *param_1,char param_2);
CEdit * __thiscall neon::ctrl::CEdit::CEdit(CEdit *this);
void __thiscall neon::ctrl::CEdit::~CEdit(CEdit *this);
void __thiscall neon::ctrl::CEdit::Clear(CEdit *this);
void __thiscall neon::ctrl::CEdit::DeleteRichEditItem(CEdit *this,int param_1);
void __fastcall FUN_10004d40(int *param_1);
void __cdecl FUN_10004dc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,int *param_6);
CEdit * __thiscall neon::ctrl::CEdit::deleting_destructor(CEdit *this,byte param_1);
void __thiscall neon::ctrl::CEdit::OnBackSpace(CEdit *this);
void __thiscall neon::ctrl::CEdit::OnDelete(CEdit *this);
void __fastcall thunk_FUN_10004d40(int *param_1);
void __cdecl FUN_10004ef0(int param_1,int param_2);
void __thiscall neon::ctrl::CEdit::OnSpecialKeyDown(CEdit *this,uint param_1);
void __thiscall neon::ctrl::CEdit::neon::ctrl::CEdit::OnReturn(CEdit *this);
CMsgDispatch * __thiscall eco::CMsgDispatch::CMsgDispatch(CMsgDispatch *this,CMsgDispatch *param_1);
CMsgDispatch * __thiscall eco::CMsgDispatch::operator=(CMsgDispatch *this,CMsgDispatch *param_1);
CCompositeHolder<neon::frw::CComponent> * __thiscall eco::CCompositeHolder<neon::frw::CComponent>::CCompositeHolder<neon::frw::CComponent>(CCompositeHolder<neon::frw::CComponent> *this,CCompositeHolder<class_neon::frw::CComponent> *param_1);
void __thiscall eco::CCompositeHolder<neon::frw::CComponent>::~CCompositeHolder<neon::frw::CComponent>(CCompositeHolder<neon::frw::CComponent> *this);
void FUN_100052a5(void);
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
void __cdecl FUN_10005e20(CEdit *param_1,char *param_2);
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
void FUN_10006400(void);
void __thiscall neon::ctrl::CScrollBar::SetCurData(CScrollBar *this,float param_1);
void __thiscall neon::ctrl::CScrollBar::MovePos(CScrollBar *this,float param_1);
void __fastcall FUN_10006570(int *param_1);
void __cdecl FUN_10006580(undefined4 *param_1,int *param_2);
int __thiscall Loki::MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>::vfunction3(MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>*this,int param_1);
void __thiscall FUN_10006630(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::SetCanFocus(CScrollBar *this,bool param_1);
void __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::SetPivot(CScrollBar *this,float param_1,float param_2);
void __fastcall FUN_10006a20(int param_1);
void __thiscall FUN_10006a70(void *this,int *param_1,int *param_2);
void __thiscall neon::ctrl::CScrollBar::~CScrollBar(CScrollBar *this);
void __cdecl FUN_10006be0(undefined1 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,undefined4 param_6);
undefined4 __thiscall FUN_10006c20(void *this,undefined4 param_1);
CScrollBar * __thiscall neon::ctrl::CScrollBar::deleting_destructor(CScrollBar *this,byte param_1);
CScrollBar * __thiscall neon::ctrl::CScrollBar::CScrollBar(CScrollBar *this);
void __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::SetActive(CScrollBar *this,bool param_1);
void __cdecl FUN_10006eb0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,int *param_6,undefined4 *param_7,int *param_8);
undefined4 * __cdecl FUN_10006f70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,int *param_6,undefined4 *param_7,int *param_8);
int * __cdecl FUN_10006fd0(int *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,undefined4 *param_5,int *param_6);
undefined4 * __fastcall FUN_10007037(int *param_1,undefined4 *param_2);
int __thiscall neon::ctrl::CScrollBar::UpBtnProc(CScrollBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CScrollBar::BarBtnProc(CScrollBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CScrollBar::DownBtnProc(CScrollBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CScrollBar::ThumbBtnProc(CScrollBar *this,COP_Drag *param_1);
void __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>::~CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>(CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>*this);
void __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>::~CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>(CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>*this);
undefined4 * __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>::deleting_destructor(CDelegate<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>*this,byte param_1);
undefined4 * __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>::deleting_destructor(CDelegate<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>*this,byte param_1);
undefined4 * __fastcall FUN_10007b50(int param_1);
undefined4 * __fastcall FUN_10007c50(int param_1);
void __thiscall neon::ctrl::CScrollBar::neon::ctrl::CScrollBar::OnMouseWheel(CScrollBar *this,int param_1,short param_2);
CButton * __thiscall neon::ctrl::CButton::CButton(CButton *this,CButton *param_1);
CButton * __thiscall neon::ctrl::CButton::operator=(CButton *this,CButton *param_1);
void * __cdecl FUN_10007fb0(uint param_1);
undefined4 * __thiscall Loki::Internal::FunctorImplBase<int,Loki::ClassLevelLockable>::vfunction1(FunctorImplBase<int,Loki::ClassLevelLockable> *this,byte param_1);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_Drag_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>::vfunction1(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CScrollBar*,int_(__thiscall_neon::ctrl::CScrollBar::*)(neon::ctrl::COP_LUp_const&)>*this,byte param_1);
void __thiscall FUN_10008130(void *this,undefined4 *param_1,undefined4 param_2);
void __thiscall FUN_100081f0(void *this,undefined4 *param_1,undefined4 param_2);
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
CObject * __thiscall neon::ctrl::CSliderBar::neon::ctrl::CSliderBar::IsIn(CSliderBar *this,int param_1,int param_2);
void __thiscall neon::ctrl::CSliderBar::SetCurValue(CSliderBar *this,float param_1);
void __thiscall neon::ctrl::CSliderBar::EnableWindow(CSliderBar *this,bool param_1);
int __thiscall neon::ctrl::CSliderBar::OnBarClick(CSliderBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CSliderBar::OnUpBtnUp(CSliderBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CSliderBar::OnDownBtnUp(CSliderBar *this,COP_LUp *param_1);
int __thiscall neon::ctrl::CSliderBar::OnThumbDrag(CSliderBar *this,COP_Drag *param_1);
void __thiscall neon::ctrl::CSliderBar::SetData(CSliderBar *this,float param_1,float param_2);
undefined4 * FUN_100099e0(undefined4 param_1,undefined4 param_2,int *param_3);
void Catch_All@10009a5c(void);
void __thiscall Loki::MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>::vfunction4(MemFunHandler<Loki::Functor<long,Loki::Typelist<HWND__*,Loki::Typelist<unsigned_int,Loki::Typelist<unsigned_int,Loki::Typelist<long,Loki::Typelist<bool&,Loki::NullType>_>_>_>_>,Loki::ClassLevelLockable>,neon::frw::CApp*,long_(__thiscall_neon::frw::CApp::*)(HWND__*,unsigned_int,unsigned_int,long,bool&)>*this);
void __cdecl FUN_10009a90(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,int *param_6);
void __cdecl FUN_10009ae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,int *param_6);
void __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>::~CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>(CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>*this);
undefined4 * __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>::deleting_destructor(CDelegate<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>*this,byte param_1);
undefined4 * __fastcall FUN_10009c80(int param_1);
CSliderBar * __thiscall neon::ctrl::CSliderBar::CSliderBar(CSliderBar *this,CSliderBar *param_1);
CSliderBar * __thiscall neon::ctrl::CSliderBar::operator=(CSliderBar *this,CSliderBar *param_1);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LUp_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LUp_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_LDown_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_LDown_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_Drag_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CSliderBar*,int_(__thiscall_neon::ctrl::CSliderBar::*)(neon::ctrl::COP_Drag_const&)>*this);
void __thiscall FUN_1000a090(void *this,undefined4 *param_1,undefined4 param_2);
void __thiscall FUN_1000a150(void *this,undefined4 *param_1,undefined4 param_2);
void __thiscall FUN_1000a210(void *this,undefined4 *param_1,undefined4 param_2);
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
void __fastcall FUN_1000a7c0(undefined4 *param_1);
void __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::SetPivot(CTextWindow *this,float param_1,float param_2);
void __cdecl FUN_1000a890(char *param_1,char *param_2,char param_3);
void __cdecl FUN_1000a8b0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
void __thiscall CManagedRes::CManagedRes(CManagedRes *this,CManagedRes *param_1);
CManagedRes * __thiscall CManagedRes::deleting_destructor(CManagedRes *this,byte param_1);
void __thiscall neon::ctrl::CTextWindow::SetScrollBarPos(CTextWindow *this,CBasicPoint<float> *param_1);
void __thiscall neon::ctrl::CTextWindow::SetFont(CTextWindow *this,CFontInfo *param_1);
void __thiscall FUN_1000aa40(void *this,HDC param_1);
uint __thiscall FUN_1000aaa0(void *this,undefined4 param_1);
void __thiscall FUN_1000ab20(void *this,HDC param_1);
bool __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::Create(CTextWindow *this,int param_1,int param_2,CBasicRect<float> *param_3,bool param_4);
undefined4 * __thiscall FUN_1000afe0(void *this,HDC param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,int param_9);
int __fastcall FUN_1000b0b0(int *param_1);
int * __thiscall FUN_1000b0f0(void *this,int *param_1);
void FUN_1000b140(void);
void __thiscall FUN_1000b160(void *this,uint param_1);
undefined4 *FUN_1000b1f0(undefined4 param_1,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@1000b26c(void);
void __thiscall FUN_1000b290(void *this,uint param_1);
void __thiscall neon::ctrl::CTextWindow::CalcTextPos(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::DeleteAllText(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::Update(CTextWindow *this,bool param_1);
int __thiscall neon::ctrl::CTextWindow::CalcLastLinePos(CTextWindow *this);
int __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::ChangeValue(CTextWindow *this,COP_ThumbMove *param_1);
undefined4 * __thiscall FUN_1000b9a0(void *this,undefined4 *param_1,int *param_2,int param_3,undefined4 *param_4);
void __fastcall FUN_1000ba30(int param_1);
int __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>::vfunction3(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>*this,int param_1);
void __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>::vfunction4(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>*this);
void __thiscall neon::ctrl::CTextWindow::AutoNewLineByCR(CTextWindow *this,HDC__ *param_1,_Iterator<1> *param_2);
void __thiscall neon::ctrl::CTextWindow::AutoNewLineByWordWrap(CTextWindow *this,HDC__ *param_1,_Iterator<1> *param_2);
void __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::Clear(CTextWindow *this);
long __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::Restore(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::~CTextWindow(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::AutoNewLine(CTextWindow *this,HDC__ *param_1);
undefined4 * __fastcall FUN_1000c500(undefined4 *param_1);
void __fastcall FUN_1000c570(int param_1);
void __fastcall FUN_1000c5e0(int param_1);
CTextWindow * __thiscall neon::ctrl::CTextWindow::deleting_destructor_for_CControl(CTextWindow *this,byte param_1);
CTextWindow * __thiscall neon::ctrl::CTextWindow::CTextWindow(CTextWindow *this);
void __thiscall neon::ctrl::CTextWindow::AddText(CTextWindow *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::ctrl::CTextWindow::AddText(CTextWindow *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong param_2);
void __thiscall neon::ctrl::CTextWindow::AddText(CTextWindow *this,CFontInfo *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall neon::ctrl::CTextWindow::GetString(CTextWindow *this,int param_1);
void __thiscall neon::ctrl::CTextWindow::vfunction1_for_CManagedRes(CTextWindow *this,byte param_1);
void __thiscall neon::ctrl::CTextWindow::neon::ctrl::CTextWindow::OnMouseWheel(CTextWindow *this,int param_1,short param_2);
void __thiscall neon::ctrl::CTextWindow::SetText(CTextWindow *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>::~CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>(CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>*this);
undefined4 * __thiscall eco::CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>::deleting_destructor(CDelegate<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>*this,byte param_1);
undefined4 * __fastcall FUN_1000d4d0(int param_1);
CTextWindow * __thiscall neon::ctrl::CTextWindow::CTextWindow(CTextWindow *this,CTextWindow *param_1);
CText * __thiscall neon::visual::CText::CText(CText *this,CText *param_1);
void __thiscall neon::visual::CText::vfunction1_for_CManagedRes(CText *this,byte param_1);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>::vfunction2(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>*this);
undefined4 * __thiscall Loki::MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>::vfunction1(MemFunHandler<Loki::Functor<int,Loki::Typelist<neon::ctrl::COP_ThumbMove_const&,Loki::NullType>,Loki::ClassLevelLockable>,neon::ctrl::CTextWindow*,int_(__thiscall_neon::ctrl::CTextWindow::*)(neon::ctrl::COP_ThumbMove_const&)>*this,byte param_1);
void __thiscall FUN_1000d910(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3);
bool __thiscall neon::ctrl::CTextWindow::CreateScrollBar(CTextWindow *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CUIInputManager::Init(CUIInputManager *this);
void __cdecl neon::ctrl::CUIInputManager::Destroy(void);
undefined2 __thiscall FUN_1000dbf0(void *this,int param_1,int param_2);
bool __thiscall neon::ctrl::CUIInputManager::IsIn(CUIInputManager *this);
EType __thiscall neon::ctrl::CUIInputManager::GetTypeFromMsg(CUIInputManager *this,uint param_1);
void __thiscall neon::ctrl::CUIInputManager::FocusOut(CUIInputManager *this);
void __thiscall neon::ctrl::CUIInputManager::FocusIn(CUIInputManager *this,CControl *param_1);
CControl * __thiscall neon::ctrl::CUIInputManager::GetCapture(CUIInputManager *this);
void __thiscall neon::ctrl::CUIInputManager::CUIInputManager(CUIInputManager *this);
undefined4 * __fastcall FUN_1000dea0(undefined4 *param_1);
void __thiscall neon::ctrl::CUIInputManager::SetCapture(CUIInputManager *this,CControl *param_1);
CUIInputManager * __cdecl neon::ctrl::CUIInputManager::Instance(void);
undefined4 __thiscall FUN_1000df70(void *this,undefined4 param_1);
bool __thiscall neon::ctrl::CUIInputManager::PreProcessMessage(CUIInputManager *this,uint param_1,uint param_2,uint param_3,CControl *param_4);
bool __thiscall neon::ctrl::CUIInputManager::ProcessMessage(CUIInputManager *this,uint param_1,uint param_2,uint param_3,CControl *param_4);
void __cdecl FUN_1000e4b0(int param_1);
void __fastcall FUN_1000e4d0(int *param_1);
void __fastcall FUN_1000e560(int *param_1);
void FUN_1000e5d0(undefined4 param_1);
void __cdecl FUN_1000e5f0(undefined4 param_1);
int __thiscall neon::frw::CObject::GetZOrder(CObject *this);
HINSTANCE__ * __thiscall neon::frw::CApp::GetInsth(CApp *this);
void __thiscall neon::frw::CApp::SetTopMostOleObj(CApp *this,IOleObj *param_1);
void __thiscall neon::ctrl::CWebBrowser::neon::ctrl::CWebBrowser::MsgHandler(CWebBrowser *this,tagMSG *param_1);
void __thiscall neon::ctrl::CWebBrowser::DisplayHTML(CWebBrowser *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_1000e740(void *this,int param_1);
void __cdecl FUN_1000e790(int *param_1,size_t param_2,void *param_3,int param_4);
void __thiscall neon::ctrl::CWebBrowser::SetDestroyCallback(CWebBrowser *this,Functor<void,Loki::NullType,Loki::ClassLevelLockable> *param_1);
void FUN_1000e840(void);
void __cdecl FUN_1000e880(int param_1,int param_2,int param_3,int param_4,int *param_5);
void __thiscall neon::ctrl::CWebBrowser::neon::ctrl::CWebBrowser::OnDestroy(CWebBrowser *this);
int * __thiscall FUN_1000e8d0(void *this,LPCSTR param_1);
void __thiscall FUN_1000e930(void *this,undefined4 param_1,int param_2,int *param_3);
void __thiscall FUN_1000ebf0(void *this,undefined4 *param_1,uint *param_2);
void __thiscall neon::ctrl::CWebBrowser::Navigate(CWebBrowser *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_1000ece0(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
int __thiscall Loki::FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>::vfunction3(FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>*this,int param_1);
void __thiscall Loki::FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>::vfunction4(FunctorHandler<Loki::Functor<void,Loki::NullType,Loki::ClassLevelLockable>,void_(__cdecl*)(void)>*this);
bool __thiscall neon::ctrl::CWebBrowser::CheckZOrder(CWebBrowser *this);
void __thiscall neon::ctrl::CWebBrowser::RearrangeWindows(CWebBrowser *this);
void __thiscall FUN_1000ef40(void *this,int *param_1,uint *param_2);
int __thiscall FUN_1000f030(void *this,uint *param_1);
void __thiscall FUN_1000f0a0(void *this,int *param_1,uint *param_2);
LRESULT FUN_1000f130(HWND param_1,uint param_2,uint param_3,LPARAM param_4);
void __thiscall neon::ctrl::CWebBrowser::RemoveOneself(CWebBrowser *this);
void __thiscall FUN_1000f2e0(void *this,undefined4 param_1,int param_2,void *param_3,undefined4 param_4,int param_5,undefined4 param_6,int param_7,uint param_8);
void __thiscall FUN_1000f350(void *this,int *param_1,undefined *param_2);
void __thiscall neon::ctrl::CWebBrowser::~CWebBrowser(CWebBrowser *this);
CWebBrowser * __thiscall neon::ctrl::CWebBrowser::CWebBrowser(CWebBrowser *this,CWebBrowser *param_1);
CWebBrowser * __thiscall neon::ctrl::CWebBrowser::operator=(CWebBrowser *this,CWebBrowser *param_1);
CWebBrowser * __thiscall neon::ctrl::CWebBrowser::deleting_destructor_for_CVisual(CWebBrowser *this,byte param_1);
void __thiscall FUN_1000f740(void *this,undefined *param_1);
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
void __thiscall neon::ctrl::CCheckBox::neon::ctrl::CCheckBox::SetPivot(CCheckBox *this,float param_1,float param_2);
bool __thiscall neon::ctrl::CRadioButton::neon::ctrl::CRadioButton::Create(CRadioButton *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CRadioButton::SetText(CRadioButton *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall neon::ctrl::CRadioButton::SetActFont(CRadioButton *this,CFontInfo *param_1);
void __thiscall neon::ctrl::CRadioButton::SetInActFont(CRadioButton *this,CFontInfo *param_1);
void __thiscall neon::ctrl::CRadioButton::OffAllOtherBtn(CRadioButton *this);
void __thiscall neon::ctrl::CRadioButton::neon::ctrl::CRadioButton::SetCheck(CRadioButton *this,bool param_1);
void __thiscall FUN_10011e30(void *this,undefined4 *param_1);
void __thiscall neon::ctrl::CRadioButton::neon::ctrl::CRadioButton::OnMouseLbUp(CRadioButton *this,int param_1,int param_2);
undefined4 __fastcall FUN_10011f60(undefined4 *param_1);
void __fastcall FUN_10011fc0(int *param_1);
undefined4 ** __thiscall FUN_10012000(void *this,undefined4 *param_1);
CRadioButton * __thiscall neon::ctrl::CRadioButton::CRadioButton(CRadioButton *this,CRadioButton *param_1);
CRadioButton * __thiscall neon::ctrl::CRadioButton::CRadioButton(CRadioButton *this);
CRadioButton * __thiscall neon::ctrl::CRadioButton::operator=(CRadioButton *this,CRadioButton *param_1);
void __thiscall neon::ctrl::CRadioButton::Attach(CRadioButton *this,CRadioButton *param_1);
void __thiscall neon::ctrl::CRadioButton::Detach(CRadioButton *this);
void __thiscall neon::ctrl::CRadioButton::~CRadioButton(CRadioButton *this);
CRadioButton * __thiscall neon::ctrl::CRadioButton::deleting_destructor(CRadioButton *this,byte param_1);
undefined4 * __cdecl FUN_100128e0(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 * __cdecl FUN_10012900(undefined4 *param_1,undefined2 param_2,uint param_3);
int __cdecl FUN_10012940(int param_1,uint param_2,uint param_3,char *param_4,int *param_5);
int __cdecl FUN_10012b40(byte *param_1,ushort *param_2,int param_3,uint param_4,int *param_5);
int __cdecl FUN_10012d50(byte *param_1,ushort *param_2,int param_3,undefined4 param_4,int *param_5);
int __cdecl FUN_10012ee0(byte *param_1,undefined4 *param_2,int param_3,uint param_4,int *param_5);
int __cdecl FUN_10013070(byte *param_1,ushort *param_2,int param_3,undefined4 param_4,int *param_5);
int __cdecl FUN_10013220(byte *param_1,ushort *param_2,int param_3,undefined4 param_4,int *param_5);
int __cdecl FUN_10013340(byte *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int *param_5);
void __thiscall FUN_10013490(void *this,uint param_1);
int __cdecl FUN_100134e0(int param_1,int param_2,uint param_3,byte *param_4,int *param_5);
int __cdecl FUN_10013790(int param_1,int param_2,uint param_3,byte *param_4,int *param_5);
int __cdecl FUN_10013a40(byte *param_1,ushort *param_2,uint param_3,undefined4 param_4,int param_5,undefined4 param_6,uint param_7,int *param_8);
void __thiscall neon::visual::CLine::Create(CLine *this,ulong param_1);
bool __thiscall neon::visual::CVisual::GetInverse(CVisual *this);
float __thiscall neon::visual::CVisual::GetPivotX(CVisual *this);
float __thiscall neon::visual::CVisual::GetPivotY(CVisual *this);
void __thiscall neon::visual::CLine::neon::visual::CLine::SetEffect(CLine *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::visual::CLine::neon::visual::CLine::SetEffectType(CLine *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
void __thiscall neon::visual::CLine::neon::visual::CLine::SetShowRef(CLine *this,bool param_1);
int __cdecl FUN_10013db0(undefined4 *param_1,undefined4 *param_2,int param_3);
int __cdecl FUN_10013e00(int param_1,int param_2,int param_3);
void __thiscall neon::visual::CLine::AddLine(CLine *this,SLine *param_1);
void __thiscall neon::visual::CLine::neon::visual::CLine::Output(CLine *this);
void __thiscall FUN_100140a0(void *this,int *param_1,int param_2);
void __cdecl FUN_100140f0(undefined4 *param_1,undefined4 *param_2,int param_3);
void * __cdecl FUN_10014120(void *param_1,int param_2,void *param_3);
void __cdecl FUN_10014160(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __thiscall neon::visual::CLine::SplitLine(CLine *this,int param_1,int param_2,int param_3,int param_4,ulong param_5);
void __cdecl FUN_10014420(int param_1,int param_2,int param_3);
void __cdecl FUN_10014450(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __thiscall neon::visual::CLine::AddLine(CLine *this,int param_1,int param_2,int param_3,int param_4);
void __thiscall neon::visual::CLine::AddLine(CLine *this,int param_1,int param_2,int param_3,int param_4,ulong param_5);
int * __thiscall FUN_100144d0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,void *param_5);
void __cdecl FUN_10014560(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_100145a0(void *this,int param_1);
void FUN_10014680(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_100146b0(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_100146f0(void *this,int param_1);
void Catch_All@100147d6(void);
void __fastcall FUN_100147f0(undefined4 *param_1);
int * __thiscall FUN_10014830(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void __thiscall FUN_100148c0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@10014a32(void);
CLine * __thiscall neon::visual::CLine::CLine(CLine *this);
void __fastcall FUN_10014bc0(undefined4 *param_1);
void __thiscall FUN_10014c10(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall neon::visual::CLine::Clear(CLine *this);
undefined4 * __thiscall FUN_10014db0(void *this,undefined4 *param_1);
void __thiscall FUN_10014ec0(void *this,undefined4 *param_1);
CLine * __thiscall neon::visual::CLine::CLine(CLine *this,CLine *param_1);
CLine * __thiscall neon::visual::CLine::operator=(CLine *this,CLine *param_1);
void __thiscall neon::visual::CLine::~CLine(CLine *this);
void __thiscall neon::visual::CLine::neon::visual::CLine::SetDraw(CLine *this,SLine *param_1,CBasicRect<long> *param_2);
CLine * __thiscall neon::visual::CLine::deleting_destructor(CLine *this,byte param_1);
SurfaceDesc * __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetSurfaceDesc(CRLESurface *this);
bool __thiscall neon::render::CRLESurface::neon::render::CRLESurface::Fill(void);
void * __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetSurfacePointer(CRLESurface *this);
long __thiscall neon::render::CRLESurface::LoadBitmapA(CRLESurface *this);
ushort __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetWidth(CRLESurface *this);
ushort __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetHeight(CRLESurface *this);
ulong __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetBPP(CRLESurface *this);
ushort __thiscall neon::render::CRLESurface::neon::render::CRLESurface::Type(CRLESurface *this);
IDirect3DDevice9 * __thiscall IDxDevice::IDxDevice::GetD3DDevice(IDxDevice *this);
void __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::Release(CDDDisplay *this);
long __thiscall neon::render::CRLESurface::neon::render::CRLESurface::SetColorKey(CRLESurface *this,ulong param_1,ulong param_2,bool param_3);
undefined4 __cdecl FUN_10015270(undefined4 param_1);
void __thiscall neon::visual::CSprite::CAnimate::SprAni_SetName(CAnimate *this,char *param_1,uint param_2);
int __thiscall neon::visual::CSprite::CAnimate::SprAni_CompareName(CAnimate *this,char *param_1);
void __thiscall IDxDevice::IDxDevice::ApplyLinearFilter(IDxDevice *this,bool param_1);
bool __thiscall neon::visual::CSprite::SetAniEndFuncCallWhenStop(CSprite *this,bool param_1);
void __thiscall neon::visual::CSprite::ResumeAnimate(CSprite *this);
void __thiscall neon::visual::CSprite::ProcessEffect(CSprite *this);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetEffect(CSprite *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetEffectType(CSprite *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
uchar __thiscall neon::visual::CSprite::neon::visual::CSprite::GetAlpha(CSprite *this);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetShowRef(CSprite *this,bool param_1);
int __thiscall FUN_100155e0(void *this,uint param_1);
void __fastcall FUN_10015620(undefined4 *param_1);
int * __thiscall FUN_10015630(void *this,int param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl FUN_10015750(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10015790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100157d0(int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_10015820(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
void __thiscall FUN_10015850(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,undefined2 param_3,undefined2 param_4,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_5,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_6,undefined4 param_7,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11);
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
int __thiscall FUN_10015d20(void *this,uint param_1);
void __thiscall neon::util::CMemFunction<neon::visual::CSprite,void,int>::vfunction1(CMemFunction<neon::visual::CSprite,void,int> *this);
undefined4 * __thiscall neon::util::CMemFunction<neon::visual::CSprite,void,int>::vfunction2(CMemFunction<neon::visual::CSprite,void,int> *this);
undefined4 * __cdecl FUN_10015da0(int param_1,int param_2,undefined4 *param_3);
void __thiscall neon::visual::CSprite::CFrameEffect::CFrameEffect(CFrameEffect *this);
void __thiscall neon::visual::CSprite::CFrameEffect::CFrameEffect(CFrameEffect *this,CFrame *param_1);
CFrame * __thiscall neon::visual::CSprite::CFrame::operator=(CFrame *this,CFrame *param_1);
undefined4 * __thiscall neon::visual::CSprite::CFrame::deleting_destructor(CFrame *this,byte param_1);
void __thiscall neon::visual::CSprite::ProcessTransform(CSprite *this);
void __thiscall neon::visual::CSprite::GetIndexedImageRect(CSprite *this,uint param_1);
undefined4 __thiscall FUN_100166a0(void *this,char *param_1);
void __thiscall FUN_100166f0(void *this,int *param_1,int param_2);
void __thiscall FUN_10016740(void *this,int *param_1,int param_2);
undefined4 * __cdecl FUN_10016790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 __thiscall FUN_100167f0(void *this,char *param_1);
int __cdecl FUN_10016840(CFrame *param_1,CFrame *param_2,int param_3);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::Output(CSprite *this);
int __thiscall neon::visual::CSprite::GetAnimationBound(CSprite *this,CBasicRect<float> *param_1,int param_2);
int __thiscall neon::visual::CSprite::GetAnimationBoundAll(CSprite *this,CBasicRect<float> *param_1);
void __cdecl FUN_100170a0(CFrame *param_1,CFrame *param_2,CFrame *param_3);
void __cdecl FUN_100170d0(int param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_10017100(CFrame *param_1,int param_2,CFrame *param_3);
int __cdecl FUN_10017130(CFrame *param_1,CFrame *param_2,int param_3);
void __cdecl FUN_10017190(CFrame *param_1,CFrame *param_2,int param_3);
CFrame * __cdecl FUN_100171c0(CFrame *param_1,CFrame *param_2,CFrame *param_3);
void __cdecl FUN_10017200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10017240(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_10017270(int param_1);
int * __thiscall FUN_100172c0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,CFrame *param_5);
void __thiscall neon::visual::CSprite::AddPivot(CSprite *this,float param_1,float param_2);
CFrame * FUN_10017540(CFrame *param_1,int param_2,CFrame *param_3);
void __cdecl FUN_10017580(CFrame *param_1,CFrame *param_2,int param_3);
void __cdecl FUN_100175b0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __fastcall FUN_100175f0(undefined4 *param_1);
void __fastcall FUN_10017650(undefined4 *param_1);
void FUN_100176a0(CFrame *param_1,CFrame *param_2,CFrame *param_3);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetPivot(CSprite *this,float param_1,float param_2);
undefined4 __thiscall FUN_10017770(void *this,undefined4 param_1);
CAnimate * __thiscall neon::visual::CSprite::CAnimate::CAnimate(CAnimate *this);
void __thiscall neon::visual::CSprite::CAnimate::~CAnimate(CAnimate *this);
undefined4 * __thiscall FUN_10017810(void *this,int param_1);
void Catch_All@100178e0(void);
undefined4 * __thiscall FUN_10017900(void *this,undefined4 *param_1);
undefined4 * FUN_10017a70(undefined4 *param_1,int param_2,undefined4 *param_3);
CAnimate * __thiscall neon::visual::CSprite::CAnimate::CAnimate(CAnimate *this,CAnimate *param_1);
CAnimate * __thiscall neon::visual::CSprite::CAnimate::operator=(CAnimate *this,CAnimate *param_1);
void __thiscall neon::visual::CSprite::ProcessAnimate(CSprite *this);
int * __thiscall FUN_10017e40(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void __thiscall FUN_10017ec0(void *this,undefined4 param_1,CFrame *param_2,uint param_3,CFrame *param_4);
void Catch_All@10018099(void);
void Catch_All@1001818c(void);
void FUN_10018230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10018260(undefined1 *param_1,undefined1 *param_2,int param_3);
undefined1 * __cdecl FUN_100182b0(int param_1,int param_2,undefined1 *param_3);
undefined1 * __cdecl FUN_10018300(int param_1,int param_2,undefined1 *param_3);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::Logic(CSprite *this);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::SetAnimate(CSprite *this,int param_1,int param_2,bool param_3,bool param_4);
void __thiscall FUN_100183f0(int *param_1,uint param_2,CFrame param_3);
void __thiscall FUN_100184e0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@10018692(void);
undefined4 * __cdecl FUN_100187d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void Catch_All@1001884a(void);
undefined1 * __cdecl FUN_10018880(int param_1,int param_2,undefined1 *param_3);
void __thiscall neon::visual::CSprite::CFrame::CFrame(CFrame *this,uint param_1);
void __thiscall FUN_10018940(void *this,uint param_1,undefined4 param_2);
void __thiscall FUN_10018a10(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined1 * __cdecl FUN_10018ae0(int param_1,int param_2,undefined1 *param_3);
void __cdecl FUN_10018b40(int param_1,int param_2);
void __cdecl FUN_10018c00(undefined4 *param_1,int param_2,undefined4 *param_3);
void Catch_All@10018c75(void);
void __thiscall FUN_10018cb0(void *this,undefined4 *param_1);
void FUN_10018d50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10018d80(int param_1,int param_2,undefined1 *param_3);
void FUN_10018db0(int param_1,int param_2);
undefined4 * FUN_10018dd0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __fastcall FUN_10018e10(undefined4 *param_1);
int * __thiscall FUN_10018e90(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined1 *param_5);
void __thiscall FUN_10018f20(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,CAnimate *param_4);
void Catch_All@100190f2(void);
void Catch_All@100191ee(void);
CMemFunction<neon::visual::CSprite,void,int> * __thiscall neon::util::CMemFunction<neon::visual::CSprite,void,int>::CMemFunction<neon::visual::CSprite,void,int>(CMemFunction<neon::visual::CSprite,void,int> *this);
CObject * __thiscall neon::visual::CSprite::neon::visual::CSprite::Clone(CSprite *this);
void __fastcall FUN_100194d0(undefined4 *param_1);
void __thiscall FUN_10019520(int *param_1,uint param_2,CAnimate param_3);
void __thiscall neon::visual::CSprite::~CSprite(CSprite *this);
undefined4 * __thiscall FUN_10019840(void *this,undefined4 *param_1);
CSprite * __thiscall neon::visual::CSprite::deleting_destructor(CSprite *this,byte param_1);
long __thiscall neon::visual::CSprite::CreateFromTile(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,ulong param_4,bool param_5,ulong param_6);
long __thiscall neon::visual::CSprite::LoadHGS(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,ulong param_3,bool param_4);
long __thiscall neon::visual::CSprite::CreateFromHGS(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,ulong param_3);
long __thiscall neon::visual::CSprite::Create(CSprite *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,ulong param_3,int param_4,int param_5,bool param_6);
void __thiscall neon::visual::CSprite::neon::visual::CSprite::Copy(CSprite *this,CObject *param_1);
void __thiscall neon::visual::CSprite::CFrameEffect::CFrameEffect(CFrameEffect *this);
void __thiscall neon::visual::CSprite::TileSet::TileSet(TileSet *this);
TileSet * __thiscall neon::visual::CSprite::TileSet::TileSet(TileSet *this,IDxSurface *param_1);
void __fastcall FUN_1001a930(int param_1);
undefined4 * __thiscall FUN_1001a940(void *this,undefined4 *param_1);
void __fastcall FUN_1001a970(int param_1);
undefined4 * __thiscall FUN_1001a980(void *this,undefined4 *param_1);
void __thiscall h2p::CFile::IncreaseRefCount(CFile *this);
void __thiscall h2p::CFile::DecreaseRefCount(CFile *this);
IDirectDraw4 * __thiscall neon::render::CDDDisplay::GetDD(CDDDisplay *this);
bool __cdecl h2p::CManager::IsConstructed(void);
map<void*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<void*>,std::allocator<std::pair<void*_const,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>* __thiscall h2p::CManager::GetSpriteMap(CManager *this);
CManager * __thiscall h2p::CManager::deleting_destructor(CManager *this,byte param_1);
void __fastcall FUN_1001aa80(int param_1);
CFile * __thiscall FUN_1001aa90(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_1001ab70(void *this,int *param_1);
void __thiscall std::length_error::length_error(length_error *this);
void FUN_1001ac30(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
uint __cdecl FUN_1001ae40(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __cdecl FUN_1001ae90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_1001aed0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1001af30(undefined4 *param_1,undefined4 *param_2);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_1001afa0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __fastcall FUN_1001b000(int param_1);
undefined4 * __cdecl FUN_1001b010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_1001b060(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
SubImage * __thiscall h2p::CFile::operator[](CFile *this,ulong param_1);
uint __thiscall h2p::CFile::GetSubImageCount(CFile *this);
undefined4 * __cdecl FUN_1001b120(undefined4 *param_1,undefined4 param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_3);
void __cdecl FUN_1001b1a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_1001b1e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
int __cdecl FUN_1001b260(undefined4 *param_1,undefined4 *param_2,int param_3);
undefined4 * __cdecl FUN_1001b2c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int __cdecl FUN_1001b320(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_1001b380(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1001b3c0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
int __cdecl FUN_1001b420(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_1001b470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
SurfaceDesc * __thiscall h2p::CFile::GetSurfDesc(CFile *this,ulong param_1);
undefined4 __thiscall FUN_1001b4e0(void *this,char *param_1);
undefined4 __thiscall FUN_1001b530(void *this,char *param_1);
undefined4 __thiscall FUN_1001b590(void *this,char *param_1);
undefined4 __thiscall FUN_1001b5e0(void *this,char *param_1);
uint __thiscall FUN_1001b630(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 *FUN_1001b680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void Catch_All@1001b712(void);
void __thiscall FUN_1001b730(void *this,int *param_1,int param_2);
undefined4 * __cdecl FUN_1001b780(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_1001b7d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1001b830(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1001b860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_1001b890(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void __cdecl FUN_1001b8f0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_1001b920(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_1001b950(void *this,uint param_1);
void * __cdecl FUN_1001b9e0(undefined4 *param_1,undefined4 *param_2,void *param_3);
void Catch_All@1001ba49(void);
void __cdecl FUN_1001ba80(undefined4 *param_1,undefined4 *param_2,int param_3);
undefined4 * __cdecl FUN_1001bab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void Catch_All@1001bb09(void);
void FUN_1001bb40(void *param_1);
void __cdecl FUN_1001bb80(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void __cdecl FUN_1001bbb0(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_1001bbe0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1001bc10(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_1001bc40(undefined4 *param_1,int param_2,undefined4 *param_3);
void Catch_All@1001bc97(void);
void __cdecl FUN_1001bcd0(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 *FUN_1001bd10(undefined4 param_1,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@1001bd8c(void);
undefined4 * __cdecl FUN_1001bdb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void Catch_All@1001be4b(void);
void FUN_1001be90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int FUN_1001bec0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_1001bf00(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * FUN_1001c0f0(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_1001c130(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@1001c1cd(void);
undefined4 * FUN_1001c1f0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_1001c230(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,int *param_5);
void __thiscall FUN_1001c250(void *this,undefined4 *param_1,int *param_2,int *param_3);
int * __thiscall FUN_1001c2e0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void __thiscall FUN_1001c370(void *this,int *param_1,uint *param_2);
void __thiscall FUN_1001c460(void *this,undefined4 param_1,int param_2,int *param_3);
void __thiscall FUN_1001c730(void *this,int *param_1,uint *param_2);
undefined4 * FUN_1001c7c0(undefined4 *param_1,int param_2,undefined4 *param_3);
void FUN_1001c800(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_1001c830(IDxDevice *param_1,IDxDevice *param_2);
void __thiscall FUN_1001c860(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall FUN_1001c940(void *this,int param_1);
void __fastcall FUN_1001c9c0(int *param_1);
void FUN_1001ca00(int param_1,int param_2);
int * __thiscall FUN_1001ca30(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5);
int * __thiscall FUN_1001caf0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
undefined4 * __thiscall FUN_1001cb90(void *this,int param_1);
void Catch_All@1001cc8b(void);
int * __thiscall FUN_1001cca0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void FUN_1001cd40(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void FUN_1001cd70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __thiscall FUN_1001cda0(void *this,undefined4 param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6);
void Catch_All@1001ce7b(void);
void __fastcall FUN_1001cef0(undefined4 *param_1);
ulong __thiscall h2p::CFile::GetSubImageIndex(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
uint __cdecl FUN_1001cf90(uint param_1);
void __fastcall FUN_1001d040(int *param_1);
void __fastcall FUN_1001d0c0(int param_1);
void __fastcall FUN_1001d110(undefined4 *param_1);
void __fastcall FUN_1001d160(undefined4 *param_1);
void FUN_1001d1b0(int param_1,int param_2);
void __fastcall FUN_1001d1e0(int *param_1);
undefined4 * __thiscall FUN_1001d220(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@1001d3b8(void);
int * __thiscall FUN_1001d4d0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
undefined4 * __thiscall FUN_1001d570(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@1001d70b(void);
size_t * __thiscall FUN_1001d820(void *this,size_t *param_1);
void __thiscall FUN_1001d8b0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@1001da07(void);
void FUN_1001db00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_1001db30(void *this,undefined4 *param_1);
void __fastcall FUN_1001dc90(int param_1);
void __fastcall FUN_1001dce0(undefined4 *param_1);
void __fastcall FUN_1001dcf0(undefined4 *param_1);
undefined4 * __thiscall FUN_1001dd50(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1001dee0(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1001dff0(void *this,int param_1);
void Catch_All@1001e088(void);
void __thiscall FUN_1001e0a0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __fastcall FUN_1001e180(undefined4 *param_1);
void __thiscall FUN_1001e1d0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_1001e2a0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@1001e496(void);
void Catch_All@1001e5a2(void);
void __thiscall FUN_1001e670(void *this,uint param_1,undefined4 param_2);
size_t * __cdecl FUN_1001e720(size_t *param_1,size_t *param_2,size_t *param_3);
void __thiscall FUN_1001e7a0(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_1001e850(void *this,undefined4 *param_1);
void __thiscall FUN_1001e9a0(void *this,undefined4 *param_1);
void __thiscall FUN_1001ea40(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_1001eaf0(void *this,int param_1);
void Catch_All@1001ecbc(void);
void __cdecl FUN_1001ed20(size_t *param_1,size_t *param_2,size_t *param_3);
size_t * __cdecl FUN_1001ed90(size_t *param_1,size_t *param_2,size_t *param_3);
CManager * __thiscall h2p::CManager::CManager(CManager *this,CManager *param_1);
CManager * __thiscall h2p::CManager::operator=(CManager *this,CManager *param_1);
void __thiscall FUN_1001eed0(void *this,undefined4 *param_1);
void FUN_1001ef70(int param_1);
void * __cdecl FUN_1001efc0(size_t *param_1,size_t *param_2,void *param_3);
void Catch_All@1001f029(void);
void __cdecl FUN_1001f070(size_t *param_1,size_t *param_2,size_t *param_3);
void __cdecl FUN_1001f0a0(void *param_1,int param_2,size_t *param_3);
void Catch_All@1001f109(void);
void __cdecl FUN_1001f140(int param_1,int param_2);
CFile * __thiscall h2p::CFile::operator=(CFile *this,CFile *param_1);
void __thiscall FUN_1001f210(void *this,undefined4 param_1,int param_2,undefined4 param_3,int param_4);
void * FUN_1001f3e0(void *param_1,int param_2,size_t *param_3);
void FUN_1001f420(int param_1,int param_2);
void FUN_1001f440(size_t *param_1,size_t *param_2,void *param_3);
void __fastcall FUN_1001f470(undefined4 *param_1);
void __thiscall FUN_1001f4c0(void *this,undefined4 param_1,size_t *param_2,uint param_3,size_t *param_4);
void Catch_All@1001f68e(void);
void Catch_All@1001f778(void);
int __fastcall FUN_1001f810(int param_1);
void __fastcall FUN_1001f8a0(int param_1);
void __thiscall FUN_1001f910(void *this,int *param_1,int param_2,size_t *param_3,size_t *param_4);
void __thiscall FUN_1001f9e0(void *this,size_t *param_1);
void __thiscall FUN_1001fa80(void *this,int *param_1);
void __thiscall FUN_10020030(void *this,int *param_1);
undefined4 __thiscall FUN_10020360(void *this,int param_1);
void __thiscall FUN_10020860(void *this,int *param_1);
undefined4 __thiscall FUN_100208d0(void *this,int param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,undefined4 param_4);
void __thiscall neon::visual::CText::~CText(CText *this);
void __thiscall neon::visual::CText::SetBackColor(CText *this,ulong param_1);
void __thiscall neon::visual::CText::SetFontInfo(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ushort param_2,bool param_3,ulong param_4);
int __thiscall neon::visual::CText::CalcStringWidth(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::visual::CText::neon::visual::CText::SetEffect(CText *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4);
void __thiscall neon::visual::CText::neon::visual::CText::SetEffectType(CText *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5);
void __thiscall neon::visual::CText::neon::visual::CText::SetPosX(CText *this,float param_1);
void __thiscall neon::visual::CText::neon::visual::CText::SetPosY(CText *this,float param_1);
void __thiscall neon::visual::CText::Create(CText *this,int param_1,int param_2,ulong param_3,ESurfaceMemType param_4,bool param_5);
void __thiscall neon::visual::CText::Create(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ESurfaceMemType param_2,bool param_3);
void __thiscall neon::visual::CText::SetTextStatic(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::visual::CText::SetText(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall neon::visual::CText::SetText(CText *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,uint param_2);
void __thiscall neon::visual::CText::Printf(CText *this,char *param_1,...);
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
void __thiscall FUN_10022100(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,undefined2 param_2,undefined2 param_3,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_4,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_5,undefined4 param_6,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_7,undefined4 param_8);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::SetCrossfadeTime(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1);
void __thiscall neon::visual::CTile::neon::visual::CTile::Output(CTile *this);
void __thiscall neon::visual::CTile::neon::visual::CTile::OnAttached(CTile *this);
void __thiscall neon::visual::CTile::SetTile(CTile *this,int param_1);
long __thiscall neon::visual::CTile::DestroySurface(CTile *this);
long __thiscall neon::visual::CTile::neon::visual::CTile::Release(CTile *this);
long __thiscall neon::visual::CTile::CreateByCustomAllocation(CTile *this,int param_1,int param_2,int param_3,int param_4,ulong param_5,bool param_6,ulong param_7,bool param_8,ESurfaceMemType param_9,ESurfaceUsage param_10);
long __thiscall neon::visual::CTile::BuildSurface(CTile *this,int param_1,int param_2,ulong param_3,bool param_4,ulong param_5,bool param_6,ESurfaceMemType param_7,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_8);
long __thiscall neon::visual::CTile::BuildSurface(CTile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2,ulong param_3,bool param_4,ESurfaceMemType param_5,int param_6);
CTile * __thiscall neon::visual::CTile::CTile(CTile *this);
CObject * __thiscall neon::visual::CTile::neon::visual::CTile::Clone(CTile *this);
void __thiscall FUN_10022a00(void *this,uint param_1,undefined4 param_2);
void __thiscall neon::visual::CTile::~CTile(CTile *this);
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
void __fastcall FUN_10023a70(int *param_1,undefined4 param_2);
void __thiscall FUN_10023b60(void *this,float *param_1);
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
int __thiscall DXAvatar::CAvtr2004dx::IsReady(CAvtr2004dx *this);
IDxSurface * __thiscall DXAvatar::CAvtr2004dx::GetSurface(CAvtr2004dx *this);
CAvtr2004dx * __thiscall DXAvatar::CAvtr2004dx::deleting_destructor(CAvtr2004dx *this,byte param_1);
void __thiscall CAvatar::~CAvatar(CAvatar *this);
void __thiscall CAvatar::CAvatar::SetShowRef(CAvatar *this,bool param_1);
void __thiscall CAvatar::Destroy(CAvatar *this);
uint __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::capacity(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
uint __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::size(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
bool __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::empty(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
undefined4 __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::get_allocator(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::operator[](vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
void __thiscall std::invalid_argument::invalid_argument(invalid_argument *this);
int * __thiscall FUN_10024b40(void *this,int param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __thiscall DXAvatar::CAvtrId::AddPrefix(CAvtrId *this,char *param_1);
CAvatar * __thiscall CAvatar::deleting_destructor(CAvatar *this,byte param_1);
CAvatar * __thiscall CAvatar::CAvatar(CAvatar *this);
long __thiscall CAvatar::Create(CAvatar *this,char *param_1,int param_2,int param_3,int param_4,ulong param_5,ulong param_6);
void __thiscall CAvatar::CAvatar::Logic(CAvatar *this);
undefined4 Catch_All@10024f6c(void);
void __thiscall CAvatar::CAvatar::Output(CAvatar *this);
uint __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::max_size(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void FUN_100250a0(exception *param_1);
int __cdecl FUN_100250c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,int param_3);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Reverse(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
bool __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Buy(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
void __cdecl FUN_100251b0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,int param_3);
void __cdecl FUN_100251e0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
undefined4 * __cdecl FUN_10025210(undefined4 *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,undefined4 param_4,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_5);
int __cdecl FUN_10025290(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,int param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_100252f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void Catch_All@1002535a(void);
void __cdecl FUN_10025390(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void Catch_All@10025416(void);
_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::at(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __cdecl FUN_10025570(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,int param_3);
void __cdecl FUN_100255a0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@1002560a(void);
void __thiscall std::_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::`default_constructor_closure'(_Vector_val<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>*param_1);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::begin(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::end(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Make_iter(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,_Container_base_aux *param_2,undefined4 param_3,_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>param_4);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::rbegin(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::rend(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::at(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::front(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void FUN_100258d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void FUN_10025900(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void __thiscall DXAvatar::CAvtrId::Copy(CAvtrId *this,CAvtrId *param_1);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Destroy(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Tidy(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Ufill(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,uint param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
CAvtrTickHandler * __thiscall DXAvatar::CAvtrTickHandler::CAvtrTickHandler(CAvtrTickHandler *this,CDxAvtrTickHandler *param_1);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>*param_1);
void Catch_All@10025bb2(void);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Construct_n(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void Catch_All@10025c58(void);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::reserve(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,uint param_1);
void Catch_All@10025dfc(void);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::pop_back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::erase(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,_Container_base_aux *param_2,undefined4 param_3,_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>param_4);
_Container_base_aux * __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::erase(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,_Container_base_aux *param_2,undefined4 param_3,_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>param_4,undefined4 param_5,_Container_base_aux param_6);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::clear(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::_Insert_n(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,length_error *param_4,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5);
void Catch_All@100261f9(void);
void Catch_All@10026304(void);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this,CAvtrId *param_1);
void __thiscall DXAvatar::CAvtrId::~CAvtrId(CAvtrId *this);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this,CAvtr2004dx *param_1);
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
CAvatar * __thiscall CAvatar::CAvatar(CAvatar *this,CAvatar *param_1);
ulong __thiscall DXAvatar::CDxAvtr2004::GetWidth(CDxAvtr2004 *this);
int __thiscall DXAvatar::CDxAvtr2004::IsReady(CDxAvtr2004 *this);
CDxAvtr2004 * __thiscall DXAvatar::CDxAvtr2004::deleting_destructor(CDxAvtr2004 *this,byte param_1);
bool __thiscall DXAvatar::CAvtr2004dx::IsDrawingRect(CAvtr2004dx *this);
void __thiscall CDxAvatar::~CDxAvatar(CDxAvatar *this);
void __thiscall CDxAvatar::CDxAvatar::SetShowRef(CDxAvatar *this,bool param_1);
void __thiscall CDxAvatar::Destroy(CDxAvatar *this);
CDxAvatar * __thiscall CDxAvatar::deleting_destructor(CDxAvatar *this,byte param_1);
CDxAvatar * __thiscall CDxAvatar::CDxAvatar(CDxAvatar *this);
long __thiscall CDxAvatar::Create(CDxAvatar *this,char *param_1,int param_2,int param_3,int param_4,ulong param_5,ulong param_6);
void __thiscall CDxAvatar::CDxAvatar::Logic(CDxAvatar *this);
undefined4 Catch_All@100272a4(void);
void __thiscall CDxAvatar::CDxAvatar::Output(CDxAvatar *this);
void __thiscall DXAvatar::CAvtrTickHandler::~CAvtrTickHandler(CAvtrTickHandler *this);
CAvtrTickHandler * __thiscall DXAvatar::CAvtrTickHandler::CAvtrTickHandler(CAvtrTickHandler *this);
CAvtrTickHandler * __thiscall DXAvatar::CAvtrTickHandler::operator=(CAvtrTickHandler *this,CAvtrTickHandler *param_1);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this,CDxAvtr2004 *param_1);
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
void __thiscall neon::phy::CEffector::SetNormalAfterEff(CEffector *this,bool param_1);
void __thiscall neon::phy::CEffector::SetRemoveSelfAfterEff(CEffector *this,bool param_1);
void __thiscall neon::phy::CMove::StopMove(CMove *this);
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
void __thiscall neon::phy::CMove::SetTimeRate(CMove *this,ulong param_1);
CBasicPoint<float> * __thiscall neon::phy::CMove::GetPos(CMove *this);
CBasicPoint<float> * __thiscall neon::phy::CMove::GetSrcPos(CMove *this);
CBasicPoint<float> * __thiscall neon::phy::CMove::GetDstPos(CMove *this);
bool __thiscall neon::phy::CMove::IsChangeParentPos(CMove *this);
void __thiscall neon::phy::CEffector::SetRemoveAfterEff(CEffector *this,bool param_1);
void __thiscall neon::phy::CMove::neon::phy::CMove::ProcessMove(CMove *this,ulong param_1);
void __thiscall neon::phy::CMove::SetMoveParent(CMove *this,CVisual *param_1);
void __thiscall neon::phy::CMoveAcceleration::neon::phy::CMoveAcceleration::ProcessMove(CMoveAcceleration *this,ulong param_1);
void __thiscall neon::phy::CMoveReduction::neon::phy::CMoveReduction::ProcessMove(CMoveReduction *this,ulong param_1);
void __thiscall neon::visual::CVisual::SetMovePosX(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetMovePosY(CVisual *this,float param_1);
void __thiscall neon::visual::CVisual::SetMovePos(CVisual *this,float param_1,float param_2);
CMove * __thiscall neon::phy::CMove::CMove(CMove *this);
void __thiscall neon::phy::CMove::Logic(CMove *this,ulong param_1);
void __thiscall neon::phy::CMove::neon::phy::CMove::SetParentPos(CMove *this);
void __thiscall neon::phy::CMove::SetSrcPos(CMove *this,undefined4 param_2,undefined4 param_3);
void __thiscall neon::phy::CMove::SetDstPos(CMove *this,undefined4 param_2,undefined4 param_3);
void __thiscall neon::phy::CMove::StartMove(CMove *this);
CObject * __thiscall neon::phy::CMove::deleting_destructor(CMove *this,byte param_1);
CMoveAcceleration * __thiscall neon::phy::CMoveAcceleration::CMoveAcceleration(CMoveAcceleration *this);
CMoveReduction * __thiscall neon::phy::CMoveReduction::CMoveReduction(CMoveReduction *this);
void __thiscall neon::phy::CMove::~CMove(CMove *this);
CObject * __thiscall neon::phy::CMoveReduction::deleting_destructor(CMoveReduction *this,byte param_1);
void __thiscall neon::phy::CMove::neon::phy::CMove::Logic(CMove *this);
void __thiscall neon::phy::CMove::Create(CMove *this,CVisual *param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8);
void __thiscall neon::phy::CMoveAcceleration::Create(CMoveAcceleration *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
CMove * __thiscall neon::phy::CMove::CMove(CMove *this,CMove *param_1);
CMove * __thiscall neon::phy::CMove::operator=(CMove *this,CMove *param_1);
CMoveAcceleration * __thiscall neon::phy::CMoveAcceleration::CMoveAcceleration(CMoveAcceleration *this,CMoveAcceleration *param_1);
CMoveReduction * __thiscall neon::phy::CMoveReduction::CMoveReduction(CMoveReduction *this,CMoveReduction *param_1);
CMoveAcceleration * __thiscall neon::phy::CMoveAcceleration::operator=(CMoveAcceleration *this,CMoveAcceleration *param_1);
int __cdecl FUN_10028b10(HWND param_1);
CManagedRes * __thiscall CManagedRes::CManagedRes(CManagedRes *this,ERes param_1);
void __thiscall CManagedRes::~CManagedRes(CManagedRes *this);
PixelFormat __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetPixelFormat(CRLESurface *this);
void __thiscall neon::render::CRLESurface::Create(CRLESurface *this,DATAHEADER *param_1,uchar *param_2,int param_3);
IDxDevice * __thiscall IDxDevice::IDxDevice(IDxDevice *this);
CRLESurface * __thiscall neon::render::CRLESurface::CRLESurface(CRLESurface *this,SurfaceDesc *param_1);
void __thiscall neon::render::CRLESurface::~CRLESurface(CRLESurface *this);
bool __thiscall neon::render::CRLESurface::DeCompress(CRLESurface *this,IDxSurface *param_1);
undefined4 * __thiscall neon::render::CRLESurface::deleting_destructor(CRLESurface *this,byte param_1);
CRefreshRgnMgr * __cdecl neon::render::CRefreshRgnMgr::Instance(void);
long __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::DestroyObjects(CDDDisplay *this);
bool __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::Is32bppTextureAvailable(CDDDisplay *this);
long __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::ChangeDisplayMode(CDDDisplay *this,bool param_1,bool param_2);
void __thiscall neon::render::CDDDisplay::UnregisterDraw(CDDDisplay *this,CDDDraw *param_1);
long __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::CalcVRAM(CDDDisplay *this,ulong *param_1,ulong *param_2);
IDxDraw * __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::CreateDraw(CDDDisplay *this,IDxSurface *param_1);
IDxSurface * __thiscall neon::render::CDDDisplay::GetBackBuffer(CDDDisplay *this);
void __thiscall FUN_10029090(void *this,int *param_1);
void __fastcall FUN_100290f0(undefined4 *param_1);
void __fastcall FUN_10029100(undefined4 *param_1);
void __fastcall FUN_10029110(undefined4 *param_1);
void __fastcall FUN_10029120(undefined4 *param_1);
void __thiscall neon::render::CDDDisplay::WaitForVerticalBlankBegin(CDDDisplay *this);
void __thiscall neon::render::CDDDisplay::WaitForVerticalBlankEnd(CDDDisplay *this);
uint __thiscall FUN_10029170(void *this,int param_1,int param_2);
uint __cdecl FUN_10029200(uint param_1,uint param_2);
uint __fastcall FUN_10029290(undefined4 param_1,uint param_2,uint param_3);
void __thiscall FUN_10029330(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_100293d0(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_10029470(void *this,byte *param_1,byte *param_2);
void __thiscall FUN_10029510(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_100295c0(void *this,byte *param_1,byte *param_2);
void __thiscall FUN_10029660(void *this,undefined2 *param_1,ushort *param_2);
void __thiscall FUN_100296d0(void *this,short *param_1,ushort *param_2);
void __thiscall FUN_100297b0(void *this,uint *param_1,uint *param_2);
void __thiscall FUN_10029800(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_100298c0(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_10029960(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_10029ab0(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_10029b60(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_10029c20(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_10029cc0(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_10029d50(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_10029db0(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_10029e40(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_10029ea0(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_10029f80(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_1002a030(void *this,undefined2 *param_1,ushort *param_2);
void __thiscall FUN_1002a0c0(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_1002a170(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_1002a1f0(void *this,byte *param_1,byte *param_2);
void __thiscall FUN_1002a240(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_1002a2b0(void *this,undefined1 *param_1,byte *param_2);
void __thiscall FUN_1002a320(void *this,ushort *param_1,ushort *param_2);
void __thiscall FUN_1002a490(void *this,uint *param_1,byte *param_2);
void FUN_1002a630(ushort *param_1,uint *param_2);
long __thiscall neon::frw::CFileManager::LoadImageUsingGdiplus(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Bitmap **param_2,void **param_3);
void __thiscall FUN_1002a6e0(void *this,byte *param_1,byte *param_2);
void __thiscall FUN_1002a730(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002a7f0(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002a8b0(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002a970(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002aa30(void *this,uint *param_1,byte *param_2);
void __thiscall FUN_1002aaa0(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002ab60(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002ac20(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002ace0(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002ada0(void *this,uint *param_1,uint *param_2);
void __thiscall FUN_1002ae10(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002aed0(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002af90(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002b050(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002b110(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002b1d0(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002b290(void *this,ushort *param_1,uint *param_2);
void __thiscall FUN_1002b350(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,short param_6,undefined4 param_7);
int __fastcall FUN_1002b3d0(int param_1);
long __thiscall neon::render::CDDDisplay::UpdateBounds(CDDDisplay *this);
long __thiscall neon::render::CDDDisplay::InitClipper(CDDDisplay *this);
void __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::Process_WM_PAINT(CDDDisplay *this,tagRECT *param_1);
void __cdecl FUN_1002b5c0(int param_1,int param_2,int *param_3,int *param_4,int *param_5);
void __cdecl FUN_1002b690(int param_1,int param_2,int *param_3,int *param_4,int *param_5);
IDxSurface * __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::CreateSurface(CDDDisplay *this,SurfaceDesc *param_1);
undefined4 __cdecl FUN_1002b8f0(int *param_1,int *param_2);
undefined4 __cdecl FUN_1002b940(float *param_1,float *param_2);
void __cdecl FUN_1002b9a0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,int param_7,int param_8,float param_9,int param_10,undefined4 *param_11);
void __cdecl FUN_1002bd90(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002c070(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002c480(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002c790(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002cb90(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002ce60(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002d260(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002d590(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002d9b0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002dd20(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002e120(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002e3f0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002e7f0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002eac0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002eec0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002f230(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002f630(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002f900(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1002fd00(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1002ffd0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_100303d0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100306a0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10030aa0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10030db0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_100311b0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10031480(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10031880(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10031b90(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10031f90(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10032260(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10032660(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10032a50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,int param_7,int param_8,float param_9,int param_10,undefined4 *param_11);
void __cdecl FUN_10032e40(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10033140(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10033590(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_100338b0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10033bd0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10033fd0(int *param_1,uint *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_10034320(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10034610(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10034a60(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_10034d80(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100350b0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_100354b0(int *param_1,uint *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_10035800(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10035b20(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10035f70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_100362b0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100365a0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_100369f0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_10036d10(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10037000(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10037450(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_10037770(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10037a90(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10037e90(int *param_1,uint *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_100381e0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100384d0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10038920(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_10038c40(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10038f30(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10039380(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_100396a0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10039990(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10039de0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_1003a100(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1003a420(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003a870(int *param_1,uint *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_1003abc0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1003aeb0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003b300(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_1003b620(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1003b940(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003bd90(int *param_1,uint *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_1003c0e0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1003c3d0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003c820(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_1003cb40(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1003ce20(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003d230(int *param_1,uint *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void __cdecl FUN_1003d530(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003d990(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_1003dd90(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003e1f0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_1003e5f0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003ea50(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003eeb0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003f310(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_1003f710(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003fb70(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_1003ffd0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10040430(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10040890(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10040cf0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10041150(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_100415b0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_100419d0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10041cb0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_100420e0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100423d0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_100427d0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10042aa0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10042ea0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100431a0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int *param_7,int *param_8);
void __cdecl FUN_10043630(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10043980(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10043d80(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10044050(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10044450(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10044720(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10044b20(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10044e80(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10045280(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10045550(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10045950(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10045c20(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10046020(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100462f0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_100466f0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100469c0(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10046dc0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10047090(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10047490(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10047760(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __cdecl FUN_10047b60(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_10047e30(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
undefined4 __thiscall FUN_10048230(void *this,int *param_1);
void __cdecl FUN_10048260(int *param_1,int *param_2,float param_3,float param_4,int *param_5,int *param_6,int param_7,int *param_8);
void __thiscall FUN_10048640(void *this,uint param_1);
void __thiscall FUN_100486d0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10048990(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10048c70(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10048f30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10049210(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100494d0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10049790(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10049a50(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10049d10(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10049fd0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004a290(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004a550(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004a880(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004ab40(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004ae70(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004b130(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004b3f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004b6b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004b970(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004bc30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004bef0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004c1b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004c470(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004c730(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004c9f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004ccb0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004cf70(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004d230(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004d4f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004d7b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004da70(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004dd30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004dff0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004e2b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004e570(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004e830(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004eaf0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004edb0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004f070(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004f330(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004f5f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004f8b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004fb70(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1004fe30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100500f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100503b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10050670(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10050930(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10050bf0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10050eb0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10051170(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10051430(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100516f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100519b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10051c70(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10051f30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100521f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100524b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10052770(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10052a20(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10052cd0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10052f80(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10053230(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100534e0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100537d0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10053a80(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10053d80(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10054030(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100542e0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10054590(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10054840(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10054b40(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10054df0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100550f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100553a0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10055650(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10055900(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10055bb0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10055e60(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10056160(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10056410(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10056720(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100569d0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10056cd0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10056f80(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10057280(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10057530(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10057830(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10057ae0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10057de0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10058090(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10058340(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100585f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100588a0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10058ba0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10058e50(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10059150(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10059400(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10059700(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100599b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10059cb0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10059f60(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005a260(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005a510(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005a810(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005aac0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005adc0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005b070(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005b370(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005b620(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005b920(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005bbd0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005bed0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005c180(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005c480(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005c730(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005ca30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005cce0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005cfe0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005d290(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005d590(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005d840(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005db00(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005ddb0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __fastcall FUN_1005e080(int param_1);
void __thiscall FUN_1005e140(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005e3f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005e6c0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005e970(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005ec40(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005eef0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005f220(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005f4d0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005f780(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005fa30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005fce0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_1005ff90(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10060240(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10060560(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10060810(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10060b30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10060de0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10061090(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10061340(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100615f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100618a0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10061b50(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10061e00(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100620b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10062360(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10062610(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100628c0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10062b70(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10062e20(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100630d0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10063410(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100636c0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10063970(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10063c20(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10063ed0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10064180(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10064430(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100646e0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10064990(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10064c40(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10064ef0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100651a0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10065450(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10065700(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100659b0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10065c60(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10065f10(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100661c0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10066470(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10066720(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100669d0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10066c80(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10066f30(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100671e0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10067490(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10067740(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100679f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10067ca0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10067f50(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_100681f0(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10068490(void *this,int *param_1,int param_2,int param_3,int *param_4);
void __thiscall FUN_10068740(void *this,int *param_1,int param_2,int param_3,int *param_4);
long __thiscall neon::render::CDDDisplay::CreateFullScreenDisplay(CDDDisplay *this,HWND__ *param_1,ulong param_2,ulong param_3,ulong param_4,bool param_5,bool param_6);
long __thiscall neon::render::CDDDisplay::CreateWindowedDisplay(CDDDisplay *this,HWND__ *param_1,ulong param_2,ulong param_3,ulong param_4,bool param_5,bool param_6);
bool __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::Init(CDDDisplay *this,HWND__ *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5);
void FUN_100690f0(void);
void __cdecl FUN_10069110(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,int *param_6);
void FUN_10069150(void);
void FUN_10069170(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void FUN_100691b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_10069200(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10069530(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10069860(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10069b90(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10069ec0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006a1f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006a520(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006a850(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006ab80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006aeb0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006b1e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006b510(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006b840(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006bb70(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006bea0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006c1d0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006c500(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006c830(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006cb60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006ce90(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006d1c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006d4f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006d820(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006db50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006de80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006e1b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006e4e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006e810(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006eb40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006ee70(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006f1a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006f4d0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006f800(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006fb30(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1006fe60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10070190(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100704c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100707f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10070b20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10070e50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10071180(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100714b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100717e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10071b10(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10071e40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10072170(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100724a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100727d0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10072b00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10072e30(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10073160(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10073490(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100737c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10073af0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10073e20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10074150(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10074480(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100747b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10074ae0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10074e10(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10075140(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10075470(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100757a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10075ac0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10075de0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10076100(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10076420(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10076740(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10076a60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10076d80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_100770a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_100773c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_100776e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10077a00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10077d20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10078040(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10078360(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10078680(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_100789a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10078cc0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10078fe0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10079300(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10079620(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10079940(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10079c60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10079f80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007a2a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007a5c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007a8e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007ac00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007af20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007b240(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007b560(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007b880(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007bba0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007bec0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007c1e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007c500(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007c820(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007cb40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007ce60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007d180(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007d4a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007d7c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007dae0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007de00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007e120(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007e440(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007e760(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007ea80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007eda0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007f0c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007f3e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007f700(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007fa20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_1007fd40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10080060(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10080380(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_100806a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_100809c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10080ce0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10081000(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10081320(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10081640(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int *param_14,int *param_15,undefined4 param_16);
void __cdecl FUN_10081960(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10081c90(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10081fc0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100822f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10082620(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10082950(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10082c80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10082fb0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100832e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10083610(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10083940(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10083c70(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10083fa0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100842d0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10084600(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10084930(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10084c60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10084f90(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100852c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100855f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10085920(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10085c50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10085f80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100862b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100865e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10086910(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10086c40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10086f70(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100872a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100875d0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10087900(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10087c30(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10087f60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10088290(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100885c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100888f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10088c20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10088f50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10089280(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100895b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100898e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10089c10(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10089f40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008a270(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008a5a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008a8d0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008ac00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008af30(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008b260(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008b590(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008b8c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008bbf0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008bf20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008c250(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008c580(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008c8b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008cbe0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008cf10(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008d240(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008d570(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008d8a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008dbd0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008df00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008e230(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008e560(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008e890(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008ebc0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008eef0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008f220(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008f550(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008f880(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008fbb0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1008fee0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10090210(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10090540(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10090870(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10090ba0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10090ed0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10091200(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10091530(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10091860(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10091b90(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10091ec0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100921f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10092520(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10092850(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10092b80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10092eb0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100931e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10093510(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10093840(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10093b70(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10093ea0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100941d0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10094500(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10094830(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10094b60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10094e90(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100951c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100954f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10095820(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10095b50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10095e80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100961b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100964e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10096810(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10096b40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10096e70(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100971a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100974d0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10097800(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10097b30(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10097e60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10098190(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100984c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100987f0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10098b20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10098e50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10099180(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100994b0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_100997e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10099b10(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_10099e40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __cdecl FUN_1009a170(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,int *param_13,int *param_14,undefined4 param_15,undefined4 param_16);
void __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::RenderListClear(CDDDisplay *this);
void __cdecl FUN_1009a4c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009a7e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009ab00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009ae20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009b140(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009b460(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009b780(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009baa0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009bdc0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009c0e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009c400(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009c720(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009ca40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009cd60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009d080(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009d3a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_1009d6c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009da00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009dd40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009e080(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009e3c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009e700(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009ea40(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009ed80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009f0c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009f400(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009f740(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009fa80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_1009fdc0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_100a0100(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_100a0440(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_100a0780(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,undefined4 param_13,int *param_14,int *param_15);
void __cdecl FUN_100a0ac0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a0de0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a1100(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a1420(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a1740(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a1a60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a1d80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a20a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a23c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a26e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a2a00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a2d20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a3040(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a3360(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a3680(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a39a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a3cc0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a3fe0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a4300(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a4620(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a4940(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a4c60(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a4f80(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a52a0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a55c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a58e0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a5c00(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a5f20(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a6240(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a6560(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a6880(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a6ba0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,float param_12,int *param_13,int *param_14,undefined4 param_15);
void __cdecl FUN_100a6ec0(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100a8980(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100aa3d0(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100abe20(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100ad930(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100af380(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100b0dd0(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100b2820(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100b4270(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100b5cc0(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100b7710(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100b9160(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100babb0(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100bc600(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100be050(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
void __cdecl FUN_100bfaa0(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,short param_9,undefined4 param_10);
bool __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::PostRender(CDDDisplay *this);
void FUN_100c17c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c1ac0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c1dc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c20c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c23c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c26c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c29c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c2cc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c2fc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c32c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c35c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c38c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c3bc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c3ec0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c41c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c44c0(int *param_1,int *param_2,int *param_3,int param_4);
void FUN_100c47c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c4ac0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c4dc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c50c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c53c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c56c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c59c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c5cc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c5fc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c62c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c65c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c68c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c6bc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c6ec0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c71c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c74c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c77c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c7ac0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100c7dc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c80c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100c83c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c86c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c89c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c8cc0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100c8fc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c92c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c95c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c98c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c9bc0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100c9ec0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100ca1c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100ca4c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100ca7c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100caac0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cadc0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cb0c0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_100cb3c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cb6c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cb9c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cbcc0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cbfc0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cc2c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cc5c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cc8c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100ccbc0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100ccec0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cd1c0(int *param_1,int *param_2,int param_3,int *param_4);
void FUN_100cd4c0(int *param_1,int *param_2,int *param_3,int param_4);
void __thiscall FUN_100cd7c0(void *this,undefined4 *param_1,int *param_2,int *param_3);
bool __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::Draw(CDDDisplay *this,IDxDraw *param_1);
undefined4 * __fastcall FUN_100cda70(undefined4 *param_1);
void __cdecl FUN_100cdae0(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100cdc00(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100cdd20(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100cde40(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100cdf60(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce080(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce1a0(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce2c0(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce3e0(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce500(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce620(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce740(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce860(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ce980(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100ceaa0(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __cdecl FUN_100cebc0(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
void __thiscall FUN_100cece0(void *this,undefined4 param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6);
void Catch_All@100cedbb(void);
CDDDisplay * __thiscall neon::render::CDDDisplay::CDDDisplay(CDDDisplay *this);
ulong __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::GetWidth(CDDDisplay *this);
ulong __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::GetHeight(CDDDisplay *this);
ulong __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::GetBPP(CDDDisplay *this);
bool __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::IsWindowMode(CDDDisplay *this);
void __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::SetVSyncWait(CDDDisplay *this,bool param_1);
bool __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::GetVSyncWait(CDDDisplay *this);
void __thiscall neon::render::CDDDisplay::~CDDDisplay(CDDDisplay *this);
bool __cdecl CreateDxDevice4(void);
void __cdecl FUN_100cf060(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf090(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf0c0(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf0f0(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf120(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf150(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf180(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf1b0(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf1e0(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf210(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf240(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf270(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf2a0(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf2d0(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf300(int param_1,int *param_2,undefined4 *param_3);
void __cdecl FUN_100cf330(int param_1,int *param_2,undefined4 *param_3);
CDDDisplay * __thiscall neon::render::CDDDisplay::deleting_destructor(CDDDisplay *this,byte param_1);
void __thiscall FUN_100cf3c0(void *this,int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4);
void __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::AddClipRgn(CDDDisplay *this,HWND__ *param_1);
void __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::RemoveClipRgn(CDDDisplay *this,HWND__ *param_1);
void __fastcall FUN_100cf510(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int *param_9);
void __thiscall FUN_100d0010(void *this,char *param_1);
void Catch_All@100d0110(void);
undefined4 * __thiscall FUN_100d0130(void *this,undefined4 *param_1);
void Catch_All@100d01cd(void);
void __thiscall neon::render::CRefreshRgnMgr::~CRefreshRgnMgr(CRefreshRgnMgr *this);
CRefreshRgnMgr * __thiscall neon::render::CRefreshRgnMgr::CRefreshRgnMgr(CRefreshRgnMgr *this,CRefreshRgnMgr *param_1);
bool __thiscall neon::render::CDDDisplay::neon::render::CDDDisplay::RenderScene(CDDDisplay *this);
CRefreshRgnMgr * __thiscall neon::render::CRefreshRgnMgr::operator=(CRefreshRgnMgr *this,CRefreshRgnMgr *param_1);
void __thiscall neon::render::CDDDraw::vfunction4(CDDDraw *this,int param_1,uint param_2,uint param_3,uint param_4);
void __thiscall neon::render::CDDDraw::vfunction6(CDDDraw *this,undefined4 *param_1);
void __thiscall neon::render::CDDDraw::vfunction7(CDDDraw *this,undefined4 *param_1);
void __thiscall neon::render::CDDDraw::vfunction9(CDDDraw *this,undefined4 *param_1);
int __thiscall neon::render::CDDDraw::vfunction14(CDDDraw *this);
int __thiscall neon::render::CDDDraw::vfunction15(CDDDraw *this);
int __thiscall neon::render::CDDDraw::vfunction16(CDDDraw *this);
void __thiscall neon::render::CDDDraw::vfunction17(CDDDraw *this,undefined4 param_1);
void __fastcall FUN_100d0710(int param_1);
int __fastcall FUN_100d0740(int param_1);
int * __thiscall FUN_100d0750(void *this,int param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __cdecl FUN_100d0810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100d0850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100d0890(int param_1,int param_2,int param_3);
CBasicRect<float> * __thiscall neon::render::CDDDisplay::GetScreenClipRect(CDDDisplay *this);
void __thiscall neon::render::CDDDraw::vfunction2(CDDDraw *this,int *param_1);
void __thiscall neon::render::CDDDraw::vfunction5(CDDDraw *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void __fastcall FUN_100d0aa0(int param_1);
int * __fastcall FUN_100d0b60(int param_1);
int * __fastcall FUN_100d0b90(int param_1);
int __cdecl FUN_100d0bd0(int param_1,int param_2,int param_3);
void __cdecl FUN_100d0c30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100d0c80(undefined4 *param_1,int *param_2,float param_3,float param_4,float param_5,float param_6,undefined4 param_7,float param_8,float param_9);
void __thiscall neon::render::CDDDraw::vfunction10(CDDDraw *this,undefined4 *param_1);
void __fastcall FUN_100d1000(int param_1);
undefined4 * __cdecl FUN_100d1130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100d1190(undefined4 *param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_100d11e0(int param_1,int param_2,int param_3);
undefined4 * FUN_100d1210(undefined4 *param_1,int param_2,undefined4 *param_3);
int * __thiscall FUN_100d1250(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void FUN_100d12d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __thiscall FUN_100d1300(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@100d14a0(void);
CDDDraw * __thiscall neon::render::CDDDraw::CDDDraw(CDDDraw *this,int param_1,int *param_2);
void __thiscall neon::render::CDDDraw::vfunction8(CDDDraw *this,undefined1 param_1);
void __thiscall neon::render::CDDDraw::vfunction11(CDDDraw *this,undefined1 param_1);
undefined1 __thiscall neon::render::CDDDraw::vfunction12(CDDDraw *this);
undefined4 __thiscall neon::render::CDDDraw::vfunction20(CDDDraw *this);
void __thiscall neon::render::CDDDraw::~CDDDraw(CDDDraw *this);
void __thiscall FUN_100d18c0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
CDDDraw * __thiscall neon::render::CDDDraw::deleting_destructor(CDDDraw *this,byte param_1);
void __thiscall FUN_100d1990(void *this,undefined4 *param_1);
void __thiscall neon::render::CDDDraw::vfunction19(CDDDraw *this,undefined4 *param_1);
undefined1 __thiscall neon::render::dd_effect::CEffectAbstract::vfunction5(CEffectAbstract *this);
void __thiscall neon::render::dd_effect::CEffectAbstract::vfunction2(CEffectAbstract *this,byte param_1);
void __thiscall neon::render::dd_effect::CEffectSrcCopy::vfunction6(CEffectSrcCopy *this);
void __thiscall IDxDevice::IDxDevice::~IDxDevice(IDxDevice *this);
void __thiscall neon::render::dd_effect::CEffectRGBAdd::vfunction2(CEffectRGBAdd *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
undefined4 * FUN_100d1b20(void);
void __thiscall neon::render::dd_effect::CEffectAlpha::CEffectAlpha(CEffectAlpha *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectAlpha>::vfunction6(CEffectTransparent<neon::render::dd_effect::CEffectAlpha> *this,undefined4 param_1,int *param_2);
void __thiscall neon::render::dd_effect::CEffectAlphaGray::CEffectAlphaGray(CEffectAlphaGray *this);
void __thiscall neon::render::dd_effect::CEffectRGBAdd::CEffectRGBAdd(CEffectRGBAdd *this);
void __thiscall neon::render::dd_effect::CEffectRGBSub::CEffectRGBSub(CEffectRGBSub *this);
void __thiscall neon::render::dd_effect::CEffectRGBMulti::CEffectRGBMulti(CEffectRGBMulti *this);
void __thiscall neon::render::dd_effect::CEffectAdd::CEffectAdd(CEffectAdd *this);
void __thiscall neon::render::dd_effect::CEffectSub::CEffectSub(CEffectSub *this);
void __thiscall neon::render::dd_effect::CEffectGray::CEffectGray(CEffectGray *this);
void __thiscall neon::render::dd_effect::CEffectDodge::CEffectDodge(CEffectDodge *this);
void __thiscall neon::render::dd_effect::CEffectScreen::CEffectScreen(CEffectScreen *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectAlpha>::vfunction5(CEffectTransparent<neon::render::dd_effect::CEffectAlpha> *this);
void __thiscall neon::render::dd_effect::CEffectDodgeBurn::CEffectDodgeBurn(CEffectDodgeBurn *this);
void __thiscall neon::render::dd_effect::CEffectLighten::CEffectLighten(CEffectLighten *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectAlpha>::vfunction2(CEffectTransparent<neon::render::dd_effect::CEffectAlpha> *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __thiscall neon::render::dd_effect::CEffectDifferent::CEffectDifferent(CEffectDifferent *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectAlpha>::vfunction7(CEffectTransparent<neon::render::dd_effect::CEffectAlpha> *this);
void __thiscall neon::render::dd_effect::CEffectDarken::CEffectDarken(CEffectDarken *this);
void __thiscall neon::render::dd_effect::CEffectMultiply::CEffectMultiply(CEffectMultiply *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>::vfunction2(CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>::vfunction7(CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> *this);
void __thiscall neon::render::dd_effect::CEffectRGBAdd::CEffectRGBAdd(CEffectRGBAdd *this);
void __thiscall neon::render::dd_effect::CEffectRGBSub::CEffectRGBSub(CEffectRGBSub *this);
void __thiscall neon::render::dd_effect::CEffectRGBMulti::CEffectRGBMulti(CEffectRGBMulti *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>::vfunction5(CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>::vfunction6(CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> *this);
void __thiscall neon::render::dd_effect::CEffectSrcCopy::vfunction3(CEffectSrcCopy *this);
void __thiscall neon::render::dd_effect::CEffectAlpha::vfunction3(CEffectAlpha *this);
undefined4 * __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>::deleting_destructor(CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy> *this,byte param_1);
void __thiscall neon::render::dd_effect::CEffectAdd::vfunction3(CEffectAdd *this);
void __thiscall neon::render::dd_effect::CEffectSub::vfunction3(CEffectSub *this);
void __thiscall neon::render::dd_effect::CEffectGray::vfunction3(CEffectGray *this);
void __thiscall neon::render::dd_effect::CEffectAlphaGray::vfunction3(CEffectAlphaGray *this);
void __thiscall neon::render::dd_effect::CEffectDodge::vfunction3(CEffectDodge *this);
void __thiscall neon::render::dd_effect::CEffectScreen::vfunction3(CEffectScreen *this);
void __thiscall neon::render::dd_effect::CEffectDodgeBurn::vfunction3(CEffectDodgeBurn *this);
void __thiscall neon::render::dd_effect::CEffectLighten::vfunction3(CEffectLighten *this);
void __thiscall neon::render::dd_effect::CEffectDarken::vfunction3(CEffectDarken *this);
void __thiscall neon::render::dd_effect::CEffectDifferent::vfunction3(CEffectDifferent *this);
void __thiscall neon::render::dd_effect::CEffectRGBAdd::vfunction3(CEffectRGBAdd *this);
void __thiscall neon::render::dd_effect::CEffectRGBSub::vfunction3(CEffectRGBSub *this);
void __thiscall neon::render::dd_effect::CEffectRGBSub::vfunction2(CEffectRGBSub *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
void __thiscall neon::render::dd_effect::CEffectRGBMulti::vfunction3(CEffectRGBMulti *this);
void __thiscall neon::render::dd_effect::CEffectMultiply::vfunction3(CEffectMultiply *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectSrcCopy> *this);
undefined4 * FUN_100d25a0(void);
undefined4 * FUN_100d2790(void);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectAlpha>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectAlpha> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectAlphaGray> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectRGBAdd> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectRGBSub>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectRGBSub> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectRGBMulti> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectAdd>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectAdd> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectSub>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectSub> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectGray>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectGray> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectDodge>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectDodge> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectScreen>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectScreen> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectDodgeBurn> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectLighten>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectLighten> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectDifferent>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectDifferent> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectDarken>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectDarken> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectMultiply>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectMultiply> *this);
void __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>::vfunction3(CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectAlpha> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectAlphaGray> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBAdd> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBSub> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectRGBMulti> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectAdd> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectSub>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectSub> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectGray>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectGray> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectDodge> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectScreen> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectDodgeBurn> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectLighten> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectDifferent> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectDarken> *this);
void __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>::vfunction3(CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply> *this);
undefined4 * __thiscall neon::render::dd_effect::CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy>::deleting_destructor(CEffectTransparent<neon::render::dd_effect::CEffectSrcCopy> *this,byte param_1);
undefined4 * __thiscall neon::render::dd_effect::CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply>::deleting_destructor(CEffectSrcAlpha<neon::render::dd_effect::CEffectMultiply> *this,byte param_1);
void __cdecl FUN_100d3430(undefined4 param_1,char param_2,char param_3);
undefined4 __fastcall FUN_100d3460(int param_1);
void __thiscall neon::render::CDDSurface::vfunction19(CDDSurface *this,int *param_1);
_DDPIXELFORMAT * __thiscall neon::render::CDDDisplay::GetPixelFormat(CDDDisplay *this);
void __thiscall neon::render::CDDSurface::~CDDSurface(CDDSurface *this);
void __thiscall neon::render::CDDSurface::vfunction1(CDDSurface *this,byte param_1);
list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> * __thiscall neon::render::CRefreshRgnMgr::neon::render::CRefreshRgnMgr::DirtyRectList(CRefreshRgnMgr *this);
undefined4 __thiscall neon::render::CDDSurface::vfunction6(CDDSurface *this);
undefined4 __thiscall neon::render::CDDSurface::vfunction7(CDDSurface *this);
undefined2 __thiscall neon::render::CDDSurface::vfunction8(CDDSurface *this);
undefined2 __thiscall neon::render::CDDSurface::vfunction9(CDDSurface *this);
int __thiscall FUN_100d3610(void *this,int param_1,int param_2);
int __fastcall FUN_100d3700(int *param_1);
void __fastcall FUN_100d3840(int param_1);
ushort __thiscall FUN_100d39a0(void *this,float *param_1);
int __fastcall FUN_100d3a00(int param_1);
int __fastcall FUN_100d3a60(int param_1);
int __thiscall neon::render::CDDSurface::vfunction12(CDDSurface *this,undefined4 param_1,char param_2);
void __thiscall neon::render::CDDSurface::vfunction14(CDDSurface *this);
void __thiscall neon::render::CDDSurface::vfunction13(CDDSurface *this);
undefined4 __thiscall neon::render::CDDSurface::vfunction3(CDDSurface *this,uint param_1);
void __thiscall neon::render::CDDSurface::vfunction18(CDDSurface *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5);
undefined4 __thiscall neon::render::CDDSurface::vfunction4(CDDSurface *this,undefined4 param_1);
void __thiscall neon::render::CDDSurface::vfunction5(CDDSurface *this);
undefined4 __cdecl FUN_100d3ce0(LPCSTR param_1,undefined4 *param_2);
undefined4 __cdecl FUN_100d3dc0(int *param_1,int param_2);
undefined4 * __thiscall Gdiplus::Image::vfunction1(Image *this,byte param_1);
CDDSurface * __thiscall neon::render::CDDSurface::CDDSurface(CDDSurface *this);
undefined4 * __thiscall neon::render::CDDSurface::deleting_destructor(CDDSurface *this,byte param_1);
int __thiscall FUN_100d3fe0(void *this,undefined4 *param_1);
undefined4 __fastcall FUN_100d4150(int *param_1);
void __thiscall neon::render::CDDSurface::vfunction21(CDDSurface *this,int param_1,int param_2,int param_3,int param_4,uint param_5);
undefined4 __thiscall neon::render::CDDSurface::vfunction17(CDDSurface *this,uint param_1,uint param_2);
int __thiscall neon::render::CDDSurface::vfunction3(CDDSurface *this);
undefined4 * __thiscall Gdiplus::Image::vfunction2(Image *this);
bool __thiscall neon::render::CDDSurface::vfunction20(CDDSurface *this,int param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
CGSurface * __thiscall neon::render::CGSurface::CGSurface(CGSurface *this);
undefined2 __thiscall neon::render::CDDSurface::vfunction10(CDDSurface *this);
void __thiscall neon::render::CGSurface::~CGSurface(CGSurface *this);
undefined4 __fastcall FUN_100d4660(int param_1);
void __thiscall neon::render::CGSurface::vfunction21(CGSurface *this,int param_1,int param_2,int param_3,int param_4,uint param_5);
void __thiscall neon::render::CGSurface::vfunction1(CGSurface *this,byte param_1);
undefined4 __thiscall neon::render::CGSurface::vfunction6(CGSurface *this);
undefined4 __thiscall neon::render::CGSurface::vfunction7(CGSurface *this);
undefined4 __thiscall neon::render::CGSurface::vfunction16(CGSurface *this);
uint __thiscall neon::render::CGSurface::vfunction3(CGSurface *this,undefined4 param_1);
undefined4 __thiscall neon::render::CGSurface::vfunction4(CGSurface *this,undefined4 param_1);
void __thiscall neon::render::CGSurface::vfunction5(CGSurface *this);
PixelFormat __thiscall neon::render::CGSurface::vfunction11(CGSurface *this);
void __thiscall neon::render::CGSurface::vfunction18(CGSurface *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5);
void __thiscall neon::render::CGSurface::vfunction19(CGSurface *this,int *param_1);
undefined4 * __thiscall neon::render::CGSurface::deleting_destructor(CGSurface *this,byte param_1);
undefined4 __thiscall FUN_100d48d0(void *this,undefined4 *param_1);
void __fastcall FUN_100d4ba0(int param_1);
bool __thiscall neon::render::CGSurface::vfunction20(CGSurface *this,int *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
void __thiscall neon::render::CRefreshRgnMgr::SetScreenRect(CRefreshRgnMgr *this,CBasicRect<long> *param_1);
void __cdecl FUN_100d4df0(int param_1);
void __thiscall FUN_100d4e10(void *this,int param_1);
void __fastcall FUN_100d4e60(int *param_1);
void __thiscall FUN_100d4ed0(void *this,undefined4 param_1,int param_2,int *param_3);
void FUN_100d5190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void FUN_100d51e0(void *param_1);
void __thiscall FUN_100d5220(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_100d5410(void *this,undefined4 *param_1);
void __thiscall FUN_100d5450(void *this,int *param_1,int *param_2);
void __thiscall FUN_100d5540(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
undefined4 * __thiscall FUN_100d5620(void *this,undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4);
void __thiscall neon::render::CRefreshRgnMgr::ClearList(CRefreshRgnMgr *this);
undefined4 * __fastcall FUN_100d5840(undefined4 *param_1);
undefined4 * __thiscall FUN_100d58b0(void *this,int *param_1);
void __fastcall FUN_100d5960(int *param_1);
void __thiscall FUN_100d59e0(void *this,undefined4 param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6);
CRefreshRgnMgr * __thiscall neon::render::CRefreshRgnMgr::CRefreshRgnMgr(CRefreshRgnMgr *this);
void __thiscall neon::render::CRefreshRgnMgr::GetIncludedPoint(CRefreshRgnMgr *this,map<neon::render::EIncludedPos,tagPOINT,std::less<neon::render::EIncludedPos>,std::allocator<std::pair<neon::render::EIncludedPos_const_,tagPOINT>_>_>*param_1,CBasicRect<long> *param_2,CBasicRect<long> *param_3);
void __fastcall thunk_FUN_100d5960(int *param_1);
undefined4 * __fastcall FUN_100d5b70(undefined4 *param_1);
void __thiscall neon::render::CRefreshRgnMgr::DivideRect(CRefreshRgnMgr *this,list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> *param_1,list<eco::CBasicRect<long>,std::allocator<eco::CBasicRect<long>_>_> *param_2,CBasicRect<long> *param_3,CBasicRect<long> *param_4);
bool __thiscall neon::render::CRefreshRgnMgr::AddRefreshRgn(CRefreshRgnMgr *this,int param_2,int param_3,int param_4,int param_5);
bool __thiscall neon::render::CRefreshRgnMgr::GetIntersectRgn(CRefreshRgnMgr *this,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6);
IDxDevice * __cdecl DxDevice(void);
void __cdecl ReleaseDxDevice(void);
void __cdecl CalcVRAM(ulong *param_1,ulong *param_2);
IDxDraw * __cdecl neon::Clone(IDxDraw *param_1);
IInput * __cdecl Input(void);
void __cdecl ReleaseInput(void);
void __thiscall neon::dev::CInput::vfunction1(CInput *this);
void __thiscall neon::dev::CInput::vfunction2(CInput *this);
void __thiscall neon::dev::CInput::vfunction3(CInput *this,undefined4 param_1,undefined4 param_2);
undefined4 __thiscall neon::dev::CInput::vfunction5(CInput *this,byte param_1);
void __thiscall neon::dev::CInput::vfunction6(CInput *this);
bool __cdecl CreateInputD4(void);
undefined4 * __thiscall neon::dev::CInput::deleting_destructor(CInput *this,byte param_1);
char * FUN_100d6820(void);
void __thiscall neon::dev::CSound::~CSound(CSound *this);
void __thiscall neon::dev::CSound::~CSound(CSound *this);
void __thiscall neon::dev::CSound::~CSound(CSound *this,CSound *param_1);
undefined4 * __thiscall neon::dev::CSound::deleting_destructor(CSound *this,byte param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Load(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::SetCrossfadeTime(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::LoadBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,bool param_3,ulong param_4,int param_5,bool param_6,bool param_7);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::GetFilenameFromFullPathName(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
undefined1 * __fastcall FUN_100d6b60(undefined1 *param_1);
void __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::Close(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
int __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::LoadSound(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,int param_3,int param_4,int param_5,bool param_6,int param_7,int param_8,int param_9,bool param_10,bool param_11,bool param_12,bool param_13,void *param_14,ulong param_15,bool param_16);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100d6cb0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,undefined4 *param_2);
void __cdecl FUN_100d6cd0(int *param_1);
void __cdecl FUN_100d6cf0(int param_1);
void __cdecl FUN_100d6d10(int *param_1);
undefined4 __thiscall FUN_100d6d30(void *this,int *param_1);
void __thiscall FUN_100d6d60(void *this,int *param_1);
void __thiscall FUN_100d6dc0(void *this,int *param_1);
void __fastcall FUN_100d6e20(int *param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Init(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,bool param_1,HWND__ *param_2,int param_3,int param_4,int param_5,ulong param_6);
float __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::GetBGMVolume(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::Stop(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::_unloadFMODSampleOnly(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,SampleEntity *param_1);
float __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::ClipFreq(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,float param_1,float param_2,float param_3);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::ClipFreq(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1,int param_2,int param_3);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::SetAutoUnLoadBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,bool param_1);
int __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::Init(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,bool param_1,HWND__ *param_2,int param_3,int param_4,int param_5,ulong param_6);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::_SetSampleMinMax(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,FSOUND_SAMPLE *param_1,float param_2,float param_3);
float __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::GetBGMVolume(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::SetAutoUnLoadBGM(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,bool param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100d73c0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall FUN_100d73e0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_100d7440(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_100d74a0(int *param_1);
void __fastcall FUN_100d7530(LPCRITICAL_SECTION param_1);
void __cdecl neon::dev::CSound::Destroy(void);
void __fastcall FUN_100d7570(undefined4 *param_1);
void FUN_100d7580(void);
void FUN_100d75c0(void);
void FUN_100d7600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::_Load(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,SampleEntity *param_1);
bool __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::_Load(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,SampleEntity *param_1);
void __fastcall FUN_100d7980(int param_1);
undefined4 * __thiscall FUN_100d7990(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@100d7a2d(void);
undefined4 * __cdecl FUN_100d7a50(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4);
void __thiscall FUN_100d7ae0(void *this,int param_1);
void __thiscall FUN_100d7b60(void *this,undefined4 param_1,int param_2,int *param_3);
void FUN_100d7e30(void *param_1);
undefined4 * __thiscall FUN_100d7e70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::FadeBGM(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,int param_1,double param_2);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::UnLoad(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::UnLoad(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::DestroyChannel(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::FadeBGM(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,int param_1,double param_2);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::UnLoad(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::UnLoad(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::DestroyChannel(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall FUN_100d8700(void *this,int *param_1,uint *param_2);
void __thiscall FUN_100d8790(void *this,int *param_1,int *param_2);
void __fastcall FUN_100d8820(int *param_1);
void * FUN_100d8860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void Catch_All@100d88dd(void);
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
void __thiscall FUN_100d96e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * __thiscall FUN_100d98d0(void *this,undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CCriticalSection>::StopChannels(CMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,SoundType param_1);
void __thiscall kiki::CMixer<neon::dev::CSound,neon::util::CEmptyLock>::StopChannels(CMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,SoundType param_1);
void __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::DestroySoundData(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this);
void __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::DestroySoundData(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this);
void __thiscall FUN_100d9d90(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
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
void __thiscall FUN_100dabb0(void *this,int *param_1,uint *param_2);
undefined4 * __thiscall FUN_100daca0(void *this,int *param_1);
void __fastcall FUN_100dad50(int *param_1);
undefined4 * __thiscall FUN_100dadd0(void *this,int param_1);
void Catch_All@100dae68(void);
void __thiscall FUN_100dae80(void *this,undefined4 param_1,int param_2,int *param_3);
void FUN_100db150(void *param_1);
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
void __fastcall thunk_FUN_100dad50(int *param_1);
int __thiscall CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection>::LoadSound(CNeonMixer<neon::dev::CSound,neon::util::CCriticalSection> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,SoundType param_3,int param_4,int param_5,int param_6,bool param_7,int param_8,int param_9,int param_10,bool param_11,bool param_12,bool param_13,void *param_14,ulong param_15,bool param_16);
int __thiscall CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock>::LoadSound(CNeonMixer<neon::dev::CSound,neon::util::CEmptyLock> *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,SoundType param_3,int param_4,int param_5,int param_6,bool param_7,int param_8,int param_9,int param_10,bool param_11,bool param_12,bool param_13,void *param_14,ulong param_15,bool param_16);
undefined4 * __thiscall FUN_100dd240(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@100dd2dd(void);
void __thiscall FUN_100dd300(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall FUN_100dd3e0(void *this,int param_1);
void __fastcall FUN_100dd460(int *param_1);
undefined4 * __thiscall FUN_100dd4a0(void *this,int param_1);
void Catch_All@100dd538(void);
void __fastcall FUN_100dd550(int *param_1);
void __fastcall FUN_100dd5d0(undefined4 *param_1);
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
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
void __thiscall neon::frw::CApp::~CApp(CApp *this);
CApp * __thiscall neon::frw::CApp::deleting_destructor(CApp *this,byte param_1);
void __thiscall neon::frw::CAppManager::SetTickFunc(CAppManager *this,Functor<void,Loki::NullType,Loki::ClassLevelLockable> *param_1);
CAppManager * __thiscall neon::frw::CAppManager::CAppManager(CAppManager *this,CAppManager *param_1);
CAppManager * __thiscall neon::frw::CAppManager::operator=(CAppManager *this,CAppManager *param_1);
void __cdecl neon::frw::CApp::Destroy(void);
long __thiscall neon::frw::CApp::DefaultProc(CApp *this,HWND__ *param_1,uint param_2,uint param_3,long param_4,bool *param_5);
bool __thiscall neon::frw::CApp::Init(CApp *this,HINSTANCE__ *param_1,HWND__ *param_2,SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>*param_3,CBasicPoint<long> *param_4,bool param_5,bool param_6,bool param_7,bool param_8,int param_9);
void __cdecl neon::frw::DestroyNeon(void);
int * __thiscall FUN_100df3e0(void *this,int *param_1);
CDxAvtrPart * __thiscall DXAvatar::CDxAvtrPart::CDxAvtrPart(CDxAvtrPart *this);
CDxAvtrPart * __thiscall DXAvatar::CDxAvtrPart::CDxAvtrPart(CDxAvtrPart *this,CDxAvtrPart *param_1);
CDxAvtrPart * __thiscall DXAvatar::CDxAvtrPart::operator=(CDxAvtrPart *this,CDxAvtrPart *param_1);
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
float10 FUN_100df9d0(int param_1);
void __cdecl neon::frw::CFileManager::Destroy(void);
void __thiscall neon::frw::CFileManager::ConvertNPackPathToNormalPath(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2);
int __thiscall neon::frw::CFileManager::SplitFileName(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void __thiscall neon::frw::CFileManager::ConvertSlashToBackSlash(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void * __thiscall neon::frw::CFileManager::JustOpen(CFileManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,uint *param_2);
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
void __cdecl FUN_100e08e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100e0920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100e0980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __cdecl FUN_100e09c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
bool __thiscall FUN_100e0a20(void *this,void *param_1,size_t param_2);
undefined4 * __cdecl FUN_100e0a80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __thiscall FUN_100e0ae0(void *this,int *param_1,int param_2);
void __cdecl FUN_100e0b30(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
void * __cdecl FUN_100e0b50(void *param_1,int param_2,int param_3);
undefined4 * __cdecl FUN_100e0b80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100e0bd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100e0c00(void *param_1,int param_2,undefined4 *param_3);
void Catch_All@100e0c69(void);
void __cdecl FUN_100e0ca0(undefined4 *param_1,int param_2,undefined4 *param_3);
void Catch_All@100e0d3b(void);
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>* __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
int FUN_100e0dd0(void *param_1,int param_2,void *param_3);
void __fastcall FUN_100e0e00(int param_1);
void * FUN_100e0e50(void *param_1,int param_2,undefined4 *param_3);
void __fastcall FUN_100e0e90(int param_1);
undefined4 * FUN_100e0ee0(undefined4 *param_1,int param_2,undefined4 *param_3);
int * __thiscall FUN_100e0f20(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,void *param_5);
undefined1 * FUN_100e0fb0(undefined1 *param_1,int param_2,undefined1 *param_3);
void FUN_100e0fe0(undefined4 *param_1,undefined4 *param_2,void *param_3);
void FUN_100e1010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_100e1040(undefined4 *param_1);
void __thiscall FUN_100e10a0(void *this,char *param_1);
void Catch_All@100e11a3(void);
void __fastcall FUN_100e11c0(undefined4 *param_1);
void __thiscall FUN_100e1220(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@100e139a(void);
void Catch_All@100e145e(void);
void __thiscall FUN_100e1500(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void Catch_All@100e16d0(void);
void Catch_All@100e17c6(void);
void __thiscall FUN_100e1870(void *this,undefined4 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
void __thiscall h2p::CLoader::~CLoader(CLoader *this);
undefined4 __fastcall FUN_100e1a80(void *param_1);
void __thiscall FUN_100e1ad0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_100e1b90(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void __thiscall FUN_100e1c60(void *this,uint param_1,undefined1 param_2);
undefined4 * __thiscall h2p::CLoader::deleting_destructor(CLoader *this,byte param_1);
void __thiscall FUN_100e1d30(void *this,undefined4 *param_1);
void __thiscall FUN_100e1db0(void *this,undefined4 *param_1);
undefined4 __fastcall FUN_100e1e50(void *param_1);
void __fastcall FUN_100e1f50(void *param_1);
int __thiscall FUN_100e2090(void *this,uint param_1,void *param_2);
undefined4 __thiscall FUN_100e2150(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 __thiscall FUN_100e21f0(void *this,undefined4 *param_1);
void __fastcall FUN_100e22a0(undefined4 *param_1);
void __thiscall FUN_100e22b0(void *this,undefined4 *param_1);
void __thiscall h2p::CFile::ReleaseSurface(CFile *this,IDxSurface *param_1);
void __fastcall FUN_100e2300(int *param_1);
int * __thiscall FUN_100e2390(void *this,int param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_100e23f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
IDxSurface * __cdecl h2p::CreateSurface(SurfaceDesc *param_1);
IDxSurface * __thiscall h2p::CFile::GetSurface(CFile *this,ulong param_1);
void __cdecl FUN_100e2630(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_100e26b0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void FUN_100e2720(void);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_100e2740(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void Catch_All@100e27f8(void);
void __cdecl FUN_100e2830(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100e2880(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3);
void __cdecl FUN_100e28b0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void Catch_All@100e2966(void);
void __thiscall FUN_100e29a0(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_100e2a20(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
CFile * __thiscall h2p::CManager::GetFile(CManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_100e2bf0(int param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> *FUN_100e2c40(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
undefined4 * __thiscall FUN_100e2c80(void *this,undefined4 *param_1,int *param_2,int param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
SubImage * __thiscall h2p::CFile::GetSubImage(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
SurfaceDesc * __thiscall h2p::CFile::GetSurfDesc(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
IDxSurface * __thiscall h2p::CFile::GetSurface(CFile *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
long __thiscall h2p::CManager::Unload(CManager *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall h2p::CManager::Clear(CManager *this);
undefined4 * __thiscall FUN_100e3100(void *this,int param_1);
void Catch_All@100e31d2(void);
void __fastcall FUN_100e31f0(undefined4 *param_1);
undefined4 * __thiscall FUN_100e3250(void *this,int param_1);
void Catch_All@100e3336(void);
undefined4 * __thiscall FUN_100e3350(void *this,int param_1);
void Catch_All@100e3449(void);
void __thiscall FUN_100e3460(void *this,char *param_1);
void Catch_All@100e357a(void);
undefined4 * __fastcall FUN_100e3590(undefined4 *param_1);
void __thiscall FUN_100e3600(void *this,undefined4 param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,uint param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void Catch_All@100e37fd(void);
void Catch_All@100e3918(void);
void __thiscall FUN_100e39e0(void *this,undefined4 param_1,int param_2,void *param_3,undefined4 param_4,int param_5,undefined4 param_6,int param_7,uint param_8);
CLoader * __thiscall h2p::CLoader::CLoader(CLoader *this);
void __cdecl h2p::CManager::Flush(void);
void __thiscall h2p::CManager::~CManager(CManager *this);
void __thiscall FUN_100e3b80(void *this,int *param_1,int param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void __thiscall FUN_100e3c40(void *this,int *param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void __thiscall FUN_100e3d00(void *this,uint param_1,undefined4 *param_2);
void __fastcall FUN_100e3d80(int param_1);
void __thiscall FUN_100e3dc0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
CManager * __thiscall h2p::CManager::CManager(CManager *this);
void * __thiscall FUN_100e3ee0(void *this,int param_1);
void __thiscall FUN_100e3f60(void *this,undefined4 *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,int *param_3,int *param_4);
void __fastcall FUN_100e42a0(int param_1);
CManager * __cdecl h2p::CManager::Get(void);
int __thiscall FUN_100e43b0(void *this,undefined1 *param_1,undefined4 param_2);
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
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::IsIn(CObject *this,int param_1,int param_2);
CObject * __cdecl neon::Clone(CObject *param_1);
void __thiscall neon::frw::CComponent::~CComponent(CComponent *this);
CObject * __thiscall neon::frw::CObject::GetParent(CObject *this);
list<eco::CCompositeHolder<neon::frw::CComponent>*,std::allocator<eco::CCompositeHolder<neon::frw::CComponent>*>_>* __thiscall neon::frw::CObject::GetChildList(CObject *this);
int * __thiscall FUN_100e5600(void *this,int *param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnActivate(CObject *this,bool param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnSelect(CObject *this,bool param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnFocus(CObject *this,bool param_1,bool param_2);
void __thiscall neon::frw::CObject::DeleteAllChildren(CObject *this,bool param_1);
undefined4 * __fastcall FUN_100e56d0(undefined4 *param_1);
void __cdecl FUN_100e5740(undefined4 *param_1,undefined *param_2,undefined4 param_3);
void __cdecl FUN_100e5860(int *param_1);
CCompositeHolder<neon::frw::CComponent> * __thiscall eco::CCompositeHolder<neon::frw::CComponent>::CCompositeHolder<neon::frw::CComponent>(CCompositeHolder<neon::frw::CComponent> *this);
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::IsChildIn(CObject *this,int param_1,int param_2);
undefined4 __thiscall FUN_100e5a10(void *this,undefined4 param_1);
void __thiscall neon::frw::CObject::neon::frw::CObject::OnAttached(CObject *this);
void __thiscall neon::frw::CObject::ForEachLogic(CObject *this);
void __thiscall neon::frw::CObject::ForEachOutput(CObject *this);
void __thiscall FUN_100e5b60(void *this,int *param_1);
void __thiscall neon::frw::CObject::AddChild(CObject *this,CObject *param_1);
void __thiscall neon::frw::CObject::SubChild(CObject *this,CObject *param_1);
CObject * __thiscall neon::frw::CObject::CObject(CObject *this);
void __thiscall neon::frw::CObject::~CObject(CObject *this);
CObject * __thiscall neon::frw::CObject::neon::frw::CObject::Clone(CObject *this);
void __thiscall neon::frw::CObject::neon::frw::CObject::Copy(CObject *this,CObject *param_1);
void __fastcall FUN_100e60a0(undefined4 **param_1);
void __thiscall neon::frw::CObject::SortByZOrder(CObject *this);
void __thiscall neon::frw::CObject::SetZOrder(CObject *this,int param_1);
void FUN_100e6400(void);
void __thiscall neon::frw::CResource::ReleaseFont(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ushort param_2,bool param_3);
void __thiscall neon::frw::CResource::ReleaseFont(CResource *this,HFONT__ *param_1);
bool __thiscall neon::frw::CResource::IsSurfaceExist(CResource *this,SurfaceDesc *param_1);
void __thiscall neon::frw::CResource::ReleaseSurface(CResource *this,SurfaceDesc *param_1,bool param_2);
void __thiscall neon::frw::CResource::ReleaseSurface(CResource *this,IDxSurface *param_1,bool param_2);
void __thiscall neon::visual::CFontInfo::~CFontInfo(CFontInfo *this);
void __cdecl FUN_100e6570(int param_1);
void __cdecl FUN_100e6590(int *param_1);
void __thiscall FUN_100e65b0(void *this,int *param_1);
void __cdecl FUN_100e6610(int param_1);
void __cdecl FUN_100e6630(int *param_1);
void __thiscall FUN_100e6650(void *this,int *param_1);
void __fastcall FUN_100e66b0(int *param_1);
void __fastcall FUN_100e6720(int *param_1);
void __cdecl FUN_100e6790(int param_1);
void __cdecl FUN_100e67b0(int *param_1);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
int * __thiscall FUN_100e6830(void *this,int param_1);
undefined1 * __cdecl FUN_100e6890(char *param_1,char *param_2,undefined1 *param_3,undefined *param_4);
void __cdecl neon::frw::CResource::Destroy(void);
bool __thiscall neon::frw::CResource::IsBmpExist(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,ulong param_4,ESurfaceMemType param_5);
HFONT__ * __thiscall neon::frw::CResource::GetFont(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ushort param_2,bool param_3,bool param_4);
void __thiscall FUN_100e6a70(void *this,int param_1);
void __thiscall FUN_100e6ac0(void *this,int param_1);
void __thiscall FUN_100e6b10(void *this,int param_1);
void __thiscall FUN_100e6b60(void *this,int *param_1);
void __fastcall FUN_100e6bc0(int *param_1);
void __fastcall FUN_100e6c30(int param_1);
void FUN_100e6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
void FUN_100e6cc0(void);
void FUN_100e6d00(void);
void FUN_100e6d40(void *param_1);
void FUN_100e6d80(void);
undefined4 * __thiscall FUN_100e6dc0(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@100e6e5d(void);
void __thiscall FUN_100e6e80(void *this,undefined4 param_1,int param_2,int *param_3);
void FUN_100e7140(void *param_1);
void FUN_100e7180(void *param_1);
undefined4 * __cdecl FUN_100e71c0(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4,undefined1 *param_5,undefined *param_6);
void __thiscall FUN_100e7230(void *this,int param_1);
void __thiscall FUN_100e72b0(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __fastcall FUN_100e7390(int *param_1);
void __cdecl FUN_100e73d0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
IDxSurface * __thiscall neon::frw::CResource::GetSurface(CResource *this,SurfaceDesc *param_1,int param_2);
void __thiscall neon::frw::CResource::ReleaseSurface(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ESurfaceMemType param_2,bool param_3);
IDxSurface * __thiscall neon::frw::CResource::Clone(CResource *this,IDxSurface *param_1);
void __fastcall FUN_100e7670(undefined4 *param_1);
void __thiscall FUN_100e7690(void *this,undefined4 param_1,int param_2,int *param_3);
void __thiscall FUN_100e7960(void *this,undefined4 param_1,int param_2,int *param_3);
void __thiscall std::_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::~_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(_Container_base_aux_alloc_real<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*this);
void __thiscall FUN_100e7c40(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void __thiscall FUN_100e7d20(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5);
IDxSurface * __thiscall neon::frw::CResource::GetBmp(CResource *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,int param_3,ulong param_4,ESurfaceMemType param_5,bool param_6,bool param_7,ulong param_8);
void __fastcall FUN_100e7f00(int *param_1);
undefined4 * __thiscall FUN_100e7f80(void *this,int param_1);
void Catch_All@100e8018(void);
void __fastcall thunk_FUN_100e7f00(int *param_1);
void __fastcall FUN_100e80c0(int *param_1);
undefined4 * __fastcall FUN_100e8140(undefined4 *param_1);
undefined4 * __fastcall FUN_100e81d0(undefined4 *param_1);
undefined4 * __fastcall FUN_100e8260(undefined4 *param_1);
void __fastcall FUN_100e82f0(undefined4 *param_1);
void __fastcall FUN_100e8300(undefined4 *param_1);
CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>* __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this);
bool __thiscall FUN_100e8390(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 * __thiscall FUN_100e8420(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 *FUN_100e8460(undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,undefined1 param_5);
void Catch_All@100e84f7(void);
bool __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction3(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction7(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this);
LPCRITICAL_SECTION __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction2(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,LPCRITICAL_SECTION param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction5(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction6(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::vfunction4(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,int *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::~CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this);
undefined * Catch_All@100e8cc1(void);
CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>* __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this);
bool __cdecl FUN_100e8dc0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void FUN_100e8e20(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100e8ec0(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_100e8f00(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 * __thiscall FUN_100e8f80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,undefined1 param_5);
int __fastcall FUN_100e8fe0(int *param_1);
void * FUN_100e9020(undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_4,undefined1 param_5);
void Catch_All@100e909d(void);
void __thiscall FUN_100e90c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
bool __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction3(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction7(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this);
void __thiscall FUN_100e93f0(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_100e9520(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
LPCRITICAL_SECTION __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction2(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,LPCRITICAL_SECTION param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction5(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction6(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::vfunction4(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,HGDIOBJ param_1,char param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::~CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this);
undefined * Catch_All@100e9c24(void);
CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>* __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this);
void __fastcall FUN_100e9d20(int *param_1);
void __thiscall FUN_100e9db0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction7(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this);
void __thiscall FUN_100ea040(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall FUN_100ea130(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
int __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction2(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction5(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction6(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::vfunction4(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this,int *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::~CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this);
undefined * Catch_All@100ea6b1(void);
CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>* __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this);
void __fastcall FUN_100ea7a0(int *param_1);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction7(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this);
int * __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction2(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int *param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction5(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction6(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::vfunction4(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this,HGDIOBJ param_1,char param_2);
void __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::~CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this);
undefined * Catch_All@100eadd4(void);
undefined4 * __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>::deleting_destructor(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CCriticalSection>*this,byte param_1);
undefined4 * __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>::deleting_destructor(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CCriticalSection>*this,byte param_1);
undefined4 * __thiscall eco::CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>::deleting_destructor(CFlyweightFactory<IDxSurface*,SurfaceDesc,neon::frw::BmpFromSDCreator,neon::frw::IDxSurfaceDeleter,neon::util::CEmptyLock>*this,byte param_1);
undefined4 * __thiscall eco::CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>::deleting_destructor(CFlyweightFactory<HFONT__*,neon::frw::CFontTrait,neon::frw::FontCreator,neon::frw::FontDeleter,neon::util::CEmptyLock>*this,byte param_1);
void __cdecl FUN_100eaed0(void *param_1,int param_2,int param_3);
void Catch_All@100eaf39(void);
void __fastcall FUN_100eaf70(int *param_1);
void __fastcall FUN_100eafa0(int param_1);
undefined4 ** __thiscall FUN_100eaff0(void *this,undefined4 *param_1);
void __fastcall FUN_100eb070(undefined4 *param_1);
void __thiscall FUN_100eb0d0(void *this,char *param_1,int param_2);
void Catch_All@100eb178(void);
void __thiscall neon::frw::CResource::~CResource(CResource *this);
void __thiscall neon::frw::CResource::Init(CResource *this,SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>*param_1);
undefined4 * __thiscall FUN_100eb280(void *this,char *param_1);
CResource * __thiscall neon::frw::CResource::deleting_destructor(CResource *this,byte param_1);
undefined4 * __thiscall neon::frw::CManagedPoolImpl<neon::util::CEmptyLock>::deleting_destructor(CManagedPoolImpl<neon::util::CEmptyLock> *this,byte param_1);
void __fastcall FUN_100eb3b0(int *param_1);
void __thiscall FUN_100eb440(void *this,undefined4 *param_1,uint *param_2);
void __cdecl FUN_100eb4d0(int param_1,int param_2,int param_3,int param_4,int *param_5);
void __thiscall FUN_100eb510(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 __thiscall neon::frw::CManagedPoolImpl<neon::util::CEmptyLock>::vfunction1(CManagedPoolImpl<neon::util::CEmptyLock> *this);
void __thiscall FUN_100eb8a0(void *this,int *param_1,uint *param_2);
int __thiscall FUN_100eb990(void *this,uint *param_1);
uint __thiscall neon::frw::CManagedPoolImpl<neon::util::CEmptyLock>::vfunction2(CManagedPoolImpl<neon::util::CEmptyLock> *this,uint param_1);
int __thiscall neon::frw::CManagedPoolImpl<neon::util::CEmptyLock>::vfunction3(CManagedPoolImpl<neon::util::CEmptyLock> *this,uint param_1);
undefined4 __thiscall neon::frw::CManagedPoolImpl<neon::util::CCriticalSection>::vfunction2(CManagedPoolImpl<neon::util::CCriticalSection> *this,uint param_1);
undefined4 __thiscall neon::frw::CManagedPoolImpl<neon::util::CCriticalSection>::vfunction3(CManagedPoolImpl<neon::util::CCriticalSection> *this,uint param_1);
undefined4 * __thiscall neon::frw::CManagedPoolImpl<neon::util::CCriticalSection>::deleting_destructor(CManagedPoolImpl<neon::util::CCriticalSection> *this,byte param_1);
undefined4 * FUN_100ebc70(void);
undefined4 __cdecl FUN_100ebd00(char param_1);
CResourceImpl * __thiscall neon::frw::CResourceImpl::CResourceImpl(CResourceImpl *this,char param_1);
undefined4 * __thiscall neon::frw::CResourceImpl::deleting_destructor(CResourceImpl *this,byte param_1);
CResource * __thiscall neon::frw::CResource::CResource(CResource *this,bool param_1);
CResource * __cdecl neon::frw::CResource::Instance(bool param_1);
CResource * __cdecl neon::frw::CResource::Instance(void);
CResource * __cdecl neon::frw::SResource::Instance(void);
CResource * __cdecl neon::frw::Resource(bool param_1);
undefined4 FUN_100ec110(undefined4 param_1,int param_2);
void __thiscall Loki::Internal::RefLinkedBase::RefLinkedBase(RefLinkedBase *this);
RefLinkedBase * __thiscall Loki::Internal::RefLinkedBase::operator=(RefLinkedBase *this,RefLinkedBase *param_1);
void __thiscall eco::CMsgDispatch::UnregisterAll(CMsgDispatch *this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall neon::frw::CObject::GetName(CObject *this);
uint __thiscall neon::frw::CObject::GetType(CObject *this);
void __thiscall neon::frw::CObject::SetType(CObject *this,uint param_1);
void __thiscall neon::frw::CObject::UnregisterAllHandler(CObject *this);
void __thiscall neon::frw::CResource::`default_constructor_closure'(CResource *this);
SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex>* __thiscall IDxDevice::IDxDevice(IDxDevice *this,SingletonHolder<class_Loki::AllocatorSingleton<class_Loki::ClassLevelLockable,4096,256,4,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::Mutex>,struct_Loki::CreateStatic,struct_Loki::LongevityLifetime::DieAsSmallObjectParent,class_Loki::ClassLevelLockable,class_Loki::Mutex>*param_1);
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
HWND__ * __thiscall neon::render::CDDDisplay::GetHWnd(CDDDisplay *this);
tagRECT * __thiscall neon::render::CDDDisplay::GetWindowRect(CDDDisplay *this,tagRECT *__return_storage_ptr__);
void __thiscall neon::frw::CApp::SetUpperBarSize(CApp *this,int param_1);
float __thiscall neon::frw::CApp::GetTickSec(CApp *this);
float __thiscall neon::frw::CApp::GetTime(CApp *this);
void __thiscall neon::frw::CApp::RenderStop(CApp *this);
void __thiscall neon::frw::CApp::RenderStart(CApp *this);
uint __thiscall Loki::SmallObjAllocator::GetAlignment(SmallObjAllocator *this);
void __thiscall neon::frw::CApp::SetDeviceError(CApp *this,int param_1);
int __thiscall neon::frw::CApp::GetDeviceError(CApp *this);
ushort __thiscall neon::visual::CTile::GetTileIndex(CTile *this);
ushort __thiscall neon::visual::CTile::GetTileNumX(CTile *this);
ushort __thiscall neon::visual::CTile::GetTileNumY(CTile *this);
int __thiscall neon::visual::CSprite::GetAniNumber(CSprite *this);
bool __thiscall neon::visual::CSprite::IsPlay(CSprite *this);
TileSet * __thiscall neon::visual::CSprite::TileSet::operator=(TileSet *this,TileSet *param_1);
void __thiscall FUN_100ec4b0(void *this,undefined4 param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6);
void Catch_All@100ec58b(void);
void __thiscall FUN_100ec600(void *this,int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4);
undefined4 * __thiscall FUN_100ec660(void *this,undefined4 *param_1);
void Catch_All@100ec6fd(void);
undefined4 * __thiscall FUN_100ec710(void *this,int param_1);
void Catch_All@100ec7a8(void);
CDDDisplay * __thiscall neon::render::CDDDisplay::CDDDisplay(CDDDisplay *this,CDDDisplay *param_1);
CDDDisplay * __thiscall neon::render::CDDDisplay::operator=(CDDDisplay *this,CDDDisplay *param_1);
CFileManager * __thiscall neon::frw::CFileManager::CFileManager(CFileManager *this,CFileManager *param_1);
CFileManager * __thiscall neon::frw::CFileManager::operator=(CFileManager *this,CFileManager *param_1);
void __thiscall eco::CMsgDispatch::Release(CMsgDispatch *this);
undefined4 * __fastcall FUN_100ecb40(undefined4 *param_1);
CMsgDispatch * __thiscall eco::CMsgDispatch::CMsgDispatch(CMsgDispatch *this);
void __thiscall eco::CMsgDispatch::~CMsgDispatch(CMsgDispatch *this);
undefined * Catch_All@100ecc48(void);
void FUN_100ecc51(void);
void __cdecl Loki::Internal::AtExitFn(void);
int __fastcall FUN_100ecd50(int param_1);
uint __fastcall FUN_100ecd90(int *param_1);
int * __fastcall FUN_100ecdd0(int *param_1);
void __thiscall std::out_of_range::out_of_range(out_of_range *this);
void __cdecl FUN_100ece70(undefined4 *param_1,undefined4 *param_2);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1);
undefined4 __thiscall FUN_100ecf00(void *this,int param_1,byte param_2);
void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(size_t param_1,char param_2);
void __cdecl FUN_100ecfa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_100ecfd0(int param_1);
void __cdecl FUN_100ecff0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_100ed020(undefined4 *param_1,int param_2,undefined4 *param_3);
bool __thiscall FUN_100ed050(void *this,byte param_1,int param_2,byte param_3);
uint __fastcall FUN_100ed160(int *param_1);
int __cdecl FUN_100ed1d0(int param_1,int param_2,int param_3);
undefined4 __fastcall FUN_100ed210(int *param_1);
uint * __thiscall FUN_100ed3d0(void *this,uint param_1);
uint * __thiscall FUN_100ed470(void *this,uint param_1);
bool __thiscall Loki::SmallObjAllocator::IsCorrupt(SmallObjAllocator *this);
void __fastcall FUN_100ed5b0(int param_1);
void FUN_100ed5e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_100ed610(void *this,int param_1);
void Catch_All@100ed6f4(void);
void __thiscall FUN_100ed710(void *this,char *param_1);
void Catch_All@100ed7f6(void);
void __thiscall FUN_100ed810(void *this,char *param_1,undefined4 *param_2);
void Catch_All@100ed8b3(void);
void __fastcall FUN_100ed8d0(int param_1);
uint __fastcall FUN_100ed980(int param_1);
void __thiscall FUN_100eda30(void *this,undefined1 *param_1);
void __thiscall Loki::SmallObjAllocator::~SmallObjAllocator(SmallObjAllocator *this);
undefined4 * __thiscall FUN_100edb00(void *this,char *param_1);
void __thiscall FUN_100edb70(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * __fastcall FUN_100edc30(undefined4 *param_1);
SmallObjAllocator * __thiscall Loki::SmallObjAllocator::SmallObjAllocator(SmallObjAllocator *this,uint param_1,uint param_2,uint param_3);
void __thiscall Loki::SmallObjAllocator::Deallocate(SmallObjAllocator *this,void *param_1,uint param_2);
void __thiscall Loki::SmallObjAllocator::Deallocate(SmallObjAllocator *this,void *param_1);
void __thiscall FUN_100ede30(void *this,undefined4 *param_1);
void __thiscall FUN_100edeb0(void *this,int *param_1);
uint __fastcall FUN_100edf40(int param_1);
uint __fastcall FUN_100ee000(int *param_1);
undefined4 Catch_All@100ee0a3(void);
undefined1 * __fastcall FUN_100ee100(int *param_1);
bool __thiscall Loki::SmallObjAllocator::TrimExcessMemory(SmallObjAllocator *this);
void * __thiscall Loki::SmallObjAllocator::Allocate(SmallObjAllocator *this,uint param_1,bool param_2);
void __thiscall Loki::Internal::RefLinkedBase::RefLinkedBase(RefLinkedBase *this,RefLinkedBase *param_1);
bool __thiscall Loki::Internal::RefLinkedBase::Release(RefLinkedBase *this);
uint __cdecl Loki::Internal::RefLinkedBase::CountPrevCycle(RefLinkedBase *param_1);
uint __cdecl Loki::Internal::RefLinkedBase::CountNextCycle(RefLinkedBase *param_1);
bool __thiscall Loki::Internal::RefLinkedBase::HasPrevNode(RefLinkedBase *this,RefLinkedBase *param_1);
bool __thiscall Loki::Internal::RefLinkedBase::HasNextNode(RefLinkedBase *this,RefLinkedBase *param_1);
bool __thiscall Loki::Internal::RefLinkedBase::Merge(RefLinkedBase *this,RefLinkedBase *param_1);
void __cdecl FUN_100ee4a0(undefined4 *param_1,undefined4 *param_2);
void __thiscall Loki::Internal::RefLinkedBase::Swap(RefLinkedBase *this,RefLinkedBase *param_1);
HDC__ * __thiscall neon::render::CRLESurface::neon::render::CRLESurface::GetDC(void);
void __cdecl FUN_100ee7f0(HWND param_1);
undefined4 __cdecl FUN_100ee830(HWND param_1);
undefined4 __cdecl FUN_100ee9c0(HWND param_1);
undefined4 __cdecl FUN_100eeac0(HWND param_1);
void __cdecl FUN_100eec40(HWND param_1);
void __cdecl FUN_100eed60(HWND param_1);
void __cdecl FUN_100eed80(HWND param_1);
long __thiscall DXAvatar::CDxAvtr2004::DXAvatar::CDxAvtr2004::Restore(CDxAvtr2004 *this);
int __thiscall FUN_100eee30(void *this,uint param_1);
void __cdecl FUN_100eee60(char *param_1,char *param_2,char param_3);
void __thiscall DXAvatar::CDxAvtr2004::DrawOneImage(CDxAvtr2004 *this,CDxAvtrPart *param_1,int param_2);
undefined4 Catch_All@100eef4c(void);
void __thiscall FUN_100eef60(void *this,int *param_1,int param_2);
int __thiscall DXAvatar::CDxAvtr2004::Draw(CDxAvtr2004 *this);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this);
void __thiscall DXAvatar::CDxAvtr2004::Destroy(CDxAvtr2004 *this);
void __thiscall FUN_100ef220(void *this,uint param_1,undefined4 param_2);
void __thiscall DXAvatar::CDxAvtr2004::~CDxAvtr2004(CDxAvtr2004 *this);
int __thiscall DXAvatar::CDxAvtr2004::Create(CDxAvtr2004 *this,CAvtrId *param_1,int param_2,int param_3,int param_4);
int __thiscall DXAvatar::CDxAvtr2004::Create(CDxAvtr2004 *this,char *param_1,int param_2,int param_3,int param_4);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall DXAvatar::CAvtrPartPool::GetPrePath(CAvtrPartPool *this,bool param_1);
void __thiscall DXAvatar::CAvtrPartPool::SetPrePath(CAvtrPartPool *this,char *param_1);
CAvtrPartPool * __thiscall DXAvatar::CAvtrPartPool::deleting_destructor(CAvtrPartPool *this,byte param_1);
void __thiscall DXAvatar::CAvtrTickHandler::SetDelay(CAvtrTickHandler *this,int param_1,ulong param_2);
void __thiscall DXAvatar::CAvtrTickHandler::FrameMove(CAvtrTickHandler *this,int param_1,CAvtrPart *param_2);
ulong __thiscall DXAvatar::CAvtrTickHandler::getNowFrameNo(CAvtrTickHandler *this,int param_1);
long __thiscall DXAvatar::CAvtr2004dx::DXAvatar::CAvtr2004dx::Restore(CAvtr2004dx *this);
void __thiscall DXAvatar::CAvtr2004dx::DrawOneImage(CAvtr2004dx *this,tagRECT *param_1,tagRECT *param_2,CAvtrPart *param_3,int param_4);
undefined4 Catch_All@100efb80(void);
int __thiscall DXAvatar::CAvtr2004dx::Draw(CAvtr2004dx *this);
undefined4 * __thiscall FUN_100efe70(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@100eff0d(void);
void __thiscall DXAvatar::CAvtrTickHandler::clear(CAvtrTickHandler *this);
void __thiscall FUN_100effe0(void *this,int param_1);
CAvtrId * __thiscall DXAvatar::CAvtrId::CAvtrId(CAvtrId *this);
void __thiscall DXAvatar::CAvtr2004dx::Destroy(CAvtr2004dx *this);
void __thiscall DXAvatar::CAvtr2004dx::~CAvtr2004dx(CAvtr2004dx *this);
void __thiscall DXAvatar::CAvtrTickHandler::SetSize(CAvtrTickHandler *this,int param_1);
int __thiscall DXAvatar::CAvtr2004dx::Create(CAvtr2004dx *this,CAvtrId *param_1,int param_2,int param_3,int param_4);
CAvtrPartPool * __thiscall DXAvatar::CAvtrPartPool::CAvtrPartPool(CAvtrPartPool *this,CAvtrPartPool *param_1);
int __thiscall DXAvatar::CAvtr2004dx::Create(CAvtr2004dx *this,char *param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_100f07e0(int *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100f0800(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall FUN_100f08c0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined1 *FUN_100f09f0(char *param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>*param_2);
void FUN_100f0ae0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void FUN_100f0f50(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100f1030(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __fastcall FUN_100f1170(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_100f1240(int param_1);
void __cdecl FUN_100f1310(char *param_1,char *param_2,char param_3);
void __thiscall FUN_100f1330(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __cdecl FUN_100f1510(LPBYTE param_1);
void FUN_100f1630(char *param_1);
bool __fastcall FUN_100f16e0(int param_1);
bool __thiscall FUN_100f17c0(void *this,int *param_1);
bool __thiscall DXAvatar::CAvtrId::Add(CAvtrId *this,char *param_1,bool param_2,char *param_3);
undefined * Catch_All@100f1b95(void);
void FUN_100f1b9d(void);
void __thiscall DXAvatar::CAvtrId::Set(CAvtrId *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,bool param_2);
void __thiscall DXAvatar::CAvtrId::Set(CAvtrId *this,char **param_1,bool param_2);
void __fastcall FUN_100f1c10(int *param_1);
void __fastcall FUN_100f1d20(undefined4 *param_1);
CAvtrPartPool * __cdecl DXAvatar::CAvtrPartPool::Inst(void);
int __thiscall FUN_100f1d50(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __fastcall FUN_100f1e10(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100f1e80(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void FUN_100f1f00(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void __fastcall FUN_100f1f70(int param_1);
int * __fastcall FUN_100f1fe0(int *param_1);
int * __fastcall FUN_100f2020(int *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl FUN_100f2060(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __fastcall FUN_100f20e0(int param_1);
undefined4 __thiscall FUN_100f2120(void *this,char *param_1);
undefined1 __cdecl FUN_100f2170(int *param_1,int param_2,int *param_3,int param_4,undefined1 param_5);
CAvtrPart * __thiscall DXAvatar::CAvtrPartPool::Get(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall DXAvatar::CAvtrPartPool::Add(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __thiscall FUN_100f2340(void *this,undefined1 *param_1,char *param_2);
long __thiscall DXAvatar::CAvtrPartPool::DXAvatar::CAvtrPartPool::Restore(CAvtrPartPool *this);
void __fastcall FUN_100f2490(undefined4 *param_1);
void __fastcall FUN_100f2580(undefined4 *param_1);
undefined1 __cdecl FUN_100f25d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5);
undefined4 * __thiscall FUN_100f2610(void *this,undefined4 *param_1);
undefined4 * __fastcall FUN_100f2700(undefined4 *param_1);
int __cdecl DXAvatar::CAvtrPartPool::DestroyInstance(void);
void __thiscall DXAvatar::CAvtrPartPool::~CAvtrPartPool(CAvtrPartPool *this);
void __thiscall DXAvatar::CAvtrPartPool::FileLoad(CAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __fastcall FUN_100f2a10(undefined1 *param_1);
CAvtrPartPool * __thiscall DXAvatar::CAvtrPartPool::CAvtrPartPool(CAvtrPartPool *this);
void __thiscall DXAvatar::CAvtrPartPool::FileLoad(CAvtrPartPool *this,CAvtrId *param_1);
void __thiscall FUN_100f3000(void *this,int *param_1);
void __thiscall DXAvatar::CAvtrPartPool::RequestLoad(CAvtrPartPool *this,CAvtrId *param_1);
void * __cdecl FUN_100f33e0(void *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_6);
void __fastcall FUN_100f3490(int param_1);
undefined1 * Catch_All@100f35ce(void);
void __fastcall FUN_100f35e0(undefined4 *param_1);
undefined4 * __fastcall FUN_100f3660(undefined4 *param_1);
int __cdecl DXAvatar::CAvtrPartPool::CreateInstance(IDirectDraw4 *param_1,ulong param_2,bool param_3,bool param_4);
CDxAvtrPartPool * __cdecl DXAvatar::CDxAvtrPartPool::Inst(void);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall FUN_100f3a20(void *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3);
void * __cdecl FUN_100f3aa0(void *param_1,int param_2,int param_3);
void __thiscall FUN_100f3ad0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
void __thiscall FUN_100f3cc0(void *this,int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
CDxAvtrPart * __thiscall DXAvatar::CDxAvtrPartPool::Get(CDxAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_100f3e30(void *this,undefined1 *param_1,char *param_2);
undefined4 * __thiscall FUN_100f3f10(void *this,undefined4 *param_1,undefined4 param_2,void *param_3);
void __thiscall FUN_100f3f70(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
void __thiscall DXAvatar::CDxAvtrPart::~CDxAvtrPart(CDxAvtrPart *this);
void __thiscall FUN_100f4260(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_100f4320(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void __thiscall DXAvatar::CDxAvtrPartPool::Add(CDxAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2);
void __fastcall FUN_100f4440(undefined4 *param_1);
void __thiscall FUN_100f4620(void *this,undefined4 *param_1);
undefined1 __cdecl FUN_100f4690(int *param_1,int param_2,int *param_3,int param_4,undefined1 param_5);
void __thiscall DXAvatar::CDxAvtrPartPool::~CDxAvtrPartPool(CDxAvtrPartPool *this);
long __thiscall DXAvatar::CDxAvtrPartPool::DXAvatar::CDxAvtrPartPool::Restore(CDxAvtrPartPool *this);
void __thiscall DXAvatar::CDxAvtrPartPool::CreateAvatarPartSurfaces(CDxAvtrPartPool *this);
void __thiscall DXAvatar::CDxAvtrPartPool::FileLoad(CDxAvtrPartPool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __fastcall FUN_100f4d30(undefined1 *param_1);
int __cdecl DXAvatar::CDxAvtrPartPool::DestroyInstance(void);
CDxAvtrPartPool * __thiscall DXAvatar::CDxAvtrPartPool::CDxAvtrPartPool(CDxAvtrPartPool *this);
void __thiscall DXAvatar::CDxAvtrPartPool::FileLoad(CDxAvtrPartPool *this,CAvtrId *param_1);
void __thiscall FUN_100f53a0(void *this,int *param_1);
void __thiscall DXAvatar::CDxAvtrPartPool::RequestLoad(CDxAvtrPartPool *this,CAvtrId *param_1);
void __fastcall FUN_100f5780(int param_1);
undefined4 Catch_All@100f584b(void);
void __fastcall FUN_100f5860(int param_1);
undefined4 * __fastcall FUN_100f58d0(undefined4 *param_1);
int __cdecl DXAvatar::CDxAvtrPartPool::CreateInstance(bool param_1,bool param_2);
int __cdecl DXAvatar::CDxAvtrPartPool::CreateInstance(ulong param_1,bool param_2,bool param_3);
void __thiscall FUN_100f5cb0(void *this,undefined1 *param_1);
void __thiscall FUN_100f5de0(void *this,undefined1 param_1);
undefined4 __fastcall FUN_100f5e90(int param_1);
ushort __fastcall FUN_100f5f00(int param_1);
undefined4 __thiscall FUN_100f5fe0(void *this,int param_1);
CHgAniSurfaceList * __thiscall DXAvatar::CHgAniSurfaceList::CHgAniSurfaceList(CHgAniSurfaceList *this);
undefined4 * FUN_100f6370(undefined4 *param_1,int param_2,undefined4 *param_3);
void __thiscall DXAvatar::CHgAniSurfaceList::~CHgAniSurfaceList(CHgAniSurfaceList *this);
undefined4 * __thiscall DXAvatar::CHgAniSurfaceList::deleting_destructor(CHgAniSurfaceList *this,byte param_1);
undefined4 __fastcall FUN_100f6ac0(void *param_1);
undefined4 __fastcall FUN_100f6e30(void *param_1);
void __thiscall FUN_100f6ea0(void *this,undefined4 param_1,LPCSTR param_2,undefined1 param_3,undefined4 param_4);
void __cdecl FUN_100f7100(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,byte param_10);
void __thiscall FUN_100f71d0(void *this,LPCSTR param_1,undefined1 param_2,undefined4 param_3);
void __thiscall FUN_100f7410(void *this,undefined1 *param_1);
void __thiscall FUN_100f7540(void *this,undefined1 param_1);
undefined4 __fastcall FUN_100f75f0(int param_1);
ushort __fastcall FUN_100f7660(int param_1);
undefined4 __thiscall FUN_100f7740(void *this,int param_1);
void __cdecl FUN_100f79b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
CHgDxAniSurfaceList * __thiscall DXAvatar::CHgDxAniSurfaceList::CHgDxAniSurfaceList(CHgDxAniSurfaceList *this);
void __thiscall DXAvatar::CHgDxAniSurfaceList::~CHgDxAniSurfaceList(CHgDxAniSurfaceList *this);
undefined4 * __thiscall DXAvatar::CHgDxAniSurfaceList::deleting_destructor(CHgDxAniSurfaceList *this,byte param_1);
undefined4 __fastcall FUN_100f8350(void *param_1);
undefined4 __fastcall FUN_100f8680(void *param_1);
void __cdecl FUN_100f86db(uint param_1);
void __cdecl operator_delete(void *param_1);
type_info * __thiscall type_info::vfunction1(type_info *this,byte param_1);
char * __thiscall std::exception::std::exception::what(exception *this);
void __RTDynamicCast(void);
void __fastcall __security_check_cookie(int param_1);
void * __cdecl operator_new(uint param_1);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __cdecl purecall(void);
ulonglong __fastcall FUN_100f8780(undefined4 param_1,undefined4 param_2);
ulonglong FUN_100f87b6(void);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_100f88c7(void);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl operator_delete[](void *param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_100f8997(void);
void __RTtypeid(void);
double __cdecl floor(double _X);
void `eh_vector_constructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,_func_void_void_ptr *param_5);
void FUN_100f8a09(void);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void _CIcos(void);
void _CIsin(void);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void _CIatan2(void);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
void __alloca_probe(void);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,int *param_3);
void FUN_100f8e9b(void);
void entry(int *param_1,int *param_2,int *param_3);
void __cdecl ___report_gsfailure(void);
undefined4 FUN_100f8fcf(void);
undefined4 __get_sse2_info(void);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_100f90f9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
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
void DirectDrawCreate(void);
BOOL ImmReleaseContext(HWND param_1,HIMC param_2);
BOOL ImmGetConversionStatus(HIMC param_1,LPDWORD lpfdwConversion,LPDWORD lpfdwSentence);
HIMC ImmGetContext(HWND param_1);
uint thunk_FUN_101d32db(HIMC param_1,DWORD param_2,LPSTR param_3,uint param_4);
uint FUN_100f93b2(void);
undefined4 FUN_100f93e9(void);
uint FUN_100f943d(int param_1);
uint FUN_100f94c9(int param_1);
int FUN_100f9527(undefined4 param_1);
uint FUN_100f9553(int param_1);
void FUN_100f959d(void);
void FUN_100f9757(void);
float10 FUN_100f97f3(void);
int FUN_100f97fa(void);
undefined4 FUN_100f981e(void);
undefined4 FUN_100f9839(void);
undefined * FUN_100f9861(int param_1);
undefined4 FUN_100f98b3(void);
int FUN_100f98d1(void);
undefined4 FUN_100f9927(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 FUN_100f9986(void);
uint FUN_100f998c(int param_1,int param_2,uint param_3);
uint __cdecl FUN_100f9fcd(int param_1);
void __cdecl FUN_100fa05c(int param_1,uint param_2);
int * __cdecl FUN_100fa09c(int param_1,uint param_2,char *param_3);
undefined4 * __cdecl FUN_100fa136(int param_1,int param_2);
int __cdecl FUN_100fa157(int param_1,uint param_2,int param_3);
int __cdecl FUN_100fa1af(int param_1,uint param_2,int param_3);
void __cdecl FUN_100fa212(uint param_1,int param_2,uint param_3,int param_4);
void __cdecl FUN_100fa510(int param_1,uint param_2,uint param_3);
void __cdecl FUN_100fa5bd(size_t param_1);
int * __cdecl FUN_100fa6f8(int *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7);
uint __cdecl FUN_100fa9c0(int param_1,char param_2);
void FUN_100fab19(int param_1);
bool FUN_100fab29(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_100fab6f(int param_1);
undefined8 __cdecl FUN_100fac25(int param_1,char param_2,uint *param_3);
int FUN_100fad60(int param_1);
undefined4 FUN_100fae49(int param_1);
bool FUN_100fae85(int *param_1);
bool FUN_100faee0(int param_1);
void __cdecl FUN_100faf18(int param_1);
void FUN_100faf44(void);
undefined4 FUN_100fb040(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_100fb1c1(size_t param_1);
void __cdecl FUN_100fb348(int param_1);
uint FUN_100fb596(int *param_1);
uint __thiscall FUN_100fb7b8(void *this,uint param_1,uint param_2,char param_3,char param_4);
void __thiscall FUN_100fb8ae(void *this,uint param_1,uint param_2);
undefined4 __cdecl FUN_100fb8c5(uint param_1,int param_2,char param_3,char param_4);
undefined4 FUN_100fbf0b(void);
undefined4 FUN_100fc03f(uint param_1,ushort *param_2,size_t param_3);
int * __cdecl FUN_100fc4da(int *param_1,char *param_2,uint param_3,int param_4,int param_5,char param_6);
int * FUN_100fd35a(char *param_1,uint param_2,int param_3,int param_4);
int FUN_100fd48e(uint param_1,void *param_2,int *param_3,undefined4 param_4);
void FUN_100fd691(int *param_1);
undefined4 __cdecl FUN_100fd7f3(uint *param_1,uint *param_2,size_t param_3,uint param_4,uint param_5,int param_6);
undefined1 __cdecl FUN_100fda95(size_t param_1,uint *param_2,undefined4 param_3,int param_4,uint param_5);
undefined1 FUN_100fdbc1(size_t param_1,uint *param_2,uint param_3);
uint FUN_100fdc6c(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7);
undefined4 FUN_100fdd09(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
uint FUN_100fdd52(int param_1,float param_2,float param_3);
uint FUN_100fddd8(int param_1,undefined4 *param_2,undefined4 *param_3);
bool FUN_100fde2c(int param_1,undefined4 param_2);
void __cdecl FUN_100fde68(int param_1);
uint FUN_100fe0e7(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
undefined4 FUN_100fe18f(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8);
void _Dns_StartDebug@20(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
int * __cdecl FUN_100fe24d(int param_1,uint param_2);
int * __cdecl FUN_100fe515(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
uint FUN_100fe5cb(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7);
undefined4 FUN_100fe65b(int param_1,uint param_2);
uint FUN_100fe6f2(int param_1,int param_2,int param_3);
int * __cdecl FUN_100fe76f(int param_1,uint *param_2,undefined1 *param_3,int param_4,int param_5,int param_6);
void FUN_100fed0b(int param_1,uint *param_2,undefined1 *param_3,int param_4,int param_5);
undefined4 __cdecl FUN_100fed2b(uint param_1);
int __cdecl FUN_100fed89(uint param_1);
undefined1 FUN_100fedfb(uint param_1);
undefined1 FUN_100feea6(uint param_1,int param_2);
undefined4 FUN_100fef43(uint param_1);
undefined1 FUN_100fef8e(uint param_1);
undefined1 __cdecl FUN_100ff093(uint param_1,int param_2);
undefined1 FUN_100ff156(uint param_1,char param_2);
uint FUN_100ff1d8(uint param_1);
undefined1 FUN_100ff228(uint param_1,undefined4 param_2);
uint FUN_100ff2c6(uint param_1);
undefined1 FUN_100ff30d(uint param_1,undefined4 param_2);
undefined1 FUN_100ff385(uint param_1,char param_2);
undefined1 FUN_100ff407(uint param_1,uint param_2);
undefined4 FUN_100ff4a2(uint param_1);
undefined4 FUN_100ff4e8(uint param_1);
uint FUN_100ff529(uint param_1);
undefined1 FUN_100ff56f(uint param_1,uint param_2);
uint FUN_100ff666(uint param_1,int param_2);
undefined1 FUN_100ff73c(uint param_1,uint param_2);
int __cdecl FUN_100ff7e8(uint param_1,uint *param_2,int param_3,int param_4,uint param_5,char param_6);
uint __cdecl FUN_100ffbcc(uint *param_1,int param_2,int param_3,int *param_4,undefined4 param_5);
void FUN_100ffe82(uint param_1,int param_2,int *param_3,undefined4 param_4);
void FUN_100fff09(uint param_1,int param_2);
void FUN_100fff94(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined1 FUN_101000d5(uint param_1,float *param_2,float *param_3);
float10 __cdecl FUN_1010024a(int param_1);
void FUN_101002c2(void);
uint __cdecl FUN_10100343(DWORD param_1);
uint __cdecl FUN_1010047e(size_t param_1);
undefined4 __cdecl FUN_101005b2(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,int *param_7);
undefined4 __cdecl FUN_1010068c(int param_1);
void FUN_101007f6(void);
uint __cdecl FUN_10100871(int param_1,uint param_2,DWORD param_3);
uint FUN_1010088b(void);
uint __cdecl FUN_10100b95(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void FUN_10100c81(void);
undefined1 FUN_10100e3c(void);
undefined1 __cdecl FUN_10101206(void *param_1);
uint __cdecl FUN_1010152c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
uint __cdecl FUN_101015d2(int param_1,byte *param_2,byte *param_3,int param_4,int param_5);
undefined1 __cdecl FUN_10101649(undefined4 param_1,int param_2,int param_3);
undefined4 __cdecl FUN_1010172a(int param_1);
undefined1 __cdecl FUN_101017c2(int param_1,int param_2);
uint __cdecl FUN_10101905(int param_1,int param_2);
uint __cdecl FUN_1010197b(int param_1,int param_2);
uint __cdecl FUN_101019d1(uint param_1);
uint __cdecl FUN_10101a32(int param_1);
void FUN_10101aaa(void);
undefined1 __cdecl FUN_10101cac(int param_1);
int __cdecl FUN_10101dc2(undefined4 *param_1,undefined1 param_2);
bool __cdecl FUN_1010219b(int param_1,int param_2,undefined4 param_3);
void __thiscall FUN_1010221a(void *this,int param_1);
void __fastcall FUN_10102296(undefined4 param_1);
void FUN_1010230d(void);
undefined1 __cdecl FUN_101024ad(uint param_1,char param_2);
void __cdecl FUN_101025e3(uint *param_1,int param_2);
undefined4 __cdecl FUN_101027e8(undefined4 param_1,int param_2);
uint FUN_10102bd3(void);
uint FUN_10102dc1(void);
undefined4 __cdecl FUN_10102e5f(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,int *param_7);
void __cdecl FUN_10102f0a(int param_1);
void FUN_10102f58(void);
void FUN_10103218(void);
undefined FUN_1010338e(void);
undefined4 __cdecl FUN_1010357a(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6);
void __cdecl FUN_1010359a(int param_1);
void __cdecl FUN_101035ce(int param_1);
DWORD GetCurrentThreadId(void);
HANDLE __cdecl FUN_101036bf(undefined4 param_1,LPTHREAD_START_ROUTINE param_2,LPVOID param_3,int param_4);
void __cdecl FUN_1010370c(undefined4 param_1,LPTHREAD_START_ROUTINE param_2,LPVOID param_3,int param_4);
void __cdecl FUN_1010372a(HANDLE param_1);
LPCRITICAL_SECTION FUN_10103740(void);
void __cdecl FUN_10103776(LPCRITICAL_SECTION param_1);
void __cdecl FUN_1010379d(LPCRITICAL_SECTION param_1);
void __cdecl FUN_101037af(LPCRITICAL_SECTION param_1);
HANDLE FUN_101037c1(void);
void __cdecl FUN_101037dc(HANDLE param_1);
void __cdecl FUN_101037ee(HANDLE param_1);
void __cdecl FUN_10103802(HANDLE param_1);
undefined4 FUN_10103814(void);
int * __cdecl FUN_10103844(char *param_1,char param_2,int param_3);
void FUN_101039f9(void);
size_t __cdecl FUN_10103a64(void *param_1,int param_2,int param_3,uint *param_4);
uint __cdecl FUN_10103cb6(uint *param_1,uint param_2,undefined4 param_3);
uint __cdecl FUN_10103e23(uint *param_1);
void __cdecl FUN_10103e71(int param_1);
void __cdecl FUN_10103e88(int param_1,undefined4 param_2);
void __cdecl FUN_10103e98(int param_1,undefined4 param_2);
void __cdecl FUN_10103ea8(uint *param_1);
size_t __cdecl FUN_10103f21(void *param_1,int param_2,int param_3,uint *param_4);
undefined1 __cdecl FUN_10103fee(uint *param_1);
undefined2 __cdecl FUN_10104013(uint *param_1);
uint __cdecl FUN_1010403a(uint *param_1,uint param_2,undefined4 param_3);
void FUN_10104119(size_t param_1);
void FUN_10104127(void *param_1,size_t param_2);
void FUN_1010413a(void *param_1);
void __cdecl FUN_10104148(int *param_1,int param_2,int param_3,size_t param_4);
int * __cdecl FUN_10104164(int *param_1,int param_2);
void __cdecl FUN_10104265(int *param_1,int *param_2);
int * __cdecl FUN_101042bd(int *param_1,size_t param_2);
int * __cdecl FUN_10104307(int *param_1,int *param_2,int param_3);
void __cdecl FUN_101044e2(void *param_1);
bool FUN_10104628(void);
uint FUN_10104720(void);
void FUN_101047d8(void);
uint __cdecl FUN_10104852(int param_1);
uint __cdecl FUN_101048b7(int param_1);
uint __cdecl FUN_10104a5c(int param_1,char *param_2,uint *param_3);
int FUN_10104d0a(undefined4 param_1,int param_2,int param_3);
undefined4 FUN_10104d33(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_10104d76(undefined4 param_1,int param_2,int param_3);
undefined4 FUN_1010503a(undefined4 param_1,undefined4 param_2,uint param_3);
void __cdecl FUN_101050b5(int param_1,undefined4 param_2);
undefined4 FUN_10105215(void);
void FUN_1010524f(void);
uint __cdecl FUN_10105395(int param_1);
uint __cdecl FUN_101054f4(size_t param_1,int param_2,size_t param_3,int *param_4,undefined4 *param_5,size_t *param_6,int *param_7);
undefined4 __cdecl FUN_1010571f(int param_1,undefined2 *param_2,undefined2 *param_3,uint param_4,uint param_5);
undefined4 __cdecl FUN_10105979(int param_1);
undefined4 __cdecl FUN_101059d8(int param_1,int *param_2,int param_3);
undefined4 __cdecl FUN_10105b32(int param_1);
undefined4 __cdecl FUN_10105bcc(int param_1,float param_2);
undefined4 __cdecl FUN_10105cda(int param_1,int param_2);
undefined4 __cdecl FUN_10105d4b(int param_1,int param_2);
undefined4 __cdecl FUN_10105dbd(int param_1,uint param_2);
void __cdecl FUN_10105df9(int param_1,int *param_2,int *param_3);
undefined4 __cdecl FUN_1010639e(int param_1,float *param_2,float *param_3);
uint __fastcall FUN_10106531(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_10106880(int param_1);
void __cdecl FUN_101068ad(undefined4 *param_1);
int __thiscall FUN_10106963(void *this,byte param_1,byte param_2);
char * __cdecl FUN_10106986(int param_1,int *param_2);
uint FUN_101069b8(void);
void __cdecl FUN_10106a24(char param_1);
int FUN_10106aba(void);
undefined1 __cdecl FUN_10106b24(uint param_1,uint *param_2);
uint FUN_10106c51(void);
void __cdecl FUN_10106c69(int param_1);
int __cdecl FUN_10106cd4(int param_1,int param_2,int param_3);
void __cdecl FUN_10106d0c(int param_1);
bool __cdecl FUN_10106d1d(undefined1 param_1,undefined1 param_2);
char __cdecl FUN_10106d5a(int param_1);
char __cdecl FUN_10106d98(int param_1,byte param_2,void *param_3,size_t param_4,undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9);
char __cdecl FUN_10106e90(int param_1,byte param_2,void *param_3,size_t param_4,undefined4 param_5,undefined4 param_6);
uint __cdecl FUN_10106ec2(int param_1,int param_2,int param_3);
void __cdecl FUN_1010707b(int param_1,uint param_2);
uint __cdecl FUN_101070cd(int param_1,int *param_2);
uint __cdecl FUN_10107273(int param_1,int *param_2);
uint __cdecl FUN_1010758f(int param_1,undefined2 *param_2,undefined4 param_3,int param_4);
uint __cdecl FUN_101076f8(int param_1,int param_2);
undefined4 __thiscall FUN_101077f3(void *this,int param_1,char param_2);
undefined4 __cdecl FUN_10107840(int param_1);
uint __thiscall FUN_10107886(void *this,int *param_1);
int __cdecl FUN_1010791f(int param_1,int param_2);
undefined4 __cdecl FUN_10107944(int param_1,int param_2);
int __cdecl FUN_10107ab5(int param_1,uint param_2,char param_3);
int * __cdecl FUN_10107b25(char param_1);
undefined1 __cdecl FUN_10107f0e(int param_1);
void FUN_10107f1d(void);
bool __thiscall FUN_10107fd0(void *this,int *param_1);
uint __fastcall FUN_10107fea(void *param_1);
uint FUN_10108061(void);
char __cdecl FUN_10108126(int param_1);
uint __cdecl FUN_10108166(int param_1,char param_2);
undefined1 __cdecl FUN_1010830f(undefined1 param_1,undefined1 param_2,undefined1 param_3);
uint __cdecl FUN_10108354(int *param_1,int param_2,int param_3);
int __cdecl FUN_10108461(int *param_1,int param_2);
uint __cdecl FUN_101084a4(int param_1);
uint FUN_1010851e(int param_1,undefined4 param_2,undefined4 param_3,void *param_4,size_t *param_5);
uint __cdecl FUN_10108611(char param_1);
undefined4 __cdecl FUN_101087f9(undefined4 param_1,char *param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6,undefined4 *param_7,int *param_8,undefined4 *param_9,undefined4 param_10,int *param_11);
void FUN_10108ad5(void);
void __cdecl FUN_10108b01(int param_1);
int __cdecl FUN_10108b5a(int param_1);
void __cdecl FUN_10108c14(int param_1);
void __cdecl FUN_10108c31(DWORD_PTR param_1);
uint FUN_10108c87(void);
uint FUN_10108ccb(void);
uint FUN_10108d0f(void);
undefined4 FUN_10108d53(void);
uint FUN_10108dc3(undefined4 param_1);
undefined4 FUN_10108e2a(undefined4 param_1,char param_2);
undefined4 FUN_10108ea1(void);
uint FUN_10108edd(char param_1,uint param_2,uint param_3);
void FUN_10109048(char param_1,uint param_2);
undefined4 FUN_1010905a(void);
void FUN_1010909b(HWND param_1,UINT param_2,uint param_3,char *param_4);
uint __cdecl FUN_10109289(int *param_1);
int * __cdecl FUN_1010947a(char param_1);
bool __cdecl FUN_10109512(HMIXEROBJ param_1,DWORD param_2,DWORD param_3,void *param_4,undefined4 *param_5);
bool __cdecl FUN_10109610(HMIXEROBJ param_1,undefined4 param_2,DWORD param_3);
void FUN_10109696(void);
void FUN_10109711(void);
void __cdecl FUN_10109748(int param_1,undefined4 param_2);
void FUN_10109802(void);
void FUN_1010983d(void);
uint FUN_10109ab8(void);
void __cdecl FUN_10109b0b(char *param_1);
int * __cdecl FUN_10109b28(char *param_1);
uint __cdecl FUN_10109b65(int *param_1);
uint __cdecl FUN_10109bee(char *param_1,int param_2,undefined4 *param_3,int *param_4);
int __thiscall FUN_10109c82(void *this,undefined4 *param_1,int *param_2);
uint __cdecl FUN_1010a428(int param_1);
undefined4 FUN_1010a492(void);
undefined4 __cdecl FUN_1010a507(int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_1010a537(int param_1,undefined4 *param_2,char *param_3,size_t param_4,char *param_5,int param_6,undefined4 *param_7);
uint __cdecl FUN_1010a6c8(int param_1,char *param_2,uint *param_3,undefined4 *param_4,int *param_5,int *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,int *param_11,undefined4 param_12,int *param_13);
undefined4 __cdecl FUN_1010aa61(undefined1 param_1);
void __cdecl FUN_1010ab12(int param_1,int param_2);
int * __cdecl FUN_1010ab63(int param_1,int param_2,int param_3);
int * __cdecl FUN_1010acc3(int *param_1);
uint FUN_1010ad72(int param_1);
void FUN_1010ae5f(void);
undefined4 FUN_1010ae86(int param_1,undefined1 param_2);
undefined4 * __cdecl FUN_1010aecb(int param_1,uint param_2,uint param_3);
int __cdecl FUN_1010b0d0(int param_1,char *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7);
void __cdecl FUN_1010b265(void *param_1,void *param_2);
uint FUN_1010b41f(void);
int FUN_1010b447(void);
uint FUN_1010b497(void);
void __cdecl FUN_1010b4a6(DWORD param_1);
void __cdecl FUN_1010b4bc(int *param_1);
float10 __cdecl FUN_1010b4c8(uint *param_1,int param_2);
void __cdecl FUN_1010b559(int param_1,int param_2);
void FUN_1010b8eb(void);
void thunk_FUN_1012050a(void);
int __cdecl FUN_1010b94d(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,uint *param_5);
bool FUN_1010b99c(int *param_1);
uint __cdecl FUN_1010b9cf(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,int *param_10);
uint __cdecl FUN_1010bb7a(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
void __cdecl FUN_1010bd00(int param_1);
void FUN_1010c0b0(void);
int __cdecl FUN_1010c0e0(uint *param_1,uint param_2,int param_3,uint *param_4);
void FUN_1010c270(void);
undefined4 FUN_1010c2c0(int *param_1);
uint __cdecl FUN_1010c2f0(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint *param_5,undefined4 *param_6,undefined4 *param_7,uint *param_8,undefined4 *param_9,uint *param_10,undefined4 *param_11,int param_12);
uint __cdecl FUN_1010c720(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
int __cdecl FUN_1010cb1c(char *param_1);
char * __cdecl FUN_1010cb30(char *param_1,char *param_2);
char * __cdecl FUN_1010cb47(char *param_1,char *param_2,int param_3);
char * __cdecl FUN_1010cb6a(char *param_1,char *param_2);
char * __cdecl FUN_1010cb89(char *param_1,char *param_2,int param_3);
char __cdecl FUN_1010cbbc(char param_1);
int __cdecl FUN_1010cbcb(char *param_1,char *param_2);
int __cdecl FUN_1010cbec(char *param_1,char *param_2,int param_3);
int __cdecl FUN_1010cc18(char *param_1,char *param_2);
int __cdecl FUN_1010cc4e(char *param_1,char *param_2,int param_3);
int __cdecl FUN_1010cc8f(char *param_1,int param_2,int param_3);
undefined1 * __cdecl FUN_1010ccb8(undefined1 *param_1,undefined1 *param_2,int param_3);
char * __cdecl FUN_1010ccf8(char *param_1,char *param_2);
uint FUN_1010cd42(int *param_1);
undefined4 FUN_1010cdc1(int *param_1,char param_2);
uint __cdecl FUN_1010ce66(uint param_1,int param_2);
undefined4 __cdecl FUN_1010ced5(int param_1);
uint __cdecl FUN_1010cf66(int param_1,uint param_2);
uint __cdecl FUN_1010cfbb(int param_1,undefined4 param_2);
undefined4 FUN_1010d00a(int param_1);
void __cdecl FUN_1010d051(int param_1);
uint __cdecl FUN_1010d088(uint *param_1,char *param_2,undefined4 param_3,undefined4 param_4,uint *param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8);
void FUN_1010d30b(void);
void FUN_1010d329(int *param_1,int *param_2,int param_3);
void FUN_1010d3a3(int *param_1,int param_2);
void FUN_1010d3d8(int param_1,undefined1 param_2);
undefined4 FUN_1010d3ea(int *param_1);
int * FUN_1010d425(int param_1,int param_2,int param_3);
void FUN_1010d48f(int *param_1);
bool FUN_1010d55a(int param_1,uint *param_2,size_t param_3,uint *param_4,uint *param_5);
uint FUN_1010d6b4(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4,uint *param_5);
uint FUN_1010d781(int param_1,uint *param_2,undefined4 param_3,int param_4,int *param_5);
void FUN_1010d901(int param_1,uint *param_2,size_t param_3,uint *param_4,uint *param_5);
uint FUN_1010d90a(int param_1,uint *param_2,undefined4 param_3,void *param_4,size_t *param_5);
bool FUN_1010db26(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,size_t *param_5);
bool __cdecl FUN_1010dbf6(void *param_1,void *param_2);
uint __cdecl FUN_1010dc0e(int param_1,int *param_2);
bool FUN_1010dcf3(void);
undefined4 FUN_1010dd36(int *param_1);
uint __cdecl FUN_1010dd82(undefined4 *param_1,undefined4 param_2,undefined4 param_3,void *param_4,undefined4 *param_5);
undefined4 __cdecl FUN_1010de16(undefined4 *param_1,uint param_2);
undefined4 FUN_1010dee9(int param_1,void *param_2,int param_3);
undefined4 FUN_1010dfa9(undefined4 *param_1);
uint __cdecl FUN_1010dfda(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,int *param_5,undefined4 *param_6,undefined4 *param_7,uint *param_8,undefined4 *param_9,undefined4 *param_10);
uint __cdecl FUN_1010e469(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
void __cdecl FUN_1010e5a1(int param_1,int param_2);
undefined8 __cdecl FUN_1010e5d5(int *param_1,uint param_2,int param_3);
undefined8 __cdecl FUN_1010e6bc(int *param_1);
undefined4 __cdecl FUN_1010e79b(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,uint param_6,int param_7,int param_8,int param_9);
int __thiscall FUN_1010e999(void *this,void *param_1,int *param_2,int *param_3);
void __cdecl FUN_1010eab9(int param_1,int param_2);
void FUN_1010ed90(void);
void FUN_1010eddc(void);
int __cdecl FUN_1010edfe(undefined4 *param_1,int param_2,int param_3);
undefined4 __cdecl FUN_1010f05f(int *param_1);
ulonglong __fastcall FUN_1010f18c(undefined4 param_1,undefined4 param_2,int param_3);
longlong __cdecl FUN_1010f1e6(int param_1,int param_2);
float10 __cdecl FUN_1010f257(float param_1,int param_2);
undefined4 __cdecl FUN_1010f2c6(int param_1,uint param_2,int param_3);
undefined4 __cdecl FUN_1010f598(int param_1,uint param_2,int param_3);
int __cdecl FUN_1010fac1(int param_1,uint param_2,int param_3);
undefined8 __cdecl FUN_1010fd41(int param_1);
int __cdecl FUN_1010fd5b(int param_1,int param_2);
int __cdecl FUN_1010fd89(int param_1,int param_2);
uint __cdecl FUN_1010fdb7(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,undefined4 *param_7);
void __fastcall FUN_10110071(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,int param_7);
int thunk_FUN_10110139(void);
int FUN_10110139(void);
int FUN_10110142(void);
void __thiscall FUN_1011017c(void *this,int param_1,int param_2,int param_3,int param_4,int param_5);
int __cdecl FUN_10110267(undefined4 param_1,undefined4 param_2,undefined *param_3);
void __cdecl FUN_10110387(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_101103a1(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_101103bb(void);
int __cdecl FUN_10110482(void *param_1,size_t param_2,int param_3,undefined *param_4,int param_5,int param_6);
uint FUN_10110570(void);
void __cdecl FUN_101105a3(undefined4 param_1,undefined4 param_2,void *param_3,size_t param_4,int param_5,undefined *param_6,int param_7,int param_8);
uint __cdecl FUN_101105dd(int *param_1,int param_2);
uint __cdecl FUN_10110633(int *param_1);
bool __cdecl FUN_10110689(int param_1,char *param_2,void *param_3,size_t param_4,int *param_5);
uint __cdecl FUN_10110710(uint *param_1,int *param_2);
uint __cdecl FUN_1011093b(uint *param_1,int *param_2);
uint __cdecl FUN_10110c00(uint *param_1,int *param_2);
undefined4 __cdecl FUN_10110cb6(uint *param_1,int *param_2);
uint __cdecl FUN_10111117(uint *param_1,int *param_2);
undefined4 __cdecl FUN_101112da(int *param_1,int *param_2);
uint __cdecl FUN_10111375(int *param_1,char *param_2,int param_3,int *param_4,int *param_5);
uint __cdecl FUN_101113f0(uint *param_1);
void __cdecl FUN_10111513(int param_1,int param_2,int param_3,byte param_4);
undefined4 __cdecl FUN_101115a0(int *param_1,char *param_2,undefined4 *param_3,int *param_4,int *param_5);
undefined4 __cdecl FUN_101117d0(uint *param_1,uint *param_2,int param_3,int *param_4);
void FUN_101118c0(int param_1);
void __fastcall FUN_10111930(float *param_1);
void __cdecl FUN_101125a0(int param_1,int param_2,undefined4 param_3,int param_4);
float10 __cdecl FUN_101126ce(byte *param_1);
uint __cdecl FUN_10112792(uint *param_1,uint *param_2,int *param_3,uint *param_4,undefined4 *param_5,int param_6,uint *param_7);
undefined4 __cdecl FUN_10112be8(uint *param_1,uint *param_2,undefined4 *param_3,int *param_4,int *param_5,uint *param_6,uint *param_7,int param_8);
uint __cdecl FUN_10112c63(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
uint __cdecl FUN_10112e0e(uint *param_1,int *param_2,uint *param_3,uint *param_4,undefined4 *param_5,int param_6,undefined4 *param_7);
uint __cdecl FUN_101131c2(uint *param_1,uint *param_2,int *param_3,uint *param_4,uint *param_5,int *param_6,uint *param_7,uint *param_8,undefined4 *param_9,int param_10);
undefined4 FUN_10113471(int *param_1);
undefined4 __cdecl FUN_101134be(undefined4 *param_1,uint *param_2,size_t param_3,uint *param_4,int *param_5);
int * __cdecl FUN_101135fc(int param_1,uint *param_2,uint param_3,undefined4 *param_4);
uint FUN_1011388f(int *param_1);
uint __cdecl FUN_10113978(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5,undefined4 *param_6,int *param_7,int *param_8,int param_9);
int * __cdecl FUN_10113e85(undefined4 param_1,uint *param_2,uint param_3,undefined4 *param_4);
void FUN_10114213(int *param_1);
bool __cdecl FUN_10114234(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,size_t *param_5);
uint __cdecl FUN_1011428a(int param_1);
int __cdecl FUN_101142f0(undefined4 *param_1,void *param_2,size_t param_3);
uint __cdecl FUN_1011435e(int *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9);
void FUN_10114472(int *param_1);
int __cdecl FUN_1011449f(char *param_1,void *param_2,size_t param_3);
uint __cdecl FUN_10114658(int *param_1,undefined4 *param_2,int *param_3,int *param_4);
uint __cdecl FUN_101149e2(int *param_1,uint *param_2,undefined4 *param_3,int *param_4,int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9);
uint __cdecl FUN_10114b54(byte param_1);
bool __cdecl FUN_10114bc6(int *param_1);
undefined4 FUN_10114c26(void);
uint __cdecl FUN_10114c4e(int param_1,char *param_2,uint param_3,char param_4);
uint __cdecl FUN_10114d88(int param_1,undefined2 *param_2,uint param_3,char param_4);
int __cdecl FUN_10114ec0(byte param_1,int param_2,int param_3);
undefined1 __cdecl FUN_10114f19(uint *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6);
undefined1 __cdecl FUN_10115030(uint *param_1,uint *param_2,int param_3,int param_4,int param_5);
undefined4 __cdecl FUN_1011522d(HMODULE param_1,char param_2);
undefined4 FUN_101153e4(void);
uint __cdecl FUN_101153fd(int param_1,uint param_2,int param_3);
int FUN_10115595(void);
uint __cdecl FUN_101155e7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
uint __cdecl FUN_10115656(undefined4 param_1);
undefined1 FUN_10115699(void);
undefined4 __fastcall FUN_10115965(undefined4 param_1);
uint __cdecl FUN_101159c5(undefined4 *param_1);
uint __cdecl FUN_10115a84(undefined4 *param_1);
uint __cdecl FUN_10115b89(int param_1,undefined4 *param_2);
uint __cdecl FUN_10115c78(undefined4 param_1);
undefined1 FUN_10115cbb(void);
undefined4 __fastcall FUN_10116045(undefined4 param_1);
uint __cdecl FUN_101160a5(undefined4 *param_1);
uint __cdecl FUN_101161b8(undefined4 *param_1);
uint __cdecl FUN_101162cb(int param_1,undefined4 *param_2);
undefined4 __cdecl FUN_101163dc(int param_1);
undefined4 FUN_1011645b(void);
undefined4 FUN_1011647d(void);
undefined4 FUN_10116492(void);
undefined4 __cdecl FUN_101164a7(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_101164d1(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 __cdecl FUN_1011650e(undefined4 param_1);
undefined4 __cdecl FUN_10116528(undefined8 param_1);
undefined4 __cdecl FUN_10116547(undefined4 param_1,undefined4 param_2);
undefined4 __cdecl FUN_10116565(int param_1);
undefined4 __cdecl FUN_1011659a(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_101165db(void);
undefined4 FUN_101165f0(void);
int * __fastcall FUN_10116605(int *param_1);
void __fastcall thunk_FUN_10116ace(undefined4 *param_1);
uint __thiscall FUN_1011661a(void *this,char *param_1);
void __fastcall FUN_10116641(int param_1);
uint __thiscall FUN_10116658(void *this,char *param_1);
undefined4 __cdecl FUN_10116707(char *param_1,LPBYTE param_2,DWORD param_3);
int * __cdecl FUN_1011687d(HKEY param_1,BYTE *param_2,int param_3,int *param_4);
void __cdecl FUN_101169ea(void *param_1);
void __cdecl thunk_FUN_10116a28(int param_1);
void __cdecl FUN_10116a28(int param_1);
int * __fastcall FUN_10116a2d(int *param_1);
void __fastcall FUN_10116ace(undefined4 *param_1);
undefined4 __fastcall FUN_10116ae3(int param_1);
HRESULT FUN_10116ae7(int param_1,LPVOID *param_2);
undefined4 FUN_10116b44(int param_1);
undefined4 FUN_10116b70(int param_1,char *param_2,uint param_3);
void __cdecl FUN_10116be2(int *param_1);
undefined8 __fastcall FUN_10116c40(undefined4 param_1,undefined4 param_2);
undefined8 __fastcall FUN_10116c6f(undefined4 param_1,undefined4 param_2);
undefined8 __fastcall FUN_10116c9c(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_10116ccd(undefined4 param_1,uint param_2);
int * __cdecl FUN_10116d24(byte *param_1);
bool __cdecl FUN_10116e81(char *param_1,int *param_2);
void __cdecl FUN_10116eca(char *param_1,int param_2);
undefined4 FUN_10116f98(void);
undefined1 FUN_10116fc5(void);
void __cdecl FUN_10116fdd(int param_1);
void __cdecl FUN_10116ffe(undefined4 param_1);
int __cdecl FUN_10117008(undefined4 param_1,char *param_2,int param_3);
uint __cdecl FUN_10117147(char *param_1,char *param_2,int param_3,char *param_4,int param_5,int *param_6,char *param_7,int param_8);
undefined4 __cdecl FUN_10117302(uint *param_1);
uint __cdecl FUN_10117313(int *param_1);
undefined4 __cdecl FUN_10117396(byte *param_1,int *param_2,int *param_3);
bool __cdecl FUN_101173f6(byte *param_1,undefined4 *param_2,undefined4 *param_3);
uint __cdecl FUN_10117451(uint *param_1,char param_2);
int __cdecl FUN_101174c0(uint *param_1,void *param_2,size_t param_3);
int __cdecl FUN_10117580(byte *param_1,void *param_2,size_t param_3);
int __thiscall FUN_10117604(uint3 param_1,uint *param_2,int param_3,int param_4);
void __cdecl FUN_10117681(byte *param_1,char *param_2,char param_3);
bool __cdecl FUN_101176c4(byte *param_1);
bool __cdecl FUN_101176e7(byte *param_1);
uint __cdecl FUN_10117709(byte *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
undefined4 __cdecl FUN_10117747(int param_1);
undefined4 FUN_10117757(void);
undefined4 FUN_10117ad5(void);
undefined4 FUN_10117b22(void);
int * __cdecl FUN_10117b7a(int param_1);
uint __cdecl FUN_10117c4c(int param_1,uint param_2);
void __cdecl FUN_10117c64(int param_1);
void __cdecl FUN_10117cff(int param_1);
void __cdecl FUN_101182b4(int param_1);
uint __cdecl FUN_101187e2(int param_1,uint *param_2);
void __cdecl FUN_10118ee5(int param_1);
void __cdecl FUN_10118f23(int param_1,int param_2);
void __cdecl FUN_10118f98(int param_1,int param_2);
void __cdecl FUN_10119032(int param_1,int param_2);
void __cdecl FUN_101190c9(int param_1);
void __cdecl FUN_10119168(int param_1);
void __cdecl FUN_1011920c(uint *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,int param_7,uint param_8,uint param_9,byte param_10);
void __cdecl FUN_10119354(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_101197cc(int param_1);
void __cdecl FUN_10119899(int param_1,int param_2,char *param_3,char param_4);
void __cdecl FUN_10119a55(int param_1);
void __cdecl FUN_10119bb7(uint param_1);
uint __cdecl FUN_1011b542(int param_1,uint *param_2);
int * __cdecl FUN_1011c222(int param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_1011c24d(uint param_1,int param_2,int param_3);
void __cdecl FUN_1011c3cc(int param_1);
void __cdecl FUN_1011c40f(int param_1);
void __cdecl FUN_1011c489(int param_1);
void __cdecl FUN_1011c536(uint *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,uint param_7,byte param_8,byte param_9);
void __cdecl FUN_1011c63f(int param_1,int param_2);
void __cdecl FUN_1011c72e(int param_1,byte param_2);
int __cdecl FUN_1011c7fa(int param_1,int param_2);
void __cdecl FUN_1011c839(char *param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_1011c9b7(int param_1);
void __cdecl FUN_1011d1ee(int param_1);
uint __cdecl FUN_1011d9ec(int param_1,uint *param_2);
void __cdecl FUN_1011e479(int param_1);
void __cdecl FUN_1011e4b9(int param_1);
void __cdecl FUN_1011e501(int param_1);
void __cdecl FUN_1011e58d(int param_1);
void __cdecl FUN_1011e636(int param_1);
void __cdecl FUN_1011e6bf(int param_1);
void __cdecl FUN_1011ee49(int param_1);
uint __cdecl FUN_1011f4c1(int param_1,uint *param_2);
uint __cdecl FUN_1011fdf2(int param_1,uint *param_2,uint param_3,int param_4,int param_5);
void FUN_1012050a(void);
undefined * __cdecl FUN_101205f1(int param_1,int param_2);
void __cdecl FUN_10120670(int param_1);
undefined4 __cdecl FUN_101210b0(uint *param_1,int param_2,int param_3,int param_4);
undefined4 __thiscall FUN_10121720(void *this,int param_1,int param_2,int param_3);
int __fastcall FUN_10121d00(uint *param_1,int param_2);
int __fastcall FUN_101221b0(int param_1,uint *param_2,int param_3);
undefined4 __cdecl FUN_10122320(float *param_1,int *param_2,int param_3,int param_4,int param_5);
undefined4 __cdecl FUN_101230e0(float *param_1,int *param_2,int param_3,int param_4,uint param_5);
void __fastcall FUN_10124060(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5);
void __cdecl FUN_10124640(float *param_1);
void __fastcall FUN_10124830(float *param_1,float *param_2,float *param_3);
void __fastcall FUN_10124dd0(undefined4 *param_1,float *param_2,float *param_3,undefined4 *param_4);
void __fastcall FUN_101252d0(int param_1,int param_2,float *param_3,float *param_4,int param_5);
undefined4 __cdecl FUN_101255b0(int param_1,int param_2,int param_3,int *param_4);
void FUN_10125910(void);
void __cdecl FUN_10125a40(int param_1,int *param_2,int *param_3,uint *param_4);
void __cdecl FUN_10125f30(int param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_101265f0(undefined4 *param_1);
undefined4 __cdecl FUN_10126650(int param_1,int *param_2,int param_3,int *param_4);
byte __cdecl FUN_1012671b(int *param_1);
byte __cdecl FUN_10126729(int *param_1);
undefined8 __cdecl FUN_10126737(int *param_1);
undefined4 __cdecl FUN_101267bf(int *param_1);
undefined4 __cdecl FUN_101267e0(int *param_1);
undefined4 __cdecl FUN_10126801(undefined4 *param_1,undefined4 param_2);
undefined4 __cdecl FUN_1012687f(undefined4 *param_1);
void __fastcall FUN_101268ea(int param_1);
void __cdecl FUN_10126938(int *param_1);
undefined4 __cdecl FUN_101269cc(void *param_1);
undefined4 __cdecl FUN_101269e6(undefined4 *param_1);
int __cdecl FUN_10126a15(int *param_1,int param_2);
undefined4 __cdecl FUN_10126a94(int param_1,int param_2);
int __cdecl FUN_10126ab0(int *param_1,int *param_2);
undefined4 __cdecl FUN_10126bee(int *param_1,int *param_2);
undefined4 __cdecl FUN_10126e46(int param_1);
undefined4 __cdecl FUN_10126e5e(int param_1);
undefined4 __cdecl FUN_10126ea7(int param_1,undefined4 param_2);
undefined4 __thiscall FUN_10126ebf(void *this,int param_1);
void __cdecl FUN_10126fb4(void *param_1);
void __cdecl FUN_10126fc7(void *param_1);
void __thiscall FUN_10126fda(void *this,int *param_1);
void __cdecl FUN_10126ffa(void *param_1);
void __cdecl FUN_1012700b(int *param_1);
undefined4 __cdecl FUN_10127099(int param_1,int param_2);
void __cdecl FUN_101270b0(void *param_1);
void __cdecl FUN_101270dd(void *param_1);
undefined4 FUN_10127247(void);
undefined4 __cdecl FUN_10127302(int *param_1);
undefined4 __cdecl FUN_101273fe(void *param_1);
undefined4 __cdecl FUN_1012767d(void *param_1,int param_2,undefined4 *param_3);
undefined4 __cdecl FUN_10127759(int *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_10127893(undefined4 *param_1,undefined4 *param_2);
undefined4 __cdecl FUN_1012795b(int param_1,undefined4 *param_2);
undefined4 __cdecl FUN_101279c5(undefined4 param_1,void *param_2);
int __cdecl FUN_101279ea(int param_1,int param_2);
void __cdecl FUN_10127a5c(int param_1);
undefined4 __cdecl FUN_10127ada(void *param_1);
undefined4 __cdecl FUN_10127b2e(void *param_1,int param_2);
void __cdecl FUN_10127df3(void *param_1);
undefined4 __cdecl FUN_10128099(int param_1);
undefined4 __cdecl FUN_101280ec(void *param_1,int param_2);
undefined4 __cdecl FUN_10128108(int param_1,float *param_2);
int __cdecl FUN_1012865b(int param_1,undefined4 *param_2);
undefined4 __cdecl FUN_101286ab(int param_1,int param_2);
int __cdecl FUN_101286cd(int param_1,undefined4 *param_2);
undefined4 __cdecl FUN_10128895(int param_1,int param_2);
undefined8 __fastcall FUN_101288c0(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5,undefined2 *param_6);
undefined8 __fastcall FUN_10128af0(undefined4 param_1,undefined4 param_2,uint *param_3,int *param_4,uint param_5);
void FUN_101296ec(void);
undefined8 __fastcall FUN_10129700(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,int param_5);
undefined8 __fastcall FUN_101298a4(undefined4 param_1,undefined4 param_2,uint *param_3,float *param_4,int param_5);
undefined8 __fastcall FUN_10129a73(undefined4 param_1,undefined4 param_2,uint *param_3,float *param_4,int param_5);
undefined8 __fastcall FUN_10129c2a(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,uint param_5);
undefined8 __fastcall FUN_10129ce0(undefined4 param_1,undefined4 param_2,uint *param_3,int *param_4,uint param_5);
void FUN_1012a91c(void);
undefined8 __fastcall FUN_1012a940(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4);
undefined8 __fastcall FUN_1012a993(undefined4 param_1,undefined4 param_2,undefined8 *param_3,uint param_4);
undefined8 __fastcall FUN_1012aa00(undefined4 param_1,undefined4 param_2,undefined8 *param_3,uint param_4);
undefined8 __fastcall FUN_1012aa70(undefined4 param_1,undefined4 param_2,float *param_3,int *param_4,uint param_5);
void FUN_1012b7be(void);
undefined4 FUN_1012b7c3(void);
void __cdecl FUN_1012b8f9(void *param_1,undefined4 param_2,undefined4 param_3);
uint __cdecl FUN_1012b91e(int *param_1,int param_2);
void __cdecl FUN_1012b9b2(int *param_1,int param_2);
uint __cdecl FUN_1012b9d5(int *param_1,uint param_2);
void __cdecl FUN_1012ba8d(int *param_1);
void __cdecl FUN_1012bab4(int *param_1);
void __cdecl FUN_1012bade(void *param_1);
int __cdecl FUN_1012bbe0(uint param_1);
float10 __cdecl FUN_1012bbf0(uint param_1);
uint * __cdecl FUN_1012bc2f(int param_1,int param_2,int param_3);
void __cdecl FUN_1012bd8b(int *param_1);
int * __cdecl FUN_1012be00(int *param_1,int param_2,int param_3);
void __cdecl FUN_1012bf98(void *param_1);
void __cdecl FUN_1012bfe3(int *param_1);
void __cdecl FUN_1012c007(void *param_1);
uint FUN_1012c098(void);
undefined4 __cdecl FUN_1012c11b(undefined4 *param_1,uint *param_2);
undefined4 __cdecl FUN_1012c491(int *param_1,uint *param_2);
uint __cdecl FUN_1012c6d5(int *param_1);
uint __cdecl FUN_1012c7d1(int param_1,int *param_2);
undefined4 __cdecl FUN_1012c7ed(float *param_1,float *param_2,undefined4 param_3,int param_4);
undefined4 __cdecl FUN_1012c8b6(int *param_1,int param_2,int *param_3,int param_4);
undefined4 __cdecl FUN_1012c9d5(int *param_1,int param_2,int *param_3,int param_4);
undefined4 __cdecl FUN_1012ca24(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6);
void __cdecl FUN_1012caa4(int *param_1,uint param_2);
void FUN_1012ccb7(void);
void FUN_1012cd43(void);
void FUN_1012ce15(void);
void __fastcall FUN_1012cfdd(int param_1,float *param_2);
void __fastcall FUN_1012d0e7(int param_1,float *param_2,int param_3);
void __cdecl FUN_1012d1f9(undefined4 param_1,int param_2);
void __cdecl FUN_1012d293(void *param_1);
void __fastcall FUN_1012d2e2(undefined4 param_1,float *param_2);
void __cdecl FUN_1012d3ff(float *param_1,float *param_2,float *param_3);
void __cdecl FUN_1012d63c(void *param_1);
void __cdecl FUN_1012d68b(void *param_1);
void __cdecl FUN_1012d704(int *param_1);
uint * __cdecl FUN_1012d72e(int param_1,int *param_2);
undefined4 __cdecl FUN_1012d8ef(float *param_1,int *param_2);
void __cdecl FUN_1012dc56(int *param_1);
uint * __cdecl FUN_1012dd1f(uint *param_1,int *param_2);
int * __cdecl FUN_1012de46(int param_1,int param_2);
undefined4 __cdecl FUN_1012e03c(int param_1,int param_2,int param_3,undefined *param_4);
undefined4 __cdecl FUN_1012e1f8(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5);
undefined4 __cdecl FUN_1012e245(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5);
undefined4 __cdecl FUN_1012e292(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_1012e3e1(int *param_1);
void __cdecl FUN_1012e40b(int *param_1);
uint * __cdecl FUN_1012e435(int param_1,int *param_2);
int * __cdecl FUN_1012e623(undefined4 param_1,int *param_2);
void __thiscall FUN_1012e7f9(void *this,int param_1,int param_2,int param_3);
uint * __cdecl FUN_1012e896(int param_1,int param_2);
undefined4 __cdecl FUN_1012eb2a(int param_1,int *param_2,int *param_3,void *param_4);
void __cdecl FUN_1012ec21(int *param_1);
uint * __cdecl FUN_1012ecb4(int param_1,int *param_2);
void __fastcall FUN_1012ed76(int param_1);
int __cdecl FUN_1012ef4b(int param_1,int param_2);
bool __cdecl FUN_1012f052(int param_1,float *param_2,float *param_3,void *param_4);
float10 __cdecl FUN_1012f0be(float param_1);
float10 __cdecl FUN_1012f0ff(float param_1);
float10 __cdecl FUN_1012f146(float param_1);
void __cdecl FUN_1012f191(int param_1,int param_2,int param_3,float param_4,float *param_5,uint param_6,float param_7,float param_8);
void GdipDeleteMatrix(void);
void GdipCreatePath(void);
void GdipDeletePath(void);
void GdipDeleteGraphics(void);
void GdipDeleteRegion(void);
void GdipCombineRegionPath(void);
void GdipGetImageWidth(void);
void GdipGetImageHeight(void);
void GdipGetImagePixelFormat(void);
void GdipCreateMatrix(void);
void GdipTranslateMatrix(void);
void GdipScaleMatrix(void);
void GdipRotateMatrix(void);
void GdipTransformMatrixPointsI(void);
void GdipAddPathPolygonI(void);
void GdipCreateFromHDC(void);
void GdipSetWorldTransform(void);
void GdipDrawImageRectI(void);
void GdipSetClipRegion(void);
void GdipCreateRegionPath(void);
void GdipFree(void);
void GdipAlloc(void);
void GdipDisposeImage(void);
void GdipCreateBitmapFromFile(void);
void GdipCreateBitmapFromStream(void);
void GdipCreateHBITMAPFromBitmap(void);
void GdipBitmapLockBits(void);
void GdipBitmapUnlockBits(void);
void GdipCloneImage(void);
void GdiplusStartup(void);
void GdiplusShutdown(void);
void __fastcall FUN_1012f3a0(int param_1);
void __cdecl FUN_1012f3c0(uint param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,undefined4 param_6,ushort param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12,int param_13,int param_14);
undefined4 FUN_1012f470(uchar *param_1,void *param_2,uint param_3);
undefined4 __thiscall FUN_1012f5b0(void *this,int param_1,undefined4 *param_2,char param_3);
undefined4 __thiscall FUN_1012f600(void *this,char *param_1);
uint __thiscall FUN_1012f6b0(void *this,int param_1);
undefined4 __thiscall FUN_1012f700(void *this,size_t param_1,int param_2);
undefined4 __thiscall FUN_1012f8a0(void *this,void *param_1,int param_2,int *param_3,size_t *param_4,uint param_5);
undefined4 __thiscall FUN_1012f970(void *this,uint param_1,undefined4 *param_2,size_t param_3);
void __fastcall FUN_1012fb80(undefined4 *param_1);
uint __thiscall FUN_1012fbd0(void *this,void *param_1);
undefined4 __thiscall FUN_1012fc30(void *this,void *param_1,int *param_2,size_t param_3);
undefined4 __thiscall FUN_1012fcc0(void *this,int param_1,int param_2,int param_3,int param_4);
void __fastcall FUN_1012fdc0(undefined4 *param_1);
undefined4 * __thiscall FUN_1012fdd0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall FUN_1012fe20(void *this,int param_1);
undefined4 __thiscall FUN_1012fe70(void *this,void *param_1);
undefined4 *FUN_10130020(undefined4 param_1,undefined4 param_2,undefined4 param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,undefined1 param_5);
void Catch_All@101300b2(void);
void __thiscall FUN_101300d0(void *this,char *param_1);
undefined4 * __thiscall FUN_10130240(void *this,undefined4 *param_1,int param_2,undefined4 *param_3,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4);
undefined4 __fastcall FUN_10130480(int param_1);
void __thiscall FUN_10130510(void *this,char *param_1,undefined4 *param_2,int *param_3,char param_4);
undefined4 * __thiscall FUN_10130580(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __fastcall FUN_10130660(int param_1);
void __thiscall FUN_101306d0(void *this,void *param_1,char param_2);
undefined4 __fastcall FUN_10130850(void *param_1);
int __thiscall FUN_10130c90(void *this,char *param_1,undefined4 *param_2,undefined4 param_3,int param_4);
undefined4 * __fastcall FUN_10130e40(undefined4 *param_1);
void __fastcall FUN_10130f30(int param_1);
undefined4 __fastcall FUN_10130f70(int param_1);
undefined4 FUN_10131070(char *param_1,undefined4 *param_2);
undefined4 __thiscall FUN_10131130(void *this,int param_1,int *param_2,uint param_3,void *param_4,int *param_5,uint param_6,uint param_7);
undefined4 __thiscall FUN_10131350(void *this,int param_1,int *param_2,uint param_3,int param_4,int *param_5,size_t param_6,uint param_7);
undefined4 __thiscall FUN_10131510(void *this,undefined4 *param_1,undefined4 *param_2,size_t *param_3,int *param_4,uint param_5);
void __fastcall FUN_10131670(undefined4 *param_1);
int __thiscall FUN_101316b0(void *this,char *param_1,undefined2 param_2);
undefined4 __thiscall FUN_10131700(void *this,char *param_1,int *param_2,int *param_3,uint param_4,uint param_5);
undefined4 __thiscall FUN_101317f0(void *this,int param_1,int *param_2,uint param_3,void *param_4,int *param_5,uint param_6,uint param_7);
undefined4 __thiscall FUN_10131870(void *this,int param_1,int *param_2,uint param_3,int param_4,int *param_5,size_t param_6,uint param_7);
void __cdecl FUN_101318e0(undefined4 param_1);
undefined4 __cdecl FUN_101318f0(LPCSTR param_1,DWORD *param_2);
undefined4 __cdecl FUN_10131970(int param_1);
undefined4 __cdecl FUN_101319a0(int *param_1,char *param_2,undefined4 param_3,char param_4,char param_5);
uint __cdecl FUN_10131a80(int param_1,int param_2,uint param_3,undefined *param_4,undefined4 param_5,uint param_6,undefined4 param_7);
uint __cdecl FUN_10131b40(int param_1,int param_2,uint param_3,undefined *param_4,undefined4 param_5,uint param_6,undefined4 param_7);
uint __cdecl FUN_10131c10(int *param_1,int param_2,uint *param_3,uint param_4,undefined *param_5,undefined4 param_6,uint param_7,undefined4 param_8);
uint __cdecl FUN_10131ce0(int *param_1,int param_2,void *param_3,uint param_4,undefined *param_5,undefined4 param_6,uint param_7,undefined4 param_8);
int FUN_10131e10(undefined4 param_1,undefined4 *param_2,int param_3,int param_4);
void __cdecl FUN_10131ec0(uint *param_1,int *param_2);
void __cdecl FUN_10131f50(uint *param_1,int *param_2);
void __cdecl FUN_10131ff0(uint *param_1,uint param_2,int *param_3);
void __cdecl FUN_10132030(uint *param_1,uint param_2,int *param_3);
uint FUN_10132070(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5);
void FUN_10132120(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4);
undefined4 FUN_10132140(int param_1);
undefined4 FUN_101321b0(int param_1,uint param_2,char *param_3,int param_4);
void FUN_10132280(int param_1,char *param_2,int param_3);
undefined4 __cdecl FUN_101322a0(uint param_1);
int FUN_101323c0(int *param_1,int param_2);
undefined4 FUN_101339c0(int param_1);
void __fastcall FUN_10133a10(undefined4 param_1);
void FUN_10133a40(void);
uint FUN_10133ab0(int *param_1,int param_2);
uint FUN_10134300(int param_1);
uint __thiscall FUN_101343d0(void *this,undefined4 *param_1);
void __fastcall FUN_10134450(undefined4 param_1,int param_2);
uint __cdecl FUN_101344f0(int param_1);
void __cdecl FUN_101345b0(int *param_1);
byte __cdecl FUN_10134c80(int *param_1,int param_2);
undefined4 FUN_101350a0(int param_1);
undefined4 FUN_10135140(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,int param_8);
void FUN_10135380(int param_1,int param_2,char *param_3,int param_4);
void __cdecl FUN_101353b0(undefined4 param_1,int param_2,int param_3);
void __cdecl FUN_101353d0(undefined4 param_1,void *param_2);
void __cdecl thunk_FUN_101354e8(int *param_1,int param_2);
void __cdecl FUN_101354e8(int *param_1,int param_2);
undefined4 __cdecl FUN_10135b80(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6);
uint FUN_10136070(uint param_1,byte *param_2,uint param_3);
uint __fastcall FUN_101362d0(uint *param_1,uint param_2);
uint FUN_101365b0(undefined4 param_1,uint *param_2,uint param_3);
void __fastcall FUN_101365d0(undefined4 param_1,int param_2);
void __cdecl FUN_10136640(int param_1);
void __fastcall FUN_10136710(int *param_1);
void __thiscall FUN_10136950(void *this,int param_1);
void __thiscall FUN_10136a30(void *this,int param_1);
void __cdecl FUN_10136f40(int param_1,int param_2,int param_3);
void __cdecl FUN_101371b0(int param_1,int param_2);
void __fastcall FUN_101375d0(undefined4 param_1,int *param_2);
void FUN_101376a0(void);
void FUN_10137720(void);
void __fastcall FUN_10137790(int param_1,undefined1 *param_2,int param_3);
void __cdecl FUN_10137820(int param_1);
void __fastcall FUN_10137890(undefined4 param_1,int param_2);
void __cdecl FUN_10137910(int *param_1);
void FUN_10137b10(void);
void __cdecl FUN_10137b80(int param_1,undefined1 *param_2,int param_3,int param_4);
void __cdecl FUN_10137c20(int param_1);
void __cdecl FUN_10137e20(int *param_1,undefined1 *param_2,int param_3,int param_4);
void __fastcall FUN_10138030(undefined4 param_1,undefined4 param_2);
uint __cdecl FUN_10138050(int param_1,uint param_2);
undefined8 __fastcall FUN_10138559(undefined4 param_1,undefined4 param_2);
int __cdecl FUN_10138597(int param_1,uint param_2);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4);
double __cdecl sqrt(double _X);
void FUN_10138830(void);
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
void _CIpow(void);
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
void Unwind@10138a00(void);
void Unwind@10138a30(void);
void Unwind@10138a60(void);
void __fastcall Unwind@10138a90(IDxDevice *param_1);
void Unwind@10138ac0(void);
void Unwind@10138af0(void);
void Unwind@10138afb(void);
void Unwind@10138b20(void);
void Unwind@10138b50(void);
void Unwind@10138b80(void);
void Unwind@10138bb0(void);
void Unwind@10138be0(void);
void Unwind@10138be9(void);
void Unwind@10138c10(void);
void Unwind@10138c40(void);
void Unwind@10138c4b(void);
void Unwind@10138c70(void);
void Unwind@10138ca0(void);
void Unwind@10138ce0(void);
void Unwind@10138d10(void);
void Unwind@10138d40(void);
void Unwind@10138d48(void);
void Unwind@10138d56(void);
void Unwind@10138d80(void);
void Unwind@10138d88(void);
void Unwind@10138d96(void);
void Unwind@10138da4(void);
void Unwind@10138dd0(void);
void Unwind@10138dd8(void);
void Unwind@10138e10(void);
void Unwind@10138e40(void);
void Unwind@10138e48(void);
void Unwind@10138e70(void);
void Unwind@10138e78(void);
void Unwind@10138ea0(void);
void Unwind@10138ea8(void);
void Unwind@10138eb6(void);
void Unwind@10138ee0(void);
void Unwind@10138f20(void);
void Unwind@10138f50(void);
void Unwind@10138f80(void);
void Unwind@10138f88(void);
void Unwind@10138f97(void);
void Unwind@10138fc0(void);
void Unwind@10138ff0(void);
void Unwind@10139020(void);
void Unwind@10139050(void);
void Unwind@1013905b(void);
void Unwind@10139080(void);
void Unwind@101390b0(void);
void Unwind@101390b8(void);
void Unwind@101390f0(void);
void Unwind@10139120(void);
void Unwind@10139150(void);
void Unwind@10139159(void);
void Unwind@10139180(void);
void Unwind@10139189(void);
void Unwind@101391d0(void);
void Unwind@10139200(void);
void Unwind@10139230(void);
void Unwind@1013923b(void);
void Unwind@10139260(void);
void Unwind@101392b0(void);
void Unwind@101392b9(void);
void Unwind@101392c2(void);
void Unwind@101392cd(void);
void Unwind@101392d6(void);
void Unwind@10139310(void);
void Unwind@10139319(void);
void Unwind@10139322(void);
void Unwind@1013932b(void);
void Unwind@10139334(void);
void Unwind@10139370(void);
void Unwind@10139378(void);
void Unwind@10139386(void);
void Unwind@10139394(void);
void Unwind@101393c0(void);
void Unwind@101393c8(void);
void Unwind@101393d6(void);
void Unwind@101393e4(void);
void Unwind@10139410(void);
void Unwind@10139440(void);
void Unwind@10139470(void);
void Unwind@101394a0(void);
void Unwind@101394a8(void);
void Unwind@101394b1(void);
void Unwind@101394cb(void);
void Unwind@10139500(void);
void Unwind@10139508(void);
void Unwind@10139516(void);
void Unwind@10139540(void);
void Unwind@10139548(void);
void Unwind@10139556(void);
void Unwind@10139580(void);
void Unwind@10139589(void);
void Unwind@101395b0(void);
void Unwind@101395e0(void);
void Unwind@101395e8(void);
void Unwind@10139620(void);
void Unwind@10139650(void);
void Unwind@10139680(void);
void Unwind@101396b0(void);
void Unwind@101396bb(void);
void Unwind@101396e0(void);
void Unwind@10139710(void);
void Unwind@10139718(void);
void Unwind@10139726(void);
void Unwind@10139750(void);
void Unwind@10139758(void);
void Unwind@10139790(void);
void Unwind@10139799(void);
void Unwind@101397a4(void);
void Unwind@101397d0(void);
void Unwind@101397d8(void);
void Unwind@10139810(void);
void Unwind@10139840(void);
void Unwind@10139848(void);
void Unwind@10139856(void);
void Unwind@10139880(void);
void Unwind@10139888(void);
void Unwind@10139896(void);
void Unwind@101398a4(void);
void Unwind@101398d0(void);
void Unwind@101398db(void);
void Unwind@10139900(void);
void Unwind@10139930(void);
void Unwind@10139938(void);
void Unwind@10139946(void);
void Unwind@10139954(void);
void Unwind@10139980(void);
void Unwind@101399b0(void);
void Unwind@10139a00(void);
void Unwind@10139a08(void);
void Unwind@10139a40(void);
void Unwind@10139a48(void);
void Unwind@10139a80(void);
void Unwind@10139a88(void);
void Unwind@10139a96(void);
void Unwind@10139ac0(void);
void Unwind@10139af0(void);
void Unwind@10139b20(void);
void Unwind@10139b28(void);
void Unwind@10139b60(void);
void Unwind@10139bb0(void);
void Unwind@10139be0(void);
void Unwind@10139c10(void);
void Unwind@10139c40(void);
void Unwind@10139c70(void);
void Unwind@10139c78(void);
void Unwind@10139cb0(void);
void Unwind@10139cb8(void);
void Unwind@10139cc7(void);
void Unwind@10139cd5(void);
void Unwind@10139ce3(void);
void Unwind@10139d10(void);
void Unwind@10139d40(void);
void Unwind@10139d48(void);
void Unwind@10139d57(void);
void Unwind@10139d65(void);
void Unwind@10139d73(void);
void Unwind@10139da0(void);
void Unwind@10139dab(void);
void Unwind@10139db7(void);
void Unwind@10139e00(void);
void Unwind@10139e30(void);
void Unwind@10139e60(void);
void Unwind@10139e69(void);
void Unwind@10139ea0(void);
void Unwind@10139ed0(void);
void Unwind@10139f00(void);
void Unwind@10139f30(void);
void Unwind@10139fc0(void);
void Unwind@10139ff0(void);
void Unwind@1013a040(void);
void Unwind@1013a0d0(void);
void Unwind@1013a120(void);
void Unwind@1013a150(void);
void Unwind@1013a158(void);
void Unwind@1013a1b0(void);
void Unwind@1013a1e0(void);
void Unwind@1013a210(void);
void Unwind@1013a240(void);
void Unwind@1013a249(void);
void Unwind@1013a280(void);
void Unwind@1013a288(void);
void Unwind@1013a2b0(void);
void Unwind@1013a2bc(void);
void Unwind@1013a2c8(void);
void Unwind@1013a2f0(void);
void Unwind@1013a2fc(void);
void Unwind@1013a330(void);
void Unwind@1013a338(void);
void Unwind@1013a340(void);
void Unwind@1013a34b(void);
void Unwind@1013a353(void);
void Unwind@1013a380(void);
void Unwind@1013a388(void);
void Unwind@1013a393(void);
void Unwind@1013a39e(void);
void Unwind@1013a3e0(void);
void Unwind@1013a410(void);
void Unwind@1013a418(void);
void Unwind@1013a440(void);
void Unwind@1013a448(void);
void Unwind@1013a456(void);
void Unwind@1013a465(void);
void Unwind@1013a490(void);
void Unwind@1013a49b(void);
void Unwind@1013a4c0(void);
void Unwind@1013a4cb(void);
void Unwind@1013a4d6(void);
void Unwind@1013a500(void);
void Unwind@1013a540(void);
void Unwind@1013a548(void);
void Unwind@1013a556(void);
void Unwind@1013a565(void);
void Unwind@1013a573(void);
void Unwind@1013a5a0(void);
void Unwind@1013a5d0(void);
void Unwind@1013a5d8(void);
void Unwind@1013a610(void);
void Unwind@1013a618(void);
void Unwind@1013a626(void);
void Unwind@1013a650(void);
void Unwind@1013a659(void);
void Unwind@1013a662(void);
void Unwind@1013a66b(void);
void Unwind@1013a6a0(void);
void Unwind@1013a6a9(void);
void Unwind@1013a6d0(void);
void Unwind@1013a6d8(void);
void Unwind@1013a6e6(void);
void Unwind@1013a730(void);
void Unwind@1013a760(void);
void Unwind@1013a769(void);
void Unwind@1013a7a0(void);
void Unwind@1013a7d0(void);
void Unwind@1013a7d8(void);
void Unwind@1013a800(void);
void Unwind@1013a870(void);
void Unwind@1013a879(void);
void Unwind@1013a8b0(void);
void Unwind@1013a8e0(void);
void Unwind@1013a8e8(void);
void Unwind@1013a910(void);
void Unwind@1013a918(void);
void Unwind@1013a940(void);
void Unwind@1013a970(void);
void Unwind@1013a9b0(void);
void Unwind@1013a9b8(void);
void Unwind@1013a9f0(void);
void Unwind@1013a9f8(void);
void Unwind@1013aa06(void);
void Unwind@1013aa50(void);
void Unwind@1013aa58(void);
void Unwind@1013aa80(void);
void Unwind@1013aa88(void);
void Unwind@1013aac0(void);
void Unwind@1013aaf0(void);
void Unwind@1013aafb(void);
void Unwind@1013ab06(void);
void Unwind@1013ab30(void);
void Unwind@1013ab38(void);
void Unwind@1013ab40(void);
void Unwind@1013ab48(void);
void Unwind@1013ab50(void);
void Unwind@1013ab80(void);
void Unwind@1013ab8e(void);
void Unwind@1013ab96(void);
void Unwind@1013aba4(void);
void Unwind@1013abe0(void);
void Unwind@1013abe8(void);
void Unwind@1013abf6(void);
void Unwind@1013ac04(void);
void Unwind@1013ac40(void);
void Unwind@1013aca0(void);
void Unwind@1013acd0(void);
void Unwind@1013acdb(void);
void Unwind@1013ad30(void);
void Unwind@1013ad60(void);
void Unwind@1013adb0(void);
void Unwind@1013ade0(void);
void Unwind@1013ae10(void);
void Unwind@1013ae1b(void);
void Unwind@1013ae50(void);
void Unwind@1013ae80(void);
void Unwind@1013aeb0(void);
void Unwind@1013aef0(void);
void Unwind@1013af20(void);
void Unwind@1013af28(void);
void Unwind@1013af30(void);
void Unwind@1013af60(void);
void Unwind@1013af90(void);
void Unwind@1013afc0(void);
void Unwind@1013b010(void);
void Unwind@1013b018(void);
void Unwind@1013b050(void);
void Unwind@1013b080(void);
void Unwind@1013b0b0(void);
void Unwind@1013b0e0(void);
void Unwind@1013b0e9(void);
void Unwind@1013b0f1(void);
void Unwind@1013b0fa(void);
void Unwind@1013b120(void);
void Unwind@1013b129(void);
void Unwind@1013b132(void);
void Unwind@1013b160(void);
void Unwind@1013b168(void);
void Unwind@1013b170(void);
void Unwind@1013b178(void);
void Unwind@1013b1a0(void);
void Unwind@1013b1d0(void);
void Unwind@1013b200(void);
void Unwind@1013b209(void);
void Unwind@1013b212(void);
void Unwind@1013b21a(void);
void Unwind@1013b280(void);
void Unwind@1013b2b0(void);
void Unwind@1013b2b8(void);
void Unwind@1013b2c4(void);
void Unwind@1013b2cf(void);
void Unwind@1013b300(void);
void Unwind@1013b308(void);
void Unwind@1013b313(void);
void Unwind@1013b31f(void);
void Unwind@1013b32a(void);
void Unwind@1013b350(void);
void Unwind@1013b358(void);
void Unwind@1013b363(void);
void Unwind@1013b36f(void);
void Unwind@1013b37a(void);
void Unwind@1013b385(void);
void Unwind@1013b3b0(void);
void Unwind@1013b3b8(void);
void Unwind@1013b3c4(void);
void Unwind@1013b3cf(void);
void Unwind@1013b400(void);
void Unwind@1013b408(void);
void Unwind@1013b414(void);
void Unwind@1013b41f(void);
void Unwind@1013b42a(void);
void Unwind@1013b450(void);
void Unwind@1013b458(void);
void Unwind@1013b463(void);
void Unwind@1013b46f(void);
void Unwind@1013b47a(void);
void Unwind@1013b4a0(void);
void Unwind@1013b4d0(void);
void Unwind@1013b500(void);
void Unwind@1013b50b(void);
void Unwind@1013b540(void);
void Unwind@1013b548(void);
void Unwind@1013b580(void);
void Unwind@1013b588(void);
void Unwind@1013b5c0(void);
void Unwind@1013b5f0(void);
void Unwind@1013b620(void);
void Unwind@1013b650(void);
void Unwind@1013b680(void);
void Unwind@1013b6b0(void);
void Unwind@1013b6e0(void);
void Unwind@1013b6e8(void);
void Unwind@1013b6f3(void);
void Unwind@1013b6ff(void);
void Unwind@1013b730(void);
void Unwind@1013b760(void);
void Unwind@1013b790(void);
void Unwind@1013b7c0(void);
void Unwind@1013b7c9(void);
void Unwind@1013b7f0(void);
void Unwind@1013b7f9(void);
void Unwind@1013b820(void);
void Unwind@1013b829(void);
void Unwind@1013b834(void);
void Unwind@1013b83c(void);
void Unwind@1013b860(void);
void Unwind@1013b869(void);
void Unwind@1013b8a0(void);
void Unwind@1013b8d0(void);
void Unwind@1013b900(void);
void Unwind@1013b930(void);
void Unwind@1013b980(void);
void Unwind@1013b988(void);
void Unwind@1013b9b0(void);
void Unwind@1013b9b8(void);
void Unwind@1013b9f0(void);
void Unwind@1013b9fb(void);
void Unwind@1013ba30(void);
void Unwind@1013ba60(void);
void Unwind@1013ba90(void);
void Unwind@1013bac0(void);
void Unwind@1013baf0(void);
void Unwind@1013bb20(void);
void Unwind@1013bb50(void);
void Unwind@1013bba0(void);
void Unwind@1013bba8(void);
void Unwind@1013bbe0(void);
void Unwind@1013bbeb(void);
void Unwind@1013bc20(void);
void Unwind@1013bc2b(void);
void Unwind@1013bc60(void);
void Unwind@1013bc6b(void);
void Unwind@1013bca0(void);
void Unwind@1013bcab(void);
void Unwind@1013bce0(void);
void Unwind@1013bd10(void);
void Unwind@1013bd18(void);
void Unwind@1013bd23(void);
void Unwind@1013bd60(void);
void Unwind@1013bd6c(void);
void Unwind@1013bd77(void);
void Unwind@1013bd82(void);
void Unwind@1013bdb0(void);
void Unwind@1013bdbc(void);
void Unwind@1013bdc7(void);
void Unwind@1013bdd2(void);
void Unwind@1013be00(void);
void Unwind@1013be0c(void);
void Unwind@1013be17(void);
void Unwind@1013be22(void);
void Unwind@1013be30(void);
void Unwind@1013be60(void);
void Unwind@1013be90(void);
void Unwind@1013be9b(void);
void Unwind@1013bea3(void);
void Unwind@1013bee0(void);
void Unwind@1013beeb(void);
void Unwind@1013bf20(void);
void Unwind@1013bf50(void);
void Unwind@1013bf80(void);
void Unwind@1013bf88(void);
void Unwind@1013bfb0(void);
void Unwind@1013bfb8(void);
void Unwind@1013bfc4(void);
void Unwind@1013bff0(void);
void Unwind@1013bffb(void);
void Unwind@1013c040(void);
void Unwind@1013c090(void);
void Unwind@1013c0c0(void);
void Unwind@1013c0f0(void);
void Unwind@1013c120(void);
void Unwind@1013c150(void);
void Unwind@1013c180(void);
void Unwind@1013c1b0(void);
void Unwind@1013c1b8(void);
void Unwind@1013c1c0(void);
void Unwind@1013c1f0(void);
void Unwind@1013c220(void);
void Unwind@1013c228(void);
void Unwind@1013c250(void);
void Unwind@1013c25b(void);
void Unwind@1013c266(void);
void Unwind@1013c271(void);
void Unwind@1013c2a0(void);
void Unwind@1013c2d0(void);
void Unwind@1013c300(void);
void Unwind@1013c308(void);
void Unwind@1013c310(void);
void Unwind@1013c340(void);
void Unwind@1013c370(void);
void Unwind@1013c3a0(void);
void Unwind@1013c3ab(void);
void Unwind@1013c3b6(void);
void Unwind@1013c3c1(void);
void Unwind@1013c3f0(void);
void Unwind@1013c420(void);
void Unwind@1013c450(void);
void Unwind@1013c45b(void);
void Unwind@1013c490(void);
void Unwind@1013c4c0(void);
void Unwind@1013c4f0(void);
void Unwind@1013c4fb(void);
void Unwind@1013c530(void);
void Unwind@1013c580(void);
void Unwind@1013c58b(void);
void Unwind@1013c5b0(void);
void Unwind@1013c5b8(void);
void Unwind@1013c5e0(void);
void Unwind@1013c610(void);
void Unwind@1013c640(void);
void Unwind@1013c64b(void);
void Unwind@1013c680(void);
void Unwind@1013c68b(void);
void Unwind@1013c696(void);
void Unwind@1013c6a1(void);
void Unwind@1013c6d0(void);
void Unwind@1013c6db(void);
void Unwind@1013c6e3(void);
void Unwind@1013c730(void);
void Unwind@1013c760(void);
void Unwind@1013c790(void);
void Unwind@1013c7c0(void);
void Unwind@1013c7f0(void);
void Unwind@1013c820(void);
void Unwind@1013c890(void);
void Unwind@1013c8c0(void);
void Unwind@1013c910(void);
void Unwind@1013c980(void);
void Unwind@1013c988(void);
void Unwind@1013c993(void);
void Unwind@1013c9c0(void);
void Unwind@1013c9f0(void);
void Unwind@1013c9f8(void);
void Unwind@1013ca60(void);
void Unwind@1013ca68(void);
void Unwind@1013ca90(void);
void Unwind@1013cac0(void);
void Unwind@1013cac8(void);
void Unwind@1013caf0(void);
void Unwind@1013caf9(void);
void Unwind@1013cb20(void);
void Unwind@1013cb29(void);
void Unwind@1013cb70(void);
void Unwind@1013cba0(void);
void Unwind@1013cba9(void);
void Unwind@1013cbb4(void);
void Unwind@1013cbbc(void);
void Unwind@1013cbc7(void);
void Unwind@1013cbcf(void);
void Unwind@1013cbd7(void);
void Unwind@1013cbe0(void);
void Unwind@1013cbe9(void);
void Unwind@1013cc20(void);
void Unwind@1013cc29(void);
void Unwind@1013cc32(void);
void Unwind@1013cc3b(void);
void Unwind@1013cc47(void);
void Unwind@1013cc53(void);
void Unwind@1013cc5f(void);
void Unwind@1013cc6b(void);
void Unwind@1013cca0(void);
void Unwind@1013cca9(void);
void Unwind@1013ccb5(void);
void Unwind@1013ccc1(void);
void Unwind@1013cccd(void);
void Unwind@1013cd00(void);
void Unwind@1013cd23(void);
void Unwind@1013cd2c(void);
void Unwind@1013cd38(void);
void Unwind@1013cd41(void);
void Unwind@1013cd4a(void);
void Unwind@1013cd90(void);
void Unwind@1013cd99(void);
void Unwind@1013cda2(void);
void Unwind@1013cdab(void);
void Unwind@1013cdb4(void);
void Unwind@1013cde0(void);
void Unwind@1013cde9(void);
void Unwind@1013cdf1(void);
void Unwind@1013ce20(void);
void Unwind@1013ce28(void);
void Unwind@1013ce50(void);
void Unwind@1013ce59(void);
void Unwind@1013ce65(void);
void Unwind@1013ce71(void);
void Unwind@1013cea0(void);
void Unwind@1013cea9(void);
void Unwind@1013ced0(void);
void Unwind@1013ced9(void);
void Unwind@1013cf00(void);
void Unwind@1013cf30(void);
void Unwind@1013cf3c(void);
void Unwind@1013cf70(void);
void Unwind@1013cf79(void);
void Unwind@1013cfb0(void);
void Unwind@1013cfe0(void);
void Unwind@1013d010(void);
void Unwind@1013d018(void);
void Unwind@1013d024(void);
void Unwind@1013d050(void);
void Unwind@1013d058(void);
void Unwind@1013d063(void);
void Unwind@1013d06f(void);
void Unwind@1013d0a0(void);
void Unwind@1013d0ab(void);
void Unwind@1013d0b9(void);
void Unwind@1013d0f0(void);
void Unwind@1013d0f9(void);
void Unwind@1013d102(void);
void Unwind@1013d10e(void);
void Unwind@1013d117(void);
void Unwind@1013d150(void);
void Unwind@1013d158(void);
void Unwind@1013d163(void);
void Unwind@1013d190(void);
void Unwind@1013d19c(void);
void Unwind@1013d1a8(void);
void Unwind@1013d1b1(void);
void Unwind@1013d1bd(void);
void Unwind@1013d1c6(void);
void Unwind@1013d1d2(void);
void Unwind@1013d1de(void);
void Unwind@1013d1e7(void);
void Unwind@1013d1f3(void);
void Unwind@1013d230(void);
void Unwind@1013d239(void);
void Unwind@1013d242(void);
void Unwind@1013d24e(void);
void Unwind@1013d25a(void);
void Unwind@1013d265(void);
void Unwind@1013d2a0(void);
void Unwind@1013d2e0(void);
void Unwind@1013d2e8(void);
void Unwind@1013d301(void);
void Unwind@1013d30a(void);
void Unwind@1013d330(void);
void Unwind@1013d360(void);
void Unwind@1013d368(void);
void Unwind@1013d374(void);
void Unwind@1013d380(void);
void Unwind@1013d38c(void);
void Unwind@1013d397(void);
void Unwind@1013d3a0(void);
void Unwind@1013d3d0(void);
void Unwind@1013d3de(void);
void Unwind@1013d3ea(void);
void Unwind@1013d3f6(void);
void Unwind@1013d402(void);
void Unwind@1013d40e(void);
void Unwind@1013d41a(void);
void Unwind@1013d460(void);
void Unwind@1013d490(void);
void Unwind@1013d498(void);
void Unwind@1013d4c0(void);
void Unwind@1013d4c8(void);
void Unwind@1013d4d4(void);
void Unwind@1013d4e0(void);
void Unwind@1013d4ec(void);
void Unwind@1013d520(void);
void Unwind@1013d528(void);
void Unwind@1013d533(void);
void Unwind@1013d53f(void);
void Unwind@1013d54b(void);
void Unwind@1013d580(void);
void Unwind@1013d58b(void);
void Unwind@1013d5b0(void);
void Unwind@1013d600(void);
void Unwind@1013d608(void);
void Unwind@1013d614(void);
void Unwind@1013d620(void);
void Unwind@1013d62c(void);
void Unwind@1013d637(void);
void Unwind@1013d640(void);
void Unwind@1013d649(void);
void Unwind@1013d670(void);
void Unwind@1013d67e(void);
void Unwind@1013d68a(void);
void Unwind@1013d696(void);
void Unwind@1013d6e0(void);
void Unwind@1013d710(void);
void Unwind@1013d71b(void);
void Unwind@1013d750(void);
void Unwind@1013d75b(void);
void Unwind@1013d790(void);
void Unwind@1013d7c6(void);
void Unwind@1013d7da(void);
void Unwind@1013d7f0(void);
void Unwind@1013d820(void);
void Unwind@1013d860(void);
void Unwind@1013d890(void);
void Unwind@1013d89b(void);
void Unwind@1013d8d0(void);
void Unwind@1013d910(void);
void Unwind@1013d91b(void);
void Unwind@1013d950(void);
void FUN_1013d980(void);
void FUN_1013d9a0(void);
void FUN_1013d9c0(void);
void FUN_1013da30(void);
void FUN_1013da50(void);
void FUN_1013da90(void);
void FUN_1013daa0(void);
void FUN_1013daf0(void);
void FUN_1013db10(void);
undefined8 FUN_101d3000(LPCSTR param_1,int param_2);
void FUN_101d30bc(void);
BOOL FUN_101d30cd(HDC param_1,int param_2,int param_3,LPCSTR param_4,int param_5);
BOOL FUN_101d3116(HDC param_1,LPCSTR param_2,int param_3,LPSIZE param_4);
int FUN_101d315c(HDC param_1,LPCSTR param_2,int param_3,LPRECT param_4,UINT param_5);
HFONT FUN_101d31f1(int param_1,int param_2,int param_3,int param_4,int param_5,DWORD param_6,DWORD param_7,DWORD param_8,uint param_9,DWORD param_10,DWORD param_11,DWORD param_12,DWORD param_13,LPCSTR param_14);
bool FUN_101d327b(byte param_1);
void FUN_101d3293(uint param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6);
void FUN_101d32b7(uint param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,LPCSTR param_7,LPBOOL param_8);
uint FUN_101d32db(HIMC param_1,DWORD param_2,LPSTR param_3,uint param_4);

