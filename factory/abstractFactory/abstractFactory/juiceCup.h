#pragma once

#include <iostream>
#include "container.h"

using namespace std;

class JuiceCup : public Container {
public:

	JuiceCup() {

	}
	void hold() override {
		cout << "prepare for Juice Cup" << endl;
	}
};