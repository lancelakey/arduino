const int someInput = 2;

void setup()
{
 Serial.begin(9600);

}

void loop()
{
  Serial.print(digitalRead(someInput)); 
  Serial.println();
}


