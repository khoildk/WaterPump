# L298N Driver For STM32 
-This project is part of a smart irrigation system using the STM32F103C8T6 microcontroller.  
-It controls a mini water pump through the L298N motor driver (or MOSFET module) and can later be integrated with soil moisture and temperature sensors.  
-The goal is to automatically water plants based on environmental conditions.
# Features 
-Modular library for easy pump control (pump.h / pump.c)  
-Compatible with STM32CubeIDE and HAL libraries  
-Ready for future integration with sensors and IoT modules
# Prerequisites
-STM32 microcontroller (any series with SPI support)  
-L298N Module  
-STM32 development environment (STM32CubeIDE, Keil, etc.)  
-C compiler and toolchain  
-ST Link V2 
# Hardware Connections
| Component                   | STM32 Pin                  | Description              |
| --------------------------- | -------------------------- | ------------------------ |
| **L298N IN1**               | PA1                        | Pump control signal 1    |
| **L298N IN2**               | PA2                        | Pump control signal 2    |
| **L298N ENA**               | Jumper enabled (always ON) | Enable channel A         |
| **L298N GND**               | GND                        | Common ground with STM32 |
| **L298N +12V / +5V**        | External power supply      | Powers the motor         |
| **Pump Motor (+)**          | OUT1 (L298N)               | Motor output             |
| **Pump Motor (−)**          | OUT2 (L298N)               | Motor output             |

