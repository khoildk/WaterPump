# Overview
- This project demonstrates how to control a 5V relay module using an STM32F103C8T6 (Blue Pill) board.
- The relay switches an external 5V DC water pump on and off through GPIO output signals from the STM32.
- The project includes a custom library (relay.h and relay.c) for flexible relay control on any GPIO pin.
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
|  Component                 | STM32 Pin | Relay Pin | Description                                      |
| ------------------------- | --------- | --------- | ------------------------------------------------ |
| Relay DC (+)             | —       | DC+       | Power supply for relay module                    |
| Relay DC (–)             | GND       | DC–       | Common ground between STM32 and relay            |
| Relay IN                  | PAx       | IN        | Control signal from STM32                        |
| External Power Supply (–) | GND       | DC (-)      | Common ground for pump and power source          |
| External Power Supply (+) | —         | DC (+)         | Connects directly to relay COM terminal        |
| Pump (–)                  | —         | —      | Pump negative lead connects to External Power Supply (-) |
| Pump (+)                  | —         | NO        | Pump positive lead connects to relay NO terminal |

# Libraries Files
- Relay.h — Header file containing function declarations for relay control.  
- Relay.c — Source file implementing initialization and control logic (ON, OFF)
# Notes
- You can change the GPIO pin (e.g., PA5 → PB0) by editing the Relay_Init() parameters in main.c.
- Ensure the GND of the relay, STM32, and external power source are all connected together.
- The relay LED should light when activated, and you should hear a “click” sound.

