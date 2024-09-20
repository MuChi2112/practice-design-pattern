#pragma once

using namespace std;
#include <iostream>
#include "BrewingProcess.h"

class Coffee {
protected:
    // �O�s�@�� BrewingProcess �������СA�Ψӫ��V���骺�R�w�L�{
    BrewingProcess* brewingProcess;

public:
    // �غc�l�����@�� BrewingProcess ��������
    Coffee(BrewingProcess* process) : brewingProcess(process) {}

    // �µ�����ơA��ܻs�@�@�ت��L�{
    virtual void makeCoffee() const = 0;

    // �����R�c���
    virtual ~Coffee() {}
};

