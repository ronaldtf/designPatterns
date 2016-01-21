/**
 * \file ConcreteBuilder1.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_BUILDER_CONCRETEBUILDER1_H_
#define SRC_CREATIONAL_BUILDER_CONCRETEBUILDER1_H_

#include "Builder.h"

namespace designPatterns
{
namespace creational
{
namespace builder
{

class ConcreteBuilder1 : public Builder {
public:
	void setBase();
	void setSauce();
	void setToppings();
};

}
}
}

#endif /* SRC_CREATIONAL_BUILDER_CONCRETEBUILDER1_H_ */
