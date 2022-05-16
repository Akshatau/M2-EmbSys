# Vehicle Obstacle Detection and Cabinet Safety Alert System

## Abstract
 Vehicles are important in today’s fast-paced society. Acquiring a vehicle nowadays is considered a necessity, compared to the past where it was considered a luxury. As more and more vehicles are produced to meet the increasing demands of people and businesses from all corners of the world. Here comes the necessity to provide more and more safety and security features to them. Hence this project aims to design an embedded system for vehicle cabin safety and security by modifying and integrating the existing modules. This monitors the level of the toxic gases such as CO, LPG and alcohol inside the vehicle and provides alert information in the form of alarm during the critical situations. An ultrasonic distance sensor is used to detect the static obstacle in front of the vehicle and the vehicle gets stopped if any obstacle is detected. This may avoid accidents due to collision of vehicles with any static obstacles. A digital sensor is used to detect the status of seatbelt lock so as to prevent the occupant colliding with interior parts of vehicle.

## Motivation
An embedded system designed to make the journey of the passengers inside a vehicle safe and secure 
with various recently found safety and security measures. 

## Defining Features
- Provide safe driving by allowing seatbelts on during driving.
- Driver and passenger experience should be made comfortable inside vehicle by eliminating toxic gases if present.
- Avoid static object collision while driving the vehicle.
- In reverse motoring mode, vehicle should not bump to objects.
- Easy control of car window glass.

## Research/State of Art
Warning alerts and alarms are other security systems incorporated in the cars and trucks to alert us about various factors like exceeding speed limit or smoke alarms. These are designed to make the passengers aware of crossing the limitations which is important in most of the time and in most cases. In the same way here, an embedded system has been designed to make the journey of the passengers inside a vehicle safe and secure with various recently found safety and security measures. 

## Description
Our system is divided into the following subsystems:
- Bonnet system:

  This system focuses to sense any static objects in front of the vehicle to avoid collisions. It can sense slow-moving or stationary objects when driving at low speeds. Controls are provided even to brake so as to avoid obstacles.Ultrasonic distance sensor is used for this purpose and placed in front of car bonnet.

- Seatbelt System :

  This system checks if the occupant has worn seatbelts through seatbelt lock. There is a digital sensor placed to detect the status of lock whether it is locked or unlock. The state "lock" means seatbelt is worn by occupant and state "unlock" means seatbelt is not worn by occupant.

- Engine System:

  This system include controls to lock iginition engine when a static oject or very low speed object is detected very close to vehicle. DC motors are used as car engine and control signals to lock is received from ultrasonic sensors which are placed infront of bonnet and trunk. Basically, it disconnets car system from ignition whenever an object is very close to vehicle.

- Car Cabinet System:

  The following system monitors the level of the toxic gases such as CO, LPG and alcohol inside the vehicle cabinet and provides alert information in the form of alarm signal during the critical situations. Gas sensors like MQ-3, MQ-10 used for the purpose of toxic gas detection are replaced by potentiometer. Alert message is displayed on LCD display. Interrupt signals gets triggered when high concentration of toxic gases is detected inside cabinet which directs to open all windows of car so as to escape toxic gases from car environment. Window controls is managed by servo motors. When rising level of toxic gases is found then fan is switched ON by DC motor.

- Trunk system:

  This system uses ultrasonic Sensor to detect the static obstacle in front of the vehicle's trunk and the vehicle gets stopped if any obstacle is detected. This may avoid accidents due to collision of vehicles with any static obstacles. Buzzer is used to alert driver. In critical condition vehicle is also stopped.


## Requirements
- High Level Requirements

|High Level Requirement ID| Description| Type|
|--------|-------------------------------------------|--------|
|HLR_1| Sense toxic gases like CO, LPG, alcohol within cabinet area.| Technical|
|HLR_2| Obstacle sensing and detection.|Technical|
|HLR_3| Seatbelt Safety assurance.|Technical|
|HLR_4| Contol of car window movements.|Technical|

- Low Level Requirements

|High Level Requirement ID|Low Level Requirement ID| Description|Type|
|------|--------|-------------------------------------------|----|
|HLR_1|| Sense toxic gases like CO, LPG, alcohol within cabinet area.|Technical|
||LLR_1.2| Check if the concentration of toxic gases (CO>20ppm, LPG>1000ppm, alcohol) increases.|Technical|
||LLR_1.3| Alert driver and passengers through display screen by mentioning state of the cabinet.| Technical|
||LLR_1.4| Activate fan in cabinent when mid level of toxic gas is detected|Technical|
||LLR_1.5| Raise windows of car down  high level of toxic gas is detected|Technical|
||LLR_1.6| Blink LED when fan is switched ON.|Technical|

