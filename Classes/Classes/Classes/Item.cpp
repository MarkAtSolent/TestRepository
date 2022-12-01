#include "Item.h"

ClassExample::Item::Item(std::string name, float weight, ClassExample::Dimension size, int value)
{
	this->name = name;
	this->size = size;
	this->value = value;
	this->weight = weight;
}

