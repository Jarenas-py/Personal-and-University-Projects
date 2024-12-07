void setup(){
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int LDRVal = digitalRead(2);
  if (LDRVal == 0) {
    Serial.print("LDR STATUS: ");
    Serial.println(LDRVal);
    digitalWrite(3, HIGH);
  } else{
    Serial.print("LDR STATUS: ");
    Serial.println(LDRVal);
    digitalWrite(3, LOW);
  }
  delay(100);
}