#pragma once

#include <iostream>
#include <vector>
#include "coffeeShop.h"

class CoffeeShopImpl : public CoffeeShop {
private:
    std::vector<Customer*> customers; // 訂閱的顧客列表
public:
    // 添加顧客到訂閱列表
    void subscribe(Customer* customer) override {
        customers.push_back(customer);
    }

    // 從訂閱列表中移除顧客
    void unsubscribe(Customer* customer) override {
        customers.erase(std::remove(customers.begin(), customers.end(), customer), customers.end());
    }

    // 向所有訂閱的顧客發送通知
    void notifySubscribers(const std::string& message) override {
        for (auto customer : customers) {
            customer->update(message);
        }
    }

    // 發佈新咖啡上架消息
    void addNewCoffee(const std::string& coffeeName) {
        notifySubscribers(coffeeName);
    }

    // 發佈特價活動消息
    void offerSpecialDiscount(const std::string& discountDetails) {
        notifySubscribers(discountDetails);
    }
};