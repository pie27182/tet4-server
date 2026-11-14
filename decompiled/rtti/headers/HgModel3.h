// Generated from MSVC RTTI by tools/rtti_headers.py.
// Hierarchy and vtable order are observed; signatures are not.
#pragma once

namespace HgModel3 {

class ?$CMFunctor;
class IComponent;
class IFunctor;
class IParam;
class bad_alloc;
class exception;
class invalid_argument;
class length_error;
class logic_error;
class out_of_range;

class ?$CMFunctor@VCBaseLobbyModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x609011e0
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCChannelListLobbyModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x60905c60
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCChannelLobbyModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x60913d00
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCGameLobbyModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x6091a3f0
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCGameWarpModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x6091c1c0
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCHanChatModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x6091d630
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCLobbyStateModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x6091e1d0
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCMainFrameModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x6091e8a0
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCMessengerModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x609202d0
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class ?$CMFunctor@VCNetworkModel@@ : public ?$CMFunctor, public IFunctor {
public:
    virtual void vfunc_0(); // slot 0, 0x6091e1c0
    virtual void vfunc_1(); // slot 1, 0x60921c40
    virtual void vfunc_2(); // slot 2, 0x6091c1e0
};

class CBaseLobbyModel : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x609010e0
    virtual void OnDetached(); // slot 1, 0x60901180
    virtual void vfunc_2(); // slot 2, 0x6091a440
    virtual void Msg_ActivateOn(); // slot 3, 0x609011a0
    virtual void Msg_ActivateOff(); // slot 4, 0x609077a0
};

class CChannelListLobbyModel : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60901420
    virtual void OnDetached(); // slot 1, 0x6091c990
    virtual void vfunc_2(); // slot 2, 0x609013c0
    virtual void _SelectChannel_Tetris(); // slot 3, 0x60903110
    virtual void ConnectCdsServer(); // slot 4, 0x60904500
};

class CChannelLobbyModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60906200
    virtual void OnDetached(); // slot 1, 0x60901180
    virtual void vfunc_2(); // slot 2, 0x60906190
    virtual void Msg_ActivateOn(); // slot 3, 0x609076b0
    virtual void Msg_ActivateOff(); // slot 4, 0x609077a0
    virtual void Msg_HannotiCommonCode(); // slot 5, 0x6090f070
    virtual void Msg_CheckMyStatus(); // slot 6, 0x60917c20
    virtual void Msg_CheckMyStatus(); // slot 7, 0x60917c20
    virtual void Msg_GetMakeUserId(); // slot 8, 0x60910370
    virtual void Msg_GetCheckUserId(); // slot 9, 0x60910690
    virtual void SetRoomInfo(); // slot 10, 0x6090a650
    virtual void Msg_SetCreateRoomOption(); // slot 11, 0x6090c370
    virtual void Msg_SetCreateRoomReturn(); // slot 12, 0x6090eaa0
    virtual void Msg_SetRoomPassWordReturn(); // slot 13, 0x6090ef30
};

class CGameLobbyModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x60913f80
    virtual void OnDetached(); // slot 1, 0x60901180
    virtual void vfunc_2(); // slot 2, 0x6091a440
    virtual void Msg_ActivateOn(); // slot 3, 0x60914890
    virtual void Msg_ActivateOff(); // slot 4, 0x609148f0
    virtual void GameReport_RefreshPlayerInfoList(); // slot 5, 0x60918680
    virtual void GameReport_RefreshPlayerInfo(); // slot 6, 0x60917fc0
    virtual void GameReport_RefreshMyInfo(); // slot 7, 0x60918430
    virtual void CheckBanishInfo(); // slot 8, 0x60918aa0
};

class CGameWarpModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x6091aee0
    virtual void OnDetached(); // slot 1, 0x60901180
    virtual void vfunc_2(); // slot 2, 0x6091a440
    virtual void Msg_ActivateOn(); // slot 3, 0x609011a0
    virtual void Msg_ActivateOff(); // slot 4, 0x609077a0
    virtual void RunHanStart(); // slot 5, 0x6091b140
    virtual void _GetRecommenedGameID(); // slot 6, 0x6091bca0
    virtual void _GetChannelID(); // slot 7, 0x6091bef0
    virtual void _OpenGamePage(); // slot 8, 0x6091c000
};

class CHanChatModel : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x6091c710
    virtual void OnDetached(); // slot 1, 0x6091c990
    virtual void vfunc_2(); // slot 2, 0x6091c200
};

class CItem {
public:
    virtual void vfunc_0(); // slot 0, 0x6090a330
};

class CLobbyStateModel : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x6091d760
    virtual void OnDetached(); // slot 1, 0x6091d8b0
};

