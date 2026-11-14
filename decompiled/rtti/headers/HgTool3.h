// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgTool3 {

class ?$CMFunctor;
class ?$CThreadQueue;
class ?$CTypedPtrList;
class ?$_CTypedPtrList;
class AFX_MODULE_STATE;
class Bitmap;
class CAutoInitialize;
class CButton;
class CChannelEmpty;
class CChannelName;
class CCmdTarget;
class CComboBox;
class CDC;
class CDialog;
class CEdit;
class CException;
class CFormView;
class CGameMoney;
class CHeaderCtrl;
class CHtmlView;
class CLevel;
class CListCtrl;
class CMemberId;
class CNoTrackObject;
class CObject;
class CProgressCtrl;
class CPtrList;
class CRating;
class CRichEditCtrl;
class CRoomId;
class CScrollView;
class CSex;
class CStatic;
class CView;
class CWinApp;
class CWinCnt;
class CWinThread;
class CWnd;
class GdiplusBase;
class IDataObject;
class IFunctor;
class IParam;
class IUnknown;
class Image;
class bad_alloc;
class exception;
class invalid_argument;
class length_error;
class logic_error;
class out_of_range;

class ?$CMFunctor@VCChannelListCtrl@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60718ea0
    virtual void vfunc_1(); // slot 1, 0x6070f530
    virtual void vfunc_2(); // slot 2, 0x60718ed0
};

class ?$CMFunctor@VCCustomTabCtrl@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x607171b0
    virtual void vfunc_1(); // slot 1, 0x607171e0
    virtual void vfunc_2(); // slot 2, 0x6072d6c0
};

class ?$CMFunctor@VCGuildInfoCtrl@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60718ea0
    virtual void vfunc_1(); // slot 1, 0x60718eb0
    virtual void vfunc_2(); // slot 2, 0x60718ed0
};

class ?$CMFunctor@VCMemberListTabCtrl@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x607171b0
    virtual void vfunc_1(); // slot 1, 0x607171c0
    virtual void vfunc_2(); // slot 2, 0x6072d6c0
};

class ?$CMFunctor@VCTabButtons@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x607171b0
    virtual void vfunc_1(); // slot 1, 0x6072d6a0
    virtual void vfunc_2(); // slot 2, 0x6072d6c0
};

class ?$CThreadQueue@PAUIFunctor@@ : public ?$CThreadQueue {
public:
    virtual void vfunc_0(); // slot 0, 0x60785770
};

class ?$CTypedPtrList@VCPtrList@@PAVCHgMemDCListData@@ : public ?$CTypedPtrList, public ?$_CTypedPtrList, public CPtrList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a584
    virtual void vfunc_1(); // slot 1, 0x60701e70
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class ?$_CTypedPtrList@VCPtrList@@PAVCHgMemDCListData@@ : public ?$_CTypedPtrList, public CPtrList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a584
    virtual void vfunc_1(); // slot 1, 0x60701e70
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class AbuseManagerAI : public CAutoInitialize {
public:
    virtual void vfunc_0(); // slot 0, 0x6077ca90
    virtual void vfunc_1(); // slot 1, 0x6077c870
    virtual void vfunc_2(); // slot 2, 0x6077c8f0
};

class Bitmap@Gdiplus : public Bitmap, public Image, public GdiplusBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60701f80
    virtual void vfunc_1(); // slot 1, 0x60701ed0
};

class CAdFileDownload {
public:
    virtual void vfunc_0(); // slot 0, 0x6077caf0
};

class CAdWnd : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a90e
    virtual void vfunc_1(); // slot 1, 0x6077d5e0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6077d6f0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CAnimatedStatic : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a90e
    virtual void vfunc_1(); // slot 1, 0x6077dd20
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6077dd80
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CBitmap : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a590
    virtual void vfunc_1(); // slot 1, 0x607074a0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class CBmpButton : public CButton, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6070bbf0
    virtual void vfunc_1(); // slot 1, 0x6070b850
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6070bc00
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6070d6f0
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a632
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a608
    virtual void DrawItem(); // slot 82, 0x6070cb10
};

class CBrush : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a5de
    virtual void vfunc_1(); // slot 1, 0x6070b730
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class CChannelEmpty@ChannelListCtrl : public CChannelEmpty, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6070e370
    virtual void vfunc_1(); // slot 1, 0x6070e0c0
    virtual void vfunc_2(); // slot 2, 0x6070e030
    virtual void vfunc_3(); // slot 3, 0x6070e060
};

class CChannelListCtrl : public CListCtrlEx, public CListCtrl, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6070e140
    virtual void vfunc_1(); // slot 1, 0x6070dd40
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6070e150
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a800
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void DrawItem(); // slot 81, 0x6070e390
    virtual void OnSortItem(); // slot 82, 0x6071b9e0
    virtual void DoListCtrlSetting(); // slot 83, 0x6070e260
    virtual void GetColumnFormatString(); // slot 84, 0x6071c030
    virtual void MeasureItem(); // slot 85, 0x6071b5f0
};

class CChannelName@ChannelListCtrl : public CChannelName, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6070e370
    virtual void vfunc_1(); // slot 1, 0x6070e0c0
    virtual void vfunc_2(); // slot 2, 0x6070e0d0
    virtual void vfunc_3(); // slot 3, 0x6070e100
};

class CChatCtrl : public CRichEditCtrl, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6070f790
    virtual void vfunc_1(); // slot 1, 0x6070f650
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6070f970
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6070fd60
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6070fd40
};

class CColourPopup : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a90e
    virtual void vfunc_1(); // slot 1, 0x60710780
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void vfunc_12(); // slot 12, 0x60710b90
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void vfunc_68(); // slot 68, 0x60710ba0
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CCommonDialog : public CDialog, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a8fc
    virtual void vfunc_1(); // slot 1, 0x60712030
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a8f6
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6079a8f0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a8ea
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a8e4
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a8de
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a8d8
    virtual void vfunc_81(); // slot 81, 0x60712060
    virtual void Create(); // slot 82, 0x6079a8d2
    virtual void CreateIndirect(); // slot 83, 0x6079a8cc
    virtual void CreateIndirect(); // slot 84, 0x6079a8c6
    virtual void DoModal(); // slot 85, 0x6079a8c0
    virtual void OnInitDialog(); // slot 86, 0x6079a8ba
    virtual void OnSetFont(); // slot 87, 0x6079a8b4
    virtual void OnOK(); // slot 88, 0x6079a8ae
    virtual void OnCancel(); // slot 89, 0x6079a8a8
    virtual void PreInitDialog(); // slot 90, 0x6079a8a2
};

