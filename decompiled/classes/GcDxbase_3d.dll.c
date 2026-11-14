// Module: GcDxbase_3d.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_10001000 @ 10001000 size=14 ---- */

void FUN_10001000(void *param_1)

{
  operator_delete(param_1);
  return;
}



/* ---- FUN_10001010 @ 10001010 size=90 ---- */

undefined4 FUN_10001010(HINSTANCE__ *param_1,int param_2)

{
  int iVar1;
  CDynLinkLibrary *this;
  
  if (param_2 == 1) {
    iVar1 = AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000d474,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    this = operator_new(0x40);
    if (this != (CDynLinkLibrary *)0x0) {
      CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_1000d474,0);
      return 1;
    }
  }
  else if (param_2 == 0) {
    AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000d474,0);
  }
  return 1;
}



/* ---- FUN_10001070 @ 10001070 size=40 ---- */

undefined4 FUN_10001070(undefined4 param_1,int param_2)

{
  AFX_MODULE_STATE *pAVar1;
  
  if (param_2 == 1) {
    pAVar1 = AfxGetModuleState();
    *(undefined4 *)(pAVar1 + 0x1c) = *(undefined4 *)(pAVar1 + 0x20);
    *(undefined4 *)(pAVar1 + 0x28) = *(undefined4 *)(pAVar1 + 0x2c);
    *(undefined4 *)(pAVar1 + 0x20) = 0;
    *(undefined4 *)(pAVar1 + 0x2c) = 0;
  }
  return 1;
}



/* ---- CGcDxGameLobbyView @ 100010a0 size=26 ---- */

/* public: __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView(class CGcDxGameLobbyView const &) */

CGcDxGameLobbyView * __thiscall
CGcDxGameLobbyView::CGcDxGameLobbyView(CGcDxGameLobbyView *this,CGcDxGameLobbyView *param_1)

{
                    /* 0x10a0  4  ??0CGcDxGameLobbyView@@QAE@ABV0@@Z */
  CGameLobbyView::CGameLobbyView((CGameLobbyView *)this,(CGameLobbyView *)param_1);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- operator= @ 100010c0 size=20 ---- */

/* public: class CGcDxGameLobbyView & __thiscall CGcDxGameLobbyView::operator=(class
   CGcDxGameLobbyView const &) */

CGcDxGameLobbyView * __thiscall
CGcDxGameLobbyView::operator=(CGcDxGameLobbyView *this,CGcDxGameLobbyView *param_1)

{
                    /* 0x10c0  18  ??4CGcDxGameLobbyView@@QAEAAV0@ABV0@@Z */
  CGameLobbyView::operator=((CGameLobbyView *)this,(CGameLobbyView *)param_1);
  return (CGcDxGameLobbyView *)this;
}



/* ---- scalar_deleting_destructor @ 100010e0 size=82 ---- */

CGcDxGameLobbyView * __thiscall
CGcDxGameLobbyView::scalar_deleting_destructor(CGcDxGameLobbyView *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    ~CGcDxGameLobbyView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGcDxGameLobbyView *)this;
  }
  _eh_vector_destructor_iterator_(this,0x28,(int)this[-1].vftablePtr,~CGcDxGameLobbyView);
  if ((param_1 & 1) != 0) {
    operator_delete__((CGcDxGameLobbyView *)(this + -1));
  }
  return (CGcDxGameLobbyView *)(this + -1);
}



/* ---- CGcDxChannelLobbyView @ 10001140 size=26 ---- */

/* public: __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(class CGcDxChannelLobbyView const
   &) */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::CGcDxChannelLobbyView
          (CGcDxChannelLobbyView *this,CGcDxChannelLobbyView *param_1)

{
                    /* 0x1140  1  ??0CGcDxChannelLobbyView@@QAE@ABV0@@Z */
  CChannelLobbyView::CChannelLobbyView((CChannelLobbyView *)this,(CChannelLobbyView *)param_1);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- operator= @ 10001160 size=20 ---- */

/* public: class CGcDxChannelLobbyView & __thiscall CGcDxChannelLobbyView::operator=(class
   CGcDxChannelLobbyView const &) */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::operator=(CGcDxChannelLobbyView *this,CGcDxChannelLobbyView *param_1)

{
                    /* 0x1160  17  ??4CGcDxChannelLobbyView@@QAEAAV0@ABV0@@Z */
  CChannelLobbyView::operator=((CChannelLobbyView *)this,(CChannelLobbyView *)param_1);
  return (CGcDxChannelLobbyView *)this;
}



/* ---- scalar_deleting_destructor @ 10001180 size=82 ---- */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::scalar_deleting_destructor(CGcDxChannelLobbyView *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    ~CGcDxChannelLobbyView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CGcDxChannelLobbyView *)this;
  }
  _eh_vector_destructor_iterator_(this,0x30,(int)this[-1].vftablePtr,~CGcDxChannelLobbyView);
  if ((param_1 & 1) != 0) {
    operator_delete__((CGcDxChannelLobbyView *)(this + -1));
  }
  return (CGcDxChannelLobbyView *)(this + -1);
}



/* ---- SetGameInFlag @ 100011e0 size=13 ---- */

/* public: void __thiscall CGcDxGameWnd::SetGameInFlag(int) */

void __thiscall CGcDxGameWnd::SetGameInFlag(CGcDxGameWnd *this,int param_1)

{
                    /* 0x11e0  79  ?SetGameInFlag@CGcDxGameWnd@@QAEXH@Z */
  (this->CGcDxGameWnd_data).offset_0x184 = param_1;
  return;
}



/* ---- IsMinimizeGameWnd @ 100011f0 size=7 ---- */

/* public: int __thiscall CGcDxGameWnd::IsMinimizeGameWnd(void) */

int __thiscall CGcDxGameWnd::IsMinimizeGameWnd(CGcDxGameWnd *this)

{
                    /* 0x11f0  52  ?IsMinimizeGameWnd@CGcDxGameWnd@@QAEHXZ */
  return (this->CGcDxGameWnd_data).offset_0x18c;
}



/* ---- SetMinimizeGameWnd @ 10001200 size=13 ---- */

/* public: void __thiscall CGcDxGameWnd::SetMinimizeGameWnd(int) */

void __thiscall CGcDxGameWnd::SetMinimizeGameWnd(CGcDxGameWnd *this,int param_1)

{
                    /* 0x1200  81  ?SetMinimizeGameWnd@CGcDxGameWnd@@QAEXH@Z */
  (this->CGcDxGameWnd_data).offset_0x18c = param_1;
  return;
}



/* ---- CGcDxbaseApp @ 10001210 size=27 ---- */

/* public: __thiscall CGcDxbaseApp::CGcDxbaseApp(void) */

CGcDxbaseApp * __thiscall CGcDxbaseApp::CGcDxbaseApp(CGcDxbaseApp *this)

{
                    /* 0x1210  10  ??0CGcDxbaseApp@@QAE@XZ */
  CBaseApp::CBaseApp((CBaseApp *)this);
  this->vftablePtr = &_vftable_;
  timeBeginPeriod(1);
  return this;
}



/* ---- ~CGcDxbaseApp @ 10001230 size=26 ---- */

/* public: virtual __thiscall CGcDxbaseApp::~CGcDxbaseApp(void) */

void __thiscall CGcDxbaseApp::~CGcDxbaseApp(CGcDxbaseApp *this)

