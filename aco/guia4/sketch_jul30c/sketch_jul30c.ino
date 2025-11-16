int Rojo = 3, brilloR = 0;
int Verde = 5, brilloG = 0;
int Azul = 6, brilloB = 0;

int entero=0;

void setup() {
	pinMode(Rojo, OUTPUT); //Configurar pines como salida 
	pinMode(Verde, OUTPUT); 
	//Los pines deben ser PWM (~) 
	pinMode(Azul, OUTPUT);
	
	Serial.begin(9600);
	digitalWrite(Rojo,HIGH); //Se apaga LED Rojo por ser Ánodo Común 
	digitalWrite(Verde, HIGH);//Se apaga LED Verde 
	digitalWrite(Azul,HIGH); //Se apaga LED Azul
}

void loop() {
	// put your main code here, to run repeatedly:
	rRGB(); //Llamada a función rRGB()
	analogWrite(Rojo,255-brilloR); //Escribe nivel de brillo en LED
	analogWrite(Verde,255-brilloG);
	analogWrite(Azul,255-brilloB);
	delay(250);
}
void rRGB(){
	/*rRGB es una función para introducir los niveles de brillo
	desde el monitor serial*/
	Serial.println(""); //línea en blanco
	Serial.print("Escriba el nivel de rojo: ");//mensaje
	while(Serial.available()==0){} //Pausa esperando dato brilloR
	brilloR=Serial.parseInt(); //El dato ascii recibido se convierte 
	Serial.print(brilloR); //a entero
	
	Serial.println("");
	Serial.print("Escriba el nivel de verde: "); 
	while(Serial.available()==0){} //Pausa esperando dato brilloG
	brilloG=Serial.parseInt();
	Serial.print(brilloG);
	
	Serial.println("");
	Serial.print("Escriba el nivel de azul: ");
	while(Serial.available()==0){} //Pausa esperando dato brilloB
	brilloB-Serial.parseInt();
	Serial.println(brilloB);
}