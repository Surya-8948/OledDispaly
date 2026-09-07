#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

Adafruit_SH1106G display(128, 64, &Wire, -1);

void setup()
{
  Wire.begin();
  display.begin(0x3C, true);

  display.clearDisplay();
  // Rectangle
  // drawRect(StartX, StartY, Width, Height, Color)
  //==================================================
  display.drawRect(0, 0, 25, 15, SH110X_WHITE);
  //  Filled Rectangle
  // fillRect(StartX, StartY, Width, Height, Color)
  //==================================================
  display.fillRect(35, 0, 25, 15, SH110X_WHITE);
  // Line
  // drawLine(StartX, StartY, EndX, EndY, Color)
  //==================================================
  display.drawLine(70, 0, 120, 15, SH110X_WHITE);
  // Single Pixel
  // drawPixel(X, Y, Color)
  //==================================================
  display.drawPixel(125, 5, SH110X_WHITE);
  //  Circle
  // drawCircle(CenterX, CenterY, Radius, Color)
  //==================================================
  display.drawCircle(12, 38, 10, SH110X_WHITE);
  //  Filled Circle
  // fillCircle(CenterX, CenterY, Radius, Color)
  //==================================================
  display.fillCircle(45, 38, 10, SH110X_WHITE);
  //  Outline Triangle
  // drawTriangle(x0,y0,x1,y1,x2,y2,Color)
  //==================================================
  display.drawTriangle(78, 28, 65, 48, 91, 48, SH110X_WHITE);
  // Filled Triangle
  // fillTriangle(x0,y0,x1,y1,x2,y2,Color)
  //==================================================
  display.fillTriangle(108, 28, 96, 48, 120, 48, SH110X_WHITE);
  //  Horizontal Line
  // drawFastHLine(StartX, StartY, Width, Color)
  //==================================================
  display.drawFastHLine(0, 60, 55, SH110X_WHITE);
  // drawFastVLine(StartX, StartY, Height, Color)
  //==================================================
  display.drawFastVLine(125, 30, 30, SH110X_WHITE);

  // Send graphics to OLED
  display.display();
}

void loop()
{
}
