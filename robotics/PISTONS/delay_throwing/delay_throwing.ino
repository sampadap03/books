#define extend 7
#define retract 8
#define  wait 1000
 
void setup() {
  // put your setup code here, to run once:
  pinMode(extend, OUTPUT);
  pinMode(retract, OUTPUT);
  Serial.begin(9600);
  digitalWrite(extend, LOW);
  digitalWrite(retract, LOW);
 //delay(5);
 //High done
  digitalWrite(extend, HIGH);
  digitalWrite(retract, LOW);
  //delayMicroseconds(10);
  //wiated for 10 usec
  delay(240);
  //digitalWrite(extend, LOW);  
  digitalWrite(retract, HIGH);  
  //low
}

void loop()
{
  
}

