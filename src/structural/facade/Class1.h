/**
 * \file Class1.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_FACADE_CLASS1_H_
#define SRC_STRUCTURAL_FACADE_CLASS1_H_

#include "ClassInterface.h"

namespace designPatterns
{
namespace structural
{
namespace facade
{

class Class1 : public ClassInterface {
private:
	static const std::string className;
public:
	Class1();
	std::string getClassName();
	~Class1(); // IMPORTANT: We hae to define this here as the ClassInteface has a virtual destructor.
};

}
}
}

#endif /* SRC_STRUCTURAL_FACADE_CLASS1_H_ */
