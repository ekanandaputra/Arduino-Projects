#include <SoftwareSerial.h>
#include "EmonLib.h"

EnergyMonitor emon1;

void setup() {
  Serial.begin(9600);
  emon1.voltage(0, 570, 1.7); //(pin, faktor kalibrasi, fasa)
}

void loop() {
  emon1.calcVI(20,1);     
  float tegangan   = emon1.Vrms;
  Serial.println(tegangan);
  delay(1000);
}
