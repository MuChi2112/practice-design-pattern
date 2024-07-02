#include <iostream>
#include "order.h"

using namespace std;


int main(){
    int price;
    string payStrategy;
    cin >> price >> payStrategy;

    Order* current = new Order(price, payStrategy);
    cout << current->getBills() << endl;
    

}

