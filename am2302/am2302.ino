#include <DHT.h>

#define DHTPIN 8
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(t) || isnan(h)) {
    Serial.println("Failed to read from DHT");
  }
  else {
    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print(" %");
    Serial.print("\t");
    Serial.print("Temperature: ");
    Serial.print(t);
    Serial.print(" *C");
    Serial.print("\n");
  }
  delay(1000);
}
