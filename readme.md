# Ultrasonic People Counter: Arduino and LCD

This project is a simple people counting system that uses an ultrasonic sensor, an Arduino board, and an LCD display to count the number of people passing through a specific location. The system is designed to be easy to set up and use, making it a great solution for a variety of applications such as retail stores, libraries, museums, and more.

## Getting Started

To get started with this project, follow these steps:

### Prerequisites

You will need the following materials to build the people counting system:

- Arduino board (e.g., Arduino Uno)
- One HC-SR04 ultrasonic sensor
- 16x2 LCD display (compatible with the Hitachi HD44780 driver)
- Breadboard
- Jumper wires
- USB cable (for connecting the Arduino board to your computer) "COM"

### Connecting the Components

#### Connecting One Ultrasonic Sensor

1. Connect the VCC pin of the ultrasonic sensor to the 5V pin of the Arduino board.
2. Connect the GND pin of the ultrasonic sensor to the GND pin of the Arduino board.
3. Connect the TRIG pin of the ultrasonic sensor to pin 6 of the Arduino board.
4. Connect the ECHO pin of the ultrasonic sensor to pin 7 of the Arduino board.

#### Connecting the LCD Display

1. Connect the SDA pin of the LCD display to the A4 pin of the Arduino board.
2. Connect the SCL pin of the LCD display to the A5 pin of the Arduino board.
3. Connect the VCC pin of the LCD display to the 5V pin of the Arduino board.
4. Connect the GND pin of the LCD display to the GND pin of the Arduino board.

### Installing the LiquidCrystal_I2C Library

Before using the LCD display with the Arduino, you need to install the LiquidCrystal_I2C library. To install the library, follow these steps:

1. Open the Arduino IDE.
2. Go to the "Sketch" menu, select "Include Library", then "Manage Libraries".
3. In the "Library Manager" window, search for "LiquidCrystal_I2C" and select **"LiquidCrystal 12C by Frank
de Brabander"** from the results.
4. Click the "Install" button to install the library.

### Uploading the Code

To upload the code to the Arduino board, follow these steps:

1. Clone or download the project code from this repository.
2. Open the `people_counter.ino` file in the Arduino IDE.
3. Connect the Arduino board to your computer using the USB cable.
4. Select the correct board and port in the Arduino IDE (under the "Tools" menu).
5. Upload the code to the Arduino board (click the "Upload" button in the Arduino IDE).

### Using the System

To use the people counting system, follow these steps:

1. you can calculate sound speed using <a href="http://www.sengpielaudio.com/calculator-airpressure.htm">sengpielaudio</a>
2. Place the ultrasonic sensor at the entrance of the location you want to count people in.
3. Turn on the Arduino board.
4. The LCD display will show the current count of people passing through the location.
5. When a person passes through the sensor, the count will be updated accordingly.

## Customization

You can customize the people counting system to fit your specific requirements. The code is well-commented and easy to understand, so you can modify it as needed. For example, you can change the threshold distance for detecting people, or add more sensors to cover a larger area.

## Contact

If you have any questions or comments about this project, please feel free to contact me at 

<a href="http://wa.me/201061075354" target="_blank"><img alt="LinkedIn" src="https://img.shields.io/badge/whatsapp-128C7E.svg?style=for-the-badge&logo=whatsapp&logoColor=white" /></a> 

<a href="https://www.linkedin.com/in/abdelrahman-mohammed-814a9022a/" target="_blank"><img alt="LinkedIn" src="https://img.shields.io/badge/linkedin-0077b5.svg?style=for-the-badge&logo=linkedin&logoColor=white" /></a>

Gmail : abdelrahmansalby23@gmail.com 📫

