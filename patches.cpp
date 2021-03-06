#include "patches.h"

namespace patches
{
    bool PatchAll()
    {
 /*       if (config::patchDisableChargenPrecache)
            PatchDisableChargenPrecache();
            */

        if (config::patchFormCaching)
            PatchFormCaching();

        if (config::patchEnableAchievementsWithMods)
            PatchEnableAchievementsWithMods();

        if (config::patchMaxStdio)
            PatchMaxStdio();

        //if (config::patchRegularQuicksaves)
        //    PatchRegularQuicksaves();

        //if (config::patchSaveAddedSoundCategories)
        //    PatchSaveAddedSoundCategories();

        //if (config::patchScrollingDoesntSwitchPOV)
        //    PatchScrollingDoesntSwitchPOV();

        if (config::patchSleepWaitTime)
            PatchSleepWaitTime();

        if (config::patchTreeLODReferenceCaching)
            PatchTreeLODReferenceCaching();

        //if (config::patchWaterflowAnimation)
        //    PatchWaterflowAnimation();

        //if (config::experimentalSaveGameMaxSize)
        //    PatchSaveGameMaxSize();

        //if (config::experimentalTreatAllModsAsMasters)
        //    PatchTreatAllModsAsMasters();

        return true;
    }
}
