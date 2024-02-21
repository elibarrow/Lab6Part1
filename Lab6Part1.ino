/*
This is a demostration of the capabilities of Git and GitHub.
*/


const int trigPin = 2;  
const int echoPin = 3; 

float duration, distance; 








void setup() {
  // put your setup code here, to run once:

	pinMode(trigPin, OUTPUT);  
	pinMode(echoPin, INPUT);  
	Serial.begin(9600);  





}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(trigPin, LOW);  
	delayMicroseconds(2);  
	digitalWrite(trigPin, HIGH);  
	delayMicroseconds(10);  
	digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration*.0343)/2;


  Serial.print("Distance: ");  
	Serial.println(distance);  
	delay(100); 










}
