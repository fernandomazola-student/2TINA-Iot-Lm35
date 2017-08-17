const int LM35 = A0;

void setup() {
  pinMode(LM35, INPUT);
  Serial.begin(9600);
}

void loop() {
  float valor = analogRead(LM35);
  Serial.println("Temperatura: ");
  Serial.println((valor * 5) / 1023 / 0.01);
  delay(1000);
}
