/**
 * \file Class.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_FACTORYMETHOD_CLASS_H_
#define SRC_CREATIONAL_FACTORYMETHOD_CLASS_H_

#include "ClassInterface.h"

namespace designPatterns
{
namespace creational
{
namespace factoryMethod
{


class Class : public ClassInterface {
public:
	std::string getName();
};

}
}
}
#endif /* SRC_CREATIONAL_FACTORYMETHOD_CLASS_H_ */
