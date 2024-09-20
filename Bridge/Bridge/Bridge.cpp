#include <iostream>

#include "BrewingProcess.h"
#include "Coffee.h"

#include "HandBrew.h"
#include "MachineBrew.h"

#include "Espresso.h"
#include "Latte.h"
#include "Cappuccino.h"

int main() {
    // 使用普通指標來管理 BrewingProcess 的記憶體
    BrewingProcess* handBrew = new HandBrew();
    BrewingProcess* machineBrew = new MachineBrew();

    // 創建不同類型的咖啡，並傳入不同的沖泡過程
    Coffee* espresso = new Espresso(handBrew);
    espresso->makeCoffee();

    Coffee* latte = new Latte(machineBrew);
    latte->makeCoffee();

    // 手動釋放咖啡對象
    delete espresso;
    delete latte;

    // 手動釋放沖泡過程對象
    delete handBrew;
    delete machineBrew;

    return 0;
}
