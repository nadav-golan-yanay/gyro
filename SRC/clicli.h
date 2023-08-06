#ifndef CLICLI_H
#define CLICLI_H
#include "Gyro.h"

 class clicli {

  public:
   clicli(Gyro &gyro) ;
   void begin();   //must be called from  void setup()
   void run();   //must be called from  void loop()

  private:
   Gyro &mygyro;
   int number;

 };
#endif 