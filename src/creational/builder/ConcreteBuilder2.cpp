/**
 * \file ConcreteBuilder2.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "ConcreteBuilder2.h"
#include "ProductPizza.h"

namespace designPatterns
{
namespace creational
{
namespace builder
{

void ConcreteBuilder2::setBase()
{
	Builder::pizza.setBase(BASE_NORMAL);
}
void ConcreteBuilder2::setSauce()
{
	Builder::pizza.setSauce(SAUCE_TOMATO);
}
void ConcreteBuilder2::setToppings()
{
	Builder::pizza.addTopping(TOP_ONION);
	Builder::pizza.addTopping(TOP_CHICKEN);
}

}
}
}
