boolean led;

void setup()
{
  led = true;
  pinMode(2, OUTPUT);
}


void loop()
{
  if (led) {
    led = false;
    digitalWrite(2, HIGH);

  } else {
    led = true;
    digitalWrite(2, LOW);

  }
  delay(1000);
}