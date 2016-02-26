int led = 13;
char state[2];

// the setup routine runs once when you press reset:
void setup() {
	Serial.begin(9600);
	pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
	if (Serial.available()) {
		Serial.readBytes(state, 1);
		
		if (state[0] == '1'){
			digitalWrite(led, HIGH);
                        delay(20000); 
			Serial.println(state[0]);
		}
		if (state[0] == '0'){
			digitalWrite(led, LOW);
                        delay(20000); 
			Serial.println(state[0]);
		}
		else {
			Serial.println(state[0]);
		}
	}
}
