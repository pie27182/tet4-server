# RTTI, classes and vtables

MSVC keeps enough metadata in a polymorphic class to recover its name,
inheritance and virtual table without a PDB. `tools/rtti_inventory.py` follows
the structures in a PE32 image:

```
TypeDescriptor       vftable, spare, ".?AVClassName@@"
CompleteObjectLocator signature=0, offset, cdOffset, pTypeDescriptor, pCHD
ClassHierarchy       signature=0, attributes, baseCount, pBaseClassArray
BaseClassArray       pointers to BaseClassDescriptor
BaseClassDescriptor  pTypeDescriptor, containedBases, PMD, attributes
vftable[-1]          pointer to the CompleteObjectLocator
```

For every vtable it writes one row:

```
class  type_descriptor  complete_object_locator  vtable  slots  bases  inheritance
```

Example:

```
CTetSceneManager        0x63dbe0  0x606b30  0x5fa244  36  CTetSceneManager  0x0
CTetSceneManager_Shadow 0x646808  0x606958  0x5f9af4  37  CTetSceneManager_Shadow;CTetSceneManager  0x0
CTetSingleScene         0x63dc00  0x5ff96c  0x5e6cdc  36  CTetSingleScene;CTetSceneManager  0x0
CGameLobbyModel         0x609342cc  0x60928a0c  0x6092725c  9  CGameLobbyModel;CBaseLobbyModel;IComponent  0x0
```

## Current inventory

Across 33 native modules: **2,352 vtables**, **33,871 slots**, 33,812 slots with
a name from the Ghidra/REA index. The generated files stay in `work/rtti/`:

```
work/rtti/<module>.tsv       one table per module
work/rtti/all-classes.tsv    module + class + vtable + bases
work/rtti/all-slots.tsv      module + class + slot + target + function name
work/rtti/headers/<module>.h C++03 skeleton per module
```

The largest tables are `Tet4.exe` (555 vtables), `HanVM2d.dll` (251),
`HanVM3d.dll` (249), `HgCom3.dll` (195) and `neon4.dll` (146).

Useful recovered names include:

| Class | Original method names visible in the slot map |
|---|---|
| `CGameLobbyModel` | `OnAttached`, `OnDetached`, `Msg_ActivateOn`, `GameReport_RefreshMyInfo`, `CheckBanishInfo` |
| `CChannelLobbyModel` | `OnAttached`, `Msg_StartNickNameProcess`, `Msg_GetMakeUserId`, `Msg_GetCheckUserId` |
| `CTetGameWnd` | `DisplayChatMessage`, `CaptureGameScreen`, `ExitGameRoom`, `GetGameChatContent` |

## Header skeleton

`tools/rtti_headers.py` turns the two tables into C++03 declarations:

```
tools/rtti_headers.py work/rtti/all-classes.tsv work/rtti/all-slots.tsv \
    work/rtti/headers Tet4.exe HgModel3.dll HgCom3.dll ...
```

For example:

```cpp
class CGameLobbyModel : public CBaseLobbyModel, public IComponent {
public:
    virtual void OnAttached();                       // slot 0, 0x60913f80
    virtual void OnDetached();                       // slot 1, 0x60901180
    virtual void Msg_ActivateOn();                   // slot 3, 0x60914890
    virtual void GameReport_RefreshMyInfo();         // slot 7, 0x60918430
};
```

The hierarchy and slot order are observed. **Signatures are not recovered yet**;
a missing name becomes `vfunc_<slot>`. These headers are navigation skeletons,
not compilable source.

## Limits

- Only polymorphic classes have RTTI. Non-polymorphic classes need call-site
  analysis.
- Template names are raw MSVC decorated names; they are kept as-is rather than
  guessed.
- A slot target may be an import thunk; the name then comes from the imported
  module.
- Fields, argument types and `this` types need Ghidra class recovery
  (`tools/recover_classes.sh`), not RTTI alone.
- The inventory proves structure, not the original method implementation.