class CContainerWnd : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void vfunc_0(); // slot 0, 0x60712120
    virtual void vfunc_1(); // slot 1, 0x607121a0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void vfunc_12(); // slot 12, 0x60712130
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6070b7c0
    virtual void CreateControl(); // slot 1, 0x60712310
    virtual void DestroyControl(); // slot 2, 0x60712320
    virtual void IsCreated(); // slot 3, 0x60712350
    virtual void ShowControl(); // slot 4, 0x60712380
    virtual void DispatchNotifyEvent(); // slot 5, 0x607123d0
    virtual void DispatchNotifyEvent(); // slot 6, 0x607123d0
    virtual void GetCWndPtr(); // slot 7, 0x60712330
};

class CControlList {
public:
    virtual void vfunc_0(); // slot 0, 0x60712470
};

class CCustomButton : public CButton, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60712ea0
    virtual void vfunc_1(); // slot 1, 0x60712e40
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x607154f0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a632
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a608
    virtual void DrawItem(); // slot 82, 0x6079a602
};

class CCustomCheckBox : public CButton, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60712f60
    virtual void vfunc_1(); // slot 1, 0x60712f00
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60713060
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a632
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a608
    virtual void DrawItem(); // slot 82, 0x60713070
};

class CCustomComboBox : public CComboBox, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60713720
    virtual void vfunc_1(); // slot 1, 0x607136b0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60713730
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x60713db0
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a944
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a93e
    virtual void DrawItem(); // slot 82, 0x6079a938
    virtual void MeasureItem(); // slot 83, 0x6079a932
    virtual void CompareItem(); // slot 84, 0x6079a92c
    virtual void DeleteItem(); // slot 85, 0x6079a926
};

class CCustomEdit : public CEdit, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60714040
    virtual void vfunc_1(); // slot 1, 0x60713fe0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60714050
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CCustomProgress : public CProgressCtrl, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60714480
    virtual void vfunc_1(); // slot 1, 0x60714410
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x607144e0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a986
    virtual void CreateEx(); // slot 82, 0x6079a980
};

class CCustomRadioButton : public CButton, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x607148f0
    virtual void vfunc_1(); // slot 1, 0x60714880
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60714a30
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a632
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a608
    virtual void DrawItem(); // slot 82, 0x60714c20
};

class CCustomStatic : public CStatic, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x607154e0
    virtual void vfunc_1(); // slot 1, 0x60715470
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x607154f0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x607159c0
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a9bc
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a9b6
    virtual void DrawItem(); // slot 82, 0x60715810
    virtual void MovePostion(); // slot 83, 0x607159e0
};

class CCustomTabCtrl : public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60715a30
    virtual void CreateControl(); // slot 1, 0x60712310
    virtual void DestroyControl(); // slot 2, 0x60712320
    virtual void IsCreated(); // slot 3, 0x60716660
    virtual void ShowControl(); // slot 4, 0x60716670
    virtual void UpdateControl(); // slot 5, 0x607166a0
    virtual void DispatchNotifyEvent(); // slot 6, 0x607123d0
    virtual void FindAbuseAndReplaceTo(); // slot 7, 0x60716710
};

class CEmoticon : public IDataObject, public IUnknown {
public:
    virtual void QueryInterface(); // slot 0, 0x6070f560
    virtual void AddRef(); // slot 1, 0x6071fc10
    virtual void AddRef(); // slot 2, 0x6071fc10
    virtual void GetData(); // slot 3, 0x6070f720
    virtual void EnumFormatEtc(); // slot 4, 0x6070f5b0
    virtual void QueryGetData(); // slot 5, 0x6070f6f0
    virtual void EnumFormatEtc(); // slot 6, 0x6070f5b0
    virtual void SetData(); // slot 7, 0x6070f5a0
    virtual void EnumFormatEtc(); // slot 8, 0x6070f5b0
    virtual void DAdvise(); // slot 9, 0x6070f5c0
    virtual void DUnadvise(); // slot 10, 0x6070f5d0
    virtual void DUnadvise(); // slot 11, 0x6070f5d0
};

class CFileException : public CException, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079ad76
    virtual void vfunc_1(); // slot 1, 0x60734310
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void GetErrorMessage(); // slot 5, 0x6079ad58
    virtual void GetErrorMessage(); // slot 6, 0x6079ad70
    virtual void ReportError(); // slot 7, 0x6079ad6a
};

class CFont : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a866
    virtual void vfunc_1(); // slot 1, 0x607120f0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class CFontEx {
public:
    virtual void vfunc_0(); // slot 0, 0x6070bb10
};

class CFontList {
public:
    virtual void vfunc_0(); // slot 0, 0x6070ba50
};

class CGameMoney@MemberListCtrl : public CGameMoney, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6071e460
    virtual void GetColumnInfo(); // slot 1, 0x6071f250
    virtual void GetItemText(); // slot 2, 0x6071f290
    virtual void CompareItem(); // slot 3, 0x6071f320
};

class CGaugeCtrl : public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60717200
    virtual void CreateControl(); // slot 1, 0x607173b0
    virtual void DestroyControl(); // slot 2, 0x60712320
    virtual void IsCreated(); // slot 3, 0x60712350
    virtual void ShowControl(); // slot 4, 0x60712380
    virtual void UpdateControl(); // slot 5, 0x607175a0
    virtual void DispatchNotifyEvent(); // slot 6, 0x607123d0
    virtual void GetCWndPtr(); // slot 7, 0x60712330
};

class CGdiObject : public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a5a2
    virtual void vfunc_1(); // slot 1, 0x60707370
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class CGuildInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x607176a0
};

class CGuildInfoCtrl : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60718160
    virtual void vfunc_1(); // slot 1, 0x607176c0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60718370
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CGuildInfoLoader {
public:
    virtual void vfunc_0(); // slot 0, 0x60717d70
};

