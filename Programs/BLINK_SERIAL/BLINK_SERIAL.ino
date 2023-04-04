#define LED_PIN 8
#define BTN_PIN 2
#define POT_PIN A4

void setup() {
  Serial.begin(115200);
  // pinMode(BTN_PIN, INPUT);
  // pinMode(LED_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
  // digitalWrite(LED_PIN, HIGH);
}

void loop() {
  Serial.println(analogRead(POT_PIN));
  delay(100);
  
}
