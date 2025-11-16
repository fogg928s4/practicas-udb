#include <LiquidCrystal.h>
#include <phi_interfaces.h>

#define buttons_col 5 //pin analogo tiene 5 btns con resistencias
#define buttons_row 1 //pin analogico

byte keypad_type = Analog_keypad;
char mapping[] = {'1','2','3','4','5'};	//teclado analogico
byte pins[] = {0}; 	//num de pin son entrada analogica
int values[] = {0,99,257,410,640};	//incremento monotono

//Estos valores son los que se miden ne la entrada analogica al press

phi_analog_keypads panel_keypad(mapping, pins, values, buttons_row, buttons_col);

multiple_button_input* pad1 = &panel_keypad;

LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
	lcd.begin(16,2);
	lcd.setCursor(0,0);
	lcd.print("Salimos?");
}

void loop() {
	lcd.setCursor(9,1);
	lcd.print(millis()/1000); //segundos dese encendido
	lcd.setCursor(0,1);
	byte temp = panel_keypad.getKey();

	if(temp != NO_KEY) {
		switch(temp) {
			case '1': lcd.print("SI     "); break;
			case '2': lcd.print("OF CORS     "); break;
			case '3': lcd.print("CLARO      "); break;
			case '4': lcd.print("YEEE    "); break;
			case '5': lcd.print(":3      "); break;

		}
	}
	delay(10);
}
