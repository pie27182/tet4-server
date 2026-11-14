// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HGF5V {

class ?$CMFunctor;
class ?$CMapWrapper;
class ?$tMapDeclare;
class CCmdTarget;
class CConfigLoader;
class CFrameWnd;
class CObject;
class CWinApp;
class CWinThread;
class CWnd;
class IComponent;
class IFunctor;
class bad_alloc;
class exception;
class invalid_argument;
class length_error;
class logic_error;
class out_of_range;

class ?$CMFunctor@VCF5ChannelLobbyView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a07910
    virtual void vfunc_1(); // slot 1, 0x60a063e0
    virtual void vfunc_2(); // slot 2, 0x60a07920
};

class ?$CMFunctor@VCF5ChatView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a07910
    virtual void vfunc_1(); // slot 1, 0x60a07940
    virtual void vfunc_2(); // slot 2, 0x60a07920
};

class ?$CMFunctor@VCF5DialogCmp@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a07910
    virtual void vfunc_1(); // slot 1, 0x60a106d0
    virtual void vfunc_2(); // slot 2, 0x60a07920
};

class ?$CMFunctor@VCF5GameView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a07910
    virtual void vfunc_1(); // slot 1, 0x60a086c0
    virtual void vfunc_2(); // slot 2, 0x60a07920
};

class ?$CMFunctor@VCF5GameWnd@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a07910
    virtual void vfunc_1(); // slot 1, 0x60a0abd0
    virtual void vfunc_2(); // slot 2, 0x60a07920
};

class ?$CMFunctor@VCF5MainFrmView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a07910
    virtual void vfunc_1(); // slot 1, 0x60a0c480
    virtual void vfunc_2(); // slot 2, 0x60a07920
};

class ?$CMFunctor@VCF5MiniChannelListView@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60a07910
    virtual void vfunc_1(); // slot 1, 0x60a0f5a0
    virtual void vfunc_2(); // slot 2, 0x60a07920
};

class ?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@ : public ?$CMapWrapper, public ?$tMapDeclare {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0ee00
};

class CAdFileDownload {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0cb30
};

class CBaseLobbyModel : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a116a2
    virtual void OnDetached(); // slot 1, 0x60a116a8
    virtual void vfunc_2(); // slot 2, 0x60a02960
    virtual void Msg_ActivateOn(); // slot 3, 0x60a116ae
    virtual void Msg_ActivateOff(); // slot 4, 0x60a116b4
};

class CCfgSetting {
public:
    virtual void vfunc_0(); // slot 0, 0x60a02340
    virtual void CheckFCName(); // slot 1, 0x60a11600
    virtual void SetAdvertiseCfg(); // slot 2, 0x60a11606
    virtual void vfunc_3(); // slot 3, 0x60a11720
};

class CChannelListLobbyModel : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a1160c
    virtual void OnDetached(); // slot 1, 0x60a11612
    virtual void vfunc_2(); // slot 2, 0x60a02900
    virtual void _SelectChannel_Tetris(); // slot 3, 0x60a11618
    virtual void ConnectCdsServer(); // slot 4, 0x60a1161e
};

class CChannelLobbyModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a11624
    virtual void OnDetached(); // slot 1, 0x60a1162a
    virtual void vfunc_2(); // slot 2, 0x60a02920
    virtual void Msg_ActivateOn(); // slot 3, 0x60a11630
    virtual void Msg_ActivateOff(); // slot 4, 0x60a11636
    virtual void Msg_HannotiCommonCode(); // slot 5, 0x60a1163c
    virtual void Msg_StartNickNameProcess(); // slot 6, 0x60a11642
    virtual void Msg_EndNickNameProcess(); // slot 7, 0x60a11648
    virtual void Msg_GetMakeUserId(); // slot 8, 0x60a1164e
    virtual void Msg_GetCheckUserId(); // slot 9, 0x60a11654
    virtual void SetRoomInfo(); // slot 10, 0x60a1165a
    virtual void Msg_SetCreateRoomOption(); // slot 11, 0x60a11660
    virtual void Msg_SetCreateRoomReturn(); // slot 12, 0x60a11666
    virtual void Msg_SetRoomPassWordReturn(); // slot 13, 0x60a1166c
};

