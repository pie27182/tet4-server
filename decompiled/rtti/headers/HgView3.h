// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgView3 {

class ?$CMFunctor;
class CButton;
class CButtonElement;
class CCmdTarget;
class CComboBox;
class CComplexType;
class CControlBase;
class CCustomComboBox;
class CCustomTabCtrl;
class CFontElement;
class CFrameWnd;
class CGaugeCtrlElement;
class CLineElement;
class CListCtrl;
class CListElement;
class CMsgBoxElement;
class CNoticeWndElement;
class CObject;
class CRectElement;
class CRoomListElement;
class CScrollView;
class CStatic;
class CStaticElement;
class CView;
class CWebElement;
class CWindowElement;
class CWnd;
class IComponent;
class IFunctor;
class bad_alloc;
class exception;
class invalid_argument;
class length_error;
class logic_error;
class out_of_range;

class ?$CMFunctor@VCBaseLobbyView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a1f090
    virtual void vfunc_1(); // slot 1, 0x60a0ae20
    virtual void vfunc_2(); // slot 2, 0x60a1f0c0
};

class ?$CMFunctor@VCChannelLobbyView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a1f090
    virtual void vfunc_1(); // slot 1, 0x60a112e0
    virtual void vfunc_2(); // slot 2, 0x60a1f0c0
};

class ?$CMFunctor@VCChannelMainWnd@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a19900
    virtual void vfunc_1(); // slot 1, 0x60a154a0
    virtual void vfunc_2(); // slot 2, 0x60a19930
};

class ?$CMFunctor@VCGameLobbyView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a1f090
    virtual void vfunc_1(); // slot 1, 0x60a15fe0
    virtual void vfunc_2(); // slot 2, 0x60a1f0c0
};

class ?$CMFunctor@VCGameWnd@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a19900
    virtual void vfunc_1(); // slot 1, 0x60a19910
    virtual void vfunc_2(); // slot 2, 0x60a19930
};

class ?$CMFunctor@VCHanChatView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a1f090
    virtual void vfunc_1(); // slot 1, 0x60a1a420
    virtual void vfunc_2(); // slot 2, 0x60a1f0c0
};

class ?$CMFunctor@VCMainFrameView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a1f090
    virtual void vfunc_1(); // slot 1, 0x60a1bea0
    virtual void vfunc_2(); // slot 2, 0x60a1f0c0
};

class ?$CMFunctor@VCMainFrameWnd@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a19900
    virtual void vfunc_1(); // slot 1, 0x60a1e360
    virtual void vfunc_2(); // slot 2, 0x60a19930
};

class ?$CMFunctor@VCMiniChannelListView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a1f090
    virtual void vfunc_1(); // slot 1, 0x60a1f0a0
    virtual void vfunc_2(); // slot 2, 0x60a1f0c0
};

class CAdFileDownload {
public:
    virtual void vfunc_0(); // slot 0, 0x60a1c460
};

class CBaseLobbyView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a0a960
    virtual void OnDetached(); // slot 1, 0x60a15b20
    virtual void vfunc_2(); // slot 2, 0x60a01060
    virtual void Msg_GetWindow(); // slot 3, 0x60a0ab90
    virtual void Msg_UpdateUIFromXML(); // slot 4, 0x60a0abb0
};

class CBmpButton : public CButton, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a1ff5e
    virtual void vfunc_1(); // slot 1, 0x60a11d50
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a1ff64
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a1ff6a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2032a
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void Create(); // slot 81, 0x60a20354
    virtual void DrawItem(); // slot 82, 0x60a1ff70
};

class CBrush : public CGdiObject, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a20180
    virtual void vfunc_1(); // slot 1, 0x60a155b0
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
};

