# 📺 OLED Display Examples (0.96" SSD1306 & 1.3" SH1106)

![Arduino](https://img.shields.io/badge/Platform-Arduino-blue)
![ESP8266](https://img.shields.io/badge/ESP8266-Compatible-success)
![ESP32](https://img.shields.io/badge/ESP32-Compatible-success)
![OLED](https://img.shields.io/badge/OLED-128x64-orange)
![License](https://img.shields.io/badge/License-MIT-green)

A complete collection of **OLED Display examples** for **0.96-inch SSD1306** and **1.3-inch SH1106** OLED displays using the **Adafruit GFX** and **Adafruit SH110X** libraries.

This repository demonstrates almost every commonly used OLED feature, including text rendering, graphics, scrolling, animations, inversion, and software-based effects. It is suitable for beginners who want to learn OLED programming as well as developers building embedded interfaces for Arduino, ESP8266, and ESP32.

---

# 📑 Table of Contents

- Features
- Hardware Requirements
- Supported Boards
- Required Libraries
- Wiring
- Installation
- Examples Included
- Functions Covered
- Project Structure
- Notes
- Future Improvements
- License

---

# ✨ Features

This repository includes demonstrations of the following OLED capabilities:

 Text Display

- Single-line text
- Multi-line text
- `print()` and `println()`
- Cursor positioning
- Multiple font sizes
- Text alignment using coordinates

---

 Font Size Examples

Demonstrates:

- Text Size 1
- Text Size 2

Useful for:

- Titles
- Status messages
- Menus
- UI elements

---

##  Graphics

The graphics examples include:

- Lines
- Rectangles
- Filled Rectangles
- Circles
- Filled Circles

Functions demonstrated:

cpp
drawLine()
drawRect()
fillRect()
drawCircle()
fillCircle()
```

---

## ↔ Horizontal Software Scrolling

Since SH1106 does **not support hardware scrolling**, smooth software scrolling has been implemented.

Features:

- Right-to-left scrolling
- Adjustable speed
- Automatic reset
- Dynamic text width calculation

---

## ↕ Vertical Paragraph Scrolling

Displays long paragraphs with automatic upward scrolling.

Features:

- Wrapped text
- Automatic line calculation
- Automatic text height calculation
- Infinite scrolling

---

##  Display Inversion

Demonstrates display inversion using

```cpp
invertDisplay(true);
invertDisplay(false);
```

---

##  Animation

Simple animation example included.

Current demo:

- Moving filled circle

Shows how to create smooth animations by repeatedly clearing and redrawing the display.

---

##  Screen Refresh

Proper use of

```cpp
clearDisplay();
display();
```

to prevent:

- Ghosting
- Random pixels
- Display artifacts

---

##  Cursor Positioning

Demonstrates

```cpp
setCursor(x, y);
```

for placing text anywhere on the screen.

---

##  Text Wrapping

Examples include both:

```cpp
display.setTextWrap(true);
```

and

```cpp
display.setTextWrap(false);
```

---

# 🖥 Hardware Requirements

Supported OLED Displays

### 1.3" OLED

- SH1106 Driver
- 128×64 Resolution
- I2C Interface

### 0.96" OLED

- SSD1306 Driver
- 128×64 Resolution
- I2C Interface

---

# 🔌 Supported Boards

- Arduino UNO
- Arduino Nano
- Arduino Mega
- ESP8266
- ESP32

---

# 📚 Required Libraries

Install using Arduino Library Manager.

Required libraries:

- Adafruit GFX Library
- Adafruit SH110X Library
- Wire Library

---

# ⚙ Installation

1. Open Arduino IDE.
2. Open **Library Manager**.
3. Install:

```
Adafruit GFX
Adafruit SH110X
```

4. Connect the OLED.
5. Upload any example.

---

# 🔌 Wiring

## Arduino UNO

| OLED | Arduino |
|------|----------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

## ESP8266

| OLED | ESP8266 |
|------|-----------|
| VCC | 3.3V |
| GND | GND |
| SDA | D2 |
| SCL | D1 |

---

## ESP32

| OLED | ESP32 |
|------|---------|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO21 |
| SCL | GPIO22 |

---

# 📡 Default I2C Address

```cpp
0x3C
```

If your display is not detected, try:

```cpp
0x3D
```

---

# 📂 Examples Included

## 1️⃣ Basic OLED Test

Displays:

```
1.3 inch OLED
SH1106 Driver
Arduino UNO OK
```

---

## 2️⃣ Text Demo

Demonstrates:

- Font Size 1
- Font Size 2
- Multi-line text

---

## 3️⃣ Graphics Demo

Includes:

- Rectangle
- Filled Rectangle
- Circle
- Filled Circle
- Line

---

## 4️⃣ Horizontal Software Scroll

Smooth scrolling text from right to left.

Features:

- Dynamic width calculation
- Automatic restart

---

## 5️⃣ Vertical Paragraph Scroll

Long paragraph scrolling.

Features:

- Wrapped text
- Automatic text height
- Infinite upward scrolling

---

## 6️⃣ Display Inversion Demo

Sequence:

```
Normal

↓

Inverted

↓

Normal
```

---

## 7️⃣ Animation Demo

Moving filled circle across the screen.

Demonstrates frame-by-frame animation.

---

# 📖 Functions Covered

| Function | Description |
|----------|-------------|
| begin() | Initialize OLED |
| clearDisplay() | Clear display buffer |
| display() | Refresh screen |
| setCursor() | Set cursor position |
| setTextSize() | Change font size |
| setTextColor() | Set font color |
| print() | Print text |
| println() | Print line |
| setTextWrap() | Enable/Disable wrapping |
| drawLine() | Draw line |
| drawRect() | Draw rectangle |
| fillRect() | Filled rectangle |
| drawCircle() | Draw circle |
| fillCircle() | Filled circle |
| invertDisplay() | Invert screen |

---

# 📁 Project Structure

```
OLED-Examples/

│
├── Basic_Text
├── Graphics
├── Horizontal_Scroll
├── Vertical_Scroll
├── Animation
├── Invert_Display
└── README.md
```

---

# 💡 What You'll Learn

After exploring this repository, you'll know how to:

- Initialize OLED displays
- Display text
- Use multiple font sizes
- Position text anywhere
- Draw graphics
- Create animations
- Scroll text horizontally
- Scroll text vertically
- Calculate text width
- Calculate text height
- Build menus
- Create dashboards
- Design embedded user interfaces
- Develop smooth OLED animations

---

# 📝 Notes

- SH1106 does **not** support hardware scrolling.
- All scrolling examples use **software scrolling**.
- Always call:

```cpp
display.display();
```

after drawing.

- Use

```cpp
display.clearDisplay();
```

before drawing the next frame.

- A short startup delay improves initialization stability on some boards.

---

# 🚀 Future Improvements

The following examples may be added in future versions:

- Bitmap Images
- Logo Display
- Battery Indicator
- Signal Strength Icons
- Progress Bar
- Loading Animation
- Analog Clock
- Digital Clock
- Menu System
- Sensor Dashboard
- Graph Plotting
- QR Code Display
- Custom Fonts
- Sprites
- FPS Counter

---

# 🤝 Contributing

Contributions are welcome!

Feel free to:

- Improve examples
- Add new demos
- Fix bugs
- Optimize animations
- Improve documentation

---

# 📜 License

This project is released under the **MIT License**.

You are free to use, modify, and distribute it for personal or commercial projects.

---

# ⭐ Support

If you found this repository helpful:

⭐ Star the repository

🍴 Fork it

📢 Share it with the Arduino community

Happy Coding! 🚀
