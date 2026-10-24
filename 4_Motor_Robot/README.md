# 🤖 4-Motor Robot – Arduino

## Overview

This project demonstrates a four-wheel robot controlled by an Arduino Uno and two L298N motor drivers.

Four DC geared motors provide movement, while the Arduino sends control signals to the drivers.

The robot is programmed to move forward, backward, turn left, turn right, and stop.

---

## 🎯 Objectives

- Interface four DC motors with Arduino
- Understand motor driver operation
- Control the direction of a four-wheel robot
- Learn PWM speed control
- Understand coordinated motor movement
- Build a foundation for mobile robotics

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| DC Geared Motors | 4 |
| L298N Motor Drivers | 2 |
| Four-Wheel Robot Chassis | 1 |
| Wheels | 4 |
| Suitable Motor Power Supply | 1 |
| Jumper Wires | As required |
| Battery Holder or Battery Pack | As required |

---

## 🔌 Circuit Connections

### Motor Driver Connections

Use two L298N modules, one for each pair of motors.

| Driver | Motor |
|---|---|
| Driver 1 OUT1/OUT2 | Front-left motor |
| Driver 1 OUT3/OUT4 | Rear-left motor |
| Driver 2 OUT1/OUT2 | Front-right motor |
| Driver 2 OUT3/OUT4 | Rear-right motor |

Connect the Arduino control pins to the driver input and enable pins. All grounds must be connected together.

---

## ⚙️ Working Principle

The Arduino controls the motor drivers using direction signals and PWM speed commands.

The two motors on each side are coordinated to make the robot move.

- Forward: all wheels drive forward.
- Backward: all wheels drive backward.
- Left turn: left-side wheels reverse while right-side wheels move forward.
- Right turn: right-side wheels reverse while left-side wheels move forward.
- Stop: motor drive is disabled.

Actual movement depends on motor wiring and wheel arrangement.

---

## 🔄 Working Process

```text
Arduino Uno
     ↓
Motor Control Signals
     ↓
Two L298N Drivers
     ↓
Four DC Motors
     ↓
Four Wheels
     ↓
Robot Movement
```

---

## 🎚️ Speed Control

PWM signals control the motor drive level.

Arduino PWM commands range from 0 to 255.

Actual wheel speed depends on the motor, load, power supply, and driver voltage drop.

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
4-Motor Robot
Moving Forward
Moving Backward
Turning Left
Turning Right
```

---

## 📚 Concepts Learned

- Four-motor control
- DC motor interfacing
- Motor driver operation
- PWM speed control
- Coordinated wheel movement
- Differential steering
- Embedded robotics

---

## 🚀 Applications

- Four-wheel mobile robots
- Robotics education
- Inspection robots
- Obstacle-avoiding robots
- Remote-controlled vehicles
- Autonomous mobile platforms

---

## 🔮 Future Improvements

- Add ultrasonic obstacle detection.
- Add IR sensors for line following.
- Implement Bluetooth control.
- Add wheel encoders.
- Use an ESP32 for wireless control.
- Implement closed-loop speed control.

---

## ⚠️ Safety Note

Do not connect DC motors directly to Arduino GPIO pins. Use suitable motor drivers and an external supply. Verify all pin assignments and wiring before uploading code.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
