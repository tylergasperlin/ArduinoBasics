#define LEDPin 8 
#define ButtonPin 7

  //output indicates that a signal (or data in other cases) is sent from the system to the LED
  //input would indicate that a signal (button press) would be received by the system from the device (LED in our case)

void setup() {
  // led pin
  pinMode(LEDPin, OUTPUT);
  // button pin
  pinMode(ButtonPin, INPUT); 
}

void loop() {
  // if buttonPin's state is LOW it means the button is pressed
  if(digitalRead(ButtonPin)== LOW) {
    // turn LED on
    digitalWrite(LEDPin, HIGH); 
  } else {
    // turn led off
    digitalWrite(LEDPin, LOW);
  }
}
