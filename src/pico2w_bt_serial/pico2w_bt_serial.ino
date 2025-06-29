#include <SerialBT.h>

void setup()
{
    Serial.begin(115200);
    SerialBT.setName("PicoW2_BT_Dev");
    SerialBT.begin();
}

void loop()
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