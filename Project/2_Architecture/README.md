
# System Architecture

![block](https://user-images.githubusercontent.com/46949702/155814140-f1c7612a-4997-4c87-a570-729e363f97e5.png)

## Block Diagram
![M2 2](https://user-images.githubusercontent.com/46949702/157332075-b235ae94-8f5d-4c69-b255-bb55de919645.png)

## Component Description

1) Microcontroller Board (Arduino Mega): 

 - It is a microcontroller board based on ATmega2560. It is used as a main block which controls all operations of the system.
 - It has 54 digital input/output pins, 16 analog pins, 4 UARTs, 16MhZ crystal oscillator, USB connection, and power jack.
  
2) Gas Sensor(MQ-7):
 - MQ-7 is a highly sensitive gas sensor which is capable of detecting 10 to 10,000 ppm carbon monoxide concentrations in the air. 
 - It is used for gas leakage detection in home and industry. It is used to detect Alcohol, Benzine, CH4, Hexane, LPG, CO. 
  
3) Ultrasonic Distance Sensor:
 - Ultrasonic sensor is an obstacle sensing module used to sense the object such that, accidents due to unwanted parking of the vehicles and collision with trees and other objects especially during the night time could be avoided. In our project we have used two sensors one mounted in front of vehical and the other on the back of vehicle.
 - It uses a transducer to send and receive ultrasonic pulses that relay back information about object's proximity.
  
3) Digital Sensor(Push Button):
- It is a simple switch mechanism to control some process.
- It is used for detection of lock status of seatbelt. 
  
4) Actuators:

- We have used DC motor and servo motors as actuators where DC motor is used for motoring operation of fan which act as an ignition system of vehicle. While servo motor is used for movement of car window in direction up and down.
  
5) Binary Actuator:

- Relay is used to trigger external interrupts which is produced when gas concentration detected is greater than 700 ppm.(asssumed)
  
6) LCD Display: 

 - It is used to give alert information of gas sensor.
  
7) Buzzer:
- It is an audio signaling device.
- It is used to alert of object collision through audio signal.
  
8) Keypad:

 - It is used to take input form passengers to operate car window movement like up or down.

## Behavioural Diagram
- Obstacle detection and safety System:

![m2 1](https://user-images.githubusercontent.com/46949702/157332069-4b8046ae-0a36-4878-85c2-99bdadcb89a9.png)

- Obstacle Dectection Sub-System:

![m2-fw](https://user-images.githubusercontent.com/46949702/157332094-77e426ce-808d-4e10-a0fc-08249dbc3a32.png)

- Seatbelt Detection Sub-System:

![M233](https://user-images.githubusercontent.com/46949702/157332096-0ac1302f-24b1-42fa-aa17-9f48379f1600.png)

- Car window Sub-System:

![m2 4](https://user-images.githubusercontent.com/46949702/157332081-41a5f10b-1587-48e8-bf7a-a08f9d0b87e0.png)

- Cabinet Sub-System:

![M244](https://user-images.githubusercontent.com/46949702/157332099-eaee183c-46eb-4a09-b1f4-0a1fc3305ca2.png)

## Structural Diagram

- Seatbelt Detection Sub-System:

![M2 3](https://user-images.githubusercontent.com/46949702/157332079-37533393-e614-45a6-8b2a-fc235306a44a.png)

- Obstacle Dectection Sub-System:

![m2 5](https://user-images.githubusercontent.com/46949702/157332083-93fb23ac-7898-4fd5-bbe3-af5790cfa0b7.png)

- Cabinet Sub-System:

![m2 6](https://user-images.githubusercontent.com/46949702/157332086-75a3ba61-bcd2-47d9-aac1-43112130b453.png)

## Component Diagram

- Seatbelt Detection Sub-System:

![ma 9](https://user-images.githubusercontent.com/46949702/157332103-f2bb2c82-c118-427a-a701-77b8d1bc24d5.png)

- Obstacle Avoidance Sub-System:

![m2 8](https://user-images.githubusercontent.com/46949702/157332092-76731c8f-e521-4042-839a-fdcf7db38a4c.png)

- Cabinet Sub-System:

![m2 7](https://user-images.githubusercontent.com/46949702/157332090-f04b1a5c-878f-426f-a9a9-bf5f75917812.png)






