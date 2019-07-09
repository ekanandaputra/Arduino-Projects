#include <SoftwareSerial.h>

SoftwareSerial data_serial(3,4); //RX, TX
String dt[10];
String dataIn;
int i=0;

void setup() {
  Serial.begin(9600);
  data_serial.begin(9600);
}

void loop() {
    dataIn="";
    while(data_serial.available()>0){
      delay(10);
      char c = data_serial.read();
      dataIn = dataIn + c;    
    }
    if(dataIn.length()>0){
      Serial.println(dataIn);
    }
}
