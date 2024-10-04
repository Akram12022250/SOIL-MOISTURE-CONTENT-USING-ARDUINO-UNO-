
// Constants
const int sensorPin = A0;  // Analog pin for moisture sensor
const int relayPin = 7;    // Digital pin for relay
int threshold = 300;       // Moisture threshold (adjustable)

// Variables
int sensorValue = 0;  // Stores sensor value

void setup() {
  pinMode(relayPin, OUTPUT);  // Set relay pin as output
  digitalWrite(relayPin, HIGH); // Relay off by default
  Serial.begin(9600);  // Start serial communication for debugging
}

void loop() {
  sensorValue = analogRead(sensorPin);  // Read sensor value
  Serial.println(sensorValue);  // Print sensor value to serial monitor

  if (sensorValue < threshold) {
    digitalWrite(relayPin, LOW);  // Turn on water pump (relay on)
    Serial.println("Soil is dry. Pump ON.");
  } else {
    digitalWrite(relayPin, HIGH); // Turn off water pump (relay off)
    Serial.println("Soil is moist. Pump OFF.");
  }

  delay(1000);  // Wait for 1 second before reading again
}
