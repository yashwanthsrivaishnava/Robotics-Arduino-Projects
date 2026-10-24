// Multiple Servo Motor Control using Arduino Uno

#include <Servo.h>

Servo servo1;
Servo servo2;

const int servoPin1 = 9;
const int servoPin2 = 10;

void setup() {
  Serial.begin(9600);

  servo1.attach(servoPin1);
  servo2.attach(servoPin2);

  Serial.println("Multiple Servo Control");
}

void loop() {
  // Position 1
  servo1.write(0);
  servo2.write(180);
  Serial.println("Servo 1: 0 degrees | Servo 2: 180 degrees");
  delay(1500);

  // Position 2
  servo1.write(90);
  servo2.write(90);
  Serial.println("Servo 1: 90 degrees | Servo 2: 90 degrees");
  delay(1500);

  // Position 3
  servo1.write(180);
  servo2.write(0);
  Serial.println("Servo 1: 180 degrees | Servo 2: 0 degrees");
  delay(1500);
}
