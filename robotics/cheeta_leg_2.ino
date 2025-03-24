/////FOR LEG 1
#define m1 9
#define m2 10
#define FIN1 5
#define FIN2 6
#define FIN3 7
#define FIN4 8

/////FOR LEG 2
#define m3 13
#define m4 1
#define BIN1 2// MOTOR 3
#define BIN2 3//MOTOR 3
#define BIN3 4// MOTOR 4
#define BIN4 11//MOTOR 4

void setup() {
  //delay(4000);
  // put your setup code here, to run once:
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(FIN1, OUTPUT);
  pinMode(FIN2, OUTPUT);
  pinMode(FIN3, OUTPUT);
  pinMode(FIN4, OUTPUT);

   pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(BIN3, OUTPUT);
  pinMode(BIN4, OUTPUT);
  //=========================
}
//void loop() {


  //////////////////////////////////////backward1();

  //delay(2000);
 /////////////////////////////////////////////////////// right1();

  //delay(200);
   ///////////////////////////////////////////////////forward1();
  //delay(200);
//}
//void forward1()
//{
//  digitalWrite(FIN1, LOW);
//  digitalWrite(FIN2, HIGH);
//  digitalWrite(FIN3, HIGH);
//  digitalWrite(FIN4, LOW);
//
//  analogWrite(m1, 70);
//  analogWrite(m2, 65);
//  delay(400);
//  analogWrite(m1, 0);
//  analogWrite(m2, 0);
//  delay(500);
//
//}
//void backward1()//both lift up
//{ digitalWrite(IN1, HIGH);
//  digitalWrite(IN2, LOW);
//  digitalWrite(IN3, LOW);
//  digitalWrite(IN4, HIGH);
//
//  analogWrite(m1, 70);
//  analogWrite(m2, 65);
//  delay(500);
//  //analogWrite(m1, 100);
//  analogWrite(m1, 0);
//  analogWrite(m2, 0);
//  delay(500);
//
//}
//void right1()
//{
//  digitalWrite(IN1, HIGH);//M2
//  digitalWrite(IN2, LOW);//M2
//  digitalWrite(IN3, HIGH);//M1
//  digitalWrite(IN4, LOW);//M1
//
//  analogWrite(m1,0);
//  
//  analogWrite(m2, 55);
//  delay(500);
//  digitalWrite(IN3, LOW);//M1
//  digitalWrite(IN4, HIGH);//M1
//
//  digitalWrite(IN1, LOW);//M1
//  digitalWrite(IN2, HIGH);//M1
//  analogWrite(m2,30);
//  analogWrite(m1, 80);
//  delay(400);
//  analogWrite(m1,0);
//  delay(100);
//  analogWrite(m2,0);
//  
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////// FOR THE LEG 1////////////////////////////////////////////////////////


//void forward1()
//{
//  digitalWrite(FIN1, LOW);
//  digitalWrite(FIN2, HIGH);
//  digitalWrite(FIN3, HIGH);
//  digitalWrite(FIN4, LOW);
//
//  analogWrite(m1, 70);
//  analogWrite(m2, 65);
//  delay(400);
//  analogWrite(m1, 0);
//  analogWrite(m2, 0);
//  delay(500);
//
//}
//
//void backward1()//both lift up
//{ digitalWrite(IN1, HIGH);
//  digitalWrite(IN2, LOW);
//  digitalWrite(IN3, LOW);
//  digitalWrite(IN4, HIGH);
//
//  analogWrite(m1, 70);
//  analogWrite(m2, 65);
//  delay(500);
//  //analogWrite(m1, 100);
//  analogWrite(m1, 0);
//  analogWrite(m2, 0);
//  delay(500);
//
//}
//void right1()
//{
//  digitalWrite(IN1, HIGH);//M2
//  digitalWrite(IN2, LOW);//M2
//  digitalWrite(IN3, HIGH);//M1
//  digitalWrite(IN4, LOW);//M1
//
//  analogWrite(m1,0);
//  
//  analogWrite(m2, 55);
//  delay(500);
//  digitalWrite(IN3, LOW);//M1
//  digitalWrite(IN4, HIGH);//M1
//
//  digitalWrite(IN1, LOW);//M1
//  digitalWrite(IN2, HIGH);//M1
//  analogWrite(m2,30);
//  analogWrite(m1, 80);
//  delay(400);
//  analogWrite(m1,0);
//  delay(100);
//  analogWrite(m2,0);
//  
//}
//

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////FOR THE LEG 2//////////////////////////////////////////////////////////////////////
void loop()
{
  backward2();
  delay(1500);
  
}

void forward2()
{
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  digitalWrite(BIN3, HIGH);
  digitalWrite(BIN4, LOW);

  analogWrite(m3, 70);
  analogWrite(m4, 65);
  delay(400);
  analogWrite(m3, 0);
  analogWrite(m4, 0);
  delay(500);

}

void backward2()//both lift up
{ digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  digitalWrite(BIN3, LOW);
  digitalWrite(BIN4, HIGH);

  analogWrite(m3, 70);
  analogWrite(m4, 65);
  delay(500);
  //analogWrite(m1, 100);
  analogWrite(m3, 0);
  analogWrite(m4, 0);
  delay(500);

}

void right2()
{
  digitalWrite(BIN1, HIGH);//M2
  digitalWrite(BIN2, LOW);//M2
  digitalWrite(BIN3, HIGH);//M1
  digitalWrite(BIN4, LOW);//M1

  analogWrite(m3,0);
  
  analogWrite(m4, 55);
  delay(500);
  digitalWrite(BIN3, LOW);//M1
  digitalWrite(BIN4, HIGH);//M1

  digitalWrite(BIN1, LOW);//M1
  digitalWrite(BIN2, HIGH);//M1
  analogWrite(m3,30);
  analogWrite(m4, 80);
  delay(400);
  analogWrite(m3,0);
  delay(100);
  analogWrite(m4,0);
  
}

