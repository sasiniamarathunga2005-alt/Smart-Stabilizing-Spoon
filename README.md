# Smart Stabilizing Spoon for Hand Tremors

## 📌 Project Overview
This project is an affordable, active-stabilizing smart spoon designed to assist individuals suffering from hand tremors[cite: 4]. Involuntary hand tremors make fine motor control difficult, leading to food spillage and frustration during meals[cite: 4]. This device uses real-time motion sensing and active feedback control to compensate for tremors, allowing users to eat independently and comfortably[cite: 4].

## ✨ Features
* **Active Stabilization:** Uses two micro servo motors to cancel out tremor frequencies in the Pitch (X-axis) and Roll (Y-axis) directions[cite: 4].
* **Real-Time Motion Tracking:** Utilizes an MPU6050 6-Axis Gyroscope and Accelerometer for instantaneous orientation tracking[cite: 4].
* **Smart Grip Activation:** Integrated Force Sensitive Resistor (FSR) ensures the stabilization system only activates when the user is holding the handle, saving battery life[cite: 4].
* **Energy Efficient & Rechargeable:** Powered by 3.7V Li-ion batteries managed by a TP4056 charging module and an LM2596 DC-DC Buck Converter for a stable 5V supply[cite: 4].
* **Current Monitoring:** Includes an ACS712 current sensor to monitor real-time power usage and motor strain[cite: 4].

## 🛠️ Hardware Components
* Arduino Nano (Core microcontroller)[cite: 4]
* MPU6050 Sensor (Gyroscope/Accelerometer)[cite: 4]
* 2x Micro Servo Motors[cite: 4]
* Force Sensitive Resistor (FSR)[cite: 4]
* ACS712 Current Sensor Module[cite: 4]
* LM2596 DC-DC Buck Converter[cite: 4]
* TP4056 Battery Charging Module[cite: 4]
* 3.7V Rechargeable Li-ion Batteries[cite: 4]
* On/Off Switch & Jumper Wires[cite: 4]

## 💻 Software & Libraries
The code is written in C++ for the Arduino platform[cite: 4].
Required Libraries:
* `Wire.h` (For I2C communication)[cite: 4]
* `MPU6050.h` (For motion sensor reading)[cite: 4]
* `Servo.h` (For servo motor control)[cite: 4]

## 🚀 Future Improvements
* **Custom PCB Design:** Transitioning from a breadboard to a dual-layer PCB to reduce weight and size[cite: 4].
* **Waterproof Enclosure:** 3D printing a food-grade, waterproof, ergonomic silicone enclosure for safe washing[cite: 4].
* **Adaptive Filtering:** Implementing self-learning PID algorithms that adjust to the specific tremor frequency of individual users[cite: 4].


