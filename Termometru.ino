#include <LiquidCrystal.h>
#include <dht.h>
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
dht DHT;

#define DHT11_PIN 3
void setup() {

  lcd.begin(16, 2);
  lcd.home();
  lcd.print("Calibrare");
  delay(3000);
  lcd.clear();
}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
  float t = DHT.temperature;
  float h = DHT.humidity;
  lcd.home();
  lcd.print("Temp= ");
  lcd.print(t);
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("Humid= ");
  lcd.print(h);
  lcd.print(" %");
  delay(2000);
}
