//Create a program that when the LDR is is receiving HIGH, the 7-segment display will loop from 0-9 with its time increment every number is determined by a potentiometer. If the LDR 
// receives LOW, it will continue counting then the 7-segment display will display 0 and that is all.

int pinLDR= 2;
int ldrStatus= 0;
potentio= A0;
potVal= 0;
mapVal= 0;

void setup(){
  pinMode(pinLDR, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  potVal= analogRead(potentio);
  mapVal= map(potVal, 0, 1023, 0, 1000);
  (250);

  ldrStatus= digitalRead(pinLDR);

  if (ldrStatus == 1){
    Serial.println("LDR STATUS: ");
    Serial.println(ldrStatus);
    Serial.println("POTENTIOMETER VALUE: ");
    Serial.println(mapVal);
  
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    Serial.println("0");
    delay(mapVal);

    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    Serial.println("1");
    delay(mapVal);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    Serial.println("2");
    delay(mapVal);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    Serial.println("3");
    delay(mapVal);

    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    Serial.println("4");
    delay(mapVal);

    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    Serial.println("5");
    delay(mapVal);

    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    Serial.println("6");
    delay(mapVal);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    Serial.println("7");
    delay(mapVal);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    Serial.println("8");
    delay(mapVal);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    Serial.println("9");
    delay(mapVal);
  }

  else{
    Serial.println("LDR STATUS: ");
    Serial.println(ldrStatus);
    Serial.println("POTENTIOMETER VALUE: ");
    Serial.println(mapVal);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    Serial.println("0");
    delay(mapVal);    
  }
}