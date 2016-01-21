/**
 * \file AdapterClass.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_STRUCTURAL_ADAPTER_METHOD2_ADAPTERCLASS_H_
#define SRC_STRUCTURAL_ADAPTER_METHOD2_ADAPTERCLASS_H_

#include "Interface.h"
#include "LegacyClass1.h"
#include "LegacyClass2.h"
#include <string>

namespace designPatterns
{
namespace structural
{
namespace adapter
{

template<typename T>
class AdapterClass : public Interface {
private:
	T *object;
	std::string(T:: *meth)();
public:
	AdapterClass(T *obj, std::string(T:: *meth)());
	AdapterClass();
	std::string method();
	~AdapterClass();

};

}
}
}

#endif /* SRC_STRUCTURAL_ADAPTER_METHOD2_ADAPTERCLASS_H_ */
