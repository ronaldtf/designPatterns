/**
 * \file ProductPizza.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "ProductPizza.h"
#include <map>

namespace designPatterns
{
namespace creational
{
namespace builder
{

void ProductPizza::setBase(Base base)
{
	this->base = base;
}

void ProductPizza::setSauce(Sauce sauce)
{
	this->sauce = sauce;
}

void ProductPizza::addTopping(Topping topping)
{
	this->topping.push_back(topping);
}

std::string ProductPizza::toString() const
{
	const std::map<Base, std::string> baseMap = {{BASE_BREAD, "bread"},{BASE_NORMAL,"normal"},{BASE_CALZONE, "calzone"}};
	const std::map<Sauce, std::string> sauceMap = {{SAUCE_TOMATO, "tomato"},{SAUCE_BARBECUE, "barbecue"},{SAUCE_CHILLI, "chilli"},{SAUCE_NO_SAUCE, "none"}};
	const std::map<Topping, std::string> toppingMap = {{TOP_EXTRA_CHEESE, "extra_cheese"},{TOP_MUSHROOM, "mushroom"},{TOP_ONION, "onion"},{TOP_CHICKEN, "chicken"}};

	std::string str = "base: " + baseMap.at(base);
	str += " / sauce: " + sauceMap.at(sauce);
	str += " / topping: ";
	for (Topping top:topping)
	{
		str += toppingMap.at(top) + " ";
	}

	return str;
}

}
}
}
