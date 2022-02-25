# Embedded Controller for Vehicle In-Front Obstacle Detection and Cabin Safety Alert System

## Abstract
- The following system monitors the level of the toxic gases such as CO, LPG and alcohol inside the 
vehicle and provides alert information in the form of alarm during the critical situations. And also 
send SMS to the authorized person through the GSM.
- An IR Sensor is used to detect the static obstacle in front of the vehicle and the vehicle gets stopped if 
any obstacle is detected. This may avoid accidents due to collision of vehicles with any static 
obstacles.

## Description
An embedded system designed to make the journey of the passengers inside a vehicle safe and secure 
with various recently found safety and security measures. 

## Requirements
- High Level Requirements

|High Level Requirement ID| Description|
|--------|-------------------------------------------|
|HLR_1| Sense toxic gases like CO, LPG, alcohol within cabinet area.|
|HLR_2| Obstacle sensing.|
|HLR_3| SMS sending.|
|HLR_4| Maintenance|

- Low Level Requirements

|Low Level Requirement ID| Description|
|--------|-------------------------------------------|
|LLR_1.1| Detect if any toxic gases are present in cabinet using MQ-7 gas sensor.|
|LLR_1.2| Inform microcontroller if the level of toxic gases (CO>20ppm, LPG>1000ppm, alcohol) increases.|
|LLR_1.3| Alert driver and passengers with an alarm.| 
|LLR_1.4| Send message to authorized person through GSM.|
|LLR_2.1| Detect static object within distance of 3ft from vehicle using ultrasonic sensors.|
|LLR_2.2| Send information of sensor to board.|
|LLR_2.3| Alert driver if any object is present.|
|LLR_3.1| Use of GSM interface to send SMS to authorized person.|
|LLR_4.1| Check health of sensors.|
|LLR_4.2| Check battery state.|

2.4 Block diagram
• Whole system
•	The Gas Sensing Module
 
Fig 2.2. Block diagram of gas sensing module
•	. Obstacle Sensing Module
                     
Fig 2.3. Block diagram of obstacle sensing module

2.6 Flowchart 
•	Obstacle Sensing module
 
Fig 2.8. Flowchart of obstacle sensing module
•	Gas sensing module
 
Fig 2.9. Flowchart of gas sensing module
•	Overall System
 
Fig 2.10. Flowchart of overall system

2.7	Test Cases
1)	When the vehicle starts, it will check for gas sensor and then display “VEHICLE ATMOSPHERE” , “NO OBSTACLE” and “IGNITION: ON”.
2)	When the vehicle is running and if toxic gas level increase, then it displays “VEHICLE ATMOSPHERE ALERT”, “NO OBSTACLE” and “IGNITION: ON”. Sends SMS 
3)	When the vehicle is at rest and if toxic gas level increase, then it displays “VEHICLE ATMOSPHERE ALERT”, “NO OBSTACLE” and “IGNITION: OFF”. Sends SMS 
4)	When the vehicle is at rest and if static object is detected then it displays “VEHICLE ATMOSPHERE”, “OBSTACLE ALERT” and “IGNITION: OFF”. Sends SMS 
5)	When the vehicle is running and if static object is detected then it displays “VEHICLE ATMOSPHERE”, “OBSTACLE ALERT” and “IGNITION: ON”. Sends SMS 

2.8 Application
•	Automobile industry.
