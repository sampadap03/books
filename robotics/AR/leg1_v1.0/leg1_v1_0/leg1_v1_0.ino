/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo hinge;  // create servo object to control a servo
Servo knee;
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  hinge.attach(9);  // attaches the servo on pin 9 to the servo object
  knee.attach(10);

}

void loop() {
  for (pos = 0; pos <= 100; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    knee.write(pos);   
    Serial.println(pos);// tell servo to go to position in variable 'pos'
                      // waits 15ms for the servo to reach the position
  }
     delay(15);  
  Serial.println("____________");
  for (pos = 0; pos <= 100; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    hinge.write(pos);              // tell servo to go to position in variable 'pos'
    Serial.println(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    Serial.println("____________");
   for (pos = 0; pos >= 100; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    knee.write(pos);   
    Serial.println(pos);// tell servo to go to position in variable 'pos'
                      // waits 15ms for the servo to reach the position
  }
  Serial.println("____________");
  for (pos = 0; pos >= 100; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    hinge.write(pos);              // tell servo to go to position in variable 'pos'
    Serial.println(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

