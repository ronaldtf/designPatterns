/**
 * \file Builder.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_BUILDER_BUILDER_H_
#define SRC_CREATIONAL_BUILDER_BUILDER_H_

#include "ProductPizza.h"

namespace designPatterns
{
namespace creational
{
namespace builder
{
class Builder
{
protected:
	ProductPizza pizza;
public:
	virtual void setBase() = 0;
	virtual void setSauce() = 0;
	virtual void setToppings() = 0;
	ProductPizza getPizza()
	{
		return pizza;
	}
	virtual ~Builder() {};
};

}
}
}




#endif /* SRC_CREATIONAL_BUILDER_BUILDER_H_ */
