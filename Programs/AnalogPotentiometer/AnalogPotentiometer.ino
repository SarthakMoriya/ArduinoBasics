#define POT_PIN A2
#define LED_PIN 11


void setup() {
  //TO change brightness of led using potentiometer
  Serial.begin(9600);
  digitalWrite(LED_PIN,0);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A2));
  digitalWrite(LED_PIN,analogRead(POT_PIN));    
}
