
#include <Servo.h>
int h=135;
int k=90;
Servo hinge;  
Servo knee;
int i = 0;   
void setup() {
  hinge.attach(9);  // attaches the servo on pin 9 to the servo object
  hinge.write(h); 
  knee.attach(10);
  knee.write(k);
}

void loop() {
for (i = k; i <=k+60  ; i ++) { 
    knee.write(i);             
    delay(15);                      
  }
  for (i = h+60; i >= h; i --) { 
    hinge.write(i);              
    delay(20);                       
  }
  
  for (i = k+60; i >= k; i --) { 
    knee.write(i);              
    delay(15);                       
  }
  for (i = h; i <=h+60; i ++) { 
    hinge.write(i);             
    delay(20);                      
  }
  
}

