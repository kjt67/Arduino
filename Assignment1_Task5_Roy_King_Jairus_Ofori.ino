// TASK 5: Combined Smart Countdown Program
// Author: Roy-King Jairus Ofori

int startValue = 5; // Start the countdown at 5 [cite: 742]
int ledPin = 13;    // Built-in LED pin on the Arduino Uno [cite: 541]

// Custom function to blink the LED a specific number of times [cite: 744]
void flashLED(int times) {
  int flashCount = 0; 
  
  while (flashCount < times) {
    digitalWrite(ledPin, HIGH); // Turn LED on [cite: 524, 535]
    delay(200);                 // Keep it on briefly [cite: 527]
    digitalWrite(ledPin, LOW);  // Turn LED off [cite: 526, 538]
    delay(200);                 // Keep it off briefly [cite: 527]
    
    flashCount = flashCount + 1; 
  }
}

void setup() {
  pinMode(ledPin, OUTPUT); // Configure pin 13 as an output [cite: 530, 742]
  Serial.begin(9600);      // Open Serial communication at 9600 baud [cite: 569, 742]
 
  Serial.println("=== Smart Countdown Starting ==="); // [cite: 743]
  Serial.println("Developer: Roy-King Jairus Ofori");
  Serial.println("--------------------------------");
 
  int count = startValue; 
  
  // Main countdown loop [cite: 744]
  while (count > 0) { 
    Serial.print("Count: "); 
    Serial.println(count);   // Prints current countdown number [cite: 744]
 
    flashLED(count);         // Triggers the LED to flash 'count' times [cite: 744]
 
    delay(1000);             // 1-second pause [cite: 527, 744]
    count = count - 1;       // Decrease countdown step [cite: 720, 744]
  }
 
  Serial.println("=== Countdown Complete ==="); // [cite: 745]
}
 
void loop() { 
  // Empty [cite: 746]
}