{
                    /* 0x1230  16  ??1CGcDxbaseApp@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  timeEndPeriod(1);
                    /* WARNING: Could not recover jumptable at 0x10001244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CBaseApp::~CBaseApp((CBaseApp *)this);
  return;
}



/* ---- CGcDxbaseApp::InitInstance @ 10001250 size=74 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::InitInstance(void) */

int __thiscall CGcDxbaseApp::CGcDxbaseApp__InitInstance(CGcDxbaseApp *this)

{
  int iVar1;
  
                    /* 0x1250  50  ?InitInstance@CGcDxbaseApp@@UAEHXZ */
  CoInitialize((LPVOID)0x0);
  CreateInputD8();
  CreateDxDevice9();
  neon::frw::Resource();
  neon::ctrl::UIInputManager();
  neon::dev::Sound(false);
  neon::frw::App();
  neon::frw::FileManager();
  iVar1 = CBaseApp::InitInstance((CBaseApp *)this);
  return (uint)(iVar1 != 0);
}



/* ---- CGcDxbaseApp::ExitInstance @ 100012a0 size=60 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::ExitInstance(void) */

int __thiscall CGcDxbaseApp::CGcDxbaseApp__ExitInstance(CGcDxbaseApp *this)

{
  int iVar1;
  
                    /* 0x12a0  37  ?ExitInstance@CGcDxbaseApp@@UAEHXZ */
  neon::frw::DestroyResource();
  neon::ctrl::DestroyUIInputManager();
  neon::dev::DestroySound();
  neon::frw::DestroyApp();
  neon::frw::DestroyFileManager();
  ReleaseInput();
  ReleaseDxDevice();
  CoUninitialize();
                    /* WARNING: Could not recover jumptable at 0x100012d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CBaseApp::ExitInstance((CBaseApp *)this);
  return iVar1;
}



/* ---- CGcDxbaseApp::OnIdle @ 100012e0 size=30 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::OnIdle(long) */

int __thiscall CGcDxbaseApp::CGcDxbaseApp__OnIdle(CGcDxbaseApp *this,long param_1)

{
  CApp *this_00;
  
                    /* 0x12e0  67  ?OnIdle@CGcDxbaseApp@@UAEHJ@Z */
  this_00 = neon::frw::SApp::Instance();
  neon::frw::CApp::Run(this_00);
  Sleep(1);
  return 1;
}



/* ---- CGcDxbaseApp::PreTranslateMessage @ 10001300 size=30 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::PreTranslateMessage(struct tagMSG *) */

int __thiscall CGcDxbaseApp::CGcDxbaseApp__PreTranslateMessage(CGcDxbaseApp *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* 0x1300  75  ?PreTranslateMessage@CGcDxbaseApp@@UAEHPAUtagMSG@@@Z */
  if (*(int *)(param_1 + 4) == 0x104) {
    return 1;
  }
  iVar1 = CWinThread::PreTranslateMessage((CWinThread *)this,param_1);
  return iVar1;
}



/* ---- FUN_10001320 @ 10001320 size=12 ---- */

void FUN_10001320(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
  return;
}



/* ---- vfunction4 @ 10001330 size=1 ---- */

void __thiscall CChannelMainWnd::vfunction4(CChannelMainWnd *this)

{
  return;
}



/* ---- scalar_deleting_destructor @ 10001340 size=102 ---- */

CBaseApp * __thiscall CGcDxbaseApp::scalar_deleting_destructor(CGcDxbaseApp *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGcDxbaseApp::~CGcDxbaseApp */
    this->vftablePtr = &_vftable_;
    timeEndPeriod(1);
    CBaseApp::~CBaseApp((CBaseApp *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CBaseApp *)this;
  }
  _eh_vector_destructor_iterator_(this,0xa8,(int)this[-1].vftablePtr,~CGcDxbaseApp);
  if ((param_1 & 1) != 0) {
    operator_delete__((CBaseApp *)(this + -1));
  }
  return (CBaseApp *)(this + -1);
}



/* ---- CGcDxbaseApp::LoadViewObjects @ 100013b0 size=587 ---- */

/* public: virtual bool __thiscall CGcDxbaseApp::LoadViewObjects(void) */

bool __thiscall CGcDxbaseApp::CGcDxbaseApp__LoadViewObjects(CGcDxbaseApp *this)

{
  uint uVar1;
  CHanChatView *pCVar2;
  IGod *pIVar3;
  CGcDxGameLobbyView *pCVar4;
  CGcDxChannelLobbyView *pCVar5;
  CChannelMainWnd *this_00;
  CMiniChannelListView *this_01;
  CMainFrameView *this_02;
  CDialogCmp *this_03;
  undefined4 uVar6;
  undefined1 auStack_12 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13b0  54  ?LoadViewObjects@CGcDxbaseApp@@UAE_NXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004607;
  local_c = ExceptionList;
  uVar1 = DAT_1000d460 ^ (uint)(auStack_12 + -0xe);
  ExceptionList = &local_c;
  pCVar2 = operator_new(0x10);
  local_4 = 0;
  if (pCVar2 == (CHanChatView *)0x0) {
    pCVar2 = (CHanChatView *)0x0;
  }
  else {
    CHanChatView::CHanChatView(pCVar2,0,1);
    pCVar2->vftablePtr = &CHanChatView::vftable;
  }
  local_4 = 0xffffffff;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(pCVar2,1,uVar1);
  pCVar2 = operator_new(0x10);
  local_c = (void *)0x1;
  if (pCVar2 == (CHanChatView *)0x0) {
    pCVar2 = (CHanChatView *)0x0;
  }
  else {
    CHanChatView::CHanChatView(pCVar2,1,1);
    pCVar2->vftablePtr = &CHanChatView::vftable;
  }
  local_c = (void *)0xffffffff;
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(pCVar2,1);
  pCVar4 = operator_new(0x28);
  if (pCVar4 == (CGcDxGameLobbyView *)0x0) {
    pCVar4 = (CGcDxGameLobbyView *)0x0;
  }
  else {
    pCVar4 = CGcDxGameLobbyView::CGcDxGameLobbyView(pCVar4);
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(pCVar4,1);
  pCVar5 = operator_new(0x30);
  if (pCVar5 == (CGcDxChannelLobbyView *)0x0) {
    pCVar5 = (CGcDxChannelLobbyView *)0x0;
  }
  else {
    this_00 = operator_new(0x110);
    if (this_00 == (CChannelMainWnd *)0x0) {
      this_00 = (CChannelMainWnd *)0x0;
    }
    else {
      CChannelMainWnd::CChannelMainWnd(this_00);
      this_00->vftablePtr = &CChannelMainWnd::vftable;
      this_00->vftablePtr = &CChannelMainWnd::vftable;
    }
    pCVar5 = CGcDxChannelLobbyView::CGcDxChannelLobbyView(pCVar5,"channel",(CWnd *)this_00,true);
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(pCVar5,1);
  this_01 = operator_new(0xc);
  if (this_01 == (CMiniChannelListView *)0x0) {
    this_01 = (CMiniChannelListView *)0x0;
  }
  else {
    CMiniChannelListView::CMiniChannelListView(this_01,0);
    this_01->vftablePtr = &CMiniChannelListView::vftable;
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_01,1);
  this_02 = operator_new(4);
  if (this_02 == (CMainFrameView *)0x0) {
    this_02 = (CMainFrameView *)0x0;
  }
  else {
    CMainFrameView::CMainFrameView(this_02);
    this_02->vftablePtr = &CMainFrameView::vftable;
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(this_02,1);
  this_03 = operator_new(8);
  if (this_03 == (CDialogCmp *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = CDialogCmp::CDialogCmp(this_03);
  }
  pIVar3 = God();
  (**(code **)(*(int *)pIVar3 + 0x34))(uVar6,1);
  ExceptionList = pCVar5;
  return true;
}



/* ---- scalar_deleting_destructor @ 10001600 size=31 ---- */

CHanChatView * __thiscall CHanChatView::scalar_deleting_destructor(CHanChatView *this,byte param_1)

{
  CHanChatView::~CHanChatView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CHanChatView *)this;
}



/* ---- scalar_deleting_destructor @ 10001620 size=31 ---- */

CMiniChannelListView * __thiscall
CMiniChannelListView::scalar_deleting_destructor(CMiniChannelListView *this,byte param_1)

{
  CMiniChannelListView::~CMiniChannelListView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CMiniChannelListView *)this;
}



/* ---- scalar_deleting_destructor @ 10001640 size=31 ---- */

CMainFrameView * __thiscall
CMainFrameView::scalar_deleting_destructor(CMainFrameView *this,byte param_1)

{
  CMainFrameView::~CMainFrameView(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CMainFrameView *)this;
}



/* ---- vfunction1 @ 10001660 size=8 ---- */

void __thiscall CChannelMainWnd::vfunction1(CChannelMainWnd *this,byte param_1)

{
  scalar_deleting_destructor((CChannelMainWnd *)&this[-1].field_0x4,param_1);
  return;
}



/* ---- vfunction3 @ 10001670 size=3 ---- */

void __thiscall CChannelMainWnd::vfunction3(CChannelMainWnd *this)

{
  return;
}



/* ---- vfunction67 @ 10001680 size=13 ---- */

void __thiscall CChannelMainWnd::vfunction67(CChannelMainWnd *this)

{
  EnableWindow(*(HWND *)&this->field_0x20,0);
  return;
}



/* ---- vfunction68 @ 10001690 size=13 ---- */

void __thiscall CChannelMainWnd::vfunction68(CChannelMainWnd *this)

{
  EnableWindow(*(HWND *)&this->field_0x20,1);
  return;
}



/* ---- scalar_deleting_destructor @ 100016a0 size=31 ---- */

CChannelMainWnd * __thiscall
CChannelMainWnd::scalar_deleting_destructor(CChannelMainWnd *this,byte param_1)

{
  CChannelMainWnd::~CChannelMainWnd(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CChannelMainWnd *)this;
}



/* ---- CGcDxbaseApp::LoadDefaultObjects @ 100016c0 size=78 ---- */

/* public: virtual bool __thiscall CGcDxbaseApp::LoadDefaultObjects(void) */

bool __thiscall CGcDxbaseApp::CGcDxbaseApp__LoadDefaultObjects(CGcDxbaseApp *this)

{
  CGameWnd *pCVar1;
  int iVar2;
  tagRECT local_10;
  
                    /* 0x16c0  53  ?LoadDefaultObjects@CGcDxbaseApp@@UAE_NXZ */
  CBaseApp::LoadDefaultObjects((CBaseApp *)this);
  pCVar1 = AfxGetGameWnd();
  GetClientRect(*(HWND *)(pCVar1 + 0x20),&local_10);
  iVar2 = (*this->vftablePtr->InitDX)
                    (this,local_10.right - local_10.left,local_10.bottom - local_10.top,false,false)
  ;
  return (bool)('\x01' - (iVar2 != 1));
}



/* ---- FUN_10001710 @ 10001710 size=106 ---- */

void * __cdecl FUN_10001710(uint param_1)

{
  AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
  *this;
  void *pvVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
  bVar2 = true;
  local_4 = 0;
  this = Loki::
         SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>
         ::Instance();
  pvVar1 = Loki::SmallObjAllocator::Allocate((SmallObjAllocator *)this,param_1,bVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
  ExceptionList = local_c;
  return pvVar1;
}



/* ---- FUN_10001780 @ 10001780 size=80 ---- */

void __fastcall FUN_10001780(int *param_1)

{
  AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>
  *this;
  int *piVar1;
  uint uVar2;
  
  *(int *)param_1[1] = *(int *)param_1[1] + -1;
  piVar1 = (int *)param_1[1];
  if (*piVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
    uVar2 = 4;
    this = Loki::
           SingletonHolder<Loki::AllocatorSingleton<Loki::ClassLevelLockable,4096,256,4,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::Mutex>,Loki::CreateStatic,Loki::LongevityLifetime::DieAsSmallObjectParent,Loki::ClassLevelLockable,Loki::Mutex>
           ::Instance();
    Loki::SmallObjAllocator::Deallocate((SmallObjAllocator *)this,piVar1,uVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1000d4a4);
    param_1[1] = 0;
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
  }
  return;
}



/* ---- CGcDxbaseApp::InitDX @ 100017d0 size=293 ---- */

/* public: virtual int __thiscall CGcDxbaseApp::InitDX(int,int,bool,bool) */

int __thiscall
CGcDxbaseApp::CGcDxbaseApp__InitDX
          (CGcDxbaseApp *this,int param_1,int param_2,bool param_3,bool param_4)

{
  bool bVar1;
  AFX_MODULE_STATE *pAVar2;
  CGameWnd *pCVar3;
  CApp *pCVar4;
  HINSTANCE__ *pHVar5;
  HWND__ *pHVar6;
  SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>
  *pSVar7;
  CBasicPoint<long> *pCVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  int local_20;
  int local_1c;
  CVisual *local_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x17d0  49  ?InitDX@CGcDxbaseApp@@UAEHHH_N0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004673;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PostBipLog(0x14a);
  local_18 = operator_new(0xc0);
  local_4 = 0;
  if (local_18 == (CVisual *)0x0) {
    local_18 = (CVisual *)0x0;
  }
  else {
    neon::visual::CVisual::CVisual(local_18);
    local_18->vftablePtr = &neon::visual::CVisual::vftable;
  }
  local_4 = 0xffffffff;
  local_14 = FUN_10001710(4);
  *local_14 = 1;
  local_4 = 1;
  local_20 = param_1;
  local_1c = param_2;
  pAVar2 = AfxGetModuleState();
  pHVar5 = *(HINSTANCE__ **)(pAVar2 + 8);
  iVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  pCVar8 = (CBasicPoint<long> *)&local_20;
  pSVar7 = (SmartPtr<neon::frw::CObject,Loki::RefCounted,Loki::DisallowConversion,Loki::AssertCheck,Loki::DefaultSPStorage,Loki::DontPropagateConst>
            *)&local_18;
  pCVar3 = AfxGetGameWnd();
  pHVar6 = *(HWND__ **)(pCVar3 + 0x20);
  pCVar4 = neon::frw::SApp::Instance();
  bVar1 = neon::frw::CApp::Init
                    (pCVar4,pHVar5,pHVar6,pSVar7,pCVar8,(bool)uVar9,(bool)uVar10,param_3,param_4,
                     iVar11);
  local_4 = 0xffffffff;
  FUN_10001780((int *)&local_18);
  if (bVar1) {
    iVar11 = 0x168;
  }
  else {
    iVar11 = 0x154;
  }
  PostBipLog(iVar11);
  pCVar4 = neon::frw::SApp::Instance();
  pCVar4[0x3d] = (CApp)0x1;
  ExceptionList = local_c;
  return (uint)bVar1;
}



/* ---- scalar_deleting_destructor @ 10001900 size=31 ---- */

CVisual * __thiscall neon::visual::CVisual::scalar_deleting_destructor(CVisual *this,byte param_1)

{
  neon::visual::CVisual::~CVisual(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CVisual *)this;
}



/* ---- CGcDxChannelLobbyView @ 10001920 size=19 ---- */

/* public: __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(void) */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::CGcDxChannelLobbyView(CGcDxChannelLobbyView *this)

{
                    /* 0x1920  3  ??0CGcDxChannelLobbyView@@QAE@XZ */
  CChannelLobbyView::CChannelLobbyView((CChannelLobbyView *)this);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- CGcDxChannelLobbyView @ 10001940 size=38 ---- */

/* public: __thiscall CGcDxChannelLobbyView::CGcDxChannelLobbyView(char const *,class CWnd *,bool)
    */

CGcDxChannelLobbyView * __thiscall
CGcDxChannelLobbyView::CGcDxChannelLobbyView
          (CGcDxChannelLobbyView *this,char *param_1,CWnd *param_2,bool param_3)

{
                    /* 0x1940  2  ??0CGcDxChannelLobbyView@@QAE@PBDPAVCWnd@@_N@Z */
  CChannelLobbyView::CChannelLobbyView((CChannelLobbyView *)this,param_1,param_2,param_3);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- ~CGcDxChannelLobbyView @ 10001970 size=12 ---- */

/* public: virtual __thiscall CGcDxChannelLobbyView::~CGcDxChannelLobbyView(void) */

void __thiscall CGcDxChannelLobbyView::~CGcDxChannelLobbyView(CGcDxChannelLobbyView *this)

{
                    /* 0x1970  11  ??1CGcDxChannelLobbyView@@UAE@XZ */
  this->vftablePtr = &_vftable_;
                    /* WARNING: Could not recover jumptable at 0x10001976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CChannelLobbyView::~CChannelLobbyView((CChannelLobbyView *)this);
  return;
}



/* ---- Evt_GcDxChannelLobby_OnActivateOn @ 10001980 size=15 ---- */

/* public: int __thiscall CGcDxChannelLobbyView::Evt_GcDxChannelLobby_OnActivateOn(struct IParam &)
    */

int __thiscall
CGcDxChannelLobbyView::Evt_GcDxChannelLobby_OnActivateOn
          (CGcDxChannelLobbyView *this,IParam *param_1)

{
  CApp *pCVar1;
  
                    /* 0x1980  32
                       ?Evt_GcDxChannelLobby_OnActivateOn@CGcDxChannelLobbyView@@QAEHAAUIParam@@@Z
                        */
  pCVar1 = neon::frw::SApp::Instance();
  pCVar1[0x3d] = (CApp)0x1;
  return 0;
}



/* ---- vfunction1 @ 10001990 size=10 ---- */

void __thiscall CMFunctor<CGcDxChannelLobbyView>::vfunction1(CMFunctor<CGcDxChannelLobbyView> *this)

{
                    /* WARNING: Could not recover jumptable at 0x10001998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this[2].vftablePtr)();
  return;
}



/* ---- scalar_deleting_destructor @ 100019a0 size=18 ---- */

void __thiscall
CMFunctor<CGcDxChannelLobbyView>::scalar_deleting_destructor(CMFunctor<CGcDxChannelLobbyView> *this)

{
  if (this != (CMFunctor<CGcDxChannelLobbyView> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CGcDxChannelLobbyView>::~CMFunctor<CGcDxChannelLobbyView> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CGcDxChannelLobbyView::OnAttached @ 100019c0 size=78 ---- */

/* public: virtual bool __thiscall CGcDxChannelLobbyView::OnAttached(void) */

bool __thiscall
CGcDxChannelLobbyView::CGcDxChannelLobbyView__OnAttached(CGcDxChannelLobbyView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x19c0  58  ?OnAttached@CGcDxChannelLobbyView@@UAE_NXZ */
  CChannelLobbyView::OnAttached((CChannelLobbyView *)this);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGcDxChannelLobbyView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GcDxChannelLobby_OnActivateOn;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channel","onActivateOn",puVar2,1);
  return true;
}



/* ---- SetInGameFlag @ 10001a10 size=13 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::SetInGameFlag(int) */

void __thiscall CGcDxMainFrameWnd::SetInGameFlag(CGcDxMainFrameWnd *this,int param_1)

{
                    /* 0x1a10  80  ?SetInGameFlag@CGcDxMainFrameWnd@@QAEXH@Z */
  (this->CGcDxMainFrameWnd_data).offset_0x8c = param_1;
  return;
}



/* ---- CGcDxGameLobbyView @ 10001a20 size=19 ---- */

/* public: __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView(void) */

CGcDxGameLobbyView * __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView(CGcDxGameLobbyView *this)

{
                    /* 0x1a20  5  ??0CGcDxGameLobbyView@@QAE@XZ */
  CGameLobbyView::CGameLobbyView((CGameLobbyView *)this);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- ~CGcDxGameLobbyView @ 10001a40 size=12 ---- */

/* public: virtual __thiscall CGcDxGameLobbyView::~CGcDxGameLobbyView(void) */

void __thiscall CGcDxGameLobbyView::~CGcDxGameLobbyView(CGcDxGameLobbyView *this)

{
                    /* 0x1a40  12  ??1CGcDxGameLobbyView@@UAE@XZ */
  this->vftablePtr = &_vftable_;
                    /* WARNING: Could not recover jumptable at 0x10001a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameLobbyView::~CGameLobbyView((CGameLobbyView *)this);
  return;
}



/* ---- Evt_GcDxGameLobby_OnActivateOn @ 10001a50 size=74 ---- */

/* public: int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOn(struct IParam &) */

int __thiscall
CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOn(CGcDxGameLobbyView *this,IParam *param_1)

{
  CApp *pCVar1;
  SGlobalInfo *this_00;
  IGod *pIVar2;
  
                    /* 0x1a50  34
                       ?Evt_GcDxGameLobby_OnActivateOn@CGcDxGameLobbyView@@QAEHAAUIParam@@@Z */
  pCVar1 = neon::frw::SApp::Instance();
  pCVar1[0x3d] = (CApp)0x0;
  this_00 = GInfo();
  SGlobalInfo::DisplayMode(this_00);
  CGcDxGameWnd::ApplyXDeviceMode((CGcDxGameWnd *)this[1].vftablePtr);
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x20))("mainFrame","activateOn",Void_exref,0);
  return 0;
}



/* ---- CGcDxGameLobbyView::Msg_UpdateUIFromXML @ 10001aa0 size=356 ---- */

/* public: virtual int __thiscall CGcDxGameLobbyView::Msg_UpdateUIFromXML(struct IParam &) */

int __thiscall
CGcDxGameLobbyView::CGcDxGameLobbyView__Msg_UpdateUIFromXML
          (CGcDxGameLobbyView *this,IParam *param_1)

{
  OnAttached *pOVar1;
  HWND hWnd;
  BOOL BVar2;
  char *pcVar3;
  CWinThread *pCVar4;
  char *pcVar5;
  int iVar6;
  CWnd *pCVar7;
  void *unaff_EDI;
  undefined4 uVar8;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_2a [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_20 [4];
  undefined4 local_1c;
  IParam *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1aa0  56  ?Msg_UpdateUIFromXML@CGcDxGameLobbyView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004699;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  hWnd = (HWND)0x0;
  if (this[1].vftablePtr != (CGcDxGameLobbyView_vftable *)0x0) {
    hWnd = (HWND)this[1].vftablePtr[1].deleting_destructor;
  }
  BVar2 = IsWindow(hWnd);
  if (BVar2 != 0) {
    ExceptionList = local_c;
    return -7;
  }
  pcVar3 = AfxRegisterWndClass(0x84b,(HICON__ *)0x0,(HBRUSH__ *)0x10,(HICON__ *)0x0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_20,pcVar3);
  local_4 = 0;
  pCVar4 = AfxGetThread();
  if (pCVar4 != (CWinThread *)0x0) {
    (**(code **)(*(int *)pCVar4 + 0x7c))();
  }
  local_1c = 0;
  local_18 = (IParam *)0x0;
  local_14 = 800;
  local_10 = 600;
  pOVar1 = (this[1].vftablePtr)->OnAttached;
  uVar8 = 0x40000000;
  pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 2))
  ;
  pcVar5 = AfxRegisterWndClass(8,(HICON__ *)0x0,(HBRUSH__ *)0x0,(HICON__ *)0x0);
  iVar6 = (**(code **)(pOVar1 + 0x5c))(pcVar5,pcVar3,uVar8);
  if (iVar6 == 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_2a + -0x12);
    ExceptionList = unaff_EDI;
    return -10;
  }
  pCVar4 = AfxGetThread();
  if (pCVar4 == (CWinThread *)0x0) {
    pCVar7 = (CWnd *)0x0;
  }
  else {
    pCVar7 = (CWnd *)(**(code **)(*(int *)pCVar4 + 0x7c))();
  }
  CWnd::SetWindowPos((CWnd *)this[1].vftablePtr,pCVar7,0,0,0,0,3);
  iVar6 = CBaseLobbyView::Msg_UpdateUIFromXML((CBaseLobbyView *)this,local_18);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_2a + -0x12);
  ExceptionList = unaff_EDI;
  return iVar6;
}



/* ---- Evt_GcDxGameLobby_OnActivateOnGameWnd @ 10001c10 size=59 ---- */

/* public: int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOnGameWnd(struct IParam &)
    */

int __thiscall
CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOnGameWnd(CGcDxGameLobbyView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  int iVar2;
  
                    /* 0x1c10  35
                       ?Evt_GcDxGameLobby_OnActivateOnGameWnd@CGcDxGameLobbyView@@QAEHAAUIParam@@@Z
                        */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  *(undefined4 *)(iVar2 + 0x178) = 1;
  this[1].vftablePtr[0x13].OnClickExitGameBtn = (OnClickExitGameBtn *)0x1;
  CGcDxGameWnd::SetDlgClipRegion((CGcDxGameWnd *)this[1].vftablePtr);
  return 0;
}



/* ---- Evt_GcDxGameLobby_OnActivateOffGameWnd @ 10001c50 size=62 ---- */

/* public: int __thiscall CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOffGameWnd(struct IParam
   &) */

int __thiscall
CGcDxGameLobbyView::Evt_GcDxGameLobby_OnActivateOffGameWnd(CGcDxGameLobbyView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  int iVar2;
  
                    /* 0x1c50  33
                       ?Evt_GcDxGameLobby_OnActivateOffGameWnd@CGcDxGameLobbyView@@QAEHAAUIParam@@@Z
                        */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  *(undefined4 *)(iVar2 + 0x178) = 0;
  this[1].vftablePtr[0x13].OnClickExitGameBtn = (OnClickExitGameBtn *)0x0;
  CGcDxGameWnd::RemoveDlgClipRegion((CGcDxGameWnd *)this[1].vftablePtr);
  return 0;
}



/* ---- vfunction3 @ 10001c90 size=18 ---- */

void __thiscall
CMFunctor<CGcDxChannelLobbyView>::vfunction3
          (CMFunctor<CGcDxChannelLobbyView> *this,undefined4 *param_1)

{
  CMFunctor<CGcDxChannelLobbyView>_vftable *pCVar1;
  
  pCVar1 = this[1].vftablePtr;
  param_1[1] = this[2].vftablePtr;
  *param_1 = pCVar1;
  return;
}



/* ---- scalar_deleting_destructor @ 10001cb0 size=18 ---- */

void __thiscall
CMFunctor<CGcDxGameLobbyView>::scalar_deleting_destructor(CMFunctor<CGcDxGameLobbyView> *this)

{
  if (this != (CMFunctor<CGcDxGameLobbyView> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CGcDxGameLobbyView>::~CMFunctor<CGcDxGameLobbyView> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CGcDxGameLobbyView::OnAttached @ 10001cd0 size=204 ---- */

/* public: virtual bool __thiscall CGcDxGameLobbyView::OnAttached(void) */

bool __thiscall CGcDxGameLobbyView::CGcDxGameLobbyView__OnAttached(CGcDxGameLobbyView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x1cd0  59  ?OnAttached@CGcDxGameLobbyView@@UAE_NXZ */
  CGameLobbyView::OnAttached((CGameLobbyView *)this);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGcDxGameLobbyView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GcDxGameLobby_OnActivateOn;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_10005c4c,"onActivateOn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGcDxGameLobbyView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GcDxGameLobby_OnActivateOnGameWnd;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_10005c4c,"onActivateOnGameWnd",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGcDxGameLobbyView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_GcDxGameLobby_OnActivateOffGameWnd;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_10005c4c,"onActivateOffGameWnd",puVar2,1);
  return true;
}



/* ---- FUN_10001da0 @ 10001da0 size=156 ---- */

void __cdecl FUN_10001da0(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> param_1)

{
  uint uVar1;
  FILE *pFVar2;
  char *pcVar3;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100046c9;
  local_c = ExceptionList;
  uVar1 = DAT_1000d460 ^ (int)register0x00000010 - 0x14U;
  ExceptionList = &local_c;
  local_4 = 0;
  pFVar2 = fopen("c:\\makegclog","r");
  if (pFVar2 != (FILE *)0x0) {
    fclose(pFVar2);
    pFVar2 = fopen("c:\\GCLog.txt","a");
    if (pFVar2 != (FILE *)0x0) {
      pcVar3 = ATL::CSimpleStringT<char,1>::GetBuffer((CSimpleStringT<char,1> *)&param_1,0);
      fprintf(pFVar2,"%s\n",pcVar3,uVar1);
      fclose(pFVar2);
    }
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- _GetBaseClass @ 10001e40 size=6 ---- */

/* protected: static struct CRuntimeClass * __stdcall CGcDxGameWnd::_GetBaseClass(void) */

CRuntimeClass * CGcDxGameWnd::_GetBaseClass(void)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x1e40  84  ?_GetBaseClass@CGcDxGameWnd@@KGPAUCRuntimeClass@@XZ */
  pCVar1 = CGameWnd::GetThisClass();
  return pCVar1;
}



/* ---- CGcDxGameWnd::GetRuntimeClass @ 10001e50 size=6 ---- */

/* public: virtual struct CRuntimeClass * __thiscall CGcDxGameWnd::GetRuntimeClass(void)const  */

CRuntimeClass * __thiscall CGcDxGameWnd::CGcDxGameWnd__GetRuntimeClass(CGcDxGameWnd *this)

{
                    /* 0x1e50  43  ?GetRuntimeClass@CGcDxGameWnd@@UBEPAUCRuntimeClass@@XZ
                       0x1e50  45  ?GetThisClass@CGcDxGameWnd@@SGPAUCRuntimeClass@@XZ */
  return (CRuntimeClass *)&classCGcDxGameWnd;
}



/* ---- CGcDxGameWnd @ 10001e60 size=52 ---- */

/* public: __thiscall CGcDxGameWnd::CGcDxGameWnd(void) */

CGcDxGameWnd * __thiscall CGcDxGameWnd::CGcDxGameWnd(CGcDxGameWnd *this)

{
                    /* 0x1e60  6  ??0CGcDxGameWnd@@QAE@XZ */
  CGameWnd::CGameWnd((CGameWnd *)this);
  (this->CGcDxGameWnd_data).offset_0x180 = (void *)0x0;
  (this->CGcDxGameWnd_data).offset_0x184 = 0;
  (this->CGcDxGameWnd_data).offset_0x188 = 0;
  (this->CGcDxGameWnd_data).offset_0x18c = 0;
  this->vftablePtr = &_vftable__for__CWnd__;
  this->vftablePtr = &_vftable__for__CControlBase__;
  return this;
}



/* ---- ~CGcDxGameWnd @ 10001ea0 size=54 ---- */

/* public: virtual __thiscall CGcDxGameWnd::~CGcDxGameWnd(void) */

void __thiscall CGcDxGameWnd::~CGcDxGameWnd(CGcDxGameWnd *this)

{
  void *pvVar1;
  
                    /* 0x1ea0  13  ??1CGcDxGameWnd@@UAE@XZ */
  pvVar1 = (this->CGcDxGameWnd_data).offset_0x180;
  this->vftablePtr = &_vftable__for__CWnd__;
  this->vftablePtr = &_vftable__for__CControlBase__;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    (this->CGcDxGameWnd_data).offset_0x180 = (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameWnd::~CGameWnd((CGameWnd *)this);
  return;
}



/* ---- OnCreate @ 10001ee0 size=22 ---- */

/* protected: int __thiscall CGcDxGameWnd::OnCreate(struct tagCREATESTRUCTA *) */

int __thiscall CGcDxGameWnd::OnCreate(CGcDxGameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* 0x1ee0  61  ?OnCreate@CGcDxGameWnd@@IAEHPAUtagCREATESTRUCTA@@@Z */
  iVar1 = CGameWnd::OnCreate((CGameWnd *)this,param_1);
  return (iVar1 != -1) - 1;
}



/* ---- CGcDxGameWnd::DoExActive @ 10001f00 size=304 ---- */

/* public: virtual void __thiscall CGcDxGameWnd::DoExActive(int) */

void __thiscall CGcDxGameWnd::CGcDxGameWnd__DoExActive(CGcDxGameWnd *this,int param_1)

{
  byte bVar1;
  int iVar2;
  SGlobalInfo *pSVar3;
  CApp *this_00;
  CDisplayModeChanger *pCVar4;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_01;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_02;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStack00000008;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack0000000c;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack_21;
  undefined1 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
                    /* 0x1f00  31  ?DoExActive@CGcDxGameWnd@@UAEXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004759;
  local_c = ExceptionList;
  bVar1 = (byte)DAT_1000d460;
  ExceptionList = &local_c;
  if (param_1 == 1) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1);
    local_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_01,(char *)&param_1);
    local_c = (undefined1 *)((int)register0x00000010 + -0x24);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               ((int)register0x00000010 + -0x24),&CStack00000008);
    FUN_10001da0((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)
                 (bVar1 ^ (byte)((int)register0x00000010 + -0x20)));
    pSVar3 = GInfo();
    SGlobalInfo::DisplayMode(pSVar3);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_02,(char *)&CStack00000008);
    this_00 = neon::frw::SApp::Instance();
    neon::frw::CApp::Run(this_00);
    param_1 = -1;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(&CStack0000000c);
  }
  else if (param_1 == 0) {
    uVar7 = *(uint *)&(this->CGcDxGameWnd_data).field_0x17c;
    uVar6 = *(uint *)&(this->CGcDxGameWnd_data).field_0x178;
    uVar5 = *(uint *)&(this->CGcDxGameWnd_data).field_0x174;
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    CDisplayModeChanger::SetResolution(pCVar4,uVar5,uVar6,uVar7);
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    if (*(int *)(pCVar4 + 4) != 0) {
      iVar8 = 1;
      pSVar3 = GInfo();
      pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
      CDisplayModeChanger::SetDisplayMode(pCVar4,iVar8);
    }
  }
  CGameWnd::DoExActive((CGameWnd *)this,iVar2);
  ExceptionList = local_c;
  return;
}



/* ---- OnDestroy @ 10002030 size=29 ---- */

/* protected: void __thiscall CGcDxGameWnd::OnDestroy(void) */

void __thiscall CGcDxGameWnd::OnDestroy(CGcDxGameWnd *this)

{
  CSound *pCVar1;
  
                    /* 0x2030  62  ?OnDestroy@CGcDxGameWnd@@IAEXXZ */
  pCVar1 = neon::dev::SSound::Instance();
  (**(code **)(*(int *)pCVar1 + 0x84))();
  CWnd::OnDestroy((CWnd *)this);
  return;
}



/* ---- IsFullMode @ 10002050 size=18 ---- */

/* public: int __thiscall CGcDxGameWnd::IsFullMode(void) */

int __thiscall CGcDxGameWnd::IsFullMode(CGcDxGameWnd *this)

{
  SGlobalInfo *this_00;
  CDisplayModeChanger *pCVar1;
  
                    /* 0x2050  51  ?IsFullMode@CGcDxGameWnd@@QAEHXZ */
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::DisplayMode(this_00);
  return *(int *)(pCVar1 + 4);
}



/* ---- scalar_deleting_destructor @ 10002070 size=130 ---- */

CGameWnd * __thiscall CGcDxGameWnd::scalar_deleting_destructor(CGcDxGameWnd *this,byte param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].CGcDxGameWnd_data.offset_0x18c;
    _eh_vector_destructor_iterator_
              (this,0x1e8,this[-1].CGcDxGameWnd_data.offset_0x18c,~CGcDxGameWnd);
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return (CGameWnd *)puVar1;
  }
  pvVar2 = (this->CGcDxGameWnd_data).offset_0x180;
                    /* inlined destructor: CGcDxGameWnd::~CGcDxGameWnd */
  this->vftablePtr = &_vftable__for__CWnd__;
  this->vftablePtr = &_vftable__for__CControlBase__;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->CGcDxGameWnd_data).offset_0x180 = (void *)0x0;
  }
  CGameWnd::~CGameWnd((CGameWnd *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGameWnd *)this;
}



/* ---- MinimizeGameWindow @ 10002100 size=75 ---- */

/* public: void __thiscall CGcDxGameWnd::MinimizeGameWindow(void) */

void __thiscall CGcDxGameWnd::MinimizeGameWindow(CGcDxGameWnd *this)

{
  CWinThread *pCVar1;
  CWnd *this_00;
  
                    /* 0x2100  55  ?MinimizeGameWindow@CGcDxGameWnd@@QAEXXZ */
  if (((this->CGcDxGameWnd_data).offset_0x184 != 0) && ((this->CGcDxGameWnd_data).offset_0x188 != 0)
     ) {
    (this->CGcDxGameWnd_data).offset_0x18c = 1;
    CWnd::ShowWindow((CWnd *)this,6);
  }
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    CWnd::ShowWindow((CWnd *)0x0,6);
    return;
  }
  this_00 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  CWnd::ShowWindow(this_00,6);
  return;
}



/* ---- OnSize @ 10002150 size=8 ---- */

/* protected: void __thiscall CGcDxGameWnd::OnSize(unsigned int,int,int) */

void __thiscall CGcDxGameWnd::OnSize(CGcDxGameWnd *this,uint param_1,int param_2,int param_3)

{
                    /* 0x2150  72  ?OnSize@CGcDxGameWnd@@IAEXIHH@Z */
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnPaint @ 10002160 size=89 ---- */

/* protected: void __thiscall CGcDxGameWnd::OnPaint(void) */

void __thiscall CGcDxGameWnd::OnPaint(CGcDxGameWnd *this)

{
  HDC pHVar1;
  IDxDevice *pIVar2;
  tagPAINTSTRUCT local_44;
  uint local_4;
  
                    /* 0x2160  70  ?OnPaint@CGcDxGameWnd@@IAEXXZ */
  local_4 = DAT_1000d460 ^ (uint)&local_44;
  pHVar1 = BeginPaint(*(HWND *)&this->field_0x20,&local_44);
  CDC::FromHandle(pHVar1);
  pIVar2 = DxDevice();
  (**(code **)(*(int *)pIVar2 + 0x44))(&local_44.rcPaint);
  EndPaint(*(HWND *)&this->field_0x20,(PAINTSTRUCT *)((&local_44)[-1].rgbReserved + 0x1c));
  __security_check_cookie(local_44.rgbReserved._28_4_ ^ (uint)((&local_44)[-1].rgbReserved + 0x1c));
  return;
}



/* ---- CGcDxGameWnd::WindowProc @ 100021c0 size=162 ---- */

/* public: virtual long __thiscall CGcDxGameWnd::WindowProc(unsigned int,unsigned int,long) */

long __thiscall
CGcDxGameWnd::CGcDxGameWnd__WindowProc(CGcDxGameWnd *this,uint param_1,uint param_2,long param_3)

{
  char cVar1;
  SGlobalInfo *this_00;
  CDisplayModeChanger *pCVar2;
  IInput *pIVar3;
  CGcDxGameWnd *this_01;
  HWND__ *pHVar4;
  long lVar5;
  
                    /* 0x21c0  82  ?WindowProc@CGcDxGameWnd@@UAEJIIJ@Z */
  this_00 = GInfo();
  pCVar2 = SGlobalInfo::DisplayMode(this_00);
  if (*(int *)(pCVar2 + 4) != 0) {
    pIVar3 = Input();
    cVar1 = (**(code **)(*(int *)pIVar3 + 0x10))(0x38);
    DAT_1000d4d8 = cVar1 != '\0';
    pIVar3 = Input();
    cVar1 = (**(code **)(*(int *)pIVar3 + 0x10))(0xf);
    if ((cVar1 != '\0') && (DAT_1000d4d8 != '\0')) {
      this_01 = (CGcDxGameWnd *)AfxGetGameWnd();
      MinimizeGameWindow(this_01);
      DAT_1000d4d8 = '\0';
    }
  }
  neon::frw::SApp::Instance();
  if (this == (CGcDxGameWnd *)0x0) {
    pHVar4 = (HWND__ *)0x0;
  }
  else {
    pHVar4 = *(HWND__ **)&this->field_0x20;
  }
  lVar5 = neon::frw::CApp::MsgProc(pHVar4,param_1,param_2,param_3);
  if (lVar5 == 0) {
    lVar5 = CWnd::CWnd__WindowProc((CWnd *)this,param_1,param_2,param_3);
  }
  return lVar5;
}



/* ---- OnRepaint @ 10002270 size=44 ---- */

/* protected: long __thiscall CGcDxGameWnd::OnRepaint(unsigned int,long) */

long __thiscall CGcDxGameWnd::OnRepaint(CGcDxGameWnd *this,uint param_1,long param_2)

{
  IDxDevice *pIVar1;
  tagRECT local_10;
  
                    /* 0x2270  71  ?OnRepaint@CGcDxGameWnd@@IAEJIJ@Z */
  GetClientRect(*(HWND *)&this->field_0x20,&local_10);
  pIVar1 = DxDevice();
  (**(code **)(*(int *)pIVar1 + 0x44))(&local_10);
  return 0;
}



/* ---- GetGameResolution @ 100022a0 size=41 ---- */

/* public: void __thiscall CGcDxGameWnd::GetGameResolution(void) */

void __thiscall CGcDxGameWnd::GetGameResolution(CGcDxGameWnd *this)

{
  LPRECT lpRect;
  
                    /* 0x22a0  39  ?GetGameResolution@CGcDxGameWnd@@QAEXXZ */
  if ((this->CGcDxGameWnd_data).offset_0x180 == (void *)0x0) {
    lpRect = operator_new(0x10);
    (this->CGcDxGameWnd_data).offset_0x180 = lpRect;
    GetWindowRect(*(HWND *)&this->field_0x20,lpRect);
  }
  return;
}



/* ---- ChangeToFullMode @ 100022d0 size=507 ---- */

/* protected: long __thiscall CGcDxGameWnd::ChangeToFullMode(void) */

long __thiscall CGcDxGameWnd::ChangeToFullMode(CGcDxGameWnd *this)

{
  int *piVar1;
  HWND pHVar2;
  CWinThread *pCVar3;
  CWnd *this_00;
  int iVar4;
  LPRECT lpRect;
  IDxDevice *pIVar5;
  SGlobalInfo *pSVar6;
  CDisplayModeChanger *pCVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CVar11;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_26 [2];
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> aCStack_14 [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_12 [2];
  undefined1 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x22d0  30  ?ChangeToFullMode@CGcDxGameWnd@@IAEJXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_100046f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pHVar2 = GetParent(*(HWND *)&this->field_0x20);
  CWnd::FromHandle(pHVar2);
  pCVar3 = AfxGetThread();
  if (pCVar3 == (CWinThread *)0x0) {
    this_00 = (CWnd *)0x0;
  }
  else {
    this_00 = (CWnd *)(**(code **)(*(int *)pCVar3 + 0x7c))();
  }
  CWnd::SetWindowPos(this_00,(CWnd *)wndNoTopMost_exref,0,0,0,0,1);
  CWnd::ModifyStyle((CWnd *)this,0x80000000,0x40000000,1);
  pCVar3 = AfxGetThread();
  if ((pCVar3 == (CWinThread *)0x0) || (iVar4 = (**(code **)(*(int *)pCVar3 + 0x7c))(), iVar4 == 0))
  {
    pHVar2 = (HWND)0x0;
  }
  else {
    pHVar2 = *(HWND *)(iVar4 + 0x20);
  }
  pHVar2 = SetParent(*(HWND *)&this->field_0x20,pHVar2);
  CWnd::FromHandle(pHVar2);
  SetWindowPos((HWND)0x0,(HWND)0xffffffff,0,0,0,0,5);
  if ((this->CGcDxGameWnd_data).offset_0x180 == (void *)0x0) {
    lpRect = operator_new(0x10);
    pHVar2 = *(HWND *)&this->field_0x20;
    (this->CGcDxGameWnd_data).offset_0x180 = lpRect;
    GetWindowRect(pHVar2,lpRect);
  }
  iVar4 = CWnd::ModifyStyle((CWnd *)this,0x40000000,0x80000000,1);
  if (iVar4 != 0) {
    pIVar5 = DxDevice();
    CVar11 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)0x0;
    iVar4 = (**(code **)(*(int *)pIVar5 + 0x20))(0);
    pSVar6 = GInfo();
    pCVar7 = SGlobalInfo::DisplayMode(pSVar6);
    if (iVar4 < 0) {
      *(undefined4 *)(pCVar7 + 4) = 0;
      pIVar5 = DxDevice();
      (**(code **)(*(int *)pIVar5 + 0x20))(1,0);
    }
    else {
      *(undefined4 *)(pCVar7 + 4) = 1;
    }
    piVar1 = (this->CGcDxGameWnd_data).offset_0x180;
    uVar8 = piVar1[3] - piVar1[1];
    uVar9 = piVar1[2] - *piVar1;
    uVar10 = *(uint *)&(this->CGcDxGameWnd_data).field_0x17c;
    pSVar6 = GInfo();
    pCVar7 = SGlobalInfo::DisplayMode(pSVar6);
    CDisplayModeChanger::SetResolution(pCVar7,uVar9,uVar8,uVar10);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_14 + -4));
    puStack_8 = (undefined1 *)0x0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_14 + -4),
               (char *)(aCStack_14 + -4));
    puStack_10 = aCStack_26 + -6;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_26 + -6,aCStack_14);
    FUN_10001da0(CVar11);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)aCStack_14);
    if (iVar4 != 0) {
      ExceptionList = local_c;
      return -0x7fffbffb;
    }
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- RestoreDisplayMode @ 100024d0 size=425 ---- */

/* protected: long __thiscall CGcDxGameWnd::RestoreDisplayMode(void) */

long __thiscall CGcDxGameWnd::RestoreDisplayMode(CGcDxGameWnd *this)

{
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CVar1;
  HWND pHVar2;
  IDxDevice *pIVar3;
  int iVar4;
  SGlobalInfo *this_00;
  CDisplayModeChanger *this_01;
  CWinThread *pCVar5;
  CWnd *pCVar6;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_02;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_14 [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_12 [2];
  void *local_10;
  undefined1 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x24d0  77  ?RestoreDisplayMode@CGcDxGameWnd@@IAEJXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004729;
  local_c = ExceptionList;
  CVar1 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)
          ((byte)DAT_1000d460 ^ (char)local_14 - 8U);
  ExceptionList = &local_c;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14);
  local_4 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_02,(char *)local_14);
  local_c = local_14 + -0xc;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            (local_14 + -0xc,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)&local_10)
  ;
  FUN_10001da0(CVar1);
  pHVar2 = GetParent(*(HWND *)&this->field_0x20);
  CWnd::FromHandle(pHVar2);
  CWnd::ModifyStyle((CWnd *)this,0x40000000,0x80000000,1);
  pIVar3 = DxDevice();
  iVar4 = (**(code **)(*(int *)pIVar3 + 0x20))(1);
  if (iVar4 < 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14 + -4);
    ExceptionList = local_10;
    return iVar4;
  }
  uVar9 = *(uint *)&(this->CGcDxGameWnd_data).field_0x17c;
  uVar8 = *(uint *)&(this->CGcDxGameWnd_data).field_0x178;
  uVar7 = *(uint *)&(this->CGcDxGameWnd_data).field_0x174;
  this_00 = GInfo();
  this_01 = SGlobalInfo::DisplayMode(this_00);
  CDisplayModeChanger::SetResolution(this_01,uVar7,uVar8,uVar9);
  pCVar5 = AfxGetThread();
  if (pCVar5 == (CWinThread *)0x0) {
    pCVar6 = (CWnd *)0x0;
  }
  else {
    pCVar6 = (CWnd *)(**(code **)(*(int *)pCVar5 + 0x7c))();
  }
  CWnd::SetWindowPos(pCVar6,(CWnd *)wndNoTopMost_exref,0,0,0,0,3);
  CWnd::ModifyStyle((CWnd *)this,0x80000000,0x40000000,1);
  pCVar5 = AfxGetThread();
  if (pCVar5 != (CWinThread *)0x0) {
    iVar4 = (**(code **)(*(int *)pCVar5 + 0x7c))();
    if (iVar4 != 0) {
      pHVar2 = *(HWND *)(iVar4 + 0x20);
      goto LAB_10002618;
    }
  }
  pHVar2 = (HWND)0x0;
LAB_10002618:
  pHVar2 = SetParent(*(HWND *)&this->field_0x20,pHVar2);
  CWnd::FromHandle(pHVar2);
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,5);
  pCVar5 = AfxGetThread();
  if (pCVar5 == (CWinThread *)0x0) {
    pCVar6 = (CWnd *)0x0;
  }
  else {
    pCVar6 = (CWnd *)(**(code **)(*(int *)pCVar5 + 0x7c))();
  }
  CWnd::CenterWindow(pCVar6,(CWnd *)0x0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14 + -4);
  ExceptionList = local_10;
  return 0;
}



/* ---- ChangeDisplayMode @ 10002680 size=375 ---- */

/* public: int __thiscall CGcDxGameWnd::ChangeDisplayMode(int *) */

int __thiscall CGcDxGameWnd::ChangeDisplayMode(CGcDxGameWnd *this,int *param_1)

{
  HWND hWnd;
  byte bVar1;
  LPRECT lpRect;
  long lVar2;
  SGlobalInfo *pSVar3;
  CDisplayModeChanger *pCVar4;
  IGod *pIVar5;
  uint uVar6;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> CStack00000008;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack_21;
  undefined1 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2680  29  ?ChangeDisplayMode@CGcDxGameWnd@@QAEHPAH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10004759;
  local_c = ExceptionList;
  bVar1 = (byte)DAT_1000d460;
  ExceptionList = &local_c;
  if (param_1 == (int *)0x0) {
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    uVar6 = (uint)(*(int *)(pCVar4 + 4) != 0);
  }
  else {
    uVar6 = *param_1;
  }
  if ((this->CGcDxGameWnd_data).offset_0x180 == (void *)0x0) {
    lpRect = operator_new(0x10);
    hWnd = *(HWND *)&this->field_0x20;
    (this->CGcDxGameWnd_data).offset_0x180 = lpRect;
    GetWindowRect(hWnd,lpRect);
  }
  if (uVar6 == 0) {
    lVar2 = ChangeToFullMode(this);
    if (lVar2 < 0) {
      ExceptionList = local_c;
      return 0;
    }
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    *(undefined4 *)(pCVar4 + 4) = 1;
    pIVar5 = God();
    (**(code **)(*(int *)pIVar5 + 0x20))("gameView","onDisplayModeChanged",Void_exref,0);
  }
  else {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1);
    local_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_00,(char *)&param_1);
    local_c = (undefined1 *)((int)register0x00000010 + -0x24);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               ((int)register0x00000010 + -0x24),&CStack00000008);
    FUN_10001da0((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)
                 (bVar1 ^ (byte)((int)register0x00000010 + -0x20)));
    RestoreDisplayMode(this);
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
    *(undefined4 *)(pCVar4 + 4) = 0;
    pIVar5 = God();
    (**(code **)(*(int *)pIVar5 + 0x20))("gameView","onDisplayModeChanged",Void_exref);
    local_4 = 0xffffffff;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&param_1);
  }
  (this->CGcDxGameWnd_data).offset_0x188 = (uint)(uVar6 == 0);
  pSVar3 = GInfo();
  pCVar4 = SGlobalInfo::DisplayMode(pSVar3);
  CDisplayModeChanger::DoExtendCode(pCVar4);
  ExceptionList = local_c;
  return 1;
}