class CF5App : public CWinApp, public CWinThread, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a1172c
    virtual void vfunc_1(); // slot 1, 0x60a03830
    virtual void AfterShowIt(); // slot 2, 0x60a0fa60
    virtual void CreateCaptionButtons(); // slot 3, 0x60a017d0
    virtual void AfterShowIt(); // slot 4, 0x60a0fa60
    virtual void OnCmdMsg(); // slot 5, 0x60a11732
    virtual void OnFinalRelease(); // slot 6, 0x60a11738
    virtual void IsInvokeAllowed(); // slot 7, 0x60a1173e
    virtual void GetDispatchIID(); // slot 8, 0x60a11744
    virtual void GetTypeInfoCount(); // slot 9, 0x60a1174a
    virtual void GetTypeLibCache(); // slot 10, 0x60a11750
    virtual void GetTypeLib(); // slot 11, 0x60a11756
    virtual void GetMessageMap(); // slot 12, 0x60a038f0
    virtual void GetCommandMap(); // slot 13, 0x60a1175c
    virtual void GetDispatchMap(); // slot 14, 0x60a11762
    virtual void GetConnectionMap(); // slot 15, 0x60a11768
    virtual void GetInterfaceMap(); // slot 16, 0x60a1176e
    virtual void GetEventSinkMap(); // slot 17, 0x60a11774
    virtual void OnCreateAggregates(); // slot 18, 0x60a1177a
    virtual void GetInterfaceHook(); // slot 19, 0x60a11780
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a11786
    virtual void GetConnectionHook(); // slot 21, 0x60a1178c
    virtual void InitInstance(); // slot 22, 0x60a039f0
    virtual void DialogRun(); // slot 23, 0x60a034e0
    virtual void PreTranslateMessage(); // slot 24, 0x60a11792
    virtual void PumpMessage(); // slot 25, 0x60a11798
    virtual void OnIdle(); // slot 26, 0x60a1179e
    virtual void IsIdleMessage(); // slot 27, 0x60a117a4
    virtual void ExitInstance(); // slot 28, 0x60a02e20
    virtual void ProcessWndProcException(); // slot 29, 0x60a117aa
    virtual void ProcessMessageFilter(); // slot 30, 0x60a117b0
    virtual void GetMainWnd(); // slot 31, 0x60a117b6
    virtual void Delete(); // slot 32, 0x60a117bc
    virtual void InitLibId(); // slot 33, 0x60a117c2
    virtual void Register(); // slot 34, 0x60a117c8
    virtual void Unregister(); // slot 35, 0x60a117ce
    virtual void OpenDocumentFile(); // slot 36, 0x60a117d4
    virtual void AddToRecentFileList(); // slot 37, 0x60a117da
    virtual void InitApplication(); // slot 38, 0x60a117e0
    virtual void SaveAllModified(); // slot 39, 0x60a117e6
    virtual void DoMessageBox(); // slot 40, 0x60a117ec
    virtual void DoWaitCursor(); // slot 41, 0x60a117f2
    virtual void OnDDECommand(); // slot 42, 0x60a117f8
    virtual void WinHelpA(); // slot 43, 0x60a117fe
    virtual void HtmlHelpA(); // slot 44, 0x60a11804
    virtual void WinHelpInternal(); // slot 45, 0x60a1180a
    virtual void LoadAppLangResourceDLL(); // slot 46, 0x60a11810
    virtual void LoadSysPolicies(); // slot 47, 0x60a11816
    virtual void CreateCaptionButtons(); // slot 48, 0x60a017d0
    virtual void LoadDefaultObjects(); // slot 49, 0x60a02400
    virtual void LoadViewObjects(); // slot 50, 0x60a02a80
    virtual void LoadDialogObjects(); // slot 51, 0x60a02e10
    virtual void RegWork_LoadFullScreenSetting(); // slot 52, 0x60a02e80
    virtual void RegWork_RegisterNotifyWnd(); // slot 53, 0x60a02f70
    virtual void RegWork_EraseNotifyWnd(); // slot 54, 0x60a03030
    virtual void CheckTestMode(); // slot 55, 0x60a030d0
    virtual void GetGameChatContent(); // slot 56, 0x60a02e70
    virtual void GetGameChatContent(); // slot 57, 0x60a02e70
    virtual void GetGameChatContent(); // slot 58, 0x60a02e70
    virtual void DialogRun(); // slot 59, 0x60a034e0
    virtual void DeleteEngineObject(); // slot 60, 0x60a034f0
    virtual void CheckBipLog(); // slot 61, 0x60a03500
};

