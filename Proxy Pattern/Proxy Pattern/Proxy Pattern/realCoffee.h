#pragma once

#include <iostream>
#include "coffee.h"

class RealCoffee : public Coffee {
public:
	void makeCoffee() override {
		cout << "Coffee maked from real Coffee" << endl;
	}
};