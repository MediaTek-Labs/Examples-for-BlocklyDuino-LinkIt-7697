#include <Servo.h>

Servo __myservo10;

void setup()
{

  __myservo10.attach(10);
}


void loop()
{
  __myservo10.write(0);
  delay(2000);
  __myservo10.write(180);
  delay(2000);
}