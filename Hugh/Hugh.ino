// Hugh's Arduino

const int ps = 10; // this is the pressure sensor
const int dcm = 9;  // this is the motor. 
const int timer = 300; // this is how much time for delay. 
int var = 0; // placeholder
int go = 30;


void setup() {
  // put your setup code here, to run once:
serial.Begin(9600);
  pinMode (ps, INPUT);
  pinMode (dcm, OUTPUT);

}

void loop() {

  var = analogRead(ps); //var is equal to whatever the sensor reads. 
  serial.println(var);
  vor = map(var, 0, 900, 0, 255);
  float x = 0;
  if (var > go){
    x = 1;
  } else {}

  if (x == 1){
    digitalWrite(dcm, HIGH);
    delay(timer);
    digitalWrite(dcm, LOW);
    x = 0;
  } else {}m

  
  // put your main code here, to run repeatedly:

  

}
