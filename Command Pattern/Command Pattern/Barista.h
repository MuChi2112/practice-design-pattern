#pragma once

#include <iostream>
using namespace std;

class Barista {
private:
    vector<OrderCommand*> orderList;
public:
    void takeOrder(OrderCommand* order) {
        order->execute();
        orderList.push_back(order);
    }
    void cancelOrder(OrderCommand* order) {
        order->cancel();
        int temp = 0;
        for (auto n : orderList) {
            temp++;
            if (n == order) {
                break;
            }
        }

        orderList.erase(orderList.begin() + temp);
    }
};