"""Every message the client knows, and every nested structure, field by field.

The layouts are extracted from the client's own Serialize and Deserialize functions
(HgCom3.dll for the generic messages, Tet4.exe for Tetris's); the names are this
server's. A layout lists its fields in wire order, each written

    name:type=key     a field the server names, with the client's key for it
    name:type         a field the server names; the client's key is not known
    kNNNe:type        a field known only by its key
    type              a field nobody has named yet (read and written as f0, f1, ...)

Types: u8 u16 u32 u64 i32 i64 f32 (big-endian), str (u32 length and bytes), {Name}
(a structure, inline), [type] (u32 count and elements). The keys are those of the
client's converters, which turn each message into key/value pairs for the UI; the
same key may stand for different things in different messages.

docs/MESSAGES.md is generated from this file; docs/PROTOCOL.md gives the evidence.
"""

STRUCTS = {
    "_KeyType": "u64 member:str u64 str game_id:str",
    "_AliasInfo": "code:str name:str mission:u32",
    "_AliasInventoryInfo": "items:[{_AliasInfo}] shown:str slots:u32",
    "_BasicMemberInfo": "u32 u32 u32 u32 u32 str str u32 u32 u32 u32 str",
    "_BenefitInfo": "str str str str",
    "_Board": "code:str name:str groups:[str]",
    "_CauseProduct": "str u32",
    "_ChatInfo": "member:str time:str text:str u32",
    "_ClientOptionInfoSlotSvcKor": "u32 u32",
    "_Coupon": "str str str",
    "_EmblemInfo": "code:str name:str mission:u32",
    "_EmblemInventoryInfo": "items:[{_EmblemInfo}] shown:str slots:u32",
    "_ExScore": "str u32",
    "_GaeaGameValue": "str u32 str",
    "_GiftInfo": "u64 str str str str str",
    "_GiftInventory": "[{_GiftInfo}]",
    "_HanchatFormat": "u32 str member:str=k3e str str u32 text:{_HanchatTextFormat}",
    "_HanchatTextFormat": "message:str u32 u8 u32 str",
    "_Inventory": "str str items:[{_ItemInfo}] slots:u32",
    "_ItemInfo": "code:str name:str kind:str start:str end:str str count:u32 u32",
    "_ItemState": "str str str str u32 u32 u32",
    "_MemberInfo": "member:str=k3e k7e:str k8e:str k11e:str k10e:u32 k12e:str k13e:u64 "
        "k26e:u32 k27e:u32 k28e:u32 k29e:u32 k30e:u32 k31e:u32 k32e:str k33e:u32 k102e:str "
        "k34e:u64 k37e:str k38e:str k35e:u32 room:u32=k151e k201e:str k153e:[u32]",
    "_MemberInfoChannelSvcKor": "u64",
    "_MemberInfoRoom": "k57e:str seat:u32=k58e member:str=k3e k7e:str k8e:str k11e:str "
        "k10e:u32 k12e:str k34e:u64 k13e:u64 k26e:u32 k27e:u32 k28e:u32 k29e:u32 k30e:u32 "
        "k31e:u32 k32e:str k33e:u32 k102e:str k37e:str k38e:str k52e:str k53e:u32 k35e:u32 "
        "k153e:[u32]",
    "_MemberInfoRoomSvcKor": "u8 u8 u8",
    "_MemberInfoShort": "member:str=k3e seat:u32=k43e",
    "_MemberInfoStartNewGame": "member:str=k3e k118e:u8 k119e:u8 u8",
    "_MemberScore": "member:str u32 u32 u32 u64 u32 [{_ExScore}] str",
    "_MemberScoreReport": "member:str u32 u32 u32 u32 u32 u32 str u32 u32 str u64 u64 u32 "
        "[u32]",
    "_MemberScoreReportSvcKor": "u8 u8 u32",
    "_MemberShipInfo": "{_UserProductInfo} [{_UserProductInfo}] str u64",
    "_MemberTodayMatchInfo": "str u64 u32 u32 u32",
    "_MembershipState": "str u32",
    "_MissionProduct": "mission:u32 code:str",
    "_Point": "kind:str str amount:u64",
    "_Product": "code:str name:str currency:str price:u64 per_piece:u8 u8 u8 [str] [str] "
        "str",
    "_ProductGroup": "code:str name:str products:[str] str",
    "_PromotionMastInfoSvcKor": "u32 u32 u32 str str [{_PromotionMoneyInfoSvcKor}]",
    "_PromotionMoneyInfoSvcKor": "u32 u32 u64 str",
    "_PromotionUserInfoSvcKor": "u32 u32 u64 u64 u64 u64 u64 u64 u64",
    "_RefundProduct": "str str u64",
    "_RoomInfo": "room:u32=k42e title:str=k45e k127e:u32 limit:u32=k66e private:u8=k68e "
        "options:str=k46e k200e:str state:u32=k47e creator:str=k116e host:str=k50e "
        "playing:u32=k143e players:[{_MemberInfoShort}]=k48e "
        "watchers:[{_MemberInfoShort}]=k49e [{_MemberInfoShort}]",
    "_SingleModeInfo": "mode:u32 u32 rank:u32 ranked:u32 values:[u32] dates:[str] "
        "result:u32 plays:u32",
    "_TetrisGameReport": "member:str rank:u32 team:u32 title:str level:u32 level_after:u32 "
        "u32 u32 f32 u32 u32 u32 u32 u32 u32 u32 u32 f32 u32 u32 u32 u8 u32 str u8 u32 u32 "
        "u32 [str] u32 u8 f32",
    "_TetrisMemberGameReport": "member:str u32 u32 u32 u32 u32 u8 u8 u8 u8 u8 u32 u32 u32 "
        "u32 u32 f32 u32 u32 f32 u32 u32 u32 u8 {_TetrisSchoolInfo} u32 u32 u32 u32",
    "_TetrisMemberInfo": "member:str school:{_TetrisSchoolInfo} u32 u32 str u32 u32 u32 "
        "emblem:str title:str u64 single_modes:[{_SingleModeInfo}]",
    "_TetrisMissionMastInfo": "u32 str str u32 {_BenefitInfo} u32",
    "_TetrisMissionUserInfo": "u32 str u32 str",
    "_TetrisSchoolInfo": "u8 str u32 u16",
    "_UseAbleItem": "member:str hold:u8 next:u8 u8 u8",
    "_UserProductInfo": "u64 str str str u64 u64 u8 u32 str u32 str",
}

