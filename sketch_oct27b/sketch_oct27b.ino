int pinNum = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinNum, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinNum, LOW);
  delay(1000);
}