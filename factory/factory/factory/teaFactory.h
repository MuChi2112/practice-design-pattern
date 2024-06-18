#pragma once

#include <iostream>
#include "drinkFactory.h"
#include "tea.h"

using namespace std;

class TeaFactory :public DrinkFactory {
public:
	Drink* createDrink() override {
		return new Tea();
	}
};