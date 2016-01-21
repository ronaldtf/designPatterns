/**
 * \file ConcreteBuilder2.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_BUILDER_CONCRETEBUILDER2_H_
#define SRC_CREATIONAL_BUILDER_CONCRETEBUILDER2_H_

#include "Builder.h"

namespace designPatterns
{
namespace creational
{
namespace builder
{

class ConcreteBuilder2 : public Builder {
public:
	void setBase();
	void setSauce();
	void setToppings();
};

}
}
}

#endif /* SRC_CREATIONAL_BUILDER_CONCRETEBUILDER2_H_ */
