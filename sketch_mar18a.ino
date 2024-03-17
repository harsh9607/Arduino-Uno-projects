#include"DHT.h"
#define Type DHT11
int sensePin = 2 ; 
DHT HT(sensePin, Type); 
float humidity; // relative  
float tempC; 
float tempF;
int setTime = 3000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin(); 
  delay(setTime);

}

void loop() {
  // put your main code here, to run repeatedly:
   delay(setTime);

  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);
 

  Serial.print("Humidity: ");
    Serial.print(humidity); 
 
  Serial.print("  Temperature C:");
    Serial.print(tempC);

  Serial.print("  Temperature F:");
    Serial.print(tempF); 

    Serial.println(); 
}