|High Level Requirement ID|Low Level Requirement ID| Description|Type|
|------|--------|-------------------------------------------|----|
|HLR_2|| Obstacle sensing and detection.|Technical|
||LLR_2.1| Detect any static object found within distance of 50 meters from vehicle's bonnet using ultrasonic sensors.|Technical|
||LLR_2.2| Use buzzer to alert if any object is found within 50 meters from bonnet system|Technical|
||LLR_2.3| Alert through buzzer if any object is found within 50 meters from trunk system|Technical|
||LLR_2.4| When the object is at 3 metres away from car, signals are sent to turn off ignition. |Technical|
||LLR_2.5| Calculation of distance using ultrasonic sensor placed on bonnet.|Technical|
||LLR_2.6| Calculation of distance using ultrasonic sensor placed on trunk.|Technical|

|High Level Requirement ID|Low Level Requirement ID| Description|Type|
|------|--------|-------------------------------------------|----|
|HLR_3|| Seatbelt Safety assurance.|Technical|
||LLR_3.1| Check for seatbelt lock status using digital sensor.|Technical|
||LLR_3.2| Turn LED to ON state if seat belt unlocked |Technical|

||HLR_4| Controlling car window movements.|Technical|
||LLR_4.1| Operate window to move the glass upwards using keypad.|Technical|
||LLR_4.2| Operate window to move the glass Downwards using keypad.|Technical|

