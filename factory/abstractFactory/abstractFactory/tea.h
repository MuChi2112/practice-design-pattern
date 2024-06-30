#pragma once

#include <iostream>
#include "drink.h"

using namespace std;

class Tea : public Drink {
public:

	Tea() {

	}
	void prepare() override {
		cout << "prepare for tea" << endl;
	}
};