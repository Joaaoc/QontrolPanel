#include "gamedetector.h"

bool GameDetector::isGamingMode()
{
    QUERY_USER_NOTIFICATION_STATE state;
    if (SHQueryUserNotificationState(&state) != S_OK)
        return false;
    if (state == QUNS_RUNNING_D3D_FULL_SCREEN ||   // DX3D games
        state == QUNS_PRESENTATION_MODE ||         // Borderless games
        state == QUNS_BUSY)                        // Generic fullscreen
    {
        return true;
    }
    return false;
}
