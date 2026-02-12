#include <Arduino.h>
void setup() {
// write your initialization code here
    Serial.begin(38400); //PC Serial Monitor
    Serial1.begin(38400); //HC-05 AT Mode
}

void loop() {
// write your code here

    //PC --> Bluetooth
    if (Serial.available()) {
        Serial1.write(Serial.read());
    }

    //Bluetooth --> PC
    if (Serial1.available()) {
        Serial.write(Serial1.read());
    }
}