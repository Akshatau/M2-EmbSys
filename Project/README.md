Table of Contents
|Serial No.| Chapter Name|
|------|-----------|
| 1. |   Vehicle In-Front Obstacle Detection and Cabin Safety Alert System  |
|1.1  |    Abstract |
|  1.2|    Scope  |
|1.3  |   Requirements  |
|1.3.1 | High Level Requirements |
|1.3.2 | Low Level Requirements |
|1.4  |  Block diagram   |
|1.4.1 |Overall system|
|1.4.2| The Gas Sensing Module|
|1.4.3| Obstacle Sensing Module|
|1.4.4 |IR sensor module|
|1.4.5| GSM Module|
| 1.5 |    Components |
| 1.6| Architecture |
|1.6.1  |   Structural Diagram  |
|  1.6.2| Behavioural Diagram|
|1.6.2.1|	Obstacle Sensing module|
|1.6.2.2	|Gas sensing module|
| 1.6.3 | Flowchart|
| 1.7 |  Test Cases |
| 1.8 | Application


# 1. Vehicle In-Front Obstacle Detection and Cabin Safety Alert System

## 1.1 Abstract
- The following system monitors the level of the toxic gases such as CO, LPG and alcohol inside the 
vehicle and provides alert information in the form of alarm during the critical situations. And also 
send SMS to the authorized person through the GSM.
- An IR Sensor is used to detect the static obstacle in front of the vehicle and the vehicle gets stopped if 
any obstacle is detected. This may avoid accidents due to collision of vehicles with any static 
obstacles.

## 1.2 Scope 
An embedded system designed to make the journey of the passengers inside a vehicle safe and secure 
with various recently found safety and security measures. 

## 1.3 Requirements

### 1.3.1 High Level Requirements

|High Level Requirement ID| Description|
|--------|-------------------------------------------|
|HLR_1| Sense toxic gases like CO, LPG, alcohol within cabinet area.|
|HLR_2| Obstacle sensing.|
|HLR_3| SMS sending.|
|HLR_4| Maintenance|

### 1.3.2 Low Level Requirements

|High Level Reuirement ID|Low Level Requirement ID| Description|
|--|--------|-------------------------------------------|
|HLR_1|LLR_1.1| Detect if any toxic gases are present in cabinet using MQ-7 gas sensor.|
|HLR_1|LLR_1.2| Inform microcontroller if the level of toxic gases (CO>20ppm, LPG>1000ppm, alcohol) increases.|
|HLR_1|LLR_1.3| Alert driver and passengers with an alarm.| 
|HLR_1|LLR_1.4| Send message to authorized person through GSM.|
|HLR_2|LLR_2.1| Detect static object within distance of 3ft from vehicle using ultrasonic sensors.|
|HLR_2|LLR_2.2| Send information of sensor to board.|
|HLR_2|LLR_2.3| Alert driver if any object is present.|
|HLR_3|LLR_3.1| Use of GSM interface to send SMS to authorized person.|
|HLR_4|LLR_4.1| Check health of sensors.|
|HLR_4|LLR_4.2| Check battery state.|

## 1.4 Block diagram
### 1.4.1 Overall system

![block](https://user-images.githubusercontent.com/46949702/155814140-f1c7612a-4997-4c87-a570-729e363f97e5.png)

### 1.4.2 The Gas Sensing Module

![Gas sensing module](https://user-images.githubusercontent.com/46949702/155806423-935341cb-aa86-41c6-a100-4f08ede8ed8a.png)

### 1.4.3 Obstacle Sensing Module

![obstacle sensing module](https://user-images.githubusercontent.com/46949702/155806408-08bc994a-a9ae-4b01-b773-b02f75d37424.png)
### 1.4.4 IR sensor module

![IR SENSOR](https://user-images.githubusercontent.com/46949702/155806428-b971d741-a9d2-4112-b91a-1b896e51ef49.png)
### 1.4.5 GSM Module

![gsm](https://user-images.githubusercontent.com/46949702/155806426-621388bd-1ad2-4619-820b-9b6fc7175085.png)
#

## 1.5 Components
1) MQ-7- Gas Sensor:
MQ-7 is a highly sensitive gas sensor which is capable of detecting 10 to 10,000 ppm carbon monoxide concentrations in the air. 
- Voltage: 5 V
- Current: 150 mA
- Concentration detection: 10 to 10,000 ppm
- Temperature: -10 to +50 ° C

2) IR sensor:
The IR sensor module consists mainly of the IR Transmitter and Receiver, Op-amp, Variable Resistor (Trimmer pot), output LED along with few resistors.
- 5VDC Operating voltage
- I/O pins are 5V and 3.3V compliant
- Range: Up to 20cm
- Adjustable Sensing range
- Built-in Ambient Light Sensor
- 20mA supply current

3) GSM Module:
- Power supply: Single supply voltage 3.8V - 4.5V
- Frequency Bands: 850MHz, 900 MHz, 1800 MHz and 1900MHz.
- Supported protocols: Voice (2G)
- Standard size SIM card slot 
- Quad-band 850/900/1800/1900Mhz


4) Microcontroller:
The AT89S52 provides the following standard features: 
- 8K bytes of Flash
- 256 bytes of RAM,
- 32 I/O lines, 
- Watchdog timer
- two data pointers,
- three 16-bit timer/counters,
- six-vector two-level interrupt architecture
- full duplex serial port, on-chip oscillator, and clock circuitry. 

## 1.6 Architecture
## 1.6.1 Structural Diagram
 
![block_diagram_whole_sys](https://user-images.githubusercontent.com/46949702/155806418-a6bd4479-7bb0-45f2-a124-f2b2f7500aeb.png)
#

## 1.6.2 Behavioural Diagram
### 1.6.2.1	Obstacle Sensing module

![FLWCRT_OBSTACLE](https://user-images.githubusercontent.com/46949702/155805648-0ab96117-6333-4b44-8635-e82805be51f1.png)
### 1.6.2.2	Gas sensing module

![FLWCRT_GAS](https://user-images.githubusercontent.com/46949702/155805608-c9367cde-d360-49bf-b17f-9c76676f4976.png)
# 
## 1.6.3 Flowchart
-	Overall System

![FLWCRT_OVERALL](https://user-images.githubusercontent.com/46949702/155805650-ad780bd1-e0bc-4c98-8595-b138703d381f.png)
#

## 1.7 Test Cases
1)	When the vehicle starts, it will check for gas sensor and then display “VEHICLE ATMOSPHERE” , “NO OBSTACLE” and “IGNITION: ON”.
2)	When the vehicle is running and if toxic gas level increase, then it displays “VEHICLE ATMOSPHERE ALERT”, “NO OBSTACLE” and “IGNITION: ON”. Sends SMS 
3)	When the vehicle is at rest and if toxic gas level increase, then it displays “VEHICLE ATMOSPHERE ALERT”, “NO OBSTACLE” and “IGNITION: OFF”. Sends SMS 
4)	When the vehicle is at rest and if static object is detected then it displays “VEHICLE ATMOSPHERE”, “OBSTACLE ALERT” and “IGNITION: OFF”. Sends SMS 
5)	When the vehicle is running and if static object is detected then it displays “VEHICLE ATMOSPHERE”, “OBSTACLE ALERT” and “IGNITION: ON”. Sends SMS 

## 1.8 Application
•	Automobile industry
- Factories to detect leakage of any gas
- In home for dection of gas leakage
