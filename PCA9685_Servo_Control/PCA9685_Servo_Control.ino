// PCA9685 Servo Control using Arduino Uno

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);

#define SERVO_MIN  110
#define SERVO_MAX  510
#define SERVO_CHANNEL 0

void setup() {
  Serial.begin(9600);

  pwm.begin();
  pwm.setPWMFreq(50);

  delay(10);

  Serial.println("PCA9685 Servo Control");
}

void loop() {
  // Move servo to 0 degrees
  setServoAngle(SERVO_CHANNEL, 0);
  Serial.println("Servo Angle: 0 degrees");
  delay(1500);

  // Move servo to 90 degrees
  setServoAngle(SERVO_CHANNEL, 90);
  Serial.println("Servo Angle: 90 degrees");
  delay(1500);

  // Move servo to 180 degrees
  setServoAngle(SERVO_CHANNEL, 180);
  Serial.println("Servo Angle: 180 degrees");
  delay(1500);
}

void setServoAngle(uint8_t channel, int angle) {
  angle = constrain(angle, 0, 180);

  int pulse = map(angle, 0, 180, SERVO_MIN, SERVO_MAX);

  pwm.setPWM(channel, 0, pulse);
}
