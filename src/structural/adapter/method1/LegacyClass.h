/**
 * \file LegacyClass.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_ADAPTER_METHOD1_LEGACYCLASS_H_
#define SRC_STRUCTURAL_ADAPTER_METHOD1_LEGACYCLASS_H_

#include <string>

namespace designPatterns
{
namespace structural
{
namespace adapter
{

class LegacyClass {
public:
	LegacyClass();
	std::string methodLegacy();
};

}
}
}

#endif /* SRC_STRUCTURAL_ADAPTER_METHOD1_LEGACYCLASS_H_ */
