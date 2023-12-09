#include "deneyap.h"

#define Led D12
#define button D1
#define Buzzer D0


void setup() 
{
pinMode(button,INPUT);
pinMode(Led,OUTPUT);
pinMode(Buzzer,OUTPUT);
}

void loop() {

if (digitalRead(button)==1)
{
  digitalWrite(Led,HIGH);
  digitalWrite(Buzzer,HIGH);

}
else {
  digitalWrite(Led,LOW);
  digitalWrite(Buzzer,LOW);
}

}
