#include<Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SH110X.h>

Adafruit_SH1106G display(128,64,&Wire,-1);

void setup()
{
 Wire.begin();
 display.begin(0x3C,true);
 display.clearDisplay();
 display.setTextSize(1);
 display.setTextColor(SH110X_WHITE);
 display.setCursor(0,0);
 display.print("Hellow Dude *.*");
 display.setCursor(0,15);
 display.print("How are You ?");
 display.display();
}
void loop()
{

}
