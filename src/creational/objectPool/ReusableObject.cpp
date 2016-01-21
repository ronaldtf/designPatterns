/**
 * \file ReusableObject.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "ReusableObject.h"

namespace designPatterns
{
namespace creational
{
namespace objectPool
{

unsigned short ReusableObject::objectId = 0;

ReusableObject::ReusableObject() : attr1(0) {
}

ReusableObject::ReusableObject(int attr1) : attr1(attr1)
{
}

ReusableObject::~ReusableObject() {
}

int ReusableObject::getAttr1()
{
	return attr1;
}

void ReusableObject::setAttr1(int attr1)
{
	this->attr1 = attr1;
}

bool ReusableObject::operator==(const ReusableObject &obj)
{
	return (obj.objectId == this->objectId);
}

}
}
}
