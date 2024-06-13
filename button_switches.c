/*
    Project name : Buttons Switches
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-buttons-switches
*/

// Define the pin connected to the push button
const int buttonPin = 2;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Set button pin as input
  pinMode(buttonPin, INPUT_PULLUP);  // Use INPUT_PULLUP to enable internal pull-up resistor
}

void loop() {
  // Read the state of the push button
  int buttonState = digitalRead(buttonPin);
  
  // Check if the button is pressed (buttonState is LOW)
  if (buttonState == LOW) {
    Serial.println("Button pressed!");
    // Additional actions can be added here
  }
  
  // Add a small delay to debounce the button
  delay(100);
}
