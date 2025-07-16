# Simple Drive System

A compact, microcontroller-based drive system designed to control a DC motor with precise speed and direction management, perfect for robotics, automation, and educational electronics setups.

---

## Key Features

- **Bidirectional control** of a DC motor (forward/reverse)  
- **Speed adjustment** using PWM  
- **Direction switching** via H-bridge (e.g., L298N)  
- **Optional feedback** through rotary encoder for closed-loop control  
- **Simple serial interface** for real-time monitoring and adjustments

---

## Tech Stack & Hardware

- **Microcontroller:** Arduino Uno / ATmega328P  
- **Driver module:** L298N (H-bridge)  
- **Control logic:** Arduino C/C++ with PWM  
- **Feedback (optional):** Rotary encoder or hall-effect sensor  
- **Interface:** Serial over USB, LED indicators for status

---

## How It Works

1. The microcontroller uses PWM on its output pin.
2. The H-bridge (e.g., L298N) receives PWM and direction signals.
3. Motor speed and direction are controlled based on input commands via serial.
4. Optional encoder feedback enables PID-style speed regulation.

---

## Applications

- Educational robotics platforms  
- DIY motorized systems (e.g., RC cars, conveyor belts)  
- Speed-controlled test rigs for mechanical assemblies

---

## Contact

Feel free to reach out for questions, suggestions, or collaboration:

- 💼 [LinkedIn](https://www.linkedin.com/in/raeinlp)  
- ✉️ Email: raeen.layegh2017@gmail.com
