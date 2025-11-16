int Rojo = 3, brilloR = 0;
int Verde = 5, brilloG = 0;
int Azul = 6, brilloB = 0;

int entero = 0, ascii = 0;

void setup() {
	pinMode(Rojo, OUTPUT);
	pinMode(Verde, OUTPUT);
	pinMode(Azul, OUTPUT);
}

void loop() {
	digitalWrite(Rojo, HIGH); //apaga rojo por ser anodo comum
	digitalWrite(Verde, HIGH); //off verde
	digitalWrite(Azul, HIGH); //off azul
	
	brilloR = random(255);
	brilloG = random(255);
	brilloB = random(255);
	
	analogWrite(Rojo, 255-brilloR);
	analogWrite(Verde, 255-brilloG);
	analogWrite(aAzul, 255-brilloB);
	delay(2000);
}
