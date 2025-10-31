// cria a classe LED
class LED
{
private:
    int pin;     // armazena o número do pino conectado ao LED
    bool state;  // guarda o estado atual do LED (true = ligado, false = desligado)

public:
    // constructor: recebe o pino e define o LED inicialmente para ele ficar desligado
    LED(int p) : pin(p), state(false) {}

    // configura o pino como saída e garante que o LED comece apagado
    void begin()
    {
        pinMode(pin, OUTPUT);
        digitalWrite(pin, LOW);
    }

    // Liga o LED (HIGH) e atualiza o estado interno
    void on()
    {
        state = true;
        digitalWrite(pin, HIGH);
    }

    // Desliga o LED (LOW) e atualiza o estado interno
    void off()
    {
        state = false;
        digitalWrite(pin, LOW);
    }

    // Inverte o estado atual (se estiver ligado, apaga; se estiver apagado, liga)
    void toggle()
    {
        state = !state;
        digitalWrite(pin, state ? HIGH : LOW);
    }

    // retorna o estado atual do LED (true = ligado, false = desligado)
    bool isOn() const { return state; }
};

// criação dos objetos LED (cada um ligado a um pino diferente do Arduino, no caso 2, 3 e 4)
LED led_vermelho(4);  // LED vermelho no pino 4
LED led_amarelo(3);   // LED amarelo no pino 3
LED led_verde(2);     // LED verde no pino 2

// agora criamos ponteiros que apontam para os endereços de memória desses objetos já existentes
LED *pVermelho = &led_vermelho;
LED *pAmarelo  = &led_amarelo;
LED *pVerde    = &led_verde;

// função de configuração (executada apenas uma vez ao iniciar o programa)
void setup()
{
    // inicializa cada LED chamando o método begin() através dos ponteiros
    pVermelho->begin();
    pAmarelo->begin();
    pVerde->begin();
}

// loop principal (repete pra sempre)
void loop()
{
    // liga o LED vermelho por 6 segundos e depois desliga
    pVermelho->on();
    delay(6000);
    pVermelho->off();

    // liga o LED amarelo por 2 segundos e depois desliga
    pAmarelo->on();
    delay(2000);
    pAmarelo->off();

    // Liga o LED verde por 4 segundos e depois desliga
    pVerde->on();
    delay(4000);
    pVerde->off();
}

// eu também poderia utilizar a função toggle para desligar e ligar os leds!
// o uso de classes permite o encapsulamento, que protege os detalhes internos do funcionamento do LED e evita que outras
// partes do código precisem saber como ele é controlado, ou seja, caso seja necessário mudar a forma de ligar o LED,
// basta alterar dentro da classe, sem precisar mexer de novo no resto do programa.
// a vantagem de usar ponteiros é que facilita a passagem de objetos para funções, ou seja, em vez de duplicar o objeto,
// a função apenas recebe o endereço dele, o que torna o código mais eficiente e evita cópias desnecessárias.

