#include <LiquidCrystal.h>

int counterInt = 0;
int prestate =0;

int currentState;
int lastState = LOW;
int buttonState;

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
