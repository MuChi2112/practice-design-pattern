#pragma once

#include <iostream>
using namespace std;

class OrderCommand {
public:
    virtual void execute() = 0;
    virtual void cancel() = 0;
    virtual ~OrderCommand() = default;
};