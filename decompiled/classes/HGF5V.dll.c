// Module: HGF5V.dll
// ImageBase: 60a00000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_60a01000 @ 60a01000 size=30 ---- */

void __cdecl FUN_60a01000(char *param_1,size_t param_2,char *param_3,char param_4)

{
  vsprintf_s(param_1,param_2,param_3,&param_4);
  return;
}



/* ---- strcat_s @ 60a01020 size=6 ---- */

errno_t __cdecl strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a01020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = strcat_s(_Dst,_SizeInBytes,_Src);
  return eVar1;
}



/* ---- strcpy_s @ 60a01030 size=6 ---- */

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a01030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = strcpy_s(_Dst,_SizeInBytes,_Src);
  return eVar1;
}



/* ---- strncpy_s @ 60a01040 size=6 ---- */

errno_t __cdecl strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a01040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = strncpy_s(_Dst,_SizeInBytes,_Src,_MaxCount);
  return eVar1;
}



/* ---- _splitpath_s @ 60a01050 size=6 ---- */

errno_t __cdecl
_splitpath_s(char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,
            char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a01050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _splitpath_s(_FullPath,_Drive,_DriveSize,_Dir,_DirSize,_Filename,_FilenameSize,_Ext,
                       _ExtSize);
  return eVar1;
}



/* ---- GetWindowWidth @ 60a01060 size=7 ---- */

/* public: int __thiscall CF5App::GetWindowWidth(void) */

int __thiscall CF5App::GetWindowWidth(CF5App *this)

{
                    /* 0x1060  205  ?GetWindowWidth@CF5App@@QAEHXZ */
  return (this->CF5App_data).offset_0xa4;
}



/* ---- GetWindowHeight @ 60a01070 size=7 ---- */

/* public: int __thiscall CF5App::GetWindowHeight(void) */

int __thiscall CF5App::GetWindowHeight(CF5App *this)

{
                    /* 0x1070  204  ?GetWindowHeight@CF5App@@QAEHXZ */
  return (this->CF5App_data).offset_0xa8;
}



/* ---- scalar_deleting_destructor @ 60a01080 size=82 ---- */

CF5MiniChannelListView * __thiscall
CF5MiniChannelListView::scalar_deleting_destructor(CF5MiniChannelListView *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5MiniChannelListView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5MiniChannelListView *)this;
  }
  piVar1 = &this[-1].CF5MiniChannelListView_data.offset_0x8;
  _eh_vector_destructor_iterator_
            (this,0x10,this[-1].CF5MiniChannelListView_data.offset_0x8,~CF5MiniChannelListView);
  if ((param_1 & 1) != 0) {
    operator_delete__(piVar1);
  }
  return (CF5MiniChannelListView *)piVar1;
}



/* ---- CF5ChannelLobbyView @ 60a010e0 size=125 ---- */

/* public: __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView(class CF5ChannelLobbyView const &) */

CF5ChannelLobbyView * __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView(CF5ChannelLobbyView *this,CF5ChannelLobbyView *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10e0  4  ??0CF5ChannelLobbyView@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a124cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  (this->CF5ChannelLobbyView_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CF5ChannelLobbyView_data).field_0x4,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 8));
  local_4 = 0;
  (this->CF5ChannelLobbyView_data).offset_0x20 = *(int *)(param_1 + 0x24);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5ChannelLobbyView_data).field_0x24,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x28));
  (this->CF5ChannelLobbyView_data).offset_0x28 = *(undefined4 *)(param_1 + 0x2c);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 60a01160 size=59 ---- */

/* public: class CF5ChannelLobbyView & __thiscall CF5ChannelLobbyView::operator=(class
   CF5ChannelLobbyView const &) */

CF5ChannelLobbyView * __thiscall
CF5ChannelLobbyView::operator=(CF5ChannelLobbyView *this,CF5ChannelLobbyView *param_1)

{
                    /* 0x1160  51  ??4CF5ChannelLobbyView@@QAEAAV0@ABV0@@Z */
  (this->CF5ChannelLobbyView_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CF5ChannelLobbyView_data).field_0x4,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 8));
  (this->CF5ChannelLobbyView_data).offset_0x20 = *(int *)(param_1 + 0x24);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5ChannelLobbyView_data).field_0x24,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x28));
  (this->CF5ChannelLobbyView_data).offset_0x28 = *(undefined4 *)(param_1 + 0x2c);
  return (CF5ChannelLobbyView *)this;
}



/* ---- scalar_deleting_destructor @ 60a011a0 size=82 ---- */

CF5ChannelLobbyView * __thiscall
CF5ChannelLobbyView::scalar_deleting_destructor(CF5ChannelLobbyView *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5ChannelLobbyView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5ChannelLobbyView *)this;
  }
  puVar1 = &this[-1].CF5ChannelLobbyView_data.offset_0x28;
  _eh_vector_destructor_iterator_
            (this,0x30,this[-1].CF5ChannelLobbyView_data.offset_0x28,~CF5ChannelLobbyView);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5ChannelLobbyView *)puVar1;
}



/* ---- CF5GameView @ 60a01200 size=27 ---- */

/* public: __thiscall CF5GameView::CF5GameView(class CF5GameView const &) */

void __thiscall CF5GameView::CF5GameView(CF5GameView *this,CF5GameView *param_1)

{
                    /* 0x1200  22  ??0CF5GameView@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5GameView_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  (this->CF5GameView_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  return;
}



/* ---- operator= @ 60a01220 size=21 ---- */

/* public: class CF5GameView & __thiscall CF5GameView::operator=(class CF5GameView const &) */

CF5GameView * __thiscall CF5GameView::operator=(CF5GameView *this,CF5GameView *param_1)

{
                    /* 0x1220  59  ??4CF5GameView@@QAEAAV0@ABV0@@Z */
  (this->CF5GameView_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  (this->CF5GameView_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  return (CF5GameView *)this;
}



/* ---- scalar_deleting_destructor @ 60a01240 size=82 ---- */

CF5GameView * __thiscall CF5GameView::scalar_deleting_destructor(CF5GameView *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5GameView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5GameView *)this;
  }
  puVar1 = &this[-1].CF5GameView_data.offset_0x4;
  _eh_vector_destructor_iterator_(this,0xc,this[-1].CF5GameView_data.offset_0x4,~CF5GameView);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5GameView *)puVar1;
}



/* ---- CF5ChatView @ 60a012a0 size=39 ---- */

/* public: __thiscall CF5ChatView::CF5ChatView(class CF5ChatView const &) */

void __thiscall CF5ChatView::CF5ChatView(CF5ChatView *this,CF5ChatView *param_1)

{
                    /* 0x12a0  9  ??0CF5ChatView@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5ChatView_data).offset_0x0 = *(int *)(param_1 + 4);
  (this->CF5ChatView_data).offset_0x4 = *(undefined4 **)(param_1 + 8);
  (this->CF5ChatView_data).offset_0x8 = *(ViewType *)(param_1 + 0xc);
  (this->CF5ChatView_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  return;
}



/* ---- operator= @ 60a012d0 size=33 ---- */

/* public: class CF5ChatView & __thiscall CF5ChatView::operator=(class CF5ChatView const &) */

CF5ChatView * __thiscall CF5ChatView::operator=(CF5ChatView *this,CF5ChatView *param_1)

{
                    /* 0x12d0  53  ??4CF5ChatView@@QAEAAV0@ABV0@@Z */
  (this->CF5ChatView_data).offset_0x0 = *(int *)(param_1 + 4);
  (this->CF5ChatView_data).offset_0x4 = *(undefined4 **)(param_1 + 8);
  (this->CF5ChatView_data).offset_0x8 = *(ViewType *)(param_1 + 0xc);
  (this->CF5ChatView_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  return (CF5ChatView *)this;
}



/* ---- scalar_deleting_destructor @ 60a01300 size=82 ---- */

CF5ChatView * __thiscall CF5ChatView::scalar_deleting_destructor(CF5ChatView *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5ChatView(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5ChatView *)this;
  }
  puVar1 = &this[-1].CF5ChatView_data.offset_0xc;
  _eh_vector_destructor_iterator_(this,0x14,this[-1].CF5ChatView_data.offset_0xc,~CF5ChatView);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5ChatView *)puVar1;
}



/* ---- ~CF5MainFrmView @ 60a01360 size=11 ---- */

/* public: __thiscall CF5MainFrmView::CF5MainFrmView(class CF5MainFrmView const &) */

void __thiscall CF5MainFrmView::~CF5MainFrmView(CF5MainFrmView *this,CF5MainFrmView *param_1)

{
                    /* 0x1360  26  ??0CF5MainFrmView@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- operator= @ 60a01370 size=5 ---- */

/* public: struct tMapDeclare<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class CF5DialogRoot *> & __thiscall tMapDeclare<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   CF5DialogRoot *>::operator=(struct tMapDeclare<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *> const &) */

tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>
* __thiscall
tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
operator=(tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          *this,tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>
                *param_1)

{
                    /* 0x1370  50
                       ??4?$tMapDeclare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAEAAU0@ABU0@@Z
                       0x1370  61  ??4CF5MainFrmView@@QAEAAV0@ABV0@@Z */
  return (tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>
          *)this;
}



/* ---- CF5DialogCmp @ 60a01380 size=21 ---- */

/* public: __thiscall CF5DialogCmp::CF5DialogCmp(class CF5DialogCmp const &) */

void __thiscall CF5DialogCmp::CF5DialogCmp(CF5DialogCmp *this,CF5DialogCmp *param_1)

{
                    /* 0x1380  16  ??0CF5DialogCmp@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5DialogCmp_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  return;
}



/* ---- operator= @ 60a013a0 size=15 ---- */

/* public: class CF5DialogCmp & __thiscall CF5DialogCmp::operator=(class CF5DialogCmp const &) */

CF5DialogCmp * __thiscall CF5DialogCmp::operator=(CF5DialogCmp *this,CF5DialogCmp *param_1)

{
                    /* 0x13a0  56  ??4CF5DialogCmp@@QAEAAV0@ABV0@@Z */
  (this->CF5DialogCmp_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  return (CF5DialogCmp *)this;
}



/* ---- CF5MiniChannelListWnd @ 60a013b0 size=63 ---- */

/* public: __thiscall CF5MiniChannelListWnd::CF5MiniChannelListWnd(class CF5MiniChannelListWnd const
   &) */

void __thiscall
CF5MiniChannelListWnd::CF5MiniChannelListWnd
          (CF5MiniChannelListWnd *this,CF5MiniChannelListWnd *param_1)

{
                    /* 0x13b0  32  ??0CF5MiniChannelListWnd@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5MiniChannelListWnd_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CF5MiniChannelListWnd_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CF5MiniChannelListWnd_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  (this->CF5MiniChannelListWnd_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->CF5MiniChannelListWnd_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  (this->CF5MiniChannelListWnd_data).offset_0x14 = *(undefined4 *)(param_1 + 0x18);
  (this->CF5MiniChannelListWnd_data).offset_0x18 = *(undefined4 *)(param_1 + 0x1c);
  (this->CF5MiniChannelListWnd_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  return;
}



/* ---- operator= @ 60a013f0 size=57 ---- */

/* public: class CF5MiniChannelListWnd & __thiscall CF5MiniChannelListWnd::operator=(class
   CF5MiniChannelListWnd const &) */

CF5MiniChannelListWnd * __thiscall
CF5MiniChannelListWnd::operator=(CF5MiniChannelListWnd *this,CF5MiniChannelListWnd *param_1)

{
                    /* 0x13f0  63  ??4CF5MiniChannelListWnd@@QAEAAV0@ABV0@@Z */
  (this->CF5MiniChannelListWnd_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CF5MiniChannelListWnd_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CF5MiniChannelListWnd_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  (this->CF5MiniChannelListWnd_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->CF5MiniChannelListWnd_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  (this->CF5MiniChannelListWnd_data).offset_0x14 = *(undefined4 *)(param_1 + 0x18);
  (this->CF5MiniChannelListWnd_data).offset_0x18 = *(undefined4 *)(param_1 + 0x1c);
  (this->CF5MiniChannelListWnd_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  return (CF5MiniChannelListWnd *)this;
}



/* ---- CF5ChannelLobbyWnd @ 60a01430 size=171 ---- */

/* public: __thiscall CF5ChannelLobbyWnd::CF5ChannelLobbyWnd(class CF5ChannelLobbyWnd const &) */

void __thiscall
CF5ChannelLobbyWnd::CF5ChannelLobbyWnd(CF5ChannelLobbyWnd *this,CF5ChannelLobbyWnd *param_1)

{
                    /* 0x1430  7  ??0CF5ChannelLobbyWnd@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5ChannelLobbyWnd_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CF5ChannelLobbyWnd_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CF5ChannelLobbyWnd_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  (this->CF5ChannelLobbyWnd_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->CF5ChannelLobbyWnd_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  (this->CF5ChannelLobbyWnd_data).offset_0x14 = *(undefined4 *)(param_1 + 0x18);
  (this->CF5ChannelLobbyWnd_data).offset_0x18 = *(undefined4 *)(param_1 + 0x1c);
  (this->CF5ChannelLobbyWnd_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  (this->CF5ChannelLobbyWnd_data).offset_0x20 = *(undefined4 *)(param_1 + 0x24);
  (this->CF5ChannelLobbyWnd_data).offset_0x24 = *(undefined4 *)(param_1 + 0x28);
  (this->CF5ChannelLobbyWnd_data).offset_0x28 = *(undefined4 *)(param_1 + 0x2c);
  (this->CF5ChannelLobbyWnd_data).offset_0x2c = *(undefined4 *)(param_1 + 0x30);
  (this->CF5ChannelLobbyWnd_data).offset_0x30 = *(undefined4 *)(param_1 + 0x34);
  (this->CF5ChannelLobbyWnd_data).offset_0x34 = *(undefined4 *)(param_1 + 0x38);
  (this->CF5ChannelLobbyWnd_data).offset_0x38 = *(undefined4 *)(param_1 + 0x3c);
  (this->CF5ChannelLobbyWnd_data).offset_0x3c = *(undefined4 *)(param_1 + 0x40);
  (this->CF5ChannelLobbyWnd_data).offset_0x40 = *(undefined4 *)(param_1 + 0x44);
  (this->CF5ChannelLobbyWnd_data).offset_0x44 = *(undefined4 *)(param_1 + 0x48);
  (this->CF5ChannelLobbyWnd_data).offset_0x48 = *(undefined4 *)(param_1 + 0x4c);
  (this->CF5ChannelLobbyWnd_data).offset_0x4c = *(undefined4 *)(param_1 + 0x50);
  (this->CF5ChannelLobbyWnd_data).offset_0x50 = *(undefined4 *)(param_1 + 0x54);
  (this->CF5ChannelLobbyWnd_data).offset_0x54 = *(undefined4 *)(param_1 + 0x58);
  (this->CF5ChannelLobbyWnd_data).offset_0x58 = *(undefined4 *)(param_1 + 0x5c);
  (this->CF5ChannelLobbyWnd_data).offset_0x5c = *(undefined4 *)(param_1 + 0x60);
  (this->CF5ChannelLobbyWnd_data).offset_0x60 = *(undefined4 *)(param_1 + 100);
  (this->CF5ChannelLobbyWnd_data).offset_0x64 = *(undefined4 *)(param_1 + 0x68);
  return;
}



/* ---- operator= @ 60a014e0 size=165 ---- */

/* public: class CF5ChannelLobbyWnd & __thiscall CF5ChannelLobbyWnd::operator=(class
   CF5ChannelLobbyWnd const &) */

CF5ChannelLobbyWnd * __thiscall
CF5ChannelLobbyWnd::operator=(CF5ChannelLobbyWnd *this,CF5ChannelLobbyWnd *param_1)

{
                    /* 0x14e0  52  ??4CF5ChannelLobbyWnd@@QAEAAV0@ABV0@@Z */
  (this->CF5ChannelLobbyWnd_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CF5ChannelLobbyWnd_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CF5ChannelLobbyWnd_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  (this->CF5ChannelLobbyWnd_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->CF5ChannelLobbyWnd_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  (this->CF5ChannelLobbyWnd_data).offset_0x14 = *(undefined4 *)(param_1 + 0x18);
  (this->CF5ChannelLobbyWnd_data).offset_0x18 = *(undefined4 *)(param_1 + 0x1c);
  (this->CF5ChannelLobbyWnd_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  (this->CF5ChannelLobbyWnd_data).offset_0x20 = *(undefined4 *)(param_1 + 0x24);
  (this->CF5ChannelLobbyWnd_data).offset_0x24 = *(undefined4 *)(param_1 + 0x28);
  (this->CF5ChannelLobbyWnd_data).offset_0x28 = *(undefined4 *)(param_1 + 0x2c);
  (this->CF5ChannelLobbyWnd_data).offset_0x2c = *(undefined4 *)(param_1 + 0x30);
  (this->CF5ChannelLobbyWnd_data).offset_0x30 = *(undefined4 *)(param_1 + 0x34);
  (this->CF5ChannelLobbyWnd_data).offset_0x34 = *(undefined4 *)(param_1 + 0x38);
  (this->CF5ChannelLobbyWnd_data).offset_0x38 = *(undefined4 *)(param_1 + 0x3c);
  (this->CF5ChannelLobbyWnd_data).offset_0x3c = *(undefined4 *)(param_1 + 0x40);
  (this->CF5ChannelLobbyWnd_data).offset_0x40 = *(undefined4 *)(param_1 + 0x44);
  (this->CF5ChannelLobbyWnd_data).offset_0x44 = *(undefined4 *)(param_1 + 0x48);
  (this->CF5ChannelLobbyWnd_data).offset_0x48 = *(undefined4 *)(param_1 + 0x4c);
  (this->CF5ChannelLobbyWnd_data).offset_0x4c = *(undefined4 *)(param_1 + 0x50);
  (this->CF5ChannelLobbyWnd_data).offset_0x50 = *(undefined4 *)(param_1 + 0x54);
  (this->CF5ChannelLobbyWnd_data).offset_0x54 = *(undefined4 *)(param_1 + 0x58);
  (this->CF5ChannelLobbyWnd_data).offset_0x58 = *(undefined4 *)(param_1 + 0x5c);
  (this->CF5ChannelLobbyWnd_data).offset_0x5c = *(undefined4 *)(param_1 + 0x60);
  (this->CF5ChannelLobbyWnd_data).offset_0x60 = *(undefined4 *)(param_1 + 100);
  (this->CF5ChannelLobbyWnd_data).offset_0x64 = *(undefined4 *)(param_1 + 0x68);
  return (CF5ChannelLobbyWnd *)this;
}



/* ---- scalar_deleting_destructor @ 60a01590 size=82 ---- */

CF5ChannelLobbyWnd * __thiscall
CF5ChannelLobbyWnd::scalar_deleting_destructor(CF5ChannelLobbyWnd *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5ChannelLobbyWnd(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5ChannelLobbyWnd *)this;
  }
  puVar1 = &this[-1].CF5ChannelLobbyWnd_data.offset_0x64;
  _eh_vector_destructor_iterator_
            (this,0x6c,this[-1].CF5ChannelLobbyWnd_data.offset_0x64,~CF5ChannelLobbyWnd);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5ChannelLobbyWnd *)puVar1;
}



/* ---- CF5GameWnd::DisplayChatMessage @ 60a015f0 size=5 ---- */

/* public: virtual bool __thiscall CF5GameWnd::DisplayChatMessage(unsigned int,char const
   *,int,unsigned long,int,int,char *) */

bool __thiscall
CF5GameWnd::CF5GameWnd__DisplayChatMessage
          (CF5GameWnd *this,uint param_1,char *param_2,int param_3,ulong param_4,int param_5,
          int param_6,char *param_7)

{
                    /* 0x15f0  97  ?DisplayChatMessage@CF5GameWnd@@UAE_NIPBDHKHHPAD@Z */
  return true;
}



/* ---- CF5GameWnd::DisplayNoticeMessage @ 60a01600 size=5 ---- */

/* public: virtual bool __thiscall CF5GameWnd::DisplayNoticeMessage(char const *,int,int,char *,char
   *) */

bool __thiscall
CF5GameWnd::CF5GameWnd__DisplayNoticeMessage
          (CF5GameWnd *this,char *param_1,int param_2,int param_3,char *param_4,char *param_5)

{
                    /* 0x1600  98  ?DisplayNoticeMessage@CF5GameWnd@@UAE_NPBDHHPAD1@Z */
  return true;
}



/* ---- CF5GameWnd::DisplayStatusMessage @ 60a01610 size=5 ---- */

/* public: virtual bool __thiscall CF5GameWnd::DisplayStatusMessage(char const *,int,unsigned
   long,int,int,char *) */

bool __thiscall
CF5GameWnd::CF5GameWnd__DisplayStatusMessage
          (CF5GameWnd *this,char *param_1,int param_2,ulong param_3,int param_4,int param_5,
          char *param_6)

{
                    /* 0x1610  99  ?DisplayStatusMessage@CF5GameWnd@@UAE_NPBDHKHHPAD@Z */
  return true;
}



/* ---- CF5GameWnd::IsActivate @ 60a01620 size=7 ---- */

/* public: virtual int __thiscall CF5GameWnd::IsActivate(void) */

int __thiscall CF5GameWnd::CF5GameWnd__IsActivate(CF5GameWnd *this)

{
                    /* 0x1620  213  ?IsActivate@CF5GameWnd@@UAEHXZ */
  return (this->CF5GameWnd_data).offset_0x150;
}



/* ---- scalar_deleting_destructor @ 60a01630 size=85 ---- */

CF5GameWnd * __thiscall CF5GameWnd::scalar_deleting_destructor(CF5GameWnd *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5GameWnd(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5GameWnd *)this;
  }
  puVar1 = &this[-1].CF5GameWnd_data.offset_0x15c;
  _eh_vector_destructor_iterator_(this,0x164,this[-1].CF5GameWnd_data.offset_0x15c,~CF5GameWnd);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5GameWnd *)puVar1;
}



/* ---- GetControlNamePrefix @ 60a01690 size=4 ---- */

/* public: char const * __thiscall CF5ChatWnd::GetControlNamePrefix(void)const  */

char * __thiscall CF5ChatWnd::GetControlNamePrefix(CF5ChatWnd *this)

{
                    /* 0x1690  184  ?GetControlNamePrefix@CF5ChatWnd@@QBEPBDXZ */
  return (char *)&(this->CF5ChatWnd_data).offset_0x8;
}



/* ---- SetHanChatViewType @ 60a016a0 size=13 ---- */

/* public: void __thiscall CF5ChatWnd::SetHanChatViewType(enum CF5ChatView::ViewType) */

void __thiscall CF5ChatWnd::SetHanChatViewType(CF5ChatWnd *this,ViewType param_1)

{
                    /* 0x16a0  384  ?SetHanChatViewType@CF5ChatWnd@@QAEXW4ViewType@CF5ChatView@@@Z
                        */
  (this->CF5ChatWnd_data).offset_0xd0 = param_1;
  return;
}



/* ---- GetHanChatViewType @ 60a016b0 size=7 ---- */

/* public: enum CF5ChatView::ViewType __thiscall CF5ChatWnd::GetHanChatViewType(void)const  */

ViewType __thiscall CF5ChatWnd::GetHanChatViewType(CF5ChatWnd *this)

{
                    /* 0x16b0  191  ?GetHanChatViewType@CF5ChatWnd@@QBE?AW4ViewType@CF5ChatView@@XZ
                        */
  return (this->CF5ChatWnd_data).offset_0xd0;
}



/* ---- SetHanChatType @ 60a016c0 size=10 ---- */

/* public: void __thiscall CF5ChatWnd::SetHanChatType(int) */

void __thiscall CF5ChatWnd::SetHanChatType(CF5ChatWnd *this,int param_1)

{
                    /* 0x16c0  383  ?SetHanChatType@CF5ChatWnd@@QAEXH@Z */
  (this->CF5ChatWnd_data).offset_0x4 = param_1;
  return;
}



/* ---- GetHanChatType @ 60a016d0 size=4 ---- */

/* public: int __thiscall CF5ChatWnd::GetHanChatType(void)const  */

int __thiscall CF5ChatWnd::GetHanChatType(CF5ChatWnd *this)

{
                    /* 0x16d0  190  ?GetHanChatType@CF5ChatWnd@@QBEHXZ
                       0x16d0  196  ?GetModalResult@CF5DialogRoot@@QBEHXZ */
  return (this->CF5ChatWnd_data).offset_0x4;
}



/* ---- CF5ChatWnd @ 60a016e0 size=56 ---- */

/* public: __thiscall CF5ChatWnd::CF5ChatWnd(class CF5ChatWnd const &) */

void __thiscall CF5ChatWnd::CF5ChatWnd(CF5ChatWnd *this,CF5ChatWnd *param_1)

{
  int iVar1;
  CF5ChatWnd *pCVar2;
  undefined4 *puVar3;
  
                    /* 0x16e0  12  ??0CF5ChatWnd@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5ChatWnd_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CF5ChatWnd_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  pCVar2 = param_1 + 0xc;
  puVar3 = &(this->CF5ChatWnd_data).offset_0x8;
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  (this->CF5ChatWnd_data).offset_0xd0 = *(undefined4 *)(param_1 + 0xd4);
  return;
}



/* ---- operator= @ 60a01720 size=62 ---- */

/* public: class CF5ChatWnd & __thiscall CF5ChatWnd::operator=(class CF5ChatWnd const &) */

CF5ChatWnd * __thiscall CF5ChatWnd::operator=(CF5ChatWnd *this,CF5ChatWnd *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
                    /* 0x1720  54  ??4CF5ChatWnd@@QAEAAV0@ABV0@@Z */
  (this->CF5ChatWnd_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CF5ChatWnd_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined1 *)&(this->CF5ChatWnd_data).offset_0x8;
  iVar2 = 200;
  do {
    *puVar1 = puVar1[(int)param_1 - (int)this];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (this->CF5ChatWnd_data).offset_0xd0 = *(undefined4 *)(param_1 + 0xd4);
  return (CF5ChatWnd *)this;
}



/* ---- scalar_deleting_destructor @ 60a01760 size=85 ---- */

CF5ChatWnd * __thiscall CF5ChatWnd::scalar_deleting_destructor(CF5ChatWnd *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5ChatWnd(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5ChatWnd *)this;
  }
  puVar1 = &this[-1].CF5ChatWnd_data.offset_0xd0;
  _eh_vector_destructor_iterator_(this,0xd8,this[-1].CF5ChatWnd_data.offset_0xd0,~CF5ChatWnd);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5ChatWnd *)puVar1;
}



/* ---- GetFullScreen @ 60a017c0 size=7 ---- */

/* public: unsigned long __thiscall CF5MainFrmWnd::GetFullScreen(void) */

ulong __thiscall CF5MainFrmWnd::GetFullScreen(CF5MainFrmWnd *this)

{
                    /* 0x17c0  187  ?GetFullScreen@CF5MainFrmWnd@@QAEKXZ */
  return *(ulong *)&(this->CF5MainFrmWnd_data).field_0x108;
}



/* ---- CF5GameWnd::CreateCaptionButtons @ 60a017d0 size=1 ---- */

/* public: virtual void __thiscall CF5GameWnd::CreateCaptionButtons(void) */

void __thiscall CF5GameWnd::CF5GameWnd__CreateCaptionButtons(CF5GameWnd *this)

{
                    /* 0x17d0  93  ?CreateCaptionButtons@CF5GameWnd@@UAEXXZ
                       0x17d0  277  ?OnClearHanChatBuffer@CF5ChatWnd@@UAEXXZ
                       0x17d0  320  ?OnDestroy@CF5DialogRoot@@UAEXXZ
                       0x17d0  332  ?OnFailEnterChannel@CF5MiniChannelListWnd@@UAEXXZ
                       0x17d0  335  ?OnInitDialog@CF5DialogRoot@@UAEXXZ
                       0x17d0  345  ?OnUpdateChannelGrpList@CF5MiniChannelListWnd@@UAEXXZ
                       0x17d0  346  ?OnUpdateChannelList@CF5MiniChannelListWnd@@UAEXXZ
                       0x17d0  349  ?OnUpdateMyInfo@CF5ChannelLobbyWnd@@UAEXXZ
                       0x17d0  353  ?OutSideCloseCall@CF5DialogRoot@@UAEXXZ
                       0x17d0  367  ?RegisterHandler@CF5MainFrmWnd@@UAEXXZ
                       0x17d0  368  ?RegisterHandlers@CF5App@@UAEXXZ
                       0x17d0  382  ?SetDataToControlDuringDoModal@CF5DialogRoot@@UAEXXZ
                       0x17d0  392  ?StartHostBanishCheck@CF5GameWnd@@UAEXXZ
                       0x17d0  393  ?StopHostBanishCheck@CF5GameWnd@@UAEXXZ
                       0x17d0  396  ?UpdateChannelAdWnd@CF5MainFrmWnd@@UAEXXZ
                       0x17d0  397  ?UpdateToggleBtnState@CF5MainFrmWnd@@UAEXXZ */
  return;
}



/* ---- CF5ConfigLoader @ 60a017e0 size=40 ---- */

/* public: __thiscall CF5ConfigLoader::CF5ConfigLoader(class CF5ConfigLoader const &) */

CF5ConfigLoader * __thiscall
CF5ConfigLoader::CF5ConfigLoader(CF5ConfigLoader *this,CF5ConfigLoader *param_1)

{
  CConfigLoader *pCVar1;
  
                    /* 0x17e0  14  ??0CF5ConfigLoader@@QAE@ABV0@@Z */
  if (param_1 == (CF5ConfigLoader *)0x0) {
    pCVar1 = (CConfigLoader *)0x0;
  }
  else {
    pCVar1 = (CConfigLoader *)(param_1 + 4);
  }
  CConfigLoader::CConfigLoader(&this->CConfigLoader,pCVar1);
                    /* inlined constructor: CF5ConfigLoader::CF5ConfigLoader */
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- operator= @ 60a01810 size=48 ---- */

/* public: class CF5ConfigLoader & __thiscall CF5ConfigLoader::operator=(class CF5ConfigLoader const
   &) */

CF5ConfigLoader * __thiscall
CF5ConfigLoader::operator=(CF5ConfigLoader *this,CF5ConfigLoader *param_1)

{
                    /* 0x1810  55  ??4CF5ConfigLoader@@QAEAAV0@ABV0@@Z */
  if (param_1 == (CF5ConfigLoader *)0x0) {
    CConfigLoader::operator=(&this->CConfigLoader,(CConfigLoader *)0x0);
    return (CF5ConfigLoader *)this;
  }
  CConfigLoader::operator=(&this->CConfigLoader,(CConfigLoader *)(param_1 + 4));
  return (CF5ConfigLoader *)this;
}



/* ---- scalar_deleting_destructor @ 60a01840 size=82 ---- */

CF5ConfigLoader * __thiscall
CF5ConfigLoader::scalar_deleting_destructor(CF5ConfigLoader *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    ~CF5ConfigLoader(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5ConfigLoader *)this;
  }
  _eh_vector_destructor_iterator_(this,0x3c,(int)this[-1].CConfigLoader,~CF5ConfigLoader);
  if ((param_1 & 1) != 0) {
    operator_delete__(&this[-1].CConfigLoader);
  }
  return (CF5ConfigLoader *)&this[-1].CConfigLoader;
}



/* ---- FUN_60a018a0 @ 60a018a0 size=125 ---- */

undefined4 FUN_60a018a0(void)

{
  if (DAT_60a24764 == (HMODULE)0x0) {
    DAT_60a24764 = GetModuleHandleA("KERNEL32.DLL");
    if (DAT_60a24764 == (HMODULE)0x0) {
      return 0;
    }
  }
  DAT_60a24760 = GetProcAddress(DAT_60a24764,"CreateToolhelp32Snapshot");
  DAT_60a24758 = GetProcAddress(DAT_60a24764,"Process32First");
  DAT_60a2475c = GetProcAddress(DAT_60a24764,"Process32Next");
  if (((DAT_60a24758 == (FARPROC)0x0) || (DAT_60a2475c == (FARPROC)0x0)) ||
     (DAT_60a24760 == (FARPROC)0x0)) {
    return 0;
  }
  return 1;
}



/* ---- FUN_60a01920 @ 60a01920 size=155 ---- */

undefined4 FUN_60a01920(void)

{
  if (DAT_60a24774 == (HMODULE)0x0) {
    DAT_60a24774 = GetModuleHandleA("PSAPI.DLL");
    if (DAT_60a24774 == (HMODULE)0x0) {
      DAT_60a24774 = LoadLibraryA("PSAPI.DLL");
      if (DAT_60a24774 == (HMODULE)0x0) {
        return 0;
      }
      DAT_60a24778 = 1;
    }
  }
  DAT_60a24768 = GetProcAddress(DAT_60a24774,"EnumProcesses");
  DAT_60a2476c = GetProcAddress(DAT_60a24774,"GetModuleFileNameExA");
  DAT_60a24770 = GetProcAddress(DAT_60a24774,"EnumProcessModules");
  if (((DAT_60a24768 == (FARPROC)0x0) || (DAT_60a2476c == (FARPROC)0x0)) ||
     (DAT_60a24770 == (FARPROC)0x0)) {
    return 0;
  }
  return 1;
}



/* ---- FUN_60a019c0 @ 60a019c0 size=1355 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl FUN_60a019c0(HMODULE param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  BOOL BVar6;
  uint uVar7;
  uchar local_c720 [4];
  undefined4 uStack_c71c;
  undefined4 local_c718;
  DWORD DStack_c714;
  DWORD local_c710;
  DWORD local_c70c;
  DWORD aDStack_c708 [3];
  undefined1 local_c6fc [39988];
  undefined4 uStack_2ac8;
  undefined1 auStack_2ac4 [7996];
  undefined4 auStack_b88 [2];
  DWORD local_b80;
  undefined1 local_b7c [284];
  _WIN32_FIND_DATAA _Stack_a60;
  CHAR local_918;
  undefined1 local_917 [251];
  uchar auStack_81c [8];
  char local_814;
  undefined1 local_813 [247];
  uchar auStack_71c [8];
  char local_714;
  undefined1 local_713 [247];
  uchar auStack_61c [8];
  char local_614;
  undefined1 local_613 [251];
  uchar uStack_518;
  undefined1 auStack_517 [255];
  char acStack_418 [8];
  undefined1 local_410;
  undefined1 local_40f [251];
  char cStack_314;
  undefined1 auStack_313 [259];
  uchar uStack_210;
  undefined1 auStack_20f [255];
  uchar uStack_110;
  undefined1 auStack_10f [259];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_60a24730 ^ (uint)local_c720;
  local_c720[0] = '\0';
  local_c720[1] = '\0';
  local_c720[2] = '\0';
  local_c720[3] = '\0';
  local_b80 = 0;
  memset(local_b7c,0,0x124);
  local_918 = '\0';
  memset(local_917,0,0x103);
  local_410 = 0;
  memset(local_40f,0,0x103);
  local_c718 = (uint)local_c718._3_1_ << 0x18;
  local_614 = '\0';
  memset(local_613,0,0x103);
  local_814 = '\0';
  memset(local_813,0,0xff);
  local_714 = '\0';
  memset(local_713,0,0xff);
  iVar1 = FUN_60a018a0();
  if (((iVar1 == 0) && (iVar2 = FUN_60a01920(), iVar2 == 0)) ||
     (DVar3 = GetModuleFileNameA(param_1,&local_918,0x104), DVar3 == 0)) {
    __security_check_cookie(local_4 ^ (uint)local_c720);
    return;
  }
  local_c70c = GetCurrentProcessId();
  _splitpath_s(&local_918,(char *)&local_c718,3,&local_614,0x104,&local_814,0x100,&local_714,0x100);
  strcpy_s(&local_918,0x104,&local_814);
  strcat_s(&local_918,0x104,&local_714);
  if (iVar1 == 0) {
    aDStack_c708[2] = 0;
    memset(local_c6fc,0,0x9c3c);
    local_c710 = 0;
    (*DAT_60a24768)(aDStack_c708 + 2,40000,&local_c710);
    local_c718 = local_c718 >> 2;
    uVar7 = 0;
    if (local_c718 != 0) {
      do {
        pvVar4 = OpenProcess(0x410,0,aDStack_c708[uVar7]);
        if ((pvVar4 != (HANDLE)0x0) && (aDStack_c708[uVar7] != 0)) {
          uStack_2ac8 = 0;
          memset(auStack_2ac4,0,0x1f3c);
          cStack_314 = '\0';
          memset(auStack_313,0,0x103);
          local_c70c = 0;
          iVar1 = (*DAT_60a24770)(pvVar4,&uStack_2ac8,8000,&local_c70c);
          if ((iVar1 != 0) &&
             (iVar1 = (*DAT_60a2476c)(pvVar4,uStack_2ac8,&cStack_314,0x104), iVar1 != 0)) {
            local_c710 = 0;
            uStack_c71c._0_1_ = '\0';
            uStack_c71c._1_2_ = 0;
            uStack_110 = '\0';
            memset(auStack_10f,0,0x103);
            uStack_518 = '\0';
            memset(auStack_517,0,0xff);
            uStack_210 = '\0';
            memset(auStack_20f,0,0xff);
            if (DStack_c714 != aDStack_c708[uVar7]) {
              _splitpath_s(&cStack_314,(char *)&uStack_c71c,3,(char *)&uStack_110,0x104,
                           (char *)&uStack_518,0x100,(char *)&uStack_210,0x100);
              iVar1 = _mbsicmp(local_c720,(uchar *)&uStack_c71c);
              if (((iVar1 == 0) && (iVar1 = _mbsicmp(auStack_61c,&uStack_110), iVar1 == 0)) &&
                 ((iVar1 = _mbsicmp(auStack_81c,&uStack_518), iVar1 == 0 &&
                  (iVar1 = _mbsicmp(auStack_71c,&uStack_210), iVar1 == 0)))) {
                CloseHandle(pvVar4);
                pvVar4 = OpenProcess(1,0,aDStack_c708[uVar7]);
                BVar6 = GetExitCodeProcess(pvVar4,&local_c710);
                if (BVar6 == 0) {
                  DVar3 = 0;
                }
                else {
                  DVar3 = local_c710;
                }
                TerminateProcess(pvVar4,DVar3);
              }
            }
          }
          CloseHandle(pvVar4);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_c718);
    }
    if (DAT_60a24778 != 0) {
      FreeLibrary(DAT_60a24774);
    }
  }
  else {
    pvVar4 = (HANDLE)(*DAT_60a24760)(2,0);
    if (pvVar4 != (HANDLE)0xffffffff) {
      auStack_b88[0] = 0x128;
      iVar1 = (*DAT_60a24758)(pvVar4,auStack_b88);
      if (iVar1 == 0) {
        CloseHandle(pvVar4);
      }
      else {
        do {
          if (DStack_c714 != local_b80) {
            FUN_60a01000(acStack_418,0x104,"%s%s%s",(char)local_c720);
            pvVar5 = FindFirstFileA(acStack_418,&_Stack_a60);
            if (pvVar5 != (HANDLE)0xffffffff) {
              pvVar5 = OpenProcess(1,0,local_b80);
              if (pvVar5 != (HANDLE)0x0) {
                GetExitCodeProcess(pvVar5,(LPDWORD)(local_c720 + -8));
                TerminateProcess(pvVar5,0);
                CloseHandle(pvVar5);
                CloseHandle(pvVar4);
              }
              goto LAB_60a01ef2;
            }
          }
          iVar1 = (*DAT_60a2475c)(pvVar4,auStack_b88);
        } while (iVar1 != 0);
        CloseHandle(pvVar4);
      }
    }
  }
LAB_60a01ef2:
  __security_check_cookie(uStack_c ^ (uint)(local_c720 + -8));
  return;
}



/* ---- FUN_60a01f10 @ 60a01f10 size=707 ---- */

undefined4 FUN_60a01f10(void)

{
  bool bVar1;
  HANDLE pvVar2;
  SGlobalInfo *pSVar3;
  DWORD DVar4;
  char *pcVar5;
  char *pcVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  BOOL BVar9;
  CWnd *pCVar10;
  AFX_MODULE_STATE *pAVar11;
  int iVar12;
  DWORD dwLanguageId;
  HLOCAL *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  CSimpleStringT<char,1> local_c [4];
  CSimpleStringT<char,1> local_8 [4];
  HLOCAL local_4;
  
  LoadStr((int)local_8);
  LoadStr((int)local_c);
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,s_HanGame_60a24000);
  pSVar3 = GInfo();
  *(HANDLE *)(pSVar3 + 0x1b4) = pvVar2;
  pSVar3 = GInfo();
  if (*(int *)(pSVar3 + 0x1b4) == 0) {
    Arguments = (va_list *)0x0;
    nSize = 0;
    lpBuffer = &local_4;
    dwLanguageId = 0x400;
    DVar4 = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,DVar4,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
    pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_c);
    pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_8);
    MutexErrorDlg(pcVar6,pcVar5);
    LocalFree(local_4);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
    return 1;
  }
  DVar4 = GetLastError();
  if (DVar4 != 0xb7) {
    pHVar7 = FindWindowA("HANGAMEEXE",(LPCSTR)0x0);
    if (pHVar7 == (HWND)0x0) {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
      return 5;
    }
    pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_c);
    pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_8);
    MutexErrorDlg(pcVar6,pcVar5);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
    return 2;
  }
  bVar1 = false;
  pHVar7 = GetDesktopWindow();
  pCVar8 = CWnd::FromHandle(pHVar7);
  pHVar7 = GetWindow(*(HWND *)(pCVar8 + 0x20),5);
  pCVar8 = CWnd::FromHandle(pHVar7);
  if (pCVar8 != (CWnd *)0x0) {
    do {
      pvVar2 = GetPropA(*(HWND *)(pCVar8 + 0x20),s_HanGame_60a24000);
      if (pvVar2 != (HANDLE)0x0) {
        if (pCVar8 == (CWnd *)0x0) {
          pHVar7 = (HWND)0x0;
        }
        else {
          pHVar7 = *(HWND *)(pCVar8 + 0x20);
        }
        BVar9 = IsWindowVisible(pHVar7);
        if (BVar9 == 0) {
          pAVar11 = AfxGetModuleState();
          iVar12 = FUN_60a019c0(*(HMODULE *)(pAVar11 + 8));
          if (iVar12 == 0) {
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
            ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                      ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
            ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                      ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
            return 4;
          }
          goto LAB_60a0214c;
        }
        bVar1 = true;
        pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_c);
        pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_8);
        MutexErrorDlg(pcVar6,pcVar5);
        BVar9 = IsIconic(*(HWND *)(pCVar8 + 0x20));
        if (BVar9 != 0) {
          CWnd::ShowWindow((CWnd *)pCVar8,9);
        }
        SetForegroundWindow(*(HWND *)(pCVar8 + 0x20));
        pHVar7 = GetLastActivePopup(*(HWND *)(pCVar8 + 0x20));
        pCVar10 = CWnd::FromHandle(pHVar7);
        if (pCVar10 != (CWnd *)0x0) {
          pHVar7 = GetLastActivePopup(*(HWND *)(pCVar8 + 0x20));
          pCVar10 = CWnd::FromHandle(pHVar7);
          SetForegroundWindow(*(HWND *)(pCVar10 + 0x20));
        }
      }
      pHVar7 = GetWindow(*(HWND *)(pCVar8 + 0x20),2);
      pCVar8 = CWnd::FromHandle(pHVar7);
    } while (pCVar8 != (CWnd *)0x0);
    if (bVar1) goto LAB_60a020f5;
  }
  pAVar11 = AfxGetModuleState();
  iVar12 = FUN_60a019c0(*(HMODULE *)(pAVar11 + 8));
  if (iVar12 != 0) {
LAB_60a0214c:
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
    return 3;
  }
  pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_c);
  pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_8);
  MutexErrorDlg(pcVar6,pcVar5);
LAB_60a020f5:
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_c);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_8);
  return 2;
}



/* ---- FUN_60a021e0 @ 60a021e0 size=93 ---- */

CItemManager * FUN_60a021e0(void)

{
  CItemManager *this;
  CItemManager *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a124fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x44);
  local_4 = 0;
  pCVar1 = (CItemManager *)0x0;
  if (this != (CItemManager *)0x0) {
    CItemManager::CItemManager((CItemManager *)this);
                    /* inlined constructor: CItemManager::CItemManager */
    *(CItemManager_vftable **)this = &CItemManager::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 60a02240 size=31 ---- */

CItemManager * __thiscall CItemManager::scalar_deleting_destructor(CItemManager *this,byte param_1)

{
  CItemManager::~CItemManager(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CItemManager *)this;
}



/* ---- FUN_60a02260 @ 60a02260 size=96 ---- */

CMemberData * FUN_60a02260(void)

{
  CMemberData *this;
  CMemberData *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a124fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x370);
  local_4 = 0;
  pCVar1 = (CMemberData *)0x0;
  if (this != (CMemberData *)0x0) {
    CMemberData::CMemberData((CMemberData *)this);
                    /* inlined constructor: CMemberData::CMemberData */
    *(CMemberData_vftable **)this = &CMemberData::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 60a022c0 size=31 ---- */

CMemberData * __thiscall CMemberData::scalar_deleting_destructor(CMemberData *this,byte param_1)

{
  CMemberData::~CMemberData(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CMemberData *)this;
}



/* ---- FUN_60a022e0 @ 60a022e0 size=96 ---- */

CCfgSetting * FUN_60a022e0(void)

{
  CCfgSetting *this;
  CCfgSetting *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a124fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x914);
  local_4 = 0;
  pCVar1 = (CCfgSetting *)0x0;
  if (this != (CCfgSetting *)0x0) {
    CCfgSetting::CCfgSetting((CCfgSetting *)this);
                    /* inlined constructor: CCfgSetting::CCfgSetting */
    *(CCfgSetting_vftable **)this = &CCfgSetting::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- scalar_deleting_destructor @ 60a02340 size=31 ---- */

CCfgSetting * __thiscall CCfgSetting::scalar_deleting_destructor(CCfgSetting *this,byte param_1)

{
  CCfgSetting::~CCfgSetting(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CCfgSetting *)this;
}



/* ---- CF5App @ 60a02360 size=52 ---- */

/* public: __thiscall CF5App::CF5App(void) */

CF5App * __thiscall CF5App::CF5App(CF5App *this)

{
                    /* 0x2360  3  ??0CF5App@@QAE@XZ */
  CWinApp::CWinApp((CWinApp *)this,(char *)0x0);
  this->vftablePtr = &_vftable_;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5App_data).field_0xa0);
  (this->CF5App_data).offset_0xa4 = 0x400;
  (this->CF5App_data).offset_0xa8 = 0x300;
  return this;
}



/* ---- ~CF5App @ 60a023a0 size=29 ---- */

/* public: virtual __thiscall CF5App::~CF5App(void) */

void __thiscall CF5App::~CF5App(CF5App *this)

{
                    /* 0x23a0  35  ??1CF5App@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5App_data).field_0xa0);
  CWinApp::~CWinApp((CWinApp *)this);
  return;
}



/* ---- RegisterDefaultHandlers @ 60a023c0 size=56 ---- */

/* public: void __thiscall CF5App::RegisterDefaultHandlers(void) */

void __thiscall CF5App::RegisterDefaultHandlers(CF5App *this)

{
  CHgObjectFactory *pCVar1;
  int iVar2;
  code *pcVar3;
  
                    /* 0x23c0  365  ?RegisterDefaultHandlers@CF5App@@QAEXXZ */
  pcVar3 = FUN_60a022e0;
  iVar2 = 6;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60a021e0;
  iVar2 = 1;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  pcVar3 = FUN_60a02260;
  iVar2 = 2;
  pCVar1 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar1,iVar2,pcVar3);
  return;
}



/* ---- CF5App::LoadDefaultObjects @ 60a02400 size=1228 ---- */

/* public: virtual bool __thiscall CF5App::LoadDefaultObjects(void) */

bool __thiscall CF5App::CF5App__LoadDefaultObjects(CF5App *this)

{
  CMainFrameModel *this_00;
  undefined4 uVar1;
  IGod *pIVar2;
  CMainFrameController *this_01;
  CLobbyStateModel *this_02;
  CLobbyStateController *this_03;
  CChannelListLobbyModel *this_04;
  CChannelListLobbyController *this_05;
  CNetworkController *pCVar3;
  CChannelLobbyModel *this_06;
  CChannelLobbyController *this_07;
  CGameLobbyModel *this_08;
  CGameLobbyController *this_09;
  CBaseLobbyModel *this_10;
  CSwitch2LobbyController *this_11;
  CHanChatModel *this_12;
  CHanChatController *this_13;
  CGameWarpModel *this_14;
  CMessengerModel *this_15;
  char *pcVar4;
  SGlobalInfo *this_16;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x2400  217  ?LoadDefaultObjects@CF5App@@UAE_NXZ */
  puStack_c = &LAB_60a125f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this_00 = operator_new(4);
  local_8._0_1_ = 1;
  if (this_00 == (CMainFrameModel *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CMainFrameModel::CMainFrameModel(this_00);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_01 = operator_new(4);
  local_8._0_1_ = 2;
  if (this_01 == (CMainFrameController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CMainFrameController::CMainFrameController(this_01);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_02 = operator_new(0x24);
  local_8._0_1_ = 3;
  if (this_02 == (CLobbyStateModel *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CLobbyStateModel::CLobbyStateModel(this_02,true);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_03 = operator_new(4);
  local_8._0_1_ = 4;
  if (this_03 == (CLobbyStateController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CLobbyStateController::CLobbyStateController(this_03);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_04 = operator_new(0xc);
  local_8._0_1_ = 5;
  if (this_04 == (CChannelListLobbyModel *)0x0) {
    this_04 = (CChannelListLobbyModel *)0x0;
  }
  else {
    CChannelListLobbyModel::CChannelListLobbyModel(this_04);
    this_04->vftablePtr = &CChannelListLobbyModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(this_04,1);
  this_05 = operator_new(4);
  local_8._0_1_ = 6;
  if (this_05 == (CChannelListLobbyController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CChannelListLobbyController::CChannelListLobbyController(this_05);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  pCVar3 = operator_new(0x28);
  local_8._0_1_ = 7;
  if (pCVar3 == (CNetworkController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CNetworkController::CNetworkController(pCVar3,"channelList");
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  pCVar3 = operator_new(0x28);
  local_8._0_1_ = 8;
  if (pCVar3 == (CNetworkController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CNetworkController::CNetworkController(pCVar3,"channel");
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_06 = operator_new(0x58);
  local_8._0_1_ = 9;
  if (this_06 == (CChannelLobbyModel *)0x0) {
    this_06 = (CChannelLobbyModel *)0x0;
  }
  else {
    CChannelLobbyModel::CChannelLobbyModel(this_06,true);
    this_06->vftablePtr = &CChannelLobbyModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(this_06,1);
  this_07 = operator_new(4);
  local_8._0_1_ = 10;
  if (this_07 == (CChannelLobbyController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CChannelLobbyController::CChannelLobbyController(this_07);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  pCVar3 = operator_new(0x28);
  local_8._0_1_ = 0xb;
  if (pCVar3 == (CNetworkController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CNetworkController::CNetworkController(pCVar3,"game");
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_08 = operator_new(0x24);
  local_8._0_1_ = 0xc;
  if (this_08 == (CGameLobbyModel *)0x0) {
    this_08 = (CGameLobbyModel *)0x0;
  }
  else {
    CGameLobbyModel::CGameLobbyModel(this_08,true);
    this_08->vftablePtr = &CGameLobbyModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(this_08,1);
  this_09 = operator_new(4);
  local_8._0_1_ = 0xd;
  if (this_09 == (CGameLobbyController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CGameLobbyController::CGameLobbyController(this_09);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_10 = operator_new(0x24);
  local_8._0_1_ = 0xe;
  if (this_10 == (CBaseLobbyModel *)0x0) {
    this_10 = (CBaseLobbyModel *)0x0;
  }
  else {
    CBaseLobbyModel::CBaseLobbyModel(this_10,"Switch2",true);
    this_10->vftablePtr = &CBaseLobbyModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(this_10,1);
  this_11 = operator_new(4);
  local_8._0_1_ = 0xf;
  if (this_11 == (CSwitch2LobbyController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CSwitch2LobbyController::CSwitch2LobbyController(this_11);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_12 = operator_new(0x138);
  local_8._0_1_ = 0x10;
  if (this_12 == (CHanChatModel *)0x0) {
    this_12 = (CHanChatModel *)0x0;
  }
  else {
    CHanChatModel::CHanChatModel(this_12);
    this_12->vftablePtr = &CHanChatModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(this_12,1);
  this_13 = operator_new(0x20);
  local_8._0_1_ = 0x11;
  if (this_13 == (CHanChatController *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CHanChatController::CHanChatController(this_13,"channel");
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(uVar1,1);
  this_14 = operator_new(0x24);
  local_8._0_1_ = 0x12;
  if (this_14 == (CGameWarpModel *)0x0) {
    this_14 = (CGameWarpModel *)0x0;
  }
  else {
    CGameWarpModel::CGameWarpModel(this_14);
    this_14->vftablePtr = &CGameWarpModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(this_14,1);
  this_15 = operator_new(0x28);
  local_8._0_1_ = 0x13;
  if (this_15 == (CMessengerModel *)0x0) {
    this_15 = (CMessengerModel *)0x0;
  }
  else {
    CMessengerModel::CMessengerModel(this_15,false);
    this_15->vftablePtr = &CMessengerModel::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x34))(this_15,1);
  (*this->vftablePtr->LoadDialogObjects)(this);
  (*this->vftablePtr->LoadViewObjects)(this);
  pcVar4 = (*this->vftablePtr->GetGameChatContent)(this);
  this_16 = GInfo();
  SGlobalInfo::SetGameWndPtr(this_16,pcVar4);
  (*this->vftablePtr->GetGameChatContent)(this);
  ExceptionList = local_10;
  return true;
}



/* ---- Catch@60a028cc @ 60a028cc size=29 ---- */

undefined1 * Catch_60a028cc(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x1c);
  (**(code **)(*(int *)this + 0x1c))(0,0);
  CException::Delete(this);
  return &LAB_60a028e9;
}



/* ---- scalar_deleting_destructor @ 60a02900 size=31 ---- */

CChannelListLobbyModel * __thiscall
CChannelListLobbyModel::scalar_deleting_destructor(CChannelListLobbyModel *this,byte param_1)

{
  CChannelListLobbyModel::~CChannelListLobbyModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CChannelListLobbyModel *)this;
}



/* ---- scalar_deleting_destructor @ 60a02920 size=31 ---- */

CChannelLobbyModel * __thiscall
CChannelLobbyModel::scalar_deleting_destructor(CChannelLobbyModel *this,byte param_1)

{
  CChannelLobbyModel::~CChannelLobbyModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CChannelLobbyModel *)this;
}



/* ---- scalar_deleting_destructor @ 60a02940 size=31 ---- */

CGameLobbyModel * __thiscall
CGameLobbyModel::scalar_deleting_destructor(CGameLobbyModel *this,byte param_1)

{
  CGameLobbyModel::~CGameLobbyModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGameLobbyModel *)this;
}



/* ---- scalar_deleting_destructor @ 60a02960 size=31 ---- */

CBaseLobbyModel * __thiscall
CBaseLobbyModel::scalar_deleting_destructor(CBaseLobbyModel *this,byte param_1)

{
  CBaseLobbyModel::~CBaseLobbyModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CBaseLobbyModel *)this;
}



/* ---- scalar_deleting_destructor @ 60a02980 size=31 ---- */

CHanChatModel * __thiscall
CHanChatModel::scalar_deleting_destructor(CHanChatModel *this,byte param_1)

{
  CHanChatModel::~CHanChatModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CHanChatModel *)this;
}



/* ---- scalar_deleting_destructor @ 60a029a0 size=31 ---- */

CGameWarpModel * __thiscall
CGameWarpModel::scalar_deleting_destructor(CGameWarpModel *this,byte param_1)

{
  CGameWarpModel::~CGameWarpModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CGameWarpModel *)this;
}



/* ---- scalar_deleting_destructor @ 60a029c0 size=31 ---- */

CMessengerModel * __thiscall
CMessengerModel::scalar_deleting_destructor(CMessengerModel *this,byte param_1)

{
  CMessengerModel::~CMessengerModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CMessengerModel *)this;
}



/* ---- ConfigurationStart @ 60a029e0 size=127 ---- */

/* public: void __thiscall CF5App::ConfigurationStart(void) */

void __thiscall CF5App::ConfigurationStart(CF5App *this)

{
  uint uStack_68;
  CF5ConfigLoader local_54 [7];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  CF5ConfigLoader CStack_c;
  
                    /* 0x29e0  92  ?ConfigurationStart@CF5App@@QAEXXZ */
  CStack_c.vftablePtr = (CF5ConfigLoader_vftable *)&LAB_60a12618;
  local_10 = ExceptionList;
  uStack_68 = DAT_60a24730 ^ (uint)(local_54 + 10);
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  CStack_c.CConfigLoader = (CConfigLoader)0x0;
  local_18 = uStack_68;
  CF5ConfigLoader::CF5ConfigLoader(local_54);
  CStack_c.CConfigLoader._0_1_ = 1;
  CF5ConfigLoader::Load(local_54,(char *)&PTR_60a15dfc);
  CConfigLoader::Apply(&local_54[0].CConfigLoader);
  CStack_c.CConfigLoader = (CConfigLoader)((uint)(uint3)CStack_c.CConfigLoader._1_3_ << 8);
  CF5ConfigLoader::~CF5ConfigLoader(local_54);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)(local_54 + 10));
  return;
}



/* ---- Catch@60a02a5f @ 60a02a5f size=29 ---- */

undefined4 Catch_60a02a5f(void)

{
  CException *this;
  int unaff_EBP;
  
  this = *(CException **)(unaff_EBP + -0x54);
  (**(code **)(*(int *)this + 0x1c))(0,0);
  CException::Delete(this);
  return 0x60a02a43;
}



/* ---- CF5App::LoadViewObjects @ 60a02a80 size=648 ---- */

/* public: virtual bool __thiscall CF5App::LoadViewObjects(void) */

bool __thiscall CF5App::CF5App__LoadViewObjects(CF5App *this)

{
  uint uVar1;
  CMFunctor<CF5ChatView> *pCVar2;
  CF5ChatWnd *pCVar3;
  IGod *pIVar4;
  CF5GameView *this_00;
  undefined4 extraout_EAX;
  CF5MiniChannelListView *this_01;
  CF5MiniChannelListWnd *pCVar5;
  undefined4 extraout_EAX_00;
  CMFunctor<CF5ChannelLobbyView> *pCVar6;
  CF5ChannelLobbyWnd *pCVar7;
  CF5MainFrmView *this_02;
  undefined4 extraout_EAX_01;
  CF5DialogCmp *this_03;
  undefined4 extraout_EAX_02;
  CMFunctor<CF5ChatView> *pCVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined1 auStack_12 [6];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x2a80  219  ?LoadViewObjects@CF5App@@UAE_NXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a126b9;
  local_c = ExceptionList;
  uVar1 = DAT_60a24730 ^ (uint)(auStack_12 + -0x12);
  ExceptionList = &local_c;
  pCVar2 = operator_new(0x14);
  pCVar8 = (CMFunctor<CF5ChatView> *)0x0;
  local_4 = 0;
  if (pCVar2 != (CMFunctor<CF5ChatView> *)0x0) {
    pCVar3 = operator_new(0xd8);
    local_4._0_1_ = 1;
    if (pCVar3 == (CF5ChatWnd *)0x0) {
      pCVar3 = (CF5ChatWnd *)0x0;
    }
    else {
      pCVar3 = CF5ChatWnd::CF5ChatWnd(pCVar3);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    pCVar8 = CMFunctor<CF5ChatView>::CMFunctor<CF5ChatView>(pCVar2,(CF5ChatWnd *)pCVar3,0,1);
  }
  local_4 = 0xffffffff;
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x34))(pCVar8,1,uVar1);
  pCVar2 = operator_new(0x14);
  local_c = (void *)0x2;
  if (pCVar2 == (CMFunctor<CF5ChatView> *)0x0) {
    pCVar2 = (CMFunctor<CF5ChatView> *)0x0;
  }
  else {
    pCVar3 = operator_new(0xd8);
    local_c._0_1_ = 3;
    if (pCVar3 == (CF5ChatWnd *)0x0) {
      pCVar3 = (CF5ChatWnd *)0x0;
    }
    else {
      pCVar3 = CF5ChatWnd::CF5ChatWnd(pCVar3);
    }
    local_c = (void *)CONCAT31(local_c._1_3_,2);
    pCVar2 = CMFunctor<CF5ChatView>::CMFunctor<CF5ChatView>(pCVar2,(CF5ChatWnd *)pCVar3,1,1);
  }
  local_c = (void *)0xffffffff;
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x34))(pCVar2,1);
  this_00 = operator_new(0xc);
  if (this_00 == (CF5GameView *)0x0) {
    uVar9 = 0;
  }
  else {
    CF5GameView::CF5GameView(this_00);
    uVar9 = extraout_EAX;
  }
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x34))(uVar9,1);
  this_01 = operator_new(0x10);
  if (this_01 == (CF5MiniChannelListView *)0x0) {
    uVar9 = 0;
  }
  else {
    pCVar5 = operator_new(0x24);
    if (pCVar5 == (CF5MiniChannelListWnd *)0x0) {
      pCVar5 = (CF5MiniChannelListWnd *)0x0;
    }
    else {
      pCVar5 = CF5MiniChannelListWnd::CF5MiniChannelListWnd(pCVar5);
    }
    CF5MiniChannelListView::CF5MiniChannelListView(this_01,(CF5MiniChannelListWnd *)pCVar5,1);
    uVar9 = extraout_EAX_00;
  }
  pIVar4 = God();
  pvVar10 = (void *)0x1;
  (**(code **)(*(int *)pIVar4 + 0x34))(uVar9);
  pCVar6 = operator_new(0x30);
  if (pCVar6 == (CMFunctor<CF5ChannelLobbyView> *)0x0) {
    pCVar6 = (CMFunctor<CF5ChannelLobbyView> *)0x0;
  }
  else {
    pCVar7 = operator_new(0x6c);
    if (pCVar7 == (CF5ChannelLobbyWnd *)0x0) {
      pCVar7 = (CF5ChannelLobbyWnd *)0x0;
    }
    else {
      pCVar7 = CF5ChannelLobbyWnd::CF5ChannelLobbyWnd(pCVar7);
    }
    pCVar6 = CMFunctor<CF5ChannelLobbyView>::CMFunctor<CF5ChannelLobbyView>
                       (pCVar6,(CF5ChannelLobbyWnd *)pCVar7,1);
  }
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x34))(pCVar6,1);
  this_02 = operator_new(4);
  if (this_02 == (CF5MainFrmView *)0x0) {
    uVar9 = 0;
  }
  else {
    CF5MainFrmView::~CF5MainFrmView(this_02);
    uVar9 = extraout_EAX_01;
  }
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x34))(uVar9,1);
  this_03 = operator_new(8);
  if (this_03 == (CF5DialogCmp *)0x0) {
    uVar9 = 0;
  }
  else {
    CF5DialogCmp::CF5DialogCmp(this_03);
    uVar9 = extraout_EAX_02;
  }
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x34))(uVar9,1);
  ExceptionList = pvVar10;
  return true;
}



/* ---- _CheckAnotherMutex @ 60a02d10 size=237 ---- */

/* protected: int __thiscall CF5App::_CheckAnotherMutex(void) */

int __thiscall CF5App::_CheckAnotherMutex(CF5App *this)

{
  char cVar1;
  SGlobalInfo *pSVar2;
  CMetpParserRet *pCVar3;
  CMetpParser *pCVar4;
  undefined4 uVar5;
  NInfoTypes NVar6;
  undefined1 auStack_2 [2];
  
                    /* 0x2d10  399  ?_CheckAnotherMutex@CF5App@@IAEHXZ */
  PostBipLog(0x12f);
  NVar6 = 0;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar6);
  pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
  cVar1 = (**(code **)(*(int *)pCVar4 + 0x18))(&DAT_60a15e00);
  if (cVar1 == '\0') {
    uVar5 = FUN_60a01f10();
    switch(uVar5) {
    case 1:
      return 0;
    case 2:
    case 4:
      PostBipLog(0x135);
      return 0;
    case 3:
      PostBipLog(0x132);
      PostBipLog(0x138);
      return 1;
    }
  }
  else {
    NVar6 = 0;
    pSVar2 = GInfo();
    pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar6);
    pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
    (**(code **)(*(int *)pCVar4 + 100))(&DAT_60a15e00,auStack_2 + -6);
    NVar6 = 0;
    pSVar2 = GInfo();
    pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar6);
    pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
    (**(code **)(*(int *)pCVar4 + 0x90))(&DAT_60a15e00);
  }
  PostBipLog(0x138);
  return 1;
}



/* ---- CF5App::LoadDialogObjects @ 60a02e10 size=3 ---- */

/* public: virtual bool __thiscall CF5App::LoadDialogObjects(void) */

bool __thiscall CF5App::CF5App__LoadDialogObjects(CF5App *this)

{
                    /* 0x2e10  218  ?LoadDialogObjects@CF5App@@UAE_NXZ */
  return true;
}



/* ---- CF5App::ExitInstance @ 60a02e20 size=79 ---- */

/* public: virtual int __thiscall CF5App::ExitInstance(void) */

int __thiscall CF5App::CF5App__ExitInstance(CF5App *this)

{
  SGlobalInfo *pSVar1;
  int iVar2;
  
                    /* 0x2e20  181  ?ExitInstance@CF5App@@UAEHXZ */
  PostBipLog(900);
  FinalizePostingLog();
  pSVar1 = GInfo();
  ReleaseMutex(*(HANDLE *)(pSVar1 + 0x1b4));
  F5Firewall::Off();
  CoUninitialize();
  (*this->vftablePtr->RegWork_EraseNotifyWnd)(this);
  CAutoInitialize::_end();
  iVar2 = CWinApp::ExitInstance((CWinApp *)this);
  return iVar2;
}



/* ---- CF5GameWnd::GetGameChatContent @ 60a02e70 size=3 ---- */

/* public: virtual char * __thiscall CF5GameWnd::GetGameChatContent(void) */

char * __thiscall CF5GameWnd::CF5GameWnd__GetGameChatContent(CF5GameWnd *this)

{
                    /* 0x2e70  188  ?GetGameChatContent@CF5GameWnd@@UAEPADXZ
                       0x2e70  208  ?HookConfigLoader@CF5App@@UAEHXZ
                       0x2e70  215  ?IsWindowVisible@CF5DialogRoot@@UAEHXZ
                       0x2e70  220  ?MakeFrameInstance@CF5App@@UAEPAVCFrameWnd@@XZ
                       0x2e70  221  ?MakeGameInstance@CF5App@@UAEPAXXZ */
  return (char *)0x0;
}



/* ---- CF5App::RegWork_LoadFullScreenSetting @ 60a02e80 size=229 ---- */

/* public: virtual void __thiscall CF5App::RegWork_LoadFullScreenSetting(void) */

void __thiscall CF5App::CF5App__RegWork_LoadFullScreenSetting(CF5App *this)

{
  uint uVar1;
  CWinThread *pCVar2;
  undefined4 uVar3;
  int *piVar4;
  ulong local_120;
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2e80  361  ?RegWork_LoadFullScreenSetting@CF5App@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a126ec;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)&local_120;
  uVar1 = DAT_60a24730 ^ (uint)&local_120;
  ExceptionList = &local_c;
  CGameReg::CGameReg(local_11c,1);
  local_4 = 0;
  local_120 = 0;
  CGameReg::Get(local_11c,"FullScreen",&local_120);
  pCVar2 = AfxGetThread();
  if (pCVar2 == (CWinThread *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*(int *)pCVar2 + 0x7c))(uVar1);
  }
  piVar4 = (int *)__RTDynamicCast(uVar3,0,&CWnd::RTTI_Type_Descriptor,
                                  &CF5MainFrmWnd::RTTI_Type_Descriptor,0);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x1c4))(local_120);
  }
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_120);
  return;
}



/* ---- CF5App::RegWork_RegisterNotifyWnd @ 60a02f70 size=180 ---- */

/* public: virtual void __thiscall CF5App::RegWork_RegisterNotifyWnd(void) */

void __thiscall CF5App::CF5App__RegWork_RegisterNotifyWnd(CF5App *this)

{
  uint uVar1;
  CWinThread *pCVar2;
  int iVar3;
  ulong uVar4;
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2f70  362  ?RegWork_RegisterNotifyWnd@CF5App@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a1272c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_11c;
  uVar1 = DAT_60a24730 ^ (uint)local_11c;
  ExceptionList = &local_c;
  CGameReg::CGameReg(local_11c,0);
  local_4 = 0;
  pCVar2 = AfxGetThread();
  if (pCVar2 != (CWinThread *)0x0) {
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x7c))(uVar1);
    if (iVar3 != 0) {
      uVar4 = *(ulong *)(iVar3 + 0x20);
      goto LAB_60a02fdb;
    }
  }
  uVar4 = 0;
LAB_60a02fdb:
  CGameReg::Set(local_11c,"NotiHandle",uVar4);
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_11c);
  return;
}



/* ---- CF5App::RegWork_EraseNotifyWnd @ 60a03030 size=150 ---- */

/* public: virtual void __thiscall CF5App::RegWork_EraseNotifyWnd(void) */

void __thiscall CF5App::CF5App__RegWork_EraseNotifyWnd(CF5App *this)

{
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3030  360  ?RegWork_EraseNotifyWnd@CF5App@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a1272c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_11c;
  ExceptionList = &local_c;
  CGameReg::CGameReg(local_11c,0);
  local_4 = 0;
  CGameReg::Erase(local_11c,"NotiHandle");
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_11c);
  return;
}



/* ---- CF5App::CheckTestMode @ 60a030d0 size=1009 ---- */

/* public: virtual void __thiscall CF5App::CheckTestMode(void) */

void __thiscall CF5App::CF5App__CheckTestMode(CF5App *this)

{
  char cVar1;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> CVar2;
  char *pcVar3;
  char *pcVar4;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *pCVar5;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  char unaff_BL;
  int iVar6;
  rsize_t _SizeInBytes;
  undefined4 local_d8;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_d4 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_d0 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_cc [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_c8 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_c4 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_c0 [4];
  int local_bc;
  int local_b8;
  CF5App *local_b4;
  char local_b0 [8];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_a8;
  char local_a7 [3];
  undefined1 local_a4;
  undefined4 local_a3;
  undefined4 local_9f;
  undefined4 local_9b;
  undefined4 local_97;
  undefined4 local_93;
  undefined4 local_8f;
  undefined4 local_8b;
  undefined2 local_87;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83 [47];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_54;
  char local_53 [3];
  undefined1 local_50;
  undefined1 local_4f [63];
  uint local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x30d0  88  ?CheckTestMode@CF5App@@UAEXXZ */
  local_4 = 0xffffffff;
  local_8 = &LAB_60a127b4;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)&local_d8;
  ExceptionList = &local_c;
  local_b4 = this;
  if (2 < *(int *)__argc_exref) {
    pcVar3 = *(char **)(*(int *)__argv_exref + 4);
    pcVar4 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)pcVar4) < 5) {
      pcVar4 = *(char **)&(this->CF5App_data).field_0x44;
      cVar1 = *pcVar4;
      if ((cVar1 == 'r') || (cVar1 == 't')) {
        local_b0[0] = '\0';
        local_b0[1] = '\0';
        local_b0[2] = '\0';
        local_b0[3] = '\0';
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_c0,pcVar4);
        local_a3 = 0;
        local_9f = 0;
        local_9b = 0;
        local_97 = 0;
        local_93 = 0;
        local_8f = 0;
        local_8b = 0;
        local_87 = 0;
        local_85 = 0;
        local_50 = 0;
        local_4 = 0;
        local_d8 = local_d8 & 0xffff0000;
        local_a4 = 0;
        memset(local_4f,0,0x3f);
        local_84 = 0;
        memset(local_83,0,0x31);
        iVar6 = 0;
        do {
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Tokenize
                    (local_c0,(char *)local_d4,(int *)&DAT_60a160a4);
          local_8._0_1_ = 1;
          if (iVar6 == 0) {
            pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                               ((CSimpleStringT<char,1> *)&local_d8);
            _SizeInBytes = 2;
            pCVar5 = local_d4 + -8;
LAB_60a03262:
            strcpy_s((char *)pCVar5,_SizeInBytes,pcVar4);
          }
          else {
            if (iVar6 == 1) {
              pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                                 ((CSimpleStringT<char,1> *)&local_d8);
              _SizeInBytes = 0x32;
              pCVar5 = (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                       ((int)&local_8b + 3);
              goto LAB_60a03262;
            }
            if (iVar6 == 2) {
              pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                                 ((CSimpleStringT<char,1> *)&local_d8);
              _SizeInBytes = 0x20;
              pCVar5 = &local_a8;
              goto LAB_60a03262;
            }
            if (iVar6 == 3) {
              pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                                 ((CSimpleStringT<char,1> *)&local_d8);
              _SizeInBytes = 0x40;
              pCVar5 = &local_54;
              goto LAB_60a03262;
            }
          }
          local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_d8);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 4);
        if (iVar6 != 4) {
          AfxMessageBox("Run with ID PWD.",0,0);
        }
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_c0,
                   "hangame://%schannel://metp://%s//go/go;k22e:%d=%s&k37e:6=999999&k87e:3=hgc&k93e:7=HANGAME&k126e:6=urlhgc&k89e:%d=%s&k88e:%d=%s&k95e:22=http://www.hangame.com&k96e:%d=%s&k60e:5=Dummy&nors:1=Y&k90e:4=2.94&k91e:4=1.33&k92e:2=18&scvr:1=1&k98e:1=0&fcvr:1=1&fciv:2=16&k125e:2=20&lang:6=KOREAN&k140e:4=%s&k10e:2=31&k11e:1=M&k111e:%d=%s&k3e:%d=%s&k150e:1=3&k13e:7=1000000&k31e:4=1360"
                  );
        local_8._0_1_ = 2;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_c8,"211.218.153.25:10000");
        local_8._0_1_ = 3;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_d0,"http://down.hangame.com/dist");
        local_8._0_1_ = 4;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_cc,"http://down.hangame.com/sdurl");
        local_8._0_1_ = 5;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  (local_d4,"http://down.hangame.com/hul");
        local_8 = (undefined1 *)CONCAT31(local_8._1_3_,6);
        if (unaff_BL != 'r') {
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    (local_c8,"220.75.250.180:10001");
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    (local_d0,"http://221.148.17.85:7778/dist");
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    (local_cc,"http://221.148.17.85:7778/sdurl");
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
                    (local_d4,"http://221.148.17.85:7778/hul");
        }
        local_b0[0] = '\0';
        local_b0[1] = '\0';
        local_b0[2] = '\0';
        local_b0[3] = '\0';
        local_b0[4] = 0;
        local_b0[5] = 0;
        strcpy_s(local_b0,6,"0090");
        pCVar5 = &local_a8;
        do {
          CVar2 = *pCVar5;
          pCVar5 = pCVar5 + 1;
        } while (CVar2 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)0x0);
        local_d8 = (int)pCVar5 - (int)local_a7;
        pCVar5 = &local_54;
        do {
          CVar2 = *pCVar5;
          pCVar5 = pCVar5 + 1;
        } while (CVar2 != (CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>)0x0);
        local_bc = (int)pCVar5 - (int)local_53;
        pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                           ((CSimpleStringT<char,1> *)local_d4);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                           ((CSimpleStringT<char,1> *)local_cc);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                           ((CSimpleStringT<char,1> *)local_d0);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = (char *)((int)&local_8b + 3);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)local_c0);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
                  (this_00,(char *)(local_b8 + 0xa4));
        pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                           ((CSimpleStringT<char,1> *)(local_b8 + 0xa4));
        *(char **)(local_b8 + 0x48) = pcVar4;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_d0);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_c8);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_cc);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_c4);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_bc);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_c0);
      }
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_d8);
  return;
}



/* ---- RegisterPlatformConverters @ 60a034d0 size=6 ---- */

/* public: void __thiscall CF5App::RegisterPlatformConverters(void) */

void __thiscall CF5App::RegisterPlatformConverters(CF5App *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a034d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x34d0  369  ?RegisterPlatformConverters@CF5App@@QAEXXZ */
  RegisterAllConverters();
  return;
}



/* ---- CF5App::DialogRun @ 60a034e0 size=5 ---- */

/* public: virtual void __thiscall CF5App::DialogRun(void) */

void __thiscall CF5App::CF5App__DialogRun(CF5App *this)

{
                    /* 0x34e0  95  ?DialogRun@CF5App@@UAEXXZ
                       0x34e0  370  ?Run@CF5App@@EAEHXZ */
                    /* WARNING: Could not recover jumptable at 0x60a11834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp::Run((CWinApp *)this);
  return;
}



/* ---- CF5MainFrmWnd::DeleteEngineObject @ 60a034f0 size=6 ---- */

/* public: virtual int __thiscall CF5MainFrmWnd::DeleteEngineObject(void) */

int __thiscall CF5MainFrmWnd::CF5MainFrmWnd__DeleteEngineObject(CF5MainFrmWnd *this)

{
                    /* 0x34f0  94  ?DeleteEngineObject@CF5MainFrmWnd@@UAEHXZ
                       0x34f0  210  ?InitEngine@CF5App@@UAEHXZ
                       0x34f0  352  ?OneTimeEngineObjectInit@CF5MainFrmWnd@@UAEHXZ */
  return 1;
}



/* ---- CF5App::CheckBipLog @ 60a03500 size=257 ---- */

/* protected: virtual void __thiscall CF5App::CheckBipLog(void) */

void __thiscall CF5App::CF5App__CheckBipLog(CF5App *this)

{
  char *local_80;
  char *local_7c;
  char *local_78;
  int local_74;
  char *local_70;
  CMetpParser local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3500  87  ?CheckBipLog@CF5App@@MAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a127f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_70 = (char *)0x0;
  local_78 = (char *)0x0;
  local_7c = (char *)0x0;
  local_80 = (char *)0x0;
  local_74 = 0;
  CMetpParser::CMetpParser(local_6c,*(char **)&(this->CF5App_data).field_0x44,0,(char *)0x0);
  local_4 = 0;
  CMetpParser::GetValue(local_6c,"k401e",&local_70);
  CMetpParser::GetValue(local_6c,"k22e",&local_78);
  CMetpParser::GetValue(local_6c,"k3e",&local_7c);
  CMetpParser::GetValue(local_6c,"p189",&local_74);
  CMetpParser::GetValue(local_6c,"k410e",&local_80);
  SetBipLogConfig(local_70,local_74,local_78,local_7c,local_80);
  PostBipLog(300);
  local_4 = 0xffffffff;
  CMetpParser::~CMetpParser(local_6c);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60a03610 @ 60a03610 size=12 ---- */

void __fastcall FUN_60a03610(exception *param_1)

{
  *param_1 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x60a03616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



/* ---- scalar_deleting_destructor @ 60a03620 size=37 ---- */

exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,byte param_1)

{
                    /* inlined destructor: std::bad_alloc::~bad_alloc */
  this->vftablePtr = &vftable;
  std::exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* ---- logic_error @ 60a03650 size=95 ---- */

logic_error * __thiscall
std::logic_error::logic_error
          (logic_error *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12829;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::exception::exception((exception *)this);
  local_4 = 0;
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8,param_1);
  ExceptionList = local_c;
  return this;
}



/* ---- vfunction2 @ 60a036b0 size=9 ---- */

/* std::logic_error member function inherited by std::length_error
   std::logic_error member function inherited by std::invalid_argument
   std::logic_error member function inherited by std::out_of_range */

void __thiscall std::logic_error::vfunction2(logic_error *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a036b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
  return;
}



/* ---- length_error @ 60a036c0 size=95 ---- */

void __thiscall std::length_error::length_error(length_error *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  logic_error local_34 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12859;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"vector<T> too long");
  local_4 = 0;
  logic_error::logic_error
            (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_50);
  local_34[0].vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_34,(ThrowInfo *)&DAT_60a18dc0);
}



/* ---- logic_error @ 60a03720 size=101 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12889;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::exception::exception((exception *)this,param_1);
  local_4 = 0;
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  ExceptionList = local_c;
  return this;
}



/* ---- bad_alloc_Constructor_or_Destructor @ 60a03790 size=91 ---- */

void __cdecl std::bad_alloc::bad_alloc_Constructor_or_Destructor(char *param_1)

{
  char *pcVar1;
  exception local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 4) {
      param_1 = (char *)0x0;
      std::exception::exception(local_c,&param_1);
      local_c[0] = (exception)&vftable;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_c,(ThrowInfo *)&DAT_60a18e8c);
    }
  }
  operator_new((int)pcVar1 * 4);
  return;
}



/* ---- FUN_60a037f0 @ 60a037f0 size=25 ---- */

logic_error * __thiscall FUN_60a037f0(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
  return param_1;
}



/* ---- FUN_60a03810 @ 60a03810 size=26 ---- */

exception * __thiscall FUN_60a03810(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *param_1 = (exception)&std::bad_alloc::vftable;
  return param_1;
}



/* ---- scalar_deleting_destructor @ 60a03830 size=105 ---- */

CWinApp * __thiscall CF5App::scalar_deleting_destructor(CF5App *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
                    /* inlined destructor: CF5App::~CF5App */
    this->vftablePtr = &_vftable_;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
               &(this->CF5App_data).field_0xa0);
    CWinApp::~CWinApp((CWinApp *)this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CWinApp *)this;
  }
  puVar1 = &this[-1].CF5App_data.offset_0xa8;
  _eh_vector_destructor_iterator_(this,0xb0,this[-1].CF5App_data.offset_0xa8,~CF5App);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CWinApp *)puVar1;
}



/* ---- CF5MiniChannelListView @ 60a038a0 size=33 ---- */

/* public: __thiscall CF5MiniChannelListView::CF5MiniChannelListView(class CF5MiniChannelListView
   const &) */

void __thiscall
CF5MiniChannelListView::CF5MiniChannelListView
          (CF5MiniChannelListView *this,CF5MiniChannelListView *param_1)

{
                    /* 0x38a0  29  ??0CF5MiniChannelListView@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5MiniChannelListView_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  (this->CF5MiniChannelListView_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CF5MiniChannelListView_data).offset_0x8 = *(int *)(param_1 + 0xc);
  return;
}



/* ---- operator= @ 60a038d0 size=27 ---- */

/* public: class CF5MiniChannelListView & __thiscall CF5MiniChannelListView::operator=(class
   CF5MiniChannelListView const &) */

CF5MiniChannelListView * __thiscall
CF5MiniChannelListView::operator=(CF5MiniChannelListView *this,CF5MiniChannelListView *param_1)

{
                    /* 0x38d0  62  ??4CF5MiniChannelListView@@QAEAAV0@ABV0@@Z */
  (this->CF5MiniChannelListView_data).offset_0x0 = *(undefined4 **)(param_1 + 4);
  (this->CF5MiniChannelListView_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CF5MiniChannelListView_data).offset_0x8 = *(int *)(param_1 + 0xc);
  return (CF5MiniChannelListView *)this;
}



/* ---- CF5App::GetMessageMap @ 60a038f0 size=6 ---- */

/* protected: virtual struct AFX_MSGMAP const * __thiscall CF5App::GetMessageMap(void)const  */

AFX_MSGMAP * __thiscall CF5App::CF5App__GetMessageMap(CF5App *this)

{
                    /* 0x38f0  194  ?GetMessageMap@CF5App@@MBEPBUAFX_MSGMAP@@XZ
                       0x38f0  201  ?GetThisMessageMap@CF5App@@KGPBUAFX_MSGMAP@@XZ */
  return (AFX_MSGMAP *)&PTR_LAB_60a15bd4;
}



/* ---- _RegisterpacketConverters @ 60a03900 size=237 ---- */

/* protected: void __thiscall CF5App::_RegisterpacketConverters(void) */

void __thiscall CF5App::_RegisterpacketConverters(CF5App *this)

{
  int iVar1;
  CGameFinder local_108 [260];
  uint local_4;
  
                    /* 0x3900  401  ?_RegisterpacketConverters@CF5App@@IAEXXZ */
  local_4 = DAT_60a24730 ^ (uint)local_108;
  CGameFinder::CGameFinder(local_108);
  iVar1 = CGameFinder::isPokerKind(local_108);
  if (iVar1 == 0) {
    iVar1 = CGameFinder::isNewHoola(local_108);
    if (iVar1 == 0) {
      iVar1 = CGameFinder::isDuelgo(local_108);
      if (iVar1 == 0) {
        iVar1 = CGameFinder::isDoubleGostop(local_108);
        if (iVar1 == 0) {
          iVar1 = CGameFinder::isSSDuelgo(local_108);
          if (iVar1 == 0) {
            iVar1 = CGameFinder::isGostopHGCJ(local_108);
            if (iVar1 == 0) {
              iVar1 = CGameFinder::isSinyutnori(local_108);
              if (iVar1 == 0) {
                iVar1 = CGameFinder::isSinyutnoriHGCJ(local_108);
                if (iVar1 == 0) {
                  iVar1 = CGameFinder::isGameGenKind(local_108);
                  if (iVar1 == 0) {
                    iVar1 = CGameFinder::isTet4(local_108);
                    if (iVar1 == 0) {
                      iVar1 = CGameFinder::isPBAND(local_108);
                      if (iVar1 == 0) {
                        iVar1 = CGameFinder::isTET4OBS(local_108);
                        if (iVar1 == 0) {
                          iVar1 = CGameFinder::isSPanPan(local_108);
                          if (iVar1 == 0) goto LAB_60a039d8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  RegisterAllConverters();
LAB_60a039d8:
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}



/* ---- CF5App::InitInstance @ 60a039f0 size=858 ---- */

/* public: virtual int __thiscall CF5App::InitInstance(void) */

int __thiscall CF5App::CF5App__InitInstance(CF5App *this)

{
  byte bVar1;
  char cVar2;
  CHgObjectFactory *pCVar3;
  SGlobalInfo *pSVar4;
  CGlobalGameEvent *pCVar5;
  CFunctor *pCVar6;
  IFunctor *pIVar7;
  CMetpParserRet *pCVar8;
  CMetpParser *pCVar9;
  byte *pbVar10;
  int *piVar11;
  char *pcVar12;
  CWndProperty *pCVar13;
  HCURSOR dwNewLong;
  HWND hWnd;
  bool bVar14;
  HWND__ *pHVar15;
  IParam *pIVar16;
  int aiStack_38 [3];
  char *pcStack_2c;
  undefined4 uStack_28;
  TypeDescriptor *pTStack_24;
  char *pcVar17;
  int iVar18;
  NInfoTypes NVar19;
  code *pcVar20;
  
                    /* 0x39f0  211  ?InitInstance@CF5App@@UAEHXZ */
  F5Firewall::On();
  pcVar20 = FUN_60a022e0;
  iVar18 = 6;
  pCVar3 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar3,iVar18,pcVar20);
  pcVar20 = FUN_60a021e0;
  iVar18 = 1;
  pCVar3 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar3,iVar18,pcVar20);
  pcVar20 = FUN_60a02260;
  iVar18 = 2;
  pCVar3 = ObjFactory();
  CHgObjectFactory::RegisterObject(pCVar3,iVar18,pcVar20);
  (*this->vftablePtr->CreateCaptionButtons)(this);
  CWinApp::InitInstance((CWinApp *)this);
  AfxEnableControlContainer((COccManager *)0x0);
  CoInitialize((LPVOID)0x0);
  if (*(int *)&(this->CF5App_data).field_0x44 == 0) {
    AfxMessageBox("Need CommandLine",0,0);
    return 0;
  }
  (*this->vftablePtr->CheckBipLog)(this);
  (*this->vftablePtr->CheckTestMode)(this);
  pcVar17 = *(char **)&(this->CF5App_data).field_0x44;
  pSVar4 = GInfo();
  iVar18 = SGlobalInfo::SetGameString(pSVar4,pcVar17);
  if (iVar18 < 0) {
    return 0;
  }
  pSVar4 = GInfo();
  pCVar5 = SGlobalInfo::GameEvent(pSVar4);
  pCVar6 = CGlobalGameEvent::FntModifyGameString(pCVar5);
  pIVar7 = CFunctor::Get(pCVar6);
  if (pIVar7 != (IFunctor *)0x0) {
    pIVar16 = (IParam *)Void_exref;
    pSVar4 = GInfo();
    pCVar5 = SGlobalInfo::GameEvent(pSVar4);
    pCVar6 = CGlobalGameEvent::FntModifyGameString(pCVar5);
    iVar18 = CFunctor::Call(pCVar6,pIVar16);
    if (iVar18 != 0) {
      return 0;
    }
  }
  NVar19 = 0;
  pSVar4 = GInfo();
  pCVar8 = SGlobalInfo::MetpInfo(pSVar4,NVar19);
  pCVar9 = CMetpParserRet::ParserPtr(pCVar8);
  cVar2 = (**(code **)(*(int *)pCVar9 + 0x18))();
  if (cVar2 != '\0') {
    pcVar17 = "p140";
    NVar19 = 0;
    pTStack_24 = (TypeDescriptor *)0x60a03b13;
    pSVar4 = GInfo();
    pTStack_24 = (TypeDescriptor *)0x60a03b17;
    pCVar8 = SGlobalInfo::MetpInfo(pSVar4,NVar19);
    pbVar10 = (byte *)CMetpParserRet::GetString(pCVar8,pcVar17);
    if (pbVar10 != (byte *)0x0) {
      pcVar17 = "ShitClone";
      do {
        bVar1 = *pbVar10;
        bVar14 = bVar1 < (byte)*pcVar17;
        if (bVar1 != *pcVar17) {
LAB_60a03b48:
          iVar18 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_60a03b4d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar14 = bVar1 < (byte)pcVar17[1];
        if (bVar1 != pcVar17[1]) goto LAB_60a03b48;
        pbVar10 = pbVar10 + 2;
        pcVar17 = pcVar17 + 2;
      } while (bVar1 != 0);
      iVar18 = 0;
LAB_60a03b4d:
      if (iVar18 == 0) {
        nsClone::WaitUntilCloneCheckMutexDie();
      }
    }
  }
  iVar18 = _CheckAnotherMutex(this);
  if (iVar18 != 0) {
    _RegisterpacketConverters(this);
    pTStack_24 = &CFrameWnd::RTTI_Type_Descriptor;
    uStack_28 = 0;
    pcStack_2c = (char *)0x60a03b87;
    pcStack_2c = (*this->vftablePtr->GetGameChatContent)(this);
    aiStack_38[2] = 0x60a03b8d;
    piVar11 = (int *)__RTDynamicCast();
    if (piVar11 != (int *)0x0) {
      uStack_28 = (this->CF5App_data).offset_0xa8;
      pcStack_2c = (char *)(this->CF5App_data).offset_0xa4;
      pTStack_24 = (TypeDescriptor *)0x0;
      aiStack_38[2] = 0;
      aiStack_38[1] = 0;
      aiStack_38[0] = -0x7e000000;
      pcVar17 = "k60e";
      *(int **)&(this->CF5App_data).field_0x1c = piVar11;
      iVar18 = *piVar11;
      NVar19 = 1;
      pSVar4 = GInfo();
      pCVar8 = SGlobalInfo::MetpInfo(pSVar4,NVar19);
      pcVar17 = CMetpParserRet::GetString(pCVar8,pcVar17);
      pcVar12 = AfxRegisterWndClass(0xb,(HICON__ *)0x0,(HBRUSH__ *)0x0,(HICON__ *)0x0);
      iVar18 = (**(code **)(iVar18 + 100))(0,pcVar12,pcVar17);
      if (iVar18 != 0) {
        pHVar15 = (HWND__ *)piVar11[8];
        pSVar4 = GInfo();
        pCVar13 = SGlobalInfo::WndProperty(pSVar4);
        CWndProperty::SetPropertyWindow(pCVar13,pHVar15);
        pcVar17 = "1";
        pSVar4 = GInfo();
        pCVar13 = SGlobalInfo::WndProperty(pSVar4);
        CWndProperty::SetWndProp(pCVar13,pcVar17);
        pIVar16 = (IParam *)Void_exref;
        pSVar4 = GInfo();
        pCVar5 = SGlobalInfo::GameEvent(pSVar4);
        pCVar6 = CGlobalGameEvent::FntSetGameLevelData(pCVar5);
        CFunctor::Call(pCVar6,pIVar16);
        iVar18 = *(int *)&(this->CF5App_data).field_0x1c;
        if (iVar18 == 0) {
          hWnd = (HWND)0x0;
        }
        else {
          hWnd = *(HWND *)(iVar18 + 0x20);
        }
        dwNewLong = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        SetClassLongA(hWnd,-0xc,(LONG)dwNewLong);
        iVar18 = (*this->vftablePtr->DeleteEngineObject)(this);
        if (iVar18 == 0) {
          PostQuitMessage(-1);
        }
        CWnd::CenterWindow(*(CWnd **)&(this->CF5App_data).field_0x1c,(CWnd *)0x0);
        bVar14 = (*this->vftablePtr->LoadDefaultObjects)(this);
        if (bVar14) {
          iVar18 = (**(code **)(*piVar11 + 0x1b4))();
          if (iVar18 == 0) {
            PostQuitMessage(-1);
          }
          SPLASH_ON(0x27b4,0);
          ConfigurationStart(this);
          (*this->vftablePtr->RegWork_LoadFullScreenSetting)(this);
          (*this->vftablePtr->RegWork_RegisterNotifyWnd)(this);
          CAutoInitialize::_start();
          NVar19 = 0;
          aiStack_38[1] = 1;
          pSVar4 = GInfo();
          pCVar8 = SGlobalInfo::MetpInfo(pSVar4,NVar19);
          pCVar9 = CMetpParserRet::ParserPtr(pCVar8);
          cVar2 = (**(code **)(*(int *)pCVar9 + 0x18))(&DAT_60a16158);
          if (cVar2 != '\0') {
            (**(code **)(*(int *)pCVar9 + 100))(&DAT_60a16158,aiStack_38);
          }
          if (aiStack_38[0] != 0) {
            SetForegroundWindow((HWND)piVar11[8]);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ---- FUN_60a03d50 @ 60a03d50 size=10 ---- */

void __fastcall FUN_60a03d50(undefined4 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}



/* ---- FUN_60a03d60 @ 60a03d60 size=72 ---- */

undefined4 __thiscall FUN_60a03d60(void *this,char *param_1)

{
  int iVar1;
  int extraout_EAX;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((char *)0x3fffffff < param_1) {
    std::length_error::length_error(this);
  }
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(param_1);
  *(int *)((int)this + 0xc) = extraout_EAX;
  *(int *)((int)this + 0x10) = extraout_EAX;
  iVar1 = extraout_EAX + (int)param_1 * 4;
  *(int *)((int)this + 0x14) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



/* ---- FUN_60a03db0 @ 60a03db0 size=51 ---- */

void * __cdecl FUN_60a03db0(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (0 < iVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}



/* ---- FUN_60a03df0 @ 60a03df0 size=53 ---- */

void * FUN_60a03df0(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}



/* ---- FUN_60a03e30 @ 60a03e30 size=53 ---- */

void __fastcall FUN_60a03e30(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}



/* ---- FUN_60a03e70 @ 60a03e70 size=141 ---- */

int * __thiscall
FUN_60a03e70(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            void *param_5)

{
  rsize_t _DstSize;
  void *_Dst;
  int iVar1;
  
  *param_1 = 0;
  if (((this == (void *)0x0) || (param_3 < *(uint *)((int)this + 0xc))) ||
     (*(uint *)((int)this + 0x10) < param_3)) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *(int *)this;
  param_1[1] = param_3;
  if ((param_5 < *(void **)((int)this + 0xc)) || (*(void **)((int)this + 0x10) < param_5)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_1 == 0) || (*param_1 != *(int *)this)) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)param_1[1];
  if (_Dst != param_5) {
    iVar1 = *(int *)((int)this + 0x10) - (int)param_5 >> 2;
    _DstSize = iVar1 * 4;
    if (0 < iVar1) {
      memmove_s(_Dst,_DstSize,param_5,_DstSize);
    }
    *(void **)((int)this + 0x10) = (void *)(_DstSize + (int)_Dst);
  }
  return param_1;
}



/* ---- FUN_60a03f00 @ 60a03f00 size=222 ---- */

undefined4 * __thiscall FUN_60a03f00(void *this,int param_1)

{
  rsize_t _DstSize;
  uint uVar1;
  void *_Src;
  void *_Dst;
  undefined4 *puVar2;
  int extraout_EAX;
  char *pcVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a128b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = this;
  }
  *(undefined4 **)this = puVar2;
  local_4 = 0;
  pcVar3 = (char *)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (pcVar3 != (char *)0x0) {
    if ((char *)0x3fffffff < pcVar3) {
      std::length_error::length_error((length_error *)0x0);
    }
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(pcVar3);
    *(int *)((int)this + 0xc) = extraout_EAX;
    *(int *)((int)this + 0x10) = extraout_EAX;
    *(int *)((int)this + 0x14) = extraout_EAX + (int)pcVar3 * 4;
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < *(uint *)(param_1 + 0xc)) {
      _invalid_parameter_noinfo();
    }
    _Src = *(void **)(param_1 + 0xc);
    if (*(void **)(param_1 + 0x10) < _Src) {
      _invalid_parameter_noinfo();
    }
    _Dst = *(void **)((int)this + 0xc);
    iVar4 = (int)(uVar1 - (int)_Src) >> 2;
    _DstSize = iVar4 * 4;
    if (iVar4 != 0) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)((int)this + 0x10) = (void *)(_DstSize + (int)_Dst);
  }
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_60a03fe0 @ 60a03fe0 size=65 ---- */

void __fastcall FUN_60a03fe0(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_8 [2];
  
  pvVar1 = (void *)param_1[4];
  if (pvVar1 < (void *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = param_1[3];
  uVar3 = *param_1;
  if ((uint)param_1[4] < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_60a03e70(param_1,local_8,*param_1,uVar2,uVar3,pvVar1);
  return;
}



/* ---- CF5GameWnd @ 60a04030 size=332 ---- */

/* public: __thiscall CF5GameWnd::CF5GameWnd(class CF5GameWnd const &) */

CF5GameWnd * __thiscall CF5GameWnd::CF5GameWnd(CF5GameWnd *this,CF5GameWnd *param_1)

{
  int iVar1;
  CF5GameWnd *pCVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4030  24  ??0CF5GameWnd@@QAE@ABV0@@Z */
  puStack_8 = &LAB_60a12924;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  (this->CF5GameWnd_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  local_4 = 0;
  FUN_60a03f00(&(this->CF5GameWnd_data).offset_0x4,(int)(param_1 + 8));
  (this->CF5GameWnd_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  (this->CF5GameWnd_data).offset_0x20 = *(undefined4 *)(param_1 + 0x24);
  (this->CF5GameWnd_data).offset_0x24 = *(undefined4 *)(param_1 + 0x28);
  (this->CF5GameWnd_data).offset_0x28 = *(undefined4 *)(param_1 + 0x2c);
  pCVar2 = param_1 + 0x30;
  puVar3 = &(this->CF5GameWnd_data).offset_0x2c;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  local_4._0_1_ = 1;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x130,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x134));
  local_4._0_1_ = 2;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x134,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x138));
  local_4._0_1_ = 3;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x138,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x13c));
  local_4 = CONCAT31(local_4._1_3_,4);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x13c,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x140));
  (this->CF5GameWnd_data).offset_0x140 = *(undefined4 *)(param_1 + 0x144);
  (this->CF5GameWnd_data).offset_0x144 = *(undefined4 *)(param_1 + 0x148);
  (this->CF5GameWnd_data).offset_0x148 = *(undefined4 *)(param_1 + 0x14c);
  (this->CF5GameWnd_data).offset_0x14c = param_1[0x150];
  (this->CF5GameWnd_data).offset_0x150 = *(undefined4 *)(param_1 + 0x154);
  (this->CF5GameWnd_data).offset_0x154 = *(undefined4 *)(param_1 + 0x158);
  (this->CF5GameWnd_data).offset_0x158 = *(undefined4 *)(param_1 + 0x15c);
  (this->CF5GameWnd_data).offset_0x15c = *(undefined4 *)(param_1 + 0x160);
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_60a04180 @ 60a04180 size=231 ---- */

undefined4 * __thiscall FUN_60a04180(void *this,undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (this != param_1) {
    pvVar4 = (void *)param_1[3];
    uVar3 = param_1[4] - (int)pvVar4 >> 2;
    if (uVar3 == 0) {
      FUN_60a03fe0(this);
      return this;
    }
    pvVar2 = *(void **)((int)this + 0xc);
    uVar6 = *(int *)((int)this + 0x10) - (int)pvVar2 >> 2;
    if (uVar3 <= uVar6) {
      FUN_60a03db0(pvVar4,param_1[4],pvVar2);
      *(int *)((int)this + 0x10) =
           *(int *)((int)this + 0xc) + ((int)(param_1[4] - param_1[3]) >> 2) * 4;
      return this;
    }
    if (pvVar2 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)((int)this + 0x14) - (int)pvVar2 >> 2;
    }
    if (uVar3 <= uVar7) {
      pvVar1 = (void *)((int)pvVar4 + uVar6 * 4);
      FUN_60a03db0(pvVar4,(int)pvVar1,pvVar2);
      pvVar4 = FUN_60a03df0(pvVar1,param_1[4],*(void **)((int)this + 0x10));
      *(void **)((int)this + 0x10) = pvVar4;
      return this;
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    uVar5 = FUN_60a03d60(this,(char *)((int)(param_1[4] - param_1[3]) >> 2));
    if ((char)uVar5 != '\0') {
      pvVar4 = FUN_60a03df0((void *)param_1[3],param_1[4],*(void **)((int)this + 0xc));
      *(void **)((int)this + 0x10) = pvVar4;
    }
  }
  return this;
}



/* ---- operator= @ 60a04270 size=255 ---- */

/* public: class CF5GameWnd & __thiscall CF5GameWnd::operator=(class CF5GameWnd const &) */

CF5GameWnd * __thiscall CF5GameWnd::operator=(CF5GameWnd *this,CF5GameWnd *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
                    /* 0x4270  60  ??4CF5GameWnd@@QAEAAV0@ABV0@@Z */
  (this->CF5GameWnd_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  FUN_60a04180(&(this->CF5GameWnd_data).offset_0x4,(undefined4 *)(param_1 + 8));
  (this->CF5GameWnd_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  (this->CF5GameWnd_data).offset_0x20 = *(undefined4 *)(param_1 + 0x24);
  (this->CF5GameWnd_data).offset_0x24 = *(undefined4 *)(param_1 + 0x28);
  (this->CF5GameWnd_data).offset_0x28 = *(undefined4 *)(param_1 + 0x2c);
  puVar1 = (undefined1 *)&(this->CF5GameWnd_data).offset_0x2c;
  iVar2 = 0x104;
  do {
    *puVar1 = puVar1[(int)param_1 - (int)this];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x130,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x134));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x134,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x138));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x138,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x13c));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x13c,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x140));
  (this->CF5GameWnd_data).offset_0x140 = *(undefined4 *)(param_1 + 0x144);
  (this->CF5GameWnd_data).offset_0x144 = *(undefined4 *)(param_1 + 0x148);
  (this->CF5GameWnd_data).offset_0x148 = *(undefined4 *)(param_1 + 0x14c);
  (this->CF5GameWnd_data).offset_0x14c = param_1[0x150];
  (this->CF5GameWnd_data).offset_0x150 = *(undefined4 *)(param_1 + 0x154);
  (this->CF5GameWnd_data).offset_0x154 = *(undefined4 *)(param_1 + 0x158);
  (this->CF5GameWnd_data).offset_0x158 = *(undefined4 *)(param_1 + 0x15c);
  (this->CF5GameWnd_data).offset_0x15c = *(undefined4 *)(param_1 + 0x160);
  return (CF5GameWnd *)this;
}



/* ---- ~CF5ChannelLobbyView @ 60a04370 size=112 ---- */

/* public: virtual __thiscall CF5ChannelLobbyView::~CF5ChannelLobbyView(void) */

void __thiscall CF5ChannelLobbyView::~CF5ChannelLobbyView(CF5ChannelLobbyView *this)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4370  36  ??1CF5ChannelLobbyView@@UAE@XZ */
  puStack_8 = &LAB_60a12958;
  local_c = ExceptionList;
  uVar2 = DAT_60a24730 ^ (uint)(auStack_e + -6);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  puVar1 = (this->CF5ChannelLobbyView_data).offset_0x0;
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar2);
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5ChannelLobbyView_data).field_0x24);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CF5ChannelLobbyView_data).field_0x4);
  ExceptionList = local_c;
  return;
}



/* ---- CF5ChannelLobbyView::OnDetached @ 60a043e0 size=18 ---- */

/* public: virtual bool __thiscall CF5ChannelLobbyView::OnDetached(void) */

bool __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView__OnDetached(CF5ChannelLobbyView *this)

{
                    /* 0x43e0  323  ?OnDetached@CF5ChannelLobbyView@@UAE_NXZ */
  if ((this->CF5ChannelLobbyView_data).offset_0x20 != 0) {
    (*this->vftablePtr->deleting_destructor)(this,1);
  }
  return true;
}



/* ---- CF5ChannelLobbyView::Msg_GetWindow @ 60a04400 size=28 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Msg_GetWindow(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Msg_GetWindow(CF5ChannelLobbyView *this,IParam *param_1)

{
                    /* 0x4400  234  ?Msg_GetWindow@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                       0x4400  236  ?Msg_GetWindow@CF5GameView@@UAEHAAUIParam@@@Z
                       0x4400  238  ?Msg_GetWindow@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  AddMetpWnd(param_1,"p043",(CWnd *)(this->CF5ChannelLobbyView_data).offset_0x0);
  return 0;
}



/* ---- CF5ChannelLobbyView::Msg_CreateWindow @ 60a04420 size=480 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Msg_CreateWindow(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Msg_CreateWindow
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  char *pcStack_15c;
  char *pcStack_14c;
  char *pcStack_13c;
  undefined4 uStack_12c;
  undefined1 auStack_118 [2];
  CParam aCStack_116 [62];
  CParam aCStack_d8 [16];
  CParam aCStack_c8 [116];
  uint uStack_54;
  void *pvStack_50;
  undefined4 uStack_48;
  undefined4 uStack_38;
  undefined4 uStack_28;
  undefined4 uStack_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4420  227  ?Msg_CreateWindow@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a129b0;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)auStack_118;
  uStack_12c = DAT_60a24730 ^ (uint)(auStack_118 + -0x10);
  ExceptionList = &local_c;
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 8))();
  CParam::CParam((CParam *)(auStack_118 + -4),false);
  puStack_8 = (undefined1 *)0x0;
  pcStack_13c = (char *)0x60a0449c;
  CParam::AddValue((CParam *)(auStack_118 + -4),"k1.4",
                   (int)(this->CF5ChannelLobbyView_data).offset_0x0);
  pIVar1 = God();
  pcStack_13c = "createWindow";
  (**(code **)(*(int *)pIVar1 + 0x10))();
  uStack_18 = 0xffffffff;
  CParam::~CParam((CParam *)&uStack_12c);
  CParam::CParam((CParam *)&uStack_12c,false);
  uStack_18 = 1;
  pcStack_14c = (char *)0x60a044f5;
  CParam::AddValue((CParam *)&uStack_12c,"k1.4",(int)(this->CF5ChannelLobbyView_data).offset_0x0);
  pIVar1 = God();
  pcStack_14c = "createWindow";
  (**(code **)(*(int *)pIVar1 + 0x10))();
  uStack_28 = 0xffffffff;
  CParam::~CParam((CParam *)&pcStack_13c);
  CParam::CParam((CParam *)&pcStack_13c,false);
  uStack_28 = 2;
  pcStack_15c = (char *)0x60a04548;
  CParam::AddValue((CParam *)&pcStack_13c,"k1.4",(int)(this->CF5ChannelLobbyView_data).offset_0x0);
  pIVar1 = God();
  pcStack_15c = "createWindow";
  (**(code **)(*(int *)pIVar1 + 0x10))("miniChannelListView");
  uStack_38 = 0xffffffff;
  CParam::~CParam((CParam *)&pcStack_14c);
  CParam::CParam(aCStack_c8,false);
  uStack_38 = 3;
  CParam::AddValue(aCStack_c8,"p045",0);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("channel","onChannelUIEnable",aCStack_c8,0);
  uStack_48 = 0xffffffff;
  CParam::~CParam(aCStack_d8);
  ExceptionList = pvStack_50;
  iVar2 = __security_check_cookie(uStack_54 ^ (uint)&pcStack_15c);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::Msg_DestroyWindow @ 60a04600 size=118 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Msg_DestroyWindow(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Msg_DestroyWindow
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x4600  230  ?Msg_DestroyWindow@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0xc))(param_1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("hanChatView","destroy",Void_exref,1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("guildHanChatView","destroy",Void_exref,1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("miniChannelListView","destroy",Void_exref,1);
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnActivateOff @ 60a04680 size=23 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnActivateOff(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnActivateOff
          (CF5ChannelLobbyView *this,IParam *param_1)

{
                    /* 0x4680  107
                       ?Evt_ChannelLobby_OnActivateOff@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  if ((this->CF5ChannelLobbyView_data).offset_0x0 != (undefined4 *)0x0) {
    (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 4))(0);
  }
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateRoomList @ 60a046a0 size=55 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateRoomList(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnUpdateRoomList
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  undefined4 local_4;
  
                    /* 0x46a0  133
                       ?Evt_ChannelLobby_OnUpdateRoomList@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a162d0,&local_4);
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0x10))(param_1);
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMemberList @ 60a046e0 size=55 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMemberList(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnUpdateMemberList
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  undefined4 local_4;
  
                    /* 0x46e0  128
                       ?Evt_ChannelLobby_OnUpdateMemberList@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a162d0,&local_4);
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0x14))(param_1);
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMsnBuddyList @ 60a04720 size=20 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMsnBuddyList(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnUpdateMsnBuddyList
          (CF5ChannelLobbyView *this,IParam *param_1)

{
                    /* 0x4720  129
                       ?Evt_ChannelLobby_OnUpdateMsnBuddyList@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0x18))(param_1);
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateNotice @ 60a04740 size=20 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateNotice(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnUpdateNotice
          (CF5ChannelLobbyView *this,IParam *param_1)

{
                    /* 0x4740  131
                       ?Evt_ChannelLobby_OnUpdateNotice@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0x1c))(param_1);
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_NOGUAGE @ 60a04760 size=37 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_NOGUAGE(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnExitReason_NOGUAGE
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4760  118
                       ?Evt_ChannelLobby_OnExitReason_NOGUAGE@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","sendExitChannel",Void_exref,1);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_CANTSTAYCHANNEL @ 60a04790 size=37 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_CANTSTAYCHANNEL(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnExitReason_CANTSTAYCHANNEL
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4790  114
                       ?Evt_ChannelLobby_OnExitReason_CANTSTAYCHANNEL@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channel","sendExitChannel",Void_exref,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_ConnectTypeError @ 60a047c0 size=185 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_ConnectTypeError(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnExitReason_ConnectTypeError
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  SGlobalInfo *this_00;
  CExitReason *pCVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined1 uVar5;
  char *pcVar6;
  CSimpleStringT<char,1> local_14 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x47c0  115
                       ?Evt_ChannelLobby_OnExitReason_ConnectTypeError@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a129f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::ExitReason(this_00);
  pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      (pCVar1 + 4));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_10,pcVar2);
  local_4 = 0;
  LoadStr((int)local_14);
  pcVar6 = "dlgMsgBox";
  uVar5 = 0;
  iVar4 = 0x30;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar2 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_14);
  pcVar3 = ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)local_10);
  MsgBox((CWnd *)0x0,pcVar3,pcVar2,iVar4,(bool)uVar5,pcVar6);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_14);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_10);
  ExceptionList = local_c;
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_ReserveBanish @ 60a04880 size=302 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_ReserveBanish(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnExitReason_ReserveBanish
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  char cVar1;
  IGod *pIVar2;
  SGlobalInfo *pSVar3;
  IParam *pIVar4;
  CSimpleStringT<char,1> *this_00;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4880  119
                       ?Evt_ChannelLobby_OnExitReason_ReserveBanish@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a19;
  local_c = ExceptionList;
  uStack_24 = DAT_60a24730 ^ (int)register0x00000010 - 0x20U;
  ExceptionList = &local_c;
  uStack_28 = 0x60a048ae;
  pIVar2 = God();
  uStack_28 = 1;
  pcStack_2c = Void_exref;
  (**(code **)(*(int *)pIVar2 + 0x10))("channel");
  pSVar3 = GInfo();
  pIVar4 = SGlobalInfo::GData(pSVar3);
  cVar1 = (**(code **)(*(int *)pIVar4 + 0x18))(&DAT_60a16314);
  if (cVar1 != '\0') {
    uStack_28 = 0;
    pSVar3 = GInfo();
    pIVar4 = SGlobalInfo::GData(pSVar3);
    (**(code **)(*(int *)pIVar4 + 0x44))(&DAT_60a16314,&uStack_28);
    this_00 = (CSimpleStringT<char,1> *)LoadStr((int)&pcStack_2c);
    pcVar8 = "dlgMsgBox";
    bVar7 = true;
    iVar6 = 0;
    pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(this_00);
    MsgBox((CWnd *)0x0,"disconnectChannelServer",pcVar5,iVar6,bVar7,pcVar8);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pcStack_2c);
    pSVar3 = GInfo();
    pIVar4 = SGlobalInfo::GData(pSVar3);
    (**(code **)(*(int *)pIVar4 + 0x90))(&DAT_60a16314);
  }
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x20))("mainFrameView","onClickExitBtn",Void_exref,0);
  ExceptionList = s_disconnectChannelServer_60a16318;
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnAvatarChange @ 60a049b0 size=55 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnAvatarChange(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnAvatarChange
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
                    /* 0x49b0  109
                       ?Evt_ChannelLobby_OnAvatarChange@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  puVar1 = &local_4;
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a160b8,&local_4);
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0x20))(puVar1);
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMyInfo @ 60a049f0 size=15 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnUpdateMyInfo(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnUpdateMyInfo
          (CF5ChannelLobbyView *this,IParam *param_1)

{
                    /* 0x49f0  130
                       ?Evt_ChannelLobby_OnUpdateMyInfo@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0x24))();
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnChannelSocketActive @ 60a04a00 size=50 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnChannelSocketActive(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnChannelSocketActive
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  char unaff_SI;
  
                    /* 0x4a00  111
                       ?Evt_ChannelLobby_OnChannelSocketActive@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a16274,&param_1);
  (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0x28))(unaff_SI != '\0');
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnChannelJoinComplete @ 60a04a40 size=192 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnChannelJoinComplete(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnChannelJoinComplete
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4a40  110
                       ?Evt_ChannelLobby_OnChannelJoinComplete@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p045",1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("channel","onChannelUIEnable");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return iVar2;
}



/* ---- CF5ChannelLobbyView::Evt_LobbyState_OnStateChanged @ 60a04b00 size=178 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_LobbyState_OnStateChanged(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_LobbyState_OnStateChanged
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined1 auStack_6 [2];
  undefined4 local_4;
  
                    /* 0x4b00  149
                       ?Evt_LobbyState_OnStateChanged@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  puVar8 = &local_4;
  pbVar7 = &DAT_60a16338;
  local_4 = 0;
  cVar2 = (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a16338,puVar8);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a16330,auStack_6 + -10);
    if (cVar2 != '\0') {
      pbVar5 = &DAT_60a15d8c;
      pbVar3 = pbVar7;
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_60a04b72:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_60a04b77;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_60a04b72;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_60a04b77:
      if (iVar4 == 0) {
        (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 4))(0);
      }
      (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 0x2c))(puVar8,pbVar7);
      return 0;
    }
  }
  return -0xb;
}



/* ---- CF5ChannelLobbyView::OnDblClickRoomList @ 60a04bc0 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnDblClickRoomList(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnDblClickRoomList
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4bc0  317  ?OnDblClickRoomList@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onDblClickRoomList",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickChangeChannelBtn @ 60a04bf0 size=37 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickChangeChannelBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickChangeChannelBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4bf0  281  ?OnClickChangeChannelBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickChangeChannel",Void_exref,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickCreateRoomBtn @ 60a04c20 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickCreateRoomBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickCreateRoomBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4c20  284  ?OnClickCreateRoomBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickCreateRoomBtn",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickJoinRoomBtn @ 60a04c50 size=114 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickJoinRoomBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickJoinRoomBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  NThread_Location NVar2;
  NThread_State NVar3;
  IFunctor *pIVar4;
  IGod *pIVar5;
  int iVar6;
  
                    /* 0x4c50  294  ?OnClickJoinRoomBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pSVar1 = GInfo();
  NVar2 = SGlobalInfo::GetThreadLocation(pSVar1);
  if (NVar2 != 0) {
    pSVar1 = GInfo();
    NVar3 = SGlobalInfo::GetThreadState(pSVar1);
    if (NVar3 != 2) {
      pIVar4 = CFunctor::Get((CFunctor *)((this->CF5ChannelLobbyView_data).offset_0x0 + 4));
      TLDIALOGEX_ON(0x280a,true,true,pIVar4);
      return 0;
    }
  }
  pIVar5 = God();
  iVar6 = (**(code **)(*(int *)pIVar5 + 0x20))("channelView","onClickJoinRoomBtn",param_1,0);
  return iVar6;
}



/* ---- CF5ChannelLobbyView::OnClickViewRoomBtn @ 60a04cd0 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickViewRoomBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickViewRoomBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4cd0  309  ?OnClickViewRoomBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickViewRoomBtn",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickRoomAvatar @ 60a04d00 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickRoomAvatar(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickRoomAvatar
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4d00  301  ?OnClickRoomAvatar@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickRoomAvatar",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnDblClickMemberList @ 60a04d30 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnDblClickMemberList(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnDblClickMemberList
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4d30  316  ?OnDblClickMemberList@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onDblClickMemberList",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickDirectStartBtn @ 60a04d60 size=161 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickDirectStartBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickDirectStartBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  bool bVar1;
  SGlobalInfo *pSVar2;
  CAppRunningState *pCVar3;
  NThread_Location NVar4;
  NThread_State NVar5;
  IFunctor *pIVar6;
  IGod *pIVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar9 = DAT_60a2477c;
  uVar10 = DAT_60a24780;
                    /* 0x4d60  285  ?OnClickDirectStartBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::AppRunningState(pSVar2);
  bVar1 = CAppRunningState::IsRunning(pCVar3,uVar9,uVar10);
  if (bVar1) {
    return 0x40000000;
  }
  pSVar2 = GInfo();
  NVar4 = SGlobalInfo::GetThreadLocation(pSVar2);
  if (NVar4 != 0) {
    pSVar2 = GInfo();
    NVar5 = SGlobalInfo::GetThreadState(pSVar2);
    if (NVar5 != 2) {
      pIVar6 = CFunctor::Get((CFunctor *)((this->CF5ChannelLobbyView_data).offset_0x0 + 6));
      TLDIALOGEX_ON(0x280a,true,true,pIVar6);
      return 0;
    }
  }
  pIVar7 = God();
  iVar8 = (**(code **)(*(int *)pIVar7 + 0x20))("channelView","onClickDirectStartBtn",Void_exref,0);
  return iVar8;
}



/* ---- CF5ChannelLobbyView::OnClickRecommendedGameBtn @ 60a04e10 size=37 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickRecommendedGameBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickRecommendedGameBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4e10  299
                       ?OnClickRecommendedGameBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))
                    ("channelView","onClickRecommendedGameBtn",Void_exref,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickExitBtn @ 60a04e40 size=192 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickExitBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickExitBtn(CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4e40  287  ?OnClickExitBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p176",1);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("mainFrameView","onClickExitBtn");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickAutoCreateRoomBtn @ 60a04f00 size=37 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickAutoCreateRoomBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickAutoCreateRoomBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4f00  279  ?OnClickAutoCreateRoomBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))
                    ("channelView","onClickAutoCreateRoomBtn",Void_exref,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnGetItemState @ 60a04f30 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnGetItemState(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnGetItemState(CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x4f30  333  ?OnGetItemState@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onGetItemState",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnCloseItemWebDlg @ 60a04f60 size=161 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnCloseItemWebDlg(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnCloseItemWebDlg
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  int iVar1;
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4f60  311  ?OnCloseItemWebDlg@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  ShowGameItemWebDialog(local_94,false,true);
  local_4 = 0xffffffff;
  CParam::~CParam(local_94);
  ExceptionList = local_c;
  iVar1 = __security_check_cookie(local_10 ^ (uint)local_94);
  return iVar1;
}



/* ---- CF5ChannelLobbyView::OnClickShowItemWebBtn @ 60a05010 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickShowItemWebBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickShowItemWebBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5010  306  ?OnClickShowItemWebBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickShowItemWebBtn",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickMyHomepageBtn @ 60a05040 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickMyHomepageBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickMyHomepageBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5040  297  ?OnClickMyHomepageBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickMyHomepageBtn",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickGuildWebBtn @ 60a05070 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickGuildWebBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickGuildWebBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5070  291  ?OnClickGuildWebBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickGuildCtrl",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickThermometer @ 60a050a0 size=37 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickThermometer(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickThermometer
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x50a0  308  ?OnClickThermometer@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickEventBtn1",param_1,0);
  return 0;
}



/* ---- CF5ChannelLobbyView::OnClickDonationWebBtn @ 60a050d0 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickDonationWebBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickDonationWebBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x50d0  286  ?OnClickDonationWebBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickHappyBeanBtn",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickShowEmptyRoomBtn @ 60a05100 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickShowEmptyRoomBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickShowEmptyRoomBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5100  305  ?OnClickShowEmptyRoomBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickShowEmptyRoomBtn",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickShowRoomNumOrderBtn @ 60a05130 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickShowRoomNumOrderBtn(struct IParam &)
    */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickShowRoomNumOrderBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5130  307
                       ?OnClickShowRoomNumOrderBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickShowRoomNumOrderBtn",param_1,0)
  ;
  return iVar2;
}



/* ---- CF5ChannelLobbyView::OnClickSearchRoomBtn @ 60a05160 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickSearchRoomBtn(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickSearchRoomBtn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5160  304  ?OnClickSearchRoomBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickSearchRoomBtn",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnShowWindow @ 60a05190 size=23 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnShowWindow(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnShowWindow
          (CF5ChannelLobbyView *this,IParam *param_1)

{
                    /* 0x5190  125
                       ?Evt_ChannelLobby_OnShowWindow@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  if ((this->CF5ChannelLobbyView_data).offset_0x0 != (undefined4 *)0x0) {
    (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 4))(1);
  }
  return 0;
}



/* ---- CF5ChannelLobbyView::OnClickSPCRoom @ 60a051b0 size=35 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::OnClickSPCRoom(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__OnClickSPCRoom(CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x51b0  303  ?OnClickSPCRoom@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickSPCRoom",param_1,0);
  return iVar2;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnSetSPCRoomString @ 60a051e0 size=293 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnSetSPCRoomString(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnSetSPCRoomString
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  uint uVar1;
  int unaff_EBX;
  int iVar2;
  undefined4 local_58;
  char local_54 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_44;
  undefined1 local_43 [35];
  uint uStack_20;
  void *pvStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x51e0  124
                       ?Evt_ChannelLobby_OnSetSPCRoomString@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a89;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)&local_58;
  uVar1 = DAT_60a24730 ^ (uint)(local_54 + -0x14);
  ExceptionList = &local_c;
  local_44 = 0;
  memset(local_43,0,0x32);
  local_4c = DAT_60a16530;
  local_48 = DAT_60a16534;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_50);
  local_4 = 0;
  local_58 = 0;
  local_54[0] = '\0';
  local_54[1] = '\0';
  local_54[2] = '\0';
  local_54[3] = '\0';
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a16528,local_54,uVar1);
  iVar2 = 0;
  if (0 < unaff_EBX) {
    do {
      FUN_60a01000((char *)&local_4c,0x33,local_54,' ');
      (**(code **)(*(int *)param_1 + 0x44))(&local_4c,local_54 + -0xc);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(local_54 + -8),
                 local_54 + -8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  (**(code **)(*(int *)param_1 + 0x44))("k451e",local_54 + -0xc);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(local_54 + -0xc));
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(local_54 + -0x14));
  return iVar2;
}



/* ---- CF5ChannelLobbyView::Net_Banish @ 60a05310 size=371 ---- */

/* public: virtual int __thiscall CF5ChannelLobbyView::Net_Banish(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Net_Banish(CF5ChannelLobbyView *this,IParam *param_1)

{
  bool bVar1;
  IGod *pIVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 uVar6;
  char *pcVar7;
  undefined4 uStack_bc;
  char *pcStack_b8;
  CParam *pCStack_b4;
  undefined1 auStack_a0 [2];
  CParam aCStack_9e [10];
  CParam local_94 [100];
  uint uStack_30;
  void *pvStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5310  262  ?Net_Banish@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12ae4;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)auStack_a0;
  ExceptionList = &local_c;
  pCStack_b4 = (CParam *)0x60a0535c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pIVar2 = God();
  pCStack_b4 = local_94;
  pcStack_b8 = "queryState";
  uStack_bc = "lobbyState";
  (**(code **)(*(int *)pIVar2 + 0x10))();
  CParam::GetValue((CParam *)(auStack_a0 + -4),"p008",(char **)(auStack_a0 + -8));
  uStack_14 = 0xffffffff;
  CParam::~CParam((CParam *)(auStack_a0 + -4));
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))("channel","sendExitChannel",Void_exref);
  GetErrorString((IParam *)(auStack_a0 + -0x20));
  uStack_24 = 1;
  bVar1 = ATL::CSimpleStringT<char,1>::IsEmpty((CSimpleStringT<char,1> *)(auStack_a0 + -0x20));
  if (!bVar1) {
    LoadStr((int)&uStack_bc);
    pcVar7 = "dlgMsgBoxHostBanish";
    uVar6 = 1;
    iVar5 = 0x30;
    uStack_24 = CONCAT31(uStack_24._1_3_,2);
    pcVar3 = ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)&uStack_bc)
    ;
    pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                       ((CSimpleStringT<char,1> *)(auStack_a0 + -0x20));
    MsgBox((CWnd *)0x0,pcVar4,pcVar3,iVar5,(bool)uVar6,pcVar7);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&uStack_bc);
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_a0 + -0x20));
  ExceptionList = pvStack_2c;
  iVar5 = __security_check_cookie(uStack_30 ^ (uint)(auStack_a0 + -0x20));
  return iVar5;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnSetGameRate @ 60a05490 size=124 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnSetGameRate(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnSetGameRate
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x5490  123
                       ?Evt_ChannelLobby_OnSetGameRate@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  local_8 = 0;
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x44))();
  (**(code **)(*(int *)param_1 + 0x60))(&DAT_60a16584,(int)register0x00000010 + -0xc);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5ChannelLobbyView_data).field_0x24,"k2e");
  (this->CF5ChannelLobbyView_data).offset_0x28 = &local_8;
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("hanChat","onSetGameRate",param_1,0);
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnGetShutdownTime @ 60a05510 size=107 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnGetShutdownTime(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnGetShutdownTime
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IParam *pIVar1;
  IGod *pIVar2;
  int unaff_ESI;
  
                    /* 0x5510  122
                       ?Evt_ChannelLobby_OnGetShutdownTime@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  pIVar1 = param_1;
  (**(code **)(*(int *)param_1 + 100))("k620e",&param_1);
  if (unaff_ESI == 0x91a) {
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))("channel","shutdownNotice",pIVar1,1);
    return 0;
  }
  if (unaff_ESI == 0) {
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))("channel","shutdownExit",pIVar1,1);
  }
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnShutdownExit @ 60a05580 size=75 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnShutdownExit(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnShutdownExit
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x5580  126
                       ?Evt_ChannelLobby_OnShutdownExit@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a165c8,"showShutdownExitDialog",param_1,1);
  if (-1 < iVar2) {
    pIVar1 = God();
    (**(code **)(*(int *)pIVar1 + 0x10))("channel","exitProgramByChnl",Void_exref,1);
  }
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnShutdownNotice @ 60a055d0 size=39 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnShutdownNotice(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnShutdownNotice
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x55d0  127
                       ?Evt_ChannelLobby_OnShutdownNotice@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a165c8,"showShutdownNoticeDialog",Void_exref,1);
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_SHUTDOWN @ 60a05600 size=203 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_SHUTDOWN(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnExitReason_SHUTDOWN
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  IGod *pIVar2;
  int iVar3;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5600  120
                       ?Evt_ChannelLobby_OnExitReason_SHUTDOWN@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pSVar1 = GInfo();
  CParam::AddValue(local_94,"k622e",*(int *)(pSVar1 + 0x10c));
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))("channel","shutdownExit");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  iVar3 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return iVar3;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelGaeaPromotionData @ 60a056d0 size=191 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelGaeaPromotionData(struct IParam
   &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelGaeaPromotionData
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CGaeaData *this_00;
  GA_PRM_Data *this_01;
  GA_PRM_MasterInfo *pGVar2;
  GA_PRM_UserInfo *pGVar3;
  CAlarmData *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
                    /* 0x56d0  105
                       ?Evt_ChannelGaeaPromotionData@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                       0x56d0  179  ?Evt_RoomGaeaPromotionData@CF5GameView@@QAEHAAUIParam@@@Z */
  pSVar1 = GInfo();
  this_00 = SGlobalInfo::GaeaData(pSVar1);
  this_01 = CGaeaData::GetPromotionData(this_00);
  pGVar2 = GA_PRM_Data::GetMasterInfo(this_01,0xdd,1);
  if ((pGVar2 != (GA_PRM_MasterInfo *)0x0) && (*(int *)(pGVar2 + 4) == 1)) {
    pGVar3 = GA_PRM_Data::GetUserInfo(this_01,0xdd,1);
    if (pGVar3 != (GA_PRM_UserInfo *)0x0) {
      iVar8 = *(int *)(pGVar3 + 0x10);
      iVar7 = *(int *)(pGVar3 + 8);
      iVar6 = *(int *)(pGVar3 + 0x20);
      iVar5 = *(int *)(pGVar3 + 0x18);
      pSVar1 = GInfo();
      pCVar4 = SGlobalInfo::AlarmData(pSVar1);
      CAlarmData::SetAlarmData(pCVar4,iVar5,iVar6,iVar7,iVar8);
    }
  }
  pGVar2 = GA_PRM_Data::GetMasterInfo(this_01,0xde,1);
  if ((pGVar2 != (GA_PRM_MasterInfo *)0x0) && (*(int *)(pGVar2 + 4) == 1)) {
    pGVar3 = GA_PRM_Data::GetUserInfo(this_01,0xde,1);
    if (pGVar3 != (GA_PRM_UserInfo *)0x0) {
      iVar8 = *(int *)(pGVar3 + 0x10);
      iVar7 = *(int *)(pGVar3 + 8);
      iVar6 = *(int *)(pGVar3 + 0x20);
      iVar5 = *(int *)(pGVar3 + 0x18);
      pSVar1 = GInfo();
      pCVar4 = SGlobalInfo::AlarmData(pSVar1);
      CAlarmData::SetAlarmData(pCVar4,iVar5,iVar6,iVar7,iVar8);
    }
  }
  return 0;
}



/* ---- ~logic_error @ 60a05970 size=27 ---- */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
                    /* WARNING: Could not recover jumptable at 0x60a05985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 60a05990 size=48 ---- */

exception * __thiscall
std::out_of_range::scalar_deleting_destructor(out_of_range *this,byte param_1)

{
                    /* inlined destructor: std::logic_error::~logic_error */
  this->vftablePtr = (out_of_range_vftable *)&logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
  std::exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* ---- CF5ChannelLobbyView @ 60a059c0 size=139 ---- */

/* public: __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView(void) */

CF5ChannelLobbyView * __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView(CF5ChannelLobbyView *this)

{
  undefined1 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x59c0  6  ??0CF5ChannelLobbyView@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12b38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  (this->CF5ChannelLobbyView_data).offset_0x0 = (undefined4 *)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CF5ChannelLobbyView_data).field_0x4,"channelView");
  this_00 = &(this->CF5ChannelLobbyView_data).field_0x24;
  local_4 = 0;
  (this->CF5ChannelLobbyView_data).offset_0x20 = 1;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this_00,
             (char *)&PTR_60a15dfc);
  (this->CF5ChannelLobbyView_data).offset_0x28 = 0;
  ExceptionList = local_c;
  return this;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnActivateOn @ 60a05a50 size=158 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnActivateOn(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnActivateOn
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  char cVar1;
  CWinThread *pCVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  undefined1 auStack_2 [2];
  
                    /* 0x5a50  108
                       ?Evt_ChannelLobby_OnActivateOn@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  cVar1 = (**(code **)(*(int *)param_1 + 0x18))(&DAT_60a16614);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a16614,auStack_2 + -3);
  }
  if ((char)((uint)unaff_ESI >> 0x18) == '\x01') {
    if ((this->CF5ChannelLobbyView_data).offset_0x0 != (undefined4 *)0x0) {
      (**(code **)(*(this->CF5ChannelLobbyView_data).offset_0x0 + 4))(1);
    }
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      iVar3 = (**(code **)(*(int *)pCVar2 + 0x7c))();
      if (iVar3 != 0) {
        pCVar2 = AfxGetThread();
        if (pCVar2 != (CWinThread *)0x0) {
          piVar4 = (int *)(**(code **)(*(int *)pCVar2 + 0x7c))();
          (**(code **)(*piVar4 + 0x1a8))();
          return 0;
        }
        (**(code **)(iRam00000000 + 0x1a8))();
      }
    }
  }
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_MINUSMONEY @ 60a05af0 size=222 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_MINUSMONEY(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnExitReason_MINUSMONEY
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  void *pvVar1;
  CWinThread *pCVar2;
  CWnd *pCVar3;
  char *pcVar4;
  char *pcVar5;
  IGod *pIVar6;
  int iVar7;
  undefined1 uVar8;
  char *pcVar9;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_1a [2];
  CSimpleStringT<char,1> local_14 [4];
  CSimpleStringT<char,1> local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5af0  117
                       ?Evt_ChannelLobby_OnExitReason_MINUSMONEY@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12b72;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_60a24730 ^ (uint)(aCStack_1a + 2));
  ExceptionList = &local_c;
  LoadStr((int)local_10);
  local_4 = 0;
  LoadStr((int)local_14);
  local_4 = CONCAT31(local_4._1_3_,1);
  pCVar2 = AfxGetThread();
  if (pCVar2 == (CWinThread *)0x0) {
    pCVar3 = (CWnd *)0x0;
  }
  else {
    pCVar3 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x7c))();
  }
  pcVar9 = "dlgMsgBox";
  uVar8 = 0;
  iVar7 = 0x30;
  pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_14);
  pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_10);
  MsgBox(pCVar3,pcVar5,pcVar4,iVar7,(bool)uVar8,pcVar9);
  pIVar6 = God();
  (**(code **)(*(int *)pIVar6 + 0x20))("mainFrameView","onClickExitBtn");
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_1a + -10);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_1a + -6);
  ExceptionList = pvVar1;
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_BANISHED @ 60a05bd0 size=188 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_BANISHED(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnExitReason_BANISHED
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  uint uVar1;
  CWinThread *pCVar2;
  CWnd *pCVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  char *pcVar8;
  CSimpleStringT<char,1> local_14 [2];
  CSimpleStringT<char,1> aCStack_12 [2];
  CSimpleStringT<char,1> local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5bd0  113
                       ?Evt_ChannelLobby_OnExitReason_BANISHED@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12b72;
  local_c = ExceptionList;
  uVar1 = DAT_60a24730 ^ (uint)(local_14 + -4);
  ExceptionList = &local_c;
  LoadStr((int)local_10);
  local_4 = 0;
  LoadStr((int)local_14);
  local_4 = CONCAT31(local_4._1_3_,1);
  pCVar2 = AfxGetThread();
  if (pCVar2 == (CWinThread *)0x0) {
    pCVar3 = (CWnd *)0x0;
  }
  else {
    pCVar3 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x7c))(uVar1);
  }
  pcVar8 = "dlgMsgBox";
  uVar7 = 0;
  iVar6 = 0x30;
  pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_14);
  pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_10);
  MsgBox(pCVar3,pcVar5,pcVar4,iVar6,(bool)uVar7,pcVar8);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_14);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_10);
  ExceptionList = local_c;
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_BADUSER @ 60a05c90 size=356 ---- */

/* protected: virtual int __thiscall
   CF5ChannelLobbyView::Evt_ChannelLobby_OnExitReason_BADUSER(struct IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnExitReason_BADUSER
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  IGod *pIVar1;
  CWinThread *pCVar2;
  CWnd *pCVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  char *pcVar8;
  undefined4 uStack_b4;
  char *pcStack_b0;
  code *pcStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_9c [108];
  uint uStack_30;
  void *pvStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x5c90  112
                       ?Evt_ChannelLobby_OnExitReason_BADUSER@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a12bb4;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)auStack_9c;
  uStack_a4 = DAT_60a24730 ^ (uint)(auStack_9c + -4);
  ExceptionList = &local_c;
  uStack_a8 = 0x60a05cd0;
  pIVar1 = God();
  uStack_a8 = 1;
  pcStack_ac = Void_exref;
  pcStack_b0 = "sendExitChannel";
  uStack_b4 = "channel";
  (**(code **)(*(int *)pIVar1 + 0x10))();
  CParam::CParam((CParam *)&uStack_a4,false);
  uStack_14 = 0;
  CParam::AddValue((CParam *)&uStack_a4,"p119",0);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("channelView","onClickChangeChannel");
  LoadStr((int)(auStack_9c + -0x20));
  uStack_24._0_1_ = 1;
  LoadStr((int)(auStack_9c + -0x1c));
  uStack_24 = CONCAT31(uStack_24._1_3_,2);
  pCVar2 = AfxGetThread();
  if (pCVar2 == (CWinThread *)0x0) {
    pCVar3 = (CWnd *)0x0;
  }
  else {
    pCVar3 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x7c))();
  }
  pcVar8 = "dlgMsgBox";
  uVar7 = 0;
  iVar6 = 0x30;
  pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                     ((CSimpleStringT<char,1> *)(auStack_9c + -0x1c));
  pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_
                     ((CSimpleStringT<char,1> *)(auStack_9c + -0x20));
  MsgBox(pCVar3,pcVar5,pcVar4,iVar6,(bool)uVar7,pcVar8);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_9c + -0x1c));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(auStack_9c + -0x20));
  uStack_24 = 0xffffffff;
  CParam::~CParam((CParam *)&uStack_b4);
  ExceptionList = pvStack_2c;
  iVar6 = __security_check_cookie(uStack_30 ^ (uint)(auStack_9c + -0x20));
  return iVar6;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_FailAutoCreateRoom @ 60a05e00 size=188 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_FailAutoCreateRoom(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_FailAutoCreateRoom
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  uint uVar1;
  CWinThread *pCVar2;
  CWnd *pCVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  char *pcVar8;
  CSimpleStringT<char,1> local_14 [2];
  CSimpleStringT<char,1> aCStack_12 [2];
  CSimpleStringT<char,1> local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5e00  106
                       ?Evt_ChannelLobby_FailAutoCreateRoom@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12b72;
  local_c = ExceptionList;
  uVar1 = DAT_60a24730 ^ (uint)(local_14 + -4);
  ExceptionList = &local_c;
  LoadStr((int)local_10);
  local_4 = 0;
  LoadStr((int)local_14);
  local_4 = CONCAT31(local_4._1_3_,1);
  pCVar2 = AfxGetThread();
  if (pCVar2 == (CWinThread *)0x0) {
    pCVar3 = (CWnd *)0x0;
  }
  else {
    pCVar3 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x7c))(uVar1);
  }
  pcVar8 = "dlgMsgBox";
  uVar7 = 1;
  iVar6 = 0x30;
  pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_14);
  pcVar5 = ATL::CSimpleStringT<char,1>::operator_char_const_(local_10);
  MsgBox(pCVar3,pcVar5,pcVar4,iVar6,(bool)uVar7,pcVar8);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_14);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)local_10);
  ExceptionList = local_c;
  return 0;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_RefreshTicket @ 60a05ec0 size=117 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_RefreshTicket(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_RefreshTicket
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  char cVar1;
  CWinThread *pCVar2;
  int iVar3;
  int *piVar4;
  uint unaff_ESI;
  undefined1 auStack_2 [2];
  
                    /* 0x5ec0  135
                       ?Evt_ChannelLobby_RefreshTicket@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z */
  cVar1 = (**(code **)(*(int *)param_1 + 0x18))(&DAT_60a16624);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a16624,auStack_2 + -3);
  }
  pCVar2 = AfxGetThread();
  if (pCVar2 != (CWinThread *)0x0) {
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x7c))();
    if (iVar3 != 0) {
      pCVar2 = AfxGetThread();
      if (pCVar2 == (CWinThread *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(**(code **)(*(int *)pCVar2 + 0x7c))();
      }
      (**(code **)(*piVar4 + 0x19c))(unaff_ESI >> 0x18);
    }
  }
  return 0;
}



/* ---- FUN_60a05f40 @ 60a05f40 size=151 ---- */

undefined4 __thiscall FUN_60a05f40(void *this,undefined4 param_1)

{
  char cVar1;
  CMetpParser *pCVar2;
  uint uStack_98;
  logic_error local_60 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [32];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_60a12bf9;
  local_10 = ExceptionList;
  uStack_98 = DAT_60a24730 ^ (uint)(local_38 + 0x34);
  local_14 = (undefined1 *)&uStack_98;
  ExceptionList = &local_10;
  local_8 = 0;
  pCVar2 = CMetpParserRet::ParserPtr(this);
  cVar1 = (**(code **)(*(int *)pCVar2 + 100))(param_1,&local_18);
  if (cVar1 == '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_38,"CMetpParserRet.Get()::NoValue");
    local_8 = CONCAT31(local_8._1_3_,1);
                    /* inlined constructor: std::invalid_argument::invalid_argument */
    std::logic_error::logic_error
              (local_60,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_38);
    local_60[0].vftablePtr = (logic_error_vftable *)&std::invalid_argument::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_60,(ThrowInfo *)&DAT_60a1916c);
  }
  ExceptionList = local_10;
  return local_18;
}



/* ---- Catch@60a05fd7 @ 60a05fd7 size=32 ---- */

void Catch_60a05fd7(void)

{
  int unaff_EBP;
  
  std::logic_error::logic_error
            ((logic_error *)(unaff_EBP + -0x84),*(exception **)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)(unaff_EBP + -0x84),(ThrowInfo *)&DAT_60a1915c);
}



/* ---- FUN_60a06000 @ 60a06000 size=25 ---- */

logic_error * __thiscall FUN_60a06000(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::invalid_argument::vftable;
  return param_1;
}



/* ---- FUN_60a06020 @ 60a06020 size=96 ---- */

void __thiscall FUN_60a06020(void *this,uint param_1)

{
  sbyte sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = param_1 >> 5;
  if (uVar5 != 0) {
    iVar2 = 1;
    puVar3 = (undefined4 *)((int)this + uVar5 * -4 + 4);
    do {
      if (iVar2 < (int)uVar5) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar3;
      }
      *(undefined4 *)((int)this + iVar2 * 4) = uVar4;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  if ((param_1 & 0x1f) != 0) {
    sVar1 = (sbyte)(param_1 & 0x1f);
    *(uint *)((int)this + 4) =
         *(uint *)this >> (0x20U - sVar1 & 0x1f) | *(int *)((int)this + 4) << sVar1;
    *(int *)this = *(int *)this << sVar1;
  }
  return;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelLobby_OnUserExitGameRoom @ 60a06080 size=856 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelLobby_OnUserExitGameRoom(struct
   IParam &) */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelLobby_OnUserExitGameRoom
          (CF5ChannelLobbyView *this,IParam *param_1)

{
  undefined1 *this_00;
  SGlobalInfo *pSVar1;
  CMetpParserRet *pCVar2;
  int iVar3;
  int iVar4;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar5;
  char *pcVar6;
  IGod *pIVar7;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *extraout_ECX;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_01;
  NInfoTypes NVar8;
  undefined *puVar9;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_128 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_124 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_120 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_11c [4];
  CParam aCStack_118 [132];
  CParam aCStack_94 [8];
  CParam local_8c [124];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x6080  134
                       ?Evt_ChannelLobby_OnUserExitGameRoom@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12c68;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_128;
  ExceptionList = &local_c;
  puVar9 = &DAT_60a16698;
  NVar8 = 7;
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
  iVar3 = FUN_60a05f40(pCVar2,puVar9);
  puVar9 = &DAT_60a16698;
  NVar8 = 3;
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
  iVar4 = FUN_60a05f40(pCVar2,puVar9);
  if (iVar4 != iVar3) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_124);
    local_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_120);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_128);
    local_4._0_1_ = 2;
    pCVar5 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             LoadStr((int)local_11c);
    local_4._0_1_ = 3;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=(local_120,pCVar5);
    local_4._0_1_ = 2;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_11c);
    puVar9 = &DAT_60a16690;
    NVar8 = 7;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    iVar3 = FUN_60a05f40(pCVar2,puVar9);
    puVar9 = &DAT_60a16690;
    NVar8 = 3;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    iVar4 = FUN_60a05f40(pCVar2,puVar9);
    if (iVar4 - iVar3 < 0) {
      this_01 = extraout_ECX;
    }
    else {
      this_01 = local_128;
    }
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_01,(char *)local_128);
    puVar9 = &DAT_60a16680;
    NVar8 = 7;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    FUN_60a05f40(pCVar2,puVar9);
    puVar9 = &DAT_60a16680;
    NVar8 = 3;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    FUN_60a05f40(pCVar2,puVar9);
    puVar9 = &DAT_60a16678;
    NVar8 = 7;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    FUN_60a05f40(pCVar2,puVar9);
    puVar9 = &DAT_60a16678;
    NVar8 = 3;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    FUN_60a05f40(pCVar2,puVar9);
    puVar9 = &DAT_60a16670;
    NVar8 = 7;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    FUN_60a05f40(pCVar2,puVar9);
    puVar9 = &DAT_60a16670;
    NVar8 = 3;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    FUN_60a05f40(pCVar2,puVar9);
    puVar9 = &DAT_60a16698;
    NVar8 = 7;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    FUN_60a05f40(pCVar2,puVar9);
    puVar9 = &DAT_60a16698;
    NVar8 = 3;
    pSVar1 = GInfo();
    pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar8);
    FUN_60a05f40(pCVar2,puVar9);
    ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)local_11c);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (local_120,(char *)local_120);
    CParam::CParam(local_8c,false);
    pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)local_11c);
    CParam::AddValue(local_8c,"k2e",pcVar6);
    CParam::AddValue(local_8c,"k40e",0xff);
    pIVar7 = God();
    (**(code **)(*(int *)pIVar7 + 0x10))("hanChat","chatNoticeMessage",local_8c);
    this_00 = &(this->CF5ChannelLobbyView_data).field_0x24;
    iVar3 = ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Compare
                      ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this_00,
                       (char *)&PTR_60a15dfc);
    if (iVar3 != 0) {
      CParam::CParam(aCStack_118,false);
      local_4._0_1_ = 5;
      pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)this_00);
      CParam::AddValue(aCStack_118,"k2e",pcVar6);
      CParam::AddValue(aCStack_118,"k40e",(this->CF5ChannelLobbyView_data).offset_0x28);
      pIVar7 = God();
      (**(code **)(*(int *)pIVar7 + 0x10))("hanChat","chatNoticeMessage",aCStack_118,1);
      local_4._0_1_ = 4;
      CParam::~CParam(aCStack_118);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    CParam::~CParam(aCStack_94);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_128);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_120);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_124);
  }
  ExceptionList = local_c;
  iVar3 = __security_check_cookie(local_10 ^ (uint)local_128);
  return iVar3;
}



/* ---- scalar_deleting_destructor @ 60a063e0 size=18 ---- */

void __thiscall
CMFunctor<CF5ChannelLobbyView>::scalar_deleting_destructor(CMFunctor<CF5ChannelLobbyView> *this)

{
  if (this != (CMFunctor<CF5ChannelLobbyView> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CF5ChannelLobbyView>::~CMFunctor<CF5ChannelLobbyView> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CMFunctor<CF5ChannelLobbyView> @ 60a06400 size=1087 ---- */

/* public: __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView(class CF5ChannelLobbyWnd *,int) */

CMFunctor<CF5ChannelLobbyView> * __thiscall
CMFunctor<CF5ChannelLobbyView>::CMFunctor<CF5ChannelLobbyView>
          (CMFunctor<CF5ChannelLobbyView> *this,CF5ChannelLobbyWnd *param_1,int param_2)

{
  IFunctor *pIVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x6400  5  ??0CF5ChannelLobbyView@@QAE@PAVCF5ChannelLobbyWnd@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor: CF5ChannelLobbyView::CF5ChannelLobbyView */
  this->vftablePtr = (CMFunctor<CF5ChannelLobbyView>_vftable *)&CF5ChannelLobbyView::_vftable_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 2));
  local_4 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 10));
  local_4 = CONCAT31(local_4._1_3_,1);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(this + 10),
             (char *)&PTR_60a15dfc);
  this[0xb].vftablePtr = (CMFunctor<CF5ChannelLobbyView>_vftable *)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 2),
             "channelView");
  this[1].vftablePtr = (CMFunctor<CF5ChannelLobbyView>_vftable *)param_1;
  this[9].vftablePtr = (CMFunctor<CF5ChannelLobbyView>_vftable *)param_2;
  if (param_1 != (CF5ChannelLobbyWnd *)0x0) {
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
                    /* inlined constructor:
                       CMFunctor<CF5ChannelLobbyView>::CMFunctor<CF5ChannelLobbyView> */
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a0c020;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 4),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a08670;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 8),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a10110;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0xc),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a0f3a0;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x10),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a10160;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x14),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a10140;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x18),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a08690;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x1c),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a0f370;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x20),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a10150;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x24),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a057d0;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x28),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a05830;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x2c),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a08680;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x30),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a0f3a0;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x34),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a10160;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x38),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a0c000;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x3c),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a10100;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x40),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a058d0;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x44),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a057a0;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x48),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a0f380;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x4c),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a0f390;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x50),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a058f0;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x54),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a100d0;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x58),pIVar1);
    pIVar1 = operator_new(0xc);
    if (pIVar1 == (IFunctor *)0x0) {
      pIVar1 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5ChannelLobbyView>_vftable **)pIVar1 = &vftable;
      *(CMFunctor<CF5ChannelLobbyView> **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a05810;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 0x5c),pIVar1);
  }
  ExceptionList = local_c;
  return this;
}



/* ---- CF5ChannelLobbyView::OnAttached @ 60a06840 size=2553 ---- */

/* public: virtual bool __thiscall CF5ChannelLobbyView::OnAttached(void) */

bool __thiscall CF5ChannelLobbyView::CF5ChannelLobbyView__OnAttached(CF5ChannelLobbyView *this)

{
  int iVar1;
  char *pcVar2;
  IGod *pIVar3;
  undefined4 *puVar4;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_00;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_01;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_02;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_03;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_04;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_05;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_06;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_07;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_08;
  char *pcStack_22c;
  undefined4 *puStack_228;
  void *pvVar5;
  char *pcStack_1dc;
  undefined4 uStack_1d8;
  char *pcStack_1d0;
  undefined4 uStack_1cc;
  char *pcStack_1c4;
  undefined4 uStack_1c0;
  char *pcStack_1b8;
  undefined4 uStack_1b4;
  char *pcStack_1ac;
  undefined4 uStack_1a8;
  char *pcStack_1a0;
  undefined4 uStack_19c;
  char *pcStack_194;
  char *pcStack_190;
  undefined4 *puStack_18c;
  char *pcStack_188;
  char *pcStack_184;
  undefined4 uStack_180;
  char *pcStack_174;
  undefined4 *puStack_170;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x6840  269  ?OnAttached@CF5ChannelLobbyView@@UAE_NXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a12ce9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a100e0;
  }
  (**(code **)(*(int *)pIVar3 + 8))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a100f0;
  }
  (**(code **)(*(int *)pIVar3 + 8))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a0a5d0;
  }
  (**(code **)(*(int *)pIVar3 + 8))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a0a5a0;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a058a0;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a0a5f0;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a0a570;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a05790;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a057f0;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a05860;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a058e0;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a05870;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a05800;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a05900;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a057c0;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a05820;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a05880;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a057e0;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a05940;
  }
  (**(code **)(*(int *)pIVar3 + 0x1c))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = this;
    puVar4[2] = &LAB_60a0a560;
  }
  (**(code **)(*(int *)pIVar3 + 0x1c))();
  pIVar3 = God();
  puStack_170 = (undefined4 *)0x60a06d2e;
  puStack_170 = operator_new(0xc);
  if (puStack_170 == (undefined4 *)0x0) {
    puStack_170 = (undefined4 *)0x0;
  }
  else {
    *puStack_170 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puStack_170[1] = this;
    puStack_170[2] = &LAB_60a057b0;
  }
  pcStack_174 = "onStateChanged";
  (**(code **)(*(int *)pIVar3 + 0x1c))();
  pIVar3 = God();
  uStack_180 = (undefined4 *)0x60a06d6a;
  uStack_180 = operator_new(0xc);
  if (uStack_180 == (undefined4 *)0x0) {
    uStack_180 = (undefined4 *)0x0;
  }
  else {
    *uStack_180 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    uStack_180[1] = this;
    uStack_180[2] = &LAB_60a058c0;
  }
  pcStack_184 = "onAvatarChange";
  pcStack_188 = "channel";
  puStack_18c = (undefined4 *)0x60a06d9b;
  (**(code **)(*(int *)pIVar3 + 0x1c))();
  puStack_18c = (undefined4 *)0x60a06da5;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pcStack_174);
  puStack_18c = (undefined4 *)0x1;
  pcStack_190 = "onExitReason";
  pcStack_194 = "%s%d";
  uStack_19c = (char *)0x60a06dc6;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pcStack_174,
             (char *)&pcStack_174);
  pIVar3 = God();
  uStack_19c = (char *)0x60a06dd1;
  puStack_18c = operator_new(0xc);
  if (puStack_18c == (undefined4 *)0x0) {
    puStack_18c = (undefined4 *)0x0;
  }
  else {
    *puStack_18c = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puStack_18c[1] = this;
    puStack_18c[2] = &LAB_60a05850;
  }
  iVar1 = *(int *)pIVar3;
  pcStack_188 = (char *)0x1;
  pcStack_190 = (char *)0x60a06dfb;
  pcStack_190 = ATL::CSimpleStringT<char,1>::operator_char_const_
                          ((CSimpleStringT<char,1> *)&puStack_170);
  pcStack_194 = "channel";
  (**(code **)(iVar1 + 0x14))();
  uStack_19c = "onExitReason";
  pcStack_1a0 = "%s%d";
  uStack_1a8 = (char *)0x60a06e1b;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_00,(char *)&uStack_180);
  pIVar3 = God();
  uStack_1a8 = (char *)0x60a06e26;
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = "lobbyState";
    puVar4[2] = &LAB_60a058b0;
  }
  iVar1 = *(int *)pIVar3;
  pcStack_194 = (char *)0x1;
  uStack_19c = (char *)0x60a06e54;
  uStack_19c = ATL::CSimpleStringT<char,1>::operator_char_const_
                         ((CSimpleStringT<char,1> *)((int)register0x00000010 + -0x17c));
  pcStack_1a0 = "channel";
  (**(code **)(iVar1 + 0x14))();
  uStack_1a8 = "onExitReason";
  pcStack_1ac = "%s%d";
  uStack_1b4 = (char *)0x60a06e74;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_01,(char *)&puStack_18c);
  pIVar3 = God();
  uStack_1b4 = (char *)0x60a06e7f;
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = pcStack_184;
    puVar4[2] = &LAB_60a05950;
  }
  iVar1 = *(int *)pIVar3;
  pcStack_1a0 = (char *)0x1;
  uStack_1a8 = (char *)0x60a06ead;
  uStack_1a8 = ATL::CSimpleStringT<char,1>::operator_char_const_
                         ((CSimpleStringT<char,1> *)&pcStack_188);
  pcStack_1ac = "channel";
  (**(code **)(iVar1 + 0x14))();
  uStack_1b4 = "onExitReason";
  pcStack_1b8 = "%s%d";
  uStack_1c0 = (char *)0x60a06ecd;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_02,(char *)((int)register0x00000010 + -0x198));
  pIVar3 = God();
  uStack_1c0 = (char *)0x60a06ed8;
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = pcStack_190;
    puVar4[2] = &LAB_60a0a580;
  }
  iVar1 = *(int *)pIVar3;
  pcStack_1ac = (char *)0x1;
  uStack_1b4 = (char *)0x60a06f06;
  uStack_1b4 = ATL::CSimpleStringT<char,1>::operator_char_const_
                         ((CSimpleStringT<char,1> *)&pcStack_194);
  pcStack_1b8 = "channel";
  (**(code **)(iVar1 + 0x14))();
  uStack_1c0 = "onExitReason";
  pcStack_1c4 = "%s%d";
  uStack_1cc = (char *)0x60a06f26;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_03,(char *)((int)register0x00000010 + -0x1a4));
  pIVar3 = God();
  uStack_1cc = (char *)0x60a06f31;
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = uStack_19c;
    puVar4[2] = &LAB_60a0a5b0;
  }
  iVar1 = *(int *)pIVar3;
  pcStack_1b8 = (char *)0x1;
  uStack_1c0 = (char *)0x60a06f5f;
  uStack_1c0 = ATL::CSimpleStringT<char,1>::operator_char_const_
                         ((CSimpleStringT<char,1> *)&pcStack_1a0);
  pcStack_1c4 = "channel";
  (**(code **)(iVar1 + 0x14))();
  uStack_1cc = "onExitReason";
  pcStack_1d0 = "%s%d";
  uStack_1d8 = (char *)0x60a06f7f;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_04,(char *)((int)register0x00000010 + -0x1b0));
  pIVar3 = God();
  uStack_1d8 = (char *)0x60a06f8a;
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = uStack_1a8;
    puVar4[2] = &LAB_60a0a5e0;
  }
  iVar1 = *(int *)pIVar3;
  pcStack_1c4 = (char *)0x1;
  uStack_1cc = (char *)0x60a06fb8;
  uStack_1cc = ATL::CSimpleStringT<char,1>::operator_char_const_
                         ((CSimpleStringT<char,1> *)&pcStack_1ac);
  pcStack_1d0 = "channel";
  (**(code **)(iVar1 + 0x14))();
  uStack_1d8 = "onExitReason";
  pcStack_1dc = "%s%d";
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_05,(char *)((int)register0x00000010 + -0x1bc));
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = uStack_1b4;
    puVar4[2] = &LAB_60a05960;
  }
  iVar1 = *(int *)pIVar3;
  pcStack_1d0 = (char *)0x1;
  uStack_1d8 = (char *)0x60a07011;
  uStack_1d8 = ATL::CSimpleStringT<char,1>::operator_char_const_
                         ((CSimpleStringT<char,1> *)&pcStack_1b8);
  pcStack_1dc = "channel";
  (**(code **)(iVar1 + 0x14))();
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_06,(char *)((int)register0x00000010 + -0x1c8));
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = uStack_1c0;
    puVar4[2] = &LAB_60a0a590;
  }
  iVar1 = *(int *)pIVar3;
  pcStack_1dc = (char *)0x1;
  ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)&pcStack_1c4);
  (**(code **)(iVar1 + 0x14))();
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_07,(char *)((int)register0x00000010 + -0x1d4));
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = uStack_1cc;
    puVar4[2] = &LAB_60a0a5c0;
  }
  iVar1 = *(int *)pIVar3;
  ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)&pcStack_1d0);
  (**(code **)(iVar1 + 0x14))();
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_08,(char *)((int)register0x00000010 + -0x1e0));
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  pcVar2 = uStack_1d8;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = uStack_1d8;
    puVar4[2] = &LAB_60a05920;
  }
  iVar1 = *(int *)pIVar3;
  ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)&pcStack_1dc);
  (**(code **)(iVar1 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = pcVar2;
    puVar4[2] = &LAB_60a05840;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))();
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = pcVar2;
    puVar4[2] = &LAB_60a05910;
  }
  (**(code **)(*(int *)pIVar3 + 0x28))();
  pIVar3 = God();
  puStack_228 = (undefined4 *)0x60a071ac;
  puStack_228 = operator_new(0xc);
  if (puStack_228 == (undefined4 *)0x0) {
    puStack_228 = (undefined4 *)0x0;
  }
  else {
    *puStack_228 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puStack_228[1] = pcVar2;
    puStack_228[2] = &LAB_60a05890;
  }
  pvVar5 = (void *)0x1;
  pcStack_22c = "onPromotionData";
  (**(code **)(*(int *)pIVar3 + 0x14))("channel");
  pIVar3 = God();
  puVar4 = operator_new(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &CMFunctor<CF5ChannelLobbyView>::vftable;
    puVar4[1] = pcVar2;
    puVar4[2] = &LAB_60a05930;
  }
  (**(code **)(*(int *)pIVar3 + 0x14))("channel","onPrizeData",puVar4,1);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pcStack_22c);
  ExceptionList = pvVar5;
  return true;
}



/* ---- CF5ChannelLobbyWnd @ 60a07240 size=301 ---- */

/* public: __thiscall CF5ChannelLobbyWnd::CF5ChannelLobbyWnd(void) */

CF5ChannelLobbyWnd * __thiscall CF5ChannelLobbyWnd::CF5ChannelLobbyWnd(CF5ChannelLobbyWnd *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7240  8  ??0CF5ChannelLobbyWnd@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  CFunctor::CFunctor((CFunctor *)&this->CF5ChannelLobbyWnd_data);
  local_4 = 0;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x4);
  local_4._0_1_ = 1;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x8);
  local_4._0_1_ = 2;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0xc);
  local_4._0_1_ = 3;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x10);
  local_4._0_1_ = 4;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x14);
  local_4._0_1_ = 5;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x18);
  local_4._0_1_ = 6;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x1c);
  local_4._0_1_ = 7;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x20);
  local_4._0_1_ = 8;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x24);
  local_4._0_1_ = 9;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x28);
  local_4._0_1_ = 10;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x2c);
  local_4._0_1_ = 0xb;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x30);
  local_4._0_1_ = 0xc;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x34);
  local_4._0_1_ = 0xd;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x38);
  local_4._0_1_ = 0xe;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x3c);
  local_4._0_1_ = 0xf;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x40);
  local_4._0_1_ = 0x10;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x44);
  local_4._0_1_ = 0x11;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x48);
  local_4._0_1_ = 0x12;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x4c);
  local_4._0_1_ = 0x13;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x50);
  local_4._0_1_ = 0x14;
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x54);
  local_4 = CONCAT31(local_4._1_3_,0x15);
  CFunctor::CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x58);
  ExceptionList = local_c;
  return this;
}



/* ---- ~CF5ChannelLobbyWnd @ 60a07370 size=307 ---- */

/* public: virtual __thiscall CF5ChannelLobbyWnd::~CF5ChannelLobbyWnd(void) */

void __thiscall CF5ChannelLobbyWnd::~CF5ChannelLobbyWnd(CF5ChannelLobbyWnd *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x7370  37  ??1CF5ChannelLobbyWnd@@UAE@XZ */
  puStack_8 = &LAB_60a12e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0x15;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x58);
  local_4._0_1_ = 0x14;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x54);
  local_4._0_1_ = 0x13;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x50);
  local_4._0_1_ = 0x12;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x4c);
  local_4._0_1_ = 0x11;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x48);
  local_4._0_1_ = 0x10;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x44);
  local_4._0_1_ = 0xf;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x40);
  local_4._0_1_ = 0xe;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x3c);
  local_4._0_1_ = 0xd;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x38);
  local_4._0_1_ = 0xc;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x34);
  local_4._0_1_ = 0xb;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x30);
  local_4._0_1_ = 10;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x2c);
  local_4._0_1_ = 9;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x28);
  local_4._0_1_ = 8;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x24);
  local_4._0_1_ = 7;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x20);
  local_4._0_1_ = 6;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x1c);
  local_4._0_1_ = 5;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x18);
  local_4._0_1_ = 4;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x14);
  local_4._0_1_ = 3;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x10);
  local_4._0_1_ = 2;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0xc);
  local_4._0_1_ = 1;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x8);
  local_4 = (uint)local_4._1_3_ << 8;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5ChannelLobbyWnd_data).offset_0x4);
  local_4 = 0xffffffff;
  CFunctor::~CFunctor((CFunctor *)&this->CF5ChannelLobbyWnd_data);
  ExceptionList = local_c;
  return;
}



/* ---- CF5ChannelLobbyWnd::OnLobbyStateChanged @ 60a074b0 size=3 ---- */

/* public: virtual void __thiscall CF5ChannelLobbyWnd::OnLobbyStateChanged(char const *,char const
   *) */

void __thiscall
CF5ChannelLobbyWnd::CF5ChannelLobbyWnd__OnLobbyStateChanged
          (CF5ChannelLobbyWnd *this,char *param_1,char *param_2)

{
                    /* 0x74b0  336  ?OnLobbyStateChanged@CF5ChannelLobbyWnd@@UAEXPBD0@Z */
  return;
}



/* ---- CF5ChatView::OnDetached @ 60a074c0 size=18 ---- */

/* public: virtual bool __thiscall CF5ChatView::OnDetached(void) */

bool __thiscall CF5ChatView::CF5ChatView__OnDetached(CF5ChatView *this)

{
                    /* 0x74c0  324  ?OnDetached@CF5ChatView@@UAE_NXZ */
  if ((this->CF5ChatView_data).offset_0xc != 0) {
    (*this->vftablePtr->deleting_destructor)(this,1);
  }
  return true;
}



/* ---- ~CF5ChatView @ 60a074e0 size=22 ---- */

/* public: virtual __thiscall CF5ChatView::~CF5ChatView(void) */

void __thiscall CF5ChatView::~CF5ChatView(CF5ChatView *this)

{
  undefined4 *puVar1;
  
                    /* 0x74e0  38  ??1CF5ChatView@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  puVar1 = (this->CF5ChatView_data).offset_0x4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}



/* ---- CF5ChatView::Msg_GetWindow @ 60a07500 size=28 ---- */

/* public: virtual int __thiscall CF5ChatView::Msg_GetWindow(struct IParam &) */

int __thiscall CF5ChatView::CF5ChatView__Msg_GetWindow(CF5ChatView *this,IParam *param_1)

{
                    /* 0x7500  235  ?Msg_GetWindow@CF5ChatView@@UAEHAAUIParam@@@Z */
  AddMetpWnd(param_1,"p043",(CWnd *)(this->CF5ChatView_data).offset_0x4);
  return 0;
}



/* ---- CF5ChatView::Msg_CreateWindow @ 60a07520 size=20 ---- */

/* public: virtual int __thiscall CF5ChatView::Msg_CreateWindow(struct IParam &) */

int __thiscall CF5ChatView::CF5ChatView__Msg_CreateWindow(CF5ChatView *this,IParam *param_1)

{
                    /* 0x7520  228  ?Msg_CreateWindow@CF5ChatView@@UAEHAAUIParam@@@Z */
  (**(code **)(*(this->CF5ChatView_data).offset_0x4 + 4))(param_1);
  return 0;
}



/* ---- CF5ChatView::Msg_DestroyWindow @ 60a07540 size=20 ---- */

/* public: virtual int __thiscall CF5ChatView::Msg_DestroyWindow(struct IParam &) */

int __thiscall CF5ChatView::CF5ChatView__Msg_DestroyWindow(CF5ChatView *this,IParam *param_1)

{
                    /* 0x7540  231  ?Msg_DestroyWindow@CF5ChatView@@UAEHAAUIParam@@@Z */
  (**(code **)(*(this->CF5ChatView_data).offset_0x4 + 8))(param_1);
  return 0;
}



/* ---- CF5ChatView::Evt_HanChat_OnUpdateHanChat @ 60a07560 size=530 ---- */

/* public: virtual int __thiscall CF5ChatView::Evt_HanChat_OnUpdateHanChat(struct IParam &) */

int __thiscall
CF5ChatView::CF5ChatView__Evt_HanChat_OnUpdateHanChat(CF5ChatView *this,IParam *param_1)

{
  CMemberData CVar1;
  char cVar2;
  SGlobalInfo *this_00;
  CMemberData *pCVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 auStack_132 [2];
  CMemberData *pCVar7;
  undefined4 uStack_128;
  char *pcStack_124;
  char *pcStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  CF5ChatView *local_110;
  char cStack_10c;
  undefined1 auStack_10b [259];
  uint uStack_8;
  uint local_4;
  
                    /* 0x7560  147  ?Evt_HanChat_OnUpdateHanChat@CF5ChatView@@UAEHAAUIParam@@@Z */
  local_4 = DAT_60a24730 ^ (uint)&uStack_128;
  local_110 = this;
  if ((this->CF5ChatView_data).offset_0x8 == 1) {
    cVar2 = (**(code **)(*(int *)param_1 + 0x18))();
    if (cVar2 == '\0') goto LAB_60a07757;
    pCVar7 = (CMemberData *)0x0;
    (**(code **)(*(int *)param_1 + 0x44))();
    this_00 = GInfo();
    pCVar3 = SGlobalInfo::MyData(this_00);
    pCVar3 = pCVar3 + 0x33c;
    do {
      CVar1 = *pCVar7;
      bVar6 = (byte)CVar1 < (byte)*pCVar3;
      if (CVar1 != *pCVar3) {
LAB_60a075f0:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_60a075f5;
      }
      if (CVar1 == (CMemberData)0x0) break;
      CVar1 = pCVar7[1];
      bVar6 = (byte)CVar1 < (byte)pCVar3[1];
      if (CVar1 != pCVar3[1]) goto LAB_60a075f0;
      pCVar7 = pCVar7 + 2;
      pCVar3 = pCVar3 + 2;
    } while (CVar1 != (CMemberData)0x0);
    iVar4 = 0;
LAB_60a075f5:
    if (iVar4 != 0) goto LAB_60a07757;
  }
  else {
    cVar2 = (**(code **)(*(int *)param_1 + 0x18))();
    if (cVar2 != '\0') goto LAB_60a07757;
  }
  uStack_11c = 0;
  uStack_128 = 0;
  uStack_118 = 0;
  local_110 = (CF5ChatView *)0x0;
  pcStack_124 = (char *)0x0;
  pcStack_120 = (char *)0x0;
  cStack_10c = '\0';
  memset(auStack_10b,0,0x103);
  iVar4 = (**(code **)(*(int *)param_1 + 0x10))();
  if (0 < iVar4) {
    (**(code **)(*(int *)param_1 + 0x58))();
    (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a16840);
    (**(code **)(*(int *)param_1 + 0x58))(&DAT_60a16838,auStack_132 + -6);
    (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a16830,auStack_132 + -10);
    (**(code **)(*(int *)param_1 + 0x58))(&DAT_60a16584,auStack_132 + -6);
    (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a16314,auStack_132 + -0x16);
    iVar4 = uStack_128;
    if (pcStack_124 != (char *)0x0) {
      pcVar5 = pcStack_124;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (pcVar5 != pcStack_124 + 1) {
        strcat_s(&cStack_10c,0x104,pcStack_124);
      }
    }
    strcat_s(&cStack_10c,0x104," : ");
    if (pcStack_120 != (char *)0x0) {
      pcVar5 = pcStack_120;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (pcVar5 != pcStack_120 + 1) {
        strcat_s(&cStack_10c,0x104,pcStack_120);
      }
    }
    if ((*(int *)(iStack_114 + 8) != 0) && (iVar4 != 0)) {
      (**(code **)(**(int **)(iStack_114 + 8) + 0xc))(param_1,&cStack_10c);
    }
  }
LAB_60a07757:
  iVar4 = __security_check_cookie(uStack_8 ^ (uint)(auStack_132 + 6));
  return iVar4;
}



/* ---- CF5ChatView::HanChatEditComboBox_OnGetChatString @ 60a07780 size=96 ---- */

/* public: virtual int __thiscall CF5ChatView::HanChatEditComboBox_OnGetChatString(struct IParam &)
    */

int __thiscall
CF5ChatView::CF5ChatView__HanChatEditComboBox_OnGetChatString(CF5ChatView *this,IParam *param_1)

{
  bool bVar1;
  SGlobalInfo *this_00;
  CMemberData *this_01;
  IGod *pIVar2;
  
                    /* 0x7780  206
                       ?HanChatEditComboBox_OnGetChatString@CF5ChatView@@UAEHAAUIParam@@@Z */
  if ((this->CF5ChatView_data).offset_0x8 == 1) {
    this_00 = GInfo();
    this_01 = SGlobalInfo::MyData(this_00);
    bVar1 = CMemberData::IsValidGuildId((CMemberData *)this_01);
    if (!bVar1) {
      return 0;
    }
    (**(code **)(*(int *)param_1 + 0x20))("k201e",this_01 + 0x33c);
  }
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x20))("hanChatView","onSendHanChatStr",param_1,0);
  return 0;
}



/* ---- CF5ChatView::Evt_HanChat_OnUpdateHanChatSetting @ 60a077e0 size=76 ---- */

/* public: virtual int __thiscall CF5ChatView::Evt_HanChat_OnUpdateHanChatSetting(struct IParam &)
    */

int __thiscall
CF5ChatView::CF5ChatView__Evt_HanChat_OnUpdateHanChatSetting(CF5ChatView *this,IParam *param_1)

{
  int unaff_EDI;
  undefined4 local_4;
  
                    /* 0x77e0  148
                       ?Evt_HanChat_OnUpdateHanChatSetting@CF5ChatView@@UAEHAAUIParam@@@Z */
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x58))(&DAT_60a1686c,&local_4);
  (**(code **)(*(this->CF5ChatView_data).offset_0x4 + 0x10))(*(undefined4 *)(unaff_EDI + 4));
  (**(code **)(*(this->CF5ChatView_data).offset_0x4 + 0x14))(*(undefined4 *)(unaff_EDI + 0x20));
  return 0;
}



/* ---- CF5ChatView::Evt_HanChat_OnClearHanChatBuffer @ 60a07830 size=15 ---- */

/* public: virtual int __thiscall CF5ChatView::Evt_HanChat_OnClearHanChatBuffer(struct IParam &) */

int __thiscall
CF5ChatView::CF5ChatView__Evt_HanChat_OnClearHanChatBuffer(CF5ChatView *this,IParam *param_1)

{
                    /* 0x7830  146  ?Evt_HanChat_OnClearHanChatBuffer@CF5ChatView@@UAEHAAUIParam@@@Z
                        */
  (**(code **)(*(this->CF5ChatView_data).offset_0x4 + 0x18))();
  return 0;
}



/* ---- CF5ChatView::Evt_HanChat_OnChatNoticeMessage @ 60a07840 size=142 ---- */

/* public: virtual int __thiscall CF5ChatView::Evt_HanChat_OnChatNoticeMessage(struct IParam &) */

int __thiscall
CF5ChatView::CF5ChatView__Evt_HanChat_OnChatNoticeMessage(CF5ChatView *this,IParam *param_1)

{
  char cVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x7840  145  ?Evt_HanChat_OnChatNoticeMessage@CF5ChatView@@UAEHAAUIParam@@@Z
                        */
  if ((this->CF5ChatView_data).offset_0x4 != (undefined4 *)0x0) {
    local_4 = 0;
    local_8 = 0;
    cVar1 = (**(code **)(*(int *)param_1 + 0x18))(&DAT_60a16314);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a16314,&local_8);
    }
    cVar1 = (**(code **)(*(int *)param_1 + 0x18))(&DAT_60a16584);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)param_1 + 0x60))(&DAT_60a16584,(int)register0x00000010 + -0x10);
    }
    (**(code **)(*(this->CF5ChatView_data).offset_0x4 + 0xc))(param_1,unaff_EDI,unaff_ESI,0,0);
  }
  return 0;
}



/* ---- CF5ChatView::SimpleColorPicker_OnColorChange @ 60a078d0 size=35 ---- */

/* public: virtual int __thiscall CF5ChatView::SimpleColorPicker_OnColorChange(struct IParam &) */

int __thiscall
CF5ChatView::CF5ChatView__SimpleColorPicker_OnColorChange(CF5ChatView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0x78d0  391  ?SimpleColorPicker_OnColorChange@CF5ChatView@@UAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("hanChatView","onChatTextColorChange",param_1,0);
  return iVar2;
}



/* ---- CF5ChatView @ 60a07900 size=16 ---- */

/* public: __thiscall CF5ChatView::CF5ChatView(void) */

void __thiscall CF5ChatView::CF5ChatView(CF5ChatView *this)

{
                    /* 0x7900  11  ??0CF5ChatView@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  (this->CF5ChatView_data).offset_0x4 = (undefined4 *)0x0;
  return;
}



/* ---- vfunction1 @ 60a07910 size=10 ---- */

void __thiscall CMFunctor<CF5ChannelLobbyView>::vfunction1(CMFunctor<CF5ChannelLobbyView> *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a07918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this[2].vftablePtr)();
  return;
}



/* ---- vfunction3 @ 60a07920 size=18 ---- */

void __thiscall
CMFunctor<CF5ChannelLobbyView>::vfunction3(CMFunctor<CF5ChannelLobbyView> *this,undefined4 *param_1)

{
  CMFunctor<CF5ChannelLobbyView>_vftable *pCVar1;
  
  pCVar1 = this[1].vftablePtr;
  param_1[1] = this[2].vftablePtr;
  *param_1 = pCVar1;
  return;
}



/* ---- scalar_deleting_destructor @ 60a07940 size=18 ---- */

void __thiscall CMFunctor<CF5ChatView>::scalar_deleting_destructor(CMFunctor<CF5ChatView> *this)

{
  if (this != (CMFunctor<CF5ChatView> *)0x0) {
                    /* inlined destructor: CMFunctor<CF5ChatView>::~CMFunctor<CF5ChatView> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CF5ChatView::OnAttached @ 60a07960 size=443 ---- */

/* public: virtual bool __thiscall CF5ChatView::OnAttached(void) */

bool __thiscall CF5ChatView::CF5ChatView__OnAttached(CF5ChatView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
                    /* 0x7960  270  ?OnAttached@CF5ChatView@@UAE_NXZ */
  pcVar3 = "hanChatView";
  if ((this->CF5ChatView_data).offset_0x8 != 0) {
    pcVar3 = "guildHanChatView";
  }
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5ChatView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0c020;
  }
  (**(code **)(*(int *)pIVar1 + 8))(pcVar3,"getWindow",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5ChatView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08670;
  }
  (**(code **)(*(int *)pIVar1 + 8))(pcVar3,"createWindow",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5ChatView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08680;
  }
  (**(code **)(*(int *)pIVar1 + 8))(pcVar3,"destroy",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5ChatView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f3a0;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("hanChat","onUpdateHanChat",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5ChatView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10160;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("hanChat","onUpdateHanChatSetting",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5ChatView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0c000;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("hanChat","onClearHanChatBuffer",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5ChatView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10100;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("hanChat","onChatNoticeMessage",puVar2,1);
  return true;
}



/* ---- CMFunctor<CF5ChatView> @ 60a07b20 size=145 ---- */

/* public: __thiscall CF5ChatView::CF5ChatView(class CF5ChatWnd *,enum CF5ChatView::ViewType,int) */

CMFunctor<CF5ChatView> * __thiscall
CMFunctor<CF5ChatView>::CMFunctor<CF5ChatView>
          (CMFunctor<CF5ChatView> *this,CF5ChatWnd *param_1,ViewType param_2,int param_3)

{
  char *pcVar1;
  IFunctor *pIVar2;
  
                    /* 0x7b20  10  ??0CF5ChatView@@QAE@PAVCF5ChatWnd@@W4ViewType@0@H@Z */
                    /* inlined constructor: CF5ChatView::CF5ChatView */
  this->vftablePtr = (CMFunctor<CF5ChatView>_vftable *)&CF5ChatView::_vftable_;
  this[4].vftablePtr = (CMFunctor<CF5ChatView>_vftable *)0x1;
  this[3].vftablePtr = (CMFunctor<CF5ChatView>_vftable *)param_2;
  this[1].vftablePtr = (CMFunctor<CF5ChatView>_vftable *)param_3;
  this[2].vftablePtr = (CMFunctor<CF5ChatView>_vftable *)param_1;
  pcVar1 = "CH_HanChat";
  if (param_2 != 0) {
    pcVar1 = "CH_GuildHanChat";
  }
  if (param_1 != (CF5ChatWnd *)0x0) {
    CF5ChatWnd::SetControlNamePrefix((CF5ChatWnd *)param_1,pcVar1);
    *(ViewType *)(param_1 + 0xd4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    pIVar2 = operator_new(0xc);
    if (pIVar2 != (IFunctor *)0x0) {
      *(CMFunctor<CF5ChatView>_vftable **)pIVar2 = &vftable;
      *(CMFunctor<CF5ChatView> **)(pIVar2 + 4) = this;
      *(undefined1 **)(pIVar2 + 8) = &LAB_60a10140;
      CFunctor::operator=((CFunctor *)(param_1 + 4),pIVar2);
      return this;
    }
    CFunctor::operator=((CFunctor *)(param_1 + 4),(IFunctor *)0x0);
  }
  return this;
}



/* ---- CF5ChatWnd @ 60a07bc0 size=33 ---- */

/* public: __thiscall CF5ChatWnd::CF5ChatWnd(void) */

CF5ChatWnd * __thiscall CF5ChatWnd::CF5ChatWnd(CF5ChatWnd *this)

{
                    /* 0x7bc0  13  ??0CF5ChatWnd@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  CFunctor::CFunctor((CFunctor *)&this->CF5ChatWnd_data);
  (this->CF5ChatWnd_data).offset_0x4 = 0;
  (this->CF5ChatWnd_data).offset_0xd0 = 0;
  return this;
}



/* ---- ~CF5ChatWnd @ 60a07bf0 size=15 ---- */

/* public: virtual __thiscall CF5ChatWnd::~CF5ChatWnd(void) */

void __thiscall CF5ChatWnd::~CF5ChatWnd(CF5ChatWnd *this)

{
                    /* 0x7bf0  39  ??1CF5ChatWnd@@UAE@XZ */
  this->vftablePtr = &_vftable_;
                    /* WARNING: Could not recover jumptable at 0x60a07bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)&this->CF5ChatWnd_data);
  return;
}



/* ---- SetControlNamePrefix @ 60a07c00 size=25 ---- */

/* public: void __thiscall CF5ChatWnd::SetControlNamePrefix(char const *) */

void __thiscall CF5ChatWnd::SetControlNamePrefix(CF5ChatWnd *this,char *param_1)

{
                    /* 0x7c00  380  ?SetControlNamePrefix@CF5ChatWnd@@QAEXPBD@Z */
  strcpy_s((char *)&(this->CF5ChatWnd_data).offset_0x8,200,param_1);
  return;
}



/* ---- CF5ChatWnd::OnAppendText @ 60a07c20 size=3 ---- */

/* public: virtual void __thiscall CF5ChatWnd::OnAppendText(struct IParam &,char const *,unsigned
   long,int,int) */

void __thiscall
CF5ChatWnd::CF5ChatWnd__OnAppendText
          (CF5ChatWnd *this,IParam *param_1,char *param_2,ulong param_3,int param_4,int param_5)

{
                    /* 0x7c20  268  ?OnAppendText@CF5ChatWnd@@UAEXAAUIParam@@PBDKHH@Z */
  return;
}



/* ---- CF5ConfigLoader @ 60a07c30 size=22 ---- */

/* public: __thiscall CF5ConfigLoader::CF5ConfigLoader(void) */

CF5ConfigLoader * __thiscall CF5ConfigLoader::CF5ConfigLoader(CF5ConfigLoader *this)

{
                    /* 0x7c30  15  ??0CF5ConfigLoader@@QAE@XZ */
  CConfigLoader::CConfigLoader(&this->CConfigLoader);
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- ~CF5ConfigLoader @ 60a07c50 size=15 ---- */

/* public: virtual __thiscall CF5ConfigLoader::~CF5ConfigLoader(void) */

void __thiscall CF5ConfigLoader::~CF5ConfigLoader(CF5ConfigLoader *this)

{
                    /* 0x7c50  40  ??1CF5ConfigLoader@@UAE@XZ */
  this->vftablePtr = &_vftable_;
                    /* WARNING: Could not recover jumptable at 0x60a07c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CConfigLoader::~CConfigLoader(&this->CConfigLoader);
  return;
}



/* ---- FUN_60a07c60 @ 60a07c60 size=104 ---- */

void __fastcall
FUN_60a07c60(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_60a12e55;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  CParam::~CParam((CParam *)(param_1 + 0x38));
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x1c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60a07cd0 @ 60a07cd0 size=125 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
FUN_60a07cd0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12e85;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(this,param_1);
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             param_1 + 0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  CParam::CParam((CParam *)((int)this + 0x38),(CParam *)(param_1 + 0x38));
  *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
   ((int)this + 0xbc) = param_1[0xbc];
  ExceptionList = local_c;
  return this;
}



/* ---- FUN_60a07d50 @ 60a07d50 size=83 ---- */

void __cdecl
FUN_60a07d50(void *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60a12eb1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    FUN_60a07cd0(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60a07db0 @ 60a07db0 size=138 ---- */

void __thiscall FUN_60a07db0(void *this,uint param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  logic_error local_34 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12ed9;
  local_c = ExceptionList;
  if (0x1555555U - *(int *)((int)this + 0x18) < param_1) {
    ExceptionList = &local_c;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"list<T> too long");
    local_4 = 0;
                    /* inlined constructor: std::length_error::length_error */
    std::logic_error::logic_error
              (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_50);
    local_34[0].vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_60a18dc0);
  }
  *(uint *)((int)this + 0x18) = *(int *)((int)this + 0x18) + param_1;
  return;
}



/* ---- FUN_60a07e40 @ 60a07e40 size=127 ---- */

undefined4 *
FUN_60a07e40(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60a12f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(200);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
  }
  FUN_60a07d50(puVar1 + 2,param_3);
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@60a07ebf @ 60a07ebf size=21 ---- */

void Catch_All_60a07ebf(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- Load @ 60a07ee0 size=1224 ---- */

/* public: void __thiscall CF5ConfigLoader::Load(char const *) */

void __thiscall CF5ConfigLoader::Load(CF5ConfigLoader *this,char *param_1)

{
  CF5ConfigLoader_vftable *pCVar1;
  deleting_destructor *pdVar2;
  CConfigLoader *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_6a0 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_684 [28];
  CParam local_668 [132];
  undefined1 local_5e4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5e0 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5c4 [28];
  CParam local_5a8 [132];
  undefined1 local_524;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_520 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_504 [28];
  CParam local_4e8 [132];
  undefined1 local_464;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_460 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_444 [28];
  CParam local_428 [132];
  undefined1 local_3a4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_3a0 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_384 [28];
  CParam local_368 [132];
  undefined1 local_2e4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2e0 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c4 [28];
  CParam local_2a8 [132];
  undefined1 local_224;
  CParam local_220 [132];
  CParam local_19c [132];
  CParam local_118 [132];
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x7ee0  216  ?Load@CF5ConfigLoader@@QAEXPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13022;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_6a0;
  ExceptionList = &local_c;
  CParam::CParam(local_19c,false);
  local_4 = 0;
  CParam::CParam(local_220,false);
  local_4._0_1_ = 1;
  CParam::CParam(local_118,false);
  local_4._0_1_ = 2;
  CParam::AddValue(local_19c,"k8e","channel");
  CParam::AddValue(local_220,"k8e","Switch2");
  CParam::AddValue(local_118,"k8e","game");
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_520,"lobbyState");
  local_4._0_1_ = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_504,"addState");
  local_4._0_1_ = 4;
  CParam::CParam(local_4e8,local_19c);
  local_464 = 1;
  local_4._0_1_ = 5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_5e0,"lobbyState");
  local_4._0_1_ = 6;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_5c4,"addState");
  local_4._0_1_ = 7;
  CParam::CParam(local_5a8,local_220);
  local_524 = 1;
  local_4._0_1_ = 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_6a0,"lobbyState");
  local_4._0_1_ = 9;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_684,"addState");
  local_4._0_1_ = 10;
  CParam::CParam(local_668,local_118);
  local_5e4 = 1;
  local_4._0_1_ = 0xb;
  pCVar1 = this[3].vftablePtr;
  this_00 = &this->CConfigLoader;
  pdVar2 = (deleting_destructor *)
           FUN_60a07e40(pCVar1,pCVar1[1].deleting_destructor,
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_520);
  FUN_60a07db0(this_00,1);
  pCVar1[1].deleting_destructor = pdVar2;
  **(undefined4 **)(pdVar2 + 4) = pdVar2;
  pCVar1 = this[3].vftablePtr;
  pdVar2 = (deleting_destructor *)
           FUN_60a07e40(pCVar1,pCVar1[1].deleting_destructor,
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_5e0);
  FUN_60a07db0(this_00,1);
  pCVar1[1].deleting_destructor = pdVar2;
  **(undefined4 **)(pdVar2 + 4) = pdVar2;
  pCVar1 = this[3].vftablePtr;
  pdVar2 = (deleting_destructor *)
           FUN_60a07e40(pCVar1,pCVar1[1].deleting_destructor,
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_6a0);
  FUN_60a07db0(this_00,1);
  pCVar1[1].deleting_destructor = pdVar2;
  **(undefined4 **)(pdVar2 + 4) = pdVar2;
  local_4._0_1_ = 8;
  FUN_60a07c60(local_6a0);
  local_4._0_1_ = 5;
  FUN_60a07c60(local_5e0);
  local_4._0_1_ = 2;
  FUN_60a07c60(local_520);
  local_4._0_1_ = 1;
  CParam::~CParam(local_118);
  local_4 = (uint)local_4._1_3_ << 8;
  CParam::~CParam(local_220);
  local_4 = 0xffffffff;
  CParam::~CParam(local_19c);
  CParam::CParam(local_94,false);
  local_4 = 0xc;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_3a0,"lobbyState");
  local_4._0_1_ = 0xd;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_384,"moveNext");
  local_4._0_1_ = 0xe;
  CParam::CParam(local_368,local_94);
  local_2e4 = 1;
  pCVar1 = this[3].vftablePtr;
  local_4._0_1_ = 0xf;
  pdVar2 = (deleting_destructor *)
           FUN_60a07e40(pCVar1,pCVar1[1].deleting_destructor,
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_3a0);
  FUN_60a07db0(this_00,1);
  pCVar1[1].deleting_destructor = pdVar2;
  **(undefined4 **)(pdVar2 + 4) = pdVar2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2e0,"channelList");
  local_4._0_1_ = 0x10;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c4,"loadHsp");
  local_4._0_1_ = 0x11;
  CParam::CParam(local_2a8,(CParam *)Void_exref);
  local_224 = 1;
  pCVar1 = this[3].vftablePtr;
  local_4._0_1_ = 0x12;
  pdVar2 = (deleting_destructor *)
           FUN_60a07e40(pCVar1,pCVar1[1].deleting_destructor,
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_2e0);
  FUN_60a07db0(this_00,1);
  pCVar1[1].deleting_destructor = pdVar2;
  **(undefined4 **)(pdVar2 + 4) = pdVar2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_460,"channelList");
  local_4._0_1_ = 0x13;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_444,"connectChannelListServer");
  local_4._0_1_ = 0x14;
  CParam::CParam(local_428,(CParam *)Void_exref);
  local_3a4 = 1;
  pCVar1 = this[3].vftablePtr;
  local_4._0_1_ = 0x15;
  pdVar2 = (deleting_destructor *)
           FUN_60a07e40(pCVar1,pCVar1[1].deleting_destructor,
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_460);
  FUN_60a07db0(this_00,1);
  pCVar1[1].deleting_destructor = pdVar2;
  **(undefined4 **)(pdVar2 + 4) = pdVar2;
  local_4._0_1_ = 0x12;
  FUN_60a07c60(local_460);
  local_4._0_1_ = 0xf;
  FUN_60a07c60(local_2e0);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_60a07c60(local_3a0);
  local_4 = 0xffffffff;
  CParam::~CParam(local_94);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_6a0);
  return;
}



/* ---- On @ 60a083b0 size=136 ---- */

/* void __cdecl F5Firewall::On(void) */

void __cdecl F5Firewall::On(void)

{
  DWORD DVar1;
  char *pcVar2;
  CHAR local_10c;
  char local_10b [263];
  uint local_4;
  
                    /* 0x83b0  266  ?On@F5Firewall@@YAXXZ */
  local_4 = DAT_60a24730 ^ (uint)&local_10c;
  local_10c = '\0';
  memset(local_10b,0,0x104);
  pcVar2 = &local_10c;
  DVar1 = GetModuleFileNameA((HMODULE)0x0,&local_10c,0x104);
  if (DVar1 != 0) {
    if (local_10c != '\0') {
      do {
        if (*pcVar2 == '\\') {
          *pcVar2 = '_';
        }
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
    }
    DAT_60a2478c = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,&local_10c);
  }
  __security_check_cookie(local_4 ^ (uint)&local_10c);
  return;
}



/* ---- Off @ 60a08440 size=27 ---- */

/* void __cdecl F5Firewall::Off(void) */

void __cdecl F5Firewall::Off(void)

{
                    /* 0x8440  265  ?Off@F5Firewall@@YAXXZ */
  if (DAT_60a2478c != (HANDLE)0x0) {
    CloseHandle(DAT_60a2478c);
    DAT_60a2478c = (HANDLE)0x0;
  }
  return;
}



/* ---- ~CF5GameView @ 60a08460 size=22 ---- */

/* public: virtual __thiscall CF5GameView::~CF5GameView(void) */

void __thiscall CF5GameView::~CF5GameView(CF5GameView *this)

{
  undefined4 *puVar1;
  
                    /* 0x8460  43  ??1CF5GameView@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  puVar1 = (this->CF5GameView_data).offset_0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}



/* ---- CF5GameView::OnDetached @ 60a08480 size=18 ---- */

/* public: virtual bool __thiscall CF5GameView::OnDetached(void) */

bool __thiscall CF5GameView::CF5GameView__OnDetached(CF5GameView *this)

{
                    /* 0x8480  326  ?OnDetached@CF5GameView@@UAE_NXZ */
  if ((this->CF5GameView_data).offset_0x4 != 0) {
    (*this->vftablePtr->deleting_destructor)(this,1);
  }
  return true;
}



/* ---- CF5GameView::Evt_GameView_OnAvatarChange @ 60a084a0 size=83 ---- */

/* public: virtual int __thiscall CF5GameView::Evt_GameView_OnAvatarChange(struct IParam &) */

int __thiscall
CF5GameView::CF5GameView__Evt_GameView_OnAvatarChange(CF5GameView *this,IParam *param_1)

{
  int iVar1;
  SGlobalInfo *this_00;
  CMemberDataList *this_01;
  CMemberData *pCVar2;
  char *unaff_EDI;
  undefined4 local_4;
  
                    /* 0x84a0  141  ?Evt_GameView_OnAvatarChange@CF5GameView@@UAEHAAUIParam@@@Z */
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a160b8,&local_4);
  iVar1 = *(this->CF5GameView_data).offset_0x0;
  this_00 = GInfo();
  this_01 = SGlobalInfo::MemberDataList(this_00);
  pCVar2 = CMemberDataList::FindMemberData(this_01,unaff_EDI);
  (**(code **)(iVar1 + 0x40))(pCVar2);
  return 0;
}



/* ---- CF5GameView::Evt_GameView_OnActivateOn @ 60a08500 size=55 ---- */

/* public: virtual int __thiscall CF5GameView::Evt_GameView_OnActivateOn(struct IParam &) */

int __thiscall
CF5GameView::CF5GameView__Evt_GameView_OnActivateOn(CF5GameView *this,IParam *param_1)

{
  char cVar1;
  undefined1 auStack_2 [2];
  
                    /* 0x8500  139  ?Evt_GameView_OnActivateOn@CF5GameView@@UAEHAAUIParam@@@Z */
  cVar1 = (**(code **)(*(int *)param_1 + 0x18))(&DAT_60a16614);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a16614,auStack_2 + -3);
  }
  return 0;
}



/* ---- CF5GameView::OnClickExitGameBtn @ 60a08540 size=39 ---- */

/* public: virtual int __thiscall CF5GameView::OnClickExitGameBtn(struct IParam &) */

int __thiscall CF5GameView::CF5GameView__OnClickExitGameBtn(CF5GameView *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x8540  289  ?OnClickExitGameBtn@CF5GameView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("gameView","onClickExitGameBtn",Void_exref,0);
  return 0;
}



/* ---- CF5GameView::Evt_GameView_OnActivateOnGameWnd @ 60a08570 size=18 ---- */

/* public: virtual int __thiscall CF5GameView::Evt_GameView_OnActivateOnGameWnd(struct IParam &) */

int __thiscall
CF5GameView::CF5GameView__Evt_GameView_OnActivateOnGameWnd(CF5GameView *this,IParam *param_1)

{
                    /* 0x8570  140  ?Evt_GameView_OnActivateOnGameWnd@CF5GameView@@UAEHAAUIParam@@@Z
                        */
  CF5GameWnd::ActivateOn((CF5GameWnd *)(this->CF5GameView_data).offset_0x0,param_1);
  return 0;
}



/* ---- CF5GameView::Evt_GameView_OnActivateOffGameWnd @ 60a08590 size=18 ---- */

/* public: virtual int __thiscall CF5GameView::Evt_GameView_OnActivateOffGameWnd(struct IParam &) */

int __thiscall
CF5GameView::CF5GameView__Evt_GameView_OnActivateOffGameWnd(CF5GameView *this,IParam *param_1)

{
                    /* 0x8590  138
                       ?Evt_GameView_OnActivateOffGameWnd@CF5GameView@@UAEHAAUIParam@@@Z */
  CF5GameWnd::ActivateOff((CF5GameWnd *)(this->CF5GameView_data).offset_0x0,param_1);
  return 0;
}



/* ---- CF5GameView::Evt_GameView_OnForceExitRoom @ 60a085b0 size=17 ---- */

/* public: virtual int __thiscall CF5GameView::Evt_GameView_OnForceExitRoom(struct IParam &) */

int __thiscall
CF5GameView::CF5GameView__Evt_GameView_OnForceExitRoom(CF5GameView *this,IParam *param_1)

{
                    /* 0x85b0  143  ?Evt_GameView_OnForceExitRoom@CF5GameView@@UAEHAAUIParam@@@Z */
  (**(code **)(*(this->CF5GameView_data).offset_0x0 + 0x14))(0);
  return 0;
}



/* ---- CF5GameView::Evt_GameView_OnRecvProvokeItem @ 60a085d0 size=20 ---- */

/* public: virtual int __thiscall CF5GameView::Evt_GameView_OnRecvProvokeItem(struct IParam &) */

int __thiscall
CF5GameView::CF5GameView__Evt_GameView_OnRecvProvokeItem(CF5GameView *this,IParam *param_1)

{
                    /* 0x85d0  144  ?Evt_GameView_OnRecvProvokeItem@CF5GameView@@UAEHAAUIParam@@@Z
                        */
  (**(code **)(*(this->CF5GameView_data).offset_0x0 + 0x5c))(param_1);
  return 0;
}



/* ---- Evt_RoomGaeaPrizeData @ 60a085f0 size=123 ---- */

/* public: int __thiscall CF5GameView::Evt_RoomGaeaPrizeData(struct IParam &) */

int __thiscall CF5GameView::Evt_RoomGaeaPrizeData(CF5GameView *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CGaeaData *this_00;
  GA_PRZ_Data *pGVar2;
  CAlarmData *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x85f0  178  ?Evt_RoomGaeaPrizeData@CF5GameView@@QAEHAAUIParam@@@Z */
  pSVar1 = GInfo();
  this_00 = SGlobalInfo::GaeaData(pSVar1);
  pGVar2 = CGaeaData::GetPrizeData(this_00);
  if ((*(int *)pGVar2 == 0xdd) && (*(int *)(pGVar2 + 4) == 1)) {
    iVar6 = *(int *)(pGVar2 + 0x18);
    iVar5 = *(int *)(pGVar2 + 0x10);
    iVar4 = *(int *)(pGVar2 + 8);
    pSVar1 = GInfo();
    pCVar3 = SGlobalInfo::AlarmData(pSVar1);
    CAlarmData::UpdatePlayData(pCVar3,iVar4,iVar5,iVar6);
  }
  if ((*(int *)pGVar2 == 0xde) && (*(int *)(pGVar2 + 4) == 1)) {
    iVar6 = *(int *)(pGVar2 + 0x18);
    iVar5 = *(int *)(pGVar2 + 0x10);
    iVar4 = *(int *)(pGVar2 + 8);
    pSVar1 = GInfo();
    pCVar3 = SGlobalInfo::AlarmData(pSVar1);
    CAlarmData::UpdatePlayData(pCVar3,iVar4,iVar5,iVar6);
  }
  return 0;
}



/* ---- CF5GameView @ 60a086a0 size=23 ---- */

/* public: __thiscall CF5GameView::CF5GameView(void) */

void __thiscall CF5GameView::CF5GameView(CF5GameView *this)

{
                    /* 0x86a0  23  ??0CF5GameView@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  (this->CF5GameView_data).offset_0x0 = (undefined4 *)0x0;
  (this->CF5GameView_data).offset_0x4 = 1;
  return;
}



/* ---- scalar_deleting_destructor @ 60a086c0 size=18 ---- */

void __thiscall CMFunctor<CF5GameView>::scalar_deleting_destructor(CMFunctor<CF5GameView> *this)

{
  if (this != (CMFunctor<CF5GameView> *)0x0) {
                    /* inlined destructor: CMFunctor<CF5GameView>::~CMFunctor<CF5GameView> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CF5GameView::OnAttached @ 60a086e0 size=677 ---- */

/* public: virtual bool __thiscall CF5GameView::OnAttached(void) */

bool __thiscall CF5GameView::CF5GameView__OnAttached(CF5GameView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  
                    /* 0x86e0  272  ?OnAttached@CF5GameView@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08670;
  }
  (**(code **)(*(int *)pIVar1 + 8))("gameView","getWindow",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0c020;
  }
  (**(code **)(*(int *)pIVar1 + 8))("gameView","registerGameWnd",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0c000;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_60a15d8c,"onActivateOnGameWnd",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10100;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_60a15d8c,"onActivateOffGameWnd",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10140;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_60a15d8c,"onForceExitRoom",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08690;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_60a15d8c,"onRecvProvokeItem",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08680;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_60a15d8c,"onAvatarChange",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f3a0;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_60a15d8c,"onActivateOn",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10160;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))(&DAT_60a15d8c,"onActivateOff",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelGaeaPromotionData;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_60a15d8c,"onPromotionData",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5GameView>::vftable;
    puVar2[1] = this;
    puVar2[2] = Evt_RoomGaeaPrizeData;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))(&DAT_60a15d8c,"onPrizeData",puVar2,1);
  return true;
}



/* ---- CF5GameView::Msg_RegisterGameWnd @ 60a08990 size=115 ---- */

/* public: virtual int __thiscall CF5GameView::Msg_RegisterGameWnd(struct IParam &) */

int __thiscall CF5GameView::CF5GameView__Msg_RegisterGameWnd(CF5GameView *this,IParam *param_1)

{
  IFunctor *pIVar1;
  undefined4 *unaff_EDI;
  undefined4 local_4;
  
                    /* 0x8990  241  ?Msg_RegisterGameWnd@CF5GameView@@UAEHAAUIParam@@@Z */
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x58))(&DAT_60a169f0,&local_4);
  (this->CF5GameView_data).offset_0x0 = unaff_EDI;
  if (unaff_EDI != (undefined4 *)0x0) {
    pIVar1 = operator_new(0xc);
    if (pIVar1 != (IFunctor *)0x0) {
      *(CMFunctor<CF5GameView>_vftable **)pIVar1 = &CMFunctor<CF5GameView>::vftable;
      *(CF5GameView **)(pIVar1 + 4) = this;
      *(undefined1 **)(pIVar1 + 8) = &LAB_60a0f370;
      CFunctor::operator=((CFunctor *)(unaff_EDI + 1),pIVar1);
      return 0;
    }
    CFunctor::operator=((CFunctor *)(unaff_EDI + 1),(IFunctor *)0x0);
  }
  return 0;
}



/* ---- AfxGetGameWnd @ 60a08a10 size=200 ---- */

/* class CF5GameWnd * __cdecl AfxGetGameWnd(void) */

CF5GameWnd * __cdecl AfxGetGameWnd(void)

{
  IGod *pIVar1;
  CF5GameWnd *pCVar2;
  undefined4 uStack_a8;
  undefined4 local_98;
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8a10  85  ?AfxGetGameWnd@@YAPAVCF5GameWnd@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a1305c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)&local_98;
  ExceptionList = &local_c;
  local_98 = 0;
  uStack_a8 = (CParam *)0x60a08a59;
  CParam::CParam(local_94,false);
  local_4 = 0;
  pIVar1 = God();
  uStack_a8 = local_94;
  (**(code **)(*(int *)pIVar1 + 0x10))("gameView","getWindow");
  GetMetpWnd((IParam *)(local_94 + -0x10),"p043",(CWnd **)&uStack_a8);
  uStack_14 = 0xffffffff;
  CParam::~CParam(local_94 + -0x10);
  ExceptionList = pvStack_1c;
  pCVar2 = (CF5GameWnd *)__security_check_cookie(uStack_20 ^ (uint)&uStack_a8);
  return pCVar2;
}



/* ---- ActivateOff @ 60a08ae0 size=12 ---- */

/* public: int __thiscall CF5GameWnd::ActivateOff(struct IParam &) */

int __thiscall CF5GameWnd::ActivateOff(CF5GameWnd *this,IParam *param_1)

{
                    /* 0x8ae0  81  ?ActivateOff@CF5GameWnd@@QAEHAAUIParam@@@Z */
  (this->CF5GameWnd_data).offset_0x1c = 0;
  return 0;
}



/* ---- CF5GameWnd::DoExActive @ 60a08af0 size=13 ---- */

/* public: virtual void __thiscall CF5GameWnd::DoExActive(int) */

void __thiscall CF5GameWnd::CF5GameWnd__DoExActive(CF5GameWnd *this,int param_1)

{
                    /* 0x8af0  100  ?DoExActive@CF5GameWnd@@UAEXH@Z */
  (this->CF5GameWnd_data).offset_0x150 = param_1;
  return;
}



/* ---- CF5GameWnd::Evt_OnAddRoomMember @ 60a08b00 size=364 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnAddRoomMember(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnAddRoomMember(CF5GameWnd *this,IParam *param_1)

{
  undefined1 *this_00;
  CMemberData CVar1;
  SGlobalInfo *pSVar2;
  CMemberDataList *this_01;
  CMemberData *pCVar3;
  int iVar4;
  CRoomDataList *this_02;
  CRoomData *this_03;
  CMemberData *pCVar5;
  CMemberData *unaff_EBP;
  char *unaff_ESI;
  bool bVar6;
  undefined4 local_8;
  undefined4 uStack_4;
  
                    /* 0x8b00  159  ?Evt_OnAddRoomMember@CF5GameWnd@@MAEHAAUIParam@@@Z */
  local_8 = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a169f8,&local_8);
  this_00 = &(this->CF5GameWnd_data).field_0x138;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this_00,unaff_ESI);
  uStack_4 = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a160b8,&uStack_4);
  pCVar3 = unaff_EBP;
  pSVar2 = GInfo();
  this_01 = SGlobalInfo::MemberDataList(pSVar2);
  pCVar3 = CMemberDataList::FindMemberData(this_01,(char *)pCVar3);
  if (pCVar3 == (CMemberData *)0x0) {
    return -1;
  }
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MyData(pSVar2);
  if (pCVar3 == (CMemberData *)0x0) {
    return -2;
  }
  pCVar3 = pCVar3 + 0x10;
  pCVar5 = unaff_EBP;
  do {
    CVar1 = *pCVar3;
    bVar6 = (byte)CVar1 < (byte)*pCVar5;
    if (CVar1 != *pCVar5) {
LAB_60a08bd0:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_60a08bd5;
    }
    if (CVar1 == (CMemberData)0x0) break;
    CVar1 = pCVar3[1];
    bVar6 = (byte)CVar1 < (byte)pCVar5[1];
    if (CVar1 != pCVar5[1]) goto LAB_60a08bd0;
    pCVar3 = pCVar3 + 2;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CMemberData)0x0);
  iVar4 = 0;
LAB_60a08bd5:
  if (iVar4 == 0) {
    pCVar3 = (CMemberData *)
             ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)this_00);
    do {
      CVar1 = *pCVar3;
      bVar6 = (byte)CVar1 < (byte)*unaff_EBP;
      if (CVar1 != *unaff_EBP) {
LAB_60a08c01:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_60a08c06;
      }
      if (CVar1 == (CMemberData)0x0) break;
      CVar1 = pCVar3[1];
      bVar6 = (byte)CVar1 < (byte)unaff_EBP[1];
      if (CVar1 != unaff_EBP[1]) goto LAB_60a08c01;
      pCVar3 = pCVar3 + 2;
      unaff_EBP = unaff_EBP + 2;
    } while (CVar1 != (CMemberData)0x0);
    iVar4 = 0;
LAB_60a08c06:
    (this->CF5GameWnd_data).offset_0x20 = (uint)(iVar4 == 0);
  }
  iVar4 = (this->CF5GameWnd_data).offset_0x140;
  pSVar2 = GInfo();
  this_02 = SGlobalInfo::RoomDataList(pSVar2);
  this_03 = CRoomDataList::FindRoomData(this_02,iVar4);
  if (this_03 == (CRoomData *)0x0) {
    return -3;
  }
  iVar4 = CRoomData::GetPlayingYN(this_03);
  if (iVar4 != 0) {
    (*this->vftablePtr->CreateCaptionButtons)(this);
  }
  (*this->vftablePtr->vfunction13)((int)register0x00000010 + -0x14);
  return 0;
}



/* ---- CF5GameWnd::Evt_OnRoomMemberList @ 60a08c70 size=181 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnRoomMemberList(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnRoomMemberList(CF5GameWnd *this,IParam *param_1)

{
  SGlobalInfo *this_00;
  CMemberDataList *this_01;
  char *unaff_EDI;
  CMemberData *pCStack_1c;
  char *pcStack_18;
  char local_c [12];
  
                    /* 0x8c70  175  ?Evt_OnRoomMemberList@CF5GameWnd@@MAEHAAUIParam@@@Z */
  pcStack_18 = local_c;
  pCStack_1c = (CMemberData *)&DAT_60a169f8;
  local_c[0] = '\0';
  local_c[1] = '\0';
  local_c[2] = '\0';
  local_c[3] = '\0';
  local_c[4] = '\0';
  local_c[5] = '\0';
  local_c[6] = '\0';
  local_c[7] = '\0';
  (**(code **)(*(int *)param_1 + 0x44))();
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x138,unaff_EDI);
  (**(code **)(*(int *)param_1 + 0x44))("k116e",local_c + -4);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x13c,pcStack_18);
  local_c[0] = '\0';
  local_c[1] = '\0';
  local_c[2] = '\0';
  local_c[3] = '\0';
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a160b8,local_c);
  this_00 = GInfo();
  this_01 = SGlobalInfo::MemberDataList(this_00);
  pCStack_1c = CMemberDataList::FindMemberData(this_01,unaff_EDI);
  (*this->vftablePtr->vfunction15)(&pCStack_1c);
  return 0;
}



/* ---- CF5GameWnd::Evt_OnModifyRoomMemberInfo @ 60a08d30 size=68 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnModifyRoomMemberInfo(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnModifyRoomMemberInfo(CF5GameWnd *this,IParam *param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x8d30  171  ?Evt_OnModifyRoomMemberInfo@CF5GameWnd@@MAEHAAUIParam@@@Z */
  local_8 = 0;
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x58))(&DAT_60a16a08,&local_8);
  (*this->vftablePtr->vfunction16)((int)register0x00000010 + -0xc);
  return 0;
}



/* ---- CF5GameWnd::Evt_OnTimeHostBanish @ 60a08d80 size=198 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnTimeHostBanish(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnTimeHostBanish(CF5GameWnd *this,IParam *param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  SGlobalInfo *pSVar4;
  CGameBanish *pCVar5;
  undefined3 extraout_var;
  IGod *pIVar6;
  int unaff_EDI;
  undefined1 auStack_2 [2];
  
                    /* 0x8d80  177  ?Evt_OnTimeHostBanish@CF5GameWnd@@MAEHAAUIParam@@@Z */
  iVar3 = (*this->vftablePtr->HasRightOfBanish)(this);
  if (iVar3 == 0) {
    (*this->vftablePtr->CreateCaptionButtons)(this);
    pSVar4 = GInfo();
    pCVar5 = SGlobalInfo::GameBanish(pSVar4);
    CGameBanish::EndHostBanishTick(pCVar5);
    return -1;
  }
  cVar1 = (**(code **)(*(int *)param_1 + 0x18))(&DAT_60a16274);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1 + 100))(&DAT_60a16274,auStack_2 + -6);
  }
  if (unaff_EDI != 0) {
    uVar2 = (*this->vftablePtr->vfunction9)();
    if (CONCAT31(extraout_var,uVar2) == 0) {
      pIVar6 = God();
      iVar3 = (**(code **)(*(int *)pIVar6 + 0x10))(&DAT_60a15d8c,"sendTimeBanish",param_1,1);
      return iVar3;
    }
    (*this->vftablePtr->CreateCaptionButtons)(this);
    pSVar4 = GInfo();
    pCVar5 = SGlobalInfo::GameBanish(pSVar4);
    CGameBanish::EndHostBanishTick(pCVar5);
  }
  return -1;
}



/* ---- CF5GameWnd::Evt_OnChatString @ 60a08e50 size=40 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnChatString(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnChatString(CF5GameWnd *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0x8e50  161  ?Evt_OnChatString@CF5GameWnd@@MAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("hanChat","addAccuseMessage",param_1,1);
  return 1;
}



/* ---- CF5GameWnd::Evt_OnReqBanishMember @ 60a08e80 size=347 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnReqBanishMember(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnReqBanishMember(CF5GameWnd *this,IParam *param_1)

{
  CF5GameWnd_vftable *pCVar1;
  undefined uVar2;
  int iVar3;
  undefined3 extraout_var;
  SGlobalInfo *pSVar4;
  CMemberData *pCVar5;
  CExitReason *this_00;
  char *pcVar6;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_01;
  uchar *unaff_ESI;
  undefined1 uStack00000000;
  int iVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x8e80  172  ?Evt_OnReqBanishMember@CF5GameWnd@@MAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a130a2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = (void *)0x0;
  (**(code **)(*(int *)param_1 + 0x44))
            (&DAT_60a160b8,&local_14,DAT_60a24730 ^ (int)register0x00000010 - 0x20U);
  if (unaff_ESI != (uchar *)0x0) {
    iVar3 = AfxIsValidString((char *)unaff_ESI,-1);
    if (iVar3 != 0) {
      uVar2 = (*this->vftablePtr->vfunction9)();
      if (CONCAT31(extraout_var,uVar2) == 0) {
        pSVar4 = GInfo();
        pCVar5 = SGlobalInfo::MyData(pSVar4);
        iVar3 = _mbscmp((uchar *)(pCVar5 + 0x10),unaff_ESI);
        if (iVar3 == 0) {
          uVar8 = 2;
          pSVar4 = GInfo();
          this_00 = SGlobalInfo::ExitReason(pSVar4);
          CExitReason::Set(this_00,uVar8);
          (*this->vftablePtr->ExitGameRoom)(this);
        }
        else {
          LoadStr((int)register0x00000010 + -0x18);
          local_c = (void *)0x0;
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&uStack_4);
          local_c = (void *)CONCAT31(local_c._1_3_,1);
          ATL::CSimpleStringT<char,1>::operator_char_const_
                    ((CSimpleStringT<char,1> *)((int)register0x00000010 + -0x18));
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
                    (this_01,(char *)&uStack_4);
          pCVar1 = this->vftablePtr;
          pcVar10 = (char *)0x0;
          iVar9 = 0;
          iVar7 = 1;
          uVar8 = 0xff;
          iVar3 = 1;
          pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_
                             ((CSimpleStringT<char,1> *)&uStack00000000);
          (*pCVar1->DisplayChatMessage)(this,0,pcVar6,iVar3,uVar8,iVar7,iVar9,pcVar10);
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                     &uStack00000000);
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_14);
        }
        ExceptionList = local_14;
        return 0;
      }
    }
  }
  ExceptionList = local_14;
  return 2;
}



/* ---- CF5ChannelLobbyView::Evt_ChannelGaeaPrizeData @ 60a08fe0 size=5 ---- */

/* protected: virtual int __thiscall CF5ChannelLobbyView::Evt_ChannelGaeaPrizeData(struct IParam &)
    */

int __thiscall
CF5ChannelLobbyView::CF5ChannelLobbyView__Evt_ChannelGaeaPrizeData
          (CF5ChannelLobbyView *this,IParam *param_1)

{
                    /* 0x8fe0  104  ?Evt_ChannelGaeaPrizeData@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                       0x8fe0  116
                       ?Evt_ChannelLobby_OnExitReason_LOWERDIRECTX@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                       0x8fe0  121
                       ?Evt_ChannelLobby_OnExitReason_TOOMANYMONEY@CF5ChannelLobbyView@@MAEHAAUIParam@@@Z
                       0x8fe0  137  ?Evt_GameView_OnActivateOff@CF5GameView@@UAEHAAUIParam@@@Z
                       0x8fe0  150  ?Evt_LobbyState_OnStateChanged@CF5MainFrmView@@UAEHAAUIParam@@@Z
                       0x8fe0  160  ?Evt_OnAltF4KeyDown@CF5GameWnd@@MAEHAAUIParam@@@Z
                       0x8fe0  173  ?Evt_OnReserveBanish@CF5GameWnd@@MAEHAAUIParam@@@Z
                       0x8fe0  174  ?Evt_OnRoomEvent@CF5GameWnd@@MAEHAAUIParam@@@Z
                       0x8fe0  233  ?Msg_DummyHandler@CF5DialogCmp@@MAEHAAUIParam@@@Z
                       0x8fe0  254  ?Msg_ShowMutexErrorDlg@CF5DialogCmp@@MAEHAAUIParam@@@Z
                       0x8fe0  295
                       ?OnClickMemberListTabFilterBtn@CF5ChannelLobbyView@@UAEHAAUIParam@@@Z
                       0x8fe0  343  ?OnToggleScreenButton@CF5MainFrmView@@UAEHAAUIParam@@@Z
                       0x8fe0  388  ?ShowModeless@CF5DialogRoot@@UAEHH@Z */
  return 0;
}



/* ---- CF5GameWnd::ProcessItemProvokeCommand @ 60a08ff0 size=220 ---- */

/* public: virtual void __thiscall CF5GameWnd::ProcessItemProvokeCommand(struct IParam &) */

void __thiscall CF5GameWnd::CF5GameWnd__ProcessItemProvokeCommand(CF5GameWnd *this,IParam *param_1)

{
  char *pcVar1;
  void *unaff_ESI;
  HMODULE hmod;
  DWORD fdwSound;
  undefined1 auStack_12 [2];
  char local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x8ff0  357  ?ProcessItemProvokeCommand@CF5GameWnd@@UAEXAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a130c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = local_10;
  local_10[0] = '\0';
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a16528,pcVar1,DAT_60a24730 ^ (uint)(auStack_12 + -10))
  ;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a16a5c,auStack_12 + -10);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_c);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(int)*pcVar1,
             (char *)&local_c);
  if ((this->CF5GameWnd_data).offset_0x154 != 0) {
    fdwSound = 0x20001;
    hmod = (HMODULE)0x0;
    pcVar1 = ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)&puStack_8)
    ;
    PlaySoundA(pcVar1,hmod,fdwSound);
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&puStack_8);
  ExceptionList = unaff_ESI;
  return;
}



/* ---- CF5GameWnd::Evt_OnStartNewGame @ 60a090d0 size=702 ---- */

/* WARNING: Removing unreachable block (ram,0x60a092af) */
/* protected: virtual int __thiscall CF5GameWnd::Evt_OnStartNewGame(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnStartNewGame(CF5GameWnd *this,IParam *param_1)

{
  CMemberData *pCVar1;
  SGlobalInfo *pSVar2;
  CMemberData *pCVar3;
  CPlayerInfo *pCVar4;
  CMemberData *pCVar5;
  int iVar6;
  int unaff_EBX;
  char *pcVar7;
  int *piStack_88;
  undefined4 uStack_84;
  undefined1 auStack_70 [2];
  undefined1 auStack_6e [2];
  int local_6c;
  undefined4 uStack_68;
  char *apcStack_64 [2];
  CF5GameWnd *pCStack_5c;
  CMemberData *pCStack_58;
  CF5GameWnd *local_54;
  undefined1 uStack_50;
  char cStack_4c;
  undefined1 auStack_4b [51];
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x90d0  176  ?Evt_OnStartNewGame@CF5GameWnd@@MAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a13102;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)auStack_70;
  uStack_84 = DAT_60a24730 ^ (uint)(auStack_70 + -0x10);
  ExceptionList = &local_c;
  piStack_88 = &local_6c;
  local_6c = 0;
  local_54 = this;
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a16528);
  cStack_4c = '\0';
  memset(auStack_4b,0,0x32);
  local_54 = DAT_60a16530;
  uStack_50 = DAT_60a16534;
  apcStack_64[0] = (char *)0x0;
  uStack_68 = 0;
  local_6c = 0;
  if (0 < unaff_EBX) {
    do {
      iVar6 = local_6c;
      apcStack_64[0] = (char *)0x0;
      uStack_68 = 0;
      FUN_60a01000(&cStack_4c,0x33,(char *)&local_54,-0x48);
      (**(code **)(*(int *)param_1 + 0x44))(&cStack_4c,apcStack_64);
      FUN_60a01000((char *)&local_54,0x33,(char *)&pCStack_5c,'l');
      (**(code **)(*(int *)param_1 + 100))(&local_54,auStack_70);
      FUN_60a01000((char *)&pCStack_5c,0x33,(char *)apcStack_64,'d');
      (**(code **)(*(int *)param_1 + 100))(&pCStack_5c,&piStack_88);
      if (apcStack_64[0] != (char *)0x0) {
        pcVar7 = apcStack_64[0];
        pSVar2 = GInfo();
        pCVar3 = CMemberDataList::FindMemberData((CMemberDataList *)(pSVar2 + 0x4c),pcVar7);
        if ((pCVar3 != (CMemberData *)0x0) &&
           (pCVar4 = CMemberData::GetPlayerInfo((CMemberData *)pCVar3), pCVar4 != (CPlayerInfo *)0x0
           )) {
          pCVar4 = CMemberData::GetPlayerInfo((CMemberData *)pCVar3);
          *(undefined4 *)(pCVar4 + 0x118) = uStack_68;
          pCVar4 = CMemberData::GetPlayerInfo((CMemberData *)pCVar3);
          pCVar3 = pCVar3 + 0x10;
          *(undefined4 *)(pCVar4 + 0x11c) = 0;
          pCStack_58 = pCVar3;
          pSVar2 = GInfo();
          pCVar5 = SGlobalInfo::MyData(pSVar2);
          pCVar5 = pCVar5 + 0x10;
          do {
            if (((*pCVar5 != *pCVar3) || (*pCVar5 == (CMemberData)0x0)) ||
               (pCVar1 = pCVar5 + 1, *pCVar1 != pCVar3[1])) break;
            pCVar5 = pCVar5 + 2;
            pCVar3 = pCVar3 + 2;
          } while (*pCVar1 != (CMemberData)0x0);
          iVar6 = local_6c;
        }
      }
      local_6c = iVar6 + 1;
    } while (local_6c < unaff_EBX);
    this = pCStack_5c;
  }
  (*this->vftablePtr->AfterShowIt)(this,(CParam *)0x0);
  ExceptionList = pvStack_14;
  iVar6 = __security_check_cookie(uStack_18 ^ (uint)(auStack_70 + -8));
  return iVar6;
}



/* ---- CF5GameWnd::Net_commandTimeBanish @ 60a09390 size=6 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Net_commandTimeBanish(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Net_commandTimeBanish(CF5GameWnd *this,IParam *param_1)

{
                    /* 0x9390  264  ?Net_commandTimeBanish@CF5GameWnd@@MAEHAAUIParam@@@Z */
  return -1;
}



/* ---- CF5GameWnd::Net_SocketClose @ 60a093a0 size=363 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Net_SocketClose(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Net_SocketClose(CF5GameWnd *this,IParam *param_1)

{
  byte bVar1;
  SGlobalInfo *pSVar2;
  CAppRunningState *pCVar3;
  IGod *pIVar4;
  byte *pbVar5;
  int iVar6;
  CExitReason *this_00;
  byte *pbVar7;
  bool bVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte *pbStack_b0;
  undefined4 *puStack_ac;
  uint uStack_a8;
  undefined4 local_9c [29];
  uint uStack_28;
  void *pvStack_24;
  undefined4 uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x93a0  263  ?Net_SocketClose@CF5GameWnd@@MAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a1313c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_9c;
  uStack_a8 = DAT_60a24730 ^ (uint)(local_9c + -2);
  ExceptionList = &local_c;
  puStack_ac = local_9c;
  pbStack_b0 = (byte *)0x60a16a74;
  local_9c[0] = 0;
  (**(code **)(*(int *)param_1 + 100))();
  uVar10 = DAT_60a24790;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::AppRunningState(pSVar2);
  CAppRunningState::RemoveAppState(pCVar3,uVar10);
  CParam::CParam((CParam *)local_9c,false);
  local_c = (void *)0x0;
  pIVar4 = God();
  (**(code **)(*(int *)pIVar4 + 0x10))("lobbyState","queryState",local_9c);
  CParam::GetValue((CParam *)&puStack_ac,"p008",(char **)&pbStack_b0);
  pbVar5 = &DAT_60a15d8c;
  pbVar7 = pbStack_b0;
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_60a094a0:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_60a094a5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_60a094a0;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_60a094a5:
  if (iVar6 == 0) {
    uVar9 = 6;
    pSVar2 = GInfo();
    this_00 = SGlobalInfo::ExitReason(pSVar2);
    CExitReason::Set(this_00,uVar9);
    (*this->vftablePtr->ExitGameRoom)(this);
  }
  uStack_1c = 0xffffffff;
  CParam::~CParam((CParam *)&puStack_ac);
  ExceptionList = pvStack_24;
  iVar6 = __security_check_cookie(uStack_28 ^ (uint)(local_9c + -6));
  return iVar6;
}



/* ---- CF5GameWnd::Evt_OnHostBanishCheck @ 60a09510 size=12 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnHostBanishCheck(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnHostBanishCheck(CF5GameWnd *this,IParam *param_1)

{
                    /* 0x9510  169  ?Evt_OnHostBanishCheck@CF5GameWnd@@MAEHAAUIParam@@@Z */
  (*this->vftablePtr->CreateCaptionButtons)(this);
  return 0;
}



/* ---- CF5GameWnd::Evt_OnConnectTypeError @ 60a09520 size=130 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnConnectTypeError(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnConnectTypeError(CF5GameWnd *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CExitReason *pCVar2;
  ulong uVar3;
  char *pcVar4;
  char local_8 [8];
  
                    /* 0x9520  163  ?Evt_OnConnectTypeError@CF5GameWnd@@MAEHAAUIParam@@@Z */
  pcVar4 = local_8;
  local_8[0] = '\0';
  local_8[1] = '\0';
  local_8[2] = '\0';
  local_8[3] = '\0';
  local_8[4] = '\0';
  local_8[5] = '\0';
  local_8[6] = '\0';
  local_8[7] = '\0';
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a16314);
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a16a7c,local_8 + -4);
  uVar3 = 8;
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::ExitReason(pSVar1);
  CExitReason::Set(pCVar2,uVar3);
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::ExitReason(pSVar1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pCVar2 + 4),pcVar4)
  ;
  (*this->vftablePtr->ExitGameRoom)(this);
  return 0;
}



/* ---- CF5GameWnd::Evt_OnGameStatusMessage @ 60a095b0 size=175 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnGameStatusMessage(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnGameStatusMessage(CF5GameWnd *this,IParam *param_1)

{
  CF5GameWnd_vftable *pCVar1;
  SGlobalInfo *this_00;
  char *pcVar2;
  undefined *puStack_20;
  undefined4 *puStack_1c;
  undefined4 local_c [3];
  
                    /* 0x95b0  167  ?Evt_OnGameStatusMessage@CF5GameWnd@@MAEHAAUIParam@@@Z */
  puStack_1c = local_c;
  local_c[0] = 0;
  puStack_20 = &DAT_60a16314;
  (**(code **)(*(int *)param_1 + 0x44))();
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a16a94);
  (**(code **)(*(int *)param_1 + 0x60))();
  (**(code **)(*(int *)param_1 + 100))();
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a16a84,&puStack_1c);
  pCVar1 = this->vftablePtr;
  this_00 = GInfo();
  pcVar2 = SGlobalInfo::GetDefaultFontName(this_00);
  (*pCVar1->DisplayStatusMessage)
            (this,(char *)&puStack_20,(int)&puStack_20,0x60a16a8c,0x60a16584,(int)local_c,pcVar2);
  return 0;
}



/* ---- CF5GameWnd::Evt_ChannelLobby_OnUpdateNotice @ 60a09660 size=193 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_ChannelLobby_OnUpdateNotice(struct IParam &) */

int __thiscall
CF5GameWnd::CF5GameWnd__Evt_ChannelLobby_OnUpdateNotice(CF5GameWnd *this,IParam *param_1)

{
  int *piStack_38;
  undefined *puStack_34;
  undefined4 *puStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x9660  132  ?Evt_ChannelLobby_OnUpdateNotice@CF5GameWnd@@MAEHAAUIParam@@@Z
                        */
  uStack_28 = &local_14;
  puStack_2c = &DAT_60a16abc;
  local_c = 0;
  local_14 = 0;
  local_4 = 0;
  local_8 = 0;
  local_10 = 0;
  puStack_30 = (undefined4 *)0x60a09699;
  (**(code **)(*(int *)param_1 + 0x44))();
  puStack_30 = &local_10;
  puStack_34 = &DAT_60a16ab4;
  piStack_38 = (int *)0x60a096ac;
  (**(code **)(*(int *)param_1 + 100))();
  piStack_38 = (int *)((int)register0x00000010 + -0x20);
  (**(code **)(*(int *)param_1 + 100))();
  (**(code **)(*(int *)param_1 + 0x44))();
  (**(code **)(*(int *)param_1 + 0x44))("k144e");
  (**(code **)(*(int *)param_1 + 0x44))("k145e",&puStack_2c);
  (*this->vftablePtr->DisplayNoticeMessage)
            (this,"k25e",(int)register0x00000010 + -0x24,0,"k41e",(char *)&piStack_38);
  return 0;
}



/* ---- CF5GameWnd::CaptureGameScreen @ 60a09730 size=293 ---- */

/* public: virtual void __thiscall CF5GameWnd::CaptureGameScreen(void) */

void __thiscall CF5GameWnd::CF5GameWnd__CaptureGameScreen(CF5GameWnd *this)

{
  undefined4 *_Dst;
  CF5GameWnd_vftable *pCVar1;
  bool bVar2;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_18 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_14 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9730  86  ?CaptureGameScreen@CF5GameWnd@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a1318b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _Dst = &(this->CF5GameWnd_data).offset_0x2c;
  strcpy_s((char *)_Dst,0x104,(char *)&PTR_60a15dfc);
  bVar2 = CaptureScreen((char *)_Dst);
  if (bVar2) {
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14);
    local_4 = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_18);
    local_4._0_1_ = 1;
    pCVar3 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             LoadStr((int)local_10);
    local_4._0_1_ = 2;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=(local_14,pCVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_10);
    ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)local_14);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (local_18,(char *)local_18);
    pCVar1 = this->vftablePtr;
    pcVar9 = (char *)0x0;
    iVar8 = 0;
    iVar7 = 1;
    uVar6 = 0xff;
    iVar5 = 1;
    pcVar4 = ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)local_14);
    (*pCVar1->DisplayStatusMessage)(this,pcVar4,iVar5,uVar6,iVar7,iVar8,pcVar9);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_14);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_10);
    ExceptionList = puStack_8;
    return;
  }
  strcpy_s((char *)_Dst,0x104,(char *)&PTR_60a15dfc);
  ExceptionList = local_c;
  return;
}



/* ---- CF5GameWnd::Evt_OnExitGameDuetoShutdown @ 60a09860 size=12 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnExitGameDuetoShutdown(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnExitGameDuetoShutdown(CF5GameWnd *this,IParam *param_1)

{
                    /* 0x9860  166  ?Evt_OnExitGameDuetoShutdown@CF5GameWnd@@MAEHAAUIParam@@@Z */
  (*this->vftablePtr->ExitGameRoom)(this);
  return 0;
}



/* ---- CF5GameWnd::Evt_OnGetShutdownTime @ 60a09870 size=158 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnGetShutdownTime(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnGetShutdownTime(CF5GameWnd *this,IParam *param_1)

{
  IParam *pIVar1;
  undefined uVar2;
  SGlobalInfo *pSVar3;
  CExitReason *this_00;
  undefined3 extraout_var;
  IGod *pIVar4;
  int iVar5;
  int unaff_EBX;
  ulong uVar6;
  
                    /* 0x9870  168  ?Evt_OnGetShutdownTime@CF5GameWnd@@MAEHAAUIParam@@@Z */
  pIVar1 = param_1;
  (**(code **)(*(int *)param_1 + 100))("k620e",&param_1);
  if (unaff_EBX == 0) {
    uVar6 = 0xb;
    pSVar3 = GInfo();
    this_00 = SGlobalInfo::ExitReason(pSVar3);
    CExitReason::Set(this_00,uVar6);
    uVar2 = (*this->vftablePtr->vfunction9)();
    iVar5 = *(int *)pIVar1;
    if (CONCAT31(extraout_var,uVar2) == 0) {
      pSVar3 = GInfo();
      (**(code **)(iVar5 + 100))("k622e",pSVar3 + 0x10c);
      pIVar4 = God();
      iVar5 = (**(code **)(*(int *)pIVar4 + 0x20))(&DAT_60a15d8c,"onGameOver",pIVar1,0);
      return iVar5;
    }
    pSVar3 = GInfo();
    (**(code **)(iVar5 + 100))("k622e",pSVar3 + 0x10c);
  }
  return 0;
}



/* ---- CF5GameWnd::ExitGameRoom @ 60a09910 size=225 ---- */

/* public: virtual void __thiscall CF5GameWnd::ExitGameRoom(void) */

void __thiscall CF5GameWnd::CF5GameWnd__ExitGameRoom(CF5GameWnd *this)

{
  IGod *pIVar1;
  SGlobalInfo *pSVar2;
  CExitReason *this_00;
  ulong uVar3;
  CGameBanish *this_01;
  CAppRunningState *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x9910  180  ?ExitGameRoom@CF5GameWnd@@UAEXXZ */
  if ((this->CF5GameWnd_data).offset_0x28 != 1) {
    (this->CF5GameWnd_data).offset_0x28 = 1;
    pIVar1 = God();
    (**(code **)(*(int *)pIVar1 + 0x10))("hanChat","clearChatBuffer",Void_exref,1);
    pIVar1 = God();
    (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a165c8,"closeAlarmDlg",Void_exref,1);
    pSVar2 = GInfo();
    this_00 = SGlobalInfo::ExitReason(pSVar2);
    uVar3 = CExitReason::Get(this_00);
    if (uVar3 == 10) {
      pIVar1 = God();
      (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a165c8,"CloseOpenDialog",Void_exref,1);
    }
    (*this->vftablePtr->CreateCaptionButtons)(this);
    pSVar2 = GInfo();
    this_01 = SGlobalInfo::GameBanish(pSVar2);
    CGameBanish::EndHostBanishTick(this_01);
    CFunctor::Call((CFunctor *)&this->CF5GameWnd_data,(IParam *)Void_exref);
    uVar5 = DAT_60a24790;
    uVar6 = DAT_60a24794;
    pSVar2 = GInfo();
    pCVar4 = SGlobalInfo::AppRunningState(pSVar2);
    CAppRunningState::RemoveAppState(pCVar4,uVar5,uVar6);
  }
  return;
}



/* ---- GetMemberData @ 60a09a00 size=30 ---- */

/* public: class CMemberData * __thiscall CF5GameWnd::GetMemberData(char const *) */

CMemberData * __thiscall CF5GameWnd::GetMemberData(CF5GameWnd *this,char *param_1)

{
  SGlobalInfo *this_00;
  CMemberDataList *this_01;
  CMemberData *pCVar1;
  
                    /* 0x9a00  193  ?GetMemberData@CF5GameWnd@@QAEPAVCMemberData@@PBD@Z */
  this_00 = GInfo();
  this_01 = SGlobalInfo::MemberDataList(this_00);
  pCVar1 = CMemberDataList::FindMemberData(this_01,param_1);
  return pCVar1;
}



/* ---- ShowMemberInfoDialog @ 60a09a20 size=230 ---- */

/* public: int __thiscall CF5GameWnd::ShowMemberInfoDialog(char *) */

int __thiscall CF5GameWnd::ShowMemberInfoDialog(CF5GameWnd *this,char *param_1)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9a20  387  ?ShowMemberInfoDialog@CF5GameWnd@@QAEHPAD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"k3e",param_1);
  CParam::AddValue(local_94,"p064",1);
  CParam::AddValue(local_94,"p169",0);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a165c8,"showMemberInfoDlg");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return iVar2;
}



/* ---- SendReport @ 60a09b10 size=298 ---- */

/* public: int __thiscall CF5GameWnd::SendReport(int,char const *,class CGameReport *,char const *)
    */

int __thiscall
CF5GameWnd::SendReport
          (CF5GameWnd *this,int param_1,char *param_2,CGameReport *param_3,char *param_4)

{
  IGod *pIVar1;
  int iVar2;
  undefined4 uStack_a4;
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9b10  375  ?SendReport@CF5GameWnd@@QAEHHPBDPAVCGameReport@@0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a131bc;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  uStack_a4 = DAT_60a24730 ^ (uint)(local_94 + -0xc);
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p048",param_1);
  CParam::AddValue(local_94,"k81e",param_2);
  CParam::AddValue(local_94,"p047",(uint)param_3);
  if (param_4 == (char *)0x0) {
    param_4 = "v6e";
  }
  CParam::AddValue(local_94,"k1e",param_4);
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a15d8c,"sendReport",local_94,1);
  uStack_14 = 0xffffffff;
  if (iVar2 < 0x3fffffff) {
    CParam::~CParam((CParam *)&uStack_a4);
  }
  else {
    CParam::~CParam((CParam *)&uStack_a4);
  }
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)&uStack_a4);
  return iVar2;
}



/* ---- SendCommonChatString @ 60a09c40 size=290 ---- */

/* public: int __thiscall CF5GameWnd::SendCommonChatString(char const *,unsigned long,char const *)
    */

int __thiscall
CF5GameWnd::SendCommonChatString(CF5GameWnd *this,char *param_1,ulong param_2,char *param_3)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9e [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9c40  373  ?SendCommonChatString@CF5GameWnd@@QAEHPBDK0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a131fc;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p046",param_1);
  CParam::AddValue(local_94,"k40e",param_2);
  if (param_3 == (char *)0x0) {
    param_3 = "v3e";
  }
  CParam::AddValue(local_94,"k38e",param_3);
  CParam::AddValue(local_94,"p045",0);
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a15d8c,"sendChatString",local_94);
  uStack_14 = 0xffffffff;
  if (iVar2 < 0x3fffffff) {
    CParam::~CParam(aCStack_9e + -6);
  }
  else {
    CParam::~CParam(aCStack_9e + -6);
  }
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9e + -6));
  return iVar2;
}



/* ---- SendStartNewGame @ 60a09d70 size=35 ---- */

/* public: void __thiscall CF5GameWnd::SendStartNewGame(void) */

void __thiscall CF5GameWnd::SendStartNewGame(CF5GameWnd *this)

{
  IGod *pIVar1;
  
                    /* 0x9d70  378  ?SendStartNewGame@CF5GameWnd@@QAEXXZ */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a15d8c,"sendRoomStartNewGame",Void_exref,1);
  return;
}



/* ---- SendSetRoomState @ 60a09da0 size=223 ---- */

/* public: void __thiscall CF5GameWnd::SendSetRoomState(int) */

void __thiscall CF5GameWnd::SendSetRoomState(CF5GameWnd *this,int param_1)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9da0  377  ?SendSetRoomState@CF5GameWnd@@QAEXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  if (param_1 == 1) {
    iVar2 = 4;
  }
  else if (param_1 == 2) {
    iVar2 = 5;
  }
  else {
    iVar2 = 6;
  }
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"k47e",iVar2);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a15d8c,"sendSetRoomState");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return;
}



/* ---- SendAlterRoomOption @ 60a09e80 size=252 ---- */

/* public: void __thiscall CF5GameWnd::SendAlterRoomOption(char const *,char const *,char const *)
    */

void __thiscall
CF5GameWnd::SendAlterRoomOption(CF5GameWnd *this,char *param_1,char *param_2,char *param_3)

{
  IGod *pIVar1;
  CParam aCStack_a8 [4];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9e80  372  ?SendAlterRoomOption@CF5GameWnd@@QAEXPBD00@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a1323c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  if (param_1 != (char *)0x0) {
    CParam::AddValue(local_94,"k45e",param_1);
  }
  if (param_2 != (char *)0x0) {
    CParam::AddValue(local_94,"k67e",param_2);
  }
  if (param_3 != (char *)0x0) {
    CParam::AddValue(local_94,"k46e",param_3);
  }
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a15d8c,"sendAlterRoomOption",local_94,1);
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_a8 + 4);
  ExceptionList = pvStack_1c;
  __security_check_cookie(uStack_20 ^ (uint)(aCStack_a8 + 4));
  return;
}



/* ---- InvokeItemAutoWebDialog @ 60a09f80 size=263 ---- */

/* public: void __thiscall CF5GameWnd::InvokeItemAutoWebDialog(char const *) */

void __thiscall CF5GameWnd::InvokeItemAutoWebDialog(CF5GameWnd *this,char *param_1)

{
  SGlobalInfo *this_00;
  CCfgSetting *pCVar1;
  IGod *pIVar2;
  undefined4 uStack_a4;
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9f80  212  ?InvokeItemAutoWebDialog@CF5GameWnd@@QAEXPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a131bc;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  uStack_a4 = DAT_60a24730 ^ (uint)(local_94 + -0xc);
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p064",1);
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::CfgSetting(this_00);
  CParam::AddValue(local_94,"p105",(char *)(pCVar1 + 0x60b));
  CParam::AddValue(local_94,"k120e",3);
  CParam::AddValue(local_94,"k106e",param_1);
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))(&DAT_60a165c8,"showItemWebDlg",local_94,1);
  uStack_14 = 0xffffffff;
  CParam::~CParam((CParam *)&uStack_a4);
  ExceptionList = pvStack_1c;
  __security_check_cookie(uStack_20 ^ (uint)&uStack_a4);
  return;
}



/* ---- SendReserveChanceItem @ 60a0a090 size=403 ---- */

/* public: int __thiscall CF5GameWnd::SendReserveChanceItem(int,int) */

int __thiscall CF5GameWnd::SendReserveChanceItem(CF5GameWnd *this,int param_1,int param_2)

{
  CPlayerInfo CVar1;
  char cVar2;
  SGlobalInfo *pSVar3;
  CMetpParserRet *this_00;
  CMemberData *this_01;
  CPlayerInfo *pCVar4;
  CItemManager *pCVar5;
  IGod *pIVar6;
  int iVar7;
  CPlayerInfo *pCVar8;
  bool bVar9;
  NInfoTypes NVar10;
  char *pcVar11;
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xa090  376  ?SendReserveChanceItem@CF5GameWnd@@QAEHHH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a131bc;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  pcVar11 = "k23e";
  NVar10 = 4;
  pSVar3 = GInfo();
  this_00 = SGlobalInfo::MetpInfo(pSVar3,NVar10);
  pcVar11 = CMetpParserRet::GetString(this_00,pcVar11);
  if ((pcVar11[1] != '1') || (pcVar11[2] != 'D')) {
    pCVar8 = (CPlayerInfo *)&DAT_60a16c08;
    pSVar3 = GInfo();
    this_01 = SGlobalInfo::MyData(pSVar3);
    pCVar4 = CMemberData::GetPlayerInfo((CMemberData *)this_01);
    pCVar4 = pCVar4 + 4;
    do {
      CVar1 = *pCVar4;
      bVar9 = (byte)CVar1 < (byte)*pCVar8;
      if (CVar1 != *pCVar8) {
LAB_60a0a140:
        iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_60a0a145;
      }
      if (CVar1 == (CPlayerInfo)0x0) break;
      CVar1 = pCVar4[1];
      bVar9 = (byte)CVar1 < (byte)pCVar8[1];
      if (CVar1 != pCVar8[1]) goto LAB_60a0a140;
      pCVar4 = pCVar4 + 2;
      pCVar8 = pCVar8 + 2;
    } while (CVar1 != (CPlayerInfo)0x0);
    iVar7 = 0;
LAB_60a0a145:
    if (iVar7 != 0) {
      if (param_1 == 0) {
        pSVar3 = GInfo();
        pCVar5 = SGlobalInfo::ItemManager(pSVar3);
        cVar2 = (**(code **)(*(int *)pCVar5 + 8))(5);
        if (cVar2 == '\0') {
          if (param_2 != 0) {
            InvokeItemAutoWebDialog(this,"C01");
          }
          goto LAB_60a0a1fd;
        }
      }
      (this->CF5GameWnd_data).offset_0x148 = (uint)((this->CF5GameWnd_data).offset_0x148 == 0);
      CParam::CParam(local_94,false);
      uStack_4 = 0;
      CParam::AddValue(local_94,"k118e",(this->CF5GameWnd_data).offset_0x148);
      pIVar6 = God();
      (**(code **)(*(int *)pIVar6 + 0x10))(&DAT_60a15d8c,"sendReserveChanceItem",local_94,1);
      uStack_4 = 0xffffffff;
      CParam::~CParam(local_94);
    }
  }
LAB_60a0a1fd:
  ExceptionList = local_c;
  iVar7 = __security_check_cookie(local_10 ^ (uint)local_94);
  return iVar7;
}



/* ---- SendProvokeItem @ 60a0a230 size=35 ---- */

/* public: void __thiscall CF5GameWnd::SendProvokeItem(void) */

void __thiscall CF5GameWnd::SendProvokeItem(CF5GameWnd *this)

{
  IGod *pIVar1;
  
                    /* 0xa230  374  ?SendProvokeItem@CF5GameWnd@@QAEXXZ */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a15d8c,"sendProvokeItem",Void_exref,1);
  return;
}



/* ---- CF5GameWnd::AccuseUser @ 60a0a260 size=35 ---- */

/* public: virtual void __thiscall CF5GameWnd::AccuseUser(void) */

void __thiscall CF5GameWnd::CF5GameWnd__AccuseUser(CF5GameWnd *this)

{
  IGod *pIVar1;
  
                    /* 0xa260  80  ?AccuseUser@CF5GameWnd@@UAEXXZ */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))("mainFrame","onClickAccuseButton",Void_exref,1);
  return;
}



/* ---- SetBaseGameOption @ 60a0a290 size=242 ---- */

/* public: void __thiscall CF5GameWnd::SetBaseGameOption(int,int,int) */

void __thiscall CF5GameWnd::SetBaseGameOption(CF5GameWnd *this,int param_1,int param_2,int param_3)

{
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa290  379  ?SetBaseGameOption@CF5GameWnd@@QAEXHHH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a1327c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_11c;
  ExceptionList = &local_c;
  (this->CF5GameWnd_data).offset_0x158 = param_2;
  (this->CF5GameWnd_data).offset_0x154 = param_1;
  (this->CF5GameWnd_data).offset_0x15c = param_3;
  CGameReg::CGameReg(local_11c,1);
  local_4 = 0;
  CGameReg::Set(local_11c,"SoundEffect",(this->CF5GameWnd_data).offset_0x154);
  CGameReg::Set(local_11c,"SoundBkgndMusic",(this->CF5GameWnd_data).offset_0x158);
  CGameReg::Set(local_11c,"PreventChatting",(this->CF5GameWnd_data).offset_0x15c);
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_11c);
  return;
}



/* ---- CF5GameWnd::GetGameOptionFromRegistry @ 60a0a390 size=269 ---- */

/* public: virtual int __thiscall CF5GameWnd::GetGameOptionFromRegistry(void) */

int __thiscall CF5GameWnd::CF5GameWnd__GetGameOptionFromRegistry(CF5GameWnd *this)

{
  int iVar1;
  ulong local_120;
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa390  189  ?GetGameOptionFromRegistry@CF5GameWnd@@UAEHXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a132bc;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)&local_120;
  ExceptionList = &local_c;
  CGameReg::CGameReg(local_11c,1);
  local_4 = 0;
  local_120 = 0;
  iVar1 = CGameReg::Get(local_11c,"SoundEffect",&local_120);
  if (iVar1 != 0) {
    (this->CF5GameWnd_data).offset_0x154 = local_120;
    iVar1 = CGameReg::Get(local_11c,"SoundBkgndMusic",&local_120);
    if (iVar1 != 0) {
      (this->CF5GameWnd_data).offset_0x158 = local_120;
      iVar1 = CGameReg::Get(local_11c,"PreventChatting",&local_120);
      local_4 = 0xffffffff;
      if (iVar1 != 0) {
        (this->CF5GameWnd_data).offset_0x15c = local_120;
        CGameReg::~CGameReg(local_11c);
        goto LAB_60a0a477;
      }
    }
  }
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
LAB_60a0a477:
  ExceptionList = local_c;
  iVar1 = __security_check_cookie(local_10 ^ (uint)&local_120);
  return iVar1;
}



/* ---- CF5GameWnd::ShowInviteGameToChnlDlg @ 60a0a4a0 size=166 ---- */

/* public: virtual int __thiscall CF5GameWnd::ShowInviteGameToChnlDlg(bool) */

int __thiscall CF5GameWnd::CF5GameWnd__ShowInviteGameToChnlDlg(CF5GameWnd *this,bool param_1)

{
  int iVar1;
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa4a0  386  ?ShowInviteGameToChnlDlg@CF5GameWnd@@UAEH_N@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a132fc;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  ShowInviteGameToChnlDialog(local_94,true,param_1);
  local_4 = 0xffffffff;
  CParam::~CParam(local_94);
  ExceptionList = local_c;
  iVar1 = __security_check_cookie(local_10 ^ (uint)local_94);
  return iVar1;
}



/* ---- CF5GameWnd::HasRightOfBanish @ 60a0a550 size=9 ---- */

/* public: virtual int __thiscall CF5GameWnd::HasRightOfBanish(void) */

int __thiscall CF5GameWnd::CF5GameWnd__HasRightOfBanish(CF5GameWnd *this)

{
                    /* 0xa550  207  ?HasRightOfBanish@CF5GameWnd@@UAEHXZ */
  return (uint)((this->CF5GameWnd_data).offset_0x20 != 0);
}



/* ---- CF5GameWnd::Evt_OnDeleteRoomMember @ 60a0a600 size=636 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnDeleteRoomMember(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnDeleteRoomMember(CF5GameWnd *this,IParam *param_1)

{
  undefined1 *this_00;
  byte bVar1;
  CMemberData CVar2;
  CF5GameWnd_vftable *pCVar3;
  undefined uVar4;
  CMemberData *pCVar5;
  byte *pbVar6;
  int iVar7;
  SGlobalInfo *pSVar8;
  CMemberData *pCVar9;
  CMemberData *pCVar10;
  CMemberDataList *this_01;
  undefined3 extraout_var;
  CMetpParserRet *this_02;
  byte *pbVar11;
  byte *unaff_EBP;
  char *unaff_ESI;
  int unaff_EDI;
  bool bVar12;
  ulong uVar13;
  NInfoTypes NVar14;
  int iVar15;
  char *pcVar16;
  int iVar17;
  char *pcVar18;
  CSimpleStringT<char,1> aCStack_34 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_14 [4];
  CSimpleStringT<char,1> aCStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  IParam *pIStack_4;
  
                    /* 0xa600  164  ?Evt_OnDeleteRoomMember@CF5GameWnd@@MAEHAAUIParam@@@Z */
  pIStack_4 = (IParam *)0xffffffff;
  puStack_8 = &LAB_60a13342;
  local_c = ExceptionList;
  pCVar5 = (CMemberData *)((uint)DAT_60a24730 ^ (uint)(aCStack_34 + 4));
  ExceptionList = &local_c;
  local_20 = (CMemberData *)0x0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a169f8,&local_20);
  this_00 = &(this->CF5GameWnd_data).field_0x138;
  pbVar6 = (byte *)ATL::CSimpleStringT<char,1>::operator_char_const_
                             ((CSimpleStringT<char,1> *)this_00);
  pbVar11 = unaff_EBP;
  do {
    bVar1 = *pbVar11;
    bVar12 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_60a0a680:
      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_60a0a685;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar11[1];
    bVar12 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_60a0a680;
    pbVar11 = pbVar11 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_60a0a685:
  if (iVar7 != 0) {
    (*this->vftablePtr->CreateCaptionButtons)(this);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)this_00,
               (char *)unaff_EBP);
    pSVar8 = GInfo();
    pCVar9 = SGlobalInfo::MyData(pSVar8);
    pCVar9 = pCVar9 + 0x10;
    pCVar10 = (CMemberData *)
              ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)this_00);
    do {
      CVar2 = *pCVar10;
      bVar12 = (byte)CVar2 < (byte)*pCVar9;
      if (CVar2 != *pCVar9) {
LAB_60a0a6e0:
        iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_60a0a6e5;
      }
      if (CVar2 == (CMemberData)0x0) break;
      CVar2 = pCVar10[1];
      bVar12 = (byte)CVar2 < (byte)pCVar9[1];
      if (CVar2 != pCVar9[1]) goto LAB_60a0a6e0;
      pCVar10 = pCVar10 + 2;
      pCVar9 = pCVar9 + 2;
    } while (CVar2 != (CMemberData)0x0);
    iVar7 = 0;
LAB_60a0a6e5:
    param_1 = pIStack_4;
    if (iVar7 == 0) {
      (this->CF5GameWnd_data).offset_0x20 = 1;
    }
  }
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a160b8,aCStack_34 + 0x10);
  pSVar8 = GInfo();
  this_01 = SGlobalInfo::MemberDataList(pSVar8);
  local_20 = CMemberDataList::FindMemberData(this_01,unaff_ESI);
  if (local_20 != (CMemberData *)0x0) {
    (*this->vftablePtr->vfunction14)(&local_20);
  }
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a16274,aCStack_34 + 0xc);
  if (unaff_EDI != 0) {
    uVar4 = (*this->vftablePtr->vfunction9)();
    if (CONCAT31(extraout_var,uVar4) == 0) {
      (*this->vftablePtr->ExitGameRoom)(this);
    }
    else {
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_14);
      uStack_1c = 0;
      LoadStr((int)(aCStack_34 + 8));
      pcVar16 = "k50e";
      NVar14 = 5;
      uStack_1c = CONCAT31(uStack_1c._1_3_,1);
      pSVar8 = GInfo();
      this_02 = SGlobalInfo::MetpInfo(pSVar8,NVar14);
      CMetpParserRet::GetStringW(this_02,pcVar16);
      ATL::CSimpleStringT<char,1>::operator_char_const_(aCStack_34 + 8);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
                (aCStack_14,(char *)aCStack_14);
      pCVar3 = this->vftablePtr;
      pcVar18 = (char *)0x0;
      iVar17 = 0;
      iVar15 = 1;
      uVar13 = 0xff;
      iVar7 = 1;
      pcVar16 = ATL::CSimpleStringT<char,1>::operator_char_const_(aCStack_10);
      (*pCVar3->DisplayChatMessage)(this,0,pcVar16,iVar7,uVar13,iVar15,iVar17,pcVar18);
      (this->CF5GameWnd_data).offset_0x24 = 1;
      SendSetRoomState(this,3);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_34 + 0xc)
                );
      uStack_18 = 0xffffffff;
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)aCStack_10);
    }
  }
  pSVar8 = GInfo();
  pCVar9 = SGlobalInfo::MyData(pSVar8);
  pCVar9 = pCVar9 + 0x10;
  do {
    CVar2 = *pCVar9;
    bVar12 = (byte)CVar2 < (byte)*pCVar5;
    if (CVar2 != *pCVar5) {
LAB_60a0a850:
      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_60a0a855;
    }
    if (CVar2 == (CMemberData)0x0) break;
    CVar2 = pCVar9[1];
    bVar12 = (byte)CVar2 < (byte)pCVar5[1];
    if (CVar2 != pCVar5[1]) goto LAB_60a0a850;
    pCVar9 = pCVar9 + 2;
    pCVar5 = pCVar5 + 2;
  } while (CVar2 != (CMemberData)0x0);
  iVar7 = 0;
LAB_60a0a855:
  if (iVar7 == 0) {
    (*this->vftablePtr->DoExActive)(this,0);
  }
  ExceptionList = (void *)0x0;
  return 0;
}



/* ---- CF5GameWnd::Evt_OnItemReserveChance @ 60a0a880 size=483 ---- */

/* protected: virtual int __thiscall CF5GameWnd::Evt_OnItemReserveChance(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnItemReserveChance(CF5GameWnd *this,IParam *param_1)

{
  CMemberData CVar1;
  CF5GameWnd_vftable *pCVar2;
  char cVar3;
  SGlobalInfo *pSVar4;
  CMemberData *pCVar5;
  int iVar6;
  CPlayerInfo *pCVar7;
  char *pcVar8;
  CMemberData *pCVar9;
  void *unaff_ESI;
  bool bVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  undefined *puStack_34;
  CMemberData *pCStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  CMemberData local_18 [4];
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xa880  170  ?Evt_OnItemReserveChance@CF5GameWnd@@MAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a13372;
  local_c = ExceptionList;
  uStack_2c = DAT_60a24730 ^ (uint)(local_18 + -0x10);
  ExceptionList = &local_c;
  pCStack_30 = local_18;
  puStack_34 = &DAT_60a160b8;
  (**(code **)(*(int *)param_1 + 0x44))();
  (**(code **)(*(int *)param_1 + 100))("k118e",&uStack_1c);
  local_c = (void *)0x0;
  cVar3 = (**(code **)(*(int *)param_1 + 100))("k159e",&local_c);
  if ((cVar3 == '\0') || (0 < iStack_14)) {
    pCVar9 = pCStack_30;
    pSVar4 = GInfo();
    pCVar9 = CMemberDataList::FindMemberData((CMemberDataList *)(pSVar4 + 0x4c),(char *)pCVar9);
    if ((pCVar9 == (CMemberData *)0x0) ||
       (pCVar7 = CMemberData::GetPlayerInfo((CMemberData *)pCVar9), pCVar7 == (CPlayerInfo *)0x0)) {
      ExceptionList = unaff_ESI;
      return -1;
    }
    *(uint *)(pCVar7 + 0x118) = uStack_2c;
    LoadStr((int)(local_18 + -0x10));
    uStack_1c = 0;
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&puStack_34);
    uStack_1c = CONCAT31(uStack_1c._1_3_,1);
    ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)(local_18 + -0x10));
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&puStack_34,
               (char *)&puStack_34);
    pCVar2 = this->vftablePtr;
    pcVar14 = (char *)0x0;
    iVar13 = 0;
    iVar12 = 1;
    uVar11 = 0xc00000;
    iVar6 = 1;
    pcVar8 = ATL::CSimpleStringT<char,1>::operator_char_const_
                       ((CSimpleStringT<char,1> *)&pCStack_30);
    (*pCVar2->DisplayStatusMessage)(this,pcVar8,iVar6,uVar11,iVar12,iVar13,pcVar14);
    (*this->vftablePtr->AfterShowIt)(this,(CParam *)pCVar9);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&pCStack_30);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(local_18 + -0xc));
    ExceptionList = unaff_ESI;
    return 0;
  }
  pSVar4 = GInfo();
  pCVar5 = SGlobalInfo::MyData(pSVar4);
  pCVar5 = pCVar5 + 0x10;
  pCVar9 = pCStack_30;
  do {
    CVar1 = *pCVar9;
    bVar10 = (byte)CVar1 < (byte)*pCVar5;
    if (CVar1 != *pCVar5) {
LAB_60a0a930:
      iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_60a0a935;
    }
    if (CVar1 == (CMemberData)0x0) break;
    CVar1 = pCVar9[1];
    bVar10 = (byte)CVar1 < (byte)pCVar5[1];
    if (CVar1 != pCVar5[1]) goto LAB_60a0a930;
    pCVar9 = pCVar9 + 2;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CMemberData)0x0);
  iVar6 = 0;
LAB_60a0a935:
  if ((iVar6 == 0) &&
     ((this->CF5GameWnd_data).offset_0x148 = (uint)((this->CF5GameWnd_data).offset_0x148 == 0),
     iStack_14 == 0)) {
    InvokeItemAutoWebDialog(this,"C01");
  }
  ExceptionList = unaff_ESI;
  return 0;
}



/* ---- ActivateOn @ 60a0aa70 size=258 ---- */

/* public: int __thiscall CF5GameWnd::ActivateOn(struct IParam &) */

int __thiscall CF5GameWnd::ActivateOn(CF5GameWnd *this,IParam *param_1)

{
  SGlobalInfo *pSVar1;
  CMetpParserRet *pCVar2;
  CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *pCVar3;
  undefined4 uVar4;
  IGod *pIVar5;
  void *unaff_ESI;
  NInfoTypes NVar6;
  char *pcVar7;
  undefined *puVar8;
  CF5GameWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xaa70  82  ?ActivateOn@CF5GameWnd@@QAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar7 = "k82e";
  NVar6 = 5;
  (this->CF5GameWnd_data).offset_0x1c = 1;
  (this->CF5GameWnd_data).offset_0x20 = 0;
  (this->CF5GameWnd_data).offset_0x24 = 0;
  (this->CF5GameWnd_data).offset_0x148 = 0;
  (this->CF5GameWnd_data).offset_0x28 = 0;
  local_10 = this;
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar6);
  pcVar7 = CMetpParserRet::GetString(pCVar2,pcVar7);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x130,pcVar7);
  pCVar3 = (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
           LoadStr((int)&local_10);
  local_4 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x134,pCVar3);
  local_4 = 0xffffffff;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_10);
  puVar8 = &DAT_60a16a7c;
  NVar6 = 5;
  pSVar1 = GInfo();
  pCVar2 = SGlobalInfo::MetpInfo(pSVar1,NVar6);
  uVar4 = FUN_60a05f40(pCVar2,puVar8);
  (this->CF5GameWnd_data).offset_0x140 = uVar4;
  pIVar5 = God();
  (**(code **)(*(int *)pIVar5 + 0x10))("hanChat","clearChatBuffer",Void_exref,1);
  (*this->vftablePtr->DoExActive)(this,1);
  ExceptionList = unaff_ESI;
  return 0;
}



/* ---- FUN_60a0ab80 @ 60a0ab80 size=30 ---- */

void __cdecl FUN_60a0ab80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



/* ---- FUN_60a0aba0 @ 60a0aba0 size=48 ---- */

void * __cdecl FUN_60a0aba0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}



/* ---- scalar_deleting_destructor @ 60a0abd0 size=18 ---- */

void __thiscall CMFunctor<CF5GameWnd>::scalar_deleting_destructor(CMFunctor<CF5GameWnd> *this)

{
  if (this != (CMFunctor<CF5GameWnd> *)0x0) {
                    /* inlined destructor: CMFunctor<CF5GameWnd>::~CMFunctor<CF5GameWnd> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- FUN_60a0abf0 @ 60a0abf0 size=88 ---- */

undefined4 * __fastcall FUN_60a0abf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a13398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- GetPlayerCount @ 60a0ac50 size=319 ---- */

/* public: void __thiscall CF5GameWnd::GetPlayerCount(int &,int &) */

void __thiscall CF5GameWnd::GetPlayerCount(CF5GameWnd *this,int *param_1,int *param_2)

{
  CPlayerInfo CVar1;
  CMemberData *this_00;
  int iVar2;
  SGlobalInfo *pSVar3;
  CPlayerInfoList *pCVar4;
  int iVar5;
  map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CMemberData*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CMemberData*>_>_>
  *pmVar6;
  CPlayerInfo *pCVar7;
  int *piVar8;
  CPlayerInfo *pCVar9;
  bool bVar10;
  int *local_8;
  int local_4;
  
                    /* 0xac50  197  ?GetPlayerCount@CF5GameWnd@@QAEXAAH0@Z */
  *param_1 = 0;
  *param_2 = 0;
  pSVar3 = GInfo();
  pCVar4 = SGlobalInfo::PlayerInfoList(pSVar3);
  iVar5 = CPlayerInfoList::GetCount(pCVar4);
  if (0 < iVar5) {
    pSVar3 = GInfo();
    pCVar4 = SGlobalInfo::PlayerInfoList(pSVar3);
    pmVar6 = CPlayerInfoList::Map(pCVar4);
    local_4 = **(int **)(pmVar6 + 0x18);
    local_8 = *(int **)pmVar6;
    while( true ) {
      iVar2 = local_4;
      piVar8 = local_8;
      iVar5 = *(int *)(pmVar6 + 0x18);
      if ((local_8 == (int *)0x0) || (local_8 != *(int **)pmVar6)) {
        _invalid_parameter_noinfo();
      }
      if (iVar2 == iVar5) break;
      if (piVar8 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar8;
      }
      if (iVar2 == *(int *)(iVar5 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      this_00 = *(CMemberData **)(iVar2 + 0x28);
      if (this_00 != (CMemberData *)0x0) {
        pCVar9 = (CPlayerInfo *)&DAT_60a16c90;
        pCVar7 = CMemberData::GetPlayerInfo(this_00);
        pCVar7 = pCVar7 + 4;
        do {
          CVar1 = *pCVar7;
          bVar10 = (byte)CVar1 < (byte)*pCVar9;
          if (CVar1 != *pCVar9) {
LAB_60a0ad24:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_60a0ad29;
          }
          if (CVar1 == (CPlayerInfo)0x0) break;
          CVar1 = pCVar7[1];
          bVar10 = (byte)CVar1 < (byte)pCVar9[1];
          if (CVar1 != pCVar9[1]) goto LAB_60a0ad24;
          pCVar7 = pCVar7 + 2;
          pCVar9 = pCVar9 + 2;
        } while (CVar1 != (CPlayerInfo)0x0);
        iVar5 = 0;
LAB_60a0ad29:
        if (iVar5 == 0) {
          piVar8 = param_1;
        }
        else {
          pCVar9 = (CPlayerInfo *)&DAT_60a16c08;
          pCVar7 = CMemberData::GetPlayerInfo(this_00);
          pCVar7 = pCVar7 + 4;
          do {
            CVar1 = *pCVar7;
            bVar10 = (byte)CVar1 < (byte)*pCVar9;
            if (CVar1 != *pCVar9) {
LAB_60a0ad60:
              iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_60a0ad65;
            }
            if (CVar1 == (CPlayerInfo)0x0) break;
            CVar1 = pCVar7[1];
            bVar10 = (byte)CVar1 < (byte)pCVar9[1];
            if (CVar1 != pCVar9[1]) goto LAB_60a0ad60;
            pCVar7 = pCVar7 + 2;
            pCVar9 = pCVar9 + 2;
          } while (CVar1 != (CPlayerInfo)0x0);
          iVar5 = 0;
LAB_60a0ad65:
          if (iVar5 != 0) goto LAB_60a0ad6f;
          piVar8 = param_2;
        }
        *piVar8 = *piVar8 + 1;
      }
LAB_60a0ad6f:
      FUN_60a0da70((int *)&local_8);
    }
  }
  return;
}



/* ---- FUN_60a0ad90 @ 60a0ad90 size=44 ---- */

undefined4 * FUN_60a0ad90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}



/* ---- FUN_60a0adc0 @ 60a0adc0 size=424 ---- */

void __thiscall
FUN_60a0adc0(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  length_error *plVar1;
  int iVar2;
  int iVar3;
  int extraout_EAX;
  void *extraout_EAX_00;
  void *pvVar4;
  length_error *this_00;
  length_error *extraout_ECX;
  void *pvVar5;
  length_error *local_4;
  
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    this_00 = (length_error *)0x0;
  }
  else {
    this_00 = (length_error *)(*(int *)((int)this + 0x14) - iVar3 >> 2);
  }
  if (param_3 != 0) {
    iVar2 = *(int *)((int)this + 0x10);
    iVar3 = iVar2 - iVar3 >> 2;
    if (0x3fffffffU - iVar3 < param_3) {
      std::length_error::length_error(this_00);
      iVar3 = extraout_EAX;
      this_00 = extraout_ECX;
    }
    plVar1 = (length_error *)(iVar3 + param_3);
    if (this_00 < plVar1) {
      if ((length_error *)(0x3fffffff - ((uint)this_00 >> 1)) < this_00) {
        local_4 = (length_error *)0x0;
      }
      else {
        local_4 = (length_error *)((int)&this_00->vftablePtr + ((uint)this_00 >> 1));
      }
      if (local_4 < plVar1) {
        local_4 = plVar1;
      }
      std::bad_alloc::bad_alloc_Constructor_or_Destructor((char *)local_4);
      iVar3 = (int)param_2 - *(int *)((int)this + 0xc) >> 2;
      FUN_60a0ad90((undefined4 *)((int)extraout_EAX_00 + iVar3 * 4),param_3,param_4);
      FUN_60a03df0(*(void **)((int)this + 0xc),(int)param_2,extraout_EAX_00);
      FUN_60a03df0(param_2,*(int *)((int)this + 0x10),
                   (void *)((int)extraout_EAX_00 + (iVar3 + param_3) * 4));
      pvVar4 = *(void **)((int)this + 0xc);
      iVar3 = *(int *)((int)this + 0x10);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      *(void **)((int)this + 0xc) = extraout_EAX_00;
      *(void **)((int)this + 0x14) = (void *)((int)extraout_EAX_00 + (int)local_4 * 4);
      *(void **)((int)this + 0x10) =
           (void *)((int)extraout_EAX_00 + (param_3 + (iVar3 - (int)pvVar4 >> 2)) * 4);
      return;
    }
    param_4 = (undefined4 *)*param_4;
    if ((uint)(iVar2 - (int)param_2 >> 2) < param_3) {
      FUN_60a03df0(param_2,iVar2,param_2 + param_3);
      FUN_60a0ad90(*(undefined4 **)((int)this + 0x10),
                   param_3 - ((int)*(undefined4 **)((int)this + 0x10) - (int)param_2 >> 2),&param_4)
      ;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_3 * 4;
      FUN_60a0ab80(param_2,(undefined4 *)(*(int *)((int)this + 0x10) + param_3 * -4),&param_4);
      return;
    }
    pvVar5 = (void *)(iVar2 + param_3 * -4);
    pvVar4 = FUN_60a03df0(pvVar5,iVar2,(void *)iVar2);
    *(void **)((int)this + 0x10) = pvVar4;
    FUN_60a0aba0(param_2,(int)pvVar5,iVar2);
    FUN_60a0ab80(param_2,param_2 + param_3,&param_4);
  }
  return;
}



/* ---- CF5GameWnd::Evt_OnEnableHostBanish @ 60a0af70 size=317 ---- */

/* WARNING: Removing unreachable block (ram,0x60a0afed) */
/* protected: virtual int __thiscall CF5GameWnd::Evt_OnEnableHostBanish(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnEnableHostBanish(CF5GameWnd *this,IParam *param_1)

{
  char cVar1;
  undefined uVar2;
  undefined3 extraout_var;
  char *pcVar3;
  IGod *pIVar4;
  int iVar5;
  undefined4 uStack_9c;
  CParam aCStack_98 [132];
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xaf70  165  ?Evt_OnEnableHostBanish@CF5GameWnd@@MAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a133cc;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_60a24730 ^ (uint)&uStack_9c);
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)param_1 + 0x18))
                    (&DAT_60a16274,DAT_60a24730 ^ (uint)(aCStack_98 + -8));
  if (cVar1 == '\0') {
    (*this->vftablePtr->CreateCaptionButtons)(this);
    uVar2 = (*this->vftablePtr->vfunction9)();
    if (CONCAT31(extraout_var,uVar2) == 0) {
      CParam::CParam(aCStack_98,false);
      puStack_8 = (undefined1 *)0x0;
      pcVar3 = ATL::CSimpleStringT<char,1>::operator_char_const_
                         ((CSimpleStringT<char,1> *)&(this->CF5GameWnd_data).field_0x138);
      CParam::AddValue(aCStack_98,"k3e",pcVar3);
      pIVar4 = God();
      (**(code **)(*(int *)pIVar4 + 0x10))(&DAT_60a15d8c,"sendReqBanish",aCStack_98,1);
      puStack_8 = (undefined1 *)0xffffffff;
      CParam::~CParam(aCStack_98);
    }
  }
  else {
    uStack_9c = 0;
    GetPlayerCount(this,(int *)(aCStack_98 + -8),&uStack_9c);
    (*this->vftablePtr->CreateCaptionButtons)(this);
  }
  ExceptionList = local_10;
  iVar5 = __security_check_cookie(uStack_14 ^ (uint)(aCStack_98 + -8));
  return iVar5;
}



/* ---- CF5GameWnd::Evt_OnClickBanishMember @ 60a0b0b0 size=333 ---- */

/* WARNING: Removing unreachable block (ram,0x60a0b170) */
/* protected: virtual int __thiscall CF5GameWnd::Evt_OnClickBanishMember(struct IParam &) */

int __thiscall CF5GameWnd::CF5GameWnd__Evt_OnClickBanishMember(CF5GameWnd *this,IParam *param_1)

{
  SGlobalInfo *this_00;
  CMemberData *pCVar1;
  int iVar2;
  uchar *unaff_ESI;
  int local_a0;
  int aiStack_9c [33];
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xb0b0  162  ?Evt_OnClickBanishMember@CF5GameWnd@@MAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a1340c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)&local_a0;
  ExceptionList = &local_c;
  local_a0 = 0;
  (**(code **)(*(int *)param_1 + 0x44))
            (&DAT_60a160b8,&local_a0,DAT_60a24730 ^ (uint)(aiStack_9c + -4));
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::MyData(this_00);
  iVar2 = _mbscmp((uchar *)(pCVar1 + 0x10),unaff_ESI);
  if ((iVar2 != 0) && (iVar2 = (*this->vftablePtr->HasRightOfBanish)(this), iVar2 != 0)) {
    local_a0 = 0;
    GetPlayerCount(this,aiStack_9c + -2,&local_a0);
    (*this->vftablePtr->vfunction9)();
  }
  ExceptionList = pvStack_14;
  iVar2 = __security_check_cookie(uStack_18 ^ (uint)(aiStack_9c + -3));
  return iVar2;
}



/* ---- FUN_60a0b200 @ 60a0b200 size=180 ---- */

void __thiscall
FUN_60a0b200(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if ((*(uint *)((int)this + 0x10) - uVar1 & 0xfffffffc) == 0) {
    iVar4 = 0;
  }
  else {
    if (*(uint *)((int)this + 0x10) < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((param_2 == 0) || (param_2 != *(int *)this)) {
      _invalid_parameter_noinfo();
    }
    iVar4 = (int)((int)param_3 - uVar1) >> 2;
  }
  FUN_60a0adc0(this,param_2,param_3,1,param_4);
  uVar1 = *(uint *)((int)this + 0xc);
  if (*(uint *)((int)this + 0x10) < uVar1) {
    _invalid_parameter_noinfo();
  }
  piVar2 = *(int **)this;
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  uVar1 = uVar1 + iVar4 * 4;
  if (uVar1 <= *(uint *)(iVar3 + 0x10)) {
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar1) goto LAB_60a0b2a1;
  }
  _invalid_parameter_noinfo();
LAB_60a0b2a1:
  param_1[1] = uVar1;
  *param_1 = (int)piVar2;
  return;
}



/* ---- ~CF5GameWnd @ 60a0b2c0 size=176 ---- */

/* public: virtual __thiscall CF5GameWnd::~CF5GameWnd(void) */

void __thiscall CF5GameWnd::~CF5GameWnd(CF5GameWnd *this)

{
  void **this_00;
  void *pvVar1;
  void *pvVar2;
  void *local_8 [2];
  
                    /* 0xb2c0  44  ??1CF5GameWnd@@UAE@XZ */
  this_00 = &(this->CF5GameWnd_data).offset_0x4;
  this->vftablePtr = &_vftable_;
  pvVar1 = (this->CF5GameWnd_data).offset_0x14;
  if (pvVar1 < (this->CF5GameWnd_data).offset_0x10) {
    _invalid_parameter_noinfo();
  }
  pvVar2 = (this->CF5GameWnd_data).offset_0x10;
  local_8[0] = *this_00;
  if ((this->CF5GameWnd_data).offset_0x14 < pvVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_60a03e70(this_00,(int *)local_8,*this_00,(uint)pvVar2,local_8[0],pvVar1);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x13c);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x138);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x134);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x130);
  pvVar1 = (this->CF5GameWnd_data).offset_0x10;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  (this->CF5GameWnd_data).offset_0x10 = (void *)0x0;
  (this->CF5GameWnd_data).offset_0x14 = (void *)0x0;
  (this->CF5GameWnd_data).offset_0x18 = 0;
  operator_delete(*this_00);
                    /* WARNING: Could not recover jumptable at 0x60a0b36a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)&this->CF5GameWnd_data);
  return;
}



/* ---- CF5GameWnd @ 60a0b370 size=1855 ---- */

/* public: __thiscall CF5GameWnd::CF5GameWnd(void) */

void __thiscall CF5GameWnd::CF5GameWnd(CF5GameWnd *this)

{
  undefined4 *puVar1;
  IGod *pIVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcStack_218;
  undefined4 *puStack_214;
  int iStack_208;
  undefined4 *puStack_204;
  char *pcStack_1fc;
  char *pcStack_1f8;
  undefined4 *puStack_1f4;
  uint uVar5;
  undefined1 auStack_a8 [8];
  CF5GameWnd *local_a0;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb370  25  ??0CF5GameWnd@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a134b1;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)auStack_a8;
  ExceptionList = &local_c;
                    /* inlined constructor or destructor (approx location) for CF5GameWnd */
  this->vftablePtr = &_vftable_;
  local_a0 = this;
  CFunctor::CFunctor((CFunctor *)&this->CF5GameWnd_data);
  local_4 = 0;
  FUN_60a0abf0(&(this->CF5GameWnd_data).offset_0x4);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x130);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x134);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x138);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5GameWnd_data).field_0x13c);
  local_4 = CONCAT31(local_4._1_3_,5);
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
                    /* inlined constructor or destructor (approx location) for CMFunctor<CF5GameWnd>
                        */
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a10130;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a05910;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a100e0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a100f0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a5d0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a05940;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a5a0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a058a0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a570;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a05850;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a560;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a058b0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a05950;
  }
  uVar5 = 1;
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a580;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a5b0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a5f0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a05960;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a590;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puVar3 = operator_new(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &CMFunctor<CF5GameWnd>::vftable;
    puVar3[1] = this;
    puVar3[2] = &LAB_60a0a5c0;
  }
  (**(code **)(*(int *)pIVar2 + 0x14))();
  pIVar2 = God();
  puStack_1f4 = (undefined4 *)0x60a0b8a1;
  puStack_1f4 = operator_new(0xc);
  if (puStack_1f4 == (undefined4 *)0x0) {
    puStack_1f4 = (undefined4 *)0x0;
  }
  else {
    *puStack_1f4 = &CMFunctor<CF5GameWnd>::vftable;
    puStack_1f4[1] = this;
    puStack_1f4[2] = &LAB_60a0a5e0;
  }
  pcStack_1f8 = "onUpdateNotice";
  pcStack_1fc = "channel";
  (**(code **)(*(int *)pIVar2 + 0x1c))();
  pIVar2 = God();
  puStack_204 = (undefined4 *)0x60a0b8de;
  puStack_204 = operator_new(0xc);
  if (puStack_204 == (undefined4 *)0x0) {
    puStack_204 = (undefined4 *)0x0;
  }
  else {
    *puStack_204 = &CMFunctor<CF5GameWnd>::vftable;
    puStack_204[1] = this;
    puStack_204[2] = &LAB_60a058c0;
  }
  (**(code **)(*(int *)pIVar2 + 0x24))();
  pIVar2 = God();
  puStack_214 = (undefined4 *)0x60a0b91b;
  puStack_214 = operator_new(0xc);
  if (puStack_214 == (undefined4 *)0x0) {
    puStack_214 = (undefined4 *)0x0;
  }
  else {
    *puStack_214 = &CMFunctor<CF5GameWnd>::vftable;
    puStack_214[1] = this;
    puStack_214[2] = &LAB_60a05790;
  }
  pcStack_218 = "c100e";
  (**(code **)(*(int *)pIVar2 + 0x24))(&DAT_60a15d8c);
  (this->CF5GameWnd_data).offset_0x20 = 0;
  (this->CF5GameWnd_data).offset_0x24 = 0;
  (this->CF5GameWnd_data).offset_0x148 = 0;
  (this->CF5GameWnd_data).offset_0x1c = 0;
  (this->CF5GameWnd_data).offset_0x28 = 0;
  (this->CF5GameWnd_data).offset_0x154 = 1;
  (this->CF5GameWnd_data).offset_0x158 = 1;
  (this->CF5GameWnd_data).offset_0x15c = 0;
  ATL::CSimpleStringT<char,1>::Empty((CSimpleStringT<char,1> *)&(this->CF5GameWnd_data).field_0x130)
  ;
  ATL::CSimpleStringT<char,1>::Empty((CSimpleStringT<char,1> *)&(this->CF5GameWnd_data).field_0x134)
  ;
  ATL::CSimpleStringT<char,1>::Empty((CSimpleStringT<char,1> *)&(this->CF5GameWnd_data).field_0x138)
  ;
  ATL::CSimpleStringT<char,1>::Empty((CSimpleStringT<char,1> *)&(this->CF5GameWnd_data).field_0x13c)
  ;
  memset(&(this->CF5GameWnd_data).offset_0x2c,0,0x104);
  (this->CF5GameWnd_data).offset_0x140 = 0xffffffff;
  (this->CF5GameWnd_data).offset_0x144 = 0;
  (this->CF5GameWnd_data).offset_0x150 = 0;
  puStack_204 = (undefined4 *)0x0;
  iStack_208 = 10;
  do {
    puVar3 = (this->CF5GameWnd_data).offset_0x10;
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (this->CF5GameWnd_data).offset_0x18 - (int)puVar3 >> 2;
    }
    puVar1 = (this->CF5GameWnd_data).offset_0x14;
    if ((uint)((int)puVar1 - (int)puVar3 >> 2) < uVar4) {
      *puVar1 = 0;
      (this->CF5GameWnd_data).offset_0x14 = puVar1 + 1;
    }
    else {
      if (puVar1 < puVar3) {
        _invalid_parameter_noinfo();
      }
      FUN_60a0b200(&(this->CF5GameWnd_data).offset_0x4,(int *)&pcStack_1fc,
                   (int)(this->CF5GameWnd_data).offset_0x4,puVar1,&puStack_204);
    }
    iStack_208 = iStack_208 + -1;
  } while (iStack_208 != 0);
  CParam::CParam((CParam *)&puStack_1f4,false);
  CParam::AddValue((CParam *)&puStack_1f4,"p044",(uint)this);
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))("gameView","registerGameWnd",&puStack_1f4,1);
  CParam::~CParam((CParam *)&puStack_204);
  ExceptionList = &DAT_60a15d8c;
  __security_check_cookie(uVar5 ^ (uint)&pcStack_218);
  return;
}



/* ---- ~CF5MainFrmView @ 60a0bab0 size=7 ---- */

/* public: __thiscall CF5MainFrmView::~CF5MainFrmView(void) */

void __thiscall CF5MainFrmView::~CF5MainFrmView(CF5MainFrmView *this)

{
                    /* 0xbab0  45  ??1CF5MainFrmView@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- CF5MainFrmView::OnAltF4KeyDown @ 60a0bac0 size=35 ---- */

/* public: virtual int __thiscall CF5MainFrmView::OnAltF4KeyDown(struct IParam &) */

int __thiscall CF5MainFrmView::CF5MainFrmView__OnAltF4KeyDown(CF5MainFrmView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0xbac0  267  ?OnAltF4KeyDown@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))("mainFrameView","onAltF4KeyDown",param_1,0);
  return iVar2;
}



/* ---- CF5MainFrmView::OnClickExitButton @ 60a0baf0 size=192 ---- */

/* public: virtual int __thiscall CF5MainFrmView::OnClickExitButton(struct IParam &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__OnClickExitButton(CF5MainFrmView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xbaf0  288  ?OnClickExitButton@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p176",0);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("mainFrameView","onClickExitBtn");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return iVar2;
}



/* ---- CF5MainFrmView::OnClickAccuseButton @ 60a0bbb0 size=679 ---- */

/* public: virtual int __thiscall CF5MainFrmView::OnClickAccuseButton(struct IParam &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__OnClickAccuseButton(CF5MainFrmView *this,IParam *param_1)

{
  bool bVar1;
  SGlobalInfo *pSVar2;
  CAppRunningState *pCVar3;
  IGod *pIVar4;
  CMemberData *pCVar5;
  char *pcVar6;
  int iVar7;
  MessageLog *unaff_EBP;
  undefined4 uVar8;
  undefined4 uVar9;
  CSimpleStringT<char,1> aCStack_b8 [4];
  CParam aCStack_a4 [2];
  CParam aCStack_a2 [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_a0 [4];
  undefined4 local_9c;
  undefined4 local_98;
  CParam local_94 [128];
  undefined1 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xbbb0  278  ?OnClickAccuseButton@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13504;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)aCStack_a4;
  ExceptionList = &local_c;
  uVar8 = DAT_60a247a0;
  uVar9 = DAT_60a247a4;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::AppRunningState(pSVar2);
  bVar1 = CAppRunningState::IsRunning(pCVar3,uVar8,uVar9);
  if (bVar1) {
    local_9c = 0;
    local_98 = 0;
    CParam::CParam(local_94,false);
    local_4 = 0;
    pIVar4 = God();
    (**(code **)(*(int *)pIVar4 + 0x10))("hanChat","getAccuseBuffer",local_94,1);
    CParam::GetValue(aCStack_a4,"p300",(__int64 *)(aCStack_a4 + -8));
    pSVar2 = GInfo();
    pCVar5 = SGlobalInfo::MyData(pSVar2);
    iVar7 = MessageLog::getUserCountExcept(unaff_EBP,(char *)(pCVar5 + 0x10));
    if (iVar7 == 0) {
      LoadStr((int)(aCStack_b8 + 8));
      uStack_14 = 1;
      CParam::AddValue(aCStack_a4,"p064",1);
      CParam::AddValue(aCStack_a4,"p169",1);
      CParam::AddValue(aCStack_a4,"p036",1);
      pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(aCStack_b8 + 8);
      CParam::AddValue(aCStack_a4,"p065",pcVar6);
      pIVar4 = God();
      (**(code **)(*(int *)pIVar4 + 0x10))(&DAT_60a165c8,"showAccuseConfirmDlg",aCStack_a4,1);
      ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
      ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_a0);
    }
    else {
      iVar7 = MessageLog::empty(unaff_EBP);
      if (iVar7 == 0) {
        CParam::AddValue(aCStack_a4,"p064",1);
        CParam::AddValue(aCStack_a4,"p169",0);
        pSVar2 = GInfo();
        pCVar5 = SGlobalInfo::MyData(pSVar2);
        CParam::AddValue(aCStack_a4,"p121",(char *)(pCVar5 + 0x10));
        pIVar4 = God();
        (**(code **)(*(int *)pIVar4 + 0x10))(&DAT_60a165c8,"showAccuseUserDlg",aCStack_a4,1);
      }
      else {
        LoadStr((int)(aCStack_b8 + 4));
        uStack_14 = 2;
        CParam::AddValue(aCStack_a4,"p064",1);
        CParam::AddValue(aCStack_a4,"p169",1);
        CParam::AddValue(aCStack_a4,"p036",1);
        pcVar6 = ATL::CSimpleStringT<char,1>::operator_char_const_(aCStack_b8 + 4);
        CParam::AddValue(aCStack_a4,"p065",pcVar6);
        pIVar4 = God();
        (**(code **)(*(int *)pIVar4 + 0x10))(&DAT_60a165c8,"showAccuseConfirmDlg",aCStack_a4,1);
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
        ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                  ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)aCStack_a4);
      }
    }
    local_4 = 0xffffffff;
    CParam::~CParam(local_94);
  }
  ExceptionList = local_c;
  iVar7 = __security_check_cookie(local_10 ^ (uint)aCStack_a4);
  return iVar7;
}



/* ---- CF5MainFrmView::OnClickInviteButton @ 60a0be60 size=207 ---- */

/* public: virtual int __thiscall CF5MainFrmView::OnClickInviteButton(struct IParam &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__OnClickInviteButton(CF5MainFrmView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xbe60  292  ?OnClickInviteButton@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p064",1);
  CParam::AddValue(local_94,"p169",0);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a165c8,"showInviteChnlToWebDlg");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return iVar2;
}



/* ---- CF5MainFrmView::OnClickOptionButton @ 60a0bf30 size=207 ---- */

/* public: virtual int __thiscall CF5MainFrmView::OnClickOptionButton(struct IParam &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__OnClickOptionButton(CF5MainFrmView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  CParam aCStack_9a [2];
  CParam local_94 [116];
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xbf30  298  ?OnClickOptionButton@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a12a4c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_94;
  ExceptionList = &local_c;
  CParam::CParam(local_94,false);
  local_4 = 0;
  CParam::AddValue(local_94,"p064",1);
  CParam::AddValue(local_94,"p169",0);
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x10))(&DAT_60a165c8,"showSettingDlg");
  uStack_14 = 0xffffffff;
  CParam::~CParam(aCStack_9a + -10);
  ExceptionList = pvStack_1c;
  iVar2 = __security_check_cookie(uStack_20 ^ (uint)(aCStack_9a + -10));
  return iVar2;
}



/* ---- ~CF5MainFrmView @ 60a0c030 size=9 ---- */

/* public: __thiscall CF5MainFrmView::CF5MainFrmView(void) */

void __thiscall CF5MainFrmView::~CF5MainFrmView(CF5MainFrmView *this)

{
                    /* 0xc030  27  ??0CF5MainFrmView@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  return;
}



/* ---- CF5MainFrmView::OnDetached @ 60a0c040 size=22 ---- */

/* public: virtual bool __thiscall CF5MainFrmView::OnDetached(void) */

bool __thiscall CF5MainFrmView::CF5MainFrmView__OnDetached(CF5MainFrmView *this)

{
                    /* 0xc040  327  ?OnDetached@CF5MainFrmView@@UAE_NXZ */
  if (this != (CF5MainFrmView *)0x0) {
                    /* inlined destructor: CF5MainFrmView::~CF5MainFrmView */
    this->vftablePtr = &_vftable_;
    operator_delete(this);
  }
  return true;
}



/* ---- CF5MainFrmView::Msg_GetWindow @ 60a0c060 size=47 ---- */

/* public: virtual int __thiscall CF5MainFrmView::Msg_GetWindow(struct IParam &) */

int __thiscall CF5MainFrmView::CF5MainFrmView__Msg_GetWindow(CF5MainFrmView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  CWnd *pCVar2;
  
                    /* 0xc060  237  ?Msg_GetWindow@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    pCVar2 = (CWnd *)0x0;
  }
  else {
    pCVar2 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  AddMetpWnd(param_1,"p043",pCVar2);
  return 0;
}



/* ---- GetMainWnd @ 60a0c090 size=21 ---- */

/* protected: class CF5MainFrmWnd * __thiscall CF5MainFrmView::GetMainWnd(void)const  */

CF5MainFrmWnd * __thiscall CF5MainFrmView::GetMainWnd(CF5MainFrmView *this)

{
  CWinThread *pCVar1;
  CF5MainFrmWnd *pCVar2;
  
                    /* 0xc090  192  ?GetMainWnd@CF5MainFrmView@@IBEPAVCF5MainFrmWnd@@XZ */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    return (CF5MainFrmWnd *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x60a0c0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CF5MainFrmWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  return pCVar2;
}



/* ---- CF5MainFrmView::OnClickMinimizeButton @ 60a0c0b0 size=48 ---- */

/* public: virtual int __thiscall CF5MainFrmView::OnClickMinimizeButton(struct IParam &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__OnClickMinimizeButton(CF5MainFrmView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  CWnd *this_00;
  
                    /* 0xc0b0  296  ?OnClickMinimizeButton@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    CWnd::ShowWindow((CWnd *)0x0,6);
    return 0;
  }
  this_00 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  CWnd::ShowWindow(this_00,6);
  return 0;
}



/* ---- CF5MainFrmView::Evt_GameView_OnDisplayModeChanged @ 60a0c0e0 size=54 ---- */

/* public: virtual int __thiscall CF5MainFrmView::Evt_GameView_OnDisplayModeChanged(struct IParam &)
    */

int __thiscall
CF5MainFrmView::CF5MainFrmView__Evt_GameView_OnDisplayModeChanged
          (CF5MainFrmView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  int *piVar2;
  
                    /* 0xc0e0  142
                       ?Evt_GameView_OnDisplayModeChanged@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    (**(code **)(iRam00000000 + 0x1bc))();
    return 0;
  }
  piVar2 = (int *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  (**(code **)(*piVar2 + 0x1bc))();
  return 0;
}



/* ---- CF5MainFrmView::Evt_Channel_OnChannelJoinCompleted @ 60a0c120 size=198 ---- */

/* public: virtual int __thiscall CF5MainFrmView::Evt_Channel_OnChannelJoinCompleted(struct IParam
   &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__Evt_Channel_OnChannelJoinCompleted
          (CF5MainFrmView *this,IParam *param_1)

{
  byte bVar1;
  SGlobalInfo *this_00;
  CMetpParserRet *this_01;
  byte *pbVar2;
  int iVar3;
  CWinThread *pCVar4;
  int *piVar5;
  byte *pbVar6;
  bool bVar7;
  NInfoTypes NVar8;
  char *pcVar9;
  byte local_c;
  undefined4 local_b;
  undefined1 local_7;
  undefined2 uStack_6;
  uint local_4;
  
                    /* 0xc120  136
                       ?Evt_Channel_OnChannelJoinCompleted@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  local_4 = DAT_60a24730 ^ (uint)&local_c;
  pcVar9 = "k23e";
  NVar8 = 4;
  local_c = 0;
  local_b = 0;
  local_7 = 0;
  this_00 = GInfo();
  this_01 = SGlobalInfo::MetpInfo(this_00,NVar8);
  pcVar9 = CMetpParserRet::GetString(this_01,pcVar9);
  strncpy_s((char *)&local_c,6,pcVar9,4);
  pbVar2 = &local_c;
  local_b = local_b & 0xffffff;
  pbVar6 = &DAT_60a15e20;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_60a0c1a0:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_60a0c1a5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_60a0c1a0;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_60a0c1a5:
  pCVar4 = AfxGetThread();
  if (pCVar4 == (CWinThread *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(**(code **)(*(int *)pCVar4 + 0x7c))();
  }
  (**(code **)(*piVar5 + 0x1c0))(iVar3 == 0);
  iVar3 = __security_check_cookie
                    (CONCAT22(uStack_6,CONCAT11(local_7,local_b._3_1_)) ^
                     (int)register0x00000010 - 0x10U);
  return iVar3;
}



/* ---- CF5MainFrmView::Evt_MainFrame_OnDestroy @ 60a0c1f0 size=96 ---- */

/* public: virtual int __thiscall CF5MainFrmView::Evt_MainFrame_OnDestroy(struct IParam &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__Evt_MainFrame_OnDestroy(CF5MainFrmView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  int iVar2;
  CWnd *this_00;
  
                    /* 0xc1f0  151  ?Evt_MainFrame_OnDestroy@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
    if (iVar2 != 0) {
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        this_00 = (CWnd *)0x0;
      }
      else {
        this_00 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      CWnd::ShowWindow(this_00,0);
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      PostMessageA(*(HWND *)(iVar2 + 0x20),0x10,0,0);
    }
  }
  return 0;
}



/* ---- CF5MainFrmView::Evt_MainFrame_OnShowWindow @ 60a0c250 size=447 ---- */

/* public: virtual int __thiscall CF5MainFrmView::Evt_MainFrame_OnShowWindow(struct IParam &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__Evt_MainFrame_OnShowWindow(CF5MainFrmView *this,IParam *param_1)

{
  bool bVar1;
  CWinThread *pCVar2;
  int iVar3;
  CWnd *pCVar4;
  int iVar5;
  undefined4 uStack_38;
  undefined4 local_30 [6];
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xc250  153  ?Evt_MainFrame_OnShowWindow@CF5MainFrmView@@UAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a13549;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_30;
  uStack_38 = (char *)(DAT_60a24730 ^ (uint)(local_30 + -1));
  ExceptionList = &local_c;
  local_30[0] = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a1654c,local_30);
  if (uStack_38 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(local_30 + -1),
               uStack_38);
    local_c = (void *)0x0;
    bVar1 = std::operator==<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (local_30 + -1),"minimize");
    if (bVar1) {
      iVar5 = 2;
    }
    else {
      bVar1 = std::operator==<char,std::char_traits<char>,std::allocator<char>_>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (local_30 + -1),"maximize");
      if (bVar1) {
        iVar5 = 3;
      }
      else {
        bVar1 = std::operator==<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (local_30 + -1),"restore");
        if (bVar1) {
          iVar5 = 9;
        }
        else {
          bVar1 = std::operator==<char,std::char_traits<char>,std::allocator<char>_>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (local_30 + -1),"show");
          if (bVar1) {
            iVar5 = 5;
          }
          else {
            bVar1 = std::operator==<char,std::char_traits<char>,std::allocator<char>_>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               (local_30 + -1),"hide");
            if (!bVar1) {
              local_c = (void *)0xffffffff;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (local_30 + -1));
              goto LAB_60a0c3f1;
            }
            iVar5 = 0;
          }
        }
      }
    }
    pCVar2 = AfxGetThread();
    if ((pCVar2 != (CWinThread *)0x0) &&
       (iVar3 = (**(code **)(*(int *)pCVar2 + 0x7c))(), iVar3 != 0)) {
      pCVar2 = AfxGetThread();
      if (pCVar2 == (CWinThread *)0x0) {
        pCVar4 = (CWnd *)0x0;
      }
      else {
        pCVar4 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x7c))();
      }
      CWnd::ShowWindow(pCVar4,iVar5);
    }
    if (((iVar5 == 5) || (iVar5 == 3)) || (iVar5 == 9)) {
      pCVar2 = AfxGetThread();
      if (pCVar2 == (CWinThread *)0x0) {
        pCVar4 = (CWnd *)0x0;
      }
      else {
        pCVar4 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x7c))();
      }
      CWnd::SetWindowPos(pCVar4,(CWnd *)wndTop_exref,0,0,0,0,3);
    }
    local_c = (void *)0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(local_30 + -1));
  }
LAB_60a0c3f1:
  ExceptionList = pvStack_14;
  iVar5 = __security_check_cookie(uStack_18 ^ (uint)&uStack_38);
  return iVar5;
}



/* ---- CF5MainFrmView::Evt_MainFrame_OnEnableWindow @ 60a0c410 size=103 ---- */

/* public: virtual int __thiscall CF5MainFrmView::Evt_MainFrame_OnEnableWindow(struct IParam &) */

int __thiscall
CF5MainFrmView::CF5MainFrmView__Evt_MainFrame_OnEnableWindow(CF5MainFrmView *this,IParam *param_1)

{
  CWinThread *pCVar1;
  CWnd *this_00;
  HWND pHVar2;
  char cStack_9;
  undefined4 uStack_4;
  
                    /* 0xc410  152  ?Evt_MainFrame_OnEnableWindow@CF5MainFrmView@@UAEHAAUIParam@@@Z
                        */
  uStack_4 = (uint)this & 0xffffff;
  (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a16ea0);
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    this_00 = (CWnd *)0x0;
  }
  else {
    this_00 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
    if (this_00 != (CWnd *)0x0) {
      CWnd::EnableWindow(this_00,(int)&uStack_4 + 3U >> 0x18);
    }
  }
  cStack_9 = (char)((int)&uStack_4 + 3U >> 0x18);
  if ((cStack_9 != '\0') && (this_00 != (CWnd *)0x0)) {
    pHVar2 = SetActiveWindow((HWND)this_00[8].CCmdTarget.CObject);
    CWnd::FromHandle(pHVar2);
  }
  return 0;
}



/* ---- scalar_deleting_destructor @ 60a0c480 size=18 ---- */

void __thiscall
CMFunctor<CF5MainFrmView>::scalar_deleting_destructor(CMFunctor<CF5MainFrmView> *this)

{
  if (this != (CMFunctor<CF5MainFrmView> *)0x0) {
                    /* inlined destructor: CMFunctor<CF5MainFrmView>::~CMFunctor<CF5MainFrmView> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CF5MainFrmView::OnAttached @ 60a0c4a0 size=1002 ---- */

/* public: virtual bool __thiscall CF5MainFrmView::OnAttached(void) */

bool __thiscall CF5MainFrmView::CF5MainFrmView__OnAttached(CF5MainFrmView *this)

{
  CWinThread *pCVar1;
  int iVar2;
  IFunctor *pIVar3;
  IGod *pIVar4;
  undefined4 *puVar5;
  
                    /* 0xc4a0  273  ?OnAttached@CF5MainFrmView@@UAE_NXZ */
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
    if (iVar2 != 0) {
      pIVar3 = operator_new(0xc);
      if (pIVar3 == (IFunctor *)0x0) {
        pIVar3 = (IFunctor *)0x0;
      }
      else {
        *(CMFunctor<CF5MainFrmView>_vftable **)pIVar3 = &CMFunctor<CF5MainFrmView>::vftable;
        *(CF5MainFrmView **)(pIVar3 + 4) = this;
        *(undefined1 **)(pIVar3 + 8) = &LAB_60a0c020;
      }
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      CFunctor::operator=((CFunctor *)(iVar2 + 0xe8),pIVar3);
      pIVar3 = operator_new(0xc);
      if (pIVar3 == (IFunctor *)0x0) {
        pIVar3 = (IFunctor *)0x0;
      }
      else {
        *(CMFunctor<CF5MainFrmView>_vftable **)pIVar3 = &CMFunctor<CF5MainFrmView>::vftable;
        *(CF5MainFrmView **)(pIVar3 + 4) = this;
        *(undefined1 **)(pIVar3 + 8) = &LAB_60a0c010;
      }
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      CFunctor::operator=((CFunctor *)(iVar2 + 0xec),pIVar3);
      pIVar3 = operator_new(0xc);
      if (pIVar3 == (IFunctor *)0x0) {
        pIVar3 = (IFunctor *)0x0;
      }
      else {
        *(CMFunctor<CF5MainFrmView>_vftable **)pIVar3 = &CMFunctor<CF5MainFrmView>::vftable;
        *(CF5MainFrmView **)(pIVar3 + 4) = this;
        *(undefined1 **)(pIVar3 + 8) = &LAB_60a08670;
      }
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      CFunctor::operator=((CFunctor *)(iVar2 + 0xf0),pIVar3);
      pIVar3 = operator_new(0xc);
      if (pIVar3 == (IFunctor *)0x0) {
        pIVar3 = (IFunctor *)0x0;
      }
      else {
        *(CMFunctor<CF5MainFrmView>_vftable **)pIVar3 = &CMFunctor<CF5MainFrmView>::vftable;
        *(CF5MainFrmView **)(pIVar3 + 4) = this;
        *(undefined1 **)(pIVar3 + 8) = &LAB_60a08680;
      }
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      CFunctor::operator=((CFunctor *)(iVar2 + 0xf4),pIVar3);
      pIVar3 = operator_new(0xc);
      if (pIVar3 == (IFunctor *)0x0) {
        pIVar3 = (IFunctor *)0x0;
      }
      else {
        *(CMFunctor<CF5MainFrmView>_vftable **)pIVar3 = &CMFunctor<CF5MainFrmView>::vftable;
        *(CF5MainFrmView **)(pIVar3 + 4) = this;
        *(undefined1 **)(pIVar3 + 8) = &LAB_60a0f3a0;
      }
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      CFunctor::operator=((CFunctor *)(iVar2 + 0xf8),pIVar3);
      pIVar3 = operator_new(0xc);
      if (pIVar3 == (IFunctor *)0x0) {
        pIVar3 = (IFunctor *)0x0;
      }
      else {
        *(CMFunctor<CF5MainFrmView>_vftable **)pIVar3 = &CMFunctor<CF5MainFrmView>::vftable;
        *(CF5MainFrmView **)(pIVar3 + 4) = this;
        *(undefined1 **)(pIVar3 + 8) = &LAB_60a10160;
      }
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      CFunctor::operator=((CFunctor *)(iVar2 + 0xfc),pIVar3);
      pIVar3 = operator_new(0xc);
      if (pIVar3 == (IFunctor *)0x0) {
        pIVar3 = (IFunctor *)0x0;
      }
      else {
        *(CMFunctor<CF5MainFrmView>_vftable **)pIVar3 = &CMFunctor<CF5MainFrmView>::vftable;
        *(CF5MainFrmView **)(pIVar3 + 4) = this;
        *(undefined1 **)(pIVar3 + 8) = &LAB_60a0c000;
      }
      pCVar1 = AfxGetThread();
      if (pCVar1 == (CWinThread *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
      }
      CFunctor::operator=((CFunctor *)(iVar2 + 0x100),pIVar3);
    }
  }
  pIVar4 = God();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &CMFunctor<CF5MainFrmView>::vftable;
    puVar5[1] = this;
    puVar5[2] = &LAB_60a10100;
  }
  (**(code **)(*(int *)pIVar4 + 8))("mainFrameView","getWindow",puVar5,1);
  pIVar4 = God();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &CMFunctor<CF5MainFrmView>::vftable;
    puVar5[1] = this;
    puVar5[2] = &LAB_60a08690;
  }
  (**(code **)(*(int *)pIVar4 + 0x14))("mainFrame","onShowWindow",puVar5,1);
  pIVar4 = God();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &CMFunctor<CF5MainFrmView>::vftable;
    puVar5[1] = this;
    puVar5[2] = &LAB_60a0f370;
  }
  (**(code **)(*(int *)pIVar4 + 0x14))("mainFrame","onEnableWindow",puVar5,1);
  pIVar4 = God();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &CMFunctor<CF5MainFrmView>::vftable;
    puVar5[1] = this;
    puVar5[2] = &LAB_60a057a0;
  }
  (**(code **)(*(int *)pIVar4 + 0x14))("gameView","onDisplayModeChanged",puVar5,1);
  pIVar4 = God();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &CMFunctor<CF5MainFrmView>::vftable;
    puVar5[1] = this;
    puVar5[2] = &LAB_60a10140;
  }
  (**(code **)(*(int *)pIVar4 + 0x1c))("mainFrame","onDestroy",puVar5,1);
  pIVar4 = God();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &CMFunctor<CF5MainFrmView>::vftable;
    puVar5[1] = this;
    puVar5[2] = &LAB_60a10110;
  }
  (**(code **)(*(int *)pIVar4 + 0x1c))("lobbyState","onStateChanged",puVar5,1);
  pIVar4 = God();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &CMFunctor<CF5MainFrmView>::vftable;
    puVar5[1] = this;
    puVar5[2] = &LAB_60a058d0;
  }
  (**(code **)(*(int *)pIVar4 + 0x1c))("channel","onChannelJoinComplete",puVar5,1);
  pIVar4 = God();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &CMFunctor<CF5MainFrmView>::vftable;
    puVar5[1] = this;
    puVar5[2] = &LAB_60a0f3a0;
  }
  (**(code **)(*(int *)pIVar4 + 0x14))("mainFrame","onClickAccuseButton",puVar5,1);
  return true;
}



/* ---- IsModal @ 60a0c890 size=4 ---- */

/* public: int __thiscall CF5DialogRoot::IsModal(void) */

int __thiscall CF5DialogRoot::IsModal(CF5DialogRoot *this)

{
                    /* 0xc890  214  ?IsModal@CF5DialogRoot@@QAEHXZ */
  return (this->CF5DialogRoot_data).offset_0x0;
}



/* ---- CF5DialogRoot::GetSplashCancelFnc @ 60a0c8a0 size=4 ---- */

/* public: virtual class CFunctor & __thiscall CF5DialogRoot::GetSplashCancelFnc(void) */

CFunctor * __thiscall CF5DialogRoot::CF5DialogRoot__GetSplashCancelFnc(CF5DialogRoot *this)

{
                    /* 0xc8a0  199  ?GetSplashCancelFnc@CF5DialogRoot@@UAEAAVCFunctor@@XZ */
  return (CFunctor *)&(this->CF5DialogRoot_data).offset_0x14;
}



/* ---- CF5DialogRoot @ 60a0c8b0 size=64 ---- */

/* public: __thiscall CF5DialogRoot::CF5DialogRoot(class CF5DialogRoot const &) */

CF5DialogRoot * __thiscall CF5DialogRoot::CF5DialogRoot(CF5DialogRoot *this,CF5DialogRoot *param_1)

{
                    /* 0xc8b0  20  ??0CF5DialogRoot@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5DialogRoot_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CF5DialogRoot_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CF5DialogRoot_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5DialogRoot_data).field_0xc,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x10));
  (this->CF5DialogRoot_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  (this->CF5DialogRoot_data).offset_0x14 = *(undefined4 *)(param_1 + 0x18);
  return this;
}



/* ---- operator= @ 60a0c8f0 size=58 ---- */

/* public: class CF5DialogRoot & __thiscall CF5DialogRoot::operator=(class CF5DialogRoot const &) */

CF5DialogRoot * __thiscall CF5DialogRoot::operator=(CF5DialogRoot *this,CF5DialogRoot *param_1)

{
                    /* 0xc8f0  58  ??4CF5DialogRoot@@QAEAAV0@ABV0@@Z */
  (this->CF5DialogRoot_data).offset_0x0 = *(undefined4 *)(param_1 + 4);
  (this->CF5DialogRoot_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->CF5DialogRoot_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5DialogRoot_data).field_0xc,
             (CStringT<char,class_StrTraitMFC_DLL<char,class_ATL::ChTraitsCRT<char>_>_> *)
             (param_1 + 0x10));
  (this->CF5DialogRoot_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  (this->CF5DialogRoot_data).offset_0x14 = *(undefined4 *)(param_1 + 0x18);
  return (CF5DialogRoot *)this;
}



/* ---- scalar_deleting_destructor @ 60a0c930 size=82 ---- */

CF5DialogRoot * __thiscall
CF5DialogRoot::scalar_deleting_destructor(CF5DialogRoot *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5DialogRoot(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5DialogRoot *)this;
  }
  puVar1 = &this[-1].CF5DialogRoot_data.offset_0x14;
  _eh_vector_destructor_iterator_(this,0x1c,this[-1].CF5DialogRoot_data.offset_0x14,~CF5DialogRoot);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5DialogRoot *)puVar1;
}



/* ---- scalar_deleting_destructor @ 60a0c990 size=82 ---- */

CF5DialogList * __thiscall
CF5DialogList::scalar_deleting_destructor(CF5DialogList *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5DialogList(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5DialogList *)this;
  }
  puVar1 = &this[-1].
            CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
            .offset_0x18;
  _eh_vector_destructor_iterator_
            (this,0x24,
             this[-1].
             CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
             .offset_0x18,~CF5DialogList);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5DialogList *)puVar1;
}



/* ---- _GetBaseClass @ 60a0c9f0 size=5 ---- */

/* protected: static struct CRuntimeClass * __stdcall CF5MainFrmWnd::_GetBaseClass(void) */

CRuntimeClass * CF5MainFrmWnd::_GetBaseClass(void)

{
  CRuntimeClass *pCVar1;
  
                    /* 0xc9f0  400  ?_GetBaseClass@CF5MainFrmWnd@@KGPAUCRuntimeClass@@XZ */
                    /* WARNING: Could not recover jumptable at 0x60a11864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CFrameWnd::GetThisClass();
  return pCVar1;
}



/* ---- CF5MainFrmWnd::GetRuntimeClass @ 60a0ca00 size=6 ---- */

/* public: virtual struct CRuntimeClass * __thiscall CF5MainFrmWnd::GetRuntimeClass(void)const  */

CRuntimeClass * __thiscall CF5MainFrmWnd::CF5MainFrmWnd__GetRuntimeClass(CF5MainFrmWnd *this)

{
                    /* 0xca00  198  ?GetRuntimeClass@CF5MainFrmWnd@@UBEPAUCRuntimeClass@@XZ
                       0xca00  200  ?GetThisClass@CF5MainFrmWnd@@SGPAUCRuntimeClass@@XZ */
  return (CRuntimeClass *)&classCF5MainFrmWnd;
}



/* ---- CAdFileDownload @ 60a0ca10 size=275 ---- */

/* public: __thiscall CF5MainFrmWnd::CF5MainFrmWnd(void) */

CAdFileDownload * __thiscall CAdFileDownload::CAdFileDownload(CAdFileDownload *this)

{
  CAdFileDownload_vftable *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xca10  28  ??0CF5MainFrmWnd@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a135fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CFrameWnd::CFrameWnd((CFrameWnd *)this);
  local_4 = 0;
                    /* inlined constructor: CF5MainFrmWnd::CF5MainFrmWnd */
  this->vftablePtr = (CAdFileDownload_vftable *)&CF5MainFrmWnd::_vftable_;
  CFunctor::CFunctor((CFunctor *)(this + 0x3a));
  local_4._0_1_ = 1;
  CFunctor::CFunctor((CFunctor *)(this + 0x3b));
  local_4._0_1_ = 2;
  CFunctor::CFunctor((CFunctor *)(this + 0x3c));
  local_4._0_1_ = 3;
  CFunctor::CFunctor((CFunctor *)(this + 0x3d));
  local_4._0_1_ = 4;
  CFunctor::CFunctor((CFunctor *)(this + 0x3e));
  local_4._0_1_ = 5;
  CFunctor::CFunctor((CFunctor *)(this + 0x3f));
  local_4._0_1_ = 6;
  CFunctor::CFunctor((CFunctor *)(this + 0x40));
  local_4._0_1_ = 7;
  this[0x42].vftablePtr = (CAdFileDownload_vftable *)0x0;
  this[0x107].vftablePtr = (CAdFileDownload_vftable *)0x0;
  this_00 = operator_new(0x794);
  local_4 = CONCAT31(local_4._1_3_,8);
  if (this_00 == (CAdFileDownload_vftable *)0x0) {
    this[0x42].vftablePtr = (CAdFileDownload_vftable *)0x0;
    ExceptionList = local_c;
    return this;
  }
  ::CAdFileDownload::CAdFileDownload((CAdFileDownload *)this_00);
  this_00->deleting_destructor = (deleting_destructor *)&vftable;
  this[0x42].vftablePtr = this_00;
  ExceptionList = local_c;
  return this;
}



/* ---- scalar_deleting_destructor @ 60a0cb30 size=31 ---- */

CAdFileDownload * __thiscall
CAdFileDownload::scalar_deleting_destructor(CAdFileDownload *this,byte param_1)

{
  ::CAdFileDownload::~CAdFileDownload(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CAdFileDownload *)this;
}



/* ---- ~CF5MainFrmWnd @ 60a0cb50 size=203 ---- */

/* public: virtual __thiscall CF5MainFrmWnd::~CF5MainFrmWnd(void) */

void __thiscall CF5MainFrmWnd::~CF5MainFrmWnd(CF5MainFrmWnd *this)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xcb50  46  ??1CF5MainFrmWnd@@UAE@XZ */
  puStack_8 = &LAB_60a13691;
  local_c = ExceptionList;
  uVar2 = DAT_60a24730 ^ (uint)(auStack_e + -10);
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  puVar1 = (this->CF5MainFrmWnd_data).offset_0x104;
  local_4 = 7;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar2);
  }
  local_4._0_1_ = 6;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MainFrmWnd_data).field_0xfc);
  local_4._0_1_ = 5;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MainFrmWnd_data).field_0xf8);
  local_4._0_1_ = 4;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MainFrmWnd_data).field_0xf4);
  local_4._0_1_ = 3;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MainFrmWnd_data).field_0xf0);
  local_4._0_1_ = 2;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MainFrmWnd_data).field_0xec);
  local_4._0_1_ = 1;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MainFrmWnd_data).field_0xe8);
  local_4 = (uint)local_4._1_3_ << 8;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MainFrmWnd_data).field_0xe4);
  local_4 = 0xffffffff;
  CFrameWnd::~CFrameWnd((CFrameWnd *)this);
  ExceptionList = local_c;
  return;
}



/* ---- CF5MainFrmWnd::PreCreateWindow @ 60a0cc20 size=8 ---- */

/* public: virtual int __thiscall CF5MainFrmWnd::PreCreateWindow(struct tagCREATESTRUCTA &) */

int __thiscall
CF5MainFrmWnd::CF5MainFrmWnd__PreCreateWindow(CF5MainFrmWnd *this,tagCREATESTRUCTA *param_1)

{
                    /* 0xcc20  355  ?PreCreateWindow@CF5MainFrmWnd@@UAEHAAUtagCREATESTRUCTA@@@Z */
  return 1;
}



/* ---- CF5MainFrmWnd::WindowProc @ 60a0cc30 size=117 ---- */

/* public: virtual long __thiscall CF5MainFrmWnd::WindowProc(unsigned int,unsigned int,long) */

long __thiscall
CF5MainFrmWnd::CF5MainFrmWnd__WindowProc(CF5MainFrmWnd *this,uint param_1,uint param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
                    /* 0xcc30  398  ?WindowProc@CF5MainFrmWnd@@UAEJIIJ@Z */
  if ((param_1 == 0xfc3) &&
     (puVar1 = (this->CF5MainFrmWnd_data).offset_0x104, puVar1 != (undefined4 *)0x0)) {
    strcpy_s(&(this->CF5MainFrmWnd_data).field_0x314,0x104,(char *)(puVar1 + 0xe1));
    strcpy_s(&(this->CF5MainFrmWnd_data).field_0x10c,0x208,
             (char *)((this->CF5MainFrmWnd_data).offset_0x104 + 0x163));
    (*this->vftablePtr->CreateCaptionButtons)(this);
  }
  lVar2 = CWnd::WindowProc((CWnd *)this,param_1,param_2,param_3);
  return lVar2;
}



/* ---- CF5MainFrmWnd::GetTicket @ 60a0ccb0 size=57 ---- */

/* public: virtual void __thiscall CF5MainFrmWnd::GetTicket(int) */

void __thiscall CF5MainFrmWnd::CF5MainFrmWnd__GetTicket(CF5MainFrmWnd *this,int param_1)

{
  IGod *pIVar1;
  
                    /* 0xccb0  203  ?GetTicket@CF5MainFrmWnd@@UAEXH@Z */
  if (param_1 == 0) {
    pIVar1 = God();
    (**(code **)(*(int *)pIVar1 + 0x10))
              ("gameWarp","requestTicketFromGameStringServer",Void_exref,1);
  }
  *(int *)&(this->CF5MainFrmWnd_data).field_0x100 = param_1;
  return;
}



/* ---- CF5MainFrmWnd::PreTranslateMessage @ 60a0ccf0 size=416 ---- */

/* public: virtual int __thiscall CF5MainFrmWnd::PreTranslateMessage(struct tagMSG *) */

int __thiscall
CF5MainFrmWnd::CF5MainFrmWnd__PreTranslateMessage(CF5MainFrmWnd *this,tagMSG *param_1)

{
  byte bVar1;
  SHORT SVar2;
  uint uVar3;
  IGod *pIVar4;
  byte *pbVar5;
  CF5GameWnd *pCVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 uStack_98;
  CParam local_94 [132];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xccf0  356  ?PreTranslateMessage@CF5MainFrmWnd@@UAEHPAUtagMSG@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a136bc;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)&uStack_98;
  uVar3 = DAT_60a24730 ^ (uint)(local_94 + -0xc);
  ExceptionList = &local_c;
  if (param_1->message == 0x104) {
    SVar2 = VkKeyScanA((CHAR)param_1->wParam);
    if ((SVar2 == 0x53) && (param_1->wParam == 0x73)) {
      if ((this->CF5MainFrmWnd_data).offset_0x418 != 0) {
        (**(code **)(*(int *)(this->CF5MainFrmWnd_data).offset_0x418 + 0x10))(2);
        goto LAB_60a0ce68;
      }
      CParam::CParam(local_94,false);
      local_4 = 0;
      pIVar4 = God();
      iVar7 = (**(code **)(*(int *)pIVar4 + 0x10))("lobbyState","queryState",local_94,1,uVar3);
      if (iVar7 < 0) {
        local_4 = 0xffffffff;
        CParam::~CParam(local_94);
        goto LAB_60a0ce60;
      }
      uStack_98 = (byte *)0x0;
      CParam::GetValue(local_94,"p008",(char **)&uStack_98);
      pbVar8 = &DAT_60a15d8c;
      pbVar5 = uStack_98;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_60a0ce07:
          iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_60a0ce0c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_60a0ce07;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_60a0ce0c:
      if (iVar7 == 0) {
        pCVar6 = AfxGetGameWnd();
        iVar7 = (**(code **)(*(int *)pCVar6 + 0x20))();
        if (iVar7 == 0) goto LAB_60a0ce22;
      }
      else {
LAB_60a0ce22:
        CFunctor::Call((CFunctor *)&(this->CF5MainFrmWnd_data).field_0xe8,(IParam *)local_94);
      }
      local_4 = 0xffffffff;
      CParam::~CParam(local_94);
      goto LAB_60a0ce68;
    }
  }
LAB_60a0ce60:
  CFrameWnd::PreTranslateMessage((CFrameWnd *)this,param_1);
LAB_60a0ce68:
  ExceptionList = local_c;
  iVar7 = __security_check_cookie(local_10 ^ (uint)&uStack_98);
  return iVar7;
}



/* ---- GetCurModalDlg @ 60a0ce90 size=7 ---- */

/* public: class CF5DialogRoot * __thiscall CF5MainFrmWnd::GetCurModalDlg(void)const  */

CF5DialogRoot * __thiscall CF5MainFrmWnd::GetCurModalDlg(CF5MainFrmWnd *this)

{
                    /* 0xce90  185  ?GetCurModalDlg@CF5MainFrmWnd@@QBEPAVCF5DialogRoot@@XZ */
  return (CF5DialogRoot *)(this->CF5MainFrmWnd_data).offset_0x418;
}



/* ---- SetCurModalDlg @ 60a0cea0 size=13 ---- */

/* public: void __thiscall CF5MainFrmWnd::SetCurModalDlg(class CF5DialogRoot *) */

void __thiscall CF5MainFrmWnd::SetCurModalDlg(CF5MainFrmWnd *this,CF5DialogRoot *param_1)

{
                    /* 0xcea0  381  ?SetCurModalDlg@CF5MainFrmWnd@@QAEXPAVCF5DialogRoot@@@Z */
  (this->CF5MainFrmWnd_data).offset_0x418 = param_1;
  return;
}



/* ---- OnHanNotify @ 60a0ceb0 size=683 ---- */

/* public: long __thiscall CF5MainFrmWnd::OnHanNotify(unsigned int,long) */

long __thiscall CF5MainFrmWnd::OnHanNotify(CF5MainFrmWnd *this,uint param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  UINT UVar3;
  byte *pbVar4;
  int iVar5;
  IGod *pIVar6;
  CWnd *pCVar7;
  uchar *puVar8;
  long lVar9;
  byte *pbVar10;
  CParam *this_00;
  bool bVar11;
  undefined4 local_21c;
  CParam local_218 [132];
  CParam aCStack_194 [132];
  byte local_110 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xceb0  334  ?OnHanNotify@CF5MainFrmWnd@@QAEJIJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13708;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)&local_21c;
  uVar2 = DAT_60a24730 ^ (uint)(local_218 + -0xc);
  ExceptionList = &local_c;
  local_110[0] = 0;
  memset(local_110 + 1,0,0xff);
  UVar3 = GlobalGetAtomNameA((ATOM)param_1,(LPSTR)local_110,0xff);
  if (UVar3 != 0) {
    GlobalDeleteAtom((ATOM)param_1);
    pbVar10 = &DAT_60a17194;
    pbVar4 = local_110;
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_60a0cf60:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_60a0cf65;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_60a0cf60;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_60a0cf65:
    if (iVar5 == 0) {
      pIVar6 = God();
      (**(code **)(*(int *)pIVar6 + 0x20))("channelView","onGetItemState",Void_exref,0);
    }
    else {
      pbVar10 = &DAT_60a1718c;
      pbVar4 = local_110;
      do {
        bVar1 = *pbVar4;
        bVar11 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_60a0cfc0:
          pCVar7 = (CWnd *)((1 - (uint)bVar11) - (uint)(bVar11 != 0));
          goto LAB_60a0cfc5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_60a0cfc0;
        pbVar4 = pbVar4 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      pCVar7 = (CWnd *)0x0;
LAB_60a0cfc5:
      if (pCVar7 == (CWnd *)0x0) {
        local_21c = pCVar7;
        CParam::CParam(local_218,false);
        local_4 = 0;
        pIVar6 = God();
        (**(code **)(*(int *)pIVar6 + 0x10))("channelView","getWindow",local_218,1);
        GetMetpWnd((IParam *)local_218,"p043",(CWnd **)&local_21c);
        if (local_21c != (CWnd *)0x0) {
          CFunctor::Call((CFunctor *)(local_21c + 0x48),(IParam *)Void_exref);
        }
        this_00 = local_218;
      }
      else {
        pbVar10 = &DAT_60a17184;
        pbVar4 = local_110;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_60a0d068:
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_60a0d06d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_60a0d068;
          pbVar4 = pbVar4 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_60a0d06d:
        if (iVar5 == 0) {
          pIVar6 = God();
          (**(code **)(*(int *)pIVar6 + 0x10))("channel","onSendCouponUsed",Void_exref,1,uVar2);
        }
        puVar8 = _mbsstr(local_110,(uchar *)"nc20e");
        if (puVar8 == (uchar *)0x0) goto LAB_60a0d133;
        puVar8 = _mbschr(local_110,0x26);
        CParam::CParam(aCStack_194,false);
        local_4 = 1;
        if (puVar8 != (uchar *)0x0) {
          CParam::AddValue(aCStack_194,"k41e",(char *)(puVar8 + 1));
        }
        pIVar6 = God();
        (**(code **)(*(int *)pIVar6 + 0x10))("channel","hannotiCommonCode",aCStack_194,1);
        this_00 = aCStack_194;
      }
      local_4 = 0xffffffff;
      CParam::~CParam(this_00);
    }
  }
LAB_60a0d133:
  ExceptionList = local_c;
  lVar9 = __security_check_cookie(local_10 ^ (uint)&local_21c);
  return lVar9;
}



/* ---- CF5MainFrmWnd::Reg_LoadFullScreenSetting @ 60a0d160 size=13 ---- */

/* public: virtual void __thiscall CF5MainFrmWnd::Reg_LoadFullScreenSetting(unsigned long) */

void __thiscall
CF5MainFrmWnd::CF5MainFrmWnd__Reg_LoadFullScreenSetting(CF5MainFrmWnd *this,ulong param_1)

{
                    /* 0xd160  364  ?Reg_LoadFullScreenSetting@CF5MainFrmWnd@@UAEXK@Z */
  *(ulong *)&(this->CF5MainFrmWnd_data).field_0x108 = param_1;
  return;
}



/* ---- RegWork_SaveFullScreenSetting @ 60a0d170 size=161 ---- */

/* private: void __thiscall CF5MainFrmWnd::RegWork_SaveFullScreenSetting(void) */

void __thiscall CF5MainFrmWnd::RegWork_SaveFullScreenSetting(CF5MainFrmWnd *this)

{
  CGameReg local_11c [268];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd170  363  ?RegWork_SaveFullScreenSetting@CF5MainFrmWnd@@AAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a1374c;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_11c;
  ExceptionList = &local_c;
  CGameReg::CGameReg(local_11c,1);
  local_4 = 0;
  CGameReg::Set(local_11c,"FullScreen",*(ulong *)&(this->CF5MainFrmWnd_data).field_0x108);
  local_4 = 0xffffffff;
  CGameReg::~CGameReg(local_11c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_11c);
  return;
}



/* ---- Map @ 60a0d220 size=4 ---- */

/* public: class std::map<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class CF5DialogRoot *,struct std::less<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
   CF5DialogRoot *> > > & __thiscall CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *>::Map(void) */

map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CF5DialogRoot*>_>_>
* __thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
Map(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
    *this)

{
                    /* 0xd220  222
                       ?Map@?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAEAAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@std@@@2@@std@@XZ
                        */
  return (map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,CF5DialogRoot*>_>_>
          *)&this->
             tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  ;
}



/* ---- ~basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 60a0d230 size=6 ---- */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
~basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a0d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  return;
}



/* ---- FUN_60a0d240 @ 60a0d240 size=28 ---- */

void __cdecl FUN_60a0d240(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(char *)(iVar1 + 0x2d) == '\0') {
    do {
      iVar1 = *(int *)(iVar1 + 8);
    } while (*(char *)(iVar1 + 0x2d) == '\0');
  }
  return;
}



/* ---- FUN_60a0d260 @ 60a0d260 size=27 ---- */

void __cdecl FUN_60a0d260(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x2d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}



/* ---- FUN_60a0d280 @ 60a0d280 size=78 ---- */

void __thiscall FUN_60a0d280(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)((int)this + 0x18) + 4)) {
    *(int **)(*(int *)((int)this + 0x18) + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}



/* ---- FUN_60a0d2d0 @ 60a0d2d0 size=82 ---- */

void __thiscall FUN_60a0d2d0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)((int)this + 0x18) + 4)) {
    *(int *)(*(int *)((int)this + 0x18) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



/* ---- FUN_60a0d330 @ 60a0d330 size=100 ---- */

void FUN_60a0d330(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  undefined4 *in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60a13788;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (in_stack_00000020 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    (**(code **)*in_stack_00000020)(1,DAT_60a24730 ^ (uint)&local_c);
  }
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- scalar_deleting_destructor @ 60a0d3b0 size=85 ---- */

CF5MainFrmWnd * __thiscall
CF5MainFrmWnd::scalar_deleting_destructor(CF5MainFrmWnd *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CF5MainFrmWnd(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CF5MainFrmWnd *)this;
  }
  puVar1 = &this[-1].CF5MainFrmWnd_data.offset_0x418;
  _eh_vector_destructor_iterator_
            (this,0x420,this[-1].CF5MainFrmWnd_data.offset_0x418,~CF5MainFrmWnd);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CF5MainFrmWnd *)puVar1;
}



/* ---- OnCreate @ 60a0d410 size=159 ---- */

/* public: int __thiscall CF5MainFrmWnd::OnCreate(struct tagCREATESTRUCTA *) */

int __thiscall CF5MainFrmWnd::OnCreate(CF5MainFrmWnd *this,tagCREATESTRUCTA *param_1)

{
  char cVar1;
  int iVar2;
  SGlobalInfo *pSVar3;
  CMetpParserRet *pCVar4;
  CMetpParser *pCVar5;
  NInfoTypes NVar6;
  
                    /* 0xd410  314  ?OnCreate@CF5MainFrmWnd@@QAEHPAUtagCREATESTRUCTA@@@Z */
  iVar2 = CFrameWnd::OnCreate((CFrameWnd *)this,param_1);
  if (iVar2 == -1) {
    return -1;
  }
  NVar6 = 2;
  pSVar3 = GInfo();
  pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar6);
  pCVar5 = CMetpParserRet::ParserPtr(pCVar4);
  cVar1 = (**(code **)(*(int *)pCVar5 + 0x18))("k301e");
  if (cVar1 != '\0') {
    (*this->vftablePtr->RefreshCookie)(this);
  }
  NVar6 = 2;
  pSVar3 = GInfo();
  pCVar4 = SGlobalInfo::MetpInfo(pSVar3,NVar6);
  pCVar5 = CMetpParserRet::ParserPtr(pCVar4);
  cVar1 = (**(code **)(*(int *)pCVar5 + 0x18))("k300e");
  if (cVar1 != '\0') {
    *(undefined4 *)&(this->CF5MainFrmWnd_data).field_0x100 = 1;
    SetTimer(*(HWND *)&(this->CF5MainFrmWnd_data).field_0x1c,400,120000,(TIMERPROC)0x0);
  }
  return 0;
}



/* ---- OnDestroy @ 60a0d4b0 size=16 ---- */

/* public: void __thiscall CF5MainFrmWnd::OnDestroy(void) */

void __thiscall CF5MainFrmWnd::OnDestroy(CF5MainFrmWnd *this)

{
                    /* 0xd4b0  321  ?OnDestroy@CF5MainFrmWnd@@QAEXXZ */
  RegWork_SaveFullScreenSetting(this);
  CFrameWnd::OnDestroy((CFrameWnd *)this);
  return;
}



/* ---- CF5MainFrmWnd::RefreshCookie @ 60a0d4c0 size=1258 ---- */

/* public: virtual void __thiscall CF5MainFrmWnd::RefreshCookie(void) */

void __thiscall CF5MainFrmWnd::CF5MainFrmWnd__RefreshCookie(CF5MainFrmWnd *this)

{
  char cVar1;
  SGlobalInfo *pSVar2;
  CMetpParserRet *pCVar3;
  CMetpParser *pCVar4;
  int iVar5;
  CHttpConnection *this_00;
  CHttpFile *this_01;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_02;
  ulong uVar6;
  bool bVar7;
  ushort uVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  NInfoTypes NVar14;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_570 [4];
  CSimpleStringT<char,1> aCStack_55c [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_55a [2];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_558 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_554 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_550 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> local_54c [4];
  undefined4 local_548;
  ulong uStack_544;
  undefined4 local_540;
  char acStack_53c [4];
  CInternetSession aCStack_538 [4];
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_534 [4];
  CInternetSession aCStack_530 [20];
  CGameFinder aCStack_51c [252];
  char acStack_420 [1036];
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd4c0  359  ?RefreshCookie@CF5MainFrmWnd@@UAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13827;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_60a24730 ^ (uint)aCStack_55c);
  ExceptionList = &local_c;
  KillTimer(*(HWND *)&(this->CF5MainFrmWnd_data).field_0x1c,500);
  SetTimer(*(HWND *)&(this->CF5MainFrmWnd_data).field_0x1c,500,180000,(TIMERPROC)0x0);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_54c);
  local_4 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_548);
  local_4._0_1_ = 1;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_558,"Accept: */*\r\n");
  local_4 = CONCAT31(local_4._1_3_,2);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
            (local_558,"Content-Type: application/x-www-form-urlencoded;\r\n");
  NVar14 = 0;
  local_540 = 0;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar14);
  pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
  cVar1 = (**(code **)(*(int *)pCVar4 + 0x18))(&DAT_60a160b0);
  if (cVar1 != '\0') {
    NVar14 = 0;
    pSVar2 = GInfo();
    pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar14);
    pCVar4 = CMetpParserRet::ParserPtr(pCVar3);
    (**(code **)(*(int *)pCVar4 + 100))(&DAT_60a160b0,&uStack_544);
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_55c + -4));
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  CGameFinder::CGameFinder(aCStack_51c);
  iVar5 = CGameFinder::isGostopKind(aCStack_51c);
  if (((iVar5 == 0) && (iVar5 = CGameFinder::isPokerKind(aCStack_51c), iVar5 == 0)) &&
     (iVar5 = CGameFinder::isNewHoola(aCStack_51c), iVar5 == 0)) {
    switch(uStack_544) {
    case 0:
      pcVar13 = "http://kiwi2.hangame.com/identifier/refresh.nhn";
      break;
    case 1:
      pcVar13 = "http://dev-kiwi2.hangame.com/identifier/refresh.nhn";
      break;
    case 2:
      pcVar13 = "http://dev-kiwi2.hangame.com/gstr/cocas/get.nhn";
      break;
    case 3:
      pcVar13 = "http://alpha-kiwi2.hangame.com/identifier/refresh.nhn";
      break;
    case 4:
    case 5:
      pcVar13 = "http://alpha-kiwi2.hangame.com/gstr/cocas/get.nhn";
      break;
    default:
      goto switchD_60a0d610_default;
    }
  }
  else {
    switch(uStack_544) {
    case 0:
      pcVar13 = "http://kiwi.hangame.com/identifier/refresh.nhn";
      break;
    case 1:
      pcVar13 = "http://dev-kiwi.hangame.com/identifier/refresh.nhn";
      break;
    case 2:
      pcVar13 = "http://dev-kiwi.hangame.com/gstr/cocas/get.nhn";
      break;
    case 3:
      pcVar13 = "http://alpha-kiwi.hangame.com/identifier/refresh.nhn";
      break;
    case 4:
    case 5:
      pcVar13 = "http://alpha-kiwi.hangame.com/gstr/cocas/get.nhn";
      break;
    default:
      goto switchD_60a0d610_default;
    }
  }
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator=
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_55c + -4),
             pcVar13);
  local_548 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Tokenize
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_55c + -4),
             (char *)aCStack_534,(int *)&DAT_60a171e4);
  local_c = (void *)CONCAT31(local_c._1_3_,4);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Tokenize
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_55c + -8),
             acStack_53c,(int *)&DAT_60a171e0);
  local_10._0_1_ = 5;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Tokenize
            (aCStack_570 + 8,(char *)&local_548,(int *)&PTR_60a15dfc);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_55c + -4));
  pcVar13 = "k301e";
  NVar14 = 2;
  uStack_14 = CONCAT31(uStack_14._1_3_,7);
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar14);
  CMetpParserRet::GetString(pCVar3,pcVar13);
  bVar7 = false;
  pSVar2 = GInfo();
  SGlobalInfo::GetGameId(pSVar2,bVar7);
  pcVar13 = "k3e";
  NVar14 = 0;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar14);
  CMetpParserRet::GetString(pCVar3,pcVar13);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
            (this_02,(char *)(aCStack_55c + -4));
  CInternetSession::CInternetSession(aCStack_538,(char *)0x0,1,0,(char *)0x0,(char *)0x0,0);
  pcVar11 = (char *)0x0;
  pcVar10 = (char *)0x0;
  uVar8 = 0;
  local_10 = (void *)CONCAT31(local_10._1_3_,8);
  pcVar13 = ATL::CSimpleStringT<char,1>::operator_char_const_((CSimpleStringT<char,1> *)&local_540);
  this_00 = CInternetSession::GetHttpConnection(aCStack_538,pcVar13,uVar8,pcVar10,pcVar11);
  if (this_00 != (CHttpConnection *)0x0) {
    uVar12 = 0x20000000;
    pcVar11 = (char *)0x0;
    ppcVar9 = (char **)0x0;
    uVar6 = 1;
    pcVar10 = (char *)0x0;
    pcVar13 = ATL::CSimpleStringT<char,1>::operator_char_const_
                        ((CSimpleStringT<char,1> *)&local_548);
    this_01 = CHttpConnection::OpenRequest(this_00,0,pcVar13,pcVar10,uVar6,ppcVar9,pcVar11,uVar12);
    if (this_01 != (CHttpFile *)0x0) {
      CHttpFile::AddRequestHeaders
                (this_01,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                         (aCStack_55c + -8),0x10000000);
      uVar6 = ATL::CSimpleStringT<char,1>::GetLength(aCStack_55c);
      pcVar13 = ATL::CSimpleStringT<char,1>::operator_char_const_(aCStack_55c);
      iVar5 = CHttpFile::SendRequest
                        (this_01,(CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                                 (aCStack_55c + -8),pcVar13,uVar6);
      if (iVar5 != 0) {
        uStack_544 = 0;
        CHttpFile::QueryInfoStatusCode(this_01,&uStack_544);
        if (uStack_544 == 200) {
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                     (aCStack_55c + -4));
          local_10 = (void *)CONCAT31(local_10._1_3_,9);
          acStack_420[0] = '\0';
          memset(acStack_420 + 1,0,0x400);
          memset(acStack_420,0,0x3e9);
          iVar5 = (**(code **)(*(int *)this_01 + 0x3c))(acStack_420,0x400);
          acStack_420[iVar5] = '\0';
          while (iVar5 != 0) {
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::operator+=
                      ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                       (aCStack_55c + -4),acStack_420);
            memset(acStack_420,0,0x3e9);
            iVar5 = (**(code **)(*(int *)this_01 + 0x3c))(acStack_420,0x400);
            acStack_420[iVar5] = '\0';
          }
          iVar5 = ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Compare
                            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                             (aCStack_55c + -4),(char *)&PTR_60a15dfc);
          if (iVar5 != 0) {
            pcVar13 = ATL::CSimpleStringT<char,1>::operator_char_const_(aCStack_55c + -4);
            pcVar10 = "k301e";
            NVar14 = 2;
            pSVar2 = GInfo();
            pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar14);
            CMetpParserRet::SetString(pCVar3,pcVar10,pcVar13);
          }
          local_10 = (void *)CONCAT31(local_10._1_3_,8);
          ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
          ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
                    ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
                     (aCStack_55c + -4));
        }
      }
      (**(code **)(*(int *)this_01 + 0x54))();
      (**(code **)(*(int *)this_01 + 4))(1);
      (**(code **)(*(int *)this_00 + 0x14))();
      (**(code **)(*(int *)this_00 + 4))(1);
    }
    CInternetSession::Close(aCStack_530);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
  CInternetSession::~CInternetSession(aCStack_530);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_554);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)&local_540);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)aCStack_538);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_534);
switchD_60a0d610_default:
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_55c + -4));
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)aCStack_55c);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(local_54c);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_550);
  ExceptionList = local_10;
  __security_check_cookie(uStack_14 ^ (uint)(aCStack_55c + -4));
  return;
}



/* ---- CF5MainFrmWnd::DisplayAdWnd @ 60a0d9e0 size=87 ---- */

/* public: virtual void __thiscall CF5MainFrmWnd::DisplayAdWnd(void) */

void __thiscall CF5MainFrmWnd::CF5MainFrmWnd__DisplayAdWnd(CF5MainFrmWnd *this)

{
  HWND__ *pHVar1;
  SGlobalInfo *this_00;
  CCfgSetting *pCVar2;
  
                    /* 0xd9e0  96  ?DisplayAdWnd@CF5MainFrmWnd@@UAEXXZ */
  KillTimer(*(HWND *)&(this->CF5MainFrmWnd_data).field_0x1c,300);
  SetTimer(*(HWND *)&(this->CF5MainFrmWnd_data).field_0x1c,300,1200000,(TIMERPROC)0x0);
  if ((this->CF5MainFrmWnd_data).offset_0x104 != (undefined4 *)0x0) {
    pHVar1 = *(HWND__ **)&(this->CF5MainFrmWnd_data).field_0x1c;
    this_00 = GInfo();
    pCVar2 = SGlobalInfo::CfgSetting(this_00);
    CAdFileDownload::AdFileDownloadThread
              ((CAdFileDownload *)(this->CF5MainFrmWnd_data).offset_0x104,pHVar1,
               (char *)(pCVar2 + 8));
  }
  return;
}



/* ---- OnClose @ 60a0da40 size=35 ---- */

/* public: void __thiscall CF5MainFrmWnd::OnClose(void) */

void __thiscall CF5MainFrmWnd::OnClose(CF5MainFrmWnd *this)

{
                    /* 0xda40  310  ?OnClose@CF5MainFrmWnd@@QAEXXZ */
  if ((this->CF5MainFrmWnd_data).offset_0x104 != (undefined4 *)0x0) {
    KillTimer(*(HWND *)&(this->CF5MainFrmWnd_data).field_0x1c,300);
  }
  CFrameWnd::OnClose((CFrameWnd *)this);
  return;
}



/* ---- FUN_60a0da70 @ 60a0da70 size=108 ---- */

void __fastcall FUN_60a0da70(int *param_1)

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



/* ---- FUN_60a0dae0 @ 60a0dae0 size=70 ---- */

undefined4 * __thiscall
FUN_60a0dae0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)((int)this + 0x18);
  puVar3 = (undefined4 *)puVar2[1];
  if (*(char *)((int)puVar3 + 0x2d) == '\0') {
    do {
      bVar1 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (puVar3 + 3),param_1);
      if (bVar1) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar2 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0x2d) == '\0');
  }
  return puVar2;
}



/* ---- FUN_60a0db30 @ 60a0db30 size=132 ---- */

void __fastcall FUN_60a0db30(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  piVar2 = (int *)param_1[1];
  if (*(char *)((int)piVar2 + 0x2d) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x2d);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x2d);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      param_1[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x2d);
    while ((cVar1 == '\0' && (param_1[1] == *piVar2))) {
      param_1[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x2d);
    }
    if (*(char *)(param_1[1] + 0x2d) == '\0') {
      param_1[1] = (int)piVar2;
      return;
    }
  }
  else {
    iVar3 = piVar2[2];
    param_1[1] = iVar3;
    if (*(char *)(iVar3 + 0x2d) == '\0') {
      return;
    }
  }
  _invalid_parameter_noinfo();
  return;
}



/* ---- FUN_60a0dbc0 @ 60a0dbc0 size=126 ---- */

void FUN_60a0dbc0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffffc0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_3d [37];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60a13868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (abStack_3d + -3,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_1);
  FUN_60a0d330(in_stack_ffffffc0);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- CF5MainFrmWnd::GetMessageMap @ 60a0dc40 size=6 ---- */

/* protected: virtual struct AFX_MSGMAP const * __thiscall CF5MainFrmWnd::GetMessageMap(void)const
    */

AFX_MSGMAP * __thiscall CF5MainFrmWnd::CF5MainFrmWnd__GetMessageMap(CF5MainFrmWnd *this)

{
                    /* 0xdc40  195  ?GetMessageMap@CF5MainFrmWnd@@MBEPBUAFX_MSGMAP@@XZ
                       0xdc40  202  ?GetThisMessageMap@CF5MainFrmWnd@@KGPBUAFX_MSGMAP@@XZ */
  return (AFX_MSGMAP *)&PTR_LAB_60a1742c;
}



/* ---- FUN_60a0dc50 @ 60a0dc50 size=55 ---- */

void FUN_60a0dc50(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  return;
}



/* ---- FUN_60a0dc90 @ 60a0dc90 size=146 ---- */

undefined4 *
FUN_60a0dc90(undefined4 param_1,undefined4 param_2,undefined4 param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60a138a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x30);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    puVar1[2] = param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 3),
               param_4);
    puVar1[10] = *(undefined4 *)(param_4 + 0x1c);
    *(undefined1 *)(puVar1 + 0xb) = param_5;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@60a0dd22 @ 60a0dd22 size=21 ---- */

void Catch_All_60a0dd22(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_60a0dd40 @ 60a0dd40 size=148 ---- */

undefined4 __cdecl
FUN_60a0dd40(undefined4 param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffffbc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_41 [29];
  int *local_10;
  int local_c;
  int local_4;
  
  local_10 = param_2;
  local_c = param_3;
  local_4 = param_5;
  while( true ) {
    iVar2 = local_c;
    piVar1 = local_10;
    if ((local_10 == (int *)0x0) || (local_10 != param_4)) {
      _invalid_parameter_noinfo();
    }
    if (iVar2 == local_4) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (iVar2 == *(int *)(iVar3 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_41 + -3,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (iVar2 + 0xc));
    FUN_60a0dbc0(in_stack_ffffffbc);
    FUN_60a0da70((int *)&local_10);
  }
  return param_1;
}



/* ---- FUN_60a0dde0 @ 60a0dde0 size=704 ---- */

void __thiscall FUN_60a0dde0(void *this,undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  logic_error local_34 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a138c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_3 + 0x2d) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_50,"invalid map/set<T> iterator");
    local_4 = 0;
                    /* inlined constructor: std::out_of_range::out_of_range */
    std::logic_error::logic_error
              (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_50);
    local_34[0].vftablePtr = (logic_error_vftable *)&std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_60a19bf0);
  }
  FUN_60a0da70(&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0x2d) == '\0') {
    if (*(char *)(piVar2[2] + 0x2d) == '\0') {
      piVar7 = (int *)param_3[2];
      if (param_3 != piVar2) {
        piVar5[1] = (int)param_3;
        *param_3 = *piVar2;
        if (param_3 == (int *)piVar2[2]) {
          piVar5 = param_3;
        }
        else {
          piVar5 = (int *)param_3[1];
          if (*(char *)((int)piVar7 + 0x2d) == '\0') {
            piVar7[1] = (int)piVar5;
          }
          *piVar5 = (int)piVar7;
          param_3[2] = piVar2[2];
          *(int **)(piVar2[2] + 4) = param_3;
        }
        if (*(int **)(*(int *)((int)this + 0x18) + 4) == piVar2) {
          *(int **)(*(int *)((int)this + 0x18) + 4) = param_3;
        }
        else {
          piVar6 = (int *)piVar2[1];
          if ((int *)*piVar6 == piVar2) {
            *piVar6 = (int)param_3;
          }
          else {
            piVar6[2] = (int)param_3;
          }
        }
        param_3[1] = piVar2[1];
        piVar6 = piVar2 + 0xb;
        piVar3 = param_3 + 0xb;
        if (piVar3 != piVar6) {
          iVar1 = *piVar3;
          *(char *)piVar3 = (char)*piVar6;
          *(char *)piVar6 = (char)iVar1;
        }
        goto LAB_60a0df4d;
      }
    }
    else {
      piVar7 = piVar5;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0x2d) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 0x18) + 4) == piVar2) {
    *(int **)(*(int *)((int)this + 0x18) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 0x18);
  if ((int *)*piVar6 == piVar2) {
    if (*(char *)((int)piVar7 + 0x2d) == '\0') {
      piVar3 = (int *)FUN_60a0d260(piVar7);
    }
    else {
      piVar3 = piVar5;
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 0x18);
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0x2d) == '\0') {
      uVar4 = FUN_60a0d240((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_60a0df4d:
  if ((char)piVar2[0xb] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 0x18) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[0xb] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[0xb] == '\0') {
            *(undefined1 *)(piVar5 + 0xb) = 1;
            *(undefined1 *)(piVar6 + 0xb) = 0;
            FUN_60a0d280(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x2d) == '\0') {
            if ((*(char *)(*piVar5 + 0x2c) != '\x01') || (*(char *)(piVar5[2] + 0x2c) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x2c) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x2c) = 1;
                *(undefined1 *)(piVar5 + 0xb) = 0;
                FUN_60a0d2d0(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 0xb) = (char)piVar6[0xb];
              *(undefined1 *)(piVar6 + 0xb) = 1;
              *(undefined1 *)(piVar5[2] + 0x2c) = 1;
              FUN_60a0d280(this,(int)piVar6);
              break;
            }
LAB_60a0e010:
            *(undefined1 *)(piVar5 + 0xb) = 0;
          }
        }
        else {
          if ((char)piVar5[0xb] == '\0') {
            *(undefined1 *)(piVar5 + 0xb) = 1;
            *(undefined1 *)(piVar6 + 0xb) = 0;
            FUN_60a0d2d0(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x2d) == '\0') {
            if ((*(char *)(piVar5[2] + 0x2c) == '\x01') && (*(char *)(*piVar5 + 0x2c) == '\x01'))
            goto LAB_60a0e010;
            if (*(char *)(*piVar5 + 0x2c) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x2c) = 1;
              *(undefined1 *)(piVar5 + 0xb) = 0;
              FUN_60a0d280(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 0xb) = (char)piVar6[0xb];
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(*piVar5 + 0x2c) = 1;
            FUN_60a0d2d0(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 0x18) + 4));
    }
    *(undefined1 *)(piVar7 + 0xb) = 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar2 + 3));
  operator_delete(piVar2);
  if (*(int *)((int)this + 0x1c) != 0) {
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
  }
  *param_1 = *(undefined4 *)this;
  param_1[1] = param_3;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60a0e0b0 @ 60a0e0b0 size=25 ---- */

logic_error * __thiscall FUN_60a0e0b0(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::out_of_range::vftable;
  return param_1;
}



/* ---- FUN_60a0e0d0 @ 60a0e0d0 size=62 ---- */

void FUN_60a0e0d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x2d);
  while (cVar1 == '\0') {
    FUN_60a0e0d0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 3));
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}



/* ---- FUN_60a0e110 @ 60a0e110 size=495 ---- */

void __thiscall
FUN_60a0e110(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  logic_error local_34 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a138f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x7fffffd < *(uint *)((int)this + 0x1c)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"map/set<T> too long");
    local_4 = 0;
                    /* inlined constructor: std::length_error::length_error */
    std::logic_error::logic_error
              (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_50);
    local_34[0].vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_60a18dc0);
  }
  piVar6 = FUN_60a0dc90(*(undefined4 *)((int)this + 0x18),param_3,*(undefined4 *)((int)this + 0x18),
                        param_4,0);
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  if (param_3 == *(undefined4 **)((int)this + 0x18)) {
    (*(undefined4 **)((int)this + 0x18))[1] = piVar6;
    **(undefined4 **)((int)this + 0x18) = piVar6;
    *(int **)(*(int *)((int)this + 0x18) + 8) = piVar6;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar6;
    if (param_3 == *(undefined4 **)(*(int *)((int)this + 0x18) + 8)) {
      *(int **)(*(int *)((int)this + 0x18) + 8) = piVar6;
    }
  }
  else {
    *param_3 = piVar6;
    if (param_3 == (undefined4 *)**(int **)((int)this + 0x18)) {
      **(int **)((int)this + 0x18) = (int)piVar6;
    }
  }
  cVar1 = *(char *)(piVar6[1] + 0x2c);
  piVar8 = piVar6;
  while (cVar1 == '\0') {
    piVar7 = piVar8 + 1;
    piVar2 = (int *)*piVar7;
    piVar3 = (int *)piVar2[1];
    if (piVar2 == (int *)*piVar3) {
      iVar4 = piVar3[2];
      if (*(char *)(iVar4 + 0x2c) == '\0') {
        *(undefined1 *)(piVar2 + 0xb) = 1;
        *(undefined1 *)(iVar4 + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*piVar7 + 4) + 0x2c) = 0;
        piVar8 = *(int **)(*piVar7 + 4);
      }
      else {
        if (piVar8 == (int *)piVar2[2]) {
          FUN_60a0d280(this,(int)piVar2);
          piVar8 = piVar2;
        }
        *(undefined1 *)(piVar8[1] + 0x2c) = 1;
        *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x2c) = 0;
        FUN_60a0d2d0(this,*(int **)(piVar8[1] + 4));
      }
    }
    else {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x2c) == '\0') {
        *(undefined1 *)(piVar2 + 0xb) = 1;
        *(undefined1 *)(iVar4 + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*piVar7 + 4) + 0x2c) = 0;
        piVar8 = *(int **)(*piVar7 + 4);
      }
      else {
        if (piVar8 == (int *)*piVar2) {
          FUN_60a0d2d0(this,piVar2);
          piVar8 = piVar2;
        }
        *(undefined1 *)(piVar8[1] + 0x2c) = 1;
        *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x2c) = 0;
        iVar4 = *(int *)(piVar8[1] + 4);
        piVar2 = *(int **)(iVar4 + 8);
        *(int *)(iVar4 + 8) = *piVar2;
        if (*(char *)(*piVar2 + 0x2d) == '\0') {
          *(int *)(*piVar2 + 4) = iVar4;
        }
        piVar2[1] = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(*(int *)((int)this + 0x18) + 4)) {
          *(int **)(*(int *)((int)this + 0x18) + 4) = piVar2;
        }
        else {
          piVar3 = *(int **)(iVar4 + 4);
          if (iVar4 == *piVar3) {
            *piVar3 = (int)piVar2;
          }
          else {
            piVar3[2] = (int)piVar2;
          }
        }
        *piVar2 = iVar4;
        *(int **)(iVar4 + 4) = piVar2;
      }
    }
    cVar1 = *(char *)(piVar8[1] + 0x2c);
  }
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x2c) = 1;
  uVar5 = *(undefined4 *)this;
  param_1[1] = piVar6;
  *param_1 = uVar5;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60a0e300 @ 60a0e300 size=235 ---- */

void __thiscall
FUN_60a0e300(void *this,int *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  puVar2 = (undefined4 *)(*(undefined4 **)((int)this + 0x18))[1];
  cVar1 = *(char *)((int)puVar2 + 0x2d);
  local_14 = true;
  puVar4 = *(undefined4 **)((int)this + 0x18);
  while (cVar1 == '\0') {
    local_14 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                         (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )(puVar2 + 3));
    if (local_14) {
      puVar7 = (undefined4 *)*puVar2;
    }
    else {
      puVar7 = (undefined4 *)puVar2[2];
    }
    puVar4 = puVar2;
    puVar2 = puVar7;
    cVar1 = *(char *)((int)puVar7 + 0x2d);
  }
  local_10 = *(int *)this;
  local_c = puVar4;
  if (local_14 != false) {
    local_4 = (undefined4 *)**(undefined4 **)((int)this + 0x18);
    if (local_10 == 0) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == local_4) {
      local_14 = true;
      goto LAB_60a0e37a;
    }
    FUN_60a0db30(&local_10);
  }
  iVar3 = local_10;
  bVar5 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (local_c + 3),param_2);
  if (!bVar5) {
    *param_1 = iVar3;
    param_1[1] = (int)local_c;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
LAB_60a0e37a:
  piVar6 = (int *)FUN_60a0e110(this,&local_8,local_14,puVar4,
                               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)param_2);
  iVar3 = piVar6[1];
  *param_1 = *piVar6;
  param_1[1] = iVar3;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* ---- FUN_60a0e3f0 @ 60a0e3f0 size=127 ---- */

void __thiscall
FUN_60a0e3f0(void *this,int *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_10;
  undefined4 *local_c;
  int local_8;
  undefined4 local_4;
  
  puVar4 = FUN_60a0dae0(this,param_2);
  local_c = puVar4;
  if (this == (void *)0x0) {
    _invalid_parameter_noinfo();
  }
  puVar1 = *(undefined4 **)((int)this + 0x18);
  local_10 = *(int *)this;
  if (*(int *)this == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) ||
     (bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 (puVar4 + 3)), bVar3)) {
    local_8 = *(int *)this;
    local_4 = *(undefined4 *)((int)this + 0x18);
    piVar5 = &local_8;
  }
  else {
    piVar5 = &local_10;
  }
  iVar2 = piVar5[1];
  *param_1 = *piVar5;
  param_1[1] = iVar2;
  return;
}



/* ---- FUN_60a0e470 @ 60a0e470 size=157 ---- */

undefined4 * __thiscall FUN_60a0e470(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60a13920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(undefined4 **)((int)this + 0x18);
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    puVar1 = FUN_60a0dc90(local_18,param_2,local_18,
                          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)(param_1 + 3),*(undefined1 *)(param_1 + 0xb));
    if (*(char *)((int)local_18 + 0x2d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_60a0e470(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_60a0e470(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



/* ---- Catch_All@60a0e50d @ 60a0e50d size=21 ---- */

void Catch_All_60a0e50d(void)

{
  int unaff_EBP;
  
  FUN_60a0e0d0(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_60a0e530 @ 60a0e530 size=184 ---- */

undefined4 __thiscall
FUN_60a0e530(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60a13949;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_60a0e3f0((int *)(param_1 + 4),(int *)&local_14,&param_2);
  iVar2 = *(int *)(param_1 + 0x1c);
  if ((local_14 == (int *)0x0) || (local_14 != *(int **)(param_1 + 4))) {
    _invalid_parameter_noinfo();
  }
  if (local_10 == iVar2) {
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_2);
    uVar1 = 0;
  }
  else {
    if (local_14 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar2 = 0;
    }
    else {
      iVar2 = *local_14;
    }
    if (local_10 == *(int *)(iVar2 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    uVar1 = *(undefined4 *)(local_10 + 0x28);
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_2);
  }
  ExceptionList = local_c;
  return uVar1;
}



/* ---- CF5MainFrmWnd::OnTimer @ 60a0e5f0 size=245 ---- */

/* public: virtual void __thiscall CF5MainFrmWnd::OnTimer(unsigned int) */

void __thiscall CF5MainFrmWnd::CF5MainFrmWnd__OnTimer(CF5MainFrmWnd *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  IGod *pIVar3;
  CF5DialogList *pCVar4;
  int iVar5;
  DisplayAdWnd *pDVar6;
  int iVar7;
  int *piStack_8;
  int iStack_4;
  
                    /* 0xe5f0  342  ?OnTimer@CF5MainFrmWnd@@UAEXI@Z */
  if (param_1 == 300) {
    pDVar6 = this->vftablePtr->DisplayAdWnd;
  }
  else {
    if (param_1 == 400) {
      if (*(int *)&(this->CF5MainFrmWnd_data).field_0x100 == 0) {
        pIVar3 = God();
        (**(code **)(*(int *)pIVar3 + 0x10))
                  ("gameWarp","requestTicketFromGameStringServer",Void_exref,1);
      }
      else {
        pIVar3 = God();
        (**(code **)(*(int *)pIVar3 + 0x10))("channel","sendTicket",Void_exref,1);
      }
      goto LAB_60a0e677;
    }
    if (param_1 != 500) goto LAB_60a0e677;
    pDVar6 = (DisplayAdWnd *)this->vftablePtr->RefreshCookie;
  }
  (*pDVar6)(this);
LAB_60a0e677:
  pCVar4 = F5DialogList();
  iVar7 = *(int *)(pCVar4 + 0x20);
  pCVar4 = F5DialogList();
  iStack_4 = **(int **)(pCVar4 + 0x1c);
  piStack_8 = *(int **)(pCVar4 + 4);
  if (0 < iVar7) {
    do {
      iVar2 = iStack_4;
      if (piStack_8 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *piStack_8;
      }
      if (iVar2 == *(int *)(iVar5 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      piVar1 = *(int **)(iVar2 + 0x28);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x3c))(param_1);
      }
      FUN_60a0da70((int *)&piStack_8);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



/* ---- Clear @ 60a0e6f0 size=87 ---- */

/* public: void __thiscall CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *>::Clear(void) */

void __thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
Clear(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
      *this)

{
  int *piVar1;
  undefined1 local_5 [5];
  
                    /* 0xe6f0  89
                       ?Clear@?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAEXXZ
                        */
  piVar1 = (this->
           CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
           ).offset_0x14;
  FUN_60a0dd40(local_5,(int *)this->
                              tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
               ,*piVar1,(int *)this->
                               tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
               ,(int)piVar1);
  FUN_60a0e0d0((int *)(this->
                      CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
                      ).offset_0x14[1]);
  piVar1 = (this->
           CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
           ).offset_0x14;
  piVar1[1] = (int)piVar1;
  piVar1 = (this->
           CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
           ).offset_0x14;
  (this->
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
  ).offset_0x18 = 0;
  *piVar1 = (int)piVar1;
  piVar1 = (this->
           CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
           ).offset_0x14;
  piVar1[2] = (int)piVar1;
  return;
}



/* ---- Add @ 60a0e750 size=277 ---- */

/* public: bool __thiscall CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *>::Add(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   CF5DialogRoot *,bool) */

bool __thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
Add(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
    *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2)

{
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  tVar1;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  tVar2;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  *ptVar3;
  undefined4 in_stack_00000020;
  char in_stack_00000024;
  int local_58 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4c [28];
  undefined4 local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xe750  83
                       ?Add@?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@_N@Z
                        */
  puStack_8 = &LAB_60a13989;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (in_stack_00000024 == '\0') {
    tVar1 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
             )(this->
              CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
              ).offset_0x14;
    tVar2 = this->
            tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
    ;
    ptVar3 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
              *)FUN_60a0e3f0(&this->
                              tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                             ,local_58,&param_2);
    if ((*ptVar3 ==
         (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          )0x0) || (*ptVar3 != tVar2)) {
      _invalid_parameter_noinfo();
    }
    if (ptVar3[1] != tVar1) {
      local_4 = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_2);
      ExceptionList = local_c;
      return false;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_4c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)&param_2);
  local_30 = in_stack_00000020;
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_4c);
  local_10 = local_30;
  local_4._0_1_ = 2;
  FUN_60a0e300(&this->
                tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
               ,local_58,local_2c);
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_4c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_2);
  ExceptionList = local_c;
  return true;
}



/* ---- Get @ 60a0e870 size=112 ---- */

/* public: class CF5DialogRoot * __thiscall CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *>::Get(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >) */

CF5DialogRoot * __thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
Get(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
    *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2)

{
  CF5DialogRoot *pCVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffffcc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_31 [29];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xe870  183
                       ?Get@?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAEPAVCF5DialogRoot@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
                        */
  puStack_8 = &LAB_60a139b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (abStack_31 + -3,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_2);
  pCVar1 = (CF5DialogRoot *)FUN_60a0e530((int)this,in_stack_ffffffcc);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_2);
  ExceptionList = local_c;
  return pCVar1;
}



/* ---- QueryKey @ 60a0e8e0 size=135 ---- */

/* public: bool __thiscall CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *>::QueryKey(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >) */

bool __thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
QueryKey(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
         *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2)

{
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  tVar1;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  tVar2;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  *ptVar3;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xe8e0  358
                       ?QueryKey@?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
                        */
  puStack_8 = &LAB_60a139e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  tVar1 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           )(this->
            CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
            ).offset_0x14;
  tVar2 = this->
          tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  ;
  local_4 = 0;
  ptVar3 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            *)FUN_60a0e3f0(&this->
                            tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                           ,local_14,&param_2);
  if ((*ptVar3 ==
       (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
        )0x0) || (*ptVar3 != tVar2)) {
    _invalid_parameter_noinfo();
  }
  tVar2 = ptVar3[1];
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_2);
  ExceptionList = local_c;
  return tVar2 != tVar1;
}



/* ---- FUN_60a0e970 @ 60a0e970 size=215 ---- */

void __thiscall
FUN_60a0e970(void *this,int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8 [2];
  
  piVar1 = (int *)**(int **)((int)this + 0x18);
  if ((param_2 == 0) || (param_2 != *(int *)this)) {
    _invalid_parameter_noinfo();
  }
  if (param_3 == piVar1) {
    piVar1 = *(int **)((int)this + 0x18);
    if ((param_4 == 0) || (param_4 != *(int *)this)) {
      _invalid_parameter_noinfo();
    }
    if (param_5 == piVar1) {
      FUN_60a0e0d0(*(int **)(*(int *)((int)this + 0x18) + 4));
      *(int *)(*(int *)((int)this + 0x18) + 4) = *(int *)((int)this + 0x18);
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)*(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x18);
      *(int *)(*(int *)((int)this + 0x18) + 8) = *(int *)((int)this + 0x18);
      iVar2 = *(int *)this;
      param_1[1] = **(int **)((int)this + 0x18);
      *param_1 = iVar2;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      _invalid_parameter_noinfo();
    }
    piVar1 = param_3;
    iVar2 = param_2;
    if (param_3 == param_5) break;
    FUN_60a0da70(&param_2);
    FUN_60a0dde0(this,local_8,iVar2,piVar1);
  }
  *param_1 = *(int *)this;
  param_1[1] = (int)param_3;
  return;
}



/* ---- FUN_60a0ea50 @ 60a0ea50 size=117 ---- */

void __thiscall FUN_60a0ea50(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 0x18);
  puVar7 = FUN_60a0e470(this,*(undefined4 **)(*(int *)(param_1 + 0x18) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x2d) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)((int)this + 0x18) + 8) = *(int *)((int)this + 0x18);
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0x2d);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x2d);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)((int)this + 0x18) + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x2d);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x2d);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)((int)this + 0x18) + 8) = iVar2;
  return;
}



/* ---- FUN_60a0ead0 @ 60a0ead0 size=54 ---- */

void __fastcall FUN_60a0ead0(int *param_1)

{
  int local_8 [2];
  
  FUN_60a0e970(param_1,local_8,*param_1,*(int **)param_1[6],*param_1,(int *)param_1[6]);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* ---- FUN_60a0eb10 @ 60a0eb10 size=152 ---- */

undefined4 * __thiscall FUN_60a0eb10(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60a13a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = this;
  }
  *(undefined4 **)this = puVar1;
  local_8 = 0;
  iVar2 = FUN_60a0dc50();
  *(int *)((int)this + 0x18) = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(int *)(*(int *)((int)this + 0x18) + 4) = *(int *)((int)this + 0x18);
  *(undefined4 *)*(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x18);
  *(int *)(*(int *)((int)this + 0x18) + 8) = *(int *)((int)this + 0x18);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_60a0ea50(this,param_1);
  ExceptionList = local_10;
  return this;
}



/* ---- Catch_All@60a0eba8 @ 60a0eba8 size=17 ---- */

void Catch_All_60a0eba8(void)

{
  int unaff_EBP;
  
  FUN_60a0ead0(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_60a0ebc0 @ 60a0ebc0 size=124 ---- */

void __fastcall FUN_60a0ebc0(int *param_1)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60a13a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_60a0e970(param_1,local_14,*param_1,*(int **)param_1[6],*param_1,(int *)param_1[6]);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)*param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60a0ec40 @ 60a0ec40 size=129 ---- */

undefined4 * __fastcall FUN_60a0ec40(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  local_4 = 0;
  iVar2 = FUN_60a0dc50();
  param_1[6] = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(undefined4 *)(param_1[6] + 4) = param_1[6];
  *(undefined4 *)param_1[6] = param_1[6];
  *(undefined4 *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_60a0ecd0 @ 60a0ecd0 size=5 ---- */

void __fastcall FUN_60a0ecd0(undefined4 *param_1)

{
  int aiStack_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_60a13a48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uStack_4 = 0;
  FUN_60a0e970(param_1,aiStack_14,*param_1,*(int **)param_1[6],*param_1,(int *)param_1[6]);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)*param_1);
  ExceptionList = pvStack_c;
  return;
}



/* ---- ~CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> @ 60a0ece0 size=92 ---- */

/* public: virtual __thiscall CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *>::~CMapWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   CF5DialogRoot *>(void) */

void __thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
~CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xece0  34
                       ??1?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@UAE@XZ
                        */
  puStack_8 = &LAB_60a13a7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  Clear(this);
  local_4 = 0xffffffff;
  FUN_60a0ebc0((int *)&this->
                       tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
              );
  ExceptionList = local_c;
  return;
}



/* ---- CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> @ 60a0ed40 size=31 ---- */

/* public: __thiscall CMapWrapper<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class CF5DialogRoot *>::CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *>(class
   CMapWrapper<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,class CF5DialogRoot *> const &) */

CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> *
__thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           *this,CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>
                 *param_1)

{
                    /* 0xed40  1
                       ??0?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAE@ABV0@@Z
                        */
  this->vftablePtr = &_vftable_;
  FUN_60a0eb10(&this->
                tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
               ,(int)(param_1 + 4));
  return this;
}



/* ---- CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> @ 60a0ed60 size=33 ---- */

/* public: __thiscall CMapWrapper<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class CF5DialogRoot *>::CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *>(void) */

CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> *
__thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           *this)

{
                    /* 0xed60  2
                       ??0?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAE@XZ
                        */
  this->vftablePtr = &_vftable_;
  FUN_60a0ec40(&this->
                tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
              );
  return this;
}



/* ---- CF5DialogList @ 60a0ed90 size=37 ---- */

/* public: __thiscall CF5DialogList::CF5DialogList(class CF5DialogList const &) */

CF5DialogList * __thiscall CF5DialogList::CF5DialogList(CF5DialogList *this,CF5DialogList *param_1)

{
                    /* 0xed90  18  ??0CF5DialogList@@QAE@ABV0@@Z */
                    /* inlined constructor:
                       CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                        */
  this->vftablePtr =
       (CF5DialogList_vftable *)
       &CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
        ::_vftable_;
  FUN_60a0eb10(&this->
                tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
               ,(int)(param_1 + 4));
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- operator= @ 60a0edc0 size=64 ---- */

/* public: class CMapWrapper<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class CF5DialogRoot *> & __thiscall CMapWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   CF5DialogRoot *>::operator=(class CMapWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class CF5DialogRoot *> const &) */

CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>
* __thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
operator=(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          *this,CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>
                *param_1)

{
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  *this_00;
  int *piVar1;
  int local_8 [2];
  
                    /* 0xedc0  49
                       ??4?$CMapWrapper@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCF5DialogRoot@@@@QAEAAV0@ABV0@@Z
                       0xedc0  57  ??4CF5DialogList@@QAEAAV0@ABV0@@Z */
  this_00 = &this->
             tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  ;
  if (this_00 !=
      (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
       *)(param_1 + 4)) {
    piVar1 = (this->
             CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
             ).offset_0x14;
    FUN_60a0e970(this_00,local_8,(int)*this_00,(int *)*piVar1,(int)*this_00,piVar1);
    FUN_60a0ea50(this_00,(int)(param_1 + 4));
  }
  return (CMapWrapper<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_CF5DialogRoot*>
          *)this;
}



/* ---- scalar_deleting_destructor @ 60a0ee00 size=82 ---- */

CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*> *
__thiscall
CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
scalar_deleting_destructor
          (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
              (this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            *)this;
  }
  puVar1 = &this[-1].
            CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
            .offset_0x18;
  _eh_vector_destructor_iterator_
            (this,0x24,
             this[-1].
             CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
             .offset_0x18,
             ~CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            );
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          *)puVar1;
}



/* ---- CF5MiniChannelListView @ 60a0ee60 size=32 ---- */

/* public: __thiscall CF5MiniChannelListView::CF5MiniChannelListView(class CF5MiniChannelListWnd
   *,int) */

void __thiscall
CF5MiniChannelListView::CF5MiniChannelListView
          (CF5MiniChannelListView *this,CF5MiniChannelListWnd *param_1,int param_2)

{
                    /* 0xee60  30  ??0CF5MiniChannelListView@@QAE@PAVCF5MiniChannelListWnd@@H@Z */
  this->vftablePtr = &_vftable_;
  (this->CF5MiniChannelListView_data).offset_0x0 = (undefined4 *)param_1;
  (this->CF5MiniChannelListView_data).offset_0x8 = param_2;
  (this->CF5MiniChannelListView_data).offset_0x4 = 0;
  return;
}



/* ---- CF5MiniChannelListView::OnDetached @ 60a0ee80 size=18 ---- */

/* public: virtual bool __thiscall CF5MiniChannelListView::OnDetached(void) */

bool __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnDetached(CF5MiniChannelListView *this)

{
                    /* 0xee80  328  ?OnDetached@CF5MiniChannelListView@@UAE_NXZ */
  if ((this->CF5MiniChannelListView_data).offset_0x8 != 0) {
    (*this->vftablePtr->deleting_destructor)(this,1);
  }
  return true;
}



/* ---- CF5MiniChannelListView::OnClickRefreshBtn @ 60a0eea0 size=37 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::OnClickRefreshBtn(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnClickRefreshBtn
          (CF5MiniChannelListView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0xeea0  300  ?OnClickRefreshBtn@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))
                    ("miniChannelListView","onClickRefreshBtn",Void_exref,0);
  return iVar2;
}



/* ---- CF5MiniChannelListView::OnClickJoinBtn @ 60a0eed0 size=39 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::OnClickJoinBtn(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnClickJoinBtn
          (CF5MiniChannelListView *this,IParam *param_1)

{
  IGod *pIVar1;
  
                    /* 0xeed0  293  ?OnClickJoinBtn@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  (**(code **)(*(int *)pIVar1 + 0x20))("miniChannelListView","onClickJoinBtn",Void_exref,0);
  return 0;
}



/* ---- CF5MiniChannelListView::OnClickRoomListBtn @ 60a0ef00 size=51 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::OnClickRoomListBtn(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnClickRoomListBtn
          (CF5MiniChannelListView *this,IParam *param_1)

{
  SGlobalInfo *this_00;
  CAppRunningState *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0xef00  302  ?OnClickRoomListBtn@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  (**(code **)*(this->CF5MiniChannelListView_data).offset_0x0)(0);
  uVar2 = DAT_60a247b0;
  uVar3 = DAT_60a247b4;
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::AppRunningState(this_00);
  CAppRunningState::RemoveAppState(pCVar1,uVar2,uVar3);
  return 0;
}



/* ---- CF5MiniChannelListView::OnClickAutoJoinBtn @ 60a0ef40 size=37 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::OnClickAutoJoinBtn(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnClickAutoJoinBtn
          (CF5MiniChannelListView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0xef40  280  ?OnClickAutoJoinBtn@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))
                    ("miniChannelListView","onClickAutoJoinBtn",Void_exref,0);
  return iVar2;
}



/* ---- CF5MiniChannelListView::OnClickGrpListBtn @ 60a0ef70 size=37 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::OnClickGrpListBtn(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnClickGrpListBtn
          (CF5MiniChannelListView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0xef70  290  ?OnClickGrpListBtn@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))
                    ("miniChannelListView","onClickGrpListBtn",Void_exref,0);
  return iVar2;
}



/* ---- CF5MiniChannelListView::OnClickChannelGrpLst @ 60a0efa0 size=35 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::OnClickChannelGrpLst(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnClickChannelGrpLst
          (CF5MiniChannelListView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0xefa0  282  ?OnClickChannelGrpLst@CF5MiniChannelListView@@UAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x20))
                    ("miniChannelListView","onClickChannelGrpLst",param_1,0);
  return iVar2;
}



/* ---- CF5MiniChannelListView::OnCheckEnterableState @ 60a0efd0 size=35 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::OnCheckEnterableState(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnCheckEnterableState
          (CF5MiniChannelListView *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0xefd0  276  ?OnCheckEnterableState@CF5MiniChannelListView@@UAEHAAUIParam@@@Z
                        */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("channelList","checkEnterableState",param_1,1);
  return iVar2;
}



/* ---- CF5MiniChannelListView::Msg_CreateWindow @ 60a0f000 size=20 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::Msg_CreateWindow(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__Msg_CreateWindow
          (CF5MiniChannelListView *this,IParam *param_1)

{
                    /* 0xf000  229  ?Msg_CreateWindow@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  (**(code **)(*(this->CF5MiniChannelListView_data).offset_0x0 + 4))(param_1);
  return 0;
}



/* ---- CF5MiniChannelListView::Msg_DestroyWindow @ 60a0f020 size=20 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::Msg_DestroyWindow(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__Msg_DestroyWindow
          (CF5MiniChannelListView *this,IParam *param_1)

{
                    /* 0xf020  232  ?Msg_DestroyWindow@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  (**(code **)(*(this->CF5MiniChannelListView_data).offset_0x0 + 8))(param_1);
  return 0;
}



/* ---- CF5MiniChannelListView::Evt_MiniChannelList_OnUpdateChannelGrpList @ 60a0f040 size=21 ---- */

/* public: virtual int __thiscall
   CF5MiniChannelListView::Evt_MiniChannelList_OnUpdateChannelGrpList(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__Evt_MiniChannelList_OnUpdateChannelGrpList
          (CF5MiniChannelListView *this,IParam *param_1)

{
                    /* 0xf040  157
                       ?Evt_MiniChannelList_OnUpdateChannelGrpList@CF5MiniChannelListView@@UAEHAAUIParam@@@Z
                        */
  if ((this->CF5MiniChannelListView_data).offset_0x0 != (undefined4 *)0x0) {
    (**(code **)(*(this->CF5MiniChannelListView_data).offset_0x0 + 0xc))();
  }
  return 0;
}



/* ---- CF5MiniChannelListView::Evt_MiniChannelList_OnUpdateChannelList @ 60a0f060 size=21 ---- */

/* public: virtual int __thiscall
   CF5MiniChannelListView::Evt_MiniChannelList_OnUpdateChannelList(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__Evt_MiniChannelList_OnUpdateChannelList
          (CF5MiniChannelListView *this,IParam *param_1)

{
                    /* 0xf060  158
                       ?Evt_MiniChannelList_OnUpdateChannelList@CF5MiniChannelListView@@UAEHAAUIParam@@@Z
                        */
  if ((this->CF5MiniChannelListView_data).offset_0x0 != (undefined4 *)0x0) {
    (**(code **)(*(this->CF5MiniChannelListView_data).offset_0x0 + 0x10))();
  }
  return 0;
}



/* ---- CF5MiniChannelListView::Evt_MiniChannelList_OnChannelJoinComplete @ 60a0f080 size=85 ---- */

/* public: virtual int __thiscall
   CF5MiniChannelListView::Evt_MiniChannelList_OnChannelJoinComplete(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__Evt_MiniChannelList_OnChannelJoinComplete
          (CF5MiniChannelListView *this,IParam *param_1)

{
  SGlobalInfo *this_00;
  CAppRunningState *pCVar1;
  IGod *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0xf080  154
                       ?Evt_MiniChannelList_OnChannelJoinComplete@CF5MiniChannelListView@@UAEHAAUIParam@@@Z
                        */
  (**(code **)*(this->CF5MiniChannelListView_data).offset_0x0)(0);
  uVar3 = DAT_60a247b0;
  uVar4 = DAT_60a247b4;
  this_00 = GInfo();
  pCVar1 = SGlobalInfo::AppRunningState(this_00);
  CAppRunningState::RemoveAppState(pCVar1,uVar3,uVar4);
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))("channelList","clearChannelList",Void_exref,1);
  return 0;
}



/* ---- CF5MiniChannelListView::Evt_MiniChannelList_OnFailEnterChannel @ 60a0f0e0 size=21 ---- */

/* public: virtual int __thiscall
   CF5MiniChannelListView::Evt_MiniChannelList_OnFailEnterChannel(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__Evt_MiniChannelList_OnFailEnterChannel
          (CF5MiniChannelListView *this,IParam *param_1)

{
                    /* 0xf0e0  155
                       ?Evt_MiniChannelList_OnFailEnterChannel@CF5MiniChannelListView@@UAEHAAUIParam@@@Z
                        */
  if ((this->CF5MiniChannelListView_data).offset_0x0 != (undefined4 *)0x0) {
    (**(code **)(*(this->CF5MiniChannelListView_data).offset_0x0 + 0x14))();
  }
  return 0;
}



/* ---- CF5MiniChannelListView::Evt_MiniChannelList_OnShowWindow @ 60a0f100 size=612 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::Evt_MiniChannelList_OnShowWindow(struct
   IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__Evt_MiniChannelList_OnShowWindow
          (CF5MiniChannelListView *this,IParam *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  SGlobalInfo *pSVar4;
  CMetpParserRet *this_00;
  CWndProperty *this_01;
  IGod *pIVar5;
  CAppRunningState *pCVar6;
  int iVar7;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *this_02;
  code *pcVar8;
  undefined4 unaff_ESI;
  byte bVar9;
  bool bVar10;
  NInfoTypes NVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  CSimpleStringT<char,1> aCStack_9c [2];
  CSimpleStringT<char,1> CStack_9a;
  undefined1 local_99;
  CParam aCStack_98 [132];
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  bVar9 = (byte)((uint)unaff_ESI >> 0x18);
                    /* 0xf100  156
                       ?Evt_MiniChannelList_OnShowWindow@CF5MiniChannelListView@@UAEHAAUIParam@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a13ac4;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_60a24730 ^ (uint)aCStack_9c);
  ExceptionList = &local_c;
  local_99 = 1;
  cVar3 = (**(code **)(*(int *)param_1 + 0x18))
                    (&DAT_60a1661c,DAT_60a24730 ^ (uint)(aCStack_9c + -0xc));
  if (cVar3 != '\0') {
    (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a1661c,aCStack_9c + -1);
  }
  cVar3 = (**(code **)(*(int *)param_1 + 0x18))(&DAT_60a175b0);
  if (cVar3 != '\0') {
    (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a175b0,aCStack_9c + -6);
  }
  (this->CF5MiniChannelListView_data).offset_0x4 = (uint)bVar9;
  piVar1 = (this->CF5MiniChannelListView_data).offset_0x0;
  if (bVar9 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(0);
      (**(code **)(*(this->CF5MiniChannelListView_data).offset_0x0 + 0x1c))(&PTR_60a15dfc);
    }
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_9c + -4));
    pcVar8 = GInfo_exref;
    bVar10 = false;
    local_c = (void *)0x1;
    pSVar4 = GInfo();
    SGlobalInfo::GetGameId(pSVar4,bVar10);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::Format
              (this_02,(char *)(aCStack_9c + -4));
    pcVar12 = ATL::CSimpleStringT<char,1>::operator_char_const_(aCStack_9c);
    pSVar4 = GInfo();
    this_01 = SGlobalInfo::WndProperty(pSVar4);
    CWndProperty::SetWndProp(this_01,pcVar12);
  }
  else {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(1);
    }
    pcVar8 = GInfo_exref;
    pcVar12 = "k63e";
    NVar11 = 1;
    pSVar4 = GInfo();
    this_00 = SGlobalInfo::MetpInfo(pSVar4,NVar11);
    pcVar12 = CMetpParserRet::GetString(this_00,pcVar12);
    ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
    CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(aCStack_9c + -4),
               pcVar12);
    piVar1 = (this->CF5MiniChannelListView_data).offset_0x0;
    local_c = (void *)0x0;
    if (piVar1 != (int *)0x0) {
      iVar7 = *piVar1;
      pcVar12 = ATL::CSimpleStringT<char,1>::operator_char_const_(aCStack_9c + -4);
      (**(code **)(iVar7 + 0x1c))(pcVar12);
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)aCStack_9c);
  CParam::CParam(aCStack_98,false);
  puStack_8 = (undefined1 *)0x2;
  pIVar5 = God();
  (**(code **)(*(int *)pIVar5 + 0x10))("channelList","getSelectedChannelGrp",aCStack_98,1);
  pIVar5 = God();
  (**(code **)(*(int *)pIVar5 + 0x20))
            ("miniChannelListView","onClickChannelGrpLst",aCStack_9c + -0xc,0);
  puStack_8 = (undefined1 *)0xffffffff;
  CParam::~CParam(aCStack_98);
  uVar13 = DAT_60a247b0;
  uVar14 = DAT_60a247b4;
  pSVar4 = (SGlobalInfo *)(*pcVar8)(DAT_60a247b0,DAT_60a247b4);
  pCVar6 = SGlobalInfo::AppRunningState(pSVar4);
  CAppRunningState::AddAppState(pCVar6,uVar13,uVar14);
  puVar2 = (this->CF5MiniChannelListView_data).offset_0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_10;
  iVar7 = __security_check_cookie(uStack_14 ^ (uint)(aCStack_9c + -4));
  return iVar7;
}



/* ---- CF5MiniChannelListView @ 60a0f3b0 size=16 ---- */

/* public: __thiscall CF5MiniChannelListView::CF5MiniChannelListView(void) */

void __thiscall CF5MiniChannelListView::CF5MiniChannelListView(CF5MiniChannelListView *this)

{
                    /* 0xf3b0  31  ??0CF5MiniChannelListView@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  (this->CF5MiniChannelListView_data).offset_0x0 = (undefined4 *)0x0;
  return;
}



/* ---- ~CF5MiniChannelListView @ 60a0f3c0 size=32 ---- */

/* public: virtual __thiscall CF5MiniChannelListView::~CF5MiniChannelListView(void) */

void __thiscall CF5MiniChannelListView::~CF5MiniChannelListView(CF5MiniChannelListView *this)

{
  CF5MiniChannelListWnd *this_00;
  
                    /* 0xf3c0  47  ??1CF5MiniChannelListView@@UAE@XZ */
  this_00 = (CF5MiniChannelListWnd *)(this->CF5MiniChannelListView_data).offset_0x0;
  this->vftablePtr = &_vftable_;
  if (this_00 != (CF5MiniChannelListWnd *)0x0) {
    CF5MiniChannelListWnd::~CF5MiniChannelListWnd(this_00);
    operator_delete(this_00);
  }
  return;
}



/* ---- CF5MiniChannelListView::OnClickChannelLst @ 60a0f3e0 size=443 ---- */

/* public: virtual int __thiscall CF5MiniChannelListView::OnClickChannelLst(struct IParam &) */

int __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnClickChannelLst
          (CF5MiniChannelListView *this,IParam *param_1)

{
  byte bVar1;
  bool bVar2;
  SGlobalInfo *pSVar3;
  vector<CChannelData*,std::allocator<CChannelData*>_> *pvVar4;
  CMetpParserRet *pCVar5;
  byte *pbVar6;
  int iVar7;
  IGod *pIVar8;
  CAppRunningState *pCVar9;
  int unaff_EBP;
  uint unaff_ESI;
  byte *pbVar10;
  NInfoTypes NVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 local_8;
  CF5MiniChannelListView *local_4;
  
                    /* 0xf3e0  283  ?OnClickChannelLst@CF5MiniChannelListView@@UAEHAAUIParam@@@Z */
  local_8 = 0;
  local_4 = this;
  (**(code **)(*(int *)param_1 + 100))(&DAT_60a175d4,&local_8);
  if (-1 < (int)unaff_ESI) {
    pSVar3 = GInfo();
    pvVar4 = SGlobalInfo::ChannelDataList(pSVar3);
    if ((int)unaff_ESI < *(int *)(pvVar4 + 0x10) - *(int *)(pvVar4 + 0xc) >> 2) {
      pcVar13 = "k24e";
      NVar11 = 4;
      pSVar3 = GInfo();
      pCVar5 = SGlobalInfo::MetpInfo(pSVar3,NVar11);
      bVar2 = CMetpParserRet::Query(pCVar5,pcVar13);
      if (bVar2) {
        pSVar3 = GInfo();
        pvVar4 = SGlobalInfo::ChannelDataList(pSVar3);
        if ((uint)(*(int *)(pvVar4 + 0x10) - *(int *)(pvVar4 + 0xc) >> 2) <= unaff_ESI) {
          _invalid_parameter_noinfo();
        }
        pbVar10 = *(byte **)(*(int *)(pvVar4 + 0xc) + unaff_ESI * 4);
        pcVar13 = "k24e";
        NVar11 = 4;
        pSVar3 = GInfo();
        pCVar5 = SGlobalInfo::MetpInfo(pSVar3,NVar11);
        pbVar6 = (byte *)CMetpParserRet::GetString(pCVar5,pcVar13);
        do {
          bVar1 = *pbVar6;
          bVar2 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_60a0f4c0:
            iVar7 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
            goto LAB_60a0f4c5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar2 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_60a0f4c0;
          pbVar6 = pbVar6 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_60a0f4c5:
        if ((iVar7 == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
          if (*(int *)(unaff_EBP + 4) != 0) {
            (**(code **)**(undefined4 **)(unaff_EBP + 4))(0);
            pIVar8 = God();
            (**(code **)(*(int *)pIVar8 + 0x10))("channel","onShowWindow",Void_exref,1);
          }
          uVar12 = DAT_60a247b0;
          uVar14 = DAT_60a247b4;
          pSVar3 = GInfo();
          pCVar9 = SGlobalInfo::AppRunningState(pSVar3);
          CAppRunningState::RemoveAppState(pCVar9,uVar12,uVar14);
          return 0;
        }
        param_1 = (IParam *)local_4;
      }
      (**(code **)**(undefined4 **)(unaff_EBP + 4))(0);
      pIVar8 = God();
      (**(code **)(*(int *)pIVar8 + 0x10))("channel","onShowWindow",Void_exref,1);
      pIVar8 = God();
      (**(code **)(*(int *)pIVar8 + 0x20))("miniChannelListView","onClickChannelLst",param_1,0);
      return 0;
    }
  }
  return 0x40000000;
}



/* ---- scalar_deleting_destructor @ 60a0f5a0 size=18 ---- */

void __thiscall
CMFunctor<CF5MiniChannelListView>::scalar_deleting_destructor
          (CMFunctor<CF5MiniChannelListView> *this)

{
  if (this != (CMFunctor<CF5MiniChannelListView> *)0x0) {
                    /* inlined destructor:
                       CMFunctor<CF5MiniChannelListView>::~CMFunctor<CF5MiniChannelListView> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CF5MiniChannelListView::OnAttached @ 60a0f5c0 size=858 ---- */

/* public: virtual bool __thiscall CF5MiniChannelListView::OnAttached(void) */

bool __thiscall
CF5MiniChannelListView::CF5MiniChannelListView__OnAttached(CF5MiniChannelListView *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  IFunctor *pIVar3;
  
                    /* 0xf5c0  274  ?OnAttached@CF5MiniChannelListView@@UAE_NXZ */
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5MiniChannelListView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a057a0;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelList","onUpdateChannelLst",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5MiniChannelListView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a058d0;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelList","onUpdateChannelGrpLst",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5MiniChannelListView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f390;
  }
  (**(code **)(*(int *)pIVar1 + 0x14))("channelList","onFailEnterChannel",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5MiniChannelListView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a058f0;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channelList","onShowWindow",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5MiniChannelListView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f380;
  }
  (**(code **)(*(int *)pIVar1 + 0x1c))("channel","onChannelJoinComplete",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5MiniChannelListView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08690;
  }
  (**(code **)(*(int *)pIVar1 + 8))("miniChannelListView","getWindow",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5MiniChannelListView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f370;
  }
  (**(code **)(*(int *)pIVar1 + 8))("miniChannelListView","createWindow",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5MiniChannelListView>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10110;
  }
  (**(code **)(*(int *)pIVar1 + 8))("miniChannelListView","destroy",puVar2,1);
  puVar2 = (this->CF5MiniChannelListView_data).offset_0x0;
  if (puVar2 != (undefined4 *)0x0) {
    pIVar3 = operator_new(0xc);
    if (pIVar3 == (IFunctor *)0x0) {
      pIVar3 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5MiniChannelListView>_vftable **)pIVar3 =
           &CMFunctor<CF5MiniChannelListView>::vftable;
      *(CF5MiniChannelListView **)(pIVar3 + 4) = this;
      *(undefined1 **)(pIVar3 + 8) = &LAB_60a0c020;
    }
    CFunctor::operator=((CFunctor *)(puVar2 + 1),pIVar3);
    pIVar3 = operator_new(0xc);
    if (pIVar3 == (IFunctor *)0x0) {
      pIVar3 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5MiniChannelListView>_vftable **)pIVar3 =
           &CMFunctor<CF5MiniChannelListView>::vftable;
      *(CF5MiniChannelListView **)(pIVar3 + 4) = this;
      *(undefined1 **)(pIVar3 + 8) = &LAB_60a08670;
    }
    CFunctor::operator=((CFunctor *)(puVar2 + 2),pIVar3);
    pIVar3 = operator_new(0xc);
    if (pIVar3 == (IFunctor *)0x0) {
      pIVar3 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5MiniChannelListView>_vftable **)pIVar3 =
           &CMFunctor<CF5MiniChannelListView>::vftable;
      *(CF5MiniChannelListView **)(pIVar3 + 4) = this;
      *(undefined1 **)(pIVar3 + 8) = &LAB_60a08680;
    }
    CFunctor::operator=((CFunctor *)(puVar2 + 3),pIVar3);
    pIVar3 = operator_new(0xc);
    if (pIVar3 == (IFunctor *)0x0) {
      pIVar3 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5MiniChannelListView>_vftable **)pIVar3 =
           &CMFunctor<CF5MiniChannelListView>::vftable;
      *(CF5MiniChannelListView **)(pIVar3 + 4) = this;
      *(undefined1 **)(pIVar3 + 8) = &LAB_60a0f3a0;
    }
    CFunctor::operator=((CFunctor *)(puVar2 + 4),pIVar3);
    pIVar3 = operator_new(0xc);
    if (pIVar3 == (IFunctor *)0x0) {
      pIVar3 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5MiniChannelListView>_vftable **)pIVar3 =
           &CMFunctor<CF5MiniChannelListView>::vftable;
      *(CF5MiniChannelListView **)(pIVar3 + 4) = this;
      *(undefined1 **)(pIVar3 + 8) = &LAB_60a10160;
    }
    CFunctor::operator=((CFunctor *)(puVar2 + 5),pIVar3);
    pIVar3 = operator_new(0xc);
    if (pIVar3 == (IFunctor *)0x0) {
      pIVar3 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5MiniChannelListView>_vftable **)pIVar3 =
           &CMFunctor<CF5MiniChannelListView>::vftable;
      *(CF5MiniChannelListView **)(pIVar3 + 4) = this;
      *(undefined1 **)(pIVar3 + 8) = &LAB_60a0c000;
    }
    CFunctor::operator=((CFunctor *)(puVar2 + 6),pIVar3);
    pIVar3 = operator_new(0xc);
    if (pIVar3 == (IFunctor *)0x0) {
      pIVar3 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5MiniChannelListView>_vftable **)pIVar3 =
           &CMFunctor<CF5MiniChannelListView>::vftable;
      *(CF5MiniChannelListView **)(pIVar3 + 4) = this;
      *(undefined1 **)(pIVar3 + 8) = &LAB_60a10100;
    }
    CFunctor::operator=((CFunctor *)(puVar2 + 7),pIVar3);
    pIVar3 = operator_new(0xc);
    if (pIVar3 != (IFunctor *)0x0) {
      *(CMFunctor<CF5MiniChannelListView>_vftable **)pIVar3 =
           &CMFunctor<CF5MiniChannelListView>::vftable;
      *(CF5MiniChannelListView **)(pIVar3 + 4) = this;
      *(undefined1 **)(pIVar3 + 8) = &LAB_60a10140;
      CFunctor::operator=((CFunctor *)(puVar2 + 8),pIVar3);
      (this->CF5MiniChannelListView_data).offset_0x4 = 0;
      return true;
    }
    CFunctor::operator=((CFunctor *)(puVar2 + 8),(IFunctor *)0x0);
  }
  (this->CF5MiniChannelListView_data).offset_0x4 = 0;
  return true;
}



/* ---- CF5MiniChannelListWnd @ 60a0f920 size=151 ---- */

/* public: __thiscall CF5MiniChannelListWnd::CF5MiniChannelListWnd(void) */

CF5MiniChannelListWnd * __thiscall
CF5MiniChannelListWnd::CF5MiniChannelListWnd(CF5MiniChannelListWnd *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf920  33  ??0CF5MiniChannelListWnd@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13b54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  CFunctor::CFunctor((CFunctor *)&this->CF5MiniChannelListWnd_data);
  local_4 = 0;
  CFunctor::CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x4);
  local_4._0_1_ = 1;
  CFunctor::CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x8);
  local_4._0_1_ = 2;
  CFunctor::CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0xc);
  local_4._0_1_ = 3;
  CFunctor::CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x10);
  local_4._0_1_ = 4;
  CFunctor::CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x14);
  local_4._0_1_ = 5;
  CFunctor::CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x18);
  local_4 = CONCAT31(local_4._1_3_,6);
  CFunctor::CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x1c);
  ExceptionList = local_c;
  return this;
}



/* ---- ~CF5MiniChannelListWnd @ 60a0f9c0 size=157 ---- */

/* public: __thiscall CF5MiniChannelListWnd::~CF5MiniChannelListWnd(void) */

void __thiscall CF5MiniChannelListWnd::~CF5MiniChannelListWnd(CF5MiniChannelListWnd *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xf9c0  48  ??1CF5MiniChannelListWnd@@QAE@XZ */
  puStack_8 = &LAB_60a13b54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 6;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x1c);
  local_4._0_1_ = 5;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x18);
  local_4._0_1_ = 4;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x14);
  local_4._0_1_ = 3;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x10);
  local_4._0_1_ = 2;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0xc);
  local_4._0_1_ = 1;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x8);
  local_4 = (uint)local_4._1_3_ << 8;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5MiniChannelListWnd_data).offset_0x4);
  local_4 = 0xffffffff;
  CFunctor::~CFunctor((CFunctor *)&this->CF5MiniChannelListWnd_data);
  ExceptionList = local_c;
  return;
}



/* ---- CF5DialogRoot::AfterShowIt @ 60a0fa60 size=3 ---- */

/* public: virtual void __thiscall CF5DialogRoot::AfterShowIt(class CParam &) */

void __thiscall CF5DialogRoot::CF5DialogRoot__AfterShowIt(CF5DialogRoot *this,CParam *param_1)

{
                    /* 0xfa60  84  ?AfterShowIt@CF5DialogRoot@@UAEXAAVCParam@@@Z
                       0xfa60  186  ?GetDialogData@CF5DialogRoot@@UAEXAAVCParam@@@Z
                       0xfa60  209  ?InitDialogData@CF5DialogRoot@@UAEXAAVCParam@@@Z
                       0xfa60  312  ?OnCreate@CF5ChannelLobbyWnd@@UAEXAAUIParam@@@Z
                       0xfa60  313  ?OnCreate@CF5ChatWnd@@UAEXAAUIParam@@@Z
                       0xfa60  315  ?OnCreate@CF5MiniChannelListWnd@@UAEXAAUIParam@@@Z
                       0xfa60  318  ?OnDestroy@CF5ChannelLobbyWnd@@UAEXAAUIParam@@@Z
                       0xfa60  319  ?OnDestroy@CF5ChatWnd@@UAEXAAUIParam@@@Z
                       0xfa60  322  ?OnDestroy@CF5MiniChannelListWnd@@UAEXAAUIParam@@@Z
                       0xfa60  329  ?OnEnableInviteBtn@CF5MainFrmWnd@@UAEXH@Z
                       0xfa60  330  ?OnEnableViewRoomListBtn@CF5MiniChannelListWnd@@UAEXH@Z
                       0xfa60  331  ?OnEnableWindow@CF5ChannelLobbyWnd@@UAEXH@Z
                       0xfa60  338  ?OnSetChannelInfoText@CF5MiniChannelListWnd@@UAEXPBD@Z
                       0xfa60  339  ?OnSetHanChatBkColor@CF5ChatWnd@@UAEXK@Z
                       0xfa60  340  ?OnSetHanChatEditBkColor@CF5ChatWnd@@UAEXK@Z
                       0xfa60  341  ?OnTimer@CF5DialogRoot@@UAEXI@Z
                       0xfa60  344  ?OnUpdateAvatar@CF5ChannelLobbyWnd@@UAEXPAD@Z
                       0xfa60  347  ?OnUpdateMemberList@CF5ChannelLobbyWnd@@UAEXAAUIParam@@@Z
                       0xfa60  348  ?OnUpdateMsnBuddyList@CF5ChannelLobbyWnd@@UAEXAAUIParam@@@Z
                       0xfa60  350  ?OnUpdateNotice@CF5ChannelLobbyWnd@@UAEXAAUIParam@@@Z
                       0xfa60  351  ?OnUpdateRoomList@CF5ChannelLobbyWnd@@UAEXAAUIParam@@@Z
                       0xfa60  354  ?PlayEventSound@CF5GameWnd@@UAEXH@Z
                       0xfa60  366  ?RegisterHandler@CF5GameWnd@@QAEXPAVCF5GameView@@@Z
                       0xfa60  389  ?ShowWindow@CF5ChannelLobbyWnd@@UAEXH@Z
                       0xfa60  390  ?ShowWindow@CF5MiniChannelListWnd@@UAEXH@Z
                       0xfa60  394  ?StopReceiveResponse@CF5DialogRoot@@QAEXAAUIParam@@@Z
                       0xfa60  395  ?UpdateChanceInfo@CF5GameWnd@@UAEXPAVCMemberData@@@Z */
  return;
}



/* ---- FUN_60a0fa70 @ 60a0fa70 size=90 ---- */

undefined4 FUN_60a0fa70(HINSTANCE__ *param_1,int param_2)

{
  int iVar1;
  CDynLinkLibrary *this;
  
  if (param_2 == 1) {
    iVar1 = AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_60a247c4,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    this = operator_new(0x40);
    if (this != (CDynLinkLibrary *)0x0) {
      CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_60a247c4,0);
      return 1;
    }
  }
  else if (param_2 == 0) {
    AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_60a247c4,0);
  }
  return 1;
}



/* ---- FUN_60a0fad0 @ 60a0fad0 size=40 ---- */

undefined4 FUN_60a0fad0(undefined4 param_1,int param_2)

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



/* ---- ClearDialogList @ 60a0fb00 size=312 ---- */

/* public: void __thiscall CF5DialogList::ClearDialogList(void) */

void __thiscall CF5DialogList::ClearDialogList(CF5DialogList *this)

{
  int *piVar1;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  tVar2;
  int *piVar3;
  int iVar4;
  undefined1 uStack_9;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  local_8;
  int *local_4;
  
                    /* 0xfb00  90  ?ClearDialogList@CF5DialogList@@QAEXXZ */
  local_4 = (int *)*(this->
                    CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
                    ).offset_0x14;
  local_8 = this->
            tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  ;
  while( true ) {
    piVar3 = local_4;
    tVar2 = local_8;
    piVar1 = (this->
             CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
             ).offset_0x14;
    if ((local_8 ==
         (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          )0x0) ||
       (local_8 !=
        this->
        tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
       )) {
      _invalid_parameter_noinfo();
    }
    if (piVar3 == piVar1) break;
    if (tVar2 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                  )0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)tVar2;
    }
    if (piVar3 == *(int **)(iVar4 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    piVar1 = (int *)piVar3[10];
    if (piVar1[1] != 0) {
      (**(code **)(*piVar1 + 0x10))(2);
    }
    (**(code **)(*piVar1 + 0x2c))();
    if (tVar2 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                  )0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)tVar2;
    }
    if (piVar3 == *(int **)(iVar4 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    if (piVar3[10] != 0) {
      if (tVar2 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                    )0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)tVar2;
      }
      if (piVar3 == *(int **)(iVar4 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      if ((undefined4 *)piVar3[10] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[10])(1);
      }
      if (tVar2 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                    )0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)tVar2;
      }
      if (piVar3 == *(int **)(iVar4 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      piVar3[10] = 0;
    }
    FUN_60a0da70((int *)&local_8);
  }
  piVar1 = (this->
           CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
           ).offset_0x14;
  tVar2 = this->
          tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  ;
  FUN_60a0dd40(&uStack_9,(int *)tVar2,*piVar1,(int *)tVar2,(int)piVar1);
  FUN_60a0e0d0((int *)(this->
                      CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
                      ).offset_0x14[1]);
  piVar1 = (this->
           CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
           ).offset_0x14;
  piVar1[1] = (int)piVar1;
  piVar1 = (this->
           CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
           ).offset_0x14;
  (this->
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
  ).offset_0x18 = 0;
  *piVar1 = (int)piVar1;
  piVar1 = (this->
           CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_data
           ).offset_0x14;
  piVar1[2] = (int)piVar1;
  return;
}



/* ---- CF5DialogList @ 60a0fc40 size=39 ---- */

/* public: __thiscall CF5DialogList::CF5DialogList(void) */

CF5DialogList * __thiscall CF5DialogList::CF5DialogList(CF5DialogList *this)

{
                    /* 0xfc40  19  ??0CF5DialogList@@QAE@XZ */
                    /* inlined constructor:
                       CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                        */
  this->vftablePtr =
       (CF5DialogList_vftable *)
       &CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
        ::_vftable_;
  FUN_60a0ec40(&this->
                tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
              );
  this->vftablePtr = &_vftable_;
  return this;
}



/* ---- ~CF5DialogList @ 60a0fc70 size=91 ---- */

/* public: virtual __thiscall CF5DialogList::~CF5DialogList(void) */

void __thiscall CF5DialogList::~CF5DialogList(CF5DialogList *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfc70  41  ??1CF5DialogList@@UAE@XZ */
  puStack_8 = &LAB_60a13b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  ClearDialogList(this);
  local_4 = 0xffffffff;
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
  ~CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            ((CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
              *)this);
  ExceptionList = local_c;
  return;
}



/* ---- F5DialogList @ 60a0fcd0 size=134 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class CF5DialogList & __cdecl F5DialogList(void) */

CF5DialogList * __cdecl F5DialogList(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfcd0  182  ?F5DialogList@@YAAAVCF5DialogList@@XZ */
  puStack_8 = &LAB_60a13bae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_60a24838 & 1) == 0) {
    DAT_60a24838 = DAT_60a24838 | 1;
    local_4 = 0;
                    /* inlined constructor or destructor (approx location) for
                       CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
                        */
    _DAT_60a24814 =
         &CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
          ::_vftable_;
    FUN_60a0ec40((undefined4 *)&DAT_60a24818);
                    /* inlined constructor or destructor (approx location) for CF5DialogList */
    _DAT_60a24814 =
         (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>_vftable
          *)&CF5DialogList::_vftable_;
    _atexit((_func_4879 *)&LAB_60a14120);
  }
  ExceptionList = local_c;
  return (CF5DialogList *)&DAT_60a24814;
}



/* ---- CF5DialogCmp::OnDetached @ 60a0fd60 size=12 ---- */

/* public: virtual bool __thiscall CF5DialogCmp::OnDetached(void) */

bool __thiscall CF5DialogCmp::CF5DialogCmp__OnDetached(CF5DialogCmp *this)

{
                    /* 0xfd60  325  ?OnDetached@CF5DialogCmp@@UAE_NXZ */
  operator_delete(this);
  return true;
}



/* ---- CF5DialogCmp::Msg_ShowRoomPasswordDialog @ 60a0fd70 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowRoomPasswordDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowRoomPasswordDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfd70  255  ?Msg_ShowRoomPasswordDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgRmPw",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowItemWebDialog @ 60a0fd90 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowItemWebDialog(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_ShowItemWebDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfd90  251  ?Msg_ShowItemWebDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgItemWeb",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowAccuseUserDialog @ 60a0fdb0 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowAccuseUserDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowAccuseUserDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfdb0  243  ?Msg_ShowAccuseUserDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgAccuseUser",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowAccuseConfirmDialog @ 60a0fdd0 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowAccuseConfirmDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowAccuseConfirmDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfdd0  242  ?Msg_ShowAccuseConfirmDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgAccuseConfirm",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowMemberInfoDialog @ 60a0fdf0 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowMemberInfoDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowMemberInfoDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfdf0  252  ?Msg_ShowMemberInfoDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgMemberInfo",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowInviteWaitingDialog @ 60a0fe10 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowInviteWaitingDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowInviteWaitingDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfe10  250  ?Msg_ShowInviteWaitingDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgInviteWaiting",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowInviteChnlToWebDialog @ 60a0fe30 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowInviteChnlToWebDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowInviteChnlToWebDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfe30  247  ?Msg_ShowInviteChnlToWebDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z
                        */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgInviteChnlToWeb",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowInviteGameToChnlDialog @ 60a0fe50 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowInviteGameToChnlDialog(struct IParam &)
    */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowInviteGameToChnlDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfe50  248  ?Msg_ShowInviteGameToChnlDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z
                        */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgInviteGameToChnl",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowEndingPopupDialog @ 60a0fe70 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowEndingPopupDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowEndingPopupDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfe70  246  ?Msg_ShowEndingPopupDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgEndingPopup",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowMsgBox @ 60a0fe90 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowMsgBox(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_ShowMsgBox(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfe90  253  ?Msg_ShowMsgBox@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgMsgBox",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowThreadLoadingWnd @ 60a0feb0 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowThreadLoadingWnd(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowThreadLoadingWnd(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfeb0  260  ?Msg_ShowThreadLoadingWnd@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgThreadLoadingDlg",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowShutdownNoticeDialog @ 60a0fed0 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowShutdownNoticeDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowShutdownNoticeDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfed0  258  ?Msg_ShowShutdownNoticeDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgShutdownNotice",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowShutdownExitDialog @ 60a0fef0 size=20 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowShutdownExitDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowShutdownExitDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  
                    /* 0xfef0  257  ?Msg_ShowShutdownExitDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgShutdownExit",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowDialog @ 60a0ff10 size=57 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowDialog(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_ShowDialog(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  char *unaff_EDI;
  undefined4 local_4;
  
                    /* 0xff10  245  ?Msg_ShowDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a1695c,&local_4);
  iVar1 = (*this->vftablePtr->ShowDialog)(this,unaff_EDI,param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ShowInviteResponseDialog @ 60a0ff50 size=144 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowInviteResponseDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowInviteResponseDialog(CF5DialogCmp *this,IParam *param_1)

{
  IParam *pIVar1;
  SGlobalInfo *pSVar2;
  CAppRunningState *pCVar3;
  int iVar4;
  char unaff_SI;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0xff50  249  ?Msg_ShowInviteResponseDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  pIVar1 = param_1;
  (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a16158,&param_1);
  if (unaff_SI == '\x01') {
    uVar5 = DAT_60a2483c;
    uVar6 = DAT_60a24840;
    pSVar2 = GInfo();
    pCVar3 = SGlobalInfo::AppRunningState(pSVar2);
    CAppRunningState::AddAppState(pCVar3,uVar5,uVar6);
    iVar4 = (*this->vftablePtr->ShowDialog)(this,"dlgInviteResponse",pIVar1);
    return iVar4;
  }
  uVar5 = DAT_60a2483c;
  uVar6 = DAT_60a24840;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::AppRunningState(pSVar2);
  CAppRunningState::RemoveAppState(pCVar3,uVar5,uVar6);
  iVar4 = (*this->vftablePtr->ShowDialog)(this,"dlgInviteResponse",pIVar1);
  return iVar4;
}



/* ---- CF5DialogCmp::Msg_ShowSettingDialog @ 60a0ffe0 size=68 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowSettingDialog(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_ShowSettingDialog(CF5DialogCmp *this,IParam *param_1)

{
  IGod *pIVar1;
  int iVar2;
  
                    /* 0xffe0  256  ?Msg_ShowSettingDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  pIVar1 = God();
  iVar2 = (**(code **)(*(int *)pIVar1 + 0x10))("messenger","msnGetPref",param_1,1);
  if (iVar2 == 0x40000000) {
    return 0x40000000;
  }
  iVar2 = (*this->vftablePtr->ShowDialog)(this,"dlgSetting",param_1);
  return iVar2;
}



/* ---- CF5DialogCmp::Msg_CreateSplashWnd @ 60a10030 size=35 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_CreateSplashWnd(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_CreateSplashWnd(CF5DialogCmp *this,IParam *param_1)

{
  undefined4 local_4;
  
                    /* 0x10030  226  ?Msg_CreateSplashWnd@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  local_4 = 0;
  (**(code **)(*(int *)param_1 + 0x44))(&DAT_60a17734,&local_4);
  return 0;
}



/* ---- CF5DialogCmp::Msg_ShowSplashWnd @ 60a10060 size=79 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowSplashWnd(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_ShowSplashWnd(CF5DialogCmp *this,IParam *param_1)

{
  int iVar1;
  undefined4 unaff_EDI;
  undefined1 local_1;
  
                    /* 0x10060  259  ?Msg_ShowSplashWnd@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a16158,&local_1);
  if ((char)((uint)unaff_EDI >> 0x18) == '\x01') {
    (**(code **)(*(int *)param_1 + 0x58))(&DAT_60a17748,&this->CF5DialogCmp_data);
  }
  iVar1 = (*this->vftablePtr->ShowDialog)(this,"dlgSplash",param_1);
  return iVar1;
}



/* ---- CF5DialogCmp::Msg_ClearDialogList @ 60a100b0 size=17 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_ClearDialogList(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_ClearDialogList(CF5DialogCmp *this,IParam *param_1)

{
  CF5DialogList *this_00;
  
                    /* 0x100b0  224  ?Msg_ClearDialogList@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  this_00 = (CF5DialogList *)F5DialogList();
  CF5DialogList::ClearDialogList(this_00);
  return 0;
}



/* ---- CF5DialogCmp @ 60a10170 size=16 ---- */

/* public: __thiscall CF5DialogCmp::CF5DialogCmp(void) */

void __thiscall CF5DialogCmp::CF5DialogCmp(CF5DialogCmp *this)

{
                    /* 0x10170  17  ??0CF5DialogCmp@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  (this->CF5DialogCmp_data).offset_0x0 = 0;
  return;
}



/* ---- CF5DialogCmp::Msg_SplashWndCancel @ 60a10180 size=466 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_SplashWndCancel(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_SplashWndCancel(CF5DialogCmp *this,IParam *param_1)

{
  CWinThread *pCVar1;
  CWnd *this_00;
  IGod *pIVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 uStack_13c;
  CF5DialogCmp *local_11c [26];
  CParam aCStack_b4 [32];
  CParam aCStack_94 [100];
  uint uStack_30;
  void *pvStack_2c;
  uint uStack_24;
  undefined1 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10180  261  ?Msg_SplashWndCancel@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a13be8;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)local_11c;
  ExceptionList = &local_c;
  local_11c[0] = this;
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    this_00 = (CWnd *)0x0;
  }
  else {
    this_00 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  CWnd::ShowWindow(this_00,5);
  CParam::CParam(aCStack_94,false);
  uStack_4 = 0;
  uStack_13c = (char *)0x60a10210;
  CParam::AddValue(aCStack_94,"p000",-1);
  pIVar2 = God();
  uStack_13c = "selectChannel";
  (**(code **)(*(int *)pIVar2 + 0x10))("channelList");
  iVar3 = 1;
  switch(*(undefined4 *)(unaff_EDI + 4)) {
  case 0x2739:
  case 0x273a:
    iVar3 = 0;
    break;
  case 0x273e:
  case 0x273f:
  case 0x2746:
  case 0x27b5:
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))("channel","sendExitChannel",Void_exref,0);
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))("channelList","clearChannelList",Void_exref,1);
  case 0x273d:
    pIVar2 = God();
    (**(code **)(*(int *)pIVar2 + 0x10))("channel","disconnectChannelServer",Void_exref,1);
  }
  CParam::CParam((CParam *)(local_11c + -3),false);
  uStack_14 = 1;
  CParam::AddValue((CParam *)(local_11c + -3),"p119",0);
  CParam::AddValue((CParam *)(local_11c + -3),"p133",iVar3);
  pIVar2 = God();
  (**(code **)(*(int *)pIVar2 + 0x10))("channelList","showWindow",local_11c + -3,1);
  uStack_24 = uStack_24 & 0xffffff00;
  CParam::~CParam((CParam *)(local_11c + -7));
  uStack_24 = 0xffffffff;
  CParam::~CParam(aCStack_b4);
  ExceptionList = pvStack_2c;
  iVar3 = __security_check_cookie(uStack_30 ^ (uint)&uStack_13c);
  return iVar3;
}



/* ---- CF5DialogCmp::Msg_ShowCreateRoomDialog @ 60a103f0 size=734 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual int __thiscall CF5DialogCmp::Msg_ShowCreateRoomDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_ShowCreateRoomDialog(CF5DialogCmp *this,IParam *param_1)

{
  bool bVar1;
  CSimpleStringT<char,1> *this_00;
  SGlobalInfo *pSVar2;
  CMetpParserRet *pCVar3;
  undefined4 uVar4;
  CAppRunningState *pCVar5;
  IGod *pIVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uStack_19c;
  char cVar9;
  undefined4 uStack_18c;
  char *pcStack_188;
  undefined4 uStack_184;
  char *pcStack_180;
  undefined4 uStack_17c;
  char *pcStack_178;
  undefined4 uStack_174;
  char *pcStack_170;
  undefined4 uStack_16c;
  NInfoTypes NVar10;
  undefined *puVar11;
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> aCStack_124 [4];
  CF5DialogCmp *local_120;
  undefined1 local_11c [24];
  CParam aCStack_104 [124];
  uint uStack_88;
  void *pvStack_84;
  undefined4 uStack_74;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x103f0  244  ?Msg_ShowCreateRoomDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13c44;
  local_c = ExceptionList;
  local_10 = DAT_60a24730 ^ (uint)aCStack_124;
  ExceptionList = &local_c;
  local_120 = this;
  this_00 = (CSimpleStringT<char,1> *)LoadStr((int)local_11c);
  iVar7 = *(int *)param_1;
  local_4 = 0;
  ATL::CSimpleStringT<char,1>::operator_char_const_(this_00);
  (**(code **)(iVar7 + 0x20))();
  local_c = (void *)0xffffffff;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>(aCStack_124);
  (**(code **)(*(int *)param_1 + 0x20))();
  (**(code **)(*(int *)param_1 + 0x20))();
  (**(code **)(*(int *)param_1 + 0x20))();
  iVar7 = *(int *)param_1;
  puVar11 = &DAT_60a1780c;
  NVar10 = 1;
  pSVar2 = GInfo();
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar10);
  FUN_60a05f40(pCVar3,puVar11);
  (**(code **)(iVar7 + 0x3c))();
  iVar7 = *(int *)param_1;
  puVar11 = &DAT_60a177fc;
  NVar10 = 1;
  uStack_16c = 0x60a104f3;
  pSVar2 = GInfo();
  uStack_16c = 0x60a104f7;
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar10);
  FUN_60a05f40(pCVar3,puVar11);
  uStack_16c = 0x60a1050b;
  (**(code **)(iVar7 + 0x3c))();
  uStack_16c = 0;
  pcStack_170 = "k176e";
  uStack_174 = 0x60a1051b;
  (**(code **)(*(int *)param_1 + 0x3c))();
  uStack_174 = 0;
  pcStack_178 = "k177e";
  uStack_17c = 0x60a1052b;
  (**(code **)(*(int *)param_1 + 0x3c))();
  uStack_17c = 0;
  pcStack_180 = "k178e";
  uStack_184 = 0x60a1053b;
  (**(code **)(*(int *)param_1 + 0x3c))();
  uStack_184 = 0;
  pcStack_188 = "k179e";
  uStack_18c = (undefined *)0x60a1054b;
  (**(code **)(*(int *)param_1 + 0x3c))();
  uStack_18c = &DAT_60a177d0;
  (**(code **)(*(int *)param_1 + 0x20))();
  iVar7 = *(int *)param_1;
  puVar11 = &DAT_60a177c8;
  NVar10 = 1;
  uStack_19c = 0x60a10569;
  pSVar2 = GInfo();
  uStack_19c = 0x60a1056d;
  pCVar3 = SGlobalInfo::MetpInfo(pSVar2,NVar10);
  uVar4 = FUN_60a05f40(pCVar3,puVar11);
  cVar9 = (char)((uint)uVar4 >> 0x18);
  uStack_19c = 0x60a10581;
  (**(code **)(iVar7 + 0x3c))();
  uStack_19c = 0;
  (**(code **)(*(int *)param_1 + 0x3c))("k200e");
  (**(code **)(*(int *)param_1 + 0x68))(&DAT_60a16158,(int)&uStack_18c + 3);
  if (cVar9 == '\x01') {
    pcVar8 = DAT_60a2483c;
    uVar4 = DAT_60a24840;
    pSVar2 = GInfo();
    pCVar5 = SGlobalInfo::AppRunningState(pSVar2);
    bVar1 = CAppRunningState::IsRunning(pCVar5,pcVar8,uVar4);
    if (bVar1) {
      CParam::CParam(aCStack_104,false);
      uStack_74 = 1;
      CParam::AddValue(aCStack_104,"k64e","v8e");
      pIVar6 = God();
      (**(code **)(*(int *)pIVar6 + 0x20))(&DAT_60a165c8,"onClickResponseYNBtn",aCStack_104,0);
      CParam::CParam((CParam *)(aCStack_124 + -0x74),false);
      pvStack_84 = (void *)CONCAT31(pvStack_84._1_3_,2);
      CParam::AddValue((CParam *)(aCStack_124 + -0x74),"p064",0);
      pIVar6 = God();
      (**(code **)(*(int *)pIVar6 + 0x10))
                (&DAT_60a165c8,"showInviteResponseDlg",aCStack_124 + -0x74,1);
      uStack_74 = CONCAT31(uStack_74._1_3_,1);
      CParam::~CParam((CParam *)&pcStack_188);
      uStack_74 = 0xffffffff;
      CParam::~CParam(aCStack_104);
    }
  }
  (**(code **)(_DAT_60a16a5c + 8))("dlgRmCreateDlg",param_1);
  ExceptionList = pvStack_84;
  iVar7 = __security_check_cookie(uStack_88 ^ (uint)&uStack_19c);
  return iVar7;
}



/* ---- scalar_deleting_destructor @ 60a106d0 size=18 ---- */

void __thiscall CMFunctor<CF5DialogCmp>::scalar_deleting_destructor(CMFunctor<CF5DialogCmp> *this)

{
  if (this != (CMFunctor<CF5DialogCmp> *)0x0) {
                    /* inlined destructor: CMFunctor<CF5DialogCmp>::~CMFunctor<CF5DialogCmp> */
    this->vftablePtr = &vftable;
    operator_delete(this);
  }
  return;
}



/* ---- CF5DialogCmp::CloseOPenDialog @ 60a106f0 size=154 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::CloseOPenDialog(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__CloseOPenDialog(CF5DialogCmp *this,IParam *param_1)

{
  int *piVar1;
  int iVar2;
  CF5DialogList *pCVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *local_8;
  int local_4;
  
                    /* 0x106f0  91  ?CloseOPenDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  pCVar3 = F5DialogList();
  local_4 = **(int **)(pCVar3 + 0x1c);
  local_8 = *(int **)(pCVar3 + 4);
  while( true ) {
    iVar2 = local_4;
    piVar1 = local_8;
    pCVar3 = F5DialogList();
    iVar4 = *(int *)(pCVar3 + 0x1c);
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(pCVar3 + 4))) {
      _invalid_parameter_noinfo();
    }
    if (iVar2 == iVar4) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (iVar2 == *(int *)(iVar4 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    piVar1 = *(int **)(iVar2 + 0x28);
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 != 0) {
      if (piVar1[1] == 1) {
        pcVar5 = *(code **)(*piVar1 + 0x10);
        uVar6 = 2;
      }
      else {
        pcVar5 = *(code **)(*piVar1 + 0x14);
        uVar6 = 0;
      }
      (*pcVar5)(uVar6);
    }
    FUN_60a0da70((int *)&local_8);
  }
  return 0;
}



/* ---- CF5DialogCmp::Msg_CheckRunningModalDialog @ 60a10790 size=154 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_CheckRunningModalDialog(struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__Msg_CheckRunningModalDialog(CF5DialogCmp *this,IParam *param_1)

{
  int *piVar1;
  int iVar2;
  CF5DialogList *pCVar3;
  int iVar4;
  int *local_8;
  int local_4;
  
                    /* 0x10790  223  ?Msg_CheckRunningModalDialog@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  pCVar3 = F5DialogList();
  local_4 = **(int **)(pCVar3 + 0x1c);
  local_8 = *(int **)(pCVar3 + 4);
  while( true ) {
    iVar2 = local_4;
    piVar1 = local_8;
    pCVar3 = F5DialogList();
    iVar4 = *(int *)(pCVar3 + 0x1c);
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(pCVar3 + 4))) {
      _invalid_parameter_noinfo();
    }
    if (iVar2 == iVar4) {
      return 10;
    }
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (iVar2 == *(int *)(iVar4 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    piVar1 = *(int **)(iVar2 + 0x28);
    iVar4 = (**(code **)(*piVar1 + 8))();
    if ((iVar4 != 0) && (piVar1[1] != 0)) break;
    FUN_60a0da70((int *)&local_8);
  }
  return 1;
}



/* ---- CF5DialogCmp::Msg_IsWindowVisible @ 60a10830 size=158 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_IsWindowVisible(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_IsWindowVisible(CF5DialogCmp *this,IParam *param_1)

{
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  *pCVar1;
  CF5DialogRoot *pCVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_38 [24];
  undefined4 uStack_20;
  undefined *puStack_1c;
  IParam **ppIStack_18;
  void *pvStack_14;
  CF5DialogCmp *pCStack_10;
  void *local_c;
  undefined1 *puStack_8;
  char *pcStack_4;
  
                    /* 0x10830  240  ?Msg_IsWindowVisible@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  pcStack_4 = (char *)0xffffffff;
  puStack_8 = &LAB_60a13c89;
  local_c = ExceptionList;
  pvStack_14 = (void *)(DAT_60a24730 ^ (uint)&pCStack_10);
  ExceptionList = &local_c;
  ppIStack_18 = &param_1;
  puStack_1c = &DAT_60a1695c;
  uStack_20 = 0x60a10866;
  pCStack_10 = this;
  (**(code **)(*(int *)param_1 + 0x44))();
  ppIStack_18 = (IParam **)abStack_38;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_38,pcStack_4);
  local_c = (void *)0x0;
  pCVar1 = (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            *)F5DialogList();
  local_c = (void *)0xffffffff;
  pCVar2 = CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           ::Get(pCVar1);
  if (pCVar2 != (CF5DialogRoot *)0x0) {
    uStack_20 = 0x60a108a3;
    iVar3 = (**(code **)(*(int *)pCVar2 + 8))();
    if (iVar3 == 1) {
      ExceptionList = pvStack_14;
      return 1;
    }
  }
  ExceptionList = pvStack_14;
  return 0;
}



/* ---- CF5DialogCmp::Msg_IsSplashOn @ 60a108d0 size=114 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::Msg_IsSplashOn(struct IParam &) */

int __thiscall CF5DialogCmp::CF5DialogCmp__Msg_IsSplashOn(CF5DialogCmp *this,IParam *param_1)

{
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  *pCVar1;
  CF5DialogRoot *pCVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_30 [24];
  undefined4 uStack_18;
  uint uStack_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x108d0  239  ?Msg_IsSplashOn@CF5DialogCmp@@MAEHAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13c89;
  local_c = ExceptionList;
  uStack_14 = DAT_60a24730 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = abStack_30;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_30,"dlgSplash");
  local_4 = 0;
  pCVar1 = (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            *)F5DialogList();
  local_4 = 0xffffffff;
  pCVar2 = CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           ::Get(pCVar1);
  uStack_18 = 0x60a1092a;
  iVar3 = (**(code **)(*(int *)pCVar2 + 8))();
  ExceptionList = local_c;
  return (uint)(iVar3 == 1);
}



/* ---- CF5DialogCmp::ShowDialog @ 60a10950 size=463 ---- */

/* protected: virtual int __thiscall CF5DialogCmp::ShowDialog(char const *,struct IParam &) */

int __thiscall
CF5DialogCmp::CF5DialogCmp__ShowDialog(CF5DialogCmp *this,char *param_1,IParam *param_2)

{
  byte bVar1;
  char cVar2;
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  *pCVar3;
  CF5DialogRoot *pCVar4;
  int iVar5;
  byte *pbVar6;
  IGod *pIVar7;
  char *pcVar8;
  code *pcVar9;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint unaff_EDI;
  bool bVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_40 [4];
  undefined4 uStack_3c;
  IParam *pIStack_38;
  IParam *pIStack_34;
  char *pcStack_30;
  IParam *pIStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined1 auStack_12 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10950  385  ?ShowDialog@CF5DialogCmp@@MAEHPBDAAUIParam@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13cc2;
  local_c = ExceptionList;
  uStack_24 = DAT_60a24730 ^ (uint)(auStack_12 + -0xe);
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_40,"dlgShutdownExit");
  local_4 = 0;
  pCVar3 = (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            *)F5DialogList();
  local_4 = 0xffffffff;
  pCVar4 = CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           ::Get(pCVar3);
  if (pCVar4 != (CF5DialogRoot *)0x0) {
    puStack_28 = (undefined *)0x60a109b2;
    iVar5 = (**(code **)(*(int *)pCVar4 + 8))();
    if (iVar5 != 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  pcVar8 = "dlgShutdownExit";
  pbVar6 = (byte *)param_1;
  do {
    bVar1 = *pbVar6;
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_60a109f8:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_60a109fc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_60a109f8;
    pbVar6 = pbVar6 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_60a109fc:
  if (iVar5 == 0) {
    puStack_28 = (undefined *)0x60a10a0b;
    pIVar7 = God();
    puStack_28 = (undefined *)0x1;
    pIStack_2c = (IParam *)Void_exref;
    pcStack_30 = "CloseOpenDialog";
    pIStack_34 = (IParam *)&DAT_60a165c8;
    pIStack_38 = (IParam *)0x60a10a26;
    (**(code **)(*(int *)pIVar7 + 0x10))();
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_40,param_1);
  local_4 = 1;
  pCVar3 = (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            *)F5DialogList();
  local_4 = 0xffffffff;
  pCVar4 = CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           ::Get(pCVar3);
  if (pCVar4 == (CF5DialogRoot *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  puStack_28 = &DAT_60a16158;
  pIStack_2c = (IParam *)0x60a10a6e;
  cVar2 = (**(code **)(*(int *)param_2 + 0x18))();
  if (cVar2 == '\x01') {
    pIStack_2c = (IParam *)(auStack_12 + -4);
    pcStack_30 = "p064";
    pIStack_34 = (IParam *)0x60a10a85;
    (**(code **)(*(int *)param_2 + 0x68))();
  }
  iVar5 = *(int *)pCVar4;
  if ((char)((uint)unaff_EBX >> 0x10) == '\0') {
    if (*(int *)(pCVar4 + 4) == 1) {
      pcVar9 = *(code **)(iVar5 + 0x10);
      pIStack_2c = (IParam *)0x2;
    }
    else {
      pcVar9 = *(code **)(iVar5 + 0x14);
      pIStack_2c = (IParam *)0x0;
    }
    pcStack_30 = (char *)0x60a10b06;
    iVar5 = (*pcVar9)();
  }
  else {
    pIStack_2c = param_2;
    pcStack_30 = (char *)0x60a10a96;
    (**(code **)(iVar5 + 0x18))();
    pcStack_30 = "p169";
    pIStack_34 = (IParam *)0x60a10aa4;
    cVar2 = (**(code **)(*(int *)param_2 + 0x18))();
    if (cVar2 == '\x01') {
      pIStack_34 = (IParam *)(auStack_12 + -0xb);
      pIStack_38 = (IParam *)&DAT_60a16b14;
      uStack_3c = 0x60a10abb;
      (**(code **)(*(int *)param_2 + 0x68))();
    }
    if ((char)(unaff_EDI >> 0x18) == '\x01') {
      pIStack_34 = (IParam *)0x60a10aca;
      iVar5 = (**(code **)(*(int *)pCVar4 + 0xc))();
      pIStack_34 = param_2;
      pIStack_38 = (IParam *)0x60a10ad6;
      (**(code **)(*(int *)pCVar4 + 0x1c))();
    }
    else {
      pIStack_34 = (IParam *)(unaff_EDI >> 0x10 & 0xff);
      pIStack_38 = (IParam *)0x60a10ae5;
      iVar5 = (**(code **)(*(int *)pCVar4 + 0x14))();
      pIStack_38 = param_2;
      uStack_3c = 0x60a10af1;
      (**(code **)(*(int *)pCVar4 + 0x1c))();
    }
  }
  ExceptionList = unaff_ESI;
  return iVar5;
}



/* ---- Msg_CloseInviteResponseDialog @ 60a10b20 size=134 ---- */

/* protected: int __thiscall CF5DialogCmp::Msg_CloseInviteResponseDialog(struct IParam &) */

int __thiscall CF5DialogCmp::Msg_CloseInviteResponseDialog(CF5DialogCmp *this,IParam *param_1)

{
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  *pCVar1;
  CF5DialogRoot *this_00;
  char *pcVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_34 [20];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10b20  225  ?Msg_CloseInviteResponseDialog@CF5DialogCmp@@IAEHAAUIParam@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13ce9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_34,"dlgInviteResponse");
  local_4 = 0;
  pCVar1 = (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            *)F5DialogList();
  local_4 = 0xffffffff;
  this_00 = (CF5DialogRoot *)
            CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            ::Get(pCVar1);
  if (this_00 != (CF5DialogRoot *)0x0) {
    pcVar2 = (*this_00->vftablePtr->GetGameChatContent)(this_00);
    if (pcVar2 != (char *)0x0) {
      uStack_20 = 0x60a10b91;
      CF5DialogRoot::CF5DialogRoot__AfterShowIt(this_00,(CParam *)param_1);
    }
  }
  ExceptionList = local_c;
  return 0;
}



/* ---- CF5DialogCmp::OnAttached @ 60a10bb0 size=1911 ---- */

/* public: virtual bool __thiscall CF5DialogCmp::OnAttached(void) */

bool __thiscall CF5DialogCmp::CF5DialogCmp__OnAttached(CF5DialogCmp *this)

{
  IGod *pIVar1;
  undefined4 *puVar2;
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
  *pCVar3;
  CF5DialogRoot *pCVar4;
  IFunctor *pIVar5;
  CFunctor *this_00;
  char *pcVar6;
  char *pcStack_1ac;
  undefined4 *puStack_1a8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10bb0  271  ?OnAttached@CF5DialogCmp@@UAE_NXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_60a13d19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08670;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08680;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f3a0;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10160;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0c000;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10100;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10140;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a08690;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f370;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10110;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a058d0;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a057a0;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f380;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0f390;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a058f0;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a100d0;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a05810;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10120;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10150;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a057d0;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a05830;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a10130;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a05910;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_1ac,
             "dlgSplash");
  pCVar3 = (CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            *)F5DialogList();
  pCVar4 = CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
           ::Get(pCVar3);
  if (pCVar4 != (CF5DialogRoot *)0x0) {
    pIVar5 = operator_new(0xc);
    if (pIVar5 == (IFunctor *)0x0) {
      pIVar5 = (IFunctor *)0x0;
    }
    else {
      *(CMFunctor<CF5DialogCmp>_vftable **)pIVar5 = &CMFunctor<CF5DialogCmp>::vftable;
      *(CF5DialogCmp **)(pIVar5 + 4) = this;
      *(undefined1 **)(pIVar5 + 8) = &LAB_60a057d0;
    }
    this_00 = (CFunctor *)(**(code **)(*(int *)pCVar4 + 0x40))();
    CFunctor::operator=(this_00,pIVar5);
  }
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = Msg_CloseInviteResponseDialog;
  }
  (**(code **)(*(int *)pIVar1 + 8))();
  pIVar1 = God();
  puStack_1a8 = (undefined4 *)0x60a111f1;
  puStack_1a8 = operator_new(0xc);
  if (puStack_1a8 == (undefined4 *)0x0) {
    puStack_1a8 = (undefined4 *)0x0;
  }
  else {
    *puStack_1a8 = &CMFunctor<CF5DialogCmp>::vftable;
    puStack_1a8[1] = this;
    puStack_1a8[2] = &LAB_60a100e0;
  }
  pcStack_1ac = "showThreadLoadingWnd";
  (**(code **)(*(int *)pIVar1 + 8))(&DAT_60a165c8);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0a5d0;
  }
  (**(code **)(*(int *)pIVar1 + 8))(&DAT_60a165c8,"checkModalDialog",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a0c020;
  }
  (**(code **)(*(int *)pIVar1 + 8))(&DAT_60a165c8,"CloseOpenDialog",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a100f0;
  }
  pcVar6 = "closeAlarmDlg";
  (**(code **)(*(int *)pIVar1 + 8))(&DAT_60a165c8,"closeAlarmDlg",puVar2,1);
  pIVar1 = God();
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CMFunctor<CF5DialogCmp>::vftable;
    puVar2[1] = this;
    puVar2[2] = &LAB_60a100f0;
  }
  (**(code **)(*(int *)pIVar1 + 8))(&DAT_60a165c8,"showEndingPopupDlg2",puVar2,1);
  ExceptionList = pcVar6;
  return true;
}



/* ---- CF5DialogRoot @ 60a11330 size=130 ---- */

/* public: __thiscall CF5DialogRoot::CF5DialogRoot(void) */

CF5DialogRoot * __thiscall CF5DialogRoot::CF5DialogRoot(CF5DialogRoot *this)

{
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11330  21  ??0CF5DialogRoot@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60a13d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  (this->CF5DialogRoot_data).offset_0x0 = 0;
  (this->CF5DialogRoot_data).offset_0x4 = 2;
  (this->CF5DialogRoot_data).offset_0x8 = 0;
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5DialogRoot_data).field_0xc,(char *)&PTR_60a15dfc);
  this_00 = &(this->CF5DialogRoot_data).offset_0x14;
  local_4 = 0;
  (this->CF5DialogRoot_data).offset_0x10 = 0;
  CFunctor::CFunctor((CFunctor *)this_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  CFunctor::operator=((CFunctor *)this_00,(IFunctor *)0x0);
  ExceptionList = local_c;
  return this;
}



/* ---- ~CF5DialogRoot @ 60a113c0 size=89 ---- */

/* public: virtual __thiscall CF5DialogRoot::~CF5DialogRoot(void) */

void __thiscall CF5DialogRoot::~CF5DialogRoot(CF5DialogRoot *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x113c0  42  ??1CF5DialogRoot@@UAE@XZ */
  puStack_8 = &LAB_60a13d8c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 0;
  CFunctor::~CFunctor((CFunctor *)&(this->CF5DialogRoot_data).offset_0x14);
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             &(this->CF5DialogRoot_data).field_0xc);
  ExceptionList = local_c;
  return;
}



/* ---- CF5DialogRoot::EndDialog @ 60a11420 size=6 ---- */

/* public: virtual int __thiscall CF5DialogRoot::EndDialog(int) */

int __thiscall CF5DialogRoot::CF5DialogRoot__EndDialog(CF5DialogRoot *this,int param_1)

{
                    /* 0x11420  102  ?EndDialog@CF5DialogRoot@@UAEHH@Z */
  return (this->CF5DialogRoot_data).offset_0x4;
}



/* ---- CF5DialogRoot::OnOK @ 60a11430 size=24 ---- */

/* public: virtual void __thiscall CF5DialogRoot::OnOK(void) */

void __thiscall CF5DialogRoot::CF5DialogRoot__OnOK(CF5DialogRoot *this)

{
                    /* 0x11430  337  ?OnOK@CF5DialogRoot@@UAEXXZ */
  if ((this->CF5DialogRoot_data).offset_0x0 == 0) {
    (*this->vftablePtr->Evt_ChannelGaeaPrizeData)(this,(IParam *)0x0);
    return;
  }
  (*this->vftablePtr->EndDialog)(this,1);
  return;
}



/* ---- CF5DialogRoot::OnCancel @ 60a11450 size=24 ---- */

/* public: virtual void __thiscall CF5DialogRoot::OnCancel(void) */

void __thiscall CF5DialogRoot::CF5DialogRoot__OnCancel(CF5DialogRoot *this)

{
                    /* 0x11450  275  ?OnCancel@CF5DialogRoot@@UAEXXZ */
  if ((this->CF5DialogRoot_data).offset_0x0 == 0) {
    (*this->vftablePtr->Evt_ChannelGaeaPrizeData)(this,(IParam *)0x0);
    return;
  }
  (*this->vftablePtr->EndDialog)(this,2);
  return;
}



/* ---- EndModalLoop @ 60a11470 size=8 ---- */

/* public: void __thiscall CF5DialogRoot::EndModalLoop(void) */

void __thiscall CF5DialogRoot::EndModalLoop(CF5DialogRoot *this)

{
                    /* 0x11470  103  ?EndModalLoop@CF5DialogRoot@@QAEXXZ */
  (this->CF5DialogRoot_data).offset_0x8 = 0;
  return;
}



/* ---- CF5DialogRoot::DoModal @ 60a11480 size=65 ---- */

/* public: virtual int __thiscall CF5DialogRoot::DoModal(void) */

int __thiscall CF5DialogRoot::CF5DialogRoot__DoModal(CF5DialogRoot *this)

{
  CWinThread *pCVar1;
  CF5MainFrmWnd *this_00;
  
                    /* 0x11480  101  ?DoModal@CF5DialogRoot@@UAEHXZ */
  (*this->vftablePtr->CreateCaptionButtons)(this);
  (this->CF5DialogRoot_data).offset_0x0 = 1;
  (this->CF5DialogRoot_data).offset_0x8 = 1;
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    this_00 = (CF5MainFrmWnd *)0x0;
  }
  else {
    this_00 = (CF5MainFrmWnd *)(**(code **)(*(int *)pCVar1 + 0x7c))();
  }
  CF5MainFrmWnd::SetCurModalDlg(this_00,(CF5DialogRoot *)this);
  (*this->vftablePtr->CreateCaptionButtons)(this);
  return (this->CF5DialogRoot_data).offset_0x4;
}



/* ---- CF5DialogRoot::RunModalLoop @ 60a114d0 size=229 ---- */

/* public: virtual void __thiscall CF5DialogRoot::RunModalLoop(void) */

void __thiscall CF5DialogRoot::CF5DialogRoot__RunModalLoop(CF5DialogRoot *this)

{
  AFX_MODULE_STATE *pAVar1;
  int *piVar2;
  CWinThread *pCVar3;
  undefined4 uVar4;
  int *piVar5;
  BOOL BVar6;
  int iVar7;
  tagMSG local_1c;
  
                    /* 0x114d0  371  ?RunModalLoop@CF5DialogRoot@@UAEXXZ */
  local_1c.hwnd = (HWND)0x0;
  local_1c.message = 0;
  local_1c.wParam = 0;
  local_1c.lParam = 0;
  local_1c.time = 0;
  local_1c.pt.x = 0;
  local_1c.pt.y = 0;
  pAVar1 = AfxGetModuleState();
  piVar2 = (int *)__RTDynamicCast(*(undefined4 *)(pAVar1 + 4),0,&CWinApp::RTTI_Type_Descriptor,
                                  &CF5App::RTTI_Type_Descriptor,0);
  pCVar3 = AfxGetThread();
  if (pCVar3 == (CWinThread *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(int *)pCVar3 + 0x7c))();
  }
  piVar5 = (int *)__RTDynamicCast(uVar4,0,&CWnd::RTTI_Type_Descriptor,
                                  &CFrameWnd::RTTI_Type_Descriptor,0);
  iVar7 = (this->CF5DialogRoot_data).offset_0x8;
  while (iVar7 != 0) {
    BVar6 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
    if (BVar6 == 0) {
      (**(code **)(*piVar2 + 0xec))();
    }
    else {
      iVar7 = (**(code **)(*piVar5 + 0x110))(&local_1c);
      if (iVar7 == 0) {
        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
      }
    }
    iVar7 = (this->CF5DialogRoot_data).offset_0x8;
  }
  return;
}



/* ---- CItemManager::SetAllElementsState @ 60a115b8 size=6 ---- */

bool __thiscall CItemManager::CItemManager__SetAllElementsState(CItemManager *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a115b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = SetAllElementsState(this);
  return bVar1;
}



/* ---- CItemManager::IsItemAvailable @ 60a115be size=6 ---- */

bool __thiscall CItemManager::CItemManager__IsItemAvailable(CItemManager *this,int param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a115be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = IsItemAvailable(this,param_1);
  return bVar1;
}



/* ---- CItemManager::Clear @ 60a115c4 size=6 ---- */

void __thiscall CItemManager::CItemManager__Clear(CItemManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a115c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Clear(this);
  return;
}



/* ---- CItemManager::AddItem @ 60a115ca size=6 ---- */

bool __thiscall CItemManager::CItemManager__AddItem(CItemManager *this,char *param_1,CItem *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a115ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = AddItem(this,param_1,param_2);
  return bVar1;
}



/* ---- CItemManager::DelItem @ 60a115d0 size=6 ---- */

void __thiscall CItemManager::CItemManager__DelItem(CItemManager *this,char *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a115d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DelItem(this,param_1,param_2);
  return;
}



/* ---- CItemManager::GetItem @ 60a115d6 size=6 ---- */

CItem * __thiscall CItemManager::CItemManager__GetItem(CItemManager *this,char *param_1)

{
  CItem *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a115d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetItem(this,param_1);
  return pCVar1;
}



/* ---- CItemManager::AddTryCount @ 60a115dc size=6 ---- */

void __thiscall CItemManager::CItemManager__AddTryCount(CItemManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a115dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddTryCount(this);
  return;
}



/* ---- CItemManager::GetTryCount @ 60a115e2 size=6 ---- */

int __thiscall CItemManager::CItemManager__GetTryCount(CItemManager *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a115e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetTryCount(this);
  return iVar1;
}



/* ---- CItemManager::ResetTryCount @ 60a115e8 size=6 ---- */

void __thiscall CItemManager::CItemManager__ResetTryCount(CItemManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a115e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResetTryCount(this);
  return;
}



/* ---- CItemManager::DumpAllItems @ 60a115ee size=6 ---- */

void __thiscall CItemManager::CItemManager__DumpAllItems(CItemManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a115ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DumpAllItems(this);
  return;
}



/* ---- CItemManager::SetItemState @ 60a115f4 size=6 ---- */

void __thiscall
CItemManager::CItemManager__SetItemState(CItemManager *this,int param_1,CItem *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a115f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetItemState(this,param_1,param_2);
  return;
}



/* ---- CMemberData::DrawAvata @ 60a115fa size=6 ---- */

void __thiscall
CMemberData::CMemberData__DrawAvata
          (CMemberData *this,HDC__ *param_1,int param_2,int param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x60a115fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DrawAvata(this,param_1,param_2,param_3,param_4);
  return;
}



/* ---- CCfgSetting::CheckFCName @ 60a11600 size=6 ---- */

int __thiscall CCfgSetting::CCfgSetting__CheckFCName(CCfgSetting *this,char *param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckFCName(this,param_1,param_2);
  return iVar1;
}



/* ---- CCfgSetting::SetAdvertiseCfg @ 60a11606 size=6 ---- */

int __thiscall
CCfgSetting::CCfgSetting__SetAdvertiseCfg(CCfgSetting *this,char *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetAdvertiseCfg(this,param_1,param_2);
  return iVar1;
}



/* ---- CChannelListLobbyModel::OnAttached @ 60a1160c size=6 ---- */

bool __thiscall
CChannelListLobbyModel::CChannelListLobbyModel__OnAttached(CChannelListLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1160c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CChannelListLobbyModel::OnDetached @ 60a11612 size=6 ---- */

bool __thiscall
CChannelListLobbyModel::CChannelListLobbyModel__OnDetached(CChannelListLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CChannelListLobbyModel::_SelectChannel_Tetris @ 60a11618 size=6 ---- */

void __thiscall
CChannelListLobbyModel::CChannelListLobbyModel___SelectChannel_Tetris(CChannelListLobbyModel *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _SelectChannel_Tetris(this);
  return;
}



/* ---- CChannelListLobbyModel::ConnectCdsServer @ 60a1161e size=6 ---- */

int __thiscall
CChannelListLobbyModel::CChannelListLobbyModel__ConnectCdsServer(CChannelListLobbyModel *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1161e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ConnectCdsServer(this);
  return iVar1;
}



/* ---- CChannelLobbyModel::OnAttached @ 60a11624 size=6 ---- */

bool __thiscall CChannelLobbyModel::CChannelLobbyModel__OnAttached(CChannelLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CChannelLobbyModel::OnDetached @ 60a1162a size=6 ---- */

bool __thiscall CChannelLobbyModel::CChannelLobbyModel__OnDetached(CChannelLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1162a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CChannelLobbyModel::Msg_ActivateOn @ 60a11630 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_ActivateOn(CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_ActivateOff @ 60a11636 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_ActivateOff(CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOff(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_HannotiCommonCode @ 60a1163c size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_HannotiCommonCode
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_HannotiCommonCode(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_StartNickNameProcess @ 60a11642 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_StartNickNameProcess
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_StartNickNameProcess(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_EndNickNameProcess @ 60a11648 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_EndNickNameProcess
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_EndNickNameProcess(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_GetMakeUserId @ 60a1164e size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_GetMakeUserId(CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1164e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_GetMakeUserId(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_GetCheckUserId @ 60a11654 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_GetCheckUserId(CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_GetCheckUserId(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::SetRoomInfo @ 60a1165a size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__SetRoomInfo
          (CChannelLobbyModel *this,IParam *param_1,bool param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1165a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetRoomInfo(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_SetCreateRoomOption @ 60a11660 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_SetCreateRoomOption
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_SetCreateRoomOption(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_SetCreateRoomReturn @ 60a11666 size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_SetCreateRoomReturn
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_SetCreateRoomReturn(this,param_1);
  return iVar1;
}



/* ---- CChannelLobbyModel::Msg_SetRoomPassWordReturn @ 60a1166c size=6 ---- */

int __thiscall
CChannelLobbyModel::CChannelLobbyModel__Msg_SetRoomPassWordReturn
          (CChannelLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1166c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_SetRoomPassWordReturn(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyModel::OnAttached @ 60a11672 size=6 ---- */

bool __thiscall CGameLobbyModel::CGameLobbyModel__OnAttached(CGameLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CGameLobbyModel::OnDetached @ 60a11678 size=6 ---- */

bool __thiscall CGameLobbyModel::CGameLobbyModel__OnDetached(CGameLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CGameLobbyModel::Msg_ActivateOn @ 60a1167e size=6 ---- */

int __thiscall
CGameLobbyModel::CGameLobbyModel__Msg_ActivateOn(CGameLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1167e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOn(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyModel::Msg_ActivateOff @ 60a11684 size=6 ---- */

int __thiscall
CGameLobbyModel::CGameLobbyModel__Msg_ActivateOff(CGameLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOff(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyModel::GameReport_RefreshPlayerInfoList @ 60a1168a size=6 ---- */

int __thiscall
CGameLobbyModel::CGameLobbyModel__GameReport_RefreshPlayerInfoList
          (CGameLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1168a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GameReport_RefreshPlayerInfoList(this,param_1);
  return iVar1;
}



/* ---- CGameLobbyModel::GameReport_RefreshPlayerInfo @ 60a11690 size=6 ---- */

int __thiscall
CGameLobbyModel::CGameLobbyModel__GameReport_RefreshPlayerInfo
          (CGameLobbyModel *this,int param_1,IParam *param_2,CMemberData *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GameReport_RefreshPlayerInfo(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CGameLobbyModel::GameReport_RefreshMyInfo @ 60a11696 size=6 ---- */

int __thiscall CGameLobbyModel::CGameLobbyModel__GameReport_RefreshMyInfo(CGameLobbyModel *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GameReport_RefreshMyInfo(this);
  return iVar1;
}



/* ---- CGameLobbyModel::CheckBanishInfo @ 60a1169c size=6 ---- */

bool __thiscall CGameLobbyModel::CGameLobbyModel__CheckBanishInfo(CGameLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1169c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = CheckBanishInfo(this);
  return bVar1;
}



/* ---- CBaseLobbyModel::OnAttached @ 60a116a2 size=6 ---- */

bool __thiscall CBaseLobbyModel::CBaseLobbyModel__OnAttached(CBaseLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CBaseLobbyModel::OnDetached @ 60a116a8 size=6 ---- */

bool __thiscall CBaseLobbyModel::CBaseLobbyModel__OnDetached(CBaseLobbyModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CBaseLobbyModel::Msg_ActivateOn @ 60a116ae size=6 ---- */

int __thiscall
CBaseLobbyModel::CBaseLobbyModel__Msg_ActivateOn(CBaseLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOn(this,param_1);
  return iVar1;
}



/* ---- CBaseLobbyModel::Msg_ActivateOff @ 60a116b4 size=6 ---- */

int __thiscall
CBaseLobbyModel::CBaseLobbyModel__Msg_ActivateOff(CBaseLobbyModel *this,IParam *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Msg_ActivateOff(this,param_1);
  return iVar1;
}



/* ---- CHanChatModel::OnAttached @ 60a116ba size=6 ---- */

bool __thiscall CHanChatModel::CHanChatModel__OnAttached(CHanChatModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CHanChatModel::OnDetached @ 60a116c0 size=6 ---- */

bool __thiscall CHanChatModel::CHanChatModel__OnDetached(CHanChatModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CGameWarpModel::OnAttached @ 60a116c6 size=6 ---- */

bool __thiscall CGameWarpModel::CGameWarpModel__OnAttached(CGameWarpModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CGameWarpModel::OnDetached @ 60a116cc size=6 ---- */

bool __thiscall CGameWarpModel::CGameWarpModel__OnDetached(CGameWarpModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- CGameWarpModel::RunHanStart @ 60a116d2 size=6 ---- */

void __thiscall CGameWarpModel::CGameWarpModel__RunHanStart(CGameWarpModel *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a116d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RunHanStart(this,param_1);
  return;
}



/* ---- CGameWarpModel::_GetRecommenedGameID @ 60a116d8 size=6 ---- */

void __thiscall
CGameWarpModel::CGameWarpModel___GetRecommenedGameID(CGameWarpModel *this,IParam *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a116d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _GetRecommenedGameID(this,param_1);
  return;
}



/* ---- CGameWarpModel::_GetChannelID @ 60a116de size=6 ---- */

void __thiscall
CGameWarpModel::CGameWarpModel___GetChannelID(CGameWarpModel *this,IParam *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a116de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _GetChannelID(this,param_1,param_2);
  return;
}



/* ---- CGameWarpModel::_OpenGamePage @ 60a116e4 size=6 ---- */

int __thiscall
CGameWarpModel::CGameWarpModel___OpenGamePage(CGameWarpModel *this,int param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _OpenGamePage(this,param_1,param_2);
  return iVar1;
}



/* ---- CMessengerModel::OnAttached @ 60a116ea size=6 ---- */

bool __thiscall CMessengerModel::CMessengerModel__OnAttached(CMessengerModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnAttached(this);
  return bVar1;
}



/* ---- CMessengerModel::OnDetached @ 60a116f0 size=6 ---- */

bool __thiscall CMessengerModel::CMessengerModel__OnDetached(CMessengerModel *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = OnDetached(this);
  return bVar1;
}



/* ---- operator_delete @ 60a116f6 size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a116f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- AfxGetModuleState @ 60a116fc size=6 ---- */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a116fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



/* ---- AfxGetThread @ 60a11702 size=6 ---- */

CWinThread * AfxGetThread(void)

{
  CWinThread *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetThread();
  return pCVar1;
}



/* ---- FromHandle @ 60a11708 size=6 ---- */

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}



/* ---- operator_delete[] @ 60a1170e size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a1170e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- ShowWindow @ 60a11714 size=6 ---- */

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}



/* ---- operator_new @ 60a1171a size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1171a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- CWinApp @ 60a11726 size=6 ---- */

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a11726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}



/* ---- CWinApp::GetRuntimeClass @ 60a1172c size=6 ---- */

CRuntimeClass * __thiscall CWinApp::CWinApp__GetRuntimeClass(CWinApp *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}



/* ---- CCmdTarget::OnCmdMsg @ 60a11732 size=6 ---- */

int __thiscall
CCmdTarget::CCmdTarget__OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CCmdTarget::OnFinalRelease @ 60a11738 size=6 ---- */

void __thiscall CCmdTarget::CCmdTarget__OnFinalRelease(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- CCmdTarget::IsInvokeAllowed @ 60a1173e size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1173e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetDispatchIID @ 60a11744 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetTypeInfoCount @ 60a1174a size=6 ---- */

uint __thiscall CCmdTarget::CCmdTarget__GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1174a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}



/* ---- CCmdTarget::GetTypeLibCache @ 60a11750 size=6 ---- */

CTypeLibCache * __thiscall CCmdTarget::CCmdTarget__GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}



/* ---- CCmdTarget::GetTypeLib @ 60a11756 size=6 ---- */

long __thiscall
CCmdTarget::CCmdTarget__GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}



/* ---- CCmdTarget::GetCommandMap @ 60a1175c size=6 ---- */

AFX_OLECMDMAP * __thiscall CCmdTarget::CCmdTarget__GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1175c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetDispatchMap @ 60a11762 size=6 ---- */

AFX_DISPMAP * __thiscall CCmdTarget::CCmdTarget__GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetConnectionMap @ 60a11768 size=6 ---- */

AFX_CONNECTIONMAP * __thiscall CCmdTarget::CCmdTarget__GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetInterfaceMap @ 60a1176e size=6 ---- */

AFX_INTERFACEMAP * __thiscall CCmdTarget::CCmdTarget__GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1176e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::GetEventSinkMap @ 60a11774 size=6 ---- */

AFX_EVENTSINKMAP * __thiscall CCmdTarget::CCmdTarget__GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}



/* ---- CCmdTarget::OnCreateAggregates @ 60a1177a size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1177a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}



/* ---- CCmdTarget::GetInterfaceHook @ 60a11780 size=6 ---- */

IUnknown * __thiscall CCmdTarget::CCmdTarget__GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}



/* ---- CCmdTarget::GetExtraConnectionPoints @ 60a11786 size=6 ---- */

int __thiscall CCmdTarget::CCmdTarget__GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}



/* ---- CCmdTarget::GetConnectionHook @ 60a1178c size=6 ---- */

IConnectionPoint * __thiscall
CCmdTarget::CCmdTarget__GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1178c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}



/* ---- CWinThread::PreTranslateMessage @ 60a11792 size=6 ---- */

int __thiscall CWinThread::CWinThread__PreTranslateMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- CWinThread::PumpMessage @ 60a11798 size=6 ---- */

int __thiscall CWinThread::CWinThread__PumpMessage(CWinThread *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PumpMessage(this);
  return iVar1;
}



/* ---- CWinApp::OnIdle @ 60a1179e size=6 ---- */

int __thiscall CWinApp::CWinApp__OnIdle(CWinApp *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1179e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnIdle(this,param_1);
  return iVar1;
}



/* ---- CWinThread::IsIdleMessage @ 60a117a4 size=6 ---- */

int __thiscall CWinThread::CWinThread__IsIdleMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsIdleMessage(this,param_1);
  return iVar1;
}



/* ---- CWinApp::ProcessWndProcException @ 60a117aa size=6 ---- */

long __thiscall
CWinApp::CWinApp__ProcessWndProcException(CWinApp *this,CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = ProcessWndProcException(this,param_1,param_2);
  return lVar1;
}



/* ---- CWinThread::ProcessMessageFilter @ 60a117b0 size=6 ---- */

int __thiscall
CWinThread::CWinThread__ProcessMessageFilter(CWinThread *this,int param_1,tagMSG *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ProcessMessageFilter(this,param_1,param_2);
  return iVar1;
}



/* ---- CWinThread::GetMainWnd @ 60a117b6 size=6 ---- */

CWnd * __thiscall CWinThread::CWinThread__GetMainWnd(CWinThread *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMainWnd(this);
  return pCVar1;
}



/* ---- CWinThread::Delete @ 60a117bc size=6 ---- */

void __thiscall CWinThread::CWinThread__Delete(CWinThread *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a117bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- CWinApp::InitLibId @ 60a117c2 size=6 ---- */

void __thiscall CWinApp::CWinApp__InitLibId(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a117c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitLibId(this);
  return;
}



/* ---- CWinApp::Register @ 60a117c8 size=6 ---- */

int __thiscall CWinApp::CWinApp__Register(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Register(this);
  return iVar1;
}



/* ---- CWinApp::Unregister @ 60a117ce size=6 ---- */

int __thiscall CWinApp::CWinApp__Unregister(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Unregister(this);
  return iVar1;
}



/* ---- CWinApp::OpenDocumentFile @ 60a117d4 size=6 ---- */

CDocument * __thiscall CWinApp::CWinApp__OpenDocumentFile(CWinApp *this,char *param_1)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = OpenDocumentFile(this,param_1);
  return pCVar1;
}



/* ---- CWinApp::AddToRecentFileList @ 60a117da size=6 ---- */

void __thiscall CWinApp::CWinApp__AddToRecentFileList(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a117da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddToRecentFileList(this,param_1);
  return;
}



/* ---- CWinApp::InitApplication @ 60a117e0 size=6 ---- */

int __thiscall CWinApp::CWinApp__InitApplication(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitApplication(this);
  return iVar1;
}



/* ---- CWinApp::SaveAllModified @ 60a117e6 size=6 ---- */

int __thiscall CWinApp::CWinApp__SaveAllModified(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveAllModified(this);
  return iVar1;
}



/* ---- CWinApp::DoMessageBox @ 60a117ec size=6 ---- */

int __thiscall CWinApp::CWinApp__DoMessageBox(CWinApp *this,char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoMessageBox(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWinApp::DoWaitCursor @ 60a117f2 size=6 ---- */

void __thiscall CWinApp::CWinApp__DoWaitCursor(CWinApp *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a117f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoWaitCursor(this,param_1);
  return;
}



/* ---- CWinApp::OnDDECommand @ 60a117f8 size=6 ---- */

int __thiscall CWinApp::CWinApp__OnDDECommand(CWinApp *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a117f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDDECommand(this,param_1);
  return iVar1;
}



/* ---- CWinApp::WinHelpA @ 60a117fe size=6 ---- */

void __thiscall CWinApp::CWinApp__WinHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a117fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- CWinApp::HtmlHelpA @ 60a11804 size=6 ---- */

void __thiscall CWinApp::CWinApp__HtmlHelpA(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a11804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- CWinApp::WinHelpInternal @ 60a1180a size=6 ---- */

void __thiscall CWinApp::CWinApp__WinHelpInternal(CWinApp *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a1180a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- CWinApp::LoadAppLangResourceDLL @ 60a11810 size=6 ---- */

HINSTANCE__ * __thiscall CWinApp::CWinApp__LoadAppLangResourceDLL(CWinApp *this)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAppLangResourceDLL(this);
  return pHVar1;
}



/* ---- CWinApp::LoadSysPolicies @ 60a11816 size=6 ---- */

int __thiscall CWinApp::CWinApp__LoadSysPolicies(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadSysPolicies(this);
  return iVar1;
}



/* ---- ~CWinApp @ 60a1181c size=6 ---- */

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a1181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}



/* ---- Delete @ 60a11822 size=6 ---- */

void __thiscall CException::Delete(CException *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}



/* ---- ExitInstance @ 60a11828 size=6 ---- */

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}



/* ---- AfxMessageBox @ 60a1182e size=6 ---- */

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1182e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}



/* ---- Run @ 60a11834 size=6 ---- */

int __thiscall CWinApp::Run(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Run(this);
  return iVar1;
}



/* ---- CenterWindow @ 60a1183a size=6 ---- */

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a1183a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CenterWindow(this,param_1);
  return;
}



/* ---- AfxRegisterWndClass @ 60a11840 size=6 ---- */

char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = AfxRegisterWndClass(param_1,param_2,param_3,param_4);
  return pcVar1;
}



/* ---- AfxEnableControlContainer @ 60a11846 size=6 ---- */

void __cdecl AfxEnableControlContainer(COccManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a11846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxEnableControlContainer(param_1);
  return;
}



/* ---- InitInstance @ 60a1184c size=6 ---- */

int __thiscall CWinApp::InitInstance(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1184c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitInstance(this);
  return iVar1;
}



/* ---- AfxIsValidString @ 60a11852 size=6 ---- */

int AfxIsValidString(char *param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxIsValidString(param_1,param_2);
  return iVar1;
}



/* ---- SetWindowPos @ 60a11858 size=6 ---- */

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowPos(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}



/* ---- EnableWindow @ 60a1185e size=6 ---- */

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1185e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EnableWindow(this,param_1);
  return iVar1;
}



/* ---- GetThisClass @ 60a11864 size=6 ---- */

CRuntimeClass * CFrameWnd::GetThisClass(void)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetThisClass();
  return pCVar1;
}



/* ---- ~CFrameWnd @ 60a1186a size=6 ---- */

void __thiscall CFrameWnd::~CFrameWnd(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a1186a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CFrameWnd(this);
  return;
}



/* ---- CFrameWnd @ 60a11870 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFrameWnd(this);
  return;
}



/* ---- CFrameWnd::OnCmdMsg @ 60a11876 size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__OnCmdMsg
          (CFrameWnd *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::OnFinalRelease @ 60a1187c size=6 ---- */

void __thiscall CWnd::CWnd__OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a1187c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}



/* ---- CWnd::GetInterfaceMap @ 60a11882 size=6 ---- */

AFX_INTERFACEMAP * __thiscall CWnd::CWnd__GetInterfaceMap(CWnd *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}



/* ---- CWnd::PreSubclassWindow @ 60a11888 size=6 ---- */

void __thiscall CWnd::CWnd__PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}



/* ---- CWnd::Create @ 60a1188e size=6 ---- */

int __thiscall
CWnd::CWnd__Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                  CWnd *param_5,uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1188e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}



/* ---- CWnd::CreateEx @ 60a11894 size=6 ---- */

int __thiscall
CWnd::CWnd__CreateEx
          (CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,tagRECT *param_5,
          CWnd *param_6,uint param_7,void *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- CWnd::CreateEx @ 60a1189a size=6 ---- */

int __thiscall
CWnd::CWnd__CreateEx
          (CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,
          int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1189a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
  return iVar1;
}



/* ---- CWnd::DestroyWindow @ 60a118a0 size=6 ---- */

int __thiscall CWnd::CWnd__DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}



/* ---- CWnd::CalcWindowRect @ 60a118a6 size=6 ---- */

void __thiscall CWnd::CWnd__CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a118a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}



/* ---- CFrameWnd::GetMenu @ 60a118ac size=6 ---- */

CMenu * __thiscall CFrameWnd::CFrameWnd__GetMenu(CFrameWnd *this)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMenu(this);
  return pCVar1;
}



/* ---- CFrameWnd::SetMenu @ 60a118b2 size=6 ---- */

int __thiscall CFrameWnd::CFrameWnd__SetMenu(CFrameWnd *this,CMenu *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenu(this,param_1);
  return iVar1;
}



/* ---- CWnd::OnToolHitTest @ 60a118b8 size=6 ---- */

int __thiscall CWnd::CWnd__OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}



/* ---- CWnd::GetScrollBarCtrl @ 60a118be size=6 ---- */

CScrollBar * __thiscall CWnd::CWnd__GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}



/* ---- CWnd::WinHelpA @ 60a118c4 size=6 ---- */

void __thiscall CWnd::CWnd__WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a118c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}



/* ---- CWnd::HtmlHelpA @ 60a118ca size=6 ---- */

void __thiscall CWnd::CWnd__HtmlHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a118ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HtmlHelpA(this,param_1,param_2);
  return;
}



/* ---- CWnd::WinHelpInternal @ 60a118d0 size=6 ---- */

void __thiscall CWnd::CWnd__WinHelpInternal(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a118d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpInternal(this,param_1,param_2);
  return;
}



/* ---- CWnd::ContinueModal @ 60a118d6 size=6 ---- */

int __thiscall CWnd::CWnd__ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}



/* ---- CWnd::EndModalLoop @ 60a118dc size=6 ---- */

void __thiscall CWnd::CWnd__EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a118dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}



/* ---- CWnd::EnsureStdObj @ 60a118e2 size=6 ---- */

long __thiscall CWnd::CWnd__EnsureStdObj(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = EnsureStdObj(this);
  return lVar1;
}



/* ---- CWnd::get_accParent @ 60a118e8 size=6 ---- */

long __thiscall CWnd::CWnd__get_accParent(CWnd *this,IDispatch **param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accParent(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accChildCount @ 60a118ee size=6 ---- */

long __thiscall CWnd::CWnd__get_accChildCount(CWnd *this,long *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChildCount(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accChild @ 60a118f4 size=6 ---- */

long __thiscall CWnd::CWnd__get_accChild(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accChild();
  return lVar1;
}



/* ---- CWnd::get_accName @ 60a118fa size=6 ---- */

long __thiscall CWnd::CWnd__get_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a118fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accName();
  return lVar1;
}



/* ---- CWnd::get_accValue @ 60a11900 size=6 ---- */

long __thiscall CWnd::CWnd__get_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accValue();
  return lVar1;
}



/* ---- CWnd::get_accDescription @ 60a11906 size=6 ---- */

long __thiscall CWnd::CWnd__get_accDescription(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDescription();
  return lVar1;
}



/* ---- CWnd::get_accRole @ 60a1190c size=6 ---- */

long __thiscall CWnd::CWnd__get_accRole(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1190c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accRole();
  return lVar1;
}



/* ---- CWnd::get_accState @ 60a11912 size=6 ---- */

long __thiscall CWnd::CWnd__get_accState(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accState();
  return lVar1;
}



/* ---- CWnd::get_accHelp @ 60a11918 size=6 ---- */

long __thiscall CWnd::CWnd__get_accHelp(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelp();
  return lVar1;
}



/* ---- CWnd::get_accHelpTopic @ 60a1191e size=6 ---- */

long __thiscall CWnd::CWnd__get_accHelpTopic(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1191e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accHelpTopic();
  return lVar1;
}



/* ---- CWnd::get_accKeyboardShortcut @ 60a11924 size=6 ---- */

long __thiscall CWnd::CWnd__get_accKeyboardShortcut(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accKeyboardShortcut();
  return lVar1;
}



/* ---- CWnd::get_accFocus @ 60a1192a size=6 ---- */

long __thiscall CWnd::CWnd__get_accFocus(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1192a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accFocus(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accSelection @ 60a11930 size=6 ---- */

long __thiscall CWnd::CWnd__get_accSelection(CWnd *this,tagVARIANT *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accSelection(this,param_1);
  return lVar1;
}



/* ---- CWnd::get_accDefaultAction @ 60a11936 size=6 ---- */

long __thiscall CWnd::CWnd__get_accDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = get_accDefaultAction();
  return lVar1;
}



/* ---- CWnd::accSelect @ 60a1193c size=6 ---- */

long __thiscall CWnd::CWnd__accSelect(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accSelect();
  return lVar1;
}



/* ---- CWnd::accLocation @ 60a11942 size=6 ---- */

long __thiscall CWnd::CWnd__accLocation(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accLocation();
  return lVar1;
}



/* ---- CWnd::accNavigate @ 60a11948 size=6 ---- */

long __thiscall CWnd::CWnd__accNavigate(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accNavigate();
  return lVar1;
}



/* ---- CWnd::accHitTest @ 60a1194e size=6 ---- */

long __thiscall CWnd::CWnd__accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1194e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accHitTest(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CWnd::accDoDefaultAction @ 60a11954 size=6 ---- */

long __thiscall CWnd::CWnd__accDoDefaultAction(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = accDoDefaultAction();
  return lVar1;
}



/* ---- CWnd::put_accName @ 60a1195a size=6 ---- */

long __thiscall CWnd::CWnd__put_accName(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1195a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accName();
  return lVar1;
}



/* ---- CWnd::put_accValue @ 60a11960 size=6 ---- */

long __thiscall CWnd::CWnd__put_accValue(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = put_accValue();
  return lVar1;
}



/* ---- CWnd::SetProxy @ 60a11966 size=6 ---- */

long __thiscall CWnd::CWnd__SetProxy(CWnd *this,IAccessibleProxy *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = SetProxy(this,param_1);
  return lVar1;
}



/* ---- CWnd::CreateAccessibleProxy @ 60a1196c size=6 ---- */

long __thiscall
CWnd::CWnd__CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1196c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = CreateAccessibleProxy(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CFrameWnd::OnCommand @ 60a11972 size=6 ---- */

int __thiscall CFrameWnd::CFrameWnd__OnCommand(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}



/* ---- CWnd::OnNotify @ 60a11978 size=6 ---- */

int __thiscall CWnd::CWnd__OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWnd::GetSuperWndProcAddr @ 60a1197e size=6 ---- */

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::CWnd__GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1197e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}



/* ---- CFrameWnd::BeginModalState @ 60a11984 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__BeginModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginModalState(this);
  return;
}



/* ---- CFrameWnd::EndModalState @ 60a1198a size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__EndModalState(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a1198a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalState(this);
  return;
}



/* ---- CWnd::OnAmbientProperty @ 60a11990 size=6 ---- */

int __thiscall
CWnd::CWnd__OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- CWnd::OnWndMsg @ 60a11996 size=6 ---- */

int __thiscall CWnd::CWnd__OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::DefWindowProcA @ 60a1199c size=6 ---- */

long __thiscall CWnd::CWnd__DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a1199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- CFrameWnd::PostNcDestroy @ 60a119a2 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__PostNcDestroy(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a119a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}



/* ---- CWnd::OnChildNotify @ 60a119a8 size=6 ---- */

int __thiscall
CWnd::CWnd__OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::CheckAutoCenter @ 60a119ae size=6 ---- */

int __thiscall CWnd::CWnd__CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}



/* ---- CFrameWnd::IsFrameWnd @ 60a119b4 size=6 ---- */

int __thiscall CFrameWnd::CFrameWnd__IsFrameWnd(CFrameWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}



/* ---- CWnd::CreateControlContainer @ 60a119ba size=6 ---- */

int __thiscall CWnd::CWnd__CreateControlContainer(CWnd *this,COleControlContainer **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlContainer(this,param_1);
  return iVar1;
}



/* ---- CWnd::CreateControlSite @ 60a119c0 size=6 ---- */

int __thiscall
CWnd::CWnd__CreateControlSite
          (CWnd *this,COleControlContainer *param_1,COleControlSite **param_2,uint param_3,
          _GUID *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlSite(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CWnd::SetOccDialogInfo @ 60a119c6 size=6 ---- */

int __thiscall CWnd::CWnd__SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}



/* ---- CWnd::GetOccDialogInfo @ 60a119cc size=6 ---- */

_AFX_OCC_DIALOG_INFO * __thiscall CWnd::CWnd__GetOccDialogInfo(CWnd *this)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = GetOccDialogInfo(this);
  return p_Var1;
}



/* ---- CFrameWnd::Create @ 60a119d2 size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__Create
          (CFrameWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
          char *param_6,ulong param_7,CCreateContext *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}



/* ---- CFrameWnd::LoadFrame @ 60a119d8 size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__LoadFrame
          (CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadFrame(this,param_1,param_2,param_3,param_4);
  return iVar1;
}



/* ---- CFrameWnd::GetActiveDocument @ 60a119de size=6 ---- */

CDocument * __thiscall CFrameWnd::CFrameWnd__GetActiveDocument(CFrameWnd *this)

{
  CDocument *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveDocument(this);
  return pCVar1;
}



/* ---- CFrameWnd::GetActiveFrame @ 60a119e4 size=6 ---- */

CFrameWnd * __thiscall CFrameWnd::CFrameWnd__GetActiveFrame(CFrameWnd *this)

{
  CFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a119e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActiveFrame(this);
  return pCVar1;
}



/* ---- CFrameWnd::GetMessageString @ 60a119ea size=6 ---- */

void __thiscall
CFrameWnd::CFrameWnd__GetMessageString
          (CFrameWnd *this,uint param_1,
          CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a119ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}



/* ---- CFrameWnd::RecalcLayout @ 60a119f0 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__RecalcLayout(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a119f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RecalcLayout(this,param_1);
  return;
}



/* ---- CFrameWnd::ActivateFrame @ 60a119f6 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__ActivateFrame(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a119f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ActivateFrame(this,param_1);
  return;
}



/* ---- CFrameWnd::SetMenuBarVisibility @ 60a119fc size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__SetMenuBarVisibility(CFrameWnd *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a119fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetMenuBarVisibility(this,param_1);
  return;
}



/* ---- CFrameWnd::GetMenuBarVisibility @ 60a11a02 size=6 ---- */

ulong __thiscall CFrameWnd::CFrameWnd__GetMenuBarVisibility(CFrameWnd *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetMenuBarVisibility(this);
  return uVar1;
}



/* ---- CFrameWnd::SetMenuBarState @ 60a11a08 size=6 ---- */

int __thiscall CFrameWnd::CFrameWnd__SetMenuBarState(CFrameWnd *this,ulong param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMenuBarState(this,param_1);
  return iVar1;
}



/* ---- CFrameWnd::GetMenuBarState @ 60a11a0e size=6 ---- */

ulong __thiscall CFrameWnd::CFrameWnd__GetMenuBarState(CFrameWnd *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetMenuBarState(this);
  return uVar1;
}



/* ---- CFrameWnd::OnSetPreviewMode @ 60a11a14 size=6 ---- */

void __thiscall
CFrameWnd::CFrameWnd__OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPreviewMode(this,param_1,param_2);
  return;
}



/* ---- CFrameWnd::GetMessageBar @ 60a11a1a size=6 ---- */

CWnd * __thiscall CFrameWnd::CFrameWnd__GetMessageBar(CFrameWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetMessageBar(this);
  return pCVar1;
}



/* ---- CFrameWnd::NegotiateBorderSpace @ 60a11a20 size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__NegotiateBorderSpace(CFrameWnd *this,uint param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = NegotiateBorderSpace(this,param_1,param_2);
  return iVar1;
}



/* ---- CFrameWnd::OnCreateClient @ 60a11a26 size=6 ---- */

int __thiscall
CFrameWnd::CFrameWnd__OnCreateClient
          (CFrameWnd *this,tagCREATESTRUCTA *param_1,CCreateContext *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateClient(this,param_1,param_2);
  return iVar1;
}



/* ---- CFrameWnd::OnUpdateFrameTitle @ 60a11a2c size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__OnUpdateFrameTitle(CFrameWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameTitle(this,param_1);
  return;
}



/* ---- CFrameWnd::OnUpdateFrameMenu @ 60a11a32 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__OnUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnUpdateFrameMenu(this,param_1);
  return;
}



/* ---- CFrameWnd::GetDefaultAccelerator @ 60a11a38 size=6 ---- */

HACCEL__ * __thiscall CFrameWnd::CFrameWnd__GetDefaultAccelerator(CFrameWnd *this)

{
  HACCEL__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDefaultAccelerator(this);
  return pHVar1;
}



/* ---- CFrameWnd::DelayUpdateFrameMenu @ 60a11a3e size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__DelayUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DelayUpdateFrameMenu(this,param_1);
  return;
}



/* ---- CFrameWnd::ExitHelpMode @ 60a11a44 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__ExitHelpMode(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExitHelpMode(this);
  return;
}



/* ---- CFrameWnd::OnShowMenuBar @ 60a11a4a size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__OnShowMenuBar(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowMenuBar(this);
  return;
}



/* ---- CFrameWnd::OnHideMenuBar @ 60a11a50 size=6 ---- */

void __thiscall CFrameWnd::CFrameWnd__OnHideMenuBar(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideMenuBar(this);
  return;
}



/* ---- WindowProc @ 60a11a56 size=6 ---- */

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}



/* ---- PreTranslateMessage @ 60a11a5c size=6 ---- */

int __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}



/* ---- OnCreate @ 60a11a62 size=6 ---- */

int __thiscall CFrameWnd::OnCreate(CFrameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreate(this,param_1);
  return iVar1;
}



/* ---- OnDestroy @ 60a11a68 size=6 ---- */

void __thiscall CFrameWnd::OnDestroy(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}



/* ---- ~CInternetSession @ 60a11a6e size=6 ---- */

void __thiscall CInternetSession::~CInternetSession(CInternetSession *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CInternetSession(this);
  return;
}



/* ---- Close @ 60a11a74 size=6 ---- */

void __thiscall CInternetSession::Close(CInternetSession *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Close(this);
  return;
}



/* ---- QueryInfoStatusCode @ 60a11a7a size=6 ---- */

int __thiscall CHttpFile::QueryInfoStatusCode(CHttpFile *this,ulong *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = QueryInfoStatusCode(this,param_1);
  return iVar1;
}



/* ---- SendRequest @ 60a11a80 size=6 ---- */

int __thiscall
CHttpFile::SendRequest
          (CHttpFile *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,
          void *param_2,ulong param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SendRequest(this,param_1,param_2,param_3);
  return iVar1;
}



/* ---- AddRequestHeaders @ 60a11a86 size=6 ---- */

int __thiscall
CHttpFile::AddRequestHeaders
          (CHttpFile *this,CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *param_1,
          ulong param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AddRequestHeaders(this,param_1,param_2);
  return iVar1;
}



/* ---- OpenRequest @ 60a11a8c size=6 ---- */

CHttpFile * __thiscall
CHttpConnection::OpenRequest
          (CHttpConnection *this,int param_1,char *param_2,char *param_3,ulong param_4,
          char **param_5,char *param_6,ulong param_7)

{
  CHttpFile *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = OpenRequest(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return pCVar1;
}



/* ---- GetHttpConnection @ 60a11a92 size=6 ---- */

CHttpConnection * __thiscall
CInternetSession::GetHttpConnection
          (CInternetSession *this,char *param_1,ushort param_2,char *param_3,char *param_4)

{
  CHttpConnection *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetHttpConnection(this,param_1,param_2,param_3,param_4);
  return pCVar1;
}



/* ---- CInternetSession @ 60a11a98 size=6 ---- */

void __thiscall
CInternetSession::CInternetSession
          (CInternetSession *this,char *param_1,ulong param_2,ulong param_3,char *param_4,
          char *param_5,ulong param_6)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CInternetSession(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* ---- OnClose @ 60a11a9e size=6 ---- */

void __thiscall CFrameWnd::OnClose(CFrameWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a11a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this);
  return;
}



/* ---- AfxTermExtensionModule @ 60a11aaa size=6 ---- */

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a11aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}



/* ---- CDynLinkLibrary @ 60a11ab0 size=6 ---- */

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x60a11ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}



/* ---- AfxInitExtensionModule @ 60a11ab6 size=6 ---- */

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}



/* ---- __ArrayUnwind @ 60a11abc size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 60a11b1a size=75 ---- */

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
  FUN_60a11b65();
  return;
}



/* ---- FUN_60a11b65 @ 60a11b65 size=24 ---- */

void FUN_60a11b65(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 60a11b7d size=76 ---- */

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



/* ---- purecall @ 60a11bca size=6 ---- */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x60a11bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* ---- __security_check_cookie @ 60a11bd6 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_60a24730) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- __alloca_probe @ 60a11bf0 size=43 ---- */

/* WARNING: This is an inlined function */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_res0;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&local_res0 - (int)in_EAX & ~-(uint)(&local_res0 < in_EAX));
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = _local_res0;
  return;
}



/* ---- memset @ 60a11c1c size=6 ---- */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* ---- __RTDynamicCast @ 60a11c22 size=6 ---- */

void __RTDynamicCast(void)

{
                    /* WARNING: Could not recover jumptable at 0x60a11c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __RTDynamicCast();
  return;
}



/* ---- std::exception::what @ 60a11c28 size=6 ---- */

char * __thiscall std::exception::std__exception__what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60a11c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* ---- _CxxThrowException @ 60a11c2e size=6 ---- */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x60a11c2e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* ---- __onexit @ 60a11c3a size=156 ---- */

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
  
  local_8 = &DAT_60a1a110;
  uStack_c = 0x60a11c46;
  local_20[0] = decode_pointer(DAT_60a24ba0);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_60a24ba0);
    local_24 = decode_pointer(DAT_60a24b9c);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_60a24ba0 = encode_pointer(local_20[0]);
    DAT_60a24b9c = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_60a11cd6();
  }
  return p_Var1;
}



/* ---- FUN_60a11cd6 @ 60a11cd6 size=9 ---- */

void FUN_60a11cd6(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 60a11cdf size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- __CRT_INIT@12 @ 60a11d45 size=550 ---- */

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
    if (DAT_60a24854 < 1) {
      return 0;
    }
    DAT_60a24854 = DAT_60a24854 + -1;
  }
  _DAT_60a24b8c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_60a24b94,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_60a24b90 == 0) {
      DAT_60a24b90 = 1;
      iVar3 = initterm_e(&DAT_60a15804,&DAT_60a1580c);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_60a157b8,&DAT_60a15800);
      DAT_60a24b90 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_60a24b94,0);
    }
    if ((DAT_60a24b98 != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_60a24b98), BVar4 != 0)) {
      (*DAT_60a24b98)(param_1,2,param_3);
    }
    DAT_60a24854 = DAT_60a24854 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_60a24b94,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_60a24b90 == 2) {
      param_2 = (int *)decode_pointer(DAT_60a24ba0);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_60a24b9c);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_60a24ba0);
            piVar8 = (int *)decode_pointer(DAT_60a24b9c);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_60a24b9c = encoded_null();
        DAT_60a24ba0 = DAT_60a24b9c;
      }
      DAT_60a24b90 = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_60a24b94,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 60a11f6b size=240 ---- */

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
  _DAT_60a24740 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_60a24854 == 0)) {
    local_20 = 0;
    goto LAB_60a1205d;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_FUN_60a1762c != (undefined *)0x0) {
      local_20 = (*(code *)PTR_FUN_60a1762c)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_60a1205d;
    local_20 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (local_20 == 0) goto LAB_60a1205d;
  }
  local_20 = FUN_60a0fa70(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_60a0fa70(param_3,0);
    __CRT_INIT_12(&param_3->unused,(int *)0x0,param_1);
    if (PTR_FUN_60a1762c != (undefined *)0x0) {
      (*(code *)PTR_FUN_60a1762c)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_FUN_60a1762c != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_FUN_60a1762c)(param_3,param_2,param_1);
    }
  }
LAB_60a1205d:
  FUN_60a12076();
  return local_20;
}



/* ---- FUN_60a12076 @ 60a12076 size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60a12076(void)

{
  _DAT_60a24740 = 0xffffffff;
  return;
}



/* ---- entry @ 60a12081 size=35 ---- */

void entry(HINSTANCE__ *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- __SEH_prolog4 @ 60a120ac size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_60a24730 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 60a120f1 size=20 ---- */

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



/* ---- FUN_60a12105 @ 60a12105 size=37 ---- */

void __cdecl
FUN_60a12105(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_60a24730,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- ___report_gsfailure @ 60a1212a size=262 ---- */

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
  
  _DAT_60a24970 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_60a24974 = &uStack00000004;
  _DAT_60a248b0 = 0x10001;
  _DAT_60a24858 = 0xc0000409;
  _DAT_60a2485c = 1;
  local_32c = DAT_60a24730;
  local_328 = DAT_60a24734;
  _DAT_60a24864 = _local_res0;
  _DAT_60a2493c = in_GS;
  _DAT_60a24940 = in_FS;
  _DAT_60a24944 = in_ES;
  _DAT_60a24948 = in_DS;
  _DAT_60a2494c = unaff_EDI;
  _DAT_60a24950 = unaff_ESI;
  _DAT_60a24954 = unaff_EBX;
  _DAT_60a24958 = in_EDX;
  _DAT_60a2495c = in_ECX;
  _DAT_60a24960 = in_EAX;
  _DAT_60a24964 = unaff_EBP;
  DAT_60a24968 = _local_res0;
  _DAT_60a2496c = in_CS;
  _DAT_60a24978 = in_SS;
  DAT_60a248a8 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_60a179ec);
  if (DAT_60a248a8 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- _unlock @ 60a12230 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60a12230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 60a12236 size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x60a12236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 60a1223c size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60a1223c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __ValidateImageBase @ 60a122a0 size=53 ---- */

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



/* ---- __FindPESection @ 60a122e0 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 60a12330 size=166 ---- */

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
  
  pcStack_10 = FUN_60a12105;
  local_14 = ExceptionList;
  local_c = DAT_60a24730 ^ 0x60a1a158;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_60a00000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_60a00000,(DWORD_PTR)(pTarget + -0x60a00000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 60a123ee size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x60a123ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 60a123f4 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x60a123f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 60a123fa size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a123fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- ___security_init_cookie @ 60a12406 size=150 ---- */

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
  if ((DAT_60a24730 == 0xbb40e64e) || ((DAT_60a24730 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_60a24730 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_60a24730 == 0xbb40e64e) {
      DAT_60a24730 = 0xbb40e64f;
    }
    else if ((DAT_60a24730 & 0xffff0000) == 0) {
      DAT_60a24730 = DAT_60a24730 | DAT_60a24730 << 0x10;
    }
  }
  DAT_60a24734 = ~DAT_60a24730;
  return;
}



/* ---- except_handler4_common @ 60a1249c size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x60a1249c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- _type_info_dtor_internal_method @ 60a124a2 size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x60a124a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- _crt_debugger_hook @ 60a124a8 size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60a124a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- Unwind@60a124c0 @ 60a124c0 size=12 ---- */

void Unwind_60a124c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a124c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@60a124f0 @ 60a124f0 size=11 ---- */

void Unwind_60a124f0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12520 @ 60a12520 size=11 ---- */

void Unwind_60a12520(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a1252b @ 60a1252b size=11 ---- */

void Unwind_60a1252b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a12536 @ 60a12536 size=11 ---- */

void Unwind_60a12536(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a12541 @ 60a12541 size=11 ---- */

void Unwind_60a12541(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a1254c @ 60a1254c size=11 ---- */

void Unwind_60a1254c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a12557 @ 60a12557 size=11 ---- */

void Unwind_60a12557(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a12562 @ 60a12562 size=11 ---- */

void Unwind_60a12562(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a1256d @ 60a1256d size=11 ---- */

void Unwind_60a1256d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a12578 @ 60a12578 size=11 ---- */

void Unwind_60a12578(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a12583 @ 60a12583 size=11 ---- */

void Unwind_60a12583(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a1258e @ 60a1258e size=11 ---- */

void Unwind_60a1258e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a12599 @ 60a12599 size=11 ---- */

void Unwind_60a12599(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a125a4 @ 60a125a4 size=11 ---- */

void Unwind_60a125a4(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a125af @ 60a125af size=11 ---- */

void Unwind_60a125af(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a125ba @ 60a125ba size=11 ---- */

void Unwind_60a125ba(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a125c5 @ 60a125c5 size=11 ---- */

void Unwind_60a125c5(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a125d0 @ 60a125d0 size=11 ---- */

void Unwind_60a125d0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a125db @ 60a125db size=11 ---- */

void Unwind_60a125db(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a125e6 @ 60a125e6 size=11 ---- */

void Unwind_60a125e6(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a12610 @ 60a12610 size=8 ---- */

void Unwind_60a12610(void)

{
  int unaff_EBP;
  
  CF5ConfigLoader::~CF5ConfigLoader((CF5ConfigLoader *)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60a12640 @ 60a12640 size=11 ---- */

void Unwind_60a12640(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a1264b @ 60a1264b size=11 ---- */

void Unwind_60a1264b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12656 @ 60a12656 size=11 ---- */

void Unwind_60a12656(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12661 @ 60a12661 size=11 ---- */

void Unwind_60a12661(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a1266c @ 60a1266c size=11 ---- */

void Unwind_60a1266c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12677 @ 60a12677 size=11 ---- */

void Unwind_60a12677(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12682 @ 60a12682 size=11 ---- */

void Unwind_60a12682(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a1268d @ 60a1268d size=11 ---- */

void Unwind_60a1268d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12698 @ 60a12698 size=11 ---- */

void Unwind_60a12698(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a126a3 @ 60a126a3 size=11 ---- */

void Unwind_60a126a3(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a126ae @ 60a126ae size=11 ---- */

void Unwind_60a126ae(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a126e0 @ 60a126e0 size=12 ---- */

void Unwind_60a126e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a126e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameReg::~CGameReg((CGameReg *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60a12720 @ 60a12720 size=12 ---- */

void Unwind_60a12720(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameReg::~CGameReg((CGameReg *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60a12760 @ 60a12760 size=12 ---- */

void Unwind_60a12760(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xc0));
  return;
}



/* ---- Unwind@60a1276c @ 60a1276c size=12 ---- */

void Unwind_60a1276c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xd4));
  return;
}



/* ---- Unwind@60a12778 @ 60a12778 size=12 ---- */

void Unwind_60a12778(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1277e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xbc));
  return;
}



/* ---- Unwind@60a12784 @ 60a12784 size=12 ---- */

void Unwind_60a12784(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1278a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xc4));
  return;
}



/* ---- Unwind@60a12790 @ 60a12790 size=12 ---- */

void Unwind_60a12790(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xcc));
  return;
}



/* ---- Unwind@60a1279c @ 60a1279c size=12 ---- */

void Unwind_60a1279c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a127a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -200));
  return;
}



/* ---- Unwind@60a127a8 @ 60a127a8 size=12 ---- */

void Unwind_60a127a8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a127ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xd0));
  return;
}



/* ---- Unwind@60a127f0 @ 60a127f0 size=9 ---- */

void Unwind_60a127f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a127f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMetpParser::~CMetpParser((CMetpParser *)(unaff_EBP + -0x6c));
  return;
}



/* ---- Unwind@60a12820 @ 60a12820 size=9 ---- */

void Unwind_60a12820(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12850 @ 60a12850 size=9 ---- */

void Unwind_60a12850(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@60a12880 @ 60a12880 size=9 ---- */

void Unwind_60a12880(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a128b0 @ 60a128b0 size=8 ---- */

void Unwind_60a128b0(void)

{
  int unaff_EBP;
  
  FUN_60a03d50(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a128e0 @ 60a128e0 size=12 ---- */

void Unwind_60a128e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a128e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@60a128ec @ 60a128ec size=11 ---- */

void Unwind_60a128ec(void)

{
  int unaff_EBP;
  
  FUN_60a03e30((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@60a128f7 @ 60a128f7 size=15 ---- */

void Unwind_60a128f7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x134));
  return;
}



/* ---- Unwind@60a12906 @ 60a12906 size=15 ---- */

void Unwind_60a12906(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1290f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x138));
  return;
}



/* ---- Unwind@60a12915 @ 60a12915 size=15 ---- */

void Unwind_60a12915(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1291e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x13c));
  return;
}



/* ---- Unwind@60a12940 @ 60a12940 size=12 ---- */

void Unwind_60a12940(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@60a1294c @ 60a1294c size=12 ---- */

void Unwind_60a1294c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x28));
  return;
}



/* ---- Unwind@60a12980 @ 60a12980 size=12 ---- */

void Unwind_60a12980(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@60a1298c @ 60a1298c size=12 ---- */

void Unwind_60a1298c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@60a12998 @ 60a12998 size=12 ---- */

void Unwind_60a12998(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1299e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@60a129a4 @ 60a129a4 size=12 ---- */

void Unwind_60a129a4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a129aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a129e0 @ 60a129e0 size=9 ---- */

void Unwind_60a129e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a129e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a129e9 @ 60a129e9 size=9 ---- */

void Unwind_60a129e9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a129ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a12a10 @ 60a12a10 size=9 ---- */

void Unwind_60a12a10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12a40 @ 60a12a40 size=12 ---- */

void Unwind_60a12a40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a12a80 @ 60a12a80 size=9 ---- */

void Unwind_60a12a80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@60a12ac0 @ 60a12ac0 size=12 ---- */

void Unwind_60a12ac0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a12acc @ 60a12acc size=12 ---- */

void Unwind_60a12acc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xa0));
  return;
}



/* ---- Unwind@60a12ad8 @ 60a12ad8 size=12 ---- */

void Unwind_60a12ad8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x9c));
  return;
}



/* ---- Unwind@60a12b20 @ 60a12b20 size=12 ---- */

void Unwind_60a12b20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@60a12b2c @ 60a12b2c size=12 ---- */

void Unwind_60a12b2c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x28));
  return;
}



/* ---- Unwind@60a12b60 @ 60a12b60 size=9 ---- */

void Unwind_60a12b60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12b69 @ 60a12b69 size=9 ---- */

void Unwind_60a12b69(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a12b90 @ 60a12b90 size=12 ---- */

void Unwind_60a12b90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a12b9c @ 60a12b9c size=12 ---- */

void Unwind_60a12b9c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x9c));
  return;
}



/* ---- Unwind@60a12ba8 @ 60a12ba8 size=12 ---- */

void Unwind_60a12ba8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x98));
  return;
}



/* ---- Unwind@60a12bf0 @ 60a12bf0 size=9 ---- */

void Unwind_60a12bf0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x34))
  ;
  return;
}



/* ---- Unwind@60a12c20 @ 60a12c20 size=12 ---- */

void Unwind_60a12c20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x124));
  return;
}



/* ---- Unwind@60a12c2c @ 60a12c2c size=12 ---- */

void Unwind_60a12c2c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x120));
  return;
}



/* ---- Unwind@60a12c38 @ 60a12c38 size=12 ---- */

void Unwind_60a12c38(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x128));
  return;
}



/* ---- Unwind@60a12c44 @ 60a12c44 size=12 ---- */

void Unwind_60a12c44(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60a12c50 @ 60a12c50 size=12 ---- */

void Unwind_60a12c50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a12c5c @ 60a12c5c size=12 ---- */

void Unwind_60a12c5c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@60a12ca0 @ 60a12ca0 size=12 ---- */

void Unwind_60a12ca0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@60a12cac @ 60a12cac size=12 ---- */

void Unwind_60a12cac(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x28));
  return;
}



/* ---- Unwind@60a12ce0 @ 60a12ce0 size=9 ---- */

void Unwind_60a12ce0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a12d10 @ 60a12d10 size=12 ---- */

void Unwind_60a12d10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@60a12d1c @ 60a12d1c size=12 ---- */

void Unwind_60a12d1c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@60a12d28 @ 60a12d28 size=12 ---- */

void Unwind_60a12d28(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* ---- Unwind@60a12d34 @ 60a12d34 size=12 ---- */

void Unwind_60a12d34(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* ---- Unwind@60a12d40 @ 60a12d40 size=12 ---- */

void Unwind_60a12d40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@60a12d4c @ 60a12d4c size=12 ---- */

void Unwind_60a12d4c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}



/* ---- Unwind@60a12d58 @ 60a12d58 size=12 ---- */

void Unwind_60a12d58(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@60a12d64 @ 60a12d64 size=12 ---- */

void Unwind_60a12d64(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x20));
  return;
}



/* ---- Unwind@60a12d70 @ 60a12d70 size=12 ---- */

void Unwind_60a12d70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}



/* ---- Unwind@60a12d7c @ 60a12d7c size=12 ---- */

void Unwind_60a12d7c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x28));
  return;
}



/* ---- Unwind@60a12d88 @ 60a12d88 size=12 ---- */

void Unwind_60a12d88(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}



/* ---- Unwind@60a12d94 @ 60a12d94 size=12 ---- */

void Unwind_60a12d94(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}



/* ---- Unwind@60a12da0 @ 60a12da0 size=12 ---- */

void Unwind_60a12da0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}



/* ---- Unwind@60a12dac @ 60a12dac size=12 ---- */

void Unwind_60a12dac(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}



/* ---- Unwind@60a12db8 @ 60a12db8 size=12 ---- */

void Unwind_60a12db8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}



/* ---- Unwind@60a12dc4 @ 60a12dc4 size=12 ---- */

void Unwind_60a12dc4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}



/* ---- Unwind@60a12dd0 @ 60a12dd0 size=12 ---- */

void Unwind_60a12dd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}



/* ---- Unwind@60a12ddc @ 60a12ddc size=12 ---- */

void Unwind_60a12ddc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}



/* ---- Unwind@60a12de8 @ 60a12de8 size=12 ---- */

void Unwind_60a12de8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x4c));
  return;
}



/* ---- Unwind@60a12df4 @ 60a12df4 size=12 ---- */

void Unwind_60a12df4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x50));
  return;
}



/* ---- Unwind@60a12e00 @ 60a12e00 size=12 ---- */

void Unwind_60a12e00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}



/* ---- Unwind@60a12e0c @ 60a12e0c size=12 ---- */

void Unwind_60a12e0c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x58));
  return;
}



/* ---- Unwind@60a12e40 @ 60a12e40 size=9 ---- */

void Unwind_60a12e40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12e49 @ 60a12e49 size=12 ---- */

void Unwind_60a12e49(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@60a12e70 @ 60a12e70 size=9 ---- */

void Unwind_60a12e70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12e79 @ 60a12e79 size=12 ---- */

void Unwind_60a12e79(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@60a12ea0 @ 60a12ea0 size=17 ---- */

void Unwind_60a12ea0(void)

{
  int unaff_EBP;
  
  CF5GameWnd::CF5GameWnd__CreateCaptionButtons(*(CF5GameWnd **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a12ed0 @ 60a12ed0 size=9 ---- */

void Unwind_60a12ed0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@60a12f20 @ 60a12f20 size=12 ---- */

void Unwind_60a12f20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x19c));
  return;
}



/* ---- Unwind@60a12f2c @ 60a12f2c size=12 ---- */

void Unwind_60a12f2c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x220));
  return;
}



/* ---- Unwind@60a12f38 @ 60a12f38 size=12 ---- */

void Unwind_60a12f38(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@60a12f44 @ 60a12f44 size=12 ---- */

void Unwind_60a12f44(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x520)
            );
  return;
}



/* ---- Unwind@60a12f50 @ 60a12f50 size=12 ---- */

void Unwind_60a12f50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x504)
            );
  return;
}



/* ---- Unwind@60a12f5c @ 60a12f5c size=11 ---- */

void Unwind_60a12f5c(void)

{
  int unaff_EBP;
  
  FUN_60a07c60((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x520));
  return;
}



/* ---- Unwind@60a12f67 @ 60a12f67 size=12 ---- */

void Unwind_60a12f67(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x5e0)
            );
  return;
}



/* ---- Unwind@60a12f73 @ 60a12f73 size=12 ---- */

void Unwind_60a12f73(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x5c4)
            );
  return;
}



/* ---- Unwind@60a12f7f @ 60a12f7f size=11 ---- */

void Unwind_60a12f7f(void)

{
  int unaff_EBP;
  
  FUN_60a07c60((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x5e0));
  return;
}



/* ---- Unwind@60a12f8a @ 60a12f8a size=12 ---- */

void Unwind_60a12f8a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x6a0)
            );
  return;
}



/* ---- Unwind@60a12f96 @ 60a12f96 size=12 ---- */

void Unwind_60a12f96(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x684)
            );
  return;
}



/* ---- Unwind@60a12fa2 @ 60a12fa2 size=11 ---- */

void Unwind_60a12fa2(void)

{
  int unaff_EBP;
  
  FUN_60a07c60((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x6a0));
  return;
}



/* ---- Unwind@60a12fad @ 60a12fad size=12 ---- */

void Unwind_60a12fad(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a12fb9 @ 60a12fb9 size=12 ---- */

void Unwind_60a12fb9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x3a0)
            );
  return;
}



/* ---- Unwind@60a12fc5 @ 60a12fc5 size=12 ---- */

void Unwind_60a12fc5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -900));
  return;
}



/* ---- Unwind@60a12fd1 @ 60a12fd1 size=11 ---- */

void Unwind_60a12fd1(void)

{
  int unaff_EBP;
  
  FUN_60a07c60((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x3a0));
  return;
}



/* ---- Unwind@60a12fdc @ 60a12fdc size=12 ---- */

void Unwind_60a12fdc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2e0)
            );
  return;
}



/* ---- Unwind@60a12fe8 @ 60a12fe8 size=12 ---- */

void Unwind_60a12fe8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a12fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c4)
            );
  return;
}



/* ---- Unwind@60a12ff4 @ 60a12ff4 size=11 ---- */

void Unwind_60a12ff4(void)

{
  int unaff_EBP;
  
  FUN_60a07c60((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x2e0));
  return;
}



/* ---- Unwind@60a12fff @ 60a12fff size=12 ---- */

void Unwind_60a12fff(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x460)
            );
  return;
}



/* ---- Unwind@60a1300b @ 60a1300b size=12 ---- */

void Unwind_60a1300b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x444)
            );
  return;
}



/* ---- Unwind@60a13017 @ 60a13017 size=11 ---- */

void Unwind_60a13017(void)

{
  int unaff_EBP;
  
  FUN_60a07c60((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x460));
  return;
}



/* ---- Unwind@60a13050 @ 60a13050 size=12 ---- */

void Unwind_60a13050(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13090 @ 60a13090 size=9 ---- */

void Unwind_60a13090(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13099 @ 60a13099 size=9 ---- */

void Unwind_60a13099(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1309c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a130c0 @ 60a130c0 size=9 ---- */

void Unwind_60a130c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a130c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a130f0 @ 60a130f0 size=9 ---- */

void Unwind_60a130f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a130f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x58));
  return;
}



/* ---- Unwind@60a130f9 @ 60a130f9 size=9 ---- */

void Unwind_60a130f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a130fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x68));
  return;
}



/* ---- Unwind@60a13130 @ 60a13130 size=12 ---- */

void Unwind_60a13130(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13170 @ 60a13170 size=9 ---- */

void Unwind_60a13170(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a13179 @ 60a13179 size=9 ---- */

void Unwind_60a13179(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1317c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a13182 @ 60a13182 size=9 ---- */

void Unwind_60a13182(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a131b0 @ 60a131b0 size=12 ---- */

void Unwind_60a131b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a131b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a131f0 @ 60a131f0 size=12 ---- */

void Unwind_60a131f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a131f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13230 @ 60a13230 size=12 ---- */

void Unwind_60a13230(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13270 @ 60a13270 size=12 ---- */

void Unwind_60a13270(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameReg::~CGameReg((CGameReg *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60a132b0 @ 60a132b0 size=12 ---- */

void Unwind_60a132b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a132b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameReg::~CGameReg((CGameReg *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60a132f0 @ 60a132f0 size=12 ---- */

void Unwind_60a132f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a132f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13330 @ 60a13330 size=9 ---- */

void Unwind_60a13330(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a13339 @ 60a13339 size=9 ---- */

void Unwind_60a13339(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1333c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a13360 @ 60a13360 size=9 ---- */

void Unwind_60a13360(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13369 @ 60a13369 size=9 ---- */

void Unwind_60a13369(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1336c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@60a13390 @ 60a13390 size=8 ---- */

void Unwind_60a13390(void)

{
  int unaff_EBP;
  
  FUN_60a03d50(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a133c0 @ 60a133c0 size=12 ---- */

void Unwind_60a133c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a133c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13400 @ 60a13400 size=12 ---- */

void Unwind_60a13400(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13440 @ 60a13440 size=15 ---- */

void Unwind_60a13440(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0xa0) + 4));
  return;
}



/* ---- Unwind@60a1344f @ 60a1344f size=14 ---- */

void Unwind_60a1344f(void)

{
  int unaff_EBP;
  
  FUN_60a03e30((undefined4 *)(*(int *)(unaff_EBP + -0xa0) + 8));
  return;
}



/* ---- Unwind@60a1345d @ 60a1345d size=18 ---- */

void Unwind_60a1345d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0xa0) + 0x134));
  return;
}



/* ---- Unwind@60a1346f @ 60a1346f size=18 ---- */

void Unwind_60a1346f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1347b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0xa0) + 0x138));
  return;
}



/* ---- Unwind@60a13481 @ 60a13481 size=18 ---- */

void Unwind_60a13481(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1348d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0xa0) + 0x13c));
  return;
}



/* ---- Unwind@60a13493 @ 60a13493 size=18 ---- */

void Unwind_60a13493(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1349f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0xa0) + 0x140));
  return;
}



/* ---- Unwind@60a134a5 @ 60a134a5 size=12 ---- */

void Unwind_60a134a5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a134ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a134e0 @ 60a134e0 size=12 ---- */

void Unwind_60a134e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a134e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a134ec @ 60a134ec size=12 ---- */

void Unwind_60a134ec(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a134f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xa0));
  return;
}



/* ---- Unwind@60a134f8 @ 60a134f8 size=12 ---- */

void Unwind_60a134f8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a134fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0xa4));
  return;
}



/* ---- Unwind@60a13540 @ 60a13540 size=9 ---- */

void Unwind_60a13540(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60a13580 @ 60a13580 size=8 ---- */

void Unwind_60a13580(void)

{
  int unaff_EBP;
  
  CFrameWnd::~CFrameWnd(*(CFrameWnd **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a13588 @ 60a13588 size=15 ---- */

void Unwind_60a13588(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x14) + 0xe8));
  return;
}



/* ---- Unwind@60a13597 @ 60a13597 size=15 ---- */

void Unwind_60a13597(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a135a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x14) + 0xec));
  return;
}



/* ---- Unwind@60a135a6 @ 60a135a6 size=15 ---- */

void Unwind_60a135a6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a135af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x14) + 0xf0));
  return;
}



/* ---- Unwind@60a135b5 @ 60a135b5 size=15 ---- */

void Unwind_60a135b5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a135be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x14) + 0xf4));
  return;
}



/* ---- Unwind@60a135c4 @ 60a135c4 size=15 ---- */

void Unwind_60a135c4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a135cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x14) + 0xf8));
  return;
}



/* ---- Unwind@60a135d3 @ 60a135d3 size=15 ---- */

void Unwind_60a135d3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a135dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x14) + 0xfc));
  return;
}



/* ---- Unwind@60a135e2 @ 60a135e2 size=15 ---- */

void Unwind_60a135e2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a135eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x14) + 0x100));
  return;
}



/* ---- Unwind@60a135f1 @ 60a135f1 size=11 ---- */

void Unwind_60a135f1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13620 @ 60a13620 size=8 ---- */

void Unwind_60a13620(void)

{
  int unaff_EBP;
  
  CFrameWnd::~CFrameWnd(*(CFrameWnd **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13628 @ 60a13628 size=15 ---- */

void Unwind_60a13628(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0xe8));
  return;
}



/* ---- Unwind@60a13637 @ 60a13637 size=15 ---- */

void Unwind_60a13637(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0xec));
  return;
}



/* ---- Unwind@60a13646 @ 60a13646 size=15 ---- */

void Unwind_60a13646(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1364f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0xf0));
  return;
}



/* ---- Unwind@60a13655 @ 60a13655 size=15 ---- */

void Unwind_60a13655(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1365e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0xf4));
  return;
}



/* ---- Unwind@60a13664 @ 60a13664 size=15 ---- */

void Unwind_60a13664(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1366d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0xf8));
  return;
}



/* ---- Unwind@60a13673 @ 60a13673 size=15 ---- */

void Unwind_60a13673(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1367c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0xfc));
  return;
}



/* ---- Unwind@60a13682 @ 60a13682 size=15 ---- */

void Unwind_60a13682(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1368b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x100));
  return;
}



/* ---- Unwind@60a136b0 @ 60a136b0 size=12 ---- */

void Unwind_60a136b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a136b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a136f0 @ 60a136f0 size=12 ---- */

void Unwind_60a136f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a136f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x218));
  return;
}



/* ---- Unwind@60a136fc @ 60a136fc size=12 ---- */

void Unwind_60a136fc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x194));
  return;
}



/* ---- Unwind@60a13740 @ 60a13740 size=12 ---- */

void Unwind_60a13740(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CGameReg::~CGameReg((CGameReg *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60a13780 @ 60a13780 size=8 ---- */

void Unwind_60a13780(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a137b0 @ 60a137b0 size=12 ---- */

void Unwind_60a137b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a137b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x54c));
  return;
}



/* ---- Unwind@60a137bc @ 60a137bc size=12 ---- */

void Unwind_60a137bc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a137c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x548));
  return;
}



/* ---- Unwind@60a137c8 @ 60a137c8 size=12 ---- */

void Unwind_60a137c8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a137ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x558));
  return;
}



/* ---- Unwind@60a137d4 @ 60a137d4 size=12 ---- */

void Unwind_60a137d4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a137da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x55c));
  return;
}



/* ---- Unwind@60a137e0 @ 60a137e0 size=12 ---- */

void Unwind_60a137e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a137e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x530));
  return;
}



/* ---- Unwind@60a137ec @ 60a137ec size=12 ---- */

void Unwind_60a137ec(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a137f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x534));
  return;
}



/* ---- Unwind@60a137f8 @ 60a137f8 size=12 ---- */

void Unwind_60a137f8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a137fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x53c));
  return;
}



/* ---- Unwind@60a13804 @ 60a13804 size=12 ---- */

void Unwind_60a13804(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a1380a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x550));
  return;
}



/* ---- Unwind@60a13810 @ 60a13810 size=11 ---- */

void Unwind_60a13810(void)

{
  int unaff_EBP;
  
  CInternetSession::~CInternetSession((CInternetSession *)(unaff_EBP + -0x52c));
  return;
}



/* ---- Unwind@60a1381b @ 60a1381b size=12 ---- */

void Unwind_60a1381b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x554));
  return;
}



/* ---- Unwind@60a13860 @ 60a13860 size=8 ---- */

void Unwind_60a13860(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a13890 @ 60a13890 size=17 ---- */

void Unwind_60a13890(void)

{
  int unaff_EBP;
  
  CF5GameWnd::CF5GameWnd__CreateCaptionButtons(*(CF5GameWnd **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a138c0 @ 60a138c0 size=9 ---- */

void Unwind_60a138c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a138c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@60a138f0 @ 60a138f0 size=9 ---- */

void Unwind_60a138f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a138f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@60a13940 @ 60a13940 size=9 ---- */

void Unwind_60a13940(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a13970 @ 60a13970 size=9 ---- */

void Unwind_60a13970(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a13979 @ 60a13979 size=8 ---- */

void Unwind_60a13979(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x4c))
  ;
  return;
}



/* ---- Unwind@60a13981 @ 60a13981 size=8 ---- */

void Unwind_60a13981(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60a139b0 @ 60a139b0 size=9 ---- */

void Unwind_60a139b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a139b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a139e0 @ 60a139e0 size=9 ---- */

void Unwind_60a139e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a139e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a13a10 @ 60a13a10 size=8 ---- */

void Unwind_60a13a10(void)

{
  int unaff_EBP;
  
  FUN_60a03d50(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@60a13a40 @ 60a13a40 size=8 ---- */

void Unwind_60a13a40(void)

{
  int unaff_EBP;
  
  FUN_60a03d50(*(undefined4 **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@60a13a70 @ 60a13a70 size=11 ---- */

void Unwind_60a13a70(void)

{
  int unaff_EBP;
  
  FUN_60a0ecd0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@60a13aa0 @ 60a13aa0 size=12 ---- */

void Unwind_60a13aa0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x98));
  return;
}



/* ---- Unwind@60a13aac @ 60a13aac size=12 ---- */

void Unwind_60a13aac(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x98));
  return;
}



/* ---- Unwind@60a13ab8 @ 60a13ab8 size=12 ---- */

void Unwind_60a13ab8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13b00 @ 60a13b00 size=12 ---- */

void Unwind_60a13b00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@60a13b0c @ 60a13b0c size=12 ---- */

void Unwind_60a13b0c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@60a13b18 @ 60a13b18 size=12 ---- */

void Unwind_60a13b18(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* ---- Unwind@60a13b24 @ 60a13b24 size=12 ---- */

void Unwind_60a13b24(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* ---- Unwind@60a13b30 @ 60a13b30 size=12 ---- */

void Unwind_60a13b30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@60a13b3c @ 60a13b3c size=12 ---- */

void Unwind_60a13b3c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}



/* ---- Unwind@60a13b48 @ 60a13b48 size=12 ---- */

void Unwind_60a13b48(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@60a13b70 @ 60a13b70 size=8 ---- */

void Unwind_60a13b70(void)

{
  int unaff_EBP;
  
  CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>::
  ~CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
            (*(CMapWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CF5DialogRoot*>
               **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13ba0 @ 60a13ba0 size=14 ---- */

void Unwind_60a13ba0(void)

{
  DAT_60a24838 = DAT_60a24838 & 0xfffffffe;
  return;
}



/* ---- Unwind@60a13bd0 @ 60a13bd0 size=12 ---- */

void Unwind_60a13bd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13bdc @ 60a13bdc size=12 ---- */

void Unwind_60a13bdc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@60a13c20 @ 60a13c20 size=12 ---- */

void Unwind_60a13c20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)(unaff_EBP + -0x11c));
  return;
}



/* ---- Unwind@60a13c2c @ 60a13c2c size=12 ---- */

void Unwind_60a13c2c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@60a13c38 @ 60a13c38 size=12 ---- */

void Unwind_60a13c38(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CParam::~CParam((CParam *)(unaff_EBP + -0x118));
  return;
}



/* ---- Unwind@60a13c80 @ 60a13c80 size=9 ---- */

void Unwind_60a13c80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13cb0 @ 60a13cb0 size=9 ---- */

void Unwind_60a13cb0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13cb9 @ 60a13cb9 size=9 ---- */

void Unwind_60a13cb9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60a13ce0 @ 60a13ce0 size=9 ---- */

void Unwind_60a13ce0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13d10 @ 60a13d10 size=9 ---- */

void Unwind_60a13d10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60a13d40 @ 60a13d40 size=12 ---- */

void Unwind_60a13d40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* ---- Unwind@60a13d4c @ 60a13d4c size=12 ---- */

void Unwind_60a13d4c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFunctor::~CFunctor((CFunctor *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}



/* ---- Unwind@60a13d80 @ 60a13d80 size=12 ---- */

void Unwind_60a13d80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60a13d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>::
  ~CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char>_>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* ---- FUN_60a13de0 @ 60a13de0 size=53 ---- */

void FUN_60a13de0(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60a24788;
  local_8 = DAT_60a24784;
  puVar1 = (undefined4 *)FUN_60a06020(&local_8,2);
  DAT_60a2477c = *puVar1;
  DAT_60a24780 = puVar1[1];
  return;
}



/* ---- FUN_60a13e50 @ 60a13e50 size=53 ---- */

void FUN_60a13e50(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60a2479c;
  local_8 = DAT_60a24798;
  puVar1 = (undefined4 *)FUN_60a06020(&local_8,2);
  DAT_60a24790 = *puVar1;
  DAT_60a24794 = puVar1[1];
  return;
}



/* ---- FUN_60a13f10 @ 60a13f10 size=53 ---- */

void FUN_60a13f10(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60a247bc;
  local_8 = DAT_60a247b8;
  puVar1 = (undefined4 *)FUN_60a06020(&local_8,1);
  DAT_60a247b0 = *puVar1;
  DAT_60a247b4 = puVar1[1];
  return;
}



/* ---- FUN_60a13ff0 @ 60a13ff0 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60a13ff0(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60a24800;
  local_8 = DAT_60a247fc;
  puVar1 = (undefined4 *)FUN_60a06020(&local_8,1);
  _DAT_60a247ec = *puVar1;
  _DAT_60a247f0 = puVar1[1];
  return;
}



/* ---- FUN_60a14030 @ 60a14030 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60a14030(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60a24800;
  local_8 = DAT_60a247fc;
  puVar1 = (undefined4 *)FUN_60a06020(&local_8,2);
  _DAT_60a247dc = *puVar1;
  _DAT_60a247e0 = puVar1[1];
  return;
}



/* ---- FUN_60a14070 @ 60a14070 size=53 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_60a14070(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60a24800;
  local_8 = DAT_60a247fc;
  puVar1 = (undefined4 *)FUN_60a06020(&local_8,3);
  _DAT_60a247f4 = *puVar1;
  _DAT_60a247f8 = puVar1[1];
  return;
}



/* ---- FUN_60a140e0 @ 60a140e0 size=53 ---- */

void FUN_60a140e0(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_60a24848;
  local_8 = DAT_60a24844;
  puVar1 = (undefined4 *)FUN_60a06020(&local_8,3);
  DAT_60a2483c = *puVar1;
  DAT_60a24840 = puVar1[1];
  return;
}


// total=923 ok=923 failed=0
