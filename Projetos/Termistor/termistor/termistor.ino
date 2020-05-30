#define pino_termistor A0
void setup(void) {
  Serial.begin(9600);
}
void loop(void) {
  float leitura;
  float leitura1;
  leitura = analogRead(pino_termistor);
  Serial.print("Leitura pino A0 = ");
  Serial.println(leitura);
  leitura1 = (leitura*0.2027)-82;
  Serial.print("Temperatura aprox. Celsius = ");
  Serial.println(leitura1);
  Serial.println("");
  delay(2500);
}
