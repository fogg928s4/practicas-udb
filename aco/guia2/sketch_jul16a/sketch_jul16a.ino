int salidas[] = {2,3,4,5};
int delayT = 1000;
void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<5; i++){
    pinMode(salidas[i], OUTPUT);    
  }
  //Inicializa serial port
  Serial.begin(9600); //defecto 9600 vtu
  //el ultimo conector es positivo
}

void loop() {
 //A ver si recibido datos
  if(Serial.available() > 0) {
    switch(Serial.read()) {
      case '1': digitalWrite(2, HIGH); 
        break;
      case '2': digitalWrite(2, LOW);
        break;
      case '3': digitalWrite(3, HIGH); 
        break;
      case '4': digitalWrite(3, LOW);
        break;
      case '5': digitalWrite(4, HIGH); 
        break;
      case '6': digitalWrite(4, LOW);
        break;
      case '7': digitalWrite(5, HIGH); 
        break;
      case '8': digitalWrite(5, LOW);
        break;
      case '9': 
        digitalWrite(2, HIGH);
        delay(delayT);
        digitalWrite(3, HIGH); 
        delay(delayT);
        digitalWrite(4, HIGH); 
        delay(delayT);
        digitalWrite(5, HIGH);
        delay(delayT);
        digitalWrite(5, LOW);
        delay(delayT);
        digitalWrite(4, LOW); 
        delay(delayT);
        digitalWrite(3, LOW); 
        delay(delayT);
        digitalWrite(2, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW); 
        digitalWrite(4, LOW); 
        digitalWrite(5, LOW);
        delay(delayT/2);


      break;
      case '0': 
        digitalWrite(2, LOW);
        digitalWrite(3, LOW); 
        digitalWrite(4, LOW); 
        digitalWrite(5, LOW);
      break;

    }
  }
}
/*
int cases[] = {1,2,3,4,5,6,7,8}
for(int i = 0; i < 9; i++) {
  if(Serial.Read() == cases[i]) {

  }
}
.      /*default: 
        for(int j = 0; i < 5; i++) {
          digitalWrite(exits[i], HIGH);
        }
        break;
*/



