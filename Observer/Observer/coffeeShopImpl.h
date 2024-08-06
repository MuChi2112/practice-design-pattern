#pragma once

#include <iostream>
#include <vector>
#include "coffeeShop.h"

class CoffeeShopImpl : public CoffeeShop {
private:
    std::vector<Customer*> customers; // �q�\���U�ȦC��
public:
    // �K�[�U�Ȩ�q�\�C��
    void subscribe(Customer* customer) override {
        customers.push_back(customer);
    }

    // �q�q�\�C�������U��
    void unsubscribe(Customer* customer) override {
        customers.erase(std::remove(customers.begin(), customers.end(), customer), customers.end());
    }

    // �V�Ҧ��q�\���U�ȵo�e�q��
    void notifySubscribers(const std::string& message) override {
        for (auto customer : customers) {
            customer->update(message);
        }
    }

    // �o�G�s�@�ؤW�[����
    void addNewCoffee(const std::string& coffeeName) {
        notifySubscribers(coffeeName);
    }

    // �o�G�S�����ʮ���
    void offerSpecialDiscount(const std::string& discountDetails) {
        notifySubscribers(discountDetails);
    }
};