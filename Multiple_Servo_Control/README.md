# 🤖 Multiple Servo Control – Arduino

## Overview

This project demonstrates how to control two servo motors independently using an Arduino Uno.

Each servo is connected to a separate digital pin. The Arduino sends position commands to both motors, moving them through a sequence of predefined angles.

This project introduces multi-joint control used in robotic arms and other robotic mechanisms.

---

## 🎯 Objectives

- Interface multiple servo motors with Arduino Uno
- Control two servo positions independently
- Understand servo positioning
- Learn to use the Servo library
- Coordinate movements between multiple motors
- Display commanded angles through the Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| SG90 Servo Motors | 2 |
| Regulated 5V Power Supply | 1 |
| Jumper Wires | As required |
| Breadboard | 1 |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Servo Signal | Arduino Uno |
|---|---|
| Servo 1 Signal | Digital Pin 9 |
| Servo 2 Signal | Digital Pin 10 |

Connect both servo VCC wires to a suitable regulated 5V supply and both GND wires to the common ground.

The external power supply ground must be connected to Arduino GND.

---

## ⚙️ Working Principle

A servo motor moves its shaft to a requested angular position based on a control signal.

The Arduino Servo library provides the `write()` function to command the angle of each servo.

For this project:

- Servo 1 is connected to digital pin 9.
- Servo 2 is connected to digital pin 10.

The Arduino commands both servos to move through three combinations of positions:

| Step | Servo 1 | Servo 2 |
|---|---:|---:|
| 1 | 0° | 180° |
| 2 | 90° | 90° |
| 3 | 180° | 0° |

The sequence repeats continuously.

---

## 🔄 Working Process

```text
Arduino Uno
     ↓
Servo Control Signals
     ↓
 ┌───────────┐
 ↓           ↓
Servo 1     Servo 2
 ↓           ↓
Position    Position
Control     Control
 └─────┬─────┘
       ↓
 Coordinated Movement
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
Multiple Servo Control
Servo 1: 0 degrees | Servo 2: 180 degrees
Servo 1: 90 degrees | Servo 2: 90 degrees
Servo 1: 180 degrees | Servo 2: 0 degrees
```

These messages show the commanded positions, not independently measured shaft angles.

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

- Multiple servo interfacing
- Independent position commands
- Coordinated motor movement
- Servo control signals
- Arduino libraries
- Basic robotic joint control

---

## 🚀 Applications

Multiple servo motors are commonly used in:

- Robotic arms
- Humanoid robots
- Pan-and-tilt camera systems
- Pick-and-place mechanisms
- Animatronics
- Automated mechanisms
- Educational robotics

---

## 🔮 Future Improvements

- Control more servos using a PCA9685 driver.
- Add a potentiometer for each servo.
- Control angles using serial commands.
- Add smooth transitions between positions.
- Build a 4DOF robotic arm.
- Create a multi-joint robotic mechanism.

---

## ⚠️ Safety Note

Use an adequate external power supply for multiple servos. Keep servo movements within their mechanical limits and avoid forcing the shafts by hand while powered.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