class CF5ChannelLobbyView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a06840
    virtual void OnDetached(); // slot 1, 0x60a043e0
    virtual void vfunc_2(); // slot 2, 0x60a011a0
    virtual void OnDblClickRoomList(); // slot 3, 0x60a04bc0
    virtual void OnClickChangeChannelBtn(); // slot 4, 0x60a04bf0
    virtual void OnClickCreateRoomBtn(); // slot 5, 0x60a04c20
    virtual void OnClickJoinRoomBtn(); // slot 6, 0x60a04c50
    virtual void OnClickViewRoomBtn(); // slot 7, 0x60a04cd0
    virtual void OnClickRoomAvatar(); // slot 8, 0x60a04d00
    virtual void OnDblClickMemberList(); // slot 9, 0x60a04d30
    virtual void OnClickDirectStartBtn(); // slot 10, 0x60a04d60
    virtual void OnClickRecommendedGameBtn(); // slot 11, 0x60a04e10
    virtual void OnClickExitBtn(); // slot 12, 0x60a04e40
    virtual void OnClickAutoCreateRoomBtn(); // slot 13, 0x60a04f00
    virtual void OnGetItemState(); // slot 14, 0x60a04f30
    virtual void OnCloseItemWebDlg(); // slot 15, 0x60a04f60
    virtual void OnClickShowItemWebBtn(); // slot 16, 0x60a05010
    virtual void OnClickMyHomepageBtn(); // slot 17, 0x60a05040
    virtual void OnClickGuildWebBtn(); // slot 18, 0x60a05070
    virtual void OnClickThermometer(); // slot 19, 0x60a050a0
    virtual void OnClickDonationWebBtn(); // slot 20, 0x60a050d0
    virtual void Evt_ChannelGaeaPrizeData(); // slot 21, 0x60a08fe0
    virtual void OnClickShowEmptyRoomBtn(); // slot 22, 0x60a05100
    virtual void OnClickShowRoomNumOrderBtn(); // slot 23, 0x60a05130
    virtual void OnClickSearchRoomBtn(); // slot 24, 0x60a05160
    virtual void OnClickSPCRoom(); // slot 25, 0x60a051b0
    virtual void Net_Banish(); // slot 26, 0x60a05310
    virtual void Msg_GetWindow(); // slot 27, 0x60a04400
    virtual void Msg_CreateWindow(); // slot 28, 0x60a04420
    virtual void Msg_DestroyWindow(); // slot 29, 0x60a04600
    virtual void Evt_ChannelLobby_OnActivateOn(); // slot 30, 0x60a05a50
    virtual void Evt_ChannelLobby_OnActivateOff(); // slot 31, 0x60a04680
    virtual void Evt_ChannelLobby_OnUpdateRoomList(); // slot 32, 0x60a046a0
    virtual void Evt_ChannelLobby_OnUpdateMemberList(); // slot 33, 0x60a046e0
    virtual void Evt_ChannelLobby_OnUpdateMsnBuddyList(); // slot 34, 0x60a04720
    virtual void Evt_ChannelLobby_OnUpdateNotice(); // slot 35, 0x60a04740
    virtual void Evt_ChannelLobby_OnExitReason_MINUSMONEY(); // slot 36, 0x60a05af0
    virtual void Evt_ChannelLobby_OnExitReason_BANISHED(); // slot 37, 0x60a05bd0
    virtual void Evt_ChannelGaeaPrizeData(); // slot 38, 0x60a08fe0
    virtual void Evt_ChannelLobby_OnExitReason_NOGUAGE(); // slot 39, 0x60a04760
    virtual void Evt_ChannelGaeaPrizeData(); // slot 40, 0x60a08fe0
    virtual void Evt_ChannelLobby_OnExitReason_CANTSTAYCHANNEL(); // slot 41, 0x60a04790
    virtual void Evt_ChannelLobby_OnExitReason_BADUSER(); // slot 42, 0x60a05c90
    virtual void Evt_ChannelLobby_OnExitReason_ConnectTypeError(); // slot 43, 0x60a047c0
    virtual void Evt_ChannelLobby_OnExitReason_ReserveBanish(); // slot 44, 0x60a04880
    virtual void Evt_ChannelLobby_OnAvatarChange(); // slot 45, 0x60a049b0
    virtual void Evt_ChannelLobby_OnUpdateMyInfo(); // slot 46, 0x60a049f0
    virtual void Evt_ChannelLobby_OnChannelSocketActive(); // slot 47, 0x60a04a00
    virtual void Evt_ChannelLobby_OnChannelJoinComplete(); // slot 48, 0x60a04a40
    virtual void Evt_ChannelLobby_FailAutoCreateRoom(); // slot 49, 0x60a05e00
    virtual void Evt_LobbyState_OnStateChanged(); // slot 50, 0x60a04b00
    virtual void Evt_ChannelLobby_OnUserExitGameRoom(); // slot 51, 0x60a06080
    virtual void Evt_ChannelLobby_OnShowWindow(); // slot 52, 0x60a05190
    virtual void Evt_ChannelLobby_OnSetGameRate(); // slot 53, 0x60a05490
    virtual void Evt_ChannelLobby_OnGetShutdownTime(); // slot 54, 0x60a05510
    virtual void Evt_ChannelLobby_OnShutdownExit(); // slot 55, 0x60a05580
    virtual void Evt_ChannelLobby_OnShutdownNotice(); // slot 56, 0x60a055d0
    virtual void Evt_ChannelLobby_OnExitReason_SHUTDOWN(); // slot 57, 0x60a05600
    virtual void Evt_ChannelLobby_OnSetSPCRoomString(); // slot 58, 0x60a051e0
    virtual void Evt_ChannelLobby_RefreshTicket(); // slot 59, 0x60a05ec0
    virtual void Evt_ChannelGaeaPromotionData(); // slot 60, 0x60a056d0
    virtual void Evt_ChannelGaeaPrizeData(); // slot 61, 0x60a08fe0
};

class CF5ChannelLobbyWnd {
public:
    virtual void vfunc_0(); // slot 0, 0x60a01590
    virtual void AfterShowIt(); // slot 1, 0x60a0fa60
    virtual void AfterShowIt(); // slot 2, 0x60a0fa60
    virtual void AfterShowIt(); // slot 3, 0x60a0fa60
    virtual void AfterShowIt(); // slot 4, 0x60a0fa60
    virtual void AfterShowIt(); // slot 5, 0x60a0fa60
    virtual void AfterShowIt(); // slot 6, 0x60a0fa60
    virtual void AfterShowIt(); // slot 7, 0x60a0fa60
    virtual void AfterShowIt(); // slot 8, 0x60a0fa60
    virtual void CreateCaptionButtons(); // slot 9, 0x60a017d0
    virtual void AfterShowIt(); // slot 10, 0x60a0fa60
    virtual void OnLobbyStateChanged(); // slot 11, 0x60a074b0
};