class CButtonElement@CVS_NET_UI@SchemaFactory : public CButtonElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a03190
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CChannelLobbyView : public CBaseLobbyView, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a0d510
    virtual void OnDetached(); // slot 1, 0x60a15b20
    virtual void vfunc_2(); // slot 2, 0x60a0d4a0
    virtual void Msg_GetWindow(); // slot 3, 0x60a0ab90
    virtual void Msg_UpdateUIFromXML(); // slot 4, 0x60a0ea40
    virtual void OnDblClickRoomList(); // slot 5, 0x60a0f4c0
    virtual void OnClickChangeChannelBtn(); // slot 6, 0x60a0f600
    virtual void OnClickCreateRoomBtn(); // slot 7, 0x60a0f660
    virtual void OnClickJoinRoomBtn(); // slot 8, 0x60a0f690
    virtual void OnClickViewRoomBtn(); // slot 9, 0x60a0f700
    virtual void OnClickRoomAvatar(); // slot 10, 0x60a0f730
    virtual void OnDblClickMemberList(); // slot 11, 0x60a0f4f0
    virtual void OnClickDirectStartBtn(); // slot 12, 0x60a0f760
    virtual void OnClickRecommendedGameBtn(); // slot 13, 0x60a0f790
    virtual void OnClickExitBtn(); // slot 14, 0x60a0f7c0
    virtual void OnClickAutoCreateRoomBtn(); // slot 15, 0x60a0f630
    virtual void OnGetItemState(); // slot 16, 0x60a0f520
    virtual void OnCloseItemWebDlg(); // slot 17, 0x60a0f550
    virtual void OnClickShowItemWebBtn(); // slot 18, 0x60a0f880
    virtual void OnClickHappyBeanBtn(); // slot 19, 0x60a0f8b0
    virtual void OnClickGuildCtrl(); // slot 20, 0x60a0f8e0
    virtual void OnClickThermometer(); // slot 21, 0x60a10da0
    virtual void OnClickSPCRoom(); // slot 22, 0x60a10e30
    virtual void Evt_ChannelGaeaPrizeData(); // slot 23, 0x60a10fe0
    virtual void OnClickShowEmptyRoomBtn(); // slot 24, 0x60a10440
    virtual void OnClickShowRoomNumOrderBtn(); // slot 25, 0x60a10670
    virtual void OnClickSearchRoomBtn(); // slot 26, 0x60a108a0
};

class CChannelMainWnd : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a114c0
    virtual void vfunc_1(); // slot 1, 0x60a11450
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a12120
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void InitiateChannelMainWnd(); // slot 81, 0x60a12e00
    virtual void CreateRoomListCtrl(); // slot 82, 0x60a12ee0
    virtual void CreateMyInfoCtrl(); // slot 83, 0x60a12ff0
    virtual void CreateTabCtrl(); // slot 84, 0x60a135b0
    virtual void CreateNoticeWnd(); // slot 85, 0x60a14560
    virtual void CreateChannelButton(); // slot 86, 0x60a14610
    virtual void CrateTabMemberList(); // slot 87, 0x60a13550
    virtual void AddTab(); // slot 88, 0x60a13060
    virtual void AttachScrollCtrl(); // slot 89, 0x60a13130
    virtual void AttachListControl(); // slot 90, 0x60a13240
    virtual void AttachHtmlCtrl(); // slot 91, 0x60a132f0
    virtual void AttachBtn(); // slot 92, 0x60a13460
    virtual void CreateMemberListCtrl(); // slot 93, 0x60a13bf0
    virtual void CreateGuildListCtrl(); // slot 94, 0x60a13f70
    virtual void CreateFriendListCtrl(); // slot 95, 0x60a142f0
    virtual void SortRoomList(); // slot 96, 0x60a14c10
};

class CComplexType@SchemaFactory : public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 2, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CCustomStatic : public CStatic, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a1ffd0
    virtual void vfunc_1(); // slot 1, 0x60a11d70
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a1ffd6
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a1ffdc
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a20366
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void Create(); // slot 81, 0x60a20162
    virtual void DrawItem(); // slot 82, 0x60a1ffe2
    virtual void MovePostion(); // slot 83, 0x60a1ffe8
};

