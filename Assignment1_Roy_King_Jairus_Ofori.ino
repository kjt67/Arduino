// TASK 1: Hello, Serial!
void setup() {
  Serial.begin(9600); 
  

  int myAge = 17;                     
  float myHeight = 6.1;                
  String myName = "Roy-King Jairus Ofori";      
  bool isStudent = true;               
  float gpa = 3.5;                     


  Serial.print("My name is: ");         
  Serial.println(myName);               
  
  Serial.print("My age is: ");
  Serial.println(myAge);
  
  Serial.print("My height is: ");
  Serial.print(myHeight);
  Serial.println(" meters");
  
  Serial.print("Am I a student? ");
  Serial.println(isStudent); 

  Serial.print("My GPA is: ");
  Serial.println(gpa);
}

void loop() {

}