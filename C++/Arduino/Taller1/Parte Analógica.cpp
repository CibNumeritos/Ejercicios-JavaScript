int R = 0, G = 0, B = 0;
void setup()
{
  for (int i = 9; i <= 11; i++) {
    pinMode(i, OUTPUT);
  }
  for (int i = A0; i <= A2; i++) {
    pinMode(i, INPUT);
  }
}

void loop()
{
  delay(5);
  R = analogRead(A0);
  G = analogRead(A1);
  B = analogRead(A2);
  analogWrite(11, R / 4);
  analogWrite(10, G / 4);
  analogWrite(9, B / 4);
}
