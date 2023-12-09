#define potPin A0
#define led D0
int pot_deger=0;
int pwm=0;


void setup() {
  pinMode(potPin,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  pot_deger=analogRead(potPin);
  pwm=map(pot_deger,0,4095,0,255);
  analogWrite(led,pwm);
  delay(10);

}
