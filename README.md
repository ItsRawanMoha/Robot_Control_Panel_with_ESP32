# Speech to Text

This project demonstrates how to control 5 LEDs using an ESP32 microcontroller with speech-to-text functionality, PHPMyAdmin, and MySQL database hosted on XAMPP.

## Introduction

Controlling devices using speech commands offers a convenient and hands-free interaction method. By integrating speech-to-text functionality with a microcontroller, users can control devices such as LEDs using voice commands.

## How it Works

The ESP32 microcontroller listens for speech commands using a speech-to-text library or service. Once a command is recognized, the ESP32 sends corresponding signals to control the LEDs. The speech commands and LED states are stored in a MySQL database managed by PHPMyAdmin.

## Getting Started

To get started with controlling 5 LEDs on XAMPP using ESP32 and speech-to-text:

- Set up XAMPP on your computer and ensure PHPMyAdmin is accessible.
- Create a MySQL database to store speech commands and LED states.
- Install the necessary libraries and dependencies on the ESP32 for speech recognition.
- Connect the ESP32 to the 5 LEDs and configure it to send signals based on recognized speech commands.

## Steps

Follow these steps to implement the project:

1. Set up the MySQL database schema to store speech commands and LED states.
2. Configure the ESP32 to connect to the Wi-Fi network and establish communication with PHPMyAdmin.
3. Implement the speech-to-text functionality on the ESP32 to recognize voice commands.
4. Write code to send signals to control the 5 LEDs based on recognized speech commands.
5. Test the system by speaking commands and observing the corresponding LED states in the database and physical LEDs.

## Connection

The ESP32 communicates with PHPMyAdmin through HTTP requests to insert speech commands and retrieve LED states from the MySQL database. The LEDs are connected to GPIO pins on the ESP32 for control.

## Output

Once the system is set up and running, users can speak commands to control the LEDs, and the ESP32 will respond accordingly by updating the LED states in the MySQL database and activating the LEDs.


![uYAvPtC0PK](https://github.com/ItsRawanMoha/Robot_Control_Panel_with_ESP32_STT/assets/156599594/2620aa04-684b-4796-b431-b5f0a413d2a2)

### Voice recognition command page

![aSBhNRGvuP](https://github.com/ItsRawanMoha/Robot_Control_Panel_with_ESP32_STT/assets/156599594/29888a75-f3ce-4507-a914-e1b5ce670c7f)

### Stop command

![e1dGKmJFON](https://github.com/ItsRawanMoha/Robot_Control_Panel_with_ESP32_STT/assets/156599594/a9653d95-9643-43b4-ba22-31120a1b3421)


### Stop command in the database

![HUywUYkwId](https://github.com/ItsRawanMoha/Robot_Control_Panel_with_ESP32_STT/assets/156599594/f9863005-64c8-47a9-b9b1-eb5eeb791025)

### Command is saved in savedcommand

![WhatsApp Image 2024-03-17 at 1 20 47 AM](https://github.com/ItsRawanMoha/Robot_Control_Panel_with_ESP32_STT/assets/156599594/278d98ad-391d-4b32-853e-94b4de385bef)

### The button turned on 


## Code

Sample code for implementing speech recognition and LED control on the ESP32, as well as PHP scripts for database interaction, can be found in the file section above.

## Conclusion

Integrating speech-to-text functionality with device control offers an intuitive and user-friendly interaction method. By combining ESP32, PHPMyAdmin, and MySQL database on XAMPP, users can create a system for controlling devices using voice commands, opening up possibilities for hands-free automation and accessibility.
