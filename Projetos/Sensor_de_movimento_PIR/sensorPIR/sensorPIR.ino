#define blue 4
#define green 0
#define red 2
#define sensorPIR 5
int mov;
void setup() {
  // put your setup code here, to run once:
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(sensorPIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  mov = digitalRead(sensorPIR);
  Serial.println(mov);
  if(mov == 1){
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
  }else{
    digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
  }

  delay(2000);
  

}
