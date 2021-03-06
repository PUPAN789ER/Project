#include <Arduino.h>

#include <SoftwareSerial.h>

SoftwareSerial swSer(D1, D2, false, 128); //Define hardware connections
String rs232input1;
void setup()
{
  Serial.begin(115200); //Initialize hardware serial with baudrate of 115200
  swSer.begin(9600);    //Initialize software serial with baudrate of 115200

  Serial.println("\nSoftware serial test started");

  for (char ch = ' '; ch <= 'z'; ch++)
  { //send serially a to z on software serial
    swSer.write(ch);
  }
  swSer.println("");
}

void loop()
{

  if (swSer.available() > 0)
  {
    rs232input1 = swSer.readStringUntil('\n');
    //Serial.println(rs232input1);
    int strindex = rs232input1.indexOf('=');
    int endindex = rs232input1.indexOf('(');
    rs232input1 = rs232input1.substring(strindex + 1, endindex);
    Serial.println(rs232input1);
    //swSer.write(Serial.read());
    
  }

  // while (swSer.available() > 0)
  // {
  //   Serial.write(swSer.read());
  //   yield();
  // }
  // while (Serial.available() > 0)
  // {
  //   swSer.write(Serial.read());
  //   yield();
  // }
}