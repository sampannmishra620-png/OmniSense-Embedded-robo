# 🏎️ OmniSense-Embedded-robo

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://en.cppreference.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Embedded%20Systems-orange.svg)]()
[![Build](https://img.shields.io/badge/Firmware-Active%20Dev-brightgreen.svg)]()

> Custom C++ firmware for an autonomous 4WD rover. Combines ultrasonic sensor processing, wireless Bluetooth control, live I2C OLED diagnostic display, and acoustic buzzer alerts.

---

## 🛠️ System Architecture

Custom state-machine C++ firmware designed for continuous sensor polling and real-time execution across peripherals.
[ Ultrasonic HC-SR04 ] ---

[ Bluetooth HC-05    ] ------> [ C++ Core Logic ] ---> [ L298N Motor Driver ]
[ OLED Telemetry     ] ---/          |
v
[ OLED & Buzzer Alerts ]
---

## ⚡ Technical Highlights

* **🛡️ Collision Avoidance:** Ultrasonic distance calculations written in C++ for dynamic obstacle navigation.
* **📡 Dual Control Modes:** Real-time toggling between autonomous navigation and manual Bluetooth (BT) override.
* **📊 Diagnostic Display:** OLED telemetry dashboard driven via I2C showing active sensor values and drive states.
* **🔊 Acoustic Alerts:** Multi-frequency piezo buzzer output for power-on checks and obstacle proximity feedback.
* **⚡ Precision Execution:** Optimized C++ motor control functions for fast direction and pulse width handling.

---

## 🔌 Exact Pinout & Component Wiring

| Component | Pin / Interface | Function |
| :--- | :--- | :--- |
| **Ultrasonic Trigger (HC-SR04)** | `Pin 9` | Proximity Pulse Output |
| **Ultrasonic Echo (HC-SR04)** | `Pin 10` | Signal Echo Input |
| **Bluetooth Module (HC-05)** | `Pins 2 / 3` | Serial Data RX / TX |
| **OLED Display (0.96" I2C)** | `SDA (A4) / SCL (A5)` | Real-Time Diagnostic UI |
| **Piezo Buzzer** | `Pin 8` | Acoustic Proximity Alert |
| **L298N Motor Driver** | `Pins 4, 5, 6, 7` | 4WD Motor Direction & Power |

---

## 👨‍💻 Developer Note

Developed by **Sampan Mishra** to demonstrate practical C++ embedded firmware development, hardware interface integration, and state-machine control for scholarship and engineering evaluation.
