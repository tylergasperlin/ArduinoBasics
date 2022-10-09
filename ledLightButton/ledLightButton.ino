#define LEDPin 8 
#define ButtonPin 7

void setup() {
  // led pin
  pinMode(LEDPin, OUTPUT);
  // button pin
  pinMode(ButtonPin, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(ButtonPin)== LOW) {
    // turn LED on
    digitalWrite(LEDPin, HIGH); 
  } else {
    // turn led off
    digitalWrite(LEDPin, LOW);
  }
}
