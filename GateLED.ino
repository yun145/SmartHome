void setup() {
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
}

void loop() {
  int sensorValue - digitalRead(3);

  if (sensorValue){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }

  delay(100);
}
