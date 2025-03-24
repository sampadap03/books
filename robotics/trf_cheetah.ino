#define m1 13
#define m2 1
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 11
void setup() {
  //delay(4000);
  // put your setup code here, to run once:
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  //=========================
}
void loop() {


  backward();

  delay(2000);
  //right();

  //delay(200);
   forward();
  //delay(200);
}
void forward()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(m1, 110);
  analogWrite(m2, 90);
  delay(400);
  analogWrite(m1, 0);
  analogWrite(m2, 0);
  delay(500);

}
void backward()//both lift up
{ digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(m1, 70);
  analogWrite(m2, 65);
  delay(500);
  //analogWrite(m1, 100);
  analogWrite(m1, 0);
  analogWrite(m2, 0);
  delay(500);

}
void right()
{
  digitalWrite(IN1, HIGH);//M2
  digitalWrite(IN2, LOW);//M2
  digitalWrite(IN3, HIGH);//M1
  digitalWrite(IN4, LOW);//M1

  analogWrite(m1,0);
  
  analogWrite(m2, 55);
  delay(500);
  digitalWrite(IN3, LOW);//M1
  digitalWrite(IN4, HIGH);//M1

  digitalWrite(IN1, LOW);//M1
  digitalWrite(IN2, HIGH);//M1
  analogWrite(m2,30);
  analogWrite(m1, 80);
  delay(400);
  analogWrite(m1,0);
  delay(100);
  analogWrite(m2,0);
  
}


