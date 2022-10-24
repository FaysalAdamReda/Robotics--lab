// Pot voltage level with 5 LED
int sensorPin = A0;
int sensorValue = 0;
int led13 = 13;
int led12 = 12;
int led11 = 11;
int led10 = 10;
int led9 = 9;

void setup() { 
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(led13,OUTPUT);
pinMode(led12,OUTPUT);
pinMode(led11,OUTPUT);
pinMode(led10,OUTPUT);
pinMode(led9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analoRead(sensorPin);
int y = sensorValue;
float x = y/(1023/5.0);
Serial.print("Analog = ");
Serial.print(sensorValue);
Serial.print(", Voltage = ");
Serial.println(x);

if (x >=1){
  digitalWrite(led13, HIGH); 
}
else{
  digitalWrite(led13, LOW);
}
if (x >=2){
  digitalWrite(led12, HIGH); 
}
else{
  digitalWrite(led12, LOW);
}
if (x >=3){
  digitalWrite(led11, HIGH); 
}
else{
  digitalWrite(led11, LOW);
}
if (x >=4){
  digitalWrite(led10, HIGH); 
}
else{
  digitalWrite(led10, LOW);
}
if (x >=5){
  digitalWrite(led9, HIGH); 
}
else{
  digitalWrite(led9, LOW);
}

}
