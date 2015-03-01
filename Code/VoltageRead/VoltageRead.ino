int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int dt = 100;
boolean run = false;

void setup() {
  Serial.begin(9600);
//  Serial.print("Delay = ");
//  Serial.println(dt);
  while(Serial.available() == 0) {}
}

// the loop routine runs over and over again forever:
void loop() {
  int sensorValue = analogRead(A0);
  Serial.print(sensorValue*5.0/1023);
  Serial.println(",");
  delay(dt);
}
