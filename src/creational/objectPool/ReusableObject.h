/**
 * \file ReusableObject.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef REUSABLEOBJECT_H_
#define REUSABLEOBJECT_H_


namespace designPatterns
{
namespace creational
{
namespace objectPool
{

class ReusableObject {
private:
	static unsigned short objectId;
	int attr1;
public:
	ReusableObject();
	ReusableObject(int attr1);
	int getAttr1();
	void setAttr1(int attr1);
	virtual ~ReusableObject();
	bool operator==(const ReusableObject &obj);
};

};
};
}

#endif /* REUSABLEOBJECT_H_ */