class CF5ChatView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a07960
    virtual void OnDetached(); // slot 1, 0x60a074c0
    virtual void vfunc_2(); // slot 2, 0x60a01300
    virtual void Msg_GetWindow(); // slot 3, 0x60a07500
    virtual void Msg_CreateWindow(); // slot 4, 0x60a07520
    virtual void Msg_DestroyWindow(); // slot 5, 0x60a07540
    virtual void Evt_HanChat_OnUpdateHanChat(); // slot 6, 0x60a07560
    virtual void Evt_HanChat_OnUpdateHanChatSetting(); // slot 7, 0x60a077e0
    virtual void Evt_HanChat_OnClearHanChatBuffer(); // slot 8, 0x60a07830
    virtual void Evt_HanChat_OnChatNoticeMessage(); // slot 9, 0x60a07840
    virtual void HanChatEditComboBox_OnGetChatString(); // slot 10, 0x60a07780
    virtual void SimpleColorPicker_OnColorChange(); // slot 11, 0x60a078d0
};

class CF5ChatWnd {
public:
    virtual void vfunc_0(); // slot 0, 0x60a01760
    virtual void AfterShowIt(); // slot 1, 0x60a0fa60
    virtual void AfterShowIt(); // slot 2, 0x60a0fa60
    virtual void OnAppendText(); // slot 3, 0x60a07c20
    virtual void AfterShowIt(); // slot 4, 0x60a0fa60
    virtual void AfterShowIt(); // slot 5, 0x60a0fa60
    virtual void CreateCaptionButtons(); // slot 6, 0x60a017d0
};

class CF5ConfigLoader : public CConfigLoader {
public:
    virtual void vfunc_0(); // slot 0, 0x60a01840
};

class CF5DialogCmp : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a10bb0
    virtual void OnDetached(); // slot 1, 0x60a0fd60
    virtual void ShowDialog(); // slot 2, 0x60a10950
    virtual void CloseOPenDialog(); // slot 3, 0x60a106f0
    virtual void Msg_ShowCreateRoomDialog(); // slot 4, 0x60a103f0
    virtual void Msg_ShowRoomPasswordDialog(); // slot 5, 0x60a0fd70
    virtual void Msg_ShowInviteWaitingDialog(); // slot 6, 0x60a0fe10
    virtual void Msg_ShowInviteResponseDialog(); // slot 7, 0x60a0ff50
    virtual void Msg_ShowItemWebDialog(); // slot 8, 0x60a0fd90
    virtual void Msg_ShowAccuseUserDialog(); // slot 9, 0x60a0fdb0
    virtual void Msg_ShowAccuseConfirmDialog(); // slot 10, 0x60a0fdd0
    virtual void Msg_ShowMemberInfoDialog(); // slot 11, 0x60a0fdf0
    virtual void Msg_ShowSplashWnd(); // slot 12, 0x60a10060
    virtual void Msg_ShowInviteChnlToWebDialog(); // slot 13, 0x60a0fe30
    virtual void Msg_ShowInviteGameToChnlDialog(); // slot 14, 0x60a0fe50
    virtual void Msg_ShowSettingDialog(); // slot 15, 0x60a0ffe0
    virtual void Msg_ShowEndingPopupDialog(); // slot 16, 0x60a0fe70
    virtual void Msg_ShowMsgBox(); // slot 17, 0x60a0fe90
    virtual void Evt_ChannelGaeaPrizeData(); // slot 18, 0x60a08fe0
    virtual void Msg_ShowDialog(); // slot 19, 0x60a0ff10
    virtual void Msg_IsWindowVisible(); // slot 20, 0x60a10830
    virtual void Msg_ClearDialogList(); // slot 21, 0x60a100b0
    virtual void Msg_IsSplashOn(); // slot 22, 0x60a108d0
    virtual void Msg_SplashWndCancel(); // slot 23, 0x60a10180
    virtual void Msg_CreateSplashWnd(); // slot 24, 0x60a10030
    virtual void Msg_ShowShutdownNoticeDialog(); // slot 25, 0x60a0fed0
    virtual void Msg_ShowShutdownExitDialog(); // slot 26, 0x60a0fef0
    virtual void Msg_ShowThreadLoadingWnd(); // slot 27, 0x60a0feb0
    virtual void Evt_ChannelGaeaPrizeData(); // slot 28, 0x60a08fe0
    virtual void Msg_CheckRunningModalDialog(); // slot 29, 0x60a10790
};

class CF5DialogList : public ?$CMapWrapper, public ?$tMapDeclare {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0c990
};

class CF5DialogRoot {
public:
    virtual void vfunc_0(); // slot 0, 0x60a0c930
    virtual void RunModalLoop(); // slot 1, 0x60a114d0
    virtual void GetGameChatContent(); // slot 2, 0x60a02e70
    virtual void DoModal(); // slot 3, 0x60a11480
    virtual void EndDialog(); // slot 4, 0x60a11420
    virtual void Evt_ChannelGaeaPrizeData(); // slot 5, 0x60a08fe0
    virtual void AfterShowIt(); // slot 6, 0x60a0fa60
    virtual void AfterShowIt(); // slot 7, 0x60a0fa60
    virtual void CreateCaptionButtons(); // slot 8, 0x60a017d0
    virtual void AfterShowIt(); // slot 9, 0x60a0fa60
    virtual void CreateCaptionButtons(); // slot 10, 0x60a017d0
    virtual void CreateCaptionButtons(); // slot 11, 0x60a017d0
    virtual void CreateCaptionButtons(); // slot 12, 0x60a017d0
    virtual void OnOK(); // slot 13, 0x60a11430
    virtual void OnCancel(); // slot 14, 0x60a11450
    virtual void AfterShowIt(); // slot 15, 0x60a0fa60
    virtual void GetSplashCancelFnc(); // slot 16, 0x60a0c8a0
};

