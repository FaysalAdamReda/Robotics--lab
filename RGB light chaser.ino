// RGB Light chaser 

int led11 = 11; //first we should define all pins 
int led10 = 10;
int led9 = 9;

void setup() {
// put your setup code here, to run once:
// secondly we should deside if the are output or input and of course led's are output  
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);

}

void loop() {
// put your main code here, to run repeatedly:
/*the idea of the light chaser is to have each color light up in a row with 
little delay which gives the impression of a three colour RGB light chase
*/ 

digitalWrite(11,255);
delay(100);
digitalWrite(10,0);
delay(100);
digitalWrite(9,0);
delay(100);
digitalWrite(11,0);
delay(100);
digitalWrite(10,255);
delay(100);
digitalWrite(9,0);
delay(100);
digitalWrite(11,0);
delay(100);
digitalWrite(10,0);
delay(100);
digitalWrite(9,255);
delay(100);

}