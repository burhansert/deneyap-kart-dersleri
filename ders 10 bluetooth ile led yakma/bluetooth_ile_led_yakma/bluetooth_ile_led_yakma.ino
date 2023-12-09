#include "deneyap.h"
#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
char veri;
int led = D0;
void setup(){
  Serial.begin(115200);
  SerialBT.begin("DeneyapKart50");//Bluetooth yayin ismidir.
  Serial.println("\nCihaz yayin yapmaya basladi, eslesme yapilabilir!");
  pinMode(led,OUTPUT);
  }
  void loop(){
    if(SerialBT.available())
    {
      veri = SerialBT.read();
      Serial.print(veri);
      if(veri == '1'){
        digitalWrite(led, HIGH);
        Serial.println("led yandi");
        SerialBT.write('1');
      }
      if(veri == '0'){
        digitalWrite(led, LOW);
        Serial.println("led sondu");
        SerialBT.write('0');
      }
      delay(20);
    }
  }