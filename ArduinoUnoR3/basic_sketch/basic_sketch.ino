void setup() {
  Serial.begin(9600); // Set the baud rate to match your serial monitor
  pinMode(LED_BUILTIN, OUTPUT); // Set the LED pin as an output
}

void loop() {
 
  if (Serial.available() > 0) {
    String receivedString = Serial.readStringUntil('\n'); // Read the entire string until newline character

    // Print the received string back to the serial port
    Serial.println(receivedString);

    // Check if the received string is "LED_TOGGLE"
    if (receivedString == "LED_TOGGLE") {
      toggleLED();
    }
  }
}

void toggleLED() {
char message[20];
  // Toggle the state of the LED
    digitalWrite(LED_BUILTIN,  !digitalRead(LED_BUILTIN));
  // Using sprintf for string interpolation
  sprintf(message, "{\"LED\": {\"value\": %d}}", digitalRead(LED_BUILTIN));
  // Print the updated LED state to the serial port
  Serial.println(message);
}
