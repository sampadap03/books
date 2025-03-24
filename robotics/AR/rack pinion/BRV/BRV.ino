#define BRV_S 10
#define BRV_D1 5
#define BRV_D2 6

#define BRH_S 11
#define BRH_D1 7
#define BRH_D2 8

int c=0;
void setup() {
  Serial.begin(9600);
  pinMode(BRV_S,OUTPUT);
  pinMode(BRV_D1,OUTPUT);
  pinMode(BRV_D2,OUTPUT);
  pinMode(BRH_S,OUTPUT);
  pinMode(BRH_D1,OUTPUT);
  pinMode(BRH_D2,OUTPUT);

}

void loop() {

    V_UP();
    delay(500); 
    H_FORWARD();
    delay(800);
    V_DOWN();
    delay(600);
    H_BACKWARD();
    delay(800);

}

void V_UP()
{
  analogWrite(BRV_S,150);
  digitalWrite(BRV_D1,0);
  digitalWrite(BRV_D2,1);
}

void V_DOWN()
{
  analogWrite(BRV_S,170);
  digitalWrite(BRV_D1,1);
  digitalWrite(BRV_D2,0);
}
void H_FORWARD()
{
  analogWrite(BRH_S,160);
  digitalWrite(BRH_D1,1);
  digitalWrite(BRH_D2,0);  
}
void H_BACKWARD()
{
  analogWrite(BRH_S,150);
  digitalWrite(BRH_D1,0);
  digitalWrite(BRH_D2,1);  
}

