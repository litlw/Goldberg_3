// Melissa's Arduino
//this is the arduino with the servo arm swing thing. 
#include <Servo.h>


const int servo = 9;
const int sensor = 10;
int var = 0; // placeholder
int go = 30;

Servo myservo;


void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
myservo.attach(servo);
pinMode(sensor, INPUT);

  

}

void loop() {
  // put your main code here, to run repeatedly:
  var = analogRead(sensor);
  serial.println(var);
  var = map(var, 0, 900, 0, 180);
if (var > go){
  myservo.write (180);
}
  

}
