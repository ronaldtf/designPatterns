/**
 * \file AdapterClass.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "AdapterClass.h"

namespace designPatterns
{
namespace structural
{
namespace adapter
{

AdapterClass::AdapterClass() {
}

std::string AdapterClass::method()
{
	return "AdapterClass::method->" + LegacyClass::methodLegacy();
}

}
}
}
