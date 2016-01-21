/**
 * \file Client.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include <string>
#include <iostream>
#include "AdapterClass.h"
#include "LegacyClass.h"
#include "Interface.h"

using namespace designPatterns::structural::adapter;

int main()
{
	Interface *c = new AdapterClass();
	std::cout << c->method() << std::endl;
	delete c;

	// Interface c2 = AdapterClass(); IMPORTANT: This is not allowed as we can just use abstract object types with pointers.

	return 0;
}
