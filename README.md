# ROVER
An autonomous rover that can be used for unmanned space exploration missions uses adjustable rocker bogie suspension for higher stability and is equipped with IMU and LiDAR for mapping the terrain, and a camera for navigation and obstacle avoidance.



## HARDWARE LIST AND SPECS


| Components | Quantity | Model name | Specifications |
| ---------- | -------- | ---------- | -------------- |
| Servo motors | 4 | Tower pro mg946r | Operating Voltage: 4.8-6.6 V, Angle of rotation: 180 degree, Wire Description: Red – Positive Brown – Negative Orange – Signal, current drawn (at idle)- 10mA, Operating current drawn (at no load)-170mA, Stall current drawn-1200mA, Stall Torque @ 4.8V (Kg-Cm)-10.5, Stall Torque @6V-13kg/cm, Operating Speed @4.8V-0.20sec/60°, Operating Speed @6V-0.17sec/60º|
| DC motors | 6 | 12V 60 rpm Johnson motor A grade | Operating Voltage(V): 12V, Rated current : 1.2A, Torque:32 to 120kgcm, At load, peak current= 2.2A, continuous current= 600mA, At no load, peak current= 1.2A, continuous current= 200mA, 38kgcm Holding Torque, (rated)No-load current = 800 mA, Load current = upto 7.5 A(Max)
| Motor driver | 3 | Cytron 3Amp 4V-16V Dual Channel DC Motor Driver MDD3A | Buttons for quick testing, Operating Voltage: DC 4V to 16V, Maximum permissible motor current to be drawn per port: 3A continuous, 5A peak(<5s), Buck-boost regulator to produce 5V output (200mA max). LEDs for motor output state. Reverse polarity protection. |
| Arduino MEGA | 1 | - | Operating voltage: 6 ~ 12v. Microcontroller: ATMega2560 |
| Buck converter | 1 | 10A DC-DC Step-down Adjustable Constant Voltage Module | Input Supply voltage (V)-7 ~ 40, Output voltage (V)- continuously adjustable (1.25 ~ 35), Output Current (A)-8A (10A maximum), Conversion efficiency-95%, No-load current-Typical 20mA |
| IMU | 1 | MPU 6050 | Digital-output temperature, Operating Voltage (VDC)-3 ~ 5, Communication-I2C Protocol, Gyro range( °/s)- ± 250, 500, 1000, 2000, Acceleration range(g)- ± 2  ± 4  ± 8  ± 16 |
| Bluetooth module | 1 | HC-05 TTL Bluetooth Transceiver Module | Input Supply voltage (V)-3.3 ~ 6 | Range of operation (m)-8 ~ 10 |
| Lora | 2 - transmitter and receiver | SX1278 LoRa Series Ra-02, Spread Spectrum Wireless, Module | Constant RF power output at + 20dBm-100mW voltage change. High sensitivity: down to -148dBm. Half-duplex SPI communication. Programmable bit rates up to 300kbps. Communication distance: 15km. Input Supply Range (VDC)-2.5 ~ 3.7 Transmit Power (dBm)-18±1 dBm (Max). Antenna type: IPEX | 
| Wires and jumpers | - | - | 1mm2 wire with max current rating 4-5A |
| rails | 12 | - | - |




## MECHANICAL SYSTEM

**Main Body Design:**

- Material Used:
    1. Aluminum T-Slot Profile (20*20)
    2. Fasteners: bolts and nuts (M5, M3, M6)
    3. Corner Brackets
    4. Aluminum L Profile
- Dimensions:
    1. T-Slot Profile (Angular Cutting):
        1. 30cm - 2 pcs
        2. 15cm - 2 pcs
        3. 16cm - 2 pcs
        4. 6cm - 2 pcs
        5. 5cm - 2 pcs
        6. cut L Profile into flat plates
    2. Drilling (Metal Drill Bit):
        1. 2 holes on 16cm of M4
        2. 1 holes on 5cm of M4
        3. 1 holes on 30cm of M4
        4. 2 holes on flat plates of M5
- Assembly:
    1. Attach 30cm and 15cm profiles using corner bracket and fasteners (Rectangular shape) 
    2. Attach Flat plates on outer side joints, So that joints become immobile
    3. Attach 5cm profiles perpendicular to the rectangular body using corner bracket and flat profile 
    4. Attach 6cm profile (on the side of M4 hole on 30cm profile) perpendicular to the rectangular body using corner bracket
    5. Attach 16cm profile at 45 degree to rectangular profile

**Rocker-Bogie Design:**