class CHanChatEditComboBox : public CCustomComboBox, public CComboBox, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60713720
    virtual void vfunc_1(); // slot 1, 0x60718f50
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x607190f0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x60719160
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a944
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a93e
    virtual void DrawItem(); // slot 82, 0x6079a938
    virtual void MeasureItem(); // slot 83, 0x6079a932
    virtual void CompareItem(); // slot 84, 0x6079a92c
    virtual void DeleteItem(); // slot 85, 0x6079a926
};

class CHeaderCtrlEx : public CHeaderCtrl, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a9e6
    virtual void vfunc_1(); // slot 1, 0x60719c50
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60719cb0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6071a0b0
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6071a110
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a9da
    virtual void CreateEx(); // slot 82, 0x6079a9d4
    virtual void DrawItem(); // slot 83, 0x6079a9ce
};

class CHgDDB : public CHgImage, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x607349f0
    virtual void Create(); // slot 1, 0x607346a0
    virtual void Create(); // slot 2, 0x60734670
    virtual void Create(); // slot 3, 0x60734630
    virtual void Create(); // slot 4, 0x60734b20
    virtual void Destroy(); // slot 5, 0x6075a280
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60734e00
    virtual void __CreateFromBitmap16(); // slot 7, 0x60734fd0
    virtual void __CreateFromBitmap24(); // slot 8, 0x607350b0
};

class CHgDDB16 : public CHgImage16, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6075a150
    virtual void Create(); // slot 1, 0x607346a0
    virtual void Create(); // slot 2, 0x60734670
    virtual void Create(); // slot 3, 0x60734630
    virtual void Create(); // slot 4, 0x6075a2d0
    virtual void Destroy(); // slot 5, 0x6075a280
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x6075a630
    virtual void __CreateFromBitmap16(); // slot 7, 0x6075a840
    virtual void __CreateFromBitmap24(); // slot 8, 0x6075a8e0
};

class CHgDIB : public CHgImage, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60734b80
    virtual void Create(); // slot 1, 0x607346a0
    virtual void Create(); // slot 2, 0x60734670
    virtual void Create(); // slot 3, 0x60734630
    virtual void Create(); // slot 4, 0x6075a440
    virtual void Destroy(); // slot 5, 0x60734c90
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60734e00
    virtual void __CreateFromBitmap16(); // slot 7, 0x60734fd0
    virtual void __CreateFromBitmap24(); // slot 8, 0x607350b0
};

class CHgDIB16 : public CHgImage16, public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6075a330
    virtual void Create(); // slot 1, 0x607346a0
    virtual void Create(); // slot 2, 0x60734670
    virtual void Create(); // slot 3, 0x60734630
    virtual void Create(); // slot 4, 0x6075a440
    virtual void Destroy(); // slot 5, 0x60734c90
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x6075a630
    virtual void __CreateFromBitmap16(); // slot 7, 0x6075a840
    virtual void __CreateFromBitmap24(); // slot 8, 0x6075a8e0
};

class CHgGDImage {
public:
    virtual void vfunc_0(); // slot 0, 0x607011a0
};

class CHgGDImageInPool : public CHgGDImage {
public:
    virtual void vfunc_0(); // slot 0, 0x607011a0
};

class CHgGradient {
public:
    virtual void vfunc_0(); // slot 0, 0x607015a0
};

class CHgImage : public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60734cf0
    virtual void Create(); // slot 1, 0x607346a0
    virtual void Create(); // slot 2, 0x60734670
    virtual void Create(); // slot 3, 0x60734630
    virtual void purecall(); // slot 4, 0x6079b2da
    virtual void Destroy(); // slot 5, 0x607344e0
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x60734e00
    virtual void __CreateFromBitmap16(); // slot 7, 0x60734fd0
    virtual void __CreateFromBitmap24(); // slot 8, 0x607350b0
};

class CHgImage16 : public CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60734cf0
    virtual void Create(); // slot 1, 0x607346a0
    virtual void Create(); // slot 2, 0x60734670
    virtual void Create(); // slot 3, 0x60734630
    virtual void purecall(); // slot 4, 0x6079b2da
    virtual void Destroy(); // slot 5, 0x607344e0
    virtual void __CreateFromBitmapWithColorTable(); // slot 6, 0x6075a630
    virtual void __CreateFromBitmap16(); // slot 7, 0x6075a840
    virtual void __CreateFromBitmap24(); // slot 8, 0x6075a8e0
};

class CHgImageBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60734cf0
    virtual void Create(); // slot 1, 0x607346a0
    virtual void Create(); // slot 2, 0x60734670
    virtual void Create(); // slot 3, 0x60734630
    virtual void purecall(); // slot 4, 0x6079b2da
    virtual void Destroy(); // slot 5, 0x607344e0
    virtual void purecall(); // slot 6, 0x6079b2da
    virtual void purecall(); // slot 7, 0x6079b2da
    virtual void purecall(); // slot 8, 0x6079b2da
};

class CHgMemDC {
public:
    virtual void vfunc_0(); // slot 0, 0x60701250
};

class CHgMemDCList : public ?$CTypedPtrList, public ?$_CTypedPtrList, public CPtrList, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a584
    virtual void vfunc_1(); // slot 1, 0x60701e70
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class CHgToolApp : public CWinApp, public CWinThread, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a43a
    virtual void vfunc_1(); // slot 1, 0x60701010
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a446
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void vfunc_12(); // slot 12, 0x60701000
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a47c
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void vfunc_22(); // slot 22, 0x60701030
    virtual void Run(); // slot 23, 0x6079a4a0
    virtual void PreTranslateMessage(); // slot 24, 0x6079a4a6
    virtual void PumpMessage(); // slot 25, 0x6079a4ac
    virtual void OnIdle(); // slot 26, 0x6079a4b2
    virtual void IsIdleMessage(); // slot 27, 0x6079a4b8
    virtual void vfunc_28(); // slot 28, 0x60701060
    virtual void ProcessWndProcException(); // slot 29, 0x6079a4be
    virtual void ProcessMessageFilter(); // slot 30, 0x6079a4c4
    virtual void GetMainWnd(); // slot 31, 0x6079a4ca
    virtual void Delete(); // slot 32, 0x6079a4d0
    virtual void InitLibId(); // slot 33, 0x6079a4d6
    virtual void Register(); // slot 34, 0x6079a4dc
    virtual void Unregister(); // slot 35, 0x6079a4e2
    virtual void OpenDocumentFile(); // slot 36, 0x6079a4e8
    virtual void AddToRecentFileList(); // slot 37, 0x6079a4ee
    virtual void InitApplication(); // slot 38, 0x6079a4f4
    virtual void SaveAllModified(); // slot 39, 0x6079a4fa
    virtual void DoMessageBox(); // slot 40, 0x6079a500
    virtual void DoWaitCursor(); // slot 41, 0x6079a506
    virtual void OnDDECommand(); // slot 42, 0x6079a50c
    virtual void WinHelpA(); // slot 43, 0x6079a512
    virtual void HtmlHelpA(); // slot 44, 0x6079a518
    virtual void WinHelpInternal(); // slot 45, 0x6079a51e
    virtual void LoadAppLangResourceDLL(); // slot 46, 0x6079a524
    virtual void LoadSysPolicies(); // slot 47, 0x6079a52a
};

