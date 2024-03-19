#include <LiquidCrystal.h>
#include"DHT.h"
#define Type DHT11
int sensePin = 7 ; 
DHT HT(sensePin, Type); 
float humidity; // relative  
float tempC; 
float tempF;
int setTime = 3000;


// Setup the LiquidCrystal library with the pin numbers we have
// physically connected the module to.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Setup the number of columns and rows that are available on the LCD.
  lcd.begin(16, 2);
   Serial.begin(9600);
   HT.begin(); 
  delay(setTime);
}

void loop() {

  // DHT11 Data absorption using sensor
   delay(setTime);

   humidity = HT.readHumidity();
   tempC = HT.readTemperature();
   tempF = HT.readTemperature(true);
 
   // For Serial Moniter 
    Serial.print("Humidity: ");
    Serial.print(humidity); 
 
    Serial.print("  Temperature C:");
    Serial.print(tempC);

    Serial.print("  Temperature F:");
    Serial.print(tempF); 

    Serial.println(); 

            
  lcd.clear();
  // setcursor (row,col)
  lcd.setCursor(0, 0);
  lcd.print("   Temperature  ");
  lcd.setCursor(0,1 ); 
  lcd.print("     ");
  lcd.print(tempC);
  lcd.print((char)223);
  lcd.print('C');
  delay(setTime);

  lcd.clear();
  
  lcd.setCursor(0, 0);
  lcd.print("    Humidity   ");
  lcd.setCursor(0,1 ); 
  lcd.print("     ");
  lcd.print(humidity);
  
}