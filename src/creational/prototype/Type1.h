/**
 * \file Type1.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_PROTOTYPE_TYPE1_H_
#define SRC_CREATIONAL_PROTOTYPE_TYPE1_H_

#include "Prototype.h"

namespace designPatterns
{
namespace creational
{
namespace prototype
{

class Type1 : public Prototype {
private:
	static unsigned int cloneId; // This is just to verify that clones are correctly generated.
public:
	Type1();
	std::shared_ptr<Prototype> clone();
	std::string getType();
	std::string getMessage();
};

}
}
}

#endif /* SRC_CREATIONAL_PROTOTYPE_TYPE1_H_ */
