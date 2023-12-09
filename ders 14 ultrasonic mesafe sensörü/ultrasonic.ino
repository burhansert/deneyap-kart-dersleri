#include <HCSR04.h>
#define trigPin D12
#define echoPin D13
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
 delay(2000);

}
