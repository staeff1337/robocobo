/*
 Name:		Aufgabe1.ino
 Created:	06.10.2017 16:34:19
 Author:	steff
*/
// the setup function runs once when you press reset or power the board


#include <LiquidCrystal.h>
#include <Adafruit_NeoPixel.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C\LiquidCrystal_I2C.h>

#define PIN 10
Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);
LiquidCrystal_I2C lcd(0x20, 20, 4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
	Serial.begin(9600);
	strip.begin(); // Initialize all pixels to 'off'
	lcd.init();
	lcd.backlight();
	lcd.clear();
	
}

// the loop function runs over and over again until power down or reset
void loop() {
	
	Serial.println("Hello");
		strip.setPixelColor(255, 0, 255, 255);
		strip.show();
		lcd.setCursor(4, 0);
		lcd.print("Hallo");
		lcd.setCursor(5, 1);
		lcd.print("Adi&Bruno!");
		delay(1000);
		strip.setPixelColor(0, 0);
		strip.show();
		lcd.clear();
		delay(1000);
	
	
}
