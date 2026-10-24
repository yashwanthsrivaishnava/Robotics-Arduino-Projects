// 4-Motor Robot using Arduino Uno and 2 L298N Drivers

// Left-side driver
const int ENA = 5;
const int IN1 = 8;
const int IN2 = 9;

const int ENB = 6;
const int IN3 = 10;
const int IN4 = 11;

// Right-side driver
const int ENA2 = 3;
const int IN5 = 4;
const int IN6 = 7;

const int ENB2 = 11;  // Change if needed: D11 is already used above!

const int motorSpeed = 180;

void setup() {
  Serial.begin(9600);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENA2, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(ENB2, OUTPUT);

  Serial.println("4-Motor Robot");
}

void loop() {
  Serial.println("Moving Forward");
  forward();
  delay(2000);

  stopRobot();
  delay(1000);

  Serial.println("Moving Backward");
  backward();
  delay(2000);

  stopRobot();
  delay(1000);

  Serial.println("Turning Left");
  left();
  delay(1000);

  stopRobot();
  delay(1000);

  Serial.println("Turning Right");
  right();
  delay(1000);

  stopRobot();
  delay(2000);
}

void forward() {
  setMotor(ENA, IN1, IN2, motorSpeed);
  setMotor(ENB, IN3, IN4, motorSpeed);
  setMotor(ENA2, IN5, IN6, motorSpeed);
  setMotor(ENB2, IN5, IN6, motorSpeed);
}

void backward() {
  setMotor(ENA, IN1, IN2, -motorSpeed);
  setMotor(ENB, IN3, IN4, -motorSpeed);
  setMotor(ENA2, IN5, IN6, -motorSpeed);
  setMotor(ENB2, IN5, IN6, -motorSpeed);
}

void left() {
  setMotor(ENA, IN1, IN2, -motorSpeed);
  setMotor(ENB, IN3, IN4, -motorSpeed);
  setMotor(ENA2, IN5, IN6, motorSpeed);
  setMotor(ENB2, IN5, IN6, motorSpeed);
}

void right() {
  setMotor(ENA, IN1, IN2, motorSpeed);
  setMotor(ENB, IN3, IN4, motorSpeed);
  setMotor(ENA2, IN5, IN6, -motorSpeed);
  setMotor(ENB2, IN5, IN6, -motorSpeed);
}

void stopRobot() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  analogWrite(ENA2, 0);
  analogWrite(ENB2, 0);
}

void setMotor(int en, int inA, int inB, int speedValue) {
  if (speedValue > 0) {
    digitalWrite(inA, HIGH);
    digitalWrite(inB, LOW);
  } else if (speedValue < 0) {
    digitalWrite(inA, LOW);
    digitalWrite(inB, HIGH);
  } else {
    digitalWrite(inA, LOW);
    digitalWrite(inB, LOW);
  }

  analogWrite(en, abs(speedValue));
}
