//Definição das consntantes: pinos de entregada
#define pinoBuzzer 2
#define pinoButton 8

//leds / botões
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa
#define pinoSo
#define pinoLa
#define pinoSi


byte doh, re, mi, fa, so, la, si = 0;


void setup() {
  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
 
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  //Leitura dos botões armazenada nas variáveis de controle
  doh = digitalRead(pinoDo);
  re = digitalRead(pinoRe);
  mi = digitalRead(pinoMi);
  fa = digitalRead(pinoFa);
  so = digitalRead(pinoSo);
  la = digitalRead(pinoLa);
  si = digitalRead(pinosi);

  //Verificando qual nota foi acionada
  if (doh == 1) {
    //Ativa a nota Do
    tone(pinoBuzzer, 523);
  } 
  else if (re == 1) {
    //Ativa a nota ré
    tone(pinoBuzzer, 587);
  } 
  else if (mi ==1) {
    //Ativa a nota Mi
    tone(pinoBuzzer, 659);
  }
  else if (fa == 1){
  //Ativa a nota fa
  tone(pinoBuzzer,698 );
}
else if (so == 1){
  //Ativa a nota so
  tone(pinoBuzzer,392 );
 } 
else if (la == 1){
  //Ativa a nota la
  tone(pinoBuzzer,440 );
}
else if (si == 1){
  //Ativa a nota si
  tone(pinoBuzzer,494 );

  else {
    //Desliga a buzzeer
    noTone(pinoBuzzer);
  }
  delay(50);  //tempo de execução da nota musical
}