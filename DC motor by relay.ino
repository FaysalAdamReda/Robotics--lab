// Arduino controlling DC motor by a relay
int buttonPin = 2;
int relayPin = 12;
int state = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT);
pinMode(relayPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
state = digitalRead(buttonPin);
if(state==HIGH){
digitalWrite(relayPin, HIGH);
} else {
digitalWrite(relayPin, LOW);
}
delay(100);
}
