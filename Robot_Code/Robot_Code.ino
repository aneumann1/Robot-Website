/*

*/
int Led1 = 7;
int Motor =3;
void setup() {
pinMode(Led1,OUTPUT); 
  
  
}

void loop() {
  digitalWrite(Led1, HIGH);
delay(2000);
digitalWrite(Led1, LOW);
delay(2000);
 
digitalWrite(Motor, HIGH);
}
