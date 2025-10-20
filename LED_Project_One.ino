// Define LED pins in an array
const int leds[] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4};
const int numLeds = sizeof(leds) / sizeof(leds[0]);

void setup() {
  // Set all LED pins as output using a loop
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Light up LEDs 1 to 10
  digitalWrite(leds[0], HIGH); // LED 1
  delay(500);
  digitalWrite(leds[0], LOW);

  for (int i = 1; i < 9; i++) { // LEDs 2 to 9
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }

  digitalWrite(leds[9], HIGH); // LED 10
  delay(500);
  digitalWrite(leds[9], LOW);

  // Reverse pattern
  int reverseOrder[] = {8, 6, 4, 2, 1, 3, 5, 7, 9}; // Indexes of leds[]
  for (int i = 0; i < sizeof(reverseOrder) / sizeof(reverseOrder[0]); i++) {
    digitalWrite(leds[reverseOrder[i]], HIGH);
    delay(100);
    digitalWrite(leds[reverseOrder[i]], LOW);
  }
}
