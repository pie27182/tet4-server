/* ---- FUN_601204a0 @ 601204a0 size=571 ---- */

undefined4 __thiscall FUN_601204a0(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  IMessage_vftable *pIVar5;
  uint uVar6;
  char *_Src;
  char *_Src_00;
  int iVar7;
  deleting_destructor *pdVar8;
  int iVar9;
  undefined4 uStack_54;
  int iStack_4c;
  IMessage_vftable *pIStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_34 [24];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_6016d071;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  _Src = (char *)(**(code **)(*param_1 + 0xc))(DAT_6019445c ^ (uint)(abStack_34 + -0x2c));
  _Src_00 = (char *)(**(code **)(*param_1 + 8))();
  strcpy_s(&DAT_601990b0,0x104,_Src_00);
  strcat_s(&DAT_601990b0,0x104,"::");
  strcat_s(&DAT_601990b0,0x104,_Src);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_34,&DAT_601990b0);
  uStack_c = 0;
  FUN_601208f0((int *)&pIStack_48,abStack_34);
  uStack_c = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_34);
  pIVar5 = pIStack_48;
  uVar1 = *(uint *)((int)this + 0x18);
  if ((*(IMessage_vftable **)this == (IMessage_vftable *)0x0) ||
     (*(IMessage_vftable **)this != pIStack_48)) {
    _invalid_parameter_noinfo();
  }
  uVar6 = uStack_44;
  if (uVar1 == uStack_44) {
    ExceptionList = local_14;
    return 0x40000017;
  }
  (**(code **)(*param_2 + 8))(&DAT_60175884,4);
  if (pIVar5 == (IMessage_vftable *)0x0) {
    _invalid_parameter_noinfo();
    pdVar8 = (deleting_destructor *)0x0;
  }
  else {
    pdVar8 = pIVar5->deleting_destructor;
  }
  if (uVar6 == *(uint *)(pdVar8 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  uStack_54 = *(undefined4 **)(iStack_4c + 0x34);
  iVar9 = 0;
  if (*(undefined4 **)(iStack_4c + 0x38) < uStack_54) {
    _invalid_parameter_noinfo();
  }
  piVar2 = *(int **)(iStack_4c + 0x28);
  while( true ) {
    puVar3 = *(undefined4 **)(iStack_4c + 0x38);
    if (puVar3 < *(undefined4 **)(iStack_4c + 0x34)) {
      _invalid_parameter_noinfo();
    }
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)(iStack_4c + 0x28))) {
      _invalid_parameter_noinfo();
    }
    if (uStack_54 == puVar3) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (*(undefined4 **)(iVar7 + 0x10) <= uStack_54) {
      _invalid_parameter_noinfo();
    }
    pcVar4 = (code *)*uStack_54;
    if (pcVar4 == (code *)0x0) {
      iVar9 = iVar9 + 1;
    }
    else {
      for (; 0 < iVar9; iVar9 = iVar9 + -1) {
                    /* inlined constructor or destructor (approx location) for Cmd_LayerAlignment */
        pIStack_48 = (IMessage_vftable *)&Cmd_LayerAlignment::vftable;
        uStack_44 = uStack_44 & 0xffffff00;
        uStack_40 = 0x9d0057a;
        local_14 = (void *)0x1;
        (*(code *)PTR_vfunction6_601758cc)(param_2);
        local_14 = (void *)0xffffffff;
                    /* inlined constructor or destructor (approx location) for XDR::IMessage */
        pIStack_48 = &XDR::IMessage::vftable;
      }
      (*pcVar4)(param_1,param_2);
    }
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (*(undefined4 **)(iVar7 + 0x10) <= uStack_54) {
      _invalid_parameter_noinfo();
    }
    uStack_54 = uStack_54 + 1;
  }
  ExceptionList = pvStack_1c;
  return 0;
}



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
