// 4DOF Robotic Arm using Arduino Uno

#include <Servo.h>

Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo gripperServo;

// Servo signal pins
const int basePin = 3;
const int shoulderPin = 5;
const int elbowPin = 6;
const int gripperPin = 9;

// Initial positions
int baseHome = 90;
int shoulderHome = 120;
int elbowHome = 45;
int gripperOpen = 45;

void setup() {
  Serial.begin(9600);

  baseServo.attach(basePin);
  shoulderServo.attach(shoulderPin);
  elbowServo.attach(elbowPin);
  gripperServo.attach(gripperPin);

  baseServo.write(baseHome);
  shoulderServo.write(shoulderHome);
  elbowServo.write(elbowHome);
  gripperServo.write(gripperOpen);

  delay(1000);

  Serial.println("4DOF Robotic Arm Ready");
}

void loop() {
  // Step 1: Rotate base
  Serial.println("Step 1: Base Rotation");
  baseServo.write(45);
  delay(1000);

  // Step 2: Lower shoulder
  Serial.println("Step 2: Shoulder Movement");
  shoulderServo.write(100);
  delay(1000);

  // Step 3: Move elbow
  Serial.println("Step 3: Elbow Movement");
  elbowServo.write(70);
  delay(1000);

  // Step 4: Close gripper
  Serial.println("Step 4: Gripper Closing");
  gripperServo.write(90);
  delay(1000);

  // Step 5: Lift shoulder
  Serial.println("Step 5: Lifting Object");
  shoulderServo.write(130);
  delay(1000);

  // Step 6: Open gripper
  Serial.println("Step 6: Releasing Object");
  gripperServo.write(gripperOpen);
  delay(1000);

  // Return to home position
  Serial.println("Returning to Home");
  baseServo.write(baseHome);
  shoulderServo.write(shoulderHome);
  elbowServo.write(elbowHome);
  gripperServo.write(gripperOpen);

  delay(2000);
}
