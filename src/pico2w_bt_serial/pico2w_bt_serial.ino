/**
 * @file pico2w_bt_serial.ino
 * @author Chimipupu(https://github.com/Chimipupu)
 * @brief Arduino IDE用プロジェクトファイル
 * @version 0.1
 * @date 2025-06-29
 * 
 * @copyright Copyright (c) 2025 Chimipupu(https://github.com/Chimipupu)
 * 
 */
#include "app_bt.hpp"

void setup()
{
    Serial.begin(115200);
    app_bt_init();
}

void loop()
{
    app_bt_main();
}