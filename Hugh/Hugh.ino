// Hugh's Arduino


const int dcm = 9;  // this is the motor. 
const int timer = 9000; // this is how much time for delay. 
int var = 0; // placeholder
int go = 9;


void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
  pinMode (dcm, OUTPUT);

}

void loop() {

  var = analogRead(0); //var is equal to whatever the sensor reads. 
  Serial.println(var);
 // var = map(var, 0, 900, 0, 255);
  float x = 0;
  if (var < go){
    x = 1;
  } else {}

  if (x == 1){
    digitalWrite(dcm, HIGH);
    delay(timer);
    digitalWrite(dcm, LOW);
    x = 0;
  } else {}

  
  // put your main code here, to run repeatedly:

  

}
