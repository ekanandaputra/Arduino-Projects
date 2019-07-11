#include <SoftwareSerial.h>
#include "EmonLib.h"

EnergyMonitor emon1;

double Irms;
int pin_sct = A2;

void setup() {
  Serial.begin(9600);
  emon1.current(pin_sct, 1);
}

void loop() {
  Irms = emon1.calcIrms(1480);
  Serial.println("Arus yang Terbaca " + Irms);
  delay(1000);
}
