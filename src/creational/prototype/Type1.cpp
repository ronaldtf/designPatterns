/**
 * \file Type1.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Type1.h"

namespace designPatterns
{
namespace creational
{
namespace prototype
{

unsigned int Type1::cloneId = 0;

Type1::Type1() {
	type = "Type1"; // Also possible Prototype::type
}

std::shared_ptr<Prototype> Type1::clone()
{
	++id;
	return std::shared_ptr<Prototype>(new Type1);
}

std::string Type1::getMessage()
{
	return Prototype::getMessage() + " " + Prototype::num2str(++cloneId);
}

}
}
}
