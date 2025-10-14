💡 LED Chaser (First Arduino Project)

This project uses ten LEDs connected to an Arduino Uno to create a chasing light effect.
It was my first hands-on Arduino project, marking the start of my embedded systems learning journey and helping me understand how microcontrollers control real hardware.

🧠 Concept

The goal was to learn how to control digital output pins, sequence LEDs, and use timing with the delay() function to simulate motion.
Each LED lights up in sequence, moving from left to right and then back again, creating a continuous “chase” pattern.

⚙️ Components Used
Component	Quantity	Description
Arduino Uno	1	Main microcontroller board
LED	10	5mm red LEDs
Resistor	10	220Ω each (to prevent LED damage)
Breadboard	1	For circuit assembly
Jumper Wires	~20	To connect LEDs and resistors

💡 Note: Each LED uses a 220Ω resistor to limit current and protect it from burning out.

🔌 Pin Connections
LED	Arduino Pin
1	13
2	12
3	11
4	10
5	9
6	8
7	7
8	6
9	5
10	4
🧩 How It Works

Each LED turns on briefly before the next one.

The pattern moves forward (LED1 → LED10) and then backward (LED10 → LED1).

Slightly longer delays at the ends give the pattern a smoother looping effect.

The sequence repeats indefinitely.

🪛 How I Built It

Placed 10 LEDs in a line on the breadboard.

Connected the anodes (long legs) to Arduino pins 13–4 using jumper wires.

Connected the cathodes (short legs) to ground through 220Ω resistors.

Uploaded the C++ code using the Arduino IDE via USB.

Adjusted delay times to make the chase look natural.

Issues encountered:

Some LEDs didn’t light at first because the breadboard power rails weren’t linked across sections.

Adding resistors fixed brightness and stability issues.

💬 Code Overview

The current code uses repeated LED on/off blocks with delays.
Each block executes the same sequence logic manually.
Future versions will simplify this using loops and functions for cleaner execution.

🚀 Lessons Learned

How to control multiple digital outputs with Arduino

How timing and sequencing affect circuit behavior

The importance of using resistors to protect components

How to document a project clearly for others to understand

🔭 Future Improvements

This project will remain unchanged as a record of my starting point.
Future versions will include:

Arrays and for loops for compact code

PWM brightness control

Buttons or sensors for interactive control

🌿 Branching Practice

This README update was created on a new branch (readme-update) before merging into main.
This keeps the repository clean and follows standard Git workflow practices.
