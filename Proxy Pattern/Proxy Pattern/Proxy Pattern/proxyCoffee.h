#pragma once

#include <iostream>
#include "coffee.h"
#include "realCoffee.h"

class ProxyCoffee : public Coffee {
public:
	void makeCoffee() override {
		if (!realCoffee) {
			realCoffee = new RealCoffee();
		}
		realCoffee->makeCoffee();
	}
private:
	RealCoffee* realCoffee;
};