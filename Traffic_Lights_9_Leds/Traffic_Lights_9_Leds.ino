void setup() {
  // configure the output pins
  for (int i = 2; i <= 10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  delay(6000);

  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
  delay(1500);

  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  delay(6000);

  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  delay(1500);

  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(6000);

  digitalWrite(9, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  delay(1500);
}
