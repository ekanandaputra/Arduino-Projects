#include <SoftwareSerial.h>

SoftwareSerial data_serial(2,3); //RX, TX

void setup() {
  Serial.begin(9600);
  data_serial.begin(9600);
}

void loop() {
  String data = "";
  while(Serial.available()>0){
    delay(10);
    char c = Serial.read();
    data = data + c;
  }
  if (data.length() > 0){
    Serial.println(data);
    data_serial.println(data);  
  }
}
