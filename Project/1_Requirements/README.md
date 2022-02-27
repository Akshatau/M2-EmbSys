# Vehicle In-Front Obstacle Detection and Cabin Safety Alert System

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

|High Level Reuirement ID|Low Level Requirement ID| Description|
|--|--------|-------------------------------------------|
|HLR_1| | Sense toxic gases like CO, LPG, alcohol within cabinet area.|
||LLR_1.1| Detect if any toxic gases are present in cabinet using MQ-7 gas sensor.|
||LLR_1.2| Inform microcontroller if the level of toxic gases (CO>20ppm, LPG>1000ppm, alcohol) increases.|
|| LLR_1.3| Alert driver and passengers with an alarm.| 
||LLR_1.4| Send message to authorized person through GSM.|
|HLR_2| | Obstacle sensing.|
||LLR_2.1| Detect static object within distance of 3ft from vehicle using ultrasonic sensors.|
||LLR_2.2| Send information of sensor to board.|
||LLR_2.3| Alert driver if any object is present.|
|HLR_3| | SMS sending.|
||LLR_3.1| Use of GSM interface to send SMS to authorized person.|
|HLR_4| | Maintenance|
||LLR_4.1| Check health of sensors.|
||LLR_4.2| Check battery state.|
