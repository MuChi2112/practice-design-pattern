#pragma once

#include <iostream>
#include "container.h"

using namespace std;

class TeaCup : public Container {
public:

	TeaCup() {

	}
	void hold() override {
		cout << "prepare for Tea Cup" << endl;
	}
};