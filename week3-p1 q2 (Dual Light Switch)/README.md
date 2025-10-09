# Week 3 Part 2 - Timer Interrupt Blink

**Name:** Ali Hassan  
**Roll No:** 23-NTU-CS-1011  

## Description
This code demonstrates the use of an ESP32 hardware timer to toggle an LED every 1 second using an interrupt routine.

## Components
- ESP32 Development Board
- On-board LED (GPIO 5)

## Working
- The hardware timer is configured to tick at 1 MHz.
- The timer triggers an interrupt every 1,000,000 microseconds (1 second).
- Inside the ISR, the LED state toggles, creating a continuous blink without using `delay()`.

## Learning Outcomes
- Understanding hardware timer interrupts
- Non-blocking LED control
- Efficient use of ESP32 timers
