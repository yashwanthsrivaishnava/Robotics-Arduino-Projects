// Line Following Robot using Arduino Uno and L298N

const int leftSensor = 2;
const int rightSensor = 3;

const int ENA = 5;
const int IN1 = 8;
const int IN2 = 9;

const int ENB = 6;
const int IN3 = 10;
const int IN4 = 11;

const int motorSpeed = 150;

void setup() {
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
  Serial.println("Line Following Robot");
}

void loop() {
  int leftState = digitalRead(leftSensor);
  int rightState = digitalRead(rightSensor);

  // Assumption: LOW = black line, HIGH = white surface

  if (leftState == LOW && rightState == LOW) {
    moveForward();
    Serial.println("Moving Forward");
  }
  else if (leftState == LOW && rightState == HIGH) {
    turnLeft();
    Serial.println("Turning Left");
  }
  else if (leftState == HIGH && rightState == LOW) {
    turnRight();
    Serial.println("Turning Right");
  }
  else {
    stopRobot();
    Serial.println("Line Not Detected");
  }

  delay(50);
}

void moveForward() {
  setLeftMotor(motorSpeed);
  setRightMotor(motorSpeed);
}

void turnLeft() {
  setLeftMotor(0);
  setRightMotor(motorSpeed);
}

void turnRight() {
  setLeftMotor(motorSpeed);
  setRightMotor(0);
}

void stopRobot() {
  setLeftMotor(0);
  setRightMotor(0);
}

void setLeftMotor(int speedValue) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, speedValue);
}

void setRightMotor(int speedValue) {
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, speedValue);
}
