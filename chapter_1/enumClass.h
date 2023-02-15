#pragma once
#include <string>
enum class TYPE {
    ACOUSTIC,
    ELECTRIC
};


enum class BUILDER {
    FENDER,
    MARTIN,
    GIBSON,
    COLLINGS,
    OLSON,
    RYAN,
    PRS,
    ANY
};

enum class WOOD {
    INDIAN_ROSEWOOD,
    BRAZILIAN_ROSEWOOD,
    MAHOGANY,
    MAPLE,
    COCOBOLO,
    CEDAR,
    ADIRONDACK,
    ALDER,
    SITKA
};

std::string toString(TYPE t);
std::string toString(BUILDER b);
std::string toString(WOOD w);