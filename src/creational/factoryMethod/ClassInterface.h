/**
 * \file ClassInterface.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_FACTORYMETHOD_CLASSINTERFACE_H_
#define SRC_CREATIONAL_FACTORYMETHOD_CLASSINTERFACE_H_

#include <string>

namespace designPatterns
{
namespace creational
{
namespace factoryMethod
{

class ClassInterface
{
public:
	virtual std::string getName() = 0;
	virtual ~ClassInterface(){};
};

}
}
}


#endif /* SRC_CREATIONAL_FACTORYMETHOD_CLASSINTERFACE_H_ */
