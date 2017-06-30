#include "Ultrasonic.h"

int range;

Ultrasonic __ultrasonic2(2);

void setup()
{

  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  range = __ultrasonic2.MeasureInCentimeters();
  Serial.println(range);
  if (range < 5) {
    digitalWrite(LED_BUILTIN, HIGH);

  } else {
    digitalWrite(LED_BUILTIN, LOW);

  }
  delay(1000);
}