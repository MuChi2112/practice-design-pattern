#pragma once

#include <iostream>

#include "drink.h"


using namespace std;

class DrinkFactory {
	public:
		virtual Drink* createDrink() {
			return nullptr;
		}
};

