int disparo = 12; //pin para recibir el disparo
int echo =11; //pin para recibir el pulso
int centimetros;
int durPulso;

void setup(){
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
