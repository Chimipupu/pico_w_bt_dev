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

#define cpu_core_0_init          setup
#define cpu_core_0_main          loop
#define cpu_core_1_init          setup1
#define cpu_core_1_main          loop1

void cpu_core_0_init()
{
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.begin(115200);
}

void cpu_core_0_main()
{
    Serial.printf("TEST CPU Core0\n");
    delay(1000);
}

void cpu_core_1_init()
{
    // Blutoothアプリ初期化
    app_bt_init();
}

void cpu_core_1_main()
{
    // Blutoothアプリ初期化
    app_bt_main();
    // SerialBT.println("TEST CPU Core1. BT Serial\n");
}