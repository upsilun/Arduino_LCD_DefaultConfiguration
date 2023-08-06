#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(8, INPUT);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Yazeed");
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}
