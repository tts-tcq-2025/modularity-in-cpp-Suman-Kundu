#include <iostream>
#include "ColorPair.h"
#include "ColorCodingManual.h"

int main() {
    // Print the color coding reference manual
    std::cout << TelCoColorCoder::FormatColorCodingManual() << std::endl;

    return 0;
}
