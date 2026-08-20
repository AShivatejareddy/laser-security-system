// Laser Security System - Basic Implementation

const int LDR_PIN = A0;      // Analog pin connected to LDR
const int BUZZER_PIN = 8;    // Digital pin connected to Buzzer/LED
const int THRESHOLD = 500;   // Adjust based on light environment

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LDR_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // If the laser beam is broken, LDR value drops
  if (ldrValue < THRESHOLD) {
    digitalWrite(BUZZER_PIN, HIGH); // Trigger alarm
  } else {
    digitalWrite(BUZZER_PIN, LOW);  // Reset alarm
  }
  
  delay(100);
}
