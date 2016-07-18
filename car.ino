//void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  // pinMode(pinNo., INPUT/OUTPUT) takes a pin and 
  // specifies it as input or output, respectively.
  //pinMode(13,OUTPUT);//RIGHT (WHITE)
  //pinMode(12,OUTPUT);//FORWARD
  //pinMode(11,OUTPUT);//REVERSE
  //pinMode(10,OUTPUT);//LEFT (YELLOW)
  
  //pinMode(2,OUTPUT);//output for sensor
  //pinMode(4,INPUT);//input for sensor
  
//}


// for the H-Bridge, OUT1 should connect to the blue wire of the 
// front of the car, OUT2 should connect to the brown wire next to it.
// OUT3 will connect to the rear motor's blue wire, and the remaining
// OUT4 connects to the rear wire's brown wire.


//void loop() {
  // check for data from a HC-SR04
    // check if data meets certain parameters (less than x distance
    // away or something.
      // if so, set boolean for direction the HC-SR04 is facing to true  
  
  //digitalWrite(10,LOW);
  //digitalWrite(13,HIGH); //RIGHT
  //digitalWrite(12,HIGH); //FORWARD
  //delay(5560);

  
  //digitalWrite(13,LOW);
  //digitalWrite(12,LOW);
  //digitalWrite(11,HIGH);//REVERSE
  //delay(966);

  //digitalWrite(11,LOW);
  //digitalWrite(10,HIGH); //LEFT
  //digitalWrite(12,HIGH); //FORWARD
  //delay(2966);
  
  //digitalWrite(12,LOW);
  //delay(5000);

  //digitalWrite(2,HIGH)
  //Serial.print(digitalRead(4));
  // digitalWrite(pin,HIGH/LOW) is command to send stuff
  //Serial.println("");
  //delay(966);
//}



// stuff I stole


int trigPin = 2;    //Trig - green Jumper
int echoPin = 4;    //Echo - yellow Jumper
long duration, cm, inches;
 
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop()
{
 
 
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // convert the time into a distance
  cm = (duration/2) / 29.1;
  inches = (duration/2) / 74; 
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(250);
}
