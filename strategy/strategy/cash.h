#pragma once

#include "pay.h"


class Cash : public Pay {
public:
	int payBills(int price) override {
		return price;
	}
};