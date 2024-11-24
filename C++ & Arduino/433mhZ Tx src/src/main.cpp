#include <Arduino.h>
#include <VirtualWire.h>
 

const int buttonPin = 2; // Push button pin 

const int txPin = 12;    // Transmitter pin 

 

void setup() { 

    vw_set_tx_pin(txPin); // Set the transmitter pin 

    vw_setup(2000);       // Bits per second 

    pinMode(buttonPin, INPUT_PULLUP); // Set button as input with pull-up resistor 

} 

 

void loop() { 

    if (digitalRead(buttonPin) == LOW) { // Button is pressed 

        const char *msg = "1"; // Message to send 

        vw_send((uint8_t *)msg, strlen(msg)); // Send message 

        vw_wait_tx(); // Wait until message is sent 

        delay(500); // Debounce delay 

    } 

} 