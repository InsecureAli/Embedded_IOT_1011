# Week 4 Part 1 - Button Controlled LED

**Name:** Ali Hassan  
**Roll No:** 23-NTU-CS-1011  

## Description
This program turns an LED on and off using a single button interrupt.  
Every button press toggles the LED state instantly without blocking the main loop.

## Components
- ESP32 Development Board
- LED (GPIO 5)
- Push Button (GPIO 34)

## Working
- Button is connected with an internal pull-up resistor.
- Falling edge interrupt triggers `handleButton()` ISR.
- The ISR toggles the LED state between ON and OFF.
- The main loop remains free for other operations.

## Learning Outcomes
- Using external interrupts for input
- Button handling with interrupt routines
- Writing non-blocking embedded code
