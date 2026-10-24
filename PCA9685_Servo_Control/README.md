# 🤖 PCA9685 Servo Control – Arduino

## Overview

This project demonstrates how to control a servo motor using an Arduino Uno and a PCA9685 16-channel PWM servo driver.

The PCA9685 generates PWM signals for servo positioning and communicates with the Arduino through the I²C interface.

It allows multiple servo motors to be controlled without requiring a separate Arduino output pin for every servo signal.

---

## 🎯 Objectives

- Interface the PCA9685 with Arduino Uno
- Understand I²C communication
- Generate PWM signals for servo control
- Control servo angular positions
- Learn to use the Adafruit PWM Servo Driver library
- Understand multi-servo control architecture

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| PCA9685 16-Channel PWM Driver | 1 |
| Servo Motor | 1 |
| Regulated Servo Power Supply | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

### Arduino Uno to PCA9685

| PCA9685 Pin | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| SDA | A4 (SDA) |
| SCL | A5 (SCL) |

### Servo to PCA9685

| Servo Wire | PCA9685 Connection |
|---|---|
| Signal | Channel 0 signal |
| VCC | V+ power rail |
| GND | Channel 0 GND |

Use an appropriate external supply for the servo power rail. Connect all grounds together.

---

## ⚙️ Working Principle

The PCA9685 is a 16-channel, 12-bit PWM controller.

It communicates with the Arduino through I²C and generates PWM signals independently of the Arduino's main program timing.

The Arduino sends commands to the PCA9685 to select a channel and set the PWM pulse timing.

In this project, servo channel 0 is commanded to three positions:

- 0°
- 90°
- 180°

The pulse range must be calibrated for the particular servo.

---

## 🔄 Working Process

```text
Arduino Uno
     ↓
I²C Communication
     ↓
PCA9685 PWM Driver
     ↓
PWM Signal on Channel 0
     ↓
Servo Motor
     ↓
Angular Position
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
PCA9685 Servo Control
Servo Angle: 0 degrees
Servo Angle: 90 degrees
Servo Angle: 180 degrees
```

These messages show the commanded positions, not independently measured shaft angles.

---

## 💻 Libraries and Functions Used

- `Wire.h`
- `Adafruit_PWMServoDriver.h`
- `begin()`
- `setPWMFreq()`
- `setPWM()`
- `map()`
- `constrain()`

---

## 📚 Concepts Learned

- PWM signal generation
- I²C communication
- PCA9685 servo control
- Servo position commands
- External servo power
- Multi-channel motor control
- Arduino library integration

---

## 🚀 Applications

PCA9685 servo drivers are commonly used in:

- Robotic arms
- Humanoid robots
- Multi-servo robotics
- Animatronics
- Pan-and-tilt systems
- Hexapod robots
- Automated mechanisms

---

## 🔮 Future Improvements

- Control multiple servos independently.
- Add serial commands to set servo angles.
- Implement smooth servo transitions.
- Build a 4DOF robotic arm.
- Use two PCA9685 boards for more channels.
- Integrate sensors for feedback-based robotics.

---

## ⚠️ Safety Note

Use a suitable external power supply for the servo motors. Calibrate the minimum and maximum pulse values carefully, and avoid commanding angles beyond the mechanical limits of the servo.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
