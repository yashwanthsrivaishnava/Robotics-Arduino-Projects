// Obstacle Avoiding Robot using Arduino Uno, HC-SR04 and L298N

const int trigPin = 12;
const int echoPin = 13;

const int ENA = 5;
const int IN1 = 8;
const int IN2 = 9;

const int ENB = 6;
const int IN3 = 10;
const int IN4 = 11;

const int motorSpeed = 150;
const int obstacleDistance = 20;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
  Serial.println("Obstacle Avoiding Robot");
}

void loop() {
  float distance = getDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= obstacleDistance) {
    Serial.println("Obstacle Detected!");

    stopRobot();
    delay(300);

    moveBackward();
    delay(400);

    stopRobot();
    delay(200);

    turnRight();
    delay(500);

    stopRobot();
    delay(200);
  } else {
    moveForward();
  }

  delay(100);
}

float getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    return -1;  // No valid echo received
  }

  return duration * 0.0343 / 2.0;
}

void moveForward() {
  setLeftMotor(motorSpeed);
  setRightMotor(motorSpeed);
}

void moveBackward() {
  setLeftMotor(-motorSpeed);
  setRightMotor(-motorSpeed);
}

void turnRight() {
  setLeftMotor(motorSpeed);
  setRightMotor(-motorSpeed);
}

void stopRobot() {
  setLeftMotor(0);
  setRightMotor(0);
}

void setLeftMotor(int speedValue) {
  if (speedValue > 0) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  } else if (speedValue < 0) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  } else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  }

  analogWrite(ENA, abs(speedValue));
}

void setRightMotor(int speedValue) {
  if (speedValue > 0) {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else if (speedValue < 0) {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }

  analogWrite(ENB, abs(speedValue));
}
