# gyro

This library provide a simple code for Gyro MPU6050.

**The library is for arduino only!**

## MPU6050:

![a014b023-fd83-4ce7-bfb9-290405aad3fb](https://www.voltaat.com/cdn/shop/products/voltaat-3-axis-gyroscope-accelerometer-module-mpu-6050-3607196106854.jpg?v=1628483786)

**How to connect it to arduino:**

The mpu6050 needs 5V, and works with I2C serial communication protocol.
Conections:
Gyro | Arduino
-----|------
GND  | GND
VCC  | 5V
SCL  | A5
SDA  | A4

You may want the I2C scanner from the wire.h examples to cheak that the conections are correct and the gyro is intact.

## Code:

**`begin(double bd, float XA, float YA, float ZA, float XG, float YG, float ZG)`**
- bd: Serial Monitor  Baudrate.
- XA: offset for **X** axis acceleration
- YA: offset for **Y** axis acceleration
- ZA: offset for **Z** axis acceleration
- XG: offset for **X** axis gyro
- YG: offset for **Y** axis gyro
- ZG: offset for **Z** axis gyro

This function **must** be called from `void setup()`.
At first **set all of the offsets to 0**, then run the function `callibrate()` and follow its instruction.


**`callibrate()`**
This function callibrate the mpu6050.
At the end of the function the following line will be printed in the Serial Monitor: "Copy the following line to the gyro begin line"
After this line six numbers should be printed in the Serial Monitor, copy them to the begin function in the `void setup()`.
This shuold callibrate the mpu6050.
