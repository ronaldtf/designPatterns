/**
 * \file Singleton.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "Singleton.h"
#include <memory>

namespace designPatterns
{
namespace creational
{
namespace singleton
{

std::shared_ptr<Singleton> Singleton::instance = std::shared_ptr<Singleton>(nullptr);

Singleton::Singleton() {
}

Singleton::~Singleton() {
	instance.reset();
}

std::shared_ptr<Singleton> Singleton::getSingleton()
{
	if (instance == nullptr)
	{
		instance = std::shared_ptr<Singleton>(new Singleton());
	}
	return instance;
}

int Singleton::getAttr1(){
	return attr1;
}

void Singleton::setAttr1(int attr1)
{
	this->attr1 = attr1;
}

}
}
}
