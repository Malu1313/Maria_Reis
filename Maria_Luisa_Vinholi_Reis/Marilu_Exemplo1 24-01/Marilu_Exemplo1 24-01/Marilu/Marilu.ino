//Declaração

void setup() {
  // Configuração inicial do sistema
  // Será excutada apenas no início

  N1 = 1;
  N2 = 2;
  N3 = 3;
  S = 0;

  // Processamento das entradas
  S = N1 + N2 + N3;
}

void loop() {
  // Código que será executado repetidamente
  Serial.prints("Hoje é o último dia do mês de janeiro!!!");//Mostra a frase no monitor
  delay(1000); //espera 1 segundo antes de seguir o loop

}
