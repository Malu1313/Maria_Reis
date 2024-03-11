//constante para o pino da buzzer
#define pinoBuzzer 2

#define pinoLedVermelho 3

#define pinoButton 8

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoButton, INPUT);
}

void loop() {
  if (digitalRead(pinoButton) == 1) {
    tone(pinoBuzzer, 523);  //Nota musical dó
    digitalWrite(pinoLedVermelho, HIGH);
  }

  else if (digitalRead(pinoButton) == 0) {
    noTone(pinoBuzzer);                  //desliga o buzzer
    digitalWrite(pinoLedVermelho, LOW);  //apaga o LED
  }
}