class CFontElement@CVS_NET_UI@SchemaFactory : public CFontElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a016e0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CGameLobbyView : public CBaseLobbyView, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a15890
    virtual void OnDetached(); // slot 1, 0x60a15b20
    virtual void vfunc_2(); // slot 2, 0x60a15830
    virtual void Msg_GetWindow(); // slot 3, 0x60a0ab90
    virtual void Msg_UpdateUIFromXML(); // slot 4, 0x60a15ce0
    virtual void OnClickExitGameBtn(); // slot 5, 0x60a15c30
};

class CGameWnd : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a16060
    virtual void vfunc_1(); // slot 1, 0x60a16000
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a169b0
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a19010
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void DisplayChatMessage(); // slot 81, 0x60a157a0
    virtual void DisplayNoticeMessage(); // slot 82, 0x60a157b0
    virtual void DisplayStatusMessage(); // slot 83, 0x60a157c0
    virtual void CaptureGameScreen(); // slot 84, 0x60a18300
    virtual void DoExActive(); // slot 85, 0x60a16af0
    virtual void FlipScreen(); // slot 86, 0x60a157d0
    virtual void ExitGameRoom(); // slot 87, 0x60a18430
    virtual void AccuseUser(); // slot 88, 0x60a190e0
    virtual void purecall(); // slot 89, 0x60a206b8
    virtual void FlipScreen(); // slot 90, 0x60a157d0
    virtual void PlayEventSound(); // slot 91, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 92, 0x60a098a0
    virtual void purecall(); // slot 93, 0x60a206b8
    virtual void purecall(); // slot 94, 0x60a206b8
    virtual void purecall(); // slot 95, 0x60a206b8
    virtual void purecall(); // slot 96, 0x60a206b8
    virtual void purecall(); // slot 97, 0x60a206b8
    virtual void ShowInviteGameToChnlDlg(); // slot 98, 0x60a19330
    virtual void CreateCaptionButtons(); // slot 99, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 100, 0x60a098a0
    virtual void GetGameOptionFromRegistry(); // slot 101, 0x60a19210
    virtual void PlayEventSound(); // slot 102, 0x60a155a0
    virtual void IsActivate(); // slot 103, 0x60a157e0
    virtual void ProcessItemProvokeCommand(); // slot 104, 0x60a17af0
    virtual void HasRightOfBanish(); // slot 105, 0x60a193e0
    virtual void Evt_OnAddRoomMember(); // slot 106, 0x60a16ce0
    virtual void Evt_OnDeleteRoomMember(); // slot 107, 0x60a16e60
    virtual void Evt_OnRoomMemberList(); // slot 108, 0x60a170f0
    virtual void Evt_OnModifyRoomMemberInfo(); // slot 109, 0x60a171b0
    virtual void Evt_OnEnableHostBanish(); // slot 110, 0x60a172f0
    virtual void Evt_OnTimeHostBanish(); // slot 111, 0x60a17200
    virtual void Evt_OnGameStatusMessage(); // slot 112, 0x60a180c0
    virtual void Evt_OnChatString(); // slot 113, 0x60a17430
    virtual void Evt_OnReqBanishMember(); // slot 114, 0x60a17460
    virtual void Evt_OnClickBanishMember(); // slot 115, 0x60a175c0
    virtual void Evt_OnHostBanishCheck(); // slot 116, 0x60a18000
    virtual void Evt_OnConnectTypeError(); // slot 117, 0x60a18010
    virtual void Evt_OnItemReserveChance(); // slot 118, 0x60a17710
    virtual void Evt_OnStartNewGame(); // slot 119, 0x60a17bc0
    virtual void Evt_OnRoomEvent(); // slot 120, 0x60a178f0
    virtual void Evt_ChannelGaeaPrizeData(); // slot 121, 0x60a10fe0
    virtual void Evt_ChannelLobby_OnUpdateNotice(); // slot 122, 0x60a18180
    virtual void Evt_ChannelGaeaPrizeData(); // slot 123, 0x60a10fe0
    virtual void Evt_OnExitGameDuetoShutdown(); // slot 124, 0x60a182f0
    virtual void Evt_OnGetShutdownTime(); // slot 125, 0x60a18250
    virtual void Net_SocketClose(); // slot 126, 0x60a17e80
    virtual void Net_commandTimeBanish(); // slot 127, 0x60a17e70
};

