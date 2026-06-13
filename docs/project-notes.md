# Project Notes – Potentiometer Controlled LED Indicator

## Objective
The objective of this project was to understand how analog input from a potentiometer can be used to control multiple LEDs using conditional statements in Arduino.

## Project Overview
A potentiometer is connected to an analog input pin of the Arduino. The Arduino continuously reads the potentiometer value and compares it against predefined ranges. Depending on the detected range, LEDs is/are turned on, for a higher range 2 to 3 leads are turned on i.e the led's of previous ranges are also turned on.

This project demonstrates the relationship between analog sensor readings and digital outputs.

## Components Used
- Arduino Uno R3
- Potentiometer
- 3 LEDs
- 3 Current Limiting Resistors
- Breadboard
- Jumper Wires

## Working Principle
The potentiometer acts as a variable voltage divider. As the knob is rotated, the voltage at the analog pin changes.

The Arduino reads this voltage using `analogRead()`, which returns a value between 0 and 1023.

The input range is divided into three sections:

- Low Range → LED 1 ON
- Medium Range → LED 2 and 1 are ON
- High Range → all LEDs are ON

Conditional statements (`if`, `else if`, and `else`) are used to determine which LED should be activated.

## Concepts Learned
- Analog Inputs using `analogRead()`
- Digital Outputs using `digitalWrite()`
- Voltage Division using a Potentiometer
- Conditional Statements (`if`, `else if`, `else`)
- Breadboard Circuit Assembly
- Basic Arduino Programming

## Challenges Faced
- Selecting suitable threshold values for each voltage range.
- On decreasing voltage using potentiometer LEDs of the higher range should turn off.
- Understanding how potentiometer position affects analog readings.

## Testing and Verification
The circuit was tested by rotating the potentiometer through its full range and observing the LEDs. The expected LED illuminated correctly for each input range, confirming proper operation of the logic and circuit connections.

## Future Improvements
- Add an OLED display to show the voltage value.
- Implement PWM for smooth LED brightness transitions.
- Increase the number of LEDs for finer indication levels.
- Replace the potentiometer with real-world sensors such as temperature or light sensors.

## Reflection
This project provided hands-on experience with analog inputs and decision-making logic in Arduino. It reinforced the concepts of sensor interfacing, voltage measurement, and conditional programming. The project serves as a foundational step toward more advanced embedded systems and IoT applications.
