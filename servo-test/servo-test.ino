#include <Servo.h> 
Servo servo;

int startpoint = 15;
int endpoint = 130;
int servo_step = 2;

void setup() {
  servo.attach(4, 544, 2400);
}

void loop() {

  for(int deg = 90; deg <= endpoint; deg += servo_step) {
    servo.write(deg);
  }

  delay(5000);

  for(int deg = endpoint; deg >= startpoint; deg -= servo_step) {
    servo.write(deg);
  }
  delay(5000);

  for(int deg = startpoint; deg <= 90; deg += servo_step) {
    servo.write(deg);
  }
}