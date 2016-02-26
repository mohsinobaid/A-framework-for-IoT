#define LED_1 13  // Arduino Digital I/O pin number 13
 
int state = 0;  // Digital output, state is 0, Low, off
int inState = 0;  // Set the initial state to 0
 
void setup() {
  pinMode(LED_1, OUTPUT);  // Set LED pin as output
  delay(1000);  // Wait 1 s
  Serial.begin(9600);  // Setup the serial monitor
}
 
void loop() {
  char inVal = 0;  // Set the incoming value to 0
  if (Serial.available() > 0) {   // As long the serial connection is on
    inVal = Serial.read() - '0';  // read all input and compare it with a
    if (inVal == 1) {             // given value and set the input state  
      inState = 1;
    } else if (inVal == 0) {
      inState = 0;
    } else {
      Serial.println("Only 1 (on) and 0 (off) are supported.");
    }
    if (inState != state) {
      state = inState;  // Set the current
      digitalWrite(LED_1, state);  // Set the LED
      //delay(5000); 
      Serial.print("State is now: ");  // Prints the current state
      Serial.println(state);           // to the serial monitor
    }
  }
}
