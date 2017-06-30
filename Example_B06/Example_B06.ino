#include <Wire.h>

#include <SeeedOLED.h>

void setup()
{

  Wire.begin();

  SeeedOled.init();

  SeeedOled.deactivateScroll();

  SeeedOled.setPageMode();

}


void loop()
{
  SeeedOled.clearDisplay();
  SeeedOled.setTextXY(0, 1);
  SeeedOled.putNumber(1234567);
  SeeedOled.setTextXY(0, 2);
  SeeedOled.putFloat(3.14156);
  SeeedOled.setTextXY(0, 3);
  SeeedOled.putString("Hello");
  delay(1000);
}