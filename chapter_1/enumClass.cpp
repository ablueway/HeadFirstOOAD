#include "enumClass.h"

std::string toString(TYPE t) {
    switch (t) {
    case TYPE::ACOUSTIC: return std::string("ACOUSTIC");
    case TYPE::ELECTRIC: return std::string("ELECTRIC");
    default:
        return std::string("UNKNOW");
    }
}


std::string toString(BUILDER b) {
    switch (b) {
    case BUILDER::FENDER: return std::string("FENDER");

    case BUILDER::MARTIN: return std::string("MARTIN");
    case BUILDER::GIBSON: return std::string("GIBSON");
    case BUILDER::COLLINGS: return std::string("COLLINGS");
    case BUILDER::OLSON: return std::string("OLSON");
    case BUILDER::RYAN: return std::string("RYAN");
    case BUILDER::PRS: return std::string("PRS");
    case BUILDER::ANY: return std::string("ANY");
    default:
        return std::string("UNKNOW");
    }
}

std::string toString(WOOD w) {
    switch (w) {
    case WOOD::INDIAN_ROSEWOOD: return std::string("INDIAN_ROSEWOOD");

    case WOOD::BRAZILIAN_ROSEWOOD: return std::string("BRAZILIAN_ROSEWOOD");
    case WOOD::MAHOGANY: return std::string("MAHOGANY");
    case WOOD::MAPLE: return std::string("MAPLE");
    case WOOD::COCOBOLO: return std::string("COCOBOLO");
    case WOOD::CEDAR: return std::string("CEDAR");
    case WOOD::ADIRONDACK: return std::string("ADIRONDACK");
    case WOOD::ALDER: return std::string("ALDER");
    case WOOD::SITKA: return std::string("SITKA");
    default:
        return std::string("UNKNOW");
    }
}