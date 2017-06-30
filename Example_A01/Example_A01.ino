boolean led;

void setup()
{
  led = true;
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

}


void loop()
{
  if (led) {
    digitalWrite(LED_BUILTIN, HIGH);
    led = false;
    Serial.println("LED ON");

  } else {
    digitalWrite(LED_BUILTIN, LOW);
    led = true;
    Serial.println("LED OFF");

  }
  delay(1000);
}