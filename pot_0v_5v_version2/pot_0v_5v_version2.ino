const int LED = 3;
const int Pot = A0;
int PotValue = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  PotValue = analogRead(Pot);
  Serial.print("INPUT: "); 
  Serial.print(PotValue);
  
  PotValue = map(PotValue, 0, 1023, 0, 255);
  
  Serial.print("\tOUTPUT: ");
  Serial.print(PotValue);
  Serial.println();
  delay(100);
  
  analogWrite(LED, PotValue);
}
