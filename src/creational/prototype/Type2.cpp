/**
 * \file Type2.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Type2.h"

namespace designPatterns
{
namespace creational
{
namespace prototype
{

unsigned int Type2::cloneId = 0;

Type2::Type2() {
	Prototype::type = "Type2"; // Also possible Prototype::type
}

std::shared_ptr<Prototype> Type2::clone()
{
	++id;
	return std::shared_ptr<Prototype>(new Type2);
}

std::string Type2::getMessage()
{
	return Prototype::getMessage() + " " + Prototype::num2str(++cloneId);
}

}
}
}