class CMainFrameModel : public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x6091e2d0
    virtual void OnDetached(); // slot 1, 0x6091e450
};

class CMembership {
public:
    virtual void vfunc_0(); // slot 0, 0x6090a520
};

class CMessengerModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached(); // slot 0, 0x6091e9e0
    virtual void OnDetached(); // slot 1, 0x60901180
    virtual void vfunc_2(); // slot 2, 0x6091e930
    virtual void Msg_ActivateOn(); // slot 3, 0x609011a0
    virtual void Msg_ActivateOff(); // slot 4, 0x609077a0
};

class CMetpParser : public IParam {
public:
    virtual void SetContext(); // slot 0, 0x60921caa
    virtual void GetContext(); // slot 1, 0x60921cb0
    virtual void GetService(); // slot 2, 0x60921cb6
    virtual void GetCommand(); // slot 3, 0x60921cbc
    virtual void GetItemCount(); // slot 4, 0x60921cc2
    virtual void IsConst(); // slot 5, 0x60921cc8
    virtual void IsExistKey(); // slot 6, 0x60921cce
    virtual void AddValue(); // slot 7, 0x60921cd4
    virtual void AddValue(); // slot 8, 0x60921c80
    virtual void AddValue(); // slot 9, 0x60921cda
    virtual void AddValue(); // slot 10, 0x60921ce0
    virtual void AddValue(); // slot 11, 0x60921ce6
    virtual void AddValue(); // slot 12, 0x60921c8c
    virtual void AddValue(); // slot 13, 0x60921cec
    virtual void AddValue(); // slot 14, 0x60921c92
    virtual void AddValue(); // slot 15, 0x60921c86
    virtual void GetValue(); // slot 16, 0x60921cf2
    virtual void GetValue(); // slot 17, 0x60921ca4
    virtual void GetValue(); // slot 18, 0x60921cf8
    virtual void GetValue(); // slot 19, 0x60921cfe
    virtual void GetValue(); // slot 20, 0x60921d04
    virtual void GetValue(); // slot 21, 0x60921d0a
    virtual void GetValue(); // slot 22, 0x60921d10
    virtual void GetValue(); // slot 23, 0x60921d16
    virtual void GetValue(); // slot 24, 0x60921d1c
    virtual void GetValue(); // slot 25, 0x60921d22
    virtual void GetValue(); // slot 26, 0x60921d28
    virtual void SetValue(); // slot 27, 0x60921d2e
    virtual void SetValue(); // slot 28, 0x60921d34
    virtual void SetValue(); // slot 29, 0x60921d3a
    virtual void SetValue(); // slot 30, 0x60921d40
    virtual void SetValue(); // slot 31, 0x60921d46
    virtual void SetValue(); // slot 32, 0x60921d4c
    virtual void SetValue(); // slot 33, 0x60921d52
    virtual void SetValue(); // slot 34, 0x60921d58
    virtual void SetValue(); // slot 35, 0x60921d5e
    virtual void DelKey(); // slot 36, 0x60921d64
    virtual void Clear(); // slot 37, 0x60921d6a
    virtual void GetData(); // slot 38, 0x60921d70
    virtual void GetIPAddress(); // slot 39, 0x60921d76
    virtual void GetPort(); // slot 40, 0x60921d7c
    virtual void IsEncrypted(); // slot 41, 0x60921d82
    virtual void GetURL(); // slot 42, 0x60921d88
    virtual void GetZipURL(); // slot 43, 0x60921d8e
    virtual void GetEncryptURL(); // slot 44, 0x60921d94
    virtual void vfunc_45(); // slot 45, 0x6091f690
};

class CNetworkModel {
public:
    virtual void vfunc_0(); // slot 0, 0x609012d0
};

class CPlayerInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x60915fa0
};

class CRoomData {
public:
    virtual void vfunc_0(); // slot 0, 0x6090a990
};

class GA_PRM_MasterInfo {
public:
    virtual void vfunc_0(); // slot 0, 0x60911020
};

class bad_alloc@std : public bad_alloc, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60906010
    virtual void what(); // slot 1, 0x60921f2e
};

class invalid_argument@std : public invalid_argument, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60905e60
    virtual void vfunc_1(); // slot 1, 0x60905f80
};

class length_error@std : public length_error, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60905e60
    virtual void vfunc_1(); // slot 1, 0x60905f80
};

class logic_error@std : public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60905e60
    virtual void vfunc_1(); // slot 1, 0x60905f80
};

class out_of_range@std : public out_of_range, public logic_error, public exception {
public:
    virtual void vfunc_0(); // slot 0, 0x60905e60
    virtual void vfunc_1(); // slot 1, 0x60905f80
};

class type_info {
public:
    virtual void vfunc_0(); // slot 0, 0x60921e1b
};

}  // namespace HgModel3
