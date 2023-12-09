#define kirmizi D12
#define yesil D13
#define mavi D14

void setup() {
pinMode(kirmizi,OUTPUT);
pinMode(yesil,OUTPUT);
pinMode(mavi,OUTPUT);
}

void loop() {
  digitalWrite(kirmizi,LOW);
  digitalWrite(yesil,HIGH);
  digitalWrite(mavi,HIGH);
  delay(1000);
  digitalWrite(kirmizi,HIGH);
  digitalWrite(yesil,LOW);
  digitalWrite(mavi,HIGH);
  delay(1000);
  digitalWrite(kirmizi,HIGH);
  digitalWrite(yesil,HIGH);
  digitalWrite(mavi,LOW);
  delay(1000);
}
