# 🤖 Line Following Robot – Arduino

## Overview

This project demonstrates a line-following robot built using an Arduino Uno, two IR line-tracking sensors, an L298N motor driver, and two DC geared motors.

The robot detects a line on the floor and adjusts its motor movement to follow the path.

---

## 🎯 Objectives

- Interface IR sensors with Arduino
- Understand line detection
- Control two DC motors
- Learn basic robot navigation
- Implement conditional control logic
- Understand differential steering

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| IR Line-Tracking Sensors | 2 |
| DC Geared Motors | 2 |
| L298N Motor Driver | 1 |
| Robot Chassis | 1 |
| Wheels | 2 |
| Motor Power Supply | 1 |
| Jumper Wires | As required |

---

## 🔌 Circuit Connections

### IR Sensors

| Sensor Pin | Arduino Uno |
|---|---|
| Left OUT | D2 |
| Right OUT | D3 |
| VCC | Suitable supply |
| GND | GND |

### L298N Motor Driver

| L298N Pin | Arduino Uno |
|---|---|
| ENA | D5 |
| IN1 | D8 |
| IN2 | D9 |
| ENB | D6 |
| IN3 | D10 |
| IN4 | D11 |
| GND | GND |

### Motors

| Motor | L298N Output |
|---|---|
| Left motor | OUT1 and OUT2 |
| Right motor | OUT3 and OUT4 |

Use a suitable external motor power supply. Connect Arduino, driver, and supply grounds together.

---

## ⚙️ Working Principle

IR sensors detect differences in reflected infrared light from the surface.

The Arduino reads the digital outputs of the left and right sensors and decides how to control the motors.

This example assumes LOW means a black line is detected and HIGH means the sensor sees the lighter surface.

| Left Sensor | Right Sensor | Action |
|---|---|---|
| LOW | LOW | Move forward |
| LOW | HIGH | Turn left |
| HIGH | LOW | Turn right |
| HIGH | HIGH | Stop |

Sensor logic depends on the module. Test the outputs and adjust the conditions if your sensors use opposite logic.

---

## 🔄 Working Process

```text
IR Line Sensors
       ↓
Detect Surface
       ↓
Arduino Uno
       ↓
Evaluate Sensor States
       ↓
L298N Motor Driver
       ↓
Left and Right Motors
       ↓
Adjust Robot Direction
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
Line Following Robot
Moving Forward
Turning Left
Moving Forward
Turning Right
```

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalRead()`
- `digitalWrite()`
- `analogWrite()`
- `Serial.begin()`
- `Serial.println()`

---

## 📚 Concepts Learned

- IR sensing
- Line detection
- Digital inputs
- Motor control
- PWM speed control
- Conditional statements
- Basic autonomous navigation

---

## 🚀 Applications

- Educational robotics
- Automated guided vehicles
- Warehouse transport robots
- Path-following robots
- Industrial automation demonstrations
- Robotics competitions

---

## 🔮 Future Improvements

- Use three or more line sensors.
- Add adjustable motor speeds.
- Implement proportional or PID control.
- Add obstacle detection using an ultrasonic sensor.
- Create a maze-solving robot.
- Add wireless monitoring.

---

## ⚠️ Safety Note

Test the robot with its wheels lifted first. Keep it on a clear, flat surface, and use a suitable motor supply. Do not power the motors directly from Arduino GPIO pins.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
