#define LEDPin 9

#define potPin A0

void setup() {
  // put your setup code here, to run once:

  // initalize as output 
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // read the voltage at the pot pin and convert to value between 0 and 255
  int reading = map(analogRead(potPin), 0, 1023, 0, 255);
  // send PNW output to led
  analogWrite(LEDPin, reading); 

  delay(10);
}