# name: (ID, layer, fields). The name is the client's class name without "Cmd_". The
# layer is the batch slot the message travels in (docs/PROTOCOL.md section 6): 0 for
# HgCom3's messages, 3 for Tet4.exe's, 1 for the Korean services, and where Tet4.exe
# replaces HgCom3's converter, the layer it registers.
MESSAGES = {
    "AuthToC": (0x008500CA, 0, "key:{_KeyType} str str login_result:u32=k161e"),
    "AuthToS": (0x0365C03A, 0, "key:{_KeyType} ticket:str method:str"),
    "ChannelOrderTypeSingleModeRoomInfoTetrisToC": (0x04B61A2A, 3, "str u32 u8"),
    "Channel_AddMemberSvcKorToC": (0x01E0041A, 1, "u64"),
    "Channel_AddMemberToC": (0x0AB84D0A, 0,
        "game_id:str=k22e sub_id:str=k23e channel_id:str=k24e member:str=k3e k7e:str "
        "k8e:str k11e:str k10e:u32 k12e:str k26e:u32 k27e:u32 k28e:u32 k29e:u32 k30e:u32 "
        "k31e:u32 k13e:u64 k34e:u64 k32e:str k33e:u32 k102e:str k37e:str k38e:str k35e:u32 "
        "room:u32=k151e k201e:str k153e:[u32] result:str=k1e"),
    "Channel_AutoEnterRoomToC": (0x09C4D0BA, 0, "result:str=k1e u32 error:str=k2e"),
    "Channel_AutoEnterRoomToS": (0x00233D9A, 0,
        "member:str=k3e room:u32=k42e password:str=k67e title:str=k45e options:str=k46e "
        "k127e:u32 limit:u32=k66e k200e:str game_id:str=k22e sub_id:str=k23e "
        "channel_id:str=k24e u32"),
    "Channel_AvatarChangeSvcKorToC": (0x0293164A, 1, "str str"),
    "Channel_AvatarChangeSvcKorToS": (0x0293954A, 1, "str str"),
    "Channel_BanishToC": (0x0503600A, 0, "str u32"),
    "Channel_CheckCharacterIdExistToC": (0x0699B22A, 3, "str str u32 u32 u32 str"),
    "Channel_CheckCharacterIdExistToS": (0x0384414A, 3, "str"),
    "Channel_CheckUserIdToC": (0x0F02FE3A, 0, "str str u32"),
    "Channel_CheckUserIdToS": (0x041A6B6A, 0, "str"),
    "Channel_ClientOptionInfoSvcKorToC": (0x0E0B0A2A, 1, "str [u32]"),
    "Channel_ClientOptionInfoSvcKorToS": (0x04AB113A, 1,
        "str [{_ClientOptionInfoSlotSvcKor}]"),
    "Channel_ComplaintAgreeSvcKorToC": (0x0C8C6FDA, 1, "u32"),
    "Channel_ComplaintAgreeSvcKorToS": (0x0C8C3FDA, 1, "u32"),
    "Channel_ComplaintSvcKorToS": (0x0A57CA8A, 1,
        "game_id:str reporter:str u32 reason:str chat:[{_ChatInfo}] reported:str"),
    "Channel_CouponCountToC": (0x0B1B980A, 1, "member:str=k3e coupons:u32=k434e"),
    "Channel_CouponCountToS": (0x0089556A, 0, "member:str"),
    "Channel_CreateRoomToC": (0x0A80143A, 0,
        "result:str=k1e failcode:u32 error:str=k2e member:str=k3e room:u32=k42e "
        "password:str=k67e title:str=k45e options:str=k46e k127e:u32 limit:u32=k66e "
        "k200e:str k69e:u32 game_id:str=k22e sub_id:str=k23e channel_id:str=k24e str "
        "game_host:str=k52e game_port:u32=k53e k82e:str"),
    "Channel_CreateRoomToS": (0x0CA9895A, 0,
        "member:str room:u32=k42e password:str=k67e title:str=k45e options:str=k46e "
        "k127e:u32 limit:u32=k66e k200e:str k69e:u32 game_id:str=k22e sub_id:str=k23e "
        "channel_id:str=k24e"),
    "Channel_DeleteMemberToC": (0x0324A0DA, 0,
        "game_id:str=k22e sub_id:str=k23e channel_id:str=k24e member:str=k3e"),
    "Channel_DetectGhostToC": (0x082B635A, 0, "u32"),
    "Channel_DetectGhostToS": (0x0FBB635A, 0, "u32"),
    "Channel_EnterChannelByUserIdImsiToS": (0x0696068A, 3,
        "u64 str str str str str u32 str str u64"),
    "Channel_EnterChannelByUserIdToS": (0x0696068A, 0,
        "k601e:u64 member:str=k3e game_id:str=k22e sub_id:str=k23e channel_id:str=k24e "
        "k149e:str k167e:u32 k442e:str k441e:str u64"),
    "Channel_EnterChannelErrorToC": (0x08579CBA, 0, "str str str str str u32 str"),
    "Channel_EnterChannelSvcKorToC": (0x0793DB4A, 1, "u32 u32 u32"),
    "Channel_EnterChannelToC": (0x00C0FC8A, 0,
        "member:str=k3e game_id:str=k22e sub_id:str=k23e k60e:str k73e:str k61e:u32 "
        "room_size:u32=k62e k69e:u32 k70e:u8 k63e:str k129e:u32 k130e:u32 k128e:str "
        "channel_id:str=k24e k99e:u32 k35e:u32 k154e:u32 result:str=k1e"),
    "Channel_EnterChannelToS": (0x0D831AAA, 0, "str str str str str str u32 str str"),
    "Channel_EnterChannelWithTicketToC": (0x0DA8E7EA, 0, "str"),
    "Channel_EnterChannelWithTicketToS": (0x0211318A, 0, "str"),
    "Channel_ExitChannelToC": (0x07F6F8CA, 0, "str str str str str"),
    "Channel_ExitChannelToS": (0x0A75AF8A, 0, "str str str str"),
    "Channel_GaeaGameValueSvcKorToS": (0x07BF049A, 1, "[{_GaeaGameValue}]"),
    "Channel_GaeaPrizeDataSvcKorToC": (0x0BAE4A1A, 1,
        "str u32 u32 str u64 u64 u64 u64 u64 str"),
    "Channel_GaeaPromotionDataSvcKorToC": (0x0E0E045A, 1,
        "str [{_PromotionMastInfoSvcKor}] [{_PromotionUserInfoSvcKor}] str"),
    "Channel_GameJoinRoomToC": (0x08F1F2DA, 0,
        "result:str=k1e failcode:u32 error:str=k2e game_id:str=k22e sub_id:str=k23e "
        "channel_id:str=k24e room:u32=k42e title:str=k45e password:str=k67e k127e:u32 "
        "limit:u32=k66e options:str=k46e k200e:str game_host:str=k52e game_port:u32=k53e "
        "k82e:str"),
    "Channel_GameJoinRoomToS": (0x0AE830EA, 0,
        "member:str=k3e room:u32=k42e password:str=k67e"),
    "Channel_GetMemberInfoSvcKorToC": (0x0F78858A, 1, "u64 u32"),
    "Channel_GetMemberInfoToC": (0x060BC39A, 0,
        "member:str=k3e str str str u32 str u64 u32 u32 u32 u32 u32 u32 u32 str u32 u32 "
        "str u64 u32 u32 str str u32 str [u32] result:str=k1e"),
    "Channel_GetMemberListSvcKorToC": (0x0651FEBA, 1, "[{_MemberInfoChannelSvcKor}]"),
    "Channel_GetMemberListToC": (0x06B816EA, 0,
        "game_id:str=k22e sub_id:str=k23e channel_id:str=k24e members:[{_MemberInfo}] "
        "result:str=k1e"),
    "Channel_GetMemberListToS": (0x0AE3BBDA, 0,
        "game_id:str=k22e sub_id:str=k23e channel_id:str=k24e"),
    "Channel_GetMemberListTodayMatchInfoToC": (0x0EC7A02A, 0, "[{_MemberTodayMatchInfo}]"),
    "Channel_GetMemberShipStateSvcKorToC": (0x048F27FA, 1, "[{_MembershipState}]"),
    "Channel_GetRoomListToC": (0x0226968A, 0,
        "game_id:str=k22e sub_id:str=k23e channel_id:str=k24e room_count:u32=k51e "
        "result:str=k1e rooms:[{_RoomInfo}]"),
    "Channel_GetRoomListToS": (0x0DDA299A, 0,
        "game_id:str=k22e sub_id:str=k23e channel_id:str=k24e u8"),
    "Channel_GetUserIdByMemberIdToS": (0x0FAB330A, 0, "member:str"),
    "Channel_GetUserIdToC": (0x0A80E29A, 0,
        "u64 member:str=k3e error:str=k2e login_result:u32=k161e"),
    "Channel_InviteGameToMemberToC": (0x08E980CA, 0,
        "result:str=k1e failcode:u32 error:str=k2e member:str=k3e room:u32=k42e title:str "
        "password:str=k67e message:str k64e:u8"),
    "Channel_InviteGameToMemberToS": (0x0264355A, 0,
        "member:str=k3e room:u32=k42e message:str=k65e target:str u8"),
    "Channel_LevelUpRewardToC": (0x0AE7C20A, 3, "[str] u32"),
    "Channel_MakeUserIdToC": (0x0F05E5AA, 0, "u64 str str u32"),
    "Channel_MakeUserIdToS": (0x02FAB30A, 0, "str"),
    "Channel_OrderTypeAddMemberTetrisToC": (0x005216CA, 3, "profile:{_TetrisMemberInfo}"),
    "Channel_OrderTypeChangeDisplayMemberInfoToC": (0x0F6AFA1A, 3,
        "member:str emblem:str title:str"),
    "Channel_OrderTypeChangeDisplayMemberInfoToS": (0x08DB6E9A, 3, "emblem:str title:str"),
    "Channel_OrderTypeChangeUserIdTetrisToC": (0x0719542A, 3, "u64 str str str u32"),
    "Channel_OrderTypeChangeUserIdTetrisToS": (0x06498E7A, 3, "str"),
    "Channel_OrderTypeDayCntInfoTetrisToC": (0x0C80B99A, 3,
        "member:str used:u32 allowed:u32 u32 u32 pcbang:u32 u8 u8 u8 u8 u8"),
    "Channel_OrderTypeFriendMemberInfoTetrisToC": (0x03C4027A, 3,
        "str str u32 u32 u32 u32 u32 str u32 u32 str str u32 u32 u32 u32 u32 u32"),
    "Channel_OrderTypeFriendMemberInfoTetrisToS": (0x0429872A, 3, "str str"),
    "Channel_OrderTypeGetDisplayMemberInfoTetrisToC": (0x0C3B49AA, 3,
        "member:str kind:u32 basic:{_BasicMemberInfo} profile:{_TetrisMemberInfo} "
        "emblems:{_EmblemInventoryInfo} titles:{_AliasInventoryInfo} "
        "missions:[{_TetrisMissionMastInfo}] mission_states:[{_TetrisMissionUserInfo}]"),
    "Channel_OrderTypeGetDisplayMemberInfoTetrisToS": (0x0E4772BA, 3,
        "member:str kind:u32"),
    "Channel_OrderTypeGetMemberInfoTetrisToC": (0x0B88FCCA, 3,
        "profile:{_TetrisMemberInfo} emblems:{_EmblemInventoryInfo} "
        "titles:{_AliasInventoryInfo} missions:[{_TetrisMissionMastInfo}] "
        "mission_states:[{_TetrisMissionUserInfo}]"),
    "Channel_OrderTypeGetMemberListTetrisToC": (0x01F13F8A, 3,
        "profiles:[{_TetrisMemberInfo}]"),
    "Channel_OrderTypeImsiCharacterIdTetrisToC": (0x085113EA, 3, "str"),
    "Channel_OrderTypeMissionCompleteTetrisToC": (0x0AA3643A, 3, "u32 str"),
    "Channel_OrderTypeRefreshMemberToC": (0x0BB5D81A, 3, "str u32 u32 u32 u32 str u32 u32"),
    "Channel_OrderTypeRefreshMemberToS": (0x05F1155A, 3, "str"),
    "Channel_OrderTypeSingleModeResultMemberTetrisToC": (0x0928E8BA, 3,
        "str [{_SingleModeInfo}]"),
    "Channel_RequestDeleteAliasToS": (0x0B600E5A, 3, "code:str"),
    "Channel_RequestDeleteEmblemToS": (0x01DF37EA, 3, "code:str"),
    "Channel_ReserveBanishToC": (0x0478479A, 0, "str u32"),
    "Channel_ResponseDeleteAliasToC": (0x09E9027A, 3, "code:str done:u8"),
    "Channel_ResponseDeleteEmblemToC": (0x0DFFF7CA, 3, "code:str done:u8"),
    "Channel_ResponseInviteGameToC": (0x02593F5A, 0, "member:str=k3e inviter:str k64e:u8"),
    "Channel_ResponseInviteGameToS": (0x02163F5A, 0, "member:str=k3e inviter:str k64e:u8"),
    "Channel_RoomInfoToC": (0x0A680DDA, 0, "info:{_RoomInfo}"),
    "Channel_SearchMemberToC": (0x0ED42B6A, 0, "u8 str str"),
    "Channel_SendErrorToMemberToC": (0x0C81679A, 0, "str u32"),
    "Channel_ShutdownTimeToC": (0x0E33181A, 0, "u32 u32 u32"),
    "Channel_TicketReissueToC": (0x0C6600AA, 0, "str"),
    "Channel_TicketReissueToS": (0x0A101CBA, 0, "game_id:str member:str ticket:str"),
    "Channel_TodayMatchInfoToC": (0x083DB78A, 0, ""),
    "Channel_ViewRoomToC": (0x00B45AEA, 0,
        "str u32 str str str str u32 str str u32 u32 str str str u32 str"),
    "Channel_ViewRoomToS": (0x0414C26A, 0, "str u32 str"),
    "Chatting_ChatStringToC": (0x0791F29A, 0,
        "k57e:str member:str=k3e k38e:str k40e:u32 k41e:str"),
    "Chatting_ChatStringToS": (0x0D14CF4A, 0,
        "k57e:str member:str=k3e k38e:str k40e:u32 k41e:str"),
    "Chatting_HanChatStringToC": (0x035CFC1A, 0, "chat:{_HanchatFormat}"),
    "Chatting_HanChatStringToS": (0x08054C3A, 0, "chat:{_HanchatFormat}"),
    "Item_GetItemStateToC": (0x0C446ADA, 0, "u8 str [{_ItemState}]"),
    "Item_GetItemStateToS": (0x075BAC2A, 0, "member:str u8"),
    "Item_ProvokeSvcKorToC": (0x081E37FA, 1, "u32 str"),
    "Item_ProvokeSvcKorToS": (0x081E87FA, 1, "u32 str"),
    "Item_ReserveChanceSvcKorToC": (0x05750DDA, 1, "str u32 str str u8 u32"),
    "Item_ReserveChanceSvcKorToS": (0x00E7500A, 1, "str u8"),
    "LayerAlignment": (0x09D0057A, 0, ""),
    "Notice_NoticeToC": (0x0D2126EA, 0, "str str str str u32 u32"),
    "RoomOrderTypePostGameStartTetris": (0x0155863A, 3, ""),
    "RoomOrderTypeSetSkipCountTetris": (0x0C1CF96A, 3, "u8 u32"),
    "RoomOrderTypeShadowEndTetris": (0x0FB0487A, 3, "u8"),
    "RoomOrderTypeShadowTimeoverTetris": (0x0711203A, 3, ""),
    "Room_AddMemberSvcKorToC": (0x02ED64DA, 1, "u8 u8 u8"),
    "Room_AddMemberToC": (0x0619233A, 0,
        "host:str=k50e k57e:str seat:u32=k58e member:str=k3e k7e:str k8e:str k11e:str "
        "k10e:u32 k12e:str k34e:u64 k13e:u64 k26e:u32 k27e:u32 k28e:u32 k29e:u32 k30e:u32 "
        "k31e:u32 k32e:str k33e:u32 k102e:str k37e:str k38e:str k52e:str k53e:u32 k35e:u32 "
        "k153e:[u32]"),
    "Room_AlterRoomToS": (0x0D31FDDA, 0,
        "room:u32=k42e title:str=k45e password:str=k67e options:str=k46e str"),
    "Room_AvatarChangeSvcKorToC": (0x0E423E5A, 1, "str str"),
    "Room_AvatarChangeSvcKorToS": (0x0E421B5A, 1, "str str"),
    "Room_CanLockThisRoomToC": (0x0841038A, 0, "u32 str u32"),
    "Room_ClientOptionInfoSvcKorToC": (0x089BEB5A, 1, "str [u32]"),
    "Room_ClientOptionInfoSvcKorToS": (0x0299935A, 1,
        "str [{_ClientOptionInfoSlotSvcKor}]"),
    "Room_ComplaintSvcKorToS": (0x079D42FA, 1,
        "game_id:str reporter:str u32 reason:str chat:[{_ChatInfo}] reported:str"),
    "Room_ConnectTypeErrorToC": (0x000CA58A, 0, "u32 str u32"),
    "Room_DeleteMemberToC": (0x0E50895A, 0,
        "host:str=k50e k57e:str seat:u32=k58e member:str=k3e k8e:str"),
    "Room_DetectGhostToC": (0x08FEB30A, 0, "u32"),
    "Room_DetectGhostToS": (0x090EB30A, 0, "u32"),
    "Room_EnterRoomToC": (0x0974DCEA, 0, "result:str=k1e failcode:u32 error:str=k2e"),
    "Room_EnterRoomToS": (0x09A5347A, 0,
        "room:u32=k42e title:str=k45e password:str=k67e k127e:u32 limit:u32=k66e "
        "options:str=k46e k82e:str k57e:str k200e:str seat:u32=k58e member:str=k3e "
        "k52e:str k53e:u32 u32"),
    "Room_ExitRoomToS": (0x0510821A, 0, "str u32 member:str str"),
    "Room_GaeaGameValueSvcKorToS": (0x09C5368A, 1, "[{_GaeaGameValue}]"),
    "Room_GaeaPrizeDataSvcKorToC": (0x025A9BEA, 1,
        "str u32 u32 str u64 u64 u64 u64 u64 str"),
    "Room_GaeaPromotionDataSvcKorToC": (0x091B06CA, 1,
        "str [{_PromotionMastInfoSvcKor}] [{_PromotionUserInfoSvcKor}] str"),
    "Room_GameReportSvcKorToC": (0x034AF4BA, 1, "[{_MemberScoreReportSvcKor}]"),
    "Room_GameReportToC": (0x0EC0F66A, 0,
        "result:str=k1e failcode:u32 members:[{_MemberScoreReport}]"),
    "Room_GameReportToS": (0x0B81FF1A, 0,
        "game_id:str sub_id:str channel_id:str room:str str u8 u8 scores:[{_MemberScore}] "
        "str"),
    "Room_GetMemberListSvcKorToC": (0x086ECFCA, 1, "[{_MemberInfoRoomSvcKor}]"),
    "Room_GetMemberListToC": (0x03753C2A, 0,
        "k25e:u32 creator:str=k116e host:str=k50e k103e:u8 k104e:u8 member:str=k3e "
        "members:[{_MemberInfoRoom}]"),
    "Room_GetMemberListTodayMatchInfoToC": (0x0DC458FA, 0, "[{_MemberTodayMatchInfo}]"),
    "Room_GetRoomInfoToC": (0x02C1F9DA, 0, "info:{_RoomInfo}"),
    "Room_ItemMemberGameInfoResultToC": (0x00B3EE4A, 0, "u8 u32"),
    "Room_ItemUsePowerChanceSvcKorToC": (0x0922038A, 1, "u32 u32"),
    "Room_ItemUsePowerChanceToC": (0x0BBFEBAA, 0, ""),
    "Room_ItemUseRecoveryItemSvcKorToC": (0x0CA3FA3A, 1, "u32"),
    "Room_ItemUseRecoveryItemToC": (0x0250A3FA, 0, ""),
    "Room_MemberGameInfoResultToC": (0x015F129A, 0, "u8"),
    "Room_MoneyRecoveredToC": (0x04065EDA, 0, "str u8 str u64 u32 u64 str str u32"),
    "Room_NotMatchZeroSum": (0x0611580A, 0, "u32 u8 u32 str"),
    "Room_NoticeToS": (0x0E922B1A, 0, "str str str u32 u32 str str"),
    "Room_OrderTypeAbnormalEndTetris": (0x035463CA, 3, "u8"),
    "Room_OrderTypeAdjustStableTetris": (0x0638096A, 3, "u8"),
    "Room_OrderTypeAutoEnterSingleModeRoomTetrisToC": (0x0DF37B3A, 3,
        "member:str room:u32=k42e password:str=k67e title:str=k45e options:str=k46e "
        "k127e:u32 limit:u32=k66e k200e:str k69e:u32 game_id:str=k22e sub_id:str=k23e "
        "channel_id:str=k24e result:str u32 str game_host:str=k52e game_port:u32=k53e "
        "k82e:str"),
    "Room_OrderTypeAutoEnterSingleModeRoomTetrisToS": (0x031AC76A, 3,
        "member:str room:u32=k42e password:str=k67e title:str=k45e options:str=k46e "
        "k127e:u32 limit:u32=k66e k200e:str k69e:u32 game_id:str=k22e sub_id:str=k23e "
        "channel_id:str=k24e"),
    "Room_OrderTypeAvgAttackSpeedTetrisToS": (0x0A80A82A, 3, ""),
    "Room_OrderTypeBasicDataTetris": (0x083D754A, 3,
        "u8 u8 u8 u8 u8 u8 [u8] [u8] [u8] [u8] [u8] u8 u32 u8"),
    "Room_OrderTypeChangeTeamTetris": (0x02BDF0EA, 3, "u8 u8"),
    "Room_OrderTypeCheckBombTetris": (0x089FAA2A, 3, "u8"),
    "Room_OrderTypeCheckCollapseTetris": (0x0772EEBA, 3, "u8 u8 u8"),
    "Room_OrderTypeComboTetris": (0x06F767AA, 3, "u8 u16 u8"),
    "Room_OrderTypeForceBanishTetris": (0x080EC7EA, 3, "u8 u32 u8 u32 u8 u32"),
    "Room_OrderTypeGageInfoTetris": (0x00DD6F7A, 3, "u32 blob blob"),
    "Room_OrderTypeGameEndOkTetris": (0x05867BBA, 3, "u8"),
    "Room_OrderTypeGameInfoToC": (0x0478EA8A, 3, "u8 u8"),
    "Room_OrderTypeGameInfoToS": (0x04E7CFAA, 3, ""),
    "Room_OrderTypeGameReportTetrisToC": (0x0BBEC0FA, 3,
        "room:u32 reports:[{_TetrisMemberGameReport}]"),
    "Room_OrderTypeGameStartOkTetris": (0x0789A48A, 3, "u8"),
    "Room_OrderTypeGarbageSendTetris": (0x09F740FA, 3, "u8 u8 u8 u8"),
    "Room_OrderTypeIAmClearTetris": (0x0F42207A, 3, "u32 u8 u8"),
    "Room_OrderTypeIMSITetris": (0x00313F9A, 3, "u8"),
    "Room_OrderTypeIWillDieTetris": (0x0FE1E36A, 3,
        "seat:u8 u8 u32 u32 u32 u32 u32 f32 u32 u32 u32 u32 f32 u8 u8 f32 u32 u32 f32 f32"),
    "Room_OrderTypeItemApplyTetris": (0x057312EA, 3, "u8 u8 u8"),
    "Room_OrderTypeItemGetTetris": (0x0CA9558A, 3, "u8 u8 u8"),
    "Room_OrderTypeItemReflectTetris": (0x067BF88A, 3, "u8 u8 u8"),
    "Room_OrderTypeItemRemoveTetris": (0x054782CA, 3, "u8 u8"),
    "Room_OrderTypeItemSendTetris": (0x0DA3892A, 3, "u8 u8 u8 u8 u8 u8 u32"),
    "Room_OrderTypeItemStealTetris": (0x01463AAA, 3, "u8 u8"),
    "Room_OrderTypeItemStoleTetris": (0x02AB16EA, 3, "u8 u8 u8"),
    "Room_OrderTypeItemStolenTetris": (0x077820CA, 3, "u8 u8 u8 u8 u8"),
    "Room_OrderTypeItemUseTetris": (0x0488E10A, 3, "u8 u8 u8 u8 u8 u8"),
    "Room_OrderTypeLetsGameEndTetrisToC": (0x0A161E3A, 3,
        "str u32 reports:[{_TetrisGameReport}]"),
    "Room_OrderTypeLetsGameStartOkTetris": (0x008A128A, 3,
        "map:str place:u32 cells:[u8] unknown1:u32 unknown2:u8 players:[str] flags:[u8] u8"),
    "Room_OrderTypeLetsGameStartTetris": (0x010016CA, 3,
        "kind:u8 map:str place:u32 cells:[u8] unknown1:u32 unknown2:u8 players:[str] "
        "flags:[u8]"),
    "Room_OrderTypeLineUpTetris": (0x08DA6E0A, 3, "u32 u32 u8 u8 u8"),
    "Room_OrderTypeMapSetSyncTetris": (0x053A6F8A, 3, "u8 u8"),
    "Room_OrderTypeMapSetTetris": (0x06D289DA, 3,
        "seat:u8 name:str cells:[u8] random:u32 unknown1:u8 unknown2:u8"),
    "Room_OrderTypeMapSetTetrisToC": (0x017AC2FA, 3,
        "seat:u8 name:str random:u32 unknown1:u8 unknown2:u8"),
    "Room_OrderTypeMapSetTetrisToS": (0x05D396AA, 3,
        "seat:u8 place:u32 random:u32 unknown1:u8 unknown2:u8"),
    "Room_OrderTypeMapUpdateTetris": (0x0EB41DDA, 3, "u8 str"),
    "Room_OrderTypeMiniGameReportTetrisToC": (0x01EEA95A, 3,
        "str u32 u32 u32 u32 u32 u32 str u32 {_TetrisMemberGameReport}"),
    "Room_OrderTypeMissionCompleteTetrisToC": (0x077F299A, 3, "u32 str"),
    "Room_OrderTypePolyMinoPutPieceTetris": (0x0D47992A, 3, "u8 u32 [u8] u32 u32"),
    "Room_OrderTypePolyMinoPutTetris": (0x07455B2A, 3, "u8 u32 [u8] u32 u32"),
    "Room_OrderTypeRankOfMeTetris": (0x0F355AFA, 3, "u8 u8 u32"),
    "Room_OrderTypeRequestBanishMemberTetris": (0x07FE41EA, 3, "str str u32"),
    "Room_OrderTypeResponseBanishMemberTetris": (0x048CBFBA, 3, "str str str u8"),
    "Room_OrderTypeRoomInfoTetris": (0x06EC6BAA, 3, "u8 u8"),
    "Room_OrderTypeRoomOptionRelay": (0x0613084A, 3, "u32 str"),
    "Room_OrderTypeSetEmblemTetrisToC": (0x0B45BE6A, 3, "u32"),
    "Room_OrderTypeSetSpeedLevelTetris": (0x0F5DE7AA, 3, "u8 u8 u8 u8"),
    "Room_OrderTypeSingleModeGameReportTetrisToC": (0x0EE1D56A, 3,
        "member:str str result:u32 report:{_TetrisMemberGameReport} "
        "standing:{_SingleModeInfo}"),
    "Room_OrderTypeSingleModeGameReportTetrisToS": (0x05BCDF3A, 3,
        "member:str sub_id:str=k23e channel_id:str=k24e room:str=k42e mode:u32 value:u32 "
        "completed:u8 u32 u32 u32"),
    "Room_OrderTypeSingleModePolyMinoPutTetrisToS": (0x0CC4004A, 3, "u32 u32 u32 u32"),
    "Room_OrderTypeStartNewGameTetrisToC": (0x06FE5D0A, 3, "items:[{_UseAbleItem}]"),
    "Room_OrderTypeSwitchMatrixTetris": (0x05ECF53A, 3, "u8 u8 [u8] [u8] u8 u8"),
    "Room_OrderTypeSwitchResultTetris": (0x0396E89A, 3, "u8 u8 [u8]"),
    "Room_OrderTypeTeamSetAutoTetris": (0x07A942BA, 3, "u8 u8"),
    "Room_OrderTypeTon10Tetris": (0x06A97B6A, 3, "u8 u32 u32"),
    "Room_OrderTypeTotalAvgAttackSpeedTetrisToC": (0x0AEE62BA, 3, "str u32 u32"),
    "Room_OrderTypeTriTetTetris": (0x0F0F2C7A, 3, "u8 u32 u32 u32"),
    "Room_OrderTypeUseHoldItemTetrisToS": (0x0B0EE19A, 3, "str"),
    "Room_ReqBanishMemberToC": (0x0BC3C22A, 0, "member:str=k3e"),
    "Room_ReqBanishMemberToS": (0x0A13C22A, 0, "member:str"),
    "Room_ReserveBanishToC": (0x0378FE8A, 0, "str u32 str"),
    "Room_RoomEventToC": (0x0746468A, 0, "str str str str"),
    "Room_SetRoomStateToS": (0x0A58424A, 0, "u32"),
    "Room_ShutdownTimeToC": (0x046D8D0A, 0, "u32 u32 u32"),
    "Room_StartNewGameSvcKorToC": (0x013AA2DA, 1, "members:[{_MemberInfoStartNewGame}]"),
    "Room_StartNewGameToC": (0x0F809B5A, 0, ""),
    "Room_StartNewGameToS": (0x072585BA, 0, "k59e:str"),
    "Room_ViewerToPlayerToC": (0x00F8597A, 0, "str str u32 u32"),
    "Room_ViewerToPlayerToS": (0x0919595A, 0, "str"),
    "Shop_ChangePointInfoToC": (0x0F62BA9A, 3, "kind:str str before:u64 amount:u64"),
    "Shop_GetCouponListToC": (0x071E230A, 3, "[{_Coupon}]"),
    "Shop_GetInventoryInfoToC": (0x00A1CEBA, 3,
        "items:{_Inventory} emblems:{_Inventory} titles:{_Inventory} "
        "gifts:{_GiftInventory} membership:{_MemberShipInfo} points:[{_Point}] now:str"),
    "Shop_GetInventoryInfoToS": (0x04762CEA, 3, ""),
    "Shop_GetPointInfoToC": (0x0379B2EA, 3, "kind:str str amount:u64"),
    "Shop_GetPointInfoToS": (0x0353DC1A, 3, "kind:str"),
    "Shop_GetShopInfoToC": (0x04441EBA, 3,
        "str boards:[{_Board}] groups:[{_ProductGroup}] products:[{_Product}] "
        "missions:[{_MissionProduct}]"),
    "Shop_GetShopInfoToS": (0x06AE698A, 3, ""),
    "Shop_ReqBuyProductToS": (0x00ACFC7A, 3,
        "code:str quantity:u32 str gift:u8 receiver:str message:str"),
    "Shop_RequestCanPurchaseToS": (0x0D166AFA, 3, "code:str"),
    "Shop_RequestChangeLiqidMethodToS": (0x004B1C1A, 3, "u64"),
    "Shop_RequestReserveSurrenderToS": (0x061406EA, 3, "u64 u8"),
    "Shop_RequestUseGiftToS": (0x040DDB8A, 3, "u64 str str"),
    "Shop_RequestUseHappyCubeHammerToS": (0x0D8CB5BA, 3, ""),
    "Shop_ResBuyProductToC": (0x0808E5FA, 3,
        "code:str quantity:u32 gift:u8 str receiver:str result:u32 error:str status:str "
        "notice:str"),
    "Shop_ResponseCanPurchaseToC": (0x05D4007A, 3,
        "code:str result:u32 u64 causes:[{_CauseProduct}] refunds:[{_RefundProduct}]"),
    "Shop_ResponseChangeLiqidMethodToC": (0x058C2A9A, 3, "str str u32"),
    "Shop_ResponseReserveSurrenderToC": (0x0A6CA6BA, 3, "u64 u8 u32"),
    "Shop_ResponseUseGiftToC": (0x0B476FEA, 3, "u64 str str str u32"),
    "Shop_ResponseUseHappyCubeHammerToC": (0x00197BFA, 3, "str str str u32"),
}

