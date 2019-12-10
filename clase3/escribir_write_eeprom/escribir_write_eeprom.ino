#include <EEPROM.h>


void setup() {
for (int i = 0; i < 255; i++)
EEPROM.write(i, i);
}

void loop() {
  // put your main code here, to run repeatedly:

}
