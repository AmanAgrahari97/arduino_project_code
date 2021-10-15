#include <Servo.h>
Servo myservo;
int pos;
int trigpin=12;
int echopin=11;
float traveltime;
float distanceCm;
void setup() {
  myservo.attach(9);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}
void loop() {
  ultrasonic();
  myservo.write(0);
  if(distanceCm<=50.0){
 for (pos = 0; pos <= 90; pos+=10) { 
    myservo.write(pos);             
      delay(10);                 
  }
  }
}
void ultrasonic(){
 digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  
  traveltime=pulseIn(echopin,HIGH);
   Serial.println(traveltime);
  distanceCm=traveltime*0.034/2.0;
  Serial.println(distanceCm);
}
