#include <Servo.h>

Servo servo;  // create servo object to control a servo

const int SERVO_PIN = 4;

int servoAngle = 0;

void setup() {
  Serial.begin(115200);
  servo.attach(SERVO_PIN);  // attaches the servo on pin 9 to the servo objectư
  servo.write(0);   // rotate slowly servo to 0 degrees immediately
}

void loop() {
    for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
        servo.write(posDegrees);
        delay(20);
    }

    servoAngle = servo.read();

    Serial.print("Angulo do Servo: ");
    Serial.println(servoAngle);
    delay(1000);

    for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
        servo.write(posDegrees);
        delay(20);
    }

    servoAngle = servo.read();
    Serial.print("Angulo do Servo: ");
    Serial.println(servoAngle);
    delay(1000);
}