/**
 * \file LegacyClass.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "LegacyClass.h"

namespace designPatterns
{
namespace structural
{
namespace adapter
{

LegacyClass::LegacyClass() {
}

std::string LegacyClass::methodLegacy()
{
	return std::string("LegacyClass");
}

}
}
}
