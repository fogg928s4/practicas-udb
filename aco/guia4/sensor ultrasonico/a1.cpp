int disparo = 12; //pin para recibir el disparo
int echo =11; //pin para recibir el pulso
int centimetros;
int durPulso;

int Rojo = 3;
int Verde = 5;
int brillo = 0;

void setup(){
	pinMode(Rojo, OUTPUT);
	pinMode(Verde, OUTPUT);
	
	pinMode(disparo, OUTPUT);
	pinMode(echo, INPUT);
	Serial.begin(9600);
}

void loop() {
	medircm();
	if(durPulso==0){
		Serial.println("fuera de rango");
	}
	else {
		//si son mas de 10 cm, es rojo
		if(centimetros > 10)
			digitalWrite(Rojo, HIGH);
		else //si son menos, es verde
			digitalWrite(Verde, HIGH);
		
		Serial.print(centimetros);
		Serial.println(" cm");
	}
	delay(500);
}

void medircm(){
	digitalWrite(disparo, HIGH);
	delayMicroseconds(10);
	digitalWrite(disparo,LOW);
	durPulso=pulseIn(echo,HIGH,5800);
	centimetros=durPulso/58;
}
