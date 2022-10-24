// Pull-DOWN resistor

int buttonPin = 3;
int builtInLed = 13;

void setup() {
pinMode(buttonPin,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
int buttonState = digitalRead(buttonPin); 
//read the state of the button input
if (buttonState == HIGH) { 
// if the button is pressed it is high state
digitalWrite(13,LOW);
} else {
digitalWrite(13,HIGH);
Serial.println(buttonState);
}
}