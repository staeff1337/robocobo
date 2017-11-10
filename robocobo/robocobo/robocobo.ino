/*
 Name:		robocobo.ino
 Created:	29.09.2017 17:09:25
 Author:	steff
*/
#include <LiquidCrystal.h>
#include <Adafruit_NeoPixel.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C\LiquidCrystal_I2C.h>

#define PIN 10
Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);
LiquidCrystal_I2C lcd(0x20, 20, 4);  // set the LCD address to 0x27 for a 16 chars and 2 line display miniQ LCD Adresse is 0x20
int analogPin = 6;
int val = 0;
int Anmeldung = 0;

void setup() {
	Serial.begin(9600);
	strip.begin(); // Initialize all pixels to 'off'
	lcd.init();
	lcd.backlight();
	lcd.clear();

	lcd.setCursor(0, 0);
	lcd.print("Prg1 Taste 1");
	lcd.setCursor(0, 1);
	lcd.print("Prg 1 Taste 2");
	ledcolor("red");

}
// the loop function runs over and over again until power down or reset
void loop() {
 //hello world #comment style 
}




//set color of the LED 

void ledcolor(String color) {
	if (color == "red")
	{
		strip.setPixelColor(0, 255, 0, 0); //RED
		strip.show();
		return;
	}
	if (color == "green") {

		strip.setPixelColor(0, 0, 255, 0);  //GREEN
		strip.show();
		return;
	}
	if (color == "yellow") {
		strip.setPixelColor(0, 255, 255, 0);  //YELLOW
		strip.show();
		return;
	}
	else {
		return;
	}
}