class CF5GameView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a086e0
    virtual void OnDetached(); // slot 1, 0x60a08480
    virtual void vfunc_2(); // slot 2, 0x60a01240
    virtual void Msg_RegisterGameWnd(); // slot 3, 0x60a08990
    virtual void Msg_GetWindow(); // slot 4, 0x60a04400
    virtual void Evt_GameView_OnAvatarChange(); // slot 5, 0x60a084a0
    virtual void Evt_GameView_OnActivateOn(); // slot 6, 0x60a08500
    virtual void Evt_ChannelGaeaPrizeData(); // slot 7, 0x60a08fe0
    virtual void Evt_GameView_OnActivateOnGameWnd(); // slot 8, 0x60a08570
    virtual void Evt_GameView_OnActivateOffGameWnd(); // slot 9, 0x60a08590
    virtual void Evt_GameView_OnForceExitRoom(); // slot 10, 0x60a085b0
    virtual void Evt_GameView_OnRecvProvokeItem(); // slot 11, 0x60a085d0
    virtual void OnClickExitGameBtn(); // slot 12, 0x60a08540
};

class CF5GameWnd {
public:
    virtual void vfunc_0(); // slot 0, 0x60a01630
    virtual void DisplayChatMessage(); // slot 1, 0x60a015f0
    virtual void DisplayNoticeMessage(); // slot 2, 0x60a01600
    virtual void DisplayStatusMessage(); // slot 3, 0x60a01610
    virtual void CaptureGameScreen(); // slot 4, 0x60a09730
    virtual void DoExActive(); // slot 5, 0x60a08af0
    virtual void ExitGameRoom(); // slot 6, 0x60a09910
    virtual void AccuseUser(); // slot 7, 0x60a0a260
    virtual void purecall(); // slot 8, 0x60a11bca
    virtual void GetGameChatContent(); // slot 9, 0x60a02e70
    virtual void AfterShowIt(); // slot 10, 0x60a0fa60
    virtual void CreateCaptionButtons(); // slot 11, 0x60a017d0
    virtual void purecall(); // slot 12, 0x60a11bca
    virtual void purecall(); // slot 13, 0x60a11bca
    virtual void purecall(); // slot 14, 0x60a11bca
    virtual void purecall(); // slot 15, 0x60a11bca
    virtual void purecall(); // slot 16, 0x60a11bca
    virtual void ShowInviteGameToChnlDlg(); // slot 17, 0x60a0a4a0
    virtual void CreateCaptionButtons(); // slot 18, 0x60a017d0
    virtual void CreateCaptionButtons(); // slot 19, 0x60a017d0
    virtual void GetGameOptionFromRegistry(); // slot 20, 0x60a0a390
    virtual void AfterShowIt(); // slot 21, 0x60a0fa60
    virtual void IsActivate(); // slot 22, 0x60a01620
    virtual void ProcessItemProvokeCommand(); // slot 23, 0x60a08ff0
    virtual void HasRightOfBanish(); // slot 24, 0x60a0a550
    virtual void Evt_OnAddRoomMember(); // slot 25, 0x60a08b00
    virtual void Evt_OnDeleteRoomMember(); // slot 26, 0x60a0a600
    virtual void Evt_OnRoomMemberList(); // slot 27, 0x60a08c70
    virtual void Evt_OnModifyRoomMemberInfo(); // slot 28, 0x60a08d30
    virtual void Evt_OnEnableHostBanish(); // slot 29, 0x60a0af70
    virtual void Evt_OnTimeHostBanish(); // slot 30, 0x60a08d80
    virtual void Evt_OnGameStatusMessage(); // slot 31, 0x60a095b0
    virtual void Evt_OnChatString(); // slot 32, 0x60a08e50
    virtual void Evt_OnReqBanishMember(); // slot 33, 0x60a08e80
    virtual void Evt_OnClickBanishMember(); // slot 34, 0x60a0b0b0
    virtual void Evt_OnHostBanishCheck(); // slot 35, 0x60a09510
    virtual void Evt_OnConnectTypeError(); // slot 36, 0x60a09520
    virtual void Evt_OnItemReserveChance(); // slot 37, 0x60a0a880
    virtual void Evt_OnStartNewGame(); // slot 38, 0x60a090d0
    virtual void Evt_ChannelGaeaPrizeData(); // slot 39, 0x60a08fe0
    virtual void Evt_ChannelGaeaPrizeData(); // slot 40, 0x60a08fe0
    virtual void Evt_ChannelLobby_OnUpdateNotice(); // slot 41, 0x60a09660
    virtual void Evt_ChannelGaeaPrizeData(); // slot 42, 0x60a08fe0
    virtual void Evt_OnExitGameDuetoShutdown(); // slot 43, 0x60a09860
    virtual void Evt_OnGetShutdownTime(); // slot 44, 0x60a09870
    virtual void Net_SocketClose(); // slot 45, 0x60a093a0
    virtual void Net_commandTimeBanish(); // slot 46, 0x60a09390
};

