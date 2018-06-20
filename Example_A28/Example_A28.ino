/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 13 Jun 2018 08:39:16 GMT
 */

#include <Adafruit_NeoPixel.h>

int i;

int color;

int add;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(60,2,NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();

  pixels.setBrightness(30);

  color = 0;
  add = 1;
  Serial.begin(9600);

}


void loop()
{
  for (i = 0; i <= 19; i++) {
    pixels.setPixelColor(i, pixels.Color(color,0,0));
  }
  for (i = 20; i <= 39; i++) {
    pixels.setPixelColor(i, pixels.Color(0,color,0));
  }
  for (i = 40; i <= 59; i++) {
    pixels.setPixelColor(i, pixels.Color(0,0,color));
  }
  pixels.show();
  color = color + add;
  if (color >= 255) {
    add = -1;

  } else if (color <= 0) {
    add = 1;
  }
  Serial.println(color);
  delay(10);
}