int motorPin = 9;  // Broche à laquelle le moteur est connecté

void setup() {
  pinMode(motorPin, OUTPUT);  // Configure la broche comme sortie
}

void loop() {
  digitalWrite(motorPin, HIGH);  // Allume le moteur
  delay(1000);                   // Attend 1 seconde
  digitalWrite(motorPin, LOW);   // Éteint le moteur
  delay(1000);                   // Attend 1 seconde
}
