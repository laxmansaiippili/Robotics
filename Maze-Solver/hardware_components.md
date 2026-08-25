# ⚙️ Hardware Components

This document contains the detailed hardware specifications of the 2-Sensor Maze Solver Robot.

## 🔌 Main Components

| Component          | Specification       |
| ------------------ | ------------------- |
| Microcontroller    | Arduino Uno         |
| Motor Driver       | HW-130 Motor Shield |
| Motors             | N20 Motors          |
| Ultrasonic Sensors | 2                   |
| Drive System       | 2-wheel drive       |
| Wheels             | 2                   |
| Caster Wheel       | 1                   |
| Battery            | 11.1V               |
| Voltage Regulation | Buck Converter      |

## 📡 Ultrasonic Sensors

The robot uses two ultrasonic sensors for detecting walls:

* **Left ultrasonic sensor** — used for left-wall detection.
* **Front ultrasonic sensor** — used for detecting obstacles/path availability ahead.

The sensor readings are processed by the microcontroller to make navigation decisions.

## ⚙️ Motor System

The robot uses **two N20 geared motors** for movement.

The motors are controlled using the **HW-130 Motor Shield** connected to the Arduino Uno.

The drive system provides:

* Forward movement
* Reverse movement
* Left turns
* Right turns
* U-turns

## 🔋 Power System

The robot is powered by an **11.1V battery**.

A **buck converter** is used to regulate the required voltage for the electronic components.

## 📐 Robot Dimensions

| Parameter                       |   Value |
| ------------------------------- | ------: |
| Length                          | 11.5 cm |
| Width                           |    8 cm |
| Wheel Diameter                  |  4.5 cm |
| Wheel Width                     |  1.8 cm |
| Wheel Center-to-Center Distance |  6.5 cm |

## 🛞 Wheel Configuration

The robot uses a **2-wheel drive system** with a caster wheel for support.

The two N20 motors independently drive the left and right wheels, allowing the robot to move forward, reverse, and perform turns.

## 🛠️ Development Notes

The robot's motor speeds, sensor thresholds, and turning parameters require calibration according to the physical robot and maze conditions.
