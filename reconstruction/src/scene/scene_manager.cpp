#include "tet4/scene/scene_manager.h"

namespace tet4 {
namespace scene {

// Original: DAT_0064EBE8 (image address 0x64EBE8).
CTetSceneManager* g_tet_scene_manager = 0;

// Original FUN_005810D0:
//   mov eax, ds:0x64EBE8
//   ret
CTetSceneManager* GetTetSceneManager() {
    return g_tet_scene_manager;
}

// Decision slice of FUN_004FE660:
//   H -> 5 (Shadow), N/Y -> 1, R -> 3, S -> 4, non-zero flag -> 2.
// The original then calls FUN_004FC280(mode) and CVisualManager::SetProject.
int SceneModeFromChar(char mode, int flag) {
    if (flag != 0) {
        return kSceneModeFlag;
    }
    switch (mode) {
    case 'H':
        return kSceneModeShadow;
    case 'N':
    case 'Y':
        return kSceneModeNormal;
    case 'R':
        return kSceneModeRace;
    case 'S':
        return kSceneModeSurvival;
    default:
        return kSceneModeNone;
    }
}

}  // namespace scene
}  // namespace tet4
