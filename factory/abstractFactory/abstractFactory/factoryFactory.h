#pragma once

#include <iostream>
#include "drinkFactory.h"
#include "CoffeeFactory.h"
#include "JuiceFactory.h"
#include "TeaFactory.h"



class FactoryFactory{
public:
	static DrinkFactory* createFactory(string temp) {
		if (temp == "coffee") {
			return new CoffeeFactory();
		}
		else if (temp == "juice") {
			return new JuiceFactory();
		}
		else if (temp == "tea") {
			return new TeaFactory();
		}

		return nullptr;
	}
};