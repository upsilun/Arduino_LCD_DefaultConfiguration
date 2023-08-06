<h1 align="center">
    Arduino <br> LCD <br> DefaultConfiguration
</h1>

<img src="https://cdn.discordapp.com/attachments/1117421198339473508/1137862627121451138/image.png" onerror="this.src='https://i.ibb.co/C7M5XcZ/image.png'" >

```c
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

```
