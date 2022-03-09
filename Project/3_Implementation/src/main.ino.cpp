#include <Arduino.h>
#line 1 "H:\\main\\main.ino"


#include<Servo.h>
#include <Keypad.h>
#include<LiquidCrystal.h>
void function();
//void obstacle(int trigPin1,int echoPin1,int buzzPin1);
//#define D7 6
//#define D6 8
//#define D5 9
//#define D4 10
//#define gas_sensor_input A1 

int LED_PIN1 =26,BUTTON_PIN1 =24;
int LED_PIN2 =A9,BUTTON_PIN2 =A8;
int LED_PIN3 =8,BUTTON_PIN3 =10;
int LED_PIN4 =A7,BUTTON_PIN4 =A6;
const int ledPin=7;
int RS=16, EN=17,D7=21, D6=20,D5=19,D4=18,gas_sensor_input=A1   ;
int fan=2;
const int relayPin=1;
const int relay_potentiometer=3;

int wheelpin= 50;

Servo servo1,servo2,servo3,servo4;
LiquidCrystal lcd(RS,EN,D4,D5,D6,D7);

const byte ROWS=1;
const byte COLS=2;
char Keys[ROWS][COLS]={{'U','D'}};
byte rowsPin1[ROWS]={15};
byte colsPin1[COLS]={0,14};
byte rowsPin2[ROWS]={A12};
byte colsPin2[COLS]={A10,A11};
byte rowsPin3[ROWS]={4};
byte colsPin3[COLS]={5,6};
byte rowsPin4[ROWS]={A2};
byte colsPin4[COLS]={A3,A4};
volatile byte pos1=servo1.read();
volatile byte pos2=servo2.read();
volatile byte pos3=servo3.read();
volatile byte pos4=servo4.read();

Keypad customKeypad1=Keypad(makeKeymap(Keys),rowsPin1,colsPin1,ROWS,COLS);
Keypad customKeypad2=Keypad(makeKeymap(Keys),rowsPin2,colsPin2,ROWS,COLS);
Keypad customKeypad3=Keypad(makeKeymap(Keys),rowsPin3,colsPin3,ROWS,COLS);
Keypad customKeypad4=Keypad(makeKeymap(Keys),rowsPin4,colsPin4,ROWS,COLS);

// Define pins for ultrasonic and buzzer
int const trigPin1 = A15,trigPin2 = 13;
int const echoPin1 = A14,echoPin2 = 12;
int const buzzPin1 = A13,buzzPin2 = 11;

#line 55 "H:\\main\\main.ino"
void setup();
#line 91 "H:\\main\\main.ino"
void loop();
#line 55 "H:\\main\\main.ino"
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(ledPin,OUTPUT);
servo1.attach(22);
servo2.attach(53);
servo3.attach(9);
servo4.attach(A0);

pinMode(LED_PIN1,OUTPUT);
pinMode(BUTTON_PIN1, INPUT);
pinMode(LED_PIN2,OUTPUT);
pinMode(BUTTON_PIN2, INPUT);
pinMode(LED_PIN3,OUTPUT);
pinMode(BUTTON_PIN3, INPUT);
pinMode(LED_PIN4,OUTPUT);
pinMode(BUTTON_PIN4, INPUT);

pinMode( wheelpin,OUTPUT);

pinMode(fan,OUTPUT);
pinMode(relayPin,OUTPUT);
pinMode(relay_potentiometer,OUTPUT);

pinMode(trigPin1, OUTPUT); // trig pin will have pulses output
pinMode(echoPin1, INPUT); // echo pin should be input to get pulse width
pinMode(buzzPin1, OUTPUT); // buzz pin is output to control buzzering

pinMode(trigPin2, OUTPUT); // trig pin will have pulses output
pinMode(echoPin2, INPUT); // echo pin should be input to get pulse width
pinMode(buzzPin2, OUTPUT); // buzz pin is output to control buzzering
attachInterrupt(digitalPinToInterrupt(3),function,HIGH);

}


