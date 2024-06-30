#include <iostream>
#include "drinkFactory.h"
#include "factoryFactory.h"

using namespace std;

int main()
{
    string ans = "";
    cout << "請輸入要什麼飲料" << endl;
    cin >> ans;

    DrinkFactory* factory = FactoryFactory::createFactory(ans);
    Drink* drink = factory->createDrink();
    Container* container = factory->createContainer();
    
    if (factory != nullptr) {
        drink->prepare();
        container->hold();
    }
    else {
        cout << "沒有這個飲料" << endl;
    }
}