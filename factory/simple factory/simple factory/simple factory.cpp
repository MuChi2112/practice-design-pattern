#include <iostream>
#include "drinkFactory.h"

using namespace std;

int main()
{   
    string ans = "";
    cout << "請輸入要什麼飲料" << endl;
    cin >> ans;

    Drink* drink = DrinkFactory::createDrink(ans);
    if (drink != nullptr) {
        drink->prepare();
    }
    else {
        cout << "沒有這個飲料" << endl;
    }
}

