#pragma once

#include <iostream>
#include "beverage.h"

using namespace std;

class Coffee : public Beverage {
public:
	
	unique_ptr<Beverage> clone() const override {
		return make_unique<Coffee>(*this);
	}
	void display() override {
		cout << "display coffee" << endl;

	}

};

