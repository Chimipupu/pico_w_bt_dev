/**
 * @file app_bt.hpp
 * @author Chimipupu(https://github.com/Chimipupu)
 * @brief Pico W/Pico 2 W用のBlutoothアプリヘッダ
 * @version 0.1
 * @date 2025-06-29
 * 
 * @copyright Copyright (c) 2025　Chimipupu(https://github.com/Chimipupu)
 * 
 */
#ifndef APP_BT_HPP
#define APP_BT_HPP

#include <stdint.h>
#include <string.h>
#include <SerialBT.h>
#include <Arduino.h>

void app_bt_init(void);
void app_bt_main(void);

#endif // APP_BT_HPP