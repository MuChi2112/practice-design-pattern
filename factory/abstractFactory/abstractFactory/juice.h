#pragma once

#include <iostream>
#include "drink.h"

using namespace std;

class Juice : public Drink {
public:

	Juice() {

	}
	void prepare() override {
		cout << "prepare for Juice" << endl;
	}
};