// Controlling BLDC motor using potentiometer

#include<Servo.h>
Servo e1;
#define pot_pin A5 
int bldc_pin = 3; 
int val=0;

void setup() {
  Serial.begin(9600);
  pinMode(pot_pin,INPUT);
  delay(1000);
  e1.attach(bldc_pin);
  e1.write(0);
  // put your setup code here, to run once:

}

void loop() {
  val = analogRead(pot_pin);
  val = map(val,0,1023,0,180);
  e1.write(val);
  Serial.print(val);
  delay(300);
  // put your main code here, to run repeatedly:

}
