#include "DHT.h"

DHT __dht2(2, DHT22);

void setup()
{

  Serial.begin(9600);

  __dht2.begin();

}


void loop()
{
  Serial.print("相對溼度 : ");
  Serial.println(__dht2.readHumidity());
  Serial.print("攝氏溫度 : ");
  Serial.println(__dht2.readTemperature());
  delay(1000);
}