/**
 * \file ProductPizza.h
 * \author Ronald T. Fernandez
 * \version 1.0
 */

#ifndef SRC_CREATIONAL_BUILDER_PRODUCTPIZZA_H_
#define SRC_CREATIONAL_BUILDER_PRODUCTPIZZA_H_

#include <vector>
#include <string>

namespace designPatterns
{
namespace creational
{
namespace builder
{

enum Base
{
	BASE_BREAD,
	BASE_NORMAL,
	BASE_CALZONE
};
enum Sauce
{
	SAUCE_TOMATO,
	SAUCE_BARBECUE,
	SAUCE_CHILLI,
	SAUCE_NO_SAUCE
};
enum Topping
{
	TOP_EXTRA_CHEESE,
	TOP_MUSHROOM,
	TOP_ONION,
	TOP_CHICKEN
};

class ProductPizza {
public:
private:
	Base base;
	Sauce sauce;
	std::vector<Topping> topping;
public:
	void setBase(Base base);
	void setSauce(Sauce sauce);
	void addTopping(Topping topping);

	std::string toString() const;
};

}
}
}

#endif /* SRC_CREATIONAL_BUILDER_PRODUCTPIZZA_H_ */
