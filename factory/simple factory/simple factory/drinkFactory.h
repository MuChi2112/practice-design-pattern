#pragma once

#include <iostream>
#include "coffee.h"
#include "juice.h"
#include "tea.h"

using namespace std;

class DrinkFactory {
	public:
		static Drink * createDrink(string temp) {
			if (temp == "coffee") {
				return new Coffee();
			}else if (temp == "juice") {
				return new Juice();
			}else if (temp == "tea") {
				return new Tea();
			}

			return nullptr;
		}
};

