#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  static uint32_t previous_time = 0;
  if(millis() - previous_time >= 1000){
    Serial.println("test");
    previous_time = millis();
  }
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}