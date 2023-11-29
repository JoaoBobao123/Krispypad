#define INPUT_PIN_1 A0
#define INPUT_PIN_2 A1
#define INPUT_PIN_3 A2
#define INPUT_PIN_4 A3
#define INPUT_PIN_5 A4
#define INPUT_PIN_6 A5

//Váriaveis das entradas analógicas sendo usadas

void setup() {
  pinMode(INPUT_PIN_1, INPUT);
  pinMode(INPUT_PIN_2, INPUT);
  pinMode(INPUT_PIN_3, INPUT);
  pinMode(INPUT_PIN_4, INPUT);
  pinMode(INPUT_PIN_5, INPUT);
  pinMode(INPUT_PIN_6, INPUT);
 // váriaveis de input
  Serial.begin(9600);
}

void loop() {
  int result1 = readAnalogButton(INPUT_PIN_1);
  int result2 = readAnalogButton(INPUT_PIN_2);
  int result3 = readAnalogButton(INPUT_PIN_3);
  int result4 = readAnalogButton(INPUT_PIN_4);
  int result5 = readAnalogButton(INPUT_PIN_5);
  int result6 = readAnalogButton(INPUT_PIN_6);
  
  
  // lê as variaveis de input e printa como resualtado
  result1 = (analogRead(INPUT_PIN_1));
  result2 = (analogRead(INPUT_PIN_2));
  result3 = (analogRead(INPUT_PIN_3));
  result4 = (analogRead(INPUT_PIN_4));
  result5 = (analogRead(INPUT_PIN_5));
  result6 = (analogRead(INPUT_PIN_6));


 if (result2 > 500 && (result2 < 513)) {
  Serial.println("1-1");
  }
  else if (result2 > 514 && (result2 < 682)) {
  Serial.println("1-2");
  }
  else if (result2 > 683 && (result2 < 767)) {
  Serial.println("1-3");
  }
  else if (result2 > 767 && (result2 < 819)) {
  Serial.println("1-4");
  }
  else if (result2 > 820 && (result2 < 853)) {
  Serial.println("1-5");
  }
  else if (result2 > 854 && (result2 < 878)) {
  Serial.println("1-6");
  }


  if (result3 > 500 && (result3 < 513)) {
  Serial.println("2-1");
  }
  else if (result3 > 514 && (result3 < 682)) {
  Serial.println("2-2");
  }
  else if (result3 > 683 && (result3 < 767)) {
  Serial.println("2-3");
  }
  else if (result3 > 767 && (result3 < 819)) {
  Serial.println("2-4");
  }
  else if (result3 > 820 && (result3 < 853)) {
  Serial.println("2-5");
  }
  else if (result3 > 854 && (result3 < 878)) {
  Serial.println("2-6");
  }
  else if (result3 > 879) {
  Serial.println("0");
  }

if (result4 > 508 && (result4 < 513)) {
  Serial.println("3-1");
  }
  else if (result4 > 514 && (result4 < 682)) {
  Serial.println("3-2");
  }
  else if (result4 > 683 && (result4 < 780)) {
  Serial.println("3-3");
  }
  else if (result4 > 790 && (result4 < 819)) {
  Serial.println("3-4");
  }
  else if (result4 > 820 && (result4 < 853)) {
  Serial.println("3-5");
  }
  else if (result4 > 854 && (result4 < 878)) {
  Serial.println("3-6");
  }
  else if (result4 > 879) {
  Serial.println("0");
  }  

if (result5 > 508 && (result5 < 513)) {
  Serial.println("4-1");
  }
  else if (result5 > 670 && (result5 < 700)) {
  Serial.println("4-2");
  }
  else if (result5 > 740 && (result5 < 796)) {
  Serial.println("4-3");
  }
  else if (result5 > 800 && (result5 < 835)) {
  Serial.println("4-4");
  }
  else if (result5 > 840 && (result5 < 860)) {
  Serial.println("4-5");
  }
  else if (result5 > 870 && (result5 < 900)) {
  Serial.println("4-6");
  }
  else if (result5 > 879) {
  Serial.println("0");
  }  

  if (result6 > 508 && (result6 < 513)) {
  Serial.println("5-1");
  }
  else if (result6 > 514 && (result6 < 682)) {
  Serial.println("5-2");
  }
  else if (result6 > 683 && (result6 < 767)) {
  Serial.println("5-3");
  }
  else if (result6 > 767 && (result6 < 830)) {
  Serial.println("5-4");
  }
  else if (result6 > 831 && (result6 < 853)) {
  Serial.println("5-5");
  }
  else if (result6 > 854 && (result6 < 878)) {
  Serial.println("5-6");
  }
  else if (result6 > 879) {
  Serial.println("0");
  }  
  //imprime a informação no monitor serial

  delay(1000);

}
int readAnalogButton(int inputPin) {
  int button = analogRead(inputPin);
}









