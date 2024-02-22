#include <LiquidCrystal.h>
int sensorValue;
const int rs = 13, en   = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void   setup(){  lcd.begin(16, 2);
Serial.begin(9600);                            //   sets the serial port to 9600
 }
void loop(){
sensorValue = analogRead(0);       //   read analog input pin 0

  Serial.print("Air Quality : ");
  Serial.print(sensorValue, DEC);  // Print the value read
  Serial.println(" PPM");

  lcd.clear();  // Clear the LCD screen
  lcd.setCursor(3, 0);  // Set cursor to the first column of the first row
  lcd.print("Air Quality");

  lcd.setCursor(1, 1);  // Set cursor to the first column of the second row
  lcd.print(sensorValue, DEC);
  lcd.print(" PPM");

  delay(1000);  // Wait for 1 second before the next reading
}
