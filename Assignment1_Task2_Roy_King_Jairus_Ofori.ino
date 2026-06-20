// TASK 2: Your First Blink - Using Variables
int ledPin = 13;   
int onTime = 500; 
int offTime = 500; 

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);      
  Serial.println("Blink started");
}

void loop() {
  digitalWrite(ledPin, HIGH); 
  Serial.println("LED is ON");
  delay(onTime);               
  
  digitalWrite(ledPin, LOW);  // Send 0V to turn the LED OFF
  Serial.println("LED is OFF");
  delay(offTime);              // Wait based on our variable value
}