#pragma once

// Scene slice of the reconstruction.
//
// Original evidence:
//   global scene manager   DAT_0064EBE8  (0x64EBE8)
//   accessor               FUN_005810D0  (0x5810D0)
//   base vtable            0x5FA244
//   Single Mode subclass   CTetSceneManager_Shadow, vtable 0x5F9AF4
//
// Only the accessor is reconstructed in this pilot. The class layout is not
// recovered yet, so the type stays incomplete instead of inventing fields.

namespace tet4 {
namespace scene {

class CTetSceneManager;

// Original global at image address 0x64EBE8.
extern CTetSceneManager* g_tet_scene_manager;

// Original FUN_005810D0: mov eax, [0x64EBE8]; ret.
CTetSceneManager* GetTetSceneManager();

}  // namespace scene
}  // namespace tet4
