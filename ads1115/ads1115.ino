#include <ADS1X15.h>

ADS1115 ADS(0x48);

void setup()
{
  Serial.begin(9600);
  Serial.println(__FILE__);
  Serial.print("ADS1X15_LIB_VERSION: ");
  Serial.println(ADS1X15_LIB_VERSION);

  ADS.begin();
  ADS.setGain(0);  // 6.144 volt
  Serial.println("Voltage");
}

void loop()
{
  int16_t A0 = ADS.readADC(0);
  int16_t A1 = ADS.readADC(1);
  int16_t A2 = ADS.readADC(2);
  int16_t A3 = ADS.readADC(3);

  Serial.print("A0: ");
  Serial.print(ADS.toVoltage(A0), 3);
  Serial.print(" A1: ");
  Serial.print(ADS.toVoltage(A1), 3);
  Serial.print(" A2: ");
  Serial.print(ADS.toVoltage(A2), 3);
  Serial.print(" A3: ");
  Serial.println(ADS.toVoltage(A3), 3);

  delay(500);
}