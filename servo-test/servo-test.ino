#include <Servo.h> 
Servo servo;

void setup() {
  servo.attach(2);
}

void loop() {
  delay(5000);

  for(int deg = 0; deg <= 90; deg++) {
    servo.write(deg);
    delay(20);
  }

  delay(5000);

  for(int deg = 90; deg >= 0; deg--) {
    servo.write(deg);
    delay(20);
  }
}