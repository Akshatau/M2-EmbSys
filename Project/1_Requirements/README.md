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
Warning alerts and alarms are other security systems incorporated in the cars and trucks to alert us about various factors like exceeding speed limit or smoke alarms. These are designed to make the passengers aware of crossing the limitations which is important in most of the time and in most cases. In the same way here an embedded system has been designed to make the journey of the passengers inside a vehicle safe and secure with various recently found safety and security measures. 

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


