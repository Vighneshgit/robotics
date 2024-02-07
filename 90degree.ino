#include <Servo.h>

Servo servo1; // Define servos
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(2); // Attach servos to pins
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
}

void loop() {
  // Set servos to 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  
  delay(1000); // Wait for a second (1000 milliseconds)
}
