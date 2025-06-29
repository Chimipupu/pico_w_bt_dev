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

static uint8_t s_bt_tx_buf[256] = {0};
static uint8_t s_bt_rx_buf[256] = {0};

static void bt_serial_main(void);

/**
 * @brief Blutoothシリアル メイン
 * 
 */
static void bt_serial_main(void)
{
    uint8_t i = 0;

    while (SerialBT)
    {
        digitalWrite(LED_BUILTIN, HIGH);
        while (SerialBT.available())
        {
            uint8_t c = SerialBT.read();
            s_bt_rx_buf[i] = toupper(c);
            SerialBT.write(c);
            i++;
        }
        memset(&s_bt_rx_buf[0], 0, sizeof(s_bt_rx_buf));
        i = 0;
    }
    digitalWrite(LED_BUILTIN, LOW);
}

/**
 * @brief Blutoothアプリ初期化
 * 
 */
void app_bt_init(void)
{
    memset(&s_bt_tx_buf[0], 0, sizeof(s_bt_tx_buf));
    memset(&s_bt_rx_buf[0], 0, sizeof(s_bt_rx_buf));
    SerialBT.setName("Pico2W_BT_Dev");
    SerialBT.begin();
}

/**
 * @brief Blutoothアプリメイン
 * 
 */
void app_bt_main(void)
{

}