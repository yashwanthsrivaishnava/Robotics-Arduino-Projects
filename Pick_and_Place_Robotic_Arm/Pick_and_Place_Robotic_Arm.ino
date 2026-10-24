// Pick and Place Robotic Arm using Arduino Uno and 4 Servos

#include <Servo.h>

Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo gripperServo;

const int BASE_PIN = 3;
const int SHOULDER_PIN = 5;
const int ELBOW_PIN = 6;
const int GRIPPER_PIN = 9;

// Example positions: calibrate for your arm
const int BASE_HOME = 90;
const int SHOULDER_HOME = 110;
const int ELBOW_HOME = 70;
const int GRIPPER_OPEN = 45;
const int GRIPPER_CLOSED = 80;

void setup() {
  Serial.begin(9600);

  baseServo.attach(BASE_PIN);
  shoulderServo.attach(SHOULDER_PIN);
  elbowServo.attach(ELBOW_PIN);
  gripperServo.attach(GRIPPER_PIN);

  goHome();
  delay(1500);

  Serial.println("Pick and Place Robotic Arm Ready");
}

void loop() {
  // 1. Move to pickup position
  Serial.println("Moving to pickup position");
  baseServo.write(60);
  shoulderServo.write(135);
  elbowServo.write(45);
  delay(1200);

  // 2. Grip the object
  Serial.println("Gripping object");
  gripperServo.write(GRIPPER_CLOSED);
  delay(800);

  // 3. Lift the object
  Serial.println("Lifting object");
  shoulderServo.write(105);
  elbowServo.write(75);
  delay(1200);

  // 4. Move to placement position
  Serial.println("Moving to placement position");
  baseServo.write(120);
  delay(1000);

  // 5. Lower the arm
  Serial.println("Lowering arm");
  shoulderServo.write(135);
  elbowServo.write(45);
  delay(1000);

  // 6. Release the object
  Serial.println("Releasing object");
  gripperServo.write(GRIPPER_OPEN);
  delay(800);

  // 7. Return home
  Serial.println("Returning to home");
  goHome();
  delay(2000);
}

void goHome() {
  baseServo.write(BASE_HOME);
  shoulderServo.write(SHOULDER_HOME);
  elbowServo.write(ELBOW_HOME);
  gripperServo.write(GRIPPER_OPEN);
}
