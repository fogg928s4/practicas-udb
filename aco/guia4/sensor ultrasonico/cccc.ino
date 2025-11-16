float tempC;
int reading;
int tempPin = 0;

int Rojo = 3;
int Verde = 5;
int Azul = 6;

void setup() {
	pinMode(Rojo, OUTPUT);
	pinMode(Verde, OUTPUT);
	pinMode(Azul, OUTPUT);
	analogReference(INTERNAL);
	Serial.begin(9600);
}

void loop() {
	reading = analogRead(tempPin);
	tempC = reading/ 9.31;
	determinarRango(tempC);
	Serial.println(tempC);
	delay(1000);
}
void determinarRango(float T) {
	if (T > 32.0f) { //rojo
		analogWrite(Rojo, 0);
		analogWrite(Verde, 255);
		analogWrite(Azul, 255);
	}
	else if(T > 25.0f) { //narange
		analogWrite(Rojo, 0);
		analogWrite(Verde, 90);
		analogWrite(Azul, 255);
	}
	else { //verde
		analogWrite(Rojo, 117);
		analogWrite(Verde, 49);
		analogWrite(Azul, 255);
	}
}