class CF5MainFrmView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a0c4a0
    virtual void OnDetached(); // slot 1, 0x60a0c040
    virtual void OnAltF4KeyDown(); // slot 2, 0x60a0bac0
    virtual void OnClickExitButton(); // slot 3, 0x60a0baf0
    virtual void Evt_ChannelGaeaPrizeData(); // slot 4, 0x60a08fe0
    virtual void OnClickMinimizeButton(); // slot 5, 0x60a0c0b0
    virtual void OnClickAccuseButton(); // slot 6, 0x60a0bbb0
    virtual void OnClickInviteButton(); // slot 7, 0x60a0be60
    virtual void OnClickOptionButton(); // slot 8, 0x60a0bf30
    virtual void Msg_GetWindow(); // slot 9, 0x60a0c060
    virtual void Evt_MainFrame_OnDestroy(); // slot 10, 0x60a0c1f0
    virtual void Evt_MainFrame_OnShowWindow(); // slot 11, 0x60a0c250
    virtual void Evt_MainFrame_OnEnableWindow(); // slot 12, 0x60a0c410
    virtual void Evt_ChannelGaeaPrizeData(); // slot 13, 0x60a08fe0
    virtual void Evt_Channel_OnChannelJoinCompleted(); // slot 14, 0x60a0c120
    virtual void Evt_GameView_OnDisplayModeChanged(); // slot 15, 0x60a0c0e0
};

