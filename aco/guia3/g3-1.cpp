int Rojo = 3;
int Verde = 5;
int Azul = 6;
int brillo = 0;

void setup() {
	pinMode(Rojo, OUTPUT);
	pinMode(Verde, OUTPUT);
	pinMode(Azul, OUTPUT);
}

void loop() {
	digitalWrite(Rojo, HIGH); //apaga rojo por ser anodo comum
	digitalWrite(Verde, HIGH); //off verde
	digitalWrite(Azul, HIGH); //off azul
	for(int i = 0; i<256; i+=5) {
		brillo = i;
		analogWrite(Rojo, 255 - brillo);
		delay(50); //max al min
	}
	digitalWrite(Rojo, HIGH);
	
	for(int i = 0; i<256; i+=5) {
		brillo = i;
		analogWrite(Verde, 255 - brillo);
		delay(50); //max al min
	}
	digitalWrite(Verde, HIGH);
	
	for(int i = 0; i<256; i+=5) {
		brillo = i;
		analogWrite(Azul, 255 - brillo);
		delay(50); //max al min
	}
	digitalWrite(Azul, HIGH);
	delay(10);
}