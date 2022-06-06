#define LED_ON A1

void setup() {
  pinMode(LED_ON, OUTPUT);
}
void loop() {
  digitalWrite(LED_ON, HIGH); 
  delay(1000);                     
  digitalWrite(LED_ON, LOW);  
  delay(1000);                     
}
