/**
 * \file Facade.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_FACADE_FACADE_H_
#define SRC_STRUCTURAL_FACADE_FACADE_H_

#include "Class1.h"
#include "Class2.h"
#include "ClassInterface.h"
#include <string>

namespace designPatterns
{
namespace structural
{
namespace facade
{

class Facade {
private:
	Class1 class1;
	Class2 class2;
public:
	Facade();
	std::string getNameClass1();
	std::string getNameClass2();
};

}
}
}

#endif /* SRC_STRUCTURAL_FACADE_FACADE_H_ */
