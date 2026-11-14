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

// Scene modes from FUN_004FC280 / FUN_004FE660.
enum SceneMode {
    kSceneModeNone = 0,
    kSceneModeNormal = 1,
    kSceneModeFlag = 2,
    kSceneModeRace = 3,
    kSceneModeSurvival = 4,
    kSceneModeShadow = 5
};

// Decision slice of FUN_004FE660. The original also calls the app's scene
// factory and CVisualManager::SetProject; those calls are not reconstructed yet.
int SceneModeFromChar(char mode, int flag);

}  // namespace scene
}  // namespace tet4
