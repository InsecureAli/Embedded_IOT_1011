#include <Arduino.h>

const int buttonPin = 21;   // the number of the pushbutton pin
const int ledPin = 2;       // the number of the LED pin
int buttonState = 0;        // variable for reading the pushbutton status

void setup() {
    pinMode(ledPin, OUTPUT);          // initialize the LED pin as an output
    pinMode(buttonPin, INPUT_PULLUP); // initialize the pushbutton pin as an input with pullup
}

void loop() {
    buttonState = digitalRead(buttonPin); // read the state of the pushbutton
    if (buttonState == HIGH) {            // button pressed
        digitalWrite(ledPin, HIGH);       // turn LED on
    } else {
        digitalWrite(ledPin, LOW);        // turn LED off
    }
}

// #include <Arduino.h>

// #define LED_PIN 2

// void setup()
// {
//   pinMode(LED_PIN, OUTPUT);
// }

// void loop()
// {   
//   digitalWrite(LED_PIN, HIGH);  // LED ON
//   delay(500);                   // give 0.5 sec delay
//   digitalWrite(LED_PIN, LOW);   // LED OFF
//   delay(500);                   // give 0.5 sec delay
// }


