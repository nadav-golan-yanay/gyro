#ifndef GYRO_H
#define GYRO_H
 class Gyro {

  public:
   Gyro(int x);
   void begin(double bd, float XA, float YA, float ZA, float XG, float YG, float ZG);   //must be called from  void setup()
   int getrollang();
   int getpitchang();
   int getyewang();
   /*int getpitchacc();*/
   void callibrate();

  private:

 };
#endif 