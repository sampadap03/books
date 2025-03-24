#define extend 53
#define retract 52 
#define const wait 4
char c; 
void setup() {
  // put your setup code here, to run once:
  pinMode(extend, OUTPUT);
  pinMode(retract, OUTPUT);
  digitalWrite(extend, LOW);
  digitalWrite(retract, LOW);
}

void loop() {
  Serial.println("Type the denominator of factor; as (1/n):")l;
  c = Serial.read();
  Serial.println(c.toInt());
  moveto(c.toInt());
}

void moveto(int factor)
{
  digitalWrite(extend, HIGH);
  delay(wait*factor);
  digitalWrite(retract, HIGH);
  delay(wait);  
}