class CF5MainFrmWnd : public CFrameWnd, public CWnd, public CCmdTarget, public CObject {
public:
    virtual void GetRuntimeClass(); // slot 0, 0x60a0ca00
    virtual void vfunc_1(); // slot 1, 0x60a0d3b0
    virtual void AfterShowIt(); // slot 2, 0x60a0fa60
    virtual void CreateCaptionButtons(); // slot 3, 0x60a017d0
    virtual void AfterShowIt(); // slot 4, 0x60a0fa60
    virtual void OnCmdMsg(); // slot 5, 0x60a11876
    virtual void OnFinalRelease(); // slot 6, 0x60a1187c
    virtual void IsInvokeAllowed(); // slot 7, 0x60a1173e
    virtual void GetDispatchIID(); // slot 8, 0x60a11744
    virtual void GetTypeInfoCount(); // slot 9, 0x60a1174a
    virtual void GetTypeLibCache(); // slot 10, 0x60a11750
    virtual void GetTypeLib(); // slot 11, 0x60a11756
    virtual void GetMessageMap(); // slot 12, 0x60a0dc40
    virtual void GetCommandMap(); // slot 13, 0x60a1175c
    virtual void GetDispatchMap(); // slot 14, 0x60a11762
    virtual void GetConnectionMap(); // slot 15, 0x60a11768
    virtual void GetInterfaceMap(); // slot 16, 0x60a11882
    virtual void GetEventSinkMap(); // slot 17, 0x60a11774
    virtual void OnCreateAggregates(); // slot 18, 0x60a1177a
    virtual void GetInterfaceHook(); // slot 19, 0x60a11780
    virtual void GetExtraConnectionPoints(); // slot 20, 0x60a11786
    virtual void GetConnectionHook(); // slot 21, 0x60a1178c
    virtual void PreSubclassWindow(); // slot 22, 0x60a11888
    virtual void Create(); // slot 23, 0x60a1188e
    virtual void CreateEx(); // slot 24, 0x60a11894
    virtual void CreateEx(); // slot 25, 0x60a1189a
    virtual void DestroyWindow(); // slot 26, 0x60a118a0
    virtual void PreCreateWindow(); // slot 27, 0x60a0cc20
    virtual void CalcWindowRect(); // slot 28, 0x60a118a6
    virtual void GetMenu(); // slot 29, 0x60a118ac
    virtual void SetMenu(); // slot 30, 0x60a118b2
    virtual void OnToolHitTest(); // slot 31, 0x60a118b8
    virtual void GetScrollBarCtrl(); // slot 32, 0x60a118be
    virtual void WinHelpA(); // slot 33, 0x60a118c4
    virtual void HtmlHelpA(); // slot 34, 0x60a118ca
    virtual void WinHelpInternal(); // slot 35, 0x60a118d0
    virtual void ContinueModal(); // slot 36, 0x60a118d6
    virtual void EndModalLoop(); // slot 37, 0x60a118dc
    virtual void EnsureStdObj(); // slot 38, 0x60a118e2
    virtual void get_accParent(); // slot 39, 0x60a118e8
    virtual void get_accChildCount(); // slot 40, 0x60a118ee
    virtual void get_accChild(); // slot 41, 0x60a118f4
    virtual void get_accName(); // slot 42, 0x60a118fa
    virtual void get_accValue(); // slot 43, 0x60a11900
    virtual void get_accDescription(); // slot 44, 0x60a11906
    virtual void get_accRole(); // slot 45, 0x60a1190c
    virtual void get_accState(); // slot 46, 0x60a11912
    virtual void get_accHelp(); // slot 47, 0x60a11918
    virtual void get_accHelpTopic(); // slot 48, 0x60a1191e
    virtual void get_accKeyboardShortcut(); // slot 49, 0x60a11924
    virtual void get_accFocus(); // slot 50, 0x60a1192a
    virtual void get_accSelection(); // slot 51, 0x60a11930
    virtual void get_accDefaultAction(); // slot 52, 0x60a11936
    virtual void accSelect(); // slot 53, 0x60a1193c
    virtual void accLocation(); // slot 54, 0x60a11942
    virtual void accNavigate(); // slot 55, 0x60a11948
    virtual void accHitTest(); // slot 56, 0x60a1194e
    virtual void accDoDefaultAction(); // slot 57, 0x60a11954
    virtual void put_accName(); // slot 58, 0x60a1195a
    virtual void put_accValue(); // slot 59, 0x60a11960
    virtual void SetProxy(); // slot 60, 0x60a11966
    virtual void CreateAccessibleProxy(); // slot 61, 0x60a1196c
    virtual void OnCommand(); // slot 62, 0x60a11972
    virtual void OnNotify(); // slot 63, 0x60a11978
    virtual void GetSuperWndProcAddr(); // slot 64, 0x60a1197e
    virtual void AfterShowIt(); // slot 65, 0x60a0fa60
    virtual void BeginModalState(); // slot 66, 0x60a11984
    virtual void EndModalState(); // slot 67, 0x60a1198a
    virtual void PreTranslateMessage(); // slot 68, 0x60a0ccf0
    virtual void OnAmbientProperty(); // slot 69, 0x60a11990
    virtual void WindowProc(); // slot 70, 0x60a0cc30
    virtual void OnWndMsg(); // slot 71, 0x60a11996
    virtual void DefWindowProcA(); // slot 72, 0x60a1199c
    virtual void PostNcDestroy(); // slot 73, 0x60a119a2
    virtual void OnChildNotify(); // slot 74, 0x60a119a8
    virtual void CheckAutoCenter(); // slot 75, 0x60a119ae
    virtual void IsFrameWnd(); // slot 76, 0x60a119b4
    virtual void CreateControlContainer(); // slot 77, 0x60a119ba
    virtual void CreateControlSite(); // slot 78, 0x60a119c0
    virtual void SetOccDialogInfo(); // slot 79, 0x60a119c6
    virtual void GetOccDialogInfo(); // slot 80, 0x60a119cc
    virtual void Create(); // slot 81, 0x60a119d2
    virtual void LoadFrame(); // slot 82, 0x60a119d8
    virtual void GetActiveDocument(); // slot 83, 0x60a119de
    virtual void GetActiveFrame(); // slot 84, 0x60a119e4
    virtual void GetMessageString(); // slot 85, 0x60a119ea
    virtual void RecalcLayout(); // slot 86, 0x60a119f0
    virtual void ActivateFrame(); // slot 87, 0x60a119f6
    virtual void SetMenuBarVisibility(); // slot 88, 0x60a119fc
    virtual void GetMenuBarVisibility(); // slot 89, 0x60a11a02
    virtual void SetMenuBarState(); // slot 90, 0x60a11a08
    virtual void GetMenuBarState(); // slot 91, 0x60a11a0e
    virtual void OnSetPreviewMode(); // slot 92, 0x60a11a14
    virtual void GetMessageBar(); // slot 93, 0x60a11a1a
    virtual void NegotiateBorderSpace(); // slot 94, 0x60a11a20
    virtual void OnCreateClient(); // slot 95, 0x60a11a26
    virtual void OnUpdateFrameTitle(); // slot 96, 0x60a11a2c
    virtual void OnUpdateFrameMenu(); // slot 97, 0x60a11a32
    virtual void GetDefaultAccelerator(); // slot 98, 0x60a11a38
    virtual void DelayUpdateFrameMenu(); // slot 99, 0x60a11a3e
    virtual void ExitHelpMode(); // slot 100, 0x60a11a44
    virtual void OnShowMenuBar(); // slot 101, 0x60a11a4a
    virtual void OnHideMenuBar(); // slot 102, 0x60a11a50
    virtual void GetTicket(); // slot 103, 0x60a0ccb0
    virtual void RefreshCookie(); // slot 104, 0x60a0d4c0
    virtual void CreateCaptionButtons(); // slot 105, 0x60a017d0
    virtual void DisplayAdWnd(); // slot 106, 0x60a0d9e0
    virtual void CreateCaptionButtons(); // slot 107, 0x60a017d0
    virtual void OnTimer(); // slot 108, 0x60a0e5f0
    virtual void DeleteEngineObject(); // slot 109, 0x60a034f0
    virtual void DeleteEngineObject(); // slot 110, 0x60a034f0
    virtual void CreateCaptionButtons(); // slot 111, 0x60a017d0
    virtual void AfterShowIt(); // slot 112, 0x60a0fa60
    virtual void Reg_LoadFullScreenSetting(); // slot 113, 0x60a0d160
};

