#ifndef GAMEDETECTOR_H
#define GAMEDETECTOR_H

#include <Windows.h>
#include <shellapi.h>

class GameDetector
{
  public:
    static bool isGamingMode();
};

#endif // GAMEDETECTOR_H
