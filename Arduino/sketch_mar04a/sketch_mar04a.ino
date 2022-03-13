#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

String array1="Thai Loc"; 
String array2="Xin Chao Cac Ban"; 
int i=25;
String ichuoi;
int tim = 500; 

LiquidCrystal_I2C lcd(0x27,16,2); 

void setup()
{
  lcd.init(); //initialize the lcd
  lcd.backlight(); //open the backlight 
}

void loop() 
{
  
  
  //lcd.setCursor(0,1); // set the cursor to column 15, line 1
  
  
  hienthichuoi(0,0,array1);
  hienthiso(14,0,i);
  hienthichuoi(0,1,array2);
  
 // lcd.clear(); //Clears the LCD screen and positions the cursor in the upper-left corner.
 
}

void hienthichuoi(int cot, int dong, String chuoi)
{
  lcd.setCursor(cot,dong);
  for(int j=0;j<chuoi.length();j++)
    {
      lcd.print(chuoi[j]);
    } 
}
void hienthiso(int cot, int dong, int so)
{
  String chuoi=String(so);
  lcd.setCursor(cot,dong);
  for(int j=0;j<chuoi.length();j++)
    {
      lcd.print(chuoi[j]);
    } 
}
