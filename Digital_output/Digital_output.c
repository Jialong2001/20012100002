int num = 1;

void setup()
{
  Serial.begin(9600);   // open serial port, sets data rate to 9600 bps
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  while(1)
  {
    // send data only when you receive data:
    if (Serial.available() > 0)
    {
      // read the incoming byte:
      num = Serial.read()-'0';
    }
    switch(num)
   {
     case 1:
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
    
     case 2:
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(7, HIGH);
     digitalWrite(9, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
     digitalWrite(9, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
  
     case 3:
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(9, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(4, LOW);
     digitalWrite(3, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(9, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
  
     case 4: 
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(8, LOW);
     digitalWrite(9, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
  
     case 5:
     digitalWrite(3, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(3, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(8, LOW);
     digitalWrite(9, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
    
     case 6:
     digitalWrite(3, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(7, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(3, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
     digitalWrite(8, LOW);
     digitalWrite(9, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
  
     case 7:
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
   
     case 8:
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(7, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
     digitalWrite(8, LOW);
     digitalWrite(9, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
  
     case 9:
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(8, LOW);
     digitalWrite(9, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
    
     case 0:
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(7, HIGH);
     digitalWrite(8, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
     digitalWrite(8, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     break;
  
     default:
     break;
    };
   };
}
