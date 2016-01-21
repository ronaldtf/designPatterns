/**
 * \file ClassInterface.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_FACADE_CLASSINTERFACE_H_
#define SRC_STRUCTURAL_FACADE_CLASSINTERFACE_H_

#include <string>

namespace designPatterns
{
namespace structural
{
namespace facade
{

class ClassInterface
{
protected:
	virtual std::string getClassName() = 0;
public:
	std::string method()
	{
		return getClassName();
	}
	virtual ~ClassInterface()
	{};
};

}
}
}

#endif /* SRC_STRUCTURAL_FACADE_CLASSINTERFACE_H_ */
