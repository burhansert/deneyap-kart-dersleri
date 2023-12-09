#include <HCSR04.h>
#define trigPin D1
#define echoPin D4
#define buzzer D0
float mesafe=0;
UltraSonicDistanceSensor sensor(trigPin, echoPin);

void setup() {
Serial.begin(9600);
pinMode(buzzer,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);

}

void loop() {
 mesafe=sensor.measureDistanceCm();
 Serial.print("mesafe=");
 Serial.println(mesafe);
 if(mesafe<=10)
 {
  digitalWrite(buzzer,HIGH);
  delay(50);
  digitalWrite(buzzer,LOW);
  delay(50);
 }
 else if(mesafe<=20)
 {
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(100);
 }
 else if(mesafe<=30)
 {
  digitalWrite(buzzer,HIGH);
  delay(150);
  digitalWrite(buzzer,LOW);
  delay(150);
 }
  delay(200);


}
