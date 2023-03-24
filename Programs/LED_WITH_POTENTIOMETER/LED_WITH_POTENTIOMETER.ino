#define POT_PIN A2
#define LED_PIN 11


void setup() {
  //TO change brightness of led using potentiometer
  Serial.begin(9600);
  pinMode(LED_PIN,OUTPUT);
  digitalWrite(LED_PIN,0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int POT_READ=analogRead(A2)/4; //to scale down valuesc almost between 0-255
  Serial.println(analogRead(A2));
  digitalWrite(LED_PIN,POT_READ);    
}
