const int MOTOR_PIN = 2;

void setup() {
  Serial.begin(115200);
  while (!Serial)
    delay(10); // will pause Zero, Leonardo, etc until serial console opens

  pinMode(MOTOR_PIN, OUTPUT);
}

void loop() {
  Serial.print("Motor ON");
  digitalWrite(MOTOR_PIN, HIGH);

  delay(5000);

  Serial.print("Motor OFF");
  digitalWrite(MOTOR_PIN, LOW);
  delay(5000);
}
