//RGB color selector

void setup() {
// put your setup code here, to run once:
// analog pins for the RGB LED
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
analogWrite(11,49);
analogWrite(10,243);
analogWrite(9,137);
// the analog function gives it selector option for a mix of colours
}
