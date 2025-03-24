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
}

void loop() {

  digitalWrite(extend, HIGH);
  digitalWrite(retract, LOW);
  Serial.println("HIGH done");
  delayMicroseconds(10);
  digitalWrite(extend, LOW);

  digitalWrite(retract, HIGH);
  //Serial.println("low");
}


