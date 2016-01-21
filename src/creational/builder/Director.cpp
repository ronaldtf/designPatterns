/**
 * \file Director.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Director.h"

namespace designPatterns
{
namespace creational
{
namespace builder
{

Director::Director(Builder *builder)
{
	this->builder = builder;
};

void Director::createPizza()
{
	if (builder != nullptr)
	{
		builder->setBase();
		builder->setSauce();
		builder->setToppings();
	}
};

ProductPizza Director::getPizza()
{
	if (builder != nullptr)
		return builder->getPizza();
	return ProductPizza();
};

}
}
}
