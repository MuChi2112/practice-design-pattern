#pragma once

#include <iostream>


#include "drink.h"
#include "container.h"

using namespace std;

class DrinkFactory {
	public:
		DrinkFactory() {
			
		}
		virtual Drink* createDrink() = 0;

		virtual Container* createContainer() = 0;

		
};

