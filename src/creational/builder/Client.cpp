/**
 * \file Client.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include <iostream>
#include "Builder.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"
#include "Director.h"

using namespace designPatterns::creational::builder;

int main()
{

	Builder *b1 = new ConcreteBuilder1();
	Builder *b2 = new ConcreteBuilder2();
	Director d1(b1);
	Director d2(b2);
	d1.createPizza();
	d2.createPizza();
	std::cout << "Pizza 1 => " << d1.getPizza().toString() << std::endl;
	std::cout << "Pizza 2 => " << d2.getPizza().toString() << std::endl;
	return 0;
}


