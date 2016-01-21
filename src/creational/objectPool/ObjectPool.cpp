/**
 * \file ObjectPool.cpp
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#include "ObjectPool.h"
#include <iterator>
#include <iostream>

namespace designPatterns
{
namespace creational
{
namespace objectPool
{

std::shared_ptr<ObjectPool> ObjectPool::instance = std::shared_ptr<ObjectPool>(nullptr);
std::stack<ReusableObject> ObjectPool::poolAvailable; // IMPORTANT: We need to define this here because in the *.h file it has just the static declaration, not the definition.
std::deque<ReusableObject> ObjectPool::poolBusy; // IMPORTANT: We need to define this here because in the *.h file it has just the static declaration, not the definition.

ObjectPool::ObjectPool() {
	poolAvailable = std::stack<ReusableObject>();
	for (unsigned short i=0; i<NUM_INSTANCES; i++)
	{
		poolAvailable.push(ReusableObject());
	}
	poolBusy = std::deque<ReusableObject>();
}

ObjectPool::~ObjectPool() {
	if (instance != nullptr)
	{
		instance.reset();
	}
	while (!poolAvailable.empty())
	{
		poolAvailable.pop();
	}
	if (!poolBusy.empty())
	{
		poolBusy.clear();
	}
}

std::shared_ptr<ObjectPool> ObjectPool::getObjectPool()
{
	if (instance == nullptr)
	{
		instance = std::shared_ptr<ObjectPool>(new ObjectPool);
	}
	return instance;
}

bool ObjectPool::getReusableObject(ReusableObject &object)
{
	if (poolAvailable.empty())
	{
		return false;
	}
	object = poolAvailable.top();
	poolBusy.push_back(object);
	poolAvailable.pop();
	return true;
}

bool ObjectPool::releaseReusableObject(ReusableObject &object)
{
	for (std::deque<ReusableObject>::iterator it=poolBusy.begin(); it!=poolBusy.end(); it++)
	{
		if (*it == object)
		{
			poolAvailable.push(*it);
			poolBusy.erase(it, it+1);
			return true;
		}
	}
	return false;
}

}
}
}
