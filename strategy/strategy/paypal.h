#pragma once

#include "pay.h"


class Paypal : public Pay {
public:
	int payBills(int price) override {
		return price * 0.95;
	}
};