class CHtmlCtrl : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6071a760
    virtual void vfunc_1(); // slot 1, 0x6071a680
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6071a770
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6071a7b0
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6071a950
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CHtmlViewCtrl : public CHtmlView, public CFormView, public CScrollView, public CView, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6071aaf0
    virtual void vfunc_1(); // slot 1, 0x6071aa80
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079aa5e
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6071ab00
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079aa64
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079aa52
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079aa6a
    virtual void CalcWindowRect(); // slot 28, 0x6079aa70
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079aa76
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void vfunc_40(); // slot 40, 0x6071ad50
    virtual void vfunc_41(); // slot 41, 0x6071ad20
    virtual void vfunc_42(); // slot 42, 0x6071acf0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void vfunc_54(); // slot 54, 0x6071acb0
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void GetAccessibilityHitTest(); // slot 56, 0x6071aca0
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079aa9a
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void vfunc_73(); // slot 73, 0x60701070
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079aaa0
    virtual void SetOccDialogInfo(); // slot 79, 0x6079aaa6
    virtual void GetOccDialogInfo(); // slot 80, 0x6079aaac
    virtual void IsSelected(); // slot 81, 0x6079aab2
    virtual void OnScroll(); // slot 82, 0x6079aab8
    virtual void OnScrollBy(); // slot 83, 0x6079aabe
    virtual void OnDragEnter(); // slot 84, 0x6079aac4
    virtual void OnDragOver(); // slot 85, 0x6079aaca
    virtual void OnDragLeave(); // slot 86, 0x6079aad0
    virtual void OnDrop(); // slot 87, 0x6079aad6
    virtual void OnDropEx(); // slot 88, 0x6079aadc
    virtual void OnDragScroll(); // slot 89, 0x6079aae2
    virtual void OnPrepareDC(); // slot 90, 0x6079aae8
    virtual void OnInitialUpdate(); // slot 91, 0x6079aaee
    virtual void OnActivateView(); // slot 92, 0x6079aaf4
    virtual void OnActivateFrame(); // slot 93, 0x6079aafa
    virtual void OnUpdate(); // slot 94, 0x6079ab00
    virtual void OnDraw(); // slot 95, 0x6079ab06
    virtual void OnPreparePrinting(); // slot 96, 0x6079ab0c
    virtual void OnBeginPrinting(); // slot 97, 0x6079ab12
    virtual void OnPrint(); // slot 98, 0x6079ab18
    virtual void OnEndPrinting(); // slot 99, 0x6079ab1e
    virtual void OnEndPrintPreview(); // slot 100, 0x6079ab24
    virtual void GetWheelScrollDistance(); // slot 101, 0x6079ab2a
    virtual void OnShowContextMenu(); // slot 102, 0x6079ab30
    virtual void OnGetExternal(); // slot 103, 0x6079ab36
    virtual void OnGetHostInfo(); // slot 104, 0x6079ab3c
    virtual void OnShowUI(); // slot 105, 0x6079ab42
    virtual void OnHideUI(); // slot 106, 0x6079ab48
    virtual void OnUpdateUI(); // slot 107, 0x6079ab4e
    virtual void OnEnableModeless(); // slot 108, 0x6079ab54
    virtual void OnDocWindowActivate(); // slot 109, 0x6079ab5a
    virtual void OnFrameWindowActivate(); // slot 110, 0x6079ab60
    virtual void OnResizeBorder(); // slot 111, 0x6079ab66
    virtual void OnTranslateAccelerator(); // slot 112, 0x6079ab6c
    virtual void OnGetOptionKeyPath(); // slot 113, 0x6079ab72
    virtual void OnFilterDataObject(); // slot 114, 0x6079ab78
    virtual void OnTranslateUrl(); // slot 115, 0x6079ab7e
    virtual void OnGetDropTarget(); // slot 116, 0x6079ab84
    virtual void OnNavigateComplete2(); // slot 117, 0x6079ab8a
    virtual void OnBeforeNavigate2(); // slot 118, 0x6071ab50
    virtual void OnStatusTextChange(); // slot 119, 0x6071abf0
    virtual void OnProgressChange(); // slot 120, 0x6079ab90
    virtual void OnCommandStateChange(); // slot 121, 0x6079ab96
    virtual void OnDownloadBegin(); // slot 122, 0x6079ab9c
    virtual void OnDownloadComplete(); // slot 123, 0x6079aba2
    virtual void OnTitleChange(); // slot 124, 0x6079aba8
    virtual void OnPropertyChange(); // slot 125, 0x6079abae
    virtual void OnNewWindow2(); // slot 126, 0x6079abb4
    virtual void OnDocumentComplete(); // slot 127, 0x6079abba
    virtual void OnQuit(); // slot 128, 0x6079abc0
    virtual void OnVisible(); // slot 129, 0x6079abc6
    virtual void OnToolBar(); // slot 130, 0x6079abcc
    virtual void OnMenuBar(); // slot 131, 0x6079abd2
    virtual void OnStatusBar(); // slot 132, 0x6079abd8
    virtual void OnFullScreen(); // slot 133, 0x6079abde
    virtual void OnTheaterMode(); // slot 134, 0x6079abe4
    virtual void OnNavigateError(); // slot 135, 0x6079abea
    virtual void NavigateComplete2(); // slot 136, 0x6079abf0
    virtual void BeforeNavigate2(); // slot 137, 0x6079abf6
    virtual void DocumentComplete(); // slot 138, 0x6079abfc
    virtual void NavigateError(); // slot 139, 0x6079ac02
    virtual void Create(); // slot 140, 0x6071ab10
    virtual void DispatchNotifyEvent(); // slot 141, 0x607123d0
};