class CGaugeCtrlElement@CVS_NET_UI@SchemaFactory : public CGaugeCtrlElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a0a510
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CGdiObject : public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a2017a
    virtual void vfunc_1(); // slot 1, 0x60a155e0
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
};

class CHanChatEditComboBox : public CCustomComboBox, public CComboBox, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a200f0
    virtual void vfunc_1(); // slot 1, 0x60a1a7a0
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a200f6
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a200fc
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2042c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void Create(); // slot 81, 0x60a20432
    virtual void DrawItem(); // slot 82, 0x60a20438
    virtual void MeasureItem(); // slot 83, 0x60a2043e
    virtual void CompareItem(); // slot 84, 0x60a20444
    virtual void DeleteItem(); // slot 85, 0x60a2044a
};

class CHanChatView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a19b80
    virtual void OnDetached(); // slot 1, 0x60a19ce0
    virtual void vfunc_2(); // slot 2, 0x60a19b10
};

class CHanChatViewWnd : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a1a590
    virtual void vfunc_1(); // slot 1, 0x60a1a440
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a1a880
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
};

class CHtmlCtrl : public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a20024
    virtual void vfunc_1(); // slot 1, 0x60a13440
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a2002a
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a1ff58
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20030
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
};

class CLineDrawer : public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60a1c440
    virtual void CreateControl(); // slot 1, 0x60a20000
    virtual void DestroyControl(); // slot 2, 0x60a1fff4
    virtual void IsCreated(); // slot 3, 0x60a1ff7c
    virtual void ShowControl(); // slot 4, 0x60a1ff82
    virtual void UpdateControl(); // slot 5, 0x60a20108
    virtual void UpdateControlForGame(); // slot 6, 0x60a1ffca
    virtual void GetCWndPtr(); // slot 7, 0x60a1ff46
};

class CLineElement@CVS_NET_UI@SchemaFactory : public CLineElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a09c40
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CListCtrlEx : public CListCtrl, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a1ff94
    virtual void vfunc_1(); // slot 1, 0x60a11cd0
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a1ff9a
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a20360
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void DrawItem(); // slot 81, 0x60a1ffa0
    virtual void OnSortItem(); // slot 82, 0x60a1ffa6
    virtual void DoListCtrlSetting(); // slot 83, 0x60a1ffac
    virtual void GetColumnFormatString(); // slot 84, 0x60a1ffb2
    virtual void MeasureItem(); // slot 85, 0x60a1ffb8
};

class CListElement@CVS_NET_UI@SchemaFactory : public CListElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a07210
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CMainFrameView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a1ac60
    virtual void OnDetached(); // slot 1, 0x60a1b060
    virtual void OnAltF4KeyDown(); // slot 2, 0x60a1b340
    virtual void OnClickExitButton(); // slot 3, 0x60a1b370
    virtual void OnToggleScreenButton(); // slot 4, 0x60a1b430
    virtual void OnClickMinimizeButton(); // slot 5, 0x60a1b670
    virtual void OnClickAccuseButton(); // slot 6, 0x60a1b6a0
    virtual void OnClickInviteButton(); // slot 7, 0x60a1ba90
    virtual void OnClickOptionButton(); // slot 8, 0x60a1bb60
    virtual void vfunc_9(); // slot 9, 0x60a1abe0
};

