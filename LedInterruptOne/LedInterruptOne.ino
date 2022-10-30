/*
  Arduino Bootcamp
  - LED Reaction Game - Interrupt Demo - Part 1
  This circuit demonstrates how to setup and the execution of an interrupt.
  When a switch that is connected to interrupt pin 2 is pressed, it fires and interrupt which toggles the LED on pin 13
  by: Lee Assam
*/
const int ledPin = 13;
const int inputPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  //Attach the interrupt
  pinMode(inputPin, INPUT_PULLUP);

  // either 0 or 1 for arduino uno - this varies based on the board used
  // attachInterrupt takes in the digitalPinToInterrupt
  // 0 = pin 2 arduino uno
  // 1 = pin 3 arduino uno 
  // arduino uno lets you run interrupts on pin 2 or 3 only


  // When signal falls from high to low then fire the function
  attachInterrupt(0, buttonPressed, FALLING);
  Serial.begin(9600);
}

void loop()
{ //nothing to perform here
}

void buttonPressed()
{
  Serial.println("Interrupt Occurred");
  if (digitalRead(ledPin))
    digitalWrite(ledPin, LOW);
  else
    digitalWrite(ledPin, HIGH);
}