#include "Gyro.h"
#include "clicli.h"

Gyro mygyro(1);
clicli mycli(mygyro);  


void setup() {
  // put your setup code here, to run once:
  mygyro.begin(115200, -16696, -17902, -671, -25, -4, 3);
  mycli.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(mygyro.getrollang());
  mycli.run();
  //Serial.println(millis()/1000);
}
