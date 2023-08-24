int lightValue = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT); 
  pinMode(9, OUTPUT);
}

void loop()
{
  lightValue = analogRead(A0);
  digitalWrite(11, lightValue < 200 ? HIGH : LOW);
  digitalWrite(10, lightValue >= 200 && lightValue < 600 ? HIGH : LOW);
  digitalWrite(9, lightValue >= 600 ? HIGH : LOW);
}