class CImgChatEdit : public CEdit, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6077f7d0
    virtual void vfunc_1(); // slot 1, 0x6077f710
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6077fcc0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6077fd10
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CImgChatOutWnd : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a90e
    virtual void vfunc_1(); // slot 1, 0x607801e0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60782340
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CImgChatWnd : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60783800
    virtual void vfunc_1(); // slot 1, 0x60783790
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60784650
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void setNewPosition(); // slot 81, 0x607841e0
    virtual void setRect(); // slot 82, 0x607842f0
    virtual void setMovingRect(); // slot 83, 0x607844d0
    virtual void sendNewMessage(); // slot 84, 0x607845d0
    virtual void sendEscMessage(); // slot 85, 0x607845f0
};

class CLevel@MemberListCtrl : public CLevel, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6071e460
    virtual void GetColumnInfo(); // slot 1, 0x6071ef40
    virtual void GetItemText(); // slot 2, 0x6071ef80
    virtual void CompareItem(); // slot 3, 0x6071efb0
};

class CLineDrawer : public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6071add0
    virtual void CreateControl(); // slot 1, 0x60712310
    virtual void DestroyControl(); // slot 2, 0x60712320
    virtual void IsCreated(); // slot 3, 0x60712350
    virtual void ShowControl(); // slot 4, 0x60712380
    virtual void UpdateControl(); // slot 5, 0x6071ae50
    virtual void DispatchNotifyEvent(); // slot 6, 0x607123d0
    virtual void GetCWndPtr(); // slot 7, 0x60712330
};

class CListColButtonDraw : public CListColDraw {
public:
    virtual void vfunc_0(); // slot 0, 0x6070ea10
    virtual void vfunc_1(); // slot 1, 0x6070ead0
};

class CListColDraw {
public:
    virtual void Draw(); // slot 0, 0x6071af60
    virtual void HitTest(); // slot 1, 0x6071af90
};

class CListColMemberIdDraw : public CListColDraw {
public:
    virtual void vfunc_0(); // slot 0, 0x6071eb20
    virtual void HitTest(); // slot 1, 0x6071af90
};

class CListColMetaData {
public:
    virtual void purecall(); // slot 0, 0x6079b2da
    virtual void purecall(); // slot 1, 0x6079b2da
    virtual void purecall(); // slot 2, 0x6079b2da
    virtual void purecall(); // slot 3, 0x6079b2da
};

class CListCtrlEx : public CListCtrl, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6071b010
    virtual void vfunc_1(); // slot 1, 0x6071afa0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6071b560
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a800
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void DrawItem(); // slot 81, 0x6070e390
    virtual void OnSortItem(); // slot 82, 0x6071b9e0
    virtual void DoListCtrlSetting(); // slot 83, 0x6071b550
    virtual void GetColumnFormatString(); // slot 84, 0x6071c030
    virtual void MeasureItem(); // slot 85, 0x6071b5f0
};

class CListRowDraw {
public:
    virtual void vfunc_0(); // slot 0, 0x6070df60
    virtual void Draw(); // slot 1, 0x6071cbe0
    virtual void DrawUsingBackBuffer(); // slot 2, 0x6071d2b0
    virtual void HitTest(); // slot 3, 0x6071d990
    virtual void CreateBackBuffer(); // slot 4, 0x6071ca40
};

class CMemDC : public CDC, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079acc2
    virtual void vfunc_1(); // slot 1, 0x6072ed40
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void SetAttribDC(); // slot 5, 0x6079acc8
    virtual void SetOutputDC(); // slot 6, 0x6079acce
    virtual void ReleaseAttribDC(); // slot 7, 0x6079acd4
    virtual void ReleaseOutputDC(); // slot 8, 0x6079acda
    virtual void SaveDC(); // slot 9, 0x6079a9f2
    virtual void RestoreDC(); // slot 10, 0x6079aa10
    virtual void SelectStockObject(); // slot 11, 0x6079ace0
    virtual void SelectObject(); // slot 12, 0x6079a88a
    virtual void SetBkColor(); // slot 13, 0x6079ace6
    virtual void SetTextColor(); // slot 14, 0x6079aa0a
    virtual void SetMapMode(); // slot 15, 0x6079acec
    virtual void SetViewportOrg(); // slot 16, 0x6079acf2
    virtual void OffsetViewportOrg(); // slot 17, 0x6079acf8
    virtual void SetViewportExt(); // slot 18, 0x6079acfe
    virtual void ScaleViewportExt(); // slot 19, 0x6079ad04
    virtual void SetWindowExt(); // slot 20, 0x6079ad0a
    virtual void ScaleWindowExt(); // slot 21, 0x6079ad10
    virtual void GetClipBox(); // slot 22, 0x6079acb6
    virtual void vfunc_23(); // slot 23, 0x6072f330
    virtual void vfunc_24(); // slot 24, 0x6072f310
    virtual void vfunc_25(); // slot 25, 0x6072f2e0
    virtual void vfunc_26(); // slot 26, 0x6072f2b0
    virtual void vfunc_27(); // slot 27, 0x6072f260
    virtual void vfunc_28(); // slot 28, 0x60718f00
    virtual void vfunc_29(); // slot 29, 0x6072f230
    virtual void vfunc_30(); // slot 30, 0x6072f1f0
    virtual void vfunc_31(); // slot 31, 0x6072f1c0
};

class CMemberId@MemberListCtrl : public CMemberId, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6071e460
    virtual void GetColumnInfo(); // slot 1, 0x6071ebd0
    virtual void GetItemText(); // slot 2, 0x6071ec10
    virtual void CompareItem(); // slot 3, 0x6071ec40
};

class CMemberListCtrl : public CListCtrlEx, public CListCtrl, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6071e4e0
    virtual void vfunc_1(); // slot 1, 0x6071e1b0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6071e4f0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a800
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void DrawItem(); // slot 81, 0x6070e390
    virtual void OnSortItem(); // slot 82, 0x6071b9e0
    virtual void DoListCtrlSetting(); // slot 83, 0x6071e740
    virtual void GetColumnFormatString(); // slot 84, 0x6071c030
    virtual void MeasureItem(); // slot 85, 0x6071b5f0
};

