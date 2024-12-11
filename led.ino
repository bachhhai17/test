int led=7;
int den=8;
int light=9;
void setup() {
  // put your setup code here, to run once:

pinMode(den,OUTPUT);
pinMode(led,OUTPUT);
pinMode(light,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(den,HIGH);
digitalWrite(led,HIGH);
digitalWrite(light,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(500);
digitalWrite(den,LOW);
delay(500);
digitalWrite(light,LOW);
delay(500);
}
