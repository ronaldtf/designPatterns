/**
 * \file Client.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Facade.h"
#include <iostream>

using namespace designPatterns::structural::facade;

int main()
{
	Facade f = Facade();
	std::cout << "Class1: " << f.getNameClass1() << std::endl;
	std::cout << "Class2: " << f.getNameClass2() << std::endl;

	return 0;
}


