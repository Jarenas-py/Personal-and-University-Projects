void setup(){
  pinMode(2, OUTPUT); //a
  pinMode(3, OUTPUT); //b
  pinMode(4, OUTPUT); //c
  pinMode(5, OUTPUT); //d
  pinMode(6, OUTPUT); //e
  pinMode(7, OUTPUT); //f
  pinMode(8, OUTPUT); //g
  pinMode(9, INPUT); //LDR
  Serial.begin(9600); 
}

void loop(){
  int LDRVAL= digitalRead(9);

  if (LDRVAL == 1){
    Serial.println("LDR STATUS: ");
    Serial.print(LDRVAL);

    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    Serial.println("0");
    delay(1000);

    digitalWrite(2, LOW); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    Serial.println("1");
    delay(1000);

    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    Serial.println("2");
    delay(1000);

    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    Serial.println("3");
    delay(1000);

    digitalWrite(2, LOW); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    Serial.println("4");
    delay(1000);

    digitalWrite(2, HIGH); 
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    Serial.println("5");
    delay(1000);

    digitalWrite(2, HIGH); 
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    Serial.println("6");
    delay(1000);

    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    Serial.println("7");
    delay(1000);

    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    Serial.println("8");
    delay(1000);

    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    Serial.println("9");
    delay(1000);
    int LDRVAL= digitalRead(9);
  } 
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  Serial.println("0");
  delay(1000);
}