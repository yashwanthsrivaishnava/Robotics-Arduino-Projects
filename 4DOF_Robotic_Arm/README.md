# 🤖 4DOF Robotic Arm – Arduino

## Overview

This project demonstrates a four-degree-of-freedom (4DOF) robotic arm controlled using an Arduino Uno and four servo motors.

Each servo controls a different part of the arm: the base, shoulder, elbow, or gripper.

The program demonstrates a simple pick-and-place sequence by moving the arm through predefined positions, closing the gripper, lifting an object, releasing it, and returning to its home position.

---

## 🎯 Objectives

- Build a basic robotic arm
- Interface multiple servo motors with Arduino
- Understand degrees of freedom (DOF)
- Control individual joint positions
- Implement a simple pick-and-place sequence
- Learn the fundamentals of robotic manipulation

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| Servo Motors | 4 |
| 4DOF Robotic Arm Frame | 1 |
| Regulated Servo Power Supply | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |
| Lightweight Object | 1 |

---

## 🔌 Circuit Connections

| Joint | Arduino Signal Pin |
|---|---|
| Base Servo | D3 |
| Shoulder Servo | D5 |
| Elbow Servo | D6 |
| Gripper Servo | D9 |

Connect all servo VCC wires to a suitable external supply and all servo GND wires to the common ground.

Connect the external supply GND to Arduino GND.

---

## ⚙️ Working Principle

A servo motor moves its output shaft to a commanded angular position.

The Arduino uses the Servo library to send position commands to each joint.

The four degrees of freedom are:

1. **Base:** Rotates the arm horizontally.
2. **Shoulder:** Raises or lowers the upper arm.
3. **Elbow:** Changes the angle of the forearm.
4. **Gripper:** Opens and closes to hold or release an object.

The example program performs a predefined movement sequence. Actual joint angles and movement directions depend on the mechanical assembly and servo installation.

---

## 🔄 Working Process

```text
Arduino Uno
     ↓
Joint Position Commands
     ↓
 ┌────────┬──────────┬────────┬─────────┐
 ↓        ↓          ↓        ↓
 Base   Shoulder    Elbow   Gripper
 Servo   Servo      Servo    Servo
     ↓
Arm Positioning
     ↓
Grip Object
     ↓
Lift and Release
     ↓
Return to Home
```

---

## 📋 Example Movement Sequence

| Step | Action |
|---|---|
| 1 | Rotate the base |
| 2 | Move the shoulder |
| 3 | Adjust the elbow |
| 4 | Close the gripper |
| 5 | Lift the object |
| 6 | Open the gripper |
| 7 | Return to the home position |

The example uses fixed delays between commands. It is intended for demonstration and may need adjustment for the actual arm.

---

## 📟 Serial Monitor

Set the Serial Monitor to:

```text
9600 baud
```

Example output:

```text
4DOF Robotic Arm Ready
Step 1: Base Rotation
Step 2: Shoulder Movement
Step 3: Elbow Movement
Step 4: Gripper Closing
Step 5: Lifting Object
Step 6: Releasing Object
Returning to Home
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

- Degrees of freedom
- Servo motor control
- Joint positioning
- Robotic arm movement
- Gripper operation
- Sequential control
- Basic pick-and-place automation

---

## 🚀 Applications

Robotic arms are commonly used in:

- Pick-and-place systems
- Manufacturing automation
- Material handling
- Educational robotics
- Laboratory automation
- Assembly systems
- Object sorting

---

## 🔮 Future Improvements

- Add potentiometers for manual joint control.
- Add serial commands for individual joint angles.
- Implement smooth joint transitions.
- Use a PCA9685 driver to control the servos.
- Add Bluetooth or Wi-Fi control.
- Add inverse kinematics for target positioning.
- Add sensors to detect objects in the gripper.

---

## ⚠️ Safety Note

Test each joint separately before running a complete movement sequence. Keep the arm unloaded during initial testing and avoid angles that cause mechanical collisions or servo strain.

Use a suitable external power supply for the servos.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
