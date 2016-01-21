/**
 * \file Prototype.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_PROTOTYPE_PROTOTYPE_H_
#define SRC_CREATIONAL_PROTOTYPE_PROTOTYPE_H_

#include <string>
#include <memory>
#include <sstream>

namespace designPatterns
{
namespace creational
{
namespace prototype
{

enum EType
{
	TYPE1 = 0,
	TYPE2
};

class Prototype {
protected:
	std::string type;
	static unsigned int id;            // This is actually not needed, but I defined it in order to verify the number of created instances
	static std::string num2str(int n); // This is for internal use only (should be exported to a Utils class).
public:
	virtual std::shared_ptr<Prototype> clone() = 0; // It would be possible to return a Prototype* and then Prototype& var=obj.clone();
	std::string getType();
	virtual std::string getMessage();  // This is just for printing purposes
	virtual ~Prototype();
};


}
}
}

#endif /* SRC_CREATIONAL_PROTOTYPE_PROTOTYPE_H_ */
