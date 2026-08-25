# 🤖 2-Sensor Maze Solver Robot

An autonomous maze-solving robot designed to navigate a grid-based maze using **two ultrasonic sensors** and the **Left-Wall Following Algorithm**.

## 📌 Project Overview

This project focuses on developing a compact autonomous robot that can navigate through a maze without manual control.

The robot uses **two ultrasonic sensors** for wall detection and makes navigation decisions while following the left wall.

## 🧠 Current Algorithm

The current version uses the **Left-Wall Following Algorithm**.

The robot continuously detects the surrounding walls and decides whether to turn, move forward, or turn back based on the available path.

## 📡 Sensor Configuration

The robot uses **2 ultrasonic sensors**:

* Left ultrasonic sensor
* Right ultrasonic sensor

These sensors are used to detect the maze walls and assist the robot in navigation.

## ⚙️ Hardware

| Component          | Specification       |
| ------------------ | ------------------- |
| Microcontroller    | Arduino Uno         |
| Motor Driver       | HW-130 Motor Shield |
| Motors             | N20 Motors          |
| Ultrasonic Sensors | 2                   |
| Drive System       | 4-wheel drive       |
| Battery            | 11.1V               |
| Voltage Regulation | Buck Converter      |
| Wheels             | 4                   |
| Caster Wheel       | 1                   |

## 📐 Robot Specifications

* **Length:** 11.5 cm
* **Width:** 8 cm
* **Wheel diameter:** 4.5 cm
* **Wheel width:** 1.8 cm
* **Wheel center-to-center distance:** 6.5 cm

## 🏁 Maze

* **Maze size:** 8 × 8
* **Cell size:** 24 × 24 cm

## 🔄 How It Works

```text
2 Ultrasonic Sensors
        ↓
   Wall Detection
        ↓
Navigation Decision
        ↓
   Motor Control
        ↓
  Robot Movement
        ↓
      Repeat
```

## 💻 Software

* Arduino IDE
* C/C++
* AFMotor Library

## 🚀 Future Improvements

The current robot uses the **Left-Wall Following Algorithm**.

Future versions may implement:

* **Flood-Fill**
* **A* path planning**
* Wheel encoders
* Gyroscope / IMU
* Time-of-Flight sensors
* Improved motor synchronization
* More accurate 90° turns

## 📸 Project Images

Project images will be added as development progresses.

## 🎥 Demo

A demonstration video will be added after testing.

## 🛠️ Project Status

🚧 **In Development**

The current focus is on reliable wall detection, motor control, and accurate maze navigation.

---

## 👨‍💻 Author

**Ippili Laxman Sai**

B.Tech Computer Science & Engineering

**Interests:** Robotics • AI/ML • IoT • Autonomous Systems

---

⭐ **More improvements and projects will be added as development continues.**
