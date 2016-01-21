/**
 * \file Client.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Singleton.h"
#include <iostream>

using namespace designPatterns::creational::singleton;

int main()
{
	std::shared_ptr<Singleton> singleton1 = Singleton::getSingleton();
	std::shared_ptr<Singleton> singleton2 = Singleton::getSingleton();
	std::shared_ptr<Singleton> singleton3 = Singleton::getSingleton();

	std::cout << singleton1->getAttr1() << " == 0" << std::endl;
	singleton2->setAttr1(1);
	std::cout << singleton1->getAttr1() << " == 1" << std::endl;
	singleton3->setAttr1(2);
	std::cout << singleton1->getAttr1() << " == 2" << std::endl;
}


