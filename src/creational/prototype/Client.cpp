/**
 * \file Client.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "PrototypeCache.h"
#include "Prototype.h"
#include <memory>
#include <iostream>

using namespace designPatterns::creational::prototype;

int main()
{

	std::shared_ptr<PrototypeCache> cache = PrototypeCache::getInstance();
	std::cout << cache->getPrototype(TYPE1)->getMessage() << std::endl;
	std::cout << cache->getPrototype(TYPE1)->getMessage() << std::endl;
	std::cout << cache->getPrototype(TYPE1)->getMessage() << std::endl;
	std::cout << cache->getPrototype(TYPE1)->getMessage() << std::endl;
	std::cout << cache->getPrototype(TYPE2)->getMessage() << std::endl;
	std::cout << cache->getPrototype(TYPE2)->getMessage() << std::endl;
	std::cout << cache->getPrototype(TYPE1)->getMessage() << std::endl;
	std::cout << cache->getPrototype(TYPE2)->getMessage() << std::endl;
	std::cout << cache->getPrototype(TYPE1)->getMessage() << std::endl;

	return 0;
}


