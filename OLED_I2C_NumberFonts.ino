#include <OLED_I2C.h>

OLED  myOLED(A4, A5, 8);
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];

void setup()
{
  myOLED.begin();
}

void loop()
{
  myOLED.clrScr();
  myOLED.setFont(BigNumbers);
  myOLED.printNumI(0,20, 20);
  myOLED.printNumI(6,40, 20);
  myOLED.drawRect(60, 20, 65, 30);
  myOLED.drawRect(60, 35, 65, 45);
  myOLED.printNumI(0,75, 20);
  myOLED.printNumI(0,95, 20);
  
  myOLED.update();  
}
