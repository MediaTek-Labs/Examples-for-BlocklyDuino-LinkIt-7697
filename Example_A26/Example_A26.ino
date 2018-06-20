/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 13 Jun 2018 07:05:33 GMT
 */

#include <Wire.h>
#include <adxl345_blockly.h>

ADXL345Block adxl345;

void setup()
{

  adxl345.begin();
  Serial.begin(9600);

}


void loop()
{
  adxl345.detectGesture();
  if (adxl345.isTapDetected()) {
    Serial.println("ADXL345 : 偵測到 點一下");

  }
  if (adxl345.isDoubleTapDetected()) {
    Serial.println("ADXL345 : 偵測到 點兩下");

  }
  if (adxl345.isActivityDetected()) {
    Serial.println("ADXL345 : 偵測到 移動");

  }
  delay(1000);
}