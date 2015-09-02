#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x3F for a 20 chars and 4

void setup() {

  lcd.begin();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.println("Hello, world!");
    delay(1000);
  lcd.println("Hello  Arduino!");
    delay(1000);
  lcd.println("By Hassen!");
   delay(1000);
}

int i=0;
void loop() {
  lcd.println(i++);
  delay(1000);

}
