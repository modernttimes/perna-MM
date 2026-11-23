
#include <Servo.h>
#include <VARSTEP_ultrasonic.h>

 Servo servo_perna;

 #define trigger_pin 13
 #define echo_pin 12

double distance_cm, distance_m;
VARSTEP_ultrasonic my_HCSR04(trigger_pin, echo_pin);


void setup() {
   Serial.begin(9600);

   Servo_perna.attach(11);

   Servo_perna.write(0);

}

void loop() {
  
 distance_cm = my_HCSR04.distance_cm();

for (pos = 0 ; pos <= 35 ; pos++) {
  servo_perna.write(pos);
delay(500);
}

for (pos = 35 ; pos >= 0 ; pos++) {
  servo_perna.write(pos);
delay(500);
}







}