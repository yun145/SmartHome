# Discode [ HING ] 
 <h5>제 스마트홈은 지금보다 편리한 삶을 지낼 수 있기위해 제작되었습니다.╰(*°▽°*)╯</h5>
 <h5>조도센서를 사용하여 스마트한 무드등과 블라인드가 설치되어 있습니다. 😊</h5>
 <h5>근접 감지 센서(PIR)를 사용하여 스마트한 초인등이 설치되어있습니다.🤗</h5>
 
 <hr>
 
 
 
 * 조도센서를 사용한 제작물
   * 무드등
   ```python
    void setup() {
      pinMode(3,OUTPUT); // LED 번호
    }

    void loop() {
      int cdsValue = analogRead(A0); //조도센서의 값

      if(cdsValue > 400){     //어두울 때
        digitalWrite(3,HIGH); //LED를 킨다.
        }
      else{                   //밝을 때
        digitalWrite(3,LOW);  //LED를 끈다.
      }

      delay(100);
      }
     ```
   * 블라인드
    ```python 
    #includ <Servo.h> 
    Servo mys; 
    int pos = 0; //모터의 각도
    void setup() {
      mys.attach(9); //모터 번호
    }

    void loop() {
      int cdsValue = analogRead(A0); //조도센서의 값

      if(cdsValue > 400){ //밖이 어두울 때
        mys.write(0);     //블라인드를 내린다.
      }
      else{               //밖이 밝을 때
        mys.write(90)     //블라인드를 올린다
      }

      delay(100);
    }
    ```
 * 채팅 청소 
   * ~지워 (지울메세지수)
    ```python
    void setup() {
      pinMode(13,OUTPUT); //LED 번호
      pinMode(3,INPUT); //근접 감지 센서(PIR) 번호
    }

    void loop() {
      int sensorValue - digitalRead(3); //PIR의 값

      if (sensorValue){         //문 앞에 사람이 있을 때
        digitalWrite(13, HIGH); //LED를 킨다.
      }
      else{                     //문 앞에 사람이 없을 때
        digitalWrite(13,LOW);   //LED를 끈다
      }

      delay(100);
    }
    ```


<hr>

