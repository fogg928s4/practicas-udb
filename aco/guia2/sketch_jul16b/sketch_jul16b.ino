int entries[] = {9,10,11,12};
int time = 1000, sum;
void setup() {
  for(int i = 9; i < 13; i++) {
    pinMode(i, INPUT);
  }
  Serial.begin(9600);

}

void loop() {
  Serial.print(digitalRead(entries[0]));
  Serial.print(digitalRead(entries[1]));
  Serial.print(digitalRead(entries[2]));
  Serial.print(digitalRead(entries[3]));
  //envia un final de linea
  /*
  digitalRead(entries[3]) ? sum +=1 : sum += 0; 
  digitalRead(entries[2]) ? sum +=2 : sum += 0;
  digitalRead(entries[1]) ? sum +=4 : sum += 0;
  digitalRead(entries[0]) ? sum +=8 : sum += 0;
   Serial.print(sum);  //retard breve
  */
  Serial.print("\n");
 
  delay(time);
}
