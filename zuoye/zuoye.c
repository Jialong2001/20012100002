#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

#define LT 7
#define BL 8
#define LE 9
#define LE2 11

#define IN5 0
#define IN6 1
#define IN7 2
#define IN8 10

int tick1 = 0; 
int tick2 = 0;
int state = 0;
byte income = 0;
byte income2 = 0;
int buttonState = 0;

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);
  
  pinMode(LE, OUTPUT);
  pinMode(LT, OUTPUT);
  pinMode(BL, OUTPUT);
  pinMode(LE2, OUTPUT);
  
  digitalWrite(LT,HIGH);
  digitalWrite(BL,HIGH);
  digitalWrite(LE,HIGH);
  digitalWrite(LE2,HIGH);
  
  Serial.begin(9600); 
  
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  Serial.print(tick2);
  Serial.println(tick1++);
  if(tick1==10) 
  {
    tick1 = 0;
    tick2 ++;
    income2=tick2-'0';
    digitalWrite(LE2,LOW);
    digitalWrite(IN5,income2&0x1);
    digitalWrite(IN6,(income2>>1)&0x1);
    digitalWrite(IN7,(income2>>2)&0x1);
    digitalWrite(IN8,(income2>>3)&0x1);
    digitalWrite(LE2,HIGH);
  }
  income=tick1-'0';
  digitalWrite(LE,LOW);
  digitalWrite(IN1,income&0x1);
  digitalWrite(IN2,(income>>1)&0x1);
  digitalWrite(IN3,(income>>2)&0x1);
  digitalWrite(IN4,(income>>3)&0x1);
  digitalWrite(LE,HIGH);
  
  state=~state;
  digitalWrite(13,state);
  delay(1000);  
  
  buttonState = 0;
  buttonState = digitalRead(12);
  if(buttonState == 1)
  {
   tick1 = 0;
   tick2 = 0;
   delay(1000);
  }
}