class CMainFrameWnd : public CFrameWnd, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a1bf40
    virtual void vfunc_1(); // slot 1, 0x60a1bed0
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a1cd40
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a1bf50
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a1cd10
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a204d4
    virtual void SetMenu(); // slot 30, 0x60a204da
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a204e0
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void BeginModalState(); // slot 66, 0x60a204e6
    virtual void EndModalState(); // slot 67, 0x60a204ec
    virtual void PreTranslateMessage(); // slot 68, 0x60a1d210
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a204f2
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a204f8
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void Create(); // slot 81, 0x60a204fe
    virtual void LoadFrame(); // slot 82, 0x60a20504
    virtual void GetActiveDocument(); // slot 83, 0x60a2050a
    virtual void GetActiveFrame(); // slot 84, 0x60a20510
    virtual void GetMessageString(); // slot 85, 0x60a20516
    virtual void RecalcLayout(); // slot 86, 0x60a2051c
    virtual void ActivateFrame(); // slot 87, 0x60a20522
    virtual void SetMenuBarVisibility(); // slot 88, 0x60a20528
    virtual void GetMenuBarVisibility(); // slot 89, 0x60a2052e
    virtual void SetMenuBarState(); // slot 90, 0x60a20534
    virtual void GetMenuBarState(); // slot 91, 0x60a2053a
    virtual void OnSetPreviewMode(); // slot 92, 0x60a20540
    virtual void GetMessageBar(); // slot 93, 0x60a20546
    virtual void NegotiateBorderSpace(); // slot 94, 0x60a2054c
    virtual void OnCreateClient(); // slot 95, 0x60a20552
    virtual void OnUpdateFrameTitle(); // slot 96, 0x60a20558
    virtual void OnUpdateFrameMenu(); // slot 97, 0x60a2055e
    virtual void GetDefaultAccelerator(); // slot 98, 0x60a20564
    virtual void DelayUpdateFrameMenu(); // slot 99, 0x60a2056a
    virtual void ExitHelpMode(); // slot 100, 0x60a20570
    virtual void OnShowMenuBar(); // slot 101, 0x60a20576
    virtual void OnHideMenuBar(); // slot 102, 0x60a2057c
    virtual void CreateCaptionButtons(); // slot 103, 0x60a098a0
    virtual void DisplayAdWnd(); // slot 104, 0x60a1d7c0
    virtual void ShowGameRate(); // slot 105, 0x60a1d760
    virtual void GetTicket(); // slot 106, 0x60a1d940
    virtual void RefreshCookie(); // slot 107, 0x60a1d980
    virtual void OnTimer(); // slot 108, 0x60a1dff0
};

class CMemberListCtrl : public CListCtrlEx, public CListCtrl, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a20036
    virtual void vfunc_1(); // slot 1, 0x60a11db0
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a2003c
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a20360
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void DrawItem(); // slot 81, 0x60a20042
    virtual void OnSortItem(); // slot 82, 0x60a1ffa6
    virtual void DoListCtrlSetting(); // slot 83, 0x60a20048
    virtual void GetColumnFormatString(); // slot 84, 0x60a1ffb2
    virtual void MeasureItem(); // slot 85, 0x60a1ffb8
};

class CMemberListTabCtrl : public CCustomTabCtrl, public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60a15560
    virtual void CreateControl(); // slot 1, 0x60a20000
    virtual void DestroyControl(); // slot 2, 0x60a1fff4
    virtual void IsCreated(); // slot 3, 0x60a20006
    virtual void ShowControl(); // slot 4, 0x60a2000c
    virtual void UpdateControl(); // slot 5, 0x60a20012
    virtual void UpdateControlForGame(); // slot 6, 0x60a1ffca
    virtual void GetCWndPtr(); // slot 7, 0x60a20018
};