- Material Used:
    1. Aluminum T-Slot Profile (20*20)
    2. Fasteners: bolts and nuts (M5, M3, M6)
    3. Acrylic Sheet (5mm)
    4. Ball Bearing (5mm)
    5. fasteners : Nuts and Bolts (M5 and M3)
- Dimensions:
    1. T-Slot Profile (Angular Cutting):
        1. 25(10+15)cm - 2 pcs
        2. 15cm - 2 pcs
    2. laser Cutting:
        1. Cut the acrylic sheet of the following design (Rectangular shape and trapezium)
- Assembly:
    1. Attach rectangular part to 15cm profile 
    2. Attach trapezium part to rectangular part with ball bearing placed
    3. Attach 10cm(should be perpendicular to ground) and  15cm profiles to the trapezium part using fasteners
    4. Attach 6cm profile (on the side of M4 hole on 30cm profile) perpendicular to the rectangular body using corner bracket

### Servo Attachment:

- Material Used:
    1. Servo Bracket(4)
    2. Servo Motor
    3. fasteners : Nuts and Bolts (M5 and M3)
- Assembly:
    1. Attach Servo bracket to 16cm and 15cm profiles
    2. Place the Servo motor on Servo bracket

### Steering Mech:

- Material Used:
    1. Circular Servo Horn
    2. 3D printed Coupling
    3. fasteners : Nuts and Bolts (M5 and M6)
    4. Ball Bearing(M6)
    5. Acrylic Sheet(5mm)
    6. L profile 
    7. Corner Brackets (small and large)
    8. Motor Coupling
    9. Motor Clamps
    10. Wheels (12cm)
- Dimension:
    1. Laser Cutting:
        1. Cut the of the following design
    2. Angular Cutting:
        1. Cut the L profile of 20cm
        2. cut away 8*8cm plate on L profile
    3. Drilling: 
        1. Drill M3 size hole on L profile 
    4. 3D Printing :
        1. 3D print the Coupling design with 65% infill

- Assembly:
    1. Glue the servo horn the coupling
    2. Attach the coupling to servo head using M3 Allen bolt
    3. Place the M6 bolt and attach the other side of coupling
    4. place ball bearings on the acrylic plate, insert the M6 bolt inside the bearing
    5. Attach the plate to main body(to distribute  load on servo head) using corner  bracket (large)
    6. Motor Holder:
        1. Attach the motor coupling to rectangular acrylic sheet
        2. Attach the L profile to rectangular acrylic sheet using corner bract (small)
        3. Attach the motor clamp
    7. Attach the motor holder to the M6 Bolt through motor coupling
    8. Directly attach the motor clamp to the bodyty
    9. place the motor in the motor holder
    10. attach the wheels

Important note:

1. Rover Lacks lateral stability
2. Too load acting in servo head
3. Didn’t give any tolerance while cutting t-slots
4. Used acrylic on high load acting areas

## COMMUNICATION SYSTEM

Current communication happens through Bluetooth module, However considering long range we initially went with LoRa for testing navigation functionalities of the robot. 

However, In the near future WIFI will be used for communication, due to the need of high bandwidth and ROS on Hardware system. 

## **Lora Description and Connections:**

