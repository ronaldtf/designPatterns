/**
 * \file LegacyClass2.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_ADAPTER_METHOD2_LEGACYCLASS2_H_
#define SRC_STRUCTURAL_ADAPTER_METHOD2_LEGACYCLASS2_H_

#include <string>

namespace designPatterns
{
namespace structural
{
namespace adapter
{

class LegacyClass2 {
public:
	LegacyClass2();
	~LegacyClass2();
	std::string getClassName2();
};

}
}
}
#endif /* SRC_STRUCTURAL_ADAPTER_METHOD2_LEGACYCLASS2_H_ */
