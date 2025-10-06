# Relay Driver For STM32 
- This project is part of a Smart Plant Watering System, built using an STM32F103C8T6 microcontroller.  
- It controls a 5V relay module that switches a water pump on and off automatically (or manually with a button).
# Features 
- Control a 5V relay using STM32 GPIO.  
- Modular code with custom library (relay.h / relay.c) for easy reuse.  
- Can be extended to work with soil moisture, temperature, and humidity sensors.
# Prerequisites
- STM32 microcontroller (any series with SPI support)  
- Relay 5V  
- STM32 development environment (STM32CubeIDE, Keil, etc.)  
- C compiler and toolchain  
- ST Link V2 
# Hardware Connections
| Component       | Connection                         | Description                       |
| --------------- | ---------------------------------- | --------------------------------- |
| **Relay IN**    | **PA1 (STM32)**                    | Control signal from STM32         |
| **Relay DC(+)** | **External Power + (5V or 12V)**   | Power input for relay module      |
| **Relay DC(-)** | **External Power GND**             | Common ground with STM32          |
| **Relay COM**   | **External Power + (same as DC+)** | Common terminal for switching     |
| **Relay NO**    | **Pump (+)**                       | Connected when relay is activated |
| **Pump (-)**    | **External Power GND**             | Same ground as relay DC(-)        |
| **STM32 GND**   | **External Power GND**             | Must be connected together        |
# Libraries Files
- Relay.h — Header file containing function declarations for relay control.  
- Relay.c — Source file implementing initialization and control logic (ON, OFF)
# Notes
- Make sure all grounds (STM32, Relay, Pump Power) are connected together.


