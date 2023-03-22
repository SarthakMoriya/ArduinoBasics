void setup() {
  //Now to communicate with the arduino board we need to make a connection or more basically to debug we need it . for that we use Serial.begin(9600) to establish and then println to print messages 9600 me 9600 bits per second which is default ie always works
  Serial.begin(9600);
}

void loop() {
  Serial.println("Setting Pin-13 to High");
  digitalWrite(13, HIGH);
  //Serial.println("inside loop");
  delay(1000);
  Serial.println("Settinh pin-13 to LOW");
  digitalWrite(13, LOW);
  delay(1000);
}
