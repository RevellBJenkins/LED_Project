# LED Chaser (First Arduino Project)

This project uses ten LEDs connected to an Arduino Uno to create a chasing light effect.  
It was my very first hands-on Arduino project and marks the starting point of my embedded systems learning journey.

## 🧠 Concept

The goal was to understand how to control digital outputs and use delays to create motion-like light patterns.  
Each LED turns on and off in sequence to simulate movement from left to right, then back again.

## ⚙️ Components Used

- Arduino Uno  
- 10 × LEDs  
- 10 × 220Ω resistors  
- Breadboard and jumper wires  

## 🔌 Pin Connections

| LED | Arduino Pin |
|-----|--------------|
| 1 | 13 |
| 2 | 12 |
| 3 | 11 |
| 4 | 10 |
| 5 | 9 |
| 6 | 8 |
| 7 | 7 |
| 8 | 6 |
| 9 | 5 |
| 10 | 4 |

## 🧩 How It Works

Each LED turns on briefly before the next one, creating a flowing light effect.  
The sequence goes forward from LED1 to LED10 and then backward, repeating indefinitely.  
The delays at the start and end are slightly longer for visual emphasis.

## 🚀 Lessons Learned

- How to control multiple digital pins  
- How timing and sequencing work using `delay()`  
- How to read and debug circuits on a breadboard  
- The importance of documenting code and circuit connections

## 🔭 Future Improvements

This project will stay exactly as it was when first built.  
It represents a baseline to compare with later versions that will:
- Use arrays and loops for cleaner code  
- Add brightness control using PWM (`analogWrite`)  
- Include interactive elements like buttons or sensors  

## 📸 Circuit Diagram / Demo

*(You can add a picture or short video of your circuit here)*  

---

> **Note:** This was my first hardware project — it’s intentionally kept in its original form to show my learning progress over time.
