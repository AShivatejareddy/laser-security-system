# laser-security-system
"An automated laser-based security system designed to detect intrusions and trigger an alert using a microcontroller and photoresistors (LDRs)."
# Laser Security System 🚨

## Overview
This project is a reliable, low-cost laser security system. It uses a laser module and a Light Dependent Resistor (LDR) to create an invisible perimeter. When the laser beam is broken by an intruder, the sudden drop in light intensity triggers the microcontroller to activate an alarm system. 

## Features
*   **Real-time Detection:** Instantly detects physical breaches across the laser path.
*   **Automated Alerts:** Triggers a buzzer and LED indicator when the perimeter is compromised.
*   **Adjustable Sensitivity:** The LDR threshold can be calibrated in the code to prevent false alarms from ambient light.

## Hardware Components Used
*   [Microcontroller Name, e.g., Arduino Uno / ESP32]
*   5V Laser Emitter Module
*   Light Dependent Resistor (LDR)
*   10kΩ Resistor (for the LDR voltage divider)
*   Active Buzzer
*   Jumper Wires & Breadboard

## Circuit Wiring
1.  **Laser Module:** Connect to 5V and GND.
2.  **LDR:** Connect one leg to 5V and the other to an analog input pin (e.g., A0). Place a 10kΩ pull-down resistor between the analog pin and GND.
3.  **Buzzer:** Connect the positive terminal to a digital output pin (e.g., D8) and the negative terminal to GND.

*(You can add an image of your circuit diagram here later by dragging and dropping the image file into the GitHub editor).*

## Installation & Setup
1. Clone this repository to your local machine.
2. Open the `.ino` or source code file in your preferred IDE.
3. Verify the pin definitions in the code match your physical wiring.
4. Upload the code to your microcontroller.
5. Align the laser directly with the LDR sensor and power on the system.
