# 🤖 2-Motor Robot – Arduino

## Overview

This project demonstrates a basic two-wheel robot using an Arduino Uno, an L298N motor driver, and two DC geared motors.

The Arduino sends control signals to the motor driver to control the direction and speed of both motors.

The robot performs four basic movements: forward, backward, left turn, and right turn.

---

## 🎯 Objectives

- Build a basic two-wheel mobile robot
- Interface two DC motors with Arduino
- Understand motor driver operation
- Control motor direction
- Control motor speed using PWM
- Learn basic robot movement logic

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| DC Geared Motors | 2 |
| L298N Motor Driver | 1 |
| Robot Chassis | 1 |
| Wheels | 2 |
| Suitable Motor Power Supply | 1 |
| Jumper Wires | As required |
| Battery Holder or Battery Pack | As required |

---

## 🔌 Circuit Connections

### L298N to Arduino Uno

| L298N Pin | Arduino Uno |
|---|---|
| ENA | Digital Pin 5 |
| IN1 | Digital Pin 8 |
| IN2 | Digital Pin 9 |
| ENB | Digital Pin 6 |
| IN3 | Digital Pin 10 |
| IN4 | Digital Pin 11 |
| GND | GND |

### Motor Connections

| Motor | L298N Output |
|---|---|
| Left Motor | OUT1 and OUT2 |
| Right Motor | OUT3 and OUT4 |

Use an appropriate external power supply for the motors and connect the grounds together.

---

## ⚙️ Working Principle

The Arduino controls two DC motors through the L298N motor driver.

Each motor uses two direction inputs and one enable input.

The direction pins determine whether the motor rotates forward or backward. The enable pins receive PWM signals to control the motor speed.

The robot uses differential steering: changing the direction of the two motors relative to each other allows the robot to turn.

---

## 🔄 Movement Logic

| Movement | Left Motor | Right Motor |
|---|---|---|
| Forward | Forward | Forward |
| Backward | Backward | Backward |
| Left Turn | Backward | Forward |
| Right Turn | Forward | Backward |
| Stop | Stopped | Stopped |

The exact physical direction depends on motor wiring and mounting.

---

## 🔄 Working Process

```text
Arduino Uno
     ↓
Motor Control Signals
     ↓
L298N Motor Driver
     ↓
 ┌─────────────┐
 ↓             ↓
Left Motor   Right Motor
 ↓             ↓
Left Wheel   Right Wheel
 └──────┬──────┘
        ↓
   Robot Movement
```

---

## 🎚️ Speed Control

The program uses:

```cpp
const int motorSpeed = 180;
```

Arduino PWM values range from 0 to 255.

- `0` – No PWM drive
- `128` – Approximately 50% PWM duty cycle
- `255` – 100% PWM duty cycle

Actual speed depends on the motor, load, driver voltage drop, and power supply.

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
2-Motor Robot
Moving Forward
Stopping
Moving Backward
Turning Left
Turning Right
```

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalWrite()`
- `analogWrite()`
- `Serial.begin()`
- `Serial.println()`
- `delay()`

---

## 📚 Concepts Learned

- Mobile robotics
- DC motor interfacing
- Motor driver control
- PWM speed control
- Differential steering
- Direction control
- Embedded system programming

---

## 🚀 Applications

Two-motor robot designs are used in:

- Educational robotics
- Obstacle-avoiding robots
- Line-following robots
- Bluetooth-controlled cars
- Autonomous mobile robots
- Small delivery robots

---

## 🔮 Future Improvements

- Add an ultrasonic sensor for obstacle avoidance.
- Add IR sensors for line following.
- Control the robot using Bluetooth.
- Add ESP32 Wi-Fi control.
- Add wheel encoders for speed measurement.
- Implement closed-loop motor control.

---

## ⚠️ Safety Note

Do not power DC motors directly from Arduino GPIO pins. Use a suitable motor driver and external supply. Check the voltage and current ratings of the motors and driver before operation.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
