/**
 * \file PrototypeCache.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "PrototypeCache.h"

namespace designPatterns
{
namespace creational
{
namespace prototype
{

std::shared_ptr<PrototypeCache> PrototypeCache::instance = nullptr;

PrototypeCache::PrototypeCache()
{
	cache[TYPE1] = std::unique_ptr<Prototype>(new Type1);
	cache[TYPE2] = std::unique_ptr<Prototype>(new Type2);
}

PrototypeCache::~PrototypeCache()
{}

std::shared_ptr<PrototypeCache> PrototypeCache::getInstance()
{
	if (instance == nullptr)
	{
		instance = std::shared_ptr<PrototypeCache>(new PrototypeCache);
	}
	return instance;
}

std::shared_ptr<Prototype> PrototypeCache::getPrototype(EType type)
{
	return (cache[type])->clone();
}

}
}
}
