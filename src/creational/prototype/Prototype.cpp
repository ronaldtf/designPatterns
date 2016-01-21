/**
 * \file Prototype.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Prototype.h"

namespace designPatterns
{
namespace creational
{
namespace prototype
{

unsigned int Prototype::id = 0;

std::string Prototype::num2str(int n)
{
	std::ostringstream os;
	os << n;
	return os.str();
}

Prototype::~Prototype()
{}

std::string Prototype::getType()
{
	return type;
}

std::string Prototype::getMessage()
{
	return Prototype::num2str(id) + ". " + getType();
}

}
}
}
