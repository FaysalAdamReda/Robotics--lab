// Light chaser Program 1
int led13 = 13; //first we should define all pins 
int led12 = 12;
int led11 = 11;
int led10 = 10;
int led9 = 9;

void setup() {
// put your setup code here, to run once:
// secondly we should deside if the are output or input and of course led's are output  
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);

}

void loop() {
// put your main code here, to run repeatedly:
// here we will make the first pin high and the second pin high and so on.  
digitalWrite(led9,HIGH);
delay(100);
digitalWrite(led10,HIGH);
delay(100);
digitalWrite(led11,HIGH);
delay(100);
digitalWrite(led12,HIGH);
delay(100);
digitalWrite(led13,HIGH);
delay(100);
digitalWrite(led9,LOW);
delay(100);
digitalWrite(led10,LOW);
delay(100);
digitalWrite(led11,LOW);
delay(100);
digitalWrite(led12,LOW);
delay(100);
digitalWrite(led13,LOW);
delay(100);
}