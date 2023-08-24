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
  int ctrl = 0;
  if (Pulse == 1) {
    for (int i = 5; i >= 3; i--) {
      for (int j = 5; j >= 3; j--) {
        if (i == j) {
          digitalWrite(i, HIGH);
        } else {
          digitalWrite(j, LOW);
        }
      }
      delay(1000);
    }
    for (int i = 3; i <= 5; i++) {
      for (int j = 3; j <= 5; j++) {
        if (i == j) {
          digitalWrite(i, HIGH);
        } else {
          digitalWrite(j, LOW);
        }
      }
      delay(1000);
    }
  } else {
    for (int i = 3; i <= 5; i++) {
       digitalWrite(i, LOW);
    }
  }
}
