/**
 * \file AdapterClass.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "AdapterClass.h"

namespace designPatterns
{
namespace structural
{
namespace adapter
{

template<class T>
AdapterClass<T>::~AdapterClass()
{
	delete object;
}

template<class T>
AdapterClass<T>::AdapterClass() : object(nullptr), meth(nullptr)
{
}

template<class T>
AdapterClass<T>::AdapterClass(T *obj, std::string(T:: *meth)()) : object(obj), meth(meth) {
}

template<class T>
std::string AdapterClass<T>::method()
{
	return (object->*meth)();
}

template class AdapterClass<LegacyClass1>; // IMPORTANT: This is needed because, as these classes are compiled outside the main, the compiler
template class AdapterClass<LegacyClass2>; // needs to know which classes are going to be taken as a parameter.

}
}
}
