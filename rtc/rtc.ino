#include <Wire.h>
#include "RTClib.h"

RTC_DS3231 rtc;

void setup () {
  Serial.begin(9600);
  Wire.begin();
  rtc.begin();

  //uncomment the line below to set the time and date
  rtc.adjust(DateTime(2023, 3, 3, 0, 2, 0));
}

void loop () {
  DateTime now = rtc.now();

  Serial.print(now.day(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.year(), DEC);
  Serial.print(' ');
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.print(now.second(), DEC);
  Serial.println();

  delay(1000);
}
