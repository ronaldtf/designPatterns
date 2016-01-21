/**
 * \file PrototypeCache.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_PROTOTYPE_PROTOTYPECACHE_H_
#define SRC_CREATIONAL_PROTOTYPE_PROTOTYPECACHE_H_

#include <limits>
#include <memory>
#include "Prototype.h"
#include "Type1.h"
#include "Type2.h"

namespace designPatterns
{
namespace creational
{
namespace prototype
{

class PrototypeCache {
private:
	static std::shared_ptr<PrototypeCache> instance;
	std::unique_ptr<Prototype> cache[2];
	PrototypeCache();
public:
	static std::shared_ptr<PrototypeCache> getInstance();
	std::shared_ptr<Prototype> getPrototype(EType type);
	virtual ~PrototypeCache();
};

}
}
}

#endif /* SRC_CREATIONAL_PROTOTYPE_PROTOTYPECACHE_H_ */
