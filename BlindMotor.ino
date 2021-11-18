#includ <Servo.h>
Servo mys;
int pos = 0;
void setup() {
  mys.attach(9);
}

void loop() {
  int cdsValue = analogRead(A0);

  if(cdsValue > 400){
    mys.write(0);
  }
  else{
    mys.write(90)
  }

  delay(100);
}
