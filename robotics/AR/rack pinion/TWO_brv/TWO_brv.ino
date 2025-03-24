//bACK RIGHT
#define BRV_S 10
#define BRV_D1 5
#define BRV_D2 6

#define BRH_S 11
#define BRH_D1 7
#define BRH_D2 8

#define FRV_S 12
#define FRV_D1 1
#define FRV_D2 2

#define FRH_S 13
#define FRH_D1 3
#define FRH_D2 4

#define FRV_S 10
#define FRV_D1 5
#define FRV_D2 6

#define FRH_S 11
#define FRH_D1 7
#define BRH_D2 8

#define FRV_S 12
#define FRV_D1 1
#define FRV_D2 2

#define FRH_S 13
#define FRH_D1 3
#define FRH_D2 4

int c=0;
void setup() {
  Serial.begin(9600);
  pinMode(BRV_S,OUTPUT);
  pinMode(BRV_D1,OUTPUT);
  pinMode(BRV_D2,OUTPUT);
  
  pinMode(BRH_S,OUTPUT);
  pinMode(BRH_D1,OUTPUT);
  pinMode(BRH_D2,OUTPUT);
  
   pinMode(FRV_S,OUTPUT);
  pinMode(FRV_D1,OUTPUT);
  pinMode(FRV_D2,OUTPUT);
   
   pinMode(FRH_S,OUTPUT);
  pinMode(FRH_D1,OUTPUT);
  pinMode(FRH_D2,OUTPUT);

}

void loop() {

    V1_UP();
    delay(600);
     //V1_DOWN();
   // delay(500); 
    H1_FORWARD();
    delay(800);
    //V1_DOWN();
   // delay(600);
   // H1_BACKWARD();
    //delay(800);

}

void V1_UP()
{
  analogWrite(BRV_S,150);
  digitalWrite(BRV_D1,0);
  digitalWrite(BRV_D2,1);
}

void V1_DOWN()
{
  analogWrite(BRV_S,170);
  digitalWrite(BRV_D1,1);
  digitalWrite(BRV_D2,0);
}
void H1_FORWARD()
{
  analogWrite(BRH_S,100);
  digitalWrite(BRH_D1,1);
  digitalWrite(BRH_D2,0);  
}
void H1_BACKWARD()
{
  analogWrite(BRH_S,100);
  digitalWrite(BRH_D1,0);
  digitalWrite(BRH_D2,1);  
}


void V2_UP()
{
  analogWrite(FRV_S,150);
  digitalWrite(FRV_D1,0);
  digitalWrite(FRV_D2,1);
}

void V2_DOWN()
{
  analogWrite(FRV_S,170);
  digitalWrite(FRV_D1,1);
  digitalWrite(FRV_D2,0);
}
void H2_FORWARD()
{
  analogWrite(FRH_S,100);
  digitalWrite(FRH_D1,1);
  digitalWrite(FRH_D2,0);  
}
void H2_BACKWARD()
{
  analogWrite(FRH_S,100);
  digitalWrite(FRH_D1,0);
  digitalWrite(FRH_D2,1);  
}
