/**
 * \file Singleton.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <memory>

namespace designPatterns
{
namespace creational
{
namespace singleton
{

class Singleton {
private:
	static std::shared_ptr<Singleton> instance;       // IMPORTANT: This variable must be static
	int attr1 = 0;            // Only for testing pursposes (not part of the pattern).
private:
	Singleton();
public:
	static std::shared_ptr<Singleton> getSingleton(); // IMPORTANT: This method must be static
	virtual ~Singleton();                             // Destructor is needed in order to decrease the shared pointer counter
	int getAttr1();           // Only for testing pursposes (not part of the pattern).
	void setAttr1(int value); // Only for testing pursposes (not part of the pattern).
};
};
};
}
#endif /* SINGLETON_H_ */
