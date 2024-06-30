#pragma once

#include <iostream>
#include "drinkFactory.h"

#include "coffeeCup.h"
#include "coffee.h"


class CoffeeFactory: public DrinkFactory {
	public:
		CoffeeFactory(){
			
		}


		Drink* createDrink() override {
			return new Coffee();
		}

		Container* createContainer() override {
			return new CoffeeCup();
		}

};