#pragma once

#include <iostream>
#include "beverage.h"

using namespace std;

class Tea : public Beverage {
public:
	unique_ptr<Beverage> clone() const override {
		return make_unique<Tea>(*this);
	}
	void display() override {
		cout << "display tea" << endl;
	}
};