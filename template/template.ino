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
  result1 = (analogRead(INPUT_PIN_1));
  result2 = (analogRead(INPUT_PIN_2));
  result3 = (analogRead(INPUT_PIN_3));
  result4 = (analogRead(INPUT_PIN_4));
  result5 = (analogRead(INPUT_PIN_5));


  if (result1 < 513 && (result1 > 508)) {
  Serial.println("1-1");
  }
  else if (result1 > 514 && (result1 < 682)) {
  Serial.println("1-2");
  }
  else if (result1 > 683 && (result1 < 767)) {
  Serial.println("1-3");
  }
  else if (result1 > 767 && (result1 < 819)) {
  Serial.println("1-4");
  }
  else if (result1 > 820 && (result1 < 853)) {
  Serial.println("1-5");
  }
  else if (result1 > 854 && (result1 < 878)) {
  Serial.println("1-6");
  }
  else if (result1 > 879) {
  Serial.println("0");
  }  

  if (result2 < 513 && (result2 > 508)) {
  Serial.println("2-1");
  }
  else if (result2 > 514 && (result2 < 682)) {
  Serial.println("2-2");
  }
  else if (result2 > 683 && (result2 < 767)) {
  Serial.println("2-3");
  }
  else if (result2 > 767 && (result2 < 819)) {
  Serial.println("2-4");
  }
  else if (result2 > 820 && (result2 < 853)) {
  Serial.println("2-5");
  }
  else if (result2 > 854 && (result2 < 878)) {
  Serial.println("2-6");
  }
  else if (result2 > 879) {
  Serial.println("0");
  }

if (result3 < 513 && (result3 > 508)) {
  Serial.println("3-1");
  }
  else if (result3 > 514 && (result3 < 682)) {
  Serial.println("3-2");
  }
  else if (result3 > 683 && (result3 < 780)) {
  Serial.println("3-3");
  }
  else if (result3 > 790 && (result3 < 819)) {
  Serial.println("3-4");
  }
  else if (result3 > 820 && (result3 < 853)) {
  Serial.println("3-5");
  }
  else if (result3 > 854 && (result3 < 878)) {
  Serial.println("3-6");
  }
  else if (result3 > 879) {
  Serial.println("0");
  }  

if (result4 < 550 && (result4 > 508)) {
  Serial.println("4-1");
  }
  else if (result4 > 670 && (result4 < 700)) {
  Serial.println("4-2");
  }
  else if (result4 > 740 && (result4 < 796)) {
  Serial.println("4-3");
  }
  else if (result4 > 800 && (result4 < 835)) {
  Serial.println("4-4");
  }
  else if (result4 > 840 && (result4 < 860)) {
  Serial.println("4-5");
  }
  else if (result4 > 870 && (result4 < 900)) {
  Serial.println("4-6");
  }
  else if (result4 > 879) {
  Serial.println("0");
  }  

  if (result5 < 513 && (result5 > 508)) {
  Serial.println("5-1");
  }
  else if (result5 > 514 && (result5 < 682)) {
  Serial.println("5-2");
  }
  else if (result5 > 683 && (result5 < 767)) {
  Serial.println("5-3");
  }
  else if (result5 > 767 && (result5 < 830)) {
  Serial.println("5-4");
  }
  else if (result5 > 831 && (result5 < 853)) {
  Serial.println("5-5");
  }
  else if (result5 > 854 && (result5 < 878)) {
  Serial.println("5-6");
  }
  else if (result5 > 879) {
  Serial.println("0");
  }  
  //imprime a informação no monitor serial

  delay(1000);

}
int readAnalogButton(int inputPin) {
  int button = analogRead(inputPin);
}









