int i=0; 
int k=45;
int h=150;
#include <Servo.h>

Servo hinge;
Servo knee;

void setup() {
  Serial.begin(9600);
  hinge.attach(9);
  knee.attach(10);
  hinge.write(h);
  knee.write(k);

}

void loop() {
   for (i=h;i>=h-35;i--) {
    hinge.write(i);  Serial.println(i); 
    //delay(5);
   }
   for (i=h;i>=h-35;i--) {
    hinge.write(i);  Serial.println(i); 
    //delay(5);
   }
   
//  for (i=k;i<=k+120;i++) {
//    knee.write(i); Serial.println(i);  
//   }
   // delay(100);
//   for (i=h;i<=h+40;i++) {
//    hinge.write(i); Serial.println(i);  
//    delay(15);
//   }
//    for (i=k+80;i>=k;i--) {
//    knee.write(i);  Serial.println(i); 
//   }
  
  
}