class CMemberListTabCtrl : public CCustomTabCtrl, public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60715df0
    virtual void CreateControl(); // slot 1, 0x60712310
    virtual void DestroyControl(); // slot 2, 0x60712320
    virtual void IsCreated(); // slot 3, 0x60716660
    virtual void ShowControl(); // slot 4, 0x60716670
    virtual void UpdateControl(); // slot 5, 0x607166a0
    virtual void DispatchNotifyEvent(); // slot 6, 0x607123d0
    virtual void FindAbuseAndReplaceTo(); // slot 7, 0x60716710
};

class CMidiPlay {
public:
    virtual void vfunc_0(); // slot 0, 0x60785010
};

class CMultiBmpButton : public CButton, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a76a
    virtual void vfunc_1(); // slot 1, 0x6071f370
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6071fc00
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6071f680
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a632
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a608
    virtual void DrawItem(); // slot 82, 0x6071f500
};

class CMyInfoCtrl : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60720370
    virtual void vfunc_1(); // slot 1, 0x60720310
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60720a10
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CNoticeData {
public:
    virtual void vfunc_0(); // slot 0, 0x60722d20
};

class CNoticeWnd : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a90e
    virtual void vfunc_1(); // slot 1, 0x60722c30
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60722fa0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void ManualUpdateControl(); // slot 81, 0x607247a0
};

class CPalette : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a86c
    virtual void vfunc_1(); // slot 1, 0x607120b0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class CParam : public IParam {
public:
    virtual void SetContext(); // slot 0, 0x6079c160
    virtual void GetContext(); // slot 1, 0x6079c166
    virtual void GetService(); // slot 2, 0x6079c16c
    virtual void GetCommand(); // slot 3, 0x6079c172
    virtual void GetItemCount(); // slot 4, 0x6079c178
    virtual void IsConst(); // slot 5, 0x6079c17e
    virtual void IsExistKey(); // slot 6, 0x6079c148
    virtual void AddValue(); // slot 7, 0x6079c184
    virtual void AddValue(); // slot 8, 0x6079c13c
    virtual void AddValue(); // slot 9, 0x6079c18a
    virtual void AddValue(); // slot 10, 0x6079c190
    virtual void AddValue(); // slot 11, 0x6079c196
    virtual void AddValue(); // slot 12, 0x6079c19c
    virtual void AddValue(); // slot 13, 0x6079c136
    virtual void AddValue(); // slot 14, 0x6079c142
    virtual void AddValue(); // slot 15, 0x6079c130
    virtual void GetValue(); // slot 16, 0x6079c1a2
    virtual void GetValue(); // slot 17, 0x6079c15a
    virtual void GetValue(); // slot 18, 0x6079c1a8
    virtual void GetValue(); // slot 19, 0x6079c1ae
    virtual void GetValue(); // slot 20, 0x6079c1b4
    virtual void GetValue(); // slot 21, 0x6079c1ba
    virtual void GetValue(); // slot 22, 0x6079c154
    virtual void GetValue(); // slot 23, 0x6079c1c0
    virtual void GetValue(); // slot 24, 0x6079c1c6
    virtual void GetValue(); // slot 25, 0x6079c1cc
    virtual void GetValue(); // slot 26, 0x6079c1d2
    virtual void SetValue(); // slot 27, 0x6079c1d8
    virtual void SetValue(); // slot 28, 0x6079c14e
    virtual void SetValue(); // slot 29, 0x6079c1de
    virtual void SetValue(); // slot 30, 0x6079c1e4
    virtual void SetValue(); // slot 31, 0x6079c1ea
    virtual void SetValue(); // slot 32, 0x6079c1f0
    virtual void SetValue(); // slot 33, 0x6079c1f6
    virtual void SetValue(); // slot 34, 0x6079c1fc
    virtual void SetValue(); // slot 35, 0x6079c202
    virtual void DelKey(); // slot 36, 0x6079c208
    virtual void Clear(); // slot 37, 0x6079c20e
    virtual void GetData(); // slot 38, 0x6079c214
    virtual void GetIPAddress(); // slot 39, 0x6079c21a
    virtual void GetPort(); // slot 40, 0x6079c220
    virtual void IsEncrypted(); // slot 41, 0x6079c226
    virtual void GetURL(); // slot 42, 0x6079c22c
    virtual void GetZipURL(); // slot 43, 0x6079c232
    virtual void GetEncryptURL(); // slot 44, 0x6079c238
    virtual void vfunc_45(); // slot 45, 0x607268a0
};

class CPen : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a5b4
    virtual void vfunc_1(); // slot 1, 0x60707330
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class CRating@MemberListCtrl : public CRating, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6071e3d0
    virtual void GetColumnInfo(); // slot 1, 0x6071efe0
    virtual void GetItemText(); // slot 2, 0x6071f080
    virtual void CompareItem(); // slot 3, 0x6071f0f0
};

class CRectDrawer : public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x607177a0
    virtual void CreateControl(); // slot 1, 0x60712310
    virtual void DestroyControl(); // slot 2, 0x60712320
    virtual void IsCreated(); // slot 3, 0x60712350
    virtual void ShowControl(); // slot 4, 0x60712380
    virtual void UpdateControl(); // slot 5, 0x60724aa0
    virtual void DispatchNotifyEvent(); // slot 6, 0x607123d0
    virtual void GetCWndPtr(); // slot 7, 0x60712330
};

class CRgn : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a5d2
    virtual void vfunc_1(); // slot 1, 0x6070b780
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
};

class CRoomCtrl_T1 {
public:
    virtual void vfunc_0(); // slot 0, 0x60724cd0
    virtual void CreateRoom(); // slot 1, 0x60724d70
    virtual void UpdateRoomBtnState(); // slot 2, 0x60724e60
    virtual void DrawRoom(); // slot 3, 0x60724fa0
    virtual void DrawAvatar(); // slot 4, 0x60725060
    virtual void DrawBackgroundImage(); // slot 5, 0x607251b0
    virtual void DrawTitle(); // slot 6, 0x60725230
    virtual void DrawRoomState(); // slot 7, 0x60725470
    virtual void DrawRoomOption(); // slot 8, 0x607254c0
    virtual void HitTest(); // slot 9, 0x60725720
    virtual void SetRoomRect(); // slot 10, 0x60725690
    virtual void GetRoomImageIndex(); // slot 11, 0x60725630
};

