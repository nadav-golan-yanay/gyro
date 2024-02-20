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
