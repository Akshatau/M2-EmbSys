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

