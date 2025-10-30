# Terceira ponderada - Semáforo com leds

## 1. Funcionamento do semáforo

Para realizar o semáforo, fiz um código simples que ajuda a piscar diferentes leds (vermelho, amarelo e verde), em loop, durante tempos diferentes. O led vermelho fica aceso por 6 segundos, depois se apaga e o amarelo acende. O amarelo fica aceso por 4 segundos, depois se apaga e o verde acende. O verde fica aceso por 2 segundos, depois se apaga e o vermelho acende. Isso ocorre em loop. Abaixo, segue uma foto do circuito montado.

<div align="center">
<sub>Figura 01: Imagem do circuito.</sub>
</div>
<div align="center">
<img src="assets/circuito.jpg">
</div>

<div align="center">
<sub>Fonte: a autora.</sub>
</div>

Para isso funcionar, após conectar o circuito no computador, abri o Arduino IDE e, depois de garantir que o Arduino Uno estava selecionado e a porta correta do computador estava conectada, pude rodar o código contido em `semaforo.ino`, presente após a imagem.

<div align="center">
<sub>Figura 02: Print do Arduino IDE.</sub>
</div>
<div align="center">
<img src="assets/arduinoIDE.png">
</div>

<div align="center">
<sub>Fonte: Arduino IDE.</sub>
</div>

```c++
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
  delay(4000);
  // depois desse tempo, o led amarelo se apaga e o led verde se acende.
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  // fica aceso por 2 segundos, e depois o loop recomeça.
  delay(2000);
  digitalWrite(LED_VERDE, LOW);

}
```

O código acima faz o semáforo funcionar.

## 2. Passo a passo das conexões

Aqui, detalho como eu realizei as conexões e o passo a passo da montagem do semáforo.

Coloquei, no semáforo, os seguintes componentes:

1. Protoboard - placa de prototipação de circuito.
2. Arduino Uno 
3. Jumpers preto, cinza, vermelho, verde e laranja
4. Led vermelho
5. Led amarelo
6. Led verde
7. 3 resistores de 330 ohms.
  
<div align="center">
<sub>Figura 03: Descrição dos componentes do semáforo.</sub>
</div>
<div align="center">
<img src="assets/componentes.png">
</div>

<div align="center">
<sub>Fonte: a autora.</sub>
</div>

As ligações realizadas foram as seguintes: 

- Com o primeiro fio preto, conectei o GND do arduíno à coluna negativa (-) da protoboard.

- Com os demais fios pretos, conectei o catodo de cada led à coluna negativa da protoboard.

- O anodo do led vermelho foi conectado a uma das pernas do resistor de 330 ohms.

- O anodo do led verde foi conectado a uma das pernas do resistor de 330 ohms.

- O anodo do led amarelo foi conectado a uma das pernas do resistor de 330 ohms.

- A outra perna do resistor do led vermelho foi conectado à porta 4 do Arduino.

- A outra perna do resistor do led amarelo foi conectado à porta 3 do Arduino.

- A outra perna do resistor do led verde foi conectado à porta 2 do Arduino.

<div align="center">
<sub>Figura 04: Circuito explicado.</sub>
</div>
<div align="center">
<img src="assets/conexões.png">
</div>

<div align="center">
<sub>Fonte: a autora.</sub>
</div>

Abaixo, segue a representação esquemática do circuito descrito acima.

<div align="center">
<sub>Figura 05: Esquemático de circuito do TinkerCad.</sub>
</div>
<div align="center">
<img src="assets/semaforo.png">
</div>

<div align="center">
<sub>Fonte: TinkerCad.</sub>
</div>

Com isso, o simulador roda mostrando o semáforo funcionando. A simulação completa pode ser observada em `semaforo.brd`.

Em `assets`, pode-se observar um vídeo do semáforo funcionando (`semaforo.mp4`).

