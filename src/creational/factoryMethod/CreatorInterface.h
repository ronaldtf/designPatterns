/**
 * \file CreatorInterface.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_FACTORYMETHOD_CREATORINTERFACE_H_
#define SRC_CREATIONAL_FACTORYMETHOD_CREATORINTERFACE_H_

#include <memory>
#include "ClassInterface.h"

namespace designPatterns
{
namespace creational
{
namespace factoryMethod
{

class CreatorInterface
{
public:
	virtual std::shared_ptr<ClassInterface> factoryMethod() = 0;
	virtual ~CreatorInterface() {};
};

}
}
}



#endif /* SRC_CREATIONAL_FACTORYMETHOD_CREATORINTERFACE_H_ */
