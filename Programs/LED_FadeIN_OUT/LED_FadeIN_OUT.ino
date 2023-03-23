void setup() {
  // put your setup code here, to run once:
  //to select digital pin we use ~ digital pin on the UNO the can be used to set the voltage value between 0-255 more the voltage more the intensity
  pinMode(11, OUTPUT);
  analogWrit(11, 178);  //set the intentsity to x% of 255 which is 178  like 64 is 25% of 255 it simply mean when the current will be available  only 25% of time the value will be high and 75% it will be low
  //Assignment : Make LED fade in/out
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 255; i++) {
    analogWrite(11, i);
    delay(5);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(11, i);
    delay(5);
  }
}
