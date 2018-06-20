/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 13 Jun 2018 07:51:24 GMT
 */

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd_i2c(0x27);

int counter;

void setup()
{
  lcd_i2c.begin(20, 4);
  counter = 0;
}


void loop()
{
  lcd_i2c.clear();
  lcd_i2c.setCursor(0,0);
  lcd_i2c.print("HELLO");
  lcd_i2c.setCursor(1,0);
  lcd_i2c.print("LinkIt 7697");
  lcd_i2c.setCursor(2,0);
  lcd_i2c.print("Counter:");
  lcd_i2c.setCursor(2,9);
  lcd_i2c.print(counter);
  counter = counter + 1;
  delay(1000);
}