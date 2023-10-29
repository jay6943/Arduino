int pin12 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin12, OUTPUT);
  Serial.begin(9600);
  Serial.println("Serial Port Connented");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("Light On");
  digitalWrite(pin12, HIGH);
  delay(1000);

  Serial.println("Light Off");
  digitalWrite(pin12, LOW);
  delay(1000);
}
