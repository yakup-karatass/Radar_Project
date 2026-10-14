#include <HCSR04.h>

UltraSonicDistanceSensor distanceSensor(13,12);

void setup() {
Serial.begin(9600);



}


void loop() {
Serial.print("Mesafe : ");

Serial.print(distanceSensor.measureDistanceCm());
Serial.println("cm");
delay(1000);


}