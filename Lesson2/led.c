int j=13;
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  for(j=13;j>=7;j--)
  {
  	digitalWrite(j, HIGH);
  	delay(500); // Wait for 1000 millisecond(s)
  	digitalWrite(j, LOW);
  	delay(500); // Wait for 1000 millisecond(s)
  }
}
