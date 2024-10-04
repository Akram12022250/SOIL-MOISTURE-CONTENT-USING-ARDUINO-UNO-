This project demonstrates how to measure the soil moisture content using an Arduino-based system and automate irrigation based on moisture levels.

Components:
Arduino Uno (or any compatible microcontroller)
Soil Moisture Sensor: Used to measure the water content in the soil.
5V Relay Module: Controls the water pump based on the sensor's readings.
Mini Water Pump: Pumps water to the plants when moisture levels are low.
DC Motor: Drives the water pump.
Battery: Powers the entire system.
Connecting Wires
Working Principle:
Soil Moisture Sensing:

The soil moisture sensor is placed in the soil to measure its moisture level.
The sensor outputs an analog signal, where the voltage is inversely proportional to the soil moisture. Higher voltage indicates dry soil, while lower voltage indicates sufficient moisture.
Data Processing with Arduino:

The Arduino Uno reads the analog signal from the moisture sensor.
The analog input is converted into a digital value, which is compared against a predefined threshold (ideal moisture level).
Automatic Watering:

If the soil moisture level falls below the threshold, the Arduino triggers the relay module, which turns on the water pump.
Water is pumped into the soil until the moisture sensor detects an adequate moisture level, at which point the pump is turned off.
