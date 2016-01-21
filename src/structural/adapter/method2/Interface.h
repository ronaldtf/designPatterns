/**
 * \file Interface.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_ADAPTER_INTERFACE_H_
#define SRC_STRUCTURAL_ADAPTER_INTERFACE_H_

#include <string>

namespace designPatterns
{
namespace structural
{
namespace adapter
{

class Interface
{
public:
	virtual std::string method() = 0;
	virtual ~Interface()
	{};
};

}
}
}



#endif /* SRC_STRUCTURAL_ADAPTER_INTERFACE_H_ */
