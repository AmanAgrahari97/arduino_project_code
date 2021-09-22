int p0=2,p1=3,p2=4,p3=5,p4=6,p5=7,p6=8,p7=9,p8=10,p9=11;
int dt=2000;
int last=2000;
void setup() {
  // put your setup code here, to run once:
pinMode(p0,OUTPUT);
pinMode(p2,OUTPUT);
pinMode(p8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(p2,HIGH);
delay(dt);
digitalWrite(p2,LOW);
delay(dt);

digitalWrite(p0,HIGH);
delay(dt);
digitalWrite(p0,LOW);
delay(dt);

digitalWrite(p0,HIGH);
delay(dt);
digitalWrite(p0,LOW);
delay(dt);

digitalWrite(p2,HIGH);
delay(dt);
digitalWrite(p2,LOW);
delay(dt);

digitalWrite(p0,HIGH);
delay(dt);
digitalWrite(p0,LOW);
delay(dt);

digitalWrite(p8,HIGH);
delay(dt);
digitalWrite(p8,LOW);
delay(dt);

digitalWrite(p0,HIGH);
delay(dt);
digitalWrite(p0,LOW);
delay(dt);

delay(last);
}
