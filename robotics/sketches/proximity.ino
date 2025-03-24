void setup() {
 
  Serial.begin(9600);
   pinMode(8, INPUT);
}

void loop() {
  //Serial.println("ll");
  int i = digitalRead(8);
  Serial.println(i);

}
