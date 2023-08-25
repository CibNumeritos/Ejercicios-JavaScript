int Pulse = 0;
void setup()
{
  for (int i = 4; i <= 8; i++) {
    pinMode(i, i == 4 ? INPUT : OUTPUT);
  }
}

void loop()
{
  Pulse = digitalRead(4);
  if (Pulse == 1) {
    for (int i = 7; i >= 5; i--) {
      digitalWrite(i, i == 7 ? LOW : HIGH);
      delay(i == 7 ? 10 : i == 6 ? 3000 : 5000);
      digitalWrite(i, LOW);
    }
  } else {
    for (int i = 5; i <= 7; i++) {
      digitalWrite(i, i == 7 ? HIGH : LOW);
    }
  }
}
