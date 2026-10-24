# 🤖 Servo Motor Control – Arduino

## Overview

This project demonstrates how to control the angular position of a servo motor using an Arduino Uno.

A servo motor allows precise angular positioning and is widely used in robotics, automation, and mechanical control systems.

In this project, the servo moves to 0°, 90°, and 180° with a pause at each position.

---

## 🎯 Objectives

- Interface a servo motor with Arduino Uno
- Understand servo motor positioning
- Control the motor angle using Arduino
- Learn to use the Servo library
- Display motor positions through the Serial Monitor
- Understand the basics of robotic joint control

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| SG90 Servo Motor | 1 |
| Jumper Wires | 3 |
| USB Cable | 1 |
| Regulated 5V Supply | As required |

---

## 🔌 Circuit Connections

| Servo Wire | Arduino / Supply |
|---|---|
| Signal (orange/yellow) | Digital Pin 9 |
| VCC (red) | Suitable 5V supply |
| GND (brown/black) | GND |

For an external servo supply, connect its ground to Arduino GND.

---

## ⚙️ Working Principle

A servo motor uses control pulses to move its output shaft to a target position.

The Arduino Servo library generates the control signal.

The function:

```cpp
myServo.write(angle);
```

sets the requested angle.

This project commands the servo to move through three positions:

- 0°
- 90°
- 180°

The servo pauses at each position before moving to the next.

The actual usable angle depends on the servo model and its mechanical limits.

---

## 🔄 Working Process

```text
Arduino Uno
     ↓
Servo Control Signal
     ↓
Servo Motor
     ↓
Move to 0°
     ↓
Move to 90°
     ↓
Move to 180°
     ↓
Repeat
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
Servo Motor Control
Servo Angle: 0 degrees
Servo Angle: 90 degrees
Servo Angle: 180 degrees
```

---

## 💻 Arduino Functions Used

- `Servo()`
- `attach()`
- `write()`
- `Serial.begin()`
- `Serial.println()`
- `delay()`

---

## 📚 Concepts Learned

- Servo motor interfacing
- Angular position control
- PWM-style servo control pulses
- Arduino libraries
- Serial communication
- Basic robotic joint movement

---

## 🚀 Applications

Servo motors are commonly used in:

- Robotic arms
- Humanoid robots
- Pan-and-tilt camera systems
- Pick-and-place mechanisms
- RC vehicles
- Automated mechanisms
- Smart home projects

---

## 🔮 Future Improvements

- Control servo angle using a potentiometer.
- Control the servo using push buttons.
- Control multiple servo motors.
- Use a PCA9685 servo driver for multiple servos.
- Build a robotic arm.
- Control the servo using Bluetooth or Wi-Fi.

---

## ⚠️ Safety Note

Do not force the servo shaft by hand while powered. Ensure the servo has an adequate power supply, and avoid commanding angles beyond its mechanical limits.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