void loop() {
  // put your main code here, to run repeatedly:
  while(1){
int gas_sensor=analogRead(A1);
 digitalWrite(ledPin,HIGH);
     //delay(15);

if(digitalRead(BUTTON_PIN1)== HIGH)
  digitalWrite(LED_PIN1,HIGH);
else
  digitalWrite(LED_PIN1,HIGH);
  
if(digitalRead(BUTTON_PIN2)== HIGH)
   digitalWrite(LED_PIN2,HIGH);
else
  digitalWrite(LED_PIN2,HIGH);
  
  if(digitalRead(BUTTON_PIN3)== HIGH)
  digitalWrite(LED_PIN3,HIGH);
else
  digitalWrite(LED_PIN3,HIGH);
  
if(digitalRead(BUTTON_PIN4)== HIGH)
  digitalWrite(LED_PIN4,HIGH);
else
  digitalWrite(LED_PIN4,HIGH);

char customKey1=customKeypad1.getKey();
  if(customKey1=='D' && pos1<=180)
  { 
    pos1=pos1+10;
    servo1.write(pos1);
    delay(15);  
  }
 if (customKey1=='U' && pos1>=0 )
  {   pos1=pos1-10;
    servo1.write(pos1);
    delay(15);  
  }


  char customKey2=customKeypad2.getKey();
  if(customKey2=='D' && pos2<=180)
  { 
    pos2=pos2+10;
    servo2.write(pos2);
    delay(15);  
  }
 if (customKey2=='U' && pos2>=0 )
  {   pos2=pos2-10;
    servo2.write(pos2);
    delay(15);  
  }

  char customKey3=customKeypad3.getKey();
  if(customKey3=='U' && pos3<=180)
  { 
    pos3=pos3+10;
    servo3.write(pos3);
    delay(15);  
  }
 if (customKey3=='D' && pos3>=0 )
  {   pos3=pos3-10;
    servo3.write(pos3);
    delay(15);  
  }

  char customKey4=customKeypad4.getKey();
  if(customKey4=='D' && pos4<=180)
  { 
   pos4=pos4+10;
    servo4.write(pos4);
    delay(15);  
  }
 if (customKey4=='U' && pos4>=0 )
  {   pos4=pos4-10;
    servo4.write(pos4);
    delay(15);  
  }



 lcd.setCursor(0,0);
  lcd.print("Gas Level: ");
  lcd.print(gas_sensor);
  lcd.setCursor(0,1);
  if(gas_sensor<400){
    lcd.print("SAFE   ");
    digitalWrite(relayPin,LOW);
    digitalWrite(relay_potentiometer,LOW);
  }
  if(gas_sensor>=400 && gas_sensor<700){
     lcd.print("ATTENTION   ");
    analogWrite(fan,255);
    digitalWrite(relayPin,HIGH);
    digitalWrite(relay_potentiometer,LOW);
  }
   if(gas_sensor>=700){
    lcd.print("DANGER   ");
    analogWrite(fan,255);
    delay(1000);
    digitalWrite(relayPin,HIGH);
    digitalWrite(relay_potentiometer,HIGH);
  }


  
int duration1, distance1;
// Output pulse with 1ms width on trigPin
digitalWrite(trigPin1, HIGH);
delay(1);
digitalWrite(trigPin1, LOW);
// Measure the pulse input in echo pin
duration1 = pulseIn(echoPin1, HIGH);
// Distance is half the duration devided by 29.1 (from datasheet)
distance1 = (duration1/2) / 29.1;
// if distance less than 0.5 meter and more than 0 (0 or less means over range)

// Duration will be the input pulse width and distance will be the distance to the obstacle in centimeters
int duration2, distance2;
// Output pulse with 1ms width on trigPin
digitalWrite(trigPin2, HIGH);
delay(1);
digitalWrite(trigPin2, LOW);
// Measure the pulse input in echo pin
duration2 = pulseIn(echoPin2, HIGH);
// Distance is half the duration devided by 29.1 (from datasheet)
distance2 = (duration2/2) / 29.1;

    if ((distance1 <= 3 && distance1 >= 0)||(distance2 <= 3 && distance2 >= 0)) {
    analogWrite(wheelpin,0);
    delay(60);}
    else if (distance1 <= 50 && distance1 > 3) {
    // Buzz
    digitalWrite(buzzPin1, HIGH);
     //analogWrite(wheelpin,100);
     delay(60);
            }
    else 
    {
    // Don't buzz
    digitalWrite(buzzPin1, LOW);
     //analogWrite(wheelpin,255);
     delay(60);
    }
    // Waiting 60 ms won't hurt any one
delay(60);
  

   
// if distance less than 0.5 meter and more than 0 (0 or less means over range)
   
    if (distance2 <= 50 && distance2 >3) {
    // Buzz
    digitalWrite(buzzPin2, HIGH);
     //analogWrite(wheelpin,100);
     delay(60);
     }else {
    // Don't buzz
    digitalWrite(buzzPin2, LOW);
    // analogWrite(wheelpin,255);
     delay(60);
    }
    

    if (distance2 > 3 && distance1 > 3){
        analogWrite(wheelpin,255);
  } 
}
}
 void function()
{
  //int pos=servo.read();
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  digitalWrite(ledPin,HIGH);
     //delay(15);
     // break;
} 

