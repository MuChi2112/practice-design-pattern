#include <iostream>
#include <string>

#include "SugarHandler.h"
#include "MilkHandler.h"
#include "TemperatureHandler.h"

int main() {
    // 創建處理者
    SugarHandler sugarHandler;
    MilkHandler milkHandler;
    TemperatureHandler tempHandler("冷");

    // 設定職責鍊
    sugarHandler.setNextHandler(&milkHandler);
    milkHandler.setNextHandler(&tempHandler);

    // 顧客的訂單
    std::string order = "咖啡訂單：\n  - 黑咖啡\n";

    // 處理訂單
    sugarHandler.handleRequest(order); // 從第一個處理者開始

    // 輸出結果
    std::cout << order << std::endl;

    return 0;
}