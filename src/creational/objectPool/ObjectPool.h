/**
 * \file ObjectPool.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef OBJECTPOOL_H_
#define OBJECTPOOL_H_

#include <memory>
#include <stack>
#include <deque>
#include "ReusableObject.h"

namespace designPatterns
{
namespace creational
{
namespace objectPool
{

class ObjectPool {
private:
	ObjectPool();
	static std::shared_ptr<ObjectPool> instance;	// Implement the singleton pattern
	static std::stack<ReusableObject> poolAvailable;
	static std::deque<ReusableObject> poolBusy;     // NOTE: This would not be needed if we rely that the client will return the provided object
public:
	static const unsigned short NUM_INSTANCES = 5;
	static std::shared_ptr<ObjectPool> getObjectPool(); // Implement the singleton pattern
	bool getReusableObject(ReusableObject &object);
	bool releaseReusableObject(ReusableObject &object);
	virtual ~ObjectPool();
};

};
};
}

#endif /* OBJECTPOOL_H_ */
