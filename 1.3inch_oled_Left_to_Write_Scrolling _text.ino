#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

Adafruit_SH1106G display(128, 64, &Wire, -1);

String text = " Hello Surya How Are You i think you will be fine........ ";
int x = 128;   // start from right side

void setup()
{
  Wire.begin();

  display.begin(0x3C, true);

  display.setTextSize(2);
  display.setTextColor(SH110X_WHITE);
   display.setTextWrap(false);   // IMPORTANT
}

void loop()
{
  
  display.clearDisplay();

  display.setCursor(x, 20);
  display.print(text);

  display.display();

  x--;   // move left

  // text width calculation
  int textWidth = text.length() * 12;

  // reset when fully gone
  if (x < -textWidth)
  {
    x = 128;
  }

  delay(20);
}