/* ---- FUN_10002800 @ 10002800 size=108 ---- */

void __fastcall FUN_10002800(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  iVar2 = param_1[1];
  if (*(char *)(iVar2 + 0x2d) != '\0') {
    _invalid_parameter_noinfo();
    return;
  }
  piVar3 = *(int **)(iVar2 + 8);
  if (*(char *)((int)piVar3 + 0x2d) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x2d);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x2d);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    param_1[1] = (int)piVar3;
    return;
  }
  iVar2 = *(int *)(iVar2 + 4);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while ((cVar1 == '\0' && (param_1[1] == *(int *)(iVar2 + 8)))) {
    param_1[1] = iVar2;
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  param_1[1] = iVar2;
  return;
}



/* ---- vfunction1 @ 10002870 size=8 ---- */

void __thiscall CGcDxGameWnd::vfunction1(CGcDxGameWnd *this,byte param_1)

{
  scalar_deleting_destructor((CGcDxGameWnd *)&this[-1].CGcDxGameWnd_data.field_0x13c,param_1);
  return;
}



/* ---- CGcDxGameWnd::GetMessageMap @ 10002880 size=45 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual struct AFX_MSGMAP const * __thiscall CGcDxGameWnd::GetMessageMap(void)const
    */

AFX_MSGMAP * __thiscall CGcDxGameWnd::CGcDxGameWnd__GetMessageMap(CGcDxGameWnd *this)

