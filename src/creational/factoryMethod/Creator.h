/**
 * \file Creator.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_FACTORYMETHOD_CREATOR_H_
#define SRC_CREATIONAL_FACTORYMETHOD_CREATOR_H_

#include "CreatorInterface.h"
#include "ClassInterface.h"

namespace designPatterns
{
namespace creational
{
namespace factoryMethod
{


class Creator : public CreatorInterface {
public:
	std::shared_ptr<ClassInterface> factoryMethod();
};

}
}
}

#endif /* SRC_CREATIONAL_FACTORYMETHOD_CREATOR_H_ */
