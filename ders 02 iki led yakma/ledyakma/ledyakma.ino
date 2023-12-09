#include "deneyap.h"

void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
}

void loop() {
  digitalWrite(D0, HIGH);
  delay(100);
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  delay(100);
  digitalWrite(D1, LOW);
  digitalWrite(D4, HIGH);
  delay(100);
  digitalWrite(D4, LOW);
  digitalWrite(D5, HIGH);
  delay(100);
  digitalWrite(D5, LOW);
  digitalWrite(D4, HIGH);
  delay(100);
  digitalWrite(D4, LOW);
  digitalWrite(D1, HIGH);
  delay(100);
  digitalWrite(D1, LOW);
  

}