{
                    /* 0x2880  41  ?GetMessageMap@CGcDxGameWnd@@MBEPBUAFX_MSGMAP@@XZ
                       0x2880  47  ?GetThisMessageMap@CGcDxGameWnd@@KGPBUAFX_MSGMAP@@XZ */
  if ((_DAT_1000d4e4 & 1) == 0) {
    _DAT_1000d4e4 = _DAT_1000d4e4 | 1;
    _DAT_1000d4dc = GetThisMessageMap_exref;
    _DAT_1000d4e0 = &DAT_10005fc0;
  }
  return (AFX_MSGMAP *)&DAT_1000d4dc;
}



/* ---- ApplyXDeviceMode @ 100028b0 size=423 ---- */

/* public: void __thiscall CGcDxGameWnd::ApplyXDeviceMode(void) */

void __thiscall CGcDxGameWnd::ApplyXDeviceMode(CGcDxGameWnd *this)

{
  byte bVar1;
  SGlobalInfo *pSVar2;
  CDisplayModeChanger *pCVar3;
  CApp *pCVar4;
  IDxDevice *pIVar5;
  CWinThread *pCVar6;
  int iVar7;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  bool bVar8;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CStack_25;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_14 [4];
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> aCStack_10 [4];
  undefined1 *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x28b0  28  ?ApplyXDeviceMode@CGcDxGameWnd@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_100046f9;
  local_c = ExceptionList;
  bVar1 = (byte)DAT_1000d460;
  ExceptionList = &local_c;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  bVar8 = 0 < *(int *)(pCVar3 + 4);
  pCVar4 = neon::frw::SApp::Instance();
  neon::frw::CApp::SetDisplay24Bit(pCVar4,bVar8);
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  if (*(int *)(pCVar3 + 0x1c) != 0) {
    pCVar4 = neon::frw::SApp::Instance();
    neon::frw::CApp::Suspend(pCVar4);
  }
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  *(undefined4 *)&(this->CGcDxGameWnd_data).field_0x174 = *(undefined4 *)(pCVar3 + 8);
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  *(undefined4 *)&(this->CGcDxGameWnd_data).field_0x178 = *(undefined4 *)(pCVar3 + 0xc);
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  *(undefined4 *)&(this->CGcDxGameWnd_data).field_0x17c = *(undefined4 *)(pCVar3 + 0x10);
  pSVar2 = GInfo();
  SGlobalInfo::DisplayMode(pSVar2);
  pIVar5 = DxDevice();
  (**(code **)(*(int *)pIVar5 + 0x1c))();
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  if (*(int *)(pCVar3 + 0x1c) != 0) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_14);
    uStack_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (aCStack_14,(char *)aCStack_14);
    local_c = aCStack_14 + -0x14;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_14 + -0x14,aCStack_10);
    FUN_10001da0((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)
                 (bVar1 ^ (char)aCStack_14 - 0x10U));
    pSVar2 = GInfo();
    SGlobalInfo::DisplayMode(pSVar2);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_00,(char *)aCStack_10);
    pSVar2 = GInfo();
    pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
    if (*(int *)(pCVar3 + 4) == 0) {
      RestoreDisplayMode(this);
    }
    else {
      ChangeToFullMode(this);
    }
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  }
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::DisplayMode(pSVar2);
  (this->CGcDxGameWnd_data).offset_0x188 = *(undefined4 *)(pCVar3 + 4);
  pCVar6 = AfxGetThread();
  if (pCVar6 == (CWinThread *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (**(code **)(*(int *)pCVar6 + 0x7c))();
  }
  *(undefined4 *)(iVar7 + 0x178) = 1;
  ExceptionList = local_c;
  return;
}



/* ---- SetDlgClipRegion @ 10002a60 size=148 ---- */

/* public: void __thiscall CGcDxGameWnd::SetDlgClipRegion(void) */

void __thiscall CGcDxGameWnd::SetDlgClipRegion(CGcDxGameWnd *this)

{
  int *piVar1;
  int iVar2;
  CDialogList *pCVar3;
  IDxDevice *pIVar4;
  int iVar5;
  int *local_8;
  int local_4;
  
                    /* 0x2a60  78  ?SetDlgClipRegion@CGcDxGameWnd@@QAEXXZ */
  pCVar3 = DialogList();
  local_4 = **(int **)(pCVar3 + 0x1c);
  local_8 = *(int **)(pCVar3 + 4);
  while( true ) {
    iVar2 = local_4;
    piVar1 = local_8;
    pCVar3 = DialogList();
    iVar5 = *(int *)(pCVar3 + 0x1c);
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(pCVar3 + 4))) {
      _invalid_parameter_noinfo();
    }
    if (iVar2 == iVar5) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (iVar2 == *(int *)(iVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar5 = *(int *)(iVar2 + 0x28);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
      pIVar4 = DxDevice();
      (**(code **)(*(int *)pIVar4 + 0x48))(*(undefined4 *)(iVar5 + 0x20));
    }
    FUN_10002800((int *)&local_8);
  }
  return;
}



/* ---- RemoveDlgClipRegion @ 10002b00 size=179 ---- */

/* public: void __thiscall CGcDxGameWnd::RemoveDlgClipRegion(void) */

void __thiscall CGcDxGameWnd::RemoveDlgClipRegion(CGcDxGameWnd *this)

{
  int *piVar1;
  int iVar2;
  CApp *pCVar3;
  SGlobalInfo *this_00;
  CDisplayModeChanger *pCVar4;
  CDialogList *pCVar5;
  IDxDevice *pIVar6;
  int iVar7;
  int *local_8;
  int local_4;
  
                    /* 0x2b00  76  ?RemoveDlgClipRegion@CGcDxGameWnd@@QAEXXZ */
  pCVar3 = neon::frw::SApp::Instance();
  pCVar3[0x3d] = (CApp)0x1;
  this_00 = GInfo();
  pCVar4 = SGlobalInfo::DisplayMode(this_00);
  *(undefined4 *)(pCVar4 + 0x1c) = 0;
  pCVar5 = DialogList();
  local_4 = **(int **)(pCVar5 + 0x1c);
  local_8 = *(int **)(pCVar5 + 4);
  while( true ) {
    iVar2 = local_4;
    piVar1 = local_8;
    pCVar5 = DialogList();
    iVar7 = *(int *)(pCVar5 + 0x1c);
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(pCVar5 + 4))) {
      _invalid_parameter_noinfo();
    }
    if (iVar2 == iVar7) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar1;
    }
    if (iVar2 == *(int *)(iVar7 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    iVar7 = *(int *)(iVar2 + 0x28);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x20) != 0)) {
      pIVar6 = DxDevice();
      (**(code **)(*(int *)pIVar6 + 0x4c))(*(undefined4 *)(iVar7 + 0x20));
    }
    FUN_10002800((int *)&local_8);
  }
  return;
}



/* ---- CGcDxMainFrameView @ 10002bc0 size=26 ---- */

/* public: __thiscall CGcDxMainFrameView::CGcDxMainFrameView(class CGcDxMainFrameView const &) */

CGcDxMainFrameView * __thiscall
CGcDxMainFrameView::CGcDxMainFrameView(CGcDxMainFrameView *this,CGcDxMainFrameView *param_1)

