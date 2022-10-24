// Pot voltage level with 5 LED
int sensorPin = A0;
int sensorValue = 0;
int led11 = 11;
int led10 = 10;
int led9 = 9;

void setup() { 
// put your setup code here, to run once:
Serial.begin(9600);
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

if (x <=2){
  digitalWrite(led11, 255); 
  digitalWrite(led10, 255);  
  digitalWrite(led9, 255);
}
else{
  digitalWrite(led11, 0);
  digitalWrite(led10, 0);  
  digitalWrite(led9, 0);
}
}
