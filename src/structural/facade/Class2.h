/**
 * \file Class2.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_FACADE_CLASS2_H_
#define SRC_STRUCTURAL_FACADE_CLASS2_H_

#include "ClassInterface.h"

namespace designPatterns
{
namespace structural
{
namespace facade
{

class Class2 : public ClassInterface {
private:
	static const std::string className;
public:
	Class2();
	std::string getClassName();
	~Class2(); // IMPORTANT: We hae to define this here as the ClassInteface has a virtual destructor.
};

}
}
}
#endif /* SRC_STRUCTURAL_FACADE_CLASS2_H_ */
