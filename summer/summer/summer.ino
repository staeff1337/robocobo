/*
 Name:		summer.ino
 Created:	02.10.2017 21:42:37
 Author:	steff
*/
#define BUZZER 10 //Anschlusspin des Summers
unsigned char i;  
// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(BUZZER, OUTPUT);  //PIn als Ausgang konfigurieren
}

// the loop function runs over and over again until power down or reset
void loop() {
	//Ausgabe eines hohen Tons
	for (i = 0; i < 100; i++)
	{
		digitalWrite(BUZZER, HIGH);
		delay(1);
		digitalWrite(BUZZER, LOW);
		delay(1);
	}
	for (i = 0; i < 20; i++)
	{
		digitalWrite(BUZZER, HIGH);
		delay(5);
		digitalWrite(BUZZER, LOW);
		delay(5);
	}
  
}
