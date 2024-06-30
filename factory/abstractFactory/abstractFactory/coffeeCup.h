#pragma once

#include <iostream>
#include "container.h"

using namespace std;

class CoffeeCup : public Container {
public:

	CoffeeCup() {

	}
	void hold() override {
		cout << "prepare for Coffee Cup" << endl;
	}
};