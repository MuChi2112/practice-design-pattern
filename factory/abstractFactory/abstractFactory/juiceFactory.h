#pragma once

#include <iostream>
#include "drinkFactory.h"

#include "juiceCup.h"
#include "juice.h"


class JuiceFactory : public DrinkFactory{
	public:
		JuiceFactory() {

		}

		Drink* createDrink() override {
			return new Juice();
		}

		Container* createContainer() override {
			return new JuiceCup();
		}

};