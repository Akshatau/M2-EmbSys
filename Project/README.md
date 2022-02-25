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

## Block diagram
- Whole system

![block_diagram_whole_sys](https://user-images.githubusercontent.com/46949702/155806418-a6bd4479-7bb0-45f2-a124-f2b2f7500aeb.png)

- The Gas Sensing Module

![Gas sensing module](https://user-images.githubusercontent.com/46949702/155806423-935341cb-aa86-41c6-a100-4f08ede8ed8a.png)

- Obstacle Sensing Module

![obstacle sensing module](https://user-images.githubusercontent.com/46949702/155806408-08bc994a-a9ae-4b01-b773-b02f75d37424.png)
 
- IR sensor module

![IR SENSOR](https://user-images.githubusercontent.com/46949702/155806428-b971d741-a9d2-4112-b91a-1b896e51ef49.png)

- GSM Module

![gsm](https://user-images.githubusercontent.com/46949702/155806426-621388bd-1ad2-4619-820b-9b6fc7175085.png)

## Flowchart 
-	Obstacle Sensing module
![FLWCRT_OBSTACLE](https://user-images.githubusercontent.com/46949702/155805648-0ab96117-6333-4b44-8635-e82805be51f1.png)

-	Gas sensing module
![FLWCRT_GAS](https://user-images.githubusercontent.com/46949702/155805608-c9367cde-d360-49bf-b17f-9c76676f4976.png)
 
-	Overall System
 ![FLWCRT_OVERALL](https://user-images.githubusercontent.com/46949702/155805650-ad780bd1-e0bc-4c98-8595-b138703d381f.png)


## Test Cases
1)	When the vehicle starts, it will check for gas sensor and then display “VEHICLE ATMOSPHERE” , “NO OBSTACLE” and “IGNITION: ON”.
2)	When the vehicle is running and if toxic gas level increase, then it displays “VEHICLE ATMOSPHERE ALERT”, “NO OBSTACLE” and “IGNITION: ON”. Sends SMS 
3)	When the vehicle is at rest and if toxic gas level increase, then it displays “VEHICLE ATMOSPHERE ALERT”, “NO OBSTACLE” and “IGNITION: OFF”. Sends SMS 
4)	When the vehicle is at rest and if static object is detected then it displays “VEHICLE ATMOSPHERE”, “OBSTACLE ALERT” and “IGNITION: OFF”. Sends SMS 
5)	When the vehicle is running and if static object is detected then it displays “VEHICLE ATMOSPHERE”, “OBSTACLE ALERT” and “IGNITION: ON”. Sends SMS 

## Application
•	Automobile industry.
