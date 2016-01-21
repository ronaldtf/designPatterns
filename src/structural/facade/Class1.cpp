/**
 * \file Class1.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Class1.h"

namespace designPatterns
{
namespace structural
{
namespace facade
{

const std::string Class1::className = "Class1";

Class1::Class1() {
}

std::string Class1::getClassName()
{
	return className;
}

Class1::~Class1()
{
}

}
}
}
