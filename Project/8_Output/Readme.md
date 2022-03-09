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
- Window position (servo motors) is unaffected.
![s5_gass](https://user-images.githubusercontent.com/46949702/157369548-4528f5d3-5c88-4ce0-8d64-556e5cf06389.png)

#
When level of gases present inside cabinet is within range (400-700)ppm. 
OBSERVATION: 

- Display message "ATTENTION"
- Fan is turned ON.
- Window position (servo motors) is unaffected.
![s6](https://user-images.githubusercontent.com/46949702/157369550-bc610899-918c-4252-abfe-ae0885977af4.png)
#
When level of gases present inside cabinet is greater than 700 ppm. 
OBSERVATION: 

- Display message "DANGER"
- Fan is turned ON.
- Window position (servo motors) is affected. They are opened completely.
![s7](https://user-images.githubusercontent.com/46949702/157369554-7bb2b041-b652-4278-8475-cfd96662b577.png)

#
When "U" button of keypad is pressed.
OBSERVATION:

- Servo motor knob if lifted towards up.
![S8](https://user-images.githubusercontent.com/46949702/157369556-97a64bea-e635-49d5-8e92-9560be47b0e8.png)
