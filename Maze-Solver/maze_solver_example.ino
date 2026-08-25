// 2-Sensor Maze Solver
// Sample implementation of Left-Wall Following

#include <AFMotor.h>

// Ultrasonic sensor pins
#define LEFT_TRIG 2
#define LEFT_ECHO 3

#define FRONT_TRIG 4
#define FRONT_ECHO 5

// Motors
AF_DCMotor leftMotor(1);
AF_DCMotor rightMotor(2);

void setup() {
  pinMode(LEFT_TRIG, OUTPUT);
  pinMode(LEFT_ECHO, INPUT);

  pinMode(FRONT_TRIG, OUTPUT);
  pinMode(FRONT_ECHO, INPUT);

  Serial.begin(9600);
}

void loop() {

  long leftDistance = readLeftSensor();
  long frontDistance = readFrontSensor();

  if (leftDistance > LEFT_THRESHOLD) {   // LEFT_THRESHOLD is determined through trail and error method
    turnLeft();
  }
  else if (frontDistance > FRONT_THRESHOLD) {    // FRONT_THRESHOLD is determined through trail and error method
    moveForward();
  }
  else {
    turnRight();
  }

  delay(50);
}

// -------------------------
// Sensor Functions
// -------------------------

long readDistance(int trigPin, int echoPin) {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  return duration / 58;
}

long readLeftSensor() {
  return readDistance(LEFT_TRIG, LEFT_ECHO);
}

long readFrontSensor() {
  return readDistance(FRONT_TRIG, FRONT_ECHO);
}

// -------------------------
// Motor Functions
// -------------------------

void moveForward() {
  leftMotor.run(FORWARD);
  rightMotor.run(FORWARD);
}

void turnLeft() {
  leftMotor.run(BACKWARD);
  rightMotor.run(FORWARD);
}

void turnRight() {
  leftMotor.run(FORWARD);
  rightMotor.run(BACKWARD);
}

void stopMotors() {
  leftMotor.run(RELEASE);
  rightMotor.run(RELEASE);
}
