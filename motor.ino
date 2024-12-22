#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
  analogWrite(9,255);
  analogWrite(10,100);
  analogWrite(5,255);
  analogWrite(6,100);
}

void _loop() {
}

void loop() {
  _loop();
}