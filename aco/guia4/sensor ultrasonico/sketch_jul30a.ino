int disparo = 12;
int echo =11;
int centimetros;
int durPulso;

float tempC;
int reading;
int Rojo = 3;
int brillo = 100;
void setup(){
  pinMode(Rojo, OUTPUT);
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
    if(centimetros>10){
      digitalWrite(Rojo, HIGH);

    }
    Serial.println("cm");
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
