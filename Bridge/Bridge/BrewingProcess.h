#pragma once

using namespace std;
#include <iostream>

class BrewingProcess {
public:
    // �w�q�@�ӯµ�����ƨӪ�ܨR�w�@�ت��L�{
    virtual void brewCoffee() const = 0;

    // �����R�c��ơA�T�O�l���O�i�H���T�R�c
    virtual ~BrewingProcess() {}
};