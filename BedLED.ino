void setup() {
  pinMode(3,OUTPUT);
}

void loop() {
  int cdsValue = analogRead(A0);

  if(cdsValue > 400){
    digitalWrite(3,HIGH);
  }
  else{
    digitalWrite(3,LOW);
  }

  delay(100);
}
