#pragma once

#include "pay.h"


class CreditCard : public Pay {
public:
	int payBills(int price) override {
		return price * 0.9;
	}
};