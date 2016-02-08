// Melissa's Arduino
//this is the arduino with the servo arm swing thing.
#include <Servo.h>


const int servo = 9;
int var = 0; // placeholder
int go = 1;

Servo myservo;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  myservo.attach(servo);



}

void loop() {
  // put your main code here, to run repeatedly:
  var = analogRead(0);
  Serial.println(var);
  float pos = 0;
  var = map(var, 0, 900, 0, 180);
  if (var > go) {
    pos = 60;
    delay(3);
  } else {
    pos = 0;
  }
  myservo.write(pos);


}
