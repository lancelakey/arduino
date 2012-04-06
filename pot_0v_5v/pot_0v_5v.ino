const int Pot = A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print(analogRead(Pot));
  Serial.println();
  delay(100);
}
