//Dlecaração da constante que armazena o pino do push Button
#define pinoBuzzer 2
#define pinoButton 8

//leds / botões
#define pinoDo 3
#define pinoRe 4 

int ledVermelho1 = 12;
int ledVermelho2
int ledVermelho3 
int ledVermelho4
int ledVermelho5
int ledVermelho6
int ledVermelho7    


//Declaração da variável de estado do botão
bool status = false;

void setup() {
  //Definir a modalidade do pino
  pinMode(pinoButton, INPUT);

  Serial.begin(9600);

  delay(1000);  //parada estratégica
}

void loop() {
  //Lendo o pino digital através da constante
  Serial.println(digitalRead(pinoButton));
  digitalWrite(ledVermelho, HIGH)
  

  if (digitalRead(pinoButton) == 1 && status == false) {
    Serial.println("Botão apertado ON...");
    status = true;
  }


  else if (digitalRead(pinoButton) == 1 && status == true) {
    Serial.println("Botão apertado OFF...");
    status = false;
  }


  
  delay(1000);  //parada estratégica para leitura
}
