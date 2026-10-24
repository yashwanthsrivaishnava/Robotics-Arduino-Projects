# 🤖 Obstacle Avoiding Robot – Arduino

## Overview

This project demonstrates an autonomous obstacle-avoiding robot using an Arduino Uno, an HC-SR04 ultrasonic sensor, an L298N motor driver, and two DC geared motors.

The robot measures the distance to objects in front of it. When an obstacle is detected within a predefined distance, the robot stops, moves backward briefly, turns, and continues moving.

---

## 🎯 Objectives

- Interface an HC-SR04 ultrasonic sensor with Arduino
- Measure distance using ultrasonic waves
- Control two DC motors
- Implement obstacle detection logic
- Understand autonomous robot navigation
- Learn basic sensor-based decision-making

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| L298N Motor Driver | 1 |
| DC Geared Motors | 2 |
| Robot Chassis | 1 |
| Wheels | 2 |
| Motor Power Supply | 1 |
| Jumper Wires | As required |

---

## 🔌 Circuit Connections

### HC-SR04 to Arduino Uno

| HC-SR04 | Arduino Uno |
|---|---|
| VCC | 5V |
| TRIG | Digital Pin 12 |
| ECHO | Digital Pin 13 |
| GND | GND |

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

### Motors

| Motor | L298N Output |
|---|---|
| Left Motor | OUT1 and OUT2 |
| Right Motor | OUT3 and OUT4 |

Use an appropriate external motor supply and connect all grounds together.

---

## ⚙️ Working Principle

The HC-SR04 measures distance using ultrasonic sound waves.

The Arduino sends a short trigger pulse. The sensor emits an ultrasonic wave and measures the time taken for its echo to return.

The Arduino calculates the distance and compares it with a threshold of 20 cm.

- **Clear path:** The robot moves forward.
- **Obstacle within 20 cm:** The robot stops, reverses, and turns right.
- **No valid echo:** The sensor reading is treated as invalid.

The example continues moving forward when the reading is invalid. For a safety-focused design, this behavior should be changed to stop the robot until a valid reading is obtained.

---

## 🧮 Distance Calculation

The distance is calculated using:

```text
Distance = (Time × Speed of Sound) / 2
```

The approximate speed of sound used in the program is:

```text
0.0343 cm/µs
```

The result is divided by two because the sound travels to the obstacle and back.

---

## 🔄 Working Process

```text
HC-SR04 Sensor
       ↓
Measure Distance
       ↓
Arduino Uno
       ↓
Is Obstacle Within 20 cm?
       ↓
 ┌──────────────┐
 │              │
 Yes            No
 │              │
Stop            Move Forward
 │
Reverse Briefly
 │
Turn Right
 │
Continue
```

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
Obstacle Avoiding Robot
Distance: 45.2 cm
Distance: 32.8 cm
Distance: 15.6 cm
Obstacle Detected!
Distance: 28.4 cm
```

The readings depend on the distance and surrounding objects.

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalWrite()`
- `analogWrite()`
- `pulseIn()`
- `delayMicroseconds()`
- `Serial.begin()`
- `Serial.println()`

---

## 📚 Concepts Learned

- Ultrasonic sensing
- Distance measurement
- Motor driver interfacing
- PWM speed control
- Conditional statements
- Autonomous navigation
- Sensor-based decision-making

---

## 🚀 Applications

- Autonomous mobile robots
- Educational robotics
- Basic delivery robots
- Obstacle detection systems
- Robotic vehicles
- Embedded automation projects

---

## 🔮 Future Improvements

- Add a servo to scan left and right.
- Add multiple ultrasonic sensors.
- Integrate IR sensors.
- Add Bluetooth or Wi-Fi control.
- Use wheel encoders for accurate movement.
- Implement safer behavior for invalid sensor readings.
- Add an LCD to display distance.

---

## ⚠️ Safety Note

Test the robot in an open area at low speed. Ultrasonic sensors may fail to detect some surfaces or objects reliably. This project is an educational prototype and should not be relied upon for safety-critical obstacle detection.

Never power DC motors directly from Arduino GPIO pins.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
