#pragma once

#include "ColorPair.h"

namespace TelCoColorCoder
{
    // External declarations for color name arrays
    extern const char* const MajorColorNames[];
    extern const int numberOfMajorColors;
    extern const char* const MinorColorNames[];
    extern const int numberOfMinorColors;

    // Function declarations for color-number conversion
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
