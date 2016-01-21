/**
 * \file Client.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include <iostream>
#include "AdapterClass.h"
#include "Interface.h"
#include "LegacyClass1.h"
#include "LegacyClass2.h"

using namespace designPatterns::structural::adapter;

int main()
{
	Interface *adapter1 = new AdapterClass<LegacyClass1>(new LegacyClass1(), &LegacyClass1::getClassName1);
	std::cout << adapter1->method() << std::endl;
	return 0;
}


