#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X24,16,2); //SCL A5 SDA A4
int num=0;
void setup()
{
  lcd.init();                    
  lcd.backlight(); 
  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  lcd.print("ARDUINO");
}
