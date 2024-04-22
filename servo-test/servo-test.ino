#include <ServoEasing.hpp> 
ServoEasing servo;

int SERVO_PIN = 4;
int startpoint = 100;
int endpoint = 180;
int speed = 60;

void setup() {
  servo.attach(SERVO_PIN, endpoint, 544, 2400);
  servo.setEasingType(EASE_CUBIC_IN_OUT);
}

void loop() {
  pinMode(SERVO_PIN, INPUT);
  delay(5000);
  pinMode(SERVO_PIN, OUTPUT);
  servo.easeTo(startpoint, speed);
  pinMode(SERVO_PIN, INPUT);
  delay(5000);
  pinMode(SERVO_PIN, OUTPUT);
  servo.easeTo(endpoint, speed);
}