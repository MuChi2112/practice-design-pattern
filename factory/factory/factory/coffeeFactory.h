#pragma once

#include <iostream>
#include "drinkFactory.h"

#include "coffee.h"
using namespace std;

class CoffeeFactory :public DrinkFactory{
public:
	Drink* createDrink() override{
		return new Coffee();
	}
};