#include <LiquidCrystal.h> 
int uur=0,minuut=0,tweede=0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//declare,name & initialize the library with the numbers of the interface pins
LiquidCrystal lcd1(13, 10, 9, 8, 7, 6);
void setup() {
  lcd.begin(16, 2);
  lcd1.begin(16, 2);
}
void loop() {
  
 tweede=tweede+1;
  if(tweede==60){
    minuut=minuut+1;
    tweede=0; //if tweede==60,it will return back to zero and minuut will become 1
  }
  
  if(minuut==60){
    minuut=0;
    uur=uur+1; //if minuut==60,it'll return back to zero and uur will be 1 
  }
   lcd1.print("FARIHAH");
  lcd1.setCursor(0,1);//text will show based on the position given,(x,y)
  lcd1.print("MAHADZIR");
  lcd.print("HOUR:");//'HOUR' can be seen on the LCD
  lcd.print(uur);
  lcd.setCursor(10,0);
  lcd.print("SEC:");//'SEC' can be seen on the LCD
  lcd.print(tweede);
  lcd.setCursor(0,1);
  lcd.print("MIN:");//'MIN' can be seen on the LCD
  lcd.print(minuut);
   delay(1000);//1000 milliseconds of delay between each loop
  lcd.clear();//clears the LCD screen and positions the cursor in the upper-left corner
 
}