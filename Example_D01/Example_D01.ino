#include <LBLE.h>
#include <LBLEPeriphral.h>

int data;

LBLEService __periphralService("B77D53AC-D590-41E0-B75A-6DA442F543F6");
LBLECharacteristicInt __b77d53ac_d590_41e0_b75a_6da442f543f6("B77D53AC-D590-41E0-B75A-6DA442F543F6", LBLE_READ | LBLE_WRITE);

void setup()
{
  LBLE.begin();
  while (!LBLE.ready()) { delay(100); }

  __periphralService.addAttribute(__b77d53ac_d590_41e0_b75a_6da442f543f6);

  LBLEPeripheral.addService(__periphralService);
  LBLEPeripheral.begin();
  LBLEAdvertisementData __advertisement;
  __advertisement.configAsConnectableDevice("LinkIt 7697");
  LBLEPeripheral.advertise(__advertisement);
  Serial.begin(9600);

  Serial.println("藍芽裝置建立成功");
}


void loop()
{
  if (__b77d53ac_d590_41e0_b75a_6da442f543f6.isWritten()) {
    data = __b77d53ac_d590_41e0_b75a_6da442f543f6.getValue();
    Serial.println(data);

  }
  __b77d53ac_d590_41e0_b75a_6da442f543f6.setValue(123456789);delay(1000);
}