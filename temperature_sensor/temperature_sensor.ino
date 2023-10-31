// initialize analog pin 0 for LM35 temperature sensor
int potPin = 0;

void setup() {
  // set baud rate at”9600”
  Serial.begin(9600);
}

void loop() {
  // define variable
  int val;
  // define variable
  int dat;

  // read the analog value of the sensor and assign it to val
  val=analogRead(0);
  // temperature calculation formula
  dat=(125 * val) >> 8;
  // output and display characters beginning with Tep
  Serial.print("Tep:");
  // output and display value of dat
  Serial.print(dat);
  // display “C” characters
  Serial.println("C");
  // wait for 0.5 second
  delay(500);
}
