#define d1 11
#define pwm 10

void setup() {
  // put your setup code here, to run once:
pinMode(d1,OUTPUT);
pinMode(pwm,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(pwm,10);
digitalWrite(d1,LOW);
//delay(100);


}
