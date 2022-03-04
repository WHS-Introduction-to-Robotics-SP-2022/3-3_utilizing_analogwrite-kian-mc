/*

*/

void setup() {
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
}

void loop() {
  //red led
  analogWrite(11,255);
  delay(1000);
  analogWrite(11,102);
  delay(1000);
  analogWrite(11,0);
  delay(1000);
  //green led
  analogWrite(10,255);
  delay(1000);
  analogWrite(10,102);
  delay(1000);
  analogWrite(10,0);
  delay(1000);
  //blue led
  analogWrite(9,255);
  delay(1000);
  analogWrite(9,102);
  delay(1000);
  analogWrite(9,0);
  delay(1000);
}
