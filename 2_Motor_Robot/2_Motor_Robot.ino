// 2-Motor Robot using Arduino Uno and L298N

const int ENA = 5;
const int IN1 = 8;
const int IN2 = 9;

const int ENB = 6;
const int IN3 = 10;
const int IN4 = 11;

const int motorSpeed = 180;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
  Serial.println("2-Motor Robot");
}

void loop() {
  // Move forward
  Serial.println("Moving Forward");
  moveForward();
  delay(2000);

  // Stop
  Serial.println("Stopping");
  stopRobot();
  delay(1000);

  // Move backward
  Serial.println("Moving Backward");
  moveBackward();
  delay(2000);

  // Stop
  stopRobot();
  delay(1000);

  // Turn left
  Serial.println("Turning Left");
  turnLeft();
  delay(1000);

  // Stop
  stopRobot();
  delay(1000);

  // Turn right
  Serial.println("Turning Right");
  turnRight();
  delay(1000);

  // Stop
  stopRobot();
  delay(2000);
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, motorSpeed);
  analogWrite(ENB, motorSpeed);
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, motorSpeed);
  analogWrite(ENB, motorSpeed);
}

void turnLeft() {
  // Left motor backward, right motor forward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, motorSpeed);
  analogWrite(ENB, motorSpeed);
}

void turnRight() {
  // Left motor forward, right motor backward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, motorSpeed);
  analogWrite(ENB, motorSpeed);
}

void stopRobot() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