class CRoomId@MemberListCtrl : public CRoomId, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6071e460
    virtual void GetColumnInfo(); // slot 1, 0x6071ec90
    virtual void GetItemText(); // slot 2, 0x6071ecd0
    virtual void CompareItem(); // slot 3, 0x6071edb0
};

class CRoomListCtrl_T1 : public CScrollView, public CView, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60725bd0
    virtual void vfunc_1(); // slot 1, 0x60725970
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079aa5e
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x60725be0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079ac92
    virtual void CalcWindowRect(); // slot 28, 0x6079aa70
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079aa76
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x60728bb0
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void vfunc_73(); // slot 73, 0x60701070
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void IsSelected(); // slot 81, 0x6079aab2
    virtual void OnScroll(); // slot 82, 0x6079aab8
    virtual void OnScrollBy(); // slot 83, 0x6079aabe
    virtual void OnDragEnter(); // slot 84, 0x6079aac4
    virtual void OnDragOver(); // slot 85, 0x6079aaca
    virtual void OnDragLeave(); // slot 86, 0x6079aad0
    virtual void OnDrop(); // slot 87, 0x6079aad6
    virtual void OnDropEx(); // slot 88, 0x6079aadc
    virtual void OnDragScroll(); // slot 89, 0x6079aae2
    virtual void OnPrepareDC(); // slot 90, 0x6079aae8
    virtual void OnInitialUpdate(); // slot 91, 0x6079ac98
    virtual void OnActivateView(); // slot 92, 0x6079ac9e
    virtual void OnActivateFrame(); // slot 93, 0x6079aca4
    virtual void OnUpdate(); // slot 94, 0x6079ab00
    virtual void OnDraw(); // slot 95, 0x60728430
    virtual void OnPreparePrinting(); // slot 96, 0x6079ab0c
    virtual void OnBeginPrinting(); // slot 97, 0x6079ab12
    virtual void OnPrint(); // slot 98, 0x6079ab18
    virtual void OnEndPrinting(); // slot 99, 0x6079ab1e
    virtual void OnEndPrintPreview(); // slot 100, 0x6079ab24
    virtual void GetWheelScrollDistance(); // slot 101, 0x6079ab2a
    virtual void Initialize(); // slot 102, 0x60727470
    virtual void AddRoom(); // slot 103, 0x60727480
    virtual void CalculateRoomRect(); // slot 104, 0x60728950
};

class CScrollSupportCtrl : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6072b020
    virtual void vfunc_1(); // slot 1, 0x6072afc0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6072b190
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CSex@MemberListCtrl : public CSex, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6071e460
    virtual void GetColumnInfo(); // slot 1, 0x6071ede0
    virtual void GetItemText(); // slot 2, 0x6071ee20
    virtual void CompareItem(); // slot 3, 0x6071eef0
};

class CSimpleColorPicker : public CStatic, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a9c2
    virtual void vfunc_1(); // slot 1, 0x6072b790
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6072b930
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6072b910
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a9bc
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a9b6
    virtual void DrawItem(); // slot 82, 0x6079a9b0
};

class CSkinScrollbar : public CStatic, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6072bb50
    virtual void vfunc_1(); // slot 1, 0x6072bc00
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void vfunc_12(); // slot 12, 0x6072bc30
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a9bc
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a9b6
    virtual void DrawItem(); // slot 82, 0x6079a9b0
};

class CSortRoomOption {
public:
    virtual void vfunc_0(); // slot 0, 0x60725bb0
    virtual void vfunc_1(); // slot 1, 0x60725ae0
};

class CTabButtons {
public:
    virtual void vfunc_0(); // slot 0, 0x6072cbc0
};

class CTabCtrlContents : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60785440
    virtual void vfunc_1(); // slot 1, 0x607854f0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void vfunc_12(); // slot 12, 0x60785450
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
};

class CTextBox : public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x6072d7e0
    virtual void CreateControl(); // slot 1, 0x60712310
    virtual void DestroyControl(); // slot 2, 0x60712320
    virtual void IsCreated(); // slot 3, 0x60712350
    virtual void ShowControl(); // slot 4, 0x60712380
    virtual void UpdateControl(); // slot 5, 0x6072d920
    virtual void UpdateControlForGame(); // slot 6, 0x6072d9a0
    virtual void GetCWndPtr(); // slot 7, 0x60712330
};

class CTextProgressCtrl : public CProgressCtrl, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6079a98c
    virtual void vfunc_1(); // slot 1, 0x6072edd0
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void vfunc_12(); // slot 12, 0x6072ee20
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a80c
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void Create(); // slot 81, 0x6079a986
    virtual void CreateEx(); // slot 82, 0x6079a980
};

class CThreadManager {
public:
    virtual void vfunc_0(); // slot 0, 0x60785710
};