class CF5MiniChannelListView : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a0f5c0
    virtual void OnDetached(); // slot 1, 0x60a0ee80
    virtual void vfunc_2(); // slot 2, 0x60a01080
    virtual void OnClickRefreshBtn(); // slot 3, 0x60a0eea0
    virtual void OnClickJoinBtn(); // slot 4, 0x60a0eed0
    virtual void OnClickRoomListBtn(); // slot 5, 0x60a0ef00
    virtual void OnClickAutoJoinBtn(); // slot 6, 0x60a0ef40
    virtual void OnClickGrpListBtn(); // slot 7, 0x60a0ef70
    virtual void OnClickChannelGrpLst(); // slot 8, 0x60a0efa0
    virtual void OnClickChannelLst(); // slot 9, 0x60a0f3e0
    virtual void OnCheckEnterableState(); // slot 10, 0x60a0efd0
    virtual void Msg_GetWindow(); // slot 11, 0x60a04400
    virtual void Msg_CreateWindow(); // slot 12, 0x60a0f000
    virtual void Msg_DestroyWindow(); // slot 13, 0x60a0f020
    virtual void Evt_MiniChannelList_OnUpdateChannelGrpList(); // slot 14, 0x60a0f040
    virtual void Evt_MiniChannelList_OnUpdateChannelList(); // slot 15, 0x60a0f060
    virtual void Evt_MiniChannelList_OnChannelJoinComplete(); // slot 16, 0x60a0f080
    virtual void Evt_MiniChannelList_OnFailEnterChannel(); // slot 17, 0x60a0f0e0
    virtual void Evt_MiniChannelList_OnShowWindow(); // slot 18, 0x60a0f100
};

class CF5MiniChannelListWnd {
public:
    virtual void AfterShowIt(); // slot 0, 0x60a0fa60
    virtual void AfterShowIt(); // slot 1, 0x60a0fa60
    virtual void AfterShowIt(); // slot 2, 0x60a0fa60
    virtual void CreateCaptionButtons(); // slot 3, 0x60a017d0
    virtual void CreateCaptionButtons(); // slot 4, 0x60a017d0
    virtual void CreateCaptionButtons(); // slot 5, 0x60a017d0
    virtual void AfterShowIt(); // slot 6, 0x60a0fa60
    virtual void AfterShowIt(); // slot 7, 0x60a0fa60
};

class CGameLobbyModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a11672
    virtual void OnDetached(); // slot 1, 0x60a11678
    virtual void vfunc_2(); // slot 2, 0x60a02940
    virtual void Msg_ActivateOn(); // slot 3, 0x60a1167e
    virtual void Msg_ActivateOff(); // slot 4, 0x60a11684
    virtual void GameReport_RefreshPlayerInfoList(); // slot 5, 0x60a1168a
    virtual void GameReport_RefreshPlayerInfo(); // slot 6, 0x60a11690
    virtual void GameReport_RefreshMyInfo(); // slot 7, 0x60a11696
    virtual void CheckBanishInfo(); // slot 8, 0x60a1169c
};

class CGameWarpModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a116c6
    virtual void OnDetached(); // slot 1, 0x60a116cc
    virtual void vfunc_2(); // slot 2, 0x60a029a0
    virtual void Msg_ActivateOn(); // slot 3, 0x60a116ae
    virtual void Msg_ActivateOff(); // slot 4, 0x60a116b4
    virtual void RunHanStart(); // slot 5, 0x60a116d2
    virtual void _GetRecommenedGameID(); // slot 6, 0x60a116d8
    virtual void _GetChannelID(); // slot 7, 0x60a116de
    virtual void _OpenGamePage(); // slot 8, 0x60a116e4
};

class CHanChatModel : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a116ba
    virtual void OnDetached(); // slot 1, 0x60a116c0
    virtual void vfunc_2(); // slot 2, 0x60a02980
};

class CItemManager {
public:
    virtual void vfunc_0(); // slot 0, 0x60a02240
    virtual void SetAllElementsState(); // slot 1, 0x60a115b8
    virtual void IsItemAvailable(); // slot 2, 0x60a115be
    virtual void Clear(); // slot 3, 0x60a115c4
    virtual void AddItem(); // slot 4, 0x60a115ca
    virtual void DelItem(); // slot 5, 0x60a115d0
    virtual void GetItem(); // slot 6, 0x60a115d6
    virtual void AddTryCount(); // slot 7, 0x60a115dc
    virtual void GetTryCount(); // slot 8, 0x60a115e2
    virtual void ResetTryCount(); // slot 9, 0x60a115e8
    virtual void DumpAllItems(); // slot 10, 0x60a115ee
    virtual void SetItemState(); // slot 11, 0x60a115f4
};

class CMemberData {
public:
    virtual void vfunc_0(); // slot 0, 0x60a022c0
    virtual void DrawAvata(); // slot 1, 0x60a115fa
};

class CMessengerModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60a116ea
    virtual void OnDetached(); // slot 1, 0x60a116f0
    virtual void vfunc_2(); // slot 2, 0x60a029c0
    virtual void Msg_ActivateOn(); // slot 3, 0x60a116ae
    virtual void Msg_ActivateOff(); // slot 4, 0x60a116b4
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a03620
    virtual void what(); // slot 1, 0x60a11c28
};

class invalid_argument@std : public invalid_argument, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a05990
    virtual void vfunc_1(); // slot 1, 0x60a036b0
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a05990
    virtual void vfunc_1(); // slot 1, 0x60a036b0
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a05990
    virtual void vfunc_1(); // slot 1, 0x60a036b0
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60a05990
    virtual void vfunc_1(); // slot 1, 0x60a036b0
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x60a11b7d
};

}  // namespace HGF5V
