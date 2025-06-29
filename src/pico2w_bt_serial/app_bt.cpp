/**
 * @file app_bt.cpp
 * @author Chimipupu(https://github.com/Chimipupu)
 * @brief Pico W/Pico 2 W用のBlutoothアプリ
 * @version 0.1
 * @date 2025-06-29
 * 
 * @copyright Copyright (c) 2025　Chimipupu(https://github.com/Chimipupu)
 * 
 */
#include "app_bt.hpp"

/**
 * @brief Blutoothアプリ初期化
 * 
 */
void app_bt_init(void)
{
    SerialBT.setName("PicoW2_BT_Dev");
    SerialBT.begin();
}

/**
 * @brief Blutoothアプリメイン
 * 
 */
void app_bt_main(void)
{
    while (SerialBT)
    {
        while (SerialBT.available())
        {
            char c = SerialBT.read();
            c = toupper(c);
            Serial.printf("%c\n", c);
            SerialBT.write(c);
        }
    }
}