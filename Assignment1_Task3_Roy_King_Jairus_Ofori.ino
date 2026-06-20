
int ledPin = 13; 

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);      
}


void blinkOnce(int waitTime) {
  digitalWrite(ledPin, HIGH); 
  delay(waitTime);       
  digitalWrite(ledPin, LOW);  
  delay(waitTime);         
}

void loop() {
  Serial.println("Fast blink");
  blinkOnce(100);

  Serial.println("Medium blink");
  blinkOnce(300);

  Serial.println("Slow blink");
  blinkOnce(800);

  delay(2000);
}