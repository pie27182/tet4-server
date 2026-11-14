typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    int64_t;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    uint64_t;
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

typedef struct CHgDIB CHgDIB, *PCHgDIB;

struct CHgDIB { // PlaceHolder Class Structure
};

typedef struct CCustomStatic CCustomStatic, *PCCustomStatic;

struct CCustomStatic { // PlaceHolder Class Structure
};

typedef struct _com_error _com_error, *P_com_error;

struct _com_error { // PlaceHolder Class Structure
};

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

typedef struct CMyInfoCtrl CMyInfoCtrl, *PCMyInfoCtrl;

struct CMyInfoCtrl { // PlaceHolder Class Structure
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef struct CListCtrlEx CListCtrlEx, *PCListCtrlEx;

struct CListCtrlEx { // PlaceHolder Class Structure
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

typedef struct CMemberListCtrl CMemberListCtrl, *PCMemberListCtrl;

struct CMemberListCtrl { // PlaceHolder Class Structure
};

typedef struct CCustomEdit CCustomEdit, *PCCustomEdit;

struct CCustomEdit { // PlaceHolder Class Structure
};

typedef struct CHgImageBase CHgImageBase, *PCHgImageBase;

struct CHgImageBase { // PlaceHolder Class Structure
};

typedef struct CListColDraw CListColDraw, *PCListColDraw;

struct CListColDraw { // PlaceHolder Class Structure
};

typedef struct CChatCtrl CChatCtrl, *PCChatCtrl;

struct CChatCtrl { // PlaceHolder Class Structure
};

typedef struct CHgImage16 CHgImage16, *PCHgImage16;

struct CHgImage16 { // PlaceHolder Class Structure
};

typedef struct CHgDDB16 CHgDDB16, *PCHgDDB16;

struct CHgDDB16 { // PlaceHolder Class Structure
};

typedef struct CMultiBmpButton CMultiBmpButton, *PCMultiBmpButton;

struct CMultiBmpButton { // PlaceHolder Class Structure
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

typedef struct CGuildInfoCtrl CGuildInfoCtrl, *PCGuildInfoCtrl;

struct CGuildInfoCtrl { // PlaceHolder Class Structure
};

typedef struct CSimpleColorPicker CSimpleColorPicker, *PCSimpleColorPicker;

struct CSimpleColorPicker { // PlaceHolder Class Structure
};

typedef struct CChannelListCtrl CChannelListCtrl, *PCChannelListCtrl;

struct CChannelListCtrl { // PlaceHolder Class Structure
};

typedef struct CBmpButton CBmpButton, *PCBmpButton;

struct CBmpButton { // PlaceHolder Class Structure
};

typedef struct CMidiPlay CMidiPlay, *PCMidiPlay;

struct CMidiPlay { // PlaceHolder Class Structure
};

typedef struct CHgDIB16 CHgDIB16, *PCHgDIB16;

struct CHgDIB16 { // PlaceHolder Class Structure
};

typedef struct CCustomRadioButton CCustomRadioButton, *PCCustomRadioButton;

struct CCustomRadioButton { // PlaceHolder Class Structure
};

typedef struct CEmoticon CEmoticon, *PCEmoticon;

struct CEmoticon { // PlaceHolder Class Structure
};

typedef struct CHanChatEditComboBox CHanChatEditComboBox, *PCHanChatEditComboBox;

struct CHanChatEditComboBox { // PlaceHolder Class Structure
};

typedef struct CAdFileDownload CAdFileDownload, *PCAdFileDownload;

struct CAdFileDownload { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct CHgImage CHgImage, *PCHgImage;

struct CHgImage { // PlaceHolder Class Structure
};

typedef struct CTypedPtrList<CPtrList,CHgMemDCListData*> CTypedPtrList<CPtrList,CHgMemDCListData*>, *PCTypedPtrList<CPtrList,CHgMemDCListData*>;

struct CTypedPtrList<CPtrList,CHgMemDCListData*> { // PlaceHolder Class Structure
};

typedef struct CFontList CFontList, *PCFontList;

struct CFontList { // PlaceHolder Class Structure
};

typedef struct CMemberListTabCtrl CMemberListTabCtrl, *PCMemberListTabCtrl;

struct CMemberListTabCtrl { // PlaceHolder Class Structure
};

typedef uint64_t __uint64;

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

typedef struct CAdWnd CAdWnd, *PCAdWnd;

struct CAdWnd { // PlaceHolder Class Structure
};

typedef struct CWaitingMemberListCtrl CWaitingMemberListCtrl, *PCWaitingMemberListCtrl;

struct CWaitingMemberListCtrl { // PlaceHolder Class Structure
};

typedef struct CHgMemDCList CHgMemDCList, *PCHgMemDCList;

struct CHgMemDCList { // PlaceHolder Class Structure
};

typedef struct CCustomCheckBox CCustomCheckBox, *PCCustomCheckBox;

struct CCustomCheckBox { // PlaceHolder Class Structure
};

typedef struct CScrollSupportCtrl CScrollSupportCtrl, *PCScrollSupportCtrl;

struct CScrollSupportCtrl { // PlaceHolder Class Structure
};

typedef struct CListColMetaData CListColMetaData, *PCListColMetaData;

struct CListColMetaData { // PlaceHolder Class Structure
};

typedef struct CCustomProgress CCustomProgress, *PCCustomProgress;

struct CCustomProgress { // PlaceHolder Class Structure
};

typedef struct CHeaderCtrlEx CHeaderCtrlEx, *PCHeaderCtrlEx;

struct CHeaderCtrlEx { // PlaceHolder Class Structure
};

typedef struct CImgChatEdit CImgChatEdit, *PCImgChatEdit;

struct CImgChatEdit { // PlaceHolder Class Structure
};

typedef struct CControlBase CControlBase, *PCControlBase;

struct CControlBase { // PlaceHolder Class Structure
};

typedef struct CThreadManager CThreadManager, *PCThreadManager;

struct CThreadManager { // PlaceHolder Class Structure
};

typedef struct CTextBox CTextBox, *PCTextBox;

struct CTextBox { // PlaceHolder Class Structure
};

typedef struct CHgGDImage CHgGDImage, *PCHgGDImage;

struct CHgGDImage { // PlaceHolder Class Structure
};

typedef struct CListRowDraw CListRowDraw, *PCListRowDraw;

struct CListRowDraw { // PlaceHolder Class Structure
};

typedef struct CFontEx CFontEx, *PCFontEx;

struct CFontEx { // PlaceHolder Class Structure
};

typedef struct CHgDDB CHgDDB, *PCHgDDB;

struct CHgDDB { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct CControlList CControlList, *PCControlList;

struct CControlList { // PlaceHolder Class Structure
};

typedef struct CHtmlCtrl CHtmlCtrl, *PCHtmlCtrl;

struct CHtmlCtrl { // PlaceHolder Class Structure
};

typedef struct CCustomTabCtrl CCustomTabCtrl, *PCCustomTabCtrl;

struct CCustomTabCtrl { // PlaceHolder Class Structure
};

typedef struct CCustomButton CCustomButton, *PCCustomButton;

struct CCustomButton { // PlaceHolder Class Structure
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

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct IAdviseSink IAdviseSink, *PIAdviseSink;

typedef struct IAdviseSinkVtbl IAdviseSinkVtbl, *PIAdviseSinkVtbl;

struct IAdviseSink {
    struct IAdviseSinkVtbl *lpVtbl;
};

struct IAdviseSinkVtbl {
    HRESULT (*QueryInterface)(struct IAdviseSink *, IID *, void **);
    ULONG (*AddRef)(struct IAdviseSink *);
    ULONG (*Release)(struct IAdviseSink *);
    void (*OnDataChange)(struct IAdviseSink *, FORMATETC *, STGMEDIUM *);
    void (*OnViewChange)(struct IAdviseSink *, DWORD, LONG);
    void (*OnRename)(struct IAdviseSink *, struct IMoniker *);
    void (*OnSave)(struct IAdviseSink *);
    void (*OnClose)(struct IAdviseSink *);
};

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

typedef union _union_2260 _union_2260, *P_union_2260;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

typedef void *HMETAFILEPICT;

typedef struct HENHMETAFILE__ HENHMETAFILE__, *PHENHMETAFILE__;

typedef struct HENHMETAFILE__ *HENHMETAFILE;

typedef HANDLE HGLOBAL;

typedef wchar_t WCHAR;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

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

typedef struct IEnumSTATDATA IEnumSTATDATA, *PIEnumSTATDATA;

typedef struct IEnumSTATDATAVtbl IEnumSTATDATAVtbl, *PIEnumSTATDATAVtbl;

struct IEnumSTATDATA {
    struct IEnumSTATDATAVtbl *lpVtbl;
};

struct IEnumSTATDATAVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATDATA *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATDATA *);
    ULONG (*Release)(struct IEnumSTATDATA *);
    HRESULT (*Next)(struct IEnumSTATDATA *, ULONG, STATDATA *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATDATA *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATDATA *);
    HRESULT (*Clone)(struct IEnumSTATDATA *, struct IEnumSTATDATA **);
};

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

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

typedef struct IEnumFORMATETCVtbl IEnumFORMATETCVtbl, *PIEnumFORMATETCVtbl;

struct IEnumFORMATETCVtbl {
    HRESULT (*QueryInterface)(struct IEnumFORMATETC *, IID *, void **);
    ULONG (*AddRef)(struct IEnumFORMATETC *);
    ULONG (*Release)(struct IEnumFORMATETC *);
    HRESULT (*Next)(struct IEnumFORMATETC *, ULONG, FORMATETC *, ULONG *);
    HRESULT (*Skip)(struct IEnumFORMATETC *, ULONG);
    HRESULT (*Reset)(struct IEnumFORMATETC *);
    HRESULT (*Clone)(struct IEnumFORMATETC *, struct IEnumFORMATETC **);
};

typedef struct tagFORMATETC FORMATETC;

typedef struct IDataObjectVtbl IDataObjectVtbl, *PIDataObjectVtbl;

struct IDataObjectVtbl {
    HRESULT (*QueryInterface)(struct IDataObject *, IID *, void **);
    ULONG (*AddRef)(struct IDataObject *);
    ULONG (*Release)(struct IDataObject *);
    HRESULT (*GetData)(struct IDataObject *, FORMATETC *, STGMEDIUM *);
    HRESULT (*GetDataHere)(struct IDataObject *, FORMATETC *, STGMEDIUM *);
    HRESULT (*QueryGetData)(struct IDataObject *, FORMATETC *);
    HRESULT (*GetCanonicalFormatEtc)(struct IDataObject *, FORMATETC *, FORMATETC *);
    HRESULT (*SetData)(struct IDataObject *, FORMATETC *, STGMEDIUM *, BOOL);
    HRESULT (*EnumFormatEtc)(struct IDataObject *, DWORD, struct IEnumFORMATETC **);
    HRESULT (*DAdvise)(struct IDataObject *, FORMATETC *, DWORD, struct IAdviseSink *, DWORD *);
    HRESULT (*DUnadvise)(struct IDataObject *, DWORD);
    HRESULT (*EnumDAdvise)(struct IDataObject *, struct IEnumSTATDATA **);
};

typedef struct IDataObject IDataObject, *PIDataObject;

struct IDataObject {
    struct IDataObjectVtbl *lpVtbl;
};

typedef struct IEnumFORMATETC IEnumFORMATETC, *PIEnumFORMATETC;

struct IEnumFORMATETC {
    struct IEnumFORMATETCVtbl *lpVtbl;
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

typedef struct tagSTATDATA tagSTATDATA, *PtagSTATDATA;

struct tagSTATDATA {
    FORMATETC formatetc;
    DWORD advf;
    struct IAdviseSink *pAdvSink;
    DWORD dwConnection;
};

typedef struct ILockBytesVtbl ILockBytesVtbl, *PILockBytesVtbl;

struct ILockBytesVtbl {
    HRESULT (*QueryInterface)(struct ILockBytes *, IID *, void **);
    ULONG (*AddRef)(struct ILockBytes *);
    ULONG (*Release)(struct ILockBytes *);
    HRESULT (*ReadAt)(struct ILockBytes *, ULARGE_INTEGER, void *, ULONG, ULONG *);
    HRESULT (*WriteAt)(struct ILockBytes *, ULARGE_INTEGER, void *, ULONG, ULONG *);
    HRESULT (*Flush)(struct ILockBytes *);
    HRESULT (*SetSize)(struct ILockBytes *, ULARGE_INTEGER);
    HRESULT (*LockRegion)(struct ILockBytes *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct ILockBytes *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct ILockBytes *, STATSTG *, DWORD);
};

typedef struct tagSTGMEDIUM tagSTGMEDIUM, *PtagSTGMEDIUM;

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

typedef struct IEnumUnknown IEnumUnknown, *PIEnumUnknown;

struct IEnumUnknown {
    struct IEnumUnknownVtbl *lpVtbl;
};

typedef struct tagSTGMEDIUM uSTGMEDIUM;

typedef uSTGMEDIUM STGMEDIUM;

typedef LPOLESTR *SNB;

typedef struct tagSTATDATA STATDATA;

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

typedef struct ILockBytes ILockBytes, *PILockBytes;

typedef struct ILockBytes *LPLOCKBYTES;

struct ILockBytes {
    struct ILockBytesVtbl *lpVtbl;
};

typedef struct IDataObject *LPDATAOBJECT;

typedef struct tagFORMATETC *LPFORMATETC;

typedef struct IStorage *LPSTORAGE;

typedef DWORD ULONG;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[35];
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

typedef struct CWinCnt CWinCnt, *PCWinCnt;

struct CWinCnt { // PlaceHolder Class Structure
};

typedef struct CRoomId CRoomId, *PCRoomId;

struct CRoomId { // PlaceHolder Class Structure
};

typedef struct CLevel CLevel, *PCLevel;

struct CLevel { // PlaceHolder Class Structure
};

typedef struct CMemberId CMemberId, *PCMemberId;

struct CMemberId { // PlaceHolder Class Structure
};

typedef struct CGameMoney CGameMoney, *PCGameMoney;

struct CGameMoney { // PlaceHolder Class Structure
};

typedef struct CRating CRating, *PCRating;

struct CRating { // PlaceHolder Class Structure
};

typedef struct CSex CSex, *PCSex;

struct CSex { // PlaceHolder Class Structure
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

typedef uint uintptr_t;

typedef longlong __time64_t;

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef BOOL (*GRAYSTRINGPROC)(HDC, LPARAM, int);

struct HDC__ {
    int unused;
};

typedef struct tagTRACKMOUSEEVENT tagTRACKMOUSEEVENT, *PtagTRACKMOUSEEVENT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct tagTRACKMOUSEEVENT {
    DWORD cbSize;
    DWORD dwFlags;
    HWND hwndTrack;
    DWORD dwHoverTime;
};

struct HWND__ {
    int unused;
};

typedef struct tagDRAWTEXTPARAMS tagDRAWTEXTPARAMS, *PtagDRAWTEXTPARAMS;

typedef uint UINT;

struct tagDRAWTEXTPARAMS {
    UINT cbSize;
    int iTabLength;
    int iLeftMargin;
    int iRightMargin;
    UINT uiLengthDrawn;
};

typedef uint UINT_PTR;

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct tagDRAWTEXTPARAMS *LPDRAWTEXTPARAMS;

typedef struct tagTRACKMOUSEEVENT *LPTRACKMOUSEEVENT;

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

typedef char CHAR;

struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
};

typedef struct tagTEXTMETRICA tagTEXTMETRICA, *PtagTEXTMETRICA;

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

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

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

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
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

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagPALETTEENTRY tagPALETTEENTRY, *PtagPALETTEENTRY;

struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
};

typedef struct tagLOGPALETTE tagLOGPALETTE, *PtagLOGPALETTE;

typedef struct tagLOGPALETTE LOGPALETTE;

typedef struct tagPALETTEENTRY PALETTEENTRY;

struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
};

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef struct tagLOGFONTA LOGFONTA;

typedef struct _BLENDFUNCTION _BLENDFUNCTION, *P_BLENDFUNCTION;

typedef struct _BLENDFUNCTION BLENDFUNCTION;

struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
};

typedef struct tagPALETTEENTRY *LPPALETTEENTRY;

typedef struct _devicemodeA DEVMODEA;

typedef struct tagTEXTMETRICA *LPTEXTMETRICA;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID IID;

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

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

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

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

struct HPALETTE__ {
    int unused;
};

typedef UINT_PTR WPARAM;

typedef DWORD *LPDWORD;

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef struct HPEN__ HPEN__, *PHPEN__;

typedef struct HPEN__ *HPEN;

struct HPEN__ {
    int unused;
};

typedef struct tagPOINT POINT;

typedef struct HPALETTE__ *HPALETTE;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
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

typedef HINSTANCE HMODULE;

typedef int INT;

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

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct HRGN__ *HRGN;

typedef LONG_PTR LRESULT;

typedef struct tagRECT *LPRECT;

typedef BOOL *LPBOOL;

typedef struct HICON__ *HICON;

typedef void *HGDIOBJ;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef struct HBRUSH__ *HBRUSH;

typedef HICON HCURSOR;

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

typedef DWORD MCIERROR;

typedef struct HIMC__ HIMC__, *PHIMC__;

struct HIMC__ {
    int unused;
};

typedef struct HIMC__ *HIMC;


// WARNING! conflicting data type names: /ClassDataTypes/CHgDIB/CHgDIB - /CHgDIB

typedef struct CHgDIB_vftable CHgDIB_vftable, *PCHgDIB_vftable;

struct CHgDIB_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgDIB virtual function #1
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #2
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #3
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #4
    bool (*Create)(void *, int, int); // CHgDIB16 virtual function #5
    void (*Destroy)(void *); // CHgDIB16 virtual function #6
    void (*__CreateFromBitmapWithColorTable)(void *); // CHgImage virtual function #7
    bool (*__CreateFromBitmap16)(void *, uchar *, ulong); // CHgImage virtual function #8
    bool (*__CreateFromBitmap24)(void *, uchar *, ulong); // CHgImage virtual function #9
};

typedef struct CAnimatedStatic CAnimatedStatic, *PCAnimatedStatic;

typedef struct CAnimatedStatic_vftable0 CAnimatedStatic_vftable0, *PCAnimatedStatic_vftable0;

typedef struct CAnimatedStatic_vftable1 CAnimatedStatic_vftable1, *PCAnimatedStatic_vftable1;

typedef struct CAnimatedStatic_data CAnimatedStatic_data, *PCAnimatedStatic_data;

struct CAnimatedStatic_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CAnimatedStatic_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWnd virtual function #1
    CAnimatedStatic * (*deleting_destructor)(void *, byte); // CAnimatedStatic virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    struct CAnimatedStatic_data CAnimatedStatic_data;
};

typedef struct CDC CDC, *PCDC;

typedef struct CObject CObject, *PCObject;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CDC { // class CDC : CObject
    struct CObject CObject;
};

typedef struct CNoTrackObject CNoTrackObject, *PCNoTrackObject;

struct CNoTrackObject { // class CNoTrackObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};


// WARNING! conflicting data type names: /ClassDataTypes/CScrollSupportCtrl/CScrollSupportCtrl - /CScrollSupportCtrl

typedef struct CScrollSupportCtrl_vftable0 CScrollSupportCtrl_vftable0, *PCScrollSupportCtrl_vftable0;

struct CScrollSupportCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CScrollSupportCtrl virtual function #1
    CScrollSupportCtrl * (*deleting_destructor)(void *, byte); // CScrollSupportCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CScrollSupportCtrl_vftable1 CScrollSupportCtrl_vftable1, *PCScrollSupportCtrl_vftable1;

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


// WARNING! conflicting data type names: /ClassDataTypes/CCustomStatic/CCustomStatic - /CCustomStatic

typedef struct CCustomStatic_vftable1 CCustomStatic_vftable1, *PCCustomStatic_vftable1;

struct CCustomStatic_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomStatic virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CCustomButton virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomStatic virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomStatic_vftable0 CCustomStatic_vftable0, *PCCustomStatic_vftable0;

struct CCustomStatic_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomStatic virtual function #1
    CStatic * (*deleting_destructor)(void *, byte); // CCustomStatic virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCustomButton virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CTabCtrlContents CTabCtrlContents, *PCTabCtrlContents;

typedef struct CTabCtrlContents_vftable0 CTabCtrlContents_vftable0, *PCTabCtrlContents_vftable0;

typedef struct CTabCtrlContents_vftable1 CTabCtrlContents_vftable1, *PCTabCtrlContents_vftable1;

struct CTabCtrlContents { // class CTabCtrlContents : CWnd : CControlBase
    struct CTabCtrlContents_vftable0 *vftablePtr;
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
    struct CTabCtrlContents_vftable1 *vftablePtr;
};

struct CTabCtrlContents_vftable0 {
    void (*vfunction1)(void *, byte); // CTabCtrlContents virtual function #1
    CWnd * (*deleting_destructor)(void *, byte); // CTabCtrlContents virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CTabCtrlContents virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

struct CTabCtrlContents_vftable1 {
    void (*vfunction1)(void *, byte); // CTabCtrlContents virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CTabCtrlContents virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CMyInfoCtrl/CMyInfoCtrl - /CMyInfoCtrl

typedef struct CMyInfoCtrl_vftable1 CMyInfoCtrl_vftable1, *PCMyInfoCtrl_vftable1;

struct CMyInfoCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CMyInfoCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CMyInfoCtrl virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMyInfoCtrl_vftable0 CMyInfoCtrl_vftable0, *PCMyInfoCtrl_vftable0;

struct CMyInfoCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CMyInfoCtrl virtual function #1
    CMyInfoCtrl * (*deleting_destructor)(void *, byte); // CMyInfoCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMyInfoCtrl virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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


// WARNING! conflicting data type names: /ClassDataTypes/MemberListCtrl/CWinCnt/CWinCnt - /MemberListCtrl/CWinCnt

typedef struct CWinCnt_vftable CWinCnt_vftable, *PCWinCnt_vftable;

struct CWinCnt_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CWinCnt virtual function #1
    undefined1 (*GetColumnInfo)(void *); // CWinCnt virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*GetItemText)(void *, int); // CWinCnt virtual function #3
    int (*CompareItem)(void *, byte *, char); // CWinCnt virtual function #4
};

typedef struct CLevel_vftable CLevel_vftable, *PCLevel_vftable;

struct CLevel_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CLevel virtual function #1
    undefined1 (*GetColumnInfo)(void *); // CLevel virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*GetItemText)(void *, int); // CLevel virtual function #3
    int (*CompareItem)(void *, byte *, char); // CLevel virtual function #4
};


// WARNING! conflicting data type names: /ClassDataTypes/MemberListCtrl/CLevel/CLevel - /MemberListCtrl/CLevel

typedef struct CMemberId_vftable CMemberId_vftable, *PCMemberId_vftable;

struct CMemberId_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CMemberId virtual function #1
    undefined1 (*GetColumnInfo)(void *); // CMemberId virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*GetItemText)(void *, int); // CMemberId virtual function #3
    int (*CompareItem)(void *, byte *, char); // CMemberId virtual function #4
};


// WARNING! conflicting data type names: /ClassDataTypes/MemberListCtrl/CMemberId/CMemberId - /MemberListCtrl/CMemberId

typedef struct CRoomId_vftable CRoomId_vftable, *PCRoomId_vftable;

struct CRoomId_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CRoomId virtual function #1
    undefined1 (*GetColumnInfo)(void *); // CRoomId virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*GetItemText)(void *, int); // CRoomId virtual function #3
    int (*CompareItem)(void *, byte *, char); // CRoomId virtual function #4
};


// WARNING! conflicting data type names: /ClassDataTypes/MemberListCtrl/CRoomId/CRoomId - /MemberListCtrl/CRoomId

typedef struct CGameMoney_vftable CGameMoney_vftable, *PCGameMoney_vftable;

struct CGameMoney_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CGameMoney virtual function #1
    undefined1 (*GetColumnInfo)(void *); // CGameMoney virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*GetItemText)(void *, int); // CGameMoney virtual function #3
    int (*CompareItem)(void *, byte *, char); // CGameMoney virtual function #4
};


// WARNING! conflicting data type names: /ClassDataTypes/MemberListCtrl/CGameMoney/CGameMoney - /MemberListCtrl/CGameMoney


// WARNING! conflicting data type names: /ClassDataTypes/MemberListCtrl/CRating/CRating - /MemberListCtrl/CRating

typedef struct CRating_vftable CRating_vftable, *PCRating_vftable;

struct CRating_vftable {
    undefined4 * (*vfunction1)(void *, byte); // CRating virtual function #1
    undefined1 (*GetColumnInfo)(void *); // CRating virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*GetItemText)(void *, int); // CRating virtual function #3
    int (*CompareItem)(void *, byte *, char); // CRating virtual function #4
};

typedef struct CSex_vftable CSex_vftable, *PCSex_vftable;

struct CSex_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CSex virtual function #1
    undefined1 (*GetColumnInfo)(void *); // CSex virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*GetItemText)(void *, int); // CSex virtual function #3
    int (*CompareItem)(void *, byte *, char); // CSex virtual function #4
};


// WARNING! conflicting data type names: /ClassDataTypes/MemberListCtrl/CSex/CSex - /MemberListCtrl/CSex


// WARNING! conflicting data type names: /ClassDataTypes/CCustomProgress/CCustomProgress - /CCustomProgress

typedef struct CCustomProgress_vftable0 CCustomProgress_vftable0, *PCCustomProgress_vftable0;

struct CCustomProgress_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomProgress virtual function #1
    CProgressCtrl * (*deleting_destructor)(void *, byte); // CCustomProgress virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CCustomProgress_vftable1 CCustomProgress_vftable1, *PCCustomProgress_vftable1;

struct CCustomProgress_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomProgress virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomProgress virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

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

typedef struct CScrollView CScrollView, *PCScrollView;

typedef struct CView CView, *PCView;

typedef struct CWnd CWnd, *PCWnd;

struct CCmdTarget { // class CCmdTarget : CObject
    struct CObject CObject;
};

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CView { // class CView : CWnd
    struct CWnd CWnd;
};

struct CScrollView { // class CScrollView : CView
    struct CView CView;
};

typedef struct AbuseManagerAI_vftable AbuseManagerAI_vftable, *PAbuseManagerAI_vftable;

struct AbuseManagerAI_vftable {
    CAutoInitialize * (*deleting_destructor)(void *, byte); // AbuseManagerAI virtual function #1
    void (*vfunction2)(void *); // AbuseManagerAI virtual function #2
    CAutoInitialize * (*deleting_destructor)(void *, byte); // AbuseManagerAI virtual function #3
};

typedef struct AbuseManagerAI AbuseManagerAI, *PAbuseManagerAI;

struct AbuseManagerAI { // class AbuseManagerAI : CAutoInitialize
    struct AbuseManagerAI_vftable *vftablePtr;
};

typedef struct CHeaderCtrlEx_data CHeaderCtrlEx_data, *PCHeaderCtrlEx_data;

struct CHeaderCtrlEx_data {
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
    DWORD offset_0x50;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
    DWORD offset_0x5c;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHeaderCtrlEx/CHeaderCtrlEx - /CHeaderCtrlEx

typedef struct CHeaderCtrlEx_vftable CHeaderCtrlEx_vftable, *PCHeaderCtrlEx_vftable;

struct CHeaderCtrlEx_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CHeaderCtrl virtual function #1
    CHeaderCtrlEx * (*deleting_destructor)(void *, byte); // CHeaderCtrlEx virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CHeaderCtrlEx virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CHeaderCtrlEx virtual function #73
    void (*PostNcDestroy)(void *); // CWnd virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CHeaderCtrlEx virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CHeaderCtrl virtual function #82
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CHeaderCtrl virtual function #83
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CHeaderCtrl virtual function #84
};

typedef struct CCommonDialog CCommonDialog, *PCCommonDialog;

typedef struct CCommonDialog_vftable CCommonDialog_vftable, *PCCommonDialog_vftable;

struct CCommonDialog { // class CCommonDialog : CDialog
    struct CCommonDialog_vftable *vftablePtr;
};

struct CCommonDialog_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCommonDialog virtual function #1
    CDialog * (*deleting_destructor)(void *, byte); // CCommonDialog virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CDialog virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCommonDialog virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*vfunction82)(void *, ushort, struct CWnd *); // CCommonDialog virtual function #82
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CDialog virtual function #83
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #84
    int (*CreateIndirect)(void *, void *, struct CWnd *); // CDialog virtual function #85
    int (*DoModal)(void *); // CDialog virtual function #86
    int (*OnInitDialog)(void *); // CDialog virtual function #87
    void (*OnSetFont)(void *, struct CFont *); // CDialog virtual function #88
    void (*OnOK)(void *); // CCommonDialog virtual function #89
    void (*OnCancel)(void *); // CCommonDialog virtual function #90
    void (*PreInitDialog)(void *); // CDialog virtual function #91
};

typedef struct CRoomListCtrl_T1_vftable0 CRoomListCtrl_T1_vftable0, *PCRoomListCtrl_T1_vftable0;

struct CRoomListCtrl_T1_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CRoomListCtrl_T1 virtual function #1
    CRoomListCtrl_T1 * (*deleting_destructor)(void *, byte); // CRoomListCtrl_T1 virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CView virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CRoomListCtrl_T1 virtual function #13
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
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CView virtual function #28
    void (*CalcWindowRect)(void *, struct tagRECT *, uint); // CScrollView virtual function #29
    CMenu * (*GetMenu)(void *); // CWnd virtual function #30
    int (*SetMenu)(void *, struct CMenu *); // CWnd virtual function #31
    int (*OnToolHitTest)(void *, struct CPoint, struct tagTOOLINFOA *); // CWnd virtual function #32
    CScrollBar * (*GetScrollBarCtrl)(void *, int); // CView virtual function #33
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CRoomListCtrl_T1 virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CWnd virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CWnd virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CWnd virtual function #81
    int (*IsSelected)(void *, struct CObject *); // CView virtual function #82
    int (*OnScroll)(void *, uint, uint, int); // CScrollView virtual function #83
    int (*OnScrollBy)(void *, struct CSize, int); // CScrollView virtual function #84
    ulong (*OnDragEnter)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #85
    ulong (*OnDragOver)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #86
    void (*OnDragLeave)(void *); // CView virtual function #87
    int (*OnDrop)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #88
    ulong (*OnDropEx)(void *, struct COleDataObject *, ulong, ulong, struct CPoint); // CView virtual function #89
    ulong (*OnDragScroll)(void *, ulong, struct CPoint); // CView virtual function #90
    void (*OnPrepareDC)(void *, struct CDC *, struct CPrintInfo *); // CScrollView virtual function #91
    void (*OnInitialUpdate)(void *); // CView virtual function #92
    void (*OnActivateView)(void *, int, struct CView *, struct CView *); // CView virtual function #93
    void (*OnActivateFrame)(void *, uint, struct CFrameWnd *); // CView virtual function #94
    void (*OnUpdate)(void *, struct CView *, long, struct CObject *); // CView virtual function #95
    void (*OnDraw)(void *, struct CDC *); // CRoomListCtrl_T1 virtual function #96
    int (*OnPreparePrinting)(void *, struct CPrintInfo *); // CView virtual function #97
    void (*OnBeginPrinting)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #98
    void (*OnPrint)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #99
    void (*OnEndPrinting)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #100
    void (*OnEndPrintPreview)(void *, struct CDC *, struct CPrintInfo *, struct tagPOINT, struct CPreviewView *); // CView virtual function #101
    CSize (*GetWheelScrollDistance)(void *, struct CSize, int, int); // CScrollView virtual function #102
    void (*Initialize)(void *); // CRoomListCtrl_T1 virtual function #103
    CRoomListCtrl_T1 * (*deleting_destructor)(void *, byte); // CRoomListCtrl_T1 virtual function #104
    void (*CalculateRoomRect)(void *, int, struct CRect *); // CRoomListCtrl_T1 virtual function #105
};

typedef struct CRoomListCtrl_T1_vftable1 CRoomListCtrl_T1_vftable1, *PCRoomListCtrl_T1_vftable1;

struct CRoomListCtrl_T1_vftable1 {
    void (*vfunction1)(void *, byte); // CRoomListCtrl_T1 virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CRoomListCtrl_T1 virtual function #2
    bool (*DestroyControl)(void *); // CRoomListCtrl_T1 virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CRoomListCtrl_T1 virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CRoomListCtrl_T1 virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CRoomListCtrl_T1 CRoomListCtrl_T1, *PCRoomListCtrl_T1;

typedef struct CRoomListCtrl_T1_data CRoomListCtrl_T1_data, *PCRoomListCtrl_T1_data;

struct CRoomListCtrl_T1_data {
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
    undefined4 offset_0x80;
};

struct CRoomListCtrl_T1 { // class CRoomListCtrl_T1 : CScrollView : CControlBase
    struct CRoomListCtrl_T1_vftable0 *vftablePtr;
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
    struct CRoomListCtrl_T1_vftable1 *vftablePtr;
    struct CRoomListCtrl_T1_data CRoomListCtrl_T1_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/CImgChatEdit/CImgChatEdit - /CImgChatEdit

typedef struct CImgChatEdit_vftable CImgChatEdit_vftable, *PCImgChatEdit_vftable;

struct CImgChatEdit_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CImgChatEdit virtual function #1
    CImgChatEdit * (*deleting_destructor)(void *, byte); // CImgChatEdit virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CImgChatEdit virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CImgChatEdit virtual function #69
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

typedef struct CImgChatEdit_data CImgChatEdit_data, *PCImgChatEdit_data;

struct CImgChatEdit_data {
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
    undefined4 offset_0x50;
    undefined4 offset_0x54;
    undefined field82_0x58;
    undefined field83_0x59;
    undefined field84_0x5a;
    undefined field85_0x5b;
    undefined field86_0x5c;
    undefined field87_0x5d;
    undefined field88_0x5e;
    undefined field89_0x5f;
    undefined4 offset_0x60;
    undefined4 offset_0x64;
    undefined field92_0x68;
    undefined field93_0x69;
    undefined field94_0x6a;
    undefined field95_0x6b;
    undefined4 offset_0x6c;
    undefined4 offset_0x70;
    HGDIOBJ offset_0x74;
    HGDIOBJ offset_0x78;
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
    int offset_0x9c;
    undefined field133_0xa0;
    undefined field134_0xa1;
    undefined field135_0xa2;
    undefined field136_0xa3;
    undefined field137_0xa4;
    undefined field138_0xa5;
    undefined field139_0xa6;
    undefined field140_0xa7;
    void *offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
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

typedef struct CListColDraw_vftable CListColDraw_vftable, *PCListColDraw_vftable;

struct CListColDraw_vftable {
    void (*Draw)(void *, struct CDC *, struct CRect *, char *, int, struct CListCtrlEx *, int); // CListColDraw virtual function #1
    bool (*HitTest)(void); // CListColDraw virtual function #2
};


// WARNING! conflicting data type names: /ClassDataTypes/CListColDraw/CListColDraw - /CListColDraw

typedef struct CHgImageBase_data CHgImageBase_data, *PCHgImageBase_data;

struct CHgImageBase_data {
    int offset_0x0;
    void *offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
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
    undefined1 offset_0x24;
    undefined field22_0x25;
    undefined field23_0x26;
    undefined field24_0x27;
    undefined4 offset_0x28;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
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
    undefined4 offset_0x5c;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgImageBase/CHgImageBase - /CHgImageBase

typedef struct CHgImageBase_vftable CHgImageBase_vftable, *PCHgImageBase_vftable;

struct CHgImageBase_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgImageBase virtual function #1
    bool (*Create)(void *, char *); // CHgImageBase virtual function #2
    bool (*Create)(void *, char *); // CHgImageBase virtual function #3
    bool (*Create)(void *, char *); // CHgImageBase virtual function #4
    undefined (*vfunction5)(void); // MSVCR90.DLL CHgImageBase pure virtual function #5
    void (*Destroy)(void *); // CHgImageBase virtual function #6
    void (*__CreateFromBitmapWithColorTable)(void *); // MSVCR90.DLL CHgImageBase pure virtual function #7
    bool (*__CreateFromBitmap16)(void *, uchar *, ulong); // MSVCR90.DLL CHgImageBase pure virtual function #8
    bool (*__CreateFromBitmap24)(void *, uchar *, ulong); // MSVCR90.DLL CHgImageBase pure virtual function #9
};

typedef struct CControlBase_vftable CControlBase_vftable, *PCControlBase_vftable;

struct CControlBase_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CControlBase virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CControlBase/CControlBase - /CControlBase

typedef struct CThreadManager_data CThreadManager_data, *PCThreadManager_data;

struct CThreadManager_data {
    undefined **offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    int *offset_0x1c;
    undefined field8_0x20;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
    undefined field12_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
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
};

typedef struct CThreadManager_vftable CThreadManager_vftable, *PCThreadManager_vftable;

struct CThreadManager_vftable {
    CThreadManager * (*deleting_destructor)(void *, byte); // CThreadManager virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CThreadManager/CThreadManager - /CThreadManager

typedef struct CDialog CDialog, *PCDialog;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CDialog { // class CDialog : CWnd
    struct CWnd CWnd;
};

typedef struct CChatCtrl_vftable1 CChatCtrl_vftable1, *PCChatCtrl_vftable1;

struct CChatCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CChatCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CChatCtrl virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CChatCtrl_vftable0 CChatCtrl_vftable0, *PCChatCtrl_vftable0;

struct CChatCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CChatCtrl virtual function #1
    CChatCtrl * (*deleting_destructor)(void *, byte); // CChatCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CChatCtrl virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWnd virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CChatCtrl virtual function #71
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
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CChatCtrl virtual function #82
};


// WARNING! conflicting data type names: /ClassDataTypes/CChatCtrl/CChatCtrl - /CChatCtrl

typedef struct CChatCtrl_data CChatCtrl_data, *PCChatCtrl_data;

struct CChatCtrl_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
};

typedef struct CPalette CPalette, *PCPalette;

typedef struct CPalette_vftable CPalette_vftable, *PCPalette_vftable;

struct CPalette { // class CPalette : CGdiObject
    struct CPalette_vftable *vftablePtr;
};

struct CPalette_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPalette virtual function #1
    void * (*deleting_destructor)(void *, uint); // CPalette virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

typedef struct CGaugeCtrl CGaugeCtrl, *PCGaugeCtrl;

typedef struct CGaugeCtrl_vftable CGaugeCtrl_vftable, *PCGaugeCtrl_vftable;

typedef struct CGaugeCtrl_data CGaugeCtrl_data, *PCGaugeCtrl_data;

struct CGaugeCtrl_data {
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
    undefined **offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
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
    undefined4 offset_0x58;
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
    undefined field272_0x128;
    undefined field273_0x129;
    undefined field274_0x12a;
    undefined field275_0x12b;
    undefined field276_0x12c;
    undefined field277_0x12d;
    undefined field278_0x12e;
    undefined field279_0x12f;
    undefined field280_0x130;
    undefined field281_0x131;
    undefined field282_0x132;
    undefined field283_0x133;
    undefined field284_0x134;
    undefined field285_0x135;
    undefined field286_0x136;
    undefined field287_0x137;
    undefined field288_0x138;
    undefined field289_0x139;
    undefined field290_0x13a;
    undefined field291_0x13b;
    undefined field292_0x13c;
    undefined field293_0x13d;
    undefined field294_0x13e;
    undefined field295_0x13f;
    undefined field296_0x140;
    undefined field297_0x141;
    undefined field298_0x142;
    undefined field299_0x143;
    undefined field300_0x144;
    undefined field301_0x145;
    undefined field302_0x146;
    undefined field303_0x147;
    undefined field304_0x148;
    undefined field305_0x149;
    undefined field306_0x14a;
    undefined field307_0x14b;
    undefined field308_0x14c;
    undefined field309_0x14d;
    undefined field310_0x14e;
    undefined field311_0x14f;
    undefined field312_0x150;
    undefined field313_0x151;
    undefined field314_0x152;
    undefined field315_0x153;
    undefined field316_0x154;
    undefined field317_0x155;
    undefined field318_0x156;
    undefined field319_0x157;
    undefined field320_0x158;
    undefined field321_0x159;
    undefined field322_0x15a;
    undefined field323_0x15b;
    undefined field324_0x15c;
    undefined field325_0x15d;
    undefined field326_0x15e;
    undefined field327_0x15f;
    undefined field328_0x160;
    undefined field329_0x161;
    undefined field330_0x162;
    undefined field331_0x163;
    undefined field332_0x164;
    undefined field333_0x165;
    undefined field334_0x166;
    undefined field335_0x167;
    undefined field336_0x168;
    undefined field337_0x169;
    undefined field338_0x16a;
    undefined field339_0x16b;
    undefined field340_0x16c;
    undefined field341_0x16d;
    undefined field342_0x16e;
    undefined field343_0x16f;
    undefined field344_0x170;
    undefined field345_0x171;
    undefined field346_0x172;
    undefined field347_0x173;
    undefined field348_0x174;
    undefined field349_0x175;
    undefined field350_0x176;
    undefined field351_0x177;
    undefined field352_0x178;
    undefined field353_0x179;
    undefined field354_0x17a;
    undefined field355_0x17b;
    undefined field356_0x17c;
    undefined field357_0x17d;
    undefined field358_0x17e;
    undefined field359_0x17f;
    undefined field360_0x180;
    undefined field361_0x181;
    undefined field362_0x182;
    undefined field363_0x183;
    undefined field364_0x184;
    undefined field365_0x185;
    undefined field366_0x186;
    undefined field367_0x187;
    undefined field368_0x188;
    undefined field369_0x189;
    undefined field370_0x18a;
    undefined field371_0x18b;
    undefined field372_0x18c;
    undefined field373_0x18d;
    undefined field374_0x18e;
    undefined field375_0x18f;
    undefined field376_0x190;
    undefined field377_0x191;
    undefined field378_0x192;
    undefined field379_0x193;
    undefined field380_0x194;
    undefined field381_0x195;
    undefined field382_0x196;
    undefined field383_0x197;
    undefined field384_0x198;
    undefined field385_0x199;
    undefined field386_0x19a;
    undefined field387_0x19b;
    undefined field388_0x19c;
    undefined field389_0x19d;
    undefined field390_0x19e;
    undefined field391_0x19f;
    undefined field392_0x1a0;
    undefined field393_0x1a1;
    undefined field394_0x1a2;
    undefined field395_0x1a3;
    undefined field396_0x1a4;
    undefined field397_0x1a5;
    undefined field398_0x1a6;
    undefined field399_0x1a7;
    undefined field400_0x1a8;
    undefined field401_0x1a9;
    undefined field402_0x1aa;
    undefined field403_0x1ab;
    undefined field404_0x1ac;
    undefined field405_0x1ad;
    undefined field406_0x1ae;
    undefined field407_0x1af;
    undefined field408_0x1b0;
    undefined field409_0x1b1;
    undefined field410_0x1b2;
    undefined field411_0x1b3;
    undefined field412_0x1b4;
    undefined field413_0x1b5;
    undefined field414_0x1b6;
    undefined field415_0x1b7;
    undefined field416_0x1b8;
    undefined field417_0x1b9;
    undefined field418_0x1ba;
    undefined field419_0x1bb;
    undefined field420_0x1bc;
    undefined field421_0x1bd;
    undefined field422_0x1be;
    undefined field423_0x1bf;
    undefined field424_0x1c0;
    undefined field425_0x1c1;
    undefined field426_0x1c2;
    undefined field427_0x1c3;
    undefined field428_0x1c4;
    undefined field429_0x1c5;
    undefined field430_0x1c6;
    undefined field431_0x1c7;
    undefined field432_0x1c8;
    undefined field433_0x1c9;
    undefined field434_0x1ca;
    undefined field435_0x1cb;
    undefined field436_0x1cc;
    undefined field437_0x1cd;
    undefined field438_0x1ce;
    undefined field439_0x1cf;
    undefined field440_0x1d0;
    undefined field441_0x1d1;
    undefined field442_0x1d2;
    undefined field443_0x1d3;
    undefined field444_0x1d4;
    undefined field445_0x1d5;
    undefined field446_0x1d6;
    undefined field447_0x1d7;
    undefined field448_0x1d8;
    undefined field449_0x1d9;
    undefined field450_0x1da;
    undefined field451_0x1db;
    undefined field452_0x1dc;
    undefined field453_0x1dd;
    undefined field454_0x1de;
    undefined field455_0x1df;
    undefined field456_0x1e0;
    undefined field457_0x1e1;
    undefined field458_0x1e2;
    undefined field459_0x1e3;
    undefined field460_0x1e4;
    undefined field461_0x1e5;
    undefined field462_0x1e6;
    undefined field463_0x1e7;
    undefined field464_0x1e8;
    undefined field465_0x1e9;
    undefined field466_0x1ea;
    undefined field467_0x1eb;
    undefined field468_0x1ec;
    undefined field469_0x1ed;
    undefined field470_0x1ee;
    undefined field471_0x1ef;
    undefined field472_0x1f0;
    undefined field473_0x1f1;
    undefined field474_0x1f2;
    undefined field475_0x1f3;
    undefined field476_0x1f4;
    undefined field477_0x1f5;
    undefined field478_0x1f6;
    undefined field479_0x1f7;
    undefined field480_0x1f8;
    undefined field481_0x1f9;
    undefined field482_0x1fa;
    undefined field483_0x1fb;
    undefined field484_0x1fc;
    undefined field485_0x1fd;
    undefined field486_0x1fe;
    undefined field487_0x1ff;
    undefined field488_0x200;
    undefined field489_0x201;
    undefined field490_0x202;
    undefined field491_0x203;
    undefined field492_0x204;
    undefined field493_0x205;
    undefined field494_0x206;
    undefined field495_0x207;
    undefined field496_0x208;
    undefined field497_0x209;
    undefined field498_0x20a;
    undefined field499_0x20b;
    undefined field500_0x20c;
    undefined field501_0x20d;
    undefined field502_0x20e;
    undefined field503_0x20f;
    undefined field504_0x210;
    undefined field505_0x211;
    undefined field506_0x212;
    undefined field507_0x213;
    undefined field508_0x214;
    undefined field509_0x215;
    undefined field510_0x216;
    undefined field511_0x217;
    undefined field512_0x218;
    undefined field513_0x219;
    undefined field514_0x21a;
    undefined field515_0x21b;
    undefined field516_0x21c;
    undefined field517_0x21d;
    undefined field518_0x21e;
    undefined field519_0x21f;
    undefined field520_0x220;
    undefined field521_0x221;
    undefined field522_0x222;
    undefined field523_0x223;
    undefined field524_0x224;
    undefined field525_0x225;
    undefined field526_0x226;
    undefined field527_0x227;
    undefined field528_0x228;
    undefined field529_0x229;
    undefined field530_0x22a;
    undefined field531_0x22b;
    undefined field532_0x22c;
    undefined field533_0x22d;
    undefined field534_0x22e;
    undefined field535_0x22f;
    undefined field536_0x230;
    undefined field537_0x231;
    undefined field538_0x232;
    undefined field539_0x233;
    undefined field540_0x234;
    undefined field541_0x235;
    undefined field542_0x236;
    undefined field543_0x237;
    undefined field544_0x238;
    undefined field545_0x239;
    undefined field546_0x23a;
    undefined field547_0x23b;
    undefined field548_0x23c;
    undefined field549_0x23d;
    undefined field550_0x23e;
    undefined field551_0x23f;
    undefined field552_0x240;
    undefined field553_0x241;
    undefined field554_0x242;
    undefined field555_0x243;
    undefined field556_0x244;
    undefined field557_0x245;
    undefined field558_0x246;
    undefined field559_0x247;
    undefined4 offset_0x248;
    undefined4 offset_0x24c;
};

struct CGaugeCtrl_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CGaugeCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CGaugeCtrl virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CGaugeCtrl virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

struct CGaugeCtrl { // class CGaugeCtrl : CControlBase
    struct CGaugeCtrl_vftable *vftablePtr;
    struct CGaugeCtrl_data CGaugeCtrl_data;
};

typedef struct CHgToolApp CHgToolApp, *PCHgToolApp;

typedef struct CHgToolApp_vftable CHgToolApp_vftable, *PCHgToolApp_vftable;

struct CHgToolApp { // class CHgToolApp : CWinApp
    struct CHgToolApp_vftable *vftablePtr;
};

struct CHgToolApp_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWinApp virtual function #1
    CWinApp * (*deleting_destructor)(void *, byte); // CHgToolApp virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CCmdTarget virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CHgToolApp virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CCmdTarget virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    undefined4 (*vfunction23)(void *); // CHgToolApp virtual function #23
    int (*Run)(void *); // CWinApp virtual function #24
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CWinThread virtual function #25
    int (*PumpMessage)(void *); // CWinThread virtual function #26
    int (*OnIdle)(void *, long); // CWinApp virtual function #27
    int (*IsIdleMessage)(void *, struct tagMSG *); // CWinThread virtual function #28
    undefined4 (*vfunction29)(void *); // CHgToolApp virtual function #29
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


// WARNING! conflicting data type names: /ClassDataTypes/CAdFileDownload/CAdFileDownload - /CAdFileDownload

typedef struct CAdFileDownload_vftable CAdFileDownload_vftable, *PCAdFileDownload_vftable;

struct CAdFileDownload_vftable {
    CAdFileDownload * (*deleting_destructor)(void *, byte); // CAdFileDownload virtual function #1
};

typedef struct CAdFileDownload_data CAdFileDownload_data, *PCAdFileDownload_data;

struct CAdFileDownload_data {
    undefined4 offset_0x0;
    int offset_0x4;
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
    undefined field26_0x20;
    undefined field27_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    int offset_0x24;
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
    undefined4 offset_0x58;
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
    undefined4 offset_0x6c;
    undefined1 offset_0x70;
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
    undefined field253_0x10c;
    undefined field254_0x10d;
    undefined field255_0x10e;
    undefined field256_0x10f;
    undefined field257_0x110;
    undefined field258_0x111;
    undefined field259_0x112;
    undefined field260_0x113;
    undefined field261_0x114;
    undefined field262_0x115;
    undefined field263_0x116;
    undefined field264_0x117;
    undefined field265_0x118;
    undefined field266_0x119;
    undefined field267_0x11a;
    undefined field268_0x11b;
    undefined field269_0x11c;
    undefined field270_0x11d;
    undefined field271_0x11e;
    undefined field272_0x11f;
    undefined field273_0x120;
    undefined field274_0x121;
    undefined field275_0x122;
    undefined field276_0x123;
    undefined field277_0x124;
    undefined field278_0x125;
    undefined field279_0x126;
    undefined field280_0x127;
    undefined field281_0x128;
    undefined field282_0x129;
    undefined field283_0x12a;
    undefined field284_0x12b;
    undefined field285_0x12c;
    undefined field286_0x12d;
    undefined field287_0x12e;
    undefined field288_0x12f;
    undefined field289_0x130;
    undefined field290_0x131;
    undefined field291_0x132;
    undefined field292_0x133;
    undefined field293_0x134;
    undefined field294_0x135;
    undefined field295_0x136;
    undefined field296_0x137;
    undefined field297_0x138;
    undefined field298_0x139;
    undefined field299_0x13a;
    undefined field300_0x13b;
    undefined field301_0x13c;
    undefined field302_0x13d;
    undefined field303_0x13e;
    undefined field304_0x13f;
    undefined field305_0x140;
    undefined field306_0x141;
    undefined field307_0x142;
    undefined field308_0x143;
    undefined field309_0x144;
    undefined field310_0x145;
    undefined field311_0x146;
    undefined field312_0x147;
    undefined field313_0x148;
    undefined field314_0x149;
    undefined field315_0x14a;
    undefined field316_0x14b;
    undefined field317_0x14c;
    undefined field318_0x14d;
    undefined field319_0x14e;
    undefined field320_0x14f;
    undefined field321_0x150;
    undefined field322_0x151;
    undefined field323_0x152;
    undefined field324_0x153;
    undefined field325_0x154;
    undefined field326_0x155;
    undefined field327_0x156;
    undefined field328_0x157;
    undefined field329_0x158;
    undefined field330_0x159;
    undefined field331_0x15a;
    undefined field332_0x15b;
    undefined field333_0x15c;
    undefined field334_0x15d;
    undefined field335_0x15e;
    undefined field336_0x15f;
    undefined field337_0x160;
    undefined field338_0x161;
    undefined field339_0x162;
    undefined field340_0x163;
    undefined field341_0x164;
    undefined field342_0x165;
    undefined field343_0x166;
    undefined field344_0x167;
    undefined field345_0x168;
    undefined field346_0x169;
    undefined field347_0x16a;
    undefined field348_0x16b;
    undefined field349_0x16c;
    undefined field350_0x16d;
    undefined field351_0x16e;
    undefined field352_0x16f;
    undefined4 offset_0x170;
    int *offset_0x174;
    undefined1 offset_0x178;
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
    undefined field543_0x234;
    undefined field544_0x235;
    undefined field545_0x236;
    undefined field546_0x237;
    undefined field547_0x238;
    undefined field548_0x239;
    undefined field549_0x23a;
    undefined field550_0x23b;
    undefined field551_0x23c;
    undefined field552_0x23d;
    undefined field553_0x23e;
    undefined field554_0x23f;
    undefined field555_0x240;
    undefined field556_0x241;
    undefined field557_0x242;
    undefined field558_0x243;
    undefined field559_0x244;
    undefined field560_0x245;
    undefined field561_0x246;
    undefined field562_0x247;
    undefined field563_0x248;
    undefined field564_0x249;
    undefined field565_0x24a;
    undefined field566_0x24b;
    undefined field567_0x24c;
    undefined field568_0x24d;
    undefined field569_0x24e;
    undefined field570_0x24f;
    undefined field571_0x250;
    undefined field572_0x251;
    undefined field573_0x252;
    undefined field574_0x253;
    undefined field575_0x254;
    undefined field576_0x255;
    undefined field577_0x256;
    undefined field578_0x257;
    undefined field579_0x258;
    undefined field580_0x259;
    undefined field581_0x25a;
    undefined field582_0x25b;
    undefined field583_0x25c;
    undefined field584_0x25d;
    undefined field585_0x25e;
    undefined field586_0x25f;
    undefined field587_0x260;
    undefined field588_0x261;
    undefined field589_0x262;
    undefined field590_0x263;
    undefined field591_0x264;
    undefined field592_0x265;
    undefined field593_0x266;
    undefined field594_0x267;
    undefined field595_0x268;
    undefined field596_0x269;
    undefined field597_0x26a;
    undefined field598_0x26b;
    undefined field599_0x26c;
    undefined field600_0x26d;
    undefined field601_0x26e;
    undefined field602_0x26f;
    undefined field603_0x270;
    undefined field604_0x271;
    undefined field605_0x272;
    undefined field606_0x273;
    undefined field607_0x274;
    undefined field608_0x275;
    undefined field609_0x276;
    undefined field610_0x277;
    undefined field611_0x278;
    undefined field612_0x279;
    undefined field613_0x27a;
    undefined field614_0x27b;
    undefined field615_0x27c;
    undefined field616_0x27d;
    undefined field617_0x27e;
    undefined field618_0x27f;
    undefined field619_0x280;
    undefined field620_0x281;
    undefined field621_0x282;
    undefined field622_0x283;
    undefined field623_0x284;
    undefined field624_0x285;
    undefined field625_0x286;
    undefined field626_0x287;
    undefined field627_0x288;
    undefined field628_0x289;
    undefined field629_0x28a;
    undefined field630_0x28b;
    undefined field631_0x28c;
    undefined field632_0x28d;
    undefined field633_0x28e;
    undefined field634_0x28f;
    undefined field635_0x290;
    undefined field636_0x291;
    undefined field637_0x292;
    undefined field638_0x293;
    undefined field639_0x294;
    undefined field640_0x295;
    undefined field641_0x296;
    undefined field642_0x297;
    undefined field643_0x298;
    undefined field644_0x299;
    undefined field645_0x29a;
    undefined field646_0x29b;
    undefined field647_0x29c;
    undefined field648_0x29d;
    undefined field649_0x29e;
    undefined field650_0x29f;
    undefined field651_0x2a0;
    undefined field652_0x2a1;
    undefined field653_0x2a2;
    undefined field654_0x2a3;
    undefined field655_0x2a4;
    undefined field656_0x2a5;
    undefined field657_0x2a6;
    undefined field658_0x2a7;
    undefined field659_0x2a8;
    undefined field660_0x2a9;
    undefined field661_0x2aa;
    undefined field662_0x2ab;
    undefined field663_0x2ac;
    undefined field664_0x2ad;
    undefined field665_0x2ae;
    undefined field666_0x2af;
    undefined field667_0x2b0;
    undefined field668_0x2b1;
    undefined field669_0x2b2;
    undefined field670_0x2b3;
    undefined field671_0x2b4;
    undefined field672_0x2b5;
    undefined field673_0x2b6;
    undefined field674_0x2b7;
    undefined field675_0x2b8;
    undefined field676_0x2b9;
    undefined field677_0x2ba;
    undefined field678_0x2bb;
    undefined field679_0x2bc;
    undefined field680_0x2bd;
    undefined field681_0x2be;
    undefined field682_0x2bf;
    undefined field683_0x2c0;
    undefined field684_0x2c1;
    undefined field685_0x2c2;
    undefined field686_0x2c3;
    undefined field687_0x2c4;
    undefined field688_0x2c5;
    undefined field689_0x2c6;
    undefined field690_0x2c7;
    undefined field691_0x2c8;
    undefined field692_0x2c9;
    undefined field693_0x2ca;
    undefined field694_0x2cb;
    undefined field695_0x2cc;
    undefined field696_0x2cd;
    undefined field697_0x2ce;
    undefined field698_0x2cf;
    undefined field699_0x2d0;
    undefined field700_0x2d1;
    undefined field701_0x2d2;
    undefined field702_0x2d3;
    undefined field703_0x2d4;
    undefined field704_0x2d5;
    undefined field705_0x2d6;
    undefined field706_0x2d7;
    undefined field707_0x2d8;
    undefined field708_0x2d9;
    undefined field709_0x2da;
    undefined field710_0x2db;
    undefined field711_0x2dc;
    undefined field712_0x2dd;
    undefined field713_0x2de;
    undefined field714_0x2df;
    undefined field715_0x2e0;
    undefined field716_0x2e1;
    undefined field717_0x2e2;
    undefined field718_0x2e3;
    undefined field719_0x2e4;
    undefined field720_0x2e5;
    undefined field721_0x2e6;
    undefined field722_0x2e7;
    undefined field723_0x2e8;
    undefined field724_0x2e9;
    undefined field725_0x2ea;
    undefined field726_0x2eb;
    undefined field727_0x2ec;
    undefined field728_0x2ed;
    undefined field729_0x2ee;
    undefined field730_0x2ef;
    undefined field731_0x2f0;
    undefined field732_0x2f1;
    undefined field733_0x2f2;
    undefined field734_0x2f3;
    undefined field735_0x2f4;
    undefined field736_0x2f5;
    undefined field737_0x2f6;
    undefined field738_0x2f7;
    undefined field739_0x2f8;
    undefined field740_0x2f9;
    undefined field741_0x2fa;
    undefined field742_0x2fb;
    undefined field743_0x2fc;
    undefined field744_0x2fd;
    undefined field745_0x2fe;
    undefined field746_0x2ff;
    undefined field747_0x300;
    undefined field748_0x301;
    undefined field749_0x302;
    undefined field750_0x303;
    undefined field751_0x304;
    undefined field752_0x305;
    undefined field753_0x306;
    undefined field754_0x307;
    undefined field755_0x308;
    undefined field756_0x309;
    undefined field757_0x30a;
    undefined field758_0x30b;
    undefined field759_0x30c;
    undefined field760_0x30d;
    undefined field761_0x30e;
    undefined field762_0x30f;
    undefined field763_0x310;
    undefined field764_0x311;
    undefined field765_0x312;
    undefined field766_0x313;
    undefined field767_0x314;
    undefined field768_0x315;
    undefined field769_0x316;
    undefined field770_0x317;
    undefined field771_0x318;
    undefined field772_0x319;
    undefined field773_0x31a;
    undefined field774_0x31b;
    undefined field775_0x31c;
    undefined field776_0x31d;
    undefined field777_0x31e;
    undefined field778_0x31f;
    undefined field779_0x320;
    undefined field780_0x321;
    undefined field781_0x322;
    undefined field782_0x323;
    undefined field783_0x324;
    undefined field784_0x325;
    undefined field785_0x326;
    undefined field786_0x327;
    undefined field787_0x328;
    undefined field788_0x329;
    undefined field789_0x32a;
    undefined field790_0x32b;
    undefined field791_0x32c;
    undefined field792_0x32d;
    undefined field793_0x32e;
    undefined field794_0x32f;
    undefined field795_0x330;
    undefined field796_0x331;
    undefined field797_0x332;
    undefined field798_0x333;
    undefined field799_0x334;
    undefined field800_0x335;
    undefined field801_0x336;
    undefined field802_0x337;
    undefined field803_0x338;
    undefined field804_0x339;
    undefined field805_0x33a;
    undefined field806_0x33b;
    undefined field807_0x33c;
    undefined field808_0x33d;
    undefined field809_0x33e;
    undefined field810_0x33f;
    undefined field811_0x340;
    undefined field812_0x341;
    undefined field813_0x342;
    undefined field814_0x343;
    undefined field815_0x344;
    undefined field816_0x345;
    undefined field817_0x346;
    undefined field818_0x347;
    undefined field819_0x348;
    undefined field820_0x349;
    undefined field821_0x34a;
    undefined field822_0x34b;
    undefined field823_0x34c;
    undefined field824_0x34d;
    undefined field825_0x34e;
    undefined field826_0x34f;
    undefined field827_0x350;
    undefined field828_0x351;
    undefined field829_0x352;
    undefined field830_0x353;
    undefined field831_0x354;
    undefined field832_0x355;
    undefined field833_0x356;
    undefined field834_0x357;
    undefined field835_0x358;
    undefined field836_0x359;
    undefined field837_0x35a;
    undefined field838_0x35b;
    undefined field839_0x35c;
    undefined field840_0x35d;
    undefined field841_0x35e;
    undefined field842_0x35f;
    undefined field843_0x360;
    undefined field844_0x361;
    undefined field845_0x362;
    undefined field846_0x363;
    undefined field847_0x364;
    undefined field848_0x365;
    undefined field849_0x366;
    undefined field850_0x367;
    undefined field851_0x368;
    undefined field852_0x369;
    undefined field853_0x36a;
    undefined field854_0x36b;
    undefined field855_0x36c;
    undefined field856_0x36d;
    undefined field857_0x36e;
    undefined field858_0x36f;
    undefined field859_0x370;
    undefined field860_0x371;
    undefined field861_0x372;
    undefined field862_0x373;
    undefined field863_0x374;
    undefined field864_0x375;
    undefined field865_0x376;
    undefined field866_0x377;
    undefined field867_0x378;
    undefined field868_0x379;
    undefined field869_0x37a;
    undefined field870_0x37b;
    HANDLE offset_0x37c;
    undefined field872_0x380;
    undefined field873_0x381;
    undefined field874_0x382;
    undefined field875_0x383;
    undefined field876_0x384;
    undefined field877_0x385;
    undefined field878_0x386;
    undefined field879_0x387;
    undefined field880_0x388;
    undefined field881_0x389;
    undefined field882_0x38a;
    undefined field883_0x38b;
    undefined field884_0x38c;
    undefined field885_0x38d;
    undefined field886_0x38e;
    undefined field887_0x38f;
    undefined field888_0x390;
    undefined field889_0x391;
    undefined field890_0x392;
    undefined field891_0x393;
    undefined field892_0x394;
    undefined field893_0x395;
    undefined field894_0x396;
    undefined field895_0x397;
    undefined field896_0x398;
    undefined field897_0x399;
    undefined field898_0x39a;
    undefined field899_0x39b;
    undefined field900_0x39c;
    undefined field901_0x39d;
    undefined field902_0x39e;
    undefined field903_0x39f;
    undefined field904_0x3a0;
    undefined field905_0x3a1;
    undefined field906_0x3a2;
    undefined field907_0x3a3;
    undefined field908_0x3a4;
    undefined field909_0x3a5;
    undefined field910_0x3a6;
    undefined field911_0x3a7;
    undefined field912_0x3a8;
    undefined field913_0x3a9;
    undefined field914_0x3aa;
    undefined field915_0x3ab;
    undefined field916_0x3ac;
    undefined field917_0x3ad;
    undefined field918_0x3ae;
    undefined field919_0x3af;
    undefined field920_0x3b0;
    undefined field921_0x3b1;
    undefined field922_0x3b2;
    undefined field923_0x3b3;
    undefined field924_0x3b4;
    undefined field925_0x3b5;
    undefined field926_0x3b6;
    undefined field927_0x3b7;
    undefined field928_0x3b8;
    undefined field929_0x3b9;
    undefined field930_0x3ba;
    undefined field931_0x3bb;
    undefined field932_0x3bc;
    undefined field933_0x3bd;
    undefined field934_0x3be;
    undefined field935_0x3bf;
    undefined field936_0x3c0;
    undefined field937_0x3c1;
    undefined field938_0x3c2;
    undefined field939_0x3c3;
    undefined field940_0x3c4;
    undefined field941_0x3c5;
    undefined field942_0x3c6;
    undefined field943_0x3c7;
    undefined field944_0x3c8;
    undefined field945_0x3c9;
    undefined field946_0x3ca;
    undefined field947_0x3cb;
    undefined field948_0x3cc;
    undefined field949_0x3cd;
    undefined field950_0x3ce;
    undefined field951_0x3cf;
    undefined field952_0x3d0;
    undefined field953_0x3d1;
    undefined field954_0x3d2;
    undefined field955_0x3d3;
    undefined field956_0x3d4;
    undefined field957_0x3d5;
    undefined field958_0x3d6;
    undefined field959_0x3d7;
    undefined field960_0x3d8;
    undefined field961_0x3d9;
    undefined field962_0x3da;
    undefined field963_0x3db;
    undefined field964_0x3dc;
    undefined field965_0x3dd;
    undefined field966_0x3de;
    undefined field967_0x3df;
    undefined field968_0x3e0;
    undefined field969_0x3e1;
    undefined field970_0x3e2;
    undefined field971_0x3e3;
    undefined field972_0x3e4;
    undefined field973_0x3e5;
    undefined field974_0x3e6;
    undefined field975_0x3e7;
    undefined field976_0x3e8;
    undefined field977_0x3e9;
    undefined field978_0x3ea;
    undefined field979_0x3eb;
    undefined field980_0x3ec;
    undefined field981_0x3ed;
    undefined field982_0x3ee;
    undefined field983_0x3ef;
    undefined field984_0x3f0;
    undefined field985_0x3f1;
    undefined field986_0x3f2;
    undefined field987_0x3f3;
    undefined field988_0x3f4;
    undefined field989_0x3f5;
    undefined field990_0x3f6;
    undefined field991_0x3f7;
    undefined field992_0x3f8;
    undefined field993_0x3f9;
    undefined field994_0x3fa;
    undefined field995_0x3fb;
    undefined field996_0x3fc;
    undefined field997_0x3fd;
    undefined field998_0x3fe;
    undefined field999_0x3ff;
    undefined field1000_0x400;
    undefined field1001_0x401;
    undefined field1002_0x402;
    undefined field1003_0x403;
    undefined field1004_0x404;
    undefined field1005_0x405;
    undefined field1006_0x406;
    undefined field1007_0x407;
    undefined field1008_0x408;
    undefined field1009_0x409;
    undefined field1010_0x40a;
    undefined field1011_0x40b;
    undefined field1012_0x40c;
    undefined field1013_0x40d;
    undefined field1014_0x40e;
    undefined field1015_0x40f;
    undefined field1016_0x410;
    undefined field1017_0x411;
    undefined field1018_0x412;
    undefined field1019_0x413;
    undefined field1020_0x414;
    undefined field1021_0x415;
    undefined field1022_0x416;
    undefined field1023_0x417;
    undefined field1024_0x418;
    undefined field1025_0x419;
    undefined field1026_0x41a;
    undefined field1027_0x41b;
    undefined field1028_0x41c;
    undefined field1029_0x41d;
    undefined field1030_0x41e;
    undefined field1031_0x41f;
    undefined field1032_0x420;
    undefined field1033_0x421;
    undefined field1034_0x422;
    undefined field1035_0x423;
    undefined field1036_0x424;
    undefined field1037_0x425;
    undefined field1038_0x426;
    undefined field1039_0x427;
    undefined field1040_0x428;
    undefined field1041_0x429;
    undefined field1042_0x42a;
    undefined field1043_0x42b;
    undefined field1044_0x42c;
    undefined field1045_0x42d;
    undefined field1046_0x42e;
    undefined field1047_0x42f;
    undefined field1048_0x430;
    undefined field1049_0x431;
    undefined field1050_0x432;
    undefined field1051_0x433;
    undefined field1052_0x434;
    undefined field1053_0x435;
    undefined field1054_0x436;
    undefined field1055_0x437;
    undefined field1056_0x438;
    undefined field1057_0x439;
    undefined field1058_0x43a;
    undefined field1059_0x43b;
    undefined field1060_0x43c;
    undefined field1061_0x43d;
    undefined field1062_0x43e;
    undefined field1063_0x43f;
    undefined field1064_0x440;
    undefined field1065_0x441;
    undefined field1066_0x442;
    undefined field1067_0x443;
    undefined field1068_0x444;
    undefined field1069_0x445;
    undefined field1070_0x446;
    undefined field1071_0x447;
    undefined field1072_0x448;
    undefined field1073_0x449;
    undefined field1074_0x44a;
    undefined field1075_0x44b;
    undefined field1076_0x44c;
    undefined field1077_0x44d;
    undefined field1078_0x44e;
    undefined field1079_0x44f;
    undefined field1080_0x450;
    undefined field1081_0x451;
    undefined field1082_0x452;
    undefined field1083_0x453;
    undefined field1084_0x454;
    undefined field1085_0x455;
    undefined field1086_0x456;
    undefined field1087_0x457;
    undefined field1088_0x458;
    undefined field1089_0x459;
    undefined field1090_0x45a;
    undefined field1091_0x45b;
    undefined field1092_0x45c;
    undefined field1093_0x45d;
    undefined field1094_0x45e;
    undefined field1095_0x45f;
    undefined field1096_0x460;
    undefined field1097_0x461;
    undefined field1098_0x462;
    undefined field1099_0x463;
    undefined field1100_0x464;
    undefined field1101_0x465;
    undefined field1102_0x466;
    undefined field1103_0x467;
    undefined field1104_0x468;
    undefined field1105_0x469;
    undefined field1106_0x46a;
    undefined field1107_0x46b;
    undefined field1108_0x46c;
    undefined field1109_0x46d;
    undefined field1110_0x46e;
    undefined field1111_0x46f;
    undefined field1112_0x470;
    undefined field1113_0x471;
    undefined field1114_0x472;
    undefined field1115_0x473;
    undefined field1116_0x474;
    undefined field1117_0x475;
    undefined field1118_0x476;
    undefined field1119_0x477;
    undefined field1120_0x478;
    undefined field1121_0x479;
    undefined field1122_0x47a;
    undefined field1123_0x47b;
    undefined field1124_0x47c;
    undefined field1125_0x47d;
    undefined field1126_0x47e;
    undefined field1127_0x47f;
    undefined field1128_0x480;
    undefined field1129_0x481;
    undefined field1130_0x482;
    undefined field1131_0x483;
    undefined field1132_0x484;
    undefined field1133_0x485;
    undefined field1134_0x486;
    undefined field1135_0x487;
    undefined field1136_0x488;
    undefined field1137_0x489;
    undefined field1138_0x48a;
    undefined field1139_0x48b;
    undefined field1140_0x48c;
    undefined field1141_0x48d;
    undefined field1142_0x48e;
    undefined field1143_0x48f;
    undefined field1144_0x490;
    undefined field1145_0x491;
    undefined field1146_0x492;
    undefined field1147_0x493;
    undefined field1148_0x494;
    undefined field1149_0x495;
    undefined field1150_0x496;
    undefined field1151_0x497;
    undefined field1152_0x498;
    undefined field1153_0x499;
    undefined field1154_0x49a;
    undefined field1155_0x49b;
    undefined field1156_0x49c;
    undefined field1157_0x49d;
    undefined field1158_0x49e;
    undefined field1159_0x49f;
    undefined field1160_0x4a0;
    undefined field1161_0x4a1;
    undefined field1162_0x4a2;
    undefined field1163_0x4a3;
    undefined field1164_0x4a4;
    undefined field1165_0x4a5;
    undefined field1166_0x4a6;
    undefined field1167_0x4a7;
    undefined field1168_0x4a8;
    undefined field1169_0x4a9;
    undefined field1170_0x4aa;
    undefined field1171_0x4ab;
    undefined field1172_0x4ac;
    undefined field1173_0x4ad;
    undefined field1174_0x4ae;
    undefined field1175_0x4af;
    undefined field1176_0x4b0;
    undefined field1177_0x4b1;
    undefined field1178_0x4b2;
    undefined field1179_0x4b3;
    undefined field1180_0x4b4;
    undefined field1181_0x4b5;
    undefined field1182_0x4b6;
    undefined field1183_0x4b7;
    undefined field1184_0x4b8;
    undefined field1185_0x4b9;
    undefined field1186_0x4ba;
    undefined field1187_0x4bb;
    undefined field1188_0x4bc;
    undefined field1189_0x4bd;
    undefined field1190_0x4be;
    undefined field1191_0x4bf;
    undefined field1192_0x4c0;
    undefined field1193_0x4c1;
    undefined field1194_0x4c2;
    undefined field1195_0x4c3;
    undefined field1196_0x4c4;
    undefined field1197_0x4c5;
    undefined field1198_0x4c6;
    undefined field1199_0x4c7;
    undefined field1200_0x4c8;
    undefined field1201_0x4c9;
    undefined field1202_0x4ca;
    undefined field1203_0x4cb;
    undefined field1204_0x4cc;
    undefined field1205_0x4cd;
    undefined field1206_0x4ce;
    undefined field1207_0x4cf;
    undefined field1208_0x4d0;
    undefined field1209_0x4d1;
    undefined field1210_0x4d2;
    undefined field1211_0x4d3;
    undefined field1212_0x4d4;
    undefined field1213_0x4d5;
    undefined field1214_0x4d6;
    undefined field1215_0x4d7;
    undefined field1216_0x4d8;
    undefined field1217_0x4d9;
    undefined field1218_0x4da;
    undefined field1219_0x4db;
    undefined field1220_0x4dc;
    undefined field1221_0x4dd;
    undefined field1222_0x4de;
    undefined field1223_0x4df;
    undefined field1224_0x4e0;
    undefined field1225_0x4e1;
    undefined field1226_0x4e2;
    undefined field1227_0x4e3;
    undefined field1228_0x4e4;
    undefined field1229_0x4e5;
    undefined field1230_0x4e6;
    undefined field1231_0x4e7;
    undefined field1232_0x4e8;
    undefined field1233_0x4e9;
    undefined field1234_0x4ea;
    undefined field1235_0x4eb;
    undefined field1236_0x4ec;
    undefined field1237_0x4ed;
    undefined field1238_0x4ee;
    undefined field1239_0x4ef;
    undefined field1240_0x4f0;
    undefined field1241_0x4f1;
    undefined field1242_0x4f2;
    undefined field1243_0x4f3;
    undefined field1244_0x4f4;
    undefined field1245_0x4f5;
    undefined field1246_0x4f6;
    undefined field1247_0x4f7;
    undefined field1248_0x4f8;
    undefined field1249_0x4f9;
    undefined field1250_0x4fa;
    undefined field1251_0x4fb;
    undefined field1252_0x4fc;
    undefined field1253_0x4fd;
    undefined field1254_0x4fe;
    undefined field1255_0x4ff;
    undefined field1256_0x500;
    undefined field1257_0x501;
    undefined field1258_0x502;
    undefined field1259_0x503;
    undefined field1260_0x504;
    undefined field1261_0x505;
    undefined field1262_0x506;
    undefined field1263_0x507;
    undefined field1264_0x508;
    undefined field1265_0x509;
    undefined field1266_0x50a;
    undefined field1267_0x50b;
    undefined field1268_0x50c;
    undefined field1269_0x50d;
    undefined field1270_0x50e;
    undefined field1271_0x50f;
    undefined field1272_0x510;
    undefined field1273_0x511;
    undefined field1274_0x512;
    undefined field1275_0x513;
    undefined field1276_0x514;
    undefined field1277_0x515;
    undefined field1278_0x516;
    undefined field1279_0x517;
    undefined field1280_0x518;
    undefined field1281_0x519;
    undefined field1282_0x51a;
    undefined field1283_0x51b;
    undefined field1284_0x51c;
    undefined field1285_0x51d;
    undefined field1286_0x51e;
    undefined field1287_0x51f;
    undefined field1288_0x520;
    undefined field1289_0x521;
    undefined field1290_0x522;
    undefined field1291_0x523;
    undefined field1292_0x524;
    undefined field1293_0x525;
    undefined field1294_0x526;
    undefined field1295_0x527;
    undefined field1296_0x528;
    undefined field1297_0x529;
    undefined field1298_0x52a;
    undefined field1299_0x52b;
    undefined field1300_0x52c;
    undefined field1301_0x52d;
    undefined field1302_0x52e;
    undefined field1303_0x52f;
    undefined field1304_0x530;
    undefined field1305_0x531;
    undefined field1306_0x532;
    undefined field1307_0x533;
    undefined field1308_0x534;
    undefined field1309_0x535;
    undefined field1310_0x536;
    undefined field1311_0x537;
    undefined field1312_0x538;
    undefined field1313_0x539;
    undefined field1314_0x53a;
    undefined field1315_0x53b;
    undefined field1316_0x53c;
    undefined field1317_0x53d;
    undefined field1318_0x53e;
    undefined field1319_0x53f;
    undefined field1320_0x540;
    undefined field1321_0x541;
    undefined field1322_0x542;
    undefined field1323_0x543;
    undefined field1324_0x544;
    undefined field1325_0x545;
    undefined field1326_0x546;
    undefined field1327_0x547;
    undefined field1328_0x548;
    undefined field1329_0x549;
    undefined field1330_0x54a;
    undefined field1331_0x54b;
    undefined field1332_0x54c;
    undefined field1333_0x54d;
    undefined field1334_0x54e;
    undefined field1335_0x54f;
    undefined field1336_0x550;
    undefined field1337_0x551;
    undefined field1338_0x552;
    undefined field1339_0x553;
    undefined field1340_0x554;
    undefined field1341_0x555;
    undefined field1342_0x556;
    undefined field1343_0x557;
    undefined field1344_0x558;
    undefined field1345_0x559;
    undefined field1346_0x55a;
    undefined field1347_0x55b;
    undefined field1348_0x55c;
    undefined field1349_0x55d;
    undefined field1350_0x55e;
    undefined field1351_0x55f;
    undefined field1352_0x560;
    undefined field1353_0x561;
    undefined field1354_0x562;
    undefined field1355_0x563;
    undefined field1356_0x564;
    undefined field1357_0x565;
    undefined field1358_0x566;
    undefined field1359_0x567;
    undefined field1360_0x568;
    undefined field1361_0x569;
    undefined field1362_0x56a;
    undefined field1363_0x56b;
    undefined field1364_0x56c;
    undefined field1365_0x56d;
    undefined field1366_0x56e;
    undefined field1367_0x56f;
    undefined field1368_0x570;
    undefined field1369_0x571;
    undefined field1370_0x572;
    undefined field1371_0x573;
    undefined field1372_0x574;
    undefined field1373_0x575;
    undefined field1374_0x576;
    undefined field1375_0x577;
    undefined field1376_0x578;
    undefined field1377_0x579;
    undefined field1378_0x57a;
    undefined field1379_0x57b;
    undefined field1380_0x57c;
    undefined field1381_0x57d;
    undefined field1382_0x57e;
    undefined field1383_0x57f;
    undefined field1384_0x580;
    undefined field1385_0x581;
    undefined field1386_0x582;
    undefined field1387_0x583;
    undefined field1388_0x584;
    undefined field1389_0x585;
    undefined field1390_0x586;
    undefined field1391_0x587;
    undefined field1392_0x588;
    undefined field1393_0x589;
    undefined field1394_0x58a;
    undefined field1395_0x58b;
    undefined field1396_0x58c;
    undefined field1397_0x58d;
    undefined field1398_0x58e;
    undefined field1399_0x58f;
    undefined field1400_0x590;
    undefined field1401_0x591;
    undefined field1402_0x592;
    undefined field1403_0x593;
    undefined field1404_0x594;
    undefined field1405_0x595;
    undefined field1406_0x596;
    undefined field1407_0x597;
    undefined field1408_0x598;
    undefined field1409_0x599;
    undefined field1410_0x59a;
    undefined field1411_0x59b;
    undefined field1412_0x59c;
    undefined field1413_0x59d;
    undefined field1414_0x59e;
    undefined field1415_0x59f;
    undefined field1416_0x5a0;
    undefined field1417_0x5a1;
    undefined field1418_0x5a2;
    undefined field1419_0x5a3;
    undefined field1420_0x5a4;
    undefined field1421_0x5a5;
    undefined field1422_0x5a6;
    undefined field1423_0x5a7;
    undefined field1424_0x5a8;
    undefined field1425_0x5a9;
    undefined field1426_0x5aa;
    undefined field1427_0x5ab;
    undefined field1428_0x5ac;
    undefined field1429_0x5ad;
    undefined field1430_0x5ae;
    undefined field1431_0x5af;
    undefined field1432_0x5b0;
    undefined field1433_0x5b1;
    undefined field1434_0x5b2;
    undefined field1435_0x5b3;
    undefined field1436_0x5b4;
    undefined field1437_0x5b5;
    undefined field1438_0x5b6;
    undefined field1439_0x5b7;
    undefined field1440_0x5b8;
    undefined field1441_0x5b9;
    undefined field1442_0x5ba;
    undefined field1443_0x5bb;
    undefined field1444_0x5bc;
    undefined field1445_0x5bd;
    undefined field1446_0x5be;
    undefined field1447_0x5bf;
    undefined field1448_0x5c0;
    undefined field1449_0x5c1;
    undefined field1450_0x5c2;
    undefined field1451_0x5c3;
    undefined field1452_0x5c4;
    undefined field1453_0x5c5;
    undefined field1454_0x5c6;
    undefined field1455_0x5c7;
    undefined field1456_0x5c8;
    undefined field1457_0x5c9;
    undefined field1458_0x5ca;
    undefined field1459_0x5cb;
    undefined field1460_0x5cc;
    undefined field1461_0x5cd;
    undefined field1462_0x5ce;
    undefined field1463_0x5cf;
    undefined field1464_0x5d0;
    undefined field1465_0x5d1;
    undefined field1466_0x5d2;
    undefined field1467_0x5d3;
    undefined field1468_0x5d4;
    undefined field1469_0x5d5;
    undefined field1470_0x5d6;
    undefined field1471_0x5d7;
    undefined field1472_0x5d8;
    undefined field1473_0x5d9;
    undefined field1474_0x5da;
    undefined field1475_0x5db;
    undefined field1476_0x5dc;
    undefined field1477_0x5dd;
    undefined field1478_0x5de;
    undefined field1479_0x5df;
    undefined field1480_0x5e0;
    undefined field1481_0x5e1;
    undefined field1482_0x5e2;
    undefined field1483_0x5e3;
    undefined field1484_0x5e4;
    undefined field1485_0x5e5;
    undefined field1486_0x5e6;
    undefined field1487_0x5e7;
    undefined field1488_0x5e8;
    undefined field1489_0x5e9;
    undefined field1490_0x5ea;
    undefined field1491_0x5eb;
    undefined field1492_0x5ec;
    undefined field1493_0x5ed;
    undefined field1494_0x5ee;
    undefined field1495_0x5ef;
    undefined field1496_0x5f0;
    undefined field1497_0x5f1;
    undefined field1498_0x5f2;
    undefined field1499_0x5f3;
    undefined field1500_0x5f4;
    undefined field1501_0x5f5;
    undefined field1502_0x5f6;
    undefined field1503_0x5f7;
    undefined field1504_0x5f8;
    undefined field1505_0x5f9;
    undefined field1506_0x5fa;
    undefined field1507_0x5fb;
    undefined field1508_0x5fc;
    undefined field1509_0x5fd;
    undefined field1510_0x5fe;
    undefined field1511_0x5ff;
    undefined field1512_0x600;
    undefined field1513_0x601;
    undefined field1514_0x602;
    undefined field1515_0x603;
    undefined field1516_0x604;
    undefined field1517_0x605;
    undefined field1518_0x606;
    undefined field1519_0x607;
    undefined field1520_0x608;
    undefined field1521_0x609;
    undefined field1522_0x60a;
    undefined field1523_0x60b;
    undefined field1524_0x60c;
    undefined field1525_0x60d;
    undefined field1526_0x60e;
    undefined field1527_0x60f;
    undefined field1528_0x610;
    undefined field1529_0x611;
    undefined field1530_0x612;
    undefined field1531_0x613;
    undefined field1532_0x614;
    undefined field1533_0x615;
    undefined field1534_0x616;
    undefined field1535_0x617;
    undefined field1536_0x618;
    undefined field1537_0x619;
    undefined field1538_0x61a;
    undefined field1539_0x61b;
    undefined field1540_0x61c;
    undefined field1541_0x61d;
    undefined field1542_0x61e;
    undefined field1543_0x61f;
    undefined field1544_0x620;
    undefined field1545_0x621;
    undefined field1546_0x622;
    undefined field1547_0x623;
    undefined field1548_0x624;
    undefined field1549_0x625;
    undefined field1550_0x626;
    undefined field1551_0x627;
    undefined field1552_0x628;
    undefined field1553_0x629;
    undefined field1554_0x62a;
    undefined field1555_0x62b;
    undefined field1556_0x62c;
    undefined field1557_0x62d;
    undefined field1558_0x62e;
    undefined field1559_0x62f;
    undefined field1560_0x630;
    undefined field1561_0x631;
    undefined field1562_0x632;
    undefined field1563_0x633;
    undefined field1564_0x634;
    undefined field1565_0x635;
    undefined field1566_0x636;
    undefined field1567_0x637;
    undefined field1568_0x638;
    undefined field1569_0x639;
    undefined field1570_0x63a;
    undefined field1571_0x63b;
    undefined field1572_0x63c;
    undefined field1573_0x63d;
    undefined field1574_0x63e;
    undefined field1575_0x63f;
    undefined field1576_0x640;
    undefined field1577_0x641;
    undefined field1578_0x642;
    undefined field1579_0x643;
    undefined field1580_0x644;
    undefined field1581_0x645;
    undefined field1582_0x646;
    undefined field1583_0x647;
    undefined field1584_0x648;
    undefined field1585_0x649;
    undefined field1586_0x64a;
    undefined field1587_0x64b;
    undefined field1588_0x64c;
    undefined field1589_0x64d;
    undefined field1590_0x64e;
    undefined field1591_0x64f;
    undefined field1592_0x650;
    undefined field1593_0x651;
    undefined field1594_0x652;
    undefined field1595_0x653;
    undefined field1596_0x654;
    undefined field1597_0x655;
    undefined field1598_0x656;
    undefined field1599_0x657;
    undefined field1600_0x658;
    undefined field1601_0x659;
    undefined field1602_0x65a;
    undefined field1603_0x65b;
    undefined field1604_0x65c;
    undefined field1605_0x65d;
    undefined field1606_0x65e;
    undefined field1607_0x65f;
    undefined field1608_0x660;
    undefined field1609_0x661;
    undefined field1610_0x662;
    undefined field1611_0x663;
    undefined field1612_0x664;
    undefined field1613_0x665;
    undefined field1614_0x666;
    undefined field1615_0x667;
    undefined field1616_0x668;
    undefined field1617_0x669;
    undefined field1618_0x66a;
    undefined field1619_0x66b;
    undefined field1620_0x66c;
    undefined field1621_0x66d;
    undefined field1622_0x66e;
    undefined field1623_0x66f;
    undefined field1624_0x670;
    undefined field1625_0x671;
    undefined field1626_0x672;
    undefined field1627_0x673;
    undefined field1628_0x674;
    undefined field1629_0x675;
    undefined field1630_0x676;
    undefined field1631_0x677;
    undefined field1632_0x678;
    undefined field1633_0x679;
    undefined field1634_0x67a;
    undefined field1635_0x67b;
    undefined field1636_0x67c;
    undefined field1637_0x67d;
    undefined field1638_0x67e;
    undefined field1639_0x67f;
    undefined field1640_0x680;
    undefined field1641_0x681;
    undefined field1642_0x682;
    undefined field1643_0x683;
    undefined field1644_0x684;
    undefined field1645_0x685;
    undefined field1646_0x686;
    undefined field1647_0x687;
    undefined field1648_0x688;
    undefined field1649_0x689;
    undefined field1650_0x68a;
    undefined field1651_0x68b;
    undefined field1652_0x68c;
    undefined field1653_0x68d;
    undefined field1654_0x68e;
    undefined field1655_0x68f;
    undefined field1656_0x690;
    undefined field1657_0x691;
    undefined field1658_0x692;
    undefined field1659_0x693;
    undefined field1660_0x694;
    undefined field1661_0x695;
    undefined field1662_0x696;
    undefined field1663_0x697;
    undefined field1664_0x698;
    undefined field1665_0x699;
    undefined field1666_0x69a;
    undefined field1667_0x69b;
    undefined field1668_0x69c;
    undefined field1669_0x69d;
    undefined field1670_0x69e;
    undefined field1671_0x69f;
    undefined field1672_0x6a0;
    undefined field1673_0x6a1;
    undefined field1674_0x6a2;
    undefined field1675_0x6a3;
    undefined field1676_0x6a4;
    undefined field1677_0x6a5;
    undefined field1678_0x6a6;
    undefined field1679_0x6a7;
    undefined field1680_0x6a8;
    undefined field1681_0x6a9;
    undefined field1682_0x6aa;
    undefined field1683_0x6ab;
    undefined field1684_0x6ac;
    undefined field1685_0x6ad;
    undefined field1686_0x6ae;
    undefined field1687_0x6af;
    undefined field1688_0x6b0;
    undefined field1689_0x6b1;
    undefined field1690_0x6b2;
    undefined field1691_0x6b3;
    undefined field1692_0x6b4;
    undefined field1693_0x6b5;
    undefined field1694_0x6b6;
    undefined field1695_0x6b7;
    undefined field1696_0x6b8;
    undefined field1697_0x6b9;
    undefined field1698_0x6ba;
    undefined field1699_0x6bb;
    undefined field1700_0x6bc;
    undefined field1701_0x6bd;
    undefined field1702_0x6be;
    undefined field1703_0x6bf;
    undefined field1704_0x6c0;
    undefined field1705_0x6c1;
    undefined field1706_0x6c2;
    undefined field1707_0x6c3;
    undefined field1708_0x6c4;
    undefined field1709_0x6c5;
    undefined field1710_0x6c6;
    undefined field1711_0x6c7;
    undefined field1712_0x6c8;
    undefined field1713_0x6c9;
    undefined field1714_0x6ca;
    undefined field1715_0x6cb;
    undefined field1716_0x6cc;
    undefined field1717_0x6cd;
    undefined field1718_0x6ce;
    undefined field1719_0x6cf;
    undefined field1720_0x6d0;
    undefined field1721_0x6d1;
    undefined field1722_0x6d2;
    undefined field1723_0x6d3;
    undefined field1724_0x6d4;
    undefined field1725_0x6d5;
    undefined field1726_0x6d6;
    undefined field1727_0x6d7;
    undefined field1728_0x6d8;
    undefined field1729_0x6d9;
    undefined field1730_0x6da;
    undefined field1731_0x6db;
    undefined field1732_0x6dc;
    undefined field1733_0x6dd;
    undefined field1734_0x6de;
    undefined field1735_0x6df;
    undefined field1736_0x6e0;
    undefined field1737_0x6e1;
    undefined field1738_0x6e2;
    undefined field1739_0x6e3;
    undefined field1740_0x6e4;
    undefined field1741_0x6e5;
    undefined field1742_0x6e6;
    undefined field1743_0x6e7;
    undefined field1744_0x6e8;
    undefined field1745_0x6e9;
    undefined field1746_0x6ea;
    undefined field1747_0x6eb;
    undefined field1748_0x6ec;
    undefined field1749_0x6ed;
    undefined field1750_0x6ee;
    undefined field1751_0x6ef;
    undefined field1752_0x6f0;
    undefined field1753_0x6f1;
    undefined field1754_0x6f2;
    undefined field1755_0x6f3;
    undefined field1756_0x6f4;
    undefined field1757_0x6f5;
    undefined field1758_0x6f6;
    undefined field1759_0x6f7;
    undefined field1760_0x6f8;
    undefined field1761_0x6f9;
    undefined field1762_0x6fa;
    undefined field1763_0x6fb;
    undefined field1764_0x6fc;
    undefined field1765_0x6fd;
    undefined field1766_0x6fe;
    undefined field1767_0x6ff;
    undefined field1768_0x700;
    undefined field1769_0x701;
    undefined field1770_0x702;
    undefined field1771_0x703;
    undefined field1772_0x704;
    undefined field1773_0x705;
    undefined field1774_0x706;
    undefined field1775_0x707;
    undefined field1776_0x708;
    undefined field1777_0x709;
    undefined field1778_0x70a;
    undefined field1779_0x70b;
    undefined field1780_0x70c;
    undefined field1781_0x70d;
    undefined field1782_0x70e;
    undefined field1783_0x70f;
    undefined field1784_0x710;
    undefined field1785_0x711;
    undefined field1786_0x712;
    undefined field1787_0x713;
    undefined field1788_0x714;
    undefined field1789_0x715;
    undefined field1790_0x716;
    undefined field1791_0x717;
    undefined field1792_0x718;
    undefined field1793_0x719;
    undefined field1794_0x71a;
    undefined field1795_0x71b;
    undefined field1796_0x71c;
    undefined field1797_0x71d;
    undefined field1798_0x71e;
    undefined field1799_0x71f;
    undefined field1800_0x720;
    undefined field1801_0x721;
    undefined field1802_0x722;
    undefined field1803_0x723;
    undefined field1804_0x724;
    undefined field1805_0x725;
    undefined field1806_0x726;
    undefined field1807_0x727;
    undefined field1808_0x728;
    undefined field1809_0x729;
    undefined field1810_0x72a;
    undefined field1811_0x72b;
    undefined field1812_0x72c;
    undefined field1813_0x72d;
    undefined field1814_0x72e;
    undefined field1815_0x72f;
    undefined field1816_0x730;
    undefined field1817_0x731;
    undefined field1818_0x732;
    undefined field1819_0x733;
    undefined field1820_0x734;
    undefined field1821_0x735;
    undefined field1822_0x736;
    undefined field1823_0x737;
    undefined field1824_0x738;
    undefined field1825_0x739;
    undefined field1826_0x73a;
    undefined field1827_0x73b;
    undefined field1828_0x73c;
    undefined field1829_0x73d;
    undefined field1830_0x73e;
    undefined field1831_0x73f;
    undefined field1832_0x740;
    undefined field1833_0x741;
    undefined field1834_0x742;
    undefined field1835_0x743;
    undefined field1836_0x744;
    undefined field1837_0x745;
    undefined field1838_0x746;
    undefined field1839_0x747;
    undefined field1840_0x748;
    undefined field1841_0x749;
    undefined field1842_0x74a;
    undefined field1843_0x74b;
    undefined field1844_0x74c;
    undefined field1845_0x74d;
    undefined field1846_0x74e;
    undefined field1847_0x74f;
    undefined field1848_0x750;
    undefined field1849_0x751;
    undefined field1850_0x752;
    undefined field1851_0x753;
    undefined field1852_0x754;
    undefined field1853_0x755;
    undefined field1854_0x756;
    undefined field1855_0x757;
    undefined field1856_0x758;
    undefined field1857_0x759;
    undefined field1858_0x75a;
    undefined field1859_0x75b;
    undefined field1860_0x75c;
    undefined field1861_0x75d;
    undefined field1862_0x75e;
    undefined field1863_0x75f;
    undefined field1864_0x760;
    undefined field1865_0x761;
    undefined field1866_0x762;
    undefined field1867_0x763;
    undefined field1868_0x764;
    undefined field1869_0x765;
    undefined field1870_0x766;
    undefined field1871_0x767;
    undefined field1872_0x768;
    undefined field1873_0x769;
    undefined field1874_0x76a;
    undefined field1875_0x76b;
    undefined field1876_0x76c;
    undefined field1877_0x76d;
    undefined field1878_0x76e;
    undefined field1879_0x76f;
    undefined field1880_0x770;
    undefined field1881_0x771;
    undefined field1882_0x772;
    undefined field1883_0x773;
    undefined field1884_0x774;
    undefined field1885_0x775;
    undefined field1886_0x776;
    undefined field1887_0x777;
    undefined field1888_0x778;
    undefined field1889_0x779;
    undefined field1890_0x77a;
    undefined field1891_0x77b;
    undefined field1892_0x77c;
    undefined field1893_0x77d;
    undefined field1894_0x77e;
    undefined field1895_0x77f;
    undefined field1896_0x780;
    undefined field1897_0x781;
    undefined field1898_0x782;
    undefined field1899_0x783;
    undefined field1900_0x784;
    undefined field1901_0x785;
    undefined field1902_0x786;
    undefined field1903_0x787;
    undefined field1904_0x788;
    undefined field1905_0x789;
    undefined field1906_0x78a;
    undefined field1907_0x78b;
    undefined4 offset_0x78c;
};

typedef struct CEdit CEdit, *PCEdit;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CEdit { // class CEdit : CWnd
    struct CWnd CWnd;
};


// WARNING! conflicting data type names: /ClassDataTypes/CMultiBmpButton/CMultiBmpButton - /CMultiBmpButton

typedef struct CMultiBmpButton_vftable1 CMultiBmpButton_vftable1, *PCMultiBmpButton_vftable1;

struct CMultiBmpButton_vftable1 {
    void (*vfunction1)(void *, byte); // CMultiBmpButton virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CMultiBmpButton virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CMultiBmpButton virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMultiBmpButton_vftable0 CMultiBmpButton_vftable0, *PCMultiBmpButton_vftable0;

struct CMultiBmpButton_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CButton virtual function #1
    CMultiBmpButton * (*deleting_destructor)(void *, byte); // CMultiBmpButton virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMultiBmpButton virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CWnd virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CCmdTarget virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    void (*PreSubclassWindow)(void *); // CMultiBmpButton virtual function #23
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CMultiBmpButton virtual function #83
};

typedef struct CTextBox_data CTextBox_data, *PCTextBox_data;

struct CTextBox_data {
    int offset_0x0;
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
    undefined4 offset_0x34;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined4 offset_0x44;
    undefined4 offset_0x48;
    undefined4 offset_0x4c;
};


// WARNING! conflicting data type names: /ClassDataTypes/CTextBox/CTextBox - /CTextBox

typedef struct CTextBox_vftable CTextBox_vftable, *PCTextBox_vftable;

struct CTextBox_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CTextBox virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CTextBox virtual function #6
    void (*UpdateControlForGame)(void *, struct IParam *); // CTextBox virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CListColButtonDraw_vftable CListColButtonDraw_vftable, *PCListColButtonDraw_vftable;

struct CListColButtonDraw_vftable {
    void (*vfunction1)(void *, int *, int *, undefined4, struct CChannelListCtrl *, int); // CListColButtonDraw virtual function #1
    bool (*vfunction2)(void *, int, int, int, int, struct CChannelListCtrl *, int); // CListColButtonDraw virtual function #2
};

typedef struct CListColButtonDraw CListColButtonDraw, *PCListColButtonDraw;

struct CListColButtonDraw { // class CListColButtonDraw : CListColDraw
    struct CListColButtonDraw_vftable *vftablePtr;
};

typedef struct CFileException_vftable CFileException_vftable, *PCFileException_vftable;

struct CFileException_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CFileException virtual function #1
    undefined4 * (*deleting_destructor)(void *, byte); // CFileException virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*GetErrorMessage)(void *, char *, uint, uint *); // CException virtual function #6
    int (*GetErrorMessage)(void *, char *, uint, uint *); // CFileException virtual function #7
    int (*ReportError)(void *, uint, uint); // CException virtual function #8
};

typedef struct CFileException CFileException, *PCFileException;

typedef struct CFileException_data CFileException_data, *PCFileException_data;

struct CFileException_data {
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
};

struct CFileException { // class CFileException : CException
    struct CFileException_vftable *vftablePtr;
    struct CFileException_data CFileException_data;
};

typedef struct CGuildInfo_vftable CGuildInfo_vftable, *PCGuildInfo_vftable;

struct CGuildInfo_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CGuildInfo virtual function #1
};

typedef struct CGuildInfo CGuildInfo, *PCGuildInfo;

struct CGuildInfo { // class CGuildInfo
    struct CGuildInfo_vftable *vftablePtr;
};

typedef struct CThreadQueue<IFunctor*> CThreadQueue<IFunctor*>, *PCThreadQueue<IFunctor*>;

typedef struct CThreadQueue<IFunctor*>_vftable CThreadQueue<IFunctor*>_vftable, *PCThreadQueue<IFunctor*>_vftable;

struct CThreadQueue<IFunctor*> { // class CThreadQueue<IFunctor*>
    struct CThreadQueue<IFunctor*>_vftable *vftablePtr;
};

struct CThreadQueue<IFunctor*>_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CThreadQueue<...> virtual function #1
};

typedef struct CGuildInfoCtrl_vftable1 CGuildInfoCtrl_vftable1, *PCGuildInfoCtrl_vftable1;

struct CGuildInfoCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CGuildInfoCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CGuildInfoCtrl virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CGuildInfoCtrl virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CGuildInfoCtrl/CGuildInfoCtrl - /CGuildInfoCtrl

typedef struct CGuildInfoCtrl_vftable0 CGuildInfoCtrl_vftable0, *PCGuildInfoCtrl_vftable0;

struct CGuildInfoCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGuildInfoCtrl virtual function #1
    CGuildInfoCtrl * (*deleting_destructor)(void *, byte); // CGuildInfoCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CHgMemDC_data CHgMemDC_data, *PCHgMemDC_data;

struct CHgMemDC_data {
    HDC offset_0x0;
    HGDIOBJ offset_0x4;
    HGDIOBJ offset_0x8;
    int offset_0xc;
    int offset_0x10;
    ulong offset_0x14;
};

typedef struct CHgMemDC_vftable CHgMemDC_vftable, *PCHgMemDC_vftable;

struct CHgMemDC_vftable {
    CHgMemDC * (*deleting_destructor)(void *, byte); // CHgMemDC virtual function #1
};

typedef struct CHgMemDC CHgMemDC, *PCHgMemDC;

struct CHgMemDC_data {
    HDC offset_0x0;
    HGDIOBJ offset_0x4;
    HGDIOBJ offset_0x8;
    int offset_0xc;
    int offset_0x10;
    ulong offset_0x14;
};

struct CHgMemDC { // class CHgMemDC
    struct CHgMemDC_vftable *vftablePtr;
    struct CHgMemDC_data CHgMemDC_data;
};

typedef struct CMemDC_vftable CMemDC_vftable, *PCMemDC_vftable;

struct CMemDC_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CDC virtual function #1
    CDC * (*deleting_destructor)(void *, byte); // CMemDC virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    void (*SetAttribDC)(void *, struct HDC__ *); // CDC virtual function #6
    void (*SetOutputDC)(void *, struct HDC__ *); // CDC virtual function #7
    void (*ReleaseAttribDC)(void *); // CDC virtual function #8
    void (*ReleaseOutputDC)(void *); // CDC virtual function #9
    int (*SaveDC)(void *); // CDC virtual function #10
    int (*RestoreDC)(void *, int); // CDC virtual function #11
    CGdiObject * (*SelectStockObject)(void *, int); // CDC virtual function #12
    CFont * (*SelectObject)(void *, struct CFont *); // CDC virtual function #13
    ulong (*SetBkColor)(void *, ulong); // CDC virtual function #14
    ulong (*SetTextColor)(void *, ulong); // CDC virtual function #15
    int (*SetMapMode)(void *, int); // CDC virtual function #16
    CPoint (*SetViewportOrg)(void *, int, int); // CDC virtual function #17
    CPoint (*OffsetViewportOrg)(void *, int, int); // CDC virtual function #18
    CSize (*SetViewportExt)(void *, int, int); // CDC virtual function #19
    CSize (*ScaleViewportExt)(void *, int, int, int, int); // CDC virtual function #20
    CSize (*SetWindowExt)(void *, int, int); // CDC virtual function #21
    CSize (*ScaleWindowExt)(void *, int, int, int, int); // CDC virtual function #22
    int (*GetClipBox)(void *, struct tagRECT *); // CDC virtual function #23
    void (*vfunction24)(void *, int, int); // CMemDC virtual function #24
    void (*vfunction25)(void *, RECT *); // CMemDC virtual function #25
    void (*vfunction26)(void *, undefined4, undefined4, undefined4, undefined4); // CMemDC virtual function #26
    void (*vfunction27)(void *, int, int, UINT, RECT *, LPCSTR, UINT, INT *); // CMemDC virtual function #27
    int * (*vfunction28)(void *, int *, int, int, LPCSTR, int, int, INT *, int); // CMemDC virtual function #28
    void (*vfunction29)(void *, undefined4, undefined4, undefined4, undefined4); // CMemDC virtual function #29
    void (*vfunction30)(void *, LPSTR, int, LPRECT, UINT, LPDRAWTEXTPARAMS); // CMemDC virtual function #30
    void (*vfunction31)(void *, int, GRAYSTRINGPROC, LPARAM, int, int, int, int, int); // CMemDC virtual function #31
    void (*vfunction32)(void *, int, int, LPCSTR, LPVOID); // CMemDC virtual function #32
};

typedef struct CMemDC CMemDC, *PCMemDC;

struct CMemDC { // class CMemDC : CDC
    struct CMemDC_vftable *vftablePtr;
};

typedef struct CHgDDB16_vftable CHgDDB16_vftable, *PCHgDDB16_vftable;

struct CHgDDB16_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgDDB16 virtual function #1
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #2
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #3
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #4
    bool (*Create)(void *, int, int); // CHgDDB16 virtual function #5
    void (*Destroy)(void *); // CHgDDB16 virtual function #6
    void (*__CreateFromBitmapWithColorTable)(void *); // CHgImage16 virtual function #7
    bool (*__CreateFromBitmap16)(void *, uchar *, ulong); // CHgImage16 virtual function #8
    bool (*__CreateFromBitmap24)(void *, uchar *, ulong); // CHgImage16 virtual function #9
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgDDB16/CHgDDB16 - /CHgDDB16

typedef struct CChannelListCtrl_data CChannelListCtrl_data, *PCChannelListCtrl_data;

struct CChannelListCtrl_data {
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
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
    int *offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
    undefined4 offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
    undefined1 offset_0xb4;
    undefined field142_0xb5;
    undefined field143_0xb6;
    undefined field144_0xb7;
    undefined4 offset_0xb8;
};


// WARNING! conflicting data type names: /ClassDataTypes/CChannelListCtrl/CChannelListCtrl - /CChannelListCtrl

typedef struct CChannelListCtrl_vftable0 CChannelListCtrl_vftable0, *PCChannelListCtrl_vftable0;

struct CChannelListCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CChannelListCtrl virtual function #1
    CChannelListCtrl * (*deleting_destructor)(void *, byte); // CChannelListCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CChannelListCtrl virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CChannelListCtrl virtual function #82
    int (*OnSortItem)(void *, ulong, ulong, int, int); // CListCtrlEx virtual function #83
    bool (*DoListCtrlSetting)(void *); // CChannelListCtrl virtual function #84
    void (*GetColumnFormatString)(void *, int, char *, char *, int); // CListCtrlEx virtual function #85
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CListCtrlEx virtual function #86
};

typedef struct CChannelListCtrl_vftable1 CChannelListCtrl_vftable1, *PCChannelListCtrl_vftable1;

struct CChannelListCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CChannelListCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CListCtrlEx virtual function #2
    bool (*DestroyControl)(void *); // CChannelListCtrl virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CChannelListCtrl virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CListRowDraw/CListRowDraw - /CListRowDraw

typedef struct CListRowDraw_data CListRowDraw_data, *PCListRowDraw_data;


// WARNING! conflicting data type names: /Demangler/CDC - /ClassDataTypes/CDC/CDC

typedef struct CGdiObject CGdiObject, *PCGdiObject;

struct CListRowDraw_data {
    undefined4 offset_0x0;
    DWORD offset_0x4;
    DWORD offset_0x8;
    DWORD offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    DWORD offset_0x18;
    DWORD offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined1 offset_0x28;
    undefined field11_0x29;
    undefined field12_0x2a;
    undefined field13_0x2b;
    undefined4 offset_0x2c;
    undefined4 offset_0x30;
    struct CDC *offset_0x34;
    struct CGdiObject *offset_0x38;
    int offset_0x3c;
    undefined4 offset_0x40;
    int offset_0x44;
    undefined field21_0x48;
    undefined field22_0x49;
    undefined field23_0x4a;
    undefined field24_0x4b;
    undefined field25_0x4c;
    undefined field26_0x4d;
    undefined field27_0x4e;
    undefined field28_0x4f;
    undefined field29_0x50;
    undefined field30_0x51;
    undefined field31_0x52;
    undefined field32_0x53;
    undefined field33_0x54;
    undefined field34_0x55;
    undefined field35_0x56;
    undefined field36_0x57;
    undefined field37_0x58;
    undefined field38_0x59;
    undefined field39_0x5a;
    undefined field40_0x5b;
    undefined field41_0x5c;
    undefined field42_0x5d;
    undefined field43_0x5e;
    undefined field44_0x5f;
    undefined field45_0x60;
    undefined field46_0x61;
    undefined field47_0x62;
    undefined field48_0x63;
    int offset_0x64;
    undefined field50_0x68;
    undefined field51_0x69;
    undefined field52_0x6a;
    undefined field53_0x6b;
    undefined field54_0x6c;
    undefined field55_0x6d;
    undefined field56_0x6e;
    undefined field57_0x6f;
    undefined field58_0x70;
    undefined field59_0x71;
    undefined field60_0x72;
    undefined field61_0x73;
    undefined field62_0x74;
    undefined field63_0x75;
    undefined field64_0x76;
    undefined field65_0x77;
    undefined field66_0x78;
    undefined field67_0x79;
    undefined field68_0x7a;
    undefined field69_0x7b;
    int *offset_0x7c;
    undefined4 offset_0x80;
};

struct CGdiObject { // PlaceHolder Structure
};

typedef struct CListRowDraw_vftable CListRowDraw_vftable, *PCListRowDraw_vftable;

struct CListRowDraw_vftable {
    CListRowDraw * (*deleting_destructor)(void *, byte); // CListRowDraw virtual function #1
    void (*Draw)(void *, struct CListCtrlEx *, struct tagDRAWITEMSTRUCT *); // CListRowDraw virtual function #2
    void (*DrawUsingBackBuffer)(void *, struct CListCtrlEx *, struct tagDRAWITEMSTRUCT *); // CListRowDraw virtual function #3
    bool (*HitTest)(void *, struct CListCtrlEx *, struct CPoint *, int *, int *); // CListRowDraw virtual function #4
    bool (*CreateBackBuffer)(void *, struct CDC *, int, int); // CListRowDraw virtual function #5
};

typedef struct type_info_vftable type_info_vftable, *Ptype_info_vftable;

struct type_info_vftable {
    void * (*FID_conflict:`vector_deleting_destructor')(void *, uint); //  virtual function #1
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // class type_info
    struct type_info_vftable *vftablePtr;
};

typedef struct CLineDrawer_vftable CLineDrawer_vftable, *PCLineDrawer_vftable;

struct CLineDrawer_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CLineDrawer virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CLineDrawer virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CLineDrawer_data CLineDrawer_data, *PCLineDrawer_data;

struct CLineDrawer_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};

typedef struct CLineDrawer CLineDrawer, *PCLineDrawer;

struct CLineDrawer_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
};

struct CLineDrawer { // class CLineDrawer : CControlBase
    struct CLineDrawer_vftable *vftablePtr;
    struct CLineDrawer_data CLineDrawer_data;
};

typedef struct CImgChatOutWnd_vftable CImgChatOutWnd_vftable, *PCImgChatOutWnd_vftable;

struct CImgChatOutWnd_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWnd virtual function #1
    CImgChatOutWnd * (*deleting_destructor)(void *, byte); // CImgChatOutWnd virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CImgChatOutWnd virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CImgChatOutWnd_data CImgChatOutWnd_data, *PCImgChatOutWnd_data;

struct CImgChatOutWnd_data {
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
    undefined4 offset_0x50;
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
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
    DWORD offset_0x70;
    undefined4 offset_0x74;
    undefined field105_0x78;
    undefined field106_0x79;
    undefined field107_0x7a;
    undefined field108_0x7b;
    undefined4 offset_0x7c;
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined field114_0x90;
    undefined field115_0x91;
    undefined field116_0x92;
    undefined field117_0x93;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
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
    undefined field134_0xb0;
    undefined field135_0xb1;
    undefined field136_0xb2;
    undefined field137_0xb3;
    undefined field138_0xb4;
    undefined field139_0xb5;
    undefined field140_0xb6;
    undefined field141_0xb7;
    undefined field142_0xb8;
    undefined field143_0xb9;
    undefined field144_0xba;
    undefined field145_0xbb;
    undefined field146_0xbc;
    undefined field147_0xbd;
    undefined field148_0xbe;
    undefined field149_0xbf;
    undefined field150_0xc0;
    undefined field151_0xc1;
    undefined field152_0xc2;
    undefined field153_0xc3;
    undefined field154_0xc4;
    undefined field155_0xc5;
    undefined field156_0xc6;
    undefined field157_0xc7;
    undefined field158_0xc8;
    undefined field159_0xc9;
    undefined field160_0xca;
    undefined field161_0xcb;
    undefined field162_0xcc;
    undefined field163_0xcd;
    undefined field164_0xce;
    undefined field165_0xcf;
    undefined field166_0xd0;
    undefined field167_0xd1;
    undefined field168_0xd2;
    undefined field169_0xd3;
    undefined field170_0xd4;
    undefined field171_0xd5;
    undefined field172_0xd6;
    undefined field173_0xd7;
    undefined field174_0xd8;
    undefined field175_0xd9;
    undefined field176_0xda;
    undefined field177_0xdb;
    undefined field178_0xdc;
    undefined field179_0xdd;
    undefined field180_0xde;
    undefined field181_0xdf;
    undefined field182_0xe0;
    undefined field183_0xe1;
    undefined field184_0xe2;
    undefined field185_0xe3;
    undefined field186_0xe4;
    undefined field187_0xe5;
    undefined field188_0xe6;
    undefined field189_0xe7;
    undefined field190_0xe8;
    undefined field191_0xe9;
    undefined field192_0xea;
    undefined field193_0xeb;
    undefined field194_0xec;
    undefined field195_0xed;
    undefined field196_0xee;
    undefined field197_0xef;
    undefined field198_0xf0;
    undefined field199_0xf1;
    undefined field200_0xf2;
    undefined field201_0xf3;
    undefined field202_0xf4;
    undefined field203_0xf5;
    undefined field204_0xf6;
    undefined field205_0xf7;
    undefined field206_0xf8;
    undefined field207_0xf9;
    undefined field208_0xfa;
    undefined field209_0xfb;
    undefined field210_0xfc;
    undefined field211_0xfd;
    undefined field212_0xfe;
    undefined field213_0xff;
    undefined field214_0x100;
    undefined field215_0x101;
    undefined field216_0x102;
    undefined field217_0x103;
    undefined field218_0x104;
    undefined field219_0x105;
    undefined field220_0x106;
    undefined field221_0x107;
    undefined field222_0x108;
    undefined field223_0x109;
    undefined field224_0x10a;
    undefined field225_0x10b;
    undefined field226_0x10c;
    undefined field227_0x10d;
    undefined field228_0x10e;
    undefined field229_0x10f;
    undefined field230_0x110;
    undefined field231_0x111;
    undefined field232_0x112;
    undefined field233_0x113;
    undefined field234_0x114;
    undefined field235_0x115;
    undefined field236_0x116;
    undefined field237_0x117;
    undefined field238_0x118;
    undefined field239_0x119;
    undefined field240_0x11a;
    undefined field241_0x11b;
    undefined field242_0x11c;
    undefined field243_0x11d;
    undefined field244_0x11e;
    undefined field245_0x11f;
    undefined field246_0x120;
    undefined field247_0x121;
    undefined field248_0x122;
    undefined field249_0x123;
    undefined field250_0x124;
    undefined field251_0x125;
    undefined field252_0x126;
    undefined field253_0x127;
    undefined field254_0x128;
    undefined field255_0x129;
    undefined field256_0x12a;
    undefined field257_0x12b;
    undefined field258_0x12c;
    undefined field259_0x12d;
    undefined field260_0x12e;
    undefined field261_0x12f;
    undefined field262_0x130;
    undefined field263_0x131;
    undefined field264_0x132;
    undefined field265_0x133;
    undefined field266_0x134;
    undefined field267_0x135;
    undefined field268_0x136;
    undefined field269_0x137;
    undefined field270_0x138;
    undefined field271_0x139;
    undefined field272_0x13a;
    undefined field273_0x13b;
    undefined field274_0x13c;
    undefined field275_0x13d;
    undefined field276_0x13e;
    undefined field277_0x13f;
    undefined field278_0x140;
    undefined field279_0x141;
    undefined field280_0x142;
    undefined field281_0x143;
    undefined field282_0x144;
    undefined field283_0x145;
    undefined field284_0x146;
    undefined field285_0x147;
    undefined field286_0x148;
    undefined field287_0x149;
    undefined field288_0x14a;
    undefined field289_0x14b;
    undefined field290_0x14c;
    undefined field291_0x14d;
    undefined field292_0x14e;
    undefined field293_0x14f;
    undefined field294_0x150;
    undefined field295_0x151;
    undefined field296_0x152;
    undefined field297_0x153;
    undefined field298_0x154;
    undefined field299_0x155;
    undefined field300_0x156;
    undefined field301_0x157;
    undefined field302_0x158;
    undefined field303_0x159;
    undefined field304_0x15a;
    undefined field305_0x15b;
    undefined field306_0x15c;
    undefined field307_0x15d;
    undefined field308_0x15e;
    undefined field309_0x15f;
    undefined field310_0x160;
    undefined field311_0x161;
    undefined field312_0x162;
    undefined field313_0x163;
    undefined field314_0x164;
    undefined field315_0x165;
    undefined field316_0x166;
    undefined field317_0x167;
    undefined field318_0x168;
    undefined field319_0x169;
    undefined field320_0x16a;
    undefined field321_0x16b;
    undefined field322_0x16c;
    undefined field323_0x16d;
    undefined field324_0x16e;
    undefined field325_0x16f;
    undefined field326_0x170;
    undefined field327_0x171;
    undefined field328_0x172;
    undefined field329_0x173;
    undefined field330_0x174;
    undefined field331_0x175;
    undefined field332_0x176;
    undefined field333_0x177;
    undefined field334_0x178;
    undefined field335_0x179;
    undefined field336_0x17a;
    undefined field337_0x17b;
    undefined field338_0x17c;
    undefined field339_0x17d;
    undefined field340_0x17e;
    undefined field341_0x17f;
    undefined field342_0x180;
    undefined field343_0x181;
    undefined field344_0x182;
    undefined field345_0x183;
    undefined field346_0x184;
    undefined field347_0x185;
    undefined field348_0x186;
    undefined field349_0x187;
    undefined field350_0x188;
    undefined field351_0x189;
    undefined field352_0x18a;
    undefined field353_0x18b;
    undefined field354_0x18c;
    undefined field355_0x18d;
    undefined field356_0x18e;
    undefined field357_0x18f;
    undefined field358_0x190;
    undefined field359_0x191;
    undefined field360_0x192;
    undefined field361_0x193;
    undefined field362_0x194;
    undefined field363_0x195;
    undefined field364_0x196;
    undefined field365_0x197;
    undefined4 offset_0x198;
    undefined4 offset_0x19c;
    undefined4 offset_0x1a0;
    undefined4 offset_0x1a4;
    undefined4 offset_0x1a8;
    undefined4 offset_0x1ac;
    undefined4 offset_0x1b0;
    undefined field373_0x1b4;
    undefined field374_0x1b5;
    undefined field375_0x1b6;
    undefined field376_0x1b7;
    undefined field377_0x1b8;
    undefined field378_0x1b9;
    undefined field379_0x1ba;
    undefined field380_0x1bb;
    undefined field381_0x1bc;
    undefined field382_0x1bd;
    undefined field383_0x1be;
    undefined field384_0x1bf;
    undefined field385_0x1c0;
    undefined field386_0x1c1;
    undefined field387_0x1c2;
    undefined field388_0x1c3;
    undefined field389_0x1c4;
    undefined field390_0x1c5;
    undefined field391_0x1c6;
    undefined field392_0x1c7;
    undefined field393_0x1c8;
    undefined field394_0x1c9;
    undefined field395_0x1ca;
    undefined field396_0x1cb;
    undefined field397_0x1cc;
    undefined field398_0x1cd;
    undefined field399_0x1ce;
    undefined field400_0x1cf;
    undefined field401_0x1d0;
    undefined field402_0x1d1;
    undefined field403_0x1d2;
    undefined field404_0x1d3;
    undefined field405_0x1d4;
    undefined field406_0x1d5;
    undefined field407_0x1d6;
    undefined field408_0x1d7;
    undefined field409_0x1d8;
    undefined field410_0x1d9;
    undefined field411_0x1da;
    undefined field412_0x1db;
    undefined field413_0x1dc;
    undefined field414_0x1dd;
    undefined field415_0x1de;
    undefined field416_0x1df;
    undefined field417_0x1e0;
    undefined field418_0x1e1;
    undefined field419_0x1e2;
    undefined field420_0x1e3;
    undefined field421_0x1e4;
    undefined field422_0x1e5;
    undefined field423_0x1e6;
    undefined field424_0x1e7;
    undefined field425_0x1e8;
    undefined field426_0x1e9;
    undefined field427_0x1ea;
    undefined field428_0x1eb;
    undefined field429_0x1ec;
    undefined field430_0x1ed;
    undefined field431_0x1ee;
    undefined field432_0x1ef;
    undefined field433_0x1f0;
    undefined field434_0x1f1;
    undefined field435_0x1f2;
    undefined field436_0x1f3;
    undefined field437_0x1f4;
    undefined field438_0x1f5;
    undefined field439_0x1f6;
    undefined field440_0x1f7;
    undefined field441_0x1f8;
    undefined field442_0x1f9;
    undefined field443_0x1fa;
    undefined field444_0x1fb;
    undefined field445_0x1fc;
    undefined field446_0x1fd;
    undefined field447_0x1fe;
    undefined field448_0x1ff;
    undefined field449_0x200;
    undefined field450_0x201;
    undefined field451_0x202;
    undefined field452_0x203;
    undefined field453_0x204;
    undefined field454_0x205;
    undefined field455_0x206;
    undefined field456_0x207;
    undefined field457_0x208;
    undefined field458_0x209;
    undefined field459_0x20a;
    undefined field460_0x20b;
    undefined field461_0x20c;
    undefined field462_0x20d;
    undefined field463_0x20e;
    undefined field464_0x20f;
    undefined field465_0x210;
    undefined field466_0x211;
    undefined field467_0x212;
    undefined field468_0x213;
    undefined field469_0x214;
    undefined field470_0x215;
    undefined field471_0x216;
    undefined field472_0x217;
    undefined4 offset_0x218;
    undefined4 offset_0x21c;
    undefined **offset_0x220;
    undefined4 offset_0x224;
    undefined4 offset_0x228;
    undefined4 offset_0x22c;
    undefined4 offset_0x230;
    undefined4 offset_0x234;
    undefined field481_0x238;
    undefined field482_0x239;
    undefined field483_0x23a;
    undefined field484_0x23b;
    undefined field485_0x23c;
    undefined field486_0x23d;
    undefined field487_0x23e;
    undefined field488_0x23f;
    undefined field489_0x240;
    undefined field490_0x241;
    undefined field491_0x242;
    undefined field492_0x243;
    undefined field493_0x244;
    undefined field494_0x245;
    undefined field495_0x246;
    undefined field496_0x247;
    undefined1 offset_0x248;
    undefined field498_0x249;
    undefined field499_0x24a;
    undefined field500_0x24b;
    undefined4 offset_0x24c;
    undefined4 offset_0x250;
    undefined4 offset_0x254;
    undefined4 offset_0x258;
    undefined4 offset_0x25c;
    undefined4 offset_0x260;
    undefined4 offset_0x264;
    undefined4 offset_0x268;
    undefined4 offset_0x26c;
    undefined4 offset_0x270;
    undefined4 offset_0x274;
    undefined4 offset_0x278;
    undefined4 offset_0x27c;
    undefined4 offset_0x280;
    undefined4 offset_0x284;
    undefined4 offset_0x288;
    undefined4 offset_0x28c;
    undefined4 offset_0x290;
    undefined4 offset_0x294;
    undefined4 offset_0x298;
    undefined4 offset_0x29c;
    undefined4 offset_0x2a0;
    undefined4 offset_0x2a4;
    undefined4 offset_0x2a8;
    undefined4 offset_0x2ac;
    undefined4 offset_0x2b0;
    undefined field527_0x2b4;
    undefined field528_0x2b5;
    undefined field529_0x2b6;
    undefined field530_0x2b7;
    undefined4 offset_0x2b8;
};

typedef struct CImgChatOutWnd CImgChatOutWnd, *PCImgChatOutWnd;

struct CImgChatOutWnd_data {
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
    undefined4 offset_0x50;
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
    undefined4 offset_0x68;
    undefined4 offset_0x6c;
    DWORD offset_0x70;
    undefined4 offset_0x74;
    undefined field105_0x78;
    undefined field106_0x79;
    undefined field107_0x7a;
    undefined field108_0x7b;
    undefined4 offset_0x7c;
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined field114_0x90;
    undefined field115_0x91;
    undefined field116_0x92;
    undefined field117_0x93;
    undefined4 offset_0x94;
    undefined4 offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
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
    undefined field134_0xb0;
    undefined field135_0xb1;
    undefined field136_0xb2;
    undefined field137_0xb3;
    undefined field138_0xb4;
    undefined field139_0xb5;
    undefined field140_0xb6;
    undefined field141_0xb7;
    undefined field142_0xb8;
    undefined field143_0xb9;
    undefined field144_0xba;
    undefined field145_0xbb;
    undefined field146_0xbc;
    undefined field147_0xbd;
    undefined field148_0xbe;
    undefined field149_0xbf;
    undefined field150_0xc0;
    undefined field151_0xc1;
    undefined field152_0xc2;
    undefined field153_0xc3;
    undefined field154_0xc4;
    undefined field155_0xc5;
    undefined field156_0xc6;
    undefined field157_0xc7;
    undefined field158_0xc8;
    undefined field159_0xc9;
    undefined field160_0xca;
    undefined field161_0xcb;
    undefined field162_0xcc;
    undefined field163_0xcd;
    undefined field164_0xce;
    undefined field165_0xcf;
    undefined field166_0xd0;
    undefined field167_0xd1;
    undefined field168_0xd2;
    undefined field169_0xd3;
    undefined field170_0xd4;
    undefined field171_0xd5;
    undefined field172_0xd6;
    undefined field173_0xd7;
    undefined field174_0xd8;
    undefined field175_0xd9;
    undefined field176_0xda;
    undefined field177_0xdb;
    undefined field178_0xdc;
    undefined field179_0xdd;
    undefined field180_0xde;
    undefined field181_0xdf;
    undefined field182_0xe0;
    undefined field183_0xe1;
    undefined field184_0xe2;
    undefined field185_0xe3;
    undefined field186_0xe4;
    undefined field187_0xe5;
    undefined field188_0xe6;
    undefined field189_0xe7;
    undefined field190_0xe8;
    undefined field191_0xe9;
    undefined field192_0xea;
    undefined field193_0xeb;
    undefined field194_0xec;
    undefined field195_0xed;
    undefined field196_0xee;
    undefined field197_0xef;
    undefined field198_0xf0;
    undefined field199_0xf1;
    undefined field200_0xf2;
    undefined field201_0xf3;
    undefined field202_0xf4;
    undefined field203_0xf5;
    undefined field204_0xf6;
    undefined field205_0xf7;
    undefined field206_0xf8;
    undefined field207_0xf9;
    undefined field208_0xfa;
    undefined field209_0xfb;
    undefined field210_0xfc;
    undefined field211_0xfd;
    undefined field212_0xfe;
    undefined field213_0xff;
    undefined field214_0x100;
    undefined field215_0x101;
    undefined field216_0x102;
    undefined field217_0x103;
    undefined field218_0x104;
    undefined field219_0x105;
    undefined field220_0x106;
    undefined field221_0x107;
    undefined field222_0x108;
    undefined field223_0x109;
    undefined field224_0x10a;
    undefined field225_0x10b;
    undefined field226_0x10c;
    undefined field227_0x10d;
    undefined field228_0x10e;
    undefined field229_0x10f;
    undefined field230_0x110;
    undefined field231_0x111;
    undefined field232_0x112;
    undefined field233_0x113;
    undefined field234_0x114;
    undefined field235_0x115;
    undefined field236_0x116;
    undefined field237_0x117;
    undefined field238_0x118;
    undefined field239_0x119;
    undefined field240_0x11a;
    undefined field241_0x11b;
    undefined field242_0x11c;
    undefined field243_0x11d;
    undefined field244_0x11e;
    undefined field245_0x11f;
    undefined field246_0x120;
    undefined field247_0x121;
    undefined field248_0x122;
    undefined field249_0x123;
    undefined field250_0x124;
    undefined field251_0x125;
    undefined field252_0x126;
    undefined field253_0x127;
    undefined field254_0x128;
    undefined field255_0x129;
    undefined field256_0x12a;
    undefined field257_0x12b;
    undefined field258_0x12c;
    undefined field259_0x12d;
    undefined field260_0x12e;
    undefined field261_0x12f;
    undefined field262_0x130;
    undefined field263_0x131;
    undefined field264_0x132;
    undefined field265_0x133;
    undefined field266_0x134;
    undefined field267_0x135;
    undefined field268_0x136;
    undefined field269_0x137;
    undefined field270_0x138;
    undefined field271_0x139;
    undefined field272_0x13a;
    undefined field273_0x13b;
    undefined field274_0x13c;
    undefined field275_0x13d;
    undefined field276_0x13e;
    undefined field277_0x13f;
    undefined field278_0x140;
    undefined field279_0x141;
    undefined field280_0x142;
    undefined field281_0x143;
    undefined field282_0x144;
    undefined field283_0x145;
    undefined field284_0x146;
    undefined field285_0x147;
    undefined field286_0x148;
    undefined field287_0x149;
    undefined field288_0x14a;
    undefined field289_0x14b;
    undefined field290_0x14c;
    undefined field291_0x14d;
    undefined field292_0x14e;
    undefined field293_0x14f;
    undefined field294_0x150;
    undefined field295_0x151;
    undefined field296_0x152;
    undefined field297_0x153;
    undefined field298_0x154;
    undefined field299_0x155;
    undefined field300_0x156;
    undefined field301_0x157;
    undefined field302_0x158;
    undefined field303_0x159;
    undefined field304_0x15a;
    undefined field305_0x15b;
    undefined field306_0x15c;
    undefined field307_0x15d;
    undefined field308_0x15e;
    undefined field309_0x15f;
    undefined field310_0x160;
    undefined field311_0x161;
    undefined field312_0x162;
    undefined field313_0x163;
    undefined field314_0x164;
    undefined field315_0x165;
    undefined field316_0x166;
    undefined field317_0x167;
    undefined field318_0x168;
    undefined field319_0x169;
    undefined field320_0x16a;
    undefined field321_0x16b;
    undefined field322_0x16c;
    undefined field323_0x16d;
    undefined field324_0x16e;
    undefined field325_0x16f;
    undefined field326_0x170;
    undefined field327_0x171;
    undefined field328_0x172;
    undefined field329_0x173;
    undefined field330_0x174;
    undefined field331_0x175;
    undefined field332_0x176;
    undefined field333_0x177;
    undefined field334_0x178;
    undefined field335_0x179;
    undefined field336_0x17a;
    undefined field337_0x17b;
    undefined field338_0x17c;
    undefined field339_0x17d;
    undefined field340_0x17e;
    undefined field341_0x17f;
    undefined field342_0x180;
    undefined field343_0x181;
    undefined field344_0x182;
    undefined field345_0x183;
    undefined field346_0x184;
    undefined field347_0x185;
    undefined field348_0x186;
    undefined field349_0x187;
    undefined field350_0x188;
    undefined field351_0x189;
    undefined field352_0x18a;
    undefined field353_0x18b;
    undefined field354_0x18c;
    undefined field355_0x18d;
    undefined field356_0x18e;
    undefined field357_0x18f;
    undefined field358_0x190;
    undefined field359_0x191;
    undefined field360_0x192;
    undefined field361_0x193;
    undefined field362_0x194;
    undefined field363_0x195;
    undefined field364_0x196;
    undefined field365_0x197;
    undefined4 offset_0x198;
    undefined4 offset_0x19c;
    undefined4 offset_0x1a0;
    undefined4 offset_0x1a4;
    undefined4 offset_0x1a8;
    undefined4 offset_0x1ac;
    undefined4 offset_0x1b0;
    undefined field373_0x1b4;
    undefined field374_0x1b5;
    undefined field375_0x1b6;
    undefined field376_0x1b7;
    undefined field377_0x1b8;
    undefined field378_0x1b9;
    undefined field379_0x1ba;
    undefined field380_0x1bb;
    undefined field381_0x1bc;
    undefined field382_0x1bd;
    undefined field383_0x1be;
    undefined field384_0x1bf;
    undefined field385_0x1c0;
    undefined field386_0x1c1;
    undefined field387_0x1c2;
    undefined field388_0x1c3;
    undefined field389_0x1c4;
    undefined field390_0x1c5;
    undefined field391_0x1c6;
    undefined field392_0x1c7;
    undefined field393_0x1c8;
    undefined field394_0x1c9;
    undefined field395_0x1ca;
    undefined field396_0x1cb;
    undefined field397_0x1cc;
    undefined field398_0x1cd;
    undefined field399_0x1ce;
    undefined field400_0x1cf;
    undefined field401_0x1d0;
    undefined field402_0x1d1;
    undefined field403_0x1d2;
    undefined field404_0x1d3;
    undefined field405_0x1d4;
    undefined field406_0x1d5;
    undefined field407_0x1d6;
    undefined field408_0x1d7;
    undefined field409_0x1d8;
    undefined field410_0x1d9;
    undefined field411_0x1da;
    undefined field412_0x1db;
    undefined field413_0x1dc;
    undefined field414_0x1dd;
    undefined field415_0x1de;
    undefined field416_0x1df;
    undefined field417_0x1e0;
    undefined field418_0x1e1;
    undefined field419_0x1e2;
    undefined field420_0x1e3;
    undefined field421_0x1e4;
    undefined field422_0x1e5;
    undefined field423_0x1e6;
    undefined field424_0x1e7;
    undefined field425_0x1e8;
    undefined field426_0x1e9;
    undefined field427_0x1ea;
    undefined field428_0x1eb;
    undefined field429_0x1ec;
    undefined field430_0x1ed;
    undefined field431_0x1ee;
    undefined field432_0x1ef;
    undefined field433_0x1f0;
    undefined field434_0x1f1;
    undefined field435_0x1f2;
    undefined field436_0x1f3;
    undefined field437_0x1f4;
    undefined field438_0x1f5;
    undefined field439_0x1f6;
    undefined field440_0x1f7;
    undefined field441_0x1f8;
    undefined field442_0x1f9;
    undefined field443_0x1fa;
    undefined field444_0x1fb;
    undefined field445_0x1fc;
    undefined field446_0x1fd;
    undefined field447_0x1fe;
    undefined field448_0x1ff;
    undefined field449_0x200;
    undefined field450_0x201;
    undefined field451_0x202;
    undefined field452_0x203;
    undefined field453_0x204;
    undefined field454_0x205;
    undefined field455_0x206;
    undefined field456_0x207;
    undefined field457_0x208;
    undefined field458_0x209;
    undefined field459_0x20a;
    undefined field460_0x20b;
    undefined field461_0x20c;
    undefined field462_0x20d;
    undefined field463_0x20e;
    undefined field464_0x20f;
    undefined field465_0x210;
    undefined field466_0x211;
    undefined field467_0x212;
    undefined field468_0x213;
    undefined field469_0x214;
    undefined field470_0x215;
    undefined field471_0x216;
    undefined field472_0x217;
    undefined4 offset_0x218;
    undefined4 offset_0x21c;
    undefined **offset_0x220;
    undefined4 offset_0x224;
    undefined4 offset_0x228;
    undefined4 offset_0x22c;
    undefined4 offset_0x230;
    undefined4 offset_0x234;
    undefined field481_0x238;
    undefined field482_0x239;
    undefined field483_0x23a;
    undefined field484_0x23b;
    undefined field485_0x23c;
    undefined field486_0x23d;
    undefined field487_0x23e;
    undefined field488_0x23f;
    undefined field489_0x240;
    undefined field490_0x241;
    undefined field491_0x242;
    undefined field492_0x243;
    undefined field493_0x244;
    undefined field494_0x245;
    undefined field495_0x246;
    undefined field496_0x247;
    undefined1 offset_0x248;
    undefined field498_0x249;
    undefined field499_0x24a;
    undefined field500_0x24b;
    undefined4 offset_0x24c;
    undefined4 offset_0x250;
    undefined4 offset_0x254;
    undefined4 offset_0x258;
    undefined4 offset_0x25c;
    undefined4 offset_0x260;
    undefined4 offset_0x264;
    undefined4 offset_0x268;
    undefined4 offset_0x26c;
    undefined4 offset_0x270;
    undefined4 offset_0x274;
    undefined4 offset_0x278;
    undefined4 offset_0x27c;
    undefined4 offset_0x280;
    undefined4 offset_0x284;
    undefined4 offset_0x288;
    undefined4 offset_0x28c;
    undefined4 offset_0x290;
    undefined4 offset_0x294;
    undefined4 offset_0x298;
    undefined4 offset_0x29c;
    undefined4 offset_0x2a0;
    undefined4 offset_0x2a4;
    undefined4 offset_0x2a8;
    undefined4 offset_0x2ac;
    undefined4 offset_0x2b0;
    undefined field527_0x2b4;
    undefined field528_0x2b5;
    undefined field529_0x2b6;
    undefined field530_0x2b7;
    undefined4 offset_0x2b8;
};

struct CImgChatOutWnd { // class CImgChatOutWnd : CWnd
    struct CImgChatOutWnd_vftable *vftablePtr;
    struct CImgChatOutWnd_data CImgChatOutWnd_data;
};

typedef struct CCustomCheckBox_vftable1 CCustomCheckBox_vftable1, *PCCustomCheckBox_vftable1;

struct CCustomCheckBox_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomCheckBox virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomCheckBox virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CCustomCheckBox/CCustomCheckBox - /CCustomCheckBox

typedef struct CCustomCheckBox_vftable0 CCustomCheckBox_vftable0, *PCCustomCheckBox_vftable0;

struct CCustomCheckBox_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomCheckBox virtual function #1
    CCustomCheckBox * (*deleting_destructor)(void *, byte); // CCustomCheckBox virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CCustomCheckBox_data CCustomCheckBox_data, *PCCustomCheckBox_data;

struct CCustomCheckBox_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};


// WARNING! conflicting data type names: /ClassDataTypes/CMemberListTabCtrl/CMemberListTabCtrl - /CMemberListTabCtrl

typedef struct CMemberListTabCtrl_vftable CMemberListTabCtrl_vftable, *PCMemberListTabCtrl_vftable;

struct CMemberListTabCtrl_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CMemberListTabCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CCustomTabCtrl virtual function #4
    void (*ShowControl)(void *, bool); // CCustomTabCtrl virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomTabCtrl virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    int (*FindAbuseAndReplaceTo)(void *, char); //  virtual function #8
};

typedef struct CMemberListTabCtrl_data CMemberListTabCtrl_data, *PCMemberListTabCtrl_data;

struct CMemberListTabCtrl_data {
    int offset_0x0;
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
    int offset_0x1c;
};

typedef struct CHgImage_vftable CHgImage_vftable, *PCHgImage_vftable;

struct CHgImage_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgImage virtual function #1
    bool (*Create)(void *, char *); // CHgImageBase virtual function #2
    bool (*Create)(void *, char *); // CHgImageBase virtual function #3
    bool (*Create)(void *, char *); // CHgImageBase virtual function #4
    bool (*Create)(void *, int, int); // MSVCR90.DLL CHgImage pure virtual function #5
    void (*Destroy)(void *); // CHgImageBase virtual function #6
    void (*__CreateFromBitmapWithColorTable)(void *); // CHgImage virtual function #7
    bool (*__CreateFromBitmap16)(void *, uchar *, ulong); // CHgImage virtual function #8
    bool (*__CreateFromBitmap24)(void *, uchar *, ulong); // CHgImage virtual function #9
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgImage/CHgImage - /CHgImage


// WARNING! conflicting data type names: /ClassDataTypes/CGdiObject/CGdiObject - /Demangler/CGdiObject

typedef struct CGdiObject_vftable CGdiObject_vftable, *PCGdiObject_vftable;

struct CGdiObject_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CGdiObject virtual function #1
    void * (*deleting_destructor)(void *, uint); // CGdiObject virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

typedef struct CMFunctor<CTabButtons>_vftable CMFunctor<CTabButtons>_vftable, *PCMFunctor<CTabButtons>_vftable;

struct CMFunctor<CTabButtons>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CCustomTabCtrl> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CTabButtons> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CCustomTabCtrl> virtual function #3
};

typedef struct CMFunctor<CTabButtons> CMFunctor<CTabButtons>, *PCMFunctor<CTabButtons>;

typedef struct CMFunctor<CTabButtons>_data CMFunctor<CTabButtons>_data, *PCMFunctor<CTabButtons>_data;

struct CMFunctor<CTabButtons>_data {
    void *offset_0x0;
    undefined *offset_0x4;
};

struct CMFunctor<CTabButtons> { // class CMFunctor<CTabButtons> : IFunctor
    struct CMFunctor<CTabButtons>_vftable *vftablePtr;
    struct CMFunctor<CTabButtons>_data CMFunctor<CTabButtons>_data;
};

typedef struct CEmoticon_data CEmoticon_data, *PCEmoticon_data;

struct CEmoticon_data {
    undefined4 offset_0x0;
    undefined1 offset_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    HGDIOBJ offset_0x8;
};


// WARNING! conflicting data type names: /ClassDataTypes/CEmoticon/CEmoticon - /CEmoticon

typedef struct CEmoticon_vftable CEmoticon_vftable, *PCEmoticon_vftable;

struct CEmoticon_vftable {
    long (*QueryInterface)(void *, void **); // CEmoticon virtual function #1
    ulong (*AddRef)(void *); // CEmoticon virtual function #2
    ulong (*AddRef)(void *); // CEmoticon virtual function #3
    long (*GetData)(void *, struct tagSTGMEDIUM *); // CEmoticon virtual function #4
    long (*EnumFormatEtc)(void *, struct IEnumFORMATETC **); // CEmoticon virtual function #5
    long (*QueryGetData)(void *); // CEmoticon virtual function #6
    long (*EnumFormatEtc)(void *, struct IEnumFORMATETC **); // CEmoticon virtual function #7
    long (*SetData)(void *, struct tagSTGMEDIUM *, int); // CEmoticon virtual function #8
    long (*EnumFormatEtc)(void *, struct IEnumFORMATETC **); // CEmoticon virtual function #9
    long (*DAdvise)(void *, ulong, struct IAdviseSink *, ulong *); // CEmoticon virtual function #10
    long (*DUnadvise)(void *); // CEmoticon virtual function #11
    long (*DUnadvise)(void *); // CEmoticon virtual function #12
};


// WARNING! conflicting data type names: /ClassDataTypes/CMemberListCtrl/CMemberListCtrl - /CMemberListCtrl

typedef struct CMemberListCtrl_vftable0 CMemberListCtrl_vftable0, *PCMemberListCtrl_vftable0;

struct CMemberListCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CMemberListCtrl virtual function #1
    CMemberListCtrl * (*deleting_destructor)(void *, byte); // CMemberListCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CMemberListCtrl virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CChannelListCtrl virtual function #82
    int (*OnSortItem)(void *, ulong, ulong, int, int); // CListCtrlEx virtual function #83
    bool (*DoListCtrlSetting)(void *); // CMemberListCtrl virtual function #84
    void (*GetColumnFormatString)(void *, int, char *, char *, int); // CListCtrlEx virtual function #85
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CListCtrlEx virtual function #86
};

typedef struct CMemberListCtrl_vftable1 CMemberListCtrl_vftable1, *PCMemberListCtrl_vftable1;

struct CMemberListCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CMemberListCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CListCtrlEx virtual function #2
    bool (*DestroyControl)(void *); // CChannelListCtrl virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CListCtrlEx virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CMemberListCtrl_data CMemberListCtrl_data, *PCMemberListCtrl_data;

typedef enum Type {
} Type;

struct CMemberListCtrl_data {
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
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
    int *offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
    enum Type offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
};

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinThread { // class CWinThread : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CWinApp { // class CWinApp : CWinThread
    struct CWinThread CWinThread;
};

typedef struct CFontList_vftable CFontList_vftable, *PCFontList_vftable;

struct CFontList_vftable {
    CFontList * (*deleting_destructor)(void *, byte); // CFontList virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CFontList/CFontList - /CFontList

typedef struct CFontList_data CFontList_data, *PCFontList_data;

struct CFontList_data {
    int offset_0x0;
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
};

typedef struct CSortRoomOption_vftable CSortRoomOption_vftable, *PCSortRoomOption_vftable;

struct CSortRoomOption_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CSortRoomOption virtual function #1
    bool (*vfunction2)(void *, int, int); // CSortRoomOption virtual function #2
};

typedef struct CSortRoomOption_data CSortRoomOption_data, *PCSortRoomOption_data;

struct CSortRoomOption_data {
    char *offset_0x0;
};

typedef struct CSortRoomOption CSortRoomOption, *PCSortRoomOption;

struct CSortRoomOption_data {
    char *offset_0x0;
};

struct CSortRoomOption { // class CSortRoomOption
    struct CSortRoomOption_vftable *vftablePtr;
    struct CSortRoomOption_data CSortRoomOption_data;
};

typedef struct CListCtrl CListCtrl, *PCListCtrl;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CListCtrl { // class CListCtrl : CWnd
    struct CWnd CWnd;
};

typedef struct CHtmlViewCtrl CHtmlViewCtrl, *PCHtmlViewCtrl;

typedef struct CHtmlViewCtrl_vftable CHtmlViewCtrl_vftable, *PCHtmlViewCtrl_vftable;

typedef struct CHtmlViewCtrl_data CHtmlViewCtrl_data, *PCHtmlViewCtrl_data;

struct CHtmlViewCtrl_data {
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
    undefined4 offset_0xf0;
};

struct CHtmlViewCtrl_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CHtmlViewCtrl virtual function #1
    CHtmlView * (*deleting_destructor)(void *, byte); // CHtmlViewCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CView virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CHtmlViewCtrl virtual function #13
    AFX_OLECMDMAP * (*GetCommandMap)(void *); // CCmdTarget virtual function #14
    AFX_DISPMAP * (*GetDispatchMap)(void *); // CCmdTarget virtual function #15
    AFX_CONNECTIONMAP * (*GetConnectionMap)(void *); // CCmdTarget virtual function #16
    AFX_INTERFACEMAP * (*GetInterfaceMap)(void *); // CWnd virtual function #17
    AFX_EVENTSINKMAP * (*GetEventSinkMap)(void *); // CHtmlView virtual function #18
    int (*OnCreateAggregates)(void *); // CCmdTarget virtual function #19
    IUnknown * (*GetInterfaceHook)(void *, void *); // CCmdTarget virtual function #20
    int (*GetExtraConnectionPoints)(void *, struct CPtrArray *); // CCmdTarget virtual function #21
    IConnectionPoint * (*GetConnectionHook)(void *, struct _GUID *); // CCmdTarget virtual function #22
    void (*PreSubclassWindow)(void *); // CWnd virtual function #23
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CHtmlView virtual function #24
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #25
    int (*CreateEx)(void *, ulong, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, void *); // CWnd virtual function #26
    int (*DestroyWindow)(void *); // CWnd virtual function #27
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CHtmlView virtual function #28
    void (*CalcWindowRect)(void *, struct tagRECT *, uint); // CScrollView virtual function #29
    CMenu * (*GetMenu)(void *); // CWnd virtual function #30
    int (*SetMenu)(void *, struct CMenu *); // CWnd virtual function #31
    int (*OnToolHitTest)(void *, struct CPoint, struct tagTOOLINFOA *); // CWnd virtual function #32
    CScrollBar * (*GetScrollBarCtrl)(void *, int); // CView virtual function #33
    void (*WinHelpA)(void *, ulong, uint); // CWnd virtual function #34
    void (*HtmlHelpA)(void *, ulong, uint); // CWnd virtual function #35
    void (*WinHelpInternal)(void *, ulong, uint); // CWnd virtual function #36
    int (*ContinueModal)(void *); // CWnd virtual function #37
    void (*EndModalLoop)(void *, int); // CWnd virtual function #38
    long (*EnsureStdObj)(void *); // CWnd virtual function #39
    long (*get_accParent)(void *, struct IDispatch **); // CWnd virtual function #40
    undefined4 (*vfunction41)(void *, long *); // CHtmlViewCtrl virtual function #41
    void (*vfunction42)(void *, undefined4, undefined4, undefined4, undefined4, undefined4); // CHtmlViewCtrl virtual function #42
    void (*vfunction43)(void *, undefined4, undefined4, undefined4, undefined4, undefined4); // CHtmlViewCtrl virtual function #43
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
    void (*vfunction55)(void *, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4); // CHtmlViewCtrl virtual function #55
    long (*accNavigate)(void *, long, struct tagVARIANT, struct tagVARIANT *); // CWnd virtual function #56
    long (*GetAccessibilityHitTest)(void *, long, long, struct tagVARIANT *); // CWnd virtual function #57
    long (*accDoDefaultAction)(void *, struct tagVARIANT); // CWnd virtual function #58
    long (*put_accName)(void *, struct tagVARIANT, wchar_t *); // CWnd virtual function #59
    long (*put_accValue)(void *, struct tagVARIANT, wchar_t *); // CWnd virtual function #60
    long (*SetProxy)(void *, struct IAccessibleProxy *); // CWnd virtual function #61
    long (*CreateAccessibleProxy)(void *, uint, long, long *); // CWnd virtual function #62
    int (*OnCommand)(void *, uint, long); // CWnd virtual function #63
    int (*OnNotify)(void *, uint, long, long *); // CWnd virtual function #64
    long (** (*GetSuperWndProcAddr)(void *))(struct HWND__ *, uint, uint, long); // CWnd virtual function #65
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CHtmlView virtual function #69
    int (*OnAmbientProperty)(void *, struct COleControlSite *, long, struct tagVARIANT *); // CWnd virtual function #70
    long (*WindowProc)(void *, uint, uint, long); // CWnd virtual function #71
    int (*OnWndMsg)(void *, uint, uint, long, long *); // CWnd virtual function #72
    long (*DefWindowProcA)(void *, uint, uint, long); // CWnd virtual function #73
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #74
    int (*OnChildNotify)(void *, uint, uint, long, long *); // CWnd virtual function #75
    int (*CheckAutoCenter)(void *); // CWnd virtual function #76
    int (*IsFrameWnd)(void *); // CWnd virtual function #77
    int (*CreateControlContainer)(void *, struct COleControlContainer **); // CWnd virtual function #78
    int (*CreateControlSite)(void *, struct COleControlContainer *, struct COleControlSite **, uint, struct _GUID *); // CHtmlView virtual function #79
    int (*SetOccDialogInfo)(void *, struct _AFX_OCC_DIALOG_INFO *); // CFormView virtual function #80
    _AFX_OCC_DIALOG_INFO * (*GetOccDialogInfo)(void *); // CFormView virtual function #81
    int (*IsSelected)(void *, struct CObject *); // CView virtual function #82
    int (*OnScroll)(void *, uint, uint, int); // CScrollView virtual function #83
    int (*OnScrollBy)(void *, struct CSize, int); // CScrollView virtual function #84
    ulong (*OnDragEnter)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #85
    ulong (*OnDragOver)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #86
    void (*OnDragLeave)(void *); // CView virtual function #87
    int (*OnDrop)(void *, struct COleDataObject *, ulong, struct CPoint); // CView virtual function #88
    ulong (*OnDropEx)(void *, struct COleDataObject *, ulong, ulong, struct CPoint); // CView virtual function #89
    ulong (*OnDragScroll)(void *, ulong, struct CPoint); // CView virtual function #90
    void (*OnPrepareDC)(void *, struct CDC *, struct CPrintInfo *); // CScrollView virtual function #91
    void (*OnInitialUpdate)(void *); // CFormView virtual function #92
    void (*OnActivateView)(void *, int, struct CView *, struct CView *); // CFormView virtual function #93
    void (*OnActivateFrame)(void *, uint, struct CFrameWnd *); // CFormView virtual function #94
    void (*OnUpdate)(void *, struct CView *, long, struct CObject *); // CView virtual function #95
    void (*OnDraw)(void *, struct CDC *); // CHtmlView virtual function #96
    int (*OnPreparePrinting)(void *, struct CPrintInfo *); // CView virtual function #97
    void (*OnBeginPrinting)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #98
    void (*OnPrint)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #99
    void (*OnEndPrinting)(void *, struct CDC *, struct CPrintInfo *); // CView virtual function #100
    void (*OnEndPrintPreview)(void *, struct CDC *, struct CPrintInfo *, struct tagPOINT, struct CPreviewView *); // CView virtual function #101
    CSize (*GetWheelScrollDistance)(void *, struct CSize, int, int); // CScrollView virtual function #102
    long (*OnShowContextMenu)(void *, ulong, struct tagPOINT *, struct IUnknown *, struct IDispatch *); // CHtmlView virtual function #103
    long (*OnGetExternal)(void *, struct IDispatch **); // CHtmlView virtual function #104
    long (*OnGetHostInfo)(void *, struct _DOCHOSTUIINFO *); // CHtmlView virtual function #105
    long (*OnShowUI)(void *, ulong, struct IOleInPlaceActiveObject *, struct IOleCommandTarget *, struct IOleInPlaceFrame *, struct IOleInPlaceUIWindow *); // CHtmlView virtual function #106
    long (*OnHideUI)(void *); // CHtmlView virtual function #107
    long (*OnUpdateUI)(void *); // CHtmlView virtual function #108
    long (*OnEnableModeless)(void *, int); // CHtmlView virtual function #109
    long (*OnDocWindowActivate)(void *, int); // CHtmlView virtual function #110
    long (*OnFrameWindowActivate)(void *, int); // CHtmlView virtual function #111
    long (*OnResizeBorder)(void *, struct tagRECT *, struct IOleInPlaceUIWindow *, int); // CHtmlView virtual function #112
    long (*OnTranslateAccelerator)(void *, struct tagMSG *, struct _GUID *, ulong); // CHtmlView virtual function #113
    long (*OnGetOptionKeyPath)(void *, wchar_t **, ulong); // CHtmlView virtual function #114
    long (*OnFilterDataObject)(void *, struct IDataObject *, struct IDataObject **); // CHtmlView virtual function #115
    long (*OnTranslateUrl)(void *, ulong, wchar_t *, wchar_t **); // CHtmlView virtual function #116
    long (*OnGetDropTarget)(void *, struct IDropTarget *, struct IDropTarget **); // CHtmlView virtual function #117
    void (*OnNavigateComplete2)(void *, char *); // CHtmlView virtual function #118
    void (*OnBeforeNavigate2)(void *, char *, ulong, char *, struct CByteArray *, char *, int *); // CHtmlViewCtrl virtual function #119
    void (*OnStatusTextChange)(void *, char *); // CHtmlViewCtrl virtual function #120
    void (*OnProgressChange)(void *, long, long); // CHtmlView virtual function #121
    void (*OnCommandStateChange)(void *, long, int); // CHtmlView virtual function #122
    void (*OnDownloadBegin)(void *); // CHtmlView virtual function #123
    void (*OnDownloadComplete)(void *); // CHtmlView virtual function #124
    void (*OnTitleChange)(void *, char *); // CHtmlView virtual function #125
    void (*OnPropertyChange)(void *, char *); // CHtmlView virtual function #126
    void (*OnNewWindow2)(void *, struct IDispatch **, int *); // CHtmlView virtual function #127
    void (*OnDocumentComplete)(void *, char *); // CHtmlView virtual function #128
    void (*OnQuit)(void *); // CHtmlView virtual function #129
    void (*OnVisible)(void *, int); // CHtmlView virtual function #130
    void (*OnToolBar)(void *, int); // CHtmlView virtual function #131
    void (*OnMenuBar)(void *, int); // CHtmlView virtual function #132
    void (*OnStatusBar)(void *, int); // CHtmlView virtual function #133
    void (*OnFullScreen)(void *, int); // CHtmlView virtual function #134
    void (*OnTheaterMode)(void *, int); // CHtmlView virtual function #135
    void (*OnNavigateError)(void *, char *, char *, ulong, int *); // CHtmlView virtual function #136
    void (*NavigateComplete2)(void *, struct IDispatch *, struct tagVARIANT *); // CHtmlView virtual function #137
    void (*BeforeNavigate2)(void *, struct IDispatch *, struct tagVARIANT *, struct tagVARIANT *, struct tagVARIANT *, struct tagVARIANT *, struct tagVARIANT *, short *); // CHtmlView virtual function #138
    void (*DocumentComplete)(void *, struct IDispatch *, struct tagVARIANT *); // CHtmlView virtual function #139
    void (*NavigateError)(void *, struct IDispatch *, struct tagVARIANT *, struct tagVARIANT *, struct tagVARIANT *, short *); // CHtmlView virtual function #140
    int (*Create)(void *, char *, char *, ulong, struct tagRECT *, struct CWnd *, uint, struct CCreateContext *); // CHtmlViewCtrl virtual function #141
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #142
};

struct CHtmlViewCtrl { // class CHtmlViewCtrl : CHtmlView
    struct CHtmlViewCtrl_vftable *vftablePtr;
    struct CHtmlViewCtrl_data CHtmlViewCtrl_data;
};

typedef struct CTabButtons CTabButtons, *PCTabButtons;

typedef struct CTabButtons_vftable CTabButtons_vftable, *PCTabButtons_vftable;

typedef struct CTabButtons_data CTabButtons_data, *PCTabButtons_data;

struct CTabButtons_data {
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
    void *offset_0x10;
    void *offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
};

struct CTabButtons_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CTabButtons virtual function #1
};

struct CTabButtons { // class CTabButtons
    struct CTabButtons_vftable *vftablePtr;
    struct CTabButtons_data CTabButtons_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/CListCtrlEx/CListCtrlEx - /CListCtrlEx

typedef struct CListCtrlEx_vftable0 CListCtrlEx_vftable0, *PCListCtrlEx_vftable0;

struct CListCtrlEx_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CListCtrlEx virtual function #1
    bool (*deleting_destructor)(void *); // CListCtrlEx virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CChannelListCtrl virtual function #82
    int (*OnSortItem)(void *, ulong, ulong, int, int); // CListCtrlEx virtual function #83
    bool (*DoListCtrlSetting)(void *); // CListCtrlEx virtual function #84
    void (*GetColumnFormatString)(void *, int, char *, char *, int); // CListCtrlEx virtual function #85
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CListCtrlEx virtual function #86
};

typedef struct CListCtrlEx_vftable1 CListCtrlEx_vftable1, *PCListCtrlEx_vftable1;

struct CListCtrlEx_vftable1 {
    void (*vfunction1)(void *, byte); // CListCtrlEx virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CListCtrlEx virtual function #2
    bool (*deleting_destructor)(void *); // CListCtrlEx virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CListCtrlEx virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};


// WARNING! conflicting data type names: /ClassDataTypes/CListColMetaData/CListColMetaData - /CListColMetaData

typedef struct CListColMetaData_vftable CListColMetaData_vftable, *PCListColMetaData_vftable;

struct CListColMetaData_vftable {
    undefined4 * (*vfunction1)(void *, byte); // MSVCR90.DLL CListColMetaData pure virtual function #1
    undefined1 (*GetColumnInfo)(void *); // MSVCR90.DLL CListColMetaData pure virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*GetItemText)(void *, int); // MSVCR90.DLL CListColMetaData pure virtual function #3
    int (*CompareItem)(void *, byte *, char); // MSVCR90.DLL CListColMetaData pure virtual function #4
};

typedef struct CListColMetaData_data CListColMetaData_data, *PCListColMetaData_data;

struct CListColMetaData_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgImage16/CHgImage16 - /CHgImage16

typedef struct CHgImage16_vftable CHgImage16_vftable, *PCHgImage16_vftable;

struct CHgImage16_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgImage16 virtual function #1
    bool (*Create)(void *, char *); // CHgImageBase virtual function #2
    bool (*Create)(void *, char *); // CHgImageBase virtual function #3
    bool (*Create)(void *, char *); // CHgImageBase virtual function #4
    bool (*Create)(void *, int, int); // MSVCR90.DLL CHgImage16 pure virtual function #5
    void (*Destroy)(void *); // CHgImageBase virtual function #6
    void (*__CreateFromBitmapWithColorTable)(void *); // CHgImage16 virtual function #7
    bool (*__CreateFromBitmap16)(void *, uchar *, ulong); // CHgImage16 virtual function #8
    bool (*__CreateFromBitmap24)(void *, uchar *, ulong); // CHgImage16 virtual function #9
};

typedef struct CFontEx_vftable CFontEx_vftable, *PCFontEx_vftable;

struct CFontEx_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CFontEx virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CFontEx/CFontEx - /CFontEx

typedef struct CFontEx_data CFontEx_data, *PCFontEx_data;

typedef struct FontData FontData, *PFontData;

struct CFontEx_data {
    struct FontData *offset_0x0;
};

struct FontData { // PlaceHolder Structure
};

typedef struct CComboBox CComboBox, *PCComboBox;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CComboBox { // class CComboBox : CWnd
    struct CWnd CWnd;
};

typedef struct CHanChatEditComboBox_vftable0 CHanChatEditComboBox_vftable0, *PCHanChatEditComboBox_vftable0;

struct CHanChatEditComboBox_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomComboBox virtual function #1
    CHanChatEditComboBox * (*deleting_destructor)(void *, byte); // CHanChatEditComboBox virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CHanChatEditComboBox virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
    int (*PreTranslateMessage)(void *, struct tagMSG *); // CHanChatEditComboBox virtual function #69
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

typedef struct CHanChatEditComboBox_data CHanChatEditComboBox_data, *PCHanChatEditComboBox_data;

struct CHanChatEditComboBox_data {
    undefined4 *offset_0x0;
    DWORD offset_0x4;
    DWORD offset_0x8;
    int *offset_0xc;
    undefined4 offset_0x10;
    int offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
    undefined4 offset_0x20;
    undefined4 offset_0x24;
    undefined4 offset_0x28;
    DWORD offset_0x2c;
    undefined4 offset_0x30;
    undefined field13_0x34;
    undefined field14_0x35;
    undefined field15_0x36;
    undefined field16_0x37;
    undefined4 offset_0x38;
    undefined4 offset_0x3c;
    undefined4 offset_0x40;
    undefined field20_0x44;
    undefined field21_0x45;
    undefined field22_0x46;
    undefined field23_0x47;
    int offset_0x48;
    undefined field25_0x4c;
    undefined field26_0x4d;
    undefined field27_0x4e;
    undefined field28_0x4f;
    undefined field29_0x50;
    undefined field30_0x51;
    undefined field31_0x52;
    undefined field32_0x53;
    void *offset_0x54;
    undefined4 offset_0x58;
    undefined4 offset_0x5c;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHanChatEditComboBox/CHanChatEditComboBox - /CHanChatEditComboBox

typedef struct CHanChatEditComboBox_vftable1 CHanChatEditComboBox_vftable1, *PCHanChatEditComboBox_vftable1;

struct CHanChatEditComboBox_vftable1 {
    void (*vfunction1)(void *, byte); // CHanChatEditComboBox virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomComboBox virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct IFunctor IFunctor, *PIFunctor;

struct IFunctor { // class IFunctor
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CRgn CRgn, *PCRgn;

typedef struct CRgn_vftable CRgn_vftable, *PCRgn_vftable;

typedef struct CRgn_data CRgn_data, *PCRgn_data;

struct CRgn_data {
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
    undefined **offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
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
    void *offset_0xa8;
    void *offset_0xac;
    void *offset_0xb0;
    void *offset_0xb4;
    void *offset_0xb8;
    void *offset_0xbc;
    void *offset_0xc0;
    void *offset_0xc4;
    void *offset_0xc8;
    void *offset_0xcc;
    undefined4 offset_0xd0;
    undefined4 offset_0xd4;
    undefined4 offset_0xd8;
};

struct CRgn_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CRgn virtual function #1
    void * (*deleting_destructor)(void *, uint); // CRgn virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

struct CRgn { // class CRgn : CGdiObject
    struct CRgn_vftable *vftablePtr;
    struct CRgn_data CRgn_data;
};

typedef struct CChannelName_vftable CChannelName_vftable, *PCChannelName_vftable;

struct CChannelName_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CChannelName virtual function #1
    undefined1 (*vfunction2)(void *); // CChannelName virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*vfunction3)(void *, int); // CChannelName virtual function #3
    int (*vfunction4)(void *, byte *, char); // CChannelName virtual function #4
};

typedef struct CChannelName CChannelName, *PCChannelName;

struct CListColMetaData_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CChannelName { // class CChannelName : CListColMetaData
    struct CChannelName_vftable *vftablePtr;
    struct CListColMetaData_data CListColMetaData_data;
};

typedef struct CChannelEmpty_vftable CChannelEmpty_vftable, *PCChannelEmpty_vftable;

struct CChannelEmpty_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CChannelEmpty virtual function #1
    undefined1 (*vfunction2)(void *); // CChannelName virtual function #2
    basic_string<char,std::char_traits<char>,std::allocator<char>_> * (*vfunction3)(void *); // CChannelEmpty virtual function #3
    int (*vfunction4)(void *, int, char); // CChannelEmpty virtual function #4
};

typedef struct CChannelEmpty CChannelEmpty, *PCChannelEmpty;

struct CListColMetaData_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CChannelEmpty { // class CChannelEmpty : CListColMetaData
    struct CChannelEmpty_vftable *vftablePtr;
    struct CListColMetaData_data CListColMetaData_data;
};

typedef struct _CTypedPtrList<CPtrList,CHgMemDCListData*>_vftable _CTypedPtrList<CPtrList,CHgMemDCListData*>_vftable, *P_CTypedPtrList<CPtrList,CHgMemDCListData*>_vftable;

struct _CTypedPtrList<CPtrList,CHgMemDCListData*>_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPtrList virtual function #1
    CPtrList * (*vfunction2)(void *, byte); // _CTypedPtrList<...> virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

typedef struct _CTypedPtrList<CPtrList,CHgMemDCListData*> _CTypedPtrList<CPtrList,CHgMemDCListData*>, *P_CTypedPtrList<CPtrList,CHgMemDCListData*>;

struct _CTypedPtrList<CPtrList,CHgMemDCListData*> { // class _CTypedPtrList<CPtrList,CHgMemDCListData*> : CPtrList
    struct _CTypedPtrList<CPtrList,CHgMemDCListData*>_vftable *vftablePtr;
};

typedef struct CBitmap_vftable CBitmap_vftable, *PCBitmap_vftable;

struct CBitmap_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CBitmap virtual function #1
    void * (*deleting_destructor)(void *, uint); // CBitmap virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

typedef struct CBitmap CBitmap, *PCBitmap;

struct CBitmap { // class CBitmap : CGdiObject
    struct CBitmap_vftable *vftablePtr;
};

typedef struct CMFunctor<CChannelListCtrl>_vftable CMFunctor<CChannelListCtrl>_vftable, *PCMFunctor<CChannelListCtrl>_vftable;

struct CMFunctor<CChannelListCtrl>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListCtrl> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CChannelListCtrl> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListCtrl> virtual function #3
};

typedef struct CMFunctor<CChannelListCtrl> CMFunctor<CChannelListCtrl>, *PCMFunctor<CChannelListCtrl>;

struct CMFunctor<CChannelListCtrl> { // class CMFunctor<CChannelListCtrl> : IFunctor
    struct CMFunctor<CChannelListCtrl>_vftable *vftablePtr;
};

typedef struct CBrush_vftable CBrush_vftable, *PCBrush_vftable;

struct CBrush_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CBrush virtual function #1
    void * (*deleting_destructor)(void *, uint); // CBrush virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

typedef struct CBrush CBrush, *PCBrush;

struct CBrush { // class CBrush : CGdiObject
    struct CBrush_vftable *vftablePtr;
};

typedef struct CMFunctor<CMemberListTabCtrl>_data CMFunctor<CMemberListTabCtrl>_data, *PCMFunctor<CMemberListTabCtrl>_data;

struct CMFunctor<CMemberListTabCtrl>_data {
    void *offset_0x0;
    undefined *offset_0x4;
};

typedef struct CMFunctor<CMemberListTabCtrl>_vftable CMFunctor<CMemberListTabCtrl>_vftable, *PCMFunctor<CMemberListTabCtrl>_vftable;

struct CMFunctor<CMemberListTabCtrl>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CCustomTabCtrl> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CMemberListTabCtrl> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CCustomTabCtrl> virtual function #3
};

typedef struct CMFunctor<CMemberListTabCtrl> CMFunctor<CMemberListTabCtrl>, *PCMFunctor<CMemberListTabCtrl>;

struct CMFunctor<CMemberListTabCtrl>_data {
    void *offset_0x0;
    undefined *offset_0x4;
};

struct CMFunctor<CMemberListTabCtrl> { // class CMFunctor<CMemberListTabCtrl> : IFunctor
    struct CMFunctor<CMemberListTabCtrl>_vftable *vftablePtr;
    struct CMFunctor<CMemberListTabCtrl>_data CMFunctor<CMemberListTabCtrl>_data;
};

typedef struct CImgChatWnd_vftable CImgChatWnd_vftable, *PCImgChatWnd_vftable;

struct CImgChatWnd_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CImgChatWnd virtual function #1
    CImgChatWnd * (*deleting_destructor)(void *, byte); // CImgChatWnd virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CImgChatWnd virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*setNewPosition)(void *, struct CWnd *, struct CRect *, int); // CImgChatWnd virtual function #82
    void (*setRect)(void *, struct CRect *); // CImgChatWnd virtual function #83
    void (*setMovingRect)(void *, struct CRect *); // CImgChatWnd virtual function #84
    void (*sendNewMessage)(void *, char *); // CImgChatWnd virtual function #85
    void (*sendEscMessage)(void *); // CImgChatWnd virtual function #86
};

typedef struct CImgChatWnd CImgChatWnd, *PCImgChatWnd;

typedef struct CImgChatWnd_data CImgChatWnd_data, *PCImgChatWnd_data;

struct CImgChatWnd_data {
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
    undefined4 offset_0x54;
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
    undefined field533_0x218;
    undefined field534_0x219;
    undefined field535_0x21a;
    undefined field536_0x21b;
    undefined field537_0x21c;
    undefined field538_0x21d;
    undefined field539_0x21e;
    undefined field540_0x21f;
    undefined field541_0x220;
    undefined field542_0x221;
    undefined field543_0x222;
    undefined field544_0x223;
    undefined field545_0x224;
    undefined field546_0x225;
    undefined field547_0x226;
    undefined field548_0x227;
    undefined field549_0x228;
    undefined field550_0x229;
    undefined field551_0x22a;
    undefined field552_0x22b;
    undefined field553_0x22c;
    undefined field554_0x22d;
    undefined field555_0x22e;
    undefined field556_0x22f;
    undefined field557_0x230;
    undefined field558_0x231;
    undefined field559_0x232;
    undefined field560_0x233;
    undefined field561_0x234;
    undefined field562_0x235;
    undefined field563_0x236;
    undefined field564_0x237;
    undefined field565_0x238;
    undefined field566_0x239;
    undefined field567_0x23a;
    undefined field568_0x23b;
    undefined field569_0x23c;
    undefined field570_0x23d;
    undefined field571_0x23e;
    undefined field572_0x23f;
    undefined field573_0x240;
    undefined field574_0x241;
    undefined field575_0x242;
    undefined field576_0x243;
    undefined field577_0x244;
    undefined field578_0x245;
    undefined field579_0x246;
    undefined field580_0x247;
    undefined field581_0x248;
    undefined field582_0x249;
    undefined field583_0x24a;
    undefined field584_0x24b;
    undefined field585_0x24c;
    undefined field586_0x24d;
    undefined field587_0x24e;
    undefined field588_0x24f;
    undefined field589_0x250;
    undefined field590_0x251;
    undefined field591_0x252;
    undefined field592_0x253;
    undefined field593_0x254;
    undefined field594_0x255;
    undefined field595_0x256;
    undefined field596_0x257;
    undefined field597_0x258;
    undefined field598_0x259;
    undefined field599_0x25a;
    undefined field600_0x25b;
    undefined field601_0x25c;
    undefined field602_0x25d;
    undefined field603_0x25e;
    undefined field604_0x25f;
    undefined field605_0x260;
    undefined field606_0x261;
    undefined field607_0x262;
    undefined field608_0x263;
    undefined field609_0x264;
    undefined field610_0x265;
    undefined field611_0x266;
    undefined field612_0x267;
    undefined field613_0x268;
    undefined field614_0x269;
    undefined field615_0x26a;
    undefined field616_0x26b;
    undefined field617_0x26c;
    undefined field618_0x26d;
    undefined field619_0x26e;
    undefined field620_0x26f;
    undefined field621_0x270;
    undefined field622_0x271;
    undefined field623_0x272;
    undefined field624_0x273;
    undefined field625_0x274;
    undefined field626_0x275;
    undefined field627_0x276;
    undefined field628_0x277;
    undefined field629_0x278;
    undefined field630_0x279;
    undefined field631_0x27a;
    undefined field632_0x27b;
    undefined field633_0x27c;
    undefined field634_0x27d;
    undefined field635_0x27e;
    undefined field636_0x27f;
    undefined field637_0x280;
    undefined field638_0x281;
    undefined field639_0x282;
    undefined field640_0x283;
    undefined field641_0x284;
    undefined field642_0x285;
    undefined field643_0x286;
    undefined field644_0x287;
    undefined field645_0x288;
    undefined field646_0x289;
    undefined field647_0x28a;
    undefined field648_0x28b;
    undefined field649_0x28c;
    undefined field650_0x28d;
    undefined field651_0x28e;
    undefined field652_0x28f;
    undefined field653_0x290;
    undefined field654_0x291;
    undefined field655_0x292;
    undefined field656_0x293;
    undefined field657_0x294;
    undefined field658_0x295;
    undefined field659_0x296;
    undefined field660_0x297;
    undefined field661_0x298;
    undefined field662_0x299;
    undefined field663_0x29a;
    undefined field664_0x29b;
    undefined field665_0x29c;
    undefined field666_0x29d;
    undefined field667_0x29e;
    undefined field668_0x29f;
    undefined field669_0x2a0;
    undefined field670_0x2a1;
    undefined field671_0x2a2;
    undefined field672_0x2a3;
    undefined field673_0x2a4;
    undefined field674_0x2a5;
    undefined field675_0x2a6;
    undefined field676_0x2a7;
    undefined field677_0x2a8;
    undefined field678_0x2a9;
    undefined field679_0x2aa;
    undefined field680_0x2ab;
    undefined field681_0x2ac;
    undefined field682_0x2ad;
    undefined field683_0x2ae;
    undefined field684_0x2af;
    undefined field685_0x2b0;
    undefined field686_0x2b1;
    undefined field687_0x2b2;
    undefined field688_0x2b3;
    undefined field689_0x2b4;
    undefined field690_0x2b5;
    undefined field691_0x2b6;
    undefined field692_0x2b7;
    undefined field693_0x2b8;
    undefined field694_0x2b9;
    undefined field695_0x2ba;
    undefined field696_0x2bb;
    undefined field697_0x2bc;
    undefined field698_0x2bd;
    undefined field699_0x2be;
    undefined field700_0x2bf;
    undefined field701_0x2c0;
    undefined field702_0x2c1;
    undefined field703_0x2c2;
    undefined field704_0x2c3;
    undefined field705_0x2c4;
    undefined field706_0x2c5;
    undefined field707_0x2c6;
    undefined field708_0x2c7;
    undefined field709_0x2c8;
    undefined field710_0x2c9;
    undefined field711_0x2ca;
    undefined field712_0x2cb;
    undefined field713_0x2cc;
    undefined field714_0x2cd;
    undefined field715_0x2ce;
    undefined field716_0x2cf;
    undefined field717_0x2d0;
    undefined field718_0x2d1;
    undefined field719_0x2d2;
    undefined field720_0x2d3;
    undefined field721_0x2d4;
    undefined field722_0x2d5;
    undefined field723_0x2d6;
    undefined field724_0x2d7;
    undefined field725_0x2d8;
    undefined field726_0x2d9;
    undefined field727_0x2da;
    undefined field728_0x2db;
    undefined field729_0x2dc;
    undefined field730_0x2dd;
    undefined field731_0x2de;
    undefined field732_0x2df;
    undefined field733_0x2e0;
    undefined field734_0x2e1;
    undefined field735_0x2e2;
    undefined field736_0x2e3;
    undefined field737_0x2e4;
    undefined field738_0x2e5;
    undefined field739_0x2e6;
    undefined field740_0x2e7;
    undefined field741_0x2e8;
    undefined field742_0x2e9;
    undefined field743_0x2ea;
    undefined field744_0x2eb;
    undefined field745_0x2ec;
    undefined field746_0x2ed;
    undefined field747_0x2ee;
    undefined field748_0x2ef;
    undefined field749_0x2f0;
    undefined field750_0x2f1;
    undefined field751_0x2f2;
    undefined field752_0x2f3;
    undefined field753_0x2f4;
    undefined field754_0x2f5;
    undefined field755_0x2f6;
    undefined field756_0x2f7;
    undefined field757_0x2f8;
    undefined field758_0x2f9;
    undefined field759_0x2fa;
    undefined field760_0x2fb;
    undefined field761_0x2fc;
    undefined field762_0x2fd;
    undefined field763_0x2fe;
    undefined field764_0x2ff;
    undefined field765_0x300;
    undefined field766_0x301;
    undefined field767_0x302;
    undefined field768_0x303;
    undefined field769_0x304;
    undefined field770_0x305;
    undefined field771_0x306;
    undefined field772_0x307;
    undefined field773_0x308;
    undefined field774_0x309;
    undefined field775_0x30a;
    undefined field776_0x30b;
    undefined field777_0x30c;
    undefined field778_0x30d;
    undefined field779_0x30e;
    undefined field780_0x30f;
    undefined field781_0x310;
    undefined field782_0x311;
    undefined field783_0x312;
    undefined field784_0x313;
    undefined field785_0x314;
    undefined field786_0x315;
    undefined field787_0x316;
    undefined field788_0x317;
    undefined field789_0x318;
    undefined field790_0x319;
    undefined field791_0x31a;
    undefined field792_0x31b;
    undefined field793_0x31c;
    undefined field794_0x31d;
    undefined field795_0x31e;
    undefined field796_0x31f;
    undefined field797_0x320;
    undefined field798_0x321;
    undefined field799_0x322;
    undefined field800_0x323;
    undefined field801_0x324;
    undefined field802_0x325;
    undefined field803_0x326;
    undefined field804_0x327;
    undefined field805_0x328;
    undefined field806_0x329;
    undefined field807_0x32a;
    undefined field808_0x32b;
    undefined field809_0x32c;
    undefined field810_0x32d;
    undefined field811_0x32e;
    undefined field812_0x32f;
    undefined field813_0x330;
    undefined field814_0x331;
    undefined field815_0x332;
    undefined field816_0x333;
    undefined field817_0x334;
    undefined field818_0x335;
    undefined field819_0x336;
    undefined field820_0x337;
    undefined field821_0x338;
    undefined field822_0x339;
    undefined field823_0x33a;
    undefined field824_0x33b;
    undefined field825_0x33c;
    undefined field826_0x33d;
    undefined field827_0x33e;
    undefined field828_0x33f;
    undefined field829_0x340;
    undefined field830_0x341;
    undefined field831_0x342;
    undefined field832_0x343;
    undefined field833_0x344;
    undefined field834_0x345;
    undefined field835_0x346;
    undefined field836_0x347;
    undefined field837_0x348;
    undefined field838_0x349;
    undefined field839_0x34a;
    undefined field840_0x34b;
    undefined field841_0x34c;
    undefined field842_0x34d;
    undefined field843_0x34e;
    undefined field844_0x34f;
    undefined field845_0x350;
    undefined field846_0x351;
    undefined field847_0x352;
    undefined field848_0x353;
    undefined field849_0x354;
    undefined field850_0x355;
    undefined field851_0x356;
    undefined field852_0x357;
    undefined field853_0x358;
    undefined field854_0x359;
    undefined field855_0x35a;
    undefined field856_0x35b;
    undefined field857_0x35c;
    undefined field858_0x35d;
    undefined field859_0x35e;
    undefined field860_0x35f;
    undefined field861_0x360;
    undefined field862_0x361;
    undefined field863_0x362;
    undefined field864_0x363;
    undefined field865_0x364;
    undefined field866_0x365;
    undefined field867_0x366;
    undefined field868_0x367;
    undefined field869_0x368;
    undefined field870_0x369;
    undefined field871_0x36a;
    undefined field872_0x36b;
    undefined field873_0x36c;
    undefined field874_0x36d;
    undefined field875_0x36e;
    undefined field876_0x36f;
    undefined field877_0x370;
    undefined field878_0x371;
    undefined field879_0x372;
    undefined field880_0x373;
    undefined field881_0x374;
    undefined field882_0x375;
    undefined field883_0x376;
    undefined field884_0x377;
    undefined field885_0x378;
    undefined field886_0x379;
    undefined field887_0x37a;
    undefined field888_0x37b;
    undefined field889_0x37c;
    undefined field890_0x37d;
    undefined field891_0x37e;
    undefined field892_0x37f;
    undefined field893_0x380;
    undefined field894_0x381;
    undefined field895_0x382;
    undefined field896_0x383;
    undefined field897_0x384;
    undefined field898_0x385;
    undefined field899_0x386;
    undefined field900_0x387;
    undefined field901_0x388;
    undefined field902_0x389;
    undefined field903_0x38a;
    undefined field904_0x38b;
    undefined field905_0x38c;
    undefined field906_0x38d;
    undefined field907_0x38e;
    undefined field908_0x38f;
    undefined field909_0x390;
    undefined field910_0x391;
    undefined field911_0x392;
    undefined field912_0x393;
    undefined field913_0x394;
    undefined field914_0x395;
    undefined field915_0x396;
    undefined field916_0x397;
    undefined field917_0x398;
    undefined field918_0x399;
    undefined field919_0x39a;
    undefined field920_0x39b;
    undefined field921_0x39c;
    undefined field922_0x39d;
    undefined field923_0x39e;
    undefined field924_0x39f;
    undefined field925_0x3a0;
    undefined field926_0x3a1;
    undefined field927_0x3a2;
    undefined field928_0x3a3;
    undefined field929_0x3a4;
    undefined field930_0x3a5;
    undefined field931_0x3a6;
    undefined field932_0x3a7;
    undefined field933_0x3a8;
    undefined field934_0x3a9;
    undefined field935_0x3aa;
    undefined field936_0x3ab;
    undefined field937_0x3ac;
    undefined field938_0x3ad;
    undefined field939_0x3ae;
    undefined field940_0x3af;
    undefined field941_0x3b0;
    undefined field942_0x3b1;
    undefined field943_0x3b2;
    undefined field944_0x3b3;
    undefined field945_0x3b4;
    undefined field946_0x3b5;
    undefined field947_0x3b6;
    undefined field948_0x3b7;
    undefined field949_0x3b8;
    undefined field950_0x3b9;
    undefined field951_0x3ba;
    undefined field952_0x3bb;
    undefined field953_0x3bc;
    undefined field954_0x3bd;
    undefined field955_0x3be;
    undefined field956_0x3bf;
    undefined field957_0x3c0;
    undefined field958_0x3c1;
    undefined field959_0x3c2;
    undefined field960_0x3c3;
    undefined field961_0x3c4;
    undefined field962_0x3c5;
    undefined field963_0x3c6;
    undefined field964_0x3c7;
    undefined field965_0x3c8;
    undefined field966_0x3c9;
    undefined field967_0x3ca;
    undefined field968_0x3cb;
    undefined field969_0x3cc;
    undefined field970_0x3cd;
    undefined field971_0x3ce;
    undefined field972_0x3cf;
    undefined field973_0x3d0;
    undefined field974_0x3d1;
    undefined field975_0x3d2;
    undefined field976_0x3d3;
    undefined4 offset_0x3d4;
    undefined4 offset_0x3d8;
    undefined field979_0x3dc;
    undefined field980_0x3dd;
    undefined field981_0x3de;
    undefined field982_0x3df;
    undefined field983_0x3e0;
    undefined field984_0x3e1;
    undefined field985_0x3e2;
    undefined field986_0x3e3;
    undefined field987_0x3e4;
    undefined field988_0x3e5;
    undefined field989_0x3e6;
    undefined field990_0x3e7;
    undefined field991_0x3e8;
    undefined field992_0x3e9;
    undefined field993_0x3ea;
    undefined field994_0x3eb;
    undefined field995_0x3ec;
    undefined field996_0x3ed;
    undefined field997_0x3ee;
    undefined field998_0x3ef;
    undefined field999_0x3f0;
    undefined field1000_0x3f1;
    undefined field1001_0x3f2;
    undefined field1002_0x3f3;
    undefined field1003_0x3f4;
    undefined field1004_0x3f5;
    undefined field1005_0x3f6;
    undefined field1006_0x3f7;
    undefined field1007_0x3f8;
    undefined field1008_0x3f9;
    undefined field1009_0x3fa;
    undefined field1010_0x3fb;
    undefined field1011_0x3fc;
    undefined field1012_0x3fd;
    undefined field1013_0x3fe;
    undefined field1014_0x3ff;
    undefined field1015_0x400;
    undefined field1016_0x401;
    undefined field1017_0x402;
    undefined field1018_0x403;
    undefined field1019_0x404;
    undefined field1020_0x405;
    undefined field1021_0x406;
    undefined field1022_0x407;
    undefined field1023_0x408;
    undefined field1024_0x409;
    undefined field1025_0x40a;
    undefined field1026_0x40b;
    undefined field1027_0x40c;
    undefined field1028_0x40d;
    undefined field1029_0x40e;
    undefined field1030_0x40f;
    undefined field1031_0x410;
    undefined field1032_0x411;
    undefined field1033_0x412;
    undefined field1034_0x413;
    undefined field1035_0x414;
    undefined field1036_0x415;
    undefined field1037_0x416;
    undefined field1038_0x417;
    undefined field1039_0x418;
    undefined field1040_0x419;
    undefined field1041_0x41a;
    undefined field1042_0x41b;
    undefined field1043_0x41c;
    undefined field1044_0x41d;
    undefined field1045_0x41e;
    undefined field1046_0x41f;
    undefined field1047_0x420;
    undefined field1048_0x421;
    undefined field1049_0x422;
    undefined field1050_0x423;
    undefined field1051_0x424;
    undefined field1052_0x425;
    undefined field1053_0x426;
    undefined field1054_0x427;
    undefined field1055_0x428;
    undefined field1056_0x429;
    undefined field1057_0x42a;
    undefined field1058_0x42b;
    undefined field1059_0x42c;
    undefined field1060_0x42d;
    undefined field1061_0x42e;
    undefined field1062_0x42f;
    undefined field1063_0x430;
    undefined field1064_0x431;
    undefined field1065_0x432;
    undefined field1066_0x433;
    undefined field1067_0x434;
    undefined field1068_0x435;
    undefined field1069_0x436;
    undefined field1070_0x437;
    undefined field1071_0x438;
    undefined field1072_0x439;
    undefined field1073_0x43a;
    undefined field1074_0x43b;
    undefined field1075_0x43c;
    undefined field1076_0x43d;
    undefined field1077_0x43e;
    undefined field1078_0x43f;
    undefined4 offset_0x440;
    undefined4 offset_0x444;
    undefined field1081_0x448;
    undefined field1082_0x449;
    undefined field1083_0x44a;
    undefined field1084_0x44b;
    undefined field1085_0x44c;
    undefined field1086_0x44d;
    undefined field1087_0x44e;
    undefined field1088_0x44f;
    undefined field1089_0x450;
    undefined field1090_0x451;
    undefined field1091_0x452;
    undefined field1092_0x453;
    undefined field1093_0x454;
    undefined field1094_0x455;
    undefined field1095_0x456;
    undefined field1096_0x457;
    undefined field1097_0x458;
    undefined field1098_0x459;
    undefined field1099_0x45a;
    undefined field1100_0x45b;
    undefined field1101_0x45c;
    undefined field1102_0x45d;
    undefined field1103_0x45e;
    undefined field1104_0x45f;
    undefined field1105_0x460;
    undefined field1106_0x461;
    undefined field1107_0x462;
    undefined field1108_0x463;
    undefined field1109_0x464;
    undefined field1110_0x465;
    undefined field1111_0x466;
    undefined field1112_0x467;
    undefined field1113_0x468;
    undefined field1114_0x469;
    undefined field1115_0x46a;
    undefined field1116_0x46b;
    undefined field1117_0x46c;
    undefined field1118_0x46d;
    undefined field1119_0x46e;
    undefined field1120_0x46f;
    undefined field1121_0x470;
    undefined field1122_0x471;
    undefined field1123_0x472;
    undefined field1124_0x473;
    undefined field1125_0x474;
    undefined field1126_0x475;
    undefined field1127_0x476;
    undefined field1128_0x477;
    undefined field1129_0x478;
    undefined field1130_0x479;
    undefined field1131_0x47a;
    undefined field1132_0x47b;
    undefined field1133_0x47c;
    undefined field1134_0x47d;
    undefined field1135_0x47e;
    undefined field1136_0x47f;
    undefined field1137_0x480;
    undefined field1138_0x481;
    undefined field1139_0x482;
    undefined field1140_0x483;
    undefined field1141_0x484;
    undefined field1142_0x485;
    undefined field1143_0x486;
    undefined field1144_0x487;
    undefined field1145_0x488;
    undefined field1146_0x489;
    undefined field1147_0x48a;
    undefined field1148_0x48b;
    undefined field1149_0x48c;
    undefined field1150_0x48d;
    undefined field1151_0x48e;
    undefined field1152_0x48f;
    undefined field1153_0x490;
    undefined field1154_0x491;
    undefined field1155_0x492;
    undefined field1156_0x493;
    undefined field1157_0x494;
    undefined field1158_0x495;
    undefined field1159_0x496;
    undefined field1160_0x497;
    undefined4 offset_0x498;
    undefined4 offset_0x49c;
    undefined field1163_0x4a0;
    undefined field1164_0x4a1;
    undefined field1165_0x4a2;
    undefined field1166_0x4a3;
    undefined field1167_0x4a4;
    undefined field1168_0x4a5;
    undefined field1169_0x4a6;
    undefined field1170_0x4a7;
    undefined4 offset_0x4a8;
    undefined4 offset_0x4ac;
    undefined4 offset_0x4b0;
    undefined4 offset_0x4b4;
    uint offset_0x4b8;
    undefined4 offset_0x4bc;
    undefined4 offset_0x4c0;
    undefined4 offset_0x4c4;
    undefined4 offset_0x4c8;
};

struct CImgChatWnd { // class CImgChatWnd : CWnd
    struct CImgChatWnd_vftable *vftablePtr;
    struct CImgChatWnd_data CImgChatWnd_data;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgDDB/CHgDDB - /CHgDDB

typedef struct CHgDDB_vftable CHgDDB_vftable, *PCHgDDB_vftable;

struct CHgDDB_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgDDB virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CTypedPtrList<CPtrList,CHgMemDCListData*>/CTypedPtrList<CPtrList,CHgMemDCListData*> - /CTypedPtrList<CPtrList,CHgMemDCListData*>

typedef struct CTypedPtrList<CPtrList,CHgMemDCListData*>_vftable CTypedPtrList<CPtrList,CHgMemDCListData*>_vftable, *PCTypedPtrList<CPtrList,CHgMemDCListData*>_vftable;

struct CTypedPtrList<CPtrList,CHgMemDCListData*>_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPtrList virtual function #1
    CPtrList * (*vfunction2)(void *, byte); // _CTypedPtrList<...> virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

typedef struct CListColMemberIdDraw_vftable CListColMemberIdDraw_vftable, *PCListColMemberIdDraw_vftable;

struct CListColMemberIdDraw_vftable {
    void (*vfunction1)(void *, undefined4 *, undefined4 *, undefined4, struct CListCtrl *, int); // CListColMemberIdDraw virtual function #1
    bool (*HitTest)(void); // CListColDraw virtual function #2
};

typedef struct CListColMemberIdDraw CListColMemberIdDraw, *PCListColMemberIdDraw;

struct CListColMemberIdDraw { // class CListColMemberIdDraw : CListColDraw
    struct CListColMemberIdDraw_vftable *vftablePtr;
};

typedef struct CNoticeWnd_vftable0 CNoticeWnd_vftable0, *PCNoticeWnd_vftable0;

struct CNoticeWnd_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWnd virtual function #1
    CNoticeWnd * (*deleting_destructor)(void *, byte); // CNoticeWnd virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CNoticeWnd virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*ManualUpdateControl)(void *, ulong, ulong, ulong); // CNoticeWnd virtual function #82
};

typedef struct CNoticeWnd CNoticeWnd, *PCNoticeWnd;

typedef struct CNoticeWnd_vftable1 CNoticeWnd_vftable1, *PCNoticeWnd_vftable1;

struct CNoticeWnd { // class CNoticeWnd : CWnd : CControlBase
    struct CNoticeWnd_vftable0 *vftablePtr;
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
    struct CNoticeWnd_vftable1 *vftablePtr;
};

struct CNoticeWnd_vftable1 {
    void (*vfunction1)(void *, byte); // CNoticeWnd virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CNoticeWnd virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CSimpleColorPicker_vftable1 CSimpleColorPicker_vftable1, *PCSimpleColorPicker_vftable1;

struct CSimpleColorPicker_vftable1 {
    void (*vfunction1)(void *, byte); // CSimpleColorPicker virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomButton virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CSimpleColorPicker_vftable0 CSimpleColorPicker_vftable0, *PCSimpleColorPicker_vftable0;

struct CSimpleColorPicker_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CStatic virtual function #1
    CSimpleColorPicker * (*deleting_destructor)(void *, byte); // CSimpleColorPicker virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CSimpleColorPicker virtual function #13
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
    int (*PreCreateWindow)(void *, struct tagCREATESTRUCTA *); // CSimpleColorPicker virtual function #28
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CStatic virtual function #83
};


// WARNING! conflicting data type names: /ClassDataTypes/CSimpleColorPicker/CSimpleColorPicker - /CSimpleColorPicker

typedef struct CTextProgressCtrl_vftable CTextProgressCtrl_vftable, *PCTextProgressCtrl_vftable;

struct CTextProgressCtrl_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CProgressCtrl virtual function #1
    CProgressCtrl * (*deleting_destructor)(void *, byte); // CTextProgressCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CTextProgressCtrl virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CTextProgressCtrl CTextProgressCtrl, *PCTextProgressCtrl;

typedef struct CTextProgressCtrl_data CTextProgressCtrl_data, *PCTextProgressCtrl_data;

struct CTextProgressCtrl_data {
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
    undefined4 offset_0x50;
    undefined4 offset_0x54;
    undefined4 offset_0x58;
    undefined4 offset_0x5c;
    undefined field84_0x60;
    undefined field85_0x61;
    undefined field86_0x62;
    undefined field87_0x63;
    undefined4 offset_0x64;
    undefined4 offset_0x68;
    DWORD offset_0x6c;
    DWORD offset_0x70;
    DWORD offset_0x74;
    DWORD offset_0x78;
};

struct CTextProgressCtrl { // class CTextProgressCtrl : CProgressCtrl
    struct CTextProgressCtrl_vftable *vftablePtr;
    struct CTextProgressCtrl_data CTextProgressCtrl_data;
};

typedef struct CBmpButton_vftable0 CBmpButton_vftable0, *PCBmpButton_vftable0;

struct CBmpButton_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CBmpButton virtual function #1
    CBmpButton * (*deleting_destructor)(void *, byte); // CBmpButton virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CBmpButton_data CBmpButton_data, *PCBmpButton_data;

struct CBmpButton_data {
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
};

typedef struct CBmpButton_vftable1 CBmpButton_vftable1, *PCBmpButton_vftable1;

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


// WARNING! conflicting data type names: /ClassDataTypes/CBmpButton/CBmpButton - /CBmpButton

typedef struct CMFunctor<CGuildInfoCtrl>_vftable CMFunctor<CGuildInfoCtrl>_vftable, *PCMFunctor<CGuildInfoCtrl>_vftable;

struct CMFunctor<CGuildInfoCtrl>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CChannelListCtrl> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CGuildInfoCtrl> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CChannelListCtrl> virtual function #3
};

typedef struct CMFunctor<CGuildInfoCtrl> CMFunctor<CGuildInfoCtrl>, *PCMFunctor<CGuildInfoCtrl>;

struct CMFunctor<CGuildInfoCtrl> { // class CMFunctor<CGuildInfoCtrl> : IFunctor
    struct CMFunctor<CGuildInfoCtrl>_vftable *vftablePtr;
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgGDImage/CHgGDImage - /CHgGDImage

typedef struct CHgGDImage_vftable CHgGDImage_vftable, *PCHgGDImage_vftable;

struct CHgGDImage_vftable {
    CHgGDImage * (*deleting_destructor)(void *, byte); // CHgGDImage virtual function #1
};

typedef struct CHgGDImage_data CHgGDImage_data, *PCHgGDImage_data;

struct CHgGDImage_data {
    void *offset_0x0;
    void *offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    undefined field11_0x20;
    undefined field12_0x21;
    undefined field13_0x22;
    undefined field14_0x23;
    undefined field15_0x24;
    undefined field16_0x25;
    undefined field17_0x26;
    undefined field18_0x27;
    undefined field19_0x28;
    undefined field20_0x29;
    undefined field21_0x2a;
    undefined field22_0x2b;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
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
    int offset_0x44;
};

typedef struct CContainerWnd CContainerWnd, *PCContainerWnd;

typedef struct CContainerWnd_vftable CContainerWnd_vftable, *PCContainerWnd_vftable;

typedef struct CContainerWnd_data CContainerWnd_data, *PCContainerWnd_data;

struct CContainerWnd_data {
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
};

struct CContainerWnd_vftable {
    undefined * * (*vfunction1)(void *); // CContainerWnd virtual function #1
    CWnd * (*deleting_destructor)(void *, byte); // CContainerWnd virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CContainerWnd virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

struct CContainerWnd { // class CContainerWnd : CWnd
    struct CContainerWnd_vftable *vftablePtr;
    struct CContainerWnd_data CContainerWnd_data;
};

typedef struct CHgDIB16_vftable CHgDIB16_vftable, *PCHgDIB16_vftable;

struct CHgDIB16_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgDIB16 virtual function #1
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #2
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #3
    bool (*Create)(void *, int, int); // CHgImageBase virtual function #4
    bool (*Create)(void *, int, int); // CHgDIB16 virtual function #5
    void (*Destroy)(void *); // CHgDIB16 virtual function #6
    void (*__CreateFromBitmapWithColorTable)(void *); // CHgImage16 virtual function #7
    bool (*__CreateFromBitmap16)(void *, uchar *, ulong); // CHgImage16 virtual function #8
    bool (*__CreateFromBitmap24)(void *, uchar *, ulong); // CHgImage16 virtual function #9
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgDIB16/CHgDIB16 - /CHgDIB16


// WARNING! conflicting data type names: /ClassDataTypes/IUnknown/IUnknown - /unknwn.h/IUnknown

typedef struct CException CException, *PCException;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CException { // class CException : CObject
    struct CObject CObject;
};

typedef struct CMFunctor<CCustomTabCtrl>_vftable CMFunctor<CCustomTabCtrl>_vftable, *PCMFunctor<CCustomTabCtrl>_vftable;

struct CMFunctor<CCustomTabCtrl>_vftable {
    void (*vfunction1)(void *); // CMFunctor<CCustomTabCtrl> virtual function #1
    void (*deleting_destructor)(void *); // CMFunctor<CCustomTabCtrl> virtual function #2
    void (*vfunction3)(void *, undefined4 *); // CMFunctor<CCustomTabCtrl> virtual function #3
};

typedef struct CMFunctor<CCustomTabCtrl> CMFunctor<CCustomTabCtrl>, *PCMFunctor<CCustomTabCtrl>;

typedef struct CMFunctor<CCustomTabCtrl>_data CMFunctor<CCustomTabCtrl>_data, *PCMFunctor<CCustomTabCtrl>_data;

struct CMFunctor<CCustomTabCtrl>_data {
    void *offset_0x0;
    undefined *offset_0x4;
};

struct CMFunctor<CCustomTabCtrl> { // class CMFunctor<CCustomTabCtrl> : IFunctor
    struct CMFunctor<CCustomTabCtrl>_vftable *vftablePtr;
    struct CMFunctor<CCustomTabCtrl>_data CMFunctor<CCustomTabCtrl>_data;
};

typedef struct _AFX_DLL_MODULE_STATE _AFX_DLL_MODULE_STATE, *P_AFX_DLL_MODULE_STATE;

typedef struct _AFX_DLL_MODULE_STATE_vftable _AFX_DLL_MODULE_STATE_vftable, *P_AFX_DLL_MODULE_STATE_vftable;

struct _AFX_DLL_MODULE_STATE { // class _AFX_DLL_MODULE_STATE : AFX_MODULE_STATE
    struct _AFX_DLL_MODULE_STATE_vftable *vftablePtr;
};

struct _AFX_DLL_MODULE_STATE_vftable {
    AFX_MODULE_STATE * (*deleting_destructor)(void *, byte); // _AFX_DLL_MODULE_STATE virtual function #1
};

typedef struct CNoticeData CNoticeData, *PCNoticeData;

typedef struct CNoticeData_vftable CNoticeData_vftable, *PCNoticeData_vftable;

typedef struct CNoticeData_data CNoticeData_data, *PCNoticeData_data;

struct CNoticeData_data {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    char offset_0x4;
    char offset_0x5;
    char offset_0x6;
    char offset_0x7;
    char offset_0x8;
    char offset_0x9;
    char offset_0xa;
    char offset_0xb;
    undefined4 offset_0xc;
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
    char offset_0x20;
    char offset_0x21;
    char offset_0x22;
    char offset_0x23;
    char offset_0x24;
    char offset_0x25;
    char offset_0x26;
    char offset_0x27;
    undefined4 offset_0x28;
    char offset_0x2c;
    char offset_0x2d;
    char offset_0x2e;
    char offset_0x2f;
    undefined4 offset_0x30;
};

struct CNoticeData_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CNoticeData virtual function #1
};

struct CNoticeData { // class CNoticeData
    struct CNoticeData_vftable *vftablePtr;
    struct CNoticeData_data CNoticeData_data;
};

typedef struct CHeaderCtrl CHeaderCtrl, *PCHeaderCtrl;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CHeaderCtrl { // class CHeaderCtrl : CWnd
    struct CWnd CWnd;
};

typedef struct CGuildInfoLoader_vftable CGuildInfoLoader_vftable, *PCGuildInfoLoader_vftable;

struct CGuildInfoLoader_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CGuildInfoLoader virtual function #1
};

typedef struct CGuildInfoLoader CGuildInfoLoader, *PCGuildInfoLoader;

typedef struct CGuildInfoLoader_data CGuildInfoLoader_data, *PCGuildInfoLoader_data;

struct CGuildInfoLoader_data {
    undefined1 offset_0x0;
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
    undefined field372_0x174;
    undefined field373_0x175;
    undefined field374_0x176;
    undefined field375_0x177;
    undefined field376_0x178;
    undefined field377_0x179;
    undefined field378_0x17a;
    undefined field379_0x17b;
    undefined field380_0x17c;
    undefined field381_0x17d;
    undefined field382_0x17e;
    undefined field383_0x17f;
    undefined field384_0x180;
    undefined field385_0x181;
    undefined field386_0x182;
    undefined field387_0x183;
    undefined field388_0x184;
    undefined field389_0x185;
    undefined field390_0x186;
    undefined field391_0x187;
    undefined field392_0x188;
    undefined field393_0x189;
    undefined field394_0x18a;
    undefined field395_0x18b;
    undefined field396_0x18c;
    undefined field397_0x18d;
    undefined field398_0x18e;
    undefined field399_0x18f;
    undefined field400_0x190;
    undefined field401_0x191;
    undefined field402_0x192;
    undefined field403_0x193;
    undefined field404_0x194;
    undefined field405_0x195;
    undefined field406_0x196;
    undefined field407_0x197;
    undefined field408_0x198;
    undefined field409_0x199;
    undefined field410_0x19a;
    undefined field411_0x19b;
    undefined field412_0x19c;
    undefined field413_0x19d;
    undefined field414_0x19e;
    undefined field415_0x19f;
    undefined field416_0x1a0;
    undefined field417_0x1a1;
    undefined field418_0x1a2;
    undefined field419_0x1a3;
    undefined field420_0x1a4;
    undefined field421_0x1a5;
    undefined field422_0x1a6;
    undefined field423_0x1a7;
    undefined field424_0x1a8;
    undefined field425_0x1a9;
    undefined field426_0x1aa;
    undefined field427_0x1ab;
    undefined field428_0x1ac;
    undefined field429_0x1ad;
    undefined field430_0x1ae;
    undefined field431_0x1af;
    undefined field432_0x1b0;
    undefined field433_0x1b1;
    undefined field434_0x1b2;
    undefined field435_0x1b3;
    undefined field436_0x1b4;
    undefined field437_0x1b5;
    undefined field438_0x1b6;
    undefined field439_0x1b7;
    undefined field440_0x1b8;
    undefined field441_0x1b9;
    undefined field442_0x1ba;
    undefined field443_0x1bb;
    undefined field444_0x1bc;
    undefined field445_0x1bd;
    undefined field446_0x1be;
    undefined field447_0x1bf;
    undefined field448_0x1c0;
    undefined field449_0x1c1;
    undefined field450_0x1c2;
    undefined field451_0x1c3;
    undefined field452_0x1c4;
    undefined field453_0x1c5;
    undefined field454_0x1c6;
    undefined field455_0x1c7;
    undefined field456_0x1c8;
    undefined field457_0x1c9;
    undefined field458_0x1ca;
    undefined field459_0x1cb;
    undefined field460_0x1cc;
    undefined field461_0x1cd;
    undefined field462_0x1ce;
    undefined field463_0x1cf;
    undefined field464_0x1d0;
    undefined field465_0x1d1;
    undefined field466_0x1d2;
    undefined field467_0x1d3;
    undefined field468_0x1d4;
    undefined field469_0x1d5;
    undefined field470_0x1d6;
    undefined field471_0x1d7;
    undefined field472_0x1d8;
    undefined field473_0x1d9;
    undefined field474_0x1da;
    undefined field475_0x1db;
    undefined field476_0x1dc;
    undefined field477_0x1dd;
    undefined field478_0x1de;
    undefined field479_0x1df;
    undefined field480_0x1e0;
    undefined field481_0x1e1;
    undefined field482_0x1e2;
    undefined field483_0x1e3;
    undefined field484_0x1e4;
    undefined field485_0x1e5;
    undefined field486_0x1e6;
    undefined field487_0x1e7;
    undefined field488_0x1e8;
    undefined field489_0x1e9;
    undefined field490_0x1ea;
    undefined field491_0x1eb;
    undefined field492_0x1ec;
    undefined field493_0x1ed;
    undefined field494_0x1ee;
    undefined field495_0x1ef;
    undefined field496_0x1f0;
    undefined field497_0x1f1;
    undefined field498_0x1f2;
    undefined field499_0x1f3;
    undefined field500_0x1f4;
    undefined field501_0x1f5;
    undefined field502_0x1f6;
    undefined field503_0x1f7;
    undefined field504_0x1f8;
    undefined field505_0x1f9;
    undefined field506_0x1fa;
    undefined field507_0x1fb;
    undefined field508_0x1fc;
    undefined field509_0x1fd;
    undefined field510_0x1fe;
    undefined field511_0x1ff;
    undefined field512_0x200;
    undefined1 offset_0x201;
    undefined field514_0x202;
    undefined field515_0x203;
    undefined field516_0x204;
    undefined field517_0x205;
    undefined field518_0x206;
    undefined field519_0x207;
    undefined field520_0x208;
    undefined field521_0x209;
    undefined field522_0x20a;
    undefined field523_0x20b;
    undefined field524_0x20c;
    undefined field525_0x20d;
    undefined field526_0x20e;
    undefined field527_0x20f;
    undefined field528_0x210;
    undefined field529_0x211;
    undefined field530_0x212;
    undefined field531_0x213;
    undefined field532_0x214;
    undefined field533_0x215;
    undefined field534_0x216;
    undefined field535_0x217;
    undefined field536_0x218;
    undefined field537_0x219;
    undefined field538_0x21a;
    undefined field539_0x21b;
    undefined field540_0x21c;
    undefined field541_0x21d;
    undefined field542_0x21e;
    undefined field543_0x21f;
    undefined field544_0x220;
    undefined field545_0x221;
    undefined field546_0x222;
    undefined field547_0x223;
    undefined field548_0x224;
    undefined field549_0x225;
    undefined field550_0x226;
    undefined field551_0x227;
    undefined field552_0x228;
    undefined field553_0x229;
    undefined field554_0x22a;
    undefined field555_0x22b;
    undefined field556_0x22c;
    undefined field557_0x22d;
    undefined field558_0x22e;
    undefined field559_0x22f;
    undefined field560_0x230;
    undefined field561_0x231;
    undefined field562_0x232;
    undefined field563_0x233;
    undefined field564_0x234;
    undefined field565_0x235;
    undefined field566_0x236;
    undefined field567_0x237;
    undefined field568_0x238;
    undefined field569_0x239;
    undefined field570_0x23a;
    undefined field571_0x23b;
    undefined field572_0x23c;
    undefined field573_0x23d;
    undefined field574_0x23e;
    undefined field575_0x23f;
    undefined field576_0x240;
    undefined field577_0x241;
    undefined field578_0x242;
    undefined field579_0x243;
    undefined field580_0x244;
    undefined field581_0x245;
    undefined field582_0x246;
    undefined field583_0x247;
    undefined field584_0x248;
    undefined field585_0x249;
    undefined field586_0x24a;
    undefined field587_0x24b;
    undefined field588_0x24c;
    undefined field589_0x24d;
    undefined field590_0x24e;
    undefined field591_0x24f;
    undefined field592_0x250;
    undefined field593_0x251;
    undefined field594_0x252;
    undefined field595_0x253;
    undefined field596_0x254;
    undefined field597_0x255;
    undefined field598_0x256;
    undefined field599_0x257;
    undefined field600_0x258;
    undefined field601_0x259;
    undefined field602_0x25a;
    undefined field603_0x25b;
    undefined field604_0x25c;
    undefined field605_0x25d;
    undefined field606_0x25e;
    undefined field607_0x25f;
    undefined field608_0x260;
    undefined field609_0x261;
    undefined field610_0x262;
    undefined field611_0x263;
    undefined field612_0x264;
    undefined field613_0x265;
    undefined field614_0x266;
    undefined field615_0x267;
    undefined field616_0x268;
    undefined field617_0x269;
    undefined field618_0x26a;
    undefined field619_0x26b;
    undefined field620_0x26c;
    undefined field621_0x26d;
    undefined field622_0x26e;
    undefined field623_0x26f;
    undefined field624_0x270;
    undefined field625_0x271;
    undefined field626_0x272;
    undefined field627_0x273;
    undefined field628_0x274;
    undefined field629_0x275;
    undefined field630_0x276;
    undefined field631_0x277;
    undefined field632_0x278;
    undefined field633_0x279;
    undefined field634_0x27a;
    undefined field635_0x27b;
    undefined field636_0x27c;
    undefined field637_0x27d;
    undefined field638_0x27e;
    undefined field639_0x27f;
    undefined field640_0x280;
    undefined field641_0x281;
    undefined field642_0x282;
    undefined field643_0x283;
    undefined field644_0x284;
    undefined field645_0x285;
    undefined field646_0x286;
    undefined field647_0x287;
    undefined field648_0x288;
    undefined field649_0x289;
    undefined field650_0x28a;
    undefined field651_0x28b;
    undefined field652_0x28c;
    undefined field653_0x28d;
    undefined field654_0x28e;
    undefined field655_0x28f;
    undefined field656_0x290;
    undefined field657_0x291;
    undefined field658_0x292;
    undefined field659_0x293;
    undefined field660_0x294;
    undefined field661_0x295;
    undefined field662_0x296;
    undefined field663_0x297;
    undefined field664_0x298;
    undefined field665_0x299;
    undefined field666_0x29a;
    undefined field667_0x29b;
    undefined field668_0x29c;
    undefined field669_0x29d;
    undefined field670_0x29e;
    undefined field671_0x29f;
    undefined field672_0x2a0;
    undefined field673_0x2a1;
    undefined field674_0x2a2;
    undefined field675_0x2a3;
    undefined field676_0x2a4;
    undefined field677_0x2a5;
    undefined field678_0x2a6;
    undefined field679_0x2a7;
    undefined field680_0x2a8;
    undefined field681_0x2a9;
    undefined field682_0x2aa;
    undefined field683_0x2ab;
    undefined field684_0x2ac;
    undefined field685_0x2ad;
    undefined field686_0x2ae;
    undefined field687_0x2af;
    undefined field688_0x2b0;
    undefined field689_0x2b1;
    undefined field690_0x2b2;
    undefined field691_0x2b3;
    undefined field692_0x2b4;
    undefined field693_0x2b5;
    undefined field694_0x2b6;
    undefined field695_0x2b7;
    undefined field696_0x2b8;
    undefined field697_0x2b9;
    undefined field698_0x2ba;
    undefined field699_0x2bb;
    undefined field700_0x2bc;
    undefined field701_0x2bd;
    undefined field702_0x2be;
    undefined field703_0x2bf;
    undefined field704_0x2c0;
    undefined field705_0x2c1;
    undefined field706_0x2c2;
    undefined field707_0x2c3;
    undefined field708_0x2c4;
    undefined field709_0x2c5;
    undefined field710_0x2c6;
    undefined field711_0x2c7;
    undefined field712_0x2c8;
    undefined field713_0x2c9;
    undefined field714_0x2ca;
    undefined field715_0x2cb;
    undefined field716_0x2cc;
    undefined field717_0x2cd;
    undefined field718_0x2ce;
    undefined field719_0x2cf;
    undefined field720_0x2d0;
    undefined field721_0x2d1;
    undefined field722_0x2d2;
    undefined field723_0x2d3;
    undefined field724_0x2d4;
    undefined field725_0x2d5;
    undefined field726_0x2d6;
    undefined field727_0x2d7;
    undefined field728_0x2d8;
    undefined field729_0x2d9;
    undefined field730_0x2da;
    undefined field731_0x2db;
    undefined field732_0x2dc;
    undefined field733_0x2dd;
    undefined field734_0x2de;
    undefined field735_0x2df;
    undefined field736_0x2e0;
    undefined field737_0x2e1;
    undefined field738_0x2e2;
    undefined field739_0x2e3;
    undefined field740_0x2e4;
    undefined field741_0x2e5;
    undefined field742_0x2e6;
    undefined field743_0x2e7;
    undefined field744_0x2e8;
    undefined field745_0x2e9;
    undefined field746_0x2ea;
    undefined field747_0x2eb;
    undefined field748_0x2ec;
    undefined field749_0x2ed;
    undefined field750_0x2ee;
    undefined field751_0x2ef;
    undefined field752_0x2f0;
    undefined field753_0x2f1;
    undefined field754_0x2f2;
    undefined field755_0x2f3;
    undefined field756_0x2f4;
    undefined field757_0x2f5;
    undefined field758_0x2f6;
    undefined field759_0x2f7;
    undefined field760_0x2f8;
    undefined field761_0x2f9;
    undefined field762_0x2fa;
    undefined field763_0x2fb;
    undefined field764_0x2fc;
    undefined field765_0x2fd;
    undefined field766_0x2fe;
    undefined field767_0x2ff;
    undefined field768_0x300;
    undefined field769_0x301;
    undefined field770_0x302;
    undefined field771_0x303;
    undefined field772_0x304;
    undefined field773_0x305;
    undefined field774_0x306;
    undefined field775_0x307;
    undefined field776_0x308;
    undefined field777_0x309;
    undefined field778_0x30a;
    undefined field779_0x30b;
    undefined field780_0x30c;
    undefined field781_0x30d;
    undefined field782_0x30e;
    undefined field783_0x30f;
    undefined field784_0x310;
    undefined field785_0x311;
    undefined field786_0x312;
    undefined field787_0x313;
    undefined field788_0x314;
    undefined field789_0x315;
    undefined field790_0x316;
    undefined field791_0x317;
    undefined field792_0x318;
    undefined field793_0x319;
    undefined field794_0x31a;
    undefined field795_0x31b;
    undefined field796_0x31c;
    undefined field797_0x31d;
    undefined field798_0x31e;
    undefined field799_0x31f;
    undefined field800_0x320;
    undefined field801_0x321;
    undefined field802_0x322;
    undefined field803_0x323;
    undefined field804_0x324;
    undefined field805_0x325;
    undefined field806_0x326;
    undefined field807_0x327;
    undefined field808_0x328;
    undefined field809_0x329;
    undefined field810_0x32a;
    undefined field811_0x32b;
    undefined field812_0x32c;
    undefined field813_0x32d;
    undefined field814_0x32e;
    undefined field815_0x32f;
    undefined field816_0x330;
    undefined field817_0x331;
    undefined field818_0x332;
    undefined field819_0x333;
    undefined field820_0x334;
    undefined field821_0x335;
    undefined field822_0x336;
    undefined field823_0x337;
    undefined field824_0x338;
    undefined field825_0x339;
    undefined field826_0x33a;
    undefined field827_0x33b;
    undefined field828_0x33c;
    undefined field829_0x33d;
    undefined field830_0x33e;
    undefined field831_0x33f;
    undefined field832_0x340;
    undefined field833_0x341;
    undefined field834_0x342;
    undefined field835_0x343;
    undefined field836_0x344;
    undefined field837_0x345;
    undefined field838_0x346;
    undefined field839_0x347;
    undefined field840_0x348;
    undefined field841_0x349;
    undefined field842_0x34a;
    undefined field843_0x34b;
    undefined field844_0x34c;
    undefined field845_0x34d;
    undefined field846_0x34e;
    undefined field847_0x34f;
    undefined field848_0x350;
    undefined field849_0x351;
    undefined field850_0x352;
    undefined field851_0x353;
    undefined field852_0x354;
    undefined field853_0x355;
    undefined field854_0x356;
    undefined field855_0x357;
    undefined field856_0x358;
    undefined field857_0x359;
    undefined field858_0x35a;
    undefined field859_0x35b;
    undefined field860_0x35c;
    undefined field861_0x35d;
    undefined field862_0x35e;
    undefined field863_0x35f;
    undefined field864_0x360;
    undefined field865_0x361;
    undefined field866_0x362;
    undefined field867_0x363;
    undefined field868_0x364;
    undefined field869_0x365;
    undefined field870_0x366;
    undefined field871_0x367;
    undefined field872_0x368;
    undefined field873_0x369;
    undefined field874_0x36a;
    undefined field875_0x36b;
    undefined field876_0x36c;
    undefined field877_0x36d;
    undefined field878_0x36e;
    undefined field879_0x36f;
    undefined field880_0x370;
    undefined field881_0x371;
    undefined field882_0x372;
    undefined field883_0x373;
    undefined field884_0x374;
    undefined field885_0x375;
    undefined field886_0x376;
    undefined field887_0x377;
    undefined field888_0x378;
    undefined field889_0x379;
    undefined field890_0x37a;
    undefined field891_0x37b;
    undefined field892_0x37c;
    undefined field893_0x37d;
    undefined field894_0x37e;
    undefined field895_0x37f;
    undefined field896_0x380;
    undefined field897_0x381;
    undefined field898_0x382;
    undefined field899_0x383;
    undefined field900_0x384;
    undefined field901_0x385;
    undefined field902_0x386;
    undefined field903_0x387;
    undefined field904_0x388;
    undefined field905_0x389;
    undefined field906_0x38a;
    undefined field907_0x38b;
    undefined field908_0x38c;
    undefined field909_0x38d;
    undefined field910_0x38e;
    undefined field911_0x38f;
    undefined field912_0x390;
    undefined field913_0x391;
    undefined field914_0x392;
    undefined field915_0x393;
    undefined field916_0x394;
    undefined field917_0x395;
    undefined field918_0x396;
    undefined field919_0x397;
    undefined field920_0x398;
    undefined field921_0x399;
    undefined field922_0x39a;
    undefined field923_0x39b;
    undefined field924_0x39c;
    undefined field925_0x39d;
    undefined field926_0x39e;
    undefined field927_0x39f;
    undefined field928_0x3a0;
    undefined field929_0x3a1;
    undefined field930_0x3a2;
    undefined field931_0x3a3;
    undefined field932_0x3a4;
    undefined field933_0x3a5;
    undefined field934_0x3a6;
    undefined field935_0x3a7;
    undefined field936_0x3a8;
    undefined field937_0x3a9;
    undefined field938_0x3aa;
    undefined field939_0x3ab;
    undefined field940_0x3ac;
    undefined field941_0x3ad;
    undefined field942_0x3ae;
    undefined field943_0x3af;
    undefined field944_0x3b0;
    undefined field945_0x3b1;
    undefined field946_0x3b2;
    undefined field947_0x3b3;
    undefined field948_0x3b4;
    undefined field949_0x3b5;
    undefined field950_0x3b6;
    undefined field951_0x3b7;
    undefined field952_0x3b8;
    undefined field953_0x3b9;
    undefined field954_0x3ba;
    undefined field955_0x3bb;
    undefined field956_0x3bc;
    undefined field957_0x3bd;
    undefined field958_0x3be;
    undefined field959_0x3bf;
    undefined field960_0x3c0;
    undefined field961_0x3c1;
    undefined field962_0x3c2;
    undefined field963_0x3c3;
    undefined field964_0x3c4;
    undefined field965_0x3c5;
    undefined field966_0x3c6;
    undefined field967_0x3c7;
    undefined field968_0x3c8;
    undefined field969_0x3c9;
    undefined field970_0x3ca;
    undefined field971_0x3cb;
    undefined field972_0x3cc;
    undefined field973_0x3cd;
    undefined field974_0x3ce;
    undefined field975_0x3cf;
    undefined field976_0x3d0;
    undefined field977_0x3d1;
    undefined field978_0x3d2;
    undefined field979_0x3d3;
    undefined field980_0x3d4;
    undefined field981_0x3d5;
    undefined field982_0x3d6;
    undefined field983_0x3d7;
    undefined field984_0x3d8;
    undefined field985_0x3d9;
    undefined field986_0x3da;
    undefined field987_0x3db;
    undefined field988_0x3dc;
    undefined field989_0x3dd;
    undefined field990_0x3de;
    undefined field991_0x3df;
    undefined field992_0x3e0;
    undefined field993_0x3e1;
    undefined field994_0x3e2;
    undefined field995_0x3e3;
    undefined field996_0x3e4;
    undefined field997_0x3e5;
    undefined field998_0x3e6;
    undefined field999_0x3e7;
    undefined field1000_0x3e8;
    undefined field1001_0x3e9;
    undefined field1002_0x3ea;
    undefined field1003_0x3eb;
    undefined field1004_0x3ec;
    undefined field1005_0x3ed;
    undefined field1006_0x3ee;
    undefined field1007_0x3ef;
    undefined field1008_0x3f0;
    undefined field1009_0x3f1;
    undefined field1010_0x3f2;
    undefined field1011_0x3f3;
    undefined field1012_0x3f4;
    undefined field1013_0x3f5;
    undefined field1014_0x3f6;
    undefined field1015_0x3f7;
    undefined field1016_0x3f8;
    undefined field1017_0x3f9;
    undefined field1018_0x3fa;
    undefined field1019_0x3fb;
    undefined field1020_0x3fc;
    undefined field1021_0x3fd;
    undefined field1022_0x3fe;
    undefined field1023_0x3ff;
    undefined field1024_0x400;
    undefined field1025_0x401;
    undefined field1026_0x402;
    undefined field1027_0x403;
    undefined4 offset_0x404;
    undefined4 offset_0x408;
    undefined **offset_0x40c;
    undefined1 offset_0x410;
    undefined field1032_0x411;
    undefined field1033_0x412;
    undefined field1034_0x413;
    undefined field1035_0x414;
    undefined field1036_0x415;
    undefined field1037_0x416;
    undefined field1038_0x417;
    undefined field1039_0x418;
    undefined field1040_0x419;
    undefined field1041_0x41a;
    undefined field1042_0x41b;
    undefined field1043_0x41c;
    undefined field1044_0x41d;
    undefined field1045_0x41e;
    undefined field1046_0x41f;
    undefined field1047_0x420;
    undefined field1048_0x421;
    undefined field1049_0x422;
    undefined field1050_0x423;
    undefined field1051_0x424;
    undefined1 offset_0x425;
    undefined field1053_0x426;
    undefined field1054_0x427;
    undefined field1055_0x428;
    undefined field1056_0x429;
    undefined field1057_0x42a;
    undefined field1058_0x42b;
    undefined field1059_0x42c;
    undefined field1060_0x42d;
    undefined field1061_0x42e;
    undefined field1062_0x42f;
    undefined field1063_0x430;
    undefined field1064_0x431;
    undefined field1065_0x432;
    undefined field1066_0x433;
    undefined field1067_0x434;
    undefined field1068_0x435;
    undefined field1069_0x436;
    undefined field1070_0x437;
    undefined field1071_0x438;
    undefined field1072_0x439;
    undefined field1073_0x43a;
    undefined field1074_0x43b;
    undefined field1075_0x43c;
    undefined field1076_0x43d;
    undefined field1077_0x43e;
    undefined field1078_0x43f;
    undefined field1079_0x440;
    undefined field1080_0x441;
    undefined field1081_0x442;
    undefined field1082_0x443;
    undefined field1083_0x444;
    undefined field1084_0x445;
    undefined field1085_0x446;
    undefined field1086_0x447;
    undefined field1087_0x448;
    undefined field1088_0x449;
    undefined field1089_0x44a;
    undefined field1090_0x44b;
    undefined field1091_0x44c;
    undefined field1092_0x44d;
    undefined1 offset_0x44e;
    undefined field1094_0x44f;
    undefined field1095_0x450;
    undefined field1096_0x451;
    undefined field1097_0x452;
    undefined field1098_0x453;
    undefined field1099_0x454;
    undefined field1100_0x455;
    undefined field1101_0x456;
    undefined field1102_0x457;
    undefined field1103_0x458;
    undefined field1104_0x459;
    undefined field1105_0x45a;
    undefined field1106_0x45b;
    undefined field1107_0x45c;
    undefined field1108_0x45d;
    undefined field1109_0x45e;
    undefined field1110_0x45f;
    undefined field1111_0x460;
    undefined field1112_0x461;
    undefined field1113_0x462;
    undefined field1114_0x463;
    undefined field1115_0x464;
    undefined field1116_0x465;
    undefined field1117_0x466;
    undefined field1118_0x467;
    undefined field1119_0x468;
    undefined field1120_0x469;
    undefined field1121_0x46a;
    undefined field1122_0x46b;
    undefined field1123_0x46c;
    undefined field1124_0x46d;
    undefined field1125_0x46e;
    undefined field1126_0x46f;
    undefined field1127_0x470;
    undefined field1128_0x471;
    undefined field1129_0x472;
    undefined field1130_0x473;
    undefined field1131_0x474;
    undefined field1132_0x475;
    undefined field1133_0x476;
    undefined field1134_0x477;
    undefined field1135_0x478;
    undefined field1136_0x479;
    undefined field1137_0x47a;
    undefined field1138_0x47b;
    undefined field1139_0x47c;
    undefined field1140_0x47d;
    undefined field1141_0x47e;
    undefined field1142_0x47f;
    undefined field1143_0x480;
    undefined field1144_0x481;
    undefined field1145_0x482;
    undefined field1146_0x483;
    undefined field1147_0x484;
    undefined field1148_0x485;
    undefined field1149_0x486;
    undefined field1150_0x487;
    undefined field1151_0x488;
    undefined field1152_0x489;
    undefined field1153_0x48a;
    undefined field1154_0x48b;
    undefined field1155_0x48c;
    undefined field1156_0x48d;
    undefined field1157_0x48e;
    undefined field1158_0x48f;
    undefined field1159_0x490;
    undefined field1160_0x491;
    undefined field1161_0x492;
    undefined field1162_0x493;
    undefined field1163_0x494;
    undefined field1164_0x495;
    undefined field1165_0x496;
    undefined field1166_0x497;
    undefined field1167_0x498;
    undefined field1168_0x499;
    undefined field1169_0x49a;
    undefined field1170_0x49b;
    undefined field1171_0x49c;
    undefined field1172_0x49d;
    undefined field1173_0x49e;
    undefined field1174_0x49f;
    undefined field1175_0x4a0;
    undefined field1176_0x4a1;
    undefined field1177_0x4a2;
    undefined field1178_0x4a3;
    undefined field1179_0x4a4;
    undefined field1180_0x4a5;
    undefined field1181_0x4a6;
    undefined field1182_0x4a7;
    undefined field1183_0x4a8;
    undefined field1184_0x4a9;
    undefined field1185_0x4aa;
    undefined field1186_0x4ab;
    undefined field1187_0x4ac;
    undefined field1188_0x4ad;
    undefined field1189_0x4ae;
    undefined field1190_0x4af;
    undefined field1191_0x4b0;
    undefined field1192_0x4b1;
    undefined field1193_0x4b2;
    undefined field1194_0x4b3;
    undefined field1195_0x4b4;
    undefined field1196_0x4b5;
    undefined field1197_0x4b6;
    undefined field1198_0x4b7;
    undefined field1199_0x4b8;
    undefined field1200_0x4b9;
    undefined field1201_0x4ba;
    undefined field1202_0x4bb;
    undefined field1203_0x4bc;
    undefined field1204_0x4bd;
    undefined field1205_0x4be;
    undefined field1206_0x4bf;
    undefined field1207_0x4c0;
    undefined field1208_0x4c1;
    undefined field1209_0x4c2;
    undefined field1210_0x4c3;
    undefined field1211_0x4c4;
    undefined field1212_0x4c5;
    undefined field1213_0x4c6;
    undefined field1214_0x4c7;
    undefined field1215_0x4c8;
    undefined field1216_0x4c9;
    undefined field1217_0x4ca;
    undefined field1218_0x4cb;
    undefined field1219_0x4cc;
    undefined field1220_0x4cd;
    undefined field1221_0x4ce;
    undefined field1222_0x4cf;
    undefined field1223_0x4d0;
    undefined field1224_0x4d1;
    undefined field1225_0x4d2;
    undefined field1226_0x4d3;
    undefined field1227_0x4d4;
    undefined field1228_0x4d5;
    undefined field1229_0x4d6;
    undefined field1230_0x4d7;
    undefined field1231_0x4d8;
    undefined field1232_0x4d9;
    undefined field1233_0x4da;
    undefined field1234_0x4db;
    undefined field1235_0x4dc;
    undefined field1236_0x4dd;
    undefined field1237_0x4de;
    undefined field1238_0x4df;
    undefined field1239_0x4e0;
    undefined field1240_0x4e1;
    undefined field1241_0x4e2;
    undefined field1242_0x4e3;
    undefined field1243_0x4e4;
    undefined field1244_0x4e5;
    undefined field1245_0x4e6;
    undefined field1246_0x4e7;
    undefined field1247_0x4e8;
    undefined field1248_0x4e9;
    undefined field1249_0x4ea;
    undefined field1250_0x4eb;
    undefined field1251_0x4ec;
    undefined field1252_0x4ed;
    undefined field1253_0x4ee;
    undefined field1254_0x4ef;
    undefined field1255_0x4f0;
    undefined field1256_0x4f1;
    undefined field1257_0x4f2;
    undefined field1258_0x4f3;
    undefined field1259_0x4f4;
    undefined field1260_0x4f5;
    undefined field1261_0x4f6;
    undefined field1262_0x4f7;
    undefined field1263_0x4f8;
    undefined field1264_0x4f9;
    undefined field1265_0x4fa;
    undefined field1266_0x4fb;
    undefined field1267_0x4fc;
    undefined field1268_0x4fd;
    undefined field1269_0x4fe;
    undefined field1270_0x4ff;
    undefined field1271_0x500;
    undefined field1272_0x501;
    undefined field1273_0x502;
    undefined field1274_0x503;
    undefined field1275_0x504;
    undefined field1276_0x505;
    undefined field1277_0x506;
    undefined field1278_0x507;
    undefined field1279_0x508;
    undefined field1280_0x509;
    undefined field1281_0x50a;
    undefined field1282_0x50b;
    undefined field1283_0x50c;
    undefined field1284_0x50d;
    undefined field1285_0x50e;
    undefined field1286_0x50f;
    undefined field1287_0x510;
    undefined field1288_0x511;
    undefined field1289_0x512;
    undefined field1290_0x513;
    undefined field1291_0x514;
    undefined field1292_0x515;
    undefined field1293_0x516;
    undefined field1294_0x517;
    undefined field1295_0x518;
    undefined field1296_0x519;
    undefined field1297_0x51a;
    undefined field1298_0x51b;
    undefined field1299_0x51c;
    undefined field1300_0x51d;
    undefined field1301_0x51e;
    undefined field1302_0x51f;
    undefined field1303_0x520;
    undefined field1304_0x521;
    undefined field1305_0x522;
    undefined field1306_0x523;
    undefined field1307_0x524;
    undefined field1308_0x525;
    undefined field1309_0x526;
    undefined field1310_0x527;
    undefined field1311_0x528;
    undefined field1312_0x529;
    undefined field1313_0x52a;
    undefined field1314_0x52b;
    undefined field1315_0x52c;
    undefined field1316_0x52d;
    undefined field1317_0x52e;
    undefined field1318_0x52f;
    undefined field1319_0x530;
    undefined field1320_0x531;
    undefined field1321_0x532;
    undefined field1322_0x533;
    undefined field1323_0x534;
    undefined field1324_0x535;
    undefined field1325_0x536;
    undefined field1326_0x537;
    undefined field1327_0x538;
    undefined field1328_0x539;
    undefined field1329_0x53a;
    undefined field1330_0x53b;
    undefined field1331_0x53c;
    undefined field1332_0x53d;
    undefined field1333_0x53e;
    undefined field1334_0x53f;
    undefined field1335_0x540;
    undefined field1336_0x541;
    undefined field1337_0x542;
    undefined field1338_0x543;
    undefined field1339_0x544;
    undefined field1340_0x545;
    undefined field1341_0x546;
    undefined field1342_0x547;
    undefined field1343_0x548;
    undefined field1344_0x549;
    undefined field1345_0x54a;
    undefined field1346_0x54b;
    undefined field1347_0x54c;
    undefined field1348_0x54d;
    undefined field1349_0x54e;
    undefined field1350_0x54f;
    undefined field1351_0x550;
    undefined field1352_0x551;
    undefined field1353_0x552;
    undefined field1354_0x553;
    undefined field1355_0x554;
    undefined field1356_0x555;
    undefined field1357_0x556;
    undefined field1358_0x557;
};

struct CGuildInfoLoader { // class CGuildInfoLoader
    struct CGuildInfoLoader_vftable *vftablePtr;
    struct CGuildInfoLoader_data CGuildInfoLoader_data;
};

typedef struct CHtmlCtrl_vftable CHtmlCtrl_vftable, *PCHtmlCtrl_vftable;

struct CHtmlCtrl_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CHtmlCtrl virtual function #1
    CWnd * (*deleting_destructor)(void *, byte); // CHtmlCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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


// WARNING! conflicting data type names: /ClassDataTypes/CHtmlCtrl/CHtmlCtrl - /CHtmlCtrl

typedef struct CHtmlCtrl_data CHtmlCtrl_data, *PCHtmlCtrl_data;

struct CHtmlCtrl_data {
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
    undefined4 offset_0x50;
};


// WARNING! conflicting data type names: /ClassDataTypes/CCustomTabCtrl/CCustomTabCtrl - /CCustomTabCtrl

typedef struct CCustomTabCtrl_vftable CCustomTabCtrl_vftable, *PCCustomTabCtrl_vftable;

struct CCustomTabCtrl_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CCustomTabCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CCustomTabCtrl virtual function #4
    void (*ShowControl)(void *, bool); // CCustomTabCtrl virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomTabCtrl virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    int (*FindAbuseAndReplaceTo)(void *, char); //  virtual function #8
};

typedef struct CCustomTabCtrl_data CCustomTabCtrl_data, *PCCustomTabCtrl_data;

struct CCustomTabCtrl_data {
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
    int offset_0x84;
    undefined field133_0x88;
    undefined field134_0x89;
    undefined field135_0x8a;
    undefined field136_0x8b;
    undefined field137_0x8c;
    undefined field138_0x8d;
    undefined field139_0x8e;
    undefined field140_0x8f;
    void *offset_0x90;
    void *offset_0x94;
    undefined field143_0x98;
    undefined field144_0x99;
    undefined field145_0x9a;
    undefined field146_0x9b;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
    undefined4 offset_0xa8;
    undefined4 offset_0xac;
    undefined4 offset_0xb0;
    undefined4 offset_0xb4;
    undefined4 offset_0xb8;
};

typedef struct CRoomCtrl_T1 CRoomCtrl_T1, *PCRoomCtrl_T1;

typedef struct CRoomCtrl_T1_vftable CRoomCtrl_T1_vftable, *PCRoomCtrl_T1_vftable;

typedef struct CRoomCtrl_T1_data CRoomCtrl_T1_data, *PCRoomCtrl_T1_data;

struct CRoomCtrl_T1_data {
    undefined4 offset_0x0;
    int offset_0x4;
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
};

struct CRoomCtrl_T1_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CRoomCtrl_T1 virtual function #1
    bool (*CreateRoom)(void *, struct CWnd *, uint, struct CRect *, struct CPoint *, int, struct SharedRoomRes *, struct vector<int,std::allocator<int>_> *); // CRoomCtrl_T1 virtual function #2
    void (*UpdateRoomBtnState)(void *); // CRoomCtrl_T1 virtual function #3
    int (*DrawRoom)(void *, struct HDC__ *, struct CRect *); // CRoomCtrl_T1 virtual function #4
    void (*DrawAvatar)(void *, struct CRoomData *, struct HDC__ *); // CRoomCtrl_T1 virtual function #5
    void (*DrawBackgroundImage)(void *, struct CRoomData *, struct HDC__ *); // CRoomCtrl_T1 virtual function #6
    void (*DrawTitle)(void *, struct CRoomData *, struct HDC__ *); // CRoomCtrl_T1 virtual function #7
    void (*DrawRoomState)(void *, struct CRoomData *, struct HDC__ *); // CRoomCtrl_T1 virtual function #8
    void (*DrawRoomOption)(void *, struct CRoomData *, struct HDC__ *); // CRoomCtrl_T1 virtual function #9
    char * (*HitTest)(void *, struct CPoint *); // CRoomCtrl_T1 virtual function #10
    void (*SetRoomRect)(void *, struct CRect *); // CRoomCtrl_T1 virtual function #11
    int (*GetRoomImageIndex)(void *, struct CRoomData *); // CRoomCtrl_T1 virtual function #12
};

struct CRoomCtrl_T1 { // class CRoomCtrl_T1
    struct CRoomCtrl_T1_vftable *vftablePtr;
    struct CRoomCtrl_T1_data CRoomCtrl_T1_data;
};

typedef struct CAutoInitialize CAutoInitialize, *PCAutoInitialize;

struct CAutoInitialize { // class CAutoInitialize
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

typedef struct CPen_vftable CPen_vftable, *PCPen_vftable;

struct CPen_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPen virtual function #1
    void * (*deleting_destructor)(void *, uint); // CPen virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

typedef struct CPen CPen, *PCPen;

struct CPen { // class CPen : CGdiObject
    struct CPen_vftable *vftablePtr;
};

typedef struct CCustomRadioButton_vftable1 CCustomRadioButton_vftable1, *PCCustomRadioButton_vftable1;

struct CCustomRadioButton_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomRadioButton virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomRadioButton virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomRadioButton_vftable0 CCustomRadioButton_vftable0, *PCCustomRadioButton_vftable0;

struct CCustomRadioButton_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomRadioButton virtual function #1
    CCustomRadioButton * (*deleting_destructor)(void *, byte); // CCustomRadioButton virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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


// WARNING! conflicting data type names: /ClassDataTypes/CCustomRadioButton/CCustomRadioButton - /CCustomRadioButton

typedef struct CHgGradient_vftable CHgGradient_vftable, *PCHgGradient_vftable;

struct CHgGradient_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CHgGradient virtual function #1
};

typedef struct CHgGradient_data CHgGradient_data, *PCHgGradient_data;

struct CHgGradient_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
};

typedef struct CHgGradient CHgGradient, *PCHgGradient;

struct CHgGradient_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
};

struct CHgGradient { // class CHgGradient
    struct CHgGradient_vftable *vftablePtr;
    struct CHgGradient_data CHgGradient_data;
};

typedef struct CProgressCtrl CProgressCtrl, *PCProgressCtrl;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CProgressCtrl { // class CProgressCtrl : CWnd
    struct CWnd CWnd;
};


// WARNING! conflicting data type names: /ClassDataTypes/CAdWnd/CAdWnd - /CAdWnd

typedef struct CAdWnd_vftable CAdWnd_vftable, *PCAdWnd_vftable;

struct CAdWnd_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWnd virtual function #1
    CAdWnd * (*deleting_destructor)(void *, byte); // CAdWnd virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CAdWnd virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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

typedef struct CAdWnd_data CAdWnd_data, *PCAdWnd_data;

typedef struct cHgAnigifList cHgAnigifList, *PcHgAnigifList;

struct CAdWnd_data {
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
    struct cHgAnigifList *offset_0x50;
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
    undefined4 offset_0x64;
    undefined1 offset_0x68;
    undefined field99_0x69;
    undefined field100_0x6a;
    undefined field101_0x6b;
    undefined field102_0x6c;
    undefined field103_0x6d;
    undefined field104_0x6e;
    undefined field105_0x6f;
    undefined field106_0x70;
    undefined field107_0x71;
    undefined field108_0x72;
    undefined field109_0x73;
    undefined field110_0x74;
    undefined field111_0x75;
    undefined field112_0x76;
    undefined field113_0x77;
    undefined field114_0x78;
    undefined field115_0x79;
    undefined field116_0x7a;
    undefined field117_0x7b;
    undefined field118_0x7c;
    undefined field119_0x7d;
    undefined field120_0x7e;
    undefined field121_0x7f;
    undefined field122_0x80;
    undefined field123_0x81;
    undefined field124_0x82;
    undefined field125_0x83;
    undefined field126_0x84;
    undefined field127_0x85;
    undefined field128_0x86;
    undefined field129_0x87;
    undefined field130_0x88;
    undefined field131_0x89;
    undefined field132_0x8a;
    undefined field133_0x8b;
    undefined field134_0x8c;
    undefined field135_0x8d;
    undefined field136_0x8e;
    undefined field137_0x8f;
    undefined field138_0x90;
    undefined field139_0x91;
    undefined field140_0x92;
    undefined field141_0x93;
    undefined field142_0x94;
    undefined field143_0x95;
    undefined field144_0x96;
    undefined field145_0x97;
    undefined field146_0x98;
    undefined field147_0x99;
    undefined field148_0x9a;
    undefined field149_0x9b;
    undefined field150_0x9c;
    undefined field151_0x9d;
    undefined field152_0x9e;
    undefined field153_0x9f;
    undefined field154_0xa0;
    undefined field155_0xa1;
    undefined field156_0xa2;
    undefined field157_0xa3;
    undefined field158_0xa4;
    undefined field159_0xa5;
    undefined field160_0xa6;
    undefined field161_0xa7;
    undefined field162_0xa8;
    undefined field163_0xa9;
    undefined field164_0xaa;
    undefined field165_0xab;
    undefined field166_0xac;
    undefined field167_0xad;
    undefined field168_0xae;
    undefined field169_0xaf;
    undefined field170_0xb0;
    undefined field171_0xb1;
    undefined field172_0xb2;
    undefined field173_0xb3;
    undefined field174_0xb4;
    undefined field175_0xb5;
    undefined field176_0xb6;
    undefined field177_0xb7;
    undefined field178_0xb8;
    undefined field179_0xb9;
    undefined field180_0xba;
    undefined field181_0xbb;
    undefined field182_0xbc;
    undefined field183_0xbd;
    undefined field184_0xbe;
    undefined field185_0xbf;
    undefined field186_0xc0;
    undefined field187_0xc1;
    undefined field188_0xc2;
    undefined field189_0xc3;
    undefined field190_0xc4;
    undefined field191_0xc5;
    undefined field192_0xc6;
    undefined field193_0xc7;
    undefined field194_0xc8;
    undefined field195_0xc9;
    undefined field196_0xca;
    undefined field197_0xcb;
    undefined field198_0xcc;
    undefined field199_0xcd;
    undefined field200_0xce;
    undefined field201_0xcf;
    undefined field202_0xd0;
    undefined field203_0xd1;
    undefined field204_0xd2;
    undefined field205_0xd3;
    undefined field206_0xd4;
    undefined field207_0xd5;
    undefined field208_0xd6;
    undefined field209_0xd7;
    undefined field210_0xd8;
    undefined field211_0xd9;
    undefined field212_0xda;
    undefined field213_0xdb;
    undefined field214_0xdc;
    undefined field215_0xdd;
    undefined field216_0xde;
    undefined field217_0xdf;
    undefined field218_0xe0;
    undefined field219_0xe1;
    undefined field220_0xe2;
    undefined field221_0xe3;
    undefined field222_0xe4;
    undefined field223_0xe5;
    undefined field224_0xe6;
    undefined field225_0xe7;
    undefined field226_0xe8;
    undefined field227_0xe9;
    undefined field228_0xea;
    undefined field229_0xeb;
    undefined field230_0xec;
    undefined field231_0xed;
    undefined field232_0xee;
    undefined field233_0xef;
    undefined field234_0xf0;
    undefined field235_0xf1;
    undefined field236_0xf2;
    undefined field237_0xf3;
    undefined field238_0xf4;
    undefined field239_0xf5;
    undefined field240_0xf6;
    undefined field241_0xf7;
    undefined field242_0xf8;
    undefined field243_0xf9;
    undefined field244_0xfa;
    undefined field245_0xfb;
    undefined field246_0xfc;
    undefined field247_0xfd;
    undefined field248_0xfe;
    undefined field249_0xff;
    undefined field250_0x100;
    undefined field251_0x101;
    undefined field252_0x102;
    undefined field253_0x103;
    undefined field254_0x104;
    undefined field255_0x105;
    undefined field256_0x106;
    undefined field257_0x107;
    undefined field258_0x108;
    undefined field259_0x109;
    undefined field260_0x10a;
    undefined field261_0x10b;
    undefined field262_0x10c;
    undefined field263_0x10d;
    undefined field264_0x10e;
    undefined field265_0x10f;
    undefined field266_0x110;
    undefined field267_0x111;
    undefined field268_0x112;
    undefined field269_0x113;
    undefined field270_0x114;
    undefined field271_0x115;
    undefined field272_0x116;
    undefined field273_0x117;
    undefined field274_0x118;
    undefined field275_0x119;
    undefined field276_0x11a;
    undefined field277_0x11b;
    undefined field278_0x11c;
    undefined field279_0x11d;
    undefined field280_0x11e;
    undefined field281_0x11f;
    undefined field282_0x120;
    undefined field283_0x121;
    undefined field284_0x122;
    undefined field285_0x123;
    undefined field286_0x124;
    undefined field287_0x125;
    undefined field288_0x126;
    undefined field289_0x127;
    undefined field290_0x128;
    undefined field291_0x129;
    undefined field292_0x12a;
    undefined field293_0x12b;
    undefined field294_0x12c;
    undefined field295_0x12d;
    undefined field296_0x12e;
    undefined field297_0x12f;
    undefined field298_0x130;
    undefined field299_0x131;
    undefined field300_0x132;
    undefined field301_0x133;
    undefined field302_0x134;
    undefined field303_0x135;
    undefined field304_0x136;
    undefined field305_0x137;
    undefined field306_0x138;
    undefined field307_0x139;
    undefined field308_0x13a;
    undefined field309_0x13b;
    undefined field310_0x13c;
    undefined field311_0x13d;
    undefined field312_0x13e;
    undefined field313_0x13f;
    undefined field314_0x140;
    undefined field315_0x141;
    undefined field316_0x142;
    undefined field317_0x143;
    undefined field318_0x144;
    undefined field319_0x145;
    undefined field320_0x146;
    undefined field321_0x147;
    undefined field322_0x148;
    undefined field323_0x149;
    undefined field324_0x14a;
    undefined field325_0x14b;
    undefined field326_0x14c;
    undefined field327_0x14d;
    undefined field328_0x14e;
    undefined field329_0x14f;
    undefined field330_0x150;
    undefined field331_0x151;
    undefined field332_0x152;
    undefined field333_0x153;
    undefined field334_0x154;
    undefined field335_0x155;
    undefined field336_0x156;
    undefined field337_0x157;
    undefined field338_0x158;
    undefined field339_0x159;
    undefined field340_0x15a;
    undefined field341_0x15b;
    undefined field342_0x15c;
    undefined field343_0x15d;
    undefined field344_0x15e;
    undefined field345_0x15f;
    undefined field346_0x160;
    undefined field347_0x161;
    undefined field348_0x162;
    undefined field349_0x163;
    undefined field350_0x164;
    undefined field351_0x165;
    undefined field352_0x166;
    undefined field353_0x167;
    undefined4 offset_0x168;
};

struct cHgAnigifList { // PlaceHolder Structure
};

typedef struct CPtrList CPtrList, *PCPtrList;

struct CObject { // class CObject
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct CPtrList { // class CPtrList : CObject
    struct CObject CObject;
};

typedef struct CHgGDImageInPool CHgGDImageInPool, *PCHgGDImageInPool;

typedef struct CHgGDImageInPool_vftable CHgGDImageInPool_vftable, *PCHgGDImageInPool_vftable;

struct CHgGDImage_data {
    void *offset_0x0;
    void *offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    undefined field11_0x20;
    undefined field12_0x21;
    undefined field13_0x22;
    undefined field14_0x23;
    undefined field15_0x24;
    undefined field16_0x25;
    undefined field17_0x26;
    undefined field18_0x27;
    undefined field19_0x28;
    undefined field20_0x29;
    undefined field21_0x2a;
    undefined field22_0x2b;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
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
    int offset_0x44;
};

struct CHgGDImageInPool_vftable {
    CHgGDImage * (*deleting_destructor)(void *, byte); // CHgGDImageInPool virtual function #1
};

struct CHgGDImageInPool { // class CHgGDImageInPool : CHgGDImage
    struct CHgGDImageInPool_vftable *vftablePtr;
    struct CHgGDImage_data CHgGDImage_data;
};

typedef struct CCustomButton_vftable1 CCustomButton_vftable1, *PCCustomButton_vftable1;

struct CCustomButton_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomButton virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CCustomButton virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomButton virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomButton_vftable0 CCustomButton_vftable0, *PCCustomButton_vftable0;

struct CCustomButton_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomButton virtual function #1
    CButton * (*deleting_destructor)(void *, byte); // CCustomButton virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    AFX_MSGMAP * (*GetMessageMap)(void *); // CCustomButton virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CButton virtual function #83
};


// WARNING! conflicting data type names: /ClassDataTypes/CCustomButton/CCustomButton - /CCustomButton

typedef struct CSkinScrollbar_vftable0 CSkinScrollbar_vftable0, *PCSkinScrollbar_vftable0;

struct CSkinScrollbar_vftable0 {
    void (*vfunction1)(void *, byte); // CSkinScrollbar virtual function #1
    CStatic * (*deleting_destructor)(void *, byte); // CSkinScrollbar virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CSkinScrollbar virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CStatic virtual function #83
};

typedef struct CSkinScrollbar_vftable1 CSkinScrollbar_vftable1, *PCSkinScrollbar_vftable1;

struct CSkinScrollbar_vftable1 {
    void (*vfunction1)(void *, byte); // CSkinScrollbar virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*vfunction6)(void *, struct IParam *); // CSkinScrollbar virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CSkinScrollbar CSkinScrollbar, *PCSkinScrollbar;

struct CSkinScrollbar { // class CSkinScrollbar : CStatic : CControlBase
    struct CSkinScrollbar_vftable0 *vftablePtr;
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
    struct CSkinScrollbar_vftable1 *vftablePtr;
};

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

typedef struct CRectDrawer_vftable CRectDrawer_vftable, *PCRectDrawer_vftable;

struct CRectDrawer_vftable {
    undefined4 * (*deleting_destructor)(void *, byte); // CRectDrawer virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CRectDrawer virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CRectDrawer_data CRectDrawer_data, *PCRectDrawer_data;

struct CRectDrawer_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
};

typedef struct CRectDrawer CRectDrawer, *PCRectDrawer;

struct CRectDrawer_data {
    undefined4 offset_0x0;
    undefined4 offset_0x4;
    undefined4 offset_0x8;
    undefined4 offset_0xc;
    undefined4 offset_0x10;
    undefined4 offset_0x14;
    undefined4 offset_0x18;
    undefined4 offset_0x1c;
};

struct CRectDrawer { // class CRectDrawer : CControlBase
    struct CRectDrawer_vftable *vftablePtr;
    struct CRectDrawer_data CRectDrawer_data;
};

typedef struct CButton CButton, *PCButton;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CButton { // class CButton : CWnd
    struct CWnd CWnd;
};

typedef struct CCustomEdit_vftable1 CCustomEdit_vftable1, *PCCustomEdit_vftable1;

struct CCustomEdit_vftable1 {
    void (*vfunction1)(void *, byte); // CCustomEdit virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CControlBase virtual function #2
    bool (*DestroyControl)(void *); // CControlBase virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CCustomEdit virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CCustomEdit_vftable0 CCustomEdit_vftable0, *PCCustomEdit_vftable0;

struct CCustomEdit_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CCustomEdit virtual function #1
    CCustomEdit * (*deleting_destructor)(void *, byte); // CCustomEdit virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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


// WARNING! conflicting data type names: /ClassDataTypes/CCustomEdit/CCustomEdit - /CCustomEdit

typedef struct IParam IParam, *PIParam;

struct IParam { // class IParam
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};


// WARNING! conflicting data type names: /ClassDataTypes/IDataObject/IDataObject - /objidl.h/IDataObject

typedef struct CFont CFont, *PCFont;

typedef struct CFont_vftable CFont_vftable, *PCFont_vftable;

struct CFont { // class CFont : CGdiObject
    struct CFont_vftable *vftablePtr;
};

struct CFont_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CFont virtual function #1
    void * (*deleting_destructor)(void *, uint); // CFont virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};

typedef struct CParam_vftable CParam_vftable, *PCParam_vftable;

struct CParam_vftable {
    void (*SetContext)(void *, uint); // CParam virtual function #1
    uint (*GetContext)(void *); // CParam virtual function #2
    char * (*GetService)(void *); // CParam virtual function #3
    char * (*GetCommand)(void *); // CParam virtual function #4
    int (*GetItemCount)(void *); // CParam virtual function #5
    bool (*IsConst)(void *); // CParam virtual function #6
    bool (*IsExistKey)(void *, char *); // CParam virtual function #7
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #8
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #9
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #10
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #11
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #12
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #13
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #14
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #15
    bool (*AddValue)(void *, char *, struct IParam *); // CParam virtual function #16
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #17
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #18
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #19
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #20
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #21
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #22
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #23
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #24
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #25
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #26
    bool (*GetValue)(void *, char *, struct IParam **); // CParam virtual function #27
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #28
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #29
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #30
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #31
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #32
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #33
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #34
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #35
    bool (*SetValue)(void *, char *, struct IParam *); // CParam virtual function #36
    bool (*DelKey)(void *, char *); // CParam virtual function #37
    void (*Clear)(void *); // CParam virtual function #38
    bool (*GetData)(void *, void **, int *); // CParam virtual function #39
    char * (*GetIPAddress)(void *); // CParam virtual function #40
    ushort (*GetPort)(void *); // CParam virtual function #41
    bool (*IsEncrypted)(void *); // CParam virtual function #42
    bool (*GetURL)(void *, char **, int *); // CParam virtual function #43
    bool (*GetZipURL)(void *, char **, int *); // CParam virtual function #44
    bool (*GetEncryptURL)(void *, char **, int *, char *, bool); // CParam virtual function #45
    CParam * (*deleting_destructor)(void *, byte); // CParam virtual function #46
};

typedef struct CParam CParam, *PCParam;

struct CParam { // class CParam : IParam
    struct CParam_vftable *vftablePtr;
};

typedef struct CStatic CStatic, *PCStatic;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CStatic { // class CStatic : CWnd
    struct CWnd CWnd;
};

typedef struct CFormView CFormView, *PCFormView;

struct CScrollView { // class CScrollView : CView
    struct CView CView;
};

struct CFormView { // class CFormView : CScrollView
    struct CScrollView CScrollView;
};

typedef struct CWaitingMemberListCtrl_vftable1 CWaitingMemberListCtrl_vftable1, *PCWaitingMemberListCtrl_vftable1;

struct CWaitingMemberListCtrl_vftable1 {
    void (*vfunction1)(void *, byte); // CWaitingMemberListCtrl virtual function #1
    bool (*CreateControl)(void *, struct IParam *); // CListCtrlEx virtual function #2
    bool (*DestroyControl)(void *); // CChannelListCtrl virtual function #3
    bool (*IsCreated)(void *); // CControlBase virtual function #4
    void (*ShowControl)(void *, bool); // CControlBase virtual function #5
    void (*UpdateControl)(void *, struct IParam *); // CListCtrlEx virtual function #6
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #7
    CWnd * (*GetCWndPtr)(void *); // CControlBase virtual function #8
};

typedef struct CWaitingMemberListCtrl_vftable0 CWaitingMemberListCtrl_vftable0, *PCWaitingMemberListCtrl_vftable0;

struct CWaitingMemberListCtrl_vftable0 {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWaitingMemberListCtrl virtual function #1
    CWaitingMemberListCtrl * (*deleting_destructor)(void *, byte); // CWaitingMemberListCtrl virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
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
    void (*DrawItem)(void *, struct tagDRAWITEMSTRUCT *); // CChannelListCtrl virtual function #82
    int (*OnSortItem)(void *, ulong, ulong, int, int); // CListCtrlEx virtual function #83
    bool (*DoListCtrlSetting)(void *); // CWaitingMemberListCtrl virtual function #84
    void (*GetColumnFormatString)(void *, int, char *, char *, int); // CListCtrlEx virtual function #85
    void (*MeasureItem)(void *, struct tagMEASUREITEMSTRUCT *); // CListCtrlEx virtual function #86
};


// WARNING! conflicting data type names: /ClassDataTypes/CWaitingMemberListCtrl/CWaitingMemberListCtrl - /CWaitingMemberListCtrl

typedef struct CWaitingMemberListCtrl_data CWaitingMemberListCtrl_data, *PCWaitingMemberListCtrl_data;

struct CWaitingMemberListCtrl_data {
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
    undefined4 offset_0x80;
    undefined4 offset_0x84;
    undefined4 offset_0x88;
    undefined4 offset_0x8c;
    undefined4 offset_0x90;
    undefined4 offset_0x94;
    int *offset_0x98;
    undefined4 offset_0x9c;
    undefined4 offset_0xa0;
    undefined4 offset_0xa4;
};

typedef struct CColourPopup_vftable CColourPopup_vftable, *PCColourPopup_vftable;

struct CColourPopup_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CWnd virtual function #1
    CWnd * (*deleting_destructor)(void *, byte); // CColourPopup virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
    int (*OnCmdMsg)(void *, uint, int, void *, struct AFX_CMDHANDLERINFO *); // CCmdTarget virtual function #6
    void (*OnFinalRelease)(void *); // CWnd virtual function #7
    int (*IsInvokeAllowed)(void *, long); // CCmdTarget virtual function #8
    int (*GetDispatchIID)(void *, struct _GUID *); // CCmdTarget virtual function #9
    uint (*GetTypeInfoCount)(void *); // CCmdTarget virtual function #10
    CTypeLibCache * (*GetTypeLibCache)(void *); // CCmdTarget virtual function #11
    long (*GetTypeLib)(void *, ulong, struct ITypeLib **); // CCmdTarget virtual function #12
    undefined * * (*vfunction13)(void *); // CColourPopup virtual function #13
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
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #66
    void (*vfunction67)(void *); // CColourPopup virtual function #67
    void (*vfunction68)(void *); // CColourPopup virtual function #68
    void (*vfunction69)(void *, struct tagMSG *); // CColourPopup virtual function #69
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

typedef struct CColourPopup_data CColourPopup_data, *PCColourPopup_data;

struct CColourPopup_data {
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
    HWND offset_0x1c;
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
    undefined **offset_0xa4;
    undefined4 offset_0xa8;
    undefined **offset_0xac;
    undefined4 offset_0xb0;
    void *offset_0xb4;
    void *offset_0xb8;
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
    char *offset_0x12c;
};

typedef struct CColourPopup CColourPopup, *PCColourPopup;

struct CColourPopup_data {
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
    HWND offset_0x1c;
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
    undefined **offset_0xa4;
    undefined4 offset_0xa8;
    undefined **offset_0xac;
    undefined4 offset_0xb0;
    void *offset_0xb4;
    void *offset_0xb8;
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
    char *offset_0x12c;
};

struct CColourPopup { // class CColourPopup : CWnd
    struct CColourPopup_vftable *vftablePtr;
    struct CColourPopup_data CColourPopup_data;
};

typedef struct CRichEditCtrl CRichEditCtrl, *PCRichEditCtrl;

struct CWnd { // class CWnd : CCmdTarget
    struct CCmdTarget CCmdTarget;
};

struct CRichEditCtrl { // class CRichEditCtrl : CWnd
    struct CWnd CWnd;
};

typedef struct CHtmlView CHtmlView, *PCHtmlView;

struct CFormView { // class CFormView : CScrollView
    struct CScrollView CScrollView;
};

struct CHtmlView { // class CHtmlView : CFormView
    struct CFormView CFormView;
};

typedef struct CMidiPlay_vftable CMidiPlay_vftable, *PCMidiPlay_vftable;

struct CMidiPlay_vftable {
    CMidiPlay * (*deleting_destructor)(void *, byte); // CMidiPlay virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CMidiPlay/CMidiPlay - /CMidiPlay

typedef struct CMidiPlay_data CMidiPlay_data, *PCMidiPlay_data;

struct CMidiPlay_data {
    struct HWND__ *offset_0x0;
    int offset_0x4;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
};

typedef struct CHgMemDCList_vftable CHgMemDCList_vftable, *PCHgMemDCList_vftable;

struct CHgMemDCList_vftable {
    CRuntimeClass * (*GetRuntimeClass)(void *); // CPtrList virtual function #1
    CPtrList * (*vfunction2)(void *, byte); // _CTypedPtrList<...> virtual function #2
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #3
    void (*~CHgGDImageFrame)(void *); // CHgGDImageFrame virtual function #4
    void (*DispatchNotifyEvent)(void *, struct tagNMHEADERA *); // CHeaderCtrlEx virtual function #5
};


// WARNING! conflicting data type names: /ClassDataTypes/CHgMemDCList/CHgMemDCList - /CHgMemDCList

typedef struct CControlList_vftable CControlList_vftable, *PCControlList_vftable;

struct CControlList_vftable {
    CControlList * (*deleting_destructor)(void *, byte); // CControlList virtual function #1
};


// WARNING! conflicting data type names: /ClassDataTypes/CControlList/CControlList - /CControlList

typedef struct CControlList_data CControlList_data, *PCControlList_data;

struct CControlList_data {
    int offset_0x0;
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
};

typedef struct _INTERNET_BUFFERSA _INTERNET_BUFFERSA, *P_INTERNET_BUFFERSA;

struct _INTERNET_BUFFERSA { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWinThread - /ClassDataTypes/CWinThread/CWinThread


// WARNING! conflicting data type names: /Demangler/CStatic - /ClassDataTypes/CStatic/CStatic

typedef struct CMemberData CMemberData, *PCMemberData;

struct CMemberData { // PlaceHolder Structure
};

typedef struct CGameFinder CGameFinder, *PCGameFinder;

struct CGameFinder { // PlaceHolder Structure
};

typedef struct IGod IGod, *PIGod;

struct IGod { // PlaceHolder Structure
};

typedef struct CFunctor CFunctor, *PCFunctor;

struct CFunctor { // PlaceHolder Structure
};

typedef struct __POSITION __POSITION, *P__POSITION;

struct __POSITION { // PlaceHolder Structure
};

typedef struct CStringList CStringList, *PCStringList;

struct CStringList { // PlaceHolder Structure
};

typedef struct CFrameworkException CFrameworkException, *PCFrameworkException;

struct CFrameworkException { // PlaceHolder Structure
};

typedef struct tagRGBTRIPLE tagRGBTRIPLE, *PtagRGBTRIPLE;

struct tagRGBTRIPLE { // PlaceHolder Structure
};

typedef struct IOleInPlaceUIWindow IOleInPlaceUIWindow, *PIOleInPlaceUIWindow;

struct IOleInPlaceUIWindow { // PlaceHolder Structure
};

typedef struct CGlobalGameEvent CGlobalGameEvent, *PCGlobalGameEvent;

struct CGlobalGameEvent { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CRoomListCtrl_T1 - /ClassDataTypes/CRoomListCtrl_T1/CRoomListCtrl_T1


// WARNING! conflicting data type names: /Demangler/CCommonDialog - /ClassDataTypes/CCommonDialog/CCommonDialog

typedef struct IOleCommandTarget IOleCommandTarget, *PIOleCommandTarget;

struct IOleCommandTarget { // PlaceHolder Structure
};

typedef struct AFX_EVENTSINKMAP AFX_EVENTSINKMAP, *PAFX_EVENTSINKMAP;

struct AFX_EVENTSINKMAP { // PlaceHolder Structure
};

typedef struct tagNMHEADERA tagNMHEADERA, *PtagNMHEADERA;

struct tagNMHEADERA { // PlaceHolder Structure
};

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { // PlaceHolder Structure
};

typedef struct AFX_CONNECTIONMAP AFX_CONNECTIONMAP, *PAFX_CONNECTIONMAP;

struct AFX_CONNECTIONMAP { // PlaceHolder Structure
};

typedef struct tagNMHDR tagNMHDR, *PtagNMHDR;

struct tagNMHDR { // PlaceHolder Structure
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

typedef struct CChannelData CChannelData, *PCChannelData;

struct CChannelData { // PlaceHolder Structure
};

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

struct tagVARIANT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFileException - /ClassDataTypes/CFileException/CFileException

typedef struct IConnectionPoint IConnectionPoint, *PIConnectionPoint;

struct IConnectionPoint { // PlaceHolder Structure
};

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

struct tagWNDCLASSA { // PlaceHolder Structure
};

typedef struct CHttpFile CHttpFile, *PCHttpFile;

struct CHttpFile { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CAutoInitialize - /ClassDataTypes/CAutoInitialize/CAutoInitialize

typedef struct _DOCHOSTUIINFO _DOCHOSTUIINFO, *P_DOCHOSTUIINFO;

struct _DOCHOSTUIINFO { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CParam - /ClassDataTypes/CParam/CParam


// WARNING! conflicting data type names: /Demangler/CView - /ClassDataTypes/CView/CView

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CBitmap - /ClassDataTypes/CBitmap/CBitmap

typedef struct HGDRAWSKINPOS HGDRAWSKINPOS, *PHGDRAWSKINPOS;

struct HGDRAWSKINPOS { // PlaceHolder Structure
};

typedef struct CIME CIME, *PCIME;

struct CIME { // PlaceHolder Structure
};

typedef struct CLogFontExMap CLogFontExMap, *PCLogFontExMap;

struct CLogFontExMap { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/type_info - /ClassDataTypes/type_info/type_info


// WARNING! conflicting data type names: /Demangler/CTabButtons - /ClassDataTypes/CTabButtons/CTabButtons


// WARNING! conflicting data type names: /Demangler/CPtrList - /ClassDataTypes/CPtrList/CPtrList


// WARNING! conflicting data type names: /Demangler/CImgChatOutWnd - /ClassDataTypes/CImgChatOutWnd/CImgChatOutWnd

typedef struct SGlobalInfo SGlobalInfo, *PSGlobalInfo;

struct SGlobalInfo { // PlaceHolder Structure
};

typedef struct CCfgSetting CCfgSetting, *PCCfgSetting;

struct CCfgSetting { // PlaceHolder Structure
};

typedef struct tagDELETEITEMSTRUCT tagDELETEITEMSTRUCT, *PtagDELETEITEMSTRUCT;

struct tagDELETEITEMSTRUCT { // PlaceHolder Structure
};

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CImgChatWnd - /ClassDataTypes/CImgChatWnd/CImgChatWnd

typedef struct CPrintInfo CPrintInfo, *PCPrintInfo;

struct CPrintInfo { // PlaceHolder Structure
};

typedef struct CFrameWnd CFrameWnd, *PCFrameWnd;

struct CFrameWnd { // PlaceHolder Structure
};

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};

typedef struct IOleInPlaceFrame IOleInPlaceFrame, *PIOleInPlaceFrame;

struct IOleInPlaceFrame { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWinApp - /ClassDataTypes/CWinApp/CWinApp


// WARNING! conflicting data type names: /Demangler/CListCtrl - /ClassDataTypes/CListCtrl/CListCtrl


// WARNING! conflicting data type names: /Demangler/CHtmlViewCtrl - /ClassDataTypes/CHtmlViewCtrl/CHtmlViewCtrl


// WARNING! conflicting data type names: /Demangler/CAnimatedStatic - /ClassDataTypes/CAnimatedStatic/CAnimatedStatic

typedef struct CTypedPtrList<class_CPtrList,class_CHgMemDCListData*> CTypedPtrList<class_CPtrList,class_CHgMemDCListData*>, *PCTypedPtrList<class_CPtrList,class_CHgMemDCListData*>;

struct CTypedPtrList<class_CPtrList,class_CHgMemDCListData*> { // PlaceHolder Structure
};

typedef struct AFX_EXTENSION_MODULE AFX_EXTENSION_MODULE, *PAFX_EXTENSION_MODULE;

struct AFX_EXTENSION_MODULE { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CPen - /ClassDataTypes/CPen/CPen

typedef struct tagSCROLLINFO tagSCROLLINFO, *PtagSCROLLINFO;

struct tagSCROLLINFO { // PlaceHolder Structure
};

typedef struct CListRowMetaData CListRowMetaData, *PCListRowMetaData;

struct CListRowMetaData { // PlaceHolder Structure
};

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};

typedef struct IRichEditOle IRichEditOle, *PIRichEditOle;

struct IRichEditOle { // PlaceHolder Structure
};

typedef struct CHARFORMAT2A CHARFORMAT2A, *PCHARFORMAT2A;

struct CHARFORMAT2A { // PlaceHolder Structure
};

typedef struct CRoomDataList CRoomDataList, *PCRoomDataList;

struct CRoomDataList { // PlaceHolder Structure
};

typedef struct tagLVCOLUMNA tagLVCOLUMNA, *PtagLVCOLUMNA;

struct tagLVCOLUMNA { // PlaceHolder Structure
};

typedef struct CWindowDC CWindowDC, *PCWindowDC;

struct CWindowDC { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CBrush - /ClassDataTypes/CBrush/CBrush

typedef struct CRect CRect, *PCRect;

struct CRect { // PlaceHolder Structure
};

typedef struct CAvtr2004 CAvtr2004, *PCAvtr2004;

struct CAvtr2004 { // PlaceHolder Structure
};

typedef struct tagDRAWITEMSTRUCT tagDRAWITEMSTRUCT, *PtagDRAWITEMSTRUCT;

struct tagDRAWITEMSTRUCT { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CNoticeWnd - /ClassDataTypes/CNoticeWnd/CNoticeWnd

typedef struct CToolTipCtrl CToolTipCtrl, *PCToolTipCtrl;

struct CToolTipCtrl { // PlaceHolder Structure
};

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CGaugeCtrl - /ClassDataTypes/CGaugeCtrl/CGaugeCtrl

typedef struct AFX_MAINTAIN_STATE2 AFX_MAINTAIN_STATE2, *PAFX_MAINTAIN_STATE2;

struct AFX_MAINTAIN_STATE2 { // PlaceHolder Structure
};

typedef struct CMemberDataList CMemberDataList, *PCMemberDataList;

struct CMemberDataList { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFont - /ClassDataTypes/CFont/CFont

typedef struct tagMSG tagMSG, *PtagMSG;

struct tagMSG { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCmdTarget - /ClassDataTypes/CCmdTarget/CCmdTarget

typedef struct EncodeLongLong EncodeLongLong, *PEncodeLongLong;

struct EncodeLongLong { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CRoomCtrl_T1 - /ClassDataTypes/CRoomCtrl_T1/CRoomCtrl_T1

typedef struct CHgGDImageFrame CHgGDImageFrame, *PCHgGDImageFrame;

struct CHgGDImageFrame { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CWnd - /ClassDataTypes/CWnd/CWnd

typedef struct CByteArray CByteArray, *PCByteArray;

struct CByteArray { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHgGradient - /ClassDataTypes/CHgGradient/CHgGradient


// WARNING! conflicting data type names: /Demangler/CProgressCtrl - /ClassDataTypes/CProgressCtrl/CProgressCtrl


// WARNING! conflicting data type names: /Demangler/CException - /ClassDataTypes/CException/CException


// WARNING! conflicting data type names: /Demangler/CHgMemDC - /ClassDataTypes/CHgMemDC/CHgMemDC

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CButton - /ClassDataTypes/CButton/CButton

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/IParam - /ClassDataTypes/IParam/IParam

typedef struct _AFX_OCC_DIALOG_INFO _AFX_OCC_DIALOG_INFO, *P_AFX_OCC_DIALOG_INFO;

struct _AFX_OCC_DIALOG_INFO { // PlaceHolder Structure
};

typedef struct tagTOOLINFOA tagTOOLINFOA, *PtagTOOLINFOA;

struct tagTOOLINFOA { // PlaceHolder Structure
};

typedef struct _AFX_THREAD_STATE _AFX_THREAD_STATE, *P_AFX_THREAD_STATE;

struct _AFX_THREAD_STATE { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CFormView - /ClassDataTypes/CFormView/CFormView

typedef struct IDispatch IDispatch, *PIDispatch;

struct IDispatch { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHgGDImageInPool - /ClassDataTypes/CHgGDImageInPool/CHgGDImageInPool


// WARNING! conflicting data type names: /Demangler/CRichEditCtrl - /ClassDataTypes/CRichEditCtrl/CRichEditCtrl

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { // PlaceHolder Structure
};

typedef struct CClientDC CClientDC, *PCClientDC;

struct CClientDC { // PlaceHolder Structure
};

typedef struct CFile CFile, *PCFile;

struct CFile { // PlaceHolder Structure
};

typedef struct CPreviewView CPreviewView, *PCPreviewView;

struct CPreviewView { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CCustomComboBox - /ClassDataTypes/CCustomComboBox/CCustomComboBox

typedef struct CDynLinkLibrary CDynLinkLibrary, *PCDynLinkLibrary;

struct CDynLinkLibrary { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/IFunctor - /ClassDataTypes/IFunctor/IFunctor

typedef struct CDocument CDocument, *PCDocument;

struct CDocument { // PlaceHolder Structure
};

typedef struct AFX_OLECMDMAP AFX_OLECMDMAP, *PAFX_OLECMDMAP;

struct AFX_OLECMDMAP { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CScrollView - /ClassDataTypes/CScrollView/CScrollView


// WARNING! conflicting data type names: /Demangler/AFX_MODULE_STATE - /ClassDataTypes/AFX_MODULE_STATE/AFX_MODULE_STATE

typedef struct CMsgCaller CMsgCaller, *PCMsgCaller;

struct CMsgCaller { // PlaceHolder Structure
};

typedef enum NInfoTypes {
} NInfoTypes;

typedef struct CStringArray CStringArray, *PCStringArray;

struct CStringArray { // PlaceHolder Structure
};

typedef struct CInternetSession CInternetSession, *PCInternetSession;

struct CInternetSession { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CRgn - /ClassDataTypes/CRgn/CRgn


// WARNING! conflicting data type names: /Demangler/CDialog - /ClassDataTypes/CDialog/CDialog

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { // PlaceHolder Structure
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CPalette - /ClassDataTypes/CPalette/CPalette

typedef struct CSize CSize, *PCSize;

struct CSize { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CEdit - /ClassDataTypes/CEdit/CEdit

typedef struct CFontId CFontId, *PCFontId;

struct CFontId { // PlaceHolder Structure
};

typedef struct IDropTarget IDropTarget, *PIDropTarget;

struct IDropTarget { // PlaceHolder Structure
};

typedef struct CMetpParserRet CMetpParserRet, *PCMetpParserRet;

struct CMetpParserRet { // PlaceHolder Structure
};

typedef struct CHgMemDCListData CHgMemDCListData, *PCHgMemDCListData;

struct CHgMemDCListData { // PlaceHolder Structure
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

typedef struct CHttpConnection CHttpConnection, *PCHttpConnection;

struct CHttpConnection { // PlaceHolder Structure
};

typedef struct AFX_MSGMAP AFX_MSGMAP, *PAFX_MSGMAP;

struct AFX_MSGMAP { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CNoticeData - /ClassDataTypes/CNoticeData/CNoticeData

typedef struct CBgPainter CBgPainter, *PCBgPainter;

struct CBgPainter { // PlaceHolder Structure
};

typedef struct COleVariant COleVariant, *PCOleVariant;

struct COleVariant { // PlaceHolder Structure
};

typedef struct SharedRoomRes SharedRoomRes, *PSharedRoomRes;

struct SharedRoomRes { // PlaceHolder Structure
};

typedef struct IOleInPlaceActiveObject IOleInPlaceActiveObject, *PIOleInPlaceActiveObject;

struct IOleInPlaceActiveObject { // PlaceHolder Structure
};

typedef struct CColorDialog CColorDialog, *PCColorDialog;

struct CColorDialog { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CComboBox - /ClassDataTypes/CComboBox/CComboBox


// WARNING! conflicting data type names: /Demangler/_CTypedPtrList<CPtrList,CHgMemDCListData*> - /ClassDataTypes/_CTypedPtrList<CPtrList,CHgMemDCListData*>/_CTypedPtrList<CPtrList,CHgMemDCListData*>

typedef struct COleDataObject COleDataObject, *PCOleDataObject;

struct COleDataObject { // PlaceHolder Structure
};

typedef struct CFontChanger CFontChanger, *PCFontChanger;

struct CFontChanger { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHtmlView - /ClassDataTypes/CHtmlView/CHtmlView

typedef struct CHgGDImagePool CHgGDImagePool, *PCHgGDImagePool;

struct CHgGDImagePool { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CHeaderCtrl - /ClassDataTypes/CHeaderCtrl/CHeaderCtrl


// WARNING! conflicting data type names: /Demangler/CObject - /ClassDataTypes/CObject/CObject

typedef struct CPNDcurve CPNDcurve, *PCPNDcurve;

struct CPNDcurve { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/CRectDrawer - /ClassDataTypes/CRectDrawer/CRectDrawer

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ { // PlaceHolder Structure
};

typedef struct AFX_EXCEPTION_LINK AFX_EXCEPTION_LINK, *PAFX_EXCEPTION_LINK;

struct AFX_EXCEPTION_LINK { // PlaceHolder Structure
};

typedef struct JpegFile JpegFile, *PJpegFile;

struct JpegFile { // PlaceHolder Structure
};

typedef enum NThread_Location {
} NThread_Location;

typedef struct CRoomData CRoomData, *PCRoomData;

struct CRoomData { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/exception - /ClassDataTypes/std/exception/exception

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct vector<int,std::allocator<int>_> vector<int,std::allocator<int>_>, *Pvector<int,std::allocator<int>_>;

struct vector<int,std::allocator<int>_> { // PlaceHolder Structure
};

typedef struct vector<CChannelData*,std::allocator<CChannelData*>_> vector<CChannelData*,std::allocator<CChannelData*>_>, *Pvector<CChannelData*,std::allocator<CChannelData*>_>;

struct vector<CChannelData*,std::allocator<CChannelData*>_> { // PlaceHolder Structure
};

typedef struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>, *Pbasic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>;

struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> { // PlaceHolder Structure
};

typedef struct basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>, *Pbasic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>;

struct basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> { // PlaceHolder Structure
};

typedef struct LOGFONTEX LOGFONTEX, *PLOGFONTEX;

struct LOGFONTEX { // PlaceHolder Structure
};

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

typedef enum NClientRect {
} NClientRect;

typedef enum NBorderRect {
} NBorderRect;

typedef enum STATE {
} STATE;

typedef enum eGradientMethod {
} eGradientMethod;

typedef enum SortType {
} SortType;

typedef int (*_onexit_t)(void);

typedef struct IUnknown *LPUNKNOWN;




undefined ** __thiscall CHgToolApp::vfunction13(CHgToolApp *this);
CWinApp * __thiscall CHgToolApp::scalar_deleting_destructor(CHgToolApp *this,byte param_1);
undefined4 __thiscall CHgToolApp::vfunction23(CHgToolApp *this);
undefined4 __thiscall CHgToolApp::vfunction29(CHgToolApp *this);
void __thiscall CHgGDImageFrame::CHgGDImageFrame::~CHgGDImageFrame(CHgGDImageFrame *this);
undefined4 FUN_60701080(void);
void FUN_60701090(void *param_1);
void __fastcall FUN_607010a0(uint param_1);
uchar * __thiscall CHgGDImage::GetBits(CHgGDImage *this,int param_1);
int __thiscall CHgImageBase::GetBitsPerPixel(CHgImageBase *this);
void __thiscall CHgGDImage::SetDataBits(CHgGDImage *this,int param_1);
tagBITMAPINFO * __thiscall CHgGDImage::BIMAPINFO(CHgGDImage *this,tagBITMAPINFO *__return_storage_ptr__);
void __thiscall CHgGDImage::CHgGDImage(CHgGDImage *this,CHgGDImage *param_1);
CHgGDImage * __thiscall CHgGDImageInPool::scalar_deleting_destructor(CHgGDImageInPool *this,byte param_1);
HBITMAP__ * __thiscall CHgMemDC::GetBitmap(CHgMemDC *this);
void __thiscall CHgMemDC::CHgMemDC(CHgMemDC *this,CHgMemDC *param_1);
CHgMemDC * __thiscall CHgMemDC::scalar_deleting_destructor(CHgMemDC *this,byte param_1);
CHgMemDCListData * __thiscall CHgMemDCListData::operator=(CHgMemDCListData *this,CHgMemDCListData *param_1);
__POSITION * __thiscall CHgMemDCList::ReplaceMemDC(CHgMemDCList *this,char *param_1,CHgMemDCListData *param_2);
void __thiscall CHgMemDCList::DeleteMemDC(CHgMemDCList *this,char *param_1);
CHgMemDC * __thiscall CHgMemDCList::GetMemDC(CHgMemDCList *this,char *param_1);
void __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::~CTypedPtrList<CPtrList,CHgMemDCListData*>(CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
void __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::~_CTypedPtrList<CPtrList,CHgMemDCListData*>(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
void __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::~CTypedPtrList<CPtrList,CHgMemDCListData*>(CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
CHgMemDCList * __thiscall CHgMemDCList::CHgMemDCList(CHgMemDCList *this);
void FUN_60701510(void);
void __thiscall CHgGradient::SetStartColor(CHgGradient *this,ulong param_1);
void __thiscall CHgGradient::SetEndColor(CHgGradient *this,ulong param_1);
void __thiscall CHgGradient::SetInterpolationMethod(CHgGradient *this,eGradientMethod param_1);
void __thiscall CHgGradient::SetQuantization(CHgGradient *this,int param_1);
void __thiscall CHgGradient::CHgGradient(CHgGradient *this,CHgGradient *param_1);
undefined4 * __thiscall CHgGradient::scalar_deleting_destructor(CHgGradient *this,byte param_1);
CHgGDImageFrame * __thiscall CHgGDImageFrame::operator=(CHgGDImageFrame *this,CHgGDImageFrame *param_1);
void __thiscall CHgGDImageFrame::CHgGDImageFrame(CHgGDImageFrame *this);
void __thiscall CHgGDImageFrame::CHgGDImageFrame(CHgGDImageFrame *this,CHgGDImage *param_1);
uchar * __thiscall CHgGDImageFrame::GetBits(CHgGDImageFrame *this,int param_1);
uchar ** __thiscall CHgGDImageFrame::GetVHeads(CHgGDImageFrame *this);
uchar * __thiscall CHgGDImageFrame::GetBits(CHgGDImageFrame *this);
void __thiscall CHgGDImageFrame::SetDataBits(CHgGDImageFrame *this,int param_1);
int __thiscall CHgGDImageFrame::GetWidth(CHgGDImageFrame *this);
int __thiscall CHgGDImageFrame::GetHeight(CHgGDImageFrame *this);
int __thiscall CHgGDImage::GetHeight(CHgGDImage *this);
ulong __thiscall CHgGDImageFrame::TransColor(CHgGDImageFrame *this,int param_1);
tagBITMAPINFO * __thiscall CHgGDImageFrame::BIMAPINFO(CHgGDImageFrame *this,tagBITMAPINFO *__return_storage_ptr__);
ulong __thiscall CHgGDImageFrame::GetPixel(CHgGDImageFrame *this,int param_1,int param_2);
void __thiscall CHgGDImageFrame::GetImageSize(CHgGDImageFrame *this);
void __thiscall CHgGDImageFrame::GetImageRect(CHgGDImageFrame *this,int param_1);
void __thiscall CHgGDImageFrame::GetBitmapSize(CHgGDImageFrame *this);
CHgGDImageFrame * __thiscall CHgGDImageFrame::clone(CHgGDImageFrame *this);
void __thiscall CHgGDImageFrame::setImage(CHgGDImageFrame *this,CHgGDImage *param_1);
void __thiscall CHgGDImageFrame::setFrameNumber(CHgGDImageFrame *this,int param_1);
void __thiscall CHgGDImageFrame::setImageRect(CHgGDImageFrame *this,int param_1,int param_2,int param_3,int param_4);
int __thiscall CHgGDImageFrame::DrawImage(CHgGDImageFrame *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,void *param_8,tagBITMAPINFO *param_9);
int __thiscall CHgGDImageFrame::DrawImageStretch(CHgGDImageFrame *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,void *param_10,tagBITMAPINFO *param_11);
int __thiscall CHgGDImageFrame::Draw(CHgGDImageFrame *this,CDC *param_1,int param_2,int param_3);
int __thiscall CHgGDImageFrame::Draw(CHgGDImageFrame *this,CDC *param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall CHgGDImageFrame::Draw(CHgGDImageFrame *this,HDC__ *param_1,int param_2,int param_3);
int __thiscall CHgGDImageFrame::Draw(CHgGDImageFrame *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5);
CHgGDImage * __thiscall CHgGDImageFrame::operator=(CHgGDImageFrame *this,CHgGDImage *param_1);
CTypedPtrList<CPtrList,CHgMemDCListData*> * __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::CTypedPtrList<CPtrList,CHgMemDCListData*>(CTypedPtrList<CPtrList,CHgMemDCListData*> *this,int param_1);
__POSITION * __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::AddHead(CTypedPtrList<CPtrList,CHgMemDCListData*> *this,CHgMemDCListData *param_1);
__POSITION * __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::AddTail(CTypedPtrList<CPtrList,CHgMemDCListData*> *this,CHgMemDCListData *param_1);
__POSITION * __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::TransferAddHead(CTypedPtrList<CPtrList,CHgMemDCListData*> *this,CHgMemDCListData *param_1);
void Catch_All@60701b5d(void);
__POSITION * __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::TransferAddTail(CTypedPtrList<CPtrList,CHgMemDCListData*> *this,CHgMemDCListData *param_1);
void Catch_All@60701bcd(void);
void __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::AddHead(CTypedPtrList<CPtrList,CHgMemDCListData*> *this,CTypedPtrList<class_CPtrList,class_CHgMemDCListData*> *param_1);
void __thiscall CTypedPtrList<CPtrList,CHgMemDCListData*>::AddTail(CTypedPtrList<CPtrList,CHgMemDCListData*> *this,CTypedPtrList<class_CPtrList,class_CHgMemDCListData*> *param_1);
_CTypedPtrList<CPtrList,CHgMemDCListData*> * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::_CTypedPtrList<CPtrList,CHgMemDCListData*>(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,int param_1);
CHgMemDCListData ** __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetHead(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
CHgMemDCListData * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetHead(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
CHgMemDCListData ** __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetTail(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
CHgMemDCListData * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetTail(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
CHgMemDCListData * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::RemoveHead(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
CHgMemDCListData * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::RemoveTail(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this);
CHgMemDCListData ** __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetNext(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION **param_1);
CHgMemDCListData * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetNext(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION **param_1);
CHgMemDCListData ** __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetPrev(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION **param_1);
CHgMemDCListData * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetPrev(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION **param_1);
CHgMemDCListData ** __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetAt(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION *param_1);
CHgMemDCListData * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::GetAt(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION *param_1);
void __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::SetAt(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION *param_1,CHgMemDCListData *param_2);
__POSITION * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::InsertBefore(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION *param_1,CHgMemDCListData *param_2);
__POSITION * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::InsertAfter(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION *param_1,CHgMemDCListData *param_2);
__POSITION * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::TransferInsertBefore(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION *param_1,CHgMemDCListData *param_2);
void Catch_All@60701de1(void);
__POSITION * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::TransferInsertAfter(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,__POSITION *param_1,CHgMemDCListData *param_2);
void Catch_All@60701e51(void);
CPtrList * __thiscall _CTypedPtrList<CPtrList,CHgMemDCListData*>::vfunction2(_CTypedPtrList<CPtrList,CHgMemDCListData*> *this,byte param_1);
undefined4 * __thiscall Gdiplus::Image::vfunction2(Image *this);
undefined4 FUN_60701f20(void);
undefined4 FUN_60701f50(void);
undefined4 * __thiscall Gdiplus::Image::vfunction1(Image *this,byte param_1);
int __cdecl HGDraw(HDC__ *param_1,int param_2,int param_3,HDC__ *param_4,int param_5,int param_6,int param_7,int param_8);
int __cdecl HGDrawTransparent(HDC__ *param_1,int param_2,int param_3,HDC__ *param_4,int param_5,int param_6,int param_7,int param_8,ulong param_9);
bool FUN_607020e0(HDC param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,HDC param_6,int param_7,int param_8,int param_9,int param_10,COLORREF param_11);
int __cdecl HGDrawTransparentOnColor(HDC__ *param_1,int param_2,int param_3,HDC__ *param_4,int param_5,int param_6,int param_7,int param_8,ulong param_9,ulong param_10);
int __cdecl HGDrawOnColor(HDC__ *param_1,int param_2,int param_3,HDC__ *param_4,int param_5,int param_6,int param_7,int param_8,ulong param_9);
int __cdecl HGDrawTransparentAlpha(HDC__ *param_1,int param_2,int param_3,HDC__ *param_4,int param_5,int param_6,int param_7,int param_8,ulong param_9,int param_10);
int __cdecl HGDrawAlpha(HDC__ *param_1,int param_2,int param_3,HDC__ *param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
CHgGDImage * __thiscall CHgGDImage::CHgGDImage(CHgGDImage *this);
CHgGDImage * __thiscall CHgGDImage::CHgGDImage(CHgGDImage *this,int param_1);
void __thiscall CHgGDImage::Free(CHgGDImage *this);
int __thiscall CHgGDImage::Allocate(CHgGDImage *this,int param_1,int param_2);
int __thiscall CHgGDImage::CreateFromBitmap(CHgGDImage *this,uchar *param_1,ulong param_2);
int __thiscall CHgGDImage::CreateFromBitmapWithoutColorTable(CHgGDImage *this,uchar *param_1,ulong param_2);
int __thiscall CHgGDImage::CreateFromBitmapWithColorTable(CHgGDImage *this,uchar *param_1,ulong param_2);
int __thiscall CBitmap::~CBitmap(CBitmap *this,uint param_1,int param_2,ulong param_3,int param_4,int param_5);
int __thiscall CHgGDImage::Create(CHgGDImage *this,CBitmap *param_1,int param_2,ulong param_3,int param_4,int param_5);
int __thiscall CHgGDImage::Create(CHgGDImage *this,HBITMAP__ *param_1,int param_2,ulong param_3,int param_4,int param_5);
int __thiscall CHgGDImage::Create(CHgGDImage *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5);
int __thiscall CHgGDImage::Draw(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgGDImage::Draw(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
int __thiscall CHgGDImage::DrawSelected(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
int __thiscall CHgGDImage::DrawSelected(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgGDImage::DrawOnColor(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,ulong param_5);
int __thiscall CHgGDImage::DrawOnColor(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,ulong param_9);
int __thiscall CHgGDImage::DrawTransparentOnColor(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,ulong param_5);
int __thiscall CHgGDImage::DrawTransparentOnColor(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,ulong param_9);
int __thiscall CHgGDImage::DrawTransparent(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgGDImage::DrawTransparent(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
int __thiscall CHgGDImage::DrawAlpha(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall CHgGDImage::DrawAlpha(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
int __thiscall CHgGDImage::DrawTransparentAlpha(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall CHgGDImage::DrawTransparentAlpha(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
int __thiscall CHgGDImage::Draw(CHgGDImage *this,CDC *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgGDImage::Draw(CHgGDImage *this,CDC *param_1,int param_2,int param_3,CPoint *param_4,int param_5,int param_6);
int __thiscall CHgGDImage::DrawSelected(CHgGDImage *this,CDC *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgGDImage::DrawOnColor(CHgGDImage *this,CDC *param_1,int param_2,int param_3,int param_4,ulong param_5);
int __thiscall CHgGDImage::DrawTransparent(CHgGDImage *this,CDC *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgGDImage::DrawSemiTransparent(CHgGDImage *this,CDC *param_1,int param_2,int param_3,int param_4);
int __thiscall CHgGDImage::DrawTransparentOnColor(CHgGDImage *this,CDC *param_1,int param_2,int param_3,int param_4,ulong param_5);
int __thiscall CHgGDImage::DrawTransparentAlpha(CHgGDImage *this,CDC *param_1,int param_2,int param_3,int param_4,int param_5);
void __thiscall CHgGDImage::DrawPattern(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __thiscall CHgGDImage::DrawPattern(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10);
int __thiscall CHgGDImage::DrawStretch(CHgGDImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
ulong __thiscall CHgGDImage::GetPixel(CHgGDImage *this,int param_1,int param_2);
ulong __thiscall CHgGDImage::TransColor(CHgGDImage *this,int param_1);
CHgGDImage * __thiscall CHgGDImage::operator=(CHgGDImage *this,CHgGDImage *param_1);
int * __thiscall CHgGDImage::GetImageSize(CHgGDImage *this);
void __thiscall CHgGDImage::GetImageRect(CHgGDImage *this,int param_1);
void __thiscall CHgGDImage::GetBitmapSize(CHgGDImage *this);
ulong __thiscall CHgMemDC::GetBkColor(CHgMemDC *this);
void __thiscall CHgGDImage::SetTileNum(CHgGDImage *this,int param_1);
int __thiscall CHgGDImage::GetWidth(CHgGDImage *this);
void __thiscall CHgMemDC::CHgMemDC(CHgMemDC *this);
void __thiscall CHgMemDC::~CHgMemDC(CHgMemDC *this);
void __thiscall CHgMemDC::Free(CHgMemDC *this);
int __thiscall CHgMemDC::Create(CHgMemDC *this,HDC__ *param_1,CHgGDImage *param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
int __thiscall CHgMemDC::Create(CHgMemDC *this,HDC__ *param_1,int param_2,int param_3,ulong param_4);
int __thiscall CHgMemDC::Recreate(CHgMemDC *this,HDC__ *param_1,int param_2,int param_3,ulong param_4);
CHgMemDC * __thiscall CHgMemDC::operator=(CHgMemDC *this,CHgMemDC *param_1);
void __thiscall CHgGradient::CHgGradient(CHgGradient *this);
void __thiscall CHgGradient::~CHgGradient(CHgGradient *this);
CHgGradient * __thiscall CHgGradient::operator=(CHgGradient *this,CHgGradient *param_1);
void __thiscall CHgGradient::Make8BitPalette(CHgGradient *this,tagRGBTRIPLE *param_1);
void __thiscall CHgGradient::MakePalette(CHgGradient *this,CPalette *param_1);
void __thiscall CHgGradient::MakeEntries(CHgGradient *this,tagRGBTRIPLE *param_1,int param_2);
ulong __cdecl CHgGradient::InterpolateLinear(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateReverse(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateFlatStart(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateFlatMid(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateFlatEnd(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateCosine(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
void __fastcall FUN_607052d0(float *param_1,float *param_2,float param_3,float param_4,float param_5,float *param_6);
void __fastcall FUN_607054d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateHSLClockwise(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateHSLAntiClockwise(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateHSLLongest(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
ulong __cdecl CHgGradient::InterpolateHSLShortest(ulong param_1,ulong param_2,float param_3,float param_4,float param_5);
_func_ulong_ulong_ulong_float_float_float * __thiscall CHgGradient::GetInterpolationProc(CHgGradient *this);
void __cdecl CHgGraphic::DrawSkin(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,int param_14,int param_15);
void __cdecl CHgGraphic::DrawTransparentSkin(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,int param_14,int param_15);
void __cdecl CHgGraphic::DrawTransparentSkin(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,int param_7,int param_8,ulong param_9,int param_10,int param_11,int param_12,int param_13,int param_14,int param_15);
void __cdecl CHgGraphic::DrawSkin(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,int param_14);
void __cdecl CHgGraphic::RoundFillRect(HDC__ *param_1,tagRECT *param_2,tagPOINT param_3,ulong param_4);
void __cdecl CHgGraphic::FrameFillRect(HDC__ *param_1,tagRECT *param_2,ulong param_3,ulong param_4,int param_5);
void __thiscall CPen::~CPen(CPen *this,CRect *param_1,ulong param_2,ulong param_3,ulong param_4);
void __cdecl CHgGraphic::DrawGradient(HDC__ *param_1,tagRECT *param_2,ulong param_3,ulong param_4,uint param_5,int param_6,eGradientMethod param_7);
CHgMemDCListData * __thiscall CHgMemDCListData::CHgMemDCListData(CHgMemDCListData *this,char *param_1,HDC__ *param_2,int param_3,int param_4,tagRECT *param_5,ulong param_6,uint param_7,ulong param_8);
void __thiscall CHgMemDCListData::~CHgMemDCListData(CHgMemDCListData *this);
void __thiscall CHgMemDCListData::Draw(CHgMemDCListData *this,HDC__ *param_1);
void __thiscall CPen::~CPen(CPen *this);
undefined4 * __thiscall CPen::scalar_deleting_destructor(CPen *this,byte param_1);
void __thiscall CBitmap::~CBitmap(CBitmap *this);
void * __thiscall CGdiObject::CImageList::`scalar_deleting_destructor'(CGdiObject *this,uint param_1);
void __thiscall CGdiObject::~CGdiObject(CGdiObject *this);
undefined4 Catch@60707403(void);
undefined4 * __thiscall CBitmap::scalar_deleting_destructor(CBitmap *this,byte param_1);
void __thiscall CPNDcurve::CPNDcurve(CPNDcurve *this);
void __thiscall CPNDcurve::SetElement(CPNDcurve *this,double param_1,double param_2,double param_3);
void __thiscall CPNDcurve::Stop(CPNDcurve *this);
void __thiscall CPNDcurve::SetTo(CPNDcurve *this,double param_1,double param_2,char param_3);
void __thiscall CPNDcurve::SetToMax(CPNDcurve *this,double param_1,double param_2,char param_3);
void __thiscall CPNDcurve::SetToForce(CPNDcurve *this,double param_1,double param_2,char param_3);
void __thiscall CPNDcurve::Action(CPNDcurve *this,double param_1,char param_2);
int __thiscall CPNDcurve::SafeAction(CPNDcurve *this,double param_1,char param_2);
JpegFile * __thiscall JpegFile::JpegFile(JpegFile *this);
uchar * __cdecl JpegFile::JpegFileToRGB(char *param_1,int *param_2,uint *param_3);
int __cdecl JpegFile::GetJPGDimensions(char *param_1,undefined4 *param_2,undefined4 *param_3);
uchar * __cdecl JpegFile::RGBFromDWORDAligned(uchar *param_1,uint param_2,uint param_3,uint param_4);
int __cdecl JpegFile::RGBToJpegFile(char *param_1,int param_2,uint param_3,void *param_4,int param_5,int param_6);
void __fastcall FUN_60708010(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);
uchar * __cdecl JpegFile::MakeDwordAlignedBuf(uchar *param_1,uint param_2,uint param_3,uint *param_4);
int __cdecl JpegFile::VertFlipBuf(uchar *param_1,uint param_2,uint param_3);
int __cdecl JpegFile::BGRFromRGB(uchar *param_1,uint param_2,uint param_3);
int __cdecl JpegFile::MakeGrayScale(uchar *param_1,uint param_2,uint param_3);
CIME * __thiscall CIME::operator=(CIME *this,CIME *param_1);
CIME * __thiscall CIME::CIME(CIME *this);
void __thiscall CIME::OnImeComposition(CIME *this,HWND__ *param_1,long param_2);
void __thiscall CIME::OnChar(CIME *this,uint param_1);
char * __thiscall CIME::GetIMEText(CIME *this);
void __thiscall CIME::ClearBuffer(CIME *this);
void __thiscall CIME::ShowCaret(CIME *this,bool param_1);
void __thiscall CIME::SetBuf(CIME *this,char *param_1);
void __cdecl PutOutlineText(HDC__ *param_1,long param_2,long param_3,char *param_4,ulong param_5,ulong param_6);
void __cdecl DrawOutlineText(HDC__ *param_1,tagRECT *param_2,char *param_3,ulong param_4,ulong param_5,int param_6,bool param_7);
void __cdecl DrawShadowText(HDC__ *param_1,tagRECT *param_2,char *param_3,ulong param_4,ulong param_5,int param_6);
void __cdecl PutOutlineText(CDC *param_1,long param_2,long param_3,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_4,ulong param_5,ulong param_6);
void __cdecl DrawOutlineText(CDC *param_1,CRect *param_2,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_3,ulong param_4,ulong param_5,int param_6,bool param_7);
void __cdecl DrawShadowText(CDC *param_1,CRect *param_2,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_3,ulong param_4,ulong param_5,int param_6);
void __thiscall CHgGDImage::~CHgGDImage(CHgGDImage *this);
CHgGDImageInPool * __thiscall CHgGDImageInPool::CHgGDImageInPool(CHgGDImageInPool *this);
void __thiscall CHgGDImageInPool::CHgGDImageInPool(CHgGDImageInPool *this,CHgGDImageInPool *param_1);
CHgGDImageInPool * __thiscall CHgGDImageInPool::operator=(CHgGDImageInPool *this,CHgGDImageInPool *param_1);
CHgGDImagePool * __thiscall CHgGDImagePool::CHgGDImagePool(CHgGDImagePool *this,CHgGDImagePool *param_1);
CHgGDImagePool * __thiscall CHgGDImagePool::operator=(CHgGDImagePool *this,CHgGDImagePool *param_1);
void FUN_60708c60(void);
CHgGDImagePool * __thiscall CHgGDImagePool::CHgGDImagePool(CHgGDImagePool *this);
void __thiscall CHgGDImagePool::~CHgGDImagePool(CHgGDImagePool *this);
CHgGDImageInPool * __thiscall CHgGDImagePool::Create(CHgGDImagePool *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5);
CHgGDImageInPool * __thiscall CHgGDImagePool::Create(CHgGDImagePool *this,uint param_1,int param_2,ulong param_3,int param_4,int param_5);
CHgGDImage * __thiscall CHgGDImagePool::createImage(CHgGDImagePool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
CHgGDImage * __thiscall CHgGDImagePool::searchImage(CHgGDImagePool *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
CHgGDImagePool * __cdecl ImagePool(void);
undefined4 * FUN_60709050(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
int * FUN_60709140(int *param_1);
void Catch_All@607091d1(void);
void FUN_607091f0(undefined4 *param_1);
int * FUN_60709240(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
void FUN_607092d0(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_607093b0(void);
int * FUN_607093f0(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
undefined4 * FUN_60709510(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void __thiscall FUN_607097e0(void *this,undefined4 *param_1,char param_2,void *param_3);
void FUN_607099c0(void);
void FUN_607099e0(int *param_1);
void __thiscall FUN_60709a20(void *this,int param_1);
undefined4 __cdecl FUN_60709a70(undefined4 param_1,int *param_2,int param_3,int *param_4,int param_5);
void FUN_60709b00(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void FUN_60709b80(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1);
void FUN_60709bf0(exception *param_1);
void FUN_60709c10(exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1);
logic_error * __thiscall std::logic_error::logic_error(logic_error *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
void __thiscall std::logic_error::~logic_error(logic_error *this);
exception * __thiscall std::length_error::scalar_deleting_destructor(length_error *this,byte param_1);
int __thiscall std::logic_error::vfunction2(logic_error *this);
void FUN_60709d60(void);
exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1);
void FUN_60709da0(exception *param_1);
void __thiscall CRgn::CRgn(CRgn *this,CBgPainter *param_1);
CRgn * __thiscall CRgn::CRgn(CRgn *this);
void __thiscall CRgn::~CRgn(CRgn *this);
void __thiscall CBgPainter::Initialize(CBgPainter *this,CWnd *param_1,IParam *param_2,bool param_3);
void __thiscall CBgPainter::setBackImage(CBgPainter *this,CWnd *param_1,IParam *param_2,char *param_3);
void __thiscall CBgPainter::SetCaptionImage(CBgPainter *this,CWnd *param_1,IParam *param_2,char *param_3);
void __thiscall CPen::~CPen(CPen *this,CWnd *param_1,CDC *param_2);
void __thiscall CBgPainter::RecalculateBorderRect(CBgPainter *this,CWnd *param_1);
void __thiscall CBgPainter::Clear(CBgPainter *this);
void __thiscall CBgPainter::Init(CBgPainter *this);
void __thiscall CBgPainter::GetClientRect(CBgPainter *this,tagRECT *param_1,NClientRect param_2,NClientRect param_3);
CRect * __thiscall CBgPainter::GetBorderRect(CBgPainter *this,NBorderRect param_1);
int __thiscall CRgn::~CRgn(CRgn *this,CWnd *param_1,int param_2);
void __thiscall CRgn::~CRgn(CRgn *this,CHgGDImage *param_1,CRect *param_2,CPoint *param_3,CRgn *param_4);
void __thiscall CRgn::~CRgn(CRgn *this,CHgGDImageFrame *param_1,CRect *param_2,CPoint *param_3,CRgn *param_4);
bool __thiscall CBgPainter::Copy(CBgPainter *this,CWnd *param_1,CBgPainter *param_2);
int __thiscall CBgPainter::createImage(CBgPainter *this,CHgGDImageFrame **param_1,char *param_2,int param_3,IParam *param_4,int param_5);
int __thiscall CBgPainter::referenceImage(CBgPainter *this,CHgGDImageFrame **param_1,CHgGDImageFrame *param_2);
undefined4 FUN_6070b720(void);
undefined4 * __thiscall CBrush::scalar_deleting_destructor(CBrush *this,byte param_1);
void __thiscall CBrush::~CBrush(CBrush *this);
void __thiscall CRgn::~CRgn(CRgn *this);
undefined4 * __thiscall CRgn::scalar_deleting_destructor(CRgn *this,byte param_1);
void __thiscall CControlBase::~CControlBase(CControlBase *this,CControlBase *param_1);
undefined4 * __thiscall CControlBase::scalar_deleting_destructor(CControlBase *this,byte param_1);
CFontId * __thiscall CFontId::operator=(CFontId *this,CFontId *param_1);
int __thiscall CBmpButton::GetPushed(CBmpButton *this);
void __thiscall CBmpButton::SetButtonUpMessage(CBmpButton *this,uint param_1);
CBmpButton * __thiscall CBmpButton::scalar_deleting_destructor(CBmpButton *this,byte param_1);
CLogFontExMap * __thiscall CLogFontExMap::CLogFontExMap(CLogFontExMap *this,CLogFontExMap *param_1);
CLogFontExMap * __thiscall CLogFontExMap::operator=(CLogFontExMap *this,CLogFontExMap *param_1);
CFontList * __thiscall CFontList::CFontList(CFontList *this);
CFontList * __thiscall CFontList::CFontList(CFontList *this,CFontList *param_1);
CFontList * __thiscall CFontList::operator=(CFontList *this,CFontList *param_1);
CFontList * __thiscall CFontList::scalar_deleting_destructor(CFontList *this,byte param_1);
CFontChanger * __thiscall CFontChanger::operator=(CFontChanger *this,CFontChanger *param_1);
void __thiscall CFontEx::CFontEx(CFontEx *this,CFontEx *param_1);
CFontEx * __thiscall CFontEx::operator=(CFontEx *this,CFontEx *param_1);
undefined4 * __thiscall CFontEx::scalar_deleting_destructor(CFontEx *this,byte param_1);
undefined4 __fastcall FUN_6070bb70(int param_1,int param_2);
CRuntimeClass * __thiscall CBmpButton::CBmpButton::GetRuntimeClass(CBmpButton *this);
AFX_MSGMAP * __thiscall CBmpButton::CBmpButton::GetMessageMap(CBmpButton *this);
CMFunctor<CTabButtons> * __thiscall CMFunctor<CTabButtons>::CMFunctor<CTabButtons>(CMFunctor<CTabButtons> *this);
void __thiscall CControlBase::CControlBase(CControlBase *this);
bool __thiscall CBmpButton::CBmpButton::CreateControl(CBmpButton *this,IParam *param_1);
void __thiscall CBmpButton::CBmpButton::UpdateControl(CBmpButton *this,IParam *param_1);
void __thiscall CBmpButton::CBmpButton::UpdateControlForGame(CBmpButton *this,IParam *param_1);
void __thiscall CBmpButton::ClearButtonRgn(CBmpButton *this);
void __thiscall CBmpButton::OnBtnOver(CBmpButton *this,int param_1);
bool __thiscall CBmpButton::CBmpButton::DestroyControl(CBmpButton *this);
int __thiscall CBmpButton::SetButtonRgn(CBmpButton *this,int param_1);
int __thiscall CBmpButton::CreateWndRgn(CBmpButton *this,int param_1);
void __thiscall CBmpButton::CBmpButton::DrawItem(CBmpButton *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CBmpButton::SetTextFormat(CBmpButton *this,uint param_1);
void __thiscall CBmpButton::SetTextColor(CBmpButton *this,ulong param_1,ulong param_2,ulong param_3);
void __thiscall CBmpButton::SetTextBkMode(CBmpButton *this,int param_1);
void __thiscall CBmpButton::SetTextRect(CBmpButton *this,uint param_2,uint param_3,int param_4,int param_5);
void __thiscall CBmpButton::DrawBmpButtonText(CBmpButton *this,CDC *param_1);
int __thiscall CBmpButton::Create(CBmpButton *this,ulong param_1,CRect *param_2,CWnd *param_3,uint param_4,int param_5,int param_6,int param_7,int param_8);
int __thiscall CBmpButton::Create(CBmpButton *this,ulong param_1,char *param_2,ulong param_3,int param_4,int param_5,int param_6,CWnd *param_7,uint param_8,int param_9,int param_10,int param_11,int param_12);
int __thiscall CBmpButton::Create(CBmpButton *this,ulong param_1,uint param_2,ulong param_3,int param_4,int param_5,int param_6,CWnd *param_7,uint param_8,int param_9,int param_10,int param_11,int param_12);
int __thiscall CBmpButton::Create(CBmpButton *this,ulong param_1,CHgGDImage *param_2,ulong param_3,int param_4,int param_5,int param_6,CWnd *param_7,uint param_8,int param_9,int param_10,int param_11,int param_12);
int __thiscall CBmpButton::LoadBitmapA(CBmpButton *this,char *param_1,ulong param_2,int param_3);
int __thiscall CBmpButton::LoadBitmapA(CBmpButton *this,uint param_1,ulong param_2,int param_3);
int __thiscall CBmpButton::LoadBitmapA(CBmpButton *this,CHgGDImage *param_1,ulong param_2,int param_3);
int __thiscall CBmpButton::ChangeButtonImage(CBmpButton *this,char *param_1,ulong param_2,int param_3);
void __thiscall CBmpButton::SetPushed(CBmpButton *this,int param_1);
void __thiscall CBmpButton::OnLButtonUp(CBmpButton *this,undefined4 param_1,LONG param_3,LONG param_4);
void __thiscall CBmpButton::OnMouseMove(CBmpButton *this,byte param_1,LONG param_3,LONG param_4);
void __thiscall CBmpButton::OnTimer(CBmpButton *this,uint param_1);
long __thiscall CBmpButton::CBmpButton::WindowProc(CBmpButton *this,uint param_1,uint param_2,long param_3);
int __thiscall CBmpButton::CreateToolTip(CBmpButton *this,char *param_1,int param_2);
void __thiscall CBmpButton::DisableTooltip(CBmpButton *this);
int __thiscall CBmpButton::OnBtnClicked(CBmpButton *this);
int * __thiscall CBmpButton::GetButtonSize(CBmpButton *this);
CHgGDImage * __thiscall CBmpButton::GetButtonImage(CBmpButton *this);
void __thiscall CBmpButton::DoFlash(CBmpButton *this,int param_1,ulong param_2);
void FUN_6070da41(void);
int * FUN_6070da50(int *param_1);
void Catch_All@6070dae1(void);
int * FUN_6070db00(int *param_1);
void FUN_6070db80(void);
void FUN_6070dba0(void);
void FUN_6070dbe0(void);
void __thiscall FUN_6070dc00(void *this,int param_1);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void __thiscall CBmpButton::vfunction1(CBmpButton *this,byte param_1);
void FUN_6070dcc0(void);
void __thiscall CColourPopup::vfunction67(CColourPopup *this);
void __thiscall CColourPopup::vfunction68(CColourPopup *this);
int __thiscall CListCtrlEx::GetSortedCol(CListCtrlEx *this);
int __thiscall CListCtrlEx::IsSortedByAscending(CListCtrlEx *this);
void __thiscall CListColDraw::~CListColDraw(CListColDraw *this);
void __thiscall CListColDraw::~CListColDraw(CListColDraw *this,CListColDraw *param_1);
CChannelListCtrl * __thiscall CChannelListCtrl::scalar_deleting_destructor(CChannelListCtrl *this,byte param_1);
CListRowDraw * __thiscall CListRowDraw::CListRowDraw(CListRowDraw *this,CListRowDraw *param_1);
CListRowDraw * __thiscall CListRowDraw::operator=(CListRowDraw *this,CListRowDraw *param_1);
CListRowDraw * __thiscall CListRowDraw::scalar_deleting_destructor(CListRowDraw *this,byte param_1);
void FUN_6070dfc0(void);
CListRowMetaData * __thiscall CListRowMetaData::CListRowMetaData(CListRowMetaData *this,CListRowMetaData *param_1);
CListRowMetaData * __thiscall CListRowMetaData::operator=(CListRowMetaData *this,CListRowMetaData *param_1);
void __thiscall CListColMetaData::~CListColMetaData(CListColMetaData *this);
void __thiscall CListColMetaData::~CListColMetaData(CListColMetaData *this,CListColMetaData *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall ChannelListCtrl::CChannelEmpty::vfunction3(CChannelEmpty *this);
int __thiscall ChannelListCtrl::CChannelEmpty::vfunction4(CChannelEmpty *this,int param_1,char param_2);
undefined1 __thiscall ChannelListCtrl::CChannelName::vfunction2(CChannelName *this);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall ChannelListCtrl::CChannelName::vfunction3(CChannelName *this,int param_1);
int __thiscall ChannelListCtrl::CChannelName::vfunction4(CChannelName *this,byte *param_1,char param_2);
CRuntimeClass * __thiscall CChannelListCtrl::CChannelListCtrl::GetRuntimeClass(CChannelListCtrl *this);
AFX_MSGMAP * __thiscall CChannelListCtrl::CChannelListCtrl::GetMessageMap(CChannelListCtrl *this);
CChannelListCtrl * __thiscall CChannelListCtrl::CChannelListCtrl(CChannelListCtrl *this);
void __thiscall CChannelListCtrl::~CChannelListCtrl(CChannelListCtrl *this);
void __thiscall CChannelListCtrl::CChannelListCtrl::UpdateControl(CChannelListCtrl *this,IParam *param_1);
bool __thiscall CChannelListCtrl::CChannelListCtrl::DoListCtrlSetting(CChannelListCtrl *this);
undefined4 * __thiscall ChannelListCtrl::CChannelEmpty::scalar_deleting_destructor(CChannelEmpty *this,byte param_1);
void __thiscall CChannelListCtrl::CChannelListCtrl::DrawItem(CChannelListCtrl *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CChannelListCtrl::OnCreate(CChannelListCtrl *this,tagCREATESTRUCTA *param_1);
void __thiscall CChannelListCtrl::OnMouseMove(CChannelListCtrl *this,undefined4 param_1,undefined1 param_3);
void __thiscall CChannelListCtrl::OnLButtonDown(CChannelListCtrl *this,undefined4 param_1,undefined1 param_3);
void __thiscall CChannelListCtrl::OnLButtonUp(CChannelListCtrl *this,undefined4 param_1,undefined1 param_3);
void __thiscall CChannelListCtrl::OnLButtonDblClk(void);
long __thiscall CChannelListCtrl::OnMouseHover(CChannelListCtrl *this,uint param_1,long param_2);
long __thiscall CChannelListCtrl::OnMouseLeave(CChannelListCtrl *this,uint param_1,long param_2);
int __thiscall CChannelListCtrl::AddChannelData(CChannelListCtrl *this,CChannelData *param_1);
int __thiscall CChannelListCtrl::OnCheckFullChannel(CChannelListCtrl *this,IParam *param_1);
int __thiscall CChannelListCtrl::OnCheckStatusChannel(CChannelListCtrl *this,IParam *param_1);
bool __thiscall CChannelListCtrl::IsFullChannel(CChannelListCtrl *this,int param_1);
bool __thiscall CChannelListCtrl::IsActiveChannel(CChannelListCtrl *this,int param_1);
void __thiscall CListColButtonDraw::vfunction1(CListColButtonDraw *this,int *param_1,int *param_2,undefined4 param_3,CChannelListCtrl *param_4,int param_5);
bool __thiscall CListColButtonDraw::vfunction2(CListColButtonDraw *this,int param_1,int param_2,int param_3,int param_4,CChannelListCtrl *param_5,int param_6);
void FUN_6070eb70(undefined4 *param_1);
int * __thiscall FUN_6070ebc0(void *this,int *param_1);
int FUN_6070ecb0(int param_1);
void FUN_6070edb0(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_6070ee90(void);
void FUN_6070ef00(void);
void FUN_6070ef40(void);
undefined4 FUN_6070ef90(void);
undefined4 * FUN_6070efd0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
undefined4 * __thiscall FUN_6070f280(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@6070f31a(void);
void FUN_6070f330(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4);
void FUN_6070f3c0(int *param_1);
void __thiscall FUN_6070f400(void *this,int param_1);
void FUN_6070f450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_6070f490(void);
void * __fastcall FUN_6070f500(undefined4 param_1,void *param_2);
void __thiscall CMFunctor<CChannelListCtrl>::scalar_deleting_destructor(CMFunctor<CChannelListCtrl> *this);
void __thiscall CChannelListCtrl::vfunction1(CChannelListCtrl *this,byte param_1);
long __thiscall CEmoticon::CEmoticon::QueryInterface(CEmoticon *this,void **param_1);
long __thiscall CEmoticon::CEmoticon::SetData(CEmoticon *this,tagSTGMEDIUM *param_1,int param_2);
long __thiscall CEmoticon::CEmoticon::EnumFormatEtc(CEmoticon *this,IEnumFORMATETC **param_1);
long __thiscall CEmoticon::CEmoticon::DAdvise(CEmoticon *this,ulong param_1,IAdviseSink *param_2,ulong *param_3);
long __thiscall CEmoticon::CEmoticon::DUnadvise(CEmoticon *this);
void __thiscall CEmoticon::CEmoticon(CEmoticon *this,CEmoticon *param_1);
CEmoticon * __thiscall CEmoticon::operator=(CEmoticon *this,CEmoticon *param_1);
CChatCtrl * __thiscall CChatCtrl::scalar_deleting_destructor(CChatCtrl *this,byte param_1);
void __thiscall CEmoticon::CEmoticon(CEmoticon *this);
void __thiscall CEmoticon::~CEmoticon(CEmoticon *this);
long __thiscall CEmoticon::CEmoticon::QueryGetData(CEmoticon *this);
long __thiscall CEmoticon::CEmoticon::GetData(CEmoticon *this,tagSTGMEDIUM *param_1);
CRuntimeClass * CChatCtrl::_GetBaseClass(void);
CRuntimeClass * __thiscall CChatCtrl::CChatCtrl::GetRuntimeClass(CChatCtrl *this);
CChatCtrl * __thiscall CChatCtrl::CChatCtrl(CChatCtrl *this);
void __thiscall CControlBase::CControlBase(CControlBase *this);
void __thiscall CChatCtrl::SetFont(CChatCtrl *this,char *param_1,int param_2);
void __thiscall CChatCtrl::SetBkgndColor(CChatCtrl *this,ulong param_1);
AFX_MSGMAP * __thiscall CChatCtrl::CChatCtrl::GetMessageMap(CChatCtrl *this);
void __thiscall CChatCtrl::AppendText(CChatCtrl *this,char *param_1,ulong param_2,int param_3,int param_4);
void __thiscall CChatCtrl::AppendHyperLink(CChatCtrl *this,char *param_1,int param_2);
int __thiscall CChatCtrl::IsUrl(CChatCtrl *this,int param_1,int param_2,char *param_3);
int __thiscall CChatCtrl::CChatCtrl::Create(CChatCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
long __thiscall CChatCtrl::CChatCtrl::WindowProc(CChatCtrl *this,uint param_1,uint param_2,long param_3);
int __thiscall CBitmap::~CBitmap(CBitmap *this);
int __thiscall CChatCtrl::Emoticonize(CChatCtrl *this,uint param_1);
int __thiscall CChatCtrl::InsertEmoticon(CChatCtrl *this,uint param_1);
void __thiscall CChatCtrl::AddText(CChatCtrl *this,char *param_1,int param_2,int param_3,ulong param_4);
int __thiscall CChatCtrl::OnCreate(CChatCtrl *this,tagCREATESTRUCTA *param_1);
void __thiscall CChatCtrl::CChatCtrl::UpdateControl(CChatCtrl *this,IParam *param_1);
long __thiscall CChatCtrl::OnTrackUpDown(CChatCtrl *this,uint param_1,long param_2);
void __thiscall CChatCtrl::OnEnChange(CChatCtrl *this);
void __thiscall CChatCtrl::OnEnVscroll(CChatCtrl *this);
void __thiscall CChatCtrl::vfunction1(CChatCtrl *this,byte param_1);
bool __fastcall FUN_60710710(byte *param_1,byte *param_2);
CWnd * __thiscall CColourPopup::scalar_deleting_destructor(CColourPopup *this,byte param_1);
CPalette * __thiscall CPalette::CPalette(CPalette *this,CWnd *param_1,char *param_2,int param_3,int param_4);
void FUN_60710890(void);
void __thiscall CColourPopup::~CColourPopup(CColourPopup *this);
undefined4 __fastcall FUN_60710a70(char *param_1,CWnd *param_2,int param_3,int param_4);
undefined ** __thiscall CColourPopup::vfunction13(CColourPopup *this);
void __thiscall CColourPopup::vfunction69(CColourPopup *this,tagMSG *param_1);
void __fastcall FUN_60710bd0(int param_1,int param_2);
void __fastcall FUN_60710c50(int param_1,CWnd *param_2);
void __fastcall FUN_60710d20(int param_1,int param_2);
void __fastcall FUN_60710db0(int param_1,CWnd *param_2);
void __thiscall OnKeyDown(void *this,int param_1);
void __fastcall FUN_60711010(CWnd *param_1);
void __fastcall OnPaint(CWnd *param_1);
void __thiscall OnMouseMove(void *this,undefined4 param_1,int param_2,int param_3);
void __fastcall OnRButtonDown(CWnd *param_1);
void __fastcall OnLButtonUp(CWnd *param_1);
int __fastcall FUN_607112e0(int param_1,int param_2);
int __fastcall FUN_60711340(int param_1);
int __fastcall FUN_60711380(int param_1);
void __fastcall FUN_607113c0(int param_1,int param_2);
undefined4 FUN_60711400(void);
void FUN_607114d0(void);
void FUN_60711780(void);
void __fastcall FUN_607117f0(int param_1,CWnd *param_2);
void __fastcall CCommonDialog::CCommonDialog_Constructor_or_Destructor(UINT param_1);
void __thiscall CCommonDialog::~CCommonDialog(CCommonDialog *this);
void __thiscall CPen::~CPen(CPen *this,int param_1);
void __thiscall FUN_60711f80(void *this,int param_1);
void __thiscall FUN_60711fd0(void *this,int param_1);
CDialog * __thiscall CCommonDialog::scalar_deleting_destructor(CCommonDialog *this,byte param_1);
void __thiscall CCommonDialog::vfunction82(CCommonDialog *this,ushort param_1,CWnd *param_2);
void FUN_60712070(int param_1);
void __thiscall CPalette::~CPalette(CPalette *this);
undefined4 * __thiscall CPalette::scalar_deleting_destructor(CPalette *this,byte param_1);
void __thiscall CFont::~CFont(CFont *this);
undefined4 * __thiscall CFont::scalar_deleting_destructor(CFont *this,byte param_1);
undefined ** __thiscall CContainerWnd::vfunction1(CContainerWnd *this);
undefined ** __thiscall CContainerWnd::vfunction13(CContainerWnd *this);
CContainerWnd * __thiscall CContainerWnd::CContainerWnd(CContainerWnd *this);
CWnd * __thiscall CContainerWnd::scalar_deleting_destructor(CContainerWnd *this,byte param_1);
void __thiscall CContainerWnd::~CContainerWnd(CContainerWnd *this);
void __fastcall OnPaint(CWnd *param_1);
void __thiscall CControlBase::~CControlBase(CControlBase *this);
void __thiscall CControlBase::~CControlBase(CControlBase *this);
bool __thiscall CControlBase::CControlBase::CreateControl(CControlBase *this,IParam *param_1);
bool __thiscall CControlBase::CControlBase::DestroyControl(CControlBase *this);
CWnd * __thiscall CControlBase::CControlBase::GetCWndPtr(CControlBase *this);
bool __thiscall CControlBase::CControlBase::IsCreated(CControlBase *this);
void __thiscall CControlBase::CControlBase::ShowControl(CControlBase *this,bool param_1);
void __thiscall CHeaderCtrlEx::CHeaderCtrlEx::DispatchNotifyEvent(CHeaderCtrlEx *this,tagNMHEADERA *param_1);
CControlList * __thiscall CControlList::CControlList(CControlList *this);
CControlList * __thiscall CControlList::CControlList(CControlList *this,CControlList *param_1);
CControlList * __thiscall CControlList::operator=(CControlList *this,CControlList *param_1);
CControlList * __thiscall CControlList::scalar_deleting_destructor(CControlList *this,byte param_1);
CControlList * __thiscall CControlList::~CControlList(CControlList *this);
void __thiscall CControlList::~CControlList(CControlList *this);
bool __thiscall CControlList::Add(CControlList *this,char *param_1,CControlBase *param_2);
void __thiscall CControlList::Clear(CControlList *this);
CControlBase * __thiscall CControlList::Find(CControlList *this,char *param_1);
undefined4 * FUN_607127a0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
int * FUN_60712880(int *param_1);
int * FUN_60712910(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,int param_3,void *param_4);
void FUN_60712b50(void);
undefined4 * __thiscall FUN_60712bc0(void *this,undefined4 *param_1,undefined4 param_2);
void Catch_All@60712c5a(void);
undefined4 * FUN_60712c70(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void FUN_60712cc0(void);
void __thiscall FUN_60712d00(void *this,int param_1);
undefined4 * __thiscall FUN_60712d50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void Catch_All@60712dda(void);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
CButton * __thiscall CCustomButton::scalar_deleting_destructor(CCustomButton *this,byte param_1);
CRuntimeClass * __thiscall CCustomButton::CCustomButton::GetRuntimeClass(CCustomButton *this);
CCustomButton * __thiscall CCustomButton::CCustomButton(CCustomButton *this);
void __thiscall CControlBase::CControlBase(CControlBase *this);
void __thiscall CCustomButton::vfunction1(CCustomButton *this,byte param_1);
CCustomCheckBox * __thiscall CCustomCheckBox::scalar_deleting_destructor(CCustomCheckBox *this,byte param_1);
CRuntimeClass * __thiscall CCustomCheckBox::CCustomCheckBox::GetRuntimeClass(CCustomCheckBox *this);
CCustomCheckBox * __thiscall CCustomCheckBox::CCustomCheckBox(CCustomCheckBox *this);
void __thiscall CControlBase::CControlBase(CControlBase *this);
AFX_MSGMAP * __thiscall CCustomCheckBox::CCustomCheckBox::GetMessageMap(CCustomCheckBox *this);
void __thiscall CCustomCheckBox::CCustomCheckBox::DrawItem(CCustomCheckBox *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CCustomCheckBox::OnBtnClicked(CCustomCheckBox *this);
void __thiscall CCustomCheckBox::CCustomCheckBox::UpdateControl(CCustomCheckBox *this,IParam *param_1);
int __thiscall CCustomCheckBox::Create(CCustomCheckBox *this,char *param_1,ulong param_2,CRect *param_3,CWnd *param_4,uint param_5);
int __thiscall CCustomCheckBox::LoadBitmapA(CCustomCheckBox *this,char *param_1,ulong param_2,int param_3);
int __thiscall CCustomCheckBox::GetCheck(CCustomCheckBox *this);
void __thiscall CCustomCheckBox::SetCheck(CCustomCheckBox *this,int param_1);
void __thiscall CCustomCheckBox::vfunction1(CCustomCheckBox *this,byte param_1);
void __thiscall CCustomComboBox::EnableAutoCompletion(CCustomComboBox *this,int param_1);
void __thiscall CCustomComboBox::SetColor(CCustomComboBox *this,ulong param_1);
CCustomComboBox * __thiscall CCustomComboBox::scalar_deleting_destructor(CCustomComboBox *this,byte param_1);
CRuntimeClass * CCustomComboBox::_GetBaseClass(void);
CRuntimeClass * __thiscall CCustomComboBox::CCustomComboBox::GetRuntimeClass(CCustomComboBox *this);
AFX_MSGMAP * __thiscall CCustomComboBox::CCustomComboBox::GetMessageMap(CCustomComboBox *this);
CCustomComboBox * __thiscall CCustomComboBox::CCustomComboBox(CCustomComboBox *this);
void __thiscall CCustomComboBox::~CCustomComboBox(CCustomComboBox *this);
char * __thiscall CCustomComboBox::GetWndText(CCustomComboBox *this);
int __thiscall CCustomComboBox::Create(CCustomComboBox *this,ulong param_1,CRect *param_2,CWnd *param_3,uint param_4);
void __thiscall CCustomComboBox::CCustomComboBox::UpdateControl(CCustomComboBox *this,IParam *param_1);
int __thiscall CCustomComboBox::SetBkColor(CCustomComboBox *this,ulong param_1);
void __thiscall CHeaderCtrlEx::SetInvalidColor(CHeaderCtrlEx *this,ulong param_1);
int __thiscall CAdWnd::OnCreate(CAdWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CCustomComboBox::OnMouseMove(CCustomComboBox *this);
void __thiscall CCustomComboBox::OnLButtonDown(CCustomComboBox *this);
void __thiscall CCustomComboBox::OnLButtonUp(CCustomComboBox *this);
void __thiscall CCustomComboBox::OnTimer(CCustomComboBox *this,uint param_1);
void __thiscall CCustomComboBox::OnPaint(CCustomComboBox *this);
void __thiscall CCustomComboBox::DrawCombo(CCustomComboBox *this,STATE param_1);
void __thiscall CCustomComboBox::OnSetFocus(CCustomComboBox *this);
void __thiscall CCustomComboBox::OnKillFocus(CCustomComboBox *this);
int __thiscall CCustomComboBox::CCustomComboBox::PreTranslateMessage(CCustomComboBox *this,tagMSG *param_1);
void __thiscall CCustomComboBox::OnEditUpdate(CCustomComboBox *this);
void __thiscall CCustomComboBox::OnSysColorChange(CCustomComboBox *this);
int __thiscall CCustomComboBox::GetImageIndex(CCustomComboBox *this,STATE param_1);
HBRUSH__ * __thiscall CCustomComboBox::CtlColor(CCustomComboBox *this,CDC *param_1,uint param_2);
HBRUSH__ * __thiscall CCustomComboBox::OnCtlColor(CCustomComboBox *this,CDC *param_1,CWnd *param_2,uint param_3);
void __thiscall CCustomComboBox::vfunction1(CCustomComboBox *this,byte param_1);
void FUN_60713fd0(uint param_1);
CCustomEdit * __thiscall CCustomEdit::scalar_deleting_destructor(CCustomEdit *this,byte param_1);
CRuntimeClass * __thiscall CCustomEdit::CCustomEdit::GetRuntimeClass(CCustomEdit *this);
AFX_MSGMAP * __thiscall CCustomEdit::CCustomEdit::GetMessageMap(CCustomEdit *this);
CCustomEdit * __thiscall CCustomEdit::CCustomEdit(CCustomEdit *this);
void __thiscall CCustomEdit::~CCustomEdit(CCustomEdit *this);
int __thiscall CCustomEdit::Create(CCustomEdit *this,ulong param_1,CRect *param_2,CWnd *param_3,uint param_4);
void __thiscall CCustomEdit::CCustomEdit::UpdateControl(CCustomEdit *this,IParam *param_1);
void __thiscall CThreadManager::SetProgressDialog(CThreadManager *this,HWND__ *param_1);
int __thiscall CCustomEdit::SetBkColor(CCustomEdit *this,ulong param_1);
void __thiscall CCustomEdit::OnPaint(CCustomEdit *this);
void __thiscall CCustomEdit::DrawEdit(CCustomEdit *this);
void __thiscall CCustomEdit::vfunction1(CCustomEdit *this,byte param_1);
CProgressCtrl * __thiscall CCustomProgress::scalar_deleting_destructor(CCustomProgress *this,byte param_1);
CRuntimeClass * CCustomProgress::_GetBaseClass(void);
CRuntimeClass * __thiscall CCustomProgress::CCustomProgress::GetRuntimeClass(CCustomProgress *this);
CCustomProgress * __thiscall CCustomProgress::CCustomProgress(CCustomProgress *this);
void __thiscall CControlBase::CControlBase(CControlBase *this);
AFX_MSGMAP * __thiscall CCustomProgress::CCustomProgress::GetMessageMap(CCustomProgress *this);
void __thiscall CCustomProgress::OnPaint(CCustomProgress *this);
int __thiscall CCustomProgress::OnCreate(CCustomProgress *this,tagCREATESTRUCTA *param_1);
void __thiscall CCustomProgress::CCustomProgress::UpdateControl(CCustomProgress *this,IParam *param_1);
int __thiscall CCustomProgress::Create(CCustomProgress *this,ulong param_1,CRect *param_2,CWnd *param_3,uint param_4);
void __thiscall CCustomProgress::vfunction1(CCustomProgress *this,byte param_1);
CCustomRadioButton * __thiscall CCustomRadioButton::scalar_deleting_destructor(CCustomRadioButton *this,byte param_1);
CRuntimeClass * CBmpButton::_GetBaseClass(void);
CRuntimeClass * __thiscall CCustomRadioButton::CCustomRadioButton::GetRuntimeClass(CCustomRadioButton *this);
CCustomRadioButton * __thiscall CCustomRadioButton::CCustomRadioButton(CCustomRadioButton *this);
void __thiscall CCustomRadioButton::~CCustomRadioButton(CCustomRadioButton *this);
AFX_MSGMAP * __thiscall CCustomRadioButton::CCustomRadioButton::GetMessageMap(CCustomRadioButton *this);
void __thiscall CCustomRadioButton::Add(CCustomRadioButton *this,CCustomRadioButton *param_1);
void __thiscall CCustomRadioButton::Remove(CCustomRadioButton *this,CCustomRadioButton *param_1);
int __thiscall CCustomRadioButton::GetCheck(CCustomRadioButton *this);
void __thiscall CCustomRadioButton::SetCheck(CCustomRadioButton *this,int param_1);
void __thiscall CCustomRadioButton::CCustomRadioButton::DrawItem(CCustomRadioButton *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CCustomCheckBox::DotRect(CCustomCheckBox *this,HDC__ *param_1,tagRECT *param_2);
void __thiscall CCustomRadioButton::OnDestroy(CCustomRadioButton *this);
int __thiscall CCustomRadioButton::OnCreate(CCustomRadioButton *this,tagCREATESTRUCTA *param_1);
void __thiscall CCustomRadioButton::OnLButtonUp(CCustomRadioButton *this,undefined4 param_1,LONG param_3,LONG param_4);
void __thiscall CCustomRadioButton::CCustomRadioButton::UpdateControl(CCustomRadioButton *this,IParam *param_1);
int __thiscall CCustomRadioButton::LoadBitmapA(CCustomRadioButton *this,char *param_1,ulong param_2,int param_3);
void __thiscall CCustomRadioButton::SetBGColor(CCustomRadioButton *this,ulong param_1);
ulong __thiscall CCustomRadioButton::GetBGColor(CCustomRadioButton *this);
void FUN_60715400(void);
void __thiscall CCustomRadioButton::vfunction1(CCustomRadioButton *this,byte param_1);
CStatic * __thiscall CCustomStatic::scalar_deleting_destructor(CCustomStatic *this,byte param_1);
CRuntimeClass * CCustomStatic::_GetBaseClass(void);
CRuntimeClass * __thiscall CCustomStatic::CCustomStatic::GetRuntimeClass(CCustomStatic *this);
AFX_MSGMAP * __thiscall CCustomButton::CCustomButton::GetMessageMap(CCustomButton *this);
CCustomStatic * __thiscall CCustomStatic::CCustomStatic(CCustomStatic *this);
void __thiscall CControlBase::CControlBase(CControlBase *this);
bool __thiscall CCustomButton::CCustomButton::CreateControl(CCustomButton *this,IParam *param_1);
void __thiscall CCustomStatic::CCustomStatic::UpdateControl(CCustomStatic *this,IParam *param_1);
void __thiscall CCustomStatic::CCustomStatic::DrawItem(CCustomStatic *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CCustomStatic::CCustomStatic::PreCreateWindow(CCustomStatic *this,tagCREATESTRUCTA *param_1);
void __thiscall CCustomStatic::CCustomStatic::MovePostion(CCustomStatic *this,int param_1,int param_2,int param_3);
void __thiscall CCustomStatic::vfunction1(CCustomStatic *this,byte param_1);
CCustomTabCtrl * __thiscall CCustomTabCtrl::scalar_deleting_destructor(CCustomTabCtrl *this,byte param_1);
void __thiscall CMemberListTabCtrl::~CMemberListTabCtrl(CMemberListTabCtrl *this);
void __thiscall CMemberListTabCtrl::RegisterListCtrl(CMemberListTabCtrl *this,int param_1,CListCtrlEx *param_2);
void __thiscall CMemberListTabCtrl::RegisterWnd(CMemberListTabCtrl *this,int param_1,CWnd *param_2);
int __thiscall CMemberListTabCtrl::OnMemberCountChanged(CMemberListTabCtrl *this,IParam *param_1);
CMemberListTabCtrl * __thiscall CMemberListTabCtrl::CMemberListTabCtrl(CMemberListTabCtrl *this);
CMemberListTabCtrl * __thiscall CMemberListTabCtrl::scalar_deleting_destructor(CMemberListTabCtrl *this,byte param_1);
void FUN_60715e50(void);
CCustomTabCtrl * __thiscall CCustomTabCtrl::CCustomTabCtrl(CCustomTabCtrl *this);
void __thiscall CCustomTabCtrl::Init(CCustomTabCtrl *this);
void __thiscall CCustomTabCtrl::~CCustomTabCtrl(CCustomTabCtrl *this);
int __thiscall CCustomTabCtrl::OnTabSwitched(CCustomTabCtrl *this,IParam *param_1);
int __thiscall CCustomTabCtrl::Create(CCustomTabCtrl *this,CRect *param_1,CWnd *param_2,uint param_3,int param_4);
void __thiscall CCustomTabCtrl::DestroyWindow(CCustomTabCtrl *this);
int __thiscall CCustomTabCtrl::AddTab(CCustomTabCtrl *this,int param_1,char *param_2);
int __thiscall CCustomTabCtrl::DetachContents(CCustomTabCtrl *this,int param_1);
int __thiscall CCustomTabCtrl::OnPaint(CCustomTabCtrl *this,IParam *param_1);
int __thiscall CCustomTabCtrl::ShowWindow(CCustomTabCtrl *this,int param_1);
int __thiscall CCustomTabCtrl::IsWindowVisible(CCustomTabCtrl *this);
CControlBase * __thiscall CCustomTabCtrl::GetTabContents(CCustomTabCtrl *this,int param_1);
CControlBase * __thiscall CCustomTabCtrl::GetTabBtn(CCustomTabCtrl *this,int param_1);
CTabButtons * __thiscall CCustomTabCtrl::GetTabBtns(CCustomTabCtrl *this);
bool __thiscall CCustomTabCtrl::CCustomTabCtrl::IsCreated(CCustomTabCtrl *this);
void __thiscall CCustomTabCtrl::CCustomTabCtrl::ShowControl(CCustomTabCtrl *this,bool param_1);
void __thiscall CCustomTabCtrl::CCustomTabCtrl::UpdateControl(CCustomTabCtrl *this,IParam *param_1);
int __thiscall FindAbuseAndReplaceTo(void *this,char param_1);
void __thiscall CCustomTabCtrl::RecalcWindowRect(CCustomTabCtrl *this);
int __thiscall CCustomTabCtrl::PushTab(CCustomTabCtrl *this,int param_1);
int FUN_607168d0(void);
undefined4 * FUN_607168f0(uint *param_1);
void FUN_607169a0(undefined4 *param_1);
int * FUN_607169f0(int *param_1,uint *param_2);
undefined4 FUN_60716a80(void);
int * FUN_60716aa0(int *param_1,uint *param_2,int param_3,undefined4 *param_4);
void FUN_60716c70(void);
int * FUN_60716cb0(int *param_1,uint *param_2);
void FUN_60716db0(int *param_1,int param_2,int *param_3,int param_4,int *param_5);
undefined4 * FUN_60716e90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
void FUN_60717150(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_60717190(void);
void __thiscall CMFunctor<CCustomTabCtrl>::vfunction1(CMFunctor<CCustomTabCtrl> *this);
void __thiscall CMFunctor<CMemberListTabCtrl>::scalar_deleting_destructor(CMFunctor<CMemberListTabCtrl> *this);
void __thiscall CMFunctor<CCustomTabCtrl>::scalar_deleting_destructor(CMFunctor<CCustomTabCtrl> *this);
CGaugeCtrl * __thiscall CGaugeCtrl::scalar_deleting_destructor(CGaugeCtrl *this,byte param_1);
CHgGDImage * __thiscall CHgGDImage::CHgGDImage(CHgGDImage *this);
void __thiscall CGaugeCtrl::~CGaugeCtrl(CGaugeCtrl *this);
bool __thiscall CGaugeCtrl::CGaugeCtrl::CreateControl(CGaugeCtrl *this,IParam *param_1);
void __thiscall CGaugeCtrl::CGaugeCtrl::UpdateControl(CGaugeCtrl *this,IParam *param_1);
void __thiscall CGaugeCtrl::SetGauge(CGaugeCtrl *this,int param_1,int param_2);
void __thiscall CGuildInfo::~CGuildInfo(CGuildInfo *this);
undefined4 * __thiscall CGuildInfo::scalar_deleting_destructor(CGuildInfo *this,byte param_1);
CGuildInfoCtrl * __thiscall CGuildInfoCtrl::scalar_deleting_destructor(CGuildInfoCtrl *this,byte param_1);
void __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this,CRectDrawer *param_1);
CRectDrawer * __thiscall CRectDrawer::operator=(CRectDrawer *this,CRectDrawer *param_1);
undefined4 * __thiscall CRectDrawer::scalar_deleting_destructor(CRectDrawer *this,byte param_1);
void __cdecl FUN_607179f0(int param_1);
CGuildInfo * __thiscall CGuildInfo::CGuildInfo(CGuildInfo *this);
undefined4 * __thiscall CGuildInfoLoader::scalar_deleting_destructor(CGuildInfoLoader *this,byte param_1);
void __thiscall CGuildInfoLoader::~CGuildInfoLoader(CGuildInfoLoader *this);
void FUN_60717e30(void);
undefined4 FUN_60717f20(void);
void __fastcall FUN_60717f70(int param_1);
void __fastcall FUN_60717fb0(int param_1);
void __fastcall FUN_60718080(int param_1);
CRuntimeClass * __thiscall CGuildInfoCtrl::CGuildInfoCtrl::GetRuntimeClass(CGuildInfoCtrl *this);
CGuildInfoCtrl * __thiscall CGuildInfoCtrl::CGuildInfoCtrl(CGuildInfoCtrl *this);
void __thiscall CGuildInfoCtrl::~CGuildInfoCtrl(CGuildInfoCtrl *this);
AFX_MSGMAP * __thiscall CGuildInfoCtrl::CGuildInfoCtrl::GetMessageMap(CGuildInfoCtrl *this);
bool __thiscall CGuildInfoCtrl::CGuildInfoCtrl::CreateControl(CGuildInfoCtrl *this,IParam *param_1);
void __thiscall CGuildInfoCtrl::CGuildInfoCtrl::UpdateControl(CGuildInfoCtrl *this,IParam *param_1);
int __thiscall CGuildInfoCtrl::OnCreate(CGuildInfoCtrl *this,tagCREATESTRUCTA *param_1);
void FUN_60718610(void);
void __thiscall CGuildInfoCtrl::SetDefaultGuidTitle(CGuildInfoCtrl *this,char *param_1,int param_2);
void __thiscall CGuildInfoCtrl::StartGuildInfoLoader(CGuildInfoCtrl *this,char *param_1);
int __thiscall CGuildInfoCtrl::EndGuildInfoLoader(CGuildInfoCtrl *this,IParam *param_1);
void __thiscall CGuildInfoCtrl::OnPaint(CGuildInfoCtrl *this);
int __thiscall CGuildInfoCtrl::OnEraseBkgnd(CGuildInfoCtrl *this,CDC *param_1);
void __thiscall CGuildInfoCtrl::OnDestroy(CGuildInfoCtrl *this);
void __thiscall CGuildInfoCtrl::OnLButtonUp(CGuildInfoCtrl *this);
int __thiscall CGuildInfoCtrl::OnSetCursor(CGuildInfoCtrl *this,CWnd *param_1,uint param_2,uint param_3);
void __thiscall CMFunctor<CChannelListCtrl>::vfunction1(CMFunctor<CChannelListCtrl> *this);
void __thiscall CMFunctor<CGuildInfoCtrl>::scalar_deleting_destructor(CMFunctor<CGuildInfoCtrl> *this);
void __thiscall CMFunctor<CChannelListCtrl>::vfunction3(CMFunctor<CChannelListCtrl> *this,undefined4 *param_1);
void __thiscall CGuildInfoCtrl::vfunction1(CGuildInfoCtrl *this,byte param_1);
void __thiscall CMemDC::vfunction29(CMemDC *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __thiscall CHanChatEditComboBox::SetParentType(CHanChatEditComboBox *this,uint param_1);
void __thiscall CHanChatEditComboBox::attachMsg(CHanChatEditComboBox *this,_func_int_CHanChatEditComboBox_ptr_tagMSG_ptr *param_1);
CHanChatEditComboBox * __thiscall CHanChatEditComboBox::scalar_deleting_destructor(CHanChatEditComboBox *this,byte param_1);
CHanChatEditComboBox * __thiscall CHanChatEditComboBox::CHanChatEditComboBox(CHanChatEditComboBox *this);
void __thiscall CHanChatEditComboBox::~CHanChatEditComboBox(CHanChatEditComboBox *this);
AFX_MSGMAP * __thiscall CHanChatEditComboBox::CHanChatEditComboBox::GetMessageMap(CHanChatEditComboBox *this);
void __thiscall CHanChatEditComboBox::SetChatInputDelay(CHanChatEditComboBox *this,ulong param_1,ulong param_2);
int __thiscall CHanChatEditComboBox::OnCreate(CHanChatEditComboBox *this,tagCREATESTRUCTA *param_1);
int __thiscall CHanChatEditComboBox::CHanChatEditComboBox::PreTranslateMessage(CHanChatEditComboBox *this,tagMSG *param_1);
int __thiscall CHanChatEditComboBox::CheckValidComboBoxPressEnter(CHanChatEditComboBox *this,char *param_1);
CHanChatEditComboBox * __thiscall CHanChatEditComboBox::operator=(CHanChatEditComboBox *this,CHanChatEditComboBox *param_1);
void __thiscall CHanChatEditComboBox::InsertComboEdit(CHanChatEditComboBox *this,char *param_1);
int __thiscall CHanChatEditComboBox::AutoEnter(CHanChatEditComboBox *this,char *param_1);
void FUN_607197b0(int param_1);
int FUN_60719850(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_60719930(void);
void FUN_60719990(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
void FUN_60719a50(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void __thiscall CHanChatEditComboBox::vfunction1(CHanChatEditComboBox *this,byte param_1);
CHeaderCtrlEx * __thiscall CHeaderCtrlEx::scalar_deleting_destructor(CHeaderCtrlEx *this,byte param_1);
AFX_MSGMAP * __thiscall CHeaderCtrlEx::CHeaderCtrlEx::GetMessageMap(CHeaderCtrlEx *this);
CHeaderCtrlEx * __thiscall CHeaderCtrlEx::CHeaderCtrlEx(CHeaderCtrlEx *this);
void __thiscall CHeaderCtrlEx::~CHeaderCtrlEx(CHeaderCtrlEx *this);
void __thiscall CHeaderCtrlEx::SetHeight(CHeaderCtrlEx *this,int param_1);
void __thiscall CHeaderCtrlEx::SetFont(CHeaderCtrlEx *this,tagLOGFONTA *param_1);
void __thiscall CHeaderCtrlEx::SetFont(CHeaderCtrlEx *this,CFont *param_1);
void __thiscall CHeaderCtrlEx::SetOwnerDraw(CHeaderCtrlEx *this,int param_1);
void __thiscall CHeaderCtrlEx::UpdateControl(CHeaderCtrlEx *this,IParam *param_1);
long __thiscall CHeaderCtrlEx::CHeaderCtrlEx::DefWindowProcA(CHeaderCtrlEx *this,uint param_1,uint param_2,long param_3);
int __thiscall CHeaderCtrlEx::CHeaderCtrlEx::OnChildNotify(CHeaderCtrlEx *this,uint param_1,uint param_2,long param_3,long *param_4);
void __thiscall CPen::OnPaint(CPen *this);
int __thiscall CBrush::OnEraseBkgnd(CBrush *this,CDC *param_1);
CWnd * __thiscall CHtmlCtrl::scalar_deleting_destructor(CHtmlCtrl *this,byte param_1);
CObject * CHtmlCtrl::CreateObject(void);
CRuntimeClass * __thiscall CHtmlCtrl::CHtmlCtrl::GetRuntimeClass(CHtmlCtrl *this);
AFX_MSGMAP * __thiscall CHtmlCtrl::CHtmlCtrl::GetMessageMap(CHtmlCtrl *this);
CHtmlCtrl * __thiscall CHtmlCtrl::CHtmlCtrl(CHtmlCtrl *this);
void __thiscall CHtmlCtrl::~CHtmlCtrl(CHtmlCtrl *this);
int __thiscall CHtmlCtrl::CHtmlCtrl::Create(CHtmlCtrl *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,uint param_6,CCreateContext *param_7);
int __thiscall CHtmlCtrl::Navigate(CHtmlCtrl *this,char *param_1);
void __thiscall CHtmlCtrl::CloseWindow(CHtmlCtrl *this);
int __thiscall CHtmlCtrl::CHtmlCtrl::DestroyWindow(CHtmlCtrl *this);
void __thiscall CHtmlCtrl::Stop(CHtmlCtrl *this);
int __thiscall CHtmlCtrl::ShowWindow(CHtmlCtrl *this,int param_1);
void __thiscall CHtmlCtrl::OnSize(CHtmlCtrl *this,uint param_1,int param_2,int param_3);
void __thiscall CHtmlCtrl::RegisterOnSizeNotify(CHtmlCtrl *this,uint param_1);
void FUN_6071aa40(void);
CHtmlViewCtrl * __thiscall CHtmlViewCtrl::CHtmlViewCtrl(CHtmlViewCtrl *this);
void __thiscall CHtmlViewCtrl::~CHtmlViewCtrl(CHtmlViewCtrl *this);
CHtmlView * __thiscall CHtmlViewCtrl::scalar_deleting_destructor(CHtmlViewCtrl *this,byte param_1);
CRuntimeClass * CHtmlViewCtrl::_GetBaseClass(void);
CRuntimeClass * __thiscall CHtmlViewCtrl::CHtmlViewCtrl::GetRuntimeClass(CHtmlViewCtrl *this);
AFX_MSGMAP * __thiscall CHtmlViewCtrl::CHtmlViewCtrl::GetMessageMap(CHtmlViewCtrl *this);
int __thiscall CHtmlViewCtrl::CHtmlViewCtrl::Create(CHtmlViewCtrl *this,CRect *param_1,CWnd *param_2,uint param_3);
void __thiscall CCustomProgress::OnDestroy(CCustomProgress *this);
void __thiscall CHtmlViewCtrl::CHtmlViewCtrl::OnBeforeNavigate2(CHtmlViewCtrl *this,char *param_1,ulong param_2,char *param_3,CByteArray *param_4,char *param_5,int *param_6);
void __thiscall CHtmlViewCtrl::CHtmlViewCtrl::OnStatusTextChange(CHtmlViewCtrl *this,char *param_1);
void __thiscall CHtmlViewCtrl::OnSize(CHtmlViewCtrl *this,uint param_1,int param_2,int param_3);
long __thiscall CWnd::CWnd::GetAccessibilityHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3);
void __thiscall CHtmlViewCtrl::vfunction55(CHtmlViewCtrl *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void __thiscall CHtmlViewCtrl::vfunction43(CHtmlViewCtrl *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void __thiscall CHtmlViewCtrl::vfunction42(CHtmlViewCtrl *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 __thiscall CHtmlViewCtrl::vfunction41(CHtmlViewCtrl *this,long *param_1);
void __thiscall CLineDrawer::CLineDrawer(CLineDrawer *this,CLineDrawer *param_1);
CLineDrawer * __thiscall CLineDrawer::operator=(CLineDrawer *this,CLineDrawer *param_1);
undefined4 * __thiscall CLineDrawer::scalar_deleting_destructor(CLineDrawer *this,byte param_1);
void __thiscall CLineDrawer::CLineDrawer(CLineDrawer *this);
void __thiscall CLineDrawer::CLineDrawer::UpdateControl(CLineDrawer *this,IParam *param_1);
void __thiscall CPen::~CPen(CPen *this,CDC *param_1);
void __thiscall CListColDraw::CListColDraw::Draw(CListColDraw *this,CDC *param_1,CRect *param_2,char *param_3,int param_4,CListCtrlEx *param_5,int param_6);
bool __thiscall CListColDraw::CListColDraw::HitTest(void);
CListCtrlEx * __thiscall CListCtrlEx::scalar_deleting_destructor(CListCtrlEx *this,byte param_1);
CRuntimeClass * CListCtrlEx::_GetBaseClass(void);
CRuntimeClass * __thiscall CListCtrlEx::CListCtrlEx::GetRuntimeClass(CListCtrlEx *this);
CListCtrlEx * __thiscall CListCtrlEx::CListCtrlEx(CListCtrlEx *this);
void __thiscall CListCtrlEx::~CListCtrlEx(CListCtrlEx *this);
bool __thiscall CListCtrlEx::CListCtrlEx::CreateControl(CListCtrlEx *this,IParam *param_1);
bool __thiscall CListCtrlEx::CListCtrlEx::DestroyControl(CListCtrlEx *this);
void __thiscall CListCtrlEx::CListCtrlEx::UpdateControl(CListCtrlEx *this,IParam *param_1);
bool __thiscall CListCtrlEx::CListCtrlEx::DoListCtrlSetting(CListCtrlEx *this);
AFX_MSGMAP * __thiscall CListCtrlEx::CListCtrlEx::GetMessageMap(CListCtrlEx *this);
int __thiscall CListCtrlEx::OnCreate(CListCtrlEx *this,tagCREATESTRUCTA *param_1);
void __thiscall CListCtrlEx::OnDestroy(CListCtrlEx *this);
void __thiscall CListCtrlEx::SetUseBackBuffer(CListCtrlEx *this,int param_1);
void __thiscall CListCtrlEx::CListCtrlEx::MeasureItem(CListCtrlEx *this,tagMEASUREITEMSTRUCT *param_1);
void __thiscall CListCtrlEx::OnColumnClick(CListCtrlEx *this,tagNMHDR *param_1,long *param_2);
void __thiscall CListCtrlEx::OnLvnDeleteitem(CListCtrlEx *this,tagNMHDR *param_1,long *param_2);
void __thiscall CListCtrlEx::OnLvnInsertItem(CListCtrlEx *this,tagNMHDR *param_1,long *param_2);
void __thiscall CListCtrlEx::SortColumn(CListCtrlEx *this,int param_1,int param_2);
int CListCtrlEx::CallbackCompareItems(long param_1,long param_2,long param_3);
int __thiscall CListCtrlEx::CListCtrlEx::OnSortItem(CListCtrlEx *this,ulong param_1,ulong param_2,int param_3,int param_4);
long __thiscall CListCtrlEx::OnTrackUpDown(CListCtrlEx *this,uint param_1,long param_2);
int __thiscall CChatCtrl::OnMouseWheel(CChatCtrl *this);
void __thiscall CListCtrlEx::OnNMClick(CListCtrlEx *this,tagNMHDR *param_1,long *param_2);
void __thiscall CListCtrlEx::OnNMDblclk(CListCtrlEx *this,tagNMHDR *param_1,long *param_2);
void __thiscall CListCtrlEx::SetItemHeight(CListCtrlEx *this,int param_1);
int __thiscall CListCtrlEx::GetItemHeight(CListCtrlEx *this);
void __thiscall CListCtrlEx::SetItemTextFrom(CListCtrlEx *this,int param_1,ulong param_2);
void __thiscall CListCtrlEx::InsertColumnFromMetaData(CListCtrlEx *this);
void __thiscall CListCtrlEx::RecalcLayout(CListCtrlEx *this);
void __thiscall CListCtrlEx::SetColumnTextFormat(CListCtrlEx *this,int param_1,int param_2);
void __thiscall CListCtrlEx::CListCtrlEx::GetColumnFormatString(CListCtrlEx *this,int param_1,char *param_2,char *param_3,int param_4);
void __thiscall CListCtrlEx::vfunction1(CListCtrlEx *this,byte param_1);
undefined4 * FUN_6071c300(undefined4 *param_1);
void FUN_6071c3a0(void);
void FUN_6071c3f0(LPCSTR param_1);
CListRowDraw * __thiscall CListRowDraw::CListRowDraw(CListRowDraw *this);
void __thiscall CListRowDraw::~CListRowDraw(CListRowDraw *this);
void __thiscall CListRowDraw::Init(CListRowDraw *this);
void __thiscall CListRowDraw::InitBackBufferVariable(CListRowDraw *this);
void __thiscall CListRowDraw::UpdateControl(CListRowDraw *this,IParam *param_1);
void __thiscall CListRowDraw::SetColDraw(CListRowDraw *this,int param_1,CListColDraw *param_2);
void __thiscall CListRowDraw::DeleteBackBuffer(CListRowDraw *this);
bool __thiscall CListRowDraw::CListRowDraw::CreateBackBuffer(CListRowDraw *this,CDC *param_1,int param_2,int param_3);
void __thiscall CListRowDraw::CListRowDraw::Draw(CListRowDraw *this,CListCtrlEx *param_1,tagDRAWITEMSTRUCT *param_2);
void __thiscall CListRowDraw::CListRowDraw::DrawUsingBackBuffer(CListRowDraw *this,CListCtrlEx *param_1,tagDRAWITEMSTRUCT *param_2);
bool __thiscall CListRowDraw::CListRowDraw::HitTest(CListRowDraw *this,CListCtrlEx *param_1,CPoint *param_2,int *param_3,int *param_4);
int __thiscall CListRowDraw::GetItemHeight(CListRowDraw *this);
undefined4 * FUN_6071daa0(int *param_1);
undefined4 * FUN_6071db50(int *param_1);
int * FUN_6071dc10(int *param_1,int *param_2,int param_3,undefined4 *param_4);
int * FUN_6071dde0(int *param_1,int *param_2);
CListRowMetaData * __thiscall CListRowMetaData::CListRowMetaData(CListRowMetaData *this);
void __thiscall CListCtrlEx::~CListCtrlEx(CListCtrlEx *this);
bool __thiscall CListRowMetaData::GetColumnInfo(CListRowMetaData *this,int param_1,tagLVCOLUMNA *param_2);
int __thiscall CListRowMetaData::GetColumnSize(CListRowMetaData *this);
int __thiscall CListRowMetaData::GetItemText(CListRowMetaData *this,int param_1,ulong param_2);
bool __thiscall CListRowMetaData::SetColMetaData(CListRowMetaData *this,int param_1,CListColMetaData *param_2);
int __thiscall CListRowMetaData::CompareItem(CListRowMetaData *this,int param_1,ulong param_2,ulong param_3,bool param_4);
void FUN_6071e160(int param_1);
CMemberListCtrl * __thiscall CMemberListCtrl::scalar_deleting_destructor(CMemberListCtrl *this,byte param_1);
void __thiscall MemberListCtrl::CMemberId::~CMemberId(CMemberId *this);
void __thiscall MemberListCtrl::CMemberId::~CMemberId(CMemberId *this,CMemberId *param_1);
void __thiscall MemberListCtrl::CRoomId::~CRoomId(CRoomId *this);
void __thiscall MemberListCtrl::CRoomId::~CRoomId(CRoomId *this,CRoomId *param_1);
CBgPainter * __thiscall CBgPainter::operator=(CBgPainter *this,CBgPainter *param_1);
void __thiscall MemberListCtrl::CSex::~CSex(CSex *this);
void __thiscall MemberListCtrl::CSex::~CSex(CSex *this,CSex *param_1);
void __thiscall MemberListCtrl::CLevel::~CLevel(CLevel *this);
void __thiscall MemberListCtrl::CLevel::~CLevel(CLevel *this,CLevel *param_1);
CRating * __thiscall MemberListCtrl::CRating::CRating(CRating *this);
void __thiscall CListColMetaData::~CListColMetaData(CListColMetaData *this);
CRating * __thiscall MemberListCtrl::CRating::CRating(CRating *this,CRating *param_1);
CRating * __thiscall MemberListCtrl::CRating::operator=(CRating *this,CRating *param_1);
CRating * __thiscall MemberListCtrl::CRating::vfunction1(CRating *this,byte param_1);
void __thiscall MemberListCtrl::CWinCnt::~CWinCnt(CWinCnt *this);
void __thiscall MemberListCtrl::CGameMoney::~CGameMoney(CGameMoney *this);
void __thiscall MemberListCtrl::CWinCnt::~CWinCnt(CWinCnt *this,CWinCnt *param_1);
undefined4 * __thiscall MemberListCtrl::CMemberId::scalar_deleting_destructor(CMemberId *this,byte param_1);
void __thiscall MemberListCtrl::CGameMoney::~CGameMoney(CGameMoney *this);
void __thiscall MemberListCtrl::CGameMoney::~CGameMoney(CGameMoney *this,CGameMoney *param_1);
CRuntimeClass * __thiscall CMemberListCtrl::CMemberListCtrl::GetRuntimeClass(CMemberListCtrl *this);
AFX_MSGMAP * __thiscall CMemberListCtrl::CMemberListCtrl::GetMessageMap(CMemberListCtrl *this);
CMemberListCtrl * __thiscall CMemberListCtrl::CMemberListCtrl(CMemberListCtrl *this,Type param_1);
void __thiscall CMemberListCtrl::~CMemberListCtrl(CMemberListCtrl *this);
int __thiscall CMemberListCtrl::AddMember(CMemberListCtrl *this,CMemberData *param_1);
int __thiscall CMemberListCtrl::UpdateMember(CMemberListCtrl *this,char *param_1);
int __thiscall CMemberListCtrl::UpdateMember(CMemberListCtrl *this,CMemberData *param_1);
int __thiscall CMemberListCtrl::DeleteMember(CMemberListCtrl *this,char *param_1);
int __thiscall CMemberListCtrl::GetIndex(CMemberListCtrl *this,char *param_1);
bool __thiscall CMemberListCtrl::CMemberListCtrl::DoListCtrlSetting(CMemberListCtrl *this);
int __thiscall CMemberListCtrl::OnCreate(CMemberListCtrl *this,tagCREATESTRUCTA *param_1);
void __thiscall CMemberListCtrl::OnTimer(CMemberListCtrl *this,uint param_1);
void __thiscall CMemberListCtrl::OnNMDblclk(CMemberListCtrl *this,tagNMHDR *param_1,long *param_2);
void __thiscall CMemberListCtrl::OnMouseMove(CMemberListCtrl *this);
long __thiscall CMemberListCtrl::OnMouseHover(CMemberListCtrl *this,uint param_1,long param_2);
long __thiscall CMemberListCtrl::OnMouseLeave(CMemberListCtrl *this,uint param_1,long param_2);
void __thiscall CListColMemberIdDraw::vfunction1(CListColMemberIdDraw *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,CListCtrl *param_4,int param_5);
void __thiscall CMemberListCtrl::vfunction1(CMemberListCtrl *this,byte param_1);
bool __thiscall MemberListCtrl::CMemberId::MemberListCtrl::CMemberId::GetColumnInfo(CMemberId *this,tagLVCOLUMNA *param_1);
ulong __thiscall MemberListCtrl::CMemberId::MemberListCtrl::CMemberId::GetItemText(CMemberId *this,ulong param_1);
int __thiscall MemberListCtrl::CMemberId::MemberListCtrl::CMemberId::CompareItem(CMemberId *this,ulong param_1,ulong param_2,bool param_3);
bool __thiscall MemberListCtrl::CRoomId::MemberListCtrl::CRoomId::GetColumnInfo(CRoomId *this,tagLVCOLUMNA *param_1);
void __thiscall MemberListCtrl::CRoomId::MemberListCtrl::CRoomId::GetItemText(CRoomId *this,ulong param_1);
int __thiscall MemberListCtrl::CRoomId::MemberListCtrl::CRoomId::CompareItem(CRoomId *this,ulong param_1,ulong param_2,bool param_3);
bool __thiscall MemberListCtrl::CSex::MemberListCtrl::CSex::GetColumnInfo(CSex *this,tagLVCOLUMNA *param_1);
ulong __thiscall MemberListCtrl::CSex::MemberListCtrl::CSex::GetItemText(CSex *this,ulong param_1);
int __thiscall MemberListCtrl::CSex::MemberListCtrl::CSex::CompareItem(CSex *this,ulong param_1,ulong param_2,bool param_3);
bool __thiscall MemberListCtrl::CLevel::MemberListCtrl::CLevel::GetColumnInfo(CLevel *this,tagLVCOLUMNA *param_1);
ulong __thiscall MemberListCtrl::CLevel::MemberListCtrl::CLevel::GetItemText(CLevel *this,ulong param_1);
int __thiscall MemberListCtrl::CLevel::MemberListCtrl::CLevel::CompareItem(CLevel *this,ulong param_1,ulong param_2,bool param_3);
bool __thiscall MemberListCtrl::CRating::MemberListCtrl::CRating::GetColumnInfo(CRating *this,tagLVCOLUMNA *param_1);
void __thiscall MemberListCtrl::CRating::MemberListCtrl::CRating::GetItemText(CRating *this,ulong param_1);
int __thiscall MemberListCtrl::CRating::MemberListCtrl::CRating::CompareItem(CRating *this,ulong param_1,ulong param_2,bool param_3);
bool __thiscall MemberListCtrl::CWinCnt::MemberListCtrl::CWinCnt::GetColumnInfo(CWinCnt *this,tagLVCOLUMNA *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall MemberListCtrl::CWinCnt::MemberListCtrl::CWinCnt::GetItemText(CWinCnt *this,ulong param_1);
int __thiscall MemberListCtrl::CWinCnt::MemberListCtrl::CWinCnt::CompareItem(CWinCnt *this,ulong param_1,ulong param_2,bool param_3);
bool __thiscall MemberListCtrl::CGameMoney::MemberListCtrl::CGameMoney::GetColumnInfo(CGameMoney *this,tagLVCOLUMNA *param_1);
void __thiscall MemberListCtrl::CGameMoney::MemberListCtrl::CGameMoney::GetItemText(CGameMoney *this,ulong param_1);
int __thiscall MemberListCtrl::CGameMoney::MemberListCtrl::CGameMoney::CompareItem(CGameMoney *this,ulong param_1,ulong param_2,bool param_3);
CMultiBmpButton * __thiscall CMultiBmpButton::scalar_deleting_destructor(CMultiBmpButton *this,byte param_1);
CMultiBmpButton * __thiscall CMultiBmpButton::CMultiBmpButton(CMultiBmpButton *this);
void __thiscall CMultiBmpButton::~CMultiBmpButton(CMultiBmpButton *this);
void __thiscall CMultiBmpButton::CMultiBmpButton::DrawItem(CMultiBmpButton *this,tagDRAWITEMSTRUCT *param_1);
void __thiscall CMultiBmpButton::CMultiBmpButton::PreSubclassWindow(CMultiBmpButton *this);
int __thiscall CMultiBmpButton::Create(CMultiBmpButton *this,ulong param_1,int param_2,CRect *param_3,CWnd *param_4,uint param_5);
int __thiscall CMultiBmpButton::Create(CMultiBmpButton *this,ulong param_1,char *param_2,int param_3,ulong param_4,int param_5,int param_6,int param_7,CWnd *param_8,uint param_9);
int __thiscall CMultiBmpButton::Create(CMultiBmpButton *this,ulong param_1,uint param_2,int param_3,ulong param_4,int param_5,int param_6,int param_7,CWnd *param_8,uint param_9);
int __thiscall CMultiBmpButton::Create(CMultiBmpButton *this,ulong param_1,CHgGDImage *param_2,int param_3,ulong param_4,int param_5,int param_6,int param_7,CWnd *param_8,uint param_9);
int __thiscall CMultiBmpButton::LoadBitmapA(CMultiBmpButton *this,char *param_1,int param_2,ulong param_3,int param_4);
int __thiscall CMultiBmpButton::LoadBitmapA(CMultiBmpButton *this,uint param_1,int param_2,ulong param_3,int param_4);
int __thiscall CMultiBmpButton::LoadBitmapA(CMultiBmpButton *this,CHgGDImage *param_1,int param_2,ulong param_3,int param_4);
void __thiscall CMultiBmpButton::CMultiBmpButton::UpdateControl(CMultiBmpButton *this,IParam *param_1);
void __thiscall CMultiBmpButton::CMultiBmpButton::UpdateControlForGame(CMultiBmpButton *this,IParam *param_1);
void __thiscall CMultiBmpButton::DeleteBitmap(CMultiBmpButton *this);
int __thiscall CMultiBmpButton::SetButtonState(CMultiBmpButton *this,int param_1,int param_2);
int __thiscall CMultiBmpButton::GetButtonState(CMultiBmpButton *this);
int * __thiscall CMultiBmpButton::GetButtonSize(CMultiBmpButton *this);
void __thiscall CMultiBmpButton::SetMessage(CMultiBmpButton *this,int param_1,int param_2);
void __thiscall CMultiBmpButton::SetAllMessage(CMultiBmpButton *this,int param_1);
AFX_MSGMAP * __thiscall CMultiBmpButton::CMultiBmpButton::GetMessageMap(CMultiBmpButton *this);
ulong __thiscall CEmoticon::CEmoticon::AddRef(CEmoticon *this);
void __thiscall CMultiBmpButton::OnLButtonUp(CMultiBmpButton *this,undefined4 param_1,LONG param_3,LONG param_4);
void __thiscall CMultiBmpButton::OnMouseMove(CMultiBmpButton *this,byte param_1,LONG param_3,LONG param_4);
int * FUN_6071ff90(int *param_1);
void __fastcall FUN_6071fff0(uint *param_1);
void FUN_607200b0(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
void __fastcall FUN_607202b0(uint param_1);
void __thiscall CMultiBmpButton::vfunction1(CMultiBmpButton *this,byte param_1);
CMyInfoCtrl * __thiscall CMyInfoCtrl::scalar_deleting_destructor(CMyInfoCtrl *this,byte param_1);
CRuntimeClass * __thiscall CMyInfoCtrl::CMyInfoCtrl::GetRuntimeClass(CMyInfoCtrl *this);
CMyInfoCtrl * __thiscall CMyInfoCtrl::CMyInfoCtrl(CMyInfoCtrl *this);
void __thiscall CMyInfoCtrl::~CMyInfoCtrl(CMyInfoCtrl *this);
AFX_MSGMAP * __thiscall CMyInfoCtrl::CMyInfoCtrl::GetMessageMap(CMyInfoCtrl *this);
int __thiscall CGuildInfoCtrl::Create(CGuildInfoCtrl *this,char *param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
int __thiscall CMyInfoCtrl::OnCreate(CMyInfoCtrl *this,tagCREATESTRUCTA *param_1);
int __thiscall CMyInfoCtrl::OnEraseBkgnd(CMyInfoCtrl *this,CDC *param_1);
void __thiscall CMyInfoCtrl::CMyInfoCtrl::UpdateControl(CMyInfoCtrl *this,IParam *param_1);
void __thiscall CMyInfoCtrl::OnTimer(CMyInfoCtrl *this,uint param_1);
void __thiscall CMyInfoCtrl::UpdateAvatar(CMyInfoCtrl *this,char *param_1);
void __thiscall CMyInfoCtrl::OnCommand_300(CMyInfoCtrl *this);
void __thiscall CMyInfoCtrl::OnCommand_306(CMyInfoCtrl *this);
void __thiscall CMyInfoCtrl::OnCommand_305(CMyInfoCtrl *this);
void __thiscall CMyInfoCtrl::OnLButtonDown(CMyInfoCtrl *this,undefined4 param_1,LONG param_3,LONG param_4);
void __thiscall CMyInfoCtrl::OnCommand_310(CMyInfoCtrl *this);
void __thiscall CMyInfoCtrl::UpdateInfo(CMyInfoCtrl *this);
void __thiscall CMyInfoCtrl::AddSPCRoomString(undefined4 param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> param_2);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __thiscall CMyInfoCtrl::GetSPCRoomString(CMyInfoCtrl *this);
void __thiscall CMyInfoCtrl::OnCommand_311(CMyInfoCtrl *this);
void FUN_607224a0(void);
void FUN_607224c0(void);
void FUN_60722540(void);
void FUN_60722590(int *param_1,CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_2,int param_3,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_4);
int * FUN_60722650(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_5);
void FUN_607226f0(void);
void FUN_60722740(void);
void FUN_60722760(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_2,undefined4 param_3,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_4);
void Catch_All@607228dc(void);
void Catch_All@607229a8(void);
int __fastcall FUN_60722a40(CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_1);
void __fastcall FUN_60722a80(undefined4 param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2,void *param_3,CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_4);
int __fastcall FUN_60722ab0(CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_1);
void __thiscall FUN_60722af0(void *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_2);
void Catch_All@60722b4c(void);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __thiscall FUN_60722b80(void *this,CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2);
void Catch_All@60722bdc(void);
void __thiscall CMyInfoCtrl::vfunction1(CMyInfoCtrl *this,byte param_1);
CNoticeWnd * __thiscall CNoticeWnd::scalar_deleting_destructor(CNoticeWnd *this,byte param_1);
CNoticeData * __thiscall CNoticeData::CNoticeData(CNoticeData *this,char *param_1,char *param_2,undefined4 param_3,undefined4 param_4);
undefined4 * __thiscall CNoticeData::scalar_deleting_destructor(CNoticeData *this,byte param_1);
CNoticeWnd * __thiscall CNoticeWnd::CNoticeWnd(CNoticeWnd *this);
void __thiscall CNoticeWnd::~CNoticeWnd(CNoticeWnd *this);
AFX_MSGMAP * __thiscall CNoticeWnd::CNoticeWnd::GetMessageMap(CNoticeWnd *this);
int __thiscall CNoticeWnd::CreateNoticeWnd(CNoticeWnd *this,uint param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
int __thiscall CNoticeWnd::SetBackGround(CNoticeWnd *this,char *param_1);
int __thiscall CNoticeWnd::SetBackColor(CNoticeWnd *this,ulong param_1);
void __thiscall CNoticeWnd::SetNoticeFont(CNoticeWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5,char *param_6);
void __thiscall CNoticeWnd::SetDefaultNoticeColor(CNoticeWnd *this,ulong param_1);
void __thiscall CNoticeWnd::Flip(CNoticeWnd *this,HDC__ *param_1);
int __thiscall CBrush::~CBrush(CBrush *this,char *param_1,int param_2,int param_3,int param_4,int param_5);
void __thiscall CNoticeWnd::StopScroll(CNoticeWnd *this);
void __thiscall CNoticeWnd::OnPaint(CNoticeWnd *this);
void __thiscall CNoticeWnd::DrawBack(CNoticeWnd *this,HDC__ *param_1);
int __thiscall CNoticeWnd::DrawScrollDirection(CNoticeWnd *this,CRect *param_1);
int __thiscall CNoticeWnd::DrawScrollCheck(CNoticeWnd *this,int param_1);
void __thiscall CNoticeWnd::DrawScroll(CNoticeWnd *this,HDC__ *param_1,int param_2);
void __thiscall CNoticeWnd::DrawScrollEndProcess(CNoticeWnd *this,HDC__ *param_1,HBITMAP__ *param_2,HBITMAP__ *param_3,HDC__ *param_4,HBITMAP__ *param_5,HBITMAP__ *param_6,HDC__ *param_7,HBITMAP__ *param_8,HBITMAP__ *param_9);
void __thiscall CNoticeWnd::DrawScrollScrolling(CNoticeWnd *this,int param_1);
void __thiscall CNoticeWnd::OnTimer(CNoticeWnd *this,uint param_1);
void __thiscall CNoticeWnd::OnDestroy(CNoticeWnd *this);
int __thiscall CBrush::~CBrush(CBrush *this,char *param_1,char *param_2,int param_3,int param_4,int param_5);
void __thiscall CNoticeWnd::DrawContinueScroll(CNoticeWnd *this,HDC__ *param_1,int param_2);
int __thiscall CNoticeWnd::_DrawScrollDirection(CNoticeWnd *this,CRect *param_1,CNoticeData *param_2);
int __thiscall CNoticeWnd::_DrawScrollCheck(CNoticeWnd *this,int param_1,CNoticeData *param_2);
int __thiscall CNoticeWnd::DrawScroll(CNoticeWnd *this,CNoticeData *param_1,HDC__ *param_2,int param_3);
void __thiscall CNoticeWnd::_DrawScrollScrolling(CNoticeWnd *this,CNoticeData *param_1,int param_2);
int __thiscall CNoticeWnd::SetProperty(CNoticeWnd *this,int param_1,int param_2,int param_3);
int __thiscall CNoticeWnd::IsPlay(CNoticeWnd *this);
void __thiscall CNoticeWnd::SetDefaultNotice(CNoticeWnd *this,char *param_1,int param_2);
void __thiscall CNoticeWnd::CNoticeWnd::UpdateControl(CNoticeWnd *this,IParam *param_1);
void __thiscall CNoticeWnd::CNoticeWnd::ManualUpdateControl(CNoticeWnd *this,ulong param_1,ulong param_2,ulong param_3);
ulong __thiscall CNoticeWnd::GetNoticeTextColor(CNoticeWnd *this,char *param_1);
void FUN_607248c0(void);
void FUN_607248e0(void);
undefined4 * FUN_60724910(undefined4 *param_1,int *param_2,int *param_3);
void FUN_60724990(void);
void __fastcall FUN_607249e0(int param_1);
void __thiscall CNoticeWnd::vfunction1(CNoticeWnd *this,byte param_1);
void __thiscall CRectDrawer::CRectDrawer(CRectDrawer *this);
void __thiscall CRectDrawer::CRectDrawer::UpdateControl(CRectDrawer *this,IParam *param_1);
void __thiscall CRectDrawer::GetRect(CRectDrawer *this,tagRECT *param_1);
void __thiscall CBrush::~CBrush(CBrush *this,CDC *param_1);
undefined4 * __thiscall CRoomCtrl_T1::scalar_deleting_destructor(CRoomCtrl_T1 *this,byte param_1);
CRoomCtrl_T1 * __thiscall CRoomCtrl_T1::CRoomCtrl_T1(CRoomCtrl_T1 *this,int param_1);
void __thiscall CRoomCtrl_T1::~CRoomCtrl_T1(CRoomCtrl_T1 *this);
bool __thiscall CRoomCtrl_T1::CRoomCtrl_T1::CreateRoom(CRoomCtrl_T1 *this,CWnd *param_1,uint param_2,CRect *param_3,CPoint *param_4,int param_5,SharedRoomRes *param_6,vector<int,std::allocator<int>_> *param_7);
void __thiscall CRoomCtrl_T1::CRoomCtrl_T1::UpdateRoomBtnState(CRoomCtrl_T1 *this);
int __thiscall CRoomCtrl_T1::CRoomCtrl_T1::DrawRoom(CRoomCtrl_T1 *this,HDC__ *param_1,CRect *param_2);
void __thiscall CRoomCtrl_T1::CRoomCtrl_T1::DrawAvatar(CRoomCtrl_T1 *this,CRoomData *param_1,HDC__ *param_2);
CRect * __thiscall CRoomCtrl_T1::GetRoomRect(CRoomCtrl_T1 *this);
void __thiscall CRoomCtrl_T1::CRoomCtrl_T1::DrawBackgroundImage(CRoomCtrl_T1 *this,CRoomData *param_1,HDC__ *param_2);
void __thiscall CRoomCtrl_T1::CRoomCtrl_T1::DrawTitle(CRoomCtrl_T1 *this,CRoomData *param_1,HDC__ *param_2);
void __thiscall CRoomCtrl_T1::CRoomCtrl_T1::DrawRoomState(CRoomCtrl_T1 *this,CRoomData *param_1,HDC__ *param_2);
void __thiscall CRoomCtrl_T1::CRoomCtrl_T1::DrawRoomOption(CRoomCtrl_T1 *this,CRoomData *param_1,HDC__ *param_2);
int __thiscall CRoomCtrl_T1::CRoomCtrl_T1::GetRoomImageIndex(CRoomCtrl_T1 *this,CRoomData *param_1);
void __thiscall CRoomCtrl_T1::CRoomCtrl_T1::SetRoomRect(CRoomCtrl_T1 *this,CRect *param_1);
char * __thiscall CRoomCtrl_T1::CRoomCtrl_T1::HitTest(CRoomCtrl_T1 *this,CPoint *param_1);
void FUN_60725880(void);
undefined4 * FUN_607258f0(undefined4 *param_1);
CRoomListCtrl_T1 * __thiscall CRoomListCtrl_T1::scalar_deleting_destructor(CRoomListCtrl_T1 *this,byte param_1);
undefined4 FUN_607259d0(void);
bool FUN_60725a40(int param_1,int param_2);
bool __thiscall CSortRoomOption::vfunction2(CSortRoomOption *this,int param_1,int param_2);
undefined4 * __thiscall CSortRoomOption::scalar_deleting_destructor(CSortRoomOption *this,byte param_1);
CRuntimeClass * __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::GetRuntimeClass(CRoomListCtrl_T1 *this);
AFX_MSGMAP * __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::GetMessageMap(CRoomListCtrl_T1 *this);
CRoomListCtrl_T1 * __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1(CRoomListCtrl_T1 *this);
void FUN_60725d70(void);
void __thiscall CControlBase::CControlBase(CControlBase *this);
bool __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::CreateControl(CRoomListCtrl_T1 *this,IParam *param_1);
bool __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::DestroyControl(CRoomListCtrl_T1 *this);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::UpdateControl(CRoomListCtrl_T1 *this,IParam *param_1);
CParam * __thiscall CParam::scalar_deleting_destructor(CParam *this,byte param_1);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::UpdateControlForGame(CRoomListCtrl_T1 *this,IParam *param_1);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::Initialize(CRoomListCtrl_T1 *this);
bool __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::AddRoom(CRoomListCtrl_T1 *this,int param_1);
bool __thiscall CRoomListCtrl_T1::UpdateRoom(CRoomListCtrl_T1 *this,int param_1,bool param_2);
CRoomCtrl_T1 * __thiscall CRoomListCtrl_T1::GetRoom(CRoomListCtrl_T1 *this,int param_1);
bool __thiscall CRoomListCtrl_T1::DeleteRoom(CRoomListCtrl_T1 *this,int param_1);
bool __thiscall CRoomListCtrl_T1::ClearRooms(CRoomListCtrl_T1 *this);
void __thiscall CRoomListCtrl_T1::DrawRooms(CRoomListCtrl_T1 *this,CRect *param_1);
void __thiscall CRoomListCtrl_T1::PrepareBackBuffer(CRoomListCtrl_T1 *this,int param_1,int param_2);
int __thiscall CRoomListCtrl_T1::OnCreate(CRoomListCtrl_T1 *this,tagCREATESTRUCTA *param_1);
void __thiscall CRoomListCtrl_T1::OnLButtonDown(CRoomListCtrl_T1 *this,undefined4 param_1,CPoint param_3);
void __thiscall CRoomListCtrl_T1::OnMouseMove(CRoomListCtrl_T1 *this,undefined4 param_1,CPoint param_3);
long __thiscall CRoomListCtrl_T1::OnMouseHover(CRoomListCtrl_T1 *this,uint param_1,long param_2);
long __thiscall CRoomListCtrl_T1::OnMouseLeave(CRoomListCtrl_T1 *this,uint param_1,long param_2);
int __thiscall CRoomListCtrl_T1::OnMouseWheel(CRoomListCtrl_T1 *this,undefined4 param_1,short param_2);
void __thiscall CRoomListCtrl_T1::OnVScroll(CRoomListCtrl_T1 *this,uint param_1,uint param_2,CScrollBar *param_3);
long __thiscall CRoomListCtrl_T1::OnTrackUpDown(CRoomListCtrl_T1 *this,uint param_1,long param_2);
void __thiscall CRoomListCtrl_T1::OnCommand_1000(CRoomListCtrl_T1 *this,uint param_1);
void __thiscall CRoomListCtrl_T1::OnCommand_2000(CRoomListCtrl_T1 *this,uint param_1);
void __thiscall CRoomListCtrl_T1::OnCommand_3000(CRoomListCtrl_T1 *this,uint param_1);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::OnDraw(CRoomListCtrl_T1 *this,CDC *param_1);
void __thiscall CRoomListCtrl_T1::OnPaint(CRoomListCtrl_T1 *this);
int __thiscall CRoomListCtrl_T1::OnMouseActivate(CRoomListCtrl_T1 *this,CWnd *param_1,uint param_2,uint param_3);
int __thiscall CRoomListCtrl_T1::GetRoomCount(CRoomListCtrl_T1 *this);
void __thiscall CRoomListCtrl_T1::SortRooms(CRoomListCtrl_T1 *this,SortType param_1,char *param_2);
void __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::CalculateRoomRect(CRoomListCtrl_T1 *this,int param_1,CRect *param_2);
void __thiscall CRoomListCtrl_T1::RecalcScrollSize(CRoomListCtrl_T1 *this);
char * __thiscall CRoomListCtrl_T1::HitTest(CRoomListCtrl_T1 *this,CPoint *param_1);
int __thiscall CRoomListCtrl_T1::CRoomListCtrl_T1::PreTranslateMessage(CRoomListCtrl_T1 *this,tagMSG *param_1);
void __thiscall CRoomListCtrl_T1::OnSize(CRoomListCtrl_T1 *this,uint param_1,int param_2,int param_3);
int * FUN_60728c30(int *param_1);
int * FUN_60728ca0(int *param_1);
int * FUN_60728d00(int *param_1,int *param_2);
int * FUN_60728e00(int *param_1,int *param_2);
void FUN_60728e90(void);
void __fastcall FUN_60728ee0(undefined4 *param_1);
void __fastcall FUN_60728f60(undefined4 *param_1);
void FUN_60728fd0(undefined4 *param_1,char param_2,undefined4 *param_3);
void FUN_607291c0(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
void FUN_60729280(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4);
void __thiscall std::length_error::length_error(length_error *this);
void FUN_60729380(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4);
void FUN_60729410(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void __thiscall std::length_error::length_error(length_error *this);
void __thiscall FUN_60729670(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void Catch_All@607297ca(void);
void Catch_All@607297d6(void);
void __thiscall FUN_607298d0(void *this,uint *param_1,undefined4 param_2,uint *param_3);
void Catch_All@60729a2a(void);
void Catch_All@60729a36(void);
undefined4 __fastcall FUN_60729b20(CMetpParserRet *param_1);
void Catch@60729bb7(void);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void __fastcall FUN_60729c30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
int __fastcall FUN_60729c60(int param_1,int param_2);
void __fastcall FUN_60729ca0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_60729cd0(exception *param_1);
void __cdecl FUN_60729cf0(int *param_1,int *param_2,int param_3,undefined4 param_4);
void __cdecl FUN_60729de0(int *param_1,int *param_2,int param_3,undefined4 param_4);
void __cdecl FUN_60729ed0(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4);
void __fastcall FUN_60729fc0(int param_1,undefined4 *param_2);
void __fastcall FUN_60729fe0(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_6072a000(undefined4 *param_1,int *param_2,int *param_3);
uint * __cdecl FUN_6072a1c0(uint *param_1,int *param_2,int *param_3);
void __cdecl FUN_6072a360(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_6072a5b0(undefined4 param_1,int param_2);
void FUN_6072a670(void);
void FUN_6072a6b0(void);
void __cdecl FUN_6072a700(int *param_1,int *param_2);
void __thiscall FUN_6072a7b0(void *this,int *param_1);
void FUN_6072a950(void);
void FUN_6072a990(void);
void __cdecl FUN_6072a9d0(int *param_1,int *param_2);
void __cdecl FUN_6072aa60(undefined4 param_1,int param_2,int *param_3);
void __cdecl FUN_6072ab10(int *param_1);
void __cdecl FUN_6072ab50(int *param_1);
void __cdecl FUN_6072aba0(undefined4 *param_1,undefined4 *param_2,int *param_3);
void FUN_6072ac60(void);
void __thiscall FUN_6072acc0(void *this,int param_1,int param_2);
void __fastcall FUN_6072ad30(int param_1,int param_2,int param_3);
void __cdecl FUN_6072adb0(int *param_1);
void __thiscall FUN_6072ae30(void *this,int param_1,undefined4 param_2,int *param_3);
void __fastcall FUN_6072aeb0(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_6072aed0(undefined4 *param_1,undefined4 *param_2);
void __cdecl FUN_6072aef0(int param_1,int param_2);
void __cdecl FUN_6072af40(int param_1,undefined4 param_2,int *param_3);
void __thiscall CRoomListCtrl_T1::vfunction1(CRoomListCtrl_T1 *this,byte param_1);
CScrollSupportCtrl * __thiscall CScrollSupportCtrl::scalar_deleting_destructor(CScrollSupportCtrl *this,byte param_1);
CRuntimeClass * __thiscall CScrollSupportCtrl::CScrollSupportCtrl::GetRuntimeClass(CScrollSupportCtrl *this);
CScrollSupportCtrl * __thiscall CScrollSupportCtrl::CScrollSupportCtrl(CScrollSupportCtrl *this);
void __thiscall CScrollSupportCtrl::~CScrollSupportCtrl(CScrollSupportCtrl *this);
AFX_MSGMAP * __thiscall CScrollSupportCtrl::CScrollSupportCtrl::GetMessageMap(CScrollSupportCtrl *this);
void __thiscall CScrollSupportCtrl::CScrollSupportCtrl::UpdateControl(CScrollSupportCtrl *this,IParam *param_1);
void __thiscall CScrollSupportCtrl::CScrollSupportCtrl::UpdateControlForGame(CScrollSupportCtrl *this,IParam *param_1);
int __thiscall CScrollSupportCtrl::Create(CScrollSupportCtrl *this,char *param_1,ulong param_2,CRect *param_3,CWnd *param_4,uint param_5);
void __thiscall CScrollSupportCtrl::SetSupportedWnd(CScrollSupportCtrl *this,CControlBase *param_1);
long __thiscall CScrollSupportCtrl::OnUpdateScrollbar(CScrollSupportCtrl *this,uint param_1,long param_2);
int __thiscall CScrollSupportCtrl::OnEraseBkgnd(CScrollSupportCtrl *this,CDC *param_1);
void __thiscall CScrollSupportCtrl::OnSize(CScrollSupportCtrl *this,uint param_1,int param_2,int param_3);
tagRECT * __thiscall CScrollSupportCtrl::GetSupportedWndRect(CScrollSupportCtrl *this);
tagRECT * __thiscall CScrollSupportCtrl::GetScrollVertRect(CScrollSupportCtrl *this);
void __thiscall CScrollSupportCtrl::SetWrapMode(CScrollSupportCtrl *this,bool param_1);
void __thiscall CScrollSupportCtrl::vfunction1(CScrollSupportCtrl *this,byte param_1);
ulong __thiscall CSimpleColorPicker::GetCurColor(CSimpleColorPicker *this);
void __thiscall CSimpleColorPicker::`default_constructor_closure'(CSimpleColorPicker *this);
CSimpleColorPicker * __thiscall CSimpleColorPicker::scalar_deleting_destructor(CSimpleColorPicker *this,byte param_1);
CSimpleColorPicker * __thiscall CSimpleColorPicker::CSimpleColorPicker(CSimpleColorPicker *this,ulong param_1);
void __thiscall CSimpleColorPicker::~CSimpleColorPicker(CSimpleColorPicker *this);
int __thiscall CSimpleColorPicker::CSimpleColorPicker::PreCreateWindow(CSimpleColorPicker *this,tagCREATESTRUCTA *param_1);
AFX_MSGMAP * __thiscall CSimpleColorPicker::CSimpleColorPicker::GetMessageMap(CSimpleColorPicker *this);
void __thiscall CSimpleColorPicker::OnLButtonUp(CSimpleColorPicker *this);
HBRUSH__ * __thiscall CSimpleColorPicker::CtlColor(CSimpleColorPicker *this,CDC *param_1,uint param_2);
long __thiscall CSimpleColorPicker::OnColorChange(CSimpleColorPicker *this,uint param_1,long param_2);
void __thiscall CCustomButton::CCustomButton::UpdateControl(CCustomButton *this,IParam *param_1);
void __thiscall CSimpleColorPicker::vfunction1(CSimpleColorPicker *this,byte param_1);
undefined ** __thiscall CSkinScrollbar::vfunction1(CSkinScrollbar *this);
void FUN_6072bb60(void);
CStatic * __thiscall CSkinScrollbar::scalar_deleting_destructor(CSkinScrollbar *this,byte param_1);
undefined ** __thiscall CSkinScrollbar::vfunction13(CSkinScrollbar *this);
int __thiscall FUN_6072bc40(void *this,tagRECT *param_1);
void FUN_6072bcd0(void);
void FUN_6072bda0(int param_1);
void FUN_6072bee0(void);
void FUN_6072bfc0(void);
void __thiscall OnLButtonDown(void *this,undefined4 param_1,LONG param_2,LONG param_3);
void __thiscall OnLButtonUp(void *this,undefined4 param_1,LONG param_2,LONG param_3);
void __thiscall OnMouseMove(void *this,undefined4 param_1,int param_2,int param_3);
void __fastcall OnPaint(CWnd *param_1);
void __thiscall FUN_6072c660(void *this,WPARAM param_1);
void __fastcall OnDestroy(CWnd *param_1);
void __thiscall CSkinScrollbar::vfunction6(CSkinScrollbar *this,IParam *param_1);
void __fastcall FUN_6072ca40(int param_1,int param_2);
void __thiscall CSkinScrollbar::vfunction1(CSkinScrollbar *this,byte param_1);
CTabButtons * __thiscall CTabButtons::CTabButtons(CTabButtons *this);
undefined4 * __thiscall CTabButtons::scalar_deleting_destructor(CTabButtons *this,byte param_1);
void __thiscall CTabButtons::~CTabButtons(CTabButtons *this);
int __thiscall FUN_6072cc70(void *this,char *param_1);
void FUN_6072cdc0(int param_1);
void __thiscall FUN_6072cee0(void *this,IParam *param_1);
undefined4 FUN_6072d100(LPRECT param_1);
undefined4 FUN_6072d1f0(void);
void __fastcall FUN_6072d270(void *param_1);
uint FUN_6072d3b0(void);
int FUN_6072d400(int param_1,int param_2);
void FUN_6072d4a0(int param_1);
void FUN_6072d630(void);
void FUN_6072d660(void);
undefined4 * __fastcall FUN_6072d670(undefined4 param_1,undefined4 *param_2);
void __thiscall CMFunctor<CTabButtons>::scalar_deleting_destructor(CMFunctor<CTabButtons> *this);
void __thiscall CMFunctor<CCustomTabCtrl>::vfunction3(CMFunctor<CCustomTabCtrl> *this,undefined4 *param_1);
CTextBox * __thiscall CTextBox::CTextBox(CTextBox *this,CTextBox *param_1);
CTextBox * __thiscall CTextBox::operator=(CTextBox *this,CTextBox *param_1);
CTextBox * __thiscall CTextBox::scalar_deleting_destructor(CTextBox *this,byte param_1);
CTextBox * __thiscall CTextBox::CTextBox(CTextBox *this);
void __thiscall CTextBox::~CTextBox(CTextBox *this);
void __thiscall CTextBox::CTextBox::UpdateControl(CTextBox *this,IParam *param_1);
void __thiscall CTextBox::CTextBox::UpdateControlForGame(CTextBox *this,IParam *param_1);
void __thiscall CTextBox::GetRect(CTextBox *this,tagRECT *param_1);
void __thiscall CTextBox::Draw(CTextBox *this,CDC *param_1);
void __thiscall CTextBox::SetRect(CTextBox *this,CRect *param_1);
void __thiscall CTextBox::SetText(CTextBox *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
void __thiscall CTextBox::SplitWords(CTextBox *this,CDC *param_1);
void FUN_6072dfa0(void);
void __fastcall FUN_6072dff0(int param_1);
int * __thiscall FUN_6072e000(void *this,int *param_1);
void Catch_All@6072e0ec(void);
void FUN_6072e100(void);
int FUN_6072e120(int param_1);
void FUN_6072e230(void);
void FUN_6072e2a0(void);
void FUN_6072e2f0(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
int * FUN_6072e3b0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
undefined4 FUN_6072e480(void);
void FUN_6072e4d0(void);
void FUN_6072e4f0(void);
undefined4 * FUN_6072e540(undefined4 *param_1);
void FUN_6072e570(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
void Catch_All@6072e6f7(void);
void Catch_All@6072e7aa(void);
void FUN_6072e830(void);
int FUN_6072e850(void);
void __fastcall FUN_6072e890(undefined4 param_1,undefined4 *param_2,void *param_3,undefined4 *param_4);
int __fastcall FUN_6072e8c0(int param_1);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void __fastcall FUN_6072e950(undefined4 *param_1,int param_2,undefined4 *param_3);
void Catch_All@6072e9c6(void);
void __cdecl FUN_6072ea00(undefined4 *param_1);
void __fastcall FUN_6072ea40(undefined4 *param_1);
undefined4 * __thiscall FUN_6072ea80(void *this,undefined4 *param_1,undefined4 *param_2);
void Catch_All@6072eaf0(void);
void __fastcall FUN_6072eb30(int param_1);
CDC * FUN_6072eb70(CDC *param_1);
void __thiscall CMemDC::~CMemDC(CMemDC *this);
CDC * __thiscall CMemDC::scalar_deleting_destructor(CMemDC *this,byte param_1);
void __thiscall CTextProgressCtrl::CTextProgressCtrl(CTextProgressCtrl *this);
CProgressCtrl * __thiscall CTextProgressCtrl::scalar_deleting_destructor(CTextProgressCtrl *this,byte param_1);
void __thiscall CTextProgressCtrl::~CTextProgressCtrl(CTextProgressCtrl *this);
undefined ** __thiscall CTextProgressCtrl::vfunction13(CTextProgressCtrl *this);
long __thiscall FUN_6072ee30(void *this,undefined4 param_1,char *param_2);
void __fastcall OnSize(CWnd *param_1);
void __thiscall CRgn::OnPaint(CRgn *this);
void __thiscall CMemDC::vfunction32(CMemDC *this,int param_1,int param_2,LPCSTR param_3,LPVOID param_4);
void __thiscall CMemDC::vfunction31(CMemDC *this,int param_1,GRAYSTRINGPROC param_2,LPARAM param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void __thiscall CMemDC::vfunction30(CMemDC *this,LPSTR param_1,int param_2,LPRECT param_3,UINT param_4,LPDRAWTEXTPARAMS param_5);
int * __thiscall CMemDC::vfunction28(CMemDC *this,int *param_1,int param_2,int param_3,LPCSTR param_4,int param_5,int param_6,INT *param_7,int param_8);
void __thiscall CMemDC::vfunction27(CMemDC *this,int param_1,int param_2,UINT param_3,RECT *param_4,LPCSTR param_5,UINT param_6,INT *param_7);
void __thiscall CMemDC::vfunction26(CMemDC *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __thiscall CMemDC::vfunction25(CMemDC *this,RECT *param_1);
void __thiscall CMemDC::vfunction24(CMemDC *this,int param_1,int param_2);
CWaitingMemberListCtrl * __thiscall CWaitingMemberListCtrl::scalar_deleting_destructor(CWaitingMemberListCtrl *this,byte param_1);
CRuntimeClass * __thiscall CWaitingMemberListCtrl::CWaitingMemberListCtrl::GetRuntimeClass(CWaitingMemberListCtrl *this);
AFX_MSGMAP * __thiscall CWaitingMemberListCtrl::CWaitingMemberListCtrl::GetMessageMap(CWaitingMemberListCtrl *this);
CWaitingMemberListCtrl * __thiscall CWaitingMemberListCtrl::CWaitingMemberListCtrl(CWaitingMemberListCtrl *this);
void __thiscall CWaitingMemberListCtrl::~CWaitingMemberListCtrl(CWaitingMemberListCtrl *this);
bool __thiscall CChannelListCtrl::CChannelListCtrl::DestroyControl(CChannelListCtrl *this);
bool __thiscall CWaitingMemberListCtrl::CWaitingMemberListCtrl::DoListCtrlSetting(CWaitingMemberListCtrl *this);
void __thiscall CWaitingMemberListCtrl::OnNMDblclk(CWaitingMemberListCtrl *this,tagNMHDR *param_1,long *param_2);
void __thiscall CWaitingMemberListCtrl::vfunction1(CWaitingMemberListCtrl *this,byte param_1);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __cdecl GetGateway(void);
undefined4 __cdecl FUN_6072f800(LPSTR param_1);
void __cdecl GetMACAddress(void);
void FUN_6072fc10(void);
uint FUN_6072fc80(char *param_1,int param_2);
void __fastcall FUN_6072fdd0(int *param_1);
void __thiscall FUN_6072ff90(void *this,int param_1);
void __thiscall FUN_60730040(void *this,undefined1 param_1);
void __cdecl FUN_60730180(char *param_1);
undefined4 FUN_607301c0(void);
undefined4 FUN_60730230(void);
uint FUN_607302c0(void);
void __cdecl FUN_60730390(undefined4 param_1);
void __cdecl FUN_60730460(undefined4 param_1);
void FUN_607304d0(void);
undefined4 FUN_607305b0(int *param_1);
undefined4 FUN_607306a0(void);
void __cdecl SetBipLogConfig(char *param_1,int param_2,char *param_3,char *param_4,char *param_5);
void __cdecl PostBipLog(int param_1);
void __cdecl FinalizePostingLog(void);
undefined4 * FUN_60730e00(void);
void FUN_60730e70(int *param_1,int *param_2);
void FUN_60730ef0(void);
void FUN_60730f30(void);
void FUN_60730f40(void);
void FUN_60730f60(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void FUN_60730fa0(void);
void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1);
void FUN_60731080(void);
int __cdecl PostScreenShotToWeb(char *param_1,char *param_2,char *param_3);
void FUN_60732650(void);
int __cdecl PostMissionSkinToWeb(char *param_1);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __thiscall FUN_60732f90(void *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,undefined4 *param_2);
int * FUN_60733010(int *param_1);
void FUN_60733080(void);
void FUN_607330b0(void);
undefined4 *FUN_607330f0(undefined4 param_1,undefined4 param_2,CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *param_3);
void Catch_All@60733171(void);
bool __cdecl PostToWebServer(char *param_1,char *param_2);
bool __cdecl UrlEncode(char *param_1,char *param_2,int param_3);
bool __cdecl UTF8Encode(char *param_1,char *param_2,int param_3);
void __fastcall FUN_607334a0(int param_1,int param_2,int *param_3);
void __cdecl FUN_607335b0(int param_1,int param_2,void *param_3);
void __cdecl FUN_60733630(undefined4 param_1,int param_2,int param_3);
bool __thiscall CBitmap::~CBitmap(CBitmap *this,tagRECT *param_1,char *param_2,int param_3);
undefined * Catch@60733f0e(void);
void __thiscall CFileException::~CFileException(CFileException *this);
bool __cdecl CaptureScreen(char *param_1);
void AfxTryCleanup(void);
void __thiscall CFileException::~CFileException(CFileException *this);
undefined4 * __thiscall CFileException::scalar_deleting_destructor(CFileException *this,byte param_1);
CException * __thiscall CFileException::~CFileException(CFileException *this);
uchar * __thiscall CHgImageBase::GetBits(CHgImageBase *this,int param_1);
int __thiscall CHgGradient::GetQuantization(CHgGradient *this);
int __thiscall CHgImageBase::GetPitch(CHgImageBase *this);
int __thiscall CHgImageBase::GetPitchWord(CHgImageBase *this);
void __thiscall CHgImageBase::SetClipArea(CHgImageBase *this,tagRECT *param_1);
tagRECT * __thiscall CHgImageBase::GetClipArea(CHgImageBase *this,tagRECT *__return_storage_ptr__);
bool __thiscall CHgImageBase::IsInClipArea(CHgImageBase *this,int param_1,int param_2);
bool __thiscall CHgImageBase::HasTransparentColor(CHgImageBase *this);
ulong __thiscall CHgImageBase::GetTransparentColor(CHgImageBase *this);
void __thiscall CHgImageBase::SetTileNum(CHgImageBase *this,int param_1);
int __thiscall CHgImageBase::GetTileNum(CHgImageBase *this);
CHgImageBase * __thiscall CHgImageBase::CHgImageBase(CHgImageBase *this,int param_1);
void __thiscall CHgImageBase::CHgImageBase::Destroy(CHgImageBase *this);
void __thiscall CHgImageBase::SetVHeads(CHgImageBase *this,void *param_1,int param_2);
void __thiscall CHgImageBase::SetTransparentColor(CHgImageBase *this,ulong param_1);
bool __thiscall CHgImageBase::GetTileRect(CHgImageBase *this,tagRECT *param_1,int param_2);
bool __thiscall CHgImageBase::CreateFrame(CHgImageBase *this,int param_1,int param_2);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,int param_1,int param_2,ulong param_3);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,char *param_1,ulong param_2);
bool __thiscall CHgImageBase::CHgImageBase::Create(CHgImageBase *this,char *param_1);
bool __thiscall CHgImageBase::__CreateFromBitmap(CHgImageBase *this,uchar *param_1,ulong param_2);
void __thiscall CHgImage::PutPixel(CHgImage *this,long param_1,long param_2,uchar *param_3,long param_4,int param_5);
void __thiscall CHgImage::PutPixel(CHgImage *this,long param_1,long param_2,ulong param_3,long param_4,int param_5);
void __thiscall CHgImage::PutPixelUnSafe(CHgImage *this,long param_1,long param_2,uchar *param_3);
CHgDDB * __thiscall CHgDDB::scalar_deleting_destructor(CHgDDB *this,byte param_1);
CHgDDB * __thiscall CHgDDB::CHgDDB(CHgDDB *this);
void __thiscall CHgDDB::~CHgDDB(CHgDDB *this);
bool __thiscall CHgDDB::CHgDDB::Create(CHgDDB *this,int param_1,int param_2);
CHgDIB * __thiscall CHgDIB::scalar_deleting_destructor(CHgDIB *this,byte param_1);
CHgDIB * __thiscall CHgDIB::CHgDIB(CHgDIB *this);
void __thiscall CHgDIB::~CHgDIB(CHgDIB *this);
void __thiscall CHgDIB16::CHgDIB16::Destroy(CHgDIB16 *this);
undefined4 * __thiscall CHgImage16::scalar_deleting_destructor(CHgImage16 *this,byte param_1);
CHgImage * __thiscall CHgImage::CHgImage(CHgImage *this);
int __thiscall CHgImage::GetPixel(CHgImage *this,long param_1,long param_2,ulong *param_3);
bool __thiscall CHgImage::CHgImage::__CreateFromBitmapWithColorTable(CHgImage *this,uchar *param_1,ulong param_2);
bool __thiscall CHgImage::CHgImage::__CreateFromBitmap16(CHgImage *this,uchar *param_1,ulong param_2);
bool __thiscall CHgImage::CHgImage::__CreateFromBitmap24(CHgImage *this,uchar *param_1,ulong param_2);
void __thiscall CHgImage::DrawRect(CHgImage *this,int param_1,int param_2,int param_3,int param_4,ulong param_5,int param_6,int param_7);
void __thiscall CHgImage::DrawLine(CHgImage *this,long param_1,long param_2,long param_3,long param_4,ulong param_5,long param_6,int param_7);
void __thiscall CHgImage::FloodFill(CHgImage *this,long param_1,long param_2,ulong param_3,long param_4,int param_5);
void __fastcall FUN_607356d0(undefined4 param_1);
bool __fastcall FUN_60735720(undefined1 *param_1);
void __thiscall CHgImage::Draw(CHgImage *this,int param_1,int param_2,CHgImageBase *param_3,int param_4,int param_5);
void __thiscall CHgImage::Draw(CHgImage *this,int param_1,int param_2,CHgImageBase *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
void __thiscall CHgImage::DrawTile(CHgImage *this,int param_1,int param_2,CHgImage *param_3,int param_4,int param_5,int param_6);
void __thiscall CHgImage::DrawUnSafe(CHgImage *this,int param_1,int param_2,CHgImageBase *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
void __thiscall CHgImage::DrawScale(CHgImage *this,long param_1,long param_2,CHgImageBase *param_3,long param_4,long param_5,long param_6,long param_7,float param_8,float param_9,long param_10,int param_11);
void __thiscall CHgImage::DrawScaleTile(CHgImage *this,long param_1,long param_2,CHgImage *param_3,int param_4,float param_5,float param_6,long param_7,int param_8);
void __thiscall CHgImage::DrawRotate(CHgImage *this,long param_1,long param_2,CHgImageBase *param_3,long param_4,long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,float param_11,long param_12,int param_13);
void __thiscall CHgImage::DrawRotateTile(CHgImage *this,long param_1,long param_2,CHgImage *param_3,int param_4,long param_5,long param_6,long param_7,float param_8,long param_9,int param_10);
bool __fastcall FUN_60755170(undefined1 *param_1);
void __fastcall FUN_607551b0(byte *param_1);
void __fastcall FUN_60755200(undefined4 param_1,byte *param_2);
void __fastcall FUN_60755250(undefined4 param_1,byte *param_2);
void FUN_607552c0(void);
void __fastcall FUN_60755300(int *param_1);
void __thiscall FUN_60755370(void *this,int *param_1);
void __fastcall FUN_60755410(int *param_1);
void __fastcall FUN_60755460(byte *param_1);
void __fastcall FUN_607554c0(int *param_1);
void __fastcall FUN_60755560(undefined4 param_1,byte *param_2);
void __fastcall FUN_607555d0(undefined4 param_1,byte *param_2);
void __fastcall FUN_60755660(undefined4 param_1,byte *param_2);
void __fastcall FUN_607556b0(undefined4 param_1,byte *param_2);
void __fastcall FUN_60755700(undefined4 param_1,byte *param_2);
void __fastcall FUN_60755780(byte *param_1,undefined1 *param_2);
void __fastcall FUN_607557d0(byte *param_1);
void __fastcall FUN_60755810(byte *param_1,undefined1 *param_2);
void __thiscall CHgImage::DrawHLine(CHgImage *this,long param_1,long param_2,long param_3,ulong param_4,long param_5,int param_6);
void __thiscall CHgImage::DrawVLine(CHgImage *this,long param_1,long param_2,long param_3,ulong param_4,long param_5,int param_6);
void __thiscall CHgImage::FillRect(CHgImage *this,int param_1,int param_2,int param_3,int param_4,ulong param_5,int param_6,int param_7);
int __fastcall FUN_60755cd0(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_60755d80(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6);
void __fastcall FUN_60755ea0(int param_1,int param_2,int param_3,int param_4,uint param_5);
void __fastcall FUN_60755f90(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,uint param_7);
void __cdecl FUN_607560c0(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6);
void __thiscall FUN_607561b0(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5);
void __thiscall FUN_607562e0(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void __thiscall FUN_60756450(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5);
void __thiscall FUN_60756570(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5);
void __thiscall FUN_607566a0(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5);
void __thiscall FUN_60756800(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5);
void __fastcall FUN_60756950(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,uint param_7);
void __thiscall FUN_60756aa0(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5);
void __thiscall FUN_60756bb0(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5);
void __thiscall FUN_60756cc0(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5);
void __fastcall FUN_60756e00(int param_1,int param_2,int param_3,int param_4,uint param_5);
void __cdecl FUN_60756f00(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6);
void __fastcall FUN_60757010(int param_1,int param_2,int param_3,int param_4,uint param_5);
void __thiscall CHgImage::PutPixelUnSafe(CHgImage *this,long param_1,long param_2,uchar *param_3,long param_4,int param_5);
void __thiscall CHgImage16::PutPixel(CHgImage16 *this,long param_1,long param_2,ushort *param_3,long param_4,int param_5);
void __thiscall CHgImage16::PutPixel(CHgImage16 *this,long param_1,long param_2,ulong param_3,long param_4,int param_5);
void __thiscall CHgImage16::PutPixelCopy(CHgImage16 *this,long param_1,long param_2,ushort param_3);
void __thiscall CHgImage16::PutPixelCopy(CHgImage16 *this,long param_1,long param_2,ulong param_3);
void __thiscall CHgImage16::PutPixelCopy_NRC(CHgImage16 *this,long param_1,long param_2,ushort param_3);
void __thiscall CHgImage16::PutPixelCopy_NRC(CHgImage16 *this,long param_1,long param_2,ulong param_3);
void __thiscall CHgImage16::PutPixelUnSafe(CHgImage16 *this,long param_1,long param_2,ushort *param_3);
void __thiscall CHgImage16::PutPixelUnSafe(CHgImage16 *this,long param_1,long param_2,ushort *param_3,long param_4,int param_5);
void __thiscall CHgImage16::PutPixelUnSafe(CHgImage16 *this,long param_1,long param_2,ulong param_3,long param_4,int param_5);
CHgDDB16 * __thiscall CHgDDB16::scalar_deleting_destructor(CHgDDB16 *this,byte param_1);
CHgDDB16 * __thiscall CHgDDB16::CHgDDB16(CHgDDB16 *this);
void __thiscall CHgDDB16::~CHgDDB16(CHgDDB16 *this);
void __thiscall CHgDDB16::CHgDDB16::Destroy(CHgDDB16 *this);
bool __thiscall CHgDDB16::CHgDDB16::Create(CHgDDB16 *this,int param_1,int param_2);
CHgDIB16 * __thiscall CHgDIB16::scalar_deleting_destructor(CHgDIB16 *this,byte param_1);
CHgDIB16 * __thiscall CHgDIB16::CHgDIB16(CHgDIB16 *this);
void __thiscall CHgDIB16::~CHgDIB16(CHgDIB16 *this);
bool __thiscall CHgDIB16::CHgDIB16::Create(CHgDIB16 *this,int param_1,int param_2);
CHgImage16 * __thiscall CHgImage16::CHgImage16(CHgImage16 *this);
void __thiscall CHgImage16::~CHgImage16(CHgImage16 *this);
bool __thiscall CHgImage16::GetPixel(CHgImage16 *this,long param_1,long param_2,ushort *param_3);
bool __thiscall CHgImage16::GetPixel(CHgImage16 *this,long param_1,long param_2,ulong *param_3);
bool __thiscall CHgImage16::CHgImage16::__CreateFromBitmapWithColorTable(CHgImage16 *this,uchar *param_1,ulong param_2);
bool __thiscall CHgImage16::CHgImage16::__CreateFromBitmap16(CHgImage16 *this,uchar *param_1,ulong param_2);
bool __thiscall CHgImage16::CHgImage16::__CreateFromBitmap24(CHgImage16 *this,uchar *param_1,ulong param_2);
void __thiscall CHgImage16::DrawRect(CHgImage16 *this,int param_1,int param_2,int param_3,int param_4,ulong param_5,int param_6,int param_7);
void __thiscall CHgImage16::DrawLine(CHgImage16 *this,long param_1,long param_2,long param_3,long param_4,ulong param_5,long param_6,int param_7);
void __thiscall CHgImage16::Draw(CHgImage16 *this,int param_1,int param_2,CHgImageBase *param_3,int param_4,int param_5);
void __thiscall CHgImage16::Draw(CHgImage16 *this,int param_1,int param_2,CHgImageBase *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
void __thiscall CHgImage16::DrawTile(CHgImage16 *this,int param_1,int param_2,CHgImage16 *param_3,int param_4,int param_5,int param_6);
void __thiscall CHgImage16::DrawUnSafe(CHgImage16 *this,int param_1,int param_2,CHgImageBase *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
void __thiscall CHgImage16::DrawScale(CHgImage16 *this,long param_1,long param_2,CHgImageBase *param_3,long param_4,long param_5,long param_6,long param_7,float param_8,float param_9,long param_10,int param_11);
void __thiscall CHgImage16::DrawScaleTile(CHgImage16 *this,long param_1,long param_2,CHgImage16 *param_3,int param_4,float param_5,float param_6,long param_7,int param_8);
void __thiscall CHgImage16::DrawRotate(CHgImage16 *this,long param_1,long param_2,CHgImageBase *param_3,long param_4,long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,float param_11,long param_12,int param_13);
void __thiscall CHgImage16::DrawRotateTile(CHgImage16 *this,long param_1,long param_2,CHgImage16 *param_3,int param_4,long param_5,long param_6,long param_7,float param_8,long param_9,int param_10);
void __cdecl FUN_60777ff0(int *param_1);
void FUN_60778050(void);
void __thiscall FUN_607780c0(void *this,ushort *param_1);
void __cdecl FUN_60778160(ushort *param_1);
void __thiscall FUN_607781d0(void *this,ushort *param_1);
void __cdecl FUN_60778260(int *param_1,ushort *param_2);
void __cdecl FUN_60778350(int *param_1);
void __cdecl FUN_60778400(int *param_1,ushort *param_2);
void __cdecl FUN_607784a0(int *param_1);
void __cdecl FUN_607785a0(int *param_1);
void __cdecl FUN_60778680(int *param_1);
void __cdecl FUN_60778780(int *param_1);
void __cdecl FUN_60778830(int *param_1);
void __cdecl FUN_607788e0(int *param_1);
void __fastcall FUN_607789d0(undefined4 param_1,uint *param_2,ushort *param_3);
void __cdecl FUN_60778a70(uint *param_1,ushort *param_2);
void __thiscall FUN_60778b00(void *this,ushort *param_1);
void __fastcall FUN_60778b60(uint param_1,int param_2);
void __fastcall FUN_60778b90(uint param_1,int param_2);
void __thiscall CHgImage16::DrawHLine(CHgImage16 *this,long param_1,long param_2,long param_3,ulong param_4,long param_5,int param_6);
void __thiscall CHgImage16::DrawVLine(CHgImage16 *this,long param_1,long param_2,long param_3,ulong param_4,long param_5,int param_6);
void __thiscall CHgImage16::FillRect(CHgImage16 *this,int param_1,int param_2,int param_3,int param_4,ulong param_5,int param_6,int param_7);
undefined2 * FUN_6077c0b0(void);
void __thiscall AbuseManagerAI::~AbuseManagerAI(AbuseManagerAI *this);
void FUN_6077c1e0(void);
void FUN_6077c3e0(void);
int __thiscall FUN_6077c4d0(void *this,char param_1,int param_2);
void __cdecl FUN_6077c610(char *param_1);
void __thiscall FUN_6077c6a0(void *this,int param_1);
void __thiscall AbuseManagerAI::vfunction2(AbuseManagerAI *this);
void __thiscall AbuseManagerAI::scalar_deleting_destructor(AbuseManagerAI *this);
int __cdecl CheckAbuseAndReplace(char *param_1,char param_2);
int __cdecl AbuseCheck(int *param_1,char *param_2,char param_3);
int __cdecl IsAbuseWord(char *param_1);
undefined4 ** FUN_6077ca10(void);
void FUN_6077ca80(void);
CAutoInitialize * __thiscall AbuseManagerAI::scalar_deleting_destructor(AbuseManagerAI *this,byte param_1);
void * __fastcall FUN_6077cab0(undefined4 param_1,void *param_2);
int __thiscall CAdWnd::HasGIF(CAdWnd *this);
CAdFileDownload * __thiscall CAdFileDownload::scalar_deleting_destructor(CAdFileDownload *this,byte param_1);
CAdWnd * __thiscall CAdWnd::CAdWnd(CAdWnd *this);
void __thiscall CAdFileDownload::~CAdFileDownload(CAdFileDownload *this);
int __thiscall CAdFileDownload::CreateWebBrowser(CAdFileDownload *this,CWnd *param_1,tagRECT *param_2,char *param_3);
void __thiscall CAdFileDownload::RefreshWebBrowser(CAdFileDownload *this,char *param_1);
int __thiscall CAdFileDownload::CreateAdFileDownloadThread(CAdFileDownload *this,CWnd *param_1,tagRECT *param_2,char *param_3,int param_4);
undefined4 Catch_All@6077cf57(void);
int __thiscall CAdFileDownload::AdFileDownloadThread(CAdFileDownload *this,HWND__ *param_1,char *param_2);
undefined4 __cdecl FUN_6077cfe0(DWORD *param_1);
int __thiscall CAdFileDownload::DownLoadGifFile_Check(CAdFileDownload *this,void *param_1,int *param_2,char *param_3,int param_4);
int __thiscall CAdFileDownload::DownLoadGifFile(CAdFileDownload *this);
void __thiscall CAdFileDownload::StopAdDisplay(CAdFileDownload *this);
CAdWnd * __thiscall CAdWnd::scalar_deleting_destructor(CAdWnd *this,byte param_1);
CAdWnd * __thiscall CAdWnd::CAdWnd(CAdWnd *this);
void __thiscall CAdWnd::~CAdWnd(CAdWnd *this);
AFX_MSGMAP * __thiscall CAdWnd::CAdWnd::GetMessageMap(CAdWnd *this);
int __thiscall CAdWnd::CreateGIFViewer(CAdWnd *this,CWnd *param_1,tagRECT *param_2);
void __thiscall CAdWnd::OnDestroy(CAdWnd *this);
int __thiscall CAdWnd::MakeAdAnimation(CAdWnd *this,char *param_1);
int __thiscall CAdWnd::MakeAdAnimation(CAdWnd *this,void *param_1,ulong param_2);
void __thiscall CAdWnd::AdStop(CAdWnd *this);
void __thiscall CAdWnd::AdStart(CAdWnd *this);
void __thiscall CAdWnd::OnPaint(CAdWnd *this);
void __thiscall CAdWnd::SetHrefUrl(CAdWnd *this,char *param_1);
void __thiscall CAdWnd::OnLButtonUp(CAdWnd *this);
void __thiscall CAdWnd::OnTimer(CAdWnd *this,uint param_1);
CAnimatedStatic * __thiscall CAnimatedStatic::scalar_deleting_destructor(CAnimatedStatic *this,byte param_1);
AFX_MSGMAP * __thiscall CAnimatedStatic::CAnimatedStatic::GetMessageMap(CAnimatedStatic *this);
CAnimatedStatic * __thiscall CAnimatedStatic::CAnimatedStatic(CAnimatedStatic *this);
void __thiscall CControlBase::CControlBase(CControlBase *this);
void __thiscall CAnimatedStatic::CAnimatedStatic::UpdateControl(CAnimatedStatic *this,IParam *param_1);
void __thiscall CAnimatedStatic::CAnimatedStatic::UpdateControlForGame(CAnimatedStatic *this,IParam *param_1);
int __thiscall CAnimatedStatic::Create(CAnimatedStatic *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
void __thiscall CAnimatedStatic::OnPaint(CAnimatedStatic *this);
void __thiscall CAnimatedStatic::StartAnimationTimer(CAnimatedStatic *this,uint param_1);
void __thiscall CAnimatedStatic::StopAnimationTimer(CAnimatedStatic *this);
void __thiscall CAnimatedStatic::OnTimer(CAnimatedStatic *this,uint param_1);
void __thiscall CAnimatedStatic::OnLButtonDown(CAnimatedStatic *this);
void __thiscall CAnimatedStatic::vfunction1(CAnimatedStatic *this,byte param_1);
int FUN_6077e230(void);
CLogFontExMap * __thiscall CLogFontExMap::CLogFontExMap(CLogFontExMap *this);
void __thiscall CLogFontExMap::~CLogFontExMap(CLogFontExMap *this);
LOGFONTEX * __thiscall CLogFontExMap::CreateLogfontEx(CLogFontExMap *this,tagLOGFONTA *param_1);
CFontList * __cdecl FontList(void);
void __thiscall CFontList::~CFontList(CFontList *this);
bool __thiscall CFontList::Add(CFontList *this,char *param_1,IParam *param_2,bool param_3);
bool __thiscall CFontList::Add(CFontList *this,char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,ulong param_8,bool param_9);
void __thiscall CFontList::Clear(CFontList *this);
FontData * __thiscall CFontList::Find(CFontList *this,char *param_1);
bool __thiscall CFontList::Remove(CFontList *this,char *param_1);
void __thiscall CFontId::CFontId(CFontId *this);
void __thiscall CFontId::Set(CFontId *this,char *param_1);
CFontChanger * __thiscall CFontChanger::CFontChanger(CFontChanger *this,char *param_1,HDC__ *param_2);
CFontChanger * __thiscall CFontChanger::CFontChanger(CFontChanger *this,FontData *param_2,HDC__ *param_3);
void __thiscall CFontChanger::ApplyFont(CFontChanger *this,FontData *param_1,HDC__ *param_2);
void __thiscall CFontChanger::~CFontChanger(CFontChanger *this);
CFont * __thiscall CFont::CFont(CFont *this,char *param_1);
void __thiscall CFontEx::~CFontEx(CFontEx *this);
ulong __thiscall CFontEx::GetTextColor(CFontEx *this);
CFont * __thiscall CFontEx::GetCFont(CFontEx *this);
undefined4 * FUN_6077ecd0(int *param_1,undefined4 *param_2);
int * FUN_6077ed80(int *param_1);
int * FUN_6077ee00(int *param_1);
undefined4 * FUN_6077ee80(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4);
void FUN_6077f0b0(int *param_1);
void FUN_6077f1e0(undefined4 *param_1,char param_2,undefined4 *param_3);
undefined4 * FUN_6077f3d0(void);
void FUN_6077f410(void);
void FUN_6077f4a0(void);
void __thiscall CImgChatOutWnd::setControlDiff(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::setDefaultTextColor(CImgChatOutWnd *this,ulong param_1);
ulong __thiscall CImgChatOutWnd::getBackColor(CImgChatOutWnd *this);
int __thiscall CImgChatOutWnd::getHead(CImgChatOutWnd *this);
uint __thiscall CImgChatOutWnd::getMaxLines(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::setMaxLines(CImgChatOutWnd *this,int param_1);
HBITMAP__ * __thiscall CHgDIB16::GetHBitmap(CHgDIB16 *this);
int __thiscall CImgChatOutWnd::getLine(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::setExtraFontHeight(CImgChatOutWnd *this,uint param_1);
void __thiscall CImgChatOutWnd::updateBackground(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::useVerticalScrollBar(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::setScrollOffTile(CImgChatOutWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __thiscall CImgChatOutWnd::setScrollOnTile(CImgChatOutWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
HFONT__ * __thiscall CImgChatEdit::getFont(CImgChatEdit *this);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __thiscall CImgChatEdit::getRecentString(CImgChatEdit *this);
void __thiscall CImgChatEdit::updateBackground(CImgChatEdit *this,int param_1);
CImgChatEdit * __thiscall CImgChatEdit::scalar_deleting_destructor(CImgChatEdit *this,byte param_1);
void __thiscall CImgChatWnd::setBkImage(CImgChatWnd *this,CHgDIB *param_1);
CImgChatOutWnd * __thiscall CImgChatWnd::getOutputWindow(CImgChatWnd *this);
CImgChatEdit * __thiscall CImgChatWnd::getEditWindow(CImgChatWnd *this);
ulong __thiscall CImgChatWnd::getOutTextColor(CImgChatWnd *this);
void __thiscall CImgChatWnd::attachMsg(CImgChatWnd *this,_func_int_CImgChatEdit_ptr_tagMSG_ptr *param_1);
CRuntimeClass * CCustomEdit::_GetBaseClass(void);
CRuntimeClass * __thiscall CImgChatEdit::CImgChatEdit::GetRuntimeClass(CImgChatEdit *this);
CImgChatEdit * __thiscall CImgChatEdit::CImgChatEdit(CImgChatEdit *this);
void __thiscall CImgChatEdit::~CImgChatEdit(CImgChatEdit *this);
void __thiscall CImgChatEdit::addText(CImgChatEdit *this,char *param_1);
int __thiscall CImgChatEdit::getMinHeight(CImgChatEdit *this);
void __thiscall CImgChatEdit::setFont(CImgChatEdit *this,char *param_1,int param_2,int param_3);
void __thiscall CImgChatEdit::setTagetWindow(CImgChatEdit *this,CWnd *param_1);
void __thiscall CCustomStatic::SetTextAlign(CCustomStatic *this,int param_1);
void __thiscall CImgChatEdit::setTextColor(CImgChatEdit *this,ulong param_1);
void __thiscall CImgChatEdit::setBackColor(CImgChatEdit *this,ulong param_1);
void __thiscall CImgChatEdit::updateBackground(CImgChatEdit *this);
void __thiscall CImgChatEdit::setBackgroundImage(CImgChatEdit *this,HDC__ *param_1,CHgDIB *param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
AFX_MSGMAP * __thiscall CImgChatEdit::CImgChatEdit::GetMessageMap(CImgChatEdit *this);
HBRUSH__ * __thiscall CImgChatEdit::CtlColor(CImgChatEdit *this,CDC *param_1,uint param_2);
int __thiscall CImgChatEdit::CImgChatEdit::PreTranslateMessage(CImgChatEdit *this,tagMSG *param_1);
undefined * Catch_All@6077ff73(void);
int __thiscall CImgChatEdit::OnCreate(CImgChatEdit *this,tagCREATESTRUCTA *param_1);
int __thiscall CImgChatEdit::CheckValidPressEnter(CImgChatEdit *this,char *param_1);
int __thiscall CImgChatEdit::CheckAndListUp(CImgChatEdit *this,char *param_1);
HBRUSH__ * __thiscall CImgChatEdit::getBkGndBrush(CImgChatEdit *this);
int __thiscall CImgChatEdit::setBkGndBrush(CImgChatEdit *this,HBRUSH__ *param_1);
CImgChatOutWnd * __thiscall CImgChatOutWnd::scalar_deleting_destructor(CImgChatOutWnd *this,byte param_1);
CHgDDB * __thiscall CHgDDB::CHgDDB(CHgDDB *this);
void __thiscall CImgChatOutWnd::~CImgChatOutWnd(CImgChatOutWnd *this);
int __thiscall CImgChatOutWnd::create(CImgChatOutWnd *this,tagRECT param_2,ulong param_3,CWnd *param_4,uint param_5,CImgChatOutWnd_vftable *param_6);
int __thiscall CImgChatOutWnd::setTopLine(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::saveStringFormat(CImgChatOutWnd *this,char *param_1,char *param_2,int *param_3,int *param_4,int *param_5);
int __thiscall CImgChatOutWnd::getStringFormat(CImgChatOutWnd *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,int *param_2,int *param_3,int *param_4);
void __thiscall CImgChatOutWnd::calcStringRect(CImgChatOutWnd *this,HDC__ *param_1,char *param_2,int param_3,tagRECT *param_4,int param_5,ulong param_6,ulong param_7);
void __thiscall CImgChatOutWnd::putString(CImgChatOutWnd *this,HDC__ *param_1,char *param_2,int param_3,tagRECT *param_4,int param_5,ulong param_6,ulong param_7);
int __thiscall CImgChatOutWnd::renderSingleLine(CImgChatOutWnd *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,HDC__ *param_2,int param_3,int param_4);
void __thiscall CImgChatOutWnd::setBuffer(CImgChatOutWnd *this,CStringArray *param_1);
int __thiscall CImgChatOutWnd::getBuffer(CImgChatOutWnd *this,CStringArray *param_1);
void __thiscall CImgChatOutWnd::clearBuffer(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::updateBackground(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::addLine(CImgChatOutWnd *this,char *param_1,ulong param_2,int param_3,ulong param_4,int param_5);
void __thiscall CImgChatOutWnd::addLine(CImgChatOutWnd *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,int param_2);
void __thiscall CImgChatOutWnd::setFont(CImgChatOutWnd *this,tagLOGFONTA *param_1);
void __thiscall CImgChatOutWnd::setFont(CImgChatOutWnd *this,char *param_1,int param_2);
int __thiscall CImgChatOutWnd::getFont(CImgChatOutWnd *this,tagLOGFONTA *param_1);
void __thiscall CImgChatOutWnd::setBackColor(CImgChatOutWnd *this,ulong param_1);
void __thiscall CImgChatOutWnd::setHead(CImgChatOutWnd *this,int param_1);
uint __thiscall CImgChatOutWnd::getMaxViewableLines(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::setWordWrap(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::load(CImgChatOutWnd *this,char *param_1);
void __thiscall CImgChatOutWnd::setBackgroundImage(CImgChatOutWnd *this,HDC__ *param_1,CHgDIB *param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void __thiscall CImgChatOutWnd::OnSelfDraw(CImgChatOutWnd *this,CDC *param_1);
AFX_MSGMAP * __thiscall CImgChatOutWnd::CImgChatOutWnd::GetMessageMap(CImgChatOutWnd *this);
int __thiscall CImgChatOutWnd::OnCreate(CImgChatOutWnd *this,tagCREATESTRUCTA *param_1);
void __thiscall CImgChatOutWnd::OnDestroy(CImgChatOutWnd *this);
int __thiscall CImgChatOutWnd::OnEraseBkgnd(CImgChatOutWnd *this,CDC *param_1);
void __thiscall CImgChatOutWnd::OnVScroll_SB_BOTTOM(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::OnVScroll_SB_PAGEUP(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::OnVScroll_SB_LINEUP(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::OnVScroll_SB_PAGEDOWN(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::OnVScroll_SB_LINEDOWN(CImgChatOutWnd *this,int param_1);
void __thiscall CImgChatOutWnd::OnVScroll(CImgChatOutWnd *this,uint param_1,uint param_2,CScrollBar *param_3);
void __thiscall CImgChatOutWnd::OnHScroll(CImgChatOutWnd *this,uint param_1,uint param_2,CScrollBar *param_3);
void __thiscall CImgChatWnd::OnMouseMove(CImgChatWnd *this);
void __thiscall CImgChatOutWnd::OnPaint(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::OnLButtonDown(CImgChatOutWnd *this,undefined4 param_1,LONG param_3,int param_4);
int __thiscall CImgChatOutWnd::setScrollInfo(CImgChatOutWnd *this,char *param_1,int param_2,ulong param_3);
void __thiscall CImgChatOutWnd::drawScroll(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::drawNoUpDownScroll(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::OnTimer(CImgChatOutWnd *this,uint param_1);
void __thiscall CImgChatOutWnd::OnLButtonUp(CImgChatOutWnd *this);
void __thiscall CImgChatOutWnd::OnMouseMove(CImgChatOutWnd *this,int param_1,LONG param_3,int param_4);
int __thiscall CImgChatOutWnd::getLineInfo(CImgChatOutWnd *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,HDC__ *param_2,int param_3);
CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> * __cdecl FUN_607836f0(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2);
CImgChatWnd * __thiscall CImgChatWnd::scalar_deleting_destructor(CImgChatWnd *this,byte param_1);
CRuntimeClass * CGuildInfoCtrl::_GetBaseClass(void);
CRuntimeClass * __thiscall CImgChatWnd::CImgChatWnd::GetRuntimeClass(CImgChatWnd *this);
CImgChatWnd * __thiscall CImgChatWnd::CImgChatWnd(CImgChatWnd *this,uint param_1);
CImgChatWnd * __thiscall CImgChatWnd::CImgChatWnd(CImgChatWnd *this);
void __thiscall CImgChatWnd::~CImgChatWnd(CImgChatWnd *this);
void __thiscall CHeaderCtrlEx::SetTextColor(CHeaderCtrlEx *this,ulong param_1);
CWnd * __thiscall CImgChatWnd::setFocus(CImgChatWnd *this);
int __thiscall CHgImageBase::~CHgImageBase(CHgImageBase *this,char *param_1,CPoint *param_2);
int __thiscall CImgChatWnd::setBackgroundImage(CImgChatWnd *this,CHgDDB *param_1,CPoint *param_2);
int __thiscall CImgChatWnd::setBackgroundColor(CImgChatWnd *this,ulong param_1,ulong param_2,ulong param_3);
int __thiscall CImgChatWnd::setScrollUpDownButton(CImgChatWnd *this,int param_1);
void __thiscall CImgChatWnd::CImgChatWnd::setNewPosition(CImgChatWnd *this,CWnd *param_1,CRect *param_2,int param_3);
void __thiscall CImgChatWnd::CImgChatWnd::setRect(CImgChatWnd *this,CRect *param_1);
void __thiscall CImgChatWnd::CImgChatWnd::setMovingRect(CImgChatWnd *this,CRect *param_1);
void __thiscall CImgChatWnd::CImgChatWnd::sendNewMessage(CImgChatWnd *this,char *param_1);
void __thiscall CImgChatWnd::CImgChatWnd::sendEscMessage(CImgChatWnd *this);
void __thiscall CImgChatWnd::setEditTextColor(CImgChatWnd *this,ulong param_1);
void __thiscall CImgChatWnd::setEditBackColor(CImgChatWnd *this,ulong param_1);
AFX_MSGMAP * __thiscall CImgChatWnd::CImgChatWnd::GetMessageMap(CImgChatWnd *this);
int __thiscall CImgChatWnd::create(CImgChatWnd *this,int param_1,CRect *param_2,CWnd *param_3,int param_4,uint param_5);
int __thiscall CImgChatWnd::OnCreate(CImgChatWnd *this,tagCREATESTRUCTA *param_1);
int __thiscall CImgChatWnd::OnEraseBkgnd(CImgChatWnd *this,CDC *param_1);
void __thiscall CImgChatWnd::OnMoving(CImgChatWnd *this,uint param_1,tagRECT *param_2);
void __thiscall CImgChatWnd::OnPaint(CImgChatWnd *this);
void __thiscall CImgChatWnd::onDraw(CImgChatWnd *this,CDC *param_1);
void __thiscall CImgChatWnd::draw(CImgChatWnd *this,CHgDIB *param_1);
void __thiscall CImgChatWnd::addLine(CImgChatWnd *this,char *param_1,int param_2);
void __thiscall CImgChatWnd::addLine(CImgChatWnd *this,char *param_1,ulong param_2,int param_3,ulong param_4,int param_5);
void __thiscall CImgChatWnd::clearBuffer(CImgChatWnd *this);
void __thiscall CImgChatWnd::setMaxLineBuffer(CImgChatWnd *this,int param_1);
int __thiscall CImgChatWnd::setScrollInfo(CImgChatWnd *this,char *param_1,int param_2,ulong param_3);
void __thiscall CImgChatWnd::setScrollOffTile(CImgChatWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __thiscall CImgChatWnd::setScrollOnTile(CImgChatWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __thiscall CImgChatWnd::setEditFont(CImgChatWnd *this,char *param_1,int param_2,int param_3);
void __thiscall CImgChatWnd::setOutFont(CImgChatWnd *this,char *param_1,int param_2,int param_3);
int __thiscall CImgChatWnd::setTopLine(CImgChatWnd *this);
void __thiscall CImgChatWnd::setOutTextColor(CImgChatWnd *this,ulong param_1);
void __thiscall CImgChatWnd::OnLButtonUp(CImgChatWnd *this,undefined4 param_1,LONG param_2,LONG param_3);
void __thiscall CImgChatWnd::OnSysCommand(CImgChatWnd *this,uint param_1,long param_2);
CMidiPlay * __thiscall CMidiPlay::CMidiPlay(CMidiPlay *this,CMidiPlay *param_1);
CMidiPlay * __thiscall CMidiPlay::operator=(CMidiPlay *this,CMidiPlay *param_1);
CMidiPlay * __thiscall CMidiPlay::scalar_deleting_destructor(CMidiPlay *this,byte param_1);
CMidiPlay * __thiscall CMidiPlay::CMidiPlay(CMidiPlay *this,HWND__ *param_1);
void __thiscall CMidiPlay::~CMidiPlay(CMidiPlay *this);
int __thiscall CMidiPlay::Open(CMidiPlay *this,char *param_1);
int __thiscall CMidiPlay::Play(CMidiPlay *this);
int __thiscall CMidiPlay::Pause(CMidiPlay *this);
int __thiscall CMidiPlay::Resume(CMidiPlay *this);
int __thiscall CMidiPlay::Stop(CMidiPlay *this);
int __thiscall CMidiPlay::Replay(CMidiPlay *this);
int __thiscall CMidiPlay::IsEnd(CMidiPlay *this);
int __thiscall CMidiPlay::Close(CMidiPlay *this);
undefined ** __thiscall CTabCtrlContents::vfunction1(CTabCtrlContents *this);
undefined ** __thiscall CTabCtrlContents::vfunction13(CTabCtrlContents *this);
CWnd * FUN_60785460(CWnd *param_1);
CWnd * __thiscall CTabCtrlContents::scalar_deleting_destructor(CTabCtrlContents *this,byte param_1);
void __thiscall CTabCtrlContents::~CTabCtrlContents(CTabCtrlContents *this);
void __thiscall CTabCtrlContents::vfunction6(CTabCtrlContents *this,IParam *param_1);
void __thiscall CTabCtrlContents::vfunction1(CTabCtrlContents *this,byte param_1);
CThreadQueue<IFunctor*> * __thiscall CThreadQueue<IFunctor*>::CThreadQueue<IFunctor*>(CThreadQueue<IFunctor*> *this,CThreadManager *param_1);
CThreadManager * __thiscall CThreadManager::operator=(CThreadManager *this,CThreadManager *param_1);
CThreadManager * __thiscall CThreadManager::scalar_deleting_destructor(CThreadManager *this,byte param_1);
undefined4 * __thiscall CThreadQueue<IFunctor*>::scalar_deleting_destructor(CThreadQueue<IFunctor*> *this,byte param_1);
CThreadManager * __cdecl CThreadManager::GetInstance(void);
CThreadQueue<IFunctor*> * __thiscall CThreadQueue<IFunctor*>::CThreadQueue<IFunctor*>(CThreadQueue<IFunctor*> *this);
void __thiscall CThreadManager::~CThreadManager(CThreadManager *this);
void __thiscall CThreadManager::LoaderThread_Entry(CThreadManager *this);
void __thiscall CThreadManager::AddTask(CThreadManager *this,IFunctor *param_1);
bool __thiscall CThreadManager::BeginLoading(CThreadManager *this);
undefined1 FUN_60785b10(undefined4 *param_1);
int * __thiscall FUN_60785bb0(void *this,int *param_1);
void Catch_All@60785c71(void);
void FUN_60785c90(int *param_1);
void FUN_60785e40(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5);
void FUN_60786030(void);
void FUN_60786090(int param_1);
void FUN_607860e0(void);
void FUN_60786120(undefined4 *param_1);
void __fastcall FUN_607861a0(int param_1);
void FUN_607861c0(void);
void __thiscall std::length_error::length_error(length_error *this);
void FUN_607863a0(int *param_1,int param_2,int param_3,int *param_4,uint param_5,int *param_6,uint param_7);
void FUN_607863e0(void);
void FUN_60786440(void);
void FUN_607864b0(void);
void FUN_60786510(int *param_1,undefined4 param_2,int param_3,int param_4,int *param_5,uint param_6,int *param_7,uint param_8);
void Catch_All@607865f8(void);
void Catch_All@6078669a(void);
undefined4 * __cdecl FUN_60786700(undefined4 *param_1);
void FUN_607867c0(void);
undefined4 * __cdecl FUN_60786830(undefined4 *param_1);
void FUN_607868f0(undefined4 *param_1);
void FUN_60786970(int param_1,int param_2);
int * __thiscall FUN_60786a90(void *this,int *param_1);
void __cdecl FUN_60786af0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6);
void __cdecl FUN_60786b40(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6);
void __cdecl FUN_60786b90(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6);
int FUN_60786be0(void);
void __fastcall FUN_60786c70(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5);
void GdipFree(void);
void GdipAlloc(void);
void GdipDisposeImage(void);
void GdipCloneImage(void);
void GdipGetImageWidth(void);
void GdipGetImageHeight(void);
void GdipCreateBitmapFromFile(void);
void GdipBitmapLockBits(void);
void GdipBitmapUnlockBits(void);
HIMC ImmGetContext(HWND param_1);
uint thunk_FUN_608392db(HIMC param_1,DWORD param_2,LPSTR param_3,uint param_4);
void GetAdaptersInfo(void);
void FUN_60786ce0(int *param_1);
void __cdecl FUN_60786e70(undefined4 *param_1);
void __cdecl FUN_60786ec0(int *param_1,int param_2,int param_3);
void __cdecl thunk_FUN_60788470(int param_1);
void FUN_60786fd0(void);
int __cdecl FUN_607871a0(int *param_1);
undefined4 __cdecl FUN_60787270(int *param_1);
int __cdecl FUN_60787340(int *param_1,char param_2);
undefined4 __cdecl FUN_607873d0(int *param_1);
void __cdecl FUN_60787450(int *param_1,int param_2);
void __cdecl FUN_60787490(int param_1,undefined4 param_2);
undefined4 FUN_60787500(void);
int __cdecl FUN_607875d0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __cdecl FUN_60787670(int *param_1);
void __cdecl FUN_60787750(int *param_1,int param_2,int param_3);
void __cdecl FUN_60787820(int param_1,undefined1 param_2);
void __cdecl FUN_60787890(int *param_1);
void __cdecl FUN_60787a30(int *param_1);
void __cdecl FUN_60787aa0(int param_1,undefined4 param_2);
void __cdecl FUN_60787ae0(int *param_1,int param_2,int param_3,int param_4,char param_5);
void __cdecl FUN_60787cb0(int *param_1,int param_2,char param_3);
int __cdecl FUN_60787cf0(int param_1);
void __cdecl FUN_60787d30(int *param_1,int param_2,char param_3);
void __cdecl FUN_60787d60(int *param_1,void *param_2);
void FUN_60787e10(void);
void __cdecl FUN_60787e70(int *param_1,int param_2);
void __cdecl FUN_60788160(int *param_1);
void __cdecl FUN_607881e0(int *param_1);
void __cdecl FUN_607882e0(int *param_1,char param_2);
void __cdecl FUN_60788360(int *param_1,undefined4 param_2,uint param_3);
void __cdecl FUN_60788430(int param_1);
void __cdecl FUN_60788470(int param_1);
void __cdecl FUN_607884a0(int param_1);
void __cdecl FUN_607884c0(int param_1);
void FUN_607884e0(void);
uint FUN_607886e0(void);
void FUN_60788890(void);
void __cdecl FUN_60788940(int param_1);
int __cdecl FUN_60788980(int *param_1);
void __cdecl FUN_60788a40(int *param_1);
void __cdecl FUN_60788aa0(int param_1);
undefined4 FUN_60788af0(void);
uint __fastcall FUN_60788ba0(undefined1 param_1);
uint FUN_60788ed0(void);
void __cdecl FUN_607891f0(int *param_1);
uint FUN_60789520(void);
uint __cdecl FUN_607897a0(int *param_1);
void __fastcall FUN_607898a0(int param_1);
void __thiscall FUN_60789b00(void *this,int param_1);
void __cdecl FUN_60789bb0(int *param_1);
uint __cdecl FUN_60789d50(int *param_1);
undefined4 __cdecl FUN_60789e00(int *param_1);
uint __cdecl FUN_60789f30(int *param_1);
uint __cdecl FUN_6078a360(int *param_1);
void __cdecl FUN_6078a4f0(int param_1);
void __cdecl FUN_6078a520(int param_1);
void FUN_6078a5a0(undefined4 param_1);
int __cdecl FUN_6078a5c0(int *param_1,int param_2,uint param_3,uint param_4);
undefined4 * __cdecl FUN_6078a6f0(int *param_1,undefined4 param_2,uint param_3);
int __cdecl FUN_6078a790(int *param_1,int param_2,uint param_3,uint param_4);
int __cdecl FUN_6078a840(int *param_1,int param_2,int param_3,uint param_4);
void __cdecl FUN_6078a8f0(int *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __cdecl FUN_6078a960(int *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __cdecl FUN_6078a9d0(int *param_1);
void __cdecl FUN_6078ab70(undefined4 param_1,char param_2);
void __cdecl FUN_6078ac10(undefined4 param_1,char param_2);
void __cdecl FUN_6078af40(int *param_1,int param_2);
void __cdecl FUN_6078b090(int *param_1);
uint __fastcall FUN_6078b1c0(undefined4 param_1,int param_2);
void __cdecl FUN_6078b240(int *param_1);
void FUN_6078b470(void);
void FUN_6078b510(void);
void __cdecl FUN_6078b6e0(int *param_1);
void __cdecl FUN_6078b870(int param_1);
void __cdecl FUN_6078b8b0(undefined1 param_1);
void __cdecl FUN_6078b8f0(undefined1 param_1);
void FUN_6078b910(void);
char __fastcall FUN_6078b940(int *param_1);
void __thiscall FUN_6078ba40(void *this,int param_1,char param_2);
void FUN_6078bb30(void);
void __fastcall FUN_6078bb60(int *param_1);
void FUN_6078bc10(void);
void FUN_6078bce0(void);
void FUN_6078bd80(void);
void __cdecl FUN_6078be10(int *param_1,undefined1 param_2,uint param_3);
void __cdecl FUN_6078be70(int param_1);
void __cdecl FUN_6078bfc0(void *param_1);
void __cdecl FUN_6078c0a0(int *param_1);
void __cdecl FUN_6078c130(int param_1);
void __cdecl FUN_6078c190(int *param_1);
int __cdecl FUN_6078c250(int param_1,int param_2);
int __cdecl FUN_6078c260(int param_1,int param_2);
void __cdecl FUN_6078c280(int param_1,int param_2,int param_3,int param_4,int param_5,size_t param_6);
void __cdecl FUN_6078c2d0(void *param_1,void *param_2,int param_3);
void __cdecl FUN_6078c2f0(void *param_1,size_t param_2);
void __cdecl FUN_6078c310(undefined4 param_1,size_t param_2);
void __cdecl FUN_6078c320(undefined4 param_1,void *param_2);
undefined4 __cdecl FUN_6078c330(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_6078c340(int *param_1);
undefined4 FUN_6078c360(void);
void FUN_6078c370(void);
void FUN_6078c380(void);
void __cdecl FUN_6078c430(int param_1);
void __cdecl FUN_6078c580(int param_1);
void __cdecl FUN_6078c660(int param_1);
void __cdecl FUN_6078c970(int *param_1,char param_2);
void __fastcall FUN_6078ca50(int param_1);
undefined4 __cdecl FUN_6078cac0(int param_1,int param_2);
int __cdecl FUN_6078cef0(int param_1,int param_2);
uint FUN_6078d080(void);
void __cdecl FUN_6078d880(undefined4 *param_1,char param_2);
void __cdecl FUN_6078d9d0(int *param_1,char param_2,int param_3,int *param_4);
undefined4 __cdecl FUN_6078dcb0(undefined4 *param_1,uint param_2,int param_3,int param_4);
uint __cdecl FUN_6078dde0(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5);
undefined4 FUN_6078ded0(void);
int __cdecl FUN_6078df50(int param_1,int param_2);
void __cdecl FUN_6078e4c0(int param_1);
undefined4 FUN_6078e510(void);
int __cdecl FUN_6078e5a0(uint param_1,int param_2);
int __cdecl FUN_6078e7e0(int param_1,int *param_2);
uint __cdecl FUN_6078ea30(int param_1,int param_2);
void __cdecl FUN_6078ef20(int *param_1);
void __cdecl FUN_6078f190(int param_1);
void __cdecl FUN_6078f200(int *param_1);
void __cdecl FUN_6078f520(int param_1);
void __cdecl FUN_6078f620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_6078f6d0(int param_1);
void __cdecl FUN_6078f870(int param_1,char param_2);
void __cdecl FUN_6078f930(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_6078fa20(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_6078fca0(int param_1,int param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_6078fde0(int *param_1);
void FUN_6078ffd0(void);
void __cdecl FUN_607900a0(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void __cdecl FUN_607902e0(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void __cdecl FUN_60790440(int *param_1);
void FUN_607905d0(void);
void __cdecl FUN_607907d0(int param_1,int *param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_60790b40(int param_1);
int * __fastcall FUN_60790c40(int param_1,int param_2);
int * __fastcall FUN_60790c70(int param_1,int param_2);
void __thiscall FUN_60790ca0(void *this,int *param_1);
int __cdecl FUN_607910a0(void *param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_607911f0(int param_1,int param_2);
void __cdecl FUN_60791370(int param_1);
void __thiscall FUN_60791400(void *this,int param_1,int param_2,int param_3);
void __cdecl FUN_607915d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte *param_7);
void __thiscall FUN_60791750(void *this,int param_1,int param_2,int param_3);
void __cdecl FUN_60791890(int param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_60791960(int param_1,int param_2,int *param_3,int param_4);
void FUN_60791c20(void);
void __cdecl FUN_60791d00(int *param_1,char param_2);
void __cdecl FUN_60791e30(int *param_1);
int __cdecl FUN_60791f80(int *param_1,int *param_2);
int __fastcall FUN_60792070(int param_1);
int __fastcall FUN_60792090(int param_1);
void __cdecl FUN_607920b0(int *param_1);
void __cdecl FUN_60792220(int param_1);
int * __fastcall FUN_60792370(int param_1);
void FUN_607923f0(void);
void __cdecl FUN_607924f0(int param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_607925b0(int param_1,int param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_607926d0(int param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_60792800(int param_1,int param_2,undefined4 *param_3,int param_4);
void FUN_607929b0(void);
void __cdecl FUN_607929f0(int *param_1);
void __cdecl FUN_60792b00(int *param_1);
void __cdecl FUN_60792ca0(int *param_1,char param_2);
void __fastcall FUN_60792d30(int param_1);
undefined4 __cdecl FUN_60792d80(int param_1,int param_2);
undefined4 __cdecl FUN_60792fd0(int param_1);
void __cdecl FUN_60793190(int param_1,undefined4 *param_2);
void __cdecl FUN_607933b0(int *param_1,int param_2);
void __cdecl FUN_60793460(int param_1,char param_2);
void __cdecl FUN_60793570(int *param_1,char param_2,int param_3,int *param_4);
undefined1 FUN_60793790(void);
undefined4 __thiscall FUN_607937c0(void *this,uint param_1);
undefined4 FUN_60793870(void);
uint __cdecl FUN_607938a0(void *param_1,short *param_2,uint param_3,uint *param_4);
uint __cdecl FUN_60793a40(char param_1);
uint __cdecl FUN_60793ac0(int *param_1,int param_2);
void __cdecl FUN_60793c30(int *param_1);
int * __cdecl FUN_60793cf0(int *param_1,short *param_2,int param_3);
void __cdecl FUN_60793eb0(int *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_60794180(int *param_1);
void __cdecl FUN_60794270(int *param_1,char param_2);
void __cdecl FUN_60794400(int param_1);
void FUN_60794460(void);
void __thiscall FUN_607944a0(void *this,uint param_1);
void FUN_60794560(void);
int __fastcall FUN_60794580(void *param_1);
void __fastcall FUN_607945b0(char *param_1);
void FUN_607945e0(void);
void __cdecl FUN_60794660(char param_1);
undefined4 __cdecl FUN_607946f0(int *param_1,int param_2);
undefined4 __cdecl FUN_60794840(int *param_1,int *param_2);
void __cdecl FUN_60794d30(int *param_1);
void __cdecl FUN_60794e00(int *param_1,char param_2);
void __cdecl FUN_60794f90(int param_1);
void __cdecl FUN_60795e60(int *param_1);
void __cdecl FUN_60795f50(size_t param_1);
void __cdecl FUN_60795f80(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,uint *param_6,uint param_7);
void __cdecl FUN_60796110(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,uint *param_6,uint param_7);
void FUN_607962e0(void);
void __cdecl FUN_60796400(int *param_1,char param_2);
void __thiscall FUN_607964b0(void *this,int param_1,int param_2);
void __cdecl FUN_60796500(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_60796590(int *param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_60796710(void *param_1,int param_2,undefined4 *param_3,int param_4);
void __cdecl FUN_607967c0(void *param_1,int param_2,undefined4 *param_3,int param_4);
void __cdecl FUN_60796890(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_60796b10(int param_1,int param_2,undefined4 *param_3,int param_4);
void __cdecl FUN_60796ca0(int *param_1);
void __cdecl FUN_60796e20(int param_1);
void __cdecl FUN_60796f00(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5);
void __cdecl FUN_60797020(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5);
void __cdecl FUN_607970d0(byte *param_1,undefined4 *param_2,int *param_3,int param_4,int param_5);
void __cdecl FUN_60797300(int *param_1);
void FUN_60797530(void);
void FUN_60797710(void);
void FUN_60797b10(void);
uint FUN_60797c00(void);
void __cdecl FUN_60797dd0(int *param_1);
void __cdecl FUN_60797f80(int param_1);
void __cdecl FUN_60798020(int param_1,char param_2);
void __cdecl FUN_60799240(int param_1,int param_2,int param_3,int *param_4,int param_5);
void __cdecl FUN_607996f0(int param_1);
void __cdecl FUN_60799a10(int param_1);
void __cdecl operator_delete(void *param_1);
void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1);
void __thiscall CWinApp::~CWinApp(CWinApp *this);
int __thiscall CWinApp::InitInstance(CWinApp *this);
AFX_MODULE_STATE * AfxGetModuleState(void);
int __thiscall CWinApp::ExitInstance(CWinApp *this);
CRuntimeClass * __thiscall CWinApp::CWinApp::GetRuntimeClass(CWinApp *this);
int __thiscall CCmdTarget::CCmdTarget::OnCmdMsg(CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
void __thiscall CCmdTarget::CCmdTarget::OnFinalRelease(CCmdTarget *this);
int __thiscall CCmdTarget::CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1);
int __thiscall CCmdTarget::CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1);
uint __thiscall CCmdTarget::CCmdTarget::GetTypeInfoCount(CCmdTarget *this);
CTypeLibCache * __thiscall CCmdTarget::CCmdTarget::GetTypeLibCache(CCmdTarget *this);
long __thiscall CCmdTarget::CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2);
AFX_OLECMDMAP * __thiscall CCmdTarget::CCmdTarget::GetCommandMap(CCmdTarget *this);
AFX_DISPMAP * __thiscall CCmdTarget::CCmdTarget::GetDispatchMap(CCmdTarget *this);
AFX_CONNECTIONMAP * __thiscall CCmdTarget::CCmdTarget::GetConnectionMap(CCmdTarget *this);
AFX_INTERFACEMAP * __thiscall CCmdTarget::CCmdTarget::GetInterfaceMap(CCmdTarget *this);
AFX_EVENTSINKMAP * __thiscall CCmdTarget::CCmdTarget::GetEventSinkMap(CCmdTarget *this);
int __thiscall CCmdTarget::CCmdTarget::OnCreateAggregates(CCmdTarget *this);
IUnknown * __thiscall CCmdTarget::CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1);
int __thiscall CCmdTarget::CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1);
IConnectionPoint * __thiscall CCmdTarget::CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1);
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
void __cdecl operator_delete[](void *param_1);
void __thiscall CPtrList::RemoveAt(CPtrList *this,__POSITION *param_1);
void __thiscall CPtrList::~CPtrList(CPtrList *this);
void * __cdecl operator_new(uint param_1);
__POSITION * __thiscall CPtrList::AddHead(CPtrList *this,void *param_1);
__POSITION * __thiscall CPtrList::AddTail(CPtrList *this,void *param_1);
void __thiscall CPtrList::AddHead(CPtrList *this,CPtrList *param_1);
void __thiscall CPtrList::AddTail(CPtrList *this,CPtrList *param_1);
void __thiscall CPtrList::CPtrList(CPtrList *this,int param_1);
void * __thiscall CPtrList::RemoveHead(CPtrList *this);
void * __thiscall CPtrList::RemoveTail(CPtrList *this);
void AfxThrowInvalidArgException(void);
__POSITION * __thiscall CPtrList::InsertBefore(CPtrList *this,__POSITION *param_1,void *param_2);
__POSITION * __thiscall CPtrList::InsertAfter(CPtrList *this,__POSITION *param_1,void *param_2);
CRuntimeClass * __thiscall CPtrList::CPtrList::GetRuntimeClass(CPtrList *this);
void * __cdecl operator_new[](uint param_1);
CRuntimeClass * __thiscall CBitmap::CBitmap::GetRuntimeClass(CBitmap *this);
int AfxMessageBox(char *param_1,uint param_2,uint param_3);
int __thiscall CGdiObject::DeleteObject(CGdiObject *this);
CRuntimeClass * __thiscall CGdiObject::CGdiObject::GetRuntimeClass(CGdiObject *this);
HINSTANCE__ * AfxFindResourceHandle(char *param_1,char *param_2);
int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1);
CRuntimeClass * __thiscall CPen::CPen::GetRuntimeClass(CPen *this);
CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1);
void __thiscall CDC::FillSolidRect(CDC *this,tagRECT *param_1,ulong param_2);
void __thiscall CDC::Draw3dRect(CDC *this,tagRECT *param_1,ulong param_2,ulong param_3);
int __thiscall CDC::SetBkMode(CDC *this,int param_1);
CRuntimeClass * __thiscall CRgn::CRgn::GetRuntimeClass(CRgn *this);
void __thiscall CBrush::CBrush(CBrush *this,ulong param_1);
CRuntimeClass * __thiscall CBrush::CBrush::GetRuntimeClass(CBrush *this);
void __thiscall CPen::CPen(CPen *this,int param_1,int param_2,ulong param_3);
CBrush * __thiscall CDC::SelectObject(CDC *this,CBrush *param_1);
void * __thiscall CGdiObject::Detach(CGdiObject *this);
CRuntimeClass * CButton::GetThisClass(void);
void __thiscall CButton::CButton::DrawItem(CButton *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CButton::CButton::Create(CButton *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd::GetOccDialogInfo(CWnd *this);
int __thiscall CWnd::CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1);
int __thiscall CWnd::CWnd::CreateControlSite(CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,_GUID *param_4);
int __thiscall CWnd::CWnd::CreateControlContainer(CWnd *this,COleControlContainer **param_1);
int __thiscall CWnd::CWnd::IsFrameWnd(CWnd *this);
int __thiscall CWnd::CWnd::CheckAutoCenter(CWnd *this);
int __thiscall CButton::CButton::OnChildNotify(CButton *this,uint param_1,uint param_2,long param_3,long *param_4);
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
AFX_INTERFACEMAP * __thiscall CWnd::CWnd::GetInterfaceMap(CWnd *this);
void __thiscall CWnd::CWnd::OnFinalRelease(CWnd *this);
CRuntimeClass * __thiscall CButton::CButton::GetRuntimeClass(CButton *this);
void __thiscall CWnd::~CWnd(CWnd *this);
void __thiscall CWnd::CWnd(CWnd *this);
void __thiscall CButton::~CButton(CButton *this);
void __thiscall CToolTipCtrl::CToolTipCtrl(CToolTipCtrl *this);
void __thiscall CToolTipCtrl::~CToolTipCtrl(CToolTipCtrl *this);
void __thiscall CWnd::MoveWindow(CWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5);
int __thiscall CWnd::ShowWindow(CWnd *this,int param_1);
int __thiscall CWnd::EnableWindow(CWnd *this,int param_1);
int __thiscall CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
CDC * CDC::FromHandle(HDC__ *param_1);
CWnd * CWnd::FromHandle(HWND__ *param_1);
void CDC::DeleteTempMap(void);
void __thiscall CWnd::GetWindowTextA(CWnd *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1);
long __thiscall CWnd::Default(CWnd *this);
void __thiscall CClientDC::CClientDC(CClientDC *this,CWnd *param_1);
void __thiscall CClientDC::~CClientDC(CClientDC *this);
CWnd * __thiscall CWnd::SetFocus(CWnd *this);
int __thiscall CToolTipCtrl::AddTool(CToolTipCtrl *this,CWnd *param_1,char *param_2,tagRECT *param_3,uint param_4);
int __thiscall CListCtrl::InsertColumn(CListCtrl *this,int param_1,char *param_2,int param_3,int param_4,int param_5);
int __thiscall CListCtrl::GetSubItemRect(CListCtrl *this,int param_1,int param_2,int param_3,CRect *param_4);
ulong __thiscall CListCtrl::GetItemData(CListCtrl *this,int param_1);
int __thiscall CListCtrl::InsertItem(CListCtrl *this,uint param_1,int param_2,char *param_3,uint param_4,uint param_5,int param_6,long param_7);
int __thiscall CListCtrl::SetItemText(CListCtrl *this,int param_1,int param_2,char *param_3);
int __thiscall CListCtrl::SetItem(CListCtrl *this,int param_1,int param_2,uint param_3,char *param_4,int param_5,uint param_6,uint param_7,long param_8);
int __thiscall CListCtrl::CListCtrl::OnChildNotify(CListCtrl *this,uint param_1,uint param_2,long param_3,long *param_4);
CRuntimeClass * CRichEditCtrl::GetThisClass(void);
int __thiscall CWnd::CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4);
void __thiscall CRichEditCtrl::~CRichEditCtrl(CRichEditCtrl *this);
int __thiscall CRichEditCtrl::Create(CRichEditCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
void __thiscall CDC::CDC(CDC *this);
void __thiscall CDC::~CDC(CDC *this);
int __thiscall CDC::Attach(CDC *this,HDC__ *param_1);
CGdiObject * CDC::SelectGdiObject(HDC__ *param_1,void *param_2);
int __thiscall CDC::DeleteDC(CDC *this);
IRichEditOle * __thiscall CRichEditCtrl::GetIRichEditOle(CRichEditCtrl *this);
int __thiscall CWnd::GetWindowTextLengthA(CWnd *this);
ulong __thiscall CRichEditCtrl::GetSelectionCharFormat(CRichEditCtrl *this,CHARFORMAT2A *param_1);
int __thiscall CRichEditCtrl::SetSelectionCharFormat(CRichEditCtrl *this,CHARFORMAT2A *param_1);
void __thiscall CWindowDC::CWindowDC(CWindowDC *this,CWnd *param_1);
void __thiscall CWindowDC::~CWindowDC(CWindowDC *this);
void __thiscall CRichEditCtrl::LineScroll(CRichEditCtrl *this,int param_1,int param_2);
CRuntimeClass * __thiscall CFont::CFont::GetRuntimeClass(CFont *this);
CRuntimeClass * __thiscall CPalette::CPalette::GetRuntimeClass(CPalette *this);
char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4);
void __thiscall CWnd::OnNcDestroy(CWnd *this);
void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1);
void __thiscall CPaintDC::~CPaintDC(CPaintDC *this);
CFont * __thiscall CDC::CDC::SelectObject(CDC *this,CFont *param_1);
void __thiscall CColorDialog::CColorDialog(CColorDialog *this,ulong param_1,ulong param_2,CWnd *param_3);
int __thiscall CColorDialog::DoModal(CColorDialog *this);
void __thiscall CDialog::~CDialog(CDialog *this);
void __thiscall CDialog::CDialog::PreInitDialog(CDialog *this);
void __thiscall CCommonDialog::CCommonDialog::OnCancel(CCommonDialog *this);
void __thiscall CCommonDialog::CCommonDialog::OnOK(CCommonDialog *this);
void __thiscall CDialog::CDialog::OnSetFont(CDialog *this,CFont *param_1);
int __thiscall CDialog::CDialog::OnInitDialog(CDialog *this);
int __thiscall CDialog::CDialog::DoModal(CDialog *this);
int __thiscall CDialog::CDialog::CreateIndirect(CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3);
int __thiscall CDialog::CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2);
int __thiscall CDialog::CDialog::Create(CDialog *this,char *param_1,CWnd *param_2);
_AFX_OCC_DIALOG_INFO * __thiscall CDialog::CDialog::GetOccDialogInfo(CDialog *this);
int __thiscall CDialog::CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1);
int __thiscall CDialog::CDialog::CheckAutoCenter(CDialog *this);
int __thiscall CDialog::CDialog::PreTranslateMessage(CDialog *this,tagMSG *param_1);
AFX_MSGMAP * __thiscall CCommonDialog::CCommonDialog::GetMessageMap(CCommonDialog *this);
int __thiscall CDialog::CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
CRuntimeClass * __thiscall CCommonDialog::CCommonDialog::GetRuntimeClass(CCommonDialog *this);
void __thiscall CDC::FillSolidRect(CDC *this,int param_1,int param_2,int param_3,int param_4,ulong param_5);
CPalette * __thiscall CDC::SelectPalette(CDC *this,CPalette *param_1,int param_2);
CRuntimeClass * __thiscall CWnd::CWnd::GetRuntimeClass(CWnd *this);
CRuntimeClass * CWnd::GetThisClass(void);
CRuntimeClass * CComboBox::GetThisClass(void);
void __thiscall CComboBox::CComboBox::DeleteItem(CComboBox *this,tagDELETEITEMSTRUCT *param_1);
int __thiscall CComboBox::CComboBox::CompareItem(CComboBox *this,tagCOMPAREITEMSTRUCT *param_1);
void __thiscall CComboBox::CComboBox::MeasureItem(CComboBox *this,tagMEASUREITEMSTRUCT *param_1);
void __thiscall CComboBox::CComboBox::DrawItem(CComboBox *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CComboBox::CComboBox::Create(CComboBox *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
int __thiscall CComboBox::CComboBox::OnChildNotify(CComboBox *this,uint param_1,uint param_2,long param_3,long *param_4);
void __thiscall CComboBox::~CComboBox(CComboBox *this);
int __thiscall CWnd::ModifyStyleEx(CWnd *this,ulong param_1,ulong param_2,uint param_3);
void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1);
void __thiscall CWnd::OnSysColorChange(CWnd *this);
int __thiscall CWnd::IsWindowEnabled(CWnd *this);
CRuntimeClass * CEdit::GetThisClass(void);
void __thiscall CEdit::~CEdit(CEdit *this);
int __thiscall CEdit::Create(CEdit *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
CRuntimeClass * CProgressCtrl::GetThisClass(void);
int __thiscall CProgressCtrl::CProgressCtrl::CreateEx(CProgressCtrl *this,ulong param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
int __thiscall CProgressCtrl::CProgressCtrl::Create(CProgressCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
CRuntimeClass * __thiscall CProgressCtrl::CProgressCtrl::GetRuntimeClass(CProgressCtrl *this);
void __thiscall CProgressCtrl::~CProgressCtrl(CProgressCtrl *this);
void __thiscall CProgressCtrl::GetRange(CProgressCtrl *this,int *param_1,int *param_2);
void __thiscall CWnd::OnDestroy(CWnd *this);
ulong __thiscall CWnd::GetStyle(CWnd *this);
CRuntimeClass * CStatic::GetThisClass(void);
void __thiscall CStatic::CStatic::DrawItem(CStatic *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CStatic::CStatic::Create(CStatic *this,char *param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
int __thiscall CStatic::CStatic::OnChildNotify(CStatic *this,uint param_1,uint param_2,long param_3,long *param_4);
CRuntimeClass * __thiscall CStatic::CStatic::GetRuntimeClass(CStatic *this);
void __thiscall CStatic::~CStatic(CStatic *this);
void __thiscall CHeaderCtrl::CHeaderCtrl::DrawItem(CHeaderCtrl *this,tagDRAWITEMSTRUCT *param_1);
int __thiscall CHeaderCtrl::CHeaderCtrl::CreateEx(CHeaderCtrl *this,ulong param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,uint param_5);
int __thiscall CHeaderCtrl::CHeaderCtrl::Create(CHeaderCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
int __thiscall CHeaderCtrl::OnChildNotify(CHeaderCtrl *this,uint param_1,uint param_2,long param_3,long *param_4);
CRuntimeClass * __thiscall CHeaderCtrl::CHeaderCtrl::GetRuntimeClass(CHeaderCtrl *this);
void __thiscall CHeaderCtrl::~CHeaderCtrl(CHeaderCtrl *this);
int __thiscall CDC::CDC::SaveDC(CDC *this);
CGdiObject * CGdiObject::FromHandle(void *param_1);
void __thiscall CDC::MoveTo(CDC *this,int param_1,int param_2);
int __thiscall CDC::LineTo(CDC *this,int param_1,int param_2);
ulong __thiscall CDC::CDC::SetTextColor(CDC *this,ulong param_1);
int __thiscall CDC::CDC::RestoreDC(CDC *this,int param_1);
int __thiscall CWnd::CreateControl(CWnd *this,_GUID *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,uint param_6,CFile *param_7,int param_8,wchar_t *param_9);
int __thiscall CWnd::SubclassWindow(CWnd *this,HWND__ *param_1);
HWND__ * __thiscall CWnd::Detach(CWnd *this);
IUnknown * __thiscall CWnd::GetControlUnknown(CWnd *this);
void __thiscall COleVariant::COleVariant(COleVariant *this,char *param_1,ushort param_2);
void __thiscall COleVariant::COleVariant(COleVariant *this,long param_1,ushort param_2);
void __thiscall CHtmlView::CHtmlView(CHtmlView *this);
void __thiscall CHtmlView::~CHtmlView(CHtmlView *this);
CRuntimeClass * CHtmlView::GetThisClass(void);
int __thiscall CHtmlView::CHtmlView::Create(CHtmlView *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,uint param_6,CCreateContext *param_7);
void __thiscall CHtmlView::OnSize(CHtmlView *this,uint param_1,int param_2,int param_3);
int __thiscall CView::CView::OnCmdMsg(CView *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4);
AFX_EVENTSINKMAP * __thiscall CHtmlView::CHtmlView::GetEventSinkMap(CHtmlView *this);
int __thiscall CHtmlView::CHtmlView::PreCreateWindow(CHtmlView *this,tagCREATESTRUCTA *param_1);
void __thiscall CScrollView::CScrollView::CalcWindowRect(CScrollView *this,tagRECT *param_1,uint param_2);
CScrollBar * __thiscall CView::CView::GetScrollBarCtrl(CView *this,int param_1);
long __thiscall CWnd::GetAccessibleChildCount(CWnd *this);
long __thiscall CWnd::GetAccessibleChild(void);
long __thiscall CWnd::GetAccessibleName(void);
long __thiscall CWnd::GetAccessibilityLocation(void);
long __thiscall CWnd::GetAccessibilityHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3);
int __thiscall CHtmlView::CHtmlView::PreTranslateMessage(CHtmlView *this,tagMSG *param_1);
int __thiscall CHtmlView::CHtmlView::CreateControlSite(CHtmlView *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,_GUID *param_4);
int __thiscall CFormView::CFormView::SetOccDialogInfo(CFormView *this,_AFX_OCC_DIALOG_INFO *param_1);
_AFX_OCC_DIALOG_INFO * __thiscall CFormView::CFormView::GetOccDialogInfo(CFormView *this);
int __thiscall CView::CView::IsSelected(CView *this,CObject *param_1);
int __thiscall CScrollView::CScrollView::OnScroll(CScrollView *this,uint param_1,uint param_2,int param_3);
int __thiscall CScrollView::CScrollView::OnScrollBy(void);
ulong __thiscall CView::CView::OnDragEnter(void);
ulong __thiscall CView::CView::OnDragOver(void);
void __thiscall CView::CView::OnDragLeave(CView *this);
int __thiscall CView::CView::OnDrop(void);
ulong __thiscall CView::CView::OnDropEx(void);
ulong __thiscall CView::CView::OnDragScroll(void);
void __thiscall CScrollView::CScrollView::OnPrepareDC(CScrollView *this,CDC *param_1,CPrintInfo *param_2);
void __thiscall CFormView::CFormView::OnInitialUpdate(CFormView *this);
void __thiscall CFormView::CFormView::OnActivateView(CFormView *this,int param_1,CView *param_2,CView *param_3);
void __thiscall CFormView::CFormView::OnActivateFrame(CFormView *this,uint param_1,CFrameWnd *param_2);
void __thiscall CView::CView::OnUpdate(CView *this,CView *param_1,long param_2,CObject *param_3);
void __thiscall CHtmlView::CHtmlView::OnDraw(CHtmlView *this,CDC *param_1);
int __thiscall CView::CView::OnPreparePrinting(CView *this,CPrintInfo *param_1);
void __thiscall CView::CView::OnBeginPrinting(CView *this,CDC *param_1,CPrintInfo *param_2);
void __thiscall CView::CView::OnPrint(CView *this,CDC *param_1,CPrintInfo *param_2);
void __thiscall CView::CView::OnEndPrinting(CView *this,CDC *param_1,CPrintInfo *param_2);
void __thiscall CView::CView::OnEndPrintPreview(CView *this,CDC *param_1,CPrintInfo *param_2,tagPOINT param_3,CPreviewView *param_4);
void __thiscall CScrollView::CScrollView::GetWheelScrollDistance(void);
long __thiscall CHtmlView::CHtmlView::OnShowContextMenu(CHtmlView *this,ulong param_1,tagPOINT *param_2,IUnknown *param_3,IDispatch *param_4);
long __thiscall CHtmlView::CHtmlView::OnGetExternal(CHtmlView *this,IDispatch **param_1);
long __thiscall CHtmlView::CHtmlView::OnGetHostInfo(CHtmlView *this,_DOCHOSTUIINFO *param_1);
long __thiscall CHtmlView::CHtmlView::OnShowUI(CHtmlView *this,ulong param_1,IOleInPlaceActiveObject *param_2,IOleCommandTarget *param_3,IOleInPlaceFrame *param_4,IOleInPlaceUIWindow *param_5);
long __thiscall CHtmlView::CHtmlView::OnHideUI(CHtmlView *this);
long __thiscall CHtmlView::CHtmlView::OnUpdateUI(CHtmlView *this);
long __thiscall CHtmlView::CHtmlView::OnEnableModeless(CHtmlView *this,int param_1);
long __thiscall CHtmlView::CHtmlView::OnDocWindowActivate(CHtmlView *this,int param_1);
long __thiscall CHtmlView::CHtmlView::OnFrameWindowActivate(CHtmlView *this,int param_1);
long __thiscall CHtmlView::CHtmlView::OnResizeBorder(CHtmlView *this,tagRECT *param_1,IOleInPlaceUIWindow *param_2,int param_3);
long __thiscall CHtmlView::CHtmlView::OnTranslateAccelerator(CHtmlView *this,tagMSG *param_1,_GUID *param_2,ulong param_3);
long __thiscall CHtmlView::CHtmlView::OnGetOptionKeyPath(CHtmlView *this,wchar_t **param_1,ulong param_2);
long __thiscall CHtmlView::CHtmlView::OnFilterDataObject(CHtmlView *this,IDataObject *param_1,IDataObject **param_2);
long __thiscall CHtmlView::CHtmlView::OnTranslateUrl(CHtmlView *this,ulong param_1,wchar_t *param_2,wchar_t **param_3);
long __thiscall CHtmlView::CHtmlView::OnGetDropTarget(CHtmlView *this,IDropTarget *param_1,IDropTarget **param_2);
void __thiscall CHtmlView::CHtmlView::OnNavigateComplete2(CHtmlView *this,char *param_1);
void __thiscall CHtmlView::CHtmlView::OnProgressChange(CHtmlView *this,long param_1,long param_2);
void __thiscall CHtmlView::CHtmlView::OnCommandStateChange(CHtmlView *this,long param_1,int param_2);
void __thiscall CHtmlView::CHtmlView::OnDownloadBegin(CHtmlView *this);
void __thiscall CHtmlView::CHtmlView::OnDownloadComplete(CHtmlView *this);
void __thiscall CHtmlView::CHtmlView::OnTitleChange(CHtmlView *this,char *param_1);
void __thiscall CHtmlView::CHtmlView::OnPropertyChange(CHtmlView *this,char *param_1);
void __thiscall CHtmlView::CHtmlView::OnNewWindow2(CHtmlView *this,IDispatch **param_1,int *param_2);
void __thiscall CHtmlView::CHtmlView::OnDocumentComplete(CHtmlView *this,char *param_1);
void __thiscall CHtmlView::CHtmlView::OnQuit(CHtmlView *this);
void __thiscall CHtmlView::CHtmlView::OnVisible(CHtmlView *this,int param_1);
void __thiscall CHtmlView::CHtmlView::OnToolBar(CHtmlView *this,int param_1);
void __thiscall CHtmlView::CHtmlView::OnMenuBar(CHtmlView *this,int param_1);
void __thiscall CHtmlView::CHtmlView::OnStatusBar(CHtmlView *this,int param_1);
void __thiscall CHtmlView::CHtmlView::OnFullScreen(CHtmlView *this,int param_1);
void __thiscall CHtmlView::CHtmlView::OnTheaterMode(CHtmlView *this,int param_1);
void __thiscall CHtmlView::CHtmlView::OnNavigateError(CHtmlView *this,char *param_1,char *param_2,ulong param_3,int *param_4);
void __thiscall CHtmlView::CHtmlView::NavigateComplete2(CHtmlView *this,IDispatch *param_1,tagVARIANT *param_2);
void __thiscall CHtmlView::CHtmlView::BeforeNavigate2(CHtmlView *this,IDispatch *param_1,tagVARIANT *param_2,tagVARIANT *param_3,tagVARIANT *param_4,tagVARIANT *param_5,tagVARIANT *param_6,short *param_7);
void __thiscall CHtmlView::CHtmlView::DocumentComplete(CHtmlView *this,IDispatch *param_1,tagVARIANT *param_2);
void __thiscall CHtmlView::CHtmlView::NavigateError(CHtmlView *this,IDispatch *param_1,tagVARIANT *param_2,tagVARIANT *param_3,tagVARIANT *param_4,short *param_5);
CRuntimeClass * CListCtrl::GetThisClass(void);
void __thiscall CListCtrl::~CListCtrl(CListCtrl *this);
int __thiscall CListCtrl::Create(CListCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4);
HWND__ * __thiscall CWnd::UnsubclassWindow(CWnd *this);
void __thiscall CWnd::GetScrollRange(CWnd *this,int param_1,int *param_2,int *param_3);
int __thiscall CListCtrl::GetItemRect(CListCtrl *this,int param_1,tagRECT *param_2,uint param_3);
int __thiscall CDC::SelectClipRgn(CDC *this,CRgn *param_1);
void __thiscall CListCtrl::GetItemText(CListCtrl *this,int param_1,int param_2);
int __thiscall CWnd::ModifyStyle(CWnd *this,ulong param_1,ulong param_2,uint param_3);
void __thiscall CWnd::ScreenToClient(CWnd *this,tagRECT *param_1);
void __thiscall CScrollView::CScrollView(CScrollView *this);
void __thiscall CScrollView::~CScrollView(CScrollView *this);
void __thiscall CScrollView::ScrollToPosition(CScrollView *this,tagPOINT param_1);
int __thiscall CView::OnCreate(CView *this,tagCREATESTRUCTA *param_1);
int __thiscall CWnd::EnableToolTips(CWnd *this,int param_1);
void __thiscall CScrollView::SetScrollSizes(CScrollView *this,int param_1,tagSIZE param_2,tagSIZE *param_3,tagSIZE *param_4);
void __thiscall CToolTipCtrl::UpdateTipText(CToolTipCtrl *this,char *param_1,CWnd *param_2,uint param_3);
int __thiscall CWnd::GetScrollInfo(CWnd *this,int param_1,tagSCROLLINFO *param_2,uint param_3);
void __thiscall CScrollView::GetScrollPosition(CScrollView *this);
int __thiscall CScrollView::OnMouseWheel(void);
void __thiscall CScrollView::OnVScroll(CScrollView *this,uint param_1,uint param_2,CScrollBar *param_3);
void __thiscall CScrollView::OnSize(CScrollView *this,uint param_1,int param_2,int param_3);
int __thiscall CView::CView::PreCreateWindow(CView *this,tagCREATESTRUCTA *param_1);
void __thiscall CView::CView::OnInitialUpdate(CView *this);
void __thiscall CView::CView::OnActivateView(CView *this,int param_1,CView *param_2,CView *param_3);
void __thiscall CView::CView::OnActivateFrame(CView *this,uint param_1,CFrameWnd *param_2);
int __thiscall CWnd::GetScrollLimit(CWnd *this,int param_1);
int __thiscall CWnd::GetScrollPos(CWnd *this,int param_1);
int __thiscall CDC::CDC::GetClipBox(CDC *this,tagRECT *param_1);
void __thiscall CDC::SetWindowOrg(CDC *this,int param_1,int param_2);
CRuntimeClass * __thiscall CDC::CDC::GetRuntimeClass(CDC *this);
void __thiscall CDC::CDC::SetAttribDC(CDC *this,HDC__ *param_1);
void __thiscall CDC::CDC::SetOutputDC(CDC *this,HDC__ *param_1);
void __thiscall CDC::CDC::ReleaseAttribDC(CDC *this);
void __thiscall CDC::CDC::ReleaseOutputDC(CDC *this);
CGdiObject * __thiscall CDC::CDC::SelectStockObject(CDC *this,int param_1);
ulong __thiscall CDC::CDC::SetBkColor(CDC *this,ulong param_1);
int __thiscall CDC::CDC::SetMapMode(CDC *this,int param_1);
void __thiscall CDC::CDC::SetViewportOrg(CDC *this,int param_1,int param_2);
void __thiscall CDC::CDC::OffsetViewportOrg(CDC *this,int param_1,int param_2);
void __thiscall CDC::CDC::SetViewportExt(CDC *this,int param_1,int param_2);
void __thiscall CDC::CDC::ScaleViewportExt(CDC *this,int param_1,int param_2,int param_3,int param_4);
void __thiscall CDC::CDC::SetWindowExt(CDC *this,int param_1,int param_2);
void __thiscall CDC::CDC::ScaleWindowExt(CDC *this,int param_1,int param_2,int param_3,int param_4);
void __thiscall CInternetSession::CInternetSession(CInternetSession *this,char *param_1,ulong param_2,ulong param_3,char *param_4,char *param_5,ulong param_6);
void __thiscall CInternetSession::~CInternetSession(CInternetSession *this);
CHttpConnection * __thiscall CInternetSession::GetHttpConnection(CInternetSession *this,char *param_1,ushort param_2,char *param_3,char *param_4);
CHttpFile * __thiscall CHttpConnection::OpenRequest(CHttpConnection *this,int param_1,char *param_2,char *param_3,ulong param_4,char **param_5,char *param_6,ulong param_7);
int __thiscall CHttpFile::AddRequestHeaders(CHttpFile *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,ulong param_2);
int __thiscall CHttpFile::SendRequest(CHttpFile *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,void *param_2,ulong param_3);
int __thiscall CHttpFile::QueryInfo(CHttpFile *this,ulong param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2,ulong *param_3);
int __thiscall CHttpFile::SendRequestEx(CHttpFile *this,_INTERNET_BUFFERSA *param_1,_INTERNET_BUFFERSA *param_2,ulong param_3,ulong param_4);
int __thiscall CHttpFile::EndRequest(CHttpFile *this,ulong param_1,_INTERNET_BUFFERSA *param_2,ulong param_3);
void __thiscall CInternetSession::Close(CInternetSession *this);
int __thiscall CHttpFile::SendRequest(CHttpFile *this,char *param_1,ulong param_2,void *param_3,ulong param_4);
int __thiscall CException::CException::GetErrorMessage(CException *this,char *param_1,uint param_2,uint *param_3);
void __thiscall CFile::CFile(CFile *this);
void __thiscall CFile::~CFile(CFile *this);
int __thiscall CException::CException::ReportError(CException *this,uint param_1,uint param_2);
int __thiscall CFileException::CFileException::GetErrorMessage(CFileException *this,char *param_1,uint param_2,uint *param_3);
CRuntimeClass * __thiscall CFileException::CFileException::GetRuntimeClass(CFileException *this);
void __thiscall CException::CException(CException *this);
int __thiscall CFile::Open(CFile *this,char *param_1,uint param_2,CFileException *param_3);
void __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(AFX_EXCEPTION_LINK *this);
void AfxTryCleanup(void);
void __thiscall CFile::Write(CFile *this,void *param_1,uint param_2);
void __thiscall CFile::Close(CFile *this);
CWinThread * AfxGetThread(void);
void __thiscall CStringList::CStringList(CStringList *this,int param_1);
void __thiscall CStringList::~CStringList(CStringList *this);
void __thiscall CStringList::RemoveAll(CStringList *this);
__POSITION * __thiscall CStringList::AddTail(CStringList *this,char *param_1);
void __thiscall CStringList::RemoveHead(CStringList *this);
void __thiscall CStringArray::CStringArray(CStringArray *this);
void __thiscall CStringArray::~CStringArray(CStringArray *this);
void __thiscall CStringArray::SetSize(CStringArray *this,int param_1,int param_2);
void __thiscall CStringArray::SetAtGrow(CStringArray *this,int param_1,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2);
void __thiscall CStringArray::RemoveAt(CStringArray *this,int param_1,int param_2);
int __thiscall CWnd::SetScrollPos(CWnd *this,int param_1,int param_2,int param_3);
__uint64 __thiscall CFile::GetLength(CFile *this);
uint __thiscall CFile::Read(CFile *this,void *param_1,uint param_2);
void __thiscall CWnd::SetScrollRange(CWnd *this,int param_1,int param_2,int param_3,int param_4);
void __thiscall CWnd::OnVScroll(CWnd *this,uint param_1,uint param_2,CScrollBar *param_3);
void __thiscall CWnd::OnHScroll(CWnd *this,uint param_1,uint param_2,CScrollBar *param_3);
_func_long_HWND___ptr_uint_uint_long * AfxGetAfxWndProc(void);
int AfxRegisterClass(tagWNDCLASSA *param_1);
long FUN_6079ae12(void);
undefined4 FUN_6079ae5d(HINSTANCE__ *param_1,int param_2);
undefined * Catch@6079af0a(void);
undefined4 FUN_6079af33(void);
undefined4 _RawDllMain@12(undefined4 param_1,int param_2);
undefined4 _DllMain@12(HINSTANCE__ *param_1,int param_2);
_AFX_DLL_MODULE_STATE * __thiscall _AFX_DLL_MODULE_STATE::_AFX_DLL_MODULE_STATE(_AFX_DLL_MODULE_STATE *this);
AFX_MODULE_STATE * __thiscall _AFX_DLL_MODULE_STATE::scalar_deleting_destructor(_AFX_DLL_MODULE_STATE *this,byte param_1);
void __fastcall FUN_6079b0cc(undefined4 *param_1);
void __fastcall __security_check_cookie(int param_1);
_onexit_t __cdecl __onexit(_onexit_t param_1);
void FUN_6079b194(void);
int __cdecl _atexit(_func_4879 *param_1);
void * __thiscall FID_conflict:`vector_deleting_destructor'(void *this,uint param_1);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4);
void FUN_6079b2a9(void);
void * __cdecl malloc(size_t _Size);
void __cdecl free(void *_Memory);
char * __thiscall std::exception::std::exception::what(exception *this);
void __cdecl purecall(void);
void `eh_vector_constructor_iterator'(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,_func_void_void_ptr *param_5);
void FUN_6079b32d(void);
int __cdecl sprintf(char *_Dest,char *_Format,...);
size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File);
undefined4 __CRT_INIT@12(int *param_1,int *param_2,int *param_3);
int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3);
void FUN_6079b6d2(void);
void entry(HINSTANCE__ *param_1,int *param_2,int *param_3);
void __cdecl exit(int _Code);
int __cdecl fprintf(FILE *_File,char *_Format,...);
FILE * __cdecl __iob_func(void);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File);
int __cdecl ferror(FILE *_File);
int __cdecl fflush(FILE *_File);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
int __cdecl sscanf(char *_Src,char *_Format,...);
char * __cdecl getenv(char *_VarName);
ulonglong __fastcall FUN_6079b750(undefined4 param_1,undefined4 param_2);
void __cdecl FUN_6079b802(int param_1);
void __cdecl __EH_prolog3_catch(int param_1);
void __EH_epilog3(void);
void __cdecl ___report_gsfailure(void);
void __cdecl _unlock(int _File);
void __dllonexit(void);
void __cdecl _lock(int _File);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl FUN_6079b9f1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void __cdecl initterm(void);
void __cdecl initterm_e(void);
void __cdecl _amsg_exit(int param_1);
void __cdecl ___security_init_cookie(void);
undefined4 FUN_6079bc7c(void);
undefined4 __get_sse2_info(void);
void __cdecl _crt_debugger_hook(int param_1);
void __cdecl except_handler4_common(void);
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this);
void ConvertStringToBSTR(LPCSTR param_1);
void * FUN_6079bee0(short *param_1);
undefined4 Catch_All@6079bf9d(void);
void _com_issue_error(long param_1);
void FUN_6079c060(undefined4 param_1,undefined4 param_2);
_com_error * __thiscall _com_error::_com_error(_com_error *this,_com_error *param_1);
void * __thiscall _com_error::`scalar_deleting_destructor'(_com_error *this,uint param_1);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,int param_2);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,ulong param_2);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,char *param_2);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,uint param_2);
bool __thiscall CParam::CParam::IsExistKey(CParam *this,char *param_1);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,char *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,uint *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,char **param_2);
void __thiscall CParam::CParam::SetContext(CParam *this,uint param_1);
uint __thiscall CParam::CParam::GetContext(CParam *this);
char * __thiscall CParam::CParam::GetService(CParam *this);
char * __thiscall CParam::CParam::GetCommand(CParam *this);
int __thiscall CParam::CParam::GetItemCount(CParam *this);
bool __thiscall CParam::CParam::IsConst(CParam *this);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,IParam *param_2);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,double param_2);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,ushort param_2);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,__uint64 param_2);
bool __thiscall CParam::CParam::AddValue(CParam *this,char *param_1,__int64 param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,IParam **param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,double *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,ushort *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,__uint64 *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,__int64 *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,long *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,ulong *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,int *param_2);
bool __thiscall CParam::CParam::GetValue(CParam *this,char *param_1,bool *param_2);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,IParam *param_2);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,double param_2);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,ushort param_2);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,__uint64 param_2);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,__int64 param_2);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,ulong param_2);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,uint param_2);
bool __thiscall CParam::CParam::SetValue(CParam *this,char *param_1,int param_2);
bool __thiscall CParam::CParam::DelKey(CParam *this,char *param_1);
void __thiscall CParam::CParam::Clear(CParam *this);
bool __thiscall CParam::CParam::GetData(CParam *this,void **param_1,int *param_2);
char * __thiscall CParam::CParam::GetIPAddress(CParam *this);
ushort __thiscall CParam::CParam::GetPort(CParam *this);
bool __thiscall CParam::CParam::IsEncrypted(CParam *this);
bool __thiscall CParam::CParam::GetURL(CParam *this,char **param_1,int *param_2);
bool __thiscall CParam::CParam::GetZipURL(CParam *this,char **param_1,int *param_2);
bool __thiscall CParam::CParam::GetEncryptURL(CParam *this,char **param_1,int *param_2,char *param_3,bool param_4);
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
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __alloca_probe(void);
void __RTDynamicCast(void);
void _CIcos(void);
double __cdecl floor(double _X);
void _CIsin(void);
void __cdecl local_unwind4(void);
void __cdecl setjmp3(void);
void Unwind@6079c440(void);
void Unwind@6079c463(void);
void Unwind@6079c46c(void);
void Unwind@6079c4b0(void);
void Unwind@6079c4e0(void);
void Unwind@6079c520(void);
void Unwind@6079c550(void);
void Unwind@6079c590(void);
void Unwind@6079c5c0(void);
void Unwind@6079c5f0(void);
void Unwind@6079c630(void);
void Unwind@6079c63c(void);
void Unwind@6079c680(void);
void Unwind@6079c689(void);
void Unwind@6079c6b0(void);
void Unwind@6079c6e0(void);
void Unwind@6079c6fa(void);
void Unwind@6079c730(void);
void Unwind@6079c770(void);
void Unwind@6079c778(void);
void Unwind@6079c7a0(void);
void Unwind@6079c7d0(void);
void Unwind@6079c810(void);
void Unwind@6079c850(void);
void Unwind@6079c880(void);
void Unwind@6079c88b(void);
void Unwind@6079c8d0(void);
void Unwind@6079c900(void);
void Unwind@6079c930(void);
void Unwind@6079c939(void);
void Unwind@6079c960(void);
void Unwind@6079c990(void);
void Unwind@6079c9c0(void);
void Unwind@6079c9f0(void);
void Unwind@6079c9f9(void);
void Unwind@6079ca02(void);
void Unwind@6079ca0b(void);
void Unwind@6079ca14(void);
void Unwind@6079ca1d(void);
void Unwind@6079ca26(void);
void Unwind@6079ca2f(void);
void Unwind@6079ca38(void);
void Unwind@6079ca41(void);
void Unwind@6079ca4a(void);
void Unwind@6079ca53(void);
void Unwind@6079ca5c(void);
void Unwind@6079ca65(void);
void Unwind@6079ca6e(void);
void Unwind@6079ca77(void);
void Unwind@6079ca80(void);
void Unwind@6079ca89(void);
void Unwind@6079ca92(void);
void Unwind@6079ca9b(void);
void Unwind@6079caa4(void);
void Unwind@6079caad(void);
void Unwind@6079cab6(void);
void Unwind@6079cabf(void);
void Unwind@6079cac8(void);
void Unwind@6079cad1(void);
void Unwind@6079cb10(void);
void Unwind@6079cb19(void);
void Unwind@6079cb22(void);
void Unwind@6079cb2b(void);
void Unwind@6079cb34(void);
void Unwind@6079cb3d(void);
void Unwind@6079cb70(void);
void Unwind@6079cb79(void);
void Unwind@6079cb82(void);
void Unwind@6079cbb0(void);
void Unwind@6079cbb9(void);
void Unwind@6079cbe0(void);
void Unwind@6079cbe8(void);
void Unwind@6079cbf4(void);
void Unwind@6079cc02(void);
void Unwind@6079cc30(void);
void Unwind@6079cc60(void);
void Unwind@6079cc68(void);
void Unwind@6079cc90(void);
void Unwind@6079ccc0(void);
void Unwind@6079ccc9(void);
void Unwind@6079ccf0(void);
void Unwind@6079cd20(void);
void Unwind@6079cd2c(void);
void Unwind@6079cd70(void);
void Unwind@6079cd79(void);
void Unwind@6079cda0(void);
void Unwind@6079cdd0(void);
void Unwind@6079ce00(void);
void Unwind@6079ce0c(void);
void Unwind@6079ce18(void);
void Unwind@6079ce24(void);
void Unwind@6079ce30(void);
void Unwind@6079ce3c(void);
void Unwind@6079ce48(void);
void Unwind@6079ce54(void);
void Unwind@6079ce60(void);
void Unwind@6079ce6c(void);
void Unwind@6079ce78(void);
void Unwind@6079ce84(void);
void Unwind@6079ce90(void);
void Unwind@6079ce9c(void);
void Unwind@6079cea8(void);
void Unwind@6079ceb4(void);
void Unwind@6079cec0(void);
void Unwind@6079cecc(void);
void Unwind@6079ced8(void);
void Unwind@6079cee3(void);
void Unwind@6079ceef(void);
void Unwind@6079cefb(void);
void Unwind@6079cf07(void);
void Unwind@6079cf50(void);
void Unwind@6079cf5b(void);
void Unwind@6079cf67(void);
void Unwind@6079cfc0(void);
void __thiscall CHgGDImageFrame::Unwind@6079d000(CHgGDImageFrame *this);
void Unwind@6079d020(void);
void Unwind@6079d060(void);
void Unwind@6079d068(void);
void Unwind@6079d090(void);
void Unwind@6079d0c0(void);
void Unwind@6079d0f0(void);
void Unwind@6079d120(void);
void Unwind@6079d150(void);
void __thiscall CHgGDImageFrame::Unwind@6079d180(CHgGDImageFrame *this);
void Unwind@6079d1a0(void);
void Unwind@6079d1d0(void);
void Unwind@6079d1d8(void);
void Unwind@6079d1e1(void);
void Unwind@6079d220(void);
void Unwind@6079d250(void);
void Unwind@6079d280(void);
void Unwind@6079d28c(void);
void Unwind@6079d2d0(void);
void Unwind@6079d310(void);
void Unwind@6079d340(void);
void Unwind@6079d349(void);
void Unwind@6079d370(void);
void Unwind@6079d378(void);
void Unwind@6079d383(void);
void Unwind@6079d3c0(void);
void Unwind@6079d3f0(void);
void Unwind@6079d420(void);
void Unwind@6079d450(void);
void Unwind@6079d480(void);
void Unwind@6079d48c(void);
void Unwind@6079d498(void);
void Unwind@6079d4a4(void);
void Unwind@6079d4b0(void);
void Unwind@6079d4f0(void);
void Unwind@6079d4f8(void);
void Unwind@6079d520(void);
void Unwind@6079d550(void);
void Unwind@6079d558(void);
void Unwind@6079d580(void);
void Unwind@6079d588(void);
void __thiscall CHgGDImageFrame::Unwind@6079d5b0(CHgGDImageFrame *this);
void Unwind@6079d5d0(void);
void Unwind@6079d600(void);
void Unwind@6079d630(void);
void Unwind@6079d670(void);
void Unwind@6079d679(void);
void Unwind@6079d6a0(void);
void Unwind@6079d6ac(void);
void Unwind@6079d6b8(void);
void Unwind@6079d700(void);
void Unwind@6079d708(void);
void Unwind@6079d730(void);
void Unwind@6079d738(void);
void Unwind@6079d780(void);
void Unwind@6079d7c0(void);
void Unwind@6079d7c8(void);
void Unwind@6079d7d3(void);
void Unwind@6079d7df(void);
void Unwind@6079d810(void);
void Unwind@6079d840(void);
void Unwind@6079d870(void);
void Unwind@6079d8b0(void);
void Unwind@6079d8f0(void);
void Unwind@6079d930(void);
void Unwind@6079d970(void);
void Unwind@6079da20(void);
void Unwind@6079da60(void);
void Unwind@6079da90(void);
void Unwind@6079da98(void);
void Unwind@6079daa0(void);
void Unwind@6079daa9(void);
void Unwind@6079dab2(void);
void Unwind@6079dae0(void);
void Unwind@6079db10(void);
void Unwind@6079db18(void);
void Unwind@6079db24(void);
void Unwind@6079db50(void);
void Unwind@6079db80(void);
void Unwind@6079db89(void);
void Unwind@6079db92(void);
void Unwind@6079db9b(void);
void Unwind@6079dbf0(void);
void Unwind@6079dc30(void);
void __thiscall CHgGDImageFrame::Unwind@6079dc60(CHgGDImageFrame *this);
void Unwind@6079dc80(void);
void Unwind@6079dca0(void);
void Unwind@6079dca8(void);
void __thiscall CHgGDImageFrame::Unwind@6079dcd0(CHgGDImageFrame *this);
void Unwind@6079dcf0(void);
void Unwind@6079dd20(void);
void Unwind@6079dd28(void);
void Unwind@6079dd50(void);
void Unwind@6079dd58(void);
void Unwind@6079dd80(void);
void Unwind@6079ddc0(void);
void Unwind@6079de30(void);
void Unwind@6079de60(void);
void Unwind@6079de90(void);
void Unwind@6079de9c(void);
void Unwind@6079dea8(void);
void Unwind@6079deb4(void);
void Unwind@6079dec0(void);
void Unwind@6079df00(void);
void Unwind@6079df40(void);
void Unwind@6079df4b(void);
void Unwind@6079df80(void);
void Unwind@6079dfc0(void);
void Unwind@6079dfc8(void);
void __thiscall CHgGDImageFrame::Unwind@6079dff0(CHgGDImageFrame *this);
void Unwind@6079e010(void);
void Unwind@6079e019(void);
void Unwind@6079e040(void);
void Unwind@6079e04b(void);
void Unwind@6079e057(void);
void Unwind@6079e062(void);
void Unwind@6079e06e(void);
void Unwind@6079e07a(void);
void Unwind@6079e085(void);
void Unwind@6079e091(void);
void Unwind@6079e09d(void);
void Unwind@6079e0a9(void);
void Unwind@6079e0b5(void);
void Unwind@6079e0c1(void);
void Unwind@6079e0cd(void);
void Unwind@6079e0d9(void);
void Unwind@6079e0e5(void);
void Unwind@6079e0f1(void);
void Unwind@6079e0fd(void);
void Unwind@6079e109(void);
void Unwind@6079e115(void);
void Unwind@6079e121(void);
void Unwind@6079e12d(void);
void Unwind@6079e170(void);
void Unwind@6079e1a0(void);
void Unwind@6079e1a8(void);
void Unwind@6079e1b3(void);
void Unwind@6079e1e0(void);
void Unwind@6079e210(void);
void Unwind@6079e240(void);
void Unwind@6079e248(void);
void Unwind@6079e280(void);
void Unwind@6079e288(void);
void Unwind@6079e293(void);
void Unwind@6079e29e(void);
void Unwind@6079e2d0(void);
void Unwind@6079e2d8(void);
void Unwind@6079e2e3(void);
void Unwind@6079e2ee(void);
void Unwind@6079e320(void);
void Unwind@6079e328(void);
void Unwind@6079e333(void);
void Unwind@6079e360(void);
void Unwind@6079e368(void);
void Unwind@6079e373(void);
void Unwind@6079e3a0(void);
void Unwind@6079e3d0(void);
void Unwind@6079e3d8(void);
void Unwind@6079e400(void);
void Unwind@6079e460(void);
void Unwind@6079e468(void);
void Unwind@6079e474(void);
void Unwind@6079e480(void);
void Unwind@6079e48e(void);
void Unwind@6079e49c(void);
void Unwind@6079e4d0(void);
void Unwind@6079e4d8(void);
void Unwind@6079e4e4(void);
void Unwind@6079e4f0(void);
void Unwind@6079e4fe(void);
void Unwind@6079e50c(void);
void Unwind@6079e540(void);
void Unwind@6079e570(void);
void Unwind@6079e579(void);
void Unwind@6079e5a0(void);
void Unwind@6079e5d0(void);
void Unwind@6079e600(void);
void Unwind@6079e630(void);
void Unwind@6079e660(void);
void Unwind@6079e690(void);
void Unwind@6079e6c0(void);
void Unwind@6079e6f0(void);
void Unwind@6079e6f8(void);
void Unwind@6079e720(void);
void Unwind@6079e728(void);
void Unwind@6079e733(void);
void Unwind@6079e741(void);
void Unwind@6079e770(void);
void Unwind@6079e778(void);
void Unwind@6079e7a0(void);
void Unwind@6079e7a8(void);
void Unwind@6079e7b3(void);
void Unwind@6079e7c1(void);
void Unwind@6079e7f0(void);
void Unwind@6079e7f9(void);
void Unwind@6079e840(void);
void Unwind@6079e870(void);
void Unwind@6079e8a0(void);
void Unwind@6079e8ac(void);
void Unwind@6079e8b8(void);
void Unwind@6079e900(void);
void Unwind@6079e90b(void);
void Unwind@6079e916(void);
void Unwind@6079e921(void);
void Unwind@6079e950(void);
void Unwind@6079e95c(void);
void Unwind@6079e968(void);
void Unwind@6079e974(void);
void Unwind@6079e980(void);
void Unwind@6079e98c(void);
void Unwind@6079e998(void);
void Unwind@6079e9a4(void);
void Unwind@6079e9b0(void);
void Unwind@6079e9bc(void);
void Unwind@6079e9c8(void);
void Unwind@6079e9d4(void);
void Unwind@6079e9e0(void);
void Unwind@6079e9ec(void);
void Unwind@6079e9f8(void);
void Unwind@6079ea04(void);
void Unwind@6079ea10(void);
void Unwind@6079ea1c(void);
void Unwind@6079ea28(void);
void Unwind@6079ea34(void);
void Unwind@6079ea40(void);
void Unwind@6079ea4c(void);
void Unwind@6079ea58(void);
void Unwind@6079ea64(void);
void Unwind@6079ea6f(void);
void Unwind@6079ea7b(void);
void Unwind@6079ea87(void);
void Unwind@6079ea93(void);
void Unwind@6079ea9e(void);
void Unwind@6079eaaa(void);
void Unwind@6079eab6(void);
void Unwind@6079eac2(void);
void Unwind@6079eace(void);
void Unwind@6079eada(void);
void Unwind@6079eae6(void);
void Unwind@6079eaf2(void);
void Unwind@6079eafe(void);
void Unwind@6079eb0a(void);
void Unwind@6079eb16(void);
void Unwind@6079eb22(void);
void Unwind@6079eb2e(void);
void Unwind@6079eb3a(void);
void Unwind@6079eb46(void);
void Unwind@6079eb52(void);
void Unwind@6079eb5e(void);
void Unwind@6079eb6a(void);
void Unwind@6079eb76(void);
void Unwind@6079eb82(void);
void Unwind@6079eb8e(void);
void Unwind@6079ebd0(void);
void Unwind@6079ebd8(void);
void Unwind@6079ec00(void);
void Unwind@6079ec08(void);
void Unwind@6079ec30(void);
void Unwind@6079ec3c(void);
void Unwind@6079ec70(void);
void Unwind@6079eca0(void);
void Unwind@6079eca8(void);
void Unwind@6079ecb3(void);
void Unwind@6079ece0(void);
void Unwind@6079ed10(void);
void Unwind@6079ed40(void);
void Unwind@6079ed48(void);
void Unwind@6079ed56(void);
void Unwind@6079ed65(void);
void Unwind@6079ed74(void);
void Unwind@6079ed83(void);
void Unwind@6079ed92(void);
void Unwind@6079eda0(void);
void Unwind@6079edad(void);
void Unwind@6079ede0(void);
void Unwind@6079ede8(void);
void Unwind@6079ee10(void);
void Unwind@6079ee1b(void);
void Unwind@6079ee40(void);
void Unwind@6079ee70(void);
void Unwind@6079eea0(void);
void Unwind@6079eea8(void);
void Unwind@6079eeb3(void);
void Unwind@6079eec0(void);
void Unwind@6079eef0(void);
void Unwind@6079eef8(void);
void Unwind@6079ef03(void);
void Unwind@6079ef12(void);
void Unwind@6079ef21(void);
void Unwind@6079ef30(void);
void Unwind@6079ef3f(void);
void Unwind@6079ef4c(void);
void Unwind@6079ef5b(void);
void Unwind@6079ef65(void);
void Unwind@6079ef6f(void);
void Unwind@6079ef79(void);
void Unwind@6079ef83(void);
void Unwind@6079ef8d(void);
void Unwind@6079ef97(void);
void Unwind@6079efa1(void);
void Unwind@6079efab(void);
void Unwind@6079efb5(void);
void Unwind@6079efbf(void);
void Unwind@6079efc9(void);
void Unwind@6079efd3(void);
void Unwind@6079f000(void);
void Unwind@6079f008(void);
void Unwind@6079f030(void);
void Unwind@6079f03b(void);
void Unwind@6079f080(void);
void Unwind@6079f0b0(void);
void Unwind@6079f0bc(void);
void Unwind@6079f0c7(void);
void Unwind@6079f0d2(void);
void Unwind@6079f0de(void);
void Unwind@6079f0e9(void);
void Unwind@6079f130(void);
void Unwind@6079f13c(void);
void Unwind@6079f147(void);
void Unwind@6079f152(void);
void Unwind@6079f15e(void);
void Unwind@6079f169(void);
void Unwind@6079f174(void);
void Unwind@6079f1b0(void);
void Unwind@6079f1e0(void);
void Unwind@6079f210(void);
void Unwind@6079f21c(void);
void Unwind@6079f228(void);
void Unwind@6079f234(void);
void Unwind@6079f270(void);
void Unwind@6079f278(void);
void Unwind@6079f283(void);
void Unwind@6079f28e(void);
void Unwind@6079f2c0(void);
void Unwind@6079f2f0(void);
void Unwind@6079f2f8(void);
void Unwind@6079f330(void);
void Unwind@6079f360(void);
void Unwind@6079f368(void);
void Unwind@6079f370(void);
void Unwind@6079f3a0(void);
void Unwind@6079f3d0(void);
void Unwind@6079f410(void);
void Unwind@6079f418(void);
void Unwind@6079f420(void);
void Unwind@6079f450(void);
void Unwind@6079f45c(void);
void Unwind@6079f490(void);
void Unwind@6079f4c0(void);
void Unwind@6079f4f0(void);
void Unwind@6079f520(void);
void Unwind@6079f550(void);
void Unwind@6079f590(void);
void Unwind@6079f598(void);
void Unwind@6079f5e0(void);
void Unwind@6079f610(void);
void Unwind@6079f618(void);
void Unwind@6079f640(void);
void Unwind@6079f648(void);
void Unwind@6079f680(void);
void Unwind@6079f688(void);
void Unwind@6079f6b0(void);
void Unwind@6079f6f0(void);
void Unwind@6079f6fe(void);
void Unwind@6079f740(void);
void Unwind@6079f748(void);
void Unwind@6079f755(void);
void Unwind@6079f761(void);
void Unwind@6079f7a0(void);
void Unwind@6079f7aa(void);
void Unwind@6079f7d0(void);
void Unwind@6079f7db(void);
void Unwind@6079f820(void);
void Unwind@6079f82c(void);
void Unwind@6079f83a(void);
void Unwind@6079f880(void);
void Unwind@6079f888(void);
void Unwind@6079f896(void);
void Unwind@6079f8a5(void);
void Unwind@6079f8b4(void);
void Unwind@6079f8c3(void);
void Unwind@6079f8d2(void);
void Unwind@6079f8e0(void);
void Unwind@6079f8ed(void);
void Unwind@6079f920(void);
void Unwind@6079f928(void);
void Unwind@6079f933(void);
void Unwind@6079f942(void);
void Unwind@6079f951(void);
void Unwind@6079f960(void);
void Unwind@6079f96f(void);
void Unwind@6079f97c(void);
void Unwind@6079f9b0(void);
void Unwind@6079f9f0(void);
void Unwind@6079f9fc(void);
void Unwind@6079fa07(void);
void Unwind@6079fa12(void);
void Unwind@6079fa1a(void);
void Unwind@6079fa40(void);
void Unwind@6079fa4c(void);
void Unwind@6079fa80(void);
void Unwind@6079fab0(void);
void Unwind@6079fab9(void);
void Unwind@6079fae0(void);
void Unwind@6079faea(void);
void Unwind@6079fb10(void);
void Unwind@6079fb18(void);
void Unwind@6079fb23(void);
void Unwind@6079fb2e(void);
void Unwind@6079fb60(void);
void Unwind@6079fb90(void);
void Unwind@6079fb98(void);
void Unwind@6079fbc0(void);
void Unwind@6079fbf0(void);
void Unwind@6079fc20(void);
void Unwind@6079fc50(void);
void Unwind@6079fc58(void);
void Unwind@6079fc80(void);
void Unwind@6079fcb0(void);
void Unwind@6079fcf0(void);
void Unwind@6079fd20(void);
void Unwind@6079fd29(void);
void Unwind@6079fd50(void);
void Unwind@6079fd5b(void);
void Unwind@6079fd90(void);
void Unwind@6079fdc0(void);
void Unwind@6079fdc8(void);
void Unwind@6079fdd1(void);
void Unwind@6079fdda(void);
void Unwind@6079fde2(void);
void Unwind@6079fdea(void);
void Unwind@6079fdf3(void);
void Unwind@6079fdfc(void);
void Unwind@6079fe30(void);
void Unwind@6079fe38(void);
void Unwind@6079fe43(void);
void Unwind@6079fe4f(void);
void Unwind@6079fe5b(void);
void Unwind@6079fe67(void);
void Unwind@6079fe90(void);
void Unwind@6079fe98(void);
void Unwind@6079fea3(void);
void Unwind@6079feaf(void);
void Unwind@6079febb(void);
void Unwind@6079fec7(void);
void Unwind@6079fed2(void);
void Unwind@6079fedd(void);
void Unwind@6079ff10(void);
void Unwind@6079ff1b(void);
void Unwind@6079ff26(void);
void Unwind@6079ff60(void);
void Unwind@6079ffa0(void);
void Unwind@6079ffd0(void);
void Unwind@6079ffdc(void);
void Unwind@607a0020(void);
void Unwind@607a0050(void);
void Unwind@607a0059(void);
void Unwind@607a0062(void);
void Unwind@607a0070(void);
void Unwind@607a007a(void);
void Unwind@607a0083(void);
void Unwind@607a008c(void);
void Unwind@607a0095(void);
void Unwind@607a009e(void);
void Unwind@607a00a7(void);
void Unwind@607a00b0(void);
void Unwind@607a00b9(void);
void Unwind@607a00c2(void);
void Unwind@607a00cb(void);
void Unwind@607a00d4(void);
void Unwind@607a00dd(void);
void Unwind@607a00e6(void);
void Unwind@607a0130(void);
void Unwind@607a0139(void);
void Unwind@607a0144(void);
void Unwind@607a014f(void);
void Unwind@607a0158(void);
void Unwind@607a0161(void);
void Unwind@607a016a(void);
void Unwind@607a0173(void);
void Unwind@607a017c(void);
void Unwind@607a01b0(void);
void Unwind@607a01e0(void);
void Unwind@607a01e9(void);
void Unwind@607a0220(void);
void Unwind@607a0250(void);
void Unwind@607a0280(void);
void Unwind@607a02b0(void);
void Unwind@607a02b9(void);
void Unwind@607a02e0(void);
void Unwind@607a0320(void);
void Unwind@607a0360(void);
void Unwind@607a03a0(void);
void Unwind@607a03a9(void);
void Unwind@607a03e0(void);
void Unwind@607a0420(void);
void Unwind@607a0429(void);
void Unwind@607a0432(void);
void Unwind@607a0470(void);
void Unwind@607a0479(void);
void Unwind@607a04a0(void);
void Unwind@607a04e0(void);
void Unwind@607a0520(void);
void Unwind@607a0550(void);
void Unwind@607a0559(void);
void __thiscall CHgToolApp::~CHgToolApp(void);
void FUN_607a0660(void);
void FUN_607a06a0(void);
void FUN_607a06e0(void);
void FUN_607a0720(void);
void FUN_607a0750(void);
void FUN_607a0761(void);
void FUN_607a0780(void);
void FUN_607a0790(void);
void FUN_607a07d0(void);
void FUN_607a0800(void);
void FUN_607a082a(void);
void FUN_607a0840(void);
undefined8 FUN_60839000(LPCSTR param_1,int param_2);
void FUN_608390bc(void);
BOOL FUN_608390cd(HDC param_1,int param_2,int param_3,LPCSTR param_4,int param_5);
BOOL FUN_60839116(HDC param_1,LPCSTR param_2,int param_3,LPSIZE param_4);
int FUN_6083915c(HDC param_1,LPCSTR param_2,int param_3,LPRECT param_4,UINT param_5);
HFONT FUN_608391f1(int param_1,int param_2,int param_3,int param_4,int param_5,DWORD param_6,DWORD param_7,DWORD param_8,uint param_9,DWORD param_10,DWORD param_11,DWORD param_12,DWORD param_13,LPCSTR param_14);
bool FUN_6083927b(byte param_1);
void FUN_60839293(uint param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6);
void FUN_608392b7(uint param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,LPCSTR param_7,LPBOOL param_8);
uint FUN_608392db(HIMC param_1,DWORD param_2,LPSTR param_3,uint param_4);

