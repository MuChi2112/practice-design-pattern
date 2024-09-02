#include <iostream>

#include <iostream>
#include "CoffeeComponent.h"
#include "CoffeeComposite.h"
#include "CoffeeLeaf.h"

using namespace std;

int main() {
    // 創建單一咖啡項目
    CoffeeLeaf* espresso = new CoffeeLeaf("Espresso", 3.0);
    CoffeeLeaf* cappuccino = new CoffeeLeaf("Cappuccino", 4.0);
    CoffeeLeaf* latte = new CoffeeLeaf("Latte", 4.5);
    CoffeeLeaf* water = new CoffeeLeaf("water", 2.0);
    CoffeeLeaf* juice= new CoffeeLeaf("juice", 5.0);

    // 創建一個複合咖啡訂單
    CoffeeComposite* compositeOrder = new CoffeeComposite();
    compositeOrder->addComponent(espresso);  // 添加一杯 Espresso
    compositeOrder->addComponent(new CoffeeLeaf("Espresso", 3.0));  // 再添加一杯 Espresso
    compositeOrder->addComponent(cappuccino); // 添加一杯 Cappuccino

    CoffeeComposite* compositeOrder2 = new CoffeeComposite();
    compositeOrder2->addComponent(latte);  // 添加一杯 Espresso
    compositeOrder2->addComponent(new CoffeeLeaf("juice", 3.0));  // 再添加一杯 Espresso
    compositeOrder2->addComponent(water); // 添加一杯 Cappuccino

    compositeOrder->addComponent(compositeOrder2);

    compositeOrder->removeComponent(compositeOrder2);

    // 顯示訂單
    compositeOrder->show();
    cout << "Total Cost: $" << compositeOrder->getCost() << endl;

    // 手動釋放記憶體
    delete compositeOrder;

    return 0;
}