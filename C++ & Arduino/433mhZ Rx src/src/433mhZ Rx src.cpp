#include <Arduino.h>
#include <VirtualWire.h> 

 

const int rxPin = 11;     // Receiver pin 

const int ledPin = 9;     // LED pin 

 

void setup() { 

    Serial.begin(9600); 

    vw_set_rx_pin(rxPin); // Set the receiver pin 

    vw_setup(2000);       // Bits per second 

    vw_rx_start();        // Start the receiver 

 

    pinMode(ledPin, OUTPUT); // Set LED as output 

} 

 

void loop() { 

    uint8_t buf[10];  

    uint8_t buflen = sizeof(buf); 

 

    if (vw_get_message(buf, &buflen)) { // Check if a message is received 

        if (buf[0] == '1') { // If message is "1" 

            digitalWrite(ledPin, HIGH); // Turn on LED 

            delay(1000);                 // Keep it on for 1 second 

            digitalWrite(ledPin, LOW);  // Turn off LED 

        } 

    } 

} 