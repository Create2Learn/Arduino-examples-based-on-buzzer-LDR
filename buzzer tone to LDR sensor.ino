int piezoPin = 8; // Piezo on Pin 8
int ldrPin = 0; // LDR on Analog Pin 0
int ldrValue = 0; // Value read from the LDR
void setup() {
Serial.begin(9600);
// nothing to do here
}
void loop() {
ldrValue = analogRead(ldrPin); // read the value from the LDR
Serial.println(ldrValue);
tone(piezoPin,5000); // play a 1000Hz tone from the piezo
delay(25); // wait a bit
noTone(piezoPin); // stop the tone
delay(ldrValue); // wait the amount of milliseconds in ldrValue
}
