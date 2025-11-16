void setup() {
// put your setup code here, to run once:
for(int i=2; i<6; i++){
pinMode(i,INPUT);
}
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
for(int i=2; i<6; i++){
Serial.print(digitalRead(i));
}
Serial.print("\n");
delay(1000);
}