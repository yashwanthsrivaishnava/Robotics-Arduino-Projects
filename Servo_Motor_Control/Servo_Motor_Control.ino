// Servo Motor Control using Arduino Uno

#include <Servo.h>

Servo myServo;

const int servoPin = 9;

void setup() {
  Serial.begin(9600);

  myServo.attach(servoPin);

  Serial.println("Servo Motor Control");
}

void loop() {
  // Move servo to 0 degrees
  myServo.write(0);
  Serial.println("Servo Angle: 0 degrees");
  delay(1500);

  // Move servo to 90 degrees
  myServo.write(90);
  Serial.println("Servo Angle: 90 degrees");
  delay(1500);

  // Move servo to 180 degrees
  myServo.write(180);
  Serial.println("Servo Angle: 180 degrees");
  delay(1500);
}
