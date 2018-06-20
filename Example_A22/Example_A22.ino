/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 13 Jun 2018 06:13:22 GMT
 */

#include <Wire.h>
#include <SHT2x.h>

void setup()
{

  Serial.begin(9600);

  Wire.begin();
}


void loop()
{
  Serial.print("溫度:");
  Serial.println(SHT2x.GetTemperature());
  Serial.print("濕度:");
  Serial.println(SHT2x.GetHumidity());
  delay(1000);
}