# Extension classes: the client receives each under the ID of the message it extends,
# at its own layer, in the same batch as that message.
EXTENDS = {
    "Channel_OrderTypeAddMemberTetrisToC": "Channel_AddMemberToC",
    "Channel_OrderTypeGetMemberInfoTetrisToC": "Channel_GetMemberInfoToC",
    "Channel_OrderTypeGetMemberListTetrisToC": "Channel_GetMemberListToC",
    "Room_OrderTypeStartNewGameTetrisToC": "Room_StartNewGameToC",
    "Room_OrderTypeGameReportTetrisToC": "Room_GameReportToC",
    "Channel_AddMemberSvcKorToC": "Channel_AddMemberToC",
    "Channel_EnterChannelSvcKorToC": "Channel_EnterChannelToC",
    "Channel_GetMemberInfoSvcKorToC": "Channel_GetMemberInfoToC",
    "Channel_GetMemberListSvcKorToC": "Channel_GetMemberListToC",
    "Room_AddMemberSvcKorToC": "Room_AddMemberToC",
    "Room_GameReportSvcKorToC": "Room_GameReportToC",
    "Room_GetMemberListSvcKorToC": "Room_GetMemberListToC",
    "Room_ItemUsePowerChanceSvcKorToC": "Room_ItemUsePowerChanceToC",
    "Room_ItemUseRecoveryItemSvcKorToC": "Room_ItemUseRecoveryItemToC",
    "Room_StartNewGameSvcKorToC": "Room_StartNewGameToC",
}

# TPack and the CDS directory: plain frames of one message each, no layers.
PLAIN = {
    "TPack_AuthSessionToS": (0x0CF7BD9A, "method:str context:u32"),
    "TPack_AuthSessionToC": (0x0A36B7BA, "method:str context:u32 str str result:i32"),
    "TPack_LoginTPackToS": (0x0B60835A, "method:str context:u32"),
    "TPack_LoginTPackToC": (0x05E78E3A, "method:str context:u32 str str result:i32 str i32 i64"),
    "CDS_ReqSelect": (0x05740F6A, "transaction:u32 table:str"),
    "CDS_AnsSelect": (0x08D1A6DA, "transaction:u32 error:i32 columns:[str] rows:[[str]]"),
}
