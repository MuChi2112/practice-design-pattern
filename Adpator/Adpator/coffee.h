#pragma once

#include<iostream>

class Coffee {
public:
    virtual ~Coffee() {}
    virtual void makeCoffee() = 0; // 製作咖啡的方法
};