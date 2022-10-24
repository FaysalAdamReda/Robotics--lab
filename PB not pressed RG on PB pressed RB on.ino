//PB not pressed RG on PB pressed RB on

void setup() {
// put your setup code here, to run once:
// start serial connection
Serial.begin(9600);
//configure pin 2 as an input and enable the internal pull-up resistor
pinMode(2, INPUT_PULLUP);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
// read the pushbutton value into the a variable
int sensorVal = digitalRead(2);
//print out the value of the pushbutton
Serial.println(sensorVal);
if (sensorVal) {
digitalWrite(7,1);
digitalWrite(6,1);
digitalWrite(5,0);
}
 else{
digitalWrite(7,1);
digitalWrite(6,0);
digitalWrite(5,1);   
 }
Serial.print("PB value = ");
delay(1);
}
