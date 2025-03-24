#include<SoftwareSerial.h>
SoftwareSerial xyz(5,6);
void setup() {
xyz.begin(38400);
Serial.begin(38400);
pinMode(3, 1);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3, 1);
if(xyz.available()>0)
{  Serial.write(xyz.read());}
if(Serial.available()>0)
{  xyz.write(Serial.read());}

}
