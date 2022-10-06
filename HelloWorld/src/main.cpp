#include <Arduino.h>
unsigned long times;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n\nStudent Name: Precious Solomon");
  Serial.println("\n\nStudent NUMBER: 000813595");
  Serial.printf("The ESP8266 chip ID as a 32-bit integer:\t%08X\n", ESP.getChipId());
  Serial.printf("The flash chip ID as a 32-bit integer:\t\t%08X\n", ESP.getFlashChipId());

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  times = millis();
  Serial.println(times); 
  delay(2000);  
}