class CWaitingMemberListCtrl : public CListCtrlEx, public CListCtrl, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x6072f3b0
    virtual void vfunc_1(); // slot 1, 0x6072f350
    virtual void DispatchNotifyEvent(); // slot 2, 0x607123d0
    virtual void vfunc_3(); // slot 3, 0x60701070
    virtual void DispatchNotifyEvent(); // slot 4, 0x607123d0
    virtual void OnCmdMsg(); // slot 5, 0x6079a440
    virtual void OnFinalRelease(); // slot 6, 0x6079a764
    virtual void IsInvokeAllowed(); // slot 7, 0x6079a44c
    virtual void GetDispatchIID(); // slot 8, 0x6079a452
    virtual void GetTypeInfoCount(); // slot 9, 0x6079a458
    virtual void GetTypeLibCache(); // slot 10, 0x6079a45e
    virtual void GetTypeLib(); // slot 11, 0x6079a464
    virtual void GetMessageMap(); // slot 12, 0x6072f3c0
    virtual void GetCommandMap(); // slot 13, 0x6079a46a
    virtual void GetDispatchMap(); // slot 14, 0x6079a470
    virtual void GetConnectionMap(); // slot 15, 0x6079a476
    virtual void GetInterfaceMap(); // slot 16, 0x6079a75e
    virtual void GetEventSinkMap(); // slot 17, 0x6079a482
    virtual void OnCreateAggregates(); // slot 18, 0x6079a488
    virtual void GetInterfaceHook(); // slot 19, 0x6079a48e
    virtual void GetExtraConnectionPoints(); // slot 20, 0x6079a494
    virtual void GetConnectionHook(); // slot 21, 0x6079a49a
    virtual void PreSubclassWindow(); // slot 22, 0x6079a758
    virtual void Create(); // slot 23, 0x6079a752
    virtual void CreateEx(); // slot 24, 0x6079a74c
    virtual void CreateEx(); // slot 25, 0x6079a746
    virtual void DestroyWindow(); // slot 26, 0x6079a740
    virtual void PreCreateWindow(); // slot 27, 0x6079a73a
    virtual void CalcWindowRect(); // slot 28, 0x6079a734
    virtual void GetMenu(); // slot 29, 0x6079a72e
    virtual void SetMenu(); // slot 30, 0x6079a728
    virtual void OnToolHitTest(); // slot 31, 0x6079a722
    virtual void GetScrollBarCtrl(); // slot 32, 0x6079a71c
    virtual void WinHelpA(); // slot 33, 0x6079a716
    virtual void HtmlHelpA(); // slot 34, 0x6079a710
    virtual void WinHelpInternal(); // slot 35, 0x6079a70a
    virtual void ContinueModal(); // slot 36, 0x6079a704
    virtual void EndModalLoop(); // slot 37, 0x6079a6fe
    virtual void EnsureStdObj(); // slot 38, 0x6079a6f8
    virtual void get_accParent(); // slot 39, 0x6079a6f2
    virtual void get_accChildCount(); // slot 40, 0x6079a6ec
    virtual void get_accChild(); // slot 41, 0x6079a6e6
    virtual void get_accName(); // slot 42, 0x6079a6e0
    virtual void get_accValue(); // slot 43, 0x6079a6da
    virtual void get_accDescription(); // slot 44, 0x6079a6d4
    virtual void get_accRole(); // slot 45, 0x6079a6ce
    virtual void get_accState(); // slot 46, 0x6079a6c8
    virtual void get_accHelp(); // slot 47, 0x6079a6c2
    virtual void get_accHelpTopic(); // slot 48, 0x6079a6bc
    virtual void get_accKeyboardShortcut(); // slot 49, 0x6079a6b6
    virtual void get_accFocus(); // slot 50, 0x6079a6b0
    virtual void get_accSelection(); // slot 51, 0x6079a6aa
    virtual void get_accDefaultAction(); // slot 52, 0x6079a6a4
    virtual void accSelect(); // slot 53, 0x6079a69e
    virtual void accLocation(); // slot 54, 0x6079a698
    virtual void accNavigate(); // slot 55, 0x6079a692
    virtual void accHitTest(); // slot 56, 0x6079a68c
    virtual void accDoDefaultAction(); // slot 57, 0x6079a686
    virtual void put_accName(); // slot 58, 0x6079a680
    virtual void put_accValue(); // slot 59, 0x6079a67a
    virtual void SetProxy(); // slot 60, 0x6079a674
    virtual void CreateAccessibleProxy(); // slot 61, 0x6079a66e
    virtual void OnCommand(); // slot 62, 0x6079a668
    virtual void OnNotify(); // slot 63, 0x6079a662
    virtual void GetSuperWndProcAddr(); // slot 64, 0x6079a65c
    virtual void DispatchNotifyEvent(); // slot 65, 0x607123d0
    virtual void vfunc_66(); // slot 66, 0x6070dce0
    virtual void vfunc_67(); // slot 67, 0x6070dcf0
    virtual void PreTranslateMessage(); // slot 68, 0x6079a656
    virtual void OnAmbientProperty(); // slot 69, 0x6079a650
    virtual void WindowProc(); // slot 70, 0x6079a64a
    virtual void OnWndMsg(); // slot 71, 0x6079a644
    virtual void DefWindowProcA(); // slot 72, 0x6079a63e
    virtual void PostNcDestroy(); // slot 73, 0x6079a638
    virtual void OnChildNotify(); // slot 74, 0x6079a800
    virtual void CheckAutoCenter(); // slot 75, 0x6079a62c
    virtual void IsFrameWnd(); // slot 76, 0x6079a626
    virtual void CreateControlContainer(); // slot 77, 0x6079a620
    virtual void CreateControlSite(); // slot 78, 0x6079a61a
    virtual void SetOccDialogInfo(); // slot 79, 0x6079a614
    virtual void GetOccDialogInfo(); // slot 80, 0x6079a60e
    virtual void DrawItem(); // slot 81, 0x6070e390
    virtual void OnSortItem(); // slot 82, 0x6071b9e0
    virtual void DoListCtrlSetting(); // slot 83, 0x6072f470
    virtual void GetColumnFormatString(); // slot 84, 0x6071c030
    virtual void MeasureItem(); // slot 85, 0x6071b5f0
};

class CWinCnt@MemberListCtrl : public CWinCnt, public CListColMetaData {
public:
    virtual void vfunc_0(); // slot 0, 0x6071e460
    virtual void GetColumnInfo(); // slot 1, 0x6071f120
    virtual void GetItemText(); // slot 2, 0x6071f160
    virtual void CompareItem(); // slot 3, 0x6071f220
};

class Image@Gdiplus : public Image, public GdiplusBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60701f80
    virtual void vfunc_1(); // slot 1, 0x60701ed0
};

class _AFX_DLL_MODULE_STATE : public AFX_MODULE_STATE, public CNoTrackObject {
public:
    virtual void vfunc_0(); // slot 0, 0x6079b0ac
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60709d70
    virtual void what(); // slot 1, 0x6079b2d4
};

class invalid_argument@std : public invalid_argument, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60709d20
    virtual void vfunc_1(); // slot 1, 0x60709d50
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60709d20
    virtual void vfunc_1(); // slot 1, 0x60709d50
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60709d20
    virtual void vfunc_1(); // slot 1, 0x60709d50
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60709d20
    virtual void vfunc_1(); // slot 1, 0x60709d50
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x6079b1b4
};

}  // namespace HgTool3
