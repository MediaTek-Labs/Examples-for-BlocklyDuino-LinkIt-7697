/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 13 Jun 2018 06:12:19 GMT
 */

#include <DHT.h>

DHT dht22_p2(2, DHT22);

void setup()
{

  Serial.begin(9600);

  dht22_p2.begin();
}


void loop()
{
  Serial.print("溫度:");
  Serial.println(dht22_p2.readTemperature());
  Serial.print("濕度:");
  Serial.println(dht22_p2.readHumidity());
  delay(1000);
}