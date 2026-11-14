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

}  // namespace scene
}  // namespace tet4
