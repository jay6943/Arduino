void setup() {
  Serial.begin(9600);
}

void loop() {
  int val;
  int dat;

  val = analogRead(0);
  dat = (125 * val) >> 8;
  Serial.print("Teperature -> ");
  Serial.print(dat);
  Serial.println("C");
  delay(1000);
}
