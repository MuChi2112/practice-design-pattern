#pragma once

#include <iostream>
#include "drinkFactory.h"

#include "teaCup.h"
#include "tea.h"

class TeaFactory : public DrinkFactory {
	public:
		TeaFactory() {

		}

		Drink* createDrink() override {
			return new Tea();
		}

		Container* createContainer() override {
			return new TeaCup();
		}
};