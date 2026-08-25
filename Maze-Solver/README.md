# 2-Sensor Maze Solver Robot

An autonomous maze-solving robot designed to navigate a grid-based maze using **two ultrasonic sensors** and the **Left-Wall Following Algorithm**.

## Project Overview

This project focuses on developing a compact autonomous robot that can navigate through a maze without manual control.

The robot uses **two ultrasonic sensors** for wall detection and makes navigation decisions while following the left wall.

## Current Algorithm

The current version uses the **Left-Wall Following Algorithm**.

The robot continuously measures the distance to the walls using its ultrasonic sensors and uses these readings to determine whether to turn, move forward, or turn back based on the available path.

## Sensor Configuration

The robot uses **2 ultrasonic sensors**:

* Left ultrasonic sensor
* Front ultrasonic sensor

These sensors are used to detect the maze walls and assist the robot in navigation.

## Hardware

| Component          | Specification       |
| ------------------ | ------------------- |
| Microcontroller    | Arduino Uno         |
| Motor Driver       | HW-130 Motor Shield |
| Motors             | N20 Motors          |
| Ultrasonic Sensors | 2                   |
| Drive System       | 2-wheel drive       |
| Battery            | 11.1V               |
| Voltage Regulation | Buck Converter      |
| Wheels             | 2                   |
| Caster Wheel       | 1                   |

## Robot Specifications

* **Length:** 11.5 cm
* **Width:** 8 cm
* **Wheel diameter:** 4.5 cm
* **Wheel width:** 1.8 cm
* **Wheel center-to-center distance:** 6.5 cm

## Maze

The robot is designed to navigate through **grid-based mazes of different sizes and layouts**.

## How It Works

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

## Software

* Arduino IDE
* C/C++
* AFMotor Library

## Future Improvements

The current robot uses the **Left-Wall Following Algorithm**.

Future versions may implement:

* **Flood-Fill**
* **A* path planning**
* Wheel encoders
* Gyroscope / IMU
* Time-of-Flight sensors
* Improved motor synchronization
* More accurate 90° turns


## Project Status

**In Development**

The current focus is on reliable wall detection, motor control, and accurate maze navigation.

---

## Author

**Ippili Laxman Sai**

B.Tech Computer Science & Engineering

**Focus Areas:** Robotics • Artificial Intelligence & Machine Learning • IoT • Autonomous Systems

**Email:** [laxmansaiippili@gmail.com](mailto:laxmansaiippili@gmail.com)

---
