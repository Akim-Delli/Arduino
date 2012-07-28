// Project 14 - Light sensor

int piezoPin = 8; // Piezo on Analog Pin 8
int ldrPin = 0; // LDR on Analog Pin 0
int ldrValue = 0; // Valur read from Pin 0

void setup() {
}

void loop() {
  ldrValue = analogRead(ldrPin); // Read the value from the LDR
  tone(piezoPin, 1000); // Play a 1000Hz tone from the piezo
  delay(25); // wait a bit
  noTone(piezoPin); // stop the tone
  delay(ldrValue); // wait the amount of milliseconds in ldrValue
}
