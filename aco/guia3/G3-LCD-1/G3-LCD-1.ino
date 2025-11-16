//Inicializando librerias

#include <phi_interfaces.h> //para control de teclados
#define btn_a 2 
#define btn_b 3
#define btn_c 4
#define total_buttons 3

char mapping[] = {'A', 'B', 'C'}; //nombres de cada btn
byte pins[] = {btn_a, btn_b, btn_c}; //pines conectados a cada btn
//phi_button_groups my_btns(mapping, pins, total_buttons);
phi_button_arrays my_btns(mapping, pins, total_buttons);

void setup() {
	Serial.begin(9600); //vel de transmision
}

void loop() {
	char temp; //var q almacena val del btn
	temp = my_btns.getKey(); 
	//obj phibutton para acceder al grupo de btns
	if (temp != NO_KEY) Serial.write("NIGGER\n"); 
	//envia el valo del btn al puerto serial
}
