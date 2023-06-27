int buttonPin = 8;
int LED = 13;
int buttonState;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(buttonPin, INPUT);
}
void loop(){
  digitalRead(buttonPin);
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(13,HIGH);
    }
  else {
    digitalWrite(13,LOW);
    }
}