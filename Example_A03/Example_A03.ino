int led;

int fade;

void setup()
{
  pinMode(2, OUTPUT);
  led = 0;
  fade = 5;
  digitalWrite(2, LOW);
  Serial.begin(9600);

}


void loop()
{
  analogWrite(2, led);
  led = led + fade;
  if (led <= 0) {
    fade = 5;

  } else if (led >= 255) {
    fade = -5;
  }
  Serial.println(led);
  delay(30);
}