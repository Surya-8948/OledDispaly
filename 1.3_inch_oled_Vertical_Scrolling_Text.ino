
//================================================================ upword text scroll===================================================
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

Adafruit_SH1106G display(128, 64, &Wire, -1);

String text ="Hlo Everyone welcome to the World of Embedded System Enjoy the Thrill with codes , Circuits ,Hardwares Using Your Unique Skills ...";

int y = 64;

// OLED + Font Settings
const int SCREEN_WIDTH  = 128;
const int SCREEN_HEIGHT = 64;

const int TEXT_SIZE = 1;

const int CHAR_WIDTH  = 6 * TEXT_SIZE;
const int CHAR_HEIGHT = 8 * TEXT_SIZE;

void setup()
{
  Wire.begin();

  display.begin(0x3C, true);

  display.clearDisplay();

  display.setTextSize(TEXT_SIZE);
  display.setTextColor(SH110X_WHITE);
  display.setTextWrap(true);
}

void loop()
{
  display.clearDisplay();

  display.setCursor(0, y);

  display.print(text);

  display.display();

  y--;

  // =========================
  // AUTO TEXT HEIGHT DETECT
  // =========================

  int charsPerLine = SCREEN_WIDTH / CHAR_WIDTH;

  int totalLines = (text.length() + charsPerLine - 1)/ charsPerLine;

  int textHeight = totalLines * CHAR_HEIGHT;

  // =========================

  if (y < -textHeight)
  {
    y = SCREEN_HEIGHT;
  }

  delay(30);
}
