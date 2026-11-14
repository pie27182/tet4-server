/* ---- FUN_601206e0 @ 601206e0 size=440 ---- */

void FUN_601206e0(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *unaff_EBX;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uStack_48;
  uint uStack_44;
  int local_3c;
  int iStack_38;
  int iStack_34;
  IMessage_vftable *pIStack_30;
  undefined1 uStack_2c;
  int iStack_28;
  byte abStack_24 [8];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_6016d038;
  local_14 = ExceptionList;
  local_1c = DAT_6019445c ^ (uint)&uStack_48;
  ExceptionList = &local_14;
  local_3c = param_1;
  iVar3 = (**(code **)(*unaff_EBX + 0x1c))(DAT_6019445c ^ (uint)(abStack_24 + -0x2c));
  if (0xb < iVar3) {
    abStack_24[0] = 0;
    abStack_24[1] = 0;
    abStack_24[2] = 0;
    abStack_24[3] = 0;
    abStack_24[4] = 0;
    (**(code **)(*unaff_EBX + 4))(abStack_24,4);
    pbVar6 = abStack_24;
    pbVar4 = &DAT_60175884;
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_60120780:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_60120785;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_60120780;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_60120785:
    if (iVar3 == 0) {
      iVar3 = 0;
      uStack_44 = 0;
      do {
        uVar8 = uStack_44;
        iVar5 = (**(code **)(*unaff_EBX + 0xc))(&uStack_48,4);
        if (iVar5 < 4) break;
        uStack_48 = FUN_60122e60();
        iVar5 = local_3c;
        if (uStack_48 == 0x9d0057a) {
                    /* inlined constructor or destructor (approx location) for Cmd_LayerAlignment */
          pIStack_30 = (IMessage_vftable *)&Cmd_LayerAlignment::vftable;
          uStack_2c = 0;
          uStack_c = 0;
          iStack_28 = uStack_48;
          (*(code *)PTR_vfunction7_601758d0)();
          uStack_c = 0xffffffff;
                    /* inlined constructor or destructor (approx location) for XDR::IMessage */
          pIStack_30 = &XDR::IMessage::vftable;
        }
        else {
          if (iVar3 == 0) {
            piVar7 = (int *)(local_3c + 0x20);
            FUN_601209c0(&iStack_38,&uStack_48);
            iVar3 = *(int *)(iVar5 + 0x38);
            if ((*piVar7 == 0) || (*piVar7 != iStack_38)) {
              _invalid_parameter_noinfo();
            }
            if (iVar3 == iStack_34) break;
            iVar3 = FUN_6015bb50();
            iVar3 = iVar3 + 4;
            uVar8 = uStack_44;
          }
          if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc) >> 2) <= uVar8) {
            _invalid_parameter_noinfo();
          }
          pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + uVar8 * 4);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)();
          }
        }
        uStack_44 = uVar8 + 1;
      } while ((int)uStack_44 < 4);
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&uStack_48);
  return;
}



/* ---- FUN_601208a0 @ 601208a0 size=75 ---- */

void FUN_601208a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_6016d015;
  local_c = ExceptionList;
  local_4 = 0;
