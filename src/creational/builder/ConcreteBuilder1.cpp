/**
 * \file ConcreteBuilder1.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "ConcreteBuilder1.h"
#include "ProductPizza.h"

namespace designPatterns
{
namespace creational
{
namespace builder
{

void ConcreteBuilder1::setBase()
{
	pizza.setBase(BASE_CALZONE);
}
void ConcreteBuilder1::setSauce()
{
	pizza.setSauce(SAUCE_BARBECUE);
}
void ConcreteBuilder1::setToppings()
{
	pizza.addTopping(TOP_MUSHROOM);
	pizza.addTopping(TOP_EXTRA_CHEESE);
}

}
}
}
