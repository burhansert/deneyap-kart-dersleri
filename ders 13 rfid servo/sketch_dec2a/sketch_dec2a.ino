#include <MFRC522.h>
#include <Deneyap_Servo.h>
#include <SPI.h>

#define RST_pin D4
#define SS_pin D10
#define Servo_pin D0

Servo kapi;
MFRC522 rfid(SS_pin, RST_pin);


byte ID[4] ={185,5, 123, 1371};

void setup() {
  kapi.attach (Servo_pin);
  Serial.begin(115200);
  SPI.begin();
  rfid.PCD_Init();
}

void loop() {
  if(!rfid.PICC_IsNewCardPresent())
    return;
  if(!rfid.PICC_ReadCardSerial())
    return;
  if(rfid.uid.uidByte[0]==ID[0] &&
    rfid.uid.uidByte[1]==ID[1] &&
    rfid.uid.uidByte[2]== ID[2] &&
    rfid.uid.uidByte[3]== ID[3]){
    Serial.println("Kapi sciliyor...");
    ekranayazdir();
    kapi.write(180);
    //Kapi isimli servo motorumuzu 180 dereceye getirerek kapımızı açıyoruz.
    delay(5000);

    kapi.write(0);
    Serial.println("Kapi kapaniyor...");
    delay(1000);
    }
    else{
    Serial.println("!!! Yanlis Kart !!!");
    ekranayazdir();
    }
    rfid.PICC_HaltA();
  }

  void ekranayazdir() {
  Serial.print("ID Numarası : ");
  for (int i=0; i<4; i++) {
    Serial.print(rfid.uid.uidByte[i]); 
    Serial.print(" ");
  }
  Serial.println("");
}