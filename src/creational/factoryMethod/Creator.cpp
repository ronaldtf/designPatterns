/**
 * \file Creator.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Creator.h"
#include "Class.h"

namespace designPatterns
{
namespace creational
{
namespace factoryMethod
{

std::shared_ptr<ClassInterface> Creator::factoryMethod()
{
	return std::shared_ptr<ClassInterface>(new Class);
}

}
}
}