Library used : [**Arduino_lib**](https://github.com/sandeepmistry/arduino-LoRa) 

LoRa (short for "Long Range") is a wireless communication technology, designed to enable long-range communication with low power consumption. It is often used in IoT (Internet of Things) applications where devices need to transmit small amounts of data over long distances while consuming very little power.

LoRa uses a chirp spread spectrum (CSS) modulation technique to transmit data over a wide frequency range. In this technique, the frequency of the transmitted signal is gradually changed over time in a linear fashion. This allows the signal to occupy a wider bandwidth than a traditional narrowband signal, which increases the range of the transmission. At the same time, LoRa uses a low data rate, which enables it to operate at very low power levels.

Module SX1278(for both transmitter and receiver) // Arduino UNO/NANO

Connections:

GND         ->   GND

3.3V         ->   3.3V

MISO        ->   D12

MOSI        ->   D11

SLCK        ->   D13

Nss         ->   D10

Di00        ->   D2

RST         ->   D9

## SOFTWARE SYSTEM

Rover has been launched in the Gazebo environment. The required launch file is generated by using the built-in URDF converter in Solidworks. All the joints are properly defined while doing so. For controlling the rover in the environment, a plugin called "object_controller" is added to the urdf file. For testing the action of rocker bogie suspension, an obstacle is placed in the environment and made static. Using the "cmd_vel" command, robot is made to move forward and backward.

Problems to tackle:

- Unable to climb obstacles that are greater than a certain height.
- Have to find a way to control all six wheels separately (steering).
- Sensors should be added to the environment, and the data acquired should be processed.

## ELECTRICAL SYSTEM

The six wheeled ackerman geometry is implemented for navigation. Message from phone via Bluetooth connection is received by the microcontroller, based on the condition the robot is moved. Currently the radius of turn is fixed, will be adjustable in future.
**Power calculations :**

- For DC motors, at load, peak current= 2.2A, continuous current= 600mA
- At no load, peak current= 1.2A, continuous current= 200mA
- Motor driver max current per channel is 3A (continuous), 5A (peak)
- Servo motors will consume around 1.2A at stall condition.
- With 6 DC motors and 4 servos, total current consumption comes around 18 A.
- Power supplied is roughly { [ ( 6 x 2.2 A x 12 V) + [1.2 A x 5 v] ] = 164.4 W } **230 Watts for the drive system.**
- Power consumed by other components:
    - MCU: 8 - 9 W max and around 0.2 A current each.
    - Other sensors, Lights and Communication systems consume less than 2 - 3 w and 0.4 – 0.5 A max.
    - Lidar: 1.5 w and max 0.3 A. (in future we’ll be using LiDAR for terrain mapping)
- Net power required is around 240 – 250 W with current drawn around 20-25 A max.
- The buck converters come with adjustable output DC supply.
- Right now we’re using SMPS(switched mode power supply) for power source that gives a wide range of output voltage and current.

**Electrical flow process:**
We used SMPS as power supply to power up the three motor drivers. 3 Motor drivers will control the 6 DC motors, each controlling 2 motors, having 3A permissible continuous current rating per port. Servos are powered using buck converter which converts high voltage from SMPS to 5V. Bluetooth module and IMU will be connected to the micro-controller. Thus the MC controls IMU, bluetooth module, and the four servo motors which are connected to the 2 front and 2 back wheels for controlling the steering. IMU is used to get the accelerometer and gyroscope measurements.

## Observations:

- For DC motors, **at load, peak current= 2.2A**, continuous current= 600mA
- At no load, peak current= 1.2A, continuous current= 200mA
- **L298N max current per channel is 2A** (peak) per port
- So at load, the port in L298N at which the loaded motor is attached got burnt since it exceeded the rated current.
- So we changed the motor driver to MDD3A whose port has current capacity 3A (continuous) and 5A (peak).

## REFERENCES 
- Previous Robofest submissions:
    - [https://www.youtube.com/watch?v=lbI3N3IFIQc](https://www.youtube.com/watch?v=lbI3N3IFIQc)
    - [https://www.youtube.com/watch?v=x54AGX9miN8](https://www.youtube.com/watch?v=x54AGX9miN8)
    - [https://www.youtube.com/watch?v=6oWO_RJU9YY](https://www.youtube.com/watch?v=6oWO_RJU9YY)
- International rover challenge
    - [https://www.youtube.com/watch?v=few9ZminRlg&ab_channel=NovaRover](https://www.youtube.com/watch?v=few9ZminRlg&ab_channel=NovaRover)
    
    - [https://www.youtube.com/watch?v=1iWWmPoYnnA&ab_channel=NovaRover](https://www.youtube.com/watch?v=1iWWmPoYnnA&ab_channel=NovaRover)
    - [https://www.youtube.com/watch?v=N7xY_O0PeXE&ab_channel=KoloNaukoweRobotykow](https://www.youtube.com/watch?v=N7xY_O0PeXE&ab_channel=KoloNaukoweRobotykow)
    - [https://www.youtube.com/watch?v=rEn0aH8DRcM&ab_channel=ITURoverTeam](https://www.youtube.com/watch?v=rEn0aH8DRcM&ab_channel=ITURoverTeam)
 - other
    - [https://www.youtube.com/watch?v=tgAOEiIUJ5k&ab_channel=MarsRoverManipal](https://www.youtube.com/watch?v=tgAOEiIUJ5k&ab_channel=MarsRoverManipal)
    - [https://www.youtube.com/watch?v=LI7Wsg5GcxQ&ab_channel=TeamAnveshak](https://www.youtube.com/watch?v=LI7Wsg5GcxQ&ab_channel=TeamAnveshak)
    - [https://www.youtube.com/watch?v=NOR0gMlQF7k&ab_channel=TeamRoverXVITUniversity](https://www.youtube.com/watch?v=NOR0gMlQF7k&ab_channel=TeamRoverXVITUniversity)

