void setup() {
// put your setup code here, to run once:
  for(int i=2; i<6; i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
    
  if(Serial.available()>0){
    switch(Serial.read()){
      case'1':digitalWrite(2,HIGH); 
        break;
      case'2':digitalWrite(2,LOW); 
        break;
      case'3':digitalWrite(3,HIGH); 
        break;
      case'4':digitalWrite(3,LOW); 
        break;
      case'5':digitalWrite(4,HIGH); 
        break;
      case'6':digitalWrite(4,LOW); 
        break;
      case'7':digitalWrite(5,HIGH); 
        break;
      case'8':digitalWrite(5,LOW); 
        break;
      default:Serial.write("Esta opcion no esta disponible");
    }
  }
}