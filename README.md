# Smart Stabilizing Spoon for Hand Tremors

## 📌 Project Overview
This project is an affordable, active-stabilizing smart spoon designed to assist individuals suffering from hand tremors. Involuntary hand tremors make fine motor control difficult, leading to food spillage and frustration during meals. This device uses real-time motion sensing and active feedback control to compensate for tremors, allowing users to eat independently and comfortably.

## ✨ Features
* **Active Stabilization:** Uses two micro servo motors to cancel out tremor frequencies in the Pitch (X-axis) and Roll (Y-axis) directions.
* **Real-Time Motion Tracking:** Utilizes an MPU6050 6-Axis Gyroscope and Accelerometer for instantaneous orientation tracking.
* **Smart Grip Activation:** Integrated Force Sensitive Resistor (FSR) ensures the stabilization system only activates when the user is holding the handle, saving battery life.
* **Energy Efficient & Rechargeable:** Powered by 3.7V Li-ion batteries managed by a TP4056 charging module and an LM2596 DC-DC Buck Converter for a stable 5V supply.
* **Current Monitoring:** Includes an ACS712 current sensor to monitor real-time power usage and motor strain.

## 🛠️ Hardware Components
* Arduino Nano (Core microcontroller)
* MPU6050 Sensor (Gyroscope/Accelerometer)
* 2x Micro Servo Motors
* Force Sensitive Resistor (FSR)
* ACS712 Current Sensor Module
* LM2596 DC-DC Buck Converter
* TP4056 Battery Charging Module
* 3.7V Rechargeable Li-ion Batteries
* On/Off Switch & Jumper Wires

## 💻 Software & Libraries
The code is written in C++ for the Arduino platform.
Required Libraries:
* `Wire.h` (For I2C communication)
* `MPU6050.h` (For motion sensor reading)
* `Servo.h` (For servo motor control)

## 🚀 Future Improvements
* **Custom PCB Design:** Transitioning from a breadboard to a dual-layer PCB to reduce weight and size.
* **Waterproof Enclosure:** 3D printing a food-grade, waterproof, ergonomic silicone enclosure for safe washing.
* **Adaptive Filtering:** Implementing self-learning PID algorithms that adjust to the specific tremor frequency of individual users.

