#include <iostream>
#include "proxyCoffee.h"

int main(){
    Coffee* coffee = new ProxyCoffee();
    coffee->makeCoffee();
}

