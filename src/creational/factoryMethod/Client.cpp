/**
 * \file Client.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "CreatorInterface.h"
#include "Creator.h"
#include "ClassInterface.h"
#include <iostream>

using namespace designPatterns::creational::factoryMethod;

int main()
{

	CreatorInterface *c = new Creator();
	std::cout << c->factoryMethod()->getName() << std::endl;

	return 0;
}
