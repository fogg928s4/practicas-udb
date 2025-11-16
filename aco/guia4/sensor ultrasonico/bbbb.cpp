//sketch con libreria NewPing

#include <NewPing.h>
#define PIN_DISPARO 12//pin concectado al pin trig del sensor
#define PIN_ECO 11 //pin concectado al pin eco del sensor
#define DISTANCIA_MAX 200 

NewPing sonar(PIN_DISPARO, PIN_DISPARO, DISTANCIA_MAX);

void setup() {
	Serial.begin(9600);
}

void loop() {
	delay(500); //espera 500 ms entre pings
	//29 ms deberia ser el mas corto delay
	unsigned int uS = sonar.ping();
	//envia el ping y obtiene el tiempo en ms
	Serial.print("Ping: ");
	Serial.print(uS / US_ROUNTRIP_CM);
	Serial.println(" cm");
	
}
	
	