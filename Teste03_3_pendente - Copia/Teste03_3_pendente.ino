#define INPUT_PIN_1 A0
#define INPUT_PIN_2 A1
#define INPUT_PIN_3 A2
#define INPUT_PIN_4 A3
#define INPUT_PIN_5 A4

//Váriaveis das entradas analógicas sendo usadas

void setup() {
  Serial.begin(9600);
  pinMode(INPUT_PIN_1, INPUT);
  pinMode(INPUT_PIN_2, INPUT);
  pinMode(INPUT_PIN_3, INPUT);
  pinMode(INPUT_PIN_4, INPUT);
  pinMode(INPUT_PIN_5, INPUT);
 // váriaveis de input
  
}

void loop() {
  int result1 = readAnalogButton(INPUT_PIN_1);
  int result2 = readAnalogButton(INPUT_PIN_2);
  int result3 = readAnalogButton(INPUT_PIN_3);
  int result4 = readAnalogButton(INPUT_PIN_4);
  int result5 = readAnalogButton(INPUT_PIN_5);
  
  // lê as variaveis de input e printa como resualtado




  Serial.print("Result 1: ");
  Serial.println(result1);

  Serial.print("Result 2: ");
  Serial.println(result2);

  Serial.print("Result 3: ");
  Serial.println(result3);

  Serial.print("Result 4: ");
  Serial.println(result4);

  Serial.print("Result 5: ");
  Serial.println(result5);

  //imprime a informação no monitor serial

  delay(1000);

}

int readAnalogButton(int inputPin) {
  int button = analogRead(inputPin);
  if (button > 900) return 0;
  if (button < 600) return 1;
  if (button < 700) return 2;
  if (button < 800) return 3;
  if (button < 830) return 4;
  if (button < 860) return 5;
  if (button < 890) return 6;
}


