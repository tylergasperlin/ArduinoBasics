
#define LEDPin 8

void setup() {
  // put your setup code here, to run once:
  //output indicates that a signal (or data in other cases) is sent from the system to the LED
  //input would indicate that a signal (data) would be received by the system from the device (LED in our case)
  // and I/O (input/output) device is a piece of hardware used by a human to communicate with a computer
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // turn led on
  digitalWrite(LEDPin, HIGH);

  // wait
  delay(1000);

  //turn led off
  digitalWrite(LEDPin, LOW);

  // wait one second
  delay(1000);
}