class CMiniChannelListView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a1e4c0
    virtual void OnDetached(); // slot 1, 0x60a1e7c0
    virtual void OnClickRefreshBtn(); // slot 2, 0x60a1e880
    virtual void OnClickJoinBtn(); // slot 3, 0x60a1e8b0
    virtual void OnClickExitBtn(); // slot 4, 0x60a1e8e0
    virtual void OnClickAutoJoinBtn(); // slot 5, 0x60a1e920
    virtual void OnClickGrpListBtn(); // slot 6, 0x60a1e950
    virtual void OnClickChannelGrpLst(); // slot 7, 0x60a1ec60
    virtual void OnClickChannelLst(); // slot 8, 0x60a1ec90
    virtual void OnCheckEnterableState(); // slot 9, 0x60a1edf0
    virtual void vfunc_10(); // slot 10, 0x60a1e450
    virtual void SetMiniChannelListWnd(); // slot 11, 0x60a1e850
};

class CMiniChannelListWnd : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a1f190
    virtual void vfunc_1(); // slot 1, 0x60a1f130
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a1f5a0
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
};

class CMsgBoxElement@CVS_NET_UI@SchemaFactory : public CMsgBoxElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a09660
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void vfunc_5(); // slot 5, 0x60a09230
};

class CMultiBmpButton : public CButton, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a20372
    virtual void vfunc_1(); // slot 1, 0x60a11dd0
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a20054
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2005a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2032a
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void Create(); // slot 81, 0x60a20354
    virtual void DrawItem(); // slot 82, 0x60a20060
};

class CMyInfoCtrl : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a20072
    virtual void vfunc_1(); // slot 1, 0x60a11d90
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a20078
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
};

class CNoticeWnd : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a20378
    virtual void vfunc_1(); // slot 1, 0x60a11d10
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a20084
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void ManualUpdateControl(); // slot 81, 0x60a2008a
};

class CNoticeWndElement@CVS_NET_UI@SchemaFactory : public CNoticeWndElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a08100
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CRectDrawer : public CControlBase {
public:
    virtual void vfunc_0(); // slot 0, 0x60a11cf0
    virtual void CreateControl(); // slot 1, 0x60a20000
    virtual void DestroyControl(); // slot 2, 0x60a1fff4
    virtual void IsCreated(); // slot 3, 0x60a1ff7c
    virtual void ShowControl(); // slot 4, 0x60a1ff82
    virtual void UpdateControl(); // slot 5, 0x60a2001e
    virtual void UpdateControlForGame(); // slot 6, 0x60a1ffca
    virtual void GetCWndPtr(); // slot 7, 0x60a1ff46
};

class CRectElement@CVS_NET_UI@SchemaFactory : public CRectElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a09f20
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CRoomListCtrl_T1 : public CScrollView, public CView, public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a20096
    virtual void vfunc_1(); // slot 1, 0x60a11cb0
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a2037e
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a2009c
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20384
    virtual void CalcWindowRect(); // slot 28, 0x60a2038a
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20390
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a200a2
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a200a8
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
    virtual void IsSelected(); // slot 81, 0x60a20396
    virtual void OnScroll(); // slot 82, 0x60a2039c
    virtual void OnScrollBy(); // slot 83, 0x60a203a2
    virtual void OnDragEnter(); // slot 84, 0x60a203a8
    virtual void OnDragOver(); // slot 85, 0x60a203ae
    virtual void OnDragLeave(); // slot 86, 0x60a203b4
    virtual void OnDrop(); // slot 87, 0x60a203ba
    virtual void OnDropEx(); // slot 88, 0x60a203c0
    virtual void OnDragScroll(); // slot 89, 0x60a203c6
    virtual void OnPrepareDC(); // slot 90, 0x60a203cc
    virtual void OnInitialUpdate(); // slot 91, 0x60a203d2
    virtual void OnActivateView(); // slot 92, 0x60a203d8
    virtual void OnActivateFrame(); // slot 93, 0x60a203de
    virtual void OnUpdate(); // slot 94, 0x60a203e4
    virtual void OnDraw(); // slot 95, 0x60a200ae
    virtual void OnPreparePrinting(); // slot 96, 0x60a203ea
    virtual void OnBeginPrinting(); // slot 97, 0x60a203f0
    virtual void OnPrint(); // slot 98, 0x60a203f6
    virtual void OnEndPrinting(); // slot 99, 0x60a203fc
    virtual void OnEndPrintPreview(); // slot 100, 0x60a20402
    virtual void GetWheelScrollDistance(); // slot 101, 0x60a20408
    virtual void Initialize(); // slot 102, 0x60a200b4
    virtual void AddRoom(); // slot 103, 0x60a200ba
    virtual void CalculateRoomRect(); // slot 104, 0x60a200c0
};

