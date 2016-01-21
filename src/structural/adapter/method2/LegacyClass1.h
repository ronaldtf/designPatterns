/**
 * \file LegacyClass1.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_ADAPTER_METHOD2_LEGACYCLASS1_H_
#define SRC_STRUCTURAL_ADAPTER_METHOD2_LEGACYCLASS1_H_

#include <string>

namespace designPatterns
{
namespace structural
{
namespace adapter
{

class LegacyClass1 {
public:
	LegacyClass1();
	~LegacyClass1();
	std::string getClassName1();
};

}
}
}

#endif /* SRC_STRUCTURAL_ADAPTER_METHOD2_LEGACYCLASS1_H_ */
