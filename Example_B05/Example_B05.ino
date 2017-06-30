#include <Grove_LED_Bar.h>

int i;

Grove_LED_Bar __bar2(3, 2, 0);

void setup()
{

  __bar2.begin();

}


void loop()
{
  for (i = 0; i <= 10; i++) {
    __bar2.setLevel(i);
    delay(1000);
  }
  delay(1000);
}
