#include <LiquidCrystal.h>



//#include <LiquidCrystal.h>
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

/*configuracion de LCD 
RS enable RW D4 D5 D6 D7 VSS VDD Vo
8 9 gND 4 5 6 7 Gnd Vcc Pot */

int BacklitPin = 10;
LiquidCrystal lcd(8,9,4,5,6,7);
int conteo = 0;

void setup() {
	pinMode(BacklitPin, OUTPUT);
	digitalWrite(BacklitPin, HIGH);
	lcd.begin(16,2);
	lcd.setCursor(3,0); //col 3, fila 0
	lcd.print("BIENVENiDO");
	lcd.setCursor(4,1);
	lcd.print("ACO-UDB");
	delay(2500);
	lcd.clear();
}

void loop() {
	char temp; temp = panel_keypad.getKey();
	if(temp == '4') 
		digitalWrite(BacklitPin, HIGH);
	if (temp == '5')
		digitalWrite(BacklitPin, HIGH);
	if(temp == '3') { 
    conteo++;
    lcd.clear();

    if(conteo < 26){
      lcd.setCursor(0,0);
      lcd.print(conteo);
    }
    else {
      if(conteo==26){
        lcd.clear();
        lcd.setCursor(6,1);
        lcd.print(conteo);
        delay(15);
      }
      else{
        lcd.setCursor(6,1);
        lcd.print(conteo);
      }
      if (conteo>=51){
        lcd.clear();
        lcd.setCursor(4,0);
        lcd.print("Adiooosh :3");
        delay(15);
        conteo=0;
      }
    }
  }
}
















