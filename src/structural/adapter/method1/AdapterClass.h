/**
 * \file AdapterClass.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_ADAPTER_METHOD1_ADAPTERCLASS_H_
#define SRC_STRUCTURAL_ADAPTER_METHOD1_ADAPTERCLASS_H_

#include <string>
#include "LegacyClass.h"
#include "Interface.h"

namespace designPatterns
{
namespace structural
{
namespace adapter
{

class AdapterClass : public Interface, public LegacyClass {
public:
	AdapterClass();
	std::string method();
};

}
}
}

#endif /* SRC_STRUCTURAL_ADAPTER_METHOD1_ADAPTERCLASS_H_ */
