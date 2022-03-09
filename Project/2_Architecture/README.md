ULTRASONIC SENSOR:
Ultrasonic sensor is an obstacle sensing module is used to
sense the object such that, accidents due to unwanted
parking of the vehicles and collision with trees and other
objects especially during the night time could be avoided.


# System Architecture

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


# Block diagram
- Whole system

![block](https://user-images.githubusercontent.com/46949702/155814140-f1c7612a-4997-4c87-a570-729e363f97e5.png)


# Flowchart 
-	Obstacle Sensing module

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
