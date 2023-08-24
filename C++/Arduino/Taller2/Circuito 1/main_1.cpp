int Pulse = 0;
void setup()
{
  pinMode(2, INPUT);
  for (int i = 3; i <= 5; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
   Pulse = digitalRead(2);
  if (Pulse == 1) {
    for (int i = 5; i >= 3; i--) {
      digitalWrite(i, HIGH);
      delay(1000);
    }
    delay(10000);
  } else {
    for (int i = 3; i <= 5; i++) {
       digitalWrite(i, LOW);
    }
  }
}
