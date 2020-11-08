void setup() {
 Serial.begin(115200);
}

void loop() {
 int emgValues = analogRead(A15)/4; // read the sensor value
 Serial.write(emgValues);   // send the value serially
 delay(1);
}