class CRoomListElement@CVS_NET_UI@SchemaFactory : public CRoomListElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a05040
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CScrollSupportCtrl : public CWnd, public CCmdTarget, public CObject, public CControlBase {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a200d8
    virtual void vfunc_1(); // slot 1, 0x60a11d30
    virtual void PlayEventSound(); // slot 2, 0x60a155a0
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void PlayEventSound(); // slot 4, 0x60a155a0
    virtual void OnCmdMsg(); // slot 5, 0x60a201aa
    virtual void OnFinalRelease(); // slot 6, 0x60a201b0
    virtual void IsInvokeAllowed(); // slot 7, 0x60a201b6
    virtual void GetDispatchIID(); // slot 8, 0x60a201bc
    virtual void GetTypeInfoCount(); // slot 9, 0x60a201c2
    virtual void GetTypeLibCache(); // slot 10, 0x60a201c8
    virtual void GetTypeLib(); // slot 11, 0x60a201ce
    virtual void GetMessageMap(); // slot 12, 0x60a200de
    virtual void GetCommandMap(); // slot 13, 0x60a201d4
    virtual void GetDispatchMap(); // slot 14, 0x60a201da
    virtual void GetConnectionMap(); // slot 15, 0x60a201e0
    virtual void GetInterfaceMap(); // slot 16, 0x60a201e6
    virtual void GetEventSinkMap(); // slot 17, 0x60a201ec
    virtual void OnCreateAggregates(); // slot 18, 0x60a201f2
    virtual void GetInterfaceHook(); // slot 19, 0x60a201f8
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a201fe
    virtual void GetConnectionHook(); // slot 21, 0x60a20204
    virtual void PreSubclassWindow(); // slot 22, 0x60a2020a
    virtual void Create(); // slot 23, 0x60a20210
    virtual void CreateEx(); // slot 24, 0x60a20216
    virtual void CreateEx(); // slot 25, 0x60a2021c
    virtual void DestroyWindow(); // slot 26, 0x60a20222
    virtual void PreCreateWindow(); // slot 27, 0x60a20228
    virtual void CalcWindowRect(); // slot 28, 0x60a2022e
    virtual void GetMenu(); // slot 29, 0x60a20234
    virtual void SetMenu(); // slot 30, 0x60a2023a
    virtual void OnToolHitTest(); // slot 31, 0x60a20240
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a20246
    virtual void WinHelpA(); // slot 33, 0x60a2024c
    virtual void HtmlHelpA(); // slot 34, 0x60a20252
    virtual void WinHelpInternal(); // slot 35, 0x60a20258
    virtual void ContinueModal(); // slot 36, 0x60a2025e
    virtual void EndModalLoop(); // slot 37, 0x60a20264
    virtual void EnsureStdObj(); // slot 38, 0x60a2026a
    virtual void get_accParent(); // slot 39, 0x60a20270
    virtual void get_accChildCount(); // slot 40, 0x60a20276
    virtual void get_accChild(); // slot 41, 0x60a2027c
    virtual void get_accName(); // slot 42, 0x60a20282
    virtual void get_accValue(); // slot 43, 0x60a20288
    virtual void get_accDescription(); // slot 44, 0x60a2028e
    virtual void get_accRole(); // slot 45, 0x60a20294
    virtual void get_accState(); // slot 46, 0x60a2029a
    virtual void get_accHelp(); // slot 47, 0x60a202a0
    virtual void get_accHelpTopic(); // slot 48, 0x60a202a6
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a202ac
    virtual void get_accFocus(); // slot 50, 0x60a202b2
    virtual void get_accSelection(); // slot 51, 0x60a202b8
    virtual void get_accDefaultAction(); // slot 52, 0x60a202be
    virtual void accSelect(); // slot 53, 0x60a202c4
    virtual void accLocation(); // slot 54, 0x60a202ca
    virtual void accNavigate(); // slot 55, 0x60a202d0
    virtual void accHitTest(); // slot 56, 0x60a202d6
    virtual void accDoDefaultAction(); // slot 57, 0x60a202dc
    virtual void put_accName(); // slot 58, 0x60a202e2
    virtual void put_accValue(); // slot 59, 0x60a202e8
    virtual void SetProxy(); // slot 60, 0x60a202ee
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a202f4
    virtual void OnCommand(); // slot 62, 0x60a202fa
    virtual void OnNotify(); // slot 63, 0x60a20300
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a20306
    virtual void PlayEventSound(); // slot 65, 0x60a155a0
    virtual void vfunc_66(); // slot 66, 0x60a15590
    virtual void vfunc_67(); // slot 67, 0x60a15580
    virtual void PreTranslateMessage(); // slot 68, 0x60a2030c
    virtual void OnAmbientProperty(); // slot 69, 0x60a20312
    virtual void WindowProc(); // slot 70, 0x60a2035a
    virtual void OnWndMsg(); // slot 71, 0x60a20318
    virtual void DefWindowProcA(); // slot 72, 0x60a2031e
    virtual void PostNcDestroy(); // slot 73, 0x60a20324
    virtual void OnChildNotify(); // slot 74, 0x60a2036c
    virtual void CheckAutoCenter(); // slot 75, 0x60a20330
    virtual void IsFrameWnd(); // slot 76, 0x60a20336
    virtual void CreateControlContainer(); // slot 77, 0x60a2033c
    virtual void CreateControlSite(); // slot 78, 0x60a20342
    virtual void SetOccDialogInfo(); // slot 79, 0x60a20348
    virtual void GetOccDialogInfo(); // slot 80, 0x60a2034e
};

class CStaticElement@CVS_NET_UI@SchemaFactory : public CStaticElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a08f70
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CWebElement@CVS_NET_UI@SchemaFactory : public CWebElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a0a850
    virtual void CreateCaptionButtons(); // slot 3, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a098a0
};

class CWindowElement@CVS_NET_UI@SchemaFactory : public CWindowElement, public CComplexType {
public:
    virtual void vfunc_0(); // slot 0, 0x60a09810
    virtual void CreateCaptionButtons(); // slot 1, 0x60a098a0
    virtual void vfunc_2(); // slot 2, 0x60a02440
    virtual void vfunc_3(); // slot 3, 0x60a028e0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a098a0
    virtual void vfunc_5(); // slot 5, 0x60a09230
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0d380
    virtual void what(); // slot 1, 0x60a205f0
};

class invalid_argument@std : public invalid_argument, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0cc70
    virtual void vfunc_1(); // slot 1, 0x60a0ccc0
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0cc70
    virtual void vfunc_1(); // slot 1, 0x60a0ccc0
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0cc70
    virtual void vfunc_1(); // slot 1, 0x60a0ccc0
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0cc70
    virtual void vfunc_1(); // slot 1, 0x60a0ccc0
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x60a205a4
};

}  // namespace HgView3
