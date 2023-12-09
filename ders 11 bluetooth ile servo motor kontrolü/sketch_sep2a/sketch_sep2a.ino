#include "deneyap.h"
#include "BluetoothSerial.h"
#include <Deneyap_Servo.h>

char  gelen;

BluetoothSerial SerialBT;

Servo servo_D0;  //servo kütüphanesinde servo_do isimli bir nesne oluşturduk

void setup() {
  SerialBT.begin("DeneyapKart");

  servo_D0.attach(D0,0);   //Servo motoruna bağlı olduğu veri pin değerini atadık


}

void loop() {
    if (SerialBT.available()) {
      gelen = SerialBT.read();
      if (gelen == 'a') {
        servo_D0.write(0);
        delay(100);
      }
      if (gelen == 's') {
        servo_D0.write(90);
        delay(100);
      }
      if (gelen == 'd') {
        servo_D0.write(180);
        delay(100);
      }
    }

}