{
                    /* 0x2bc0  7  ??0CGcDxMainFrameView@@QAE@ABV0@@Z */
  CMainFrameView::CMainFrameView((CMainFrameView *)this,(CMainFrameView *)param_1);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- operator= @ 10002be0 size=20 ---- */

/* public: class CGcDxMainFrameView & __thiscall CGcDxMainFrameView::operator=(class
   CGcDxMainFrameView const &) */

CGcDxMainFrameView * __thiscall
CGcDxMainFrameView::operator=(CGcDxMainFrameView *this,CGcDxMainFrameView *param_1)

{
                    /* 0x2be0  19  ??4CGcDxMainFrameView@@QAEAAV0@ABV0@@Z */
  CMainFrameView::operator=((CMainFrameView *)this,(CMainFrameView *)param_1);
  return (CGcDxMainFrameView *)this;
}



/* ---- CGcDxMainFrameView @ 10002c00 size=19 ---- */

/* public: __thiscall CGcDxMainFrameView::CGcDxMainFrameView(void) */

CGcDxMainFrameView * __thiscall CGcDxMainFrameView::CGcDxMainFrameView(CGcDxMainFrameView *this)

{
                    /* 0x2c00  8  ??0CGcDxMainFrameView@@QAE@XZ */
  CMainFrameView::CMainFrameView((CMainFrameView *)this);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- ~CGcDxMainFrameView @ 10002c20 size=12 ---- */

/* public: virtual __thiscall CGcDxMainFrameView::~CGcDxMainFrameView(void) */

void __thiscall CGcDxMainFrameView::~CGcDxMainFrameView(CGcDxMainFrameView *this)

{
                    /* 0x2c20  14  ??1CGcDxMainFrameView@@UAE@XZ */
  this->vftablePtr = &_vftable_;
                    /* WARNING: Could not recover jumptable at 0x10002c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMainFrameView::~CMainFrameView((CMainFrameView *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 10002c30 size=89 ---- */

CMainFrameView * __thiscall
CGcDxMainFrameView::scalar_deleting_destructor(CGcDxMainFrameView *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGcDxMainFrameView::~CGcDxMainFrameView */
    this->vftablePtr = &_vftable_;
    CMainFrameView::~CMainFrameView((CMainFrameView *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CMainFrameView *)this;
  }
  _eh_vector_destructor_iterator_(this,4,(int)this[-1].vftablePtr,~CGcDxMainFrameView);
  if ((param_1 & 1) != 0) {
    operator_delete__((CMainFrameView *)(this + -1));
  }
  return (CMainFrameView *)(this + -1);
}



/* ---- Evt_LobbyState_OnStateChanged @ 10002c90 size=83 ---- */

/* public: int __thiscall CGcDxMainFrameView::Evt_LobbyState_OnStateChanged(struct IParam &) */

int __thiscall
CGcDxMainFrameView::Evt_LobbyState_OnStateChanged(CGcDxMainFrameView *this,IParam *param_1)

{
  CMainFrameWnd *this_00;
  BOOL BVar1;
  CGcDxMainFrameView **ppCVar2;
  CGcDxMainFrameView *local_4;
  
  local_4 = this;
                    /* 0x2c90  36
                       ?Evt_LobbyState_OnStateChanged@CGcDxMainFrameView@@QAEHAAUIParam@@@Z */
  this_00 = (CMainFrameWnd *)CMainFrameView::GetMainWnd((CMainFrameView *)this);
  BVar1 = IsIconic(*(HWND *)&this_00->field_0x20);
  if (BVar1 == 1) {
    CWnd::ShowWindow((CWnd *)this_00,9);
  }
  ppCVar2 = &local_4;
  local_4 = (CGcDxMainFrameView *)0x0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_100060a8);
  CMainFrameWnd::UpdateSkin(this_00,(char *)ppCVar2);
  return 0;
}



/* ---- scalar_deleting_destructor @ 10002cf0 size=18 ---- */

void __thiscall
CMFunctor<CGcDxMainFrameView>::scalar_deleting_destructor(CMFunctor<CGcDxMainFrameView> *this)

{
  if (this != (CMFunctor<CGcDxMainFrameView> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CGcDxMainFrameView>::~CMFunctor<CGcDxMainFrameView> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CGcDxMainFrameView::OnAttached @ 10002d10 size=78 ---- */

/* public: virtual bool __thiscall CGcDxMainFrameView::OnAttached(void) */

bool __thiscall CGcDxMainFrameView::CGcDxMainFrameView__OnAttached(CGcDxMainFrameView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x2d10  60  ?OnAttached@CGcDxMainFrameView@@UAE_NXZ */
  CMainFrameView::OnAttached((CMainFrameView *)this);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CGcDxMainFrameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_LobbyState_OnStateChanged;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("lobbyState","onStateChanged",puVar2,1);
  return true;
}



/* ---- _GetBaseClass @ 10002d60 size=6 ---- */

/* protected: static struct CRuntimeClass * __stdcall CGcDxMainFrameWnd::_GetBaseClass(void) */

CRuntimeClass * CGcDxMainFrameWnd::_GetBaseClass(void)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x2d60  85  ?_GetBaseClass@CGcDxMainFrameWnd@@KGPAUCRuntimeClass@@XZ */
  pCVar1 = CMainFrameWnd::GetThisClass();
  return pCVar1;
}



/* ---- CGcDxMainFrameWnd::GetRuntimeClass @ 10002d70 size=6 ---- */

/* public: virtual struct CRuntimeClass * __thiscall CGcDxMainFrameWnd::GetRuntimeClass(void)const
    */

CRuntimeClass * __thiscall
CGcDxMainFrameWnd::CGcDxMainFrameWnd__GetRuntimeClass(CGcDxMainFrameWnd *this)

{
                    /* 0x2d70  44  ?GetRuntimeClass@CGcDxMainFrameWnd@@UBEPAUCRuntimeClass@@XZ
                       0x2d70  46  ?GetThisClass@CGcDxMainFrameWnd@@SGPAUCRuntimeClass@@XZ */
  return (CRuntimeClass *)&classCGcDxMainFrameWnd;
}



/* ---- CGcDxMainFrameWnd @ 10002d80 size=49 ---- */

/* public: __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd(void) */

CGcDxMainFrameWnd * __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd(CGcDxMainFrameWnd *this)

{
                    /* 0x2d80  9  ??0CGcDxMainFrameWnd@@QAE@XZ */
  CMainFrameWnd::CMainFrameWnd((CMainFrameWnd *)this);
  (this->CGcDxMainFrameWnd_data).offset_0x8c = 0;
  (this->CGcDxMainFrameWnd_data).offset_0x90 = 0;
  (this->CGcDxMainFrameWnd_data).offset_0x94 = 0;
  this->vftablePtr = &_vftable__for__CFrameWnd__;
  this->vftablePtr = &_vftable__for__CControlBase__;
  return this;
}



/* ---- CGcDxMainFrameWnd @ 10002dc0 size=22 ---- */

/* public: virtual __thiscall CGcDxMainFrameWnd::~CGcDxMainFrameWnd(void) */

void __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd(CGcDxMainFrameWnd *this)

{
                    /* 0x2dc0  15  ??1CGcDxMainFrameWnd@@UAE@XZ */
  this->vftablePtr = &_vftable__for__CFrameWnd__;
  this->vftablePtr = &_vftable__for__CControlBase__;
                    /* WARNING: Could not recover jumptable at 0x10002dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMainFrameWnd::~CMainFrameWnd((CMainFrameWnd *)this);
  return;
}



/* ---- CGcDxMainFrameWnd::WindowProc @ 10002de0 size=70 ---- */

/* public: virtual long __thiscall CGcDxMainFrameWnd::WindowProc(unsigned int,unsigned int,long) */

long __thiscall
CGcDxMainFrameWnd::CGcDxMainFrameWnd__WindowProc
          (CGcDxMainFrameWnd *this,uint param_1,uint param_2,long param_3)

{
  CUIInputManager *this_00;
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  CControl *pCVar5;
  
                    /* 0x2de0  83  ?WindowProc@CGcDxMainFrameWnd@@UAEJIIJ@Z */
  if ((param_1 < 0x200) || (0x20a < param_1)) {
    pCVar5 = (CControl *)0x0;
    uVar2 = param_1;
    uVar3 = param_2;
    uVar4 = param_3;
    this_00 = neon::ctrl::SUIManager::Instance();
    neon::ctrl::CUIInputManager::ProcessMessage(this_00,uVar2,uVar3,uVar4,pCVar5);
  }
  lVar1 = CWnd::CWnd__WindowProc((CWnd *)this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CGcDxMainFrameWnd::OnTimer @ 10002e30 size=301 ---- */

/* public: virtual void __thiscall CGcDxMainFrameWnd::OnTimer(unsigned int) */

void __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd__OnTimer(CGcDxMainFrameWnd *this,uint param_1)

{
  byte bVar1;
  uint uVar2;
  IGod *pIVar3;
  int iVar4;
  CApp *this_00;
  byte *pbVar5;
  bool bVar6;
  undefined4 uStack_98;
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2e30  74  ?OnTimer@CGcDxMainFrameWnd@@UAEXI@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000478c;
  local_c = ExceptionList;
  local_10 = DAT_1000d460 ^ (uint)&uStack_98;
  uVar2 = DAT_1000d460 ^ (uint)(local_94 + -0xc);
  ExceptionList = &local_c;
  if ((param_1 == 0xd05) || (param_1 == 0xd06)) {
    CParam::CParam(local_94,false);
    local_4 = 0;
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x10))("lobbyState","queryState",local_94,1,uVar2);
    CParam::GetValue(local_94,"p008",(char **)&uStack_98);
    pbVar5 = &DAT_10005c4c;
    do {
      bVar1 = *uStack_98;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_10002f00:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_10002f05;
      }
      if (bVar1 == 0) break;
      bVar1 = uStack_98[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_10002f00;
      uStack_98 = uStack_98 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10002f05:
    if (iVar4 == 0) {
      this_00 = neon::frw::SApp::Instance();
      neon::frw::CApp::Run(this_00);
    }
    local_4 = 0xffffffff;
    CParam::~CParam(local_94);
  }
  CMainFrameWnd::OnTimer((CMainFrameWnd *)this,param_1);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&uStack_98);
  return;
}



/* ---- OnSize @ 10002f60 size=164 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::OnSize(unsigned int,int,int) */

void __thiscall
CGcDxMainFrameWnd::OnSize(CGcDxMainFrameWnd *this,uint param_1,int param_2,int param_3)

{
  uint uVar1;
  CGcDxGameWnd *pCVar2;
  int iVar3;
  CGameWnd *pCVar4;
  uint *puVar5;
  
                    /* 0x2f60  73  ?OnSize@CGcDxMainFrameWnd@@QAEXIHH@Z */
  uVar1 = param_1;
  if ((this->CGcDxMainFrameWnd_data).offset_0x8c != 0) {
    param_1 = 0;
    if (uVar1 == 1) {
      pCVar2 = (CGcDxGameWnd *)AfxGetGameWnd();
      iVar3 = CGcDxGameWnd::IsFullMode(pCVar2);
      if ((iVar3 != 0) && (pCVar4 = AfxGetGameWnd(), *(int *)(pCVar4 + 0x1e4) != 0)) {
        puVar5 = &param_1;
        param_1 = uVar1;
        pCVar2 = (CGcDxGameWnd *)AfxGetGameWnd();
        CGcDxGameWnd::ChangeDisplayMode(pCVar2,(int *)puVar5);
      }
    }
    else if (uVar1 == 0) {
      pCVar2 = (CGcDxGameWnd *)AfxGetGameWnd();
      iVar3 = CGcDxGameWnd::IsFullMode(pCVar2);
      if ((iVar3 == 0) && (pCVar4 = AfxGetGameWnd(), *(int *)(pCVar4 + 0x1e4) != 0)) {
        puVar5 = &param_1;
        param_1 = uVar1;
        pCVar2 = (CGcDxGameWnd *)AfxGetGameWnd();
        CGcDxGameWnd::ChangeDisplayMode(pCVar2,(int *)puVar5);
        pCVar4 = AfxGetGameWnd();
        *(undefined4 *)(pCVar4 + 0x1e4) = 0;
      }
    }
  }
  CFrameWnd::OnSize((CFrameWnd *)this,uVar1,param_2,param_3);
  return;
}



/* ---- OnModalIdle @ 10003010 size=260 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnModalIdle(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnModalIdle(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  byte bVar1;
  IGod *pIVar2;
  byte *pbVar3;
  int iVar4;
  CApp *this_00;
  long lVar5;
  byte *pbVar6;
  bool bVar7;
  byte *pbStack_a8;
  CParam *pCStack_a4;
  undefined1 auStack_98 [4];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3010  69  ?OnModalIdle@CGcDxMainFrameWnd@@QAEJIJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100047cc;
  local_c = ExceptionList;
  local_10 = DAT_1000d460 ^ (uint)auStack_98;
  ExceptionList = &local_c;
  pCStack_a4 = (CParam *)0x10003053;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pIVar2 = God();
  pCStack_a4 = local_94;
  pbStack_a8 = (byte *)0x100062f0;
  (**(code **)(*(int *)pIVar2 + 0x10))("lobbyState");
  CParam::GetValue((CParam *)&pCStack_a4,"p008",(char **)&pbStack_a8);
  pbVar6 = &DAT_10005c4c;
  pbVar3 = pbStack_a8;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_100030c0:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100030c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_100030c0;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100030c5:
  if (iVar4 == 0) {
    this_00 = neon::frw::SApp::Instance();
    neon::frw::CApp::Run(this_00);
  }
  uStack_14 = 0xffffffff;
  CParam::~CParam((CParam *)&pCStack_a4);
  ExceptionList = pvStack_1c;
  lVar5 = __security_check_cookie(uStack_20 ^ (uint)&pbStack_a8);
  return lVar5;
}



/* ---- GetGameResolution @ 10003120 size=42 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::GetGameResolution(class CRect &) */

void __thiscall CGcDxMainFrameWnd::GetGameResolution(CGcDxMainFrameWnd *this,CRect *param_1)

{
                    /* 0x3120  40  ?GetGameResolution@CGcDxMainFrameWnd@@QAEXAAVCRect@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)&(this->CGcDxMainFrameWnd_data).field_0x70;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)&(this->CGcDxMainFrameWnd_data).field_0x74;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)&(this->CGcDxMainFrameWnd_data).field_0x78;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)&(this->CGcDxMainFrameWnd_data).field_0x7c;
  return;
}



/* ---- GetFrameResolution @ 10003150 size=42 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::GetFrameResolution(class CRect &) */

void __thiscall CGcDxMainFrameWnd::GetFrameResolution(CGcDxMainFrameWnd *this,CRect *param_1)

{
                    /* 0x3150  38  ?GetFrameResolution@CGcDxMainFrameWnd@@QAEXAAVCRect@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)&(this->CGcDxMainFrameWnd_data).field_0x60;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)&(this->CGcDxMainFrameWnd_data).field_0x64;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)&(this->CGcDxMainFrameWnd_data).field_0x68;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)&(this->CGcDxMainFrameWnd_data).field_0x6c;
  return;
}



/* ---- scalar_deleting_destructor @ 10003190 size=102 ---- */

CMainFrameWnd * __thiscall
CGcDxMainFrameWnd::scalar_deleting_destructor(CGcDxMainFrameWnd *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CGcDxMainFrameWnd::~CGcDxMainFrameWnd */
    this->vftablePtr = &_vftable__for__CFrameWnd__;
    this->vftablePtr = &_vftable__for__CControlBase__;
    CMainFrameWnd::~CMainFrameWnd((CMainFrameWnd *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CMainFrameWnd *)this;
  }
  puVar1 = &this[-1].CGcDxMainFrameWnd_data.offset_0x94;
  _eh_vector_destructor_iterator_
            (this,0x184,this[-1].CGcDxMainFrameWnd_data.offset_0x94,CGcDxMainFrameWnd);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CMainFrameWnd *)puVar1;
}



/* ---- OnKillFocus @ 10003200 size=8 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::OnKillFocus(class CWnd *) */

void __thiscall CGcDxMainFrameWnd::OnKillFocus(CGcDxMainFrameWnd *this,CWnd *param_1)

{
                    /* 0x3200  68  ?OnKillFocus@CGcDxMainFrameWnd@@QAEXPAVCWnd@@@Z */
  CWnd::Default((CWnd *)this);
  return;
}



/* ---- OnContextMenu @ 10003210 size=80 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnEnterSizeMove(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnContextMenu(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  DefWindowProcA *pDVar1;
  UINT_PTR UVar2;
  long lVar3;
  
                    /* 0x3210  64  ?OnEnterSizeMove@CGcDxMainFrameWnd@@QAEJIJ@Z */
  UVar2 = (this->CGcDxMainFrameWnd_data).offset_0x90;
  if (UVar2 != 0) {
    KillTimer(*(HWND *)&this->field_0x20,UVar2);
  }
  UVar2 = SetTimer(*(HWND *)&this->field_0x20,0xd05,10,(TIMERPROC)0x0);
  pDVar1 = this->vftablePtr->DefWindowProcA;
  (this->CGcDxMainFrameWnd_data).offset_0x90 = UVar2;
  lVar3 = (*pDVar1)(this,0x231,param_1,param_2);
  return lVar3;
}



/* ---- OnExitSizeMove @ 10003260 size=55 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnExitSizeMove(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnExitSizeMove(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  UINT_PTR uIDEvent;
  long lVar1;
  
                    /* 0x3260  66  ?OnExitSizeMove@CGcDxMainFrameWnd@@QAEJIJ@Z */
  uIDEvent = (this->CGcDxMainFrameWnd_data).offset_0x90;
  if (uIDEvent != 0) {
    KillTimer(*(HWND *)&this->field_0x20,uIDEvent);
  }
  lVar1 = (*this->vftablePtr->DefWindowProcA)(this,0x232,param_1,param_2);
  return lVar1;
}



/* ---- OnActivate @ 100032a0 size=350 ---- */

/* public: void __thiscall CGcDxMainFrameWnd::OnActivate(unsigned int,class CWnd *,int) */

void __thiscall
CGcDxMainFrameWnd::OnActivate(CGcDxMainFrameWnd *this,uint param_1,CWnd *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  IGod *pIVar3;
  int iVar4;
  SGlobalInfo *this_00;
  void *pvVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 uStack_98;
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x32a0  57  ?OnActivate@CGcDxMainFrameWnd@@QAEXIPAVCWnd@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000480c;
  local_c = ExceptionList;
  local_10 = DAT_1000d460 ^ (uint)&uStack_98;
  uVar2 = DAT_1000d460 ^ (uint)(local_94 + -0x14);
  ExceptionList = &local_c;
  if (((param_1 == 1) || (param_1 == 2)) && (param_3 == 0)) {
    CParam::CParam(local_94,false);
    local_4 = param_3;
    pIVar3 = God();
    (**(code **)(*(int *)pIVar3 + 0x10))("lobbyState","queryState",local_94,1,uVar2);
    CParam::GetValue(local_94,"p008",(char **)&uStack_98);
    pbVar6 = &DAT_10005c4c;
    do {
      bVar1 = *uStack_98;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10003376:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1000337b;
      }
      if (bVar1 == 0) break;
      bVar1 = uStack_98[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10003376;
      uStack_98 = uStack_98 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1000337b:
    if (iVar4 == 0) {
      this_00 = GInfo();
      pvVar5 = SGlobalInfo::GetGameWndPtr(this_00);
      if (pvVar5 != (void *)0x0) {
        SendMessageA(*(HWND *)((int)pvVar5 + 0x20),0x42f,0,0);
      }
    }
    local_4 = 0xffffffff;
    CParam::~CParam(local_94);
  }
  if ((this->CGcDxMainFrameWnd_data).offset_0x8c == 0) {
    CMainFrameWnd::OnActivate((CMainFrameWnd *)this,param_1,param_2,param_3);
  }
  else {
    CFrameWnd::OnActivate((CFrameWnd *)this,param_1,param_2,param_3);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&uStack_98);
  return;
}



/* ---- OnEnterDlgDrag @ 10003400 size=55 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnEnterDlgDrag(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnEnterDlgDrag(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  UINT_PTR UVar1;
  
                    /* 0x3400  63  ?OnEnterDlgDrag@CGcDxMainFrameWnd@@QAEJIJ@Z */
  UVar1 = (this->CGcDxMainFrameWnd_data).offset_0x94;
  if (UVar1 != 0) {
    KillTimer(*(HWND *)&this->field_0x20,UVar1);
  }
  UVar1 = SetTimer(*(HWND *)&this->field_0x20,0xd06,10,(TIMERPROC)0x0);
  (this->CGcDxMainFrameWnd_data).offset_0x94 = UVar1;
  return 0;
}



/* ---- OnExitDlgDrag @ 10003440 size=26 ---- */

/* public: long __thiscall CGcDxMainFrameWnd::OnExitDlgDrag(unsigned int,long) */

long __thiscall CGcDxMainFrameWnd::OnExitDlgDrag(CGcDxMainFrameWnd *this,uint param_1,long param_2)

{
  UINT_PTR uIDEvent;
  
                    /* 0x3440  65  ?OnExitDlgDrag@CGcDxMainFrameWnd@@QAEJIJ@Z */
  uIDEvent = (this->CGcDxMainFrameWnd_data).offset_0x94;
  if (uIDEvent != 0) {
    KillTimer(*(HWND *)&this->field_0x20,uIDEvent);
  }
  return 0;
}



/* ---- vfunction1 @ 10003460 size=11 ---- */

void __thiscall CGcDxMainFrameWnd::vfunction1(CGcDxMainFrameWnd *this,byte param_1)

{
  scalar_deleting_destructor((CGcDxMainFrameWnd *)&this[-1].field_0x9c,param_1);
  return;
}



/* ---- CGcDxMainFrameWnd::GetMessageMap @ 10003470 size=45 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual struct AFX_MSGMAP const * __thiscall
   CGcDxMainFrameWnd::GetMessageMap(void)const  */

AFX_MSGMAP * __thiscall CGcDxMainFrameWnd::CGcDxMainFrameWnd__GetMessageMap(CGcDxMainFrameWnd *this)

{
                    /* 0x3470  42  ?GetMessageMap@CGcDxMainFrameWnd@@MBEPBUAFX_MSGMAP@@XZ
                       0x3470  48  ?GetThisMessageMap@CGcDxMainFrameWnd@@KGPBUAFX_MSGMAP@@XZ */
  if ((_DAT_1000d4f0 & 1) == 0) {
    _DAT_1000d4f0 = _DAT_1000d4f0 | 1;
    _DAT_1000d4e8 = GetThisMessageMap_exref;
    _DAT_1000d4ec = &DAT_10006300;
  }
  return (AFX_MSGMAP *)&DAT_1000d4e8;
}



/* ---- neon::frw::CObject::Logic @ 1000349e size=6 ---- */

void __thiscall neon::frw::CObject::neon__frw__CObject__Logic(CObject *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000349e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Logic(this);
  return;
}



/* ---- neon::visual::CVisual::Output @ 100034a4 size=6 ---- */

void __thiscall neon::visual::CVisual::neon__visual__CVisual__Output(CVisual *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Output(this);
  return;
}



/* ---- neon::frw::CComponent::BeforeRelease @ 100034aa size=6 ---- */

void __thiscall neon::frw::CComponent::neon__frw__CComponent__BeforeRelease(CComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeforeRelease(this);
  return;
}



/* ---- neon::visual::CVisual::OnAttached @ 100034b0 size=6 ---- */

void __thiscall neon::visual::CVisual::neon__visual__CVisual__OnAttached(CVisual *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAttached(this);
  return;
}



/* ---- neon::visual::CVisual::OnDetached @ 100034b6 size=6 ---- */

void __thiscall neon::visual::CVisual::neon__visual__CVisual__OnDetached(CVisual *this)

{
                    /* WARNING: Could not recover jumptable at 0x100034b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDetached(this);
  return;
}



/* ---- neon::frw::CObject::OnActivate @ 100034bc size=6 ---- */

void __thiscall neon::frw::CObject::neon__frw__CObject__OnActivate(CObject *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100034bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnActivate(this,param_1);
  return;
}



/* ---- neon::frw::CObject::OnSelect @ 100034c2 size=6 ---- */

void __thiscall neon::frw::CObject::neon__frw__CObject__OnSelect(CObject *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100034c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSelect(this,param_1);
  return;
}



/* ---- neon::frw::CObject::OnFocus @ 100034c8 size=6 ---- */

void __thiscall
neon::frw::CObject::neon__frw__CObject__OnFocus(CObject *this,bool param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100034c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFocus(this,param_1,param_2);
  return;
}



/* ---- neon::frw::CObject::IsIn @ 100034ce size=6 ---- */

CObject * __thiscall
neon::frw::CObject::neon__frw__CObject__IsIn(CObject *this,int param_1,int param_2)

{
  CObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = IsIn(this,param_1,param_2);
  return pCVar1;
}



/* ---- neon::visual::CVisual::Clone @ 100034d4 size=6 ---- */

CObject * __thiscall neon::visual::CVisual::neon__visual__CVisual__Clone(CVisual *this)

{
  CObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = Clone(this);
  return pCVar1;
}



/* ---- neon::visual::CVisual::Copy @ 100034da size=6 ---- */

void __thiscall neon::visual::CVisual::neon__visual__CVisual__Copy(CVisual *this,CObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100034da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Copy(this,param_1);
  return;
}



/* ---- neon::frw::CObject::IsMyIn @ 100034e0 size=6 ---- */

CObject * __thiscall
neon::frw::CObject::neon__frw__CObject__IsMyIn(CObject *this,int param_1,int param_2)

{
  CObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = IsMyIn(this,param_1,param_2);
  return pCVar1;
}



/* ---- neon::frw::CObject::IsChildIn @ 100034e6 size=6 ---- */

CObject * __thiscall
neon::frw::CObject::neon__frw__CObject__IsChildIn(CObject *this,int param_1,int param_2)

{
  CObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100034e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = IsChildIn(this,param_1,param_2);
  return pCVar1;
}



/* ---- neon::visual::CVisual::SetEffect @ 100034ec size=6 ---- */

void __thiscall
neon::visual::CVisual::neon__visual__CVisual__SetEffect
          (CVisual *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4)

{
                    /* WARNING: Could not recover jumptable at 0x100034ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEffect(this,param_1,param_2,param_3,param_4);
  return;
}



/* ---- neon::visual::CVisual::SetEffectType @ 100034f2 size=6 ---- */

void __thiscall
neon::visual::CVisual::neon__visual__CVisual__SetEffectType
          (CVisual *this,VRenderEffectType param_1,uchar param_2,uchar param_3,uchar param_4,
          uchar param_5)

{
                    /* WARNING: Could not recover jumptable at 0x100034f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEffectType(this,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ---- neon::visual::CVisual::SetClipRect @ 100034f8 size=6 ---- */

void __thiscall
neon::visual::CVisual::neon__visual__CVisual__SetClipRect
          (CVisual *this,CBasicRect<float> *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100034f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetClipRect(this,param_1,param_2);
  return;
}



/* ---- neon::visual::CVisual::SetLocalClipRect @ 100034fe size=6 ---- */

void __thiscall
neon::visual::CVisual::neon__visual__CVisual__SetLocalClipRect
          (CVisual *this,CBasicRect<float> *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100034fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLocalClipRect(this,param_1,param_2);
  return;
}



/* ---- neon::visual::CVisual::GetPosX @ 10003504 size=6 ---- */

float __thiscall neon::visual::CVisual::neon__visual__CVisual__GetPosX(CVisual *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = GetPosX(this);
  return fVar1;
}



/* ---- neon::visual::CVisual::GetPosY @ 1000350a size=6 ---- */

float __thiscall neon::visual::CVisual::neon__visual__CVisual__GetPosY(CVisual *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000350a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = GetPosY(this);
  return fVar1;
}



/* ---- neon::visual::CVisual::SetPosX @ 10003510 size=6 ---- */

void __thiscall neon::visual::CVisual::neon__visual__CVisual__SetPosX(CVisual *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetPosX(this,param_1);
  return;
}



/* ---- neon::visual::CVisual::SetPosY @ 10003516 size=6 ---- */

void __thiscall neon::visual::CVisual::neon__visual__CVisual__SetPosY(CVisual *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetPosY(this,param_1);
  return;
}



/* ---- neon::visual::CVisual::SetShowRef @ 1000351c size=6 ---- */

void __thiscall neon::visual::CVisual::neon__visual__CVisual__SetShowRef(CVisual *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000351c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetShowRef(this,param_1);
  return;
}



/* ---- neon::visual::CVisual::SetInverse @ 10003522 size=6 ---- */

void __thiscall neon::visual::CVisual::neon__visual__CVisual__SetInverse(CVisual *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInverse(this,param_1);
  return;
}



/* ---- neon::visual::CVisual::SetPivot @ 10003528 size=6 ---- */

void __thiscall
neon::visual::CVisual::neon__visual__CVisual__SetPivot(CVisual *this,float param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetPivot(this,param_1,param_2);
  return;
}



/* ---- neon::visual::CVisual::SetUseParentRotation @ 1000352e size=6 ---- */

void __thiscall
neon::visual::CVisual::neon__visual__CVisual__SetUseParentRotation(CVisual *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000352e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUseParentRotation(this,param_1);
  return;
}



/* ---- neon::visual::CVisual::GetAlpha @ 10003534 size=6 ---- */

uchar __thiscall neon::visual::CVisual::neon__visual__CVisual__GetAlpha(CVisual *this)

{
  uchar uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetAlpha(this);
  return uVar1;
}



/* ---- CBaseApp::GetMessageMap @ 1000353a size=6 ---- */

AFX_MSGMAP * __thiscall CBaseApp::CBaseApp__GetMessageMap(CBaseApp *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000353a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CBaseApp::RegisterHandlers @ 10003540 size=6 ---- */

void __thiscall CBaseApp::CBaseApp__RegisterHandlers(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegisterHandlers(this);
  return;
}



/* ---- CBaseApp::RegWork_LoadFullScreenSetting @ 10003546 size=6 ---- */

void __thiscall CBaseApp::CBaseApp__RegWork_LoadFullScreenSetting(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegWork_LoadFullScreenSetting(this);
  return;
}



/* ---- CBaseApp::RegWork_SaveFullScreenSetting @ 1000354c size=6 ---- */

void __thiscall CBaseApp::CBaseApp__RegWork_SaveFullScreenSetting(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegWork_SaveFullScreenSetting(this);
  return;
}



/* ---- CBaseApp::RegWork_RegisterNotifyWnd @ 10003552 size=6 ---- */

void __thiscall CBaseApp::CBaseApp__RegWork_RegisterNotifyWnd(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegWork_RegisterNotifyWnd(this);
  return;
}



/* ---- CBaseApp::RegWork_EraseNotifyWnd @ 10003558 size=6 ---- */

void __thiscall CBaseApp::CBaseApp__RegWork_EraseNotifyWnd(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegWork_EraseNotifyWnd(this);
  return;
}



/* ---- CBaseApp::CheckTestMode @ 1000355e size=6 ---- */

void __thiscall CBaseApp::CBaseApp__CheckTestMode(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000355e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CheckTestMode(this);
  return;
}



/* ---- CBaseApp::MakeFrameInstance @ 10003564 size=6 ---- */

CFrameWnd * __thiscall CBaseApp::CBaseApp__MakeFrameInstance(CBaseApp *this)

{
  CFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = MakeFrameInstance(this);
  return pCVar1;
}



/* ---- CBaseApp::MakeGameInstance @ 1000356a size=6 ---- */

void * __thiscall CBaseApp::CBaseApp__MakeGameInstance(CBaseApp *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000356a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = MakeGameInstance(this);
  return pvVar1;
}



/* ---- CBaseApp::HookConfigLoader @ 10003570 size=6 ---- */

int __thiscall CBaseApp::CBaseApp__HookConfigLoader(CBaseApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = HookConfigLoader(this);
  return iVar1;
}



/* ---- CBaseApp::CheckBipLog @ 10003576 size=6 ---- */

void __thiscall CBaseApp::CBaseApp__CheckBipLog(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CheckBipLog(this);
  return;
}



/* ---- CBaseApp::_CheckCmdString @ 1000357c size=6 ---- */

int __thiscall CBaseApp::CBaseApp___CheckCmdString(CBaseApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000357c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _CheckCmdString(this);
  return iVar1;
}



/* ---- CBaseApp::_CheckMutex @ 10003582 size=6 ---- */

int __thiscall CBaseApp::CBaseApp___CheckMutex(CBaseApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _CheckMutex(this);
  return iVar1;
}



/* ---- CBaseApp::_CheckPlatformConverter @ 10003588 size=6 ---- */

void __thiscall CBaseApp::CBaseApp___CheckPlatformConverter(CBaseApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CheckPlatformConverter(this);
  return;
}



/* ---- CControlBase::CreateControl @ 1000358e size=6 ---- */

bool __thiscall CControlBase::CControlBase__CreateControl(CControlBase *this,IParam *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000358e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CreateControl(this,param_1);
  return bVar1;
}



/* ---- CControlBase::DestroyControl @ 10003594 size=6 ---- */

bool __thiscall CControlBase::CControlBase__DestroyControl(CControlBase *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DestroyControl(this);
  return bVar1;
}



/* ---- CControlBase::IsCreated @ 1000359a size=6 ---- */

bool __thiscall CControlBase::CControlBase__IsCreated(CControlBase *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000359a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsCreated(this);
  return bVar1;
}



/* ---- CControlBase::ShowControl @ 100035a0 size=6 ---- */

void __thiscall CControlBase::CControlBase__ShowControl(CControlBase *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100035a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowControl(this,param_1);
  return;
}



/* ---- CControlBase::UpdateControlForGame @ 100035a6 size=6 ---- */

void __thiscall CControlBase::CControlBase__UpdateControlForGame(CControlBase *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100035a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControlForGame(this,param_1);
  return;
}



/* ---- CControlBase::GetCWndPtr @ 100035ac size=6 ---- */

CWnd * __thiscall CControlBase::CControlBase__GetCWndPtr(CControlBase *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCWndPtr(this);
  return pCVar1;
}



/* ---- God @ 100035b2 size=6 ---- */

IGod * __cdecl God(void)

{
  IGod *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = God();
  return pIVar1;
}



/* ---- CGameLobbyView::OnDetached @ 100035b8 size=6 ---- */

bool __thiscall CGameLobbyView::CGameLobbyView__OnDetached(CGameLobbyView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CBaseLobbyView::Msg_GetWindow @ 100035be size=6 ---- */

int __thiscall CBaseLobbyView::CBaseLobbyView__Msg_GetWindow(CBaseLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_GetWindow(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyView::OnClickExitGameBtn @ 100035c4 size=6 ---- */

int __thiscall
CGameLobbyView::CGameLobbyView__OnClickExitGameBtn(CGameLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitGameBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnDetached @ 100035ca size=6 ---- */

bool __thiscall CChannelLobbyView::CChannelLobbyView__OnDetached(CChannelLobbyView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CChannelLobbyView::Msg_UpdateUIFromXML @ 100035d0 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__Msg_UpdateUIFromXML(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_UpdateUIFromXML(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnDblClickRoomList @ 100035d6 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnDblClickRoomList(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDblClickRoomList(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickChangeChannelBtn @ 100035dc size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickChangeChannelBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChangeChannelBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickCreateRoomBtn @ 100035e2 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickCreateRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickCreateRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickJoinRoomBtn @ 100035e8 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickJoinRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickJoinRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickViewRoomBtn @ 100035ee size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickViewRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickViewRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickRoomAvatar @ 100035f4 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickRoomAvatar(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRoomAvatar(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnDblClickMemberList @ 100035fa size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnDblClickMemberList(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100035fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDblClickMemberList(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickDirectStartBtn @ 10003600 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickDirectStartBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickDirectStartBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickRecommendedGameBtn @ 10003606 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickRecommendedGameBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRecommendedGameBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickExitBtn @ 1000360c size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickExitBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000360c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickAutoCreateRoomBtn @ 10003612 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickAutoCreateRoomBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAutoCreateRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnGetItemState @ 10003618 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnGetItemState(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetItemState(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnCloseItemWebDlg @ 1000361e size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnCloseItemWebDlg(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000361e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCloseItemWebDlg(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickShowItemWebBtn @ 10003624 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickShowItemWebBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowItemWebBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickHappyBeanBtn @ 1000362a size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickHappyBeanBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000362a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickHappyBeanBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickGuildCtrl @ 10003630 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickGuildCtrl(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickGuildCtrl(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickThermometer @ 10003636 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickThermometer(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickThermometer(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickSPCRoom @ 1000363c size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickSPCRoom(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000363c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickSPCRoom(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickMemberListTabFilterBtn @ 10003642 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickMemberListTabFilterBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickMemberListTabFilterBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickShowEmptyRoomBtn @ 10003648 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickShowEmptyRoomBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowEmptyRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickShowRoomNumOrderBtn @ 1000364e size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickShowRoomNumOrderBtn
          (CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000364e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickShowRoomNumOrderBtn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyView::OnClickSearchRoomBtn @ 10003654 size=6 ---- */

int __thiscall
CChannelLobbyView::CChannelLobbyView__OnClickSearchRoomBtn(CChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickSearchRoomBtn(this,param_1);
  return iVar1;
}



/* ---- CHanChatView::OnAttached @ 1000365a size=6 ---- */

bool __thiscall CHanChatView::CHanChatView__OnAttached(CHanChatView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000365a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CHanChatView::OnDetached @ 10003660 size=6 ---- */

bool __thiscall CHanChatView::CHanChatView__OnDetached(CHanChatView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CChannelMainWnd::GetRuntimeClass @ 10003666 size=6 ---- */

CRuntimeClass * __thiscall CChannelMainWnd::CChannelMainWnd__GetRuntimeClass(CChannelMainWnd *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CChannelMainWnd::GetMessageMap @ 1000366c size=6 ---- */

AFX_MSGMAP * __thiscall CChannelMainWnd::CChannelMainWnd__GetMessageMap(CChannelMainWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000366c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}



/* ---- CChannelMainWnd::InitiateChannelMainWnd @ 10003672 size=6 ---- */

int __thiscall
CChannelMainWnd::CChannelMainWnd__InitiateChannelMainWnd
          (CChannelMainWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitiateChannelMainWnd(this,param_1);
  return iVar1;
}



/* ---- CChannelMainWnd::CreateRoomListCtrl @ 10003678 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CreateRoomListCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateRoomListCtrl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::CreateMyInfoCtrl @ 1000367e size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CreateMyInfoCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000367e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateMyInfoCtrl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::CreateTabCtrl @ 10003684 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CreateTabCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateTabCtrl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::CreateNoticeWnd @ 1000368a size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CreateNoticeWnd(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000368a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateNoticeWnd(this,param_1);
  return;
}



/* ---- CChannelMainWnd::CreateChannelButton @ 10003690 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CreateChannelButton(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateChannelButton(this,param_1);
  return;
}



/* ---- CChannelMainWnd::CrateTabMemberList @ 10003696 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CrateTabMemberList(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CrateTabMemberList(this,param_1);
  return;
}



/* ---- CChannelMainWnd::AddTab @ 1000369c size=6 ---- */

void __thiscall CChannelMainWnd::CChannelMainWnd__AddTab(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddTab(this,param_1);
  return;
}



/* ---- CChannelMainWnd::AttachScrollCtrl @ 100036a2 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__AttachScrollCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AttachScrollCtrl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::AttachListControl @ 100036a8 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__AttachListControl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AttachListControl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::AttachHtmlCtrl @ 100036ae size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__AttachHtmlCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AttachHtmlCtrl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::AttachBtn @ 100036b4 size=6 ---- */

void __thiscall CChannelMainWnd::CChannelMainWnd__AttachBtn(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AttachBtn(this,param_1);
  return;
}



/* ---- CChannelMainWnd::CreateMemberListCtrl @ 100036ba size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CreateMemberListCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateMemberListCtrl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::CreateGuildListCtrl @ 100036c0 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CreateGuildListCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateGuildListCtrl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::CreateFriendListCtrl @ 100036c6 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__CreateFriendListCtrl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateFriendListCtrl(this,param_1);
  return;
}



/* ---- CChannelMainWnd::SortRoomList @ 100036cc size=6 ---- */

void __thiscall CChannelMainWnd::CChannelMainWnd__SortRoomList(CChannelMainWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SortRoomList(this,param_1);
  return;
}



/* ---- CChannelMainWnd::UpdateControl @ 100036d2 size=6 ---- */

void __thiscall
CChannelMainWnd::CChannelMainWnd__UpdateControl(CChannelMainWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100036d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CMiniChannelListView::OnAttached @ 100036d8 size=6 ---- */

bool __thiscall CMiniChannelListView::CMiniChannelListView__OnAttached(CMiniChannelListView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CMiniChannelListView::OnDetached @ 100036de size=6 ---- */

bool __thiscall CMiniChannelListView::CMiniChannelListView__OnDetached(CMiniChannelListView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CMiniChannelListView::OnClickRefreshBtn @ 100036e4 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickRefreshBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickRefreshBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickJoinBtn @ 100036ea size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickJoinBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickJoinBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickExitBtn @ 100036f0 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickExitBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickAutoJoinBtn @ 100036f6 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickAutoJoinBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAutoJoinBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickGrpListBtn @ 100036fc size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickGrpListBtn
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100036fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickGrpListBtn(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickChannelGrpLst @ 10003702 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickChannelGrpLst
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChannelGrpLst(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnClickChannelLst @ 10003708 size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnClickChannelLst
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickChannelLst(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::OnCheckEnterableState @ 1000370e size=6 ---- */

int __thiscall
CMiniChannelListView::CMiniChannelListView__OnCheckEnterableState
          (CMiniChannelListView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000370e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCheckEnterableState(this,param_1);
  return iVar1;
}



/* ---- CMiniChannelListView::SetMiniChannelListWnd @ 10003714 size=6 ---- */

void __thiscall
CMiniChannelListView::CMiniChannelListView__SetMiniChannelListWnd
          (CMiniChannelListView *this,CMiniChannelListWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetMiniChannelListWnd(this,param_1);
  return;
}



/* ---- CMainFrameView::OnAttached @ 1000371a size=6 ---- */

bool __thiscall CMainFrameView::CMainFrameView__OnAttached(CMainFrameView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000371a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CMainFrameView::OnDetached @ 10003720 size=6 ---- */

bool __thiscall CMainFrameView::CMainFrameView__OnDetached(CMainFrameView *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CMainFrameView::OnAltF4KeyDown @ 10003726 size=6 ---- */

int __thiscall CMainFrameView::CMainFrameView__OnAltF4KeyDown(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAltF4KeyDown(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickExitButton @ 1000372c size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickExitButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000372c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickExitButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnToggleScreenButton @ 10003732 size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnToggleScreenButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToggleScreenButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickMinimizeButton @ 10003738 size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickMinimizeButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickMinimizeButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickAccuseButton @ 1000373e size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickAccuseButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000373e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickAccuseButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickInviteButton @ 10003744 size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickInviteButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickInviteButton(this,param_1);
  return iVar1;
}



/* ---- CMainFrameView::OnClickOptionButton @ 1000374a size=6 ---- */

int __thiscall
CMainFrameView::CMainFrameView__OnClickOptionButton(CMainFrameView *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000374a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnClickOptionButton(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::PreCreateWindow @ 10003750 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__PreCreateWindow(CGameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::DisplayChatMessage @ 10003756 size=6 ---- */

bool __thiscall
CGameWnd::CGameWnd__DisplayChatMessage
          (CGameWnd *this,uint param_1,char *param_2,int param_3,ulong param_4,int param_5,
          int param_6,char *param_7)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayChatMessage(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}



/* ---- CGameWnd::DisplayNoticeMessage @ 1000375c size=6 ---- */

bool __thiscall
CGameWnd::CGameWnd__DisplayNoticeMessage
          (CGameWnd *this,char *param_1,int param_2,int param_3,char *param_4,char *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000375c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayNoticeMessage(this,param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}



/* ---- CGameWnd::DisplayStatusMessage @ 10003762 size=6 ---- */

bool __thiscall
CGameWnd::CGameWnd__DisplayStatusMessage
          (CGameWnd *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5,
          char *param_6)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = DisplayStatusMessage(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return bVar1;
}



/* ---- CGameWnd::CaptureGameScreen @ 10003768 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__CaptureGameScreen(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CaptureGameScreen(this);
  return;
}



/* ---- CGameWnd::FlipScreen @ 1000376e size=6 ---- */

int __thiscall CGameWnd::CGameWnd__FlipScreen(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000376e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FlipScreen(this);
  return iVar1;
}



/* ---- CGameWnd::ExitGameRoom @ 10003774 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__ExitGameRoom(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExitGameRoom(this);
  return;
}



/* ---- CGameWnd::AccuseUser @ 1000377a size=6 ---- */

void __thiscall CGameWnd::CGameWnd__AccuseUser(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000377a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AccuseUser(this);
  return;
}



/* ---- CGameWnd::GetGameChatContent @ 10003780 size=6 ---- */

char * __thiscall CGameWnd::CGameWnd__GetGameChatContent(CGameWnd *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetGameChatContent(this);
  return pcVar1;
}



/* ---- CGameWnd::UpdateChanceInfo @ 10003786 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__UpdateChanceInfo(CGameWnd *this,CMemberData *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateChanceInfo(this,param_1);
  return;
}



/* ---- CGameWnd::CreateCaptionButtons @ 1000378c size=6 ---- */

void __thiscall CGameWnd::CGameWnd__CreateCaptionButtons(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000378c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateCaptionButtons(this);
  return;
}



/* ---- CGameWnd::ShowInviteGameToChnlDlg @ 10003792 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__ShowInviteGameToChnlDlg(CGameWnd *this,bool param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowInviteGameToChnlDlg(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::StopHostBanishCheck @ 10003798 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__StopHostBanishCheck(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  StopHostBanishCheck(this);
  return;
}



/* ---- CGameWnd::StartHostBanishCheck @ 1000379e size=6 ---- */

void __thiscall CGameWnd::CGameWnd__StartHostBanishCheck(CGameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000379e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  StartHostBanishCheck(this);
  return;
}



/* ---- CGameWnd::GetGameOptionFromRegistry @ 100037a4 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__GetGameOptionFromRegistry(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetGameOptionFromRegistry(this);
  return iVar1;
}



/* ---- CGameWnd::PlayEventSound @ 100037aa size=6 ---- */

void __thiscall CGameWnd::CGameWnd__PlayEventSound(CGameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100037aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PlayEventSound(this,param_1);
  return;
}



/* ---- CGameWnd::IsActivate @ 100037b0 size=6 ---- */

bool __thiscall CGameWnd::CGameWnd__IsActivate(CGameWnd *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsActivate(this);
  return bVar1;
}



/* ---- CGameWnd::ProcessItemProvokeCommand @ 100037b6 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__ProcessItemProvokeCommand(CGameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100037b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ProcessItemProvokeCommand(this,param_1);
  return;
}



/* ---- CGameWnd::HasRightOfBanish @ 100037bc size=6 ---- */

int __thiscall CGameWnd::CGameWnd__HasRightOfBanish(CGameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = HasRightOfBanish(this);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnAddRoomMember @ 100037c2 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnAddRoomMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnAddRoomMember(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnDeleteRoomMember @ 100037c8 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnDeleteRoomMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnDeleteRoomMember(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnRoomMemberList @ 100037ce size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnRoomMemberList(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnRoomMemberList(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnModifyRoomMemberInfo @ 100037d4 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnModifyRoomMemberInfo(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnModifyRoomMemberInfo(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnEnableHostBanish @ 100037da size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnEnableHostBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnEnableHostBanish(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnTimeHostBanish @ 100037e0 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnTimeHostBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnTimeHostBanish(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnGameStatusMessage @ 100037e6 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnGameStatusMessage(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnGameStatusMessage(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnChatString @ 100037ec size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnChatString(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnChatString(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnReqBanishMember @ 100037f2 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnReqBanishMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnReqBanishMember(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnClickBanishMember @ 100037f8 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnClickBanishMember(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnClickBanishMember(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnHostBanishCheck @ 100037fe size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnHostBanishCheck(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100037fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnHostBanishCheck(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnConnectTypeError @ 10003804 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnConnectTypeError(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnConnectTypeError(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnItemReserveChance @ 1000380a size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnItemReserveChance(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000380a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnItemReserveChance(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnStartNewGame @ 10003810 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnStartNewGame(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnStartNewGame(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnRoomEvent @ 10003816 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnRoomEvent(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnRoomEvent(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnAltF4KeyDown @ 1000381c size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnAltF4KeyDown(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000381c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnAltF4KeyDown(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_ChannelLobby_OnUpdateNotice @ 10003822 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_ChannelLobby_OnUpdateNotice(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_ChannelLobby_OnUpdateNotice(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnReserveBanish @ 10003828 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnReserveBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnReserveBanish(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnExitGameDuetoShutdown @ 1000382e size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnExitGameDuetoShutdown(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000382e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnExitGameDuetoShutdown(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Evt_OnGetShutdownTime @ 10003834 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Evt_OnGetShutdownTime(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Evt_OnGetShutdownTime(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Net_SocketClose @ 1000383a size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Net_SocketClose(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000383a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Net_SocketClose(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::Net_commandTimeBanish @ 10003840 size=6 ---- */

int __thiscall CGameWnd::CGameWnd__Net_commandTimeBanish(CGameWnd *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Net_commandTimeBanish(this,param_1);
  return iVar1;
}



/* ---- CGameWnd::UpdateControl @ 10003846 size=6 ---- */

void __thiscall CGameWnd::CGameWnd__UpdateControl(CGameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CMainFrameWnd::OnCmdMsg @ 1000384c size=6 ---- */

int __thiscall
CMainFrameWnd::CMainFrameWnd__OnCmdMsg
          (CMainFrameWnd *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000384c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CMainFrameWnd::PreCreateWindow @ 10003852 size=6 ---- */

int __thiscall
CMainFrameWnd::CMainFrameWnd__PreCreateWindow(CMainFrameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- CMainFrameWnd::PreTranslateMessage @ 10003858 size=6 ---- */

int __thiscall
CMainFrameWnd::CMainFrameWnd__PreTranslateMessage(CMainFrameWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CMainFrameWnd::RegisterHandler @ 1000385e size=6 ---- */

void __thiscall CMainFrameWnd::CMainFrameWnd__RegisterHandler(CMainFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000385e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RegisterHandler(this);
  return;
}



/* ---- CMainFrameWnd::DisplayAdWnd @ 10003864 size=6 ---- */

void __thiscall CMainFrameWnd::CMainFrameWnd__DisplayAdWnd(CMainFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayAdWnd(this);
  return;
}



/* ---- CMainFrameWnd::ShowGameRate @ 1000386a size=6 ---- */

void __thiscall CMainFrameWnd::CMainFrameWnd__ShowGameRate(CMainFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000386a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowGameRate(this,param_1);
  return;
}



/* ---- CMainFrameWnd::GetTicket @ 10003870 size=6 ---- */

void __thiscall CMainFrameWnd::CMainFrameWnd__GetTicket(CMainFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetTicket(this,param_1);
  return;
}



/* ---- CMainFrameWnd::RefreshCookie @ 10003876 size=6 ---- */

void __thiscall CMainFrameWnd::CMainFrameWnd__RefreshCookie(CMainFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RefreshCookie(this);
  return;
}



/* ---- CMainFrameWnd::UpdateControl @ 1000387c size=6 ---- */

void __thiscall CMainFrameWnd::CMainFrameWnd__UpdateControl(CMainFrameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000387c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControl(this,param_1);
  return;
}



/* ---- CMainFrameWnd::UpdateControlForGame @ 10003882 size=6 ---- */

void __thiscall
CMainFrameWnd::CMainFrameWnd__UpdateControlForGame(CMainFrameWnd *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UpdateControlForGame(this,param_1);
  return;
}



/* ---- operator_delete @ 10003888 size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- operator_new @ 1000388e size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000388e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- AfxTermExtensionModule @ 10003894 size=6 ---- */

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}



/* ---- CDynLinkLibrary @ 1000389a size=6 ---- */

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000389a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}



/* ---- AfxInitExtensionModule @ 100038a0 size=6 ---- */

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}



/* ---- AfxGetModuleState @ 100038a6 size=6 ---- */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



/* ---- operator_delete[] @ 100038ac size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100038ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- CWinApp::GetRuntimeClass @ 100038b2 size=6 ---- */

CRuntimeClass * __thiscall CWinApp::CWinApp__GetRuntimeClass(CWinApp *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CCmdTarget::OnCmdMsg @ 100038b8 size=6 ---- */

int __thiscall
CCmdTarget::CCmdTarget__OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CCmdTarget::OnFinalRelease @ 100038be size=6 ---- */

void __thiscall CCmdTarget::CCmdTarget__OnFinalRelease(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x100038be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- CCmdTarget::IsInvokeAllowed @ 100038c4 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetDispatchIID @ 100038ca size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetTypeInfoCount @ 100038d0 size=6 ---- */

uint __thiscall CCmdTarget::CCmdTarget__GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}



/* ---- CCmdTarget::GetTypeLibCache @ 100038d6 size=6 ---- */

CTypeLibCache * __thiscall CCmdTarget::CCmdTarget__GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}



/* ---- CCmdTarget::GetTypeLib @ 100038dc size=6 ---- */

long __thiscall
CCmdTarget::CCmdTarget__GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}



/* ---- CCmdTarget::GetCommandMap @ 100038e2 size=6 ---- */

AFX_OLECMDMAP * __thiscall CCmdTarget::CCmdTarget__GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetDispatchMap @ 100038e8 size=6 ---- */

AFX_DISPMAP * __thiscall CCmdTarget::CCmdTarget__GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetConnectionMap @ 100038ee size=6 ---- */

AFX_CONNECTIONMAP * __thiscall CCmdTarget::CCmdTarget__GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetInterfaceMap @ 100038f4 size=6 ---- */

AFX_INTERFACEMAP * __thiscall CCmdTarget::CCmdTarget__GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetEventSinkMap @ 100038fa size=6 ---- */

AFX_EVENTSINKMAP * __thiscall CCmdTarget::CCmdTarget__GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100038fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::OnCreateAggregates @ 10003900 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}



/* ---- CCmdTarget::GetInterfaceHook @ 10003906 size=6 ---- */

IUnknown * __thiscall CCmdTarget::CCmdTarget__GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}



/* ---- CCmdTarget::GetExtraConnectionPoints @ 1000390c size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetConnectionHook @ 10003912 size=6 ---- */

IConnectionPoint * __thiscall
CCmdTarget::CCmdTarget__GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}



/* ---- CWinApp::Run @ 10003918 size=6 ---- */

int __thiscall CWinApp::CWinApp__Run(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Run(this);
  return iVar1;
}



/* ---- CWinThread::PumpMessage @ 1000391e size=6 ---- */

int __thiscall CWinThread::CWinThread__PumpMessage(CWinThread *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000391e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PumpMessage(this);
  return iVar1;
}



/* ---- CWinThread::IsIdleMessage @ 10003924 size=6 ---- */

int __thiscall CWinThread::CWinThread__IsIdleMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsIdleMessage(this,param_1);
  return iVar1;
}



/* ---- CWinApp::ProcessWndProcException @ 1000392a size=6 ---- */

long __thiscall
CWinApp::CWinApp__ProcessWndProcException(CWinApp *this,CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000392a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = ProcessWndProcException(this,param_1,param_2);
  return lVar1;
}



/* ---- CWinThread::ProcessMessageFilter @ 10003930 size=6 ---- */

int __thiscall
CWinThread::CWinThread__ProcessMessageFilter(CWinThread *this,int param_1,tagMSG *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ProcessMessageFilter(this,param_1,param_2);
  return iVar1;
}



/* ---- CWinThread::GetMainWnd @ 10003936 size=6 ---- */

CWnd * __thiscall CWinThread::CWinThread__GetMainWnd(CWinThread *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMainWnd(this);
  return pCVar1;
}



/* ---- CWinThread::Delete @ 1000393c size=6 ---- */

void __thiscall CWinThread::CWinThread__Delete(CWinThread *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000393c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- CWinApp::InitLibId @ 10003942 size=6 ---- */

void __thiscall CWinApp::CWinApp__InitLibId(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitLibId(this);
  return;
}



/* ---- CWinApp::Register @ 10003948 size=6 ---- */

int __thiscall CWinApp::CWinApp__Register(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Register(this);
  return iVar1;
}



/* ---- CWinApp::Unregister @ 1000394e size=6 ---- */

int __thiscall CWinApp::CWinApp__Unregister(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000394e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Unregister(this);
  return iVar1;
}



/* ---- CWinApp::OpenDocumentFile @ 10003954 size=6 ---- */

CDocument * __thiscall CWinApp::CWinApp__OpenDocumentFile(CWinApp *this,char *param_1)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = OpenDocumentFile(this,param_1);
  return pCVar1;
}



/* ---- CWinApp::AddToRecentFileList @ 1000395a size=6 ---- */

void __thiscall CWinApp::CWinApp__AddToRecentFileList(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000395a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddToRecentFileList(this,param_1);
  return;
}



/* ---- CWinApp::InitApplication @ 10003960 size=6 ---- */

int __thiscall CWinApp::CWinApp__InitApplication(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitApplication(this);
  return iVar1;
}



/* ---- CWinApp::SaveAllModified @ 10003966 size=6 ---- */

int __thiscall CWinApp::CWinApp__SaveAllModified(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveAllModified(this);
  return iVar1;
}



/* ---- CWinApp::DoMessageBox @ 1000396c size=6 ---- */

int __thiscall CWinApp::CWinApp__DoMessageBox(CWinApp *this,char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoMessageBox(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWinApp::DoWaitCursor @ 10003972 size=6 ---- */

void __thiscall CWinApp::CWinApp__DoWaitCursor(CWinApp *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoWaitCursor(this,param_1);
  return;
}



/* ---- CWinApp::OnDDECommand @ 10003978 size=6 ---- */

int __thiscall CWinApp::CWinApp__OnDDECommand(CWinApp *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDDECommand(this,param_1);
  return iVar1;
}



/* ---- CWinApp::WinHelpA @ 1000397e size=6 ---- */

void __thiscall CWinApp::CWinApp__WinHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000397e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- CWinApp::HtmlHelpA @ 10003984 size=6 ---- */

void __thiscall CWinApp::CWinApp__HtmlHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- CWinApp::WinHelpInternal @ 1000398a size=6 ---- */

void __thiscall CWinApp::CWinApp__WinHelpInternal(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000398a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- CWinApp::LoadAppLangResourceDLL @ 10003990 size=6 ---- */

HINSTANCE__ * __thiscall CWinApp::CWinApp__LoadAppLangResourceDLL(CWinApp *this)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAppLangResourceDLL(this);
  return pHVar1;
}



/* ---- CWinApp::LoadSysPolicies @ 10003996 size=6 ---- */

int __thiscall CWinApp::CWinApp__LoadSysPolicies(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadSysPolicies(this);
  return iVar1;
}



/* ---- PreTranslateMessage @ 1000399c size=6 ---- */

int __thiscall CWinThread::PreTranslateMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000399c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CWnd::OnFinalRelease @ 100039a2 size=6 ---- */

void __thiscall CWnd::CWnd__OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100039a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- CWnd::GetInterfaceMap @ 100039a8 size=6 ---- */

AFX_INTERFACEMAP * __thiscall CWnd::CWnd__GetInterfaceMap(CWnd *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- CWnd::PreSubclassWindow @ 100039ae size=6 ---- */

void __thiscall CWnd::CWnd__PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100039ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}



/* ---- CWnd::Create @ 100039b4 size=6 ---- */

int __thiscall
CWnd::CWnd__Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                  CWnd *param_5,uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}



/* ---- CWnd::CreateEx @ 100039ba size=6 ---- */

int __thiscall
CWnd::CWnd__CreateEx
          (CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,
          CWnd *param_6,uint param_7,void *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- CWnd::CreateEx @ 100039c0 size=6 ---- */

int __thiscall
CWnd::CWnd__CreateEx
          (CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,
          int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
  return iVar1;
}



/* ---- CWnd::DestroyWindow @ 100039c6 size=6 ---- */

int __thiscall CWnd::CWnd__DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}



/* ---- CWnd::PreCreateWindow @ 100039cc size=6 ---- */

int __thiscall CWnd::CWnd__PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}



/* ---- CWnd::CalcWindowRect @ 100039d2 size=6 ---- */

void __thiscall CWnd::CWnd__CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100039d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}



/* ---- CWnd::GetMenu @ 100039d8 size=6 ---- */

CMenu * __thiscall CWnd::CWnd__GetMenu(CWnd *this)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMenu(this);
  return pCVar1;
}



/* ---- CWnd::SetMenu @ 100039de size=6 ---- */

int __thiscall CWnd::CWnd__SetMenu(CWnd *this,CMenu *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenu(this,param_1);
  return iVar1;
}



/* ---- CWnd::OnToolHitTest @ 100039e4 size=6 ---- */

int __thiscall CWnd::CWnd__OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}



/* ---- CWnd::GetScrollBarCtrl @ 100039ea size=6 ---- */

CScrollBar * __thiscall CWnd::CWnd__GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100039ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}



/* ---- CWnd::WinHelpA @ 100039f0 size=6 ---- */

void __thiscall CWnd::CWnd__WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100039f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- CWnd::HtmlHelpA @ 100039f6 size=6 ---- */

void __thiscall CWnd::CWnd__HtmlHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100039f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- CWnd::WinHelpInternal @ 100039fc size=6 ---- */

void __thiscall CWnd::CWnd__WinHelpInternal(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100039fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- CWnd::ContinueModal @ 10003a02 size=6 ---- */

int __thiscall CWnd::CWnd__ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}



/* ---- CWnd::EndModalLoop @ 10003a08 size=6 ---- */

void __thiscall CWnd::CWnd__EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}



/* ---- CWnd::EnsureStdObj @ 10003a0e size=6 ---- */

long __thiscall CWnd::CWnd__EnsureStdObj(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = EnsureStdObj(this);
  return lVar1;
}



/* ---- CWnd::get_accParent @ 10003a14 size=6 ---- */

long __thiscall CWnd::CWnd__get_accParent(CWnd *this,IDispatch **param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accParent(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accChildCount @ 10003a1a size=6 ---- */

long __thiscall CWnd::CWnd__get_accChildCount(CWnd *this,long *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChildCount(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accChild @ 10003a20 size=6 ---- */

long __thiscall CWnd::CWnd__get_accChild(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChild();
  return lVar1;
}



/* ---- CWnd::get_accName @ 10003a26 size=6 ---- */

long __thiscall CWnd::CWnd__get_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accName();
  return lVar1;
}



/* ---- CWnd::get_accValue @ 10003a2c size=6 ---- */

long __thiscall CWnd::CWnd__get_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accValue();
  return lVar1;
}



/* ---- CWnd::get_accDescription @ 10003a32 size=6 ---- */

long __thiscall CWnd::CWnd__get_accDescription(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDescription();
  return lVar1;
}



/* ---- CWnd::get_accRole @ 10003a38 size=6 ---- */

long __thiscall CWnd::CWnd__get_accRole(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accRole();
  return lVar1;
}



/* ---- CWnd::get_accState @ 10003a3e size=6 ---- */

long __thiscall CWnd::CWnd__get_accState(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accState();
  return lVar1;
}



/* ---- CWnd::get_accHelp @ 10003a44 size=6 ---- */

long __thiscall CWnd::CWnd__get_accHelp(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelp();
  return lVar1;
}



/* ---- CWnd::get_accHelpTopic @ 10003a4a size=6 ---- */

long __thiscall CWnd::CWnd__get_accHelpTopic(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelpTopic();
  return lVar1;
}



/* ---- CWnd::get_accKeyboardShortcut @ 10003a50 size=6 ---- */

long __thiscall CWnd::CWnd__get_accKeyboardShortcut(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accKeyboardShortcut();
  return lVar1;
}



/* ---- CWnd::get_accFocus @ 10003a56 size=6 ---- */

long __thiscall CWnd::CWnd__get_accFocus(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accFocus(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accSelection @ 10003a5c size=6 ---- */

long __thiscall CWnd::CWnd__get_accSelection(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accSelection(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accDefaultAction @ 10003a62 size=6 ---- */

long __thiscall CWnd::CWnd__get_accDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDefaultAction();
  return lVar1;
}



/* ---- CWnd::accSelect @ 10003a68 size=6 ---- */

long __thiscall CWnd::CWnd__accSelect(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accSelect();
  return lVar1;
}



/* ---- CWnd::accLocation @ 10003a6e size=6 ---- */

long __thiscall CWnd::CWnd__accLocation(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accLocation();
  return lVar1;
}



/* ---- CWnd::accNavigate @ 10003a74 size=6 ---- */

long __thiscall CWnd::CWnd__accNavigate(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accNavigate();
  return lVar1;
}



/* ---- CWnd::accHitTest @ 10003a7a size=6 ---- */

long __thiscall CWnd::CWnd__accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accHitTest(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::accDoDefaultAction @ 10003a80 size=6 ---- */

long __thiscall CWnd::CWnd__accDoDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accDoDefaultAction();
  return lVar1;
}



/* ---- CWnd::put_accName @ 10003a86 size=6 ---- */

long __thiscall CWnd::CWnd__put_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accName();
  return lVar1;
}



/* ---- CWnd::put_accValue @ 10003a8c size=6 ---- */

long __thiscall CWnd::CWnd__put_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accValue();
  return lVar1;
}



/* ---- CWnd::SetProxy @ 10003a92 size=6 ---- */

long __thiscall CWnd::CWnd__SetProxy(CWnd *this,IAccessibleProxy *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = SetProxy(this,param_1);
  return lVar1;
}



/* ---- CWnd::CreateAccessibleProxy @ 10003a98 size=6 ---- */

long __thiscall
CWnd::CWnd__CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = CreateAccessibleProxy(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::OnCommand @ 10003a9e size=6 ---- */

int __thiscall CWnd::CWnd__OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}



/* ---- CWnd::OnNotify @ 10003aa4 size=6 ---- */

int __thiscall CWnd::CWnd__OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWnd::GetSuperWndProcAddr @ 10003aaa size=6 ---- */

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::CWnd__GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10003aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}



/* ---- CWnd::PreTranslateMessage @ 10003ab0 size=6 ---- */

int __thiscall CWnd::CWnd__PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CWnd::OnAmbientProperty @ 10003ab6 size=6 ---- */

int __thiscall
CWnd::CWnd__OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWnd::WindowProc @ 10003abc size=6 ---- */

long __thiscall CWnd::CWnd__WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::OnWndMsg @ 10003ac2 size=6 ---- */

int __thiscall CWnd::CWnd__OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::DefWindowProcA @ 10003ac8 size=6 ---- */

long __thiscall CWnd::CWnd__DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::PostNcDestroy @ 10003ace size=6 ---- */

void __thiscall CWnd::CWnd__PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}



/* ---- CWnd::OnChildNotify @ 10003ad4 size=6 ---- */

int __thiscall
CWnd::CWnd__OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::CheckAutoCenter @ 10003ada size=6 ---- */

int __thiscall CWnd::CWnd__CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}



/* ---- CWnd::IsFrameWnd @ 10003ae0 size=6 ---- */

int __thiscall CWnd::CWnd__IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}



/* ---- CWnd::CreateControlContainer @ 10003ae6 size=6 ---- */

int __thiscall CWnd::CWnd__CreateControlContainer(CWnd *this,COleControlContainer **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlContainer(this,param_1);
  return iVar1;
}



/* ---- CWnd::CreateControlSite @ 10003aec size=6 ---- */

int __thiscall
CWnd::CWnd__CreateControlSite
          (CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,
          _GUID *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlSite(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::SetOccDialogInfo @ 10003af2 size=6 ---- */

int __thiscall CWnd::CWnd__SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}



/* ---- CWnd::GetOccDialogInfo @ 10003af8 size=6 ---- */

_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd__GetOccDialogInfo(CWnd *this)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10003af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetOccDialogInfo(this);
  return p_Var1;
}



/* ---- AfxGetThread @ 10003afe size=6 ---- */

CWinThread * AfxGetThread(void)

{
  CWinThread *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetThread();
  return pCVar1;
}



/* ---- SetWindowPos @ 10003b04 size=6 ---- */

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowPos(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}



/* ---- AfxRegisterWndClass @ 10003b0a size=6 ---- */

char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = AfxRegisterWndClass(param_1,param_2,param_3,param_4);
  return pcVar1;
}



/* ---- OnDestroy @ 10003b10 size=6 ---- */

void __thiscall CWnd::OnDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}



/* ---- FromHandle @ 10003b16 size=6 ---- */

CDC * CDC::FromHandle(HDC__ *param_1)

{
  CDC *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}



/* ---- FromHandle @ 10003b1c size=6 ---- */

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}



/* ---- Default @ 10003b22 size=6 ---- */

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}



/* ---- ShowWindow @ 10003b28 size=6 ---- */

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}



/* ---- ModifyStyle @ 10003b2e size=6 ---- */

int __thiscall CWnd::ModifyStyle(CWnd *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ModifyStyle(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CenterWindow @ 10003b34 size=6 ---- */

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CenterWindow(this,param_1);
  return;
}



/* ---- CFrameWnd::GetMenu @ 10003b3a size=6 ---- */

CMenu * __thiscall CFrameWnd::CFrameWnd__GetMenu(CFrameWnd *this)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMenu(this);
  return pCVar1;
}



/* ---- CFrameWnd::SetMenu @ 10003b40 size=6 ---- */

int __thiscall CFrameWnd::CFrameWnd__SetMenu(CFrameWnd *this,CMenu *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenu(this,param_1);
  return iVar1;
}



/* ---- CFrameWnd::OnCommand @ 10003b46 size=6 ---- */

int __thiscall CFrameWnd::CFrameWnd__OnCommand(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}



/* ---- CFrameWnd::BeginModalState @ 10003b4c size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__BeginModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginModalState(this);
  return;
}



/* ---- CFrameWnd::EndModalState @ 10003b52 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__EndModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalState(this);
  return;
}



/* ---- CFrameWnd::PostNcDestroy @ 10003b58 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__PostNcDestroy(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}



/* ---- CFrameWnd::IsFrameWnd @ 10003b5e size=6 ---- */

int __thiscall CFrameWnd::CFrameWnd__IsFrameWnd(CFrameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}



/* ---- CFrameWnd::Create @ 10003b64 size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__Create
          (CFrameWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
          char *param_6,ulong param_7,CCreateContext *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- CFrameWnd::LoadFrame @ 10003b6a size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__LoadFrame
          (CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadFrame(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CFrameWnd::GetActiveDocument @ 10003b70 size=6 ---- */

CDocument * __thiscall CFrameWnd::CFrameWnd__GetActiveDocument(CFrameWnd *this)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveDocument(this);
  return pCVar1;
}



/* ---- CFrameWnd::GetActiveFrame @ 10003b76 size=6 ---- */

CFrameWnd * __thiscall CFrameWnd::CFrameWnd__GetActiveFrame(CFrameWnd *this)

{
  CFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveFrame(this);
  return pCVar1;
}



/* ---- CFrameWnd::GetMessageString @ 10003b7c size=6 ---- */

void __thiscall
CFrameWnd::CFrameWnd__GetMessageString
          (CFrameWnd *this,uint param_1,
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}



/* ---- CFrameWnd::RecalcLayout @ 10003b82 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__RecalcLayout(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RecalcLayout(this,param_1);
  return;
}



/* ---- CFrameWnd::ActivateFrame @ 10003b88 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__ActivateFrame(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ActivateFrame(this,param_1);
  return;
}



/* ---- CFrameWnd::SetMenuBarVisibility @ 10003b8e size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__SetMenuBarVisibility(CFrameWnd *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetMenuBarVisibility(this,param_1);
  return;
}



/* ---- CFrameWnd::GetMenuBarVisibility @ 10003b94 size=6 ---- */

ulong __thiscall CFrameWnd::CFrameWnd__GetMenuBarVisibility(CFrameWnd *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetMenuBarVisibility(this);
  return uVar1;
}



/* ---- CFrameWnd::SetMenuBarState @ 10003b9a size=6 ---- */

int __thiscall CFrameWnd::CFrameWnd__SetMenuBarState(CFrameWnd *this,ulong param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenuBarState(this,param_1);
  return iVar1;
}



/* ---- CFrameWnd::GetMenuBarState @ 10003ba0 size=6 ---- */

ulong __thiscall CFrameWnd::CFrameWnd__GetMenuBarState(CFrameWnd *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetMenuBarState(this);
  return uVar1;
}



/* ---- CFrameWnd::OnSetPreviewMode @ 10003ba6 size=6 ---- */

void __thiscall
CFrameWnd::CFrameWnd__OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10003ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPreviewMode(this,param_1,param_2);
  return;
}



/* ---- CFrameWnd::GetMessageBar @ 10003bac size=6 ---- */

CWnd * __thiscall CFrameWnd::CFrameWnd__GetMessageBar(CFrameWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMessageBar(this);
  return pCVar1;
}



/* ---- CFrameWnd::NegotiateBorderSpace @ 10003bb2 size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__NegotiateBorderSpace(CFrameWnd *this,uint param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = NegotiateBorderSpace(this,param_1,param_2);
  return iVar1;
}



/* ---- CFrameWnd::OnCreateClient @ 10003bb8 size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__OnCreateClient
          (CFrameWnd *this,tagCREATESTRUCTA *param_1,CCreateContext *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateClient(this,param_1,param_2);
  return iVar1;
}



/* ---- CFrameWnd::OnUpdateFrameTitle @ 10003bbe size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__OnUpdateFrameTitle(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameTitle(this,param_1);
  return;
}



/* ---- CFrameWnd::OnUpdateFrameMenu @ 10003bc4 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__OnUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameMenu(this,param_1);
  return;
}



/* ---- CFrameWnd::GetDefaultAccelerator @ 10003bca size=6 ---- */

HACCEL__ * __thiscall CFrameWnd::CFrameWnd__GetDefaultAccelerator(CFrameWnd *this)

{
  HACCEL__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDefaultAccelerator(this);
  return pHVar1;
}



/* ---- CFrameWnd::DelayUpdateFrameMenu @ 10003bd0 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__DelayUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10003bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DelayUpdateFrameMenu(this,param_1);
  return;
}



/* ---- CFrameWnd::ExitHelpMode @ 10003bd6 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__ExitHelpMode(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExitHelpMode(this);
  return;
}



/* ---- CFrameWnd::OnShowMenuBar @ 10003bdc size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__OnShowMenuBar(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowMenuBar(this);
  return;
}



/* ---- CFrameWnd::OnHideMenuBar @ 10003be2 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__OnHideMenuBar(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10003be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideMenuBar(this);
  return;
}



/* ---- OnSize @ 10003be8 size=6 ---- */

void __thiscall CFrameWnd::OnSize(CFrameWnd *this,uint param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10003be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSize(this,param_1,param_2,param_3);
  return;
}



/* ---- OnActivate @ 10003bee size=6 ---- */

void __thiscall CFrameWnd::OnActivate(CFrameWnd *this,uint param_1,CWnd *param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10003bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnActivate(this,param_1,param_2,param_3);
  return;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 10003bf4 size=76 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CDaoRelationFieldInfo::`vector deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall exception::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::exception::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall logic_error::`vector deleting destructor'(unsigned int)
     5 names - too many to list
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __thiscall FID_conflict__vector_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    type_info::_type_info_dtor_internal_method(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    _eh_vector_destructor_iterator_(this,0xc,*piVar1,type_info::_type_info_dtor_internal_method);
    if ((param_1 & 1) != 0) {
      operator_delete(piVar1);
    }
    this = piVar1;
  }
  return this;
}



/* ---- __ArrayUnwind @ 10003c40 size=50 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}



/* ---- `eh_vector_destructor_iterator' @ 10003c9e size=75 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_10003ce9();
  return;
}



/* ---- FUN_10003ce9 @ 10003ce9 size=24 ---- */

void FUN_10003ce9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- __security_check_cookie @ 10003d16 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_1000d460) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- __onexit @ 10003d25 size=156 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __cdecl __onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10007148;
  uStack_c = 0x10003d31;
  local_20[0] = decode_pointer(DAT_1000d844);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_1000d844);
    local_24 = decode_pointer(DAT_1000d840);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_1000d844 = encode_pointer(local_20[0]);
    DAT_1000d840 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_10003dc1();
  }
  return p_Var1;
}



/* ---- FUN_10003dc1 @ 10003dc1 size=9 ---- */

void FUN_10003dc1(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 10003dca size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- purecall @ 10003de2 size=6 ---- */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* ---- __CRT_INIT@12 @ 10003e37 size=550 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2008 Release */

undefined4 __CRT_INIT_12(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  LONG LVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_2 == (int *)0x0) {
    if (DAT_1000d4fc < 1) {
      return 0;
    }
    DAT_1000d4fc = DAT_1000d4fc + -1;
  }
  _DAT_1000d830 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_1000d838,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_1000d834 == 0) {
      DAT_1000d834 = 1;
      iVar3 = initterm_e(&DAT_10005784,&DAT_1000578c);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_10005778,&DAT_10005780);
      DAT_1000d834 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_1000d838,0);
    }
    if ((DAT_1000d83c != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1000d83c), BVar4 != 0)) {
      (*DAT_1000d83c)(param_1,2,param_3);
    }
    DAT_1000d4fc = DAT_1000d4fc + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_1000d838,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_1000d834 == 2) {
      param_2 = (int *)decode_pointer(DAT_1000d844);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_1000d840);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_1000d844);
            piVar8 = (int *)decode_pointer(DAT_1000d840);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_1000d840 = encoded_null();
        DAT_1000d844 = DAT_1000d840;
      }
      DAT_1000d834 = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_1000d838,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 1000405d size=240 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HINSTANCE__ *param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  _DAT_1000d468 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_1000d4fc == 0)) {
    local_20 = 0;
    goto LAB_1000414f;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_FUN_100057ac != (undefined *)0x0) {
      local_20 = (*(code *)PTR_FUN_100057ac)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_1000414f;
    local_20 = __CRT_INIT_12((int *)param_3,param_2,param_1);
    if (local_20 == 0) goto LAB_1000414f;
  }
  local_20 = FUN_10001010(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_10001010(param_3,0);
    __CRT_INIT_12((int *)param_3,(int *)0x0,param_1);
    if (PTR_FUN_100057ac != (undefined *)0x0) {
      (*(code *)PTR_FUN_100057ac)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12((int *)param_3,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_FUN_100057ac != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_FUN_100057ac)(param_3,param_2,param_1);
    }
  }
LAB_1000414f:
  FUN_10004168();
  return local_20;
}



/* ---- FUN_10004168 @ 10004168 size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004168(void)

{
  _DAT_1000d468 = 0xffffffff;
  return;
}



/* ---- entry @ 10004173 size=35 ---- */

void entry(HINSTANCE__ *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- terminate @ 10004196 size=6 ---- */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004196. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* ---- __SEH_prolog4 @ 1000419c size=69 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1000d460 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 100041e1 size=20 ---- */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



/* ---- FUN_100041f5 @ 100041f5 size=37 ---- */

void __cdecl
FUN_100041f5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_1000d460,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- ___report_gsfailure @ 1000421a size=262 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 local_res0;
  undefined1 uStack00000004;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  undefined1 local_324 [800];
  
  _DAT_1000d618 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1000d61c = &uStack00000004;
  _DAT_1000d558 = 0x10001;
  _DAT_1000d500 = 0xc0000409;
  _DAT_1000d504 = 1;
  local_32c = DAT_1000d460;
  local_328 = DAT_1000d464;
  _DAT_1000d50c = _local_res0;
  _DAT_1000d5e4 = in_GS;
  _DAT_1000d5e8 = in_FS;
  _DAT_1000d5ec = in_ES;
  _DAT_1000d5f0 = in_DS;
  _DAT_1000d5f4 = unaff_EDI;
  _DAT_1000d5f8 = unaff_ESI;
  _DAT_1000d5fc = unaff_EBX;
  _DAT_1000d600 = in_EDX;
  _DAT_1000d604 = in_ECX;
  _DAT_1000d608 = in_EAX;
  _DAT_1000d60c = unaff_EBP;
  DAT_1000d610 = _local_res0;
  _DAT_1000d614 = in_CS;
  _DAT_1000d620 = in_SS;
  DAT_1000d550 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_100064a0);
  if (DAT_1000d550 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- _unlock @ 10004320 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x10004320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 10004326 size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 1000432c size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x1000432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __ValidateImageBase @ 10004390 size=53 ---- */

/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}



/* ---- __FindPESection @ 100043d0 size=68 ---- */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2008 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



/* ---- __IsNonwritableInCurrentImage @ 10004420 size=166 ---- */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_100041f5;
  local_14 = ExceptionList;
  local_c = DAT_1000d460 ^ 0x10007190;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10000000,(DWORD_PTR)(pTarget + -0x10000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 100044de size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x100044de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 100044e4 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x100044e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 100044ea size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100044ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- __CppXcptFilter @ 100044f0 size=6 ---- */

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100044f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* ---- ___security_init_cookie @ 100044f6 size=150 ---- */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2008 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_1000d460 == 0xbb40e64e) || ((DAT_1000d460 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1000d460 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1000d460 == 0xbb40e64e) {
      DAT_1000d460 = 0xbb40e64f;
    }
    else if ((DAT_1000d460 & 0xffff0000) == 0) {
      DAT_1000d460 = DAT_1000d460 | DAT_1000d460 << 0x10;
    }
  }
  DAT_1000d464 = ~DAT_1000d460;
  return;
}



/* ---- _type_info_dtor_internal_method @ 1000458c size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000458c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- except_handler4_common @ 10004592 size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- _crt_debugger_hook @ 10004598 size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10004598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- Unwind@100045b0 @ 100045b0 size=11 ---- */

void Unwind_100045b0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@100045bb @ 100045bb size=11 ---- */

void Unwind_100045bb(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@100045c6 @ 100045c6 size=11 ---- */

void Unwind_100045c6(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@100045d1 @ 100045d1 size=11 ---- */

void Unwind_100045d1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@100045dc @ 100045dc size=10 ---- */

void Unwind_100045dc(void)

{
  int unaff_EBP;
  
  FUN_10001000(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@100045e6 @ 100045e6 size=11 ---- */

void Unwind_100045e6(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@100045f1 @ 100045f1 size=11 ---- */

void Unwind_100045f1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@100045fc @ 100045fc size=11 ---- */

void Unwind_100045fc(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10004630 @ 10004630 size=8 ---- */

void Unwind_10004630(void)

{
  FUN_10001320();
  return;
}



/* ---- Unwind@10004660 @ 10004660 size=11 ---- */

void Unwind_10004660(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@1000466b @ 1000466b size=8 ---- */

void Unwind_1000466b(void)

{
  int unaff_EBP;
  
  FUN_10001780((int *)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10004690 @ 10004690 size=9 ---- */

void Unwind_10004690(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@100046c0 @ 100046c0 size=9 ---- */

void Unwind_100046c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100046c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@100046f0 @ 100046f0 size=9 ---- */

void Unwind_100046f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100046f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@10004720 @ 10004720 size=9 ---- */

void Unwind_10004720(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@10004750 @ 10004750 size=9 ---- */

void Unwind_10004750(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@10004780 @ 10004780 size=12 ---- */

void Unwind_10004780(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@100047c0 @ 100047c0 size=12 ---- */

void Unwind_100047c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100047c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@10004800 @ 10004800 size=12 ---- */

void Unwind_10004800(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10004806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}


// total=468 ok=468 failed=0
