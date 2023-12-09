const int Enable_A = D13;
const int inputA1 = D14;
const int inputA2 = D15;


void setup()
{
pinMode(Enable_A, OUTPUT);
pinMode(inputA1, OUTPUT);
pinMode(inputA2, OUTPUT);

}
void loop()
{
digitalWrite(Enable_A, HIGH);
digitalWrite(inputA1, HIGH);
digitalWrite(inputA2, LOW);
delay(1000);


digitalWrite(Enable_A, LOW);
delay(500);

digitalWrite(Enable_A, HIGH);
digitalWrite(inputA1, LOW);
digitalWrite(inputA2, HIGH);
delay(1000);
}