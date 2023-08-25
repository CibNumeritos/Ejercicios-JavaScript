int Pulse = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  Pulse = analogRead(A0);
  Serial.println(Pulse);
  analogWrite(5, Pulse / 4);
}