## SWOT Analysis
![M2_SWOT](https://user-images.githubusercontent.com/46949702/157337692-02dee8c5-c612-48d4-aa80-e8e48774d72d.png)

## 5W'S 1H
![ms_wh](https://user-images.githubusercontent.com/46949702/157337689-f42f3340-6c37-4215-b2a5-80dde8ea8590.png)




# System Architecture

![block](https://user-images.githubusercontent.com/46949702/155814140-f1c7612a-4997-4c87-a570-729e363f97e5.png)

## Block Diagram
![M2 2](https://user-images.githubusercontent.com/46949702/157332075-b235ae94-8f5d-4c69-b255-bb55de919645.png)

## Component Description

- Microcontroller Board (Arduino Mega): 

  It is a microcontroller board based on ATmega2560. It is used as a main block of my system which controls all operations through out the system.
  
- Gas Sensor(MQ3):

  It is used for gas leakage detection in home and industry. It is used to detect Alcohol, Benzine, CH4, Hexane, LPG, CO. 
  
- Ultrasonic Distance Sensor:

  Ultrasonic sensor is an obstacle sensing module is used to sense the object such that, accidents due to unwanted parking of the vehicles and collision with trees and other objects especially during the night time could be avoided. In our project we have used two sensors one mounted in front of vehical and other at the bach of vehicle.
  
- Digital Sensor:

  This is a replacement for push buttons to detect status of seatbelt lock.
  
- Actuators:

  We have used DC motor and servo motors as actuators where DC motor is used for motoring operation of fan and act as ignition system of vehicle. While servo motor is used for movement of car window in direction up and down.
  
- Binary Actuator:

  Relay is used for this purpose to trigger external interrupts. Interrupts is produced when gas concentration detected is greater than 700 ppm(asssumed) to turn ON fan through DC motor.
  
- LCD Display: 

  It is used to give alert information of gas sensor.
  
- Buzzer:

  It is used to alert of object collision through audio signal.
  
- Keypad:

  It is used to take input for car window movement like up or down.

## Behavioural Diagram
- Obstacle detection and safety System:

![m2 1](https://user-images.githubusercontent.com/46949702/157332069-4b8046ae-0a36-4878-85c2-99bdadcb89a9.png)

- Obstacle Dectection Sub-System:

![m2-fw](https://user-images.githubusercontent.com/46949702/157332094-77e426ce-808d-4e10-a0fc-08249dbc3a32.png)

- Seatbelt Sub-System:

![M233](https://user-images.githubusercontent.com/46949702/157332096-0ac1302f-24b1-42fa-aa17-9f48379f1600.png)

- Car window Sub-System:

![m2 4](https://user-images.githubusercontent.com/46949702/157332081-41a5f10b-1587-48e8-bf7a-a08f9d0b87e0.png)

- Cabinet Sub-System:

![M244](https://user-images.githubusercontent.com/46949702/157332099-eaee183c-46eb-4a09-b1f4-0a1fc3305ca2.png)

## Structural Diagram

- Seatbelt Sub-System:

![M2 3](https://user-images.githubusercontent.com/46949702/157332079-37533393-e614-45a6-8b2a-fc235306a44a.png)

- Obstacle Dectection Sub-System:

![m2 5](https://user-images.githubusercontent.com/46949702/157332083-93fb23ac-7898-4fd5-bbe3-af5790cfa0b7.png)

- Cabinet Sub-System:

![m2 6](https://user-images.githubusercontent.com/46949702/157332086-75a3ba61-bcd2-47d9-aac1-43112130b453.png)

## Component Diagram

- Seatbelt Sub-System:

![ma 9](https://user-images.githubusercontent.com/46949702/157332103-f2bb2c82-c118-427a-a701-77b8d1bc24d5.png)

- Obstacle Dectection Sub-System:

![m2 8](https://user-images.githubusercontent.com/46949702/157332092-76731c8f-e521-4042-839a-fdcf7db38a4c.png)

- Cabinet Sub-System:

![m2 7](https://user-images.githubusercontent.com/46949702/157332090-f04b1a5c-878f-426f-a9a9-bf5f75917812.png)







![FLWCRT_OBSTACLE](https://user-images.githubusercontent.com/46949702/155805648-0ab96117-6333-4b44-8635-e82805be51f1.png)
#
# Behavioural Diagram
-	Gas sensing module

![FLWCRT_GAS](https://user-images.githubusercontent.com/46949702/155805608-c9367cde-d360-49bf-b17f-9c76676f4976.png)
# 

# Flowchart 
-	Overall System

![FLWCRT_OVERALL](https://user-images.githubusercontent.com/46949702/155805650-ad780bd1-e0bc-4c98-8595-b138703d381f.png)
#
## High Level Test PLan

|Test ID| Description| Input | Expected Output| Actual Output| Status|
|--|-----|-----|--------|-------|-----|
| 01 | Check Front Right Seatbelt lock status | Push button1 pressed | LED1 OFF | LED1 OFF| SUCCESS|
|02|Check Front Right Seatbelt unlock status | Push button1 should not be pressed | LED1 ON| LED1 ON| SUCCESS|
| 03 | Check Front Left Seatbelt lock status | Push button2 pressed | LED2 OFF | LED2 OFF| SUCCESS|
|04|Check Front Left Seatbelt unlock status | Push button2 should not be pressed | LED2 ON | LED2 ON |SUCCESS|
| 05 | Check Back Right Seatbelt lock status | Push button3 pressed | LED3 OFF | LED3 OFF| SUCCESS|
| 06| Check Back Right Seatbelt unlock status | Push button3 should not be pressed | LED3 ON | LED3 ON|SUCCESS|
| 07| Check Back Left Seatbelt lock status | Push button4 pressed | LED4 OFF | LED4 OFF| SUCCESS|
| 08 | Check Back Left Seatbelt unlock status |Push button4 should not be pressed | LED4 ON | LED4 ON|SUCCESS|


|Test ID| Description| Input | Expected Output| Actual Output| Status|
|--|-----|-----|--------|-------|-----|
|  01| Ultrasonic sensor 1 | Voltage source = 4V| No beep sound | No beep sound |SUCCESS|
| 02 | Ultrasonic sensor 1 | Voltage source = 3V| No beep sound | No beep sound |SUCCESS|
| 03 | Ultrasonic sensor 1 | Voltage source = 2.5V| No beep sound | No beep sound |SUCCESS|
| 04 | Ultrasonic sensor 1 | Voltage source = 1V| No beep sound | No beep sound |SUCCESS|
| 05 | Ultrasonic sensor 1 | Voltage source = 0.9V| No beep sound | No beep sound |SUCCESS|
| 06 | Ultrasonic sensor 1 | Voltage source = 0.7V| No beep sound | No beep sound |SUCCESS|
| 07 | Ultrasonic sensor 1 | Voltage source = 0.55| No beep sound | No beep sound |SUCCESS|
| 08 | Ultrasonic sensor 1 | Voltage source = 0.44V| Beep sound | Beep sound |SUCCESS|
|09  | Ultrasonic sensor 1 | Voltage source = 0.04V| Beep sound | Beep sound |SUCCESS|
| 10 | Ultrasonic sensor 1 | Voltage source = 0.38V| Beep sound | Beep sound |SUCCESS|
|  11| Ultrasonic sensor 1 | Voltage source = 0.22V| Beep sound | Beep sound |SUCCESS|

|Test ID| Description| Input | Expected Output| Actual Output| Status|
|--|-----|-----|--------|-------|-----|
|01  | Ultrasonic sensor 2 | Voltage source = 4.5V| No beep sound | No beep sound |SUCCESS|
|  02| Ultrasonic sensor 2 | Voltage source = 3.1V| No beep sound | No beep sound |SUCCESS|
|03  | Ultrasonic sensor 2 | Voltage source = 2.5V| No beep sound | No beep sound |SUCCESS|
|04  | Ultrasonic sensor 2 | Voltage source = 1.1V| No beep sound | No beep sound |SUCCESS|
| 05 | Ultrasonic sensor 2 | Voltage source = 0.98V| No beep sound | No beep sound |SUCCESS|
|  06| Ultrasonic sensor 2 | Voltage source = 0.78V| No beep sound | No beep sound |SUCCESS|
|07  | Ultrasonic sensor 2 | Voltage source = 0.515| No beep sound | No beep sound |SUCCESS|
|08  | Ultrasonic sensor 2 | Voltage source = 0.414V| Beep sound | Beep sound |SUCCESS|
|09  | Ultrasonic sensor 2 | Voltage source = 0.104V| Beep sound | Beep sound |SUCCESS|
|10  | Ultrasonic sensor 2 | Voltage source = 0.318V| Beep sound | Beep sound |SUCCESS|
|11  | Ultrasonic sensor 2 | Voltage source = 0.212V| Beep sound | Beep sound |SUCCESS|

|Test ID| Description| Input | Expected Output| Actual Output| Status|
|--|-----|-----|--------|-------|-----|
|01  | Gas sensor  | Potentiometer = 110 |  SAFE| SAFE |SUCCESS|
|02  | Gas sensor  | Potentiometer = 220 | SAFE | SAFE |SUCCESS|
|03  | Gas sensor  | Potentiometer = 330| SAFE |SAFE  |SUCCESS|
|04  | Gas sensor  | Potentiometer = 440 | ATTENTION | ATTENTION  |SUCCESS|
|05  | Gas sensor  | Potentiometer = 550| ATTENTION  |ATTENTION   |SUCCESS|
|06  | Gas sensor  | Potentiometer = 660|  ATTENTION |ATTENTION   |SUCCESS|
|07  | Gas sensor  | Potentiometer = 770| DANGER |  DANGER|SUCCESS|
|08  | Gas sensor  | Potentiometer = 880| DANGER |DANGER  |SUCCESS|
|09  | Gas sensor  | Potentiometer = 990|  DANGER|DANGER  |SUCCESS|

## Low Level Test PLan

|Test ID| Description| Input | Expected Output| Actual Output| Status|
|--|-----|-----|--------|-------|-----|
|01  | Servo motor1 Keypad Commands |"U"| Servo motor knob should move upward| Servo knob turned up| SUCCESS|
|02  | Servo motor1 Keypad Commands |"D"| Servo motor knob should move downward| Servo knob turned down|SUCCESS|
|03  | Servo motor2 Keypad Commands |"U"| Servo motor knob should move upward| Servo knob turned up| SUCCESS|
|04  | Servo motor2 Keypad Commands |"D"| Servo motor knob should move downward| Servo knob turned down|SUCCESS|
|05  | Servo motor3 Keypad Commands |"U"| Servo motor knob should move upward| Servo knob turned up| SUCCESS|
|06  | Servo motor3 Keypad Commands |"D"| Servo motor knob should move downward| Servo knob turned down|SUCCESS|
|07  | Servo motor4 Keypad Commands |"U"| Servo motor knob should move upward| Servo knob turned up| SUCCESS|
|08  | Servo motor4 Keypad Commands |"D"| Servo motor knob should move downward| Servo knob turned down|SUCCESS|

|Test ID| Description| Input | Expected Output| Actual Output| Status|
|--|-----|-----|--------|-------|-----|
| 01 | FAN   | Potentiometer = 110 |  DC motor should not run| DC motor should not run |SUCCESS|
| 02 | FAN   | Potentiometer = 290 |  DC motor should not run| DC motor should not run |SUCCESS|
| 03 | FAN   | Potentiometer = 370 |  DC motor should not run| DC motor should not run |SUCCESS|
| 04 | FAN   | Potentiometer = 450 |  DC motor should run| DC motor should run |SUCCESS|
| 05 | FAN   | Potentiometer = 520 |  DC motor should run| DC motor should run |SUCCESS|
| 06 | FAN   | Potentiometer = 700 |  DC motor should run| DC motor should run |SUCCESS|
| 07 | FAN   | Potentiometer = 850 |  DC motor should run| DC motor should run |SUCCESS|

|Test ID| Description| Input | Expected Output| Actual Output| Status|
|--|-----|-----|--------|-------|-----|
|01  | Engine Check | Voltage source = 4V| DC motor should run | DC motor should run  |SUCCESS|
|02  | Engine Check | Voltage source = 5V| DC motor should run | DC motor should run  |SUCCESS|
|03  | Engine Check | Voltage source = 3V| DC motor should run | DC motor should run  |SUCCESS|
|04  | Engine Check | Voltage source = 0.5V| DC motor should run | DC motor should run  |SUCCESS|
|05  | Engine Check | Voltage source = 0.42V| DC motor should run | DC motor should run  |SUCCESS|
|06  | Engine Check | Voltage source = 0.35V| DC motor should run | DC motor should run  |SUCCESS|
|07  | Engine Check | Voltage source = 0.28V| DC motor should not run | DC motor should not run  |SUCCESS|
|08  | Engine Check | Voltage source = 0.15V| DC motor should not run | DC motor should not run  |SUCCESS|
|09  | Engine Check | Voltage source = 0.1V|DC motor should not run | DC motor should not run  |SUCCESS|

# Applications
- Automobile industry
- Factories for leakager gas detection
- Handicappers can have obstacle detection module
- Seatbelt lock detection can be extensively used in four wheeler vehicles.

# Simulation Circuit

![circcuit](https://user-images.githubusercontent.com/46949702/157373231-a43519d6-8bb6-48e5-8075-8218c1ecb9cc.png)



# Simulation Output

# SeatBelt Detection Sub-System

- When occupant in front left seat does not lock seatbelt.Then his seat associated LED blinks
![s1](https://user-images.githubusercontent.com/46949702/157369534-9b3d317f-f0d8-4d93-9774-9e701f1e35f4.png)

- When occupant in front right seat does not lock seatbelt.Then his seat associated LED blinks.
![s2](https://user-images.githubusercontent.com/46949702/157369538-cf1a77b4-27ca-417b-9e55-38c184f62dfc.png)

- When occupant in back left seat does not lock seatbelt.Then his seat associated LED blinks.
![s3](https://user-images.githubusercontent.com/46949702/157369540-be1b0ac9-3c36-4ec0-8f9b-f984d6046609.png)

- When occupant in back right seat does not lock seatbelt.Then his seat associated LED blinks.
![s4](https://user-images.githubusercontent.com/46949702/157369544-05721b33-cf17-4b9e-bde1-8bc2f691ac67.png)

# Cabinet Safety System

When level of gases present inside cabinet is within range (0-400)ppm.
OBSERVATION: 

- Display message "SAFE"
- Fan is turned OFF.
- Window position(servo motors) is uneffected.
![s5_gass](https://user-images.githubusercontent.com/46949702/157369548-4528f5d3-5c88-4ce0-8d64-556e5cf06389.png)

#
When level of gases present inside cabinet is within range (400-700)ppm. 
OBSERVATION: 

- Display message "ATTENTION"
- Fan is turned ON.
- Window position(servo motors) is uneffected.
![s6](https://user-images.githubusercontent.com/46949702/157369550-bc610899-918c-4252-abfe-ae0885977af4.png)
#
When level of gases present inside cabinet is greater than 700 ppm. 
OBSERVATION: 

- Display message "DANGER"
- Fan is turned ON.
- Window position(servo motors) is effected. They are opened completely.
![s7](https://user-images.githubusercontent.com/46949702/157369554-7bb2b041-b652-4278-8475-cfd96662b577.png)

#
When "U" button of keypad is pressed.
OBSERVATION:

- Servo motor knob if lifted towards up.
![S8](https://user-images.githubusercontent.com/46949702/157369556-97a64bea-e635-49d5-8e92-9560be47b0e8.png)
