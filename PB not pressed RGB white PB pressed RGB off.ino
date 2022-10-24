//PB not pressed RGB white PB pressed RGB off

void setup() {
serial.begin(9600);
// put your setup code here, to run once:
// initialize the LEd pin as an output:
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
// initialize the pushbutton pin as an input:
pinMode(2, INPUT_PULLUP);
}

void loop() {
// put your main code here, to run repeatedly:
// read the state of the pushbutton value:
int sensor = digitalRead(2);
digitalWrite(7, !sensor);
digitalWrite(6, !sensor);
digitalWrite(5, !sensor);

serial.println(sensor);
Serial.print("PB value = ");
delay(1);

}
