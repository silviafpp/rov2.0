#include <Wire.h>
#include <L3G.h>

L3G gyro;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  if (!gyro.init()) {
    Serial.println("Failed to detect and initialize gyro!");
    while (1);
  }
  gyro.enableDefault();
}

void loop() {
  gyro.read();
  Serial.print("Gyro X: ");
  Serial.print(gyro.g.x);
  Serial.print("  Gyro Y: ");
  Serial.print(gyro.g.y);
  Serial.print("  Gyro Z: ");
  Serial.println(gyro.g.z);
  delay(1000);
}