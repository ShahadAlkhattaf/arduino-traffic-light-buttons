# Arduino Button-Controlled Traffic Light LEDs

## Description

Arduino project to simulates a simple traffic light system using three LEDs (Red, Yellow, Green) controlled by three push buttons. Each button controls one LED:

- **Button on pin 7** controls **Red LED on pin 8**
- **Button on pin 4** controls **Yellow LED on pin 12**
- **Button on pin 2** controls **Green LED on pin 13**

When a button is pressed, its corresponding LED blinks (1 second on, 1 second off) until another button is pressed or all buttons are released.

---

## Hardware Requirements

- Arduino board.
- 3 Push buttons.
- 3 LEDs.
- 3 Resistors for LEDs.
- 3 Pull-down resistors (10kΩ) for buttons.
- Breadboard and jumper wires

---

## Circuit Connections

### Buttons:
- **Button 1** → Pin 7 (Red)
- **Button 2** → Pin 4 (Yellow)
- **Button 3** → Pin 2 (Green)
- Other side of each button connected to **+5V**

### LEDs:
- **Red LED** → Pin 8
- **Yellow LED** → Pin 12
- **Green LED** → Pin 13
- Cathodes of all LEDs connected to **GND** through resistors
---

## Arduino Code

```cpp
// C++ code

void setup()
{
   pinMode(7, INPUT);
   pinMode(4, INPUT);
   pinMode(2, INPUT);

   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(8, OUTPUT);
}

void loop()
{
  if (digitalRead(7) == HIGH)
  {
    digitalWrite(13, HIGH);
    delay(1000); // Wait for 1000 milliseconds
    digitalWrite(13, LOW);
    delay(1000); // Wait for 1000 milliseconds
  }
  else if (digitalRead(4) == HIGH)
  {
    digitalWrite(12, HIGH);
    delay(1000); // Wait for 1000 milliseconds
    digitalWrite(12, LOW);
    delay(1000); // Wait for 1000 milliseconds
  }
  else if (digitalRead(2) == HIGH)
  {
    digitalWrite(8, HIGH);
    delay(1000); // Wait for 1000 milliseconds
    digitalWrite(8, LOW);
    delay(1000); // Wait for 1000 milliseconds
  }
  else
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
  }
}
```
---

## ScreenShot:

<img src= "circuitPic">
