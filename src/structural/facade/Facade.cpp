/**
 * \file Facade.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Facade.h"

namespace designPatterns
{
namespace structural
{
namespace facade
{

Facade::Facade() {
	class1 = Class1();
	class2 = Class2();
}

std::string Facade::getNameClass1()
{
	return class1.getClassName();
}

std::string Facade::getNameClass2()
{
	return class2.getClassName();
}

}
}
}
