//TECLADO MATRICIAAAL

#include <phi_interfaces.h> //librer[ia ctrl de teclados
#define btns_column 4 
#define btns_row 4

//lista con nombres de cada btn
char mapping[] = 
	{'1','2','3','A','4','5','6','B', '7','8','9','C','*','0','#', 'D'};
byte pins[] = {2,3,4,5,6,7,8,9}; //pines de fila x pines de col
phi_matrix_keypads panel_keypad(mapping, pins, btns_row, btns_column);

void setup() {
	Serial.begin(9600);
}

void loop() {
	char temp; //valor del boton
	temp = panel_keypad.getKey(); //acceder al teclado
	if(temp != NO_KEY) Serial.write(temp);
}
