#define green 12
#define red 14
#define blue 13

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  Serial.println("LED VERMELHO LIGADO");
  delay(1000);
  Serial.println("LED VERMELHO DESLIGADO");
  digitalWrite(red, LOW);
  delay(1000);
  Serial.println("LED VERDE LIGADO");
  digitalWrite(green, HIGH);
  delay(1000);
  Serial.println("LED VERDE DESLIGADO");
  digitalWrite(green, LOW);
  delay(1000);
  Serial.println("LED AZUL LIGADO");
  digitalWrite(blue, HIGH);
  delay(1000);
  Serial.println("LED AZUL DESLIGADO");
  digitalWrite(blue, LOW);
  delay(1000);
  Serial.println("LEDS VERMELHO+VERDE LIGADOS");
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  delay(1000);
  Serial.println("LEDS VERMELHO+VERDE DESLIGADOS");
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(1000);
  Serial.println("LEDS VERMELHO+AZUL LIGADOS");
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
  Serial.println("LEDS VERMELHO+AZUL DESLIGADOS");
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  delay(1000);
  Serial.println("LEDS VERDE+AZUL LIGADOS");
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
  Serial.println("LEDS VERDE+AZUL DESLIGADOS");
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(1000);
}
