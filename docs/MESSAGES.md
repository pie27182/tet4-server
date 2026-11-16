# Messages

Every message the client knows, with what the server does with it. Generated
by `python3 tools/messages.py` from the server's handler tables; do not edit by
hand. Every layout is in `tet4server/catalog.py`, and the server reads and
writes all of them; [`PROTOCOL.md`](PROTOCOL.md) describes the ones in use.

73 not sent | 47 sent | 42 passed to the room | 34 answered | 16 not implemented | 11 Hangame Korea's own services (avatar, reports, Gaea, events), not this game | 8 needs no reply | 2 other launchers' entry; this client enters by user id.

| ID | Message | Direction | Server |
|---|---|---|---|
| `0x008500CA` | AuthToC | server → client | sent |
| `0x0365C03A` | AuthToS | client → server | answered |
| `0x04B61A2A` | ChannelOrderTypeSingleModeRoomInfoTetrisToC | server → client | not sent |
| `0x01E0041A` | Channel_AddMemberSvcKorToC | server → client | not sent |
| `0x0AB84D0A` | Channel_AddMemberToC | server → client | sent |
| `0x09C4D0BA` | Channel_AutoEnterRoomToC | server → client | sent |
| `0x00233D9A` | Channel_AutoEnterRoomToS | client → server | answered |
| `0x0293164A` | Channel_AvatarChangeSvcKorToC | server → client | not sent |
| `0x0293954A` | Channel_AvatarChangeSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x0503600A` | Channel_BanishToC | server → client | not sent |
| `0x0699B22A` | Channel_CheckCharacterIdExistToC | server → client | not sent |
| `0x0384414A` | Channel_CheckCharacterIdExistToS | client → server | not implemented: choosing a nickname |
| `0x0F02FE3A` | Channel_CheckUserIdToC | server → client | not sent |
| `0x041A6B6A` | Channel_CheckUserIdToS | client → server | not implemented: choosing a nickname |
| `0x0E0B0A2A` | Channel_ClientOptionInfoSvcKorToC | server → client | not sent |
| `0x04AB113A` | Channel_ClientOptionInfoSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x0C8C6FDA` | Channel_ComplaintAgreeSvcKorToC | server → client | not sent |
| `0x0C8C3FDA` | Channel_ComplaintAgreeSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x0A57CA8A` | Channel_ComplaintSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x0B1B980A` | Channel_CouponCountToC | server → client | sent |
| `0x0089556A` | Channel_CouponCountToS | client → server | answered |
| `0x0A80143A` | Channel_CreateRoomToC | server → client | sent |
| `0x0CA9895A` | Channel_CreateRoomToS | client → server | answered |
| `0x0324A0DA` | Channel_DeleteMemberToC | server → client | sent |
| `0x082B635A` | Channel_DetectGhostToC | server → client | not sent |
| `0x0FBB635A` | Channel_DetectGhostToS | client → server | not implemented: the duplicate-client check |
| `0x0696068A` | Channel_EnterChannelByUserIdImsiToS | client → server | answered |
| `0x0696068A` | Channel_EnterChannelByUserIdToS | client → server | answered |
| `0x08579CBA` | Channel_EnterChannelErrorToC | server → client | not sent |
| `0x0793DB4A` | Channel_EnterChannelSvcKorToC | server → client | not sent |
| `0x00C0FC8A` | Channel_EnterChannelToC | server → client | sent |
| `0x0D831AAA` | Channel_EnterChannelToS | client → server | other launchers' entry; this client enters by user id |
| `0x0DA8E7EA` | Channel_EnterChannelWithTicketToC | server → client | not sent |
| `0x0211318A` | Channel_EnterChannelWithTicketToS | client → server | other launchers' entry; this client enters by user id |
| `0x07F6F8CA` | Channel_ExitChannelToC | server → client | not sent |
| `0x0A75AF8A` | Channel_ExitChannelToS | client → server | needs no reply: the connection closes after it |
| `0x07BF049A` | Channel_GaeaGameValueSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x0BAE4A1A` | Channel_GaeaPrizeDataSvcKorToC | server → client | not sent |
| `0x0E0E045A` | Channel_GaeaPromotionDataSvcKorToC | server → client | not sent |
| `0x08F1F2DA` | Channel_GameJoinRoomToC | server → client | sent |
| `0x0AE830EA` | Channel_GameJoinRoomToS | client → server | answered |
| `0x0F78858A` | Channel_GetMemberInfoSvcKorToC | server → client | not sent |
| `0x060BC39A` | Channel_GetMemberInfoToC | server → client | sent |
| `0x0651FEBA` | Channel_GetMemberListSvcKorToC | server → client | not sent |
| `0x06B816EA` | Channel_GetMemberListToC | server → client | sent |
| `0x0AE3BBDA` | Channel_GetMemberListToS | client → server | answered |
| `0x0EC7A02A` | Channel_GetMemberListTodayMatchInfoToC | server → client | not sent |
| `0x048F27FA` | Channel_GetMemberShipStateSvcKorToC | server → client | not sent |
| `0x0226968A` | Channel_GetRoomListToC | server → client | sent |
| `0x0DDA299A` | Channel_GetRoomListToS | client → server | answered |
| `0x0FAB330A` | Channel_GetUserIdByMemberIdToS | client → server | answered |
| `0x0A80E29A` | Channel_GetUserIdToC | server → client | sent |
| `0x08E980CA` | Channel_InviteGameToMemberToC | server → client | sent |
| `0x0264355A` | Channel_InviteGameToMemberToS | client → server | answered |
| `0x0AE7C20A` | Channel_LevelUpRewardToC | server → client | not sent |
| `0x0F05E5AA` | Channel_MakeUserIdToC | server → client | not sent |
| `0x02FAB30A` | Channel_MakeUserIdToS | client → server | not implemented: choosing a nickname |
| `0x005216CA` | Channel_OrderTypeAddMemberTetrisToC | server → client | sent |
| `0x0F6AFA1A` | Channel_OrderTypeChangeDisplayMemberInfoToC | server → client | sent |
| `0x08DB6E9A` | Channel_OrderTypeChangeDisplayMemberInfoToS | client → server | answered |
| `0x0719542A` | Channel_OrderTypeChangeUserIdTetrisToC | server → client | not sent |
| `0x06498E7A` | Channel_OrderTypeChangeUserIdTetrisToS | client → server | not implemented: the nickname change item |
| `0x0C80B99A` | Channel_OrderTypeDayCntInfoTetrisToC | server → client | sent |
| `0x03C4027A` | Channel_OrderTypeFriendMemberInfoTetrisToC | server → client | not sent |
| `0x0429872A` | Channel_OrderTypeFriendMemberInfoTetrisToS | client → server | not implemented: friends |
| `0x0C3B49AA` | Channel_OrderTypeGetDisplayMemberInfoTetrisToC | server → client | sent |
| `0x0E4772BA` | Channel_OrderTypeGetDisplayMemberInfoTetrisToS | client → server | answered |
| `0x0B88FCCA` | Channel_OrderTypeGetMemberInfoTetrisToC | server → client | sent |
| `0x01F13F8A` | Channel_OrderTypeGetMemberListTetrisToC | server → client | sent |
| `0x085113EA` | Channel_OrderTypeImsiCharacterIdTetrisToC | server → client | not sent |
| `0x0AA3643A` | Channel_OrderTypeMissionCompleteTetrisToC | server → client | not sent |
| `0x0BB5D81A` | Channel_OrderTypeRefreshMemberToC | server → client | not sent |
| `0x05F1155A` | Channel_OrderTypeRefreshMemberToS | client → server | not implemented |
| `0x0928E8BA` | Channel_OrderTypeSingleModeResultMemberTetrisToC | server → client | not sent |
| `0x0B600E5A` | Channel_RequestDeleteAliasToS | client → server | answered |
| `0x01DF37EA` | Channel_RequestDeleteEmblemToS | client → server | answered |
| `0x0478479A` | Channel_ReserveBanishToC | server → client | not sent |
| `0x09E9027A` | Channel_ResponseDeleteAliasToC | server → client | sent |
| `0x0DFFF7CA` | Channel_ResponseDeleteEmblemToC | server → client | sent |
| `0x02593F5A` | Channel_ResponseInviteGameToC | server → client | sent |
| `0x02163F5A` | Channel_ResponseInviteGameToS | client → server | answered |
| `0x0A680DDA` | Channel_RoomInfoToC | server → client | sent |
| `0x0ED42B6A` | Channel_SearchMemberToC | server → client | not sent |
| `0x0C81679A` | Channel_SendErrorToMemberToC | server → client | not sent |
| `0x0E33181A` | Channel_ShutdownTimeToC | server → client | not sent |
| `0x0C6600AA` | Channel_TicketReissueToC | server → client | not sent |
| `0x0A101CBA` | Channel_TicketReissueToS | client → server | needs no reply: sent periodically, the session goes on |
| `0x083DB78A` | Channel_TodayMatchInfoToC | server → client | not sent |
| `0x00B45AEA` | Channel_ViewRoomToC | server → client | not sent |
| `0x0414C26A` | Channel_ViewRoomToS | client → server | not implemented: watching a room from the lobby |
| `0x0791F29A` | Chatting_ChatStringToC | server → client | sent |
| `0x0D14CF4A` | Chatting_ChatStringToS | client → server | answered |
| `0x035CFC1A` | Chatting_HanChatStringToC | server → client | sent |
| `0x08054C3A` | Chatting_HanChatStringToS | client → server | answered |
| `0x0C446ADA` | Item_GetItemStateToC | server → client | sent |
| `0x075BAC2A` | Item_GetItemStateToS | client → server | answered |
| `0x081E37FA` | Item_ProvokeSvcKorToC | server → client | not sent |
| `0x081E87FA` | Item_ProvokeSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x05750DDA` | Item_ReserveChanceSvcKorToC | server → client | not sent |
| `0x00E7500A` | Item_ReserveChanceSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x09D0057A` | LayerAlignment | in a room | sent |
| `0x0D2126EA` | Notice_NoticeToC | server → client | not sent |
| `0x0155863A` | RoomOrderTypePostGameStartTetris | in a room | needs no reply |
| `0x0C1CF96A` | RoomOrderTypeSetSkipCountTetris | in a room | passed to the room |
| `0x0FB0487A` | RoomOrderTypeShadowEndTetris | in a room | passed to the room |
| `0x0711203A` | RoomOrderTypeShadowTimeoverTetris | in a room | passed to the room |
| `0x02ED64DA` | Room_AddMemberSvcKorToC | server → client | not sent |
| `0x0619233A` | Room_AddMemberToC | server → client | sent |
| `0x0D31FDDA` | Room_AlterRoomToS | client → server | answered |
| `0x0E423E5A` | Room_AvatarChangeSvcKorToC | server → client | not sent |
| `0x0E421B5A` | Room_AvatarChangeSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x0841038A` | Room_CanLockThisRoomToC | server → client | not sent |
| `0x089BEB5A` | Room_ClientOptionInfoSvcKorToC | server → client | not sent |
| `0x0299935A` | Room_ClientOptionInfoSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x079D42FA` | Room_ComplaintSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x000CA58A` | Room_ConnectTypeErrorToC | server → client | not sent |
| `0x0E50895A` | Room_DeleteMemberToC | server → client | sent |
| `0x08FEB30A` | Room_DetectGhostToC | server → client | not sent |
| `0x090EB30A` | Room_DetectGhostToS | client → server | not implemented: the duplicate-client check |
| `0x0974DCEA` | Room_EnterRoomToC | server → client | sent |
| `0x09A5347A` | Room_EnterRoomToS | client → server | answered |
| `0x0510821A` | Room_ExitRoomToS | client → server | answered |
| `0x09C5368A` | Room_GaeaGameValueSvcKorToS | client → server | Hangame Korea's own services (avatar, reports, Gaea, events), not this game |
| `0x025A9BEA` | Room_GaeaPrizeDataSvcKorToC | server → client | not sent |
| `0x091B06CA` | Room_GaeaPromotionDataSvcKorToC | server → client | not sent |
| `0x034AF4BA` | Room_GameReportSvcKorToC | server → client | not sent |
| `0x0EC0F66A` | Room_GameReportToC | server → client | sent |
| `0x0B81FF1A` | Room_GameReportToS | client → server | needs no reply: Single Mode's result goes with its Tetris report |
| `0x086ECFCA` | Room_GetMemberListSvcKorToC | server → client | not sent |
| `0x03753C2A` | Room_GetMemberListToC | server → client | not sent |
| `0x0DC458FA` | Room_GetMemberListTodayMatchInfoToC | server → client | not sent |
| `0x02C1F9DA` | Room_GetRoomInfoToC | server → client | sent |
| `0x00B3EE4A` | Room_ItemMemberGameInfoResultToC | server → client | not sent |
| `0x0922038A` | Room_ItemUsePowerChanceSvcKorToC | server → client | not sent |
| `0x0BBFEBAA` | Room_ItemUsePowerChanceToC | server → client | not sent |
| `0x0CA3FA3A` | Room_ItemUseRecoveryItemSvcKorToC | server → client | not sent |
| `0x0250A3FA` | Room_ItemUseRecoveryItemToC | server → client | not sent |
| `0x015F129A` | Room_MemberGameInfoResultToC | server → client | not sent |
| `0x04065EDA` | Room_MoneyRecoveredToC | server → client | not sent |
| `0x0611580A` | Room_NotMatchZeroSum | in a room | not sent: a notice of HgCom3 the game has no use for |
| `0x0E922B1A` | Room_NoticeToS | client → server | not implemented: room notices |
| `0x035463CA` | Room_OrderTypeAbnormalEndTetris | in a room | passed to the room |
| `0x0638096A` | Room_OrderTypeAdjustStableTetris | in a room | passed to the room |
| `0x0DF37B3A` | Room_OrderTypeAutoEnterSingleModeRoomTetrisToC | server → client | sent |
| `0x031AC76A` | Room_OrderTypeAutoEnterSingleModeRoomTetrisToS | client → server | answered |
| `0x0A80A82A` | Room_OrderTypeAvgAttackSpeedTetrisToS | client → server | needs no reply: attack speeds are not kept |
| `0x083D754A` | Room_OrderTypeBasicDataTetris | in a room | passed to the room |
| `0x02BDF0EA` | Room_OrderTypeChangeTeamTetris | in a room | passed to the room |
| `0x089FAA2A` | Room_OrderTypeCheckBombTetris | in a room | passed to the room |
| `0x0772EEBA` | Room_OrderTypeCheckCollapseTetris | in a room | passed to the room |
| `0x06F767AA` | Room_OrderTypeComboTetris | in a room | passed to the room |
| `0x080EC7EA` | Room_OrderTypeForceBanishTetris | in a room | not sent: members are sent away with ReqBanishMemberToC |
| `0x00DD6F7A` | Room_OrderTypeGageInfoTetris | in a room | passed to the room |
| `0x05867BBA` | Room_OrderTypeGameEndOkTetris | in a room | passed to the room |
| `0x0478EA8A` | Room_OrderTypeGameInfoToC | server → client | not sent |
| `0x04E7CFAA` | Room_OrderTypeGameInfoToS | client → server | needs no reply |
| `0x0BBEC0FA` | Room_OrderTypeGameReportTetrisToC | server → client | sent |
| `0x0789A48A` | Room_OrderTypeGameStartOkTetris | in a room | passed to the room |
| `0x09F740FA` | Room_OrderTypeGarbageSendTetris | in a room | passed to the room |
| `0x0F42207A` | Room_OrderTypeIAmClearTetris | in a room | passed to the room |
| `0x00313F9A` | Room_OrderTypeIMSITetris | in a room | passed to the room |
| `0x0FE1E36A` | Room_OrderTypeIWillDieTetris | in a room | answered |
| `0x057312EA` | Room_OrderTypeItemApplyTetris | in a room | passed to the room |
| `0x0CA9558A` | Room_OrderTypeItemGetTetris | in a room | passed to the room |
| `0x067BF88A` | Room_OrderTypeItemReflectTetris | in a room | passed to the room |
| `0x054782CA` | Room_OrderTypeItemRemoveTetris | in a room | passed to the room |
| `0x0DA3892A` | Room_OrderTypeItemSendTetris | in a room | passed to the room |
| `0x01463AAA` | Room_OrderTypeItemStealTetris | in a room | passed to the room |
| `0x02AB16EA` | Room_OrderTypeItemStoleTetris | in a room | passed to the room |
| `0x077820CA` | Room_OrderTypeItemStolenTetris | in a room | passed to the room |
| `0x0488E10A` | Room_OrderTypeItemUseTetris | in a room | passed to the room |
| `0x0A161E3A` | Room_OrderTypeLetsGameEndTetrisToC | server → client | sent |
| `0x008A128A` | Room_OrderTypeLetsGameStartOkTetris | in a room | sent |
| `0x010016CA` | Room_OrderTypeLetsGameStartTetris | in a room | answered |
| `0x08DA6E0A` | Room_OrderTypeLineUpTetris | in a room | passed to the room |
| `0x053A6F8A` | Room_OrderTypeMapSetSyncTetris | in a room | passed to the room |
| `0x06D289DA` | Room_OrderTypeMapSetTetris | in a room | passed to the room |
| `0x017AC2FA` | Room_OrderTypeMapSetTetrisToC | server → client | sent |
| `0x05D396AA` | Room_OrderTypeMapSetTetrisToS | client → server | answered |
| `0x0EB41DDA` | Room_OrderTypeMapUpdateTetris | in a room | passed to the room |
| `0x01EEA95A` | Room_OrderTypeMiniGameReportTetrisToC | server → client | not sent |
| `0x077F299A` | Room_OrderTypeMissionCompleteTetrisToC | server → client | not sent |
| `0x0D47992A` | Room_OrderTypePolyMinoPutPieceTetris | in a room | passed to the room |
| `0x07455B2A` | Room_OrderTypePolyMinoPutTetris | in a room | passed to the room |
| `0x0F355AFA` | Room_OrderTypeRankOfMeTetris | in a room | passed to the room |
| `0x07FE41EA` | Room_OrderTypeRequestBanishMemberTetris | in a room | passed to the room |
| `0x048CBFBA` | Room_OrderTypeResponseBanishMemberTetris | in a room | passed to the room |
| `0x06EC6BAA` | Room_OrderTypeRoomInfoTetris | in a room | passed to the room |
| `0x0613084A` | Room_OrderTypeRoomOptionRelay | in a room | passed to the room |
| `0x0B45BE6A` | Room_OrderTypeSetEmblemTetrisToC | server → client | not sent |
| `0x0F5DE7AA` | Room_OrderTypeSetSpeedLevelTetris | in a room | passed to the room |
| `0x0EE1D56A` | Room_OrderTypeSingleModeGameReportTetrisToC | server → client | sent |
| `0x05BCDF3A` | Room_OrderTypeSingleModeGameReportTetrisToS | client → server | answered |
| `0x0CC4004A` | Room_OrderTypeSingleModePolyMinoPutTetrisToS | client → server | needs no reply: one per piece in Single Mode |
| `0x06FE5D0A` | Room_OrderTypeStartNewGameTetrisToC | server → client | sent |
| `0x05ECF53A` | Room_OrderTypeSwitchMatrixTetris | in a room | passed to the room |
| `0x0396E89A` | Room_OrderTypeSwitchResultTetris | in a room | passed to the room |
| `0x07A942BA` | Room_OrderTypeTeamSetAutoTetris | in a room | passed to the room |
| `0x06A97B6A` | Room_OrderTypeTon10Tetris | in a room | passed to the room |
| `0x0AEE62BA` | Room_OrderTypeTotalAvgAttackSpeedTetrisToC | server → client | not sent |
| `0x0F0F2C7A` | Room_OrderTypeTriTetTetris | in a room | passed to the room |
| `0x0B0EE19A` | Room_OrderTypeUseHoldItemTetrisToS | client → server | needs no reply |
| `0x0BC3C22A` | Room_ReqBanishMemberToC | server → client | sent |
| `0x0A13C22A` | Room_ReqBanishMemberToS | client → server | answered |
| `0x0378FE8A` | Room_ReserveBanishToC | server → client | not sent |
| `0x0746468A` | Room_RoomEventToC | server → client | not sent |
| `0x0A58424A` | Room_SetRoomStateToS | client → server | not implemented |
| `0x046D8D0A` | Room_ShutdownTimeToC | server → client | not sent |
| `0x013AA2DA` | Room_StartNewGameSvcKorToC | server → client | not sent |
| `0x0F809B5A` | Room_StartNewGameToC | server → client | sent |
| `0x072585BA` | Room_StartNewGameToS | client → server | answered |
| `0x00F8597A` | Room_ViewerToPlayerToC | server → client | not sent |
| `0x0919595A` | Room_ViewerToPlayerToS | client → server | not implemented: watching a room |
| `0x0F62BA9A` | Shop_ChangePointInfoToC | server → client | sent |
| `0x071E230A` | Shop_GetCouponListToC | server → client | not sent |
| `0x00A1CEBA` | Shop_GetInventoryInfoToC | server → client | sent |
| `0x04762CEA` | Shop_GetInventoryInfoToS | client → server | answered |
| `0x0379B2EA` | Shop_GetPointInfoToC | server → client | sent |
| `0x0353DC1A` | Shop_GetPointInfoToS | client → server | answered |
| `0x04441EBA` | Shop_GetShopInfoToC | server → client | sent |
| `0x06AE698A` | Shop_GetShopInfoToS | client → server | answered |
| `0x00ACFC7A` | Shop_ReqBuyProductToS | client → server | answered |
| `0x0D166AFA` | Shop_RequestCanPurchaseToS | client → server | answered |
| `0x004B1C1A` | Shop_RequestChangeLiqidMethodToS | client → server | not implemented: club payments (TP pays once) |
| `0x061406EA` | Shop_RequestReserveSurrenderToS | client → server | not implemented: club payments (TP pays once) |
| `0x040DDB8A` | Shop_RequestUseGiftToS | client → server | not implemented: gifts |
| `0x0D8CB5BA` | Shop_RequestUseHappyCubeHammerToS | client → server | not implemented: the Happy Cube |
| `0x0808E5FA` | Shop_ResBuyProductToC | server → client | sent |
| `0x05D4007A` | Shop_ResponseCanPurchaseToC | server → client | sent |
| `0x058C2A9A` | Shop_ResponseChangeLiqidMethodToC | server → client | not sent |
| `0x0A6CA6BA` | Shop_ResponseReserveSurrenderToC | server → client | not sent |
| `0x0B476FEA` | Shop_ResponseUseGiftToC | server → client | not sent |
| `0x00197BFA` | Shop_ResponseUseHappyCubeHammerToC | server → client | not sent |
