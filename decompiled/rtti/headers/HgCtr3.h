// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgCtr3 {

class ?$CMFunctor;
class IComponent;
class IFunctor;
class bad_alloc;
class exception;
class invalid_argument;
class length_error;
class logic_error;

class ?$CMFunctor@VCChannelListLobbyController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x60201fc0
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class ?$CMFunctor@VCChannelLobbyController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x60206ce0
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class ?$CMFunctor@VCGameLobbyController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x60208130
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class ?$CMFunctor@VCHanChatController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x60208650
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class ?$CMFunctor@VCLobbyStateController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x60208840
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class ?$CMFunctor@VCMainFrameController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x60208980
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class ?$CMFunctor@VCNetworkController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x602093b0
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class ?$CMFunctor@VCReportClickToWebController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x60209b60
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class ?$CMFunctor@VCSwitch2LobbyController@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x60208120
    virtual void vfunc_1(); // slot 1, 0x6020a620
    virtual void vfunc_2(); // slot 2, 0x60208670
};

class CChannelListLobbyController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60201020
    virtual void OnDetached(); // slot 1, 0x60201360
};

class CChannelLobbyController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60202010
    virtual void OnDetached(); // slot 1, 0x602031e0
    virtual void Net_GetMemberList(); // slot 2, 0x602032c0
    virtual void Net_GetRoomList(); // slot 3, 0x602033f0
    virtual void Net_GetItemState(); // slot 4, 0x60203440
    virtual void Net_GetMembershipState(); // slot 5, 0x60203690
    virtual void Net_RoomInfo(); // slot 6, 0x602036c0
    virtual void Net_GetMemberInfo(); // slot 7, 0x602039f0
    virtual void Net_AddMember(); // slot 8, 0x60203b30
    virtual void Net_DeleteMember(); // slot 9, 0x60203b70
    virtual void Net_DetectGhost(); // slot 10, 0x602042c0
    virtual void Net_NoticeMessage(); // slot 11, 0x602042f0
    virtual void Net_Banish(); // slot 12, 0x60204ac0
    virtual void Net_ReserveBanish(); // slot 13, 0x60204d70
    virtual void Net_AvatarChange(); // slot 14, 0x60204e50
    virtual void Net_InviteGameToMember(); // slot 15, 0x60204e80
    virtual void Net_ResponseInviteGame(); // slot 16, 0x602053a0
    virtual void Net_GameReport(); // slot 17, 0x60205910
    virtual void Net_SocketClose(); // slot 18, 0x60205940
    virtual void Net_ComplaintAgree(); // slot 19, 0x60205b30
    virtual void Evt_Alarm_ExitAlarm(); // slot 20, 0x60201bf0
    virtual void Evt_Alarm_ExitAlarm(); // slot 21, 0x60201bf0
    virtual void Net_GetShutdownTime(); // slot 22, 0x60206870
    virtual void Net_PlayTimeLimitInfo(); // slot 23, 0x60206570
};

class CGameLobbyController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60207040
    virtual void OnDetached(); // slot 1, 0x60207770
};

class CHanChatController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60208190
    virtual void OnDetached(); // slot 1, 0x602083d0
};

class CLobbyStateController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x602086c0
    virtual void OnDetached(); // slot 1, 0x60208750
};

class CMainFrameController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60208890
    virtual void OnDetached(); // slot 1, 0x602088e0
};

class CNetworkController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60208a00
    virtual void OnDetached(); // slot 1, 0x60208b20
    virtual void OnSocketClose(); // slot 2, 0x60208d10
    virtual void OnSocketConnect(); // slot 3, 0x60208df0
    virtual void OnSocketReceive(); // slot 4, 0x60208ed0
    virtual void OnSocketSend(); // slot 5, 0x60209220
};

class CReportClickToWebController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60209620
    virtual void OnDetached(); // slot 1, 0x602098a0
};

class CSwitch2LobbyController : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60209bb0
    virtual void OnDetached(); // slot 1, 0x60209d80
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60206f50
    virtual void what(); // slot 1, 0x6020a6f8
};

class invalid_argument@std : public invalid_argument, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60206e50
    virtual void vfunc_1(); // slot 1, 0x60206f30
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60206e50
    virtual void vfunc_1(); // slot 1, 0x60206f30
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60206e50
    virtual void vfunc_1(); // slot 1, 0x60206f30
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x6020a6a5
};

}  // namespace HgCtr3
