#define BUZZER 16

	void setup()
 {
		    pinMode(BUZZER, OUTPUT);//set the pin to output 
		    Serial.begin(9600);//Baud rate：9600
	
}

	int i = analogRead(5);	//read from analog pin 5

	Serial.println(i);	//print the value of “i” through the serial port

	if (i<400)	//if the light is on the left
	{
		for (i = 0; i<80; i++)	//buzzer rings at an exact frequent
	{
		 	digitalWrite(BUZZER,HIGH);//Pin 16 output a high voltage
			delay(1);	// delay 1ms
	 		digitalWrite(BUZZER,LOW);//Pin 16 output a low voltage
	 		delay(1);	//delay 1ms
 }
 }
	
	for (i = 0; i<80; i++)	//Buzzer rings at an exact frequent
	{
		 	digitalWrite(BUZZER,HIGH);
	delay(3);	// delay 3ms
	 	digitalWrite(BUZZER,LOW);
	 	delay(3);	//delay 3ms
 }