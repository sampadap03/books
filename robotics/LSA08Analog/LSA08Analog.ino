const byte analogPin = 0;   
const byte junctionPulse = 4;   
int readVal,positionVal;    
unsigned int junctionCount = 0;   

void setup() {
  pinMode(junctionPulse,INPUT);

  Serial.begin(9600);

}

void loop() {
  if(digitalRead(junctionPulse)) {
    while(digitalRead(junctionPulse)) {
    moveForward();
    }
    junctionCount++;
  } 

  readVal = analogRead(analogPin);    // Read value from analog pin

  
  positionVal = ((float)readVal/921)*70;

    if(positionVal <= 18)
  moveLeft();  
  
  else if(positionVal <= 52)
  moveForward();

  
  else if(positionVal <= 70)
  moveRight();

  
  else
  wait();

  
}

void moveLeft() {
Serial.println("left");
}

void moveRight() {
Serial.println("right");

}

void moveForward() {
  
  Serial.println("forward");
  }

void wait() {
 Serial.println("wait");
  
}

