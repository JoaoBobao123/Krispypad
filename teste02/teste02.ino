const int numButtons = 11;
const int analogPin = 0;

int buttonValues[numButtons] = {0}; // Array para armazenar o valor lido de cada botão
int buttonPins[numButtons] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array para armazenar os pinos dos diodos (e botões)

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < numButtons; i++) {
    pinMode(buttonPins[i], OUTPUT); // Define o pino do diodo como saída
    digitalWrite(buttonPins[i], LOW); // Desliga o diodo

    // Pequeno atraso para garantir que o diodo esteja desligado
    delayMicroseconds(10);

    pinMode(buttonPins[i], INPUT); // Define o pino do diodo como entrada
    delayMicroseconds(10); // Pequeno atraso antes de ler o valor

    buttonValues[i] = analogRead(analogPin); // Ler o valor analógico do diodo atual

    // Se o valor lido estiver abaixo de um limiar, o botão está pressionado
    if (buttonValues[i] < 100) {
      Serial.print("Botão ");
      Serial.print(i + 1);
      Serial.println(" pressionado!");
      delay(100); // Pequeno atraso para evitar leituras múltiplas acidentais
    }
  }
}

