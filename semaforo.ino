void setup() {

  // conectei o led vermelho à porta 4, o led amarelo à porta 3 e o led verde à porta 2.
  #define LED_VERMELHO 4
  #define LED_AMARELO 3 
  #define LED_VERDE 2

  // definindo os leds como outputs
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);

}

void loop() {

  // é aqui que a lógica do semáforo ocorre.
  // o led vermelho começa o loop aceso
  digitalWrite(LED_VERMELHO, HIGH);
  // fica aceso por 6 segundos
  delay(6000);
  // depois desse tempo, o led vermelho se apaga e o led amarelo acende.
  digitalWrite(LED_VERMELHO, LOW); 
  digitalWrite(LED_AMARELO, HIGH);
  // fica aceso por 4 segundos
  delay(2000);
  // depois desse tempo, o led amarelo se apaga e o led verde se acende.
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  // fica aceso por 2 segundos, e depois o loop recomeça.
  delay(4000);
  digitalWrite(LED_VERDE, LOW);

}

