/**
 * \file Director.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_BUILDER_DIRECTOR_H_
#define SRC_CREATIONAL_BUILDER_DIRECTOR_H_

#include "ProductPizza.h"
#include "Builder.h"

namespace designPatterns
{
namespace creational
{
namespace builder
{

class Director
{
private:
	Builder *builder;
public:
	Director(Builder *builder);
	void createPizza();
	ProductPizza getPizza();
};

}
}
}

#endif /* SRC_CREATIONAL_BUILDER_DIRECTOR_H_ */
