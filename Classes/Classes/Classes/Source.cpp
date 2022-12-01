#include <iostream>
#include <vector>
#include "Item.h"
#include "dimension.h"

int main()
{
	std::cout << "Welcome to the item class demo" << std::endl;
	std::cout << "This demonstrates the use of classes" << std::endl;

	ClassExample::Item gem("Ruby", 0.6, ClassExample::Dimension{0.1f, 0.2f}, 1000);

	std::cout << gem.GetName() << " weighs " << gem.GetWeight() << std::endl;
	std::cout << "dimensions are " << gem.GetSize().width << ", " << gem.GetSize().height << std::endl;
	std::cout << "value is " << gem.GetValue() << std::endl;

	gem.SetValue(10000);

	std::cout << " new value is " << gem.GetValue() << std::endl;

	return 0;
}
