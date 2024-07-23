#pragma once

#include <iostream>
using namespace std;

class Lights {
public:
    void dim(int level) {
        cout << "Dimming lights to level " << level << "..." << endl;
    }

    void turnSwitch() {
        cout << "Turning on lights..." << endl;
    }
};
