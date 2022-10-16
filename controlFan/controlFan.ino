#define motorPin 11

void setup() {
  // put your setup code here, to run once:

  pinMode(motorPin, OUTPUT);

  // initially turn off the fan
  analogWrite(motorPin, 0);
  // to communicate with arduino monitor so we can send messages 
  // 9600 is the board rate that we will communicate with monitor at
  Serial.begin(9600);
  // display instructions
  Serial.println("Enter a number between 0 and 9:  ");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {

    // get input from the user
    char ch = Serial.read();

    if(ch >= '0' && ch <= '9') {
      // convert character to int
      int speed = ch - '0';
      // set the fan speed

      // map will convert the speed from 0-9 entered in the monitor to the range accepted by the motor
      analogWrite(motorPin, map(speed, 0, 9, 0, 255));
    }
  }
}
