# Expansion Shield for STM32 Nucleo (Traffic Light System Shield)

This is an Expansion Shield for STM32 Nucleo designed to control a traffic light system using STM32F103RBT6. The shield includes 4 buttons for mode selection and parameter adjustment, a 7-segment 4-digit display for displaying the current settings, and an LED indicator for the status of the system.
![Screenshot 2024-03-01 204429](https://github.com/HyHyZhaLee/STM32TrafficLight/assets/113485058/dbfc36ee-c72c-4074-b4a1-db7b8335461b)



## Features

- Mode button: Used to toggle between 4 modes:
- Auto: The system will run automatically like a traffic light.
- Red: Used to adjust the number of seconds for the red light.
- Yellow: Used to adjust the number of seconds for the yellow light.
- Green: Used to adjust the number of seconds for the green light.
- Up and Down buttons: Used to increase or decrease the number of seconds for the selected light.
- Save button: Used to save the settings.
- 4-digit 7-segment LED display: Displays the current values of the red, yellow, and green light timings.

## Usage

1. Connect the shield to your STM32 Nucleo board.
2. Upload the code to your board using STM32CubeIDE or other compatible software.
3. Use the first button to select the mode:
- Mode auto: The system will run like a traffic light
- Mode red: Use buttons 2 and 3 to adjust the duration of the red light, then press button 4 to save.
- Mode yellow: Use buttons 2 and 3 to adjust the duration of the yellow light, then press button 4 to save.
- Mode green: Use buttons 2 and 3 to adjust the duration of the green light, then press button 4 to save.
- The current settings will be displayed on the 7-segment 4-digit display.

## Getting Started

### Prerequisites
- STM32 Nucleo board
- STM32CubeIDE or other compatible software

### Installation
1. Clone the repository to your local machine.
2. Open the project in STM32CubeIDE or other compatible software.
3. Upload the code to your STM32 Nucleo board.
4. Connect the shield to your board and start using.
   
![Screenshot 2024-03-01 204401](https://github.com/HyHyZhaLee/STM32TrafficLight/assets/113485058/5cdca860-17af-4b7b-9869-673ccd070637)
