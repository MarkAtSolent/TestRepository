#pragma once
#include <string>
#include "dimension.h"

namespace ClassExample
{
	class Item
	{
		std::string name;
		float weight = 0.0f;
		ClassExample::Dimension size;
		int value = 0;

	public:
		Item(std::string name, float weight, ClassExample::Dimension size, int value);

		float GetWeight()
		{
			return weight;
		}

		std::string GetName()
		{
			return name;
		}

		Dimension GetSize()
		{
			return size;
		}

		void SetValue(int val)
		{
			value = val;
		}

		int GetValue()
		{
			return value;
		}
	};
}

