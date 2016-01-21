/**
 * \file Class2.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Class2.h"

namespace designPatterns
{
namespace structural
{
namespace facade
{

const std::string Class2::className = "Class2";

Class2::Class2() {
}

std::string Class2::getClassName()
{
	return className;
}

Class2::~Class2()
{
}

}
}

}
