const int motorPin = 8;
const int buttonPin = 2;
int buttonState = 0;

void setup() {

  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);

}

void loop() {
 
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(motorPin, HIGH);
  }
  else {
    digitalWrite(motorPin, LOW);
  }

}
