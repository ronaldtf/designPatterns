/**
 * \file Client.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "ObjectPool.h"
#include <iostream>
#include <memory>

using namespace designPatterns::creational::objectPool;

int main()
{

	std::shared_ptr<ObjectPool> objectPool = ObjectPool::getObjectPool();
	ReusableObject arrayObjects[ObjectPool::NUM_INSTANCES];
	std::cout << "1. Get all the resources" << std::endl;
	for (int i=0; i<ObjectPool::NUM_INSTANCES; i++)
	{
		if (objectPool->getReusableObject(arrayObjects[i]))
		{
			std::cout << "\tGot object from pool:\t[OK]" << std::endl;
			arrayObjects[i].setAttr1(i);
		}
		else
		{
			std::cout << "\tCannot get object from pool:\t[FAIL]" << std::endl;
		}
	}

	std::cout << "2. Try to get a resource extra (not available)" << std::endl;
	ReusableObject tmpObject;
	if (objectPool->getReusableObject(tmpObject))
	{
		std::cout << "\tGot object from pool:\t[FAIL]" << std::endl;
	}
	else
	{
		std::cout << "\tCannot get object from pool:\t[OK]" << std::endl;
	}

	std::cout << "3. Release the last resource taken." << std::endl;
	objectPool->releaseReusableObject(arrayObjects[ObjectPool::NUM_INSTANCES-1]);
	std::cout << "4. Try to get a resource again" << std::endl;
	if (objectPool->getReusableObject(arrayObjects[ObjectPool::NUM_INSTANCES-1]))
	{
		std::cout << "\tGot object from pool:\t[OK]" << std::endl;
	}
	else
	{
		std::cout << "\tCannot get object from pool:\t[FAIL]" << std::endl;
	}

	std::cout << "5. Release all the resources" << std::endl;
	for (int i=0; i<ObjectPool::NUM_INSTANCES; i++)
	{
		if (objectPool->releaseReusableObject(arrayObjects[i]))
		{
			std::cout << "\tReleased object from pool:\t[OK]" << std::endl;
			arrayObjects[i].setAttr1(i);
		}
		else
		{
			std::cout << "\tCannot release object from pool:\t[FAIL]" << std::endl;
		}
	}

	return 0;
};
