boolean switch;

void setup()
{
  switch2 = false;
  pinMode(3, OUTPUT);
}


void loop()
{
  if (switch2) {
    digitalWrite(3, HIGH);
    switch2 = false;

  } else {
    digitalWrite(3, LOW);
    switch2 = true;

  }
  delay(2000);
}