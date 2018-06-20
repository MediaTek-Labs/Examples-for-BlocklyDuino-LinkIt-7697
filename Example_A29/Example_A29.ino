/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 13 Jun 2018 08:49:25 GMT
 */

#include <SPI.h>

#include <MFRC522.h>

String read_id;

MFRC522 rfid(/*SS_PIN*/ 10, /*RST_PIN*/ 9);

String mfrc522_readID()
{
  String ret;
  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial())
  {
    MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);

    for (byte i = 0; i < rfid.uid.size; i++) {
      ret += (rfid.uid.uidByte[i] < 0x10 ? "0" : "");
      ret += String(rfid.uid.uidByte[i], HEX);
    }
  }

  // Halt PICC
  rfid.PICC_HaltA();

  // Stop encryption on PCD
  rfid.PCD_StopCrypto1();
  return ret;
}

void setup()
{

  SPI.begin();
  rfid.PCD_Init();

  Serial.begin(9600);

}


void loop()
{
  read_id = mfrc522_readID();
  if (read_id != "") {
    Serial.print("偵測到 RFID: ");
    Serial.println(read_id);

  }
  delay(1000);
}