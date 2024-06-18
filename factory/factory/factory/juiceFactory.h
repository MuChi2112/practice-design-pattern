#pragma once

#include <iostream>
#include "drinkFactory.h"
#include "juice.h"
using namespace std;

class JuiceFactory :public DrinkFactory {
public:
	Drink* createDrink() override {
		return new Juice